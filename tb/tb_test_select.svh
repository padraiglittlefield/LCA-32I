// Test selection helper, `include inside a testbench module.
// Run a single test with the +TEST=<name> plusarg (make ... test=<name>).
// The name may be given with or without the "test_" prefix.
// With no +TEST, every test runs.
// Every test starts from a fresh reset_dut(), so tests must not rely on
// state left behind by an earlier test.

function automatic bit test_enabled(input string name);
    string sel;
    if (!$value$plusargs("TEST=%s", sel)) return 1'b1;
    return (sel == name) || ({"test_", sel} == name);
endfunction

`define RUN_TEST(t) if (test_enabled(`"t`")) begin reset_dut(); t(); end

// Waveform filename, passed by the build (sim/Makefile, sim/regress.sh) so it
// always matches the trace format: -DDUMPFILE=\"tb_<name>.<vcd|fst>\"
`ifndef DUMPFILE
`define DUMPFILE "waves.vcd"
`endif
