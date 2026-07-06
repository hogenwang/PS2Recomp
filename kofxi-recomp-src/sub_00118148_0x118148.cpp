#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118148
// Address: 0x118148 - 0x118190
void sub_00118148_0x118148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118148_0x118148");
#endif

    switch (ctx->pc) {
        case 0x118160u: goto label_118160;
        case 0x118168u: goto label_118168;
        case 0x118178u: goto label_118178;
        default: break;
    }

    ctx->pc = 0x118148u;

    // 0x118148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11814c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118158: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118158u;
    SET_GPR_U32(ctx, 31, 0x118160u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118160u; }
        if (ctx->pc != 0x118160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118160u; }
        if (ctx->pc != 0x118160u) { return; }
    }
    ctx->pc = 0x118160u;
label_118160:
    // 0x118160: 0xc046036  jal         func_1180D8
    ctx->pc = 0x118160u;
    SET_GPR_U32(ctx, 31, 0x118168u);
    ctx->pc = 0x118164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118160u;
            // 0x118164: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1180D8u;
    if (runtime->hasFunction(0x1180D8u)) {
        auto targetFn = runtime->lookupFunction(0x1180D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118168u; }
        if (ctx->pc != 0x118168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001180D8_0x1180d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118168u; }
        if (ctx->pc != 0x118168u) { return; }
    }
    ctx->pc = 0x118168u;
label_118168:
    // 0x118168: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118168u;
    {
        const bool branch_taken_0x118168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118168u;
            // 0x11816c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118168) {
            ctx->pc = 0x118178u;
            goto label_118178;
        }
    }
    ctx->pc = 0x118170u;
    // 0x118170: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118170u;
    SET_GPR_U32(ctx, 31, 0x118178u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118178u; }
        if (ctx->pc != 0x118178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118178u; }
        if (ctx->pc != 0x118178u) { return; }
    }
    ctx->pc = 0x118178u;
label_118178:
    // 0x118178: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x118178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11817c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11817cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118180: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118188: 0x3e00008  jr          $ra
    ctx->pc = 0x118188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118188u;
            // 0x11818c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118190u;
    ctx->pc = 0x118190u;
}
