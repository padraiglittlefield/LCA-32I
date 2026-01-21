`timescale 1ns/1ns

import CORE_PKG::*;

    
module tb_load_data_queue;
    // ===== Testbench Setup ===== //
    
    
    // generate clock
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

    logic clk;
    logic rst;
    logic flush = 0;
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
        $dumpfile("tb_load_data_queue.fst");
        $dumpvars(0,tb_load_data_queue);
        // $dumpvars(0, tb_load_data_queue.dut.ldq);  
    end

    localparam RETIRE_WIDTH = 2;
    localparam FIRE_WIDTH = 2;
    
    logic disp_vld_i;
    logic [$clog2(SDQ_ENTRIES):0] disp_sdq_marker_i;
    logic [$clog2(LDQ_ENTRIES)-1:0] ldq_disp_idx_o;
    logic ldq_full_o;
    logic exec_vld_i;
    logic [$clog2(LDQ_ENTRIES)-1:0] exec_ldq_idx_i;
    logic [31:0] exec_addr_i;
    logic issue_en_i;
    ldq_entry_t issue_entry_o;
    logic issue_vld_o;


    load_data_queue dut (
        .clk_i(clk),
        .rst_i(rst),
        .flush_i(flush),
        .disp_vld_i(disp_vld_i),
        .disp_sdq_marker_i(disp_sdq_marker_i),
        .ldq_disp_idx_o(ldq_disp_idx_o),
        .ldq_full_o(ldq_full_o),
        .exec_vld_i(exec_vld_i),
        .exec_ldq_idx_i(exec_ldq_idx_i),
        .exec_addr_i(exec_addr_i),
        .issue_en_i(issue_en_i),   // can we issue a load
        .issue_entry_o(issue_entry_o),
        .issue_vld_o(issue_vld_o)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            disp_vld_i = 0;
            disp_sdq_marker_i = 0;
            exec_vld_i = 0;
            exec_ldq_idx_i = 0;
            exec_addr_i = 0;
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


    // helper methods

    task dispatch_entry(
        input logic [$clog2(SDQ_ENTRIES):0] sdq_marker
    );
        begin
            //set all stuff
            disp_sdq_marker_i = sdq_marker; 
            disp_vld_i = 1;
            @(negedge clk);
            disp_vld_i = 0;
            @(negedge clk);
        end
    endtask

    task update_addr (
        input logic                             addr_vld,
        input logic [$clog2(LDQ_ENTRIES)-1:0]   addr_ldq_idx,
        input logic [31:0]                      addr
    );
        begin
            exec_vld_i = 1;
            exec_ldq_idx_i = addr_ldq_idx;
            exec_addr_i = addr;
            @(negedge clk);
            exec_vld_i = 0;
            @(negedge clk);
        end
    endtask

    task update_addr_repeat (
        input logic                             addr_vld,
        input logic [$clog2(LDQ_ENTRIES)-1:0]   addr_ldq_idx,
        input logic [31:0]                      addr
    );
        begin
            exec_vld_i = 1;
            exec_ldq_idx_i = addr_ldq_idx;
            exec_addr_i = addr;
            @(negedge clk);
        end
    endtask
    

    // Tests

    task test_alloc();
        begin
            dispatch_entry(5);
        end
    endtask

    task test_issue();
        begin
            update_addr(0, 15, 5108);
            update_addr(1, 15, 5108);
        end
    endtask

    task test_fill();
        begin
            for(int i = 0; i < 17; i++) begin
                dispatch_entry(5);
            end
        end
    endtask

    task test_empty();
        begin
            for(int i = 0; i < 17; i++) begin
                update_addr_repeat(1, i, i*3);
            end
        end
    endtask
    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== LDQ Testbench ===");
        reset_dut();

        // Tests
        test_alloc();
        test_issue();

        reset_dut();

        test_fill();
        test_empty();
        
        
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
