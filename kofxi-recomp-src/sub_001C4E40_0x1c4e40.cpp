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

// Function: sub_001C4E40
// Address: 0x1c4e40 - 0x1c4e60
void sub_001C4E40_0x1c4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4E40_0x1c4e40");
#endif

    switch (ctx->pc) {
        case 0x1c4e50u: goto label_1c4e50;
        default: break;
    }

    ctx->pc = 0x1c4e40u;

    // 0x1c4e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4e48: 0xc071376  jal         func_1C4DD8
    ctx->pc = 0x1C4E48u;
    SET_GPR_U32(ctx, 31, 0x1C4E50u);
    ctx->pc = 0x1C4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4DD8u, 0x1C4E48u, 0x1C4E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E50u;
label_1c4e50:
    // 0x1c4e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4e54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c4e54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c4e58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E58u;
        // 0x1c4e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4E60u;
}
