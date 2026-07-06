#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BFBC0
// Address: 0x2bfbc0 - 0x2bfbe0
void sub_002BFBC0_0x2bfbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFBC0_0x2bfbc0");
#endif

    switch (ctx->pc) {
        case 0x2bfbd8u: goto label_2bfbd8;
        default: break;
    }

    ctx->pc = 0x2bfbc0u;

    // 0x2bfbc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bfbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfbc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfbc8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFBC8u;
    {
        const bool branch_taken_0x2bfbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bfbc8) {
            ctx->pc = 0x2BFBD8u;
            goto label_2bfbd8;
        }
    }
    ctx->pc = 0x2BFBD0u;
    // 0x2bfbd0: 0x80b1600  j           func_2C5800
    ctx->pc = 0x2BFBD0u;
    ctx->pc = 0x2BFBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBD0u;
            // 0x2bfbd4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5800u;
    {
        auto targetFn = runtime->lookupFunction(0x2C5800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2BFBD8u;
label_2bfbd8:
    // 0x2bfbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFBE0u;
    ctx->pc = 0x2bfbe0u;
}
