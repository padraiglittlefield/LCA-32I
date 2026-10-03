`timescale 1ns/1ns

import CORE_PKG::*;

module tb_fwrd_unit;
    `include "tb_test_select.svh"
    
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
        $dumpfile(`DUMPFILE);
        $dumpvars(0,tb_phy_reg_file);
    end

    
    // Register Read
    logic [$clog2(NUM_PREGS)-1:0]   src1_preg;
    logic [$clog2(NUM_PREGS)-1:0]   src2_preg;
    logic                           src1_hit;
    logic [31:0]                    src1_val;
    logic                           src2_hit;
    logic [31:0]                    src2_val;
    // Execute
    logic                           ex_valid    [NUM_FUS];
    logic [$clog2(NUM_PREGS)-1:0]   ex_dst_preg [NUM_FUS];
    logic [31:0]                    ex_val      [NUM_FUS];

    fwrd_unit dut (
        .src1_preg_i(src1_preg),
        .src2_preg_i(src2_preg),
        .src1_hit_o(src1_hit),
        .src1_val_o(src1_val),
        .src2_hit_o(src2_hit),
        .src2_val_o(src2_val),
        .ex_valid_i(ex_valid),
        .ex_dst_preg_i(ex_dst_preg),
        .ex_val_i(ex_val)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin

            clear_inputs();
        end
    endtask

    // Drive every DUT input to its idle value (called on each reset)
    task clear_inputs();
        begin
            for (int i = 0; i < NUM_FUS; i++) begin
                ex_valid[i]    = 1'b0;
                ex_dst_preg[i] = '0;
                ex_val[i]      = '0;
            end
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
            $display("[RESET] Reset complete\n");
        end
    endtask


    // Test 1
    task test_fwrd_miss();
        begin
            $display("\n[Test 1] Verify Forward Miss");
            ex_dst_preg[0] = 21;
            ex_valid[0] = 1'b1;
            ex_val[0] = 21;

            src1_preg = 9;
            src2_preg = 10;
            @(negedge clk);

            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src1 val: %0d",
            src1_hit,
            src1_val,
            src2_hit,
            src2_val);

            check_assertion("Src1 should receive forward miss", src1_hit == 1'b0);
            check_assertion("Src2 should receive forward miss", src2_hit == 1'b0);
        end
    endtask

    // Test 2
    task test_src1_hit();
        begin
            $display("\n[Test 2] Verify Source 1 Hit");
            ex_dst_preg[0] = 10;
            ex_valid[0] = 1'b1;
            ex_val[0] = 21;

            src1_preg = 10;
            src2_preg = 19;
            @(negedge clk);
                        
            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src1 val: %0d",
            src1_hit,
            src1_val,
            src2_hit,
            src2_val);

            check_assertion("Src1 should receive forward hit", src1_hit == 1'b1);
            check_assertion("Correct value should have been forwarded", src1_val == 21);
            check_assertion("Src2 should receive forward miss", src2_hit == 1'b0);
        end
    endtask

    // Test 3
    task test_src2_hit();
        begin
            $display("\n[Test 3] Verify Source 2 Hit");
            ex_dst_preg[0] = 10;
            ex_valid[0] = 1'b1;
            ex_val[0] = 21;

            src1_preg = 19;
            src2_preg = 10;
            @(negedge clk);
                        
            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src1 val: %0d",
            src1_hit,
            src1_val,
            src2_hit,
            src2_val);

            check_assertion("Src1 should receive forward miss", src1_hit == 1'b0);
            check_assertion("Correct value should have been forwarded", src2_val == 21);
            check_assertion("Src2 should receive forward hit", src2_hit == 1'b1);
        end
    endtask

    // Test 4
    task test_both_hit_different_fus();
        begin
         $display("\n[Test 4] Verify Both Sources can Hit on different Functional Units");
            ex_dst_preg[1] = 6;
            ex_valid[1] = 1'b1;
            ex_val[1] = 32;

            ex_dst_preg[3] = 7;
            ex_valid[3] = 1'b1;
            ex_val[3] = 64;

            src1_preg = 6;
            src2_preg = 7;
            @(negedge clk);
                        
            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src2 val: %0d",
            src1_hit,
            src1_val,
            src2_hit,
            src2_val);

            check_assertion("Src1 should receive forward hit", src1_hit == 1'b1);
            check_assertion("Correct value should have been forwarded to src1", src1_val == 32);
            check_assertion("Src2 should receive forward hit", src2_hit == 1'b1);
            check_assertion("Correct value should have been forwarded to src2", src2_val == 64);
        end
    endtask

     // Test 5
    task test_both_hit_same_fus();
        begin
         $display("\n[Test 5] Verify Both Sources can Hit on the same Functional Units");
            ex_dst_preg[2] = 8;
            ex_valid[2] = 1'b1;
            ex_val[2] = 16;

            src1_preg = 8;
            src2_preg = 8;
            @(negedge clk);
                        
            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src1 val: %0d",
            src1_hit,
            src1_val,
            src2_hit,
            src2_val);

            check_assertion("Src1 should receive forward hit", src1_hit == 1'b1);
            check_assertion("Correct value should have been forwarded to src1", src1_val == 16);
            check_assertion("Src2 should receive forward hit", src2_hit == 1'b1);
            check_assertion("Correct value should have been forwarded to src2", src1_val == 16);
        end
    endtask


    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Forwarding Unit Testbench ===");

        // Tests
        `RUN_TEST(test_fwrd_miss)
        `RUN_TEST(test_src1_hit)
        `RUN_TEST(test_src2_hit)
        `RUN_TEST(test_both_hit_different_fus)
        `RUN_TEST(test_both_hit_same_fus)

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
