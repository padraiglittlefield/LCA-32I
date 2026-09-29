module core
    import CORE_PKG::*;
(
    input clk,
    input rst
);

// ==================== Signal Declaration ====================== //

// Scheduler Wakeup
logic [RS_ENTRIES-1:0]              local_ready_mask    [0:NUM_FUS-1];
logic [(RS_ENTRIES * NUM_FUS)-1:0]  global_ready_mask;

// Dispatch -> Scheduler
logic                               disp_valid          [NUM_FUS];
disp_packet_t                       disp_pkt            [NUM_FUS];
logic [(RS_ENTRIES * NUM_FUS)-1:0]  dependency_mask     [NUM_FUS];
logic [$clog2(RS_ENTRIES)-1:0]      rs_entry_idx        [NUM_FUS];
logic                               rs_full             [NUM_FUS];

// Scheduler -> Register Read
logic                               sched_fire_valid    [NUM_FUS];
disp_packet_t                       sched_pkt           [NUM_FUS];

// Register Read <-> Register File
logic [$clog2(NUM_PREGS)-1:0]       rf_src1_preg        [NUM_FUS];
logic [$clog2(NUM_PREGS)-1:0]       rf_src2_preg        [NUM_FUS];
logic [31:0]                        rf_src1_val         [NUM_FUS];
logic [31:0]                        rf_src2_val         [NUM_FUS];

// Register Read <-> Forwarding Unit
logic [$clog2(NUM_PREGS)-1:0]       fwrd_src1_preg      [NUM_FUS];
logic [$clog2(NUM_PREGS)-1:0]       fwrd_src2_preg      [NUM_FUS];
logic                               fwrd_src1_hit       [NUM_FUS];
logic [31:0]                        fwrd_src1_val       [NUM_FUS];
logic                               fwrd_src2_hit       [NUM_FUS];
logic [31:0]                        fwrd_src2_val       [NUM_FUS];

// Register Read -> Execute
logic                               exec_fire_valid     [NUM_FUS];
exec_packet_t                       exec_pkt            [NUM_FUS];

// Execute -> Forwarding Unit
logic                               ex_fwrd_valid       [NUM_FUS];
logic [$clog2(NUM_PREGS)-1:0]       ex_fwrd_dst_preg    [NUM_FUS];
logic [31:0]                        ex_fwrd_val         [NUM_FUS];

// Execute -> Register File
logic                               ex_rf_wr_en         [NUM_FUS-1];
logic [$clog2(NUM_PREGS)-1:0]       ex_rf_wr_preg       [NUM_FUS-1];
logic [31:0]                        ex_rf_wr_val        [NUM_FUS-1];

// Execute -> Reorder Buffer
logic                               ex_rob_valid        [NUM_FUS-1];
logic [$clog2(ROB_ENTRIES)-1:0]     ex_rob_idx          [NUM_FUS-1];
logic [31:0]                        ex_rob_val          [NUM_FUS-1];
logic                               ex_rob_br_mispred   [NUM_FUS-1];
logic                               ex_rob_exception    [NUM_FUS-1];

// Dispatch <-> Reorder Buffer
logic                               disp_rob_fire_valid [FIRE_WIDTH];
logic [$clog2(NUM_AREGS)-1:0]       disp_rob_dst_areg   [FIRE_WIDTH];
logic                               disp_rob_wb_en      [FIRE_WIDTH];
logic [$clog2(ROB_ENTRIES)-1:0]     disp_rob_idx        [FIRE_WIDTH];
logic                               disp_rob_full       [FIRE_WIDTH];

// Reorder Buffer -> Register File
logic                               ret_wr_en           [RETIRE_WIDTH];
logic [$clog2(NUM_AREGS)-1:0]       ret_wr_areg         [RETIRE_WIDTH];
logic [31:0]                        ret_wr_val          [RETIRE_WIDTH];

// Reorder Buffer -> Flush
logic                               rob_flush;
logic [31:0]                        rob_flush_pc;

// Execute (AGU) -> LSU
logic                            agu_vld;
logic                            agu_is_store;
logic [31:0]                     agu_addr;
logic [31:0]                     agu_store_data;
logic [$clog2(ROB_ENTRIES)-1:0]  agu_rob_idx;
logic [$clog2(LDQ_ENTRIES)-1:0]  agu_ldq_idx;
logic [$clog2(SDQ_ENTRIES)-1:0]  agu_sdq_idx;


// ==================== Module Declaration ====================== //

genvar i;
generate
    for (i = 0; i < NUM_FUS; i++) begin : Backend

        scheduler u_scheduler (
            .clk(clk),
            .rst(rst),
            .local_ready_mask(local_ready_mask[i]),
            .global_ready_mask(global_ready_mask),
            .disp_valid_i(disp_valid[i]),
            .disp_pkt_i(disp_pkt[i]),
            .dependency_mask_i(dependency_mask[i]),
            .rs_entry_idx_o(rs_entry_idx[i]),
            .rs_full_o(rs_full[i]),
            .rr_fire_valid_o(sched_fire_valid[i]),
            .rr_pkt_o(sched_pkt[i])
        );

        register_read u_register_read (
            .clk(clk),
            .rst(rst),
            .sched_fire_valid_i(sched_fire_valid[i]),
            .sched_pkt_i(sched_pkt[i]),
            .rf_src1_preg_o(rf_src1_preg[i]),
            .rf_src2_preg_o(rf_src2_preg[i]),
            .rf_src1_val_i(rf_src1_val[i]),
            .rf_src2_val_i(rf_src2_val[i]),
            .fwrd_src1_preg_o(fwrd_src1_preg[i]),
            .fwrd_src2_preg_o(fwrd_src2_preg[i]),
            .fwrd_src1_hit_i(fwrd_src1_hit[i]),
            .fwrd_src1_val_i(fwrd_src1_val[i]),
            .fwrd_src2_hit_i(fwrd_src2_hit[i]),
            .fwrd_src2_val_i(fwrd_src2_val[i]),
            .exec_fire_valid_o(exec_fire_valid[i]),
            .exec_pkt_o(exec_pkt[i])
        );

        fwrd_unit u_fwrd_unit (
            .src1_preg_i(fwrd_src1_preg[i]),
            .src2_preg_i(fwrd_src2_preg[i]),
            .src1_hit_o(fwrd_src1_hit[i]),
            .src1_val_o(fwrd_src1_val[i]),
            .src2_hit_o(fwrd_src2_hit[i]),
            .src2_val_o(fwrd_src2_val[i]),
            .ex_valid_i(ex_fwrd_valid),
            .ex_dst_preg_i(ex_fwrd_dst_preg),
            .ex_val_i(ex_fwrd_val)
        );

        // First 3 FU-Pipes have ALU, the 4th has a AGU
        if(i < 3) begin

            execute_alu u_execute_alu (
                .clk(clk),
                .rst(rst),
                .rr_fire_valid_i(exec_fire_valid[i]),
                .rr_pkt_i(exec_pkt[i]),
                .fwrd_valid_o(ex_fwrd_valid[i]),
                .fwrd_dst_preg_o(ex_fwrd_dst_preg[i]),
                .fwrd_val_o(ex_fwrd_val[i]),
                .rf_wr_en_o(ex_rf_wr_en[i]),
                .rf_wr_preg_o(ex_rf_wr_preg[i]),
                .rf_wr_val_o(ex_rf_wr_val[i]),
                .rob_valid_o(ex_rob_valid[i]),
                .rob_idx_o(ex_rob_idx[i]),
                .rob_val_o(ex_rob_val[i]),
                .rob_br_mispred_o(ex_rob_br_mispred[i]),
                .rob_exception_o(ex_rob_exception[i])
            );

        end else begin

            // TODO: Implement LSU and connect it here
            execute_agu u_execute_agu (
                .clk(clk),
                .rst(rst),
                .rr_fire_valid_i(exec_fire_valid[i]),
                .rr_pkt_i(exec_pkt[i]),
                .lsu_vld_o(agu_vld),
                .lsu_is_store_o(agu_is_store),
                .lsu_addr_o(agu_addr),
                .lsu_store_data_o(agu_store_data),
                .lsu_rob_idx_o(agu_rob_idx),
                .lsu_ldq_idx_o(agu_ldq_idx),
                .lsu_sdq_idx_o(agu_sdq_idx)
            );

            // AGU results go to the LSU, not the forwarding network
            assign ex_fwrd_valid[i]    = 1'b0;
            assign ex_fwrd_dst_preg[i] = '0;
            assign ex_fwrd_val[i]      = '0;

        end
    end
endgenerate

always_comb begin
    for(int j=0; j<NUM_FUS; j++) begin
        global_ready_mask[(RS_ENTRIES * j) +: RS_ENTRIES] = local_ready_mask[j]; 
    end
end


reorder_buffer u_reorder_buffer (
    .clk(clk),
    .rst(rst),
    .disp_fire_valid_i(disp_rob_fire_valid),
    .disp_dst_areg_i(disp_rob_dst_areg),
    .disp_wb_en_i(disp_rob_wb_en),
    .disp_rob_idx_o(disp_rob_idx),
    .disp_rob_full_o(disp_rob_full),
    .ex_valid_i(ex_rob_valid),
    .ex_rob_idx_i(ex_rob_idx),
    .ex_val_i(ex_rob_val),
    .ex_br_mispred_i(ex_rob_br_mispred),
    .ex_exception_i(ex_rob_exception),
    .ret_wr_en_o(ret_wr_en),
    .ret_wr_areg_o(ret_wr_areg),
    .ret_wr_val_o(ret_wr_val),
    .flush_o(rob_flush),
    .flush_pc_o(rob_flush_pc)
);

register_file u_register_file (
    .clk(clk),
    .rst(rst),
    .rd_src1_preg_i(rf_src1_preg),
    .rd_src2_preg_i(rf_src2_preg),
    .rd_src1_val_o(rf_src1_val),
    .rd_src2_val_o(rf_src2_val),
    .ex_wr_en_i(ex_rf_wr_en),
    .ex_wr_preg_i(ex_rf_wr_preg),
    .ex_wr_val_i(ex_rf_wr_val),
    .rob_wr_en_i(ret_wr_en),
    .rob_wr_areg_i(ret_wr_areg),
    .rob_wr_val_i(ret_wr_val)
);

load_store_unit u_load_store_unit (
    .clk_i(), 
    .rst_i(),
    .flush_i(),
    .disp_vld_i(),
    .disp_is_store_i(),
    .disp_sdq_marker_i(), 
    .disp_ldq_idx_o(), 
    .disp_sdq_idx_o(),
    .ldq_full_o(),
    .sdq_full_o(),
    .agu_vld_i(agu_vld),
    .agu_is_store_i(agu_is_store),
    .agu_addr_i(agu_addr),
    .agu_store_data_i(agu_store_data),
    .agu_rob_idx_i(agu_rob_idx),
    .agu_ldq_idx_i(agu_ldq_idx),
    .agu_sdq_idx_i(agu_sdq_idx),
    .rob_store_cmit_vld_i(),
    .rob_store_cmit_idx_i(),
    .ld_cmt_vld_o(),       
    .ld_cmt_data_o(),
    .ld_cmt_rob_idx_o(),
    .mem_req_vld_o(),
    .mem_req_addr_o(),
    .mem_resp_vld_i(),
    .mem_resp_data_i(),
    .mem_wb_data_o(),
    .mem_wb_vld_o()


);



endmodule
