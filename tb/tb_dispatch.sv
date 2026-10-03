`timescale 1ns / 1ns
import CORE_PKG::*;

/*
    Assertion Testbench for Dispatch
*/
module tb_dispatch;
    `include "tb_test_select.svh"
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

    localparam ROB_IDX_W = $clog2(ROB_ENTRIES);
    localparam IQ_DEPTH  = 16;      // instruction_queue default DEPTH
    localparam AGU_PIPE  = 3;       // FU_TYPE = {ALU, ALU, ALU, AGU}

    logic clk;
    logic rst;
    integer cycle_count = 0;

    // Test tracking
    integer pass_count = 0;
    integer fail_count = 0;

    logic stall;
    logic flush;

    // Array inputs are driven from packed TB registers through continuous assigns:
    // with Verilator 5.020, DUT comb logic is not re-evaluated when a timed TB task
    // writes an unpacked-array port element directly. Always write these packed
    // registers as whole vectors (no variable-index writes) for the same reason.
    logic [RENAME_WIDTH-1:0]            rename_vld;
    rename_packet_t [RENAME_WIDTH-1:0]  rename_pkt;
    logic [NUM_FUS-1:0]                 rs_full;
    logic [FIRE_WIDTH-1:0]              rob_full;
    logic [FIRE_WIDTH-1:0][ROB_IDX_W-1:0] rob_entry_idx;

    logic                               rename_vld_w     [RENAME_WIDTH];
    rename_packet_t                     rename_pkt_w     [RENAME_WIDTH];
    logic                               rs_full_w        [NUM_FUS];
    logic [$clog2(NUM_FUS)-1:0]         rs_entry_idx_w   [NUM_FUS];
    logic                               rob_full_w       [FIRE_WIDTH];
    logic [ROB_IDX_W-1:0]               rob_entry_idx_w  [FIRE_WIDTH];

    for (genvar g = 0; g < RENAME_WIDTH; g++) begin : g_rename_drv
        assign rename_vld_w[g] = rename_vld[g];
        assign rename_pkt_w[g] = rename_pkt[g];
    end
    for (genvar g = 0; g < NUM_FUS; g++) begin : g_rs_drv
        assign rs_full_w[g] = rs_full[g];
        assign rs_entry_idx_w[g] = '0;
    end
    for (genvar g = 0; g < FIRE_WIDTH; g++) begin : g_rob_drv
        assign rob_full_w[g] = rob_full[g];
        assign rob_entry_idx_w[g] = rob_entry_idx[g];
    end

    logic instr_queue_full [RENAME_WIDTH];
    logic [$clog2(LDQ_ENTRIES)-1:0] disp_ldq_idx;
    logic [$clog2(SDQ_ENTRIES)-1:0] disp_sdq_idx;
    logic ldq_full;
    logic sdq_full;
    logic disp_vld;
    logic disp_is_store;
    logic [$clog2(SDQ_ENTRIES):0] disp_sdq_marker;

    disp_packet_t disp_pkt [NUM_FUS];
    logic disp_valid [NUM_FUS];
    logic [(RS_ENTRIES * NUM_FUS)-1:0] dependency_mask [NUM_FUS];

    // Reorder Buffer
    logic rob_fire_valid [FIRE_WIDTH];
    logic [4:0] rob_dst_reg [FIRE_WIDTH];
    logic rob_wb_en [FIRE_WIDTH];
    logic [$clog2(LDQ_ENTRIES)-1:0] rob_ldq_idx [FIRE_WIDTH];
    logic [$clog2(SDQ_ENTRIES)-1:0] rob_sdq_idx [FIRE_WIDTH];

    dispatch dut (
        .clk_i(clk),
        .rst_i(rst),
        .stall_i(stall),
        .flush_i(flush),
        .rename_vld_i(rename_vld_w),
        .rename_pkt_i(rename_pkt_w),
        .instr_queue_full_o(instr_queue_full),
        .disp_pkt_o(disp_pkt),
        .disp_valid_o(disp_valid),
        .dependency_mask_o(dependency_mask),
        .rs_entry_idx_i(rs_entry_idx_w),
        .rs_full_i(rs_full_w),
        .rob_fire_valid_o(rob_fire_valid),
        .rob_dst_reg_o(rob_dst_reg),
        .rob_wb_en_o(rob_wb_en),
        .rob_entry_idx_i(rob_entry_idx_w),
        .rob_full_i(rob_full_w),
        .rob_ldq_idx_o(rob_ldq_idx),
        .rob_sdq_idx_o(rob_sdq_idx),
        .disp_ldq_idx_i(disp_ldq_idx),
        .disp_sdq_idx_i(disp_sdq_idx),
        .ldq_full_i(ldq_full),
        .sdq_full_i(sdq_full),
        .disp_vld_o(disp_vld),
        .disp_is_store_o(disp_is_store),
        .disp_sdq_marker_o(disp_sdq_marker)
    );

    // Clock generation
    initial begin
        forever begin
            #(CLK_PERIOD*DUTY_CYCLE) clk = 1'b1;
            cycle_count = cycle_count + 1;
            #(CLK_PERIOD*DUTY_CYCLE) clk = 1'b0;
        end
    end

    // Waveform dump
    initial begin
        $dumpfile(`DUMPFILE);
        $dumpvars(0, tb_dispatch);
    end

    // ===== Fire Monitor ===== //
    // Records every instruction handed to the ROB (sampled before the posedge that consumes it)

    typedef struct {
        logic [4:0] dst_areg;
        int         cycle;
        int         slot;
    } fire_t;

    fire_t fire_q [$];

    initial begin : fire_monitor
        forever begin
            @(negedge clk);
            #(CLK_PERIOD / 4);
            if (!rst && !flush) begin
                for (int s = 0; s < FIRE_WIDTH; s++) begin
                    if (rob_fire_valid[s]) begin
                        automatic fire_t f;
                        f.dst_areg = rob_dst_reg[s];
                        f.cycle = cycle_count;
                        f.slot = s;
                        fire_q.push_back(f);
                    end
                end
            end
        end
    end

    // ===== Helper Methods ===== //

    //Initialize signals
    task init_signals();
        begin
            clk = 0;
            rst = 1;
            clear_inputs();
        end
    endtask

    task clear_inputs();
        begin
            stall = 0;
            flush = 0;
            rename_vld = '0;
            rename_pkt = '0;
            rs_full = '0;
            rob_full = '0;
            rob_entry_idx = {4'd9, 4'd8};   // slot 0 -> ROB 8, slot 1 -> ROB 9
            disp_ldq_idx = 4'd5;
            disp_sdq_idx = 4'd6;
            ldq_full = 0;
            sdq_full = 0;
        end
    endtask

    //Check assertion and update counters
    task check_assertion(input string test_name, input logic condition);
        begin
            if (condition) begin
                $display("  [\033[32mPASS\033[0m] %s", test_name);
                pass_count = pass_count + 1;
            end else begin
                $display("  [\033[31mFAIL\033[0m] %s", test_name);
                fail_count = fail_count + 1;
            end
        end
    endtask

    //Reset sequence
    task reset_dut();
        begin
            $display("\n[RESET] Resetting DUT");
            @(negedge clk);
            clear_inputs();
            rst = 1;
            @(negedge clk);
            @(negedge clk);
            rst = 0;
            @(negedge clk);
            fire_q.delete();
            $display("[RESET] Reset complete\n");
        end
    endtask

    function automatic rename_packet_t mk_pkt(
        input instr_opcode  op,
        input fu_type_e     fu,
        input logic [4:0]   dst_areg,
        input logic [5:0]   dst_preg,
        input logic         s1_vld = 0, input logic [5:0] s1 = 0,
        input logic         s2_vld = 0, input logic [5:0] s2 = 0
    );
        rename_packet_t p;
        p = '0;
        p.opcode      = op;
        p.required_fu = fu;
        p.dst_areg    = dst_areg;
        p.dst_preg    = dst_preg;
        p.src1_vld    = s1_vld;
        p.src1_preg   = s1;
        p.src2_vld    = s2_vld;
        p.src2_preg   = s2;
        p.imm_val     = 32'h1000 + dst_preg;
        p.pc          = 32'h8000_0000 + {dst_preg, 2'b00};
        p.instr_valid = 1'b1;
        p.alu_en      = (fu == FU_ALU);
        p.wb_en       = 1'b1;
        return p;
    endfunction

    function automatic rename_packet_t alu(input logic [4:0] areg, input logic [5:0] preg,
                                           input logic s1_vld = 0, input logic [5:0] s1 = 0,
                                           input logic s2_vld = 0, input logic [5:0] s2 = 0);
        return mk_pkt(ADD, FU_ALU, areg, preg, s1_vld, s1, s2_vld, s2);
    endfunction

    // Push one or two instructions from rename (starts and ends on a negedge).
    // After it returns, the instructions are at the head of the instruction queue.
    task send1(input rename_packet_t p0);
        begin
            rename_pkt = {rename_packet_t'('0), p0};
            rename_vld = 2'b01;
            @(negedge clk);
            rename_vld = '0;
            rename_pkt = '0;
        end
    endtask

    task send2(input rename_packet_t p0, input rename_packet_t p1);
        begin
            rename_pkt = {p1, p0};
            rename_vld = 2'b11;
            @(negedge clk);
            rename_vld = '0;
            rename_pkt = '0;
        end
    endtask

    function automatic int count_valid_pipes();
        int n = 0;
        for (int j = 0; j < NUM_FUS; j++) if (disp_valid[j]) n++;
        return n;
    endfunction

    // ===== Tests ===== //

    task automatic test_reset_state();
        begin
            $display("--- test_reset_state ---");
            #1;
            check_assertion("No pipe valid after reset", count_valid_pipes() == 0);
            check_assertion("Nothing fired to ROB after reset", !rob_fire_valid[0] && !rob_fire_valid[1]);
            check_assertion("Instruction queue not full after reset", !instr_queue_full[0] && !instr_queue_full[1]);
            check_assertion("No LSU dispatch after reset", !disp_vld);
            repeat (5) @(negedge clk);
            check_assertion("Idle dispatch fires nothing", fire_q.size() == 0 && count_valid_pipes() == 0);
        end
    endtask

    task automatic test_single_alu();
        rename_packet_t p = alu(5'd3, 6'd33, 1, 6'd10, 1, 6'd11);
        begin
            $display("--- test_single_alu ---");
            send1(p);
            #1;
            check_assertion("ALU instr fires to ROB on slot 0", rob_fire_valid[0]);
            check_assertion("ROB gets destination areg", rob_dst_reg[0] == 5'd3);
            check_assertion("ROB gets wb_en", rob_wb_en[0]);
            check_assertion("Slot 1 does not fire with one instruction", !rob_fire_valid[1]);
            @(negedge clk);
            #1;
            check_assertion("ALU instr lands on ALU pipe 0", disp_valid[0]);
            check_assertion("No other pipe receives it", !disp_valid[1] && !disp_valid[2] && !disp_valid[3]);
            check_assertion("Dispatched opcode/dst preg correct", disp_pkt[0].opcode == ADD && disp_pkt[0].dst_preg == 6'd33 && disp_pkt[0].dst_areg == 5'd3);
            check_assertion("Dispatched sources correct",
                            disp_pkt[0].src1_vld && disp_pkt[0].src1_preg == 6'd10 && disp_pkt[0].src2_vld && disp_pkt[0].src2_preg == 6'd11);
            check_assertion("Dispatched imm/pc correct", disp_pkt[0].imm_val == p.imm_val && disp_pkt[0].pc == p.pc);
            check_assertion("Dispatched packet carries its slot's ROB index", disp_pkt[0].rob_entry_idx == 4'd8);
            check_assertion("Instruction fired exactly once", fire_q.size() == 1);
            @(negedge clk);
            #1;
            check_assertion("disp_valid_o deasserts once nothing new is dispatched", !disp_valid[0]);
            check_assertion("Instruction not re-fired", fire_q.size() == 1);
        end
    endtask

    task automatic test_dual_alu();
        begin
            $display("--- test_dual_alu ---");
            send2(alu(5'd1, 6'd40), alu(5'd2, 6'd41));
            #1;
            check_assertion("Both ALU instrs fire to ROB", rob_fire_valid[0] && rob_fire_valid[1]);
            check_assertion("ROB slots carry program order", rob_dst_reg[0] == 5'd1 && rob_dst_reg[1] == 5'd2);
            @(negedge clk);
            #1;
            check_assertion("Two ALU instrs land on two different ALU pipes", disp_valid[0] && disp_valid[1] && !disp_valid[AGU_PIPE]);
            check_assertion("Pipe 0 holds the older instr", disp_pkt[0].dst_preg == 6'd40 && disp_pkt[0].rob_entry_idx == 4'd8);
            check_assertion("Pipe 1 holds the younger instr with slot-1 ROB index", disp_pkt[1].dst_preg == 6'd41 && disp_pkt[1].rob_entry_idx == 4'd9);
        end
    endtask

    task automatic test_agu_steering();
        begin
            $display("--- test_agu_steering ---");
            send1(mk_pkt(LW, FU_AGU, 5'd4, 6'd44, 1, 6'd2));
            #1;
            check_assertion("AGU instr fires to ROB", rob_fire_valid[0]);
            check_assertion("AGU instr allocates in the LSU (disp_vld_o)", disp_vld);
            check_assertion("Load is not flagged as a store", !disp_is_store);
            check_assertion("ROB gets the LSU queue index", rob_ldq_idx[0] == 4'd5);
            @(negedge clk);
            #1;
            check_assertion("AGU instr lands on the AGU pipe", disp_valid[AGU_PIPE] && disp_pkt[AGU_PIPE].dst_preg == 6'd44);
            check_assertion("AGU instr not sent to an ALU pipe", !disp_valid[0] && !disp_valid[1] && !disp_valid[2]);
        end
    endtask

    task automatic test_store_flags();
        begin
            $display("--- test_store_flags ---");
            send1(mk_pkt(SW, FU_AGU, 5'd0, 6'd0, 1, 6'd2, 1, 6'd3));
            #1;
            check_assertion("Store allocates in the LSU", disp_vld);
            check_assertion("Store flagged with disp_is_store_o", disp_is_store);
            check_assertion("ROB gets the SDQ index for a store", rob_sdq_idx[0] == 4'd6);
        end
    endtask

    task automatic test_alu_not_to_lsu();
        begin
            $display("--- test_alu_not_to_lsu ---");
            send1(alu(5'd5, 6'd45));
            #1;
            check_assertion("ALU instr does not allocate in the LSU", !disp_vld);
            check_assertion("ALU instr gets no LDQ/SDQ index", rob_ldq_idx[0] == 0 && rob_sdq_idx[0] == 0);
        end
    endtask

    task automatic test_rs_full_steering();
        begin
            $display("--- test_rs_full_steering ---");
            rs_full = 4'b0001;          // ALU pipe 0 full
            send1(alu(5'd6, 6'd46));
            @(negedge clk);
            #1;
            check_assertion("ALU instr avoids a full RS", !disp_valid[0]);
            check_assertion("ALU instr steered to the next free ALU pipe", disp_valid[1] && disp_pkt[1].dst_preg == 6'd46);
            rs_full = '0;
        end
    endtask

    task automatic test_third_alu_pipe();
        begin
            $display("--- test_third_alu_pipe ---");
            rs_full = 4'b0011;          // ALU pipes 0 and 1 full
            send1(alu(5'd7, 6'd47));
            #1;
            check_assertion("ALU instr fires when only ALU pipe 2 is free", rob_fire_valid[0]);
            @(negedge clk);
            #1;
            check_assertion("ALU instr lands on ALU pipe 2", disp_valid[2] && disp_pkt[2].dst_preg == 6'd47);
            rs_full = '0;
        end
    endtask

    task automatic test_all_alu_full_blocks();
        begin
            $display("--- test_all_alu_full_blocks ---");
            rs_full = 4'b0111;          // every ALU pipe full
            send1(alu(5'd8, 6'd48));
            repeat (3) @(negedge clk);
            check_assertion("ALU instr held while every ALU RS is full", fire_q.size() == 0);
            rs_full = '0;
            @(negedge clk);
            check_assertion("Held ALU instr fires once an RS frees up", fire_q.size() == 1 && fire_q[0].dst_areg == 5'd8);
        end
    endtask

    task automatic test_rob_full_blocks();
        begin
            $display("--- test_rob_full_blocks ---");
            rob_full = 2'b11;
            send1(alu(5'd9, 6'd49));
            repeat (3) @(negedge clk);
            check_assertion("Instr held while ROB is full", fire_q.size() == 0);
            rob_full = '0;
            @(negedge clk);
            check_assertion("Held instr fires once ROB has room", fire_q.size() == 1 && fire_q[0].dst_areg == 5'd9);
            repeat (3) @(negedge clk);
            check_assertion("Held instr fires exactly once", fire_q.size() == 1);
        end
    endtask

    task automatic test_in_order_fire();
        begin
            $display("--- test_in_order_fire ---");
            rs_full = 4'b1000;          // AGU pipe full
            send2(mk_pkt(LW, FU_AGU, 5'd10, 6'd50), alu(5'd11, 6'd51));
            repeat (3) @(negedge clk);
            check_assertion("Younger ALU instr does not pass a blocked older AGU instr", fire_q.size() == 0);
            rs_full = '0;
            repeat (3) @(negedge clk);
            check_assertion("Both fire in order once unblocked",
                            fire_q.size() == 2 && fire_q[0].dst_areg == 5'd10 && fire_q[1].dst_areg == 5'd11);
        end
    endtask

    task automatic test_dependency_mask();
        begin
            $display("--- test_dependency_mask ---");
            send1(alu(5'd1, 6'd20));                    // producer of p20
            @(negedge clk);
            send1(alu(5'd2, 6'd21, 1, 6'd20));          // consumer of p20
            @(negedge clk);
            #1;
            check_assertion("Consumer of an in-flight preg gets a dependency", disp_valid[0] && dependency_mask[0] != '0);
            send1(alu(5'd3, 6'd22, 1, 6'd30, 1, 6'd31));  // independent
            @(negedge clk);
            #1;
            check_assertion("Independent instr has an empty dependency mask", dependency_mask[0] == '0);
            send1(alu(5'd4, 6'd23, 0, 6'd20));          // src1 names p20 but is not a real source
            @(negedge clk);
            #1;
            check_assertion("Invalid source does not create a dependency", dependency_mask[0] == '0);
        end
    endtask

    task automatic test_same_cycle_raw();
        begin
            $display("--- test_same_cycle_raw ---");
            send2(alu(5'd1, 6'd25), alu(5'd2, 6'd26, 1, 6'd25));
            @(negedge clk);
            #1;
            check_assertion("Older instr of a same-cycle RAW pair has no dependency", dependency_mask[0] == '0);
            check_assertion("Younger instr depends on the older same-cycle producer", dependency_mask[1] != '0);
        end
    endtask

    task automatic test_queue_full();
        logic ok = 1;
        begin
            $display("--- test_queue_full ---");
            rs_full = 4'b1111;          // nothing can leave the queue
            for (int i = 0; i < IQ_DEPTH / 2; i++) begin
                #1;
                if (instr_queue_full[0]) ok = 0;
                send2(alu(5'(2*i), 6'(2*i)), alu(5'(2*i+1), 6'(2*i+1)));
            end
            #1;
            check_assertion("Queue not full before IQ_DEPTH entries", ok);
            check_assertion("instr_queue_full_o asserted with IQ_DEPTH entries", instr_queue_full[0] && instr_queue_full[1]);
            send1(alu(5'd31, 6'd63));  // must be dropped
            rs_full = '0;
            repeat (IQ_DEPTH + 4) @(negedge clk);
            check_assertion("Exactly IQ_DEPTH instructions drain from a full queue", fire_q.size() == IQ_DEPTH);
            ok = fire_q.size() == IQ_DEPTH;
            if (ok) foreach (fire_q[i]) if (fire_q[i].dst_areg != 5'(i)) ok = 0;
            check_assertion("Queued instructions drain in program order", ok);
        end
    endtask

    task automatic test_one_slot_left();
        begin
            $display("--- test_one_slot_left ---");
            rs_full = 4'b1111;
            for (int i = 0; i < IQ_DEPTH / 2 - 1; i++) send2(alu(5'd1, 6'd1), alu(5'd1, 6'd1));
            send1(alu(5'd1, 6'd1));
            #1;
            check_assertion("One free entry: rename slot 0 not full", !instr_queue_full[0]);
            check_assertion("One free entry: rename slot 1 full", instr_queue_full[1]);
            rs_full = '0;
        end
    endtask

    task automatic test_no_stale_refire();
        int n = IQ_DEPTH + 6;
        logic ok = 1;
        begin
            $display("--- test_no_stale_refire ---");
            // stream more than a queue's worth through, one at a time
            for (int i = 0; i < n; i++) begin
                send1(alu(5'(i % 32), 6'(i)));
                @(negedge clk);
            end
            repeat (IQ_DEPTH + 4) @(negedge clk);
            check_assertion("Each instruction fires exactly once across queue wraparound", fire_q.size() == n);
            if (fire_q.size() != n) ok = 0;
            else foreach (fire_q[i]) if (fire_q[i].dst_areg != 5'(i % 32)) ok = 0;
            check_assertion("Fired instructions match program order across wraparound", ok);
        end
    endtask

    task automatic test_flush();
        begin
            $display("--- test_flush ---");
            rs_full = 4'b1111;
            send2(alu(5'd1, 6'd1), alu(5'd2, 6'd2));
            send1(alu(5'd3, 6'd3));
            flush = 1;
            @(negedge clk);
            flush = 0;
            rs_full = '0;
            repeat (5) @(negedge clk);
            check_assertion("Flushed instructions never fire", fire_q.size() == 0);
            #1;
            check_assertion("Queue empty after flush", !instr_queue_full[0]);
            send1(alu(5'd4, 6'd4));
            @(negedge clk);
            check_assertion("Instruction after flush fires normally", fire_q.size() == 1 && fire_q[0].dst_areg == 5'd4);
        end
    endtask

    task automatic test_flush_clears_dependencies();
        begin
            $display("--- test_flush_clears_dependencies ---");
            send1(alu(5'd1, 6'd27));
            @(negedge clk);
            flush = 1;
            @(negedge clk);
            flush = 0;
            send1(alu(5'd2, 6'd28, 1, 6'd27));
            @(negedge clk);
            #1;
            check_assertion("Flushed producer leaves no stale dependency", dependency_mask[0] == '0);
        end
    endtask

    task automatic test_stall();
        begin
            $display("--- test_stall ---");
            stall = 1;
            send1(alu(5'd5, 6'd5));
            repeat (3) @(negedge clk);
            check_assertion("Nothing fires while stall_i is high", fire_q.size() == 0);
            stall = 0;
            @(negedge clk);
            check_assertion("Stalled instr fires after stall_i drops", fire_q.size() == 1);
        end
    endtask

    // Main test sequence
    initial begin
        init_signals();

        $display("=== Dispatch Testbench ===");

        `RUN_TEST(test_reset_state)
        `RUN_TEST(test_single_alu)
        `RUN_TEST(test_dual_alu)
        `RUN_TEST(test_agu_steering)
        `RUN_TEST(test_store_flags)
        `RUN_TEST(test_alu_not_to_lsu)
        `RUN_TEST(test_rs_full_steering)
        `RUN_TEST(test_third_alu_pipe)
        `RUN_TEST(test_all_alu_full_blocks)
        `RUN_TEST(test_rob_full_blocks)
        `RUN_TEST(test_in_order_fire)
        `RUN_TEST(test_dependency_mask)
        `RUN_TEST(test_same_cycle_raw)
        `RUN_TEST(test_queue_full)
        `RUN_TEST(test_one_slot_left)
        `RUN_TEST(test_no_stale_refire)
        `RUN_TEST(test_flush)
        `RUN_TEST(test_flush_clears_dependencies)
        `RUN_TEST(test_stall)

        repeat(5) @(negedge clk);

        $display("\n=== Testbench Complete ===");
        $display("Total Tests: %0d", pass_count + fail_count);
        if (fail_count == 0) begin
            $display("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed", pass_count, pass_count + fail_count);
        end else begin
            $display("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed", pass_count, fail_count);
        end
        $finish;
    end

endmodule
