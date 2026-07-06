#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231A60
// Address: 0x231a60 - 0x231a88
void sub_00231A60_0x231a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A60_0x231a60");
#endif

    switch (ctx->pc) {
        case 0x231a7cu: goto label_231a7c;
        default: break;
    }

    ctx->pc = 0x231a60u;

    // 0x231a60: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231A60u;
    {
        const bool branch_taken_0x231a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A60u;
            // 0x231a64: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a60) {
            ctx->pc = 0x231A7Cu;
            goto label_231a7c;
        }
    }
    ctx->pc = 0x231A68u;
    // 0x231a68: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x231a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x231a6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x231a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231a70: 0x8c44fa20  lw          $a0, -0x5E0($v0)
    ctx->pc = 0x231a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965792)));
    // 0x231a74: 0x8043320  j           func_10CC80
    ctx->pc = 0x231A74u;
    ctx->pc = 0x231A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231A74u;
            // 0x231a78: 0xaca3acc4  sw          $v1, -0x533C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294945988), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x231A7Cu;
label_231a7c:
    // 0x231a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x231A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231A84u;
    // 0x231a84: 0x0  nop
    ctx->pc = 0x231a84u;
    // NOP
    ctx->pc = 0x231a88u;
}
