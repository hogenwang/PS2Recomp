#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001800D0
// Address: 0x1800d0 - 0x1800f0
void sub_001800D0_0x1800d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001800D0_0x1800d0");
#endif

    ctx->pc = 0x1800d0u;

    // 0x1800d0: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x1800d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x1800d4: 0x3c030180  lui         $v1, 0x180
    ctx->pc = 0x1800d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
    // 0x1800d8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1800d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1800dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1800DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1800E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1800DCu;
            // 0x1800e0: 0xac830494  sw          $v1, 0x494($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1800E4u;
    // 0x1800e4: 0x0  nop
    ctx->pc = 0x1800e4u;
    // NOP
    // 0x1800e8: 0x0  nop
    ctx->pc = 0x1800e8u;
    // NOP
    // 0x1800ec: 0x0  nop
    ctx->pc = 0x1800ecu;
    // NOP
    ctx->pc = 0x1800f0u;
}
