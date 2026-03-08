module dispatch (
    input   logic                                       clk,
    input   logic                                       rst,
    input   logic                                       stall_i,
    
    input   logic           [FIRE_WIDTH-1:0]            rename_vld_i,
    input   rename_packet_t [FIRE_WIDTH-1:0]            rename_disp_pkt_i,
    
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

    always_ff @(posedge clk) begin
        if(rst) begin

        end else begin
            des
        end
    end

    always_comb begin
        for(int i = 0; i<FIRE_WIDTH;i++) begin


        end
    end

    
    instruction_queue u_instr_queue (
        .clk(clk),
        .rst(rst),
        .flush(flush),
        .rename_vld_i(),
        .rename_pkt_i(),
        .full(),
        .dispatch_en_i(),
        .instr_vld_o(),
        .instr_pkt_o()
    );


endmodule
