/*  Dependecny Matrix Mapping Table (DMT)
===========================================
- Serves as a "Scoreboard" that keeps track of which Reservation Station Entry/FU each busy Phys Reg is stored to generate the Dependency Mask Vector.
- Marked as busy whenever a Dst Preg is being written to, cleared upon the instruction finishing execution.
*/
module dependency_mapping_table (
    input   logic   clk_i,
    input   logic   rst_i,
    input   logic   flush_i,

    // Dispatch (Write) ->
    input   logic                                           fire_vld_i          [0:FIRE_WIDTH-1],
    input   logic   [$clog2(NUM_PREGS)-1:0]                 dst_preg_i          [0:FIRE_WIDTH-1],
    input   logic   [$clog2((RS_ENTRIES * NUM_FUS))-1:0]    fire_loc_i          [0:FIRE_WIDTH-1],
    
    // -> Dispatch (Read Dependency) ->
    input   logic   [$clog2(NUM_PREGS)-1:0]                 src1_preg_i         [0:FIRE_WIDTH-1],
    input   logic   [$clog2(NUM_PREGS)-1:0]                 src2_preg_i         [0:FIRE_WIDTH-1],
    output  logic   [(RS_ENTRIES * NUM_FUS)-1:0]            dependency_mask_o   [0:FIRE_WIDTH-1],

    // Execute (Clears Busy Bit) ->
    input   logic                                           exec_vld_i          [0:NUM_FUS-1],
    input   logic   [$clog2(NUM_PREGS)-1:0]                 exec_dst_preg_i     [0:NUM_FUS-1]
);

import CORE_PKG::*;


/* Keeps Track of which Reservation Station in which Functional Unit is storing this in Progress Preg */
typedef struct packed {
    logic busy_bit; // is this preg busy?
    logic [$clog2((RS_ENTRIES * NUM_FUS))-1:0] dependency_loc; // where in the matrix is this preg at?
} dmt_entry;


dmt_entry dmt [NUM_PREGS];

dmt_entry src1_dmt_entry [0:FIRE_WIDTH-1];
dmt_entry src2_dmt_entry [0:FIRE_WIDTH-1];


always_comb begin : build_dependency_map
    for(int i=0; i<FIRE_WIDTH;i++) begin
        // Read DMT
        dependency_mask_o[i] = '0;
        src1_dmt_entry[i] = dmt[src1_preg_i[i]];
        src2_dmt_entry[i] = dmt[src2_preg_i[i]];
        
        if(src1_dmt_entry[i].busy_bit) begin
            dependency_mask_o[i][src1_dmt_entry[i].dependency_loc] = 1'b1;
        end

        if(src2_dmt_entry[i].busy_bit) begin
            dependency_mask_o[i][src2_dmt_entry[i].dependency_loc] = 1'b1;
        end

        // Forward to prevent RAW hazards
        for (int j=0; j<i; j++) begin
            if(fire_vld_i[j]) begin
                if(src1_preg_i[i] == dst_preg_i[j]) begin
                    dependency_mask_o[i][fire_loc_i[j]] = 1'b1;
                end

                if(src2_preg_i[i] == dst_preg_i[j]) begin
                    dependency_mask_o[i][fire_loc_i[j]] = 1'b1;
                end
            end
        end
    end
end


always_ff @(posedge clk_i) begin : write_dependency
    if(rst_i || flush_i) begin
        for(int i=0; i < NUM_PREGS;i++) begin
            dmt[i] <= '0;
        end
    end else begin
        // Write new entries for instructions being fired
        for(int i=0;i<FIRE_WIDTH;i++) begin
            if(fire_vld_i[i]) begin
                dmt[dst_preg_i[i]].busy_bit <= 1'b1;
                dmt[dst_preg_i[i]].dependency_loc <= fire_loc_i[i];
            end
        end

        // Clear Busy Bit for instructions exiting execute
        for(int i=0;i<NUM_FUS;i++) begin
            if(exec_vld_i[i]) begin
                dmt[exec_dst_preg_i[i]].busy_bit <= 1'b0;
            end
        end
    end
end

endmodule
