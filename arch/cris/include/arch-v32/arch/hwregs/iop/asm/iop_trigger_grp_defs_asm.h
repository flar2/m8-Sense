#ifndef __iop_trigger_grp_defs_asm_h
#define __iop_trigger_grp_defs_asm_h


#ifndef REG_FIELD
#define REG_FIELD( scope, reg, field, value ) \
  REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#endif

#ifndef REG_STATE
#define REG_STATE( scope, reg, field, symbolic_value ) \
  REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#endif

#ifndef REG_MASK
#define REG_MASK( scope, reg, field ) \
  REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#endif

#ifndef REG_LSB
#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#endif

#ifndef REG_BIT
#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
         REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
			 STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
                          ((inst) + offs + (index) * stride)
#endif

#define STRIDE_iop_trigger_grp_rw_cfg 4
#define reg_iop_trigger_grp_rw_cfg___action___lsb 0
#define reg_iop_trigger_grp_rw_cfg___action___width 2
#define reg_iop_trigger_grp_rw_cfg___once___lsb 2
#define reg_iop_trigger_grp_rw_cfg___once___width 1
#define reg_iop_trigger_grp_rw_cfg___once___bit 2
#define reg_iop_trigger_grp_rw_cfg___trig___lsb 3
#define reg_iop_trigger_grp_rw_cfg___trig___width 3
#define reg_iop_trigger_grp_rw_cfg___en_only_by_reg___lsb 6
#define reg_iop_trigger_grp_rw_cfg___en_only_by_reg___width 1
#define reg_iop_trigger_grp_rw_cfg___en_only_by_reg___bit 6
#define reg_iop_trigger_grp_rw_cfg___dis_only_by_reg___lsb 7
#define reg_iop_trigger_grp_rw_cfg___dis_only_by_reg___width 1
#define reg_iop_trigger_grp_rw_cfg___dis_only_by_reg___bit 7
#define reg_iop_trigger_grp_rw_cfg_offset 0

#define reg_iop_trigger_grp_rw_cmd___dis___lsb 0
#define reg_iop_trigger_grp_rw_cmd___dis___width 4
#define reg_iop_trigger_grp_rw_cmd___en___lsb 4
#define reg_iop_trigger_grp_rw_cmd___en___width 4
#define reg_iop_trigger_grp_rw_cmd_offset 16

#define reg_iop_trigger_grp_rw_intr_mask___trig0___lsb 0
#define reg_iop_trigger_grp_rw_intr_mask___trig0___width 1
#define reg_iop_trigger_grp_rw_intr_mask___trig0___bit 0
#define reg_iop_trigger_grp_rw_intr_mask___trig1___lsb 1
#define reg_iop_trigger_grp_rw_intr_mask___trig1___width 1
#define reg_iop_trigger_grp_rw_intr_mask___trig1___bit 1
#define reg_iop_trigger_grp_rw_intr_mask___trig2___lsb 2
#define reg_iop_trigger_grp_rw_intr_mask___trig2___width 1
#define reg_iop_trigger_grp_rw_intr_mask___trig2___bit 2
#define reg_iop_trigger_grp_rw_intr_mask___trig3___lsb 3
#define reg_iop_trigger_grp_rw_intr_mask___trig3___width 1
#define reg_iop_trigger_grp_rw_intr_mask___trig3___bit 3
#define reg_iop_trigger_grp_rw_intr_mask_offset 20

#define reg_iop_trigger_grp_rw_ack_intr___trig0___lsb 0
#define reg_iop_trigger_grp_rw_ack_intr___trig0___width 1
#define reg_iop_trigger_grp_rw_ack_intr___trig0___bit 0
#define reg_iop_trigger_grp_rw_ack_intr___trig1___lsb 1
#define reg_iop_trigger_grp_rw_ack_intr___trig1___width 1
#define reg_iop_trigger_grp_rw_ack_intr___trig1___bit 1
#define reg_iop_trigger_grp_rw_ack_intr___trig2___lsb 2
#define reg_iop_trigger_grp_rw_ack_intr___trig2___width 1
#define reg_iop_trigger_grp_rw_ack_intr___trig2___bit 2
#define reg_iop_trigger_grp_rw_ack_intr___trig3___lsb 3
#define reg_iop_trigger_grp_rw_ack_intr___trig3___width 1
#define reg_iop_trigger_grp_rw_ack_intr___trig3___bit 3
#define reg_iop_trigger_grp_rw_ack_intr_offset 24

#define reg_iop_trigger_grp_r_intr___trig0___lsb 0
#define reg_iop_trigger_grp_r_intr___trig0___width 1
#define reg_iop_trigger_grp_r_intr___trig0___bit 0
#define reg_iop_trigger_grp_r_intr___trig1___lsb 1
#define reg_iop_trigger_grp_r_intr___trig1___width 1
#define reg_iop_trigger_grp_r_intr___trig1___bit 1
#define reg_iop_trigger_grp_r_intr___trig2___lsb 2
#define reg_iop_trigger_grp_r_intr___trig2___width 1
#define reg_iop_trigger_grp_r_intr___trig2___bit 2
#define reg_iop_trigger_grp_r_intr___trig3___lsb 3
#define reg_iop_trigger_grp_r_intr___trig3___width 1
#define reg_iop_trigger_grp_r_intr___trig3___bit 3
#define reg_iop_trigger_grp_r_intr_offset 28

#define reg_iop_trigger_grp_r_masked_intr___trig0___lsb 0
#define reg_iop_trigger_grp_r_masked_intr___trig0___width 1
#define reg_iop_trigger_grp_r_masked_intr___trig0___bit 0
#define reg_iop_trigger_grp_r_masked_intr___trig1___lsb 1
#define reg_iop_trigger_grp_r_masked_intr___trig1___width 1
#define reg_iop_trigger_grp_r_masked_intr___trig1___bit 1
#define reg_iop_trigger_grp_r_masked_intr___trig2___lsb 2
#define reg_iop_trigger_grp_r_masked_intr___trig2___width 1
#define reg_iop_trigger_grp_r_masked_intr___trig2___bit 2
#define reg_iop_trigger_grp_r_masked_intr___trig3___lsb 3
#define reg_iop_trigger_grp_r_masked_intr___trig3___width 1
#define reg_iop_trigger_grp_r_masked_intr___trig3___bit 3
#define reg_iop_trigger_grp_r_masked_intr_offset 32


#define regk_iop_trigger_grp_fall                 0x00000002
#define regk_iop_trigger_grp_fall_lo              0x00000006
#define regk_iop_trigger_grp_no                   0x00000000
#define regk_iop_trigger_grp_off                  0x00000000
#define regk_iop_trigger_grp_pulse                0x00000000
#define regk_iop_trigger_grp_rise                 0x00000001
#define regk_iop_trigger_grp_rise_fall            0x00000003
#define regk_iop_trigger_grp_rise_fall_hi         0x00000007
#define regk_iop_trigger_grp_rise_fall_lo         0x00000004
#define regk_iop_trigger_grp_rise_hi              0x00000005
#define regk_iop_trigger_grp_rw_cfg_default       0x000000c0
#define regk_iop_trigger_grp_rw_cfg_size          0x00000004
#define regk_iop_trigger_grp_rw_intr_mask_default  0x00000000
#define regk_iop_trigger_grp_toggle               0x00000003
#define regk_iop_trigger_grp_yes                  0x00000001
#endif 
