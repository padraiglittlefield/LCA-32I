/*
    Wakeup Module for Scheduler
        - By; Padraig Littlefield
            12/4/25
    Tracks dependencies using a Dependency Bit Matrix, similar to what is outlined by the RSD OoO Soft-Core Processor.

*/
module wakeup (
    input logic clk,
    input logic rst,

    // dispatch
    input logic disp_valid,                                   // valid dispatch?
    input logic  [(RS_ENTRIES * NUM_FUS)-1:0] dependency_mask, // mask of incoming rs entries dependencies
    output logic [$clog2(RS_ENTRIES)-1:0] free_entry_out,     // free entry in the rs
    output logic full_out,                                    // whether or not the rs is full

    //select 
    output logic [RS_ENTRIES-1:0] reqs,                       // vector of requests to select
    input logic [$clog2(RS_ENTRIES)-1:0] grant,               // granted request from select
    input logic grant_valid,                                  // valid grant from select    

    //execute
    input logic [(RS_ENTRIES * NUM_FUS)-1:0] ready_mask,      // mask from schedule with the rs entries that are currently ready
    input logic [$clog2(RS_ENTRIES)-1:0] retire_entry,        // rs entry to clear out
    input logic retire_valid                                  // valid clearing of rs entry

);

logic [RS_ENTRIES-1:0] entry_valid;
logic [RS_ENTRIES-1:0] entry_granted;
logic [$clog2(RS_ENTRIES)-1:0] free_entry;
logic full;
logic [(RS_ENTRIES*NUM_FUS)-1:0] dependency_matrix_row [RS_ENTRIES]; //[x (this FU pipe)][y]

always_ff @( posedge clk ) begin 
    if (rst) begin
        for(int i = 0; i < RS_ENTRIES; i++) begin
            entry_valid[i] <= 1'b0;
            entry_granted[i] <= 1'b0;
            for(int j =0; j < RS_ENTRIES * NUM_FUS; j++) begin
                dependency_matrix_row[i][j] = 0;
            end
        end 
    end else begin
        for (int i = 0; i < RS_ENTRIES; i++) begin
            if (disp_valid && !full && i == free_entry) begin
                dependency_matrix_row[i] <= dependency_mask & ~ready_mask;
                entry_valid[i] <= 1'b1;
            end else begin
                dependency_matrix_row[i] <= dependency_matrix_row[i] & ~ready_mask;
            end
        end

        // grant entries
        if(grant_valid) begin
            entry_granted[grant] <= 1'b1; 
        end

        // retire entries in the rs upon their completion
        if(retire_valid) begin
            entry_valid[retire_entry] <= 1'b0;
            entry_granted[retire_entry] <= 1'b0;
        end
    end     
end

/*
    Setting Request Lines for Select
*/
logic granted;
always_comb begin
    for(int i = 0; i < RS_ENTRIES; i++) begin
        granted = entry_granted[i] || (grant_valid && grant == i);
        reqs[i] = (dependency_matrix_row[i] == '0) & entry_valid[i] & ~granted; // only request when an entry is valid, has no dependencies, and hasn't already recieved a grant
    end 
end


/*
    Free Entry Finder 
        - Simple Priority Encoder
*/
logic flag; // maybe not needed but scared of breaks for synth
always_comb begin
    free_entry = '0;
    full = 1'b1;
    flag = 1'b0;
    for (int i = 0; i < RS_ENTRIES; i++) begin
        if (!entry_valid[i] && !flag) begin
            free_entry = i;
            full = 1'b0;
            flag = 1'b1;
        end
    end
    free_entry_out = free_entry;
    full_out = full;
end


endmodule
