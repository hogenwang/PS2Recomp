#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6D58
// Address: 0x1b6d58 - 0x1b6d90
void sub_001B6D58_0x1b6d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D58_0x1b6d58");
#endif

    ctx->pc = 0x1b6d58u;

    // 0x1b6d58: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1b6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b6d5c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1b6d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1b6d60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6D60u;
    {
        const bool branch_taken_0x1b6d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D60u;
            // 0x1b6d64: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d60) {
            ctx->pc = 0x1B6D70u;
            goto label_1b6d70;
        }
    }
    ctx->pc = 0x1B6D68u;
    // 0x1b6d68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6D68u;
    {
        const bool branch_taken_0x1b6d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D68u;
            // 0x1b6d6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d68) {
            ctx->pc = 0x1B6D74u;
            goto label_1b6d74;
        }
    }
    ctx->pc = 0x1B6D70u;
label_1b6d70:
    // 0x1b6d70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b6d74:
    // 0x1b6d74: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x1b6d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b6d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6d7c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1b6d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6d80: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1b6d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1b6d84: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1b6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1b6d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D88u;
            // 0x1b6d8c: 0xa0820047  sb          $v0, 0x47($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 71), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6D90u;
    ctx->pc = 0x1b6d90u;
}
