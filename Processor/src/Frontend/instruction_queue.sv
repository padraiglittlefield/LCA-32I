module instruction_queue #(
    parameter DEPTH = 16
)(
    input logic clk,
    input logic rst,
    input logic flush,

    input logic [RENAME_WIDTH-1:0] rename_vld_i,
    input rename_packet_t [RENAME_WIDTH-1:0] rename_pkt_i,
    output logic [RENAME_WIDTH-1:0] full,

    input logic [RENAME_WIDTH-1:0] dispatch_en_i,
    output logic [FIRE_WIDTH-1:0] instr_vld_o,
    output rename_packet_t [FIRE_WIDTH-1:0] instr_pkt_o

);

import CORE_PKG::*;
localparam PTR_WIDTH = $clog2(DEPTH);


logic [PTR_WIDTH:0] tail_ptr, head_ptr;
rename_packet_t queue [DEPTH];



// Count how many much to advance tail ptr based on number of instructions renamed  + check if its full 
logic [RENAME_WIDTH-1:0] instr_queue_full;
logic [$clog2(RENAME_WIDTH+1)-1:0] num_allocated;
logic [RENAME_WIDTH-1:0] alloc_en;
logic [PTR_WIDTH:0] alloc_ptr [0:RENAME_WIDTH-1];
logic [PTR_WIDTH-1:0] alloc_idx [0:RENAME_WIDTH-1];
always_comb begin
    num_allocated = '0;
    for(int i = 0; i<RENAME_WIDTH; i++) begin
        alloc_ptr[i] = (tail_ptr + PTR_WIDTH'(i));
        alloc_idx[i] = alloc_ptr[i][PTR_WIDTH-1:0];

        if(i == 0) begin
            instr_queue_full[i] = (head_ptr[PTR_WIDTH] != alloc_ptr[i][PTR_WIDTH]) && (head_ptr[PTR_WIDTH-1:0] == alloc_idx[i]);
        end else begin
            instr_queue_full[i] = instr_queue_full[i-1] || (head_ptr[PTR_WIDTH] != alloc_ptr[i][PTR_WIDTH]) && (head_ptr[PTR_WIDTH-1:0] == alloc_idx[i]);
        end

        alloc_en[i] = rename_vld_i[i] & !instr_queue_full[i];
        
        // count the number of entries added in order to know how many to progress the tail ptr by
        if(alloc_en[i]) begin
            num_allocated = num_allocated + $bits(num_allocated)'(1); 
        end
    end
    
    full = instr_queue_full;
end


// Count how many much to advance the instr queue based on how many dispatches are requested
logic [$clog2(FIRE_WIDTH+1)-1:0] num_dispatched;
logic [FIRE_WIDTH-1:0] dispatch_en;
logic [PTR_WIDTH-1:0] dispatch_idx [0:FIRE_WIDTH-1];

always_comb begin
    num_dispatched = '0;
    for(int i = 0; i<FIRE_WIDTH; i++) begin
        dispatch_idx = (head_ptr + PTR_WIDTH'(i));
        if(i == 0) begin
           dispatch_en[i] = dispatch_en_i[i];
        end else begin
           dispatch_en[i] = dispatch_en_i[i-1] && dispatch_en_i[i]; // technically if i do disptach correctly this check isnt needed TODO maybe
        end
        
        // count the number of entries added in order to know how many to progress the tail ptr by
        if(dispatch_en[i]) begin
            num_dispatched = num_dispatched + $bits(num_dispatched)'(1); 
        end
    end
end

// Expose to first FIRE_WIDTH instructions to the dispatch logic for decideding which it can dispatch
always_comb begin
    for(int i = 0; i<FIRE_WIDTH; i++) begin
        instr_pkt_o[i] = queue[dispatch_idx[i][PTR_WIDTH-1:0]];
        instr_vld_o[i] = queue[dispatch_idx[i][PTR_WIDTH-1:0]].instr_valid;
    end
end

always_ff @(posedge clk) begin
    if(rst || flush) begin
        
        // reset ptrs
        head_ptr <= '0;
        tail_ptr <= '0;
        
        // clear instr queue
        for (int i = 0; i < DEPTH; i++) begin
            queue[i] <= '0;
        end
        
    end else begin
        for(int i = 0; i < RENAME_WIDTH; i++) begin
            if(alloc_en[i]) begin
                queue[alloc_idx[i]] <= rename_pkt_i[i]; // add rename pkt to the queue
            end
        end

        // Not going to clean entries because of pointers taking care of it basically
        // for(int i = 0; i < FIRE_WIDTH) begin
        //     if(dispatch_en[i]) begin
        //         queue[dispatch_idx[i]] <= '0; // add rename pkt to the queue
        //     end
        // end

        // advance pointers
        tail_ptr <= tail_ptr + PTR_WIDTH'(num_allocated);
        head_ptr <= head_ptr + PTR_WIDTH'(num_dispatched);
    end
end
endmodule
