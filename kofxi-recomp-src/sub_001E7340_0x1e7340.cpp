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

// Function: sub_001E7340
// Address: 0x1e7340 - 0x1e7380
void sub_001E7340_0x1e7340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7340_0x1e7340");
#endif

    switch (ctx->pc) {
        case 0x1e7350u: goto label_1e7350;
        case 0x1e7360u: goto label_1e7360;
        case 0x1e7370u: goto label_1e7370;
        default: break;
    }

    ctx->pc = 0x1e7340u;

    // 0x1e7340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7348: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E7348u;
    SET_GPR_U32(ctx, 31, 0x1E7350u);
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E7348u, 0x1E7350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7350u;
label_1e7350:
    // 0x1e7350: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1e7350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e7354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7358: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7358u;
        // 0x1e735c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7360u;
label_1e7360:
    // 0x1e7360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7368: 0xc079ce0  jal         func_1E7380
    ctx->pc = 0x1E7368u;
    SET_GPR_U32(ctx, 31, 0x1E7370u);
    ctx->pc = 0x1E7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7380u, 0x1E7368u, 0x1E7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7370u;
label_1e7370:
    // 0x1e7370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7378: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7378u;
        // 0x1e737c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7380u;
}
