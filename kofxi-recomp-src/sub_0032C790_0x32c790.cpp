#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032C790
// Address: 0x32c790 - 0x32c7d0
void sub_0032C790_0x32c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C790_0x32c790");
#endif

    ctx->pc = 0x32c790u;

    // 0x32c790: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32c790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32c794: 0xac60f380  sw          $zero, -0xC80($v1)
    ctx->pc = 0x32c794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964096), GPR_U32(ctx, 0));
    // 0x32c798: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32c798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32c79c: 0xac60f384  sw          $zero, -0xC7C($v1)
    ctx->pc = 0x32c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964100), GPR_U32(ctx, 0));
    // 0x32c7a0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32c7a4: 0xac60f388  sw          $zero, -0xC78($v1)
    ctx->pc = 0x32c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964104), GPR_U32(ctx, 0));
    // 0x32c7a8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32c7ac: 0xac60f38c  sw          $zero, -0xC74($v1)
    ctx->pc = 0x32c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964108), GPR_U32(ctx, 0));
    // 0x32c7b0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32c7b4: 0xac60f390  sw          $zero, -0xC70($v1)
    ctx->pc = 0x32c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964112), GPR_U32(ctx, 0));
    // 0x32c7b8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32c7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x32C7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C7BCu;
            // 0x32c7c0: 0xac60f394  sw          $zero, -0xC6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C7C4u;
    // 0x32c7c4: 0x0  nop
    ctx->pc = 0x32c7c4u;
    // NOP
    // 0x32c7c8: 0x0  nop
    ctx->pc = 0x32c7c8u;
    // NOP
    // 0x32c7cc: 0x0  nop
    ctx->pc = 0x32c7ccu;
    // NOP
    ctx->pc = 0x32c7d0u;
}
