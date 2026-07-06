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

// Function: sub_00280F80
// Address: 0x280f80 - 0x280fc0
void sub_00280F80_0x280f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280F80_0x280f80");
#endif

    switch (ctx->pc) {
        case 0x280fb0u: goto label_280fb0;
        default: break;
    }

    ctx->pc = 0x280f80u;

    // 0x280f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280f84: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x280f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f88: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x280f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x280f8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x280f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x280f90: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x280f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x280f94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x280f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f98: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x280f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x280f9c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x280f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x280fa0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x280fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x280fa4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x280fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x280fa8: 0xc0a6bda  jal         func_29AF68
    ctx->pc = 0x280FA8u;
    SET_GPR_U32(ctx, 31, 0x280FB0u);
    ctx->pc = 0x280FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280FA8u;
    // 0x280fac: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AF68u, 0x280FA8u, 0x280FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FB0u;
label_280fb0:
    // 0x280fb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x280fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x280FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FB4u;
        // 0x280fb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280FBCu;
    // 0x280fbc: 0x0  nop
    ctx->pc = 0x280fbcu;
    // NOP
}
