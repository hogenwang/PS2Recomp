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

// Function: sub_0018C750
// Address: 0x18c750 - 0x18c780
void sub_0018C750_0x18c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C750_0x18c750");
#endif

    ctx->pc = 0x18c750u;

    // 0x18c750: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x18c750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x18c754: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x18c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x18c758: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c758u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c75c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c75cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c760: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x18c760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c764: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18C764u;
    {
        const bool branch_taken_0x18c764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c764) {
            ctx->pc = 0x18C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C764u;
            // 0x18c768: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C76Cu;
            goto label_18c76c;
        }
    }
    ctx->pc = 0x18C76Cu;
label_18c76c:
    // 0x18c76c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C76Cu;
        // 0x18c770: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C774u;
    // 0x18c774: 0x0  nop
    ctx->pc = 0x18c774u;
    // NOP
    // 0x18c778: 0x0  nop
    ctx->pc = 0x18c778u;
    // NOP
    // 0x18c77c: 0x0  nop
    ctx->pc = 0x18c77cu;
    // NOP
    if (ctx->pc == 0x18c77cu) { ctx->pc = 0x18c780u; }
}
