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

// Function: sub_0028B548
// Address: 0x28b548 - 0x28b580
void sub_0028B548_0x28b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B548_0x28b548");
#endif

    switch (ctx->pc) {
        case 0x28b56cu: goto label_28b56c;
        default: break;
    }

    ctx->pc = 0x28b548u;

    // 0x28b548: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28b548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28b54c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b550: 0x8c623718  lw          $v0, 0x3718($v1)
    ctx->pc = 0x28b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14104)));
    // 0x28b554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B554u;
    {
        const bool branch_taken_0x28b554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B554u;
        // 0x28b558: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b554) {
            ctx->pc = 0x28B56Cu;
            goto label_28b56c;
        }
    }
    ctx->pc = 0x28B55Cu;
    // 0x28b55c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x28b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x28b560: 0x0  nop
    ctx->pc = 0x28b560u;
    // NOP
    // 0x28b564: 0xc0a25f6  jal         func_2897D8
    ctx->pc = 0x28B564u;
    SET_GPR_U32(ctx, 31, 0x28B56Cu);
    ctx->pc = 0x28B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B564u;
    // 0x28b568: 0x2484a7f0  addiu       $a0, $a0, -0x5810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2897D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2897D8u, 0x28B564u, 0x28B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B56Cu;
label_28b56c:
    // 0x28b56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28b570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b574: 0x3e00008  jr          $ra
    ctx->pc = 0x28B574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B574u;
        // 0x28b578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B57Cu;
    // 0x28b57c: 0x0  nop
    ctx->pc = 0x28b57cu;
    // NOP
}
