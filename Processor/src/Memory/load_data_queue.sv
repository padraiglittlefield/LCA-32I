module load_data_queue (
    input logic clk,
    input logic rst,
    
    // alloc entry from disp
    
    input logic alloc_valid;
    input logic [$clog2(SDQ_ENTIRES):0] sdq_marker,
    output logic [$clog2(LDQ_ENTIRES)-1:0] alloc_idx_out,
    output logic full,

    // update entry from exec
    input logic update_valid,
    input logic [$clog2(LDQ_ENTIRES)-1:0] update_idx,
    input logic [31:0] addr_in,

    // send entry to rest of lsu
    input ldq_entry_t entry_out,
    input logic out_valid

);

ldq_entry_t ldq [0:LDQ_ENTRIES-1];


// Allocate new ldq entries and update entries with correct addr

always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; i<LDQ_ENTRIES; i++)begin
            ldq[i] <= '0;
        end
    end else begin
        if(alloc_valid) begin
            ldq[alloc_idx] <= alloc_entry;
        end

         if(update_valid) begin
            ldq[update_idx].addr <= addr_in;
            ldq[update_idx].addr_valid <= 1'b1;
        end
    end
end

// Determine if there is a free entry and if so where

logic [$clog2(LDQ_ENTRIES)-1:0] alloc_idx;
logic [LDQ_ENTRIES-1:0] entries_free;

always_comb begin
    
    // construct free entry vector
    for(int i=0; i<LDQ_ENTRIES;i++) begin
        entries_free[i] = ~ldq[i].valid;
    end 

    // check if there is a free entry
    full = |entries_free;

    alloc_idx = '0;
    for(int i=0; i<LDQ_ENTRIES; i++) begin
        if(entires_free[i]) begin
            alloc_idx = i;
        end
    end
end

// assign new entry

ldq_entry_t alloc_entry;
always_comb begin
    alloc_entry.valid = 1'b1;
    alloc_entry.addr_valid = 1'b0;
    alloc_entry.addr = '0;
    alloc_entry.sdq_marker = sdq_marker;
    alloc_entry.issued = 1'b0;

    alloc_idx_out = alloc_idx;
end

// 


endmodule
