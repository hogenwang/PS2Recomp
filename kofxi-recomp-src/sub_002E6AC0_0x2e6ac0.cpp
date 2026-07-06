#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E6AC0
// Address: 0x2e6ac0 - 0x2e6ae8
void sub_002E6AC0_0x2e6ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6AC0_0x2e6ac0");
#endif

    ctx->pc = 0x2e6ac0u;

    // 0x2e6ac0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2e6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2e6ac4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2e6ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e6ac8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2e6ac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2e6acc: 0x3c03efdf  lui         $v1, 0xEFDF
    ctx->pc = 0x2e6accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61407 << 16));
    // 0x2e6ad0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e6ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e6ad4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e6ad8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6adc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e6ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6AE0u;
            // 0x2e6ae4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6AE8u;
    ctx->pc = 0x2e6ae8u;
}
