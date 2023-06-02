`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:26:30 05/31/2023 
// Design Name: 
// Module Name:    chess 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module chess(
   // Outputs
   board_state, cursor_file, cursor_rank,
   // Inputs
   sw, btnS, btnU, btnL, btnD, btnR, clk
    );
   
   //output reg [767:0] board;
   output reg [2:0] cursor_file;
   output reg [2:0] cursor_rank;

   input  [7:0]   sw;
   input          btnS;
   input          btnU;
   input          btnL;
   input          btnD;
   input          btnR;
   input          clk;

   output reg [768-1:0] board_state = 768'h00000000000000100000000000000008000000000000008100000000000000240000000000000042000000000000ff001000000000000000080000000000000081000000000000002400000000000000420000000000000000ff000000000000;

   reg [2:0] old_file = 0;
   reg [2:0] old_rank = 0;
   reg [2:0] new_file = 0;
   reg [2:0] new_rank = 0;
   reg [63:0] en_passant_bitboard = 64'h0;
   reg is_white = 1;
   reg [1:0] promotion = 0; //0:knight, 1:bishop, 2:rook, 3:queen
   
   wire [768-1:0] new_board_state;
   //wire [768-1:0] new_after_castling;
   wire [3:0] piece;
   wire move_is_valid;
   //wire castling_is_valid;
   wire [63:0] new_en_passant;
   Complete_Move_Verifier cmv(old_file, old_rank, new_file, new_rank, is_white, board_state, en_passant_bitboard, move_is_valid, piece, new_board_state, new_en_passant);
   //Castling_Checker cc(old_file, old_rank, new_file, new_rank, is_white, board_state, castling_is_valid, new_after_castling);
   
   reg prev_sw_0;
   
   always @ (posedge clk) begin
     
     if (btnU) begin
       // Move up
       cursor_rank <= cursor_rank + 1; //intentional overflow
     end
     else if (btnL) begin
       // Move left
       cursor_file <= cursor_file - 1; //intentional underflow
     end
     else if (btnD) begin
       // Move down
       cursor_rank <= cursor_rank - 1; //intentional underflow
     end
     else if (btnR) begin
       // Move right
       cursor_file <= cursor_file + 1; //intentional overflow
     end
     else if (btnS) begin
       promotion <= promotion + 1; //intentional overflow
     end
     
     if(sw[0] & !prev_sw_0) begin
       //new_file <= cursor_file;
       //new_rank <= cursor_rank;
       old_file <= cursor_file;
       old_rank <= cursor_rank;
     end
     else if(!sw[0] & prev_sw_0) begin
       new_file <= cursor_file;
       new_rank <= cursor_rank;
     end
     if(move_is_valid) begin
        board_state <= new_board_state;
        en_passant_bitboard <= new_en_passant;
        is_white <= !is_white;
     end
//     else if(castling_is_valid /*add some more restrictions for castling*/) begin
//        board_state <= new_after_castling;
//        is_white <= !is_white;
//     end
     else begin
        board_state <= board_state;
        en_passant_bitboard <= en_passant_bitboard;
        is_white <= is_white;
     end
     prev_sw_0 <= sw[0];
   end


endmodule
