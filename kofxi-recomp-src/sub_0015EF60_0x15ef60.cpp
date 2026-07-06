#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EF60
// Address: 0x15ef60 - 0x15ef80
void sub_0015EF60_0x15ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EF60_0x15ef60");
#endif

    ctx->pc = 0x15ef60u;

    // 0x15ef60: 0xa4a4000c  sh          $a0, 0xC($a1)
    ctx->pc = 0x15ef60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x15ef64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15ef64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef68: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x15ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15ef6c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x15ef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x15ef70: 0x3e00008  jr          $ra
    ctx->pc = 0x15EF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF70u;
            // 0x15ef74: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EF78u;
    // 0x15ef78: 0x0  nop
    ctx->pc = 0x15ef78u;
    // NOP
    // 0x15ef7c: 0x0  nop
    ctx->pc = 0x15ef7cu;
    // NOP
    ctx->pc = 0x15ef80u;
}
