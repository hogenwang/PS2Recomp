#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301110
// Address: 0x301110 - 0x301130
void sub_00301110_0x301110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301110_0x301110");
#endif

    ctx->pc = 0x301110u;

    // 0x301110: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x301110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x301114: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x301114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x301118: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x301118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30111c: 0x8c44b7d8  lw          $a0, -0x4828($v0)
    ctx->pc = 0x30111cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    // 0x301120: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x301120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x301124: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x301124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301128: 0x3e00008  jr          $ra
    ctx->pc = 0x301128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301128u;
            // 0x30112c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301130u;
    ctx->pc = 0x301130u;
}
