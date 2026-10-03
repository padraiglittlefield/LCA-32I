`timescale 1ns/1ns

import CORE_PKG::*;
module tb_cache_controller;
    `include "tb_test_select.svh"

    // ===== Testbench Setup ===== //


    // generate clock
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

    localparam TIMEOUT  = 200;          // max cycles to wait for any expected event
    localparam HIT_LAT  = 2;            // request -> commit latency on a hit (two pipeline regs)

    localparam ROB_IDX_W = $clog2(ROB_ENTRIES);

    logic clk;
    logic rst;
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
        $dumpvars(0,tb_cache_controller);
    end

    // global watchdog so an RTL hang can't stall regression
    initial begin
        #(CLK_PERIOD * 50000);
        $display("  [\033[31mFAIL\033[0m] Global watchdog expired");
        $finish;
    end

    logic flush;
    logic lsu_req_vld_i;
    logic lsu_req_wr_rd_i;
    logic [31:0] lsu_req_addr_i;
    logic [31:0] lsu_req_data_i;
    logic [ROB_IDX_W-1:0] lsu_req_rob_idx_i;
    logic mem_req_vld_o;
    logic [31:0] mem_req_addr_o;
    logic mem_resp_vld_i;
    logic [CACHE_BLOCK_SIZE-1:0] mem_resp_data_i;
    logic mem_wb_vld_o;
    logic [CACHE_BLOCK_SIZE-1:0] mem_wb_data_o;
    logic cmt_ld_vld_o;
    logic [31:0] cmt_ld_data_o;
    logic [ROB_IDX_W-1:0] cmt_rob_idx_o;
    logic stall_controller_o;

   cache_controller dut (
        .clk_i(clk),
        .rst_i(rst),
        .flush_i(flush),
        .lsu_req_vld_i(lsu_req_vld_i),
        .lsu_req_wr_rd_i(lsu_req_wr_rd_i),
        .lsu_req_addr_i(lsu_req_addr_i),
        .lsu_req_data_i(lsu_req_data_i),
        .lsu_req_rob_idx_i(lsu_req_rob_idx_i),
        .mem_req_vld_o(mem_req_vld_o),
        .mem_req_addr_o(mem_req_addr_o),
        .mem_resp_vld_i(mem_resp_vld_i),
        .mem_resp_data_i(mem_resp_data_i),
        .mem_wb_vld_o(mem_wb_vld_o),
        .mem_wb_data_o(mem_wb_data_o),
        .cmt_ld_vld_o(cmt_ld_vld_o),
        .cmt_ld_data_o(cmt_ld_data_o),
        .cmt_rob_idx_o(cmt_rob_idx_o),
        .stall_controller_o(stall_controller_o)
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

    int          mem_latency = 5;           // cycles from request accepted to response
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
                repeat (mem_latency - 1) @(negedge clk);
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
        int                   cycle;
    } ld_cmt_t;

    ld_cmt_t                     cmt_q [$];
    logic [CACHE_BLOCK_SIZE-1:0] wb_q [$];
    int                          stall_cycles = 0;

    initial begin : output_monitor
        forever begin
            @(negedge clk);
            #SAMPLE_DLY;
            if (!rst) begin
                if (cmt_ld_vld_o) begin
                    automatic ld_cmt_t c;
                    c.rob_idx = cmt_rob_idx_o;
                    c.data = cmt_ld_data_o;
                    c.cycle = cycle_count;
                    cmt_q.push_back(c);
                end
                if (mem_wb_vld_o) wb_q.push_back(mem_wb_data_o);
                if (stall_controller_o) stall_cycles++;
            end
        end
    end

 // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0;
            rst = 0;
            clear_inputs();
        end
    endtask

    task clear_inputs();
        begin
            flush = 0;
            lsu_req_vld_i = 0;
            lsu_req_wr_rd_i = 0;
            lsu_req_addr_i = 0;
            lsu_req_data_i = 0;
            lsu_req_rob_idx_i = 0;
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
            rst = 1;
            // let any in-flight memory response finish so it can't leak into the next test
            repeat (mem_latency + 3) @(negedge clk);
            rst = 0;
            @(negedge clk);
            mem_latency = 5;
            cmt_q.delete();
            wb_q.delete();
            mem_req_addr_log.delete();
            mem_req_count = 0;
            mem_req_addr_early_ok = 1;
            stall_cycles = 0;
            $display("[RESET] Reset complete\n");
        end
    endtask

    // Present one request (starts and ends on a negedge). Like the LSU, the driver
    // holds off while the controller is stalled, since stalled-cycle requests are dropped.
    // Returns the cycle the request was accepted in, for latency checks.
    task automatic request(
        input  logic                 is_store,
        input  logic [31:0]          addr,
        input  logic [31:0]          data,
        input  logic [ROB_IDX_W-1:0] rob_idx,
        output int                   issue_cycle
    );
        begin
            for (int c = 0; c < TIMEOUT; c++) begin
                #1;
                if (!stall_controller_o) break;
                @(negedge clk);
            end
            issue_cycle = cycle_count;
            lsu_req_vld_i = 1;
            lsu_req_wr_rd_i = is_store;
            lsu_req_addr_i = addr;
            lsu_req_data_i = data;
            lsu_req_rob_idx_i = rob_idx;
            @(negedge clk);
            lsu_req_vld_i = 0;
            lsu_req_wr_rd_i = 0;
            lsu_req_addr_i = 0;
            lsu_req_data_i = 0;
            lsu_req_rob_idx_i = 0;
        end
    endtask

    task automatic load_req(input logic [31:0] addr, input logic [ROB_IDX_W-1:0] rob_idx);
        int c;
        request(0, addr, 32'h0, rob_idx, c);
    endtask

    task automatic store_req(input logic [31:0] addr, input logic [31:0] data);
        int c;
        request(1, addr, data, '0, c);
    endtask

    // Wait (up to max_cycles) for a load commit to rob_idx and pop it from the scoreboard
    task automatic wait_commit(
        input  logic [ROB_IDX_W-1:0] rob_idx,
        input  int                   max_cycles,
        output logic                 found,
        output logic [31:0]          data,
        output int                   cycle
    );
        begin
            found = 0;
            data = 'x;
            cycle = -1;
            for (int c = 0; c <= max_cycles && !found; c++) begin
                foreach (cmt_q[i]) begin
                    if (!found && cmt_q[i].rob_idx == rob_idx) begin
                        found = 1;
                        data = cmt_q[i].data;
                        cycle = cmt_q[i].cycle;
                        cmt_q.delete(i);
                    end
                end
                if (!found) @(negedge clk);
            end
        end
    endtask

    task automatic do_load(input logic [31:0] addr, input logic [ROB_IDX_W-1:0] rob_idx,
                           output logic found, output logic [31:0] data);
        int c;
        begin
            load_req(addr, rob_idx);
            wait_commit(rob_idx, TIMEOUT, found, data, c);
        end
    endtask

    task automatic wait_idle();
        // let any repair activity settle
        repeat (mem_latency + 8) @(negedge clk);
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

    // | Tag (22) | Index (6) | Block Offset (2) | Byte Offset (2) |
    function automatic logic [31:0] mk_addr(input logic [21:0] tag, input logic [5:0] idx, input logic [1:0] word = 0);
        return {tag, idx, word, 2'b00};
    endfunction

    // ===== Tests ===== //

    task automatic test_reset_state();
        begin
            $display("--- test_reset_state ---");
            #1;
            check_assertion("No memory request after reset", !mem_req_vld_o);
            check_assertion("No writeback after reset", !mem_wb_vld_o);
            check_assertion("No load commit after reset", !cmt_ld_vld_o);
            check_assertion("Not stalled after reset", !stall_controller_o);
            repeat (10) @(negedge clk);
            check_assertion("Idle controller stays quiet", mem_req_count == 0 && cmt_q.size() == 0 && wb_q.size() == 0 && stall_cycles == 0);
        end
    endtask

    task automatic test_load_miss_cold();
        logic found;
        logic [31:0] data;
        int c;
        logic [31:0] addr = mk_addr(22'h00100, 6'd1, 2'd2);
        begin
            $display("--- test_load_miss_cold ---");
            load_req(addr, 4'd3);
            wait_commit(4'd3, TIMEOUT, found, data, c);
            check_assertion("Cold load miss commits", found);
            check_assertion("Cold load miss returns the addressed word", data == mem_word(addr));
            check_assertion("Exactly one memory request", mem_req_count == 1);
            check_assertion("Memory request targets the missed block",
                            mem_req_addr_log.size() == 1 && mem_req_addr_log[0][31:4] == addr[31:4]);
            check_assertion("mem_req_addr_o valid in the same cycle as mem_req_vld_o", mem_req_addr_early_ok);
            check_assertion("Clean fill causes no writeback", wb_q.size() == 0);
            wait_idle();
            check_assertion("Miss commits exactly once", cmt_q.size() == 0);
        end
    endtask

    task automatic test_miss_word_select();
        logic found;
        logic [31:0] data;
        logic ok = 1;
        begin
            $display("--- test_miss_word_select ---");
            // one cold miss per word offset, each to its own block
            for (int w = 0; w < 4; w++) begin
                do_load(mk_addr(22'h00200 + w, 6'(4 + w), w[1:0]), 4'(w), found, data);
                if (!found || data != mem_word(mk_addr(22'h00200 + w, 6'(4 + w), w[1:0]))) ok = 0;
                wait_idle();
            end
            check_assertion("Miss returns the right word for every block offset", ok);
        end
    endtask

    task automatic test_load_hit();
        logic found;
        logic [31:0] data;
        int issue_c, cmt_c;
        logic ok = 1;
        begin
            $display("--- test_load_hit ---");
            do_load(mk_addr(22'h00300, 6'd8, 2'd0), 4'd1, found, data);
            wait_idle();
            for (int w = 0; w < 4; w++) begin
                request(0, mk_addr(22'h00300, 6'd8, w[1:0]), 32'h0, 4'(2 + w), issue_c);
                wait_commit(4'(2 + w), TIMEOUT, found, data, cmt_c);
                if (!found || data != mem_word(mk_addr(22'h00300, 6'd8, w[1:0]))) ok = 0;
                if (w == 0) check_assertion("Hit commits HIT_LAT cycles after the request", found && cmt_c - issue_c == HIT_LAT);
            end
            check_assertion("Hits return the right word for every block offset", ok);
            check_assertion("Hits make no further memory requests", mem_req_count == 1);
        end
    endtask

    task automatic test_back_to_back_hits();
        logic found;
        logic [31:0] data;
        begin
            $display("--- test_back_to_back_hits ---");
            do_load(mk_addr(22'h00400, 6'd9, 2'd0), 4'd0, found, data);
            wait_idle();
            // one request per cycle, no gaps
            for (int w = 0; w < 4; w++) begin
                lsu_req_vld_i = 1;
                lsu_req_wr_rd_i = 0;
                lsu_req_addr_i = mk_addr(22'h00400, 6'd9, w[1:0]);
                lsu_req_rob_idx_i = 4'(8 + w);
                @(negedge clk);
            end
            clear_inputs();
            repeat (4) @(negedge clk);
            check_assertion("Four pipelined hits produce four commits", cmt_q.size() == 4);
            check_assertion("Pipelined hits commit on consecutive cycles, in order",
                            cmt_q.size() == 4 &&
                            cmt_q[0].rob_idx == 8 && cmt_q[1].rob_idx == 9 && cmt_q[2].rob_idx == 10 && cmt_q[3].rob_idx == 11 &&
                            cmt_q[1].cycle == cmt_q[0].cycle + 1 && cmt_q[3].cycle == cmt_q[0].cycle + 3);
            check_assertion("Pipelined hits return correct data",
                            cmt_q.size() == 4 && cmt_q[0].data == mem_word(mk_addr(22'h00400, 6'd9, 2'd0)) &&
                            cmt_q[3].data == mem_word(mk_addr(22'h00400, 6'd9, 2'd3)));
        end
    endtask

    task automatic test_store_hit_then_load();
        logic found;
        logic [31:0] data;
        logic [31:0] st_addr = mk_addr(22'h00500, 6'd10, 2'd1);
        begin
            $display("--- test_store_hit_then_load ---");
            do_load(mk_addr(22'h00500, 6'd10, 2'd0), 4'd0, found, data);
            wait_idle();
            store_req(st_addr, 32'h57A7_0001);
            repeat (3) @(negedge clk);
            do_load(st_addr, 4'd1, found, data);
            check_assertion("Load after store hit commits", found);
            check_assertion("Load after store hit returns the stored data", data == 32'h57A7_0001);
            do_load(mk_addr(22'h00500, 6'd10, 2'd2), 4'd2, found, data);
            check_assertion("Neighbouring word unaffected by store", found && data == mem_word(mk_addr(22'h00500, 6'd10, 2'd2)));
            check_assertion("Store hit makes no memory request", mem_req_count == 1);
            check_assertion("Store does not produce a load commit", cmt_q.size() == 0);
        end
    endtask

    task automatic test_store_miss_then_load();
        logic found;
        logic [31:0] data;
        logic [31:0] st_addr = mk_addr(22'h00600, 6'd11, 2'd2);
        begin
            $display("--- test_store_miss_then_load ---");
            store_req(st_addr, 32'h57A7_0002);
            wait_idle();
            check_assertion("Store miss requests its block", mem_req_count == 1 && mem_req_addr_log[0][31:4] == st_addr[31:4]);
            check_assertion("Store miss does not produce a load commit", cmt_q.size() == 0);
            do_load(st_addr, 4'd1, found, data);
            check_assertion("Load after store miss commits", found);
            check_assertion("Store-miss data merged into the right word", data == 32'h57A7_0002);
            do_load(mk_addr(22'h00600, 6'd11, 2'd0), 4'd2, found, data);
            check_assertion("Store miss leaves the other words as memory data", found && data == mem_word(mk_addr(22'h00600, 6'd11, 2'd0)));
            check_assertion("Loads after store-miss fill hit (no new request)", mem_req_count == 1);
        end
    endtask

    task automatic test_dirty_eviction();
        logic found;
        logic [31:0] data;
        logic [CACHE_BLOCK_SIZE-1:0] wb, exp;
        logic [31:0] st_addr = mk_addr(22'h00700, 6'd12, 2'd3);
        begin
            $display("--- test_dirty_eviction ---");
            do_load(mk_addr(22'h00700, 6'd12, 2'd0), 4'd0, found, data);
            wait_idle();
            store_req(st_addr, 32'hD1D1_D1D1);
            repeat (3) @(negedge clk);
            do_load(mk_addr(22'h00701, 6'd12, 2'd1), 4'd1, found, data);   // same index, new tag
            check_assertion("Conflicting load commits", found);
            check_assertion("Conflicting load returns its own data", data == mem_word(mk_addr(22'h00701, 6'd12, 2'd1)));
            wait_wb(TIMEOUT, found, wb);
            exp = mem_block(st_addr);
            exp[96 +: 32] = 32'hD1D1_D1D1;
            check_assertion("Dirty line written back on eviction", found);
            check_assertion("Writeback carries the dirty line with the store data", wb == exp);
            wait_idle();
            check_assertion("Exactly one writeback", wb_q.size() == 0);
        end
    endtask

    task automatic test_clean_eviction();
        logic found;
        logic [31:0] data;
        begin
            $display("--- test_clean_eviction ---");
            do_load(mk_addr(22'h00800, 6'd13, 2'd0), 4'd0, found, data);
            wait_idle();
            do_load(mk_addr(22'h00801, 6'd13, 2'd0), 4'd1, found, data);
            check_assertion("Conflicting load over a clean line commits", found && data == mem_word(mk_addr(22'h00801, 6'd13, 2'd0)));
            wait_idle();
            check_assertion("Clean line evicted without writeback", wb_q.size() == 0);
            do_load(mk_addr(22'h00800, 6'd13, 2'd0), 4'd2, found, data);
            check_assertion("Evicted block misses again", found && mem_req_count == 3);
        end
    endtask

    task automatic test_repair_stall();
        logic found;
        logic [31:0] data;
        begin
            $display("--- test_repair_stall ---");
            do_load(mk_addr(22'h00900, 6'd14, 2'd0), 4'd0, found, data);
            wait_idle();
            check_assertion("Controller stalls for exactly one cycle per repair write", stall_cycles == 1);
            #1;
            check_assertion("Stall deasserts after the repair", !stall_controller_o);
        end
    endtask

    task automatic test_hit_under_miss();
        logic found;
        logic [31:0] data;
        int hit_c, miss_c;
        begin
            $display("--- test_hit_under_miss ---");
            do_load(mk_addr(22'h00A00, 6'd15, 2'd1), 4'd0, found, data);   // make block resident
            wait_idle();
            mem_latency = 20;
            load_req(mk_addr(22'h00A01, 6'd16, 2'd0), 4'd1);                // slow miss
            repeat (3) @(negedge clk);
            load_req(mk_addr(22'h00A00, 6'd15, 2'd1), 4'd2);                // hit while miss in flight
            wait_commit(4'd2, TIMEOUT, found, data, hit_c);
            check_assertion("Hit under an outstanding miss commits", found && data == mem_word(mk_addr(22'h00A00, 6'd15, 2'd1)));
            wait_commit(4'd1, TIMEOUT, found, data, miss_c);
            check_assertion("Outstanding miss still commits correctly", found && data == mem_word(mk_addr(22'h00A01, 6'd16, 2'd0)));
            check_assertion("Hit is not blocked behind the miss", hit_c < miss_c);
        end
    endtask

    task automatic test_multiple_outstanding_misses();
        logic found;
        logic [31:0] data;
        int c;
        logic ok = 1;
        begin
            $display("--- test_multiple_outstanding_misses ---");
            mem_latency = 10;
            for (int i = 0; i < 4; i++) load_req(mk_addr(22'h00B00 + i, 6'(20 + i), 2'(i)), 4'(4 + i));
            for (int i = 0; i < 4; i++) begin
                wait_commit(4'(4 + i), TIMEOUT * 2, found, data, c);
                if (!found || data != mem_word(mk_addr(22'h00B00 + i, 6'(20 + i), 2'(i)))) ok = 0;
            end
            check_assertion("Four outstanding misses all commit with correct data", ok);
            check_assertion("One memory request per missed block", mem_req_count == 4);
            wait_idle();
            check_assertion("No duplicate commits", cmt_q.size() == 0);
        end
    endtask

    task automatic test_secondary_miss_same_block();
        logic found;
        logic [31:0] data;
        int c;
        logic [31:0] a0 = mk_addr(22'h00C00, 6'd30, 2'd0);
        logic [31:0] a1 = mk_addr(22'h00C00, 6'd30, 2'd3);
        begin
            $display("--- test_secondary_miss_same_block ---");
            mem_latency = 10;
            load_req(a0, 4'd1);
            load_req(a1, 4'd2);         // same block, still in flight
            wait_commit(4'd1, TIMEOUT, found, data, c);
            check_assertion("Primary miss commits", found && data == mem_word(a0));
            wait_commit(4'd2, TIMEOUT, found, data, c);
            check_assertion("Secondary miss to the same block commits the right word", found && data == mem_word(a1));
        end
    endtask

    task automatic test_mshr_full_stall();
        logic found;
        logic [31:0] data;
        int c;
        logic ok = 1;
        int n = NUM_MSHR_ENTS/2 + 2;
        begin
            $display("--- test_mshr_full_stall ---");
            mem_latency = 30;
            for (int i = 0; i < n; i++) load_req(mk_addr(22'h00D00 + i, 6'(32 + i), 2'd0), 4'(i));
            repeat (5) @(negedge clk);     // requests reach the MSHR two cycles after issue
            check_assertion("Controller stalls when the load MSHRs fill", stall_cycles > 0);
            for (int i = 0; i < n; i++) begin
                wait_commit(4'(i), TIMEOUT * 10, found, data, c);
                if (!found || data != mem_word(mk_addr(22'h00D00 + i, 6'(32 + i), 2'd0))) ok = 0;
            end
            check_assertion("Every load issued around an MSHR-full stall commits correctly", ok);
            check_assertion("One memory request per missed block after MSHR-full stall", mem_req_count == n);
        end
    endtask

    initial begin
        init_signals();
        $display("=== Cache Controller Testbench ===");

        `RUN_TEST(test_reset_state)
        `RUN_TEST(test_load_miss_cold)
        `RUN_TEST(test_miss_word_select)
        `RUN_TEST(test_load_hit)
        `RUN_TEST(test_back_to_back_hits)
        `RUN_TEST(test_store_hit_then_load)
        `RUN_TEST(test_store_miss_then_load)
        `RUN_TEST(test_dirty_eviction)
        `RUN_TEST(test_clean_eviction)
        `RUN_TEST(test_repair_stall)
        `RUN_TEST(test_hit_under_miss)
        `RUN_TEST(test_multiple_outstanding_misses)
        `RUN_TEST(test_secondary_miss_same_block)
        `RUN_TEST(test_mshr_full_stall)

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
