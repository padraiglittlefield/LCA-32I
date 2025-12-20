module execute_agu (
    input logic clk,
    input logic rst,
    reg_read_execute_if.execute reg_read_if
    //TODO: Connect to LSU
);

exec_packet_t exec_pkt;

logic [31:0] addr_out;
logic addr_valid;

// ==== AGU ==== //

agu agu (
    .agu_en(exec_pkt.alu_en),
    .val1(exec_pkt.src1_val),
    .val2(exec_pkt.src2_val),
    .addr_out(addr_out),
    .addr_valid(addr_valid)
    );

// ==== Register Read ==== //
always_comb begin 
    exec_pkt = reg_read_if.exec_pkt; // collect instr packet from reg read pipeline register
end

// ==== Send Results to LSU ==== //
/*
    TODO
*/

endmodule
