#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187CE0
// Address: 0x187ce0 - 0x187e20
void sub_00187CE0_0x187ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187CE0_0x187ce0");
#endif

    ctx->pc = 0x187ce0u;

    // 0x187ce0: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x187ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x187ce4: 0x248504a6  addiu       $a1, $a0, 0x4A6
    ctx->pc = 0x187ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1190));
    // 0x187ce8: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x187ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x187cec: 0x24e7db50  addiu       $a3, $a3, -0x24B0
    ctx->pc = 0x187cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957904));
    // 0x187cf0: 0x30c3000c  andi        $v1, $a2, 0xC
    ctx->pc = 0x187cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x187cf4: 0x908404f0  lbu         $a0, 0x4F0($a0)
    ctx->pc = 0x187cf4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x187cf8: 0x30c60030  andi        $a2, $a2, 0x30
    ctx->pc = 0x187cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x187cfc: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x187cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x187d00: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x187d00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x187d04: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x187d04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x187d08: 0x30860080  andi        $a2, $a0, 0x80
    ctx->pc = 0x187d08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x187d0c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187d10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x187d14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x187d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x187d18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x187d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x187d1c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x187d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x187d20: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x187d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x187d24: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x187d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x187d28: 0x14c0003a  bnez        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x187D28u;
    {
        const bool branch_taken_0x187d28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D28u;
            // 0x187d2c: 0x2484014c  addiu       $a0, $a0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d28) {
            ctx->pc = 0x187E14u;
            goto label_187e14;
        }
    }
    ctx->pc = 0x187D30u;
    // 0x187d30: 0x3c0601d5  lui         $a2, 0x1D5
    ctx->pc = 0x187d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)469 << 16));
    // 0x187d34: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x187d34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x187d38: 0x8cc8d918  lw          $t0, -0x26E8($a2)
    ctx->pc = 0x187d38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294957336)));
    // 0x187d3c: 0x34e60100  ori         $a2, $a3, 0x100
    ctx->pc = 0x187d3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)256);
    // 0x187d40: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x187d40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x187d44: 0x14c00033  bnez        $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x187D44u;
    {
        const bool branch_taken_0x187d44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x187d44) {
            ctx->pc = 0x187E14u;
            goto label_187e14;
        }
    }
    ctx->pc = 0x187D4Cu;
    // 0x187d4c: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x187d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x187d50: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187d54: 0x90c69780  lbu         $a2, -0x6880($a2)
    ctx->pc = 0x187d54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294940544)));
    // 0x187d58: 0x54c70017  bnel        $a2, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x187D58u;
    {
        const bool branch_taken_0x187d58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x187d58) {
            ctx->pc = 0x187D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187D58u;
            // 0x187d5c: 0x8483000e  lh          $v1, 0xE($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187DB8u;
            goto label_187db8;
        }
    }
    ctx->pc = 0x187D60u;
    // 0x187d60: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x187d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x187d64: 0x90c69748  lbu         $a2, -0x68B8($a2)
    ctx->pc = 0x187d64u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294940488)));
    // 0x187d68: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x187D68u;
    {
        const bool branch_taken_0x187d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x187d68) {
            ctx->pc = 0x187DB4u;
            goto label_187db4;
        }
    }
    ctx->pc = 0x187D70u;
    // 0x187d70: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x187d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x187d74: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x187d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187d78: 0x9063b244  lbu         $v1, -0x4DBC($v1)
    ctx->pc = 0x187d78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947396)));
    // 0x187d7c: 0x1466000d  bne         $v1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x187D7Cu;
    {
        const bool branch_taken_0x187d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x187d7c) {
            ctx->pc = 0x187DB4u;
            goto label_187db4;
        }
    }
    ctx->pc = 0x187D84u;
    // 0x187d84: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x187d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x187d88: 0x9063b240  lbu         $v1, -0x4DC0($v1)
    ctx->pc = 0x187d88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x187d8c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x187D8Cu;
    {
        const bool branch_taken_0x187d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187d8c) {
            ctx->pc = 0x187DB4u;
            goto label_187db4;
        }
    }
    ctx->pc = 0x187D94u;
    // 0x187d94: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x187d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x187d98: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x187d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x187d9c: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x187d9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x187da0: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x187DA0u;
    {
        const bool branch_taken_0x187da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x187da0) {
            ctx->pc = 0x187DB4u;
            goto label_187db4;
        }
    }
    ctx->pc = 0x187DA8u;
    // 0x187da8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x187da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187dac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x187DACu;
    {
        const bool branch_taken_0x187dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187DACu;
            // 0x187db0: 0xa483000e  sh          $v1, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187dac) {
            ctx->pc = 0x187E14u;
            goto label_187e14;
        }
    }
    ctx->pc = 0x187DB4u;
label_187db4:
    // 0x187db4: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x187db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_187db8:
    // 0x187db8: 0x28610070  slti        $at, $v1, 0x70
    ctx->pc = 0x187db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x187dbc: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x187DBCu;
    {
        const bool branch_taken_0x187dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187dbc) {
            ctx->pc = 0x187E14u;
            goto label_187e14;
        }
    }
    ctx->pc = 0x187DC4u;
    // 0x187dc4: 0x84a30020  lh          $v1, 0x20($a1)
    ctx->pc = 0x187dc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x187dc8: 0x84a60024  lh          $a2, 0x24($a1)
    ctx->pc = 0x187dc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x187dcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x187dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x187dd0: 0xa4a30020  sh          $v1, 0x20($a1)
    ctx->pc = 0x187dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x187dd4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187dd8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187dd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187ddc: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x187DDCu;
    {
        const bool branch_taken_0x187ddc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x187ddc) {
            ctx->pc = 0x187E14u;
            goto label_187e14;
        }
    }
    ctx->pc = 0x187DE4u;
    // 0x187de4: 0x84a30022  lh          $v1, 0x22($a1)
    ctx->pc = 0x187de4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x187de8: 0xa4a30020  sh          $v1, 0x20($a1)
    ctx->pc = 0x187de8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x187dec: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x187decu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x187df0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x187df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x187df4: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x187df4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x187df8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187dfc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187dfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187e00: 0x28610071  slti        $at, $v1, 0x71
    ctx->pc = 0x187e00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)113) ? 1 : 0);
    // 0x187e04: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x187E04u;
    {
        const bool branch_taken_0x187e04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x187e04) {
            ctx->pc = 0x187E14u;
            goto label_187e14;
        }
    }
    ctx->pc = 0x187E0Cu;
    // 0x187e0c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x187e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187e10: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x187e10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
label_187e14:
    // 0x187e14: 0x3e00008  jr          $ra
    ctx->pc = 0x187E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187E1Cu;
    // 0x187e1c: 0x0  nop
    ctx->pc = 0x187e1cu;
    // NOP
    ctx->pc = 0x187e20u;
}
