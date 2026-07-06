#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6A38
// Address: 0x1f6a38 - 0x1f6a60
void sub_001F6A38_0x1f6a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6A38_0x1f6a38");
#endif

    ctx->pc = 0x1f6a38u;

    // 0x1f6a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6a3c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x1f6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x1f6a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6a44: 0x24a59b30  addiu       $a1, $a1, -0x64D0
    ctx->pc = 0x1f6a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941488));
    // 0x1f6a48: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1f6a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1f6a4c: 0x8c842018  lw          $a0, 0x2018($a0)
    ctx->pc = 0x1f6a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f6a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6a54: 0x24841150  addiu       $a0, $a0, 0x1150
    ctx->pc = 0x1f6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
    // 0x1f6a58: 0x807580e  j           func_1D6038
    ctx->pc = 0x1F6A58u;
    ctx->pc = 0x1F6A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A58u;
            // 0x1f6a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6038u;
    {
        auto targetFn = runtime->lookupFunction(0x1D6038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1F6A60u;
    ctx->pc = 0x1f6a60u;
}
