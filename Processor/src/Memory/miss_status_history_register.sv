/* Miss Status History Register (MSHR)
*   |
*   -> The MSHR is responsible for tracking ongoing misses that have occurred
*
*/
import CORE_PKG::*;

module miss_status_history_register #(
    parameter NUM_ENTS = 16
)(
    input logic clk,
    input logic rst,
    input logic repair_complete,
    input logic repair_ack,
    input logic ld_alloc_en, // on a load miss
    input logic [31:0] ld_alloc_addr,
    input logic [$clog2(ROB_ENTRIES)-1:0] ld_alloc_rob_idx,
    input logic st_alloc_en, // on a store miss
    input logic [31:0] st_alloc_addr,
    input logic [31:0] st_alloc_data,
    input logic [$clog2(ROB_ENTRIES)-1:0] st_alloc_rob_idx,
    output logic ld_full,
    output logic st_full,
    output logic repair_req,
    output logic [31:0] repair_req_addr,
    output logic [31:0] repair_req_data,
    output logic [$clog2(ROB_ENTRIES)-1:0] repair_req_rob_idx,
    output logic repair_is_store
);

typedef struct packed {
    logic valid_bit;
    logic [31:0] addr;
    logic [31:0] data;
    // logic miss_bit;     // if we're here, we've missed
    logic [$clog2(ROB_ENTRIES)-1:0] rob_idx; 
} mshr_ent;

mshr_ent mshr_ld [NUM_ENTS/2];
mshr_ent mshr_st [NUM_ENTS/2];



// =============== Entry Allocation Logic ================== //

logic [(NUM_ENTS/2)-1:0] mshr_ld_free;
logic [$clog2(NUM_ENTS/2)-1:0] ld_alloc_idx;
logic ld_alloc_idx_found;

always_comb begin
    ld_alloc_idx = '0;
    ld_alloc_idx_found = 1'b0;

    for(int i = 0; i < NUM_ENTS/2; i++) begin
        mshr_ld_free[i] = ~mshr_ld[i].valid_bit;
    end

    ld_full = ~|mshr_ld_free;

    for(int i = 0; i < NUM_ENTS/2; i++) begin
        if (mshr_ld_free[i] && !ld_alloc_idx_found) begin
            ld_alloc_idx = i;
            ld_alloc_idx_found = 1'b1;
        end
    end
end



logic [(NUM_ENTS/2)-1:0] mshr_st_free;
logic [$clog2(NUM_ENTS/2)-1:0] st_alloc_idx;
logic st_alloc_idx_found;

always_comb begin
    st_alloc_idx = '0;
    st_alloc_idx_found = 1'b0;

    for(int i = 0; i < NUM_ENTS/2; i++) begin
        mshr_st_free[i] = ~mshr_st[i].valid_bit;
    end

    st_full = ~|mshr_st_free;

    for(int i = 0; i < NUM_ENTS/2; i++) begin
        if (mshr_st_free[i] && !st_alloc_idx_found) begin
            st_alloc_idx = i;
            st_alloc_idx_found = 1'b1;
        end
    end
end

always_ff @(posedge clk) begin
    if(rst) begin
        for(int i=0; i <NUM_ENTS/2; i++) begin
            mshr_ld[i] <= '0;
            mshr_st[i] <= '0;
        end
    end else begin
        if(ld_alloc_en && !ld_full) begin 
            mshr_ld[ld_alloc_idx].valid_bit <= 1'b1;
            mshr_ld[ld_alloc_idx].addr <= ld_alloc_addr;
            mshr_ld[ld_alloc_idx].data <= '0;
            mshr_ld[ld_alloc_idx].rob_idx <= ld_alloc_rob_idx;
        end 

        if(st_alloc_en && !st_full) begin 
            mshr_st[st_alloc_idx].valid_bit <= 1'b1;
            mshr_st[st_alloc_idx].addr <= st_alloc_addr;
            mshr_st[st_alloc_idx].data <= st_alloc_data;
            mshr_st[st_alloc_idx].rob_idx <= st_alloc_rob_idx;
        end 

        if(repair_complete) begin   // mark repaired entries as unvalid so they can be overwritten 
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


logic [$clog2(NUM_ENTS/2)-1:0] repair_ptr;
logic [$clog2(NUM_ENTS/2)-1:0] repair_ptr_reg;


logic [(NUM_ENTS/2)-1:0] ld_repair_req;
logic [(NUM_ENTS/2)-1:0] st_repair_req;

always_comb begin
    ld_repair_req = '0;
    st_repair_req = '0;

    for(int i = 0; i < NUM_ENTS/2; i++) begin
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
            for(int i = (NUM_ENTS/2)-1; i >= 0; i--) begin
                if(ld_repair_req[i]) begin
                    repair_ptr = i;
                    start_repair_ld = 1'b1;
                end
            end
        end else if (|st_repair_req) begin  // check if there is a store that needs to be repaired
            for(int i = (NUM_ENTS/2)-1; i >= 0; i--) begin
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


always_ff @(posedge clk) begin
    if(rst) begin
        repairing_ld <= 1'b0;
        repairing_st <= 1'b0;
        repair_ptr_reg <= '0;
    end else begin
        if (start_repair_ld && repair_ack) begin
            repairing_ld <= 1'b1;
            repair_ptr_reg <= repair_ptr;
        end else if (start_repair_st && repair_ack) begin 
            repairing_st <= 1'b1;
            repair_ptr_reg <= repair_ptr;
        end else if (repair_complete) begin // upon the completion of a repair, 
            repairing_ld <= 1'b0;
            repairing_st <= 1'b0;
            repair_ptr_reg <= '0;
        end
    end
end

// assign information about the repair request (data, memory operation, )
always_comb begin
    repair_req = start_repair_ld || start_repair_st;
    repair_is_store = start_repair_st;
    repair_req_addr = start_repair_ld ? mshr_ld[repair_ptr].addr : (start_repair_st ? mshr_st[repair_ptr].addr : 'x);
    repair_req_data = start_repair_st ? mshr_st[repair_ptr].data : 'x;
    repair_req_rob_idx = start_repair_ld ? mshr_ld[repair_ptr].rob_idx : (start_repair_st ? mshr_st[repair_ptr].rob_idx : 'x);
end
endmodule
