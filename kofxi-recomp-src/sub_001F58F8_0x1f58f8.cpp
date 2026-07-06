#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F58F8
// Address: 0x1f58f8 - 0x1f5910
void sub_001F58F8_0x1f58f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F58F8_0x1f58f8");
#endif

    ctx->pc = 0x1f58f8u;

    // 0x1f58f8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1f58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1f58fc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1f58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5900: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1f5900u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f5904: 0x5180b  movn        $v1, $zero, $a1
    ctx->pc = 0x1f5904u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f5908: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F590Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5908u;
            // 0x1f590c: 0xac83005c  sw          $v1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5910u;
    ctx->pc = 0x1f5910u;
}
