#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223CA8
// Address: 0x223ca8 - 0x223d08
void sub_00223CA8_0x223ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223CA8_0x223ca8");
#endif

    ctx->pc = 0x223ca8u;

    // 0x223ca8: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x223ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x223cac: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x223cacu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x223cb0: 0x25ef2b70  addiu       $t7, $t7, 0x2B70
    ctx->pc = 0x223cb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11120));
    // 0x223cb4: 0x25ce3ba0  addiu       $t6, $t6, 0x3BA0
    ctx->pc = 0x223cb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15264));
    // 0x223cb8: 0xac8f105c  sw          $t7, 0x105C($a0)
    ctx->pc = 0x223cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4188), GPR_U32(ctx, 15));
    // 0x223cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223cc0: 0xac8e1074  sw          $t6, 0x1074($a0)
    ctx->pc = 0x223cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4212), GPR_U32(ctx, 14));
    // 0x223cc4: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x223cc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x223cc8: 0x25ef3368  addiu       $t7, $t7, 0x3368
    ctx->pc = 0x223cc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13160));
    // 0x223ccc: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x223cccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x223cd0: 0xac8f1060  sw          $t7, 0x1060($a0)
    ctx->pc = 0x223cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4192), GPR_U32(ctx, 15));
    // 0x223cd4: 0x25ce35c8  addiu       $t6, $t6, 0x35C8
    ctx->pc = 0x223cd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13768));
    // 0x223cd8: 0xac8e1064  sw          $t6, 0x1064($a0)
    ctx->pc = 0x223cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4196), GPR_U32(ctx, 14));
    // 0x223cdc: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x223cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x223ce0: 0x25ef3800  addiu       $t7, $t7, 0x3800
    ctx->pc = 0x223ce0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 14336));
    // 0x223ce4: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x223ce4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x223ce8: 0xac8f1068  sw          $t7, 0x1068($a0)
    ctx->pc = 0x223ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4200), GPR_U32(ctx, 15));
    // 0x223cec: 0x25ce39e8  addiu       $t6, $t6, 0x39E8
    ctx->pc = 0x223cecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 14824));
    // 0x223cf0: 0xac8e106c  sw          $t6, 0x106C($a0)
    ctx->pc = 0x223cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4204), GPR_U32(ctx, 14));
    // 0x223cf4: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x223cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x223cf8: 0x25ef3aa8  addiu       $t7, $t7, 0x3AA8
    ctx->pc = 0x223cf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15016));
    // 0x223cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x223CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CFCu;
        // 0x223d00: 0xac8f1070  sw          $t7, 0x1070($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4208), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223D04u;
    // 0x223d04: 0x0  nop
    ctx->pc = 0x223d04u;
    // NOP
    if (ctx->pc == 0x223d04u) { ctx->pc = 0x223d08u; }
}
