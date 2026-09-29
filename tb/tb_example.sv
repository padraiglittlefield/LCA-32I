`timescale 1ns / 1ns
import CORE_PKG::*;

/*
    Template for my personal testbenches, with clock and check_assert
*/
module tb_example;
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;
    
    logic clk;
    logic rst;
    integer cycle_count = 0;
    
    // DUT signals
    
    /*
        Define DUT signals here

    */
    
    // Test tracking
    integer pass_count = 0;
    integer fail_count = 0;
    
    // Instantiate DUT
    example dut (
        .clk(clk),
        .rst(rst)
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
        $dumpfile("tb_EXAMPLE.vcd");
        $dumpvars(0, tb_EXAMPLE);
    end
    
    Initialize signals
    task init_signals();
        begin
            clk = 0;
            rst = 1;
            
            // Init DUT input signals
        end
    endtask
    
    Check assertion and update counters
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
    
    Reset sequence
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
    
    /*
    Dispatch an entry
    task dispatch_entry(input [(RS_ENTRIES * NUM_FUS)-1:0] dep_mask);
        begin
            disp_valid = 1;
            dependency_mask = dep_mask;
            @(negedge clk);
            $display("  Dispatched to entry: %0d, Full: %0b, Reqs: %b", free_entry_out, full_out, reqs);
            disp_valid = 0;
            @(negedge clk);
        end
    endtask

    
    // Test 1: Dispatch with no dependencies
    task test_dispatch_no_deps();
        begin
            $display("\n[Test 1] Dispatch entry with no dependencies");
            dispatch_entry('0);
            @(posedge clk);
            check_assertion("Entry should be valid after dispatch", dut.entry_valid[0] == 1'b1);
            check_assertion("Should have request after dispatch with no deps", reqs[0] == 1'b1);
        end
    endtask
    */

    // Main test sequence
    initial begin
        init_signals();
        
        $display("=== Example Module Testbench ===");
        reset_dut();
        
        // call tests here
        
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
