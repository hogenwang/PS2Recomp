#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2718
// Address: 0x1b2718 - 0x1b27b8
void sub_001B2718_0x1b2718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2718_0x1b2718");
#endif

    switch (ctx->pc) {
        case 0x1b2728u: goto label_1b2728;
        case 0x1b2740u: goto label_1b2740;
        case 0x1b2780u: goto label_1b2780;
        case 0x1b2790u: goto label_1b2790;
        case 0x1b27a0u: goto label_1b27a0;
        case 0x1b27a8u: goto label_1b27a8;
        default: break;
    }

    ctx->pc = 0x1b2718u;

    // 0x1b2718: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b271c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B271Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B271Cu;
            // 0x1b2720: 0xac442fe8  sw          $a0, 0x2FE8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12264), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2724u;
    // 0x1b2724: 0x0  nop
    ctx->pc = 0x1b2724u;
    // NOP
label_1b2728:
    // 0x1b2728: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b272c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b272cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2730: 0x8c442fe8  lw          $a0, 0x2FE8($v0)
    ctx->pc = 0x1b2730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12264)));
    // 0x1b2734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2738: 0xc06ca5a  jal         func_1B2968
    ctx->pc = 0x1B2738u;
    SET_GPR_U32(ctx, 31, 0x1B2740u);
    ctx->pc = 0x1B2968u;
    if (runtime->hasFunction(0x1B2968u)) {
        auto targetFn = runtime->lookupFunction(0x1B2968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2740u; }
        if (ctx->pc != 0x1B2740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2968_0x1b2968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2740u; }
        if (ctx->pc != 0x1B2740u) { return; }
    }
    ctx->pc = 0x1B2740u;
label_1b2740:
    // 0x1b2740: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b2740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2748: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2748u;
    {
        const bool branch_taken_0x1b2748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2748u;
            // 0x1b274c: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2748) {
            ctx->pc = 0x1B2778u;
            goto label_1b2778;
        }
    }
    ctx->pc = 0x1B2750u;
    // 0x1b2750: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B2750u;
    {
        const bool branch_taken_0x1b2750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2750u;
            // 0x1b2754: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2750) {
            ctx->pc = 0x1B27ACu;
            goto label_1b27ac;
        }
    }
    ctx->pc = 0x1B2758u;
    // 0x1b2758: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b2758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b275c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B275Cu;
    {
        const bool branch_taken_0x1b275c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B275Cu;
            // 0x1b2760: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b275c) {
            ctx->pc = 0x1B2788u;
            goto label_1b2788;
        }
    }
    ctx->pc = 0x1B2764u;
    // 0x1b2764: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2764u;
    {
        const bool branch_taken_0x1b2764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2764u;
            // 0x1b2768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2764) {
            ctx->pc = 0x1B2798u;
            goto label_1b2798;
        }
    }
    ctx->pc = 0x1B276Cu;
    // 0x1b276c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B276Cu;
    {
        const bool branch_taken_0x1b276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b276c) {
            ctx->pc = 0x1B27B0u;
            goto label_1b27b0;
        }
    }
    ctx->pc = 0x1B2774u;
    // 0x1b2774: 0x0  nop
    ctx->pc = 0x1b2774u;
    // NOP
label_1b2778:
    // 0x1b2778: 0xc06ca14  jal         func_1B2850
    ctx->pc = 0x1B2778u;
    SET_GPR_U32(ctx, 31, 0x1B2780u);
    ctx->pc = 0x1B2850u;
    if (runtime->hasFunction(0x1B2850u)) {
        auto targetFn = runtime->lookupFunction(0x1B2850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2780u; }
        if (ctx->pc != 0x1B2780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2850_0x1b2850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2780u; }
        if (ctx->pc != 0x1B2780u) { return; }
    }
    ctx->pc = 0x1B2780u;
label_1b2780:
    // 0x1b2780: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B2780u;
    {
        const bool branch_taken_0x1b2780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2780u;
            // 0x1b2784: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2780) {
            ctx->pc = 0x1B27ACu;
            goto label_1b27ac;
        }
    }
    ctx->pc = 0x1B2788u;
label_1b2788:
    // 0x1b2788: 0xc07398c  jal         func_1CE630
    ctx->pc = 0x1B2788u;
    SET_GPR_U32(ctx, 31, 0x1B2790u);
    ctx->pc = 0x1CE630u;
    if (runtime->hasFunction(0x1CE630u)) {
        auto targetFn = runtime->lookupFunction(0x1CE630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2790u; }
        if (ctx->pc != 0x1B2790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE630_0x1ce630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2790u; }
        if (ctx->pc != 0x1B2790u) { return; }
    }
    ctx->pc = 0x1B2790u;
label_1b2790:
    // 0x1b2790: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2790u;
    {
        const bool branch_taken_0x1b2790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2790u;
            // 0x1b2794: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2790) {
            ctx->pc = 0x1B27ACu;
            goto label_1b27ac;
        }
    }
    ctx->pc = 0x1B2798u;
label_1b2798:
    // 0x1b2798: 0xc073992  jal         func_1CE648
    ctx->pc = 0x1B2798u;
    SET_GPR_U32(ctx, 31, 0x1B27A0u);
    ctx->pc = 0x1CE648u;
    if (runtime->hasFunction(0x1CE648u)) {
        auto targetFn = runtime->lookupFunction(0x1CE648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27A0u; }
        if (ctx->pc != 0x1B27A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE648_0x1ce648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27A0u; }
        if (ctx->pc != 0x1B27A0u) { return; }
    }
    ctx->pc = 0x1B27A0u;
label_1b27a0:
    // 0x1b27a0: 0xc073998  jal         func_1CE660
    ctx->pc = 0x1B27A0u;
    SET_GPR_U32(ctx, 31, 0x1B27A8u);
    ctx->pc = 0x1CE660u;
    if (runtime->hasFunction(0x1CE660u)) {
        auto targetFn = runtime->lookupFunction(0x1CE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27A8u; }
        if (ctx->pc != 0x1B27A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE660_0x1ce660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27A8u; }
        if (ctx->pc != 0x1B27A8u) { return; }
    }
    ctx->pc = 0x1B27A8u;
label_1b27a8:
    // 0x1b27a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b27a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b27ac:
    // 0x1b27ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b27acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b27b0:
    // 0x1b27b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B27B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B27B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27B0u;
            // 0x1b27b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B27B8u;
    ctx->pc = 0x1b27b8u;
}
