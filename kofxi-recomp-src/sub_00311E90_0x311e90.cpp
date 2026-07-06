#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00311E90
// Address: 0x311e90 - 0x311eb0
void sub_00311E90_0x311e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311E90_0x311e90");
#endif

    ctx->pc = 0x311e90u;

    // 0x311e90: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x311e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x311e94: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311e98: 0x2484d970  addiu       $a0, $a0, -0x2690
    ctx->pc = 0x311e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957424));
    // 0x311e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x311E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311E9Cu;
            // 0x311ea0: 0xac64d950  sw          $a0, -0x26B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957392), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311EA4u;
    // 0x311ea4: 0x0  nop
    ctx->pc = 0x311ea4u;
    // NOP
    // 0x311ea8: 0x0  nop
    ctx->pc = 0x311ea8u;
    // NOP
    // 0x311eac: 0x0  nop
    ctx->pc = 0x311eacu;
    // NOP
    ctx->pc = 0x311eb0u;
}
