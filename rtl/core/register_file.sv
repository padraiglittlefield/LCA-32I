`timescale 1ns/1ns

module register_file
    import CORE_PKG::*;
(
    input  logic                            clk,
    input  logic                            rst,
    input  logic                            flush_en,
    // Register Read
    input  logic [$clog2(NUM_PREGS)-1:0]    rd_src1_preg_i  [NUM_FUS],
    input  logic [$clog2(NUM_PREGS)-1:0]    rd_src2_preg_i  [NUM_FUS],
    output logic [31:0]                     rd_src1_val_o   [NUM_FUS],
    output logic [31:0]                     rd_src2_val_o   [NUM_FUS],
    // Execute
    input  logic                            ex_wr_en_i      [NUM_FUS-1],
    input  logic [$clog2(NUM_PREGS)-1:0]    ex_wr_preg_i    [NUM_FUS-1],
    input  logic [31:0]                     ex_wr_val_i     [NUM_FUS-1],
    // Reorder Buffer
    input  logic                            rob_wr_en_i     [RETIRE_WIDTH],
    input  logic [$clog2(NUM_AREGS)-1:0]    rob_wr_areg_i   [RETIRE_WIDTH],
    input  logic [31:0]                     rob_wr_val_i    [RETIRE_WIDTH]
);

logic [31:0] registers [0:NUM_PREGS-1];

// ==== Reading From Register File ==== //
always_comb begin
    for (int i = 0; i < NUM_FUS; i++) begin
        // default to register file value
        rd_src1_val_o[i] = registers[rd_src1_preg_i[i]];
        rd_src2_val_o[i] = registers[rd_src2_preg_i[i]];

        // check all execute write ports for a match for forwarding opportunities
        for (int j = 0; j < NUM_FUS-1; j++) begin
            if (ex_wr_en_i[j] && ex_wr_preg_i[j] == rd_src1_preg_i[i]) begin
                rd_src1_val_o[i] = ex_wr_val_i[j];
            end
            if (ex_wr_en_i[j] && ex_wr_preg_i[j] == rd_src2_preg_i[i]) begin
                rd_src2_val_o[i] = ex_wr_val_i[j];
            end
        end
    end
end


// ==== Writing to Physical Register File ==== //
always_ff @(posedge clk) begin
    if (rst) begin
        for (int i = 0; i < NUM_PREGS; i++) begin
            registers[i] <= '0;
        end
    end else begin
        for (int j = 0; j < NUM_FUS-1; j++) begin
            if (ex_wr_en_i[j]) begin
                registers[ex_wr_preg_i[j]] <= ex_wr_val_i[j];
            end
        end 
        for (int k = 0; k < RETIRE_WIDTH; k++)
            if (rob_wr_en_i[k])
                registers[rob_wr_areg_i[k]] <= rob_wr_val_i[k];
    end
end


always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < NUM_PREGS; i++) begin
            registers[i] <= '0;
        end
    end
end
endmodule
