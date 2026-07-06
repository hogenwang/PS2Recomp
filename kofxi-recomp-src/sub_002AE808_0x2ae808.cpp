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

// Function: sub_002AE808
// Address: 0x2ae808 - 0x2ae8c8
void sub_002AE808_0x2ae808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE808_0x2ae808");
#endif

    switch (ctx->pc) {
        case 0x2ae830u: goto label_2ae830;
        case 0x2ae848u: goto label_2ae848;
        case 0x2ae860u: goto label_2ae860;
        case 0x2ae878u: goto label_2ae878;
        case 0x2ae890u: goto label_2ae890;
        case 0x2ae898u: goto label_2ae898;
        case 0x2ae8a8u: goto label_2ae8a8;
        case 0x2ae8b0u: goto label_2ae8b0;
        default: break;
    }

    ctx->pc = 0x2ae808u;

    // 0x2ae808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae80c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ae810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ae814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae818: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ae818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae81c: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x2ae81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x2ae820: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE820u;
    {
        const bool branch_taken_0x2ae820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae820) {
            ctx->pc = 0x2AE824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE820u;
            // 0x2ae824: 0x8c8200fc  lw          $v0, 0xFC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE838u;
            goto label_2ae838;
        }
    }
    ctx->pc = 0x2AE828u;
    // 0x2ae828: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x2AE828u;
    SET_GPR_U32(ctx, 31, 0x2AE830u);
    ctx->pc = 0x2AE82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE828u;
    // 0x2ae82c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x2AE828u, 0x2AE830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE830u;
label_2ae830:
    // 0x2ae830: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ae830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae834: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x2ae834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_2ae838:
    // 0x2ae838: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE838u;
    {
        const bool branch_taken_0x2ae838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae838) {
            ctx->pc = 0x2AE83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE838u;
            // 0x2ae83c: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE850u;
            goto label_2ae850;
        }
    }
    ctx->pc = 0x2AE840u;
    // 0x2ae840: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x2AE840u;
    SET_GPR_U32(ctx, 31, 0x2AE848u);
    ctx->pc = 0x2AE844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE840u;
    // 0x2ae844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x2AE840u, 0x2AE848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE848u;
label_2ae848:
    // 0x2ae848: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ae848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae84c: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x2ae84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_2ae850:
    // 0x2ae850: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE850u;
    {
        const bool branch_taken_0x2ae850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae850) {
            ctx->pc = 0x2AE854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE850u;
            // 0x2ae854: 0x8c8200ac  lw          $v0, 0xAC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE868u;
            goto label_2ae868;
        }
    }
    ctx->pc = 0x2AE858u;
    // 0x2ae858: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2AE858u;
    SET_GPR_U32(ctx, 31, 0x2AE860u);
    ctx->pc = 0x2AE85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE858u;
    // 0x2ae85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2AE858u, 0x2AE860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE860u;
label_2ae860:
    // 0x2ae860: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ae860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae864: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x2ae864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_2ae868:
    // 0x2ae868: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE868u;
    {
        const bool branch_taken_0x2ae868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae868) {
            ctx->pc = 0x2AE86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE868u;
            // 0x2ae86c: 0x8c8400c8  lw          $a0, 0xC8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE880u;
            goto label_2ae880;
        }
    }
    ctx->pc = 0x2AE870u;
    // 0x2ae870: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2AE870u;
    SET_GPR_U32(ctx, 31, 0x2AE878u);
    ctx->pc = 0x2AE874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE870u;
    // 0x2ae874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2AE870u, 0x2AE878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE878u;
label_2ae878:
    // 0x2ae878: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ae878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae87c: 0x8c8400c8  lw          $a0, 0xC8($a0)
    ctx->pc = 0x2ae87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_2ae880:
    // 0x2ae880: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE880u;
    {
        const bool branch_taken_0x2ae880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae880) {
            ctx->pc = 0x2AE890u;
            goto label_2ae890;
        }
    }
    ctx->pc = 0x2AE888u;
    // 0x2ae888: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2AE888u;
    SET_GPR_U32(ctx, 31, 0x2AE890u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2AE888u, 0x2AE890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE890u;
label_2ae890:
    // 0x2ae890: 0xc0aba7e  jal         func_2AE9F8
    ctx->pc = 0x2AE890u;
    SET_GPR_U32(ctx, 31, 0x2AE898u);
    ctx->pc = 0x2AE894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE890u;
    // 0x2ae894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE9F8u, 0x2AE890u, 0x2AE898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE898u;
label_2ae898:
    // 0x2ae898: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ae898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae89c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8a0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2AE8A0u;
    SET_GPR_U32(ctx, 31, 0x2AE8A8u);
    ctx->pc = 0x2AE8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8A0u;
    // 0x2ae8a4: 0x24060198  addiu       $a2, $zero, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2AE8A0u, 0x2AE8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8A8u;
label_2ae8a8:
    // 0x2ae8a8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2AE8A8u;
    SET_GPR_U32(ctx, 31, 0x2AE8B0u);
    ctx->pc = 0x2AE8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8A8u;
    // 0x2ae8ac: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2AE8A8u, 0x2AE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8B0u;
label_2ae8b0:
    // 0x2ae8b0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2ae8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2ae8b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ae8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae8b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8BCu;
        // 0x2ae8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE8C4u;
    // 0x2ae8c4: 0x0  nop
    ctx->pc = 0x2ae8c4u;
    // NOP
}
