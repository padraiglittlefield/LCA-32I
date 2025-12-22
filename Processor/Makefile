# Verilator Makefile for SystemVerilog simulation
# Directories
SRC_DIR := src
SIM_DIR := sim
INC_DIR := include
BUILD_DIR := obj_dir

# Tools
VERILATOR := verilator
VERILATOR_BASE_FLAGS := --binary --timing -Wall -Wno-fatal
VERILATOR_BASE_FLAGS += -I$(INC_DIR)
VERILATOR_BASE_FLAGS += --top-module tb_$(target)

# Trace format specific flags
VERILATOR_FST_FLAGS := $(VERILATOR_BASE_FLAGS) --trace-fst --trace-structs
VERILATOR_VCD_FLAGS := $(VERILATOR_BASE_FLAGS) --trace

# Find all source files
VERILOG_SOURCES := $(shell find $(SRC_DIR) -name "*.sv")
INCLUDE_FILES := $(shell find $(INC_DIR) -name "*.sv" -o -name "*.svh")
INTERFACE_FILES := $(shell find $(SRC_DIR)/Interfaces -name "*.svh")

# GTKWave for viewing waveforms
GTKWAVE := gtkwave

# Trace format selection (default to FST)
TRACE_FORMAT ?= fst

.PHONY: all clean view help build_vcd build_fst view_vcd view_fst

# Default target
all:
	@echo "Usage: make [view|build]_[vcd|fst] target=<MODULE_NAME>"
	@echo "Examples:"
	@echo "  make view_fst target=dispatch   - Build with FST, run, and view"
	@echo "  make view_vcd target=dispatch   - Build with VCD, run, and view"
	@echo "  make build_fst target=dispatch  - Build with FST and run only"
	@echo "  make build_vcd target=dispatch  - Build with VCD and run only"
	@echo ""
	@echo "Or use the generic commands:"
	@echo "  make view target=dispatch       - Uses FST by default"
	@echo "  make view target=dispatch TRACE_FORMAT=vcd  - Force VCD format"

# Check if target is specified
check_target:
ifndef target
	$(error target is not set. Usage: make view target=<MODULE_NAME>)
endif
	@echo "Building testbench for module: $(target)"

# === FST-specific targets ===
build_fst: TRACE_FORMAT = fst
build_fst: check_target compile_fst run_fst

view_fst: TRACE_FORMAT = fst
view_fst: check_target compile_fst run_fst waveform_fst

compile_fst:
	@echo "=== Compiling with Verilator (FST format) ==="
	@if [ ! -f "$(SIM_DIR)/tb_$(target).sv" ]; then \
		echo "Error: Testbench $(SIM_DIR)/tb_$(target).sv not found!"; \
		exit 1; \
	fi
	$(VERILATOR) $(VERILATOR_FST_FLAGS) \
		$(INC_DIR)/CORE_PKG.svh \
		$(INTERFACE_FILES) \
		$(filter-out $(INC_DIR)/CORE_PKG.svh, $(INCLUDE_FILES)) \
		$(SIM_DIR)/tb_$(target).sv \
		$(VERILOG_SOURCES) \
		-j 0

run_fst:
	@echo "=== Running simulation (FST format) ==="
	@if [ -f "$(BUILD_DIR)/Vtb_$(target)" ]; then \
		$(BUILD_DIR)/Vtb_$(target); \
	else \
		echo "Error: Compiled binary not found!"; \
		exit 1; \
	fi

waveform_fst:
	@echo "=== Opening FST waveform in GTKWave ==="
	@if [ -f "$(BUILD_DIR)/tb_$(target).fst" ]; then \
		$(GTKWAVE) $(BUILD_DIR)/tb_$(target).fst & \
	elif [ -f "tb_$(target).fst" ]; then \
		$(GTKWAVE) tb_$(target).fst & \
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
	@if [ ! -f "$(SIM_DIR)/tb_$(target).sv" ]; then \
		echo "Error: Testbench $(SIM_DIR)/tb_$(target).sv not found!"; \
		exit 1; \
	fi
	$(VERILATOR) $(VERILATOR_VCD_FLAGS) \
		$(INC_DIR)/CORE_PKG.svh \
		$(INTERFACE_FILES) \
		$(filter-out $(INC_DIR)/CORE_PKG.svh, $(INCLUDE_FILES)) \
		$(SIM_DIR)/tb_$(target).sv \
		$(VERILOG_SOURCES) \
		-j 0

run_vcd:
	@echo "=== Running simulation (VCD format) ==="
	@if [ -f "$(BUILD_DIR)/Vtb_$(target)" ]; then \
		$(BUILD_DIR)/Vtb_$(target); \
	else \
		echo "Error: Compiled binary not found!"; \
		exit 1; \
	fi

waveform_vcd:
	@echo "=== Opening VCD waveform in GTKWave ==="
	@if [ -f "$(BUILD_DIR)/tb_$(target).vcd" ]; then \
		$(GTKWAVE) $(BUILD_DIR)/tb_$(target).vcd & \
	elif [ -f "tb_$(target).vcd" ]; then \
		$(GTKWAVE) tb_$(target).vcd & \
	else \
		echo "Warning: No VCD file found."; \
	fi

# === Generic targets (default to FST) ===
view: view_fst
build: build_fst

compile: compile_fst
run: run_fst
waveform: waveform_fst

# Compile only (no run)
compile-only: check_target compile

# Run only (assumes already compiled)
run-only: check_target run

# Clean build artifacts
clean:
	@echo "=== Cleaning build artifacts ==="
	rm -rf $(BUILD_DIR)
	rm -f *.vcd
	rm -f *.fst
	rm -f *.log

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
	@echo "Generic targets (default to FST):"
	@echo "  make view target=<MODULE>       - Same as view_fst"
	@echo "  make build target=<MODULE>      - Same as build_fst"
	@echo ""
	@echo "Other targets:"
	@echo "  make compile-only target=<MODULE> - Only compile"
	@echo "  make run-only target=<MODULE>     - Only run (if already compiled)"
	@echo "  make clean                        - Remove build artifacts"
	@echo ""
	@echo "Examples:"
	@echo "  make view_fst target=dispatch"
	@echo "  make view_vcd target=scheduler"
	@echo "  make build_fst target=core"
	@echo ""
	@echo "Notes:"
	@echo "  - FST format preserves struct member names better than VCD"
	@echo "  - Testbench must be named tb_<MODULE>.sv in sim/"
	@echo "  - Module source should be <MODULE>.sv somewhere in src/"
	@echo "  - All .sv files in src/ tree are included automatically"