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

// Function: sub_0011B970
// Address: 0x11b970 - 0x11ba10
void sub_0011B970_0x11b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B970_0x11b970");
#endif

    switch (ctx->pc) {
        case 0x11b99cu: goto label_11b99c;
        case 0x11b9a8u: goto label_11b9a8;
        case 0x11b9b0u: goto label_11b9b0;
        case 0x11b9c4u: goto label_11b9c4;
        case 0x11b9f0u: goto label_11b9f0;
        default: break;
    }

    ctx->pc = 0x11b970u;

    // 0x11b970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b978: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11b978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11b97c: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11B97Cu;
    {
        const bool branch_taken_0x11b97c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B97Cu;
        // 0x11b980: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b97c) {
            ctx->pc = 0x11B9D4u;
            goto label_11b9d4;
        }
    }
    ctx->pc = 0x11B984u;
    // 0x11b984: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11b988: 0x8c439dd0  lw          $v1, -0x6230($v0)
    ctx->pc = 0x11b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942160)));
    // 0x11b98c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B98Cu;
    {
        const bool branch_taken_0x11b98c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B98Cu;
        // 0x11b990: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b98c) {
            ctx->pc = 0x11B99Cu;
            goto label_11b99c;
        }
    }
    ctx->pc = 0x11B994u;
    // 0x11b994: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11B994u;
    SET_GPR_U32(ctx, 31, 0x11B99Cu);
    ctx->pc = 0x11B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B994u;
    // 0x11b998: 0x2484b2c0  addiu       $a0, $a0, -0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11B994u, 0x11B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B99Cu;
label_11b99c:
    // 0x11b99c: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11b9a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B9A0u;
    {
        const bool branch_taken_0x11b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9A0u;
        // 0x11b9a4: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9a0) {
            ctx->pc = 0x11B9B0u;
            goto label_11b9b0;
        }
    }
    ctx->pc = 0x11B9A8u;
label_11b9a8:
    // 0x11b9a8: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x11B9A8u;
    SET_GPR_U32(ctx, 31, 0x11B9B0u);
    ctx->pc = 0x11B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9A8u;
    // 0x11b9ac: 0x24040fa0  addiu       $a0, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x11B9A8u, 0x11B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9B0u;
label_11b9b0:
    // 0x11b9b0: 0x8e229df4  lw          $v0, -0x620C($s1)
    ctx->pc = 0x11b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942196)));
    // 0x11b9b4: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11B9B4u;
    {
        const bool branch_taken_0x11b9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b9b4) {
            ctx->pc = 0x11B9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b9a8;
        }
    }
    ctx->pc = 0x11B9BCu;
    // 0x11b9bc: 0xc0443cc  jal         func_110F30
    ctx->pc = 0x11B9BCu;
    SET_GPR_U32(ctx, 31, 0x11B9C4u);
    ctx->pc = 0x11B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9BCu;
    // 0x11b9c0: 0x2604af90  addiu       $a0, $s0, -0x5070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F30u, 0x11B9BCu, 0x11B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9C4u;
label_11b9c4:
    // 0x11b9c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11B9C4u;
    {
        const bool branch_taken_0x11b9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C4u;
        // 0x11b9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9c4) {
            ctx->pc = 0x11B9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b9a8;
        }
    }
    ctx->pc = 0x11B9CCu;
    // 0x11b9cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11B9CCu;
    {
        const bool branch_taken_0x11b9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9CCu;
        // 0x11b9d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9cc) {
            ctx->pc = 0x11BA00u;
            goto label_11ba00;
        }
    }
    ctx->pc = 0x11B9D4u;
label_11b9d4:
    // 0x11b9d4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11b9d8: 0x8c439df4  lw          $v1, -0x620C($v0)
    ctx->pc = 0x11b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942196)));
    // 0x11b9dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B9DCu;
    {
        const bool branch_taken_0x11b9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9DCu;
        // 0x11b9e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9dc) {
            ctx->pc = 0x11B9FCu;
            goto label_11b9fc;
        }
    }
    ctx->pc = 0x11B9E4u;
    // 0x11b9e4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11b9e8: 0xc0443cc  jal         func_110F30
    ctx->pc = 0x11B9E8u;
    SET_GPR_U32(ctx, 31, 0x11B9F0u);
    ctx->pc = 0x11B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9E8u;
    // 0x11b9ec: 0x2484af90  addiu       $a0, $a0, -0x5070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F30u, 0x11B9E8u, 0x11B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9F0u;
label_11b9f0:
    // 0x11b9f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B9F0u;
    {
        const bool branch_taken_0x11b9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9F0u;
        // 0x11b9f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9f0) {
            ctx->pc = 0x11B9FCu;
            goto label_11b9fc;
        }
    }
    ctx->pc = 0x11B9F8u;
    // 0x11b9f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b9fc:
    // 0x11b9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11ba00:
    // 0x11ba00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11ba00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ba04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ba04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba08: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA08u;
        // 0x11ba0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BA10u;
}
