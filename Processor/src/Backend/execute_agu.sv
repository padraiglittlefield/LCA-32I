module execute_agu (
    input   logic   clk,
    input   logic   rst,
    reg_read_execute_if.execute reg_read_if,
    //TODO: Connect to LSU
    output  logic                            lsu_vld_o,
    output  logic                            lsu_is_store_o,
    output  logic [31:0]                     lsu_addr_o,
    output  logic [31:0]                     lsu_store_data_o,
    output  logic [$clog2(ROB_ENTRIES)-1:0]  lsu_rob_idx_o,
    output  logic [$clog2(LDQ_ENTRIES)-1:0]  lsu_ldq_idx_o,
    output  logic [$clog2(SDQ_ENTRIES)-1:0]  lsu_sdq_idx_o
);

import CORE_PKG::*;

exec_packet_t exec_pkt;

logic [31:0] addr_out;
logic addr_valid;
logic is_store;



// ==== Register Read ==== //
assign exec_pkt = reg_read_if.exec_pkt; // collect instr packet from reg read pipeline register

always_comb begin
    case(exec_pkt.opcode)
        SW:         is_store = 1'b1;
        default:    is_store = 1'b0;
    endcase
end


// ==== AGU ==== //

agu agu (
    .agu_en(exec_pkt.alu_en),
    .val1(exec_pkt.src1_val),
    .val2(exec_pkt.imm_val),
    .addr_out(addr_out),
    .addr_valid(addr_valid)
    );


// ==== Send Results to LSU ==== //
always_comb begin
    lsu_vld_o           = reg_read_if.fire_valid & addr_valid;
    lsu_is_store_o      = is_store;
    lsu_addr_o          = addr_out;
    lsu_store_data_o    = exec_pkt.src2_val;
    lsu_rob_idx_o       = exec_pkt.rob_entry_idx;
    lsu_ldq_idx_o       = exec_pkt.ldq_idx;
    lsu_sdq_idx_o       = exec_pkt.sdq_idx;
end

endmodule
