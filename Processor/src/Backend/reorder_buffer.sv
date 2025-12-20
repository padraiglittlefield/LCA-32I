/* Reorder Buffer Module
        - By: Padraig Littlefield
*/

module reorder_buffer #(
    parameter RETIRE_WIDTH = 2, // Max Number of entries to retire per cycle 
    parameter FIRE_WIDTH = 2   // Max Number of entries to be allocated per cycle
)(
    input logic clk,
    input logic rst,
    input logic flush_en,
    dispatch_reorder_buffer_if.rob disp_if[FIRE_WIDTH],
    execute_reorder_buffer_if.rob exec_if[NUM_FUS],
    arch_reg_file_reorder_buffer_if.rob arch_reg_file_if[RETIRE_WIDTH],
    reorder_buffer_flush_unit_if.rob flush_if
);


localparam RESULT_FINISH_WIDTH = NUM_FUS-1; // TODO: +1 for LSU
localparam ROB_DEPTH  = 1 << $clog2(ROB_ENTRIES);
localparam PTR_WIDTH = $clog2(ROB_DEPTH) + 1;
localparam IDX_WIDTH = $clog2(ROB_DEPTH);   


// Main ROB structures
rob_entry_t rob_entries [0:ROB_DEPTH-1]; // static rob entry info
rob_status_t rob_status [0:ROB_DEPTH-1]; // dynamic rob entry info

// ptrs for tracking where we're at in the rob
logic [PTR_WIDTH-1:0] head_ptr;
logic [PTR_WIDTH-1:0] tail_ptr; 

// allocate entry signals
logic [FIRE_WIDTH-1:0] alloc_valid;
logic [FIRE_WIDTH-1:0] alloc_full;
logic [IDX_WIDTH-1:0] alloc_idx [0:FIRE_WIDTH-1];
logic [PTR_WIDTH-1:0] alloc_ptr [0:FIRE_WIDTH-1];
rob_entry_t alloc_entry [0:FIRE_WIDTH-1];
logic [FIRE_WIDTH-1:0] alloc_enable;
logic [$clog2(FIRE_WIDTH+1)-1:0] num_allocations;

// retire entry signals
logic [RETIRE_WIDTH-1:0] retire_valid;
logic [RETIRE_WIDTH-1:0] retire_ready;
logic [RETIRE_WIDTH-1:0] retire_enable;
logic [RETIRE_WIDTH-1:0] retire_flush;
logic [RETIRE_WIDTH-1:0] retire_exception;

logic [IDX_WIDTH-1:0] retire_idx [0:RETIRE_WIDTH-1];
logic [PTR_WIDTH-1:0] retire_ptr [0:RETIRE_WIDTH-1];
rob_entry_t retire_entry [0:RETIRE_WIDTH-1];
rob_status_t retire_status [0:RETIRE_WIDTH-1];
logic [$clog2(RETIRE_WIDTH+1)-1:0] num_retirements;

// result bus signal
logic [RESULT_FINISH_WIDTH-1:0] result_valid;
logic [IDX_WIDTH-1:0] result_idx [0:RESULT_FINISH_WIDTH-1];
logic [31:0] result_data [0:RESULT_FINISH_WIDTH-1];

// flush signals
logic [31:0] retore_pc;


// =================================
//        Main ROB Blocks
// =================================

/*      Allocating Reorder Buffer Entries
    =======================================

    NOTE: This Allocate logic assumes that the Dispatch Stage will send contigous instructions

        So, for FIRE_WIDTH 4, 4'b0001, 4'b0011, 4'b0111, and 4'b1111 are all the possible configurations. No gaps are allowed such for the case 4'b1001.
        This is very fire implementation specfic, so this alloc logic can be updated if need be

*/

// interface connections for the Dispatch Interface
genvar i;
generate
    for(i = 0; i < FIRE_WIDTH;i++) begin
        always_comb begin            
            // allocate a new entry
            alloc_valid[i] = disp_if[i].fire_valid;
            alloc_entry[i].dest_reg = disp_if[i].dest_reg;
            alloc_entry[i].wb_en = disp_if[i].wb_en;
            alloc_entry[i].mispred = 1'b0;
            alloc_entry[i].exception = 1'b0;

            // return status of rob and entry idx
            disp_if[i].rob_full = alloc_full[i];
            disp_if[i].rob_entry_idx = alloc_full[i] ? 'x : alloc_idx[i];
        end
    end
endgenerate

// figure out if we can allocate and how many
always_comb begin
    num_allocations = '0;

    for (int i = 0; i < FIRE_WIDTH; i++) begin
        alloc_ptr[i] = tail_ptr + PTR_WIDTH'(i);
        alloc_idx[i] = alloc_ptr[i][IDX_WIDTH-1:0];

        if(i==0) begin
            alloc_full[i] = (head_ptr[PTR_WIDTH-1] != alloc_ptr[i][PTR_WIDTH-1]) && (head_ptr[IDX_WIDTH-1:0] == alloc_idx[i]);
            alloc_enable[i] = alloc_valid[i] && !alloc_full[i]; // 
        end else begin
            alloc_full[i] = alloc_full[i-1] || ((head_ptr[PTR_WIDTH-1] != alloc_ptr[i][PTR_WIDTH-1]) && (head_ptr[IDX_WIDTH-1:0] == alloc_idx[i]));
            alloc_enable[i] = alloc_valid[i] && !alloc_full[i] && alloc_enable[i-1];
        end

        if (alloc_enable[i]) begin
            num_allocations = num_allocations + $bits(num_allocations)'(1);
        end
    end
end

/*     
        Retiring Reorder Buffer Entries
    ======================================= 
*/

always_comb begin
    num_retirements = '0;
    restore_pc = '0;
    for(int i = 0; i < RETIRE_WIDTH; i++) begin
        retire_ptr[i] = head_ptr + PTR_WIDTH'(i);
        retire_idx[i] = retire_ptr[i][IDX_WIDTH-1:0];

        retire_entry[i]     = rob_entries[retire_idx[i]];
        retire_status[i]    = rob_status[retire_idx[i]];
        retire_valid[i]     = retire_status[i].valid;
        retire_ready[i]     = retire_status[i].ready & retire_valid[i];
        retire_flush[i]     = retire_entry[i].mispred;
        retire_exception[i] = retire_entry[i].exception;

        // determine if the entry is ready to be retired
        if(i==0) begin
            retire_enable[i] = retire_valid[i] && retire_ready[i];  
        end else begin
            // check previous entry to make sure it retired firest
            retire_enable[i] = retire_valid[i] && retire_ready[i] && retire_enable[i-1] && (~retire_flush[i-1] && ~retire_exception[i-1]);
        end

        if(retire_enable[i] & retire_flush[i]) begin // only one can be both so no need to worry about it being overwritten
            restore_pc = retire_entry[i].pc;
        end

        // count how many instructions we've retired to we can update the head pointer accordingly
        if (retire_enable[i]) begin
            num_retirements = num_retirements + $bits(num_retirements)'(1);
        end

    end
end

// connect with register file interfaces
generate
    for(i = 0; i < RETIRE_WIDTH; i++) begin
        always_comb begin
            arch_reg_file_if[i].dest_reg = retire_entry[i].dest_reg;
            arch_reg_file_if[i].result = retire_status[i].result;
            arch_reg_file_if[i].valid = retire_enable[i] && retire_entry[i].wb_en;
        end
    end
endgenerate


/* State update block */
always_ff @(posedge clk) begin
    if (rst || flush_en) begin

        // reset ptrs
        head_ptr <= '0;
        tail_ptr <= '0;
        
        // clear rob
        for (int i = 0; i < ROB_DEPTH; i++) begin
            rob_entries[i] <= '0;
            rob_status[i] <= '0;
        end
        
    end else begin 

        // write the new entries to the rob
        for (int i = 0; i < FIRE_WIDTH; i++) begin
            if (alloc_enable[i]) begin
                rob_entries[alloc_idx[i]] <= alloc_entry[i];
                rob_status[alloc_idx[i]].valid <= 1'b1;
                rob_status[alloc_idx[i]].ready <= 1'b0;
                rob_status[alloc_idx[i]].result <= '0;
            end
        end
        
        // write result to rob and update ready bit
        for (int i = 0; i < RESULT_FINISH_WIDTH; i++) begin
            if (result_valid[i]) begin
                rob_status[result_idx[i]].ready <= 1'b1;
                rob_status[result_idx[i]].result <= result_data[i];
            end
        end
                
        // clear retired instruction (mark invalid and unready)
        for (int i = 0; i < RETIRE_WIDTH; i++) begin
            if (retire_enable[i]) begin
                rob_status[retire_idx[i]].valid <= 1'b0;
                rob_status[retire_idx[i]].ready <= 1'b0;
            end
        end

        
        // update pointers based on how many entries we allocated/retired this cycle
        tail_ptr <= tail_ptr + PTR_WIDTH'(num_allocations);
        head_ptr <= head_ptr + PTR_WIDTH'(num_retirements);
        
    end
end


always_ff @(posedge clk) begin
    if(rst || flush_en) begin
        flush_if.flush_out <= '0;
        pc <= '0;
    end else begin
        flush_if.flush_out <= |(retire_enable & retire_flush);
        pc <= restore_pc;
    end
end


/* ===== Result Bus/Execute Interface =====*/

// connect to result bus interface
generate
    for (i = 0; i < RESULT_FINISH_WIDTH; i++) begin
        always_comb begin
            result_valid[i] = exec_if[i].ex_valid;
            result_idx[i] = exec_if[i].rob_entry_idx;
            result_data[i] = exec_if[i].ex_val;

            //TODO: Connect LSU to ROB for loading values
        end
    end
endgenerate
endmodule
