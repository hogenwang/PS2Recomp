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

// Function: sub_00260550
// Address: 0x260550 - 0x2605b0
void sub_00260550_0x260550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260550_0x260550");
#endif

    switch (ctx->pc) {
        case 0x260584u: goto label_260584;
        case 0x26059cu: goto label_26059c;
        default: break;
    }

    ctx->pc = 0x260550u;

    // 0x260550: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x260550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x260554: 0x3e00008  jr          $ra
    ctx->pc = 0x260554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260554u;
        // 0x260558: 0x244217f0  addiu       $v0, $v0, 0x17F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26055Cu;
    // 0x26055c: 0x0  nop
    ctx->pc = 0x26055cu;
    // NOP
    // 0x260560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x260564: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x260568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26056c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26056Cu;
    {
        const bool branch_taken_0x26056c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x260570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26056Cu;
        // 0x260570: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26056c) {
            ctx->pc = 0x260584u;
            goto label_260584;
        }
    }
    ctx->pc = 0x260574u;
    // 0x260574: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x260574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x260578: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x260578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26057c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26057Cu;
    SET_GPR_U32(ctx, 31, 0x260584u);
    ctx->pc = 0x260580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26057Cu;
    // 0x260580: 0x24a517f0  addiu       $a1, $a1, 0x17F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x26057Cu, 0x260584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260584u;
label_260584:
    // 0x260584: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260584u;
    {
        const bool branch_taken_0x260584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260584u;
        // 0x260588: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260584) {
            ctx->pc = 0x26059Cu;
            goto label_26059c;
        }
    }
    ctx->pc = 0x26058Cu;
    // 0x26058c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26058cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260590: 0x24a518f0  addiu       $a1, $a1, 0x18F0
    ctx->pc = 0x260590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6384));
    // 0x260594: 0xc04a966  jal         func_12A598
    ctx->pc = 0x260594u;
    SET_GPR_U32(ctx, 31, 0x26059Cu);
    ctx->pc = 0x260598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260594u;
    // 0x260598: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x260594u, 0x26059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26059Cu;
label_26059c:
    // 0x26059c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2605a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2605a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2605a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2605a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2605A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2605ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605A8u;
        // 0x2605ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2605A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2605B0u;
}
