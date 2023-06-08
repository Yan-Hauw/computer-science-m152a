parameter seq_in_width = 8; // instruction size
parameter seq_op_width = 2; // opcode size
parameter seq_rn_width = 2; // reg. num. size
parameter seq_num_regs = 4;
parameter seq_im_width = 4; // immediate (constant) size

parameter seq_op_push = 2'b00;
parameter seq_op_add  = 2'b01;
parameter seq_op_mult = 2'b10;
parameter seq_op_send = 2'b11;

parameter uart_num_nib = 85; // number of nibbles to send
parameter seq_dp_width = uart_num_nib * 8;
//parameter seq_rf_width = seq_dp_width; // size of each register
//parameter alu_width    = seq_dp_width;
//parameter uart_num_nib = seq_dp_width/4; // number of nibbles to send
