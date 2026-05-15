# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_reorder_buffer.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_reorder_buffer \
	Vtb_reorder_buffer___024root__DepSet_hc42d34e7__0 \
	Vtb_reorder_buffer___024root__DepSet_h13c72201__0 \
	Vtb_reorder_buffer_reorder_buffer_flush_unit_if__DepSet_hdd49a038__0 \
	Vtb_reorder_buffer_dispatch_reorder_buffer_if__DepSet_h1a1a8e14__0 \
	Vtb_reorder_buffer_execute_reorder_buffer_if__DepSet_h7f42b3a7__0 \
	Vtb_reorder_buffer__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_reorder_buffer___024root__Slow \
	Vtb_reorder_buffer___024root__DepSet_hc42d34e7__0__Slow \
	Vtb_reorder_buffer___024root__DepSet_h13c72201__0__Slow \
	Vtb_reorder_buffer___024unit__Slow \
	Vtb_reorder_buffer___024unit__DepSet_h320a0a99__0__Slow \
	Vtb_reorder_buffer_reorder_buffer_flush_unit_if__Slow \
	Vtb_reorder_buffer_reorder_buffer_flush_unit_if__DepSet_hdd49a038__0__Slow \
	Vtb_reorder_buffer_dispatch_reorder_buffer_if__Slow \
	Vtb_reorder_buffer_dispatch_reorder_buffer_if__DepSet_h1a1a8e14__0__Slow \
	Vtb_reorder_buffer_execute_reorder_buffer_if__Slow \
	Vtb_reorder_buffer_execute_reorder_buffer_if__DepSet_h7f42b3a7__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_reorder_buffer__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_reorder_buffer__Syms \
	Vtb_reorder_buffer__Trace__0__Slow \
	Vtb_reorder_buffer__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
