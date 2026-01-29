`timescale 1ns/1ns

import CORE_PKG::*;
module tb_cache_controller;
    logic clk_i;
    logic rst_i;
    logic flush_i;
    logic lsu_req_vld_i;
    logic lsu_req_wr_rd_i;
    logic [31:0] lsu_req_addr_i;
    logic [31:0] lsu_req_data_i;
    logic [$clog2(ROB_ENTRIES)-1:0] lsu_req_rob_idx_i; 
    logic mem_req_vld_o;
    logic mem_req_addr_o;
    logic mem_resp_vld_i;
    logic [CACHE_BLOCK_SIZE-1:0] mem_resp_data_i; 
    logic mem_wb_vld_o;
    logic [CACHE_BLOCK_SIZE-1:0] mem_wb_data_o;
    logic cmt_ld_vld_o;
    logic [31:0] cmt_ld_data_o;
    logic [$clog2(ROB_ENTRIES)-1:0] cmt_rob_idx_o;

   cache_controller dut (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .flush_i(flush_i),
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
        .cmt_rob_idx_o(cmt_rob_idx_o)
);  

endmodule