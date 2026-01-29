/* Miss Status History Register (MSHR)
*   |
*   -> The MSHR is responsible for tracking ongoing misses that have occurred
*
*/
import CORE_PKG::*;

module miss_status_history_register (
    input   logic                                   clk_i,                  // Clock
    input   logic                                   rst_i,                  // RESET
    input   logic                                   flush_i,                // FLUSH 
    input   logic                                   ld_alloc_en_i,          // Allocate an entry for a missed load
    input   logic   [31:0]                          ld_alloc_addr_i,        // Address of Missed Access
    input   logic   [$clog2(ROB_ENTRIES)-1:0]       ld_alloc_rob_idx_i,     // Index of ROB Entry this Missed Load corresponds to

    input   logic                                   st_alloc_en_i,          // Allocate an entry for a missed store
    input   logic   [31:0]                          st_alloc_addr_i,        // Address of missed store
    input   logic   [31:0]                          st_alloc_data_i,        // Data of missed store

    output  logic                                   ld_full_o,              // are there load entries?
    output  logic                                   st_full_o,              // are there any store entries?

    input   logic                                   repair_complete_i,      // Repair has been completed (we can clear this entry)
    input   logic                                   repair_ack_i,           // The Controller has acknowledged our repair request
    output  logic                                   repair_req_o,           // Request for a missed entry to be repaired
    output  logic   [31:0]                          repair_req_addr_o,      // Address being requested
    output  logic   [31:0]                          repair_req_data_o,      // Data to be updated (for missed stores only)
    output  logic   [$clog2(ROB_ENTRIES)-1:0]       repair_req_rob_idx_o,   // ROB index of missed access (for missed loads only)
    output  logic                                   repair_is_store_o       // Was missed access a load?
);
// TODO: should speculative loads affect the cache? should we not issue any repairs until we know its not speculative
   

typedef struct packed {
    logic valid_bit;
    logic [31:0] addr;
    logic [31:0] data;
    logic [$clog2(ROB_ENTRIES)-1:0] rob_idx; 
} mshr_ld_ent;

typedef struct packed {
    logic valid_bit;
    logic [31:0] addr;
    logic [31:0] data;
} mshr_st_ent;

mshr_ld_ent mshr_ld [NUM_MSHR_ENTS/2];
mshr_st_ent mshr_st [NUM_MSHR_ENTS/2];

// =============== Entry Allocation Logic ================== //

logic [(NUM_MSHR_ENTS/2)-1:0] mshr_ld_free;
logic [$clog2(NUM_MSHR_ENTS/2)-1:0] ld_alloc_idx;
logic ld_alloc_idx_found;

always_comb begin
    ld_alloc_idx = '0;
    ld_alloc_idx_found = 1'b0;

    for(int i = 0; i < NUM_MSHR_ENTS/2; i++) begin
        mshr_ld_free[i] = ~mshr_ld[i].valid_bit;
    end

    ld_full_o = ~|mshr_ld_free;

    for(int i = 0; i < NUM_MSHR_ENTS/2; i++) begin
        if (mshr_ld_free[i] && !ld_alloc_idx_found) begin
            ld_alloc_idx = i;
            ld_alloc_idx_found = 1'b1;
        end
    end
end



logic [(NUM_MSHR_ENTS/2)-1:0] mshr_st_free;
logic [$clog2(NUM_MSHR_ENTS/2)-1:0] st_alloc_idx;
logic st_alloc_idx_found;

always_comb begin
    st_alloc_idx = '0;
    st_alloc_idx_found = 1'b0;
    for(int i = 0; i < NUM_MSHR_ENTS/2; i++) begin
        mshr_st_free[i] = ~mshr_st[i].valid_bit;
    end

    st_full_o = ~|mshr_st_free;

    for(int i = 0; i < NUM_MSHR_ENTS/2; i++) begin
        if (mshr_st_free[i] && !st_alloc_idx_found) begin
            st_alloc_idx = i;
            st_alloc_idx_found = 1'b1;
        end
    end
end

always_ff @(posedge clk_i) begin
    if(rst_i) begin
        for(int i=0; i <NUM_MSHR_ENTS/2; i++) begin
            mshr_ld[i] <= '0;
            mshr_st[i] <= '0;
        end
    end else if (flush_i) begin
        for(int i=0; i <NUM_MSHR_ENTS/2; i++) begin
            mshr_ld[i] <= '0;
            // mshr_st[i] <= '0; // Stores are still be valid after flush (i think)
        end
    end else begin
        if(ld_alloc_en_i && !ld_full_o) begin 
            mshr_ld[ld_alloc_idx].valid_bit <= 1'b1;
            mshr_ld[ld_alloc_idx].addr <= ld_alloc_addr_i;
            mshr_ld[ld_alloc_idx].data <= '0;
            mshr_ld[ld_alloc_idx].rob_idx <= ld_alloc_rob_idx_i;
        end 

        if(st_alloc_en_i && !st_full_o) begin 
            mshr_st[st_alloc_idx].valid_bit <= 1'b1;
            mshr_st[st_alloc_idx].addr <= st_alloc_addr_i;
            mshr_st[st_alloc_idx].data <= st_alloc_data_i;
            mshr_st[st_alloc_idx].rob_idx <= st_alloc_rob_idx_i;
        end 

        if(repair_complete_i) begin   // mark repaired entries as unvalid so they can be overwritten 
            if (repairing_ld) begin
                mshr_ld[repair_ptr_reg].valid_bit <= 1'b0;
            end 
            
            if (repairing_st) begin
                mshr_st[repair_ptr_reg].valid_bit <= 1'b0;
            end
        end
    end
end


// =============== Repair Select Logic ================== //
// -> Responsible for issuing repairs

logic repairing_ld;
logic repairing_st;
logic start_repair_ld;
logic start_repair_st;


logic [$clog2(NUM_MSHR_ENTS/2)-1:0] repair_ptr;
logic [$clog2(NUM_MSHR_ENTS/2)-1:0] repair_ptr_reg;


logic [(NUM_MSHR_ENTS/2)-1:0] ld_repair_req;
logic [(NUM_MSHR_ENTS/2)-1:0] st_repair_req;

always_comb begin
    ld_repair_req = '0;
    st_repair_req = '0;

    for(int i = 0; i < NUM_MSHR_ENTS/2; i++) begin
        // ld_repair_req[i] = mshr_ld[i].valid_bit && !mshr_ld[i].repaired;
        // st_repair_req[i] = mshr_st[i].valid_bit && !mshr_st[i].repaired;
        ld_repair_req[i] = mshr_ld[i].valid_bit;
        st_repair_req[i] = mshr_st[i].valid_bit;
    end

    if(!repairing_ld && !repairing_st) begin // if we're not currently repairing and if we aren't starting a repair, look for a requesting entry
        
        start_repair_ld = 1'b0;
        start_repair_st = 1'b0;
        repair_ptr = '0;

        if(|ld_repair_req) begin    // check if there is a load that needs to be repaired (they take priority over stores)
            for(int i = (NUM_MSHR_ENTS/2)-1; i >= 0; i--) begin
                if(ld_repair_req[i]) begin
                    repair_ptr = i;
                    start_repair_ld = 1'b1;
                end
            end
        end else if (|st_repair_req) begin  // check if there is a store that needs to be repaired
            for(int i = (NUM_MSHR_ENTS/2)-1; i >= 0; i--) begin
                if(st_repair_req[i]) begin
                    repair_ptr = i;
                    start_repair_st = 1'b1;
                end
            end
        end else begin  // no requesting entries found
            repair_ptr = '0;    
            start_repair_ld = 1'b0;
            start_repair_st = 1'b0;
        end
    end else begin
        repair_ptr = '0;    
        start_repair_ld = 1'b0;
        start_repair_st = 1'b0;
    end
end


always_ff @(posedge clk_i) begin
    if(rst_i) begin
        repairing_ld <= 1'b0;
        repairing_st <= 1'b0;
        repair_ptr_reg <= '0;
    end else begin
        if (start_repair_ld && repair_ack_i) begin
            repairing_ld <= 1'b1;
            repair_ptr_reg <= repair_ptr;
        end else if (start_repair_st && repair_ack_i) begin 
            repairing_st <= 1'b1;
            repair_ptr_reg <= repair_ptr;
        end else if (repair_complete_i) begin // upon the completion of a repair, 
            repairing_ld <= 1'b0;
            repairing_st <= 1'b0;
            repair_ptr_reg <= '0;
        end
    end
end

// assign information about the repair request (data, memory operation, )
always_comb begin
    repair_req_o = start_repair_ld || start_repair_st;
    repair_is_store_o = start_repair_st;
    repair_req_addr_o = start_repair_ld ? mshr_ld[repair_ptr].addr : (start_repair_st ? mshr_st[repair_ptr].addr : 'x);
    repair_req_data_o = start_repair_st ? mshr_st[repair_ptr].data : 'x;
    repair_req_rob_idx_o = start_repair_ld ? mshr_ld[repair_ptr].rob_idx : 'x;
end
endmodule
