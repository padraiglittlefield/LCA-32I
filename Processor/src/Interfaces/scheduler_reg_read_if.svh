`ifndef SCHED_REG_READ
`define SCHED_REG_READ


interface scheduler_reg_read_if;

    import CORE_PKG::*;
    
    disp_packet_t sched_pkt;
    logic fire_valid;

    modport scheduler (
        output fire_valid, sched_pkt
    );

    modport reg_read(
        input fire_valid, sched_pkt
    );
    
endinterface
`endif
