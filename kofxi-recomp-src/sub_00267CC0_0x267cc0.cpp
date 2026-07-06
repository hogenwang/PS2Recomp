#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267CC0
// Address: 0x267cc0 - 0x267db0
void sub_00267CC0_0x267cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267CC0_0x267cc0");
#endif

    switch (ctx->pc) {
        case 0x267cecu: goto label_267cec;
        case 0x267d0cu: goto label_267d0c;
        case 0x267d1cu: goto label_267d1c;
        case 0x267d34u: goto label_267d34;
        case 0x267d84u: goto label_267d84;
        case 0x267d90u: goto label_267d90;
        default: break;
    }

    ctx->pc = 0x267cc0u;

    // 0x267cc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x267cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x267cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cc8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x267cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x267ccc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x267cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x267cd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x267cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cd8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x267cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x267cdc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x267cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x267ce0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x267ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267ce4: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x267CE4u;
    SET_GPR_U32(ctx, 31, 0x267CECu);
    ctx->pc = 0x267CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267CE4u;
    // 0x267ce8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x267CE4u, 0x267CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267CECu;
label_267cec:
    // 0x267cec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x267cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cf0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267CF0u;
    {
        const bool branch_taken_0x267cf0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x267CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CF0u;
        // 0x267cf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cf0) {
            ctx->pc = 0x267D00u;
            goto label_267d00;
        }
    }
    ctx->pc = 0x267CF8u;
    // 0x267cf8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x267CF8u;
    {
        const bool branch_taken_0x267cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CF8u;
        // 0x267cfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cf8) {
            ctx->pc = 0x267D94u;
            goto label_267d94;
        }
    }
    ctx->pc = 0x267D00u;
label_267d00:
    // 0x267d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d04: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267D04u;
    SET_GPR_U32(ctx, 31, 0x267D0Cu);
    ctx->pc = 0x267D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D04u;
    // 0x267d08: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x267D04u, 0x267D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D0Cu;
label_267d0c:
    // 0x267d0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d14: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267D14u;
    SET_GPR_U32(ctx, 31, 0x267D1Cu);
    ctx->pc = 0x267D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D14u;
    // 0x267d18: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x267D14u, 0x267D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D1Cu;
label_267d1c:
    // 0x267d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d20: 0x3405c020  ori         $a1, $zero, 0xC020
    ctx->pc = 0x267d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x267d24: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267d28: 0x34a56911  ori         $a1, $a1, 0x6911
    ctx->pc = 0x267d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26897);
    // 0x267d2c: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267D2Cu;
    SET_GPR_U32(ctx, 31, 0x267D34u);
    ctx->pc = 0x267D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D2Cu;
    // 0x267d30: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x267D2Cu, 0x267D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D34u;
label_267d34:
    // 0x267d34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d38: 0x6000013  bltz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x267D38u;
    {
        const bool branch_taken_0x267d38 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x267d38) {
            ctx->pc = 0x267D88u;
            goto label_267d88;
        }
    }
    ctx->pc = 0x267D40u;
    // 0x267d40: 0x1a400004  blez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x267D40u;
    {
        const bool branch_taken_0x267d40 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x267D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D40u;
        // 0x267d44: 0x97a30010  lhu         $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d40) {
            ctx->pc = 0x267D54u;
            goto label_267d54;
        }
    }
    ctx->pc = 0x267D48u;
    // 0x267d48: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x267d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x267d4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267D4Cu;
    {
        const bool branch_taken_0x267d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D4Cu;
        // 0x267d50: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d4c) {
            ctx->pc = 0x267D68u;
            goto label_267d68;
        }
    }
    ctx->pc = 0x267D54u;
label_267d54:
    // 0x267d54: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x267D54u;
    {
        const bool branch_taken_0x267d54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x267D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D54u;
        // 0x267d58: 0x97a30010  lhu         $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d54) {
            ctx->pc = 0x267D88u;
            goto label_267d88;
        }
    }
    ctx->pc = 0x267D5Cu;
    // 0x267d5c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x267d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x267d60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x267D60u;
    {
        const bool branch_taken_0x267d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D60u;
        // 0x267d64: 0x3062fffe  andi        $v0, $v1, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d60) {
            ctx->pc = 0x267D88u;
            goto label_267d88;
        }
    }
    ctx->pc = 0x267D68u;
label_267d68:
    // 0x267d68: 0xa7a20010  sh          $v0, 0x10($sp)
    ctx->pc = 0x267d68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x267d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d70: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x267d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x267d74: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267d78: 0x34a56910  ori         $a1, $a1, 0x6910
    ctx->pc = 0x267d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26896);
    // 0x267d7c: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267D7Cu;
    SET_GPR_U32(ctx, 31, 0x267D84u);
    ctx->pc = 0x267D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D7Cu;
    // 0x267d80: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x267D7Cu, 0x267D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D84u;
label_267d84:
    // 0x267d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267d88:
    // 0x267d88: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x267D88u;
    SET_GPR_U32(ctx, 31, 0x267D90u);
    ctx->pc = 0x267D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D88u;
    // 0x267d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x267D88u, 0x267D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D90u;
label_267d90:
    // 0x267d90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x267d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267d94:
    // 0x267d94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x267d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267d98: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x267d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267d9c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x267d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267da0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x267da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267da4: 0x3e00008  jr          $ra
    ctx->pc = 0x267DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DA4u;
        // 0x267da8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267DACu;
    // 0x267dac: 0x0  nop
    ctx->pc = 0x267dacu;
    // NOP
    if (ctx->pc == 0x267dacu) { ctx->pc = 0x267db0u; }
}
