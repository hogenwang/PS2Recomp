#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA768
// Address: 0x1ca768 - 0x1ca780
void sub_001CA768_0x1ca768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA768_0x1ca768");
#endif

    ctx->pc = 0x1ca768u;

    // 0x1ca768: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ca768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ca76c: 0x24638698  addiu       $v1, $v1, -0x7968
    ctx->pc = 0x1ca76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936216));
    // 0x1ca770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca774: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ca774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ca778: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA778u;
            // 0x1ca77c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA780u;
    ctx->pc = 0x1ca780u;
}
