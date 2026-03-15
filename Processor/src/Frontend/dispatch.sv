module dispatch (
    input   logic                                       clk_i,
    input   logic                                       rst_i,
    input   logic                                       stall_i,
    input   logic                                       flush_i,
    
    input   logic           [FIRE_WIDTH-1:0]            rename_vld_i,
    input   rename_packet_t [FIRE_WIDTH-1:0]            rename_disp_pkt_i,
    output  logic                                       instr_queue_full_o,
    
    dispatch_scheduler_if.dispatch                      disp_sched_if[NUM_FUS],
    dispatch_reorder_buffer_if.dispatch                 disp_rob_if[FIRE_WIDTH],

    //LSU Interface
    input   logic           [$clog2(LDQ_ENTRIES)-1:0]   disp_ldq_idx_i,     // allocated LDQ entry for this load
    input   logic           [$clog2(SDQ_ENTRIES)-1:0]   disp_sdq_idx_i,     // allocated SDQ entry for this store
    input   logic                                       ldq_full_i,
    input   logic                                       sdq_full_i,
    output  logic                                       disp_vld_o,
    output  logic                                       disp_is_store_o,
    output  logic           [31:0]                      disp_store_data_o,
    output  logic           [$clog2(SDQ_ENTRIES):0]     disp_sdq_marker_o,  // current SDQ tail at dispatch time
    output  logic           [$clog2(ROB_ENTRIES)-1:0]   disp_rob_idx_o

);

    logic [$clog2(FIRE_WIDTH)-1:0] dispatch_stall;

  
    logic [FIRE_WIDTH-1:0] instr_vld;
    rename_packet_t [FIRE_WIDTH-1:0] instr_pkt;

    instruction_queue u_instr_queue (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .flush(flush_i),
        .rename_vld_i(rename_vld_i & ~instr_queue_full_o), // in theory rename wont send but just in case
        .rename_pkt_i(rename_disp_pkt_i),
        .full(instr_queue_full_o),
        .dispatch_en_i(assignment_vld),
        .instr_vld_o(instr_vld),
        .instr_pkt_o(instr_pkt)
    );


    fu_type_e required_fu [0:FIRE_WIDTH-1];
    logic [NUM_FUS-1:0] pipe_free;  // marked by rs_full, makes sure that the pipe can actually accept new entries
    logic [$clog2(NUM_FUS)-1:0] assigned_pipe [0:FIRE_WIDTH-1];
    logic assignment_vld [0:FIRE_WIDTH-1];
    logic [NUM_FUS-1:0] pipe_claimed [0:FIRE_WIDTH-1];


    always_comb begin : pipe_steering
        pipe_claimed[0] = '0;
        for (int i = 0; i < FIRE_WIDTH; i++) begin        
            assigned_pipe[i]    = '0;
            assignment_valid[i] = 1'b0;
            required_fu[i]      = instr_pkt[i].required_fu;
            pipe_free[i]        = ~disp_sched_if[i].rs_full;

            if (i == 0 || assignment_valid[i-1]) begin  // only try if prev slot succeeded
                for (int j = 0; j < NUM_FUS; j++) begin
                    if (instr_vld[i] && FU_TYPE[j] == required_fu[i] && pipe_free[j] && !pipe_claimed[i][j] && !assignment_valid[i]) begin
                        assigned_pipe[i]    = j;
                        assignment_valid[i] = 1'b1;
                    end
                end
            end
            pipe_claimed[i+1] = pipe_claimed[i] | (assignment_vld[i] ? NUM_FUS'(1 << assigned_pipe[i]) : '0);
        end
    end


    dependency_mapping_table u_dmt (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .flush_i(flush_i),
        .fire_vld_i(),
        .dst_preg_i(),
        .fire_loc_i(),
        .src1_preg_i(),
        .src2_preg_i(),
        .dependency_mask_o(),
        .exec_vld_i(),
        .exec_dst_preg_i()     
    );

    // TODO: Create Disp Packet for each instruction
    // TODO: Send correct disp packet to the correct pipe, do special case for memory (agu)

    // always_ff @(posedge clk_i) begin
    //     if(rst_i) begin

    //     end else begin
    //         des
    //     end
    // end

    // always_comb begin
    //     for(int i = 0; i<FIRE_WIDTH;i++) begin


    //     end
    // end



endmodule
