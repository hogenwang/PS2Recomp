#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3210
// Address: 0x1a3210 - 0x1a3240
void sub_001A3210_0x1a3210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3210_0x1a3210");
#endif

    ctx->pc = 0x1a3210u;

    // 0x1a3210: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a3210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a3214: 0x8c42ea38  lw          $v0, -0x15C8($v0)
    ctx->pc = 0x1a3214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961720)));
    // 0x1a3218: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3218u;
    {
        const bool branch_taken_0x1a3218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3218) {
            ctx->pc = 0x1A3228u;
            goto label_1a3228;
        }
    }
    ctx->pc = 0x1A3220u;
    // 0x1a3220: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3220u;
    {
        const bool branch_taken_0x1a3220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3220u;
            // 0x1a3224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3220) {
            ctx->pc = 0x1A3238u;
            goto label_1a3238;
        }
    }
    ctx->pc = 0x1A3228u;
label_1a3228:
    // 0x1a3228: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a3228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a322c: 0x8c42ea3c  lw          $v0, -0x15C4($v0)
    ctx->pc = 0x1a322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961724)));
    // 0x1a3230: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1a3230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1a3234: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a3238:
    // 0x1a3238: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3240u;
    ctx->pc = 0x1a3240u;
}
