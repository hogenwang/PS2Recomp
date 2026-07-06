#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1830
// Address: 0x2b1830 - 0x2b1840
void sub_002B1830_0x2b1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1830_0x2b1830");
#endif

    switch (ctx->pc) {
        case 0x2b1838u: goto label_2b1838;
        default: break;
    }

    ctx->pc = 0x2b1830u;

    // 0x2b1830: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1830u;
            // 0x2b1834: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1838u;
label_2b1838:
    // 0x2b1838: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B183Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1838u;
            // 0x2b183c: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1840u;
    ctx->pc = 0x2b1840u;
}
