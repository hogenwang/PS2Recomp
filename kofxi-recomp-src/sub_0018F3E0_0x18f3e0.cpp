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

// Function: sub_0018F3E0
// Address: 0x18f3e0 - 0x18f420
void sub_0018F3E0_0x18f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F3E0_0x18f3e0");
#endif

    ctx->pc = 0x18f3e0u;

    // 0x18f3e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f3e4: 0xac60bc00  sw          $zero, -0x4400($v1)
    ctx->pc = 0x18f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949888), GPR_U32(ctx, 0));
    // 0x18f3e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f3ec: 0xac60b840  sw          $zero, -0x47C0($v1)
    ctx->pc = 0x18f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948928), GPR_U32(ctx, 0));
    // 0x18f3f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f3f4: 0xac60b850  sw          $zero, -0x47B0($v1)
    ctx->pc = 0x18f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948944), GPR_U32(ctx, 0));
    // 0x18f3f8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f3fc: 0xac60b848  sw          $zero, -0x47B8($v1)
    ctx->pc = 0x18f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948936), GPR_U32(ctx, 0));
    // 0x18f400: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f404: 0xac60bbf8  sw          $zero, -0x4408($v1)
    ctx->pc = 0x18f404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949880), GPR_U32(ctx, 0));
    // 0x18f408: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f40c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F40Cu;
        // 0x18f410: 0xac60bbf0  sw          $zero, -0x4410($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949872), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F414u;
    // 0x18f414: 0x0  nop
    ctx->pc = 0x18f414u;
    // NOP
    // 0x18f418: 0x0  nop
    ctx->pc = 0x18f418u;
    // NOP
    // 0x18f41c: 0x0  nop
    ctx->pc = 0x18f41cu;
    // NOP
}
