module rename (
    input logic clk_i,
    input logic rst_i,
    input logic flush_i,
    input logic stall_i,

    // Decode -> 
    input logic [DECODE_WIDTH-1:0] decode_pkt_vld_i,
    input decode_packet_t [DECODE_WIDTH-1:0] decode_pkt_i,

    // -> Dispatch
    input logic [RENAME_WIDTH-1:0]  disp_queue_full_i,  // Can we send instructions to dispatch or shall we stall_i
    output logic [RENAME_WIDTH-1:0] rename_vld_o,
    output rename_packet_t [RENAME_WIDTH-1:0] rename_disp_pkt_o,

    // Reorder Buffer -> (Adds entries to the Free List)
    input logic free_vld_i [RETIRE_WIDTH],
    input logic [$clog2(NUM_PREGS)-1:0] preg_to_free_i [RETIRE_WIDTH]

);


// logic stall_rename;

// assign stall_rename = stall_i | disp_queue_full_i; // Stall rename if there is system stall_i or if the dispatch queue is full


// NOTE: Decode and Rename Width must be the same in the processor architecture
logic free_list_empty [0:DECODE_WIDTH-1];;
logic free_list_r_en [0:DECODE_WIDTH-1];
logic [$clog2(NUM_PREGS)-1:0] free_preg [0:DECODE_WIDTH-1];

always_comb begin
    for(int i =0;i<DECODE_WIDTH;i++) begin
        free_list_r_en[i] = (decode_pkt_vld_i[i] && decode_pkt_i[i].reg_wr) && !disp_queue_full_i[i]; //&&!stall_i // only read free_list entries when theres a valid instruction and the rename stage isnt stalled
    end
end

free_list u_free_list (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .flush_i(flush_i),
    .r_en(free_list_r_en),
    .free_preg_o(free_preg),
    .w_en(free_vld_i),
    .retired_preg_i(preg_to_free_i),
    .empty(free_list_empty)
);

logic alias_w_en [0:RENAME_WIDTH-1];
logic [$clog2(NUM_AREGS)-1:0] dst_areg [0:RENAME_WIDTH-1];
logic [$clog2(NUM_AREGS)-1:0] src1_areg [0:RENAME_WIDTH-1];
logic [$clog2(NUM_PREGS)-1:0] src1_alias [0:RENAME_WIDTH-1];
logic [$clog2(NUM_AREGS)-1:0] src2_areg [0:RENAME_WIDTH-1];
logic [$clog2(NUM_PREGS)-1:0] src2_alias [0:RENAME_WIDTH-1];


assign alias_w_en = free_list_r_en & !free_list_empty; // if we read an entry it was so we could write it to the RAT so

always_comb begin
    for(int i=0; i<RENAME_WIDTH;i++) begin
        src1_areg[i]    = decode_pkt_i[i].src1_areg;
        src2_areg[i]    = decode_pkt_i[i].src2_areg;
        dst_areg[i]     = decode_pkt_i[i].dst_areg;
    end
end

RAT u_rat (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .flush_i(flush_i),
    .rd_areg_src1_i(src1_areg),
    .rd_alias_src1_o(src1_alias),
    .rd_areg_src2_i(src2_areg),
    .rd_alias_src2_o(src2_alias), 
    .w_en(alias_w_en),
    .w_dst_areg_i(dst_areg), 
    .w_new_alias_i(free_preg)
);

logic [RENAME_WIDTH-1:0] next_rename_pkt_vld; 
rename_packet_t [RENAME_WIDTH-1:0] next_rename_pkt; 

always_comb begin
    for(int i=0; i<RENAME_WIDTH;i++) begin
        // Pass Through From Decode
        next_rename_pkt[i].opcode       = decode_pkt_i[i].opcode;
        next_rename_pkt[i].required_fu  = decode_pkt_i[i].required_fu;
        next_rename_pkt[i].dst_areg     = decode_pkt_i[i].dst_areg;
        next_rename_pkt[i].imm_val      = decode_pkt_i[i].imm_val;
        next_rename_pkt[i].instr_valid  = decode_pkt_i[i].instr_valid;
        next_rename_pkt[i].pc           = decode_pkt_i[i].pc;
        next_rename_pkt[i].alu_en       = decode_pkt_i[i].alu_en;
        next_rename_pkt[i].br_taken     = decode_pkt_i[i].br_taken;
        
        // New from Rename
        next_rename_pkt[i].dst_preg  = free_preg[i];
        next_rename_pkt[i].src1_preg = src1_alias[i];
        next_rename_pkt[i].src2_preg = src2_alias[i];
    end
end

always_ff @( posedge clk_i ) begin : rename_dispatch_pipeline_register
    if(rst_i || flush_i) begin
        rename_vld_o <= '0;
        rename_disp_pkt_o <= '0;
    end else if(stall_i) begin
        rename_vld_o <= rename_vld_o;
        rename_disp_pkt_o <= rename_disp_pkt_o;
    end else begin
        for(int i=0; i<RENAME_WIDTH;i++) begin
            rename_vld_o[i] <= alias_w_en[i];
            rename_disp_pkt_o[i] <= next_rename_pkt[i];
        end
    end
end



endmodule
