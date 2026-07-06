#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B880
// Address: 0x28b880 - 0x28b8a8
void sub_0028B880_0x28b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B880_0x28b880");
#endif

    switch (ctx->pc) {
        case 0x28b890u: goto label_28b890;
        default: break;
    }

    ctx->pc = 0x28b880u;

    // 0x28b880: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28b880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28b884: 0x3e00008  jr          $ra
    ctx->pc = 0x28B884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B884u;
            // 0x28b888: 0x24423720  addiu       $v0, $v0, 0x3720 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B88Cu;
    // 0x28b88c: 0x0  nop
    ctx->pc = 0x28b88cu;
    // NOP
label_28b890:
    // 0x28b890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b894: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x28b894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x28b898: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x28b898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28b89c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B89Cu;
            // 0x28b8a0: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B8A4u;
    // 0x28b8a4: 0x0  nop
    ctx->pc = 0x28b8a4u;
    // NOP
    ctx->pc = 0x28b8a8u;
}
