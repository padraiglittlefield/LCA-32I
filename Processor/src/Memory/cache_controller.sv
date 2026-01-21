/*  Cache Controller! 

* L1 Data Cache plus MSHR
* Currently single cycle for reading from cache, highly unrealistic and should make it at least 2 soon

*/

module cache_controller (
    input logic clk_i,
    input logic rst_i,

);

    //TODO: Writeback mechanism

    data_cache #(
        .BLOCK_SIZE(128),
        .NUM_ENTS(64)
    ) u_data_cache (
        .clk(clk_i),
        .rst(rst_i),
        .wr_en(),                  
        .is_repair_i(),            
        .repair_data_i(),
        .is_repair_dirty_i(),           
        .wr_addr_i(),               
        .wr_data_i(),               
        .rd_en(),                  
        .rd_addr_i(),    
        .rd_data_o(),               
        .rd_hit_o(),                
        .wr_hit_o(),                
        .wb_evicted_en(),
        .wb_evicted_block()    
    );

    // TODO: should speculative loads affect the cache? should we not issue any repairs until we know its not speculative
    miss_status_history_register mshr (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .repair_complete_i(),
        .repair_ack_i(),
        .ld_alloc_en_i(),
        .ld_alloc_addr_i(),
        .ld_alloc_rob_idx_i(),
        .st_alloc_en_i(),
        .st_alloc_addr_i(),
        .st_alloc_data_i(),
        .st_alloc_rob_idx_i(),
        .ld_full_o(),
        .st_full_o(),
        .repair_req_o(),
        .repair_req_addr_o(),
        .repair_req_data_o(),
        .repair_req_rob_idx(),
        .repair_is_store_o()
    );

endmodule