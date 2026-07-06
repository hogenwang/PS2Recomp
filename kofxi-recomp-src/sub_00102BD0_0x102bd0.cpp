#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102BD0
// Address: 0x102bd0 - 0x102be8
void sub_00102BD0_0x102bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102BD0_0x102bd0");
#endif

    ctx->pc = 0x102bd0u;

    // 0x102bd0: 0x4842e800  cfc2.ni     $v0, $vi29
    ctx->pc = 0x102bd0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_top);
    // 0x102bd4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x102bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x102bd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x102bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x102BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102BDCu;
            // 0x102be0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102BE4u;
    // 0x102be4: 0x0  nop
    ctx->pc = 0x102be4u;
    // NOP
    ctx->pc = 0x102be8u;
}
