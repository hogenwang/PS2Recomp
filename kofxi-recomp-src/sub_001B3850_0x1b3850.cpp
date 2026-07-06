#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3850
// Address: 0x1b3850 - 0x1b38e8
void sub_001B3850_0x1b3850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3850_0x1b3850");
#endif

    switch (ctx->pc) {
        case 0x1b3878u: goto label_1b3878;
        case 0x1b3880u: goto label_1b3880;
        case 0x1b3888u: goto label_1b3888;
        case 0x1b3890u: goto label_1b3890;
        case 0x1b3898u: goto label_1b3898;
        case 0x1b38b0u: goto label_1b38b0;
        case 0x1b38bcu: goto label_1b38bc;
        case 0x1b38c8u: goto label_1b38c8;
        case 0x1b38d8u: goto label_1b38d8;
        default: break;
    }

    ctx->pc = 0x1b3850u;

    // 0x1b3850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3854: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b3854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b3858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b385c: 0x24632ff4  addiu       $v1, $v1, 0x2FF4
    ctx->pc = 0x1b385cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12276));
    // 0x1b3860: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b3860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3864: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3868: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B3868u;
    {
        const bool branch_taken_0x1b3868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3868) {
            ctx->pc = 0x1B38D8u;
            goto label_1b38d8;
        }
    }
    ctx->pc = 0x1B3870u;
    // 0x1b3870: 0xc06ce00  jal         func_1B3800
    ctx->pc = 0x1B3870u;
    SET_GPR_U32(ctx, 31, 0x1B3878u);
    ctx->pc = 0x1B3800u;
    if (runtime->hasFunction(0x1B3800u)) {
        auto targetFn = runtime->lookupFunction(0x1B3800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3878u; }
        if (ctx->pc != 0x1B3878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3800_0x1b3800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3878u; }
        if (ctx->pc != 0x1B3878u) { return; }
    }
    ctx->pc = 0x1B3878u;
label_1b3878:
    // 0x1b3878: 0xc06ce6e  jal         func_1B39B8
    ctx->pc = 0x1B3878u;
    SET_GPR_U32(ctx, 31, 0x1B3880u);
    ctx->pc = 0x1B39B8u;
    if (runtime->hasFunction(0x1B39B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B39B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3880u; }
        if (ctx->pc != 0x1B3880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B39B8_0x1b39b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3880u; }
        if (ctx->pc != 0x1B3880u) { return; }
    }
    ctx->pc = 0x1B3880u;
label_1b3880:
    // 0x1b3880: 0xc06ced6  jal         func_1B3B58
    ctx->pc = 0x1B3880u;
    SET_GPR_U32(ctx, 31, 0x1B3888u);
    ctx->pc = 0x1B3B58u;
    if (runtime->hasFunction(0x1B3B58u)) {
        auto targetFn = runtime->lookupFunction(0x1B3B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3888u; }
        if (ctx->pc != 0x1B3888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B58_0x1b3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3888u; }
        if (ctx->pc != 0x1B3888u) { return; }
    }
    ctx->pc = 0x1B3888u;
label_1b3888:
    // 0x1b3888: 0xc06cea2  jal         func_1B3A88
    ctx->pc = 0x1B3888u;
    SET_GPR_U32(ctx, 31, 0x1B3890u);
    ctx->pc = 0x1B3A88u;
    if (runtime->hasFunction(0x1B3A88u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3890u; }
        if (ctx->pc != 0x1B3890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3A88_0x1b3a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3890u; }
        if (ctx->pc != 0x1B3890u) { return; }
    }
    ctx->pc = 0x1B3890u;
label_1b3890:
    // 0x1b3890: 0xc06cf56  jal         func_1B3D58
    ctx->pc = 0x1B3890u;
    SET_GPR_U32(ctx, 31, 0x1B3898u);
    ctx->pc = 0x1B3D58u;
    if (runtime->hasFunction(0x1B3D58u)) {
        auto targetFn = runtime->lookupFunction(0x1B3D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3898u; }
        if (ctx->pc != 0x1B3898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3D58_0x1b3d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3898u; }
        if (ctx->pc != 0x1B3898u) { return; }
    }
    ctx->pc = 0x1B3898u;
label_1b3898:
    // 0x1b3898: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b389c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b389cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b38a0: 0x24423098  addiu       $v0, $v0, 0x3098
    ctx->pc = 0x1b38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12440));
    // 0x1b38a4: 0x8c65a928  lw          $a1, -0x56D8($v1)
    ctx->pc = 0x1b38a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945064)));
    // 0x1b38a8: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B38A8u;
    SET_GPR_U32(ctx, 31, 0x1B38B0u);
    ctx->pc = 0x1B38ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38A8u;
            // 0x1b38ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38B0u; }
        if (ctx->pc != 0x1B38B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38B0u; }
        if (ctx->pc != 0x1B38B0u) { return; }
    }
    ctx->pc = 0x1B38B0u;
label_1b38b0:
    // 0x1b38b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b38b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38b4: 0xc07390a  jal         func_1CE428
    ctx->pc = 0x1B38B4u;
    SET_GPR_U32(ctx, 31, 0x1B38BCu);
    ctx->pc = 0x1B38B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38B4u;
            // 0x1b38b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE428u;
    if (runtime->hasFunction(0x1CE428u)) {
        auto targetFn = runtime->lookupFunction(0x1CE428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38BCu; }
        if (ctx->pc != 0x1B38BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE428_0x1ce428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38BCu; }
        if (ctx->pc != 0x1B38BCu) { return; }
    }
    ctx->pc = 0x1B38BCu;
label_1b38bc:
    // 0x1b38bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b38bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38c0: 0xc073910  jal         func_1CE440
    ctx->pc = 0x1B38C0u;
    SET_GPR_U32(ctx, 31, 0x1B38C8u);
    ctx->pc = 0x1B38C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38C0u;
            // 0x1b38c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE440u;
    if (runtime->hasFunction(0x1CE440u)) {
        auto targetFn = runtime->lookupFunction(0x1CE440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38C8u; }
        if (ctx->pc != 0x1B38C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE440_0x1ce440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38C8u; }
        if (ctx->pc != 0x1B38C8u) { return; }
    }
    ctx->pc = 0x1B38C8u;
label_1b38c8:
    // 0x1b38c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b38c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b38cc: 0x80739e2  j           func_1CE788
    ctx->pc = 0x1B38CCu;
    ctx->pc = 0x1B38D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38CCu;
            // 0x1b38d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE788u;
    if (runtime->hasFunction(0x1CE788u)) {
        auto targetFn = runtime->lookupFunction(0x1CE788u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE788_0x1ce788(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B38D4u;
    // 0x1b38d4: 0x0  nop
    ctx->pc = 0x1b38d4u;
    // NOP
label_1b38d8:
    // 0x1b38d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b38d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b38dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B38DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B38E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38DCu;
            // 0x1b38e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B38E4u;
    // 0x1b38e4: 0x0  nop
    ctx->pc = 0x1b38e4u;
    // NOP
    ctx->pc = 0x1b38e8u;
}
