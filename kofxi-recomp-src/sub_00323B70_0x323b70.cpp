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

// Function: sub_00323B70
// Address: 0x323b70 - 0x323ba0
void sub_00323B70_0x323b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323B70_0x323b70");
#endif

    switch (ctx->pc) {
        case 0x323b80u: goto label_323b80;
        default: break;
    }

    ctx->pc = 0x323b70u;

    // 0x323b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323b78: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x323B78u;
    SET_GPR_U32(ctx, 31, 0x323B80u);
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x323B78u, 0x323B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B80u;
label_323b80:
    // 0x323b80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x323b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323b88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x323b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x323b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x323B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B8Cu;
        // 0x323b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323B94u;
    // 0x323b94: 0x0  nop
    ctx->pc = 0x323b94u;
    // NOP
    // 0x323b98: 0x0  nop
    ctx->pc = 0x323b98u;
    // NOP
    // 0x323b9c: 0x0  nop
    ctx->pc = 0x323b9cu;
    // NOP
    if (ctx->pc == 0x323b9cu) { ctx->pc = 0x323ba0u; }
}
