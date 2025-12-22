module core (
    input clk,
    input rst
);


// ==================== Interfaces ==================== //

dispatch_scheduler_if           disp_sched_if[NUM_FUS]();
execute_scheduler_if            exec_sched_if[NUM_FUS]();
scheduler_reg_read_if           sched_reg_read_if[NUM_FUS]();
reg_read_reg_file_if       reg_read_reg_file_if[NUM_FUS]();
fwrd_reg_read_if                reg_read_fwrd_if[NUM_FUS]();
reg_read_execute_if             reg_read_if_exec_if[NUM_FUS]();
execute_fwrd_if                 exec_fwrd_if[NUM_FUS]();
execute_phys_reg_file_if        exec_reg_file_if[NUM_FUS]();
dispatch_reorder_buffer_if      disp_rob_if[FIRE_WIDTH]();
execute_reorder_buffer_if       exec_rob_if[(NUM_FUS-1)]();
arch_reg_file_reorder_buffer_if arch_reg_file_rob_if[RETIRE_WIDTH]();
reorder_buffer_flush_unit_if    rob_flush_if();

// ==================================================== //

logic [RS_ENTRIES-1:0] local_ready_mask [0:NUM_FUS-1];
logic [(RS_ENTRIES * NUM_FUS)-1:0] global_ready_mask;

genvar i;
generate 
    for(i = 0; i<NUM_FUS; i++) begin : Backend
        scheduler u_scheduler(
            .clk(clk),
            .rst(rst),
            .local_ready_mask(local_ready_mask[i]),
            .global_ready_mask(global_ready_mask),
            .disp_if(disp_sched_if[i].scheduler),
            .exec_if(exec_sched_if[i].scheduler), // TODO: FIX THIS 
            .reg_read_if(sched_reg_read_if[i].scheduler)
        );

        register_read u_register_read (
            .clk(clk),
            .rst(rst),
            .sched_if(sched_reg_read_if[i].reg_read),
            .reg_file_if(reg_read_reg_file_if[i].reg_read),
            .fwrd_if(reg_read_fwrd_if[i].reg_read),
            .exec_if(reg_read_if_exec_if[i].reg_read)
        );

        fwrd_unit u_fwrd_unit (
            .reg_read_if(reg_read_fwrd_if[i].fwrd_unit),
            .exec_if(exec_fwrd_if.fwrd_unit)
        );

        // First 3 FU-Pipes have ALU, the 4th has a AGU
        if(i < 3) begin
            
            execute_alu u_execute_alu (
                .clk(clk),
                .rst(rst),
                .reg_read_if(reg_read_if_exec_if[i].execute),
                .fwrd_if(exec_fwrd_if[i].execute),
                .reg_file_if(exec_reg_file_if[i].execute),
                .rob_if(exec_rob_if[i].execute)
            ); 

        end else begin

            // TODO: Implement LSU and connect it here
            execute_agu u_execute_alu (
                .clk(clk),
                .rst(rst),
                .reg_read_if(reg_read_if_exec_if[i].execute)
            );

        end
    end
endgenerate

always_comb begin
    for(int j=0; j<NUM_FUS; j++) begin
        global_ready_mask[(RS_ENTRIES * j) +: RS_ENTRIES] = local_ready_mask[j]; 
    end
end


reorder_buffer u_reorder_buffer (
    .clk(clk),
    .rst(rst),
    .disp_if(disp_rob_if.rob),
    .exec_if(exec_rob_if.rob),
    .arch_reg_file_if(arch_reg_file_rob_if.rob),
    .flush_if(rob_flush_if.rob)
);

register_file u_register_file (
    .clk(clk),
    .rst(rst),
    .rob_if(arch_reg_file_rob_if.reg_file),
    .reg_read_if(reg_read_reg_file_if.phys_reg_file),
    .exec_if(exec_reg_file_if.phys_reg_file)
);

endmodule