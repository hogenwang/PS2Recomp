#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB770
// Address: 0x1bb770 - 0x1bb7e0
void sub_001BB770_0x1bb770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB770_0x1bb770");
#endif

    switch (ctx->pc) {
        case 0x1bb788u: goto label_1bb788;
        case 0x1bb798u: goto label_1bb798;
        case 0x1bb7a8u: goto label_1bb7a8;
        case 0x1bb7bcu: goto label_1bb7bc;
        case 0x1bb7c4u: goto label_1bb7c4;
        case 0x1bb7ccu: goto label_1bb7cc;
        default: break;
    }

    ctx->pc = 0x1bb770u;

    // 0x1bb770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb774: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB774u;
    {
        const bool branch_taken_0x1bb774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB774u;
            // 0x1bb778: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb774) {
            ctx->pc = 0x1BB798u;
            goto label_1bb798;
        }
    }
    ctx->pc = 0x1BB77Cu;
    // 0x1bb77c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bb77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bb780: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BB780u;
    SET_GPR_U32(ctx, 31, 0x1BB788u);
    ctx->pc = 0x1BB784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB780u;
            // 0x1bb784: 0x248486f8  addiu       $a0, $a0, -0x7908 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB788u; }
        if (ctx->pc != 0x1BB788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB788u; }
        if (ctx->pc != 0x1BB788u) { return; }
    }
    ctx->pc = 0x1BB788u;
label_1bb788:
    // 0x1bb788: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb790: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB790u;
            // 0x1bb794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB798u;
label_1bb798:
    // 0x1bb798: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bb798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb7a0: 0x806d830  j           func_1B60C0
    ctx->pc = 0x1BB7A0u;
    ctx->pc = 0x1BB7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7A0u;
            // 0x1bb7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60C0u;
    if (runtime->hasFunction(0x1B60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B60C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B60C0_0x1b60c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BB7A8u;
label_1bb7a8:
    // 0x1bb7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb7ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb7b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb7b4: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB7B4u;
    SET_GPR_U32(ctx, 31, 0x1BB7BCu);
    ctx->pc = 0x1BB7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7B4u;
            // 0x1bb7b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7BCu; }
        if (ctx->pc != 0x1BB7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7BCu; }
        if (ctx->pc != 0x1BB7BCu) { return; }
    }
    ctx->pc = 0x1BB7BCu;
label_1bb7bc:
    // 0x1bb7bc: 0xc06edf8  jal         func_1BB7E0
    ctx->pc = 0x1BB7BCu;
    SET_GPR_U32(ctx, 31, 0x1BB7C4u);
    ctx->pc = 0x1BB7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7BCu;
            // 0x1bb7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E0u;
    if (runtime->hasFunction(0x1BB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7C4u; }
        if (ctx->pc != 0x1BB7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB7E0_0x1bb7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7C4u; }
        if (ctx->pc != 0x1BB7C4u) { return; }
    }
    ctx->pc = 0x1BB7C4u;
label_1bb7c4:
    // 0x1bb7c4: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB7C4u;
    SET_GPR_U32(ctx, 31, 0x1BB7CCu);
    ctx->pc = 0x1BB7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7C4u;
            // 0x1bb7c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7CCu; }
        if (ctx->pc != 0x1BB7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7CCu; }
        if (ctx->pc != 0x1BB7CCu) { return; }
    }
    ctx->pc = 0x1BB7CCu;
label_1bb7cc:
    // 0x1bb7cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb7d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb7d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7D8u;
            // 0x1bb7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB7E0u;
    ctx->pc = 0x1bb7e0u;
}
