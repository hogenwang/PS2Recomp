#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031FB40
// Address: 0x31fb40 - 0x31fb80
void sub_0031FB40_0x31fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FB40_0x31fb40");
#endif

    ctx->pc = 0x31fb40u;

    // 0x31fb40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31fb44: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x31fb44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x31fb48: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x31fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31fb4c: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x31fb4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31fb50: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FB50u;
    {
        const bool branch_taken_0x31fb50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fb50) {
            ctx->pc = 0x31FB54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB50u;
            // 0x31fb54: 0x2841fff0  slti        $at, $v0, -0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967280) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31FB60u;
            goto label_31fb60;
        }
    }
    ctx->pc = 0x31FB58u;
    // 0x31fb58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FB58u;
    {
        const bool branch_taken_0x31fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FB58u;
            // 0x31fb5c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb58) {
            ctx->pc = 0x31FB6Cu;
            goto label_31fb6c;
        }
    }
    ctx->pc = 0x31FB60u;
label_31fb60:
    // 0x31fb60: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x31FB60u;
    {
        const bool branch_taken_0x31fb60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fb60) {
            ctx->pc = 0x31FB6Cu;
            goto label_31fb6c;
        }
    }
    ctx->pc = 0x31FB68u;
    // 0x31fb68: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x31fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_31fb6c:
    // 0x31fb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31FB74u;
    // 0x31fb74: 0x0  nop
    ctx->pc = 0x31fb74u;
    // NOP
    // 0x31fb78: 0x0  nop
    ctx->pc = 0x31fb78u;
    // NOP
    // 0x31fb7c: 0x0  nop
    ctx->pc = 0x31fb7cu;
    // NOP
    ctx->pc = 0x31fb80u;
}
