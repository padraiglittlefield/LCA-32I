/*  Cache Controller! 

* L1 Data Cache plus MSHR
* 
*/

module cache_controller (
    input logic clk_i,
    input logic rst_i,

);  

    

    data_cache #(
        .BLOCK_SIZE(128),
        .NUM_ENTS(64)
    ) u_data_cache (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .wr_en(),
        .is_repair_i(),
        .is_repair_dirty_i(),
        .wr_addr_i(),
        .wr_data_i(),
        .rd_en(),
        .rd_addr_i(),
        .rd_data_o(),
        .rd_tag_o(),
        .wb_evicted_en(),
        .wb_evicted_block()     
    );


    // TODO: should speculative loads affect the cache? should we not issue any repairs until we know its not speculative
    miss_status_history_register mshr (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .flush_i(),
        .repair_complete_i(),    
        .repair_ack_i(),
        .ld_alloc_en_i(),
        .ld_alloc_addr_i(),
        .ld_alloc_idx_o(),
        .ld_alloc_vld_i(),
        .ld_alloc_rob_idx_i(),
        .ld_update_idx_i(),
        .ld_update_vld_i(),
        .ld_hit_miss_i(),
        .st_alloc_en_i(),
        .st_alloc_addr_i(),
        .st_alloc_data_i(),
        .st_alloc_idx_o(),
        .st_update_idx_i(),
        .st_update_vld_i(),
        .st_hit_miss_i(),
        .st_alloc_vld_o(),
        .st_alloc_rob_idx_i(),
        .ld_full_o(),
        .st_full_o(),
        .repair_req_o(),
        .repair_req_addr_o(),
        .repair_req_data_o(),
        .repair_req_rob_idx_o(),
        .repair_is_store_o()
    );

endmodule