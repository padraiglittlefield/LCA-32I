`timescale 1ns/1ns

import CORE_PKG::*;

module tb_reorder_buffer;
    
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
        $dumpfile("tb_reorder_buffer.vcd");
        $dumpvars(0,tb_reorder_buffer);
    end

    localparam RETIRE_WIDTH = 2;
    localparam FIRE_WIDTH = 2;

    dispatch_reorder_buffer_if disp_if[FIRE_WIDTH]();
    execute_reorder_buffer_if exec_if[3]();
    arch_reg_file_reorder_buffer_if arch_reg_file_if[RETIRE_WIDTH]();
    reorder_buffer_flush_unit_if flush_if();


    reorder_buffer #(
        .RETIRE_WIDTH(RETIRE_WIDTH),
        .FIRE_WIDTH(FIRE_WIDTH)
    ) dut (
        .clk(clk),
        .rst(rst),
        .disp_if(disp_if),
        .exec_if(exec_if),
        .arch_reg_file_if(arch_reg_file_if),
        .flush_if(flush_if)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            
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

    
    

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Reorder Buffer Testbench ===");
        reset_dut();

        // Tests
        


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
