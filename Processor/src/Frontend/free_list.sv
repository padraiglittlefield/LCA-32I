/*
    Free List for Tracking PREG Use
*/
module free_list #(
    parameter DEPTH = NUM_PREGS
)(
    input logic clk,
    input logic rst,
    input logic flush,
    input logic [RENAME_WIDTH-1:0] r_en,
    output logic [$clog2(NUM_PREGS)-1:0] free_preg_o [0:RENAME_WIDTH-1],
    input logic [RETIRE_WIDTH-1:0] w_en,
    input logic [$clog2(NUM_PREGS)-1:0] retired_preg_i [0:RETIRE_WIDTH-1],
    output logic [RENAME_WIDTH-1:0] empty
);

import CORE_PKG::*;
localparam PTR_WIDTH = $clog2(DEPTH);


logic [PTR_WIDTH:0] tail_ptr, head_ptr;
logic [$clog2(NUM_PREGS)-1:0] free_list [DEPTH];


logic [$clog2(RETIRE_WIDTH+1)-1:0] num_written;
logic [RETIRE_WIDTH-1:0] write_en;
logic [PTR_WIDTH:0] write_ptr [0:RETIRE_WIDTH-1];
logic [PTR_WIDTH-1:0] write_idx [0:RETIRE_WIDTH-1];
always_comb begin
    num_written = '0;
    for(int i = 0; i<RETIRE_WIDTH; i++) begin
        write_ptr[i] = (tail_ptr + PTR_WIDTH'(i));
        write_idx[i] = write_ptr[i][PTR_WIDTH-1:0];

        write_en[i] = w_en[i];
        
        // count the number of pregs added in order to know how many to progress the tail ptr by
        if(write_en[i]) begin
            num_written = num_written + $bits(num_written)'(1); 
        end
    end
end


// Count how many much to advance the instr free_list based on how many reades are requested
logic [$clog2(RENAME_WIDTH+1)-1:0] num_read;
logic [RENAME_WIDTH-1:0] read_en;
logic [PTR_WIDTH:0] read_ptr [0:RENAME_WIDTH-1];
logic [PTR_WIDTH-1:0] read_idx [0:RENAME_WIDTH-1];
logic [RENAME_WIDTH-1:0] free_list_empty;
always_comb begin
    num_read = '0;
    for(int i = 0; i<RENAME_WIDTH; i++) begin
        read_ptr[i] = (head_ptr + PTR_WIDTH'(i));
        read_idx[i] = read_ptr[i][PTR_WIDTH-1:0];

        if(i == 0) begin
            free_list_empty[i] = read_ptr[i] == tail_ptr;
            read_en[i] = r_en[i] && !free_list_empty[i];
        end else begin
            free_list_empty[i] = (free_list_empty[i-1] || read_ptr[i] == tail_ptr);
            read_en[i] = read_en[i-1] && r_en[i] && !free_list_empty[i];
        end
        
        // count the number of pregs read in order to know how many to progress the head ptr by
        if(read_en[i]) begin
            num_read = num_read + $bits(num_read)'(1); 
        end
    end
end

assign empty = free_list_empty;

// Expose to first RENAME_WIDTH pregs to the read logic for renaming
always_comb begin
    for(int i = 0; i<RENAME_WIDTH; i++) begin
        free_preg_o[i] = free_list[read_idx[i]];
    end
end

always_ff @(posedge clk) begin
    if(rst || flush) begin
        
        // reset ptrs
        head_ptr <= '0;
        tail_ptr <= DEPTH;
        
        // clear instr free_list
        for (int i = 0; i < DEPTH; i++) begin
            free_list[i] <= i;
        end
        
    end else begin
        for(int i = 0; i < RETIRE_WIDTH; i++) begin
            if(write_en[i]) begin
                free_list[write_idx[i]] <= retired_preg_i[i]; // add retired preg to the free_list
            end
        end

        // advance pointers
        tail_ptr <= tail_ptr + PTR_WIDTH'(num_written);
        head_ptr <= head_ptr + PTR_WIDTH'(num_read);
    end
end
endmodule
