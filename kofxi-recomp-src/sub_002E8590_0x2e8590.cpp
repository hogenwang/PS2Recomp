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

// Function: sub_002E8590
// Address: 0x2e8590 - 0x2e85b8
void sub_002E8590_0x2e8590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8590_0x2e8590");
#endif

    switch (ctx->pc) {
        case 0x2e85a8u: goto label_2e85a8;
        default: break;
    }

    ctx->pc = 0x2e8590u;

    // 0x2e8590: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e8590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e8594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e8598: 0x8c44ea14  lw          $a0, -0x15EC($v0)
    ctx->pc = 0x2e8598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961684)));
    // 0x2e859c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e85a0: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2E85A0u;
    SET_GPR_U32(ctx, 31, 0x2E85A8u);
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2E85A0u, 0x2E85A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85A8u;
label_2e85a8:
    // 0x2e85a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e85a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e85ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e85acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E85B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85B0u;
        // 0x2e85b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E85B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E85B8u;
}
