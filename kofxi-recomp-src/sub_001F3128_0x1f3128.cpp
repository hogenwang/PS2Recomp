#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3128
// Address: 0x1f3128 - 0x1f3178
void sub_001F3128_0x1f3128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3128_0x1f3128");
#endif

    switch (ctx->pc) {
        case 0x1f3168u: goto label_1f3168;
        default: break;
    }

    ctx->pc = 0x1f3128u;

    // 0x1f3128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f312c: 0x50a2000e  beql        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F312Cu;
    {
        const bool branch_taken_0x1f312c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f312c) {
            ctx->pc = 0x1F3130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F312Cu;
            // 0x1f3130: 0x8c820a18  lw          $v0, 0xA18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2584)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3168u;
            goto label_1f3168;
        }
    }
    ctx->pc = 0x1F3134u;
    // 0x1f3134: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x1f3134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f3138: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3138u;
    {
        const bool branch_taken_0x1f3138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3138u;
            // 0x1f313c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3138) {
            ctx->pc = 0x1F3158u;
            goto label_1f3158;
        }
    }
    ctx->pc = 0x1F3140u;
    // 0x1f3140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3144: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3144u;
    {
        const bool branch_taken_0x1f3144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f3144) {
            ctx->pc = 0x1F3148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3144u;
            // 0x1f3148: 0x8c820a14  lw          $v0, 0xA14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2580)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3168u;
            goto label_1f3168;
        }
    }
    ctx->pc = 0x1F314Cu;
    // 0x1f314c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F314Cu;
    {
        const bool branch_taken_0x1f314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f314c) {
            ctx->pc = 0x1F316Cu;
            goto label_1f316c;
        }
    }
    ctx->pc = 0x1F3154u;
    // 0x1f3154: 0x0  nop
    ctx->pc = 0x1f3154u;
    // NOP
label_1f3158:
    // 0x1f3158: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3158u;
    {
        const bool branch_taken_0x1f3158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f3158) {
            ctx->pc = 0x1F315Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3158u;
            // 0x1f315c: 0x8c820a1c  lw          $v0, 0xA1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2588)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3168u;
            goto label_1f3168;
        }
    }
    ctx->pc = 0x1F3160u;
    // 0x1f3160: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3160u;
            // 0x1f3164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3168u;
label_1f3168:
    // 0x1f3168: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f3168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f316c:
    // 0x1f316c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F316Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3174u;
    // 0x1f3174: 0x0  nop
    ctx->pc = 0x1f3174u;
    // NOP
    ctx->pc = 0x1f3178u;
}
