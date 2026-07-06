#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5438
// Address: 0x1f5438 - 0x1f5460
void sub_001F5438_0x1f5438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5438_0x1f5438");
#endif

    switch (ctx->pc) {
        case 0x1f5458u: goto label_1f5458;
        default: break;
    }

    ctx->pc = 0x1f5438u;

    // 0x1f5438: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5438u;
    {
        const bool branch_taken_0x1f5438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5438u;
            // 0x1f543c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5438) {
            ctx->pc = 0x1F5458u;
            goto label_1f5458;
        }
    }
    ctx->pc = 0x1F5440u;
    // 0x1f5440: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f5440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5444: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5444u;
    {
        const bool branch_taken_0x1f5444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5444) {
            ctx->pc = 0x1F5448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5444u;
            // 0x1f5448: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5458u;
            goto label_1f5458;
        }
    }
    ctx->pc = 0x1F544Cu;
    // 0x1f544c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5450: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5450u;
            // 0x1f5454: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5458u;
label_1f5458:
    // 0x1f5458: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5460u;
    ctx->pc = 0x1f5460u;
}
