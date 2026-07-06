#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBE08
// Address: 0x1bbe08 - 0x1bbe20
void sub_001BBE08_0x1bbe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBE08_0x1bbe08");
#endif

    ctx->pc = 0x1bbe08u;

    // 0x1bbe08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbe0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbe10: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bbe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbe14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbe14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbe18: 0x806d94e  j           func_1B6538
    ctx->pc = 0x1BBE18u;
    ctx->pc = 0x1BBE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE18u;
            // 0x1bbe1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6538u;
    if (runtime->hasFunction(0x1B6538u)) {
        auto targetFn = runtime->lookupFunction(0x1B6538u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B6538_0x1b6538(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BBE20u;
    ctx->pc = 0x1bbe20u;
}
