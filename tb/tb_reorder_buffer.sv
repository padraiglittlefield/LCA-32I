`timescale 1ns/1ns

import CORE_PKG::*;

module tb_reorder_buffer;
    `include "tb_test_select.svh"

    // ===== Testbench Setup ===== //


    // generate clock
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

    logic clk;
    logic rst;
    logic flush_en;
    integer cycle_count = 0;

    initial begin
        forever begin
            #(CLK_PERIOD * DUTY_CYCLE) clk = 1'b1;
            cycle_count = cycle_count + 1;
            #(CLK_PERIOD * DUTY_CYCLE) clk = 1'b0;
        end
    end

    // Test tracking
    integer pass_count = 0;
    integer fail_count = 0;

    initial begin
        $dumpfile(`DUMPFILE);
        $dumpvars(0,tb_reorder_buffer);
    end

    localparam RETIRE_WIDTH = 2;
    localparam FIRE_WIDTH = 2;
    localparam EX_PORTS = NUM_FUS-1;
    localparam ROB_IDX_W = $clog2(ROB_ENTRIES);

    // Array inputs are driven from packed TB registers through continuous assigns:
    // with Verilator 5.020, DUT comb logic is not re-evaluated when a timed TB task writes
    // an unpacked-array port element directly.
    // Dispatch
    logic [FIRE_WIDTH-1:0]                          disp_fire_valid;
    logic [FIRE_WIDTH-1:0][$clog2(NUM_AREGS)-1:0]   disp_dst_areg;
    logic [FIRE_WIDTH-1:0]                          disp_wb_en;
    logic                           disp_fire_valid_w [FIRE_WIDTH];
    logic [$clog2(NUM_AREGS)-1:0]   disp_dst_areg_w   [FIRE_WIDTH];
    logic                           disp_wb_en_w      [FIRE_WIDTH];
    logic [ROB_IDX_W-1:0]           disp_rob_idx    [FIRE_WIDTH];
    logic                           disp_rob_full   [FIRE_WIDTH];
    // Execute
    logic [EX_PORTS-1:0]                    ex_valid;
    logic [EX_PORTS-1:0][ROB_IDX_W-1:0]     ex_rob_idx;
    logic [EX_PORTS-1:0][31:0]              ex_val;
    logic [EX_PORTS-1:0]                    ex_br_mispred;
    logic [EX_PORTS-1:0]                    ex_exception;
    logic                           ex_valid_w      [EX_PORTS];
    logic [ROB_IDX_W-1:0]           ex_rob_idx_w    [EX_PORTS];
    logic [31:0]                    ex_val_w        [EX_PORTS];
    logic                           ex_br_mispred_w [EX_PORTS];
    logic                           ex_exception_w  [EX_PORTS];

    for (genvar g = 0; g < FIRE_WIDTH; g++) begin : g_disp_drv
        assign disp_fire_valid_w[g] = disp_fire_valid[g];
        assign disp_dst_areg_w[g]   = disp_dst_areg[g];
        assign disp_wb_en_w[g]      = disp_wb_en[g];
    end
    for (genvar g = 0; g < EX_PORTS; g++) begin : g_ex_drv
        assign ex_valid_w[g]      = ex_valid[g];
        assign ex_rob_idx_w[g]    = ex_rob_idx[g];
        assign ex_val_w[g]        = ex_val[g];
        assign ex_br_mispred_w[g] = ex_br_mispred[g];
        assign ex_exception_w[g]  = ex_exception[g];
    end
    // Register File
    logic                           ret_wr_en       [RETIRE_WIDTH];
    logic [$clog2(NUM_AREGS)-1:0]   ret_wr_areg     [RETIRE_WIDTH];
    logic [31:0]                    ret_wr_val      [RETIRE_WIDTH];
    // Flush
    logic                           flush;
    logic [31:0]                    flush_pc;

    reorder_buffer #(
        .RETIRE_WIDTH(RETIRE_WIDTH),
        .FIRE_WIDTH(FIRE_WIDTH)
    ) dut (
        .clk(clk),
        .rst(rst),
        .flush_en(flush_en),
        .disp_fire_valid_i(disp_fire_valid_w),
        .disp_dst_areg_i(disp_dst_areg_w),
        .disp_wb_en_i(disp_wb_en_w),
        .disp_rob_idx_o(disp_rob_idx),
        .disp_rob_full_o(disp_rob_full),
        .ex_valid_i(ex_valid_w),
        .ex_rob_idx_i(ex_rob_idx_w),
        .ex_val_i(ex_val_w),
        .ex_br_mispred_i(ex_br_mispred_w),
        .ex_exception_i(ex_exception_w),
        .ret_wr_en_o(ret_wr_en),
        .ret_wr_areg_o(ret_wr_areg),
        .ret_wr_val_o(ret_wr_val),
        .flush_o(flush),
        .flush_pc_o(flush_pc)
    );

    // ===== Retirement / Flush Monitor ===== //
    // Samples mid-low-phase (after negedge drivers settle, before the posedge that retires)

    typedef struct {
        logic [$clog2(NUM_AREGS)-1:0] areg;
        logic [31:0]                  val;
        int                           cycle;
        int                           slot;
    } ret_t;

    ret_t ret_q [$];
    int   flush_count = 0;

    initial begin : retire_monitor
        forever begin
            @(negedge clk);
            #(CLK_PERIOD / 4);
            if (!rst && !flush_en) begin
                for (int s = 0; s < RETIRE_WIDTH; s++) begin
                    if (ret_wr_en[s]) begin
                        automatic ret_t r;
                        r.areg = ret_wr_areg[s];
                        r.val = ret_wr_val[s];
                        r.cycle = cycle_count;
                        r.slot = s;
                        ret_q.push_back(r);
                    end
                end
                if (flush) flush_count++;
            end
        end
    end

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0;
            rst = 0;
            clear_inputs();
        end
    endtask

    task clear_inputs();
        begin
            flush_en = 0;
            disp_fire_valid = '0;
            disp_dst_areg   = '0;
            disp_wb_en      = '0;
            ex_valid        = '0;
            ex_rob_idx      = '0;
            ex_val          = '0;
            ex_br_mispred   = '0;
            ex_exception    = '0;
        end
    endtask

    // Check assertion and update counters
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

    // Reset sequence
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
            ret_q.delete();
            flush_count = 0;
            $display("[RESET] Reset complete\n");
        end
    endtask

    // All stimulus tasks start and end on a negedge.

    // Allocate one entry on dispatch slot 0
    task automatic alloc1(input logic [4:0] areg, input logic wb_en, output logic [ROB_IDX_W-1:0] idx);
        begin
            disp_fire_valid[0] = 1;
            disp_dst_areg[0] = areg;
            disp_wb_en[0] = wb_en;
            #1;
            idx = disp_rob_idx[0];
            @(negedge clk);
            disp_fire_valid[0] = 0;
            disp_dst_areg[0] = 0;
            disp_wb_en[0] = 0;
        end
    endtask

    // Allocate two entries in the same cycle
    task automatic alloc2(
        input  logic [4:0]           areg0, input logic [4:0] areg1,
        output logic [ROB_IDX_W-1:0] idx0,  output logic [ROB_IDX_W-1:0] idx1
    );
        begin
            disp_fire_valid[0] = 1;
            disp_fire_valid[1] = 1;
            disp_dst_areg[0] = areg0;
            disp_dst_areg[1] = areg1;
            disp_wb_en[0] = 1;
            disp_wb_en[1] = 1;
            #1;
            idx0 = disp_rob_idx[0];
            idx1 = disp_rob_idx[1];
            @(negedge clk);
            disp_fire_valid = '0;
            disp_dst_areg = '0;
            disp_wb_en = '0;
        end
    endtask

    // Write back a result on one execute port.
    // Whole-vector read-modify-write: a variable-index bit write from a timed task is
    // not picked up by the continuous assigns under Verilator 5.020.
    task complete(input int port, input logic [ROB_IDX_W-1:0] idx, input logic [31:0] val,
                  input logic mispred = 0, input logic exception = 0);
        logic [EX_PORTS-1:0]                v, m, e;
        logic [EX_PORTS-1:0][ROB_IDX_W-1:0] r;
        logic [EX_PORTS-1:0][31:0]          d;
        begin
            v = ex_valid;  m = ex_br_mispred;  e = ex_exception;  r = ex_rob_idx;  d = ex_val;
            v[port] = 1;  m[port] = mispred;  e[port] = exception;  r[port] = idx;  d[port] = val;
            ex_valid = v;  ex_br_mispred = m;  ex_exception = e;  ex_rob_idx = r;  ex_val = d;
            @(negedge clk);
            v[port] = 0;  m[port] = 0;  e[port] = 0;  r[port] = 0;  d[port] = 0;
            ex_valid = v;  ex_br_mispred = m;  ex_exception = e;  ex_rob_idx = r;  ex_val = d;
        end
    endtask

    function automatic logic retired_areg(input logic [4:0] areg);
        foreach (ret_q[i]) if (ret_q[i].areg == areg) return 1;
        return 0;
    endfunction

    // ===== Tests ===== //

    task automatic test_reset_state();
        begin
            $display("--- test_reset_state ---");
            #1;
            check_assertion("ROB not full after reset", !disp_rob_full[0] && !disp_rob_full[1]);
            check_assertion("Allocation indices start at 0 and 1", disp_rob_idx[0] == 0 && disp_rob_idx[1] == 1);
            check_assertion("No retirement after reset", !ret_wr_en[0] && !ret_wr_en[1]);
            check_assertion("No flush after reset", !flush);
            repeat (5) @(negedge clk);
            check_assertion("Idle ROB retires nothing", ret_q.size() == 0);
        end
    endtask

    task automatic test_alloc_indices();
        logic [ROB_IDX_W-1:0] a, b, c, d, e;
        begin
            $display("--- test_alloc_indices ---");
            alloc1(5'd1, 1, a);
            alloc2(5'd2, 5'd3, b, c);
            alloc2(5'd4, 5'd5, d, e);
            check_assertion("Single alloc gets index 0", a == 0);
            check_assertion("Dual alloc gets consecutive indices 1,2", b == 1 && c == 2);
            check_assertion("Next dual alloc gets 3,4", d == 3 && e == 4);
            #1;
            check_assertion("Allocated but unfinished entries do not retire", !ret_wr_en[0] && !ret_wr_en[1]);
        end
    endtask

    task automatic test_non_contiguous_alloc();
        logic [ROB_IDX_W-1:0] a;
        begin
            $display("--- test_non_contiguous_alloc ---");
            // slot 1 without slot 0 is not a legal fire pattern and must not allocate
            disp_fire_valid[1] = 1;
            disp_dst_areg[1] = 5'd9;
            disp_wb_en[1] = 1;
            @(negedge clk);
            disp_fire_valid[1] = 0;
            disp_dst_areg[1] = 0;
            disp_wb_en[1] = 0;
            #1;
            check_assertion("Slot-1-only fire does not allocate", disp_rob_idx[0] == 0);
            alloc1(5'd1, 1, a);
            check_assertion("Next legal alloc still gets index 0", a == 0);
        end
    endtask

    task automatic test_single_retire();
        logic [ROB_IDX_W-1:0] a;
        begin
            $display("--- test_single_retire ---");
            alloc1(5'd7, 1, a);
            complete(0, a, 32'hCAFE_0007);
            #1;
            check_assertion("Finished head entry presents on retire slot 0", ret_wr_en[0]);
            check_assertion("Retire areg correct", ret_wr_areg[0] == 5'd7);
            check_assertion("Retire value correct", ret_wr_val[0] == 32'hCAFE_0007);
            check_assertion("Only one entry retires", !ret_wr_en[1]);
            @(negedge clk);
            #1;
            check_assertion("Retired entry is not retired again", !ret_wr_en[0]);
            check_assertion("Exactly one retirement recorded", ret_q.size() == 1);
        end
    endtask

    task automatic test_in_order_retire();
        logic [ROB_IDX_W-1:0] a, b;
        begin
            $display("--- test_in_order_retire ---");
            alloc2(5'd1, 5'd2, a, b);
            complete(0, b, 32'h0000_000B);      // younger finishes first
            repeat (3) @(negedge clk);
            check_assertion("Younger finished entry waits for older head", ret_q.size() == 0);
            complete(1, a, 32'h0000_000A);
            #1;
            check_assertion("Both entries retire in the same cycle once head finishes", ret_wr_en[0] && ret_wr_en[1]);
            check_assertion("Retire slot 0 is the older entry", ret_wr_areg[0] == 5'd1 && ret_wr_val[0] == 32'h0000_000A);
            check_assertion("Retire slot 1 is the younger entry", ret_wr_areg[1] == 5'd2 && ret_wr_val[1] == 32'h0000_000B);
            @(negedge clk);
            check_assertion("Two retirements recorded", ret_q.size() == 2);
        end
    endtask

    task automatic test_retire_width_limit();
        logic [ROB_IDX_W-1:0] idx [3];
        begin
            $display("--- test_retire_width_limit ---");
            for (int i = 0; i < 3; i++) alloc1(5'(10 + i), 1, idx[i]);
            // finish all three in one cycle using three execute ports
            ex_valid = 3'b111;
            ex_rob_idx = {idx[2], idx[1], idx[0]};
            ex_val = {32'h102, 32'h101, 32'h100};
            @(negedge clk);
            clear_inputs();
            repeat (3) @(negedge clk);
            check_assertion("Three finished entries all retire", ret_q.size() == 3);
            check_assertion("First two retire together (RETIRE_WIDTH=2)",
                            ret_q.size() == 3 && ret_q[0].cycle == ret_q[1].cycle && ret_q[2].cycle == ret_q[0].cycle + 1);
            check_assertion("Retirement order and values correct",
                            ret_q.size() == 3 && ret_q[0].areg == 10 && ret_q[1].areg == 11 && ret_q[2].areg == 12 &&
                            ret_q[0].val == 32'h100 && ret_q[1].val == 32'h101 && ret_q[2].val == 32'h102);
        end
    endtask

    task automatic test_no_wb_entry();
        logic [ROB_IDX_W-1:0] a, b;
        begin
            $display("--- test_no_wb_entry ---");
            alloc1(5'd3, 0, a);     // e.g. a store/branch: retires but writes no register
            alloc1(5'd4, 1, b);
            complete(0, a, 32'hDEAD_DEAD);
            #1;
            check_assertion("wb_en=0 entry retires without ret_wr_en", !ret_wr_en[0]);
            complete(0, b, 32'h0000_0004);
            repeat (2) @(negedge clk);
            check_assertion("Entry after a wb_en=0 entry still retires", ret_q.size() == 1 && ret_q[0].areg == 5'd4 && ret_q[0].val == 32'h4);
        end
    endtask

    task automatic test_parallel_completions();
        logic [ROB_IDX_W-1:0] idx [3];
        logic ok = 1;
        begin
            $display("--- test_parallel_completions ---");
            for (int i = 0; i < 3; i++) alloc1(5'(20 + i), 1, idx[i]);
            // ports finish entries in a scrambled mapping
            ex_valid = 3'b111;
            ex_rob_idx = {idx[1], idx[0], idx[2]};      // port0->idx2, port1->idx0, port2->idx1
            ex_val = {32'h21, 32'h20, 32'h22};
            @(negedge clk);
            clear_inputs();
            repeat (3) @(negedge clk);
            if (ret_q.size() != 3) ok = 0;
            else for (int i = 0; i < 3; i++) if (ret_q[i].areg != 20 + i || ret_q[i].val != 32'h20 + i) ok = 0;
            check_assertion("Results from all execute ports land on the right entries", ok);
        end
    endtask

    task automatic test_full();
        logic [ROB_IDX_W-1:0] idx;
        logic ok = 1;
        begin
            $display("--- test_full ---");
            for (int i = 0; i < ROB_ENTRIES - 1; i++) alloc1(5'd1, 1, idx);
            #1;
            check_assertion("One free entry: slot 0 not full", !disp_rob_full[0]);
            check_assertion("One free entry: slot 1 full", disp_rob_full[1]);
            alloc1(5'd1, 1, idx);
            #1;
            check_assertion("ROB_ENTRIES allocated: slot 0 full", disp_rob_full[0]);
            check_assertion("ROB_ENTRIES allocated: slot 1 full", disp_rob_full[1]);

            // allocation attempt while full must be dropped
            alloc1(5'd31, 1, idx);
            // finish the head, it retires and frees exactly one slot
            complete(0, 4'd0, 32'h0);
            @(negedge clk);
            #1;
            check_assertion("Retiring head frees one entry", !disp_rob_full[0] && disp_rob_full[1]);
            check_assertion("Freed entry is the old head index", disp_rob_idx[0] == 4'd0);
        end
    endtask

    task automatic test_dual_alloc_one_slot_left();
        logic [ROB_IDX_W-1:0] idx, a, b;
        begin
            $display("--- test_dual_alloc_one_slot_left ---");
            for (int i = 0; i < ROB_ENTRIES - 1; i++) alloc1(5'd1, 1, idx);
            alloc2(5'd5, 5'd6, a, b);    // only slot 0 fits
            #1;
            check_assertion("Dual alloc with one free entry fills the ROB", disp_rob_full[0]);
            // drain everything: exactly ROB_ENTRIES retirements, last is areg 5 (areg 6 was dropped)
            for (int i = 0; i < ROB_ENTRIES; i++) complete(0, 4'(i), 32'(i));
            repeat (ROB_ENTRIES) @(negedge clk);
            check_assertion("Dropped slot-1 allocation never retires",
                            ret_q.size() == ROB_ENTRIES && ret_q[ROB_ENTRIES-1].areg == 5'd5);
        end
    endtask

    task automatic test_wraparound();
        logic [ROB_IDX_W-1:0] idx;
        logic idx_ok = 1, ret_ok = 1;
        int n = 3 * ROB_ENTRIES;
        begin
            $display("--- test_wraparound ---");
            for (int i = 0; i < n; i++) begin
                alloc1(5'(i % 32), 1, idx);
                if (idx != ROB_IDX_W'(i)) idx_ok = 0;
                complete(0, idx, 32'hA000_0000 + 32'(i));
            end
            repeat (3) @(negedge clk);
            if (ret_q.size() != n) ret_ok = 0;
            else for (int i = 0; i < n; i++) if (ret_q[i].areg != 5'(i % 32) || ret_q[i].val != 32'hA000_0000 + 32'(i)) ret_ok = 0;
            check_assertion("Allocation index wraps modulo ROB_ENTRIES", idx_ok);
            check_assertion("All entries retire in order across wraparound", ret_ok);
            #1;
            check_assertion("ROB empty (not full) after wraparound drain", !disp_rob_full[0]);
        end
    endtask

    task automatic test_flush_en_clears();
        logic [ROB_IDX_W-1:0] a, b, c;
        begin
            $display("--- test_flush_en_clears ---");
            alloc2(5'd1, 5'd2, a, b);
            complete(0, a, 32'h1);
            flush_en = 1;
            @(negedge clk);
            flush_en = 0;
            #1;
            check_assertion("flush_en resets allocation index", disp_rob_idx[0] == 0);
            check_assertion("flush_en: finished entry is discarded", !ret_wr_en[0]);
            repeat (3) @(negedge clk);
            check_assertion("flush_en: nothing retires afterwards", ret_q.size() == 0);
            alloc1(5'd3, 1, c);
            complete(0, c, 32'h3);
            @(negedge clk);
            check_assertion("ROB works normally after flush_en", ret_q.size() == 1 && ret_q[0].areg == 5'd3);
        end
    endtask

    task automatic test_mispredict_flush();
        logic [ROB_IDX_W-1:0] br, young;
        begin
            $display("--- test_mispredict_flush ---");
            alloc2(5'd0, 5'd8, br, young);
            complete(1, young, 32'h0000_0008);
            complete(0, br, 32'h0, 1'b1, 1'b0);     // branch resolves as mispredicted
            repeat (3) @(negedge clk);
            check_assertion("Mispredicted branch raises flush_o after retiring", flush_count > 0);
            check_assertion("Entry younger than a mispredicted branch does not retire", !retired_areg(5'd8));
        end
    endtask

    task automatic test_exception_stops_retire();
        logic [ROB_IDX_W-1:0] ex, young;
        begin
            $display("--- test_exception_stops_retire ---");
            alloc2(5'd0, 5'd9, ex, young);
            complete(1, young, 32'h0000_0009);
            complete(0, ex, 32'h0, 1'b0, 1'b1);     // faulting instruction
            repeat (3) @(negedge clk);
            check_assertion("Entry younger than an excepting instruction does not retire", !retired_areg(5'd9));
        end
    endtask

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Reorder Buffer Testbench ===");

        `RUN_TEST(test_reset_state)
        `RUN_TEST(test_alloc_indices)
        `RUN_TEST(test_non_contiguous_alloc)
        `RUN_TEST(test_single_retire)
        `RUN_TEST(test_in_order_retire)
        `RUN_TEST(test_retire_width_limit)
        `RUN_TEST(test_no_wb_entry)
        `RUN_TEST(test_parallel_completions)
        `RUN_TEST(test_full)
        `RUN_TEST(test_dual_alloc_one_slot_left)
        `RUN_TEST(test_wraparound)
        `RUN_TEST(test_flush_en_clears)
        `RUN_TEST(test_mispredict_flush)
        `RUN_TEST(test_exception_stops_retire)

        repeat(5) @(posedge clk);

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
