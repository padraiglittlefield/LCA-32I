`ifndef REG_READ_EXEC_IF
`define REG_READ_EXEC_IF

/*
    Pipeline Register between Reg Read Stage and Execute Stage
*/

interface reg_read_execute_if;

    import CORE_PKG::*;

    exec_packet_t exec_pkt;
    logic fire_valid;

    modport reg_read (
        output fire_valid, exec_pkt
    );

    modport execute (
        input fire_valid, exec_pkt
    );

endinterface
`endif
