#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0850
// Address: 0x1b0850 - 0x1b08c0
void sub_001B0850_0x1b0850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0850_0x1b0850");
#endif

    switch (ctx->pc) {
        case 0x1b0868u: goto label_1b0868;
        case 0x1b088cu: goto label_1b088c;
        case 0x1b089cu: goto label_1b089c;
        case 0x1b08a4u: goto label_1b08a4;
        default: break;
    }

    ctx->pc = 0x1b0850u;

    // 0x1b0850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b085c: 0x806c1da  j           func_1B0768
    ctx->pc = 0x1B085Cu;
    ctx->pc = 0x1B0860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B085Cu;
            // 0x1b0860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0768u;
    if (runtime->hasFunction(0x1B0768u)) {
        auto targetFn = runtime->lookupFunction(0x1B0768u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B0768_0x1b0768(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0864u;
    // 0x1b0864: 0x0  nop
    ctx->pc = 0x1b0864u;
    // NOP
label_1b0868:
    // 0x1b0868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b086c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0878: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b0878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b087c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0880: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b0880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0884: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B0884u;
    SET_GPR_U32(ctx, 31, 0x1B088Cu);
    ctx->pc = 0x1B0888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0884u;
            // 0x1b0888: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B088Cu; }
        if (ctx->pc != 0x1B088Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B088Cu; }
        if (ctx->pc != 0x1B088Cu) { return; }
    }
    ctx->pc = 0x1B088Cu;
label_1b088c:
    // 0x1b088c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0890: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0894: 0xc06c230  jal         func_1B08C0
    ctx->pc = 0x1B0894u;
    SET_GPR_U32(ctx, 31, 0x1B089Cu);
    ctx->pc = 0x1B0898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0894u;
            // 0x1b0898: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B08C0u;
    if (runtime->hasFunction(0x1B08C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B08C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B089Cu; }
        if (ctx->pc != 0x1B089Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08C0_0x1b08c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B089Cu; }
        if (ctx->pc != 0x1B089Cu) { return; }
    }
    ctx->pc = 0x1B089Cu;
label_1b089c:
    // 0x1b089c: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B089Cu;
    SET_GPR_U32(ctx, 31, 0x1B08A4u);
    ctx->pc = 0x1B08A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B089Cu;
            // 0x1b08a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B08A4u; }
        if (ctx->pc != 0x1B08A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B08A4u; }
        if (ctx->pc != 0x1B08A4u) { return; }
    }
    ctx->pc = 0x1B08A4u;
label_1b08a4:
    // 0x1b08a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b08a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b08a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b08a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b08ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b08acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b08b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b08b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b08b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b08b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b08b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B08B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B08BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08B8u;
            // 0x1b08bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B08C0u;
    ctx->pc = 0x1b08c0u;
}
