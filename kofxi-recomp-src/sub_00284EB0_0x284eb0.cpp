#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284EB0
// Address: 0x284eb0 - 0x284ec8
void sub_00284EB0_0x284eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284EB0_0x284eb0");
#endif

    ctx->pc = 0x284eb0u;

    // 0x284eb0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x284eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x284eb4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x284eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x284eb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x284eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x284ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x284EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284EBCu;
            // 0x284ec0: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284EC4u;
    // 0x284ec4: 0x0  nop
    ctx->pc = 0x284ec4u;
    // NOP
    ctx->pc = 0x284ec8u;
}
