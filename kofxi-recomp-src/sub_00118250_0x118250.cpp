#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118250
// Address: 0x118250 - 0x1182a0
void sub_00118250_0x118250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118250_0x118250");
#endif

    switch (ctx->pc) {
        case 0x118268u: goto label_118268;
        case 0x118274u: goto label_118274;
        case 0x118284u: goto label_118284;
        default: break;
    }

    ctx->pc = 0x118250u;

    // 0x118250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118258: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11825c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118260: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118260u;
    SET_GPR_U32(ctx, 31, 0x118268u);
    ctx->pc = 0x118264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118260u;
            // 0x118264: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118268u; }
        if (ctx->pc != 0x118268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118268u; }
        if (ctx->pc != 0x118268u) { return; }
    }
    ctx->pc = 0x118268u;
label_118268:
    // 0x118268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11826c: 0xc046064  jal         func_118190
    ctx->pc = 0x11826Cu;
    SET_GPR_U32(ctx, 31, 0x118274u);
    ctx->pc = 0x118270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11826Cu;
            // 0x118270: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118190u;
    if (runtime->hasFunction(0x118190u)) {
        auto targetFn = runtime->lookupFunction(0x118190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118274u; }
        if (ctx->pc != 0x118274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118190_0x118190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118274u; }
        if (ctx->pc != 0x118274u) { return; }
    }
    ctx->pc = 0x118274u;
label_118274:
    // 0x118274: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118274u;
    {
        const bool branch_taken_0x118274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118274u;
            // 0x118278: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118274) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x11827Cu;
    // 0x11827c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11827Cu;
    SET_GPR_U32(ctx, 31, 0x118284u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118284u; }
        if (ctx->pc != 0x118284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118284u; }
        if (ctx->pc != 0x118284u) { return; }
    }
    ctx->pc = 0x118284u;
label_118284:
    // 0x118284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x118284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11828c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11828cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118294: 0x3e00008  jr          $ra
    ctx->pc = 0x118294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118294u;
            // 0x118298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11829Cu;
    // 0x11829c: 0x0  nop
    ctx->pc = 0x11829cu;
    // NOP
    ctx->pc = 0x1182a0u;
}
