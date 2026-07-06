#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201A38
// Address: 0x201a38 - 0x201a48
void sub_00201A38_0x201a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201A38_0x201a38");
#endif

    switch (ctx->pc) {
        case 0x201a40u: goto label_201a40;
        default: break;
    }

    ctx->pc = 0x201a38u;

    // 0x201a38: 0x3e00008  jr          $ra
    ctx->pc = 0x201A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201A38u;
            // 0x201a3c: 0xac850034  sw          $a1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201A40u;
label_201a40:
    // 0x201a40: 0x3e00008  jr          $ra
    ctx->pc = 0x201A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201A40u;
            // 0x201a44: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201A48u;
    ctx->pc = 0x201a48u;
}
