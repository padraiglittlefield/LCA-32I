`timescale 1ns/1ns


module fwrd_unit (
    fwrd_reg_read_if.fwrd_unit reg_read_if[NUM_FUS],
    execute_fwrd_if.fwrd_unit exec_if[NUM_FUS] 
);

//TODO: Make this a local fwrd unit
genvar i,j;
generate 
    for(i = 0; i < NUM_FUS; i++) begin
        always_comb begin
            reg_read_if[i].src1_fwrd_hit = 1'b0;
            reg_read_if[i].src2_fwrd_hit = 1'b0;
            reg_read_if[i].src1_val = '0;
            reg_read_if[i].src2_val = '0;
            
            for(j = 0; j < NUM_FUS; j++) begin
                if(exec_if[j].ex_valid) begin

                    // check if src1 can be forwarded
                    if((reg_read_if[i].src1_reg == exec_if[j].dst_reg)) begin
                        reg_read_if[i].src1_fwrd_hit = 1'b1;
                        reg_read_if[i].src1_val = exec_if[j].ex_val;
                    end 
                    
                    // check if src2 can be forwarded
                    if((reg_read_if[i].src2_reg == exec_if[j].dst_reg)) begin
                        reg_read_if[i].src2_fwrd_hit = 1'b1;
                        reg_read_if[i].src2_val = exec_if[j].ex_val;
                    end
                end
            end 
        end
    end
endgenerate

endmodule
