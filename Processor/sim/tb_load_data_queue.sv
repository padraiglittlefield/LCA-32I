`timescale 1ns/1ns

import CORE_PKG::*;

    
module tb_load_data_queue;
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
        $dumpfile("tb_load_data_queue.vcd");
        $dumpvars(0,tb_load_data_queue);
    end

    localparam RETIRE_WIDTH = 2;
    localparam FIRE_WIDTH = 2;

    logic disp_vld;
    logic [$clog2(SDQ_ENTRIES):0] disp_sdq_marker;
    logic [$clog2(LDQ_ENTRIES)-1:0] disp_ldq_idx;
    logic disp_full;
    logic exec_vld;
    logic [$clog2(LDQ_ENTRIES)-1:0] exec_ldq_idx;
    logic [31:0] exec_addr;
    ldq_entry_t issue_entry;
    logic issue_vld;


    load_data_queue dut (
        .clk(clk),
        .rst(rst),
        .disp_vld(disp_vld),
        .disp_sdq_marker(disp_sdq_marker),
        .disp_ldq_idx(disp_ldq_idx),
        .disp_full(disp_full),
        .exec_vld(exec_vld),
        .exec_ldq_idx(exec_ldq_idx),
        .exec_addr(exec_addr),
        .issue_entry(issue_entry),
        .issue_vld(issue_vld)
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
        $display("=== LDQ Testbench ===");
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
