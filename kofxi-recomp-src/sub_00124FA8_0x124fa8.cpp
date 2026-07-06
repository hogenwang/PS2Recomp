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

// Function: sub_00124FA8
// Address: 0x124fa8 - 0x124fe0
void sub_00124FA8_0x124fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124FA8_0x124fa8");
#endif

    switch (ctx->pc) {
        case 0x124fd0u: goto label_124fd0;
        default: break;
    }

    ctx->pc = 0x124fa8u;

    // 0x124fa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124fac: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x124facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x124fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124fb4: 0xffa70018  sd          $a3, 0x18($sp)
    ctx->pc = 0x124fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 7));
    // 0x124fb8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x124fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x124fbc: 0xffa80020  sd          $t0, 0x20($sp)
    ctx->pc = 0x124fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 8));
    // 0x124fc0: 0xffa90028  sd          $t1, 0x28($sp)
    ctx->pc = 0x124fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 9));
    // 0x124fc4: 0xffaa0030  sd          $t2, 0x30($sp)
    ctx->pc = 0x124fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 10));
    // 0x124fc8: 0xc04afb2  jal         func_12BEC8
    ctx->pc = 0x124FC8u;
    SET_GPR_U32(ctx, 31, 0x124FD0u);
    ctx->pc = 0x124FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FC8u;
    // 0x124fcc: 0xffab0038  sd          $t3, 0x38($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BEC8u, 0x124FC8u, 0x124FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FD0u;
label_124fd0:
    // 0x124fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x124FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FD4u;
        // 0x124fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124FDCu;
    // 0x124fdc: 0x0  nop
    ctx->pc = 0x124fdcu;
    // NOP
}
