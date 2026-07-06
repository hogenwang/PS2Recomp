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

// Function: sub_00222910
// Address: 0x222910 - 0x222970
void sub_00222910_0x222910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222910_0x222910");
#endif

    ctx->pc = 0x222910u;

    // 0x222910: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x222910u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x222914: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x222914u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x222918: 0x25ef1d98  addiu       $t7, $t7, 0x1D98
    ctx->pc = 0x222918u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 7576));
    // 0x22291c: 0x25ce2808  addiu       $t6, $t6, 0x2808
    ctx->pc = 0x22291cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 10248));
    // 0x222920: 0xac8f105c  sw          $t7, 0x105C($a0)
    ctx->pc = 0x222920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4188), GPR_U32(ctx, 15));
    // 0x222924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222928: 0xac8e1074  sw          $t6, 0x1074($a0)
    ctx->pc = 0x222928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4212), GPR_U32(ctx, 14));
    // 0x22292c: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x22292cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x222930: 0x25ef2150  addiu       $t7, $t7, 0x2150
    ctx->pc = 0x222930u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8528));
    // 0x222934: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x222934u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x222938: 0xac8f1060  sw          $t7, 0x1060($a0)
    ctx->pc = 0x222938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4192), GPR_U32(ctx, 15));
    // 0x22293c: 0x25ce2350  addiu       $t6, $t6, 0x2350
    ctx->pc = 0x22293cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 9040));
    // 0x222940: 0xac8e1064  sw          $t6, 0x1064($a0)
    ctx->pc = 0x222940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4196), GPR_U32(ctx, 14));
    // 0x222944: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x222944u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x222948: 0x25ef2588  addiu       $t7, $t7, 0x2588
    ctx->pc = 0x222948u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9608));
    // 0x22294c: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x22294cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x222950: 0xac8f1068  sw          $t7, 0x1068($a0)
    ctx->pc = 0x222950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4200), GPR_U32(ctx, 15));
    // 0x222954: 0x25ce2668  addiu       $t6, $t6, 0x2668
    ctx->pc = 0x222954u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 9832));
    // 0x222958: 0xac8e106c  sw          $t6, 0x106C($a0)
    ctx->pc = 0x222958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4204), GPR_U32(ctx, 14));
    // 0x22295c: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x22295cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x222960: 0x25ef2728  addiu       $t7, $t7, 0x2728
    ctx->pc = 0x222960u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 10024));
    // 0x222964: 0x3e00008  jr          $ra
    ctx->pc = 0x222964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222964u;
        // 0x222968: 0xac8f1070  sw          $t7, 0x1070($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4208), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22296Cu;
    // 0x22296c: 0x0  nop
    ctx->pc = 0x22296cu;
    // NOP
}
