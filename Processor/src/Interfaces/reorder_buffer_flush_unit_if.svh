`ifndef ROB_FLUSH_IF
`define ROB_FLUSH_IF
interface reorder_buffer_flush_unit_if;

import CORE_PKG::*;

logic flush_out;
logic [31:0] pc;

modport rob (
    output flush_out, pc
);

modport flush_unit (
    input flush_out, pc
);

endinterface
`endif
