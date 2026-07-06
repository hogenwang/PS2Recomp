#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CA30
// Address: 0x29ca30 - 0x29ca78
void sub_0029CA30_0x29ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CA30_0x29ca30");
#endif

    switch (ctx->pc) {
        case 0x29ca70u: goto label_29ca70;
        default: break;
    }

    ctx->pc = 0x29ca30u;

    // 0x29ca30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ca34: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x29ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x29ca38: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29CA38u;
    {
        const bool branch_taken_0x29ca38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29ca38) {
            ctx->pc = 0x29CA70u;
            goto label_29ca70;
        }
    }
    ctx->pc = 0x29CA40u;
    // 0x29ca40: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x29ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29ca44: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29ca48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29CA48u;
    {
        const bool branch_taken_0x29ca48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca48) {
            ctx->pc = 0x29CA68u;
            goto label_29ca68;
        }
    }
    ctx->pc = 0x29CA50u;
    // 0x29ca50: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x29ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29ca54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CA54u;
    {
        const bool branch_taken_0x29ca54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca54) {
            ctx->pc = 0x29CA68u;
            goto label_29ca68;
        }
    }
    ctx->pc = 0x29CA5Cu;
    // 0x29ca5c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x29ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x29ca60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CA60u;
    {
        const bool branch_taken_0x29ca60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ca60) {
            ctx->pc = 0x29CA70u;
            goto label_29ca70;
        }
    }
    ctx->pc = 0x29CA68u;
label_29ca68:
    // 0x29ca68: 0x3e00008  jr          $ra
    ctx->pc = 0x29CA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA68u;
            // 0x29ca6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CA70u;
label_29ca70:
    // 0x29ca70: 0x3e00008  jr          $ra
    ctx->pc = 0x29CA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA70u;
            // 0x29ca74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CA78u;
    ctx->pc = 0x29ca78u;
}
