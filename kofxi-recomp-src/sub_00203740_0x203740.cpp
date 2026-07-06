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

// Function: sub_00203740
// Address: 0x203740 - 0x203768
void sub_00203740_0x203740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203740_0x203740");
#endif

    ctx->pc = 0x203740u;

    // 0x203740: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x203740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x203744: 0xdc622078  ld          $v0, 0x2078($v1)
    ctx->pc = 0x203744u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8312)));
    // 0x203748: 0x3e00008  jr          $ra
    ctx->pc = 0x203748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203748u;
        // 0x20374c: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203750u;
    // 0x203750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20375c: 0x8080e32  j           func_2038C8
    ctx->pc = 0x20375Cu;
    ctx->pc = 0x203760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20375Cu;
    // 0x203760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038C8u;
    sub_002038C8_0x2038c8(rdram, ctx, runtime); return;
    ctx->pc = 0x203764u;
    // 0x203764: 0x0  nop
    ctx->pc = 0x203764u;
    // NOP
}
