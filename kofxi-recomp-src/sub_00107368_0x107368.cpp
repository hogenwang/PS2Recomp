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

// Function: sub_00107368
// Address: 0x107368 - 0x1073a0
void sub_00107368_0x107368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107368_0x107368");
#endif

    ctx->pc = 0x107368u;

    // 0x107368: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10736c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10736cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x107370: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107374: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x107374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x107378: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107378u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x10737c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x107380: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x107380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x107384: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107384u;
    {
        const bool branch_taken_0x107384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107384) {
            ctx->pc = 0x107394u;
            goto label_107394;
        }
    }
    ctx->pc = 0x10738Cu;
    // 0x10738c: 0x8041b9c  j           func_106E70
    ctx->pc = 0x10738Cu;
    ctx->pc = 0x106E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E70u, 0x10738Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x107394u;
label_107394:
    // 0x107394: 0x3e00008  jr          $ra
    ctx->pc = 0x107394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10739Cu;
    // 0x10739c: 0x0  nop
    ctx->pc = 0x10739cu;
    // NOP
}
