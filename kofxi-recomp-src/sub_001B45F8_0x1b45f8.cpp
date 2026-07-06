#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B45F8
// Address: 0x1b45f8 - 0x1b46f8
void sub_001B45F8_0x1b45f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B45F8_0x1b45f8");
#endif

    switch (ctx->pc) {
        case 0x1b45f8u: goto label_1b45f8;
        case 0x1b45fcu: goto label_1b45fc;
        case 0x1b4600u: goto label_1b4600;
        case 0x1b4604u: goto label_1b4604;
        case 0x1b4608u: goto label_1b4608;
        case 0x1b460cu: goto label_1b460c;
        case 0x1b4610u: goto label_1b4610;
        case 0x1b4614u: goto label_1b4614;
        case 0x1b4618u: goto label_1b4618;
        case 0x1b461cu: goto label_1b461c;
        case 0x1b4620u: goto label_1b4620;
        case 0x1b4624u: goto label_1b4624;
        case 0x1b4628u: goto label_1b4628;
        case 0x1b462cu: goto label_1b462c;
        case 0x1b4630u: goto label_1b4630;
        case 0x1b4634u: goto label_1b4634;
        case 0x1b4638u: goto label_1b4638;
        case 0x1b463cu: goto label_1b463c;
        case 0x1b4640u: goto label_1b4640;
        case 0x1b4644u: goto label_1b4644;
        case 0x1b4648u: goto label_1b4648;
        case 0x1b464cu: goto label_1b464c;
        case 0x1b4650u: goto label_1b4650;
        case 0x1b4654u: goto label_1b4654;
        case 0x1b4658u: goto label_1b4658;
        case 0x1b465cu: goto label_1b465c;
        case 0x1b4660u: goto label_1b4660;
        case 0x1b4664u: goto label_1b4664;
        case 0x1b4668u: goto label_1b4668;
        case 0x1b466cu: goto label_1b466c;
        case 0x1b4670u: goto label_1b4670;
        case 0x1b4674u: goto label_1b4674;
        case 0x1b4678u: goto label_1b4678;
        case 0x1b467cu: goto label_1b467c;
        case 0x1b4680u: goto label_1b4680;
        case 0x1b4684u: goto label_1b4684;
        case 0x1b4688u: goto label_1b4688;
        case 0x1b468cu: goto label_1b468c;
        case 0x1b4690u: goto label_1b4690;
        case 0x1b4694u: goto label_1b4694;
        case 0x1b4698u: goto label_1b4698;
        case 0x1b469cu: goto label_1b469c;
        case 0x1b46a0u: goto label_1b46a0;
        case 0x1b46a4u: goto label_1b46a4;
        case 0x1b46a8u: goto label_1b46a8;
        case 0x1b46acu: goto label_1b46ac;
        case 0x1b46b0u: goto label_1b46b0;
        case 0x1b46b4u: goto label_1b46b4;
        case 0x1b46b8u: goto label_1b46b8;
        case 0x1b46bcu: goto label_1b46bc;
        case 0x1b46c0u: goto label_1b46c0;
        case 0x1b46c4u: goto label_1b46c4;
        case 0x1b46c8u: goto label_1b46c8;
        case 0x1b46ccu: goto label_1b46cc;
        case 0x1b46d0u: goto label_1b46d0;
        case 0x1b46d4u: goto label_1b46d4;
        case 0x1b46d8u: goto label_1b46d8;
        case 0x1b46dcu: goto label_1b46dc;
        case 0x1b46e0u: goto label_1b46e0;
        case 0x1b46e4u: goto label_1b46e4;
        case 0x1b46e8u: goto label_1b46e8;
        case 0x1b46ecu: goto label_1b46ec;
        case 0x1b46f0u: goto label_1b46f0;
        case 0x1b46f4u: goto label_1b46f4;
        default: break;
    }

    ctx->pc = 0x1b45f8u;

label_1b45f8:
    // 0x1b45f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b45f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b45fc:
    // 0x1b45fc: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1b45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1b4600:
    // 0x1b4600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b4604:
    // 0x1b4604: 0x24425328  addiu       $v0, $v0, 0x5328
    ctx->pc = 0x1b4604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21288));
label_1b4608:
    // 0x1b4608: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b4608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b460c:
    // 0x1b460c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1b4610:
    if (ctx->pc == 0x1B4610u) {
        ctx->pc = 0x1B4610u;
            // 0x1b4610: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1B4614u;
        goto label_1b4614;
    }
    ctx->pc = 0x1B460Cu;
    {
        const bool branch_taken_0x1b460c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b460c) {
            ctx->pc = 0x1B4610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B460Cu;
            // 0x1b4610: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4620u;
            goto label_1b4620;
        }
    }
    ctx->pc = 0x1B4614u;
label_1b4614:
    // 0x1b4614: 0x60f809  jalr        $v1
label_1b4618:
    if (ctx->pc == 0x1B4618u) {
        ctx->pc = 0x1B4618u;
            // 0x1b4618: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1B461Cu;
        goto label_1b461c;
    }
    ctx->pc = 0x1B4614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B461Cu);
        ctx->pc = 0x1B4618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4614u;
            // 0x1b4618: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B461Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B461Cu; }
            if (ctx->pc != 0x1B461Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B461Cu;
label_1b461c:
    // 0x1b461c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b461cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4620:
    // 0x1b4620: 0x3e00008  jr          $ra
label_1b4624:
    if (ctx->pc == 0x1B4624u) {
        ctx->pc = 0x1B4624u;
            // 0x1b4624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B4628u;
        goto label_1b4628;
    }
    ctx->pc = 0x1B4620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4620u;
            // 0x1b4624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4628u;
label_1b4628:
    // 0x1b4628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b462c:
    // 0x1b462c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b4630:
    // 0x1b4630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4634:
    // 0x1b4634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b4638:
    // 0x1b4638: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b4638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b463c:
    // 0x1b463c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b4640:
    // 0x1b4640: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b4640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b4644:
    // 0x1b4644: 0xc06d1be  jal         func_1B46F8
label_1b4648:
    if (ctx->pc == 0x1B4648u) {
        ctx->pc = 0x1B4648u;
            // 0x1b4648: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B464Cu;
        goto label_1b464c;
    }
    ctx->pc = 0x1B4644u;
    SET_GPR_U32(ctx, 31, 0x1B464Cu);
    ctx->pc = 0x1B4648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4644u;
            // 0x1b4648: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B46F8u;
    if (runtime->hasFunction(0x1B46F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B46F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B464Cu; }
        if (ctx->pc != 0x1B464Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B46F8_0x1b46f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B464Cu; }
        if (ctx->pc != 0x1B464Cu) { return; }
    }
    ctx->pc = 0x1B464Cu;
label_1b464c:
    // 0x1b464c: 0xc06c9c6  jal         func_1B2718
label_1b4650:
    if (ctx->pc == 0x1B4650u) {
        ctx->pc = 0x1B4650u;
            // 0x1b4650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4654u;
        goto label_1b4654;
    }
    ctx->pc = 0x1B464Cu;
    SET_GPR_U32(ctx, 31, 0x1B4654u);
    ctx->pc = 0x1B4650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B464Cu;
            // 0x1b4650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2718u;
    if (runtime->hasFunction(0x1B2718u)) {
        auto targetFn = runtime->lookupFunction(0x1B2718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4654u; }
        if (ctx->pc != 0x1B4654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2718_0x1b2718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4654u; }
        if (ctx->pc != 0x1B4654u) { return; }
    }
    ctx->pc = 0x1B4654u;
label_1b4654:
    // 0x1b4654: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b4654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b4658:
    // 0x1b4658: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
label_1b465c:
    if (ctx->pc == 0x1B465Cu) {
        ctx->pc = 0x1B465Cu;
            // 0x1b465c: 0xac50a92c  sw          $s0, -0x56D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945068), GPR_U32(ctx, 16));
        ctx->pc = 0x1B4660u;
        goto label_1b4660;
    }
    ctx->pc = 0x1B4658u;
    {
        const bool branch_taken_0x1b4658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4658u;
            // 0x1b465c: 0xac50a92c  sw          $s0, -0x56D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945068), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4658) {
            ctx->pc = 0x1B4688u;
            goto label_1b4688;
        }
    }
    ctx->pc = 0x1B4660u;
label_1b4660:
    // 0x1b4660: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1b4664:
    if (ctx->pc == 0x1B4664u) {
        ctx->pc = 0x1B4668u;
        goto label_1b4668;
    }
    ctx->pc = 0x1B4660u;
    {
        const bool branch_taken_0x1b4660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4660) {
            ctx->pc = 0x1B4674u;
            goto label_1b4674;
        }
    }
    ctx->pc = 0x1B4668u;
label_1b4668:
    // 0x1b4668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b466c:
    // 0x1b466c: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_1b4670:
    if (ctx->pc == 0x1B4670u) {
        ctx->pc = 0x1B4670u;
            // 0x1b4670: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4674u;
        goto label_1b4674;
    }
    ctx->pc = 0x1B466Cu;
    {
        const bool branch_taken_0x1b466c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b466c) {
            ctx->pc = 0x1B4670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B466Cu;
            // 0x1b4670: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4688u;
            goto label_1b4688;
        }
    }
    ctx->pc = 0x1B4674u;
label_1b4674:
    // 0x1b4674: 0xc06cd9c  jal         func_1B3670
label_1b4678:
    if (ctx->pc == 0x1B4678u) {
        ctx->pc = 0x1B4678u;
            // 0x1b4678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B467Cu;
        goto label_1b467c;
    }
    ctx->pc = 0x1B4674u;
    SET_GPR_U32(ctx, 31, 0x1B467Cu);
    ctx->pc = 0x1B4678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4674u;
            // 0x1b4678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3670u;
    if (runtime->hasFunction(0x1B3670u)) {
        auto targetFn = runtime->lookupFunction(0x1B3670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B467Cu; }
        if (ctx->pc != 0x1B467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadManagerInit_0x1b3670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B467Cu; }
        if (ctx->pc != 0x1B467Cu) { return; }
    }
    ctx->pc = 0x1B467Cu;
label_1b467c:
    // 0x1b467c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b4680:
    if (ctx->pc == 0x1B4680u) {
        ctx->pc = 0x1B4680u;
            // 0x1b4680: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4684u;
        goto label_1b4684;
    }
    ctx->pc = 0x1B467Cu;
    {
        const bool branch_taken_0x1b467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B467Cu;
            // 0x1b4680: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b467c) {
            ctx->pc = 0x1B468Cu;
            goto label_1b468c;
        }
    }
    ctx->pc = 0x1B4684u;
label_1b4684:
    // 0x1b4684: 0x0  nop
    ctx->pc = 0x1b4684u;
    // NOP
label_1b4688:
    // 0x1b4688: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b4688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b468c:
    // 0x1b468c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b468cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4690:
    // 0x1b4690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b4694:
    // 0x1b4694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b4694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4698:
    // 0x1b4698: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b4698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b469c:
    // 0x1b469c: 0x3e00008  jr          $ra
label_1b46a0:
    if (ctx->pc == 0x1B46A0u) {
        ctx->pc = 0x1B46A0u;
            // 0x1b46a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B46A4u;
        goto label_1b46a4;
    }
    ctx->pc = 0x1B469Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B46A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B469Cu;
            // 0x1b46a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B46A4u;
label_1b46a4:
    // 0x1b46a4: 0x0  nop
    ctx->pc = 0x1b46a4u;
    // NOP
label_1b46a8:
    // 0x1b46a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b46ac:
    // 0x1b46ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b46acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b46b0:
    // 0x1b46b0: 0x8c43a92c  lw          $v1, -0x56D4($v0)
    ctx->pc = 0x1b46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945068)));
label_1b46b4:
    // 0x1b46b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b46b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b46b8:
    // 0x1b46b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b46b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b46bc:
    // 0x1b46bc: 0x10700007  beq         $v1, $s0, . + 4 + (0x7 << 2)
label_1b46c0:
    if (ctx->pc == 0x1B46C0u) {
        ctx->pc = 0x1B46C0u;
            // 0x1b46c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1B46C4u;
        goto label_1b46c4;
    }
    ctx->pc = 0x1B46BCu;
    {
        const bool branch_taken_0x1b46bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B46C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46BCu;
            // 0x1b46c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46bc) {
            ctx->pc = 0x1B46DCu;
            goto label_1b46dc;
        }
    }
    ctx->pc = 0x1B46C4u;
label_1b46c4:
    // 0x1b46c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1b46c8:
    if (ctx->pc == 0x1B46C8u) {
        ctx->pc = 0x1B46C8u;
            // 0x1b46c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B46CCu;
        goto label_1b46cc;
    }
    ctx->pc = 0x1B46C4u;
    {
        const bool branch_taken_0x1b46c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46C4u;
            // 0x1b46c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46c4) {
            ctx->pc = 0x1B46D4u;
            goto label_1b46d4;
        }
    }
    ctx->pc = 0x1B46CCu;
label_1b46cc:
    // 0x1b46cc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_1b46d0:
    if (ctx->pc == 0x1B46D0u) {
        ctx->pc = 0x1B46D0u;
            // 0x1b46d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B46D4u;
        goto label_1b46d4;
    }
    ctx->pc = 0x1B46CCu;
    {
        const bool branch_taken_0x1b46cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b46cc) {
            ctx->pc = 0x1B46D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46CCu;
            // 0x1b46d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B46DCu;
            goto label_1b46dc;
        }
    }
    ctx->pc = 0x1B46D4u;
label_1b46d4:
    // 0x1b46d4: 0xc06ce14  jal         func_1B3850
label_1b46d8:
    if (ctx->pc == 0x1B46D8u) {
        ctx->pc = 0x1B46DCu;
        goto label_1b46dc;
    }
    ctx->pc = 0x1B46D4u;
    SET_GPR_U32(ctx, 31, 0x1B46DCu);
    ctx->pc = 0x1B3850u;
    if (runtime->hasFunction(0x1B3850u)) {
        auto targetFn = runtime->lookupFunction(0x1B3850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46DCu; }
        if (ctx->pc != 0x1B46DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3850_0x1b3850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46DCu; }
        if (ctx->pc != 0x1B46DCu) { return; }
    }
    ctx->pc = 0x1B46DCu;
label_1b46dc:
    // 0x1b46dc: 0xc06c9c6  jal         func_1B2718
label_1b46e0:
    if (ctx->pc == 0x1B46E0u) {
        ctx->pc = 0x1B46E0u;
            // 0x1b46e0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B46E4u;
        goto label_1b46e4;
    }
    ctx->pc = 0x1B46DCu;
    SET_GPR_U32(ctx, 31, 0x1B46E4u);
    ctx->pc = 0x1B46E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46DCu;
            // 0x1b46e0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2718u;
    if (runtime->hasFunction(0x1B2718u)) {
        auto targetFn = runtime->lookupFunction(0x1B2718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46E4u; }
        if (ctx->pc != 0x1B46E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2718_0x1b2718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46E4u; }
        if (ctx->pc != 0x1B46E4u) { return; }
    }
    ctx->pc = 0x1B46E4u;
label_1b46e4:
    // 0x1b46e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b46e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b46e8:
    // 0x1b46e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b46e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b46ec:
    // 0x1b46ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b46ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b46f0:
    // 0x1b46f0: 0x3e00008  jr          $ra
label_1b46f4:
    if (ctx->pc == 0x1B46F4u) {
        ctx->pc = 0x1B46F4u;
            // 0x1b46f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B46F8u;
        goto label_fallthrough_0x1b46f0;
    }
    ctx->pc = 0x1B46F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46F0u;
            // 0x1b46f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b46f0:
    ctx->pc = 0x1B46F8u;
    ctx->pc = 0x1b46f8u;
}
