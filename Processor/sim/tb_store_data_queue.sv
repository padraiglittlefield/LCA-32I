`timescale 1ns/1ns

import CORE_PKG::*;

    
module tb_store_data_queue;
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
        $dumpfile("tb_store_data_queue.fst");
        $dumpvars(0,tb_store_data_queue);
        // $dumpvars(0, tb_store_data_queue.dut.ldq);  
    end

    localparam RETIRE_WIDTH = 2;
    localparam FIRE_WIDTH = 2;

    logic                               disp_vld_i;
    logic   [31:0]                      store_data_i;     // whether the instr is valid
    logic                               cmit_vld_i;       // valid commit from rob
    logic   [$clog2(SDQ_ENTRIES)-1:0]   cmit_idx_i;       // index of entry holding committed instruction
    logic                               exec_vld_i;
    logic   [$clog2(SDQ_ENTRIES)-1:0]   exec_sdq_idx_i;
    logic   [31:0]                      exec_addr_i;
    logic   [$clog2(SDQ_ENTRIES)-1:0]   sdq_alloc_idx_o;  // index of recently allocated instr (for use as sdq_marker)
    logic                               sdq_full_o;       // whether the sdq is full
    sdq_entry_t                         issue_entry_o; // output entry of issuing instruction
    logic                               issue_vld_o;        // valid issue
    logic                               ld_vld_i;
    logic   [31:0]                      ld_addr_i;
    logic   [$clog2(SDQ_ENTRIES)-1:0]   ld_sdq_marker_i;
    logic                               ld_hit_o;
    logic   [31:0]                      ld_data_o;


    store_data_queue dut (
        .clk_i(clk),
        .rst_i(rst),
        .flush_i(flush),
        .disp_vld_i(disp_vld_i),
        .store_data_i(store_data_i),     
        .cmit_vld_i(cmit_vld_i),       
        .cmit_idx_i(cmit_idx_i),       
        .exec_vld_i(exec_vld_i),
        .exec_sdq_idx_i(exec_sdq_idx_i),
        .exec_addr_i(exec_addr_i),
        .sdq_alloc_idx_o(sdq_alloc_idx_o),  
        .sdq_full_o(sdq_full_o),       
        .issue_entry_o(issue_entry_o),
        .issue_vld_o(issue_vld_o),        
        .ld_vld_i(ld_vld_i),
        .ld_addr_i(ld_addr_i),
        .ld_sdq_marker_i(ld_sdq_marker_i),
        .ld_hit_o(ld_hit_o),
        .ld_data_o(ld_data_o)

    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            disp_vld_i = 0;
            store_data_i = 0;
            exec_vld_i = 0;
            exec_sdq_idx_i = 0;
            exec_addr_i = 0;
            cmit_vld_i = 0;
            cmit_idx_i = 0;
            ld_vld_i = 0;
            ld_addr_i = 0;
            ld_sdq_marker_i = 0;
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
            disp_vld_i = 1;
            store_data_i = data;
            @(negedge clk);
            disp_vld_i = 0;
            store_data_i = 0;
            @(negedge clk);
        end
    endtask

    task update_addr (
        input logic                             addr_vld,
        input logic [$clog2(SDQ_ENTRIES)-1:0]   addr_ldq_idx,
        input logic [31:0]                      addr
    );
        begin
            exec_vld_i = 1;
            exec_sdq_idx_i = addr_ldq_idx;
            exec_addr_i = addr;
            @(negedge clk);
            exec_vld_i = 0;
            @(negedge clk);
        end
    endtask
    

    task commit_store (
        input logic [$clog2(SDQ_ENTRIES)-1:0]   sdq_idx
    );
        begin
            cmit_vld_i = 1;
            cmit_idx_i = sdq_idx;
            @(negedge clk);
            cmit_vld_i = 0;
            @(negedge clk);
        end
    endtask

    task load_lookup (
        input logic [31:0] addr,
        input logic [$clog2(SDQ_ENTRIES)-1:0] sdq_marker
    );
        begin
            ld_vld_i = 1;
            ld_addr_i = addr;
            ld_sdq_marker_i = sdq_marker;
            @(negedge clk);
            ld_vld_i = 0;
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
            check_assertion("First entry should be valid", dut.sdq[0].valid == 1);
            check_assertion("First entry should have correct data", dut.sdq[0].store_data == 21);
        end
    endtask

    task test_exec();
        begin
            update_addr(1, dut.head_ptr, 5108);
            check_assertion("First entry should have valid addr", dut.sdq[0].addr_valid == 1);
            check_assertion("First entry should have correct addr", dut.sdq[0].addr == 5108);
        end
    endtask

    task test_issue();
        begin
            commit_store(dut.head_ptr);
            check_assertion("First entry should be committed", dut.sdq[0].committed == 1);
            check_assertion("First entry should be issued", dut.issue_vld_o == 1);
            check_assertion("Issued entry should have correct data", dut.issue_entry_o.store_data == 21);
            check_assertion("Issued entry should have correct addr", dut.issue_entry_o.addr == 5108);
        end
    endtask

    task test_fill();
        begin
            for(int i = 0; i < 17; i++) begin
                dispatch_entry(i);
            end
            check_assertion("SDQ should be full", dut.full == 1);
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

    task test_lookup();
        begin
            dispatch_entry(510);
            update_addr(1, dut.head_ptr, 8);
            load_lookup(8, 0); // should miss
            check_assertion("Load Miss, correct addr but wrong ordering", dut.ld_hit_o == 0);
            load_lookup(8, 1); // should hit
            check_assertion("Load Hit, correct addr and correct ordering", dut.ld_hit_o == 1);
            check_assertion("Hit results in correct data", dut.ld_data_o == 510);
            load_lookup(15, 1); // should miss
            check_assertion("Load Miss, wrong addr and correct ordering", dut.ld_hit_o == 0);
            load_lookup(15, 0); // should miss
            check_assertion("Load Miss, wrong addr and wrong ordering", dut.ld_hit_o == 0);

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
        test_lookup();
        
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
