TOP      ?= scheduler
ROOT     := $(abspath ../..)
FILELIST ?= $(ROOT)/filelists/rtl.f
LIB      ?= $(ROOT)/asic/syn/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
PERIOD   ?= 5000          # ps, ABC timing target
FLATTEN  ?= -flatten      # make FLATTEN= to keep hierarchy
EXTRA    ?=               # e.g. EXTRA="-G RS_ENTRIES=8"

OUT  := $(CURDIR)/build/$(TOP)
READ := read_slang --top $(TOP) $(EXTRA) -f $(FILELIST)
YS   := cd $(ROOT) && yosys -m slang
SHOW := show -format svg -viewer none -stretch -width

.PHONY: check rtl synth map clean
.DEFAULT_GOAL := synth

$(OUT):
	mkdir -p $(OUT)

# Elaboration only: fast way to catch errors
check: | $(OUT)
	$(YS) -l $(OUT)/check.log -p "$(READ); stat"

# RTL-level netlist + schematic (word-level cells, most readable)
rtl: | $(OUT)
	$(YS) -l $(OUT)/rtl.log -p "$(READ); proc; opt_clean; \
	  tee -o $(OUT)/rtl_stat.txt stat; \
	  write_verilog -noattr $(OUT)/rtl.v; \
	  $(SHOW) -prefix $(OUT)/rtl"

# Generic gate-level synthesis (no library)
synth: | $(OUT)
	$(YS) -l $(OUT)/synth.log -p "$(READ); synth -top $(TOP) $(FLATTEN); opt_clean -purge; \
	  tee -o $(OUT)/synth_stat.txt stat; \
	  write_verilog -noattr -noexpr -nohex -nodec $(OUT)/generic.v; \
	  $(SHOW) -prefix $(OUT)/synth"

# sky130-mapped netlist for OpenSTA
map: | $(OUT)
	$(YS) -l $(OUT)/map.log -p "$(READ); synth -top $(TOP) $(FLATTEN); \
	  dfflibmap -liberty $(LIB); abc -liberty $(LIB) -D $(PERIOD); \
	  hilomap -hicell sky130_fd_sc_hd__conb_1 HI -locell sky130_fd_sc_hd__conb_1 LO; \
	  opt_clean -purge; \
	  tee -o $(OUT)/map_stat.txt stat -liberty $(LIB); \
	  write_verilog -noattr -noexpr -nohex -nodec $(OUT)/mapped.v; \
	  $(SHOW) -prefix $(OUT)/map"

clean:
	rm -rf build
