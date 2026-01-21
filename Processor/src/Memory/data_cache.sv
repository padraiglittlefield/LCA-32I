module data_cache #(
    parameter NUM_ENTS = 64,
    parameter BLOCK_SIZE = 128 
)(
    input   logic                       clk,
    input   logic                       rst,
    input   logic                       wr_en,                  // enable write
    input   logic                       is_repair_i,            // is this write repairing a block
    input   logic   [BLOCK_SIZE-1:0]    repair_data_i,          // block from main memory to repair access \
    input   logic                       is_repair_dirty_i,      // is the repaired block dirty?     
    input   logic   [31:0]              wr_addr_i,              // address to write to
    input   logic   [31:0]              wr_data_i,              // data in to write
    input   logic                       rd_en,                  // enable read
    input   logic   [31:0]              rd_addr_i,              // address to read from
    output  logic   [31:0]              rd_data_o,              // read data out
    output  logic                       rd_hit_o,               // the read hit in the cache
    output  logic                       wr_hit_o,               // the write hit in the cache
    output  logic                       wb_evicted_en,          // signal that an evicted block needs to be written back to main memory
    output  logic   [BLOCK_SIZE-1:0]    wb_evicted_block        // the dirty evicted block 
);


// |      Tag     | Index | Block Offset | Byte Offset |
// |      22      |   6   |     2        |      2      |
localparam NUM_IDX_BITS = $clog2(NUM_ENTS);
localparam BLOCK_OFFSET_BITS = $clog2((BLOCK_SIZE)/32);
localparam NUM_TAG_BITS = 32 - NUM_IDX_BITS - BLOCK_OFFSET_BITS - 2;


typedef struct packed {
    logic [NUM_TAG_BITS-1:0] tag;
    logic [BLOCK_SIZE-1:0] data;
    logic valid;
    logic dirty;
} cache_block;

cache_block cache_memory [NUM_ENTS]; //declare array of size NUM_ENTS

logic write_hit;
logic [NUM_TAG_BITS-1:0] write_tag;
logic [NUM_IDX_BITS-1:0] write_idx;
logic [BLOCK_OFFSET_BITS-1:0] write_block_offset;
cache_block write_block;
logic [BLOCK_SIZE-1:0] write_data;

assign write_tag = wr_addr_i[31-:NUM_TAG_BITS];
assign write_idx = wr_addr_i[(31-NUM_TAG_BITS) -: NUM_IDX_BITS];
assign write_block_offset = wr_addr_i[BLOCK_OFFSET_BITS+1:2]; 

logic read_hit;
logic [NUM_TAG_BITS-1:0] read_tag;
logic [NUM_IDX_BITS-1:0] read_idx;
logic [BLOCK_OFFSET_BITS-1:0] read_block_offset;
logic [31:0] read_data;
cache_block read_block;

assign read_tag = rd_addr_i[31-:NUM_TAG_BITS];
assign read_idx = rd_addr_i[(31-NUM_TAG_BITS) -: NUM_IDX_BITS];
assign read_block_offset = rd_addr_i[BLOCK_OFFSET_BITS+1:2]; 

always_comb begin
    if(rd_en) begin
        read_block = cache_memory[read_idx];
        read_hit = (read_block.valid && read_block.tag == read_tag) ? 1'b1 : 1'b0; 
        read_data = read_block.data[read_block_offset*32 +: 32];
    end else begin
        read_block = '0;
        read_hit = 1'b0;
        read_data = '0;
    end
end

assign rd_data_o = read_data;
assign rd_hit_o = read_hit;

always_comb begin
    if(wr_en && !is_repair_i) begin
        write_block = cache_memory[write_idx];
        write_hit = (write_block.valid && write_block.tag == write_tag) ? 1'b1 : 1'b0; 
        // overwrite old word with new word
        write_data = write_block.data; 
        write_data[write_block_offset*32 +: 32] = wr_data_i;
    end else begin
        write_block = '0;
        write_hit = 1'b0;
    end
end

assign wr_hit_o = write_hit;


// check if the block being evicted by a repair is dirty and needs to be written back
always_comb begin
    //set defaults (avoid latch)
    wb_evicted_en = 1'b0;
    wb_evicted_block = '0;
    // on a write repair, check for dirty and valid 
    if(wr_en && is_repair_i) begin
        if(cache_memory[write_idx].valid && cache_memory[write_idx].dirty) begin // block is valid and dirty
            wb_evicted_en = 1'b1;
            wb_evicted_block = cache_memory[write_idx].data;
        end
    end
end

always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < NUM_ENTS; i++) begin
            cache_memory[i] <= '0;
        end
    end else begin
        if(wr_en) begin
            if(is_repair_i) begin // overwrite entry with repaired block, set valid
                cache_memory[write_idx].valid <= 1'b1;
                cache_memory[write_idx].tag <= write_tag;
                cache_memory[write_idx].data <= repair_data_i;
                cache_memory[write_idx].dirty <= is_repair_dirty_i ? 1'b1 : 1'b0; // block matches main memory
            end else if(write_hit) begin
                cache_memory[write_idx].data <= write_data;
                cache_memory[write_idx].dirty <= 1'b1; // mark block as dirty to indicate that primary memory has stale state
            end
        end
    end
end

endmodule