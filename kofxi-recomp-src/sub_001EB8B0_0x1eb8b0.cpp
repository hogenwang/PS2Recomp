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

// Function: sub_001EB8B0
// Address: 0x1eb8b0 - 0x1eb8d0
void sub_001EB8B0_0x1eb8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB8B0_0x1eb8b0");
#endif

    switch (ctx->pc) {
        case 0x1eb8c0u: goto label_1eb8c0;
        default: break;
    }

    ctx->pc = 0x1eb8b0u;

    // 0x1eb8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eb8b8: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EB8B8u;
    SET_GPR_U32(ctx, 31, 0x1EB8C0u);
    ctx->pc = 0x1EB8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8B8u;
    // 0x1eb8bc: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1EB8B8u, 0x1EB8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB8C0u;
label_1eb8c0:
    // 0x1eb8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb8c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1eb8c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eb8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8C8u;
        // 0x1eb8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB8D0u;
}
