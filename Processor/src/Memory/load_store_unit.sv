module load_store_unit (
    input clk, 
    input rst
);

//TODO: Go back and make sure everything works with all types of mem instructions
//TODO: Make sure speculative state is flushed but that unspectulative state remains. Espically with the SDQ. I think LDQ can just be lfushed
load_data_queue u_ldq (
    .clk_i(),
    .rst_i(),
    .flush_i(),
    .disp_vld_i(),
    .disp_dsq_marker_i(),
    .ldq_disp_idx_o(),
    .ldq_full_o(),
    .exec_vld_i(),
    .exec_ldq_idx_i(),
    .exec_addr_i(),
    .issue_en_i(),
    .issue_entry_o(),
    .issue_vld_o()
);

store_data_queue u_sdq (
    .clk_i(),
    .rst_i(),
    .flush_i(),
    .disp_vld_i(),
    .store_data_i(),
    .cmit_vld_i(),
    .cmit_idx_i(),
    .exec_vld_i(),
    .exec_addr_i(),
    .sdq_alloc_idx_o(),
    .sdq_full_o(),
    .issue_en_i(),
    .issue_entry_o(),
    .isse_vld_o(),
    .ld_vld_i(),
    .ld_addr_i(),
    .ld_sdq_marker_i(),
    .ld_hit_o(),
    .ld_data_o()
);

cache_controller u_cache_controller(
    .clk_i(),
    .rst_i()

);



// main_memory_interface u_mmu (

// );

endmodule
