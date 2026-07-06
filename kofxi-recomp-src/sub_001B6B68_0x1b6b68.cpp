#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6B68
// Address: 0x1b6b68 - 0x1b6b98
void sub_001B6B68_0x1b6b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6B68_0x1b6b68");
#endif

    switch (ctx->pc) {
        case 0x1b6b7cu: goto label_1b6b7c;
        case 0x1b6b84u: goto label_1b6b84;
        default: break;
    }

    ctx->pc = 0x1b6b68u;

    // 0x1b6b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6b70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6b74: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6B74u;
    SET_GPR_U32(ctx, 31, 0x1B6B7Cu);
    ctx->pc = 0x1B6B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B74u;
            // 0x1b6b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B7Cu; }
        if (ctx->pc != 0x1B6B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B7Cu; }
        if (ctx->pc != 0x1B6B7Cu) { return; }
    }
    ctx->pc = 0x1B6B7Cu;
label_1b6b7c:
    // 0x1b6b7c: 0xc06dae6  jal         func_1B6B98
    ctx->pc = 0x1B6B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B84u);
    ctx->pc = 0x1B6B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B7Cu;
            // 0x1b6b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6B98u;
    if (runtime->hasFunction(0x1B6B98u)) {
        auto targetFn = runtime->lookupFunction(0x1B6B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B84u; }
        if (ctx->pc != 0x1B6B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6B98_0x1b6b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B84u; }
        if (ctx->pc != 0x1B6B84u) { return; }
    }
    ctx->pc = 0x1B6B84u;
label_1b6b84:
    // 0x1b6b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6b88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6b8c: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B6B8Cu;
    ctx->pc = 0x1B6B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B8Cu;
            // 0x1b6b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6B94u;
    // 0x1b6b94: 0x0  nop
    ctx->pc = 0x1b6b94u;
    // NOP
    ctx->pc = 0x1b6b98u;
}
