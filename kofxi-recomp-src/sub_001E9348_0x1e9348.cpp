#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9348
// Address: 0x1e9348 - 0x1e93b8
void sub_001E9348_0x1e9348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9348_0x1e9348");
#endif

    switch (ctx->pc) {
        case 0x1e935cu: goto label_1e935c;
        case 0x1e9378u: goto label_1e9378;
        case 0x1e9388u: goto label_1e9388;
        case 0x1e93a0u: goto label_1e93a0;
        default: break;
    }

    ctx->pc = 0x1e9348u;

    // 0x1e9348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e934c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9350: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e9350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e9354: 0xc07e368  jal         func_1F8DA0
    ctx->pc = 0x1E9354u;
    SET_GPR_U32(ctx, 31, 0x1E935Cu);
    ctx->pc = 0x1E9358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9354u;
            // 0x1e9358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DA0u;
    if (runtime->hasFunction(0x1F8DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F8DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E935Cu; }
        if (ctx->pc != 0x1E935Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8DA0_0x1f8da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E935Cu; }
        if (ctx->pc != 0x1E935Cu) { return; }
    }
    ctx->pc = 0x1E935Cu;
label_1e935c:
    // 0x1e935c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e935cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9360: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9360u;
    {
        const bool branch_taken_0x1e9360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9360) {
            ctx->pc = 0x1E9380u;
            goto label_1e9380;
        }
    }
    ctx->pc = 0x1E9368u;
    // 0x1e9368: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1e9368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e936c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e936cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e9370: 0xc06e1ee  jal         func_1B87B8
    ctx->pc = 0x1E9370u;
    SET_GPR_U32(ctx, 31, 0x1E9378u);
    ctx->pc = 0x1E9374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9370u;
            // 0x1e9374: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B87B8u;
    if (runtime->hasFunction(0x1B87B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B87B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9378u; }
        if (ctx->pc != 0x1E9378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B87B8_0x1b87b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9378u; }
        if (ctx->pc != 0x1E9378u) { return; }
    }
    ctx->pc = 0x1E9378u;
label_1e9378:
    // 0x1e9378: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9378u;
    {
        const bool branch_taken_0x1e9378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E937Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9378u;
            // 0x1e937c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9378) {
            ctx->pc = 0x1E938Cu;
            goto label_1e938c;
        }
    }
    ctx->pc = 0x1E9380u;
label_1e9380:
    // 0x1e9380: 0xc07a4ee  jal         func_1E93B8
    ctx->pc = 0x1E9380u;
    SET_GPR_U32(ctx, 31, 0x1E9388u);
    ctx->pc = 0x1E93B8u;
    if (runtime->hasFunction(0x1E93B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E93B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9388u; }
        if (ctx->pc != 0x1E9388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E93B8_0x1e93b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9388u; }
        if (ctx->pc != 0x1E9388u) { return; }
    }
    ctx->pc = 0x1E9388u;
label_1e9388:
    // 0x1e9388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e938c:
    // 0x1e938c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E938Cu;
    {
        const bool branch_taken_0x1e938c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E938Cu;
            // 0x1e9390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e938c) {
            ctx->pc = 0x1E93A4u;
            goto label_1e93a4;
        }
    }
    ctx->pc = 0x1E9394u;
    // 0x1e9394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9398: 0xc06ea7c  jal         func_1BA9F0
    ctx->pc = 0x1E9398u;
    SET_GPR_U32(ctx, 31, 0x1E93A0u);
    ctx->pc = 0x1E939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9398u;
            // 0x1e939c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA9F0u;
    if (runtime->hasFunction(0x1BA9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93A0u; }
        if (ctx->pc != 0x1E93A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA9F0_0x1ba9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93A0u; }
        if (ctx->pc != 0x1E93A0u) { return; }
    }
    ctx->pc = 0x1E93A0u;
label_1e93a0:
    // 0x1e93a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e93a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e93a4:
    // 0x1e93a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e93a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e93a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e93a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e93ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E93ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E93B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93ACu;
            // 0x1e93b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E93B4u;
    // 0x1e93b4: 0x0  nop
    ctx->pc = 0x1e93b4u;
    // NOP
    ctx->pc = 0x1e93b8u;
}
