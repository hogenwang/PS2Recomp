#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B2FA8
// Address: 0x2b2fa8 - 0x2b2fc8
void sub_002B2FA8_0x2b2fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2FA8_0x2b2fa8");
#endif

    switch (ctx->pc) {
        case 0x2b2fc0u: goto label_2b2fc0;
        default: break;
    }

    ctx->pc = 0x2b2fa8u;

    // 0x2b2fa8: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2b2fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2b2fac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2FACu;
    {
        const bool branch_taken_0x2b2fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2FACu;
            // 0x2b2fb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fac) {
            ctx->pc = 0x2B2FC0u;
            goto label_2b2fc0;
        }
    }
    ctx->pc = 0x2B2FB4u;
    // 0x2b2fb4: 0xac8500d8  sw          $a1, 0xD8($a0)
    ctx->pc = 0x2b2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
    // 0x2b2fb8: 0x80acbf2  j           func_2B2FC8
    ctx->pc = 0x2B2FB8u;
    ctx->pc = 0x2B2FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2FB8u;
            // 0x2b2fbc: 0xac8200d4  sw          $v0, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FC8u;
    if (runtime->hasFunction(0x2B2FC8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002B2FC8_0x2b2fc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2B2FC0u;
label_2b2fc0:
    // 0x2b2fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B2FC8u;
    ctx->pc = 0x2b2fc8u;
}
