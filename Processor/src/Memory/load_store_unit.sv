/* Load Store Unit

*/

module load_store_unit (
    input   logic                               clk_i, 
    input   logic                               rst_i,
    input   logic                               flush_i,

    // Dispatch
    input   logic                               disp_vld_i,
    input   logic                               disp_is_store_i,
    input   logic   [31:0]                      disp_store_data_i,
    input   logic   [$clog2(SDQ_ENTRIES):0]     disp_sdq_marker_i,  // current SDQ tail at dispatch time
    input   logic   [$clog2(ROB_ENTRIES)-1:0]   disp_rob_idx_i,
    output  logic   [$clog2(LDQ_ENTRIES)-1:0]   disp_ldq_idx_o,     // allocated LDQ entry for this load
    output  logic   [$clog2(SDQ_ENTRIES)-1:0]   disp_sdq_idx_o,     // allocated SDQ entry for this store
    output  logic                               ldq_full_o,
    output  logic                               sdq_full_o,
    // output  logic                               stall_mem

    // Execute (AGU)
    input   logic                               agu_vld_i,
    input   logic                               agu_is_store_i,
    input   logic   [31:0]                      agu_addr_i,
    input   logic   [31:0]                      agu_store_data_i,
    input   logic   [$clog2(ROB_ENTRIES)-1:0]   agu_rob_idx_i,
    input   logic   [$clog2(LDQ_ENTRIES)-1:0]   agu_ldq_idx_i,
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   agu_sdq_idx_i,

    // ROB
    input   logic                               rob_store_cmit_vld_i,   // indicates that a store has been committed and we can thusly fire it (no longer speculative)
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   rob_store_cmit_idx_i,   // the commited store's entry in the sdq
    output  logic                               ld_cmt_vld_o,       
    output  logic   [31:0]                      ld_cmt_data_o,
    output  logic   [$clog2(ROB_ENTRIES)-1:0]   ld_cmt_rob_idx_o,

    // Main Memory
    output  logic                               mem_req_vld_o,
    output  logic   [31:0]                      mem_req_addr_o,
    input   logic                               mem_resp_vld_i,
    input   logic   [CACHE_BLOCK_SIZE-1:0]      mem_resp_data_i,
    output  logic   [CACHE_BLOCK_SIZE-1:0]      mem_wb_data_o,
    output  logic                               mem_wb_vld_o


);

//TODO: Go back and make sure everything works with all types of mem instructions
//TODO: Make sure speculative state is flushed but that unspectulative state remains. Espically with the SDQ. I think LDQ can just be lfushed
//      ^ this is mostly implemented by it needs to be double checked

import CORE_PKG::*;

logic ldq_issue_vld;
ldq_entry_t ldq_issue_entry;
logic ldq_issue_en;
logic ldq_issue_ack;
logic sdq_issue_vld;
logic sdq_issue_ack;
sdq_entry_t sdq_issue_entry;
logic sdq_issue_en;
logic [$clog2(SDQ_ENTRIES)-1:0] sdq_alloc_idx;
logic fwd_hit;
logic [31:0] fwd_data;
logic ld_ambig_stall;
logic cache_req_vld;
logic cache_req_is_store;
logic [31:0] cache_req_addr;
logic [31:0] cache_req_data;
logic [$clog2(ROB_ENTRIES)-1:0] cache_req_rob_idx;
logic cache_ld_cmt_vld;
logic [31:0]  cache_ld_cmt_data;
logic [$clog2(ROB_ENTRIES)-1:0] cache_ld_cmt_rob_idx;
logic cache_stalled;





// ========= LDQ ========= // 
load_data_queue u_ldq (
    .clk_i              (clk_i),
    .rst_i              (rst_i),
    .flush_i            (flush_i),
    .disp_vld_i         (disp_vld_i & ~disp_is_store_i),
    .disp_sdq_marker_i  (disp_sdq_marker_i),
    .ldq_disp_idx_o     (disp_ldq_idx_o),
    .ldq_full_o         (ldq_full_o),
    .exec_vld_i         (agu_vld_i & ~agu_is_store_i),
    .exec_ldq_idx_i     (agu_ldq_idx_i),
    .exec_addr_i        (agu_addr_i),
    .exec_rob_idx_i     (agu_rob_idx_i),
    .issue_en_i         (ldq_issue_en),
    .issue_ack_i        (ldq_issue_ack),
    .issue_entry_o      (ldq_issue_entry),
    .issue_vld_o        (ldq_issue_vld)
);

// ldq entry can be issued
assign ldq_issue_en = ldq_issue_vld & ~ld_ambig_stall & ~cache_stalled;

// did it actually get serviced (due to arbitration with sdq entry)
assign ldq_issue_ack = ldq_issue_en & (fwd_hit | ~sdq_issue_en);


always_comb begin
    ld_cmt_vld_o     = 1'b0;
    ld_cmt_data_o    = '0;
    ld_cmt_rob_idx_o = '0;

    if (ldq_issue_en && fwd_hit) begin // able to forward straight from sdq (no cahce needed)
        ld_cmt_vld_o     = 1'b1;
        ld_cmt_data_o    = fwd_data;
        ld_cmt_rob_idx_o = ldq_issue_entry.rob_entry_idx;
    end else if (cache_ld_cmt_vld) begin // get value from cache instead
        ld_cmt_vld_o     = 1'b1;
        ld_cmt_data_o    = cache_ld_cmt_data;
        ld_cmt_rob_idx_o = cache_ld_cmt_rob_idx;
    end
end


// ========= SDQ ========= // 

store_data_queue u_sdq (
    .clk_i                  (clk_i),
    .rst_i                  (rst_i),
    .flush_i                (flush_i),
    .disp_vld_i             (disp_vld_i & disp_is_store_i),
    .store_data_i           (disp_store_data_i),
    .cmit_vld_i             (rob_store_cmit_vld_i),
    .cmit_idx_i             (rob_store_cmit_idx_i),
    .exec_vld_i             (agu_vld_i & agu_is_store_i),
    .exec_sdq_idx_i         (agu_sdq_idx_i),
    .exec_addr_i            (agu_addr_i),
    .exec_rob_idx_i         (agu_rob_idx_i),
    .sdq_alloc_idx_o        (sdq_alloc_idx),
    .sdq_full_o             (sdq_full_o),
    .issue_en_i             (sdq_issue_en),
    .issue_ack_i            (sdq_issue_ack),
    .issue_entry_o          (sdq_issue_entry),
    .issue_vld_o            (sdq_issue_vld),
    .ld_vld_i               (ldq_issue_vld),
    .ld_addr_i              (ldq_issue_entry.addr),
    .ld_sdq_marker_i        (ldq_issue_entry.sdq_marker[$clog2(SDQ_ENTRIES)-1:0]),
    .ld_hit_o               (fwd_hit),
    .ld_data_o              (fwd_data),
    .ld_ambig_stall_o       (ld_ambig_stall),
    // .clear_sdq_ent_vld_i    (1'b0),
    // .clear_sdq_ent_idx_i    ('0)
);

assign sdq_issue_en = sdq_issue_vld & ~cache_stalled;


// ========= Cahce Controller ========= // 

cache_controller u_cache_controller (
    .clk_i                 (clk_i),
    .rst_i                 (rst_i),
    .flush_i               (flush_i),
    .lsu_req_vld_i         (cache_req_vld),
    .lsu_req_wr_rd_i       (cache_req_is_store),
    .lsu_req_addr_i        (cache_req_addr),
    .lsu_req_data_i        (cache_req_data),
    .lsu_req_rob_idx_i     (cache_req_rob_idx),
    .mem_req_vld_o         (mem_req_vld_o),
    .mem_req_addr_o        (mem_req_addr_o),
    .mem_resp_vld_i        (mem_resp_vld_i),
    .mem_resp_data_i       (mem_resp_data_i),
    .mem_wb_data_o         (mem_wb_data_o),
    .mem_wb_vld_o          (mem_wb_vld_o),
    .cmt_ld_vld_o          (cache_ld_cmt_vld),
    .cmt_ld_data_o         (cache_ld_cmt_data),
    .cmt_rob_idx_o         (cache_ld_cmt_rob_idx),
    .stall_controller_o    (cache_stalled)
);


/* arbitor cache between sdq and ldq
    -> pick committed stores over loads
*/
always_comb begin
    cache_req_vld = '0;
    cache_req_is_store = '0;
    cache_req_addr = '0;
    cache_req_data = '0;
    cache_req_rob_idx = '0;

    if(sdq_issue_en) begin
        cache_req_vld       = 1'b1;
        cache_req_is_store  = 1'b1;
        cache_req_addr      = sdq_issue_entry.addr;
        cache_req_data      = sdq_issue_entry.store_data;
        cache_req_rob_idx   = sdq_issue_entry.rob_entry_idx;
    end else if (ldq_issue_en && !fwd_hit) begin
        cache_req_vld       = 1'b1;
        cache_req_is_store  = 1'b0;
        cache_req_addr      = ldq_issue_entry.addr;
        cache_req_data      = '0;
        cache_req_rob_idx   = ldq_issue_entry.rob_entry_idx;
    end
end


endmodule
