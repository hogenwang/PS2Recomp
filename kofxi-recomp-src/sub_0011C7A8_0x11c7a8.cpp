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

// Function: sub_0011C7A8
// Address: 0x11c7a8 - 0x11c860
void sub_0011C7A8_0x11c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C7A8_0x11c7a8");
#endif

    switch (ctx->pc) {
        case 0x11c7c0u: goto label_11c7c0;
        case 0x11c80cu: goto label_11c80c;
        case 0x11c820u: goto label_11c820;
        case 0x11c848u: goto label_11c848;
        default: break;
    }

    ctx->pc = 0x11c7a8u;

    // 0x11c7a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11c7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c7ac: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x11c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11c7b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11c7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c7b4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c7b8: 0xc046ea0  jal         func_11BA80
    ctx->pc = 0x11C7B8u;
    SET_GPR_U32(ctx, 31, 0x11C7C0u);
    ctx->pc = 0x11C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7B8u;
    // 0x11c7bc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BA80u, 0x11C7B8u, 0x11C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7C0u;
label_11c7c0:
    // 0x11c7c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C7C0u;
    {
        const bool branch_taken_0x11c7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7C0u;
        // 0x11c7c4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7c0) {
            ctx->pc = 0x11C7D0u;
            goto label_11c7d0;
        }
    }
    ctx->pc = 0x11C7C8u;
    // 0x11c7c8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11C7C8u;
    {
        const bool branch_taken_0x11c7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7C8u;
        // 0x11c7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7c8) {
            ctx->pc = 0x11C84Cu;
            goto label_11c84c;
        }
    }
    ctx->pc = 0x11C7D0u;
label_11c7d0:
    // 0x11c7d0: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11c7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x11c7d4: 0x2451afc0  addiu       $s1, $v0, -0x5040
    ctx->pc = 0x11c7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x11c7d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x11c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11c7dc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11c7e0: 0xae039e20  sw          $v1, -0x61E0($s0)
    ctx->pc = 0x11c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 3));
    // 0x11c7e4: 0x2484b940  addiu       $a0, $a0, -0x46C0
    ctx->pc = 0x11c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    // 0x11c7e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c7ec: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x11c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x11c7f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c7f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7fc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x11c7fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c800: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11c800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c804: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11C804u;
    SET_GPR_U32(ctx, 31, 0x11C80Cu);
    ctx->pc = 0x11C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C804u;
    // 0x11c808: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11C804u, 0x11C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C80Cu;
label_11c80c:
    // 0x11c80c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C80Cu;
    {
        const bool branch_taken_0x11c80c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C80Cu;
        // 0x11c810: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c80c) {
            ctx->pc = 0x11C82Cu;
            goto label_11c82c;
        }
    }
    ctx->pc = 0x11C814u;
    // 0x11c814: 0x8c449dec  lw          $a0, -0x6214($v0)
    ctx->pc = 0x11c814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942188)));
    // 0x11c818: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C818u;
    SET_GPR_U32(ctx, 31, 0x11C820u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C818u, 0x11C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C820u;
label_11c820:
    // 0x11c820: 0xae009e20  sw          $zero, -0x61E0($s0)
    ctx->pc = 0x11c820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 0));
    // 0x11c824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11C824u;
    {
        const bool branch_taken_0x11c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C824u;
        // 0x11c828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c824) {
            ctx->pc = 0x11C84Cu;
            goto label_11c84c;
        }
    }
    ctx->pc = 0x11C82Cu;
label_11c82c:
    // 0x11c82c: 0xae009e20  sw          $zero, -0x61E0($s0)
    ctx->pc = 0x11c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 0));
    // 0x11c830: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11c830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11c834: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11c834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11c838: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x11c838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x11c83c: 0x8c649dec  lw          $a0, -0x6214($v1)
    ctx->pc = 0x11c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942188)));
    // 0x11c840: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C840u;
    SET_GPR_U32(ctx, 31, 0x11C848u);
    ctx->pc = 0x11C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C840u;
    // 0x11c844: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C840u, 0x11C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C848u;
label_11c848:
    // 0x11c848: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c84c:
    // 0x11c84c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c850: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11c850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c854: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c858: 0x3e00008  jr          $ra
    ctx->pc = 0x11C858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C858u;
        // 0x11c85c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C860u;
}
