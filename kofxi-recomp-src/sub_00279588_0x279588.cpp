#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279588
// Address: 0x279588 - 0x2795b0
void sub_00279588_0x279588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279588_0x279588");
#endif

    ctx->pc = 0x279588u;

    // 0x279588: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x279588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x27958c: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x27958cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x279590: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x279590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x279594: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x279594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x279598: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x279598u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x27959c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x27959cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2795a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2795a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2795a4: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x2795a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x2795a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2795A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2795ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2795A8u;
            // 0x2795ac: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2795B0u;
    ctx->pc = 0x2795b0u;
}
