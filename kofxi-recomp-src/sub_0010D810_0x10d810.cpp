#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D810
// Address: 0x10d810 - 0x10d878
void sub_0010D810_0x10d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D810_0x10d810");
#endif

    switch (ctx->pc) {
        case 0x10d840u: goto label_10d840;
        case 0x10d848u: goto label_10d848;
        case 0x10d860u: goto label_10d860;
        default: break;
    }

    ctx->pc = 0x10d810u;

    // 0x10d810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d814: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d824: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10d824u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10d828: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d82c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10d82cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10d830: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D830u;
    {
        const bool branch_taken_0x10d830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d830) {
            ctx->pc = 0x10D840u;
            goto label_10d840;
        }
    }
    ctx->pc = 0x10D838u;
    // 0x10d838: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D838u;
    SET_GPR_U32(ctx, 31, 0x10D840u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D840u; }
        if (ctx->pc != 0x10D840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D840u; }
        if (ctx->pc != 0x10D840u) { return; }
    }
    ctx->pc = 0x10D840u;
label_10d840:
    // 0x10d840: 0xc043274  jal         func_10C9D0
    ctx->pc = 0x10D840u;
    SET_GPR_U32(ctx, 31, 0x10D848u);
    ctx->pc = 0x10D844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D840u;
            // 0x10d844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C9D0u;
    if (runtime->hasFunction(0x10C9D0u)) {
        auto targetFn = runtime->lookupFunction(0x10C9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D848u; }
        if (ctx->pc != 0x10D848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C9D0_0x10c9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D848u; }
        if (ctx->pc != 0x10D848u) { return; }
    }
    ctx->pc = 0x10D848u;
label_10d848:
    // 0x10d848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d84c: 0xf  sync
    ctx->pc = 0x10d84cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d850: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D850u;
    {
        const bool branch_taken_0x10d850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D850u;
            // 0x10d854: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d850) {
            ctx->pc = 0x10D864u;
            goto label_10d864;
        }
    }
    ctx->pc = 0x10D858u;
    // 0x10d858: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10D858u;
    SET_GPR_U32(ctx, 31, 0x10D860u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D860u; }
        if (ctx->pc != 0x10D860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D860u; }
        if (ctx->pc != 0x10D860u) { return; }
    }
    ctx->pc = 0x10D860u;
label_10d860:
    // 0x10d860: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10d860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d864:
    // 0x10d864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d868: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d870: 0x3e00008  jr          $ra
    ctx->pc = 0x10D870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D870u;
            // 0x10d874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D878u;
    ctx->pc = 0x10d878u;
}
