#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A070
// Address: 0x18a070 - 0x18a0a0
void sub_0018A070_0x18a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A070_0x18a070");
#endif

    switch (ctx->pc) {
        case 0x18a080u: goto label_18a080;
        case 0x18a088u: goto label_18a088;
        default: break;
    }

    ctx->pc = 0x18a070u;

    // 0x18a070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a078: 0xc062784  jal         func_189E10
    ctx->pc = 0x18A078u;
    SET_GPR_U32(ctx, 31, 0x18A080u);
    ctx->pc = 0x189E10u;
    if (runtime->hasFunction(0x189E10u)) {
        auto targetFn = runtime->lookupFunction(0x189E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A080u; }
        if (ctx->pc != 0x18A080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E10_0x189e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A080u; }
        if (ctx->pc != 0x18A080u) { return; }
    }
    ctx->pc = 0x18A080u;
label_18a080:
    // 0x18a080: 0xc0627ec  jal         func_189FB0
    ctx->pc = 0x18A080u;
    SET_GPR_U32(ctx, 31, 0x18A088u);
    ctx->pc = 0x18A084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A080u;
            // 0x18a084: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FB0u;
    if (runtime->hasFunction(0x189FB0u)) {
        auto targetFn = runtime->lookupFunction(0x189FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A088u; }
        if (ctx->pc != 0x18A088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FB0_0x189fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A088u; }
        if (ctx->pc != 0x18A088u) { return; }
    }
    ctx->pc = 0x18A088u;
label_18a088:
    // 0x18a088: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A088u;
    {
        const bool branch_taken_0x18a088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a088) {
            ctx->pc = 0x18A08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A088u;
            // 0x18a08c: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A094u;
            goto label_18a094;
        }
    }
    ctx->pc = 0x18A090u;
    // 0x18a090: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a094:
    // 0x18a094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a098: 0x3e00008  jr          $ra
    ctx->pc = 0x18A098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A098u;
            // 0x18a09c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A0A0u;
    ctx->pc = 0x18a0a0u;
}
