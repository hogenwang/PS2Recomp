#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001699A0
// Address: 0x1699a0 - 0x1699c0
void sub_001699A0_0x1699a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001699A0_0x1699a0");
#endif

    ctx->pc = 0x1699a0u;

    // 0x1699a0: 0x8c8504a0  lw          $a1, 0x4A0($a0)
    ctx->pc = 0x1699a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1184)));
    // 0x1699a4: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x1699a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1699a8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1699a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1699ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1699ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1699B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1699ACu;
            // 0x1699b0: 0xac8304a0  sw          $v1, 0x4A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1699B4u;
    // 0x1699b4: 0x0  nop
    ctx->pc = 0x1699b4u;
    // NOP
    // 0x1699b8: 0x0  nop
    ctx->pc = 0x1699b8u;
    // NOP
    // 0x1699bc: 0x0  nop
    ctx->pc = 0x1699bcu;
    // NOP
    ctx->pc = 0x1699c0u;
}
