#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0348
// Address: 0x1b0348 - 0x1b0390
void sub_001B0348_0x1b0348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0348_0x1b0348");
#endif

    switch (ctx->pc) {
        case 0x1b0364u: goto label_1b0364;
        case 0x1b0370u: goto label_1b0370;
        case 0x1b0378u: goto label_1b0378;
        default: break;
    }

    ctx->pc = 0x1b0348u;

    // 0x1b0348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b034c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b035c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B035Cu;
    SET_GPR_U32(ctx, 31, 0x1B0364u);
    ctx->pc = 0x1B0360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B035Cu;
            // 0x1b0360: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0364u; }
        if (ctx->pc != 0x1B0364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0364u; }
        if (ctx->pc != 0x1B0364u) { return; }
    }
    ctx->pc = 0x1B0364u;
label_1b0364:
    // 0x1b0364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0368: 0xc06c0e4  jal         func_1B0390
    ctx->pc = 0x1B0368u;
    SET_GPR_U32(ctx, 31, 0x1B0370u);
    ctx->pc = 0x1B036Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0368u;
            // 0x1b036c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0390u;
    if (runtime->hasFunction(0x1B0390u)) {
        auto targetFn = runtime->lookupFunction(0x1B0390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0370u; }
        if (ctx->pc != 0x1B0370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0390_0x1b0390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0370u; }
        if (ctx->pc != 0x1B0370u) { return; }
    }
    ctx->pc = 0x1B0370u;
label_1b0370:
    // 0x1b0370: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B0370u;
    SET_GPR_U32(ctx, 31, 0x1B0378u);
    ctx->pc = 0x1B0374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0370u;
            // 0x1b0374: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0378u; }
        if (ctx->pc != 0x1B0378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0378u; }
        if (ctx->pc != 0x1B0378u) { return; }
    }
    ctx->pc = 0x1B0378u;
label_1b0378:
    // 0x1b0378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b037c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b037cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0388: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B038Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0388u;
            // 0x1b038c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0390u;
    ctx->pc = 0x1b0390u;
}
