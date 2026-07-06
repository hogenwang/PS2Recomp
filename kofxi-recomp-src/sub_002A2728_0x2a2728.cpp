#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2728
// Address: 0x2a2728 - 0x2a27b0
void sub_002A2728_0x2a2728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2728_0x2a2728");
#endif

    switch (ctx->pc) {
        case 0x2a2760u: goto label_2a2760;
        case 0x2a2778u: goto label_2a2778;
        default: break;
    }

    ctx->pc = 0x2a2728u;

    // 0x2a2728: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a2728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a272c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a272cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a2730: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a2730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a2734: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a2734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2738: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a2738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a273c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a273cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2740: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a2740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a2744: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a2744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2748: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a274c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a2750: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A2750u;
    {
        const bool branch_taken_0x2a2750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2750u;
            // 0x2a2754: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2750) {
            ctx->pc = 0x2A2790u;
            goto label_2a2790;
        }
    }
    ctx->pc = 0x2A2758u;
    // 0x2a2758: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x2a2758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a275c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2a275cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a2760:
    // 0x2a2760: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a2760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2764: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a2764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2768: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a2768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a276c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2a276cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2770: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A2770u;
    SET_GPR_U32(ctx, 31, 0x2A2778u);
    ctx->pc = 0x2A2774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2770u;
            // 0x2a2774: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2778u; }
        if (ctx->pc != 0x2A2778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2778u; }
        if (ctx->pc != 0x2A2778u) { return; }
    }
    ctx->pc = 0x2A2778u;
label_2a2778:
    // 0x2a2778: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2778u;
    {
        const bool branch_taken_0x2a2778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A277Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2778u;
            // 0x2a277c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2778) {
            ctx->pc = 0x2A2798u;
            goto label_2a2798;
        }
    }
    ctx->pc = 0x2A2780u;
    // 0x2a2780: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2a2780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a2784: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a2784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a2788: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A2788u;
    {
        const bool branch_taken_0x2a2788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2788) {
            ctx->pc = 0x2A278Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2788u;
            // 0x2a278c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2760;
        }
    }
    ctx->pc = 0x2A2790u;
label_2a2790:
    // 0x2a2790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a2790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2794: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a2794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a2798:
    // 0x2a2798: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a2798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a279c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a279cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a27a0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a27a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a27a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a27a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a27a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A27A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A27ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A27A8u;
            // 0x2a27ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A27B0u;
    ctx->pc = 0x2a27b0u;
}
