`timescale 1ns/1ns

import CORE_PKG::*;
module tb_data_cache;
    `include "tb_test_select.svh"
    // ===== Testbench Setup ===== //


    // generate clock
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

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
        $dumpvars(0,tb_data_cache);
    end

    logic wr_en;
    logic is_repair_i;
    logic is_repair_dirty_i;
    logic [31:0] wr_addr_i;
    cache_data_block wr_data_i;
    logic rd_en;
    logic [31:0] rd_addr_i;
    cache_data_block rd_data_o;
    cache_metadata_block rd_tag_o;
    logic wb_evicted_en;
    cache_data_block wb_evicted_block;

    data_cache dut (
        .clk_i(clk),
        .rst_i(rst),
        .wr_en(wr_en),
        .is_repair_i(is_repair_i),
        .is_repair_dirty_i(is_repair_dirty_i),
        .wr_addr_i(wr_addr_i),
        .wr_data_i(wr_data_i),
        .rd_en(rd_en),
        .rd_addr_i(rd_addr_i),
        .rd_data_o(rd_data_o),
        .rd_tag_o(rd_tag_o),
        .wb_evicted_en(wb_evicted_en),
        .wb_evicted_block(wb_evicted_block)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0;
            rst = 0;
            clear_inputs();
        end
    endtask

    // Drive every DUT input to its idle value (called on each reset)
    task clear_inputs();
        begin
            wr_en = 0;
            is_repair_i = 0;
            is_repair_dirty_i = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
            rd_en = 0;
            rd_addr_i = 0;
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

    // Reset sequence
    task reset_dut();
        begin
            $display("\n[RESET] Resetting DUT");
            @(negedge clk);
            clear_inputs();
            rst = 1;
            @(negedge clk);
            @(negedge clk);
            rst = 0;
            @(negedge clk);
            $display("[RESET] Reset complete\n");
        end
    endtask

    // | Tag (22) | Index (6) | Block Offset (2) | Byte Offset (2) |
    function automatic logic [31:0] mk_addr(
        input logic [NUM_TAG_BITS-1:0]      tag,
        input logic [NUM_IDX_BITS-1:0]      idx,
        input logic [BLOCK_OFFSET_BITS-1:0] blk_off = '0,
        input logic [1:0]                   byte_off = '0
    );
        return {tag, idx, blk_off, byte_off};
    endfunction

    // distinct, non-trivial pattern in every word of the block
    function automatic cache_data_block mk_block(input logic [31:0] seed);
        cache_data_block b;
        b.data = {seed ^ 32'hDEAD_BEEF, ~seed, seed + 32'h1111_1111, seed};
        return b;
    endfunction

    // Fill/replace a line from main memory. Writes wait for a posedge so they land
    // even when called off-edge (e.g. after read_line), and always end on a negedge.
    task repair_write(input logic [31:0] addr, input cache_data_block data, input logic dirty);
        begin
            wr_en = 1;
            is_repair_i = 1;
            is_repair_dirty_i = dirty;
            wr_addr_i = addr;
            wr_data_i = data;
            @(posedge clk);
            @(negedge clk);
            wr_en = 0;
            is_repair_i = 0;
            is_repair_dirty_i = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
        end
    endtask

    // Store hit: overwrite the line's data
    task store_write(input logic [31:0] addr, input cache_data_block data);
        begin
            wr_en = 1;
            is_repair_i = 0;
            wr_addr_i = addr;
            wr_data_i = data;
            @(posedge clk);
            @(negedge clk);
            wr_en = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
        end
    endtask

    // Combinational read, does not consume a clock
    task automatic read_line(
        input  logic [31:0]         addr,
        output cache_data_block     data,
        output cache_metadata_block tag
    );
        begin
            rd_en = 1;
            rd_addr_i = addr;
            #1;
            data = rd_data_o;
            tag = rd_tag_o;
            rd_en = 0;
            rd_addr_i = 0;
            #1;
        end
    endtask

    // ===== Tests ===== //

    task automatic test_reset_state();
        cache_data_block d;
        cache_metadata_block t;
        logic all_invalid = 1;
        logic all_clean = 1;
        logic all_zero = 1;
        begin
            $display("--- test_reset_state ---");
            for (int i = 0; i < NUM_CACHE_ENTS; i++) begin
                read_line(mk_addr(22'h0, i[NUM_IDX_BITS-1:0]), d, t);
                if (t.valid) all_invalid = 0;
                if (t.dirty) all_clean = 0;
                if (d.data != '0 || t.tag != '0) all_zero = 0;
            end
            check_assertion("All lines invalid after reset", all_invalid);
            check_assertion("All lines clean after reset", all_clean);
            check_assertion("All data/tags zero after reset", all_zero);
            check_assertion("No writeback when idle", !wb_evicted_en);
        end
    endtask

    task automatic test_rd_en_gating();
        logic [31:0] addr = mk_addr(22'h1234, 6'd5);
        begin
            $display("--- test_rd_en_gating ---");
            repair_write(addr, mk_block(32'hCAFE_0001), 1'b0);
            rd_en = 0;
            rd_addr_i = addr;
            #1;
            check_assertion("rd_data_o is zero when rd_en=0", rd_data_o == '0);
            check_assertion("rd_tag_o is zero when rd_en=0", rd_tag_o == '0);
            rd_en = 1;
            #1;
            check_assertion("rd_data_o driven when rd_en=1", rd_data_o == mk_block(32'hCAFE_0001));
            rd_en = 0;
            rd_addr_i = 0;
            #1;
        end
    endtask

    task automatic test_repair_clean_fill();
        logic [31:0] addr = mk_addr(22'h2AAAA, 6'd10);
        cache_data_block d;
        cache_metadata_block t;
        begin
            $display("--- test_repair_clean_fill ---");
            repair_write(addr, mk_block(32'h1000_0010), 1'b0);
            read_line(addr, d, t);
            check_assertion("Clean repair: data written", d == mk_block(32'h1000_0010));
            check_assertion("Clean repair: tag written", t.tag == 22'h2AAAA);
            check_assertion("Clean repair: line valid", t.valid);
            check_assertion("Clean repair: line clean", !t.dirty);
        end
    endtask

    task automatic test_repair_dirty_fill();
        logic [31:0] addr = mk_addr(22'h15555, 6'd11);
        cache_data_block d;
        cache_metadata_block t;
        begin
            $display("--- test_repair_dirty_fill ---");
            repair_write(addr, mk_block(32'h1000_0011), 1'b1);
            read_line(addr, d, t);
            check_assertion("Dirty repair: data written", d == mk_block(32'h1000_0011));
            check_assertion("Dirty repair: tag written", t.tag == 22'h15555);
            check_assertion("Dirty repair: line valid", t.valid);
            check_assertion("Dirty repair: line dirty", t.dirty);
        end
    endtask

    task automatic test_offsets_map_to_same_line();
        cache_data_block d;
        cache_metadata_block t;
        logic same = 1;
        begin
            $display("--- test_offsets_map_to_same_line ---");
            // write via a non-zero block/byte offset
            repair_write(mk_addr(22'h00ABC, 6'd20, 2'd3, 2'd1), mk_block(32'h2000_0020), 1'b0);
            for (int bo = 0; bo < 4; bo++) begin
                for (int by = 0; by < 4; by++) begin
                    read_line(mk_addr(22'h00ABC, 6'd20, bo[1:0], by[1:0]), d, t);
                    if (d != mk_block(32'h2000_0020) || t.tag != 22'h00ABC || !t.valid) same = 0;
                end
            end
            check_assertion("Block/byte offset bits do not affect line selection", same);
            read_line(mk_addr(22'h00ABC, 6'd21), d, t);
            check_assertion("Adjacent index is a different line", !t.valid);
        end
    endtask

    task automatic test_read_returns_stored_tag();
        cache_data_block d;
        cache_metadata_block t;
        begin
            $display("--- test_read_returns_stored_tag ---");
            repair_write(mk_addr(22'h0BEEF, 6'd25), mk_block(32'h2500_0000), 1'b0);
            // same index, different tag: cache returns the resident line, caller compares tags
            read_line(mk_addr(22'h0F00D, 6'd25), d, t);
            check_assertion("Read with mismatched tag returns resident tag", t.tag == 22'h0BEEF);
            check_assertion("Read with mismatched tag returns resident data", d == mk_block(32'h2500_0000));
            check_assertion("Tag compare detects miss", t.tag != 22'h0F00D);
        end
    endtask

    task automatic test_store_write_marks_dirty();
        logic [31:0] addr = mk_addr(22'h03333, 6'd30);
        cache_data_block d;
        cache_metadata_block t;
        begin
            $display("--- test_store_write_marks_dirty ---");
            repair_write(addr, mk_block(32'h3000_0000), 1'b0);
            read_line(addr, d, t);
            check_assertion("Line clean before store", t.valid && !t.dirty);
            store_write(addr, mk_block(32'h3000_0001));
            read_line(addr, d, t);
            check_assertion("Store: data updated", d == mk_block(32'h3000_0001));
            check_assertion("Store: line marked dirty", t.dirty);
            check_assertion("Store: line stays valid", t.valid);
            check_assertion("Store: tag unchanged", t.tag == 22'h03333);
        end
    endtask

    task automatic test_store_write_keeps_tag();
        cache_data_block d;
        cache_metadata_block t;
        begin
            $display("--- test_store_write_keeps_tag ---");
            repair_write(mk_addr(22'h04444, 6'd31), mk_block(32'h3100_0000), 1'b0);
            // non-repair writes only touch data + dirty, never the tag
            store_write(mk_addr(22'h05555, 6'd31), mk_block(32'h3100_0001));
            read_line(mk_addr(22'h04444, 6'd31), d, t);
            check_assertion("Non-repair write does not overwrite tag", t.tag == 22'h04444);
            check_assertion("Non-repair write updates data", d == mk_block(32'h3100_0001));
        end
    endtask

    task automatic test_store_no_writeback();
        logic [31:0] addr = mk_addr(22'h06666, 6'd32);
        begin
            $display("--- test_store_no_writeback ---");
            repair_write(addr, mk_block(32'h3200_0000), 1'b1);
            // store to a dirty line must not trigger a writeback
            wr_en = 1;
            is_repair_i = 0;
            wr_addr_i = addr;
            wr_data_i = mk_block(32'h3200_0001);
            #1;
            check_assertion("Store to dirty line does not assert wb_evicted_en", !wb_evicted_en);
            check_assertion("wb_evicted_block zero when no writeback", wb_evicted_block == '0);
            @(negedge clk);
            // is_repair without wr_en must not trigger a writeback either
            wr_en = 0;
            is_repair_i = 1;
            #1;
            check_assertion("is_repair without wr_en does not assert wb_evicted_en", !wb_evicted_en);
            is_repair_i = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
            @(negedge clk);
        end
    endtask

    task automatic test_evict_dirty_writeback();
        logic [31:0] old_addr = mk_addr(22'h07777, 6'd40);
        logic [31:0] new_addr = mk_addr(22'h08888, 6'd40);
        cache_data_block d;
        cache_metadata_block t;
        begin
            $display("--- test_evict_dirty_writeback ---");
            repair_write(old_addr, mk_block(32'h4000_0000), 1'b0);
            store_write(old_addr, mk_block(32'h4000_0001));  // line now dirty

            wr_en = 1;
            is_repair_i = 1;
            is_repair_dirty_i = 0;
            wr_addr_i = new_addr;
            wr_data_i = mk_block(32'h4000_0002);
            #1;
            check_assertion("Dirty eviction asserts wb_evicted_en", wb_evicted_en);
            check_assertion("wb_evicted_block holds the old (dirty) data", wb_evicted_block == mk_block(32'h4000_0001));
            @(negedge clk);
            wr_en = 0;
            is_repair_i = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
            #1;
            check_assertion("wb_evicted_en deasserts after repair", !wb_evicted_en);

            read_line(new_addr, d, t);
            check_assertion("Evicted line replaced: new tag", t.tag == 22'h08888);
            check_assertion("Evicted line replaced: new data", d == mk_block(32'h4000_0002));
            check_assertion("Evicted line replaced: clean", t.valid && !t.dirty);
            @(negedge clk);
        end
    endtask

    task automatic test_evict_dirty_repair_writeback();
        begin
            $display("--- test_evict_dirty_repair_writeback ---");
            // a line filled dirty (write-miss repair) must also be written back on eviction
            repair_write(mk_addr(22'h09999, 6'd41), mk_block(32'h4100_0000), 1'b1);
            wr_en = 1;
            is_repair_i = 1;
            wr_addr_i = mk_addr(22'h0AAAA, 6'd41);
            wr_data_i = mk_block(32'h4100_0001);
            #1;
            check_assertion("Dirty-filled line evicted with writeback", wb_evicted_en);
            check_assertion("Writeback data matches dirty-filled line", wb_evicted_block == mk_block(32'h4100_0000));
            @(negedge clk);
            wr_en = 0;
            is_repair_i = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
            @(negedge clk);
        end
    endtask

    task automatic test_evict_clean_no_writeback();
        begin
            $display("--- test_evict_clean_no_writeback ---");
            repair_write(mk_addr(22'h0BBBB, 6'd42), mk_block(32'h4200_0000), 1'b0);
            wr_en = 1;
            is_repair_i = 1;
            wr_addr_i = mk_addr(22'h0CCCC, 6'd42);
            wr_data_i = mk_block(32'h4200_0001);
            #1;
            check_assertion("Clean eviction does not assert wb_evicted_en", !wb_evicted_en);
            @(negedge clk);
            wr_en = 0;
            is_repair_i = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
            @(negedge clk);
        end
    endtask

    task automatic test_evict_invalid_no_writeback();
        begin
            $display("--- test_evict_invalid_no_writeback ---");
            // untouched line (invalid, clean)
            wr_en = 1;
            is_repair_i = 1;
            wr_addr_i = mk_addr(22'h0DDDD, 6'd43);
            wr_data_i = mk_block(32'h4300_0000);
            #1;
            check_assertion("Filling an invalid line does not assert wb_evicted_en", !wb_evicted_en);
            @(negedge clk);
            wr_en = 0;
            is_repair_i = 0;

            // invalid but dirty (store to an invalid line): still must not be written back
            store_write(mk_addr(22'h0EEEE, 6'd44), mk_block(32'h4400_0000));
            wr_en = 1;
            is_repair_i = 1;
            wr_addr_i = mk_addr(22'h0FFFF, 6'd44);
            wr_data_i = mk_block(32'h4400_0001);
            #1;
            check_assertion("Invalid-but-dirty line does not assert wb_evicted_en", !wb_evicted_en);
            @(negedge clk);
            wr_en = 0;
            is_repair_i = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
            @(negedge clk);
        end
    endtask

    task automatic test_read_during_write();
        logic [31:0] addr = mk_addr(22'h11111, 6'd50);
        begin
            $display("--- test_read_during_write ---");
            repair_write(addr, mk_block(32'h5000_0000), 1'b0);
            // read and write the same line in the same cycle
            rd_en = 1;
            rd_addr_i = addr;
            wr_en = 1;
            is_repair_i = 0;
            wr_addr_i = addr;
            wr_data_i = mk_block(32'h5000_0001);
            #1;
            check_assertion("Same-cycle read returns old data", rd_data_o == mk_block(32'h5000_0000));
            check_assertion("Same-cycle read returns old dirty bit", !rd_tag_o.dirty);
            @(negedge clk);
            wr_en = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
            #1;
            check_assertion("Read after write edge returns new data", rd_data_o == mk_block(32'h5000_0001));
            check_assertion("Read after write edge sees dirty bit", rd_tag_o.dirty);
            rd_en = 0;
            rd_addr_i = 0;
            @(negedge clk);
        end
    endtask

    task automatic test_back_to_back_repairs();
        cache_data_block d;
        cache_metadata_block t;
        logic ok = 1;
        begin
            $display("--- test_back_to_back_repairs ---");
            // wr_en held high across consecutive cycles
            wr_en = 1;
            is_repair_i = 1;
            for (int i = 0; i < 4; i++) begin
                is_repair_dirty_i = i[0];
                wr_addr_i = mk_addr(22'h12000 + i, 6'd52 + i[5:0]);
                wr_data_i = mk_block(32'h5200_0000 + i);
                @(negedge clk);
            end
            wr_en = 0;
            is_repair_i = 0;
            is_repair_dirty_i = 0;
            wr_addr_i = 0;
            wr_data_i = '0;
            for (int i = 0; i < 4; i++) begin
                read_line(mk_addr(22'h12000 + i, 6'd52 + i[5:0]), d, t);
                if (d != mk_block(32'h5200_0000 + i) || t.tag != 22'h12000 + i || !t.valid || t.dirty != i[0])
                    ok = 0;
            end
            check_assertion("Back-to-back repairs all land correctly", ok);
        end
    endtask

    task automatic test_all_entries_independent();
        cache_data_block d;
        cache_metadata_block t;
        logic ok = 1;
        begin
            $display("--- test_all_entries_independent ---");
            for (int i = 0; i < NUM_CACHE_ENTS; i++) begin
                repair_write(mk_addr(22'h20000 + i, i[NUM_IDX_BITS-1:0]), mk_block(32'h6000_0000 + i), i[1]);
            end
            for (int i = 0; i < NUM_CACHE_ENTS; i++) begin
                read_line(mk_addr(22'h20000 + i, i[NUM_IDX_BITS-1:0]), d, t);
                if (d != mk_block(32'h6000_0000 + i) || t.tag != 22'h20000 + i || !t.valid || t.dirty != i[1])
                    ok = 0;
            end
            check_assertion("All 64 lines hold independent data/tag/dirty", ok);
        end
    endtask

    task automatic test_reset_clears_populated();
        cache_data_block d;
        cache_metadata_block t;
        logic ok = 1;
        begin
            $display("--- test_reset_clears_populated ---");
            // cache is fully populated from the previous test
            reset_dut();
            for (int i = 0; i < NUM_CACHE_ENTS; i++) begin
                read_line(mk_addr(22'h0, i[NUM_IDX_BITS-1:0]), d, t);
                if (t.valid || t.dirty || d != '0) ok = 0;
            end
            check_assertion("Reset invalidates and clears a populated cache", ok);
        end
    endtask

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Data Cache Testbench ===");

        `RUN_TEST(test_reset_state)
        `RUN_TEST(test_rd_en_gating)
        `RUN_TEST(test_repair_clean_fill)
        `RUN_TEST(test_repair_dirty_fill)
        `RUN_TEST(test_offsets_map_to_same_line)
        `RUN_TEST(test_read_returns_stored_tag)
        `RUN_TEST(test_store_write_marks_dirty)
        `RUN_TEST(test_store_write_keeps_tag)
        `RUN_TEST(test_store_no_writeback)
        `RUN_TEST(test_evict_dirty_writeback)
        `RUN_TEST(test_evict_dirty_repair_writeback)
        `RUN_TEST(test_evict_clean_no_writeback)
        `RUN_TEST(test_evict_invalid_no_writeback)
        `RUN_TEST(test_read_during_write)
        `RUN_TEST(test_back_to_back_repairs)
        `RUN_TEST(test_all_entries_independent)
        `RUN_TEST(test_reset_clears_populated)

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
