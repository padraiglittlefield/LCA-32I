# Verilator Makefile for SystemVerilog simulation
# Run from sim/ (or: make -C sim ...). Sources come from filelists/rtl.f.

# Default waveform format for the generic targets (build, view, compile, run,
# waveform). Set to vcd or fst here, or override per run:
#   make view target=dispatch TRACE_FORMAT=fst
TRACE_FORMAT ?= vcd

ifeq ($(filter $(TRACE_FORMAT),vcd fst),)
$(error TRACE_FORMAT must be vcd or fst (got '$(TRACE_FORMAT)'))
endif

# Directories
ROOT      := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
TB_DIR    := $(ROOT)/tb
RTL_F     := $(ROOT)/filelists/rtl.f
BUILD_DIR := $(ROOT)/build/sim
MDIR      := $(BUILD_DIR)/tb_$(target)

# Optional: run a single test within the testbench, e.g.
#   make build target=data_cache test=reset_state
# Passed to the sim as +TEST=<name>; the "test_" prefix is optional.
SIM_ARGS  := $(if $(test),+TEST=$(test))

# Tools
VERILATOR := verilator
VERILATOR_BASE_FLAGS := --binary --timing -Wall -Wno-fatal
VERILATOR_BASE_FLAGS += -I$(ROOT)/rtl/core -I$(TB_DIR)
VERILATOR_BASE_FLAGS += --top-module tb_$(target) --Mdir $(MDIR)

# Trace format specific flags
# The testbench's $$dumpfile name comes from DUMPFILE so it always matches the format
VERILATOR_FST_FLAGS := $(VERILATOR_BASE_FLAGS) --trace-fst --trace-structs -DDUMPFILE=\"tb_$(target).fst\"
VERILATOR_VCD_FLAGS := $(VERILATOR_BASE_FLAGS) --trace -DDUMPFILE=\"tb_$(target).vcd\"

# RTL sources from the filelist (comments and blank lines stripped)
RTL_SOURCES := $(addprefix $(ROOT)/,$(shell grep -v '^\s*\#' $(RTL_F) | grep -v '^\s*$$'))

# GTKWave for viewing waveforms
GTKWAVE := gtkwave

.PHONY: all clean view help build_vcd build_fst view_vcd view_fst regress filelist

# Default target
all:
	@echo "Usage: make [view|build]_[vcd|fst] target=<MODULE_NAME>"
	@echo "Examples:"
	@echo "  make view_fst target=dispatch   - Build with FST, run, and view"
	@echo "  make view_vcd target=dispatch   - Build with VCD, run, and view"
	@echo "  make build_fst target=dispatch  - Build with FST and run only"
	@echo "  make build_vcd target=dispatch  - Build with VCD and run only"
	@echo ""
	@echo "Or use the generic commands (format from TRACE_FORMAT, default $(TRACE_FORMAT)):"
	@echo "  make view target=dispatch       - Build, run, and view"
	@echo "  make build target=dispatch      - Build and run only"
	@echo "  make view target=dispatch TRACE_FORMAT=fst  - Override the format"
	@echo ""
	@echo "Add test=<TEST> to any of these to run just one test in the testbench:"
	@echo "  make build target=data_cache test=reset_state"

# Check if target is specified
check_target:
ifndef target
	$(error target is not set. Usage: make view target=<MODULE_NAME>)
endif
	@echo "Building testbench for module: $(target)"
ifdef test
	@echo "Running only test: $(test)"
endif

# === FST-specific targets ===
build_fst: TRACE_FORMAT = fst
build_fst: check_target compile_fst run_fst

view_fst: TRACE_FORMAT = fst
view_fst: check_target compile_fst run_fst waveform_fst

compile_fst:
	@echo "=== Compiling with Verilator (FST format) ==="
	@if [ ! -f "$(TB_DIR)/tb_$(target).sv" ]; then \
		echo "Error: Testbench $(TB_DIR)/tb_$(target).sv not found!"; \
		exit 1; \
	fi
	@mkdir -p $(MDIR)
	$(VERILATOR) $(VERILATOR_FST_FLAGS) \
		$(RTL_SOURCES) \
		$(TB_DIR)/tb_$(target).sv \
		-j 0

run_fst:
	@echo "=== Running simulation (FST format) ==="
	@if [ -f "$(MDIR)/Vtb_$(target)" ]; then \
		cd $(MDIR) && ./Vtb_$(target) $(SIM_ARGS); \
	else \
		echo "Error: Compiled binary not found!"; \
		exit 1; \
	fi

waveform_fst:
	@echo "=== Opening FST waveform in GTKWave ==="
	@if [ -f "$(MDIR)/tb_$(target).fst" ]; then \
		$(GTKWAVE) $(MDIR)/tb_$(target).fst & \
	else \
		echo "Warning: No FST file found."; \
	fi

# === VCD-specific targets ===
build_vcd: TRACE_FORMAT = vcd
build_vcd: check_target compile_vcd run_vcd

view_vcd: TRACE_FORMAT = vcd
view_vcd: check_target compile_vcd run_vcd waveform_vcd

compile_vcd:
	@echo "=== Compiling with Verilator (VCD format) ==="
	@if [ ! -f "$(TB_DIR)/tb_$(target).sv" ]; then \
		echo "Error: Testbench $(TB_DIR)/tb_$(target).sv not found!"; \
		exit 1; \
	fi
	@mkdir -p $(MDIR)
	$(VERILATOR) $(VERILATOR_VCD_FLAGS) \
		$(RTL_SOURCES) \
		$(TB_DIR)/tb_$(target).sv \
		-j 0

run_vcd:
	@echo "=== Running simulation (VCD format) ==="
	@if [ -f "$(MDIR)/Vtb_$(target)" ]; then \
		cd $(MDIR) && ./Vtb_$(target) $(SIM_ARGS); \
	else \
		echo "Error: Compiled binary not found!"; \
		exit 1; \
	fi

waveform_vcd:
	@echo "=== Opening VCD waveform in GTKWave ==="
	@if [ -f "$(MDIR)/tb_$(target).vcd" ]; then \
		$(GTKWAVE) $(MDIR)/tb_$(target).vcd & \
	else \
		echo "Warning: No VCD file found."; \
	fi

# === Generic targets (format chosen by TRACE_FORMAT) ===
view: view_$(TRACE_FORMAT)
build: build_$(TRACE_FORMAT)

compile: compile_$(TRACE_FORMAT)
run: run_$(TRACE_FORMAT)
waveform: waveform_$(TRACE_FORMAT)

# Compile only (no run)
compile-only: check_target compile

# Run only (assumes already compiled)
run-only: check_target run

# Regression: build and run every tb/tb_*.sv and report a pass rate
# Optionally restrict with tests="dispatch scheduler"
regress:
	@$(ROOT)/sim/regress.sh $(tests)

# Regenerate verible.filelist (repo root) from filelists/rtl.f + tb/
filelist:
	@{ grep -v '^\s*#' $(RTL_F) | grep -v '^\s*$$'; \
	   cd $(ROOT) && ls tb/*.sv; } > $(ROOT)/verible.filelist
	@echo "Wrote $(ROOT)/verible.filelist"

# Clean build artifacts
clean:
	@echo "=== Cleaning build artifacts ==="
	rm -rf $(BUILD_DIR)

# Help target
help:
	@echo "Verilator Makefile Targets:"
	@echo ""
	@echo "FST Format (recommended for structs):"
	@echo "  make view_fst target=<MODULE>   - Compile, run, and view FST waveform"
	@echo "  make build_fst target=<MODULE>  - Compile and run (no viewer)"
	@echo ""
	@echo "VCD Format:"
	@echo "  make view_vcd target=<MODULE>   - Compile, run, and view VCD waveform"
	@echo "  make build_vcd target=<MODULE>  - Compile and run (no viewer)"
	@echo ""
	@echo "Generic targets (TRACE_FORMAT=$(TRACE_FORMAT); set in Makefile or on the command line):"
	@echo "  make view target=<MODULE>       - Same as view_$(TRACE_FORMAT)"
	@echo "  make build target=<MODULE>      - Same as build_$(TRACE_FORMAT)"
	@echo ""
	@echo "Other targets:"
	@echo "  make compile-only target=<MODULE> - Only compile"
	@echo "  make run-only target=<MODULE>     - Only run (if already compiled)"
	@echo "  make <any> target=<MODULE> test=<TEST> - Run only one test (test_ prefix optional)"
	@echo "  make regress                      - Run all testbenches, report pass rate"
	@echo "  make regress tests=\"a b\"         - Run only the listed testbenches"
	@echo "  make filelist                     - Regenerate verible.filelist"
	@echo "  make clean                        - Remove build artifacts"
	@echo ""
	@echo "Build output (binaries, waveforms, logs) goes to build/sim/tb_<MODULE>/"
	@echo ""
	@echo "Examples:"
	@echo "  make view_fst target=dispatch"
	@echo "  make view_vcd target=scheduler"
	@echo "  make build_fst target=core"
	@echo "  make build target=data_cache test=evict_dirty_writeback"
	@echo "  make run-only target=data_cache test=reset_state  - Rerun one test, no recompile"
