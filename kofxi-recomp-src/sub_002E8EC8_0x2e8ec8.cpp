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

// Function: sub_002E8EC8
// Address: 0x2e8ec8 - 0x2e9208
void sub_002E8EC8_0x2e8ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8EC8_0x2e8ec8");
#endif

    switch (ctx->pc) {
        case 0x2e8ee4u: goto label_2e8ee4;
        case 0x2e8ee8u: goto label_2e8ee8;
        case 0x2e8eecu: goto label_2e8eec;
        case 0x2e8ef4u: goto label_2e8ef4;
        case 0x2e8efcu: goto label_2e8efc;
        case 0x2e8f04u: goto label_2e8f04;
        case 0x2e8f0cu: goto label_2e8f0c;
        case 0x2e8f14u: goto label_2e8f14;
        case 0x2e8f1cu: goto label_2e8f1c;
        case 0x2e8f24u: goto label_2e8f24;
        case 0x2e8f54u: goto label_2e8f54;
        case 0x2e8f78u: goto label_2e8f78;
        case 0x2e8ff8u: goto label_2e8ff8;
        case 0x2e9088u: goto label_2e9088;
        case 0x2e90b0u: goto label_2e90b0;
        case 0x2e90b8u: goto label_2e90b8;
        case 0x2e90ccu: goto label_2e90cc;
        case 0x2e90ecu: goto label_2e90ec;
        case 0x2e9108u: goto label_2e9108;
        case 0x2e9118u: goto label_2e9118;
        case 0x2e9134u: goto label_2e9134;
        case 0x2e9174u: goto label_2e9174;
        case 0x2e91acu: goto label_2e91ac;
        case 0x2e91bcu: goto label_2e91bc;
        case 0x2e91ccu: goto label_2e91cc;
        case 0x2e91dcu: goto label_2e91dc;
        default: break;
    }

    ctx->pc = 0x2e8ec8u;

    // 0x2e8ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ed4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e8ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e8ed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e8edc: 0xc08ce60  jal         func_233980
    ctx->pc = 0x2E8EDCu;
    SET_GPR_U32(ctx, 31, 0x2E8EE4u);
    ctx->pc = 0x2E8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EDCu;
    // 0x2e8ee0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233980u, 0x2E8EDCu, 0x2E8EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EE4u;
label_2e8ee4:
    // 0x2e8ee4: 0xc08e73e  jal         func_239CF8
label_2e8ee8:
    if (ctx->pc == 0x2E8EE8u) {
        ctx->pc = 0x2E8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EE4u;
        // 0x2e8ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EECu;
        goto label_2e8eec;
    }
    ctx->pc = 0x2E8EE4u;
    SET_GPR_U32(ctx, 31, 0x2E8EECu);
    ctx->pc = 0x2E8EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EE4u;
    // 0x2e8ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CF8u, 0x2E8EE4u, 0x2E8EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EECu;
label_2e8eec:
    // 0x2e8eec: 0xc08d208  jal         func_234820
    ctx->pc = 0x2E8EECu;
    SET_GPR_U32(ctx, 31, 0x2E8EF4u);
    ctx->pc = 0x2E8EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EECu;
    // 0x2e8ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234820u, 0x2E8EECu, 0x2E8EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EF4u;
label_2e8ef4:
    // 0x2e8ef4: 0xc098a8c  jal         func_262A30
    ctx->pc = 0x2E8EF4u;
    SET_GPR_U32(ctx, 31, 0x2E8EFCu);
    ctx->pc = 0x2E8EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EF4u;
    // 0x2e8ef8: 0x8e2400a4  lw          $a0, 0xA4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A30u, 0x2E8EF4u, 0x2E8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EFCu;
label_2e8efc:
    // 0x2e8efc: 0xc098a8c  jal         func_262A30
    ctx->pc = 0x2E8EFCu;
    SET_GPR_U32(ctx, 31, 0x2E8F04u);
    ctx->pc = 0x2E8F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EFCu;
    // 0x2e8f00: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A30u, 0x2E8EFCu, 0x2E8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F04u;
label_2e8f04:
    // 0x2e8f04: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2E8F04u;
    SET_GPR_U32(ctx, 31, 0x2E8F0Cu);
    ctx->pc = 0x2E8F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F04u;
    // 0x2e8f08: 0x8e047d48  lw          $a0, 0x7D48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2E8F04u, 0x2E8F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F0Cu;
label_2e8f0c:
    // 0x2e8f0c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2E8F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E8F14u);
    ctx->pc = 0x2E8F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F0Cu;
    // 0x2e8f10: 0x8e047d4c  lw          $a0, 0x7D4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2E8F0Cu, 0x2E8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F14u;
label_2e8f14:
    // 0x2e8f14: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2E8F14u;
    SET_GPR_U32(ctx, 31, 0x2E8F1Cu);
    ctx->pc = 0x2E8F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F14u;
    // 0x2e8f18: 0x8e047d50  lw          $a0, 0x7D50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2E8F14u, 0x2E8F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F1Cu;
label_2e8f1c:
    // 0x2e8f1c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2E8F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E8F24u);
    ctx->pc = 0x2E8F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F1Cu;
    // 0x2e8f20: 0x8e047d58  lw          $a0, 0x7D58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2E8F1Cu, 0x2E8F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F24u;
label_2e8f24:
    // 0x2e8f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F34u;
        // 0x2e8f38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8F3Cu;
    // 0x2e8f3c: 0x0  nop
    ctx->pc = 0x2e8f3cu;
    // NOP
    // 0x2e8f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e8f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e8f44: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2e8f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2e8f48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e8f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e8f4c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e8f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e8f50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e8f50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8f54:
    // 0x2e8f54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e8f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e8f58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e8f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8f60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e8f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e8f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e8f68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e8f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e8f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e8f70: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2E8F70u;
    SET_GPR_U32(ctx, 31, 0x2E8F78u);
    ctx->pc = 0x2E8F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F70u;
    // 0x2e8f74: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2E8F70u, 0x2E8F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F78u;
label_2e8f78:
    // 0x2e8f78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e8f78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f7c: 0x3402c014  ori         $v0, $zero, 0xC014
    ctx->pc = 0x2e8f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
    // 0x2e8f80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8f84: 0x344269c9  ori         $v0, $v0, 0x69C9
    ctx->pc = 0x2e8f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27081);
    // 0x2e8f88: 0x1202006f  beq         $s0, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2E8F88u;
    {
        const bool branch_taken_0x2e8f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F88u;
        // 0x2e8f8c: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f88) {
            ctx->pc = 0x2E9148u;
            goto label_2e9148;
        }
    }
    ctx->pc = 0x2E8F90u;
    // 0x2e8f90: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E8F90u;
    {
        const bool branch_taken_0x2e8f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f90) {
            ctx->pc = 0x2E9014u;
            goto label_2e9014;
        }
    }
    ctx->pc = 0x2E8F98u;
    // 0x2e8f98: 0x34028030  ori         $v0, $zero, 0x8030
    ctx->pc = 0x2e8f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x2e8f9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8fa0: 0x344269ce  ori         $v0, $v0, 0x69CE
    ctx->pc = 0x2e8fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27086);
    // 0x2e8fa4: 0x1202006f  beq         $s0, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2E8FA4u;
    {
        const bool branch_taken_0x2e8fa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FA4u;
        // 0x2e8fa8: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fa4) {
            ctx->pc = 0x2E9164u;
            goto label_2e9164;
        }
    }
    ctx->pc = 0x2E8FACu;
    // 0x2e8fac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E8FACu;
    {
        const bool branch_taken_0x2e8fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8fac) {
            ctx->pc = 0x2E8FE4u;
            goto label_2e8fe4;
        }
    }
    ctx->pc = 0x2E8FB4u;
    // 0x2e8fb4: 0x34028014  ori         $v0, $zero, 0x8014
    ctx->pc = 0x2e8fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x2e8fb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8fbc: 0x344269ca  ori         $v0, $v0, 0x69CA
    ctx->pc = 0x2e8fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27082);
    // 0x2e8fc0: 0x5202005f  beql        $s0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2E8FC0u;
    {
        const bool branch_taken_0x2e8fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8fc0) {
            ctx->pc = 0x2E8FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8FC0u;
            // 0x2e8fc4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9140u;
            goto label_2e9140;
        }
    }
    ctx->pc = 0x2E8FC8u;
    // 0x2e8fc8: 0x34028014  ori         $v0, $zero, 0x8014
    ctx->pc = 0x2e8fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x2e8fcc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8fd0: 0x344269cc  ori         $v0, $v0, 0x69CC
    ctx->pc = 0x2e8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27084);
    // 0x2e8fd4: 0x5202005f  beql        $s0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2E8FD4u;
    {
        const bool branch_taken_0x2e8fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8fd4) {
            ctx->pc = 0x2E8FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8FD4u;
            // 0x2e8fd8: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9154u;
            goto label_2e9154;
        }
    }
    ctx->pc = 0x2E8FDCu;
    // 0x2e8fdc: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2E8FDCu;
    {
        const bool branch_taken_0x2e8fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8fdc) {
            ctx->pc = 0x2E91B4u;
            goto label_2e91b4;
        }
    }
    ctx->pc = 0x2E8FE4u;
label_2e8fe4:
    // 0x2e8fe4: 0x34028084  ori         $v0, $zero, 0x8084
    ctx->pc = 0x2e8fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32900);
    // 0x2e8fe8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8fec: 0x344269d4  ori         $v0, $v0, 0x69D4
    ctx->pc = 0x2e8fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27092);
    // 0x2e8ff0: 0x52020041  beql        $s0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E8FF0u;
    {
        const bool branch_taken_0x2e8ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8ff0) {
            ctx->pc = 0x2E8FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8FF0u;
            // 0x2e8ff4: 0xae205c60  sw          $zero, 0x5C60($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 23648), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E90F8u;
            goto label_2e90f8;
        }
    }
    ctx->pc = 0x2E8FF8u;
label_2e8ff8:
    // 0x2e8ff8: 0x34028e24  ori         $v0, $zero, 0x8E24
    ctx->pc = 0x2e8ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36388);
    // 0x2e8ffc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9000: 0x344269d1  ori         $v0, $v0, 0x69D1
    ctx->pc = 0x2e9000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27089);
    // 0x2e9004: 0x52020022  beql        $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E9004u;
    {
        const bool branch_taken_0x2e9004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9004) {
            ctx->pc = 0x2E9008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9004u;
            // 0x2e9008: 0x92420c10  lbu         $v0, 0xC10($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9090u;
            goto label_2e9090;
        }
    }
    ctx->pc = 0x2E900Cu;
    // 0x2e900c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2E900Cu;
    {
        const bool branch_taken_0x2e900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e900c) {
            ctx->pc = 0x2E91B4u;
            goto label_2e91b4;
        }
    }
    ctx->pc = 0x2E9014u;
label_2e9014:
    // 0x2e9014: 0x3402c084  ori         $v0, $zero, 0xC084
    ctx->pc = 0x2e9014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49284);
    // 0x2e9018: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e901c: 0x344269d3  ori         $v0, $v0, 0x69D3
    ctx->pc = 0x2e901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27091);
    // 0x2e9020: 0x1202002c  beq         $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E9020u;
    {
        const bool branch_taken_0x2e9020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9020u;
        // 0x2e9024: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9020) {
            ctx->pc = 0x2E90D4u;
            goto label_2e90d4;
        }
    }
    ctx->pc = 0x2E9028u;
    // 0x2e9028: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E9028u;
    {
        const bool branch_taken_0x2e9028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9028) {
            ctx->pc = 0x2E9060u;
            goto label_2e9060;
        }
    }
    ctx->pc = 0x2E9030u;
    // 0x2e9030: 0x3402c014  ori         $v0, $zero, 0xC014
    ctx->pc = 0x2e9030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
    // 0x2e9034: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9038: 0x344269cb  ori         $v0, $v0, 0x69CB
    ctx->pc = 0x2e9038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27083);
    // 0x2e903c: 0x52020047  beql        $s0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2E903Cu;
    {
        const bool branch_taken_0x2e903c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e903c) {
            ctx->pc = 0x2E9040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E903Cu;
            // 0x2e9040: 0x8e227f7c  lw          $v0, 0x7F7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E915Cu;
            goto label_2e915c;
        }
    }
    ctx->pc = 0x2E9044u;
    // 0x2e9044: 0x3402c030  ori         $v0, $zero, 0xC030
    ctx->pc = 0x2e9044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49200);
    // 0x2e9048: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e904c: 0x344269cd  ori         $v0, $v0, 0x69CD
    ctx->pc = 0x2e904cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27085);
    // 0x2e9050: 0x12020053  beq         $s0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2E9050u;
    {
        const bool branch_taken_0x2e9050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9050u;
        // 0x2e9054: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9050) {
            ctx->pc = 0x2E91A0u;
            goto label_2e91a0;
        }
    }
    ctx->pc = 0x2E9058u;
    // 0x2e9058: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2E9058u;
    {
        const bool branch_taken_0x2e9058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9058) {
            ctx->pc = 0x2E91B4u;
            goto label_2e91b4;
        }
    }
    ctx->pc = 0x2E9060u;
label_2e9060:
    // 0x2e9060: 0x3402c084  ori         $v0, $zero, 0xC084
    ctx->pc = 0x2e9060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49284);
    // 0x2e9064: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9068: 0x344269d5  ori         $v0, $v0, 0x69D5
    ctx->pc = 0x2e9068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27093);
    // 0x2e906c: 0x5202002c  beql        $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E906Cu;
    {
        const bool branch_taken_0x2e906c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e906c) {
            ctx->pc = 0x2E9070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E906Cu;
            // 0x2e9070: 0x8e225c60  lw          $v0, 0x5C60($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9120u;
            goto label_2e9120;
        }
    }
    ctx->pc = 0x2E9074u;
    // 0x2e9074: 0x3402ce24  ori         $v0, $zero, 0xCE24
    ctx->pc = 0x2e9074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52772);
    // 0x2e9078: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e907c: 0x344269d2  ori         $v0, $v0, 0x69D2
    ctx->pc = 0x2e907cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27090);
    // 0x2e9080: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E9080u;
    {
        const bool branch_taken_0x2e9080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9080u;
        // 0x2e9084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9080) {
            ctx->pc = 0x2E90C0u;
            goto label_2e90c0;
        }
    }
    ctx->pc = 0x2E9088u;
label_2e9088:
    // 0x2e9088: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2E9088u;
    {
        const bool branch_taken_0x2e9088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9088) {
            ctx->pc = 0x2E91B4u;
            goto label_2e91b4;
        }
    }
    ctx->pc = 0x2E9090u;
label_2e9090:
    // 0x2e9090: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2e9090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e9094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9094u;
    {
        const bool branch_taken_0x2e9094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9094u;
        // 0x2e9098: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9094) {
            ctx->pc = 0x2E90A4u;
            goto label_2e90a4;
        }
    }
    ctx->pc = 0x2E909Cu;
    // 0x2e909c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2E909Cu;
    {
        const bool branch_taken_0x2e909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E909Cu;
        // 0x2e90a0: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e909c) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E90A4u;
label_2e90a4:
    // 0x2e90a4: 0x26244e38  addiu       $a0, $s1, 0x4E38
    ctx->pc = 0x2e90a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20024));
    // 0x2e90a8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E90A8u;
    SET_GPR_U32(ctx, 31, 0x2E90B0u);
    ctx->pc = 0x2E90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90A8u;
    // 0x2e90ac: 0x24060e24  addiu       $a2, $zero, 0xE24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2E90A8u, 0x2E90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90B0u;
label_2e90b0:
    // 0x2e90b0: 0xc0ba626  jal         func_2E9898
    ctx->pc = 0x2E90B0u;
    SET_GPR_U32(ctx, 31, 0x2E90B8u);
    ctx->pc = 0x2E90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90B0u;
    // 0x2e90b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9898u, 0x2E90B0u, 0x2E90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90B8u;
label_2e90b8:
    // 0x2e90b8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2E90B8u;
    {
        const bool branch_taken_0x2e90b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90B8u;
        // 0x2e90bc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90b8) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E90C0u;
label_2e90c0:
    // 0x2e90c0: 0x26254e38  addiu       $a1, $s1, 0x4E38
    ctx->pc = 0x2e90c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20024));
    // 0x2e90c4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E90C4u;
    SET_GPR_U32(ctx, 31, 0x2E90CCu);
    ctx->pc = 0x2E90C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90C4u;
    // 0x2e90c8: 0x24060e24  addiu       $a2, $zero, 0xE24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2E90C4u, 0x2E90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90CCu;
label_2e90cc:
    // 0x2e90cc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E90CCu;
    {
        const bool branch_taken_0x2e90cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e90cc) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E90D4u;
label_2e90d4:
    // 0x2e90d4: 0x8e225c5c  lw          $v0, 0x5C5C($s1)
    ctx->pc = 0x2e90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23644)));
    // 0x2e90d8: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x2e90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2e90dc: 0x26257f80  addiu       $a1, $s1, 0x7F80
    ctx->pc = 0x2e90dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32640));
    // 0x2e90e0: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2e90e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2e90e4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E90E4u;
    SET_GPR_U32(ctx, 31, 0x2E90ECu);
    ctx->pc = 0x2E90E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90E4u;
    // 0x2e90e8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2E90E4u, 0x2E90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90ECu;
label_2e90ec:
    // 0x2e90ec: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x2e90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x2e90f0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E90F0u;
    {
        const bool branch_taken_0x2e90f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90F0u;
        // 0x2e90f4: 0x26257fd0  addiu       $a1, $s1, 0x7FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90f0) {
            ctx->pc = 0x2E91A4u;
            goto label_2e91a4;
        }
    }
    ctx->pc = 0x2E90F8u;
label_2e90f8:
    // 0x2e90f8: 0x26247f80  addiu       $a0, $s1, 0x7F80
    ctx->pc = 0x2e90f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32640));
    // 0x2e90fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e90fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9100: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E9100u;
    SET_GPR_U32(ctx, 31, 0x2E9108u);
    ctx->pc = 0x2E9104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9100u;
    // 0x2e9104: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2E9100u, 0x2E9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9108u;
label_2e9108:
    // 0x2e9108: 0x26247fd0  addiu       $a0, $s1, 0x7FD0
    ctx->pc = 0x2e9108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32720));
    // 0x2e910c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9110: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E9110u;
    SET_GPR_U32(ctx, 31, 0x2E9118u);
    ctx->pc = 0x2E9114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9110u;
    // 0x2e9114: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2E9110u, 0x2E9118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9118u;
label_2e9118:
    // 0x2e9118: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E9118u;
    {
        const bool branch_taken_0x2e9118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9118) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E9120u;
label_2e9120:
    // 0x2e9120: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x2e9120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2e9124: 0x26257f80  addiu       $a1, $s1, 0x7F80
    ctx->pc = 0x2e9124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32640));
    // 0x2e9128: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2e9128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2e912c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E912Cu;
    SET_GPR_U32(ctx, 31, 0x2E9134u);
    ctx->pc = 0x2E9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E912Cu;
    // 0x2e9130: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2E912Cu, 0x2E9134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9134u;
label_2e9134:
    // 0x2e9134: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x2e9134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x2e9138: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E9138u;
    {
        const bool branch_taken_0x2e9138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9138u;
        // 0x2e913c: 0x26257fd0  addiu       $a1, $s1, 0x7FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9138) {
            ctx->pc = 0x2E91A4u;
            goto label_2e91a4;
        }
    }
    ctx->pc = 0x2E9140u;
label_2e9140:
    // 0x2e9140: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2E9140u;
    {
        const bool branch_taken_0x2e9140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9140u;
        // 0x2e9144: 0xae227f5c  sw          $v0, 0x7F5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9140) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E9148u;
label_2e9148:
    // 0x2e9148: 0x8e227f5c  lw          $v0, 0x7F5C($s1)
    ctx->pc = 0x2e9148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32604)));
    // 0x2e914c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E914Cu;
    {
        const bool branch_taken_0x2e914c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E914Cu;
        // 0x2e9150: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e914c) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E9154u;
label_2e9154:
    // 0x2e9154: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E9154u;
    {
        const bool branch_taken_0x2e9154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9154u;
        // 0x2e9158: 0xae227f7c  sw          $v0, 0x7F7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9154) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E915Cu;
label_2e915c:
    // 0x2e915c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E915Cu;
    {
        const bool branch_taken_0x2e915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E915Cu;
        // 0x2e9160: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e915c) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E9164u;
label_2e9164:
    // 0x2e9164: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2e9164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e9168: 0x26247f5c  addiu       $a0, $s1, 0x7F5C
    ctx->pc = 0x2e9168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32604));
    // 0x2e916c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E916Cu;
    SET_GPR_U32(ctx, 31, 0x2E9174u);
    ctx->pc = 0x2E9170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E916Cu;
    // 0x2e9170: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2E916Cu, 0x2E9174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9174u;
label_2e9174:
    // 0x2e9174: 0x8e247f64  lw          $a0, 0x7F64($s1)
    ctx->pc = 0x2e9174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32612)));
    // 0x2e9178: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e9178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2e917c: 0x8e237f68  lw          $v1, 0x7F68($s1)
    ctx->pc = 0x2e917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32616)));
    // 0x2e9180: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9184: 0x3c056000  lui         $a1, 0x6000
    ctx->pc = 0x2e9184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24576 << 16));
    // 0x2e9188: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2e9188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2e918c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e918cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e9190: 0xae247f64  sw          $a0, 0x7F64($s1)
    ctx->pc = 0x2e9190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32612), GPR_U32(ctx, 4));
    // 0x2e9194: 0xae237f68  sw          $v1, 0x7F68($s1)
    ctx->pc = 0x2e9194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32616), GPR_U32(ctx, 3));
    // 0x2e9198: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E9198u;
    {
        const bool branch_taken_0x2e9198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9198u;
        // 0x2e919c: 0xae207f60  sw          $zero, 0x7F60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9198) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E91A0u;
label_2e91a0:
    // 0x2e91a0: 0x26257f5c  addiu       $a1, $s1, 0x7F5C
    ctx->pc = 0x2e91a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32604));
label_2e91a4:
    // 0x2e91a4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E91A4u;
    SET_GPR_U32(ctx, 31, 0x2E91ACu);
    ctx->pc = 0x2E91A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91A4u;
    // 0x2e91a8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2E91A4u, 0x2E91ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91ACu;
label_2e91ac:
    // 0x2e91ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E91ACu;
    {
        const bool branch_taken_0x2e91ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e91ac) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E91B4u;
label_2e91b4:
    // 0x2e91b4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2E91B4u;
    SET_GPR_U32(ctx, 31, 0x2E91BCu);
    ctx->pc = 0x2E91B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91B4u;
    // 0x2e91b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2E91B4u, 0x2E91BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91BCu;
label_2e91bc:
    // 0x2e91bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e91bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e91c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91c4: 0xc08e802  jal         func_23A008
    ctx->pc = 0x2E91C4u;
    SET_GPR_U32(ctx, 31, 0x2E91CCu);
    ctx->pc = 0x2E91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91C4u;
    // 0x2e91c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A008u, 0x2E91C4u, 0x2E91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91CCu;
label_2e91cc:
    // 0x2e91cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E91CCu;
    {
        const bool branch_taken_0x2e91cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91CCu;
        // 0x2e91d0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91cc) {
            ctx->pc = 0x2E91E4u;
            goto label_2e91e4;
        }
    }
    ctx->pc = 0x2E91D4u;
label_2e91d4:
    // 0x2e91d4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2E91D4u;
    SET_GPR_U32(ctx, 31, 0x2E91DCu);
    ctx->pc = 0x2E91D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91D4u;
    // 0x2e91d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2E91D4u, 0x2E91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91DCu;
label_2e91dc:
    // 0x2e91dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2e91dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e91e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e91e4:
    // 0x2e91e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e91e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e91e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e91e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e91ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e91ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e91f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e91f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e91f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e91f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e91f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e91f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e91fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E91FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91FCu;
        // 0x2e9200: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E91FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9204u;
    // 0x2e9204: 0x0  nop
    ctx->pc = 0x2e9204u;
    // NOP
}
