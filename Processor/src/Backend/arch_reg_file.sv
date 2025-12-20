`timescale 1ns/1ns
module arch_reg_file (
    input clk,
    input rst,
    arch_reg_file_reorder_buffer_if.reg_file rob_if[RETIRE_WIDTH];
);


logic [31:0] arch_reg_file [0:NUM_AREGS-1];


// // ==== Reading From Register File ==== //
// genvar i;
// generate
//     for(i = 0; i < NUM_FUS; i++) begin
//         always_comb begin
//             reg_read_if[i].src1_val = phys_reg_file[reg_read_if[i].src1_reg];
//             reg_read_if[i].src2_val = phys_reg_file[reg_read_if[i].src2_reg];
//         end
//     end
// endgenerate


// ==== Writing to Register File ==== //
genvar j;
generate
    for(j = 0; j < RETIRE_WIDTH; j++) begin : gen_reg_write
        always@(posedge clk) begin
            if(!rst && rob_if[j].valid) begin
                arch_reg_file[rob_if[j].dst_reg] <= rob_if[j].result;
            end
        end
    end
endgenerate

always@(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < NUM_AREGS; i++) begin
            arch_reg_file[i] <= '0;
        end
    end
end
endmodule
