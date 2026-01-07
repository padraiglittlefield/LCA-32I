`timescale 1ns/1ns

import CORE_PKG::*;

    
module tb_store_data_queue;
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
        $dumpfile("tb_store_data_queue.fst");
        $dumpvars(0,tb_store_data_queue);
        // $dumpvars(0, tb_store_data_queue.dut.ldq);  
    end

    localparam RETIRE_WIDTH = 2;
    localparam FIRE_WIDTH = 2;

    logic disp_vld;       // whether the instr is valid
    logic store_data;
    logic exec_vld;
    logic [$clog2(SDQ_ENTRIES)-1:0] exec_sdq_idx;
    logic [31:0] exec_addr;
    logic cmit_vld;       // valid commit from rob
    logic [$clog2(SDQ_ENTRIES)-1:0] cmit_idx;       // index of entry holding committed instruction
    logic [$clog2(SDQ_ENTRIES)-1:0] sdq_alloc_idx;  // index of recently allocated instr (for use as sdq_marker)
    logic sdq_full;       // whether the sdq is full
    sdq_entry_t issue_entry; // output entry of issuing instruction
    logic issue_vld;        // valid issue


    store_data_queue dut (
        .clk(clk),
        .rst(rst),
        .disp_vld(disp_vld),
        .store_data(store_data),
        .exec_vld(exec_vld),
        .exec_sdq_idx(exec_sdq_idx),
        .exec_addr(exec_addr),
        .cmit_vld(cmit_vld),       
        .cmit_idx(cmit_idx), 
        .sdq_alloc_idx(sdq_alloc_idx),
        .sdq_full(sdq_full),
        .issue_entry(issue_entry),
        .issue_vld(issue_vld)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            disp_vld = 0;
            store_data = 0;
            exec_vld = 0;
            exec_sdq_idx = 0;
            exec_addr = 0;
            cmit_vld = 0;
            cmit_idx = 0;
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

    // ================================
    // ======== Helper Methods ========
    // ================================
    
    task dispatch_entry(
        input logic [31:0]  data
    );
        begin
            //set all stuff
            disp_vld = 1;
            store_data = data;
            @(negedge clk);
            disp_vld = 0;
            store_data = 0;
            @(negedge clk);
        end
    endtask

    task update_addr (
        input logic                             addr_vld,
        input logic [$clog2(SDQ_ENTRIES)-1:0]   addr_ldq_idx,
        input logic [31:0]                      addr
    );
        begin
            exec_vld = 1;
            exec_sdq_idx = addr_ldq_idx;
            exec_addr = addr;
            @(negedge clk);
            exec_vld = 0;
            @(negedge clk);
        end
    endtask
    

    task commit_store (
        input logic [$clog2(SDQ_ENTRIES)-1:0]   sdq_idx
    );
        begin
            cmit_vld = 1;
            cmit_idx = sdq_idx;
            @(negedge clk);
            cmit_vld = 0;
            @(negedge clk);
        end
    endtask
    
    // ================================
    // ====== End Helper Methods ======
    // ================================

    // ================================
    // ============= TESTS ============
    // ================================
    
    task test_alloc();
        begin
            dispatch_entry(21);
        end
    endtask

    task test_exec();
        begin
            update_addr(1, dut.head_ptr, 5108);
        end
    endtask

    task test_issue();
        begin
            commit_store(dut.head_ptr);
        end
    endtask

    task test_fill();
        begin
            for(int i = 0; i < 17; i++) begin
                dispatch_entry(i);
            end
        end
    endtask

     task test_empty();
        begin
            for(int i = 0; i < 16; i++) begin
                update_addr(1, i, i*3);
            end
            for(int i = 0; i < 16; i++) begin
                commit_store(i);
            end
        end
    endtask

    // TODO: FINSIHS
    task test_lookup();
        begin
        end
    endtask

    // ================================
    // ========== END TESTS ===========
    // ================================


    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== SDQ Testbench ===");
        reset_dut();

        // Tests

        // basic tests
        test_alloc();
        test_exec();
        test_issue();

        // test filling and emptying
        reset_dut();
        test_fill();
        test_empty();

        reset_dut();
        
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
