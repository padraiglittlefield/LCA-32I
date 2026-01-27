module load_data_queue (
    input   logic                                       clk_i,              // clock
    input   logic                                       rst_i,              // reset
    input   logic                                       flush_i,            // flush
    input   logic                                       disp_vld_i,         // is dispatch valid
    input   logic           [$clog2(SDQ_ENTRIES):0]     disp_sdq_marker_i,  // "SDQ Marker" for this entry (basically tracks relative order between stores)
    output  logic           [$clog2(LDQ_ENTRIES)-1:0]   ldq_disp_idx_o,     // index of recently allocated entry
    output  logic                                       ldq_full_o,         // is ldq full
    input   logic                                       exec_vld_i,         // is execute valid?
    input   logic           [$clog2(LDQ_ENTRIES)-1:0]   exec_ldq_idx_i,     // ldq entry to update
    input   logic           [31:0]                      exec_addr_i,        // updated address from execute
    input   logic                                       issue_en_i,         // can we issue a load?
    output  ldq_entry_t                                 issue_entry_o,      // load entry out
    output  logic                                       issue_vld_o         // issue valid

);

ldq_entry_t ldq [0:LDQ_ENTRIES-1];


// Allocate new ldq entries and update entries with correct addr

always_ff @(posedge clk_i) begin
    if(rst_i || flush_i) begin
        for(int i = 0; i<LDQ_ENTRIES; i++)begin
            ldq[i] <= '0;
        end
    end else begin
        if(disp_vld_i && !ldq_full_o) begin
            ldq[ldq_alloc_idx] <= ldq_alloc_entry;
        end

         if(exec_vld_i) begin
            ldq[exec_ldq_idx_i].addr <= exec_addr_i;
            ldq[exec_ldq_idx_i].addr_valid <= 1'b1;
        end
    end
end

// Determine if there is a free entry and if so where
logic [$clog2(LDQ_ENTRIES)-1:0] ldq_alloc_idx;
logic [LDQ_ENTRIES-1:0] entries_free;
logic alloc_idx_found;

always_comb begin
    
    // construct free entry vector
    for(int i=0; i<LDQ_ENTRIES;i++) begin
        entries_free[i] = ~ldq[i].valid;
    end 

    // check if there is a free entry
    ldq_full_o = ~|entries_free;

    ldq_alloc_idx = '0;
    alloc_idx_found = 1'b0;
    for(int i=0; i<LDQ_ENTRIES; i++) begin
        if(entries_free[i] && !alloc_idx_found) begin
            ldq_alloc_idx = i;
            alloc_idx_found = 1;
        end
    end
end

// assign new entry

ldq_entry_t ldq_alloc_entry;
always_comb begin
    ldq_alloc_entry.valid = 1'b1;
    ldq_alloc_entry.addr_valid = 1'b0;
    ldq_alloc_entry.addr = '0;
    ldq_alloc_entry.sdq_marker = disp_sdq_marker_i;
    ldq_alloc_entry.issued = '0; // not sure if this is really needed. Currently we just delete it after firing

    ldq_disp_idx_o = !ldq_full_o ? ldq_alloc_idx : '0;
end

// issue entry

logic [LDQ_ENTRIES-1:0] entries_ready;
logic [$clog2(LDQ_ENTRIES)-1:0] issue_idx;

always_comb begin
    
    issue_vld_o = '0;
    issue_idx = '0;
    issue_entry_o ='0;
    if(issue_en_i) begin
        for(int i=0; i<LDQ_ENTRIES;i++) begin
            entries_ready[i] = ldq[i].valid & ldq[i].addr_valid;
        end

        for(int i=0; i<LDQ_ENTRIES;i++) begin
            if(entries_ready[i] && !issue_vld_o) begin
                issue_idx = i;
                issue_vld_o = 1'b1;
                issue_entry_o = ldq[i];
            end
        end
    end
end

always_ff @(posedge clk_i) begin
    if (!rst_i && issue_vld_o && issue_en_i) begin  // whenever we issue an entry, clear it from the ldq
        ldq[issue_idx].valid <= 1'b0;
    end
end
endmodule
