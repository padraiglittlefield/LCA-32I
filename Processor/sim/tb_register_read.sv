`timescale 1ns/1ns

import CORE_PKG::*;

module tb_register_read;
    
    // ===== Testbench Setup ===== //
    
    
    // generate clock
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

    logic clk;
    logic rst;
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
        $dumpfile("tb_register_read.vcd");
        $dumpvars(0,tb_register_read);
    end

    // Scheduler
    logic                           sched_fire_valid;
    disp_packet_t                   sched_pkt;
    // Register File
    logic [$clog2(NUM_PREGS)-1:0]   rf_src1_preg;
    logic [$clog2(NUM_PREGS)-1:0]   rf_src2_preg;
    logic [31:0]                    rf_src1_val;
    logic [31:0]                    rf_src2_val;
    // Forwarding Unit
    logic [$clog2(NUM_PREGS)-1:0]   fwrd_src1_preg;
    logic [$clog2(NUM_PREGS)-1:0]   fwrd_src2_preg;
    logic                           fwrd_src1_hit;
    logic [31:0]                    fwrd_src1_val;
    logic                           fwrd_src2_hit;
    logic [31:0]                    fwrd_src2_val;
    // Execute
    logic                           exec_fire_valid;
    exec_packet_t                   exec_pkt;

    register_read dut (
        .clk(clk),
        .rst(rst),
        .sched_fire_valid_i(sched_fire_valid),
        .sched_pkt_i(sched_pkt),
        .rf_src1_preg_o(rf_src1_preg),
        .rf_src2_preg_o(rf_src2_preg),
        .rf_src1_val_i(rf_src1_val),
        .rf_src2_val_i(rf_src2_val),
        .fwrd_src1_preg_o(fwrd_src1_preg),
        .fwrd_src2_preg_o(fwrd_src2_preg),
        .fwrd_src1_hit_i(fwrd_src1_hit),
        .fwrd_src1_val_i(fwrd_src1_val),
        .fwrd_src2_hit_i(fwrd_src2_hit),
        .fwrd_src2_val_i(fwrd_src2_val),
        .exec_fire_valid_o(exec_fire_valid),
        .exec_pkt_o(exec_pkt)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            // Scheduler inputs
            sched_fire_valid = 0;
            sched_pkt = '0;
            // Register file inputs
            rf_src1_val = 32'h0;
            rf_src2_val = 32'h0;
            // Forwarding unit inputs
            fwrd_src1_hit = 0;
            fwrd_src2_hit = 0;
            fwrd_src1_val = 32'h0;
            fwrd_src2_val = 32'h0;
  
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
            rst = 1;
            @(negedge clk);
            @(negedge clk);
            rst = 0;
            @(negedge clk);
            $display("[RESET] Reset complete\n");
        end
    endtask

    // Send instruction packet from scheduler
    task send_instruction(
        input logic fire_valid_in,
        input logic [31:0] pc,
        input logic [$clog2(NUM_PREGS)-1:0] src1_preg,
        input logic [$clog2(NUM_PREGS)-1:0] src2_preg,
        input logic [$clog2(NUM_PREGS)-1:0] dst_preg,
        input logic [31:0] imm_val,
        input logic instr_valid
    );
        begin
            sched_fire_valid = fire_valid_in;
            sched_pkt.pc = pc;
            sched_pkt.src1_preg = src1_preg;
            sched_pkt.src2_preg = src2_preg;
            sched_pkt.dst_preg = dst_preg;
            sched_pkt.imm_val = imm_val;
            sched_pkt.instr_valid = instr_valid;
            $display("Sent instruction: PC=0x%h, src1=%0d, src2=%0d, dst=%0d at Cycle %0d", 
                    pc, src1_preg, src2_preg, dst_preg, cycle_count);
        end
    endtask

    // Set register file response values
    task set_reg_file_values(input logic [31:0] src1_val, input logic [31:0] src2_val);
        begin
            rf_src1_val = src1_val;
            rf_src2_val = src2_val;
        end
    endtask

    // Set forwarding values
    task set_forwarding(
        input logic src1_hit,
        input logic src2_hit,
        input logic [31:0] src1_fwd_val,
        input logic [31:0] src2_fwd_val
    );
        begin
            fwrd_src1_hit = src1_hit;
            fwrd_src2_hit = src2_hit;
            fwrd_src1_val = src1_fwd_val;
            fwrd_src2_val = src2_fwd_val;
        end
    endtask


    task test_reset_state();
        begin
            $display("\n[Test 1] Verify Reset State");
            check_assertion("fire_valid is low after reset", exec_fire_valid == 1'b0);
            check_assertion("exec_pkt cleared after reset", exec_pkt == '0);
        end
    endtask

    task test_basic_reg_file_read();
        begin
            $display("\n[Test 2] Basic Register File Read (No Forwarding)");
            set_forwarding(0, 0, 32'h0, 32'h0);
            set_reg_file_values(32'hAAAA_AAAA, 32'hBBBB_BBBB);
            send_instruction(1'b1, 32'h1000, 5, 10, 15, 32'h42, 1'b1);
            @(negedge clk);
            @(posedge clk);
            #1;
            check_assertion("rf_src1_preg == 5", rf_src1_preg == 5);
            check_assertion("rf_src2_preg == 10", rf_src2_preg == 10);
            check_assertion("exec_fire_valid == 1", exec_fire_valid == 1'b1);
            check_assertion("exec_pkt.src1_val from reg file", exec_pkt.src1_val == 32'hAAAA_AAAA);
            check_assertion("exec_pkt.src2_val from reg file", exec_pkt.src2_val == 32'hBBBB_BBBB);
            check_assertion("exec_pkt.dst_preg == 15", exec_pkt.dst_preg == 15);
            check_assertion("exec_pkt.imm_val == 0x42", exec_pkt.imm_val == 32'h42);
            check_assertion("exec_pkt.pc == 0x1000", exec_pkt.pc == 32'h1000);
        end
    endtask

    task test_forward_src1_only();
        begin
            $display("\n[Test 3] Forwarding on src1 Only");
            set_forwarding(1, 0, 32'hDEAD_BEEF, 32'h0);
            set_reg_file_values(32'h1111_1111, 32'h2222_2222);
            send_instruction(1'b1, 32'h1004, 7, 8, 9, 32'h100, 1'b1);
            @(negedge clk);
            @(posedge clk);
            #1;
            check_assertion("fwrd_src1_preg == 7", fwrd_src1_preg == 7);
            check_assertion("fwrd_src2_preg == 8", fwrd_src2_preg == 8);
            check_assertion("exec_pkt.src1_val forwarded", exec_pkt.src1_val == 32'hDEAD_BEEF);
            check_assertion("exec_pkt.src2_val from reg file", exec_pkt.src2_val == 32'h2222_2222);
        end
    endtask

        task test_forward_src2_only();
        begin
            $display("\n[Test 4] Forwarding on src2 Only");
            set_forwarding(0, 1, 32'h0, 32'hCAFE_BABE);
            set_reg_file_values(32'h3333_3333, 32'h4444_4444);
            send_instruction(1'b1, 32'h1008, 11, 12, 13, 32'h200, 1'b1);
            @(negedge clk);
            @(posedge clk);
            #1;
            check_assertion("exec_pkt.src1_val from reg file", exec_pkt.src1_val == 32'h3333_3333);
            check_assertion("exec_pkt.src2_val forwarded", exec_pkt.src2_val == 32'hCAFE_BABE);
        end
    endtask

    task test_forward_both_sources();
        begin
            $display("\n[Test 5] Forwarding on Both Sources");
            set_forwarding(1, 1, 32'h1234_5678, 32'h9ABC_DEF0);
            set_reg_file_values(32'h5555_5555, 32'h6666_6666);
            send_instruction(1'b1, 32'h100C, 20, 21, 22, 32'h300, 1'b1);
            @(negedge clk);
            @(posedge clk);
            #1;
            check_assertion("exec_pkt.src1_val forwarded", exec_pkt.src1_val == 32'h1234_5678);
            check_assertion("exec_pkt.src2_val forwarded", exec_pkt.src2_val == 32'h9ABC_DEF0);
        end
    endtask

    task test_fire_valid_propagation();
        begin
            $display("\n[Test 6] fire_valid Low Propagation");
            set_forwarding(0, 0, 32'h0, 32'h0);
            set_reg_file_values(32'h7777_7777, 32'h8888_8888);
            send_instruction(1'b0, 32'h1010, 1, 2, 3, 32'h0, 1'b0);
            @(negedge clk);
            @(posedge clk);
            #1;
            check_assertion("exec_fire_valid == 0", exec_fire_valid == 1'b0);
        end
    endtask

    task test_multiple_instructions();
        begin
            $display("\n[Test 7] Multiple Consecutive Instructions");
            set_forwarding(0, 0, 32'h0, 32'h0);
            // First instruction
            set_reg_file_values(32'hAAAA_0000, 32'hBBBB_0000);
            send_instruction(1'b1, 32'h2000, 4, 5, 6, 32'hA0, 1'b1);
            @(negedge clk);
            @(posedge clk);
            #1;
            check_assertion("Instruction 1 src1_val", exec_pkt.src1_val == 32'hAAAA_0000);
            check_assertion("Instruction 1 PC", exec_pkt.pc == 32'h2000);
            // Second instruction
            set_reg_file_values(32'hCCCC_0000, 32'hDDDD_0000);
            send_instruction(1'b1, 32'h2004, 7, 8, 9, 32'hB0, 1'b1);
            @(negedge clk);
            @(posedge clk);
            #1;
            check_assertion("Instruction 2 src1_val", exec_pkt.src1_val == 32'hCCCC_0000);
            check_assertion("Instruction 2 PC", exec_pkt.pc == 32'h2004);
        end
    endtask

    task test_passthrough_signals();
        begin
            $display("\n[Test 8] Pass-Through Signal Integrity");
            set_forwarding(0, 0, 32'h0, 32'h0);
            set_reg_file_values(32'h0, 32'h0);
            send_instruction(1'b1, 32'hFEED_FACE, 25, 26, 27, 32'hDEAD_BEEF, 1'b1);
            @(negedge clk);
            @(posedge clk);
            #1;
            check_assertion("dst_preg passed through", exec_pkt.dst_preg == 27);
            check_assertion("src1_preg passed through", exec_pkt.src1_preg == 25);
            check_assertion("src2_preg passed through", exec_pkt.src2_preg == 26);
            check_assertion("imm_val passed through", exec_pkt.imm_val == 32'hDEAD_BEEF);
            check_assertion("instr_valid passed through", exec_pkt.instr_valid == 1'b1);
            check_assertion("PC passed through", exec_pkt.pc == 32'hFEED_FACE);
        end
    endtask

    task test_register_zero();
        begin
            $display("\n[Test 9] Register 0 Access");
            set_forwarding(0, 0, 32'h0, 32'h0);
            set_reg_file_values(32'h0, 32'h0);
            send_instruction(1'b1, 32'h3000, 0, 0, 0, 32'h0, 1'b1);
            @(negedge clk);
            @(posedge clk);
            #1;
            check_assertion("rf_src1_preg == 0", rf_src1_preg == 0);
            check_assertion("rf_src2_preg == 0", rf_src2_preg == 0);
        end
    endtask


    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Register Read Testbench ===");
        reset_dut();

        // Tests
        test_reset_state();
        test_basic_reg_file_read();
        test_forward_src1_only();
        test_forward_src2_only();
        test_forward_both_sources();
        test_fire_valid_propagation();
        test_multiple_instructions();
        test_passthrough_signals();
        test_register_zero();

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
