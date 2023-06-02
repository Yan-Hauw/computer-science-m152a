`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:52:56 05/30/2023 
// Design Name: 
// Module Name:    display 
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
module display(
   // Outputs
   RsTx,
   // Inputs
   RsRx, clk, rst
    );
  
  wire [26:0] clk_dv_inc;
  reg [25:0]  clk_dv;
  assign clk_dv_inc = clk_dv + 1;
  always @ (posedge clk) begin
    if(clk_dv_inc[26]) begin
      // TODO TODO Flip between cursor shown and cursor not shown (@)
    end
  end
  
  assign tx_valid = (bS | bU | bL | bD | bR) & ~uart_tx_busy;
  assign tx_data[seq_dp_width-1:0] = "rnbqkbnr\n\rpppppppp\n\r........\n\r........\n\r........\n\r........\n\rPPPPPPPP\n\rRNBQKBNR";

  uart_top uart_top_ (// Outputs
                       .o_tx            (RsTx),
                       .o_tx_busy       (uart_tx_busy),
                       .o_rx_data       (uart_rx_data[7:0]),
                       .o_rx_valid      (uart_rx_valid),
                       // Inputs
                       .i_rx            (RsRx),
                       .i_tx_data       (tx_data[seq_dp_width-1:0]),
                       .i_tx_stb        (tx_valid),
                       /*AUTOINST*/
                       // Inputs
                       .clk             (clk),
                       .rst             (rst));

endmodule
