/*

Functions:
    1. Init wakeup and select and connect them together
    2. Read in inputs from dispatch and execute and put them in the format expected by wakeup.
    3. Pass instructions from select to register read
*/


module scheduler (
    input logic clk,
    input logic rst,

    output logic [RS_ENTRIES-1:0] local_ready_mask,
    input logic [(RS_ENTRIES * NUM_FUS)-1:0] global_ready_mask,
    dispatch_scheduler_if.scheduler disp_if,
    execute_scheduler_if.scheduler exec_if,
    scheduler_reg_read_if.scheduler reg_read_if
);

logic [($clog2(RS_ENTRIES))-1:0] grant;
logic grant_valid;
logic [($clog2(RS_ENTRIES))-1:0] retire_rs_entry;
logic retire_rs_valid;

logic [$clog2(NUM_FUS)-1:0] rs_entry_idx;
assign rs_entry_idx = disp_if.rs_entry_idx;  

wakeup wakeup (
    .clk(clk),
    .rst(rst),
    .disp_valid(disp_if.disp_valid),                                 
    .dependency_mask(disp_if.dependency_mask), 
    .free_entry_out(disp_if.rs_entry_idx),
    .full_out(disp_if.rs_full),
    .reqs(reqs_out),
    .grant(grant),
    .grant_valid(grant_valid),
    .ready_mask(global_ready_mask),
    .retire_entry(retire_rs_entry),        
    .retire_valid(retire_rs_valid)        
);

logic [(RS_ENTRIES)-1:0] reqs_out;
logic [(RS_ENTRIES)-1:0] reqs_in;
always_ff @(posedge clk) begin
    reqs_in <= reqs_out;
end


/* 
    NOTE: This is only for the connection with the execute in the Execution Pipe. The local_ready_masks of all the pipes will be OR'd to 
        to create the global ready mask that will be used to actually clear dependencies in the Dependency Matrix
*/
always_comb begin : ClearDepedencies
    retire_rs_entry = '0;
    retire_rs_valid = 1'b0;
    local_ready_mask = '0;

    if(retire_rs_valid) begin
        local_ready_mask[retire_rs_entry] = 1'b1;
    end
end

/* ===== Select =====*/
select select (
    .clk(clk),
    .rst(rst),
    .reqs(reqs_in),
    .grant(grant),
    .grant_valid(grant_valid) 
);

/* ===== Payload RAM ===== */
disp_packet_t payload_ram [RS_ENTRIES];
disp_packet_t payload_ram_out; 


always_comb begin
    payload_ram_out = payload_ram[grant];
end

always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < RS_ENTRIES; i++) begin
            payload_ram[i] = '0;
        end
    end else begin
        if(disp_if.disp_valid) begin
           payload_ram[rs_entry_idx] <= disp_if.disp_pkt;
        end
    end
end

/* ===== Register Read ===== */

assign reg_read_if.sched_pkt = payload_ram_out;
assign reg_read_if.fire_valid = grant_valid; 


endmodule
