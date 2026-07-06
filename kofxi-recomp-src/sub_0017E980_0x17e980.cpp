#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E980
// Address: 0x17e980 - 0x17e9c0
void sub_0017E980_0x17e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E980_0x17e980");
#endif

    ctx->pc = 0x17e980u;

    // 0x17e980: 0xa0800540  sb          $zero, 0x540($a0)
    ctx->pc = 0x17e980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1344), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e984: 0xa080055c  sb          $zero, 0x55C($a0)
    ctx->pc = 0x17e984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1372), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e988: 0xac800544  sw          $zero, 0x544($a0)
    ctx->pc = 0x17e988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1348), GPR_U32(ctx, 0));
    // 0x17e98c: 0xac800560  sw          $zero, 0x560($a0)
    ctx->pc = 0x17e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 0));
    // 0x17e990: 0xac800548  sw          $zero, 0x548($a0)
    ctx->pc = 0x17e990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1352), GPR_U32(ctx, 0));
    // 0x17e994: 0xac800564  sw          $zero, 0x564($a0)
    ctx->pc = 0x17e994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1380), GPR_U32(ctx, 0));
    // 0x17e998: 0xac80054c  sw          $zero, 0x54C($a0)
    ctx->pc = 0x17e998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1356), GPR_U32(ctx, 0));
    // 0x17e99c: 0xac800568  sw          $zero, 0x568($a0)
    ctx->pc = 0x17e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1384), GPR_U32(ctx, 0));
    // 0x17e9a0: 0xac800550  sw          $zero, 0x550($a0)
    ctx->pc = 0x17e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1360), GPR_U32(ctx, 0));
    // 0x17e9a4: 0xac80056c  sw          $zero, 0x56C($a0)
    ctx->pc = 0x17e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1388), GPR_U32(ctx, 0));
    // 0x17e9a8: 0xac800554  sw          $zero, 0x554($a0)
    ctx->pc = 0x17e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1364), GPR_U32(ctx, 0));
    // 0x17e9ac: 0xac800570  sw          $zero, 0x570($a0)
    ctx->pc = 0x17e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1392), GPR_U32(ctx, 0));
    // 0x17e9b0: 0xac800558  sw          $zero, 0x558($a0)
    ctx->pc = 0x17e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1368), GPR_U32(ctx, 0));
    // 0x17e9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17E9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9B4u;
            // 0x17e9b8: 0xac800574  sw          $zero, 0x574($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E9BCu;
    // 0x17e9bc: 0x0  nop
    ctx->pc = 0x17e9bcu;
    // NOP
    ctx->pc = 0x17e9c0u;
}
