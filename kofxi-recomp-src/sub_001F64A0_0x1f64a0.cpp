#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F64A0
// Address: 0x1f64a0 - 0x1f64b0
void sub_001F64A0_0x1f64a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F64A0_0x1f64a0");
#endif

    ctx->pc = 0x1f64a0u;

    // 0x1f64a0: 0x8c832018  lw          $v1, 0x2018($a0)
    ctx->pc = 0x1f64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f64a4: 0x8c621128  lw          $v0, 0x1128($v1)
    ctx->pc = 0x1f64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4392)));
    // 0x1f64a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F64A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F64ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64A8u;
            // 0x1f64ac: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F64B0u;
    ctx->pc = 0x1f64b0u;
}
