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

// Function: sub_00124B98
// Address: 0x124b98 - 0x124bf8
void sub_00124B98_0x124b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124B98_0x124b98");
#endif

    ctx->pc = 0x124b98u;

    // 0x124b98: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x124b98u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x124b9c: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x124b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x124ba0: 0x3c0e0013  lui         $t6, 0x13
    ctx->pc = 0x124ba0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)19 << 16));
    // 0x124ba4: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x124ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x124ba8: 0x25ef9960  addiu       $t7, $t7, -0x66A0
    ctx->pc = 0x124ba8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941024));
    // 0x124bac: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x124bacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x124bb0: 0x25ce99c0  addiu       $t6, $t6, -0x6640
    ctx->pc = 0x124bb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941120));
    // 0x124bb4: 0xac8f0020  sw          $t7, 0x20($a0)
    ctx->pc = 0x124bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 15));
    // 0x124bb8: 0xac8e0024  sw          $t6, 0x24($a0)
    ctx->pc = 0x124bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 14));
    // 0x124bbc: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x124bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x124bc0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x124bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x124bc4: 0x3c0e0013  lui         $t6, 0x13
    ctx->pc = 0x124bc4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)19 << 16));
    // 0x124bc8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x124bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x124bcc: 0x25ef9a40  addiu       $t7, $t7, -0x65C0
    ctx->pc = 0x124bccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941248));
    // 0x124bd0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x124bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x124bd4: 0x25ce9aa8  addiu       $t6, $t6, -0x6558
    ctx->pc = 0x124bd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941352));
    // 0x124bd8: 0xac8f0028  sw          $t7, 0x28($a0)
    ctx->pc = 0x124bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 15));
    // 0x124bdc: 0xac8e002c  sw          $t6, 0x2C($a0)
    ctx->pc = 0x124bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 14));
    // 0x124be0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x124be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x124be4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x124be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x124be8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x124be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x124bec: 0x3e00008  jr          $ra
    ctx->pc = 0x124BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BECu;
        // 0x124bf0: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124BF4u;
    // 0x124bf4: 0x0  nop
    ctx->pc = 0x124bf4u;
    // NOP
    if (ctx->pc == 0x124bf4u) { ctx->pc = 0x124bf8u; }
}
