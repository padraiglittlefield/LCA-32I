`timescale 1ns/1ns

import CORE_PKG::*;

module tb_fwrd_unit;
    
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
        $dumpfile("tb_phys_reg_file.vcd");
        $dumpvars(0,tb_phy_reg_file);
    end

    
    fwrd_reg_read_if reg_read_if();
    execute_fwrd_if exec_if[NUM_FUS]();
 

    fwrd_unit dut (
        .reg_read_if(reg_read_if),
        .exec_if(exec_if)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            reg_read_if.src1_fwrd_hit = '0;
            reg_read_if.src1_val = '0;
            reg_read_if.src2_fwrd_hit = '0;
            reg_read_if.src2_val = '0; 
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


    // Test 1
    task test_fwrd_miss();
        begin
            $display("\n[Test 1] Verify Forward Miss");
            exec_if[0].dst_reg = 21;
            exec_if[0].ex_valid = 1'b1;
            exec_if[0].ex_val = 21;

            reg_read_if.src1_reg = 9;
            reg_read_if.src2_reg = 10;
            @(negedge clk);

            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src1 val: %0d",
            reg_read_if.src1_fwrd_hit,
            reg_read_if.src1_val,
            reg_read_if.src2_fwrd_hit,
            reg_read_if.src2_val);

            check_assertion("Src1 should receive forward miss", reg_read_if.src1_fwrd_hit == 1'b0);
            check_assertion("Src2 should receive forward miss", reg_read_if.src2_fwrd_hit == 1'b0);
        end
    endtask

    // Test 2
    task test_src1_hit();
        begin
            $display("\n[Test 2] Verify Source 1 Hit");
            exec_if[0].dst_reg = 10;
            exec_if[0].ex_valid = 1'b1;
            exec_if[0].ex_val = 21;

            reg_read_if.src1_reg = 10;
            reg_read_if.src2_reg = 19;
            @(negedge clk);
                        
            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src1 val: %0d",
            reg_read_if.src1_fwrd_hit,
            reg_read_if.src1_val,
            reg_read_if.src2_fwrd_hit,
            reg_read_if.src2_val);

            check_assertion("Src1 should receive forward hit", reg_read_if.src1_fwrd_hit == 1'b1);
            check_assertion("Correct value should have been forwarded", reg_read_if.src1_val == 21);
            check_assertion("Src2 should receive forward miss", reg_read_if.src2_fwrd_hit == 1'b0);
        end
    endtask

    // Test 3
    task test_src2_hit();
        begin
            $display("\n[Test 3] Verify Source 2 Hit");
            exec_if[0].dst_reg = 10;
            exec_if[0].ex_valid = 1'b1;
            exec_if[0].ex_val = 21;

            reg_read_if.src1_reg = 19;
            reg_read_if.src2_reg = 10;
            @(negedge clk);
                        
            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src1 val: %0d",
            reg_read_if.src1_fwrd_hit,
            reg_read_if.src1_val,
            reg_read_if.src2_fwrd_hit,
            reg_read_if.src2_val);

            check_assertion("Src1 should receive forward miss", reg_read_if.src1_fwrd_hit == 1'b0);
            check_assertion("Correct value should have been forwarded", reg_read_if.src2_val == 21);
            check_assertion("Src2 should receive forward hit", reg_read_if.src2_fwrd_hit == 1'b1);
        end
    endtask

    // Test 4
    task test_both_hit_different_fus();
        begin
         $display("\n[Test 4] Verify Both Sources can Hit on different Functional Units");
            exec_if[1].dst_reg = 6;
            exec_if[1].ex_valid = 1'b1;
            exec_if[1].ex_val = 32;

            exec_if[3].dst_reg = 7;
            exec_if[3].ex_valid = 1'b1;
            exec_if[3].ex_val = 64;

            reg_read_if.src1_reg = 6;
            reg_read_if.src2_reg = 7;
            @(negedge clk);
                        
            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src2 val: %0d",
            reg_read_if.src1_fwrd_hit,
            reg_read_if.src1_val,
            reg_read_if.src2_fwrd_hit,
            reg_read_if.src2_val);

            check_assertion("Src1 should receive forward hit", reg_read_if.src1_fwrd_hit == 1'b1);
            check_assertion("Correct value should have been forwarded to src1", reg_read_if.src1_val == 32);
            check_assertion("Src2 should receive forward hit", reg_read_if.src2_fwrd_hit == 1'b1);
            check_assertion("Correct value should have been forwarded to src2", reg_read_if.src2_val == 64);
        end
    endtask

     // Test 5
    task test_both_hit_same_fus();
        begin
         $display("\n[Test 5] Verify Both Sources can Hit on the same Functional Units");
            exec_if[2].dst_reg = 8;
            exec_if[2].ex_valid = 1'b1;
            exec_if[2].ex_val = 16;

            reg_read_if.src1_reg = 8;
            reg_read_if.src2_reg = 8;
            @(negedge clk);
                        
            $display("Foward Unit Output: src1 hit: %b, src1 val: %0d, src2 Hit: %b, src1 val: %0d",
            reg_read_if.src1_fwrd_hit,
            reg_read_if.src1_val,
            reg_read_if.src2_fwrd_hit,
            reg_read_if.src2_val);

            check_assertion("Src1 should receive forward hit", reg_read_if.src1_fwrd_hit == 1'b1);
            check_assertion("Correct value should have been forwarded to src1", reg_read_if.src1_val == 16);
            check_assertion("Src2 should receive forward hit", reg_read_if.src2_fwrd_hit == 1'b1);
            check_assertion("Correct value should have been forwarded to src2", reg_read_if.src1_val == 16);
        end
    endtask


    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Forwarding Unit Testbench ===");
        reset_dut();

        // Tests
        test_fwrd_miss();
        test_src1_hit();
        test_src2_hit();
        test_both_hit_different_fus();
        test_both_hit_same_fus();

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
