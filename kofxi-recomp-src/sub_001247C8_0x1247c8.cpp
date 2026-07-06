#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001247C8
// Address: 0x1247c8 - 0x124860
void sub_001247C8_0x1247c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001247C8_0x1247c8");
#endif

    switch (ctx->pc) {
        case 0x1247c8u: goto label_1247c8;
        case 0x1247ccu: goto label_1247cc;
        case 0x1247d0u: goto label_1247d0;
        case 0x1247d4u: goto label_1247d4;
        case 0x1247d8u: goto label_1247d8;
        case 0x1247dcu: goto label_1247dc;
        case 0x1247e0u: goto label_1247e0;
        case 0x1247e4u: goto label_1247e4;
        case 0x1247e8u: goto label_1247e8;
        case 0x1247ecu: goto label_1247ec;
        case 0x1247f0u: goto label_1247f0;
        case 0x1247f4u: goto label_1247f4;
        case 0x1247f8u: goto label_1247f8;
        case 0x1247fcu: goto label_1247fc;
        case 0x124800u: goto label_124800;
        case 0x124804u: goto label_124804;
        case 0x124808u: goto label_124808;
        case 0x12480cu: goto label_12480c;
        case 0x124810u: goto label_124810;
        case 0x124814u: goto label_124814;
        case 0x124818u: goto label_124818;
        case 0x12481cu: goto label_12481c;
        case 0x124820u: goto label_124820;
        case 0x124824u: goto label_124824;
        case 0x124828u: goto label_124828;
        case 0x12482cu: goto label_12482c;
        case 0x124830u: goto label_124830;
        case 0x124834u: goto label_124834;
        case 0x124838u: goto label_124838;
        case 0x12483cu: goto label_12483c;
        case 0x124840u: goto label_124840;
        case 0x124844u: goto label_124844;
        case 0x124848u: goto label_124848;
        case 0x12484cu: goto label_12484c;
        case 0x124850u: goto label_124850;
        case 0x124854u: goto label_124854;
        case 0x124858u: goto label_124858;
        case 0x12485cu: goto label_12485c;
        default: break;
    }

    ctx->pc = 0x1247c8u;

label_1247c8:
    // 0x1247c8: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1247c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_1247cc:
    // 0x1247cc: 0x3e00008  jr          $ra
label_1247d0:
    if (ctx->pc == 0x1247D0u) {
        ctx->pc = 0x1247D0u;
            // 0x1247d0: 0x8de2bde8  lw          $v0, -0x4218($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
        ctx->pc = 0x1247D4u;
        goto label_1247d4;
    }
    ctx->pc = 0x1247CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1247D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1247CCu;
            // 0x1247d0: 0x8de2bde8  lw          $v0, -0x4218($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1247D4u;
label_1247d4:
    // 0x1247d4: 0x0  nop
    ctx->pc = 0x1247d4u;
    // NOP
label_1247d8:
    // 0x1247d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1247d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1247dc:
    // 0x1247dc: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1247dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_1247e0:
    // 0x1247e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1247e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1247e4:
    // 0x1247e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1247e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1247e8:
    // 0x1247e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1247e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1247ec:
    // 0x1247ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1247ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1247f0:
    // 0x1247f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1247f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1247f4:
    // 0x1247f4: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x1247f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
label_1247f8:
    // 0x1247f8: 0x8dd20148  lw          $s2, 0x148($t6)
    ctx->pc = 0x1247f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 328)));
label_1247fc:
    // 0x1247fc: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_124800:
    if (ctx->pc == 0x124800u) {
        ctx->pc = 0x124800u;
            // 0x124800: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124804u;
        goto label_124804;
    }
    ctx->pc = 0x1247FCu;
    {
        const bool branch_taken_0x1247fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1247FCu;
            // 0x124800: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247fc) {
            ctx->pc = 0x124840u;
            goto label_124840;
        }
    }
    ctx->pc = 0x124804u;
label_124804:
    // 0x124804: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x124804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_124808:
    // 0x124808: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x124808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_12480c:
    // 0x12480c: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
label_124810:
    if (ctx->pc == 0x124810u) {
        ctx->pc = 0x124810u;
            // 0x124810: 0x117880  sll         $t7, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x124814u;
        goto label_124814;
    }
    ctx->pc = 0x12480Cu;
    {
        const bool branch_taken_0x12480c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x124810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12480Cu;
            // 0x124810: 0x117880  sll         $t7, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12480c) {
            ctx->pc = 0x124830u;
            goto label_124830;
        }
    }
    ctx->pc = 0x124814u;
label_124814:
    // 0x124814: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_124818:
    // 0x124818: 0x25f00008  addiu       $s0, $t7, 0x8
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12481c:
    // 0x12481c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x12481cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_124820:
    // 0x124820: 0x1e0f809  jalr        $t7
label_124824:
    if (ctx->pc == 0x124824u) {
        ctx->pc = 0x124824u;
            // 0x124824: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x124828u;
        goto label_124828;
    }
    ctx->pc = 0x124820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x124828u);
        ctx->pc = 0x124824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124820u;
            // 0x124824: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x124828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x124828u; }
            if (ctx->pc != 0x124828u) { return; }
        }
        }
    }
    ctx->pc = 0x124828u;
label_124828:
    // 0x124828: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
label_12482c:
    if (ctx->pc == 0x12482Cu) {
        ctx->pc = 0x12482Cu;
            // 0x12482c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x124830u;
        goto label_124830;
    }
    ctx->pc = 0x124828u;
    {
        const bool branch_taken_0x124828 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x12482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124828u;
            // 0x12482c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124828) {
            ctx->pc = 0x12481Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12481c;
        }
    }
    ctx->pc = 0x124830u;
label_124830:
    // 0x124830: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x124830u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_124834:
    // 0x124834: 0x5640fff4  bnel        $s2, $zero, . + 4 + (-0xC << 2)
label_124838:
    if (ctx->pc == 0x124838u) {
        ctx->pc = 0x124838u;
            // 0x124838: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x12483Cu;
        goto label_12483c;
    }
    ctx->pc = 0x124834u;
    {
        const bool branch_taken_0x124834 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x124834) {
            ctx->pc = 0x124838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124834u;
            // 0x124838: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124808;
        }
    }
    ctx->pc = 0x12483Cu;
label_12483c:
    // 0x12483c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12483cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_124840:
    // 0x124840: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x124840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
label_124844:
    // 0x124844: 0x8c8f003c  lw          $t7, 0x3C($a0)
    ctx->pc = 0x124844u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_124848:
    // 0x124848: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
label_12484c:
    if (ctx->pc == 0x12484Cu) {
        ctx->pc = 0x124850u;
        goto label_124850;
    }
    ctx->pc = 0x124848u;
    {
        const bool branch_taken_0x124848 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124848) {
            ctx->pc = 0x124858u;
            goto label_124858;
        }
    }
    ctx->pc = 0x124850u;
label_124850:
    // 0x124850: 0x1e0f809  jalr        $t7
label_124854:
    if (ctx->pc == 0x124854u) {
        ctx->pc = 0x124858u;
        goto label_124858;
    }
    ctx->pc = 0x124850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x124858u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x124858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x124858u; }
            if (ctx->pc != 0x124858u) { return; }
        }
        }
    }
    ctx->pc = 0x124858u;
label_124858:
    // 0x124858: 0xc040086  jal         func_100218
label_12485c:
    if (ctx->pc == 0x12485Cu) {
        ctx->pc = 0x12485Cu;
            // 0x12485c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124860u;
        goto label_fallthrough_0x124858;
    }
    ctx->pc = 0x124858u;
    SET_GPR_U32(ctx, 31, 0x124860u);
    ctx->pc = 0x12485Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124858u;
            // 0x12485c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100218u;
    if (runtime->hasFunction(0x100218u)) {
        auto targetFn = runtime->lookupFunction(0x100218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124860u; }
        if (ctx->pc != 0x124860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100218_0x100218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124860u; }
        if (ctx->pc != 0x124860u) { return; }
    }
label_fallthrough_0x124858:
    ctx->pc = 0x124860u;
    ctx->pc = 0x124860u;
}
