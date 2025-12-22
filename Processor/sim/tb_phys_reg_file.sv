`timescale 1ns/1ns

import CORE_PKG::*;

module tb_phys_reg_file;
    
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
        $dumpvars(0,tb_phys_reg_file);
    end

    // For this test, only test with 1 pipe
    reg_read_reg_file_if reg_read_if[NUM_FUS]();
    execute_phys_reg_file_if exec_if[NUM_FUS]();

    phys_reg_file dut (
        .clk(clk),
        .rst(rst),
        .reg_read_if(reg_read_if),
        .exec_if(exec_if)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            reg_read_if[0].src1_val = '0;
            reg_read_if[0].src2_val = '0;
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

    // Write the value to the dst_reg
    task write_reg(input [31:0] value, input [$clog2(NUM_PREGS)-1:0] dst_reg);
        begin
            exec_if[0].ex_valid = 1'b1;
            exec_if[0].ex_val = value;
            exec_if[0].ex_dst_reg = dst_reg;
            @(negedge clk);
            $display("Wrote %0d to Register %0d at Cycle %0d", value, dst_reg, cycle_count);
            exec_if[0].ex_valid = 1'b0;
        end
    endtask

    // Read from src regs
    task test_reg_write();
        begin
            $display("\n[Test 1] Verify Register Writes");

            // write to reg file
            write_reg(32'd12, 7);
            @(posedge clk);
            write_reg(32'd13, 8);
            @(posedge clk);
            check_assertion("Value should have been written to register", dut.phys_reg_file[7] == 12);
            check_assertion("Value should have been written to register", dut.phys_reg_file[8] == 13);
        end
    endtask

    task test_read_reg();
        begin
            $display("\n[Test 2] Verify Register Reads");

            reg_read_if[0].src1_reg = 7;
            reg_read_if[0].src2_reg = 8;
            @(negedge clk);
            check_assertion("Should read src1 from register",reg_read_if[0].src1_val == 12);
            check_assertion("Should read src2 from register", reg_read_if[0].src2_val == 13);
        end
    endtask

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Physical Register File Testbench ===");
        reset_dut();

        // Tests
        test_reg_write();
        test_read_reg();

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
