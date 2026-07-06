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

// Function: sub_001DFFF0
// Address: 0x1dfff0 - 0x1e0020
void sub_001DFFF0_0x1dfff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFFF0_0x1dfff0");
#endif

    switch (ctx->pc) {
        case 0x1e0000u: goto label_1e0000;
        default: break;
    }

    ctx->pc = 0x1dfff0u;

    // 0x1dfff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dfff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dfff8: 0xc07fe1e  jal         func_1FF878
    ctx->pc = 0x1DFFF8u;
    SET_GPR_U32(ctx, 31, 0x1E0000u);
    ctx->pc = 0x1DFFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFFF8u;
    // 0x1dfffc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF878u, 0x1DFFF8u, 0x1E0000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0000u;
label_1e0000:
    // 0x1e0000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0004: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e0004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0008: 0x432026  xor         $a0, $v0, $v1
    ctx->pc = 0x1e0008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1e000c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e000cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0010: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0014: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x1e0014u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1e0018: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0018u;
        // 0x1e001c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0020u;
}
