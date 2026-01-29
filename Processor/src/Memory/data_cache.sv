module data_cache (
    input   logic                       clk_i,
    input   logic                       rst_i,
    input   logic                       wr_en,                  // enable write
    input   logic                       is_repair_i,            // is this write repairing a block
    input   logic                       is_repair_dirty_i,      // is the repaired block dirty?     
    input   logic   [31:0]              wr_addr_i,              // address to write to
    input   cache_data_block            wr_data_i,              // block from main memory to repair access
    input   logic                       rd_en,                  // enable read
    input   logic   [31:0]              rd_addr_i,              // address to read from
    output  cache_data_block            rd_data_o,              // read data out
    output  cache_metadata_block        rd_tag_o,               // tag of the data
    output  logic                       wb_evicted_en,          // signal that an evicted block needs to be written back to main memory
    output  cache_data_block            wb_evicted_block        // the dirty evicted block 
);


cache_data_block data_array [NUM_CACHE_ENTS]; //declare array of size NUM_ENTS
cache_metadata_block tag_array [NUM_CACHE_ENTS];

logic [NUM_TAG_BITS-1:0] write_tag;
logic [NUM_IDX_BITS-1:0] write_idx;
logic [BLOCK_OFFSET_BITS-1:0] write_block_offset;
cache_metadata_block write_tag_block;


assign write_tag = wr_addr_i[31-:NUM_TAG_BITS];
assign write_idx = wr_addr_i[(31-NUM_TAG_BITS) -: NUM_IDX_BITS];
assign write_block_offset = wr_addr_i[BLOCK_OFFSET_BITS+1:2]; 

logic [NUM_TAG_BITS-1:0] read_tag;
logic [NUM_IDX_BITS-1:0] read_idx;
logic [BLOCK_OFFSET_BITS-1:0] read_block_offset;
logic [31:0] read_data;

assign read_tag = rd_addr_i[31-:NUM_TAG_BITS];
assign read_idx = rd_addr_i[(31-NUM_TAG_BITS) -: NUM_IDX_BITS];
assign read_block_offset = rd_addr_i[BLOCK_OFFSET_BITS+1:2]; 

always_comb begin
    if(rd_en) begin
        rd_data_o = data_array[read_idx];
        rd_tag_o = tag_array[read_idx];
    end else begin
        rd_data_o = '0;
        rd_tag_o = '0;
    end
end

// check if the block being evicted by a repair is dirty and needs to be written back
always_comb begin
    //set defaults (avoid latch)
    wb_evicted_en = 1'b0;
    wb_evicted_block = '0;
    // on a write repair, check for dirty and valid 
    if(wr_en && is_repair_i) begin
        if(tag_array[write_idx].valid && tag_array[write_idx].dirty) begin // block is valid and dirty
            wb_evicted_en = 1'b1;
            wb_evicted_block = data_array[write_idx];
        end
    end
end

always_ff @(posedge clk_i) begin
    if(rst_i) begin
        for(int i = 0; i < NUM_CACHE_ENTS; i++) begin
            data_array[i] <= '0;
            tag_array[i] <= '0;
        end
    end else begin
        if(wr_en) begin
            if(is_repair_i) begin // overwrite entry with repaired block, set valid
                tag_array[write_idx].valid <= 1'b1;
                tag_array[write_idx].tag <= write_tag;
                tag_array[write_idx].dirty <= is_repair_dirty_i ? 1'b1 : 1'b0; // block matches main memory

                data_array[write_idx] <= wr_data_i;
            end else begin
                data_array[write_idx] <= wr_data_i;
                tag_array[write_idx].dirty <= 1'b1; // mark block as dirty to indicate that primary memory has stale state
            end
        end
    end
end

endmodule
