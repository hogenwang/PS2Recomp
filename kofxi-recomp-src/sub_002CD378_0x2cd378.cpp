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

// Function: sub_002CD378
// Address: 0x2cd378 - 0x2cd438
void sub_002CD378_0x2cd378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD378_0x2cd378");
#endif

    switch (ctx->pc) {
        case 0x2cd3a4u: goto label_2cd3a4;
        case 0x2cd3bcu: goto label_2cd3bc;
        case 0x2cd410u: goto label_2cd410;
        default: break;
    }

    ctx->pc = 0x2cd378u;

    // 0x2cd378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cd378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cd37c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2cd37cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd380: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cd380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cd384: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2cd384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd388: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2cd388u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd38c: 0x27ab0004  addiu       $t3, $sp, 0x4
    ctx->pc = 0x2cd38cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2cd390: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cd390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd394: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cd394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cd398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cd398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cd39c: 0xc0b3526  jal         func_2CD498
    ctx->pc = 0x2CD39Cu;
    SET_GPR_U32(ctx, 31, 0x2CD3A4u);
    ctx->pc = 0x2CD3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD39Cu;
    // 0x2cd3a0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD498u, 0x2CD39Cu, 0x2CD3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3A4u;
label_2cd3a4:
    // 0x2cd3a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2cd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cd3ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD3ACu;
    {
        const bool branch_taken_0x2cd3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3ACu;
        // 0x2cd3b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3ac) {
            ctx->pc = 0x2CD3BCu;
            goto label_2cd3bc;
        }
    }
    ctx->pc = 0x2CD3B4u;
    // 0x2cd3b4: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CD3B4u;
    SET_GPR_U32(ctx, 31, 0x2CD3BCu);
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2CD3B4u, 0x2CD3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3BCu;
label_2cd3bc:
    // 0x2cd3bc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD3BCu;
    {
        const bool branch_taken_0x2cd3bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3BCu;
        // 0x2cd3c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3bc) {
            ctx->pc = 0x2CD3D4u;
            goto label_2cd3d4;
        }
    }
    ctx->pc = 0x2CD3C4u;
    // 0x2cd3c4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD3C4u;
    {
        const bool branch_taken_0x2cd3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3C4u;
        // 0x2cd3c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3c4) {
            ctx->pc = 0x2CD3D0u;
            goto label_2cd3d0;
        }
    }
    ctx->pc = 0x2CD3CCu;
    // 0x2cd3cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cd3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cd3d0:
    // 0x2cd3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd3d4:
    // 0x2cd3d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cd3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd3d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cd3d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cd3dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3E0u;
        // 0x2cd3e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD3E8u;
    // 0x2cd3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd3ec: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2cd3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cd3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cd3f4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2cd3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3f8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2cd3f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3fc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2cd3fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd400: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2cd400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd404: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cd404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cd408: 0xc0b3526  jal         func_2CD498
    ctx->pc = 0x2CD408u;
    SET_GPR_U32(ctx, 31, 0x2CD410u);
    ctx->pc = 0x2CD40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD408u;
    // 0x2cd40c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD498u, 0x2CD408u, 0x2CD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD410u;
label_2cd410:
    // 0x2cd410: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD410u;
    {
        const bool branch_taken_0x2cd410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd410) {
            ctx->pc = 0x2CD414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD410u;
            // 0x2cd414: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD428u;
            goto label_2cd428;
        }
    }
    ctx->pc = 0x2CD418u;
    // 0x2cd418: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD418u;
    {
        const bool branch_taken_0x2cd418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD418u;
        // 0x2cd41c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd418) {
            ctx->pc = 0x2CD424u;
            goto label_2cd424;
        }
    }
    ctx->pc = 0x2CD420u;
    // 0x2cd420: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cd420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2cd424:
    // 0x2cd424: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cd424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd428:
    // 0x2cd428: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cd428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cd42c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD42Cu;
        // 0x2cd430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD434u;
    // 0x2cd434: 0x0  nop
    ctx->pc = 0x2cd434u;
    // NOP
    if (ctx->pc == 0x2cd434u) { ctx->pc = 0x2cd438u; }
}
