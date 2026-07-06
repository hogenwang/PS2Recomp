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

// Function: sub_00227D78
// Address: 0x227d78 - 0x227da0
void sub_00227D78_0x227d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227D78_0x227d78");
#endif

    switch (ctx->pc) {
        case 0x227d88u: goto label_227d88;
        default: break;
    }

    ctx->pc = 0x227d78u;

    // 0x227d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227d80: 0xc089f32  jal         func_227CC8
    ctx->pc = 0x227D80u;
    SET_GPR_U32(ctx, 31, 0x227D88u);
    ctx->pc = 0x227CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227CC8u, 0x227D80u, 0x227D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D88u;
label_227d88:
    // 0x227d88: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x227d88u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x227d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227d90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x227d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x227d94: 0x3e00008  jr          $ra
    ctx->pc = 0x227D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D94u;
        // 0x227d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227D9Cu;
    // 0x227d9c: 0x0  nop
    ctx->pc = 0x227d9cu;
    // NOP
    if (ctx->pc == 0x227d9cu) { ctx->pc = 0x227da0u; }
}
