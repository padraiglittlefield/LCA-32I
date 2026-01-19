module data_cache #(
    parameter NUM_ENTS = 64,
    parameter BLOCK_SIZE = 128 
)(
    input logic clk,
    input logic rst,
    input logic is_repair_i,
    input logic [BLOCK_SIZE-1:0] repair_data_i,
    input logic w_en,
    input logic [31:0] w_data_i,
    input logic [31:0] w_addr_i,
    input logic r_en,
    input logic [31:0] r_addr_i,
    output logic [31:0] r_data_o,
    output logic r_hit_o,
    output logic w_hit_o
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
} cache_block;

cache_block cache_memory [NUM_ENTS]; //declare array of size NUM_ENTS

logic write_hit;
logic [NUM_TAG_BITS-1:0] write_tag;
logic [NUM_IDX_BITS-1:0] write_idx;
logic [BLOCK_OFFSET_BITS-1:0] write_block_offset;
cache_block write_block;
logic [BLOCK_SIZE-1:0] write_data;

assign write_tag = w_addr_i[31-:NUM_TAG_BITS];
assign write_idx = w_addr_i[(31-NUM_TAG_BITS) -: NUM_IDX_BITS];
assign write_block_offset = w_addr_i[BLOCK_OFFSET_BITS+1:2]; 

logic read_hit;
logic [NUM_TAG_BITS-1:0] read_tag;
logic [NUM_IDX_BITS-1:0] read_idx;
logic [BLOCK_OFFSET_BITS-1:0] read_block_offset;
logic [31:0] read_data;
cache_block read_block;

assign read_tag = r_addr_i[31-:NUM_TAG_BITS];
assign read_idx = r_addr_i[(31-NUM_TAG_BITS) -: NUM_IDX_BITS];
assign read_block_offset = r_addr_i[BLOCK_OFFSET_BITS+1:2]; 

always_comb begin
    if(r_en) begin
        read_block = cache_memory[read_idx];
        read_hit = (read_block.valid && read_block.tag == read_tag) ? 1'b1 : 1'b0; 
        read_data = read_block.data[read_block_offset*32 +: 32];
    end else begin
        read_block = '0;
        read_hit = 1'b0;
        read_data = '0;
    end
end

assign r_data_o = read_data;
assign r_hit_o = read_hit;

always_comb begin
    if(w_en && !is_repair_i) begin
        write_block = cache_memory[write_idx];
        write_hit = (write_block.valid && write_block.tag == write_tag) ? 1'b1 : 1'b0; 
        // overwrite old word with new word
        write_data = write_block.data; 
        write_data[write_block_offset*32 +: 32] = w_data_i;
    end else begin
        write_block = '0;
        write_hit = 1'b0;
    end
end

assign w_hit_o = write_hit;

always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < NUM_ENTS; i++) begin
            cache_memory[i] <= '0;
        end
    end else begin
        if(w_en) begin
            if(is_repair_i) begin
                cache_memory[write_idx].valid <= 1'b1;
                cache_memory[write_idx].tag <= write_tag;
                cache_memory[write_idx].data <= repair_data_i;
            end else if(write_hit) begin
                cache_memory[write_idx].data <= write_data;
            end
        end
    end
end

endmodule