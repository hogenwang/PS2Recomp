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

// Function: sub_001ECB00
// Address: 0x1ecb00 - 0x1ecb28
void sub_001ECB00_0x1ecb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECB00_0x1ecb00");
#endif

    switch (ctx->pc) {
        case 0x1ecb10u: goto label_1ecb10;
        default: break;
    }

    ctx->pc = 0x1ecb00u;

    // 0x1ecb00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ecb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ecb04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecb08: 0xc07b2ca  jal         func_1ECB28
    ctx->pc = 0x1ECB08u;
    SET_GPR_U32(ctx, 31, 0x1ECB10u);
    ctx->pc = 0x1ECB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECB28u, 0x1ECB08u, 0x1ECB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB10u;
label_1ecb10:
    // 0x1ecb10: 0x384201bf  xori        $v0, $v0, 0x1BF
    ctx->pc = 0x1ecb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)447);
    // 0x1ecb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecb18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ecb18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ecb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB1Cu;
        // 0x1ecb20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECB24u;
    // 0x1ecb24: 0x0  nop
    ctx->pc = 0x1ecb24u;
    // NOP
}
