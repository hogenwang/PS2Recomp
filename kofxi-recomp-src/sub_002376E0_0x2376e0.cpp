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

// Function: sub_002376E0
// Address: 0x2376e0 - 0x237738
void sub_002376E0_0x2376e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002376E0_0x2376e0");
#endif

    switch (ctx->pc) {
        case 0x2376f0u: goto label_2376f0;
        case 0x237710u: goto label_237710;
        default: break;
    }

    ctx->pc = 0x2376e0u;

    // 0x2376e0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2376E0u;
    {
        const bool branch_taken_0x2376e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2376E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376E0u;
        // 0x2376e4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376e0) {
            ctx->pc = 0x237700u;
            goto label_237700;
        }
    }
    ctx->pc = 0x2376E8u;
    // 0x2376e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2376E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2376ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376E8u;
        // 0x2376ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2376E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2376F0u;
label_2376f0:
    // 0x2376f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2376f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376f4: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x2376f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x2376f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2376F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2376FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376F8u;
        // 0x2376fc: 0xc3100a  movz        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2376F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237700u;
label_237700:
    // 0x237700: 0x8c46fe78  lw          $a2, -0x188($v0)
    ctx->pc = 0x237700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966904)));
    // 0x237704: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x237704u;
    {
        const bool branch_taken_0x237704 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x237708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237704u;
        // 0x237708: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237704) {
            ctx->pc = 0x237730u;
            goto label_237730;
        }
    }
    ctx->pc = 0x23770Cu;
    // 0x23770c: 0x8cc24e3c  lw          $v0, 0x4E3C($a2)
    ctx->pc = 0x23770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20028)));
label_237710:
    // 0x237710: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x237710u;
    {
        const bool branch_taken_0x237710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237710) {
            ctx->pc = 0x237714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237710u;
            // 0x237714: 0x8cc64e30  lw          $a2, 0x4E30($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237728u;
            goto label_237728;
        }
    }
    ctx->pc = 0x237718u;
    // 0x237718: 0x94c24e46  lhu         $v0, 0x4E46($a2)
    ctx->pc = 0x237718u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20038)));
    // 0x23771c: 0x5044fff4  beql        $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23771Cu;
    {
        const bool branch_taken_0x23771c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x23771c) {
            ctx->pc = 0x237720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23771Cu;
            // 0x237720: 0x8cc34e38  lw          $v1, 0x4E38($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2376F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2376f0;
        }
    }
    ctx->pc = 0x237724u;
    // 0x237724: 0x8cc64e30  lw          $a2, 0x4E30($a2)
    ctx->pc = 0x237724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20016)));
label_237728:
    // 0x237728: 0x54c0fff9  bnel        $a2, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x237728u;
    {
        const bool branch_taken_0x237728 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x237728) {
            ctx->pc = 0x23772Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237728u;
            // 0x23772c: 0x8cc24e3c  lw          $v0, 0x4E3C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237710;
        }
    }
    ctx->pc = 0x237730u;
label_237730:
    // 0x237730: 0x3e00008  jr          $ra
    ctx->pc = 0x237730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237730u;
        // 0x237734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237738u;
}
