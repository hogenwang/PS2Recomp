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

// Function: sub_002C8760
// Address: 0x2c8760 - 0x2c8828
void sub_002C8760_0x2c8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8760_0x2c8760");
#endif

    switch (ctx->pc) {
        case 0x2c8804u: goto label_2c8804;
        default: break;
    }

    ctx->pc = 0x2c8760u;

    // 0x2c8760: 0x2c820015  sltiu       $v0, $a0, 0x15
    ctx->pc = 0x2c8760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2c8764: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C8764u;
    {
        const bool branch_taken_0x2c8764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8764) {
            ctx->pc = 0x2C8820u;
            goto label_2c8820;
        }
    }
    ctx->pc = 0x2C876Cu;
    // 0x2c876c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2c876cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c8770: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2c8770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2c8774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8778: 0x8c63eed0  lw          $v1, -0x1130($v1)
    ctx->pc = 0x2c8778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962896)));
    // 0x2c877c: 0x600008  jr          $v1
    ctx->pc = 0x2C877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8788u: goto label_2c8788;
            case 0x2C8790u: goto label_2c8790;
            case 0x2C8798u: goto label_2c8798;
            case 0x2C87A0u: goto label_2c87a0;
            case 0x2C87A8u: goto label_2c87a8;
            case 0x2C87B0u: goto label_2c87b0;
            case 0x2C87B8u: goto label_2c87b8;
            case 0x2C87C0u: goto label_2c87c0;
            case 0x2C87C8u: goto label_2c87c8;
            case 0x2C87D0u: goto label_2c87d0;
            case 0x2C87D8u: goto label_2c87d8;
            case 0x2C87E0u: goto label_2c87e0;
            case 0x2C87E8u: goto label_2c87e8;
            case 0x2C87F0u: goto label_2c87f0;
            case 0x2C87F8u: goto label_2c87f8;
            case 0x2C8800u: goto label_2c8800;
            case 0x2C8808u: goto label_2c8808;
            case 0x2C8810u: goto label_2c8810;
            case 0x2C8818u: goto label_2c8818;
            case 0x2C8820u: goto label_2c8820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C877Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C8784u;
    // 0x2c8784: 0x0  nop
    ctx->pc = 0x2c8784u;
    // NOP
label_2c8788:
    // 0x2c8788: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8788u;
        // 0x2c878c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8790u;
label_2c8790:
    // 0x2c8790: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8790u;
        // 0x2c8794: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8798u;
label_2c8798:
    // 0x2c8798: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8798u;
        // 0x2c879c: 0x24020208  addiu       $v0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87A0u;
label_2c87a0:
    // 0x2c87a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87A0u;
        // 0x2c87a4: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87A8u;
label_2c87a8:
    // 0x2c87a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87A8u;
        // 0x2c87ac: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87B0u;
label_2c87b0:
    // 0x2c87b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87B0u;
        // 0x2c87b4: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87B8u;
label_2c87b8:
    // 0x2c87b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87B8u;
        // 0x2c87bc: 0x2402020b  addiu       $v0, $zero, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87C0u;
label_2c87c0:
    // 0x2c87c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87C0u;
        // 0x2c87c4: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87C8u;
label_2c87c8:
    // 0x2c87c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87C8u;
        // 0x2c87cc: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87D0u;
label_2c87d0:
    // 0x2c87d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87D0u;
        // 0x2c87d4: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87D8u;
label_2c87d8:
    // 0x2c87d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87D8u;
        // 0x2c87dc: 0x24020210  addiu       $v0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87E0u;
label_2c87e0:
    // 0x2c87e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87E0u;
        // 0x2c87e4: 0x24020215  addiu       $v0, $zero, 0x215 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87E8u;
label_2c87e8:
    // 0x2c87e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87E8u;
        // 0x2c87ec: 0x24020216  addiu       $v0, $zero, 0x216 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87F0u;
label_2c87f0:
    // 0x2c87f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87F0u;
        // 0x2c87f4: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C87F8u;
label_2c87f8:
    // 0x2c87f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C87F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87F8u;
        // 0x2c87fc: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C87F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8800u;
label_2c8800:
    // 0x2c8800: 0x3e00008  jr          $ra
label_2c8804:
    if (ctx->pc == 0x2C8804u) {
        ctx->pc = 0x2C8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8800u;
        // 0x2c8804: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8808u;
        goto label_2c8808;
    }
    ctx->pc = 0x2C8800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8800u;
        // 0x2c8804: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8808u;
label_2c8808:
    // 0x2c8808: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8808u;
        // 0x2c880c: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8810u;
label_2c8810:
    // 0x2c8810: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8810u;
        // 0x2c8814: 0x24020226  addiu       $v0, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8818u;
label_2c8818:
    // 0x2c8818: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8818u;
        // 0x2c881c: 0x24020227  addiu       $v0, $zero, 0x227 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8820u;
label_2c8820:
    // 0x2c8820: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8820u;
        // 0x2c8824: 0x24020208  addiu       $v0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8828u;
}
