# LCA-32I
Simple Out of Order processor based on RiscV-32I

## Layout
```
rtl/core/        synthesizable RTL (core_pkg.sv, core.sv, all units)
filelists/rtl.f  ordered RTL source list; the single source of truth for every flow
tb/              unit testbenches (tb_<module>.sv)
sim/             Verilator flow (Makefile, regress.sh)
fpga/            FPGA synthesis/implementation (placeholder)
asic/            ASIC synthesis and APR (placeholder)
docs/            block diagram, ISA reference card
build/           all generated output (gitignored)
```

## Running Testbenches
```
make -C sim view target=<module>     # build, run, open waveform (tb/tb_<module>.sv)
make -C sim build target=<module>    # build and run only
make -C sim regress                  # run every testbench, report pass rate
make -C sim filelist                 # regenerate verible.filelist
```
New RTL files must be added to `filelists/rtl.f`.
