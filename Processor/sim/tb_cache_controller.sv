`timescale 1ns/1ns

import CORE_PKG::*;
module tb_cache_controller;

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
        $dumpfile("tb_cache_controller.fst");
        $dumpvars(0,tb_cache_controller);
    end

    logic flush;
    logic lsu_req_vld_i;
    logic lsu_req_wr_rd_i;
    logic [31:0] lsu_req_addr_i;
    logic [31:0] lsu_req_data_i;
    logic [$clog2(ROB_ENTRIES)-1:0] lsu_req_rob_idx_i; 
    logic mem_req_vld_o;
    logic [31:0] mem_req_addr_o;
    logic mem_resp_vld_i;
    logic [CACHE_BLOCK_SIZE-1:0] mem_resp_data_i; 
    logic mem_wb_vld_o;
    logic [CACHE_BLOCK_SIZE-1:0] mem_wb_data_o;
    logic cmt_ld_vld_o;
    logic [31:0] cmt_ld_data_o;
    logic [$clog2(ROB_ENTRIES)-1:0] cmt_rob_idx_o;
    logic stall_controller_o;

   cache_controller dut (
        .clk_i(clk),
        .rst_i(rst),
        .flush_i(flush),
        .lsu_req_vld_i(lsu_req_vld_i),
        .lsu_req_wr_rd_i(lsu_req_wr_rd_i),
        .lsu_req_addr_i(lsu_req_addr_i),
        .lsu_req_data_i(lsu_req_data_i),
        .lsu_req_rob_idx_i(lsu_req_rob_idx_i), 
        .mem_req_vld_o(mem_req_vld_o),
        .mem_req_addr_o(mem_req_addr_o),
        .mem_resp_vld_i(mem_resp_vld_i),
        .mem_resp_data_i(mem_resp_data_i), 
        .mem_wb_vld_o(mem_wb_vld_o),
        .mem_wb_data_o(mem_wb_data_o),
        .cmt_ld_vld_o(cmt_ld_vld_o),
        .cmt_ld_data_o(cmt_ld_data_o),
        .cmt_rob_idx_o(cmt_rob_idx_o),
        .stall_controller_o(stall_controller_o)
);  


 // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            flush = 0;
            lsu_req_vld_i = 0;
            lsu_req_wr_rd_i = 0;
            lsu_req_addr_i = 0;
            lsu_req_data_i = 0;
            lsu_req_rob_idx_i = 0;
            mem_resp_vld_i = 0;
            mem_resp_data_i = 0;
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

    task test_read_miss_repair();
        @(negedge clk);
        lsu_req_vld_i = 1'b1;
        lsu_req_wr_rd_i = 0;
        lsu_req_addr_i = 32'hFFFF_0000;
        lsu_req_data_i = 0;
        @(negedge clk);
        lsu_req_vld_i = 1'b0;
        lsu_req_wr_rd_i = 0;
        lsu_req_addr_i = 0;
        lsu_req_data_i = 0;
        // check_assertion("Cache Controller requests correct address", mem_req_addr_o == 32'hFFFF_0000);
        repeat(10) @(posedge clk); // simulate going to main memory
        @(negedge clk);
        mem_resp_vld_i = 1'b1;
        mem_resp_data_i = 5;
        @(negedge clk);
        mem_resp_vld_i = 1'b0;
        mem_resp_data_i = 0;
    endtask

    task test_read_hit();
        @(posedge clk);
        lsu_req_vld_i = 1'b1;
        lsu_req_wr_rd_i = 0;
        lsu_req_addr_i = 32'hFFFF_0000;
        lsu_req_data_i = 0;
        @(posedge clk);
        lsu_req_vld_i = 1'b0;
        lsu_req_wr_rd_i = 0;
        lsu_req_addr_i = 0;
        lsu_req_data_i = 0;
    endtask

    task test_write_hit();
         @(posedge clk);
        lsu_req_vld_i = 1'b1;
        lsu_req_wr_rd_i = 1;
        lsu_req_addr_i = 32'hFFFF_0000;
        lsu_req_data_i = 23;
        @(posedge clk);
        lsu_req_vld_i = 1'b0;
        lsu_req_wr_rd_i = 0;
        lsu_req_addr_i = 0;
        lsu_req_data_i = 0;
    endtask

    task test_write_miss_repair();
        @(negedge clk);
        lsu_req_vld_i = 1'b1;
        lsu_req_wr_rd_i = 1'b1;
        lsu_req_addr_i = 32'hFFFF_1000;
        lsu_req_data_i = 57;
        @(negedge clk);
        lsu_req_vld_i = 1'b0;
        lsu_req_wr_rd_i = 0;
        lsu_req_addr_i = 0;
        lsu_req_data_i = 0;
        // check_assertion("Cache Controller requests correct address", mem_req_addr_o == 32'hFFFF_0000);
        repeat(10) @(posedge clk); // simulate going to main memory
        @(negedge clk);
        mem_resp_vld_i = 1'b1;
        mem_resp_data_i = 0;
        @(negedge clk);
        mem_resp_vld_i = 1'b0;
        mem_resp_data_i = 0;
    endtask

    task test_writeback_dirty();
    @(negedge clk);
        lsu_req_vld_i = 1'b1;
        lsu_req_wr_rd_i = 0;
        lsu_req_addr_i = 32'hEEFF_1000;
        lsu_req_data_i = 0;
        @(negedge clk);
        lsu_req_vld_i = 1'b0;
        lsu_req_wr_rd_i = 0;
        lsu_req_addr_i = 0;
        lsu_req_data_i = 0;
        // check_assertion("Cache Controller requests correct address", mem_req_addr_o == 32'hFFFF_0000);
        repeat(10) @(posedge clk); // simulate going to main memory
        @(negedge clk);
        mem_resp_vld_i = 1'b1;
        mem_resp_data_i = 17;
        @(negedge clk);
        mem_resp_vld_i = 1'b0;
        mem_resp_data_i = 0;
    endtask

    initial begin
        init_signals();
        $display("Beginning Cache Controller Testbench");
        $monitor("Clk-Cycle: [%d] | rst %b | Repair Request %b | Repair Address %d | Memory Writeback %b | Writeback Data %d | Load Valid %b | Load Data %d | Load RoB Entry %d" ,
            cycle_count, rst, mem_req_vld_o, mem_req_addr_o, mem_wb_vld_o, mem_wb_data_o, cmt_ld_vld_o, cmt_ld_data_o, cmt_rob_idx_o);
        
        @(posedge clk);
        // Run Tests
        test_read_miss_repair();
        @(posedge clk);
        test_read_hit();
        test_write_hit();
        test_read_hit();
        // test_write_miss_repair();
        // test_writeback_dirty();
        // @(posedge clk); // For some reason you must wait one cycle after a stall is complete
        
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