#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8650
// Address: 0x1b8650 - 0x1b86a0
void sub_001B8650_0x1b8650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8650_0x1b8650");
#endif

    switch (ctx->pc) {
        case 0x1b8668u: goto label_1b8668;
        case 0x1b867cu: goto label_1b867c;
        case 0x1b8684u: goto label_1b8684;
        case 0x1b868cu: goto label_1b868c;
        default: break;
    }

    ctx->pc = 0x1b8650u;

    // 0x1b8650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b865c: 0x806d38e  j           func_1B4E38
    ctx->pc = 0x1B865Cu;
    ctx->pc = 0x1B8660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B865Cu;
            // 0x1b8660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4E38u;
    {
        auto targetFn = runtime->lookupFunction(0x1B4E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B8664u;
    // 0x1b8664: 0x0  nop
    ctx->pc = 0x1b8664u;
    // NOP
label_1b8668:
    // 0x1b8668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b866c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b8670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b8674: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B8674u;
    SET_GPR_U32(ctx, 31, 0x1B867Cu);
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B867Cu; }
        if (ctx->pc != 0x1B867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B867Cu; }
        if (ctx->pc != 0x1B867Cu) { return; }
    }
    ctx->pc = 0x1B867Cu;
label_1b867c:
    // 0x1b867c: 0xc06e1a8  jal         func_1B86A0
    ctx->pc = 0x1B867Cu;
    SET_GPR_U32(ctx, 31, 0x1B8684u);
    ctx->pc = 0x1B86A0u;
    if (runtime->hasFunction(0x1B86A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B86A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8684u; }
        if (ctx->pc != 0x1B8684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B86A0_0x1b86a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8684u; }
        if (ctx->pc != 0x1B8684u) { return; }
    }
    ctx->pc = 0x1B8684u;
label_1b8684:
    // 0x1b8684: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B8684u;
    SET_GPR_U32(ctx, 31, 0x1B868Cu);
    ctx->pc = 0x1B8688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8684u;
            // 0x1b8688: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B868Cu; }
        if (ctx->pc != 0x1B868Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B868Cu; }
        if (ctx->pc != 0x1B868Cu) { return; }
    }
    ctx->pc = 0x1B868Cu;
label_1b868c:
    // 0x1b868c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b868cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8690: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8698: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B869Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8698u;
            // 0x1b869c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B86A0u;
    ctx->pc = 0x1b86a0u;
}
