#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242C38
// Address: 0x242c38 - 0x242c58
void sub_00242C38_0x242c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242C38_0x242c38");
#endif

    ctx->pc = 0x242c38u;

    // 0x242c38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x242c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x242c3c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x242c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242c40: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x242c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x242c44: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x242c44u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242c48: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x242c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x242c4c: 0x808b4f8  j           func_22D3E0
    ctx->pc = 0x242C4Cu;
    ctx->pc = 0x242C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242C4Cu;
            // 0x242c50: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x242C54u;
    // 0x242c54: 0x0  nop
    ctx->pc = 0x242c54u;
    // NOP
    ctx->pc = 0x242c58u;
}
