#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032C8B0
// Address: 0x32c8b0 - 0x32c8e0
void sub_0032C8B0_0x32c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C8B0_0x32c8b0");
#endif

    ctx->pc = 0x32c8b0u;

    // 0x32c8b0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32c8b4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x32c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32c8b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32c8bc: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x32c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
    // 0x32c8c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32c8c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32c8c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32c8cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32c8d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x32C8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C8D4u;
            // 0x32c8d8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C8DCu;
    // 0x32c8dc: 0x0  nop
    ctx->pc = 0x32c8dcu;
    // NOP
    ctx->pc = 0x32c8e0u;
}
