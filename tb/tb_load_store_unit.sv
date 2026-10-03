`timescale 1ns/1ns

import CORE_PKG::*;
module tb_load_store_unit;
    `include "tb_test_select.svh"
    // ===== Testbench Setup ===== //


    // generate clock
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

    localparam MEM_LATENCY = 5;         // cycles from request accepted to response
    localparam TIMEOUT     = 100;       // max cycles to wait for any expected event

    localparam LDQ_IDX_W = $clog2(LDQ_ENTRIES);
    localparam SDQ_IDX_W = $clog2(SDQ_ENTRIES);
    localparam ROB_IDX_W = $clog2(ROB_ENTRIES);

    logic clk;
    logic rst;
    logic flush;
    integer cycle_count = 0;

    initial begin
        forever begin
            #(CLK_PERIOD * DUTY_CYCLE) clk = 1'b1;
            cycle_count = cycle_count + 1;
            #(CLK_PERIOD * DUTY_CYCLE) clk = 1'b0;
        end
    end

    // Test tracking
    integer pass_count = 0;
    integer fail_count = 0;

    initial begin
        $dumpfile(`DUMPFILE);
        $dumpvars(0,tb_load_store_unit);
    end

    // global watchdog so an RTL hang can't stall regression
    initial begin
        #(CLK_PERIOD * 50000);
        $display("  [\033[31mFAIL\033[0m] Global watchdog expired");
        $finish;
    end

    logic                           disp_vld_i;
    logic                           disp_is_store_i;
    logic [SDQ_IDX_W:0]             disp_sdq_marker_i;
    logic [LDQ_IDX_W-1:0]           disp_ldq_idx_o;
    logic [SDQ_IDX_W-1:0]           disp_sdq_idx_o;
    logic                           ldq_full_o;
    logic                           sdq_full_o;
    logic                           agu_vld_i;
    logic                           agu_is_store_i;
    logic [31:0]                    agu_addr_i;
    logic [31:0]                    agu_store_data_i;
    logic [ROB_IDX_W-1:0]           agu_rob_idx_i;
    logic [LDQ_IDX_W-1:0]           agu_ldq_idx_i;
    logic [SDQ_IDX_W-1:0]           agu_sdq_idx_i;
    logic                           rob_store_cmit_vld_i;
    logic [SDQ_IDX_W-1:0]           rob_store_cmit_idx_i;
    logic                           ld_cmt_vld_o;
    logic [31:0]                    ld_cmt_data_o;
    logic [ROB_IDX_W-1:0]           ld_cmt_rob_idx_o;
    logic                           mem_req_vld_o;
    logic [31:0]                    mem_req_addr_o;
    logic                           mem_resp_vld_i;
    logic [CACHE_BLOCK_SIZE-1:0]    mem_resp_data_i;
    logic [CACHE_BLOCK_SIZE-1:0]    mem_wb_data_o;
    logic                           mem_wb_vld_o;

    load_store_unit dut (
        .clk_i(clk),
        .rst_i(rst),
        .flush_i(flush),
        .disp_vld_i(disp_vld_i),
        .disp_is_store_i(disp_is_store_i),
        .disp_sdq_marker_i(disp_sdq_marker_i),
        .disp_ldq_idx_o(disp_ldq_idx_o),
        .disp_sdq_idx_o(disp_sdq_idx_o),
        .ldq_full_o(ldq_full_o),
        .sdq_full_o(sdq_full_o),
        .agu_vld_i(agu_vld_i),
        .agu_is_store_i(agu_is_store_i),
        .agu_addr_i(agu_addr_i),
        .agu_store_data_i(agu_store_data_i),
        .agu_rob_idx_i(agu_rob_idx_i),
        .agu_ldq_idx_i(agu_ldq_idx_i),
        .agu_sdq_idx_i(agu_sdq_idx_i),
        .rob_store_cmit_vld_i(rob_store_cmit_vld_i),
        .rob_store_cmit_idx_i(rob_store_cmit_idx_i),
        .ld_cmt_vld_o(ld_cmt_vld_o),
        .ld_cmt_data_o(ld_cmt_data_o),
        .ld_cmt_rob_idx_o(ld_cmt_rob_idx_o),
        .mem_req_vld_o(mem_req_vld_o),
        .mem_req_addr_o(mem_req_addr_o),
        .mem_resp_vld_i(mem_resp_vld_i),
        .mem_resp_data_i(mem_resp_data_i),
        .mem_wb_data_o(mem_wb_data_o),
        .mem_wb_vld_o(mem_wb_vld_o)
    );

    // ===== Main Memory Model ===== //
    // Read-only backing store: every word's value is derived from its address, so any
    // load's expected data is known without tracking writes (the writeback port has no address).

    function automatic logic [31:0] mem_word(input logic [31:0] addr);
        return {addr[31:2], 2'b00} ^ 32'hA5A5_A5A5;
    endfunction

    function automatic logic [CACHE_BLOCK_SIZE-1:0] mem_block(input logic [31:0] addr);
        logic [CACHE_BLOCK_SIZE-1:0] b;
        for (int w = 0; w < CACHE_BLOCK_SIZE/32; w++)
            b[w*32 +: 32] = mem_word({addr[31:4], w[1:0], 2'b00});
        return b;
    endfunction

    // monitors sample mid-low-phase: after the negedge drivers settle, before the next posedge
    localparam SAMPLE_DLY = CLK_PERIOD / 4;

    integer      mem_req_count = 0;
    logic [31:0] mem_req_addr_log [$];      // address seen while the request is in flight
    logic        mem_req_addr_early_ok = 1; // address valid in the same cycle as mem_req_vld_o

    initial begin : memory_responder
        mem_resp_vld_i = 0;
        mem_resp_data_i = '0;
        forever begin
            @(negedge clk);
            #SAMPLE_DLY;
            if (mem_req_vld_o && !rst) begin
                automatic logic [31:0] early_addr = mem_req_addr_o;
                automatic logic [31:0] addr;
                mem_req_count++;
                @(negedge clk);
                #SAMPLE_DLY;
                addr = mem_req_addr_o;
                if (early_addr != addr) mem_req_addr_early_ok = 0;
                mem_req_addr_log.push_back(addr);
                repeat (MEM_LATENCY - 1) @(negedge clk);
                mem_resp_vld_i = 1;
                mem_resp_data_i = mem_block(addr);
                @(negedge clk);
                mem_resp_vld_i = 0;
                mem_resp_data_i = '0;
            end
        end
    end

    // ===== Output Monitors ===== //

    typedef struct {
        logic [ROB_IDX_W-1:0] rob_idx;
        logic [31:0]          data;
    } ld_cmt_t;

    ld_cmt_t                     cmt_q [$];
    logic [CACHE_BLOCK_SIZE-1:0] wb_q [$];

    initial begin : commit_and_wb_monitor
        forever begin
            @(negedge clk);
            #SAMPLE_DLY;
            if (!rst) begin
                if (ld_cmt_vld_o) begin
                    automatic ld_cmt_t c;
                    c.rob_idx = ld_cmt_rob_idx_o;
                    c.data = ld_cmt_data_o;
                    cmt_q.push_back(c);
                end
                if (mem_wb_vld_o) wb_q.push_back(mem_wb_data_o);
            end
        end
    end

    // ===== Helper Methods ==== //

    // TB model of the SDQ tail (with wrap bit), used as the dispatch-time sdq marker
    logic [SDQ_IDX_W:0] sdq_tail;

    task init_signals();
        begin
            clk = 0;
            rst = 0;
            flush = 0;
            clear_inputs();
        end
    endtask

    task clear_inputs();
        begin
            disp_vld_i = 0;
            disp_is_store_i = 0;
            disp_sdq_marker_i = 0;
            agu_vld_i = 0;
            agu_is_store_i = 0;
            agu_addr_i = 0;
            agu_store_data_i = 0;
            agu_rob_idx_i = 0;
            agu_ldq_idx_i = 0;
            agu_sdq_idx_i = 0;
            rob_store_cmit_vld_i = 0;
            rob_store_cmit_idx_i = 0;
        end
    endtask

    // Check assertion and update counters
    task check_assertion(input string test_name, input logic condition);
        begin
            if (condition) begin
                $display("  [\033[32mPASS\033[0m] %s", test_name);
                pass_count = pass_count + 1;
            end else begin
                $display("  [\033[31mFAIL\033[0m] %s", test_name);
                fail_count = fail_count + 1;
            end
        end
    endtask

    // Reset sequence (also clears TB-side scoreboards)
    task reset_dut();
        begin
            $display("\n[RESET] Resetting DUT");
            @(negedge clk);
            clear_inputs();
            flush = 0;
            rst = 1;
            // let any in-flight memory response finish so it can't leak into the next test
            repeat (MEM_LATENCY + 3) @(negedge clk);
            rst = 0;
            @(negedge clk);
            sdq_tail = '0;
            cmt_q.delete();
            wb_q.delete();
            mem_req_addr_log.delete();
            mem_req_count = 0;
            mem_req_addr_early_ok = 1;
            $display("[RESET] Reset complete\n");
        end
    endtask

    // All stimulus tasks start and end on a negedge.

    task automatic dispatch_load(output logic [LDQ_IDX_W-1:0] ldq_idx);
        begin
            disp_vld_i = 1;
            disp_is_store_i = 0;
            disp_sdq_marker_i = sdq_tail;
            #1;
            ldq_idx = disp_ldq_idx_o;
            @(negedge clk);
            disp_vld_i = 0;
            disp_sdq_marker_i = 0;
        end
    endtask

    // returns the TB-model index; dut_idx is what the DUT reported on disp_sdq_idx_o
    task automatic dispatch_store(output logic [SDQ_IDX_W-1:0] sdq_idx, output logic [SDQ_IDX_W-1:0] dut_idx);
        begin
            disp_vld_i = 1;
            disp_is_store_i = 1;
            disp_sdq_marker_i = sdq_tail;
            #1;
            dut_idx = disp_sdq_idx_o;
            sdq_idx = sdq_tail[SDQ_IDX_W-1:0];
            if (!sdq_full_o) sdq_tail = sdq_tail + 1;
            @(negedge clk);
            disp_vld_i = 0;
            disp_is_store_i = 0;
            disp_sdq_marker_i = 0;
        end
    endtask

    task agu_load(input logic [LDQ_IDX_W-1:0] ldq_idx, input logic [31:0] addr, input logic [ROB_IDX_W-1:0] rob_idx);
        begin
            agu_vld_i = 1;
            agu_is_store_i = 0;
            agu_ldq_idx_i = ldq_idx;
            agu_addr_i = addr;
            agu_rob_idx_i = rob_idx;
            @(negedge clk);
            agu_vld_i = 0;
            agu_ldq_idx_i = 0;
            agu_addr_i = 0;
            agu_rob_idx_i = 0;
        end
    endtask

    task agu_store(input logic [SDQ_IDX_W-1:0] sdq_idx, input logic [31:0] addr, input logic [31:0] data, input logic [ROB_IDX_W-1:0] rob_idx);
        begin
            agu_vld_i = 1;
            agu_is_store_i = 1;
            agu_sdq_idx_i = sdq_idx;
            agu_addr_i = addr;
            agu_store_data_i = data;
            agu_rob_idx_i = rob_idx;
            @(negedge clk);
            agu_vld_i = 0;
            agu_is_store_i = 0;
            agu_sdq_idx_i = 0;
            agu_addr_i = 0;
            agu_store_data_i = 0;
            agu_rob_idx_i = 0;
        end
    endtask

    task commit_store(input logic [SDQ_IDX_W-1:0] sdq_idx);
        begin
            rob_store_cmit_vld_i = 1;
            rob_store_cmit_idx_i = sdq_idx;
            @(negedge clk);
            rob_store_cmit_vld_i = 0;
            rob_store_cmit_idx_i = 0;
        end
    endtask

    task do_flush();
        begin
            flush = 1;
            @(negedge clk);
            flush = 0;
        end
    endtask

    // Wait (up to max_cycles) for a load commit to rob_idx and pop it from the scoreboard
    task automatic wait_commit(
        input  logic [ROB_IDX_W-1:0] rob_idx,
        input  int                   max_cycles,
        output logic                 found,
        output logic [31:0]          data
    );
        begin
            found = 0;
            data = 'x;
            for (int c = 0; c <= max_cycles && !found; c++) begin
                foreach (cmt_q[i]) begin
                    if (!found && cmt_q[i].rob_idx == rob_idx) begin
                        found = 1;
                        data = cmt_q[i].data;
                        cmt_q.delete(i);
                    end
                end
                if (!found) @(negedge clk);
            end
        end
    endtask

    task automatic wait_wb(input int max_cycles, output logic found, output logic [CACHE_BLOCK_SIZE-1:0] data);
        begin
            found = 0;
            data = 'x;
            for (int c = 0; c <= max_cycles && !found; c++) begin
                if (wb_q.size() > 0) begin
                    found = 1;
                    data = wb_q.pop_front();
                end else begin
                    @(negedge clk);
                end
            end
        end
    endtask

    // Full load: dispatch, resolve address, wait for commit
    task automatic do_load(
        input  logic [31:0]          addr,
        input  logic [ROB_IDX_W-1:0] rob_idx,
        output logic                 found,
        output logic [31:0]          data
    );
        logic [LDQ_IDX_W-1:0] li;
        begin
            dispatch_load(li);
            agu_load(li, addr, rob_idx);
            wait_commit(rob_idx, TIMEOUT, found, data);
        end
    endtask

    // Full store: dispatch, resolve address/data, optionally commit
    task automatic do_store(
        input  logic [31:0]          addr,
        input  logic [31:0]          data,
        input  logic [ROB_IDX_W-1:0] rob_idx,
        input  logic                 commit,
        output logic [SDQ_IDX_W-1:0] sdq_idx
    );
        logic [SDQ_IDX_W-1:0] dut_idx;
        begin
            dispatch_store(sdq_idx, dut_idx);
            agu_store(sdq_idx, addr, data, rob_idx);
            if (commit) commit_store(sdq_idx);
        end
    endtask

    // | Tag (22) | Index (6) | Block Offset (2) | Byte Offset (2) |
    function automatic logic [31:0] mk_addr(input logic [21:0] tag, input logic [5:0] idx, input logic [1:0] word = 0);
        return {tag, idx, word, 2'b00};
    endfunction

    // ===== Tests ===== //

    task automatic test_reset_state();
        begin
            $display("--- test_reset_state ---");
            #1;
            check_assertion("ldq_full_o low after reset", !ldq_full_o);
            check_assertion("sdq_full_o low after reset", !sdq_full_o);
            check_assertion("No load commit after reset", !ld_cmt_vld_o);
            check_assertion("No memory request after reset", !mem_req_vld_o);
            check_assertion("No writeback after reset", !mem_wb_vld_o);
            repeat (10) @(negedge clk);
            check_assertion("Idle LSU stays quiet", cmt_q.size() == 0 && mem_req_count == 0 && wb_q.size() == 0);
        end
    endtask

    task automatic test_dispatch_indices();
        logic [LDQ_IDX_W-1:0] li;
        logic [SDQ_IDX_W-1:0] si, dsi;
        logic ld_ok = 1, st_ok = 1;
        begin
            $display("--- test_dispatch_indices ---");
            for (int i = 0; i < 3; i++) begin
                dispatch_load(li);
                if (li != LDQ_IDX_W'(i)) ld_ok = 0;
            end
            check_assertion("Loads allocated LDQ entries 0,1,2", ld_ok);
            for (int i = 0; i < 3; i++) begin
                dispatch_store(si, dsi);
                if (dsi != SDQ_IDX_W'(i)) st_ok = 0;
            end
            check_assertion("Stores report SDQ entries 0,1,2 on disp_sdq_idx_o", st_ok);
            check_assertion("Load dispatch does not allocate SDQ / store does not allocate LDQ", !ldq_full_o && !sdq_full_o);
        end
    endtask

    task automatic test_load_miss_cold();
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00100, 6'd1, 2'd1);
        begin
            $display("--- test_load_miss_cold ---");
            do_load(addr, 4'd1, found, data);
            check_assertion("Cold load miss commits", found);
            check_assertion("Cold load miss returns memory data", data == mem_word(addr));
            check_assertion("Cold load miss issues exactly one memory request", mem_req_count == 1);
            check_assertion("Memory request targets the load's block",
                            mem_req_addr_log.size() == 1 && mem_req_addr_log[0][31:4] == addr[31:4]);
            check_assertion("mem_req_addr_o valid in the same cycle as mem_req_vld_o", mem_req_addr_early_ok);
            check_assertion("Clean fill causes no writeback", wb_q.size() == 0);
        end
    endtask

    task automatic test_load_hit_after_fill();
        logic found;
        logic [31:0] data;
        logic ok = 1;
        begin
            $display("--- test_load_hit_after_fill ---");
            do_load(mk_addr(22'h00200, 6'd2, 2'd0), 4'd2, found, data);
            check_assertion("Fill load commits", found && data == mem_word(mk_addr(22'h00200, 6'd2, 2'd0)));
            // every word of the now-resident block must hit with the right data
            for (int w = 0; w < 4; w++) begin
                do_load(mk_addr(22'h00200, 6'd2, w[1:0]), 4'(3 + w), found, data);
                if (!found || data != mem_word(mk_addr(22'h00200, 6'd2, w[1:0]))) ok = 0;
            end
            check_assertion("Hits on each word of a resident block return correct data", ok);
            check_assertion("Hits issue no further memory requests", mem_req_count == 1);
        end
    endtask

    task automatic test_load_waits_for_address();
        logic [LDQ_IDX_W-1:0] li;
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00300, 6'd3, 2'd2);
        begin
            $display("--- test_load_waits_for_address ---");
            dispatch_load(li);
            repeat (20) @(negedge clk);
            check_assertion("Load without address issues nothing", mem_req_count == 0 && cmt_q.size() == 0);
            agu_load(li, addr, 4'd8);
            wait_commit(4'd8, TIMEOUT, found, data);
            check_assertion("Load issues once address resolves", found && data == mem_word(addr));
        end
    endtask

    task automatic test_multiple_outstanding_misses();
        logic [LDQ_IDX_W-1:0] li [4];
        logic found;
        logic [31:0] data;
        logic ok = 1;
        begin
            $display("--- test_multiple_outstanding_misses ---");
            for (int i = 0; i < 4; i++) dispatch_load(li[i]);
            for (int i = 0; i < 4; i++) agu_load(li[i], mk_addr(22'h00400 + i, 6'(8 + i), 2'(i)), 4'(4 + i));
            for (int i = 0; i < 4; i++) begin
                wait_commit(4'(4 + i), TIMEOUT * 2, found, data);
                if (!found || data != mem_word(mk_addr(22'h00400 + i, 6'(8 + i), 2'(i)))) ok = 0;
            end
            check_assertion("Four outstanding load misses all commit with correct data", ok);
            check_assertion("One memory request per missed block", mem_req_count == 4);
            check_assertion("No spurious commits", cmt_q.size() == 0);
        end
    endtask

    task automatic test_store_to_load_forwarding();
        logic [SDQ_IDX_W-1:0] si;
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00500, 6'd5, 2'd3);
        begin
            $display("--- test_store_to_load_forwarding ---");
            do_store(addr, 32'hF00D_0001, 4'd1, 1'b0, si);    // speculative (uncommitted) store
            do_load(addr, 4'd2, found, data);
            check_assertion("Load after same-address store commits", found);
            check_assertion("Load forwarded the store's data", data == 32'hF00D_0001);
            check_assertion("Forwarded load needs no memory request", mem_req_count == 0);
        end
    endtask

    task automatic test_forward_youngest_older_store();
        logic [SDQ_IDX_W-1:0] si;
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00600, 6'd6, 2'd0);
        begin
            $display("--- test_forward_youngest_older_store ---");
            do_store(addr, 32'h1111_1111, 4'd1, 1'b0, si);
            do_store(mk_addr(22'h00601, 6'd6, 2'd0), 32'h2222_2222, 4'd2, 1'b0, si);  // different address
            do_store(addr, 32'h3333_3333, 4'd3, 1'b0, si);
            do_load(addr, 4'd4, found, data);
            check_assertion("Load with multiple matching stores commits", found);
            check_assertion("Load forwards from the youngest older store", data == 32'h3333_3333);
        end
    endtask

    task automatic test_no_forward_from_younger_store();
        logic [LDQ_IDX_W-1:0] li;
        logic [SDQ_IDX_W-1:0] si;
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00700, 6'd7, 2'd1);
        begin
            $display("--- test_no_forward_from_younger_store ---");
            dispatch_load(li);                                  // load is older than the store
            do_store(addr, 32'hBAD0_BAD0, 4'd2, 1'b0, si);
            agu_load(li, addr, 4'd1);
            wait_commit(4'd1, TIMEOUT, found, data);
            check_assertion("Older load commits", found);
            check_assertion("Older load ignores younger same-address store", data == mem_word(addr));
        end
    endtask

    task automatic test_no_forward_different_address();
        logic [SDQ_IDX_W-1:0] si;
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00800, 6'd9, 2'd2);
        begin
            $display("--- test_no_forward_different_address ---");
            // same block, different word: must not forward
            do_store(mk_addr(22'h00800, 6'd9, 2'd1), 32'hDEAD_0001, 4'd1, 1'b0, si);
            do_load(addr, 4'd2, found, data);
            check_assertion("Load to neighbouring word commits", found);
            check_assertion("Load to neighbouring word reads memory, not the store", data == mem_word(addr));
        end
    endtask

    task automatic test_ambiguous_store_stall();
        logic [LDQ_IDX_W-1:0] li;
        logic [SDQ_IDX_W-1:0] si, dsi;
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00900, 6'd10, 2'd0);
        begin
            $display("--- test_ambiguous_store_stall ---");
            dispatch_store(si, dsi);                    // older store, address unknown
            dispatch_load(li);
            agu_load(li, addr, 4'd3);
            wait_commit(4'd3, 20, found, data);
            check_assertion("Load stalls behind store with unresolved address", !found);
            check_assertion("Stalled load issues no memory request", mem_req_count == 0);
            agu_store(si, mk_addr(22'h00901, 6'd10, 2'd0), 32'h0, 4'd2);   // resolves to a different address
            wait_commit(4'd3, TIMEOUT, found, data);
            check_assertion("Load proceeds once older store address resolves", found);
            check_assertion("Released load returns memory data", data == mem_word(addr));
        end
    endtask

    task automatic test_ambiguous_store_resolves_to_match();
        logic [LDQ_IDX_W-1:0] li;
        logic [SDQ_IDX_W-1:0] si, dsi;
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00A00, 6'd11, 2'd3);
        begin
            $display("--- test_ambiguous_store_resolves_to_match ---");
            dispatch_store(si, dsi);
            dispatch_load(li);
            agu_load(li, addr, 4'd5);
            repeat (5) @(negedge clk);
            agu_store(si, addr, 32'hC0DE_C0DE, 4'd4);   // resolves to the load's address
            wait_commit(4'd5, TIMEOUT, found, data);
            check_assertion("Load behind late-resolving matching store commits", found);
            check_assertion("Load forwards data from late-resolving store", data == 32'hC0DE_C0DE);
        end
    endtask

    task automatic test_uncommitted_store_stays_in_sdq();
        logic [SDQ_IDX_W-1:0] si;
        begin
            $display("--- test_uncommitted_store_stays_in_sdq ---");
            do_store(mk_addr(22'h00B00, 6'd12, 2'd0), 32'h5EC0_0001, 4'd1, 1'b0, si);
            repeat (30) @(negedge clk);
            check_assertion("Speculative store makes no memory request", mem_req_count == 0);
            check_assertion("Speculative store causes no writeback", wb_q.size() == 0);
        end
    endtask

    task automatic test_committed_store_hit_writeback();
        logic [SDQ_IDX_W-1:0] si;
        logic found;
        logic [31:0] data;
        logic [CACHE_BLOCK_SIZE-1:0] wb, exp;
        logic [31:0] st_addr = mk_addr(22'h00C00, 6'd13, 2'd1);
        begin
            $display("--- test_committed_store_hit_writeback ---");
            do_load(mk_addr(22'h00C00, 6'd13, 2'd0), 4'd1, found, data);  // bring block into cache
            check_assertion("Warm-up load commits", found);
            do_store(st_addr, 32'h57A7_0001, 4'd2, 1'b1, si);
            repeat (10) @(negedge clk);
            // conflicting block (same index, new tag) evicts the dirty line
            do_load(mk_addr(22'h00C01, 6'd13, 2'd0), 4'd3, found, data);
            check_assertion("Conflicting load after committed store commits", found);
            check_assertion("Conflicting load returns its own memory data", data == mem_word(mk_addr(22'h00C01, 6'd13, 2'd0)));
            wait_wb(TIMEOUT, found, wb);
            exp = mem_block(st_addr);
            exp[32 +: 32] = 32'h57A7_0001;
            check_assertion("Committed store hit makes the line dirty (writeback on eviction)", found);
            check_assertion("Writeback block contains the store data at the right word", wb == exp);
        end
    endtask

    task automatic test_committed_store_miss_writeback();
        logic [SDQ_IDX_W-1:0] si;
        logic found;
        logic [31:0] data;
        logic [CACHE_BLOCK_SIZE-1:0] wb, exp;
        logic [31:0] st_addr = mk_addr(22'h00D00, 6'd14, 2'd2);
        begin
            $display("--- test_committed_store_miss_writeback ---");
            do_store(st_addr, 32'h57A7_0002, 4'd1, 1'b1, si);
            repeat (TIMEOUT) begin
                if (mem_req_addr_log.size() > 0) break;
                @(negedge clk);
            end
            check_assertion("Committed store miss requests its block from memory",
                            mem_req_addr_log.size() > 0 && mem_req_addr_log[0][31:4] == st_addr[31:4]);
            repeat (20) @(negedge clk);
            do_load(mk_addr(22'h00D01, 6'd14, 2'd0), 4'd2, found, data);
            check_assertion("Conflicting load after store miss commits", found);
            wait_wb(TIMEOUT, found, wb);
            exp = mem_block(st_addr);
            exp[64 +: 32] = 32'h57A7_0002;
            check_assertion("Store-miss line is dirty (writeback on eviction)", found);
            check_assertion("Store-miss writeback merges store data at the right word", wb == exp);
        end
    endtask

    task automatic test_load_after_committed_store();
        logic [SDQ_IDX_W-1:0] si;
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00E00, 6'd15, 2'd0);
        begin
            $display("--- test_load_after_committed_store ---");
            // a committed store draining to the cache must not starve later loads
            do_store(mk_addr(22'h00E01, 6'd16, 2'd0), 32'h0000_0E01, 4'd1, 1'b1, si);
            do_load(addr, 4'd2, found, data);
            check_assertion("Load after a committed store to another block commits", found);
            check_assertion("Load after a committed store returns memory data", data == mem_word(addr));
        end
    endtask

    task automatic test_ldq_full();
        logic [LDQ_IDX_W-1:0] li;
        logic ok = 1;
        begin
            $display("--- test_ldq_full ---");
            for (int i = 0; i < LDQ_ENTRIES; i++) begin
                #1;
                if (ldq_full_o) ok = 0;
                dispatch_load(li);
            end
            #1;
            check_assertion("ldq_full_o low until the last entry", ok);
            check_assertion("ldq_full_o asserted with LDQ_ENTRIES loads", ldq_full_o);
            check_assertion("sdq_full_o unaffected by load fill", !sdq_full_o);
            dispatch_load(li);
            #1;
            check_assertion("Overflow load dispatch leaves LDQ full", ldq_full_o);
        end
    endtask

    task automatic test_sdq_full();
        logic [SDQ_IDX_W-1:0] si, dsi;
        logic ok = 1;
        begin
            $display("--- test_sdq_full ---");
            for (int i = 0; i < SDQ_ENTRIES; i++) begin
                #1;
                if (sdq_full_o) ok = 0;
                dispatch_store(si, dsi);
            end
            #1;
            check_assertion("sdq_full_o low until the last entry", ok);
            check_assertion("sdq_full_o asserted with SDQ_ENTRIES stores", sdq_full_o);
            check_assertion("ldq_full_o unaffected by store fill", !ldq_full_o);
        end
    endtask

    task automatic test_flush_squashes_loads();
        logic [LDQ_IDX_W-1:0] li;
        logic found;
        logic [31:0] data;
        logic [31:0] addr = mk_addr(22'h00F00, 6'd17, 2'd1);
        begin
            $display("--- test_flush_squashes_loads ---");
            for (int i = 0; i < 3; i++) dispatch_load(li);
            do_flush();
            #1;
            check_assertion("Flush empties the LDQ (next alloc is entry 0)", disp_ldq_idx_o == '0);
            // a squashed entry resolving late must not issue
            agu_load(4'd1, addr, 4'd9);
            wait_commit(4'd9, 30, found, data);
            check_assertion("Squashed load does not commit", !found);
            check_assertion("Squashed load makes no memory request", mem_req_count == 0);
            do_load(addr, 4'd10, found, data);
            check_assertion("Load dispatched after flush commits normally", found && data == mem_word(addr));
        end
    endtask

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        sdq_tail = '0;
        $display("=== Load Store Unit Testbench ===");

        `RUN_TEST(test_reset_state)
        `RUN_TEST(test_dispatch_indices)
        `RUN_TEST(test_load_miss_cold)
        `RUN_TEST(test_load_hit_after_fill)
        `RUN_TEST(test_load_waits_for_address)
        `RUN_TEST(test_multiple_outstanding_misses)
        `RUN_TEST(test_store_to_load_forwarding)
        `RUN_TEST(test_forward_youngest_older_store)
        `RUN_TEST(test_no_forward_from_younger_store)
        `RUN_TEST(test_no_forward_different_address)
        `RUN_TEST(test_ambiguous_store_stall)
        `RUN_TEST(test_ambiguous_store_resolves_to_match)
        `RUN_TEST(test_uncommitted_store_stays_in_sdq)
        `RUN_TEST(test_committed_store_hit_writeback)
        `RUN_TEST(test_committed_store_miss_writeback)
        `RUN_TEST(test_load_after_committed_store)
        `RUN_TEST(test_ldq_full)
        `RUN_TEST(test_sdq_full)
        `RUN_TEST(test_flush_squashes_loads)

        repeat(5) @(posedge clk);

        $display("\n=== Testbench Complete ===");
        $display("Total Tests: %0d", pass_count + fail_count);
        if (fail_count == 0) begin
            $display("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed", pass_count, pass_count + fail_count);
        end else begin
            $display("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed", pass_count, fail_count);
        end
        $finish;
    end

endmodule
