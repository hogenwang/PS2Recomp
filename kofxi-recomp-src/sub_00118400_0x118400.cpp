#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118400
// Address: 0x118400 - 0x118450
void sub_00118400_0x118400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118400_0x118400");
#endif

    switch (ctx->pc) {
        case 0x118418u: goto label_118418;
        case 0x118424u: goto label_118424;
        case 0x118434u: goto label_118434;
        default: break;
    }

    ctx->pc = 0x118400u;

    // 0x118400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118408: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11840c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118410: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118410u;
    SET_GPR_U32(ctx, 31, 0x118418u);
    ctx->pc = 0x118414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118410u;
            // 0x118414: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118418u; }
        if (ctx->pc != 0x118418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118418u; }
        if (ctx->pc != 0x118418u) { return; }
    }
    ctx->pc = 0x118418u;
label_118418:
    // 0x118418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11841c: 0xc0460d4  jal         func_118350
    ctx->pc = 0x11841Cu;
    SET_GPR_U32(ctx, 31, 0x118424u);
    ctx->pc = 0x118420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11841Cu;
            // 0x118420: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118350u;
    if (runtime->hasFunction(0x118350u)) {
        auto targetFn = runtime->lookupFunction(0x118350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118424u; }
        if (ctx->pc != 0x118424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118350_0x118350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118424u; }
        if (ctx->pc != 0x118424u) { return; }
    }
    ctx->pc = 0x118424u;
label_118424:
    // 0x118424: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118424u;
    {
        const bool branch_taken_0x118424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118424u;
            // 0x118428: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118424) {
            ctx->pc = 0x118434u;
            goto label_118434;
        }
    }
    ctx->pc = 0x11842Cu;
    // 0x11842c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11842Cu;
    SET_GPR_U32(ctx, 31, 0x118434u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118434u; }
        if (ctx->pc != 0x118434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118434u; }
        if (ctx->pc != 0x118434u) { return; }
    }
    ctx->pc = 0x118434u;
label_118434:
    // 0x118434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x118434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118438: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11843c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11843cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118444: 0x3e00008  jr          $ra
    ctx->pc = 0x118444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118444u;
            // 0x118448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11844Cu;
    // 0x11844c: 0x0  nop
    ctx->pc = 0x11844cu;
    // NOP
    ctx->pc = 0x118450u;
}
