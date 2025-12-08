# Verilator Makefile for SystemVerilog simulation

# Directories
SRC_DIR := src
SIM_DIR := sim
INC_DIR := include
BUILD_DIR := obj_dir

# Tools
VERILATOR := verilator
VERILATOR_FLAGS := --binary --trace --timing -Wall -Wno-fatal
VERILATOR_FLAGS += -I$(INC_DIR)
VERILATOR_FLAGS += --top-module tb_$(target)

# Find all source files
VERILOG_SOURCES := $(shell find $(SRC_DIR) -name "*.sv")
INCLUDE_FILES := $(shell find $(INC_DIR) -name "*.sv" -o -name "*.svh")
INTERFACE_FILES := $(shell find $(SRC_DIR)/Interfaces -name "*.svh")

# GTKWave for viewing waveforms
GTKWAVE := gtkwave

.PHONY: all clean view help

# Default target
all:
	@echo "Usage: make view target=<MODULE_NAME>"
	@echo "Example: make view target=dispatch"
	@echo ""
	@echo "This will:"
	@echo "  1. Compile tb_<MODULE_NAME>.sv from sim/ with <MODULE_NAME>.sv from src/"
	@echo "  2. Run the simulation"
	@echo "  3. Open the waveform in GTKWave"

# Main view target
view: check_target compile run waveform

# Check if target is specified
check_target:
ifndef target
	$(error target is not set. Usage: make view target=<MODULE_NAME>)
endif
	@echo "Building testbench for module: $(target)"

# Compile with Verilator
compile:
	@echo "=== Compiling with Verilator ==="
	@if [ ! -f "$(SIM_DIR)/tb_$(target).sv" ]; then \
        echo "Error: Testbench $(SIM_DIR)/tb_$(target).sv not found!"; \
        exit 1; \
    fi
	$(VERILATOR) $(VERILATOR_FLAGS) \
		$(INC_DIR)/CORE_PKG.svh \
		$(INTERFACE_FILES) \
		$(filter-out $(INC_DIR)/CORE_PKG.svh, $(INCLUDE_FILES)) \
		$(SIM_DIR)/tb_$(target).sv \
		$(VERILOG_SOURCES) \
		-j 0

# Run simulation
run:
	@echo "=== Running simulation ==="
	@if [ -f "$(BUILD_DIR)/Vtb_$(target)" ]; then \
		$(BUILD_DIR)/Vtb_$(target); \
	else \
		echo "Error: Compiled binary not found!"; \
		exit 1; \
	fi

# Open waveform in GTKWave
waveform:
	@echo "=== Opening waveform viewer ==="
	@if [ -f "$(BUILD_DIR)/tb_$(target).vcd" ]; then \
		$(GTKWAVE) $(BUILD_DIR)/tb_$(target).vcd & \
	elif [ -f "tb_$(target).vcd" ]; then \
		$(GTKWAVE) tb_$(target).vcd & \
	else \
		echo "Warning: No VCD file found. Make sure your testbench generates a tb_$(target).vcd file."; \
	fi

# Compile only (no run)
compile-only: check_target compile

# Run only (assumes already compiled)
run-only: check_target run

# Build only (does reopen gtkwave)

build: check_target compile run

# Clean build artifacts
clean:
	@echo "=== Cleaning build artifacts ==="
	rm -rf $(BUILD_DIR)
	rm -f *.vcd
	rm -f *.log

# Help target
help:
	@echo "Verilator Makefile Targets:"
	@echo "  make view target=<MODULE>   - Compile, run, and view waveform"
	@echo "  make compile-only target=<MODULE> - Only compile"
	@echo "  make run-only target=<MODULE>     - Only run (if already compiled)"
	@echo "  make clean                   - Remove build artifacts"
	@echo ""
	@echo "Example:"
	@echo "  make view target=dispatch"
	@echo ""
	@echo "Notes:"
	@echo "  - Testbench must be named tb_<MODULE>.sv in sim/"
	@echo "  - Module source should be <MODULE>.sv somewhere in src/"
	@echo "  - All .sv files in src/ tree are included automatically"
	@echo "  - All .sv/.svh files in include/ are compiled first"
	@echo "  - Include files from include/ are added to search path"