#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012EE10
// Address: 0x12ee10 - 0x12eef0
void sub_0012EE10_0x12ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EE10_0x12ee10");
#endif

    switch (ctx->pc) {
        case 0x12ee4cu: goto label_12ee4c;
        case 0x12ee60u: goto label_12ee60;
        default: break;
    }

    ctx->pc = 0x12ee10u;

    // 0x12ee10: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12ee14: 0x8c421d18  lw          $v0, 0x1D18($v0)
    ctx->pc = 0x12ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7448)));
    // 0x12ee18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12ee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12ee1c: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x12EE1Cu;
    {
        const bool branch_taken_0x12ee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ee1c) {
            ctx->pc = 0x12EE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE1Cu;
            // 0x12ee20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EEDCu;
            goto label_12eedc;
        }
    }
    ctx->pc = 0x12EE24u;
    // 0x12ee24: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12ee28: 0x8c4251f0  lw          $v0, 0x51F0($v0)
    ctx->pc = 0x12ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20976)));
    // 0x12ee2c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x12ee2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12ee30: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12EE30u;
    {
        const bool branch_taken_0x12ee30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ee30) {
            ctx->pc = 0x12EEC4u;
            goto label_12eec4;
        }
    }
    ctx->pc = 0x12EE38u;
    // 0x12ee38: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x12ee38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x12ee3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12ee3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12ee40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee44: 0x24e71df0  addiu       $a3, $a3, 0x1DF0
    ctx->pc = 0x12ee44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7664));
    // 0x12ee48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12ee4c:
    // 0x12ee4c: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x12ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x12ee50: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x12ee50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee54: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x12ee54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x12ee58: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x12ee58u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x12ee5c: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x12ee5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_12ee60:
    // 0x12ee60: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x12ee60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12ee64: 0x254a0007  addiu       $t2, $t2, 0x7
    ctx->pc = 0x12ee64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
    // 0x12ee68: 0x29420010  slti        $v0, $t2, 0x10
    ctx->pc = 0x12ee68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12ee6c: 0xa503fffe  sh          $v1, -0x2($t0)
    ctx->pc = 0x12ee6cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ee70: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x12ee70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x12ee74: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x12ee74u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ee78: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x12ee78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x12ee7c: 0xa5030002  sh          $v1, 0x2($t0)
    ctx->pc = 0x12ee7cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ee80: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x12ee80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x12ee84: 0xa5030004  sh          $v1, 0x4($t0)
    ctx->pc = 0x12ee84u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ee88: 0x95030008  lhu         $v1, 0x8($t0)
    ctx->pc = 0x12ee88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x12ee8c: 0xa5030006  sh          $v1, 0x6($t0)
    ctx->pc = 0x12ee8cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ee90: 0x9503000a  lhu         $v1, 0xA($t0)
    ctx->pc = 0x12ee90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x12ee94: 0xa5030008  sh          $v1, 0x8($t0)
    ctx->pc = 0x12ee94u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ee98: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x12ee98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x12ee9c: 0xa503000a  sh          $v1, 0xA($t0)
    ctx->pc = 0x12ee9cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x12eea0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x12EEA0u;
    {
        const bool branch_taken_0x12eea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEA0u;
            // 0x12eea4: 0x2508000e  addiu       $t0, $t0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eea0) {
            ctx->pc = 0x12EE60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee60;
        }
    }
    ctx->pc = 0x12EEA8u;
    // 0x12eea8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x12eea8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x12eeac: 0xa4c5001e  sh          $a1, 0x1E($a2)
    ctx->pc = 0x12eeacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 5));
    // 0x12eeb0: 0x29620010  slti        $v0, $t3, 0x10
    ctx->pc = 0x12eeb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12eeb4: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x12EEB4u;
    {
        const bool branch_taken_0x12eeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEB4u;
            // 0x12eeb8: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eeb4) {
            ctx->pc = 0x12EE4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ee4c;
        }
    }
    ctx->pc = 0x12EEBCu;
    // 0x12eebc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12eec0: 0xac4051f0  sw          $zero, 0x51F0($v0)
    ctx->pc = 0x12eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20976), GPR_U32(ctx, 0));
label_12eec4:
    // 0x12eec4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12eec8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12eecc: 0x8c6351f0  lw          $v1, 0x51F0($v1)
    ctx->pc = 0x12eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20976)));
    // 0x12eed0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12eed4: 0xac4351f0  sw          $v1, 0x51F0($v0)
    ctx->pc = 0x12eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20976), GPR_U32(ctx, 3));
    // 0x12eed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12eed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12eedc:
    // 0x12eedc: 0x3e00008  jr          $ra
    ctx->pc = 0x12EEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EEE4u;
    // 0x12eee4: 0x0  nop
    ctx->pc = 0x12eee4u;
    // NOP
    // 0x12eee8: 0x0  nop
    ctx->pc = 0x12eee8u;
    // NOP
    // 0x12eeec: 0x0  nop
    ctx->pc = 0x12eeecu;
    // NOP
    ctx->pc = 0x12eef0u;
}
