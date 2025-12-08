`ifndef DISP_SCHED_IF
`define DISP_SCHED_IF


interface dispatch_scheduler_if;
    import CORE_PKG::*;

    disp_packet_t disp_pkt;
    logic disp_valid;
    logic [$clog2(NUM_FUS)-1:0] rs_entry_idx;
    logic rs_full;
    logic [(RS_ENTRIES * NUM_FUS)-1:0] dependency_mask;


    // IMPORTANT, Dispatch is responsible for storing the LUT that contains information about where busy destination registe
    // held in the rs

    modport dispatch (
        input rs_entry_idx, rs_full,
        output disp_pkt, disp_valid, dependency_mask
    );
    
    modport scheduler(
        input disp_pkt, disp_valid, dependency_mask,
        output rs_entry_idx, rs_full
    );

endinterface
`endif
