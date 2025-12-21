module core (
    input clk,
    input rst
);

dispatch_scheduler_if           disp_if[NUM_FUS]();
execute_scheduler_if            exec_if[NUM_FUS]();
scheduler_reg_read_if           reg_read_if[NUM_FUS]();
reg_read_phys_reg_file_if       reg_file_if[NUM_FUS]();
fwrd_reg_read_if                fwrd_if[NUM_FUS]();
reg_read_execute_if             exec_if[NUM_FUS]();
reg_read_execute_if reg_read_if[NUM_FUS]();
execute_fwrd_if fwrd_if[NUM_FUS]();
execute_phys_reg_file_if reg_file_if[NUM_FUS]();
execute_reorder_buffer_if rob_if[NUM_FUS]();
dispatch_reorder_buffer_if      disp_if[FIRE_WIDTH]();
execute_reorder_buffer_if       exec_if[(NUM_FUS-1)]();
arch_reg_file_reorder_buffer_if arch_reg_file_if[RETIRE_WIDTH]();
reorder_buffer_flush_unit_if    flush_if();


genvar i;
generate : Backend
    for(i = 0; i<NUM_FUS; i++) begin
        scheduler u_scheduler(

        );

        register_read u_register_read (

        );


        execute_alu u_execute_alu (

        ); 
    end
endgenerate


reorder_buffer u_reorder_buffer (

);

arch_reg_file u_arch_reg_file (

);


phys_reg_file u_phys_reg_file (

);

fwrd_unit u_fwrd_unit (

);


endmodule