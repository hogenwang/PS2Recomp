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

// Function: sub_0011C658
// Address: 0x11c658 - 0x11c6f0
void sub_0011C658_0x11c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C658_0x11c658");
#endif

    switch (ctx->pc) {
        case 0x11c66cu: goto label_11c66c;
        case 0x11c6acu: goto label_11c6ac;
        case 0x11c6c0u: goto label_11c6c0;
        case 0x11c6dcu: goto label_11c6dc;
        default: break;
    }

    ctx->pc = 0x11c658u;

    // 0x11c658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c65c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x11c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c660: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c664: 0xc046ea0  jal         func_11BA80
    ctx->pc = 0x11C664u;
    SET_GPR_U32(ctx, 31, 0x11C66Cu);
    ctx->pc = 0x11C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C664u;
    // 0x11c668: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BA80u, 0x11C664u, 0x11C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C66Cu;
label_11c66c:
    // 0x11c66c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C66Cu;
    {
        const bool branch_taken_0x11c66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C66Cu;
        // 0x11c670: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c66c) {
            ctx->pc = 0x11C67Cu;
            goto label_11c67c;
        }
    }
    ctx->pc = 0x11C674u;
    // 0x11c674: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11C674u;
    {
        const bool branch_taken_0x11c674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C674u;
        // 0x11c678: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c674) {
            ctx->pc = 0x11C6E0u;
            goto label_11c6e0;
        }
    }
    ctx->pc = 0x11C67Cu;
label_11c67c:
    // 0x11c67c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11c680: 0x2450afc0  addiu       $s0, $v0, -0x5040
    ctx->pc = 0x11c680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x11c684: 0x2484b940  addiu       $a0, $a0, -0x46C0
    ctx->pc = 0x11c684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    // 0x11c688: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11c688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c68c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c69c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11c69cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6a0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11c6a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c6a4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11C6A4u;
    SET_GPR_U32(ctx, 31, 0x11C6ACu);
    ctx->pc = 0x11C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6A4u;
    // 0x11c6a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11C6A4u, 0x11C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6ACu;
label_11c6ac:
    // 0x11c6ac: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C6ACu;
    {
        const bool branch_taken_0x11c6ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6ACu;
        // 0x11c6b0: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6ac) {
            ctx->pc = 0x11C6C8u;
            goto label_11c6c8;
        }
    }
    ctx->pc = 0x11C6B4u;
    // 0x11c6b4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11c6b8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C6B8u;
    SET_GPR_U32(ctx, 31, 0x11C6C0u);
    ctx->pc = 0x11C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6B8u;
    // 0x11c6bc: 0x8c449dec  lw          $a0, -0x6214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C6B8u, 0x11C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6C0u;
label_11c6c0:
    // 0x11c6c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11C6C0u;
    {
        const bool branch_taken_0x11c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6C0u;
        // 0x11c6c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6c0) {
            ctx->pc = 0x11C6E0u;
            goto label_11c6e0;
        }
    }
    ctx->pc = 0x11C6C8u;
label_11c6c8:
    // 0x11c6c8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11c6cc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11c6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11c6d0: 0x8c649dec  lw          $a0, -0x6214($v1)
    ctx->pc = 0x11c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942188)));
    // 0x11c6d4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C6D4u;
    SET_GPR_U32(ctx, 31, 0x11C6DCu);
    ctx->pc = 0x11C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6D4u;
    // 0x11c6d8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C6D4u, 0x11C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6DCu;
label_11c6dc:
    // 0x11c6dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c6e0:
    // 0x11c6e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c6e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x11C6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6E8u;
        // 0x11c6ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C6F0u;
}
