#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D740
// Address: 0x10d740 - 0x10d7a8
void sub_0010D740_0x10d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D740_0x10d740");
#endif

    switch (ctx->pc) {
        case 0x10d770u: goto label_10d770;
        case 0x10d778u: goto label_10d778;
        case 0x10d790u: goto label_10d790;
        default: break;
    }

    ctx->pc = 0x10d740u;

    // 0x10d740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d744: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d74c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d754: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10d754u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10d758: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d75c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10d75cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10d760: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D760u;
    {
        const bool branch_taken_0x10d760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d760) {
            ctx->pc = 0x10D770u;
            goto label_10d770;
        }
    }
    ctx->pc = 0x10D768u;
    // 0x10d768: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D768u;
    SET_GPR_U32(ctx, 31, 0x10D770u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D770u; }
        if (ctx->pc != 0x10D770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D770u; }
        if (ctx->pc != 0x10D770u) { return; }
    }
    ctx->pc = 0x10D770u;
label_10d770:
    // 0x10d770: 0xc04326c  jal         func_10C9B0
    ctx->pc = 0x10D770u;
    SET_GPR_U32(ctx, 31, 0x10D778u);
    ctx->pc = 0x10D774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D770u;
            // 0x10d774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C9B0u;
    if (runtime->hasFunction(0x10C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D778u; }
        if (ctx->pc != 0x10D778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C9B0_0x10c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D778u; }
        if (ctx->pc != 0x10D778u) { return; }
    }
    ctx->pc = 0x10D778u;
label_10d778:
    // 0x10d778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d77c: 0xf  sync
    ctx->pc = 0x10d77cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d780: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D780u;
    {
        const bool branch_taken_0x10d780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D780u;
            // 0x10d784: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d780) {
            ctx->pc = 0x10D794u;
            goto label_10d794;
        }
    }
    ctx->pc = 0x10D788u;
    // 0x10d788: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10D788u;
    SET_GPR_U32(ctx, 31, 0x10D790u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D790u; }
        if (ctx->pc != 0x10D790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D790u; }
        if (ctx->pc != 0x10D790u) { return; }
    }
    ctx->pc = 0x10D790u;
label_10d790:
    // 0x10d790: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10d790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d794:
    // 0x10d794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d798: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D7A0u;
            // 0x10d7a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D7A8u;
    ctx->pc = 0x10d7a8u;
}
