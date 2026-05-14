module dispatch (
    input   logic                                   clk_i,
    input   logic                                   rst_i,
    input   logic                                   stall_i,
    input   logic                                   flush_i,
    // Rename Port
    input   logic                                   rename_vld_i        [RENAME_WIDTH],
    input   rename_packet_t                         rename_pkt_i        [RENAME_WIDTH],
    output  logic                                   instr_queue_full_o  [RENAME_WIDTH],
    // Scheduler Port
    output  disp_packet_t                           disp_pkt_o          [NUM_FUS],
    output  logic                                   disp_valid_o        [NUM_FUS],
    output  logic   [(RS_ENTRIES * NUM_FUS)-1:0]    dependency_mask_o   [NUM_FUS],
    input   logic   [$clog2(NUM_FUS)-1:0]           rs_entry_idx_i      [NUM_FUS],
    input   logic                                   rs_full_i           [NUM_FUS],
    // Reorder Buffer
    output  logic                                   rob_fire_valid_o    [FIRE_WIDTH],
    output  logic   [4:0]                           rob_dst_reg_o      [FIRE_WIDTH],
    output  logic                                   rob_wb_en_o         [FIRE_WIDTH],
    input   logic   [$clog2(ROB_ENTRIES)-1:0]       rob_entry_idx_i     [FIRE_WIDTH],
    input   logic                                   rob_full_i          [FIRE_WIDTH],
    // Execute <-
    //LSU port
    input   logic   [$clog2(LDQ_ENTRIES)-1:0]       disp_ldq_idx_i,     // allocated LDQ entry for this load
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]       disp_sdq_idx_i,     // allocated SDQ entry for this store
    input   logic                                   ldq_full_i,
    input   logic                                   sdq_full_i,
    output  logic                                   disp_vld_o,
    output  logic                                   disp_is_store_o,
    output  logic   [31:0]                          disp_store_data_o,
    output  logic   [$clog2(SDQ_ENTRIES):0]         disp_sdq_marker_o,  // current SDQ tail at dispatch time
    output  logic   [$clog2(ROB_ENTRIES)-1:0]       disp_rob_idx_o

);

    logic [$clog2(FIRE_WIDTH)-1:0] dispatch_stall;

  
    logic instr_vld[FIRE_WIDTH];
    rename_packet_t instr_pkt[FIRE_WIDTH];
    disp_packet_t disp_pkt [0:FIRE_WIDTH-1];

    instruction_queue u_instr_queue (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .flush_i(flush_i),
        .rename_vld_i(rename_vld_i), // in theory rename wont send but just in-case
        .rename_pkt_i(rename_pkt_i),
        .full(instr_queue_full_o),
        .dispatch_en_i(fire_vld),
        .instr_vld_o(instr_vld),
        .instr_pkt_o(instr_pkt)
    );

    /* === Dispatch Steering Logic ===  
        - Tries to find an backend pipe to send each instruction to based on what it needs.
    
    */ 

    fu_type_e required_fu [0:FIRE_WIDTH-1];
    logic [NUM_FUS-1:0] pipe_free;  // marked by rs_full, makes sure that the pipe can actually accept new entries
    logic [$clog2(NUM_FUS)-1:0] assigned_pipe [0:FIRE_WIDTH-1];
    logic assignment_vld [0:FIRE_WIDTH-1];
    logic [NUM_FUS-1:0] pipe_claimed [0:FIRE_WIDTH-1];

    
    always_comb begin : pipe_steering
        pipe_claimed[0] = '0;
        for (int i = 0; i < FIRE_WIDTH; i++) begin        
            assigned_pipe[i]    = '0;
            assignment_vld[i] = 1'b0;
            required_fu[i]      = instr_pkt[i].required_fu;
            pipe_free[i]        = ~rs_full_i[i];

            if (i == 0 || assignment_vld[i-1]) begin  // only try if prev slot succeeded
                for (int j = 0; j < NUM_FUS; j++) begin
                    if (instr_vld[i] && FU_TYPE[j] == required_fu[i] && pipe_free[j] && !pipe_claimed[i][j] && !assignment_vld[i]) begin
                        assigned_pipe[i]    = j;
                        assignment_vld[i] = 1'b1;
                    end
                end
            end
            pipe_claimed[i+1] = pipe_claimed[i] | (assignment_vld[i] ? NUM_FUS'(1 << assigned_pipe[i]) : '0);
        end
    end


    logic fire_vld [0:FIRE_WIDTH-1];
    logic [$clog2(NUM_PREGS)-1:0] dm_dst_preg [0:FIRE_WIDTH-1];
    logic [$clog2((RS_ENTRIES * NUM_FUS))-1:0] dm_fire_loc [0:FIRE_WIDTH-1];
    logic [$clog2(NUM_PREGS)-1:0] dm_src1_preg [0:FIRE_WIDTH-1];
    logic [$clog2(NUM_PREGS)-1:0] dm_src2_preg [0:FIRE_WIDTH-1];
    logic dm_src1_vld [0:FIRE_WIDTH-1];
    logic dm_src2_vld [0:FIRE_WIDTH-1];

    logic [(RS_ENTRIES * NUM_FUS)-1:0] dm_dependency_mask [0:FIRE_WIDTH-1];

    logic dm_exec_vld [0:NUM_FUS-1];
    logic [$clog2(NUM_PREGS)-1:0] dm_exec_dst_preg [0:NUM_FUS-1];

    always_comb begin : dmt_update
        for(int i = 0; i < FIRE_WIDTH; i++) begin
            // update mapping for renamed dest reg
            fire_vld[i]     = assignment_vld[i] & ~rob_full_i[i];
            dm_dst_preg[i]  = instr_pkt[i].dst_preg;
            dm_fire_loc[i]  = assigned_pipe[i];
            
            // generate dependency mask based on the src pregs
            dm_src1_preg[i]    = instr_pkt[i].src1_preg;
            dm_src2_preg[i]    = instr_pkt[i].src2_preg;
            dm_src1_vld[i]    = instr_pkt[i].src1_vld; 
            dm_src2_vld[i]    = instr_pkt[i].src2_vld;
        end 
    end

    // TODO: Setup freeing of dependencies
    dependency_mapping_table u_dmt (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .flush_i(flush_i),
        .fire_vld_i(fire_vld),
        .dst_preg_i(dm_dst_preg),
        .fire_loc_i(dm_fire_loc),
        .src1_preg_i(dm_src1_preg),
        .src1_vld_i(dm_src1_vld),
        .src2_preg_i(dm_src2_preg),
        .src2_vld_i(dm_src2_vld),
        .dependency_mask_o(dm_dependency_mask),
        .exec_vld_i(),
        .exec_dst_preg_i()     
    );


    // TODO: Allocate ROB Entry
    always_comb begin
        for(int i = 0; i < FIRE_WIDTH; i++) begin
            rob_dst_reg_o[i] = instr_pkt[i].dst_areg; 
            rob_fire_valid_o[i] = fire_vld[i];
            rob_wb_en_o[i] = instr_pkt[i].wb_en;
        end
    end


    // TODO: Create Disp Packet for each instruction
    // TODO: Send correct disp packet to the correct pipe, do special case for memory (agu)

    always_comb begin : gen_disp_pkt 
        for(int i = 0; i<FIRE_WIDTH;i++) begin
            disp_pkt[i].opcode      = instr_pkt[i].opcode;
            disp_pkt[i].dst_areg    = instr_pkt[i].dst_areg;
            disp_pkt[i].dst_preg    = instr_pkt[i].dst_preg;
            disp_pkt[i].src1_preg   = instr_pkt[i].src1_preg;
            disp_pkt[i].src1_vld    = instr_pkt[i].src1_vld;
            disp_pkt[i].src2_preg   = instr_pkt[i].src2_preg;
            disp_pkt[i].src2_vld    = instr_pkt[i].src2_vld;
            disp_pkt[i].imm_val     = instr_pkt[i].imm_val;
            disp_pkt[i].instr_valid = instr_pkt[i].instr_valid;
            disp_pkt[i].pc          = instr_pkt[i].pc;
            disp_pkt[i].alu_en      = instr_pkt[i].alu_en;
            disp_pkt[i].br_taken    = instr_pkt[i].br_taken;
            
            disp_pkt[i].rob_entry_idx = rob_entry_idx_i[i];

        end
    end

    // always_ff @(posedge clk_i) begin : pipeline_register 
    //     if(rst_i) begin
            
    //     end else begin
            
    //     end
    // end

    // TODO: Connect to LSU


endmodule
