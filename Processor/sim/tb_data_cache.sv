`timescale 1ns/1ns

import CORE_PKG::*;
module tb_data_cache;
    logic clk;
    logic rst;
    logic wr_en; 
    logic is_repair_i; 
    logic is_repair_dirty_i;  
    logic [31:0] wr_addr_i;
    cache_data_block wr_data_i;  
    logic rd_en;  
    logic [31:0] rd_addr_i;  
    cache_data_block rd_data_o;  
    cache_metadata_block rd_tag_o;
    logic wb_evicted_en;   
    cache_data_block wb_evicted_block;  

    data_cache dut (
        .clk_i(clk),
        .rst_i(rst),
        .wr_en(wr_en), 
        .is_repair_i(is_repair_i), 
        .is_repair_dirty_i(is_repair_dirty_i),  
        .wr_addr_i(wr_addr_i),
        .wr_data_i(wr_data_i),  
        .rd_en(rd_en),  
        .rd_addr_i(rd_addr_i),  
        .rd_data_o(rd_data_o),  
        .rd_tag_o(rd_tag_o),
        .wb_evicted_en(wb_evicted_en),   
        .wb_evicted_block(wb_evicted_block)  
    );

endmodule