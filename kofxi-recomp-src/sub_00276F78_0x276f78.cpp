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

// Function: sub_00276F78
// Address: 0x276f78 - 0x276f98
void sub_00276F78_0x276f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276F78_0x276f78");
#endif

    switch (ctx->pc) {
        case 0x276f88u: goto label_276f88;
        default: break;
    }

    ctx->pc = 0x276f78u;

    // 0x276f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276f80: 0xc09d542  jal         func_275508
    ctx->pc = 0x276F80u;
    SET_GPR_U32(ctx, 31, 0x276F88u);
    ctx->pc = 0x275508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275508u, 0x276F80u, 0x276F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F88u;
label_276f88:
    // 0x276f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x276F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F8Cu;
        // 0x276f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276F94u;
    // 0x276f94: 0x0  nop
    ctx->pc = 0x276f94u;
    // NOP
    if (ctx->pc == 0x276f94u) { ctx->pc = 0x276f98u; }
}
