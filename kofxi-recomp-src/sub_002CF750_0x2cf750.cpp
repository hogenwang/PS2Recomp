#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF750
// Address: 0x2cf750 - 0x2cf7e8
void sub_002CF750_0x2cf750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF750_0x2cf750");
#endif

    switch (ctx->pc) {
        case 0x2cf750u: goto label_2cf750;
        case 0x2cf754u: goto label_2cf754;
        case 0x2cf758u: goto label_2cf758;
        case 0x2cf75cu: goto label_2cf75c;
        case 0x2cf760u: goto label_2cf760;
        case 0x2cf764u: goto label_2cf764;
        case 0x2cf768u: goto label_2cf768;
        case 0x2cf76cu: goto label_2cf76c;
        case 0x2cf770u: goto label_2cf770;
        case 0x2cf774u: goto label_2cf774;
        case 0x2cf778u: goto label_2cf778;
        case 0x2cf77cu: goto label_2cf77c;
        case 0x2cf780u: goto label_2cf780;
        case 0x2cf784u: goto label_2cf784;
        case 0x2cf788u: goto label_2cf788;
        case 0x2cf78cu: goto label_2cf78c;
        case 0x2cf790u: goto label_2cf790;
        case 0x2cf794u: goto label_2cf794;
        case 0x2cf798u: goto label_2cf798;
        case 0x2cf79cu: goto label_2cf79c;
        case 0x2cf7a0u: goto label_2cf7a0;
        case 0x2cf7a4u: goto label_2cf7a4;
        case 0x2cf7a8u: goto label_2cf7a8;
        case 0x2cf7acu: goto label_2cf7ac;
        case 0x2cf7b0u: goto label_2cf7b0;
        case 0x2cf7b4u: goto label_2cf7b4;
        case 0x2cf7b8u: goto label_2cf7b8;
        case 0x2cf7bcu: goto label_2cf7bc;
        case 0x2cf7c0u: goto label_2cf7c0;
        case 0x2cf7c4u: goto label_2cf7c4;
        case 0x2cf7c8u: goto label_2cf7c8;
        case 0x2cf7ccu: goto label_2cf7cc;
        case 0x2cf7d0u: goto label_2cf7d0;
        case 0x2cf7d4u: goto label_2cf7d4;
        case 0x2cf7d8u: goto label_2cf7d8;
        case 0x2cf7dcu: goto label_2cf7dc;
        case 0x2cf7e0u: goto label_2cf7e0;
        case 0x2cf7e4u: goto label_2cf7e4;
        default: break;
    }

    ctx->pc = 0x2cf750u;

label_2cf750:
    // 0x2cf750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cf754:
    // 0x2cf754: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2cf758:
    // 0x2cf758: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cf758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf75c:
    // 0x2cf75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2cf760:
    // 0x2cf760: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2cf764:
    // 0x2cf764: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cf764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2cf768:
    // 0x2cf768: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2cf768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cf76c:
    // 0x2cf76c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x2cf76cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2cf770:
    // 0x2cf770: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cf770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf774:
    // 0x2cf774: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2cf778:
    if (ctx->pc == 0x2CF778u) {
        ctx->pc = 0x2CF778u;
            // 0x2cf778: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x2CF77Cu;
        goto label_2cf77c;
    }
    ctx->pc = 0x2CF774u;
    {
        const bool branch_taken_0x2cf774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF774u;
            // 0x2cf778: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf774) {
            ctx->pc = 0x2CF7CCu;
            goto label_2cf7cc;
        }
    }
    ctx->pc = 0x2CF77Cu;
label_2cf77c:
    // 0x2cf77c: 0x0  nop
    ctx->pc = 0x2cf77cu;
    // NOP
label_2cf780:
    // 0x2cf780: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cf780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cf784:
    // 0x2cf784: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2cf788:
    if (ctx->pc == 0x2CF788u) {
        ctx->pc = 0x2CF788u;
            // 0x2cf788: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF78Cu;
        goto label_2cf78c;
    }
    ctx->pc = 0x2CF784u;
    {
        const bool branch_taken_0x2cf784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF784u;
            // 0x2cf788: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf784) {
            ctx->pc = 0x2CF7C0u;
            goto label_2cf7c0;
        }
    }
    ctx->pc = 0x2CF78Cu;
label_2cf78c:
    // 0x2cf78c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cf78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cf790:
    // 0x2cf790: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2cf794:
    if (ctx->pc == 0x2CF794u) {
        ctx->pc = 0x2CF794u;
            // 0x2cf794: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2CF798u;
        goto label_2cf798;
    }
    ctx->pc = 0x2CF790u;
    {
        const bool branch_taken_0x2cf790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf790) {
            ctx->pc = 0x2CF794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF790u;
            // 0x2cf794: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF7A8u;
            goto label_2cf7a8;
        }
    }
    ctx->pc = 0x2CF798u;
label_2cf798:
    // 0x2cf798: 0x40f809  jalr        $v0
label_2cf79c:
    if (ctx->pc == 0x2CF79Cu) {
        ctx->pc = 0x2CF7A0u;
        goto label_2cf7a0;
    }
    ctx->pc = 0x2CF798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF7A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CF7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7A0u; }
            if (ctx->pc != 0x2CF7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CF7A0u;
label_2cf7a0:
    // 0x2cf7a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2cf7a4:
    if (ctx->pc == 0x2CF7A4u) {
        ctx->pc = 0x2CF7A4u;
            // 0x2cf7a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2CF7A8u;
        goto label_2cf7a8;
    }
    ctx->pc = 0x2CF7A0u;
    {
        const bool branch_taken_0x2cf7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7A0u;
            // 0x2cf7a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7a0) {
            ctx->pc = 0x2CF7BCu;
            goto label_2cf7bc;
        }
    }
    ctx->pc = 0x2CF7A8u;
label_2cf7a8:
    // 0x2cf7a8: 0xc0b608e  jal         func_2D8238
label_2cf7ac:
    if (ctx->pc == 0x2CF7ACu) {
        ctx->pc = 0x2CF7ACu;
            // 0x2cf7ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF7B0u;
        goto label_2cf7b0;
    }
    ctx->pc = 0x2CF7A8u;
    SET_GPR_U32(ctx, 31, 0x2CF7B0u);
    ctx->pc = 0x2CF7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7A8u;
            // 0x2cf7ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7B0u; }
        if (ctx->pc != 0x2CF7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7B0u; }
        if (ctx->pc != 0x2CF7B0u) { return; }
    }
    ctx->pc = 0x2CF7B0u;
label_2cf7b0:
    // 0x2cf7b0: 0xc0b60dc  jal         func_2D8370
label_2cf7b4:
    if (ctx->pc == 0x2CF7B4u) {
        ctx->pc = 0x2CF7B4u;
            // 0x2cf7b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2CF7B8u;
        goto label_2cf7b8;
    }
    ctx->pc = 0x2CF7B0u;
    SET_GPR_U32(ctx, 31, 0x2CF7B8u);
    ctx->pc = 0x2CF7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7B0u;
            // 0x2cf7b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7B8u; }
        if (ctx->pc != 0x2CF7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7B8u; }
        if (ctx->pc != 0x2CF7B8u) { return; }
    }
    ctx->pc = 0x2CF7B8u;
label_2cf7b8:
    // 0x2cf7b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2cf7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2cf7bc:
    // 0x2cf7bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cf7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf7c0:
    // 0x2cf7c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2cf7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2cf7c4:
    // 0x2cf7c4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2cf7c8:
    if (ctx->pc == 0x2CF7C8u) {
        ctx->pc = 0x2CF7C8u;
            // 0x2cf7c8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x2CF7CCu;
        goto label_2cf7cc;
    }
    ctx->pc = 0x2CF7C4u;
    {
        const bool branch_taken_0x2cf7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7C4u;
            // 0x2cf7c8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7c4) {
            ctx->pc = 0x2CF780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cf780;
        }
    }
    ctx->pc = 0x2CF7CCu;
label_2cf7cc:
    // 0x2cf7cc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2cf7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2cf7d0:
    // 0x2cf7d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf7d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf7d4:
    // 0x2cf7d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf7d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cf7d8:
    // 0x2cf7d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf7dc:
    // 0x2cf7dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cf7e0:
    // 0x2cf7e0: 0x3e00008  jr          $ra
label_2cf7e4:
    if (ctx->pc == 0x2CF7E4u) {
        ctx->pc = 0x2CF7E4u;
            // 0x2cf7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CF7E8u;
        goto label_fallthrough_0x2cf7e0;
    }
    ctx->pc = 0x2CF7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7E0u;
            // 0x2cf7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cf7e0:
    ctx->pc = 0x2CF7E8u;
    ctx->pc = 0x2cf7e8u;
}
