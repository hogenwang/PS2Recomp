#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B55F0
// Address: 0x2b55f0 - 0x2b57f8
void sub_002B55F0_0x2b55f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B55F0_0x2b55f0");
#endif

    switch (ctx->pc) {
        case 0x2b55f0u: goto label_2b55f0;
        case 0x2b55f4u: goto label_2b55f4;
        case 0x2b55f8u: goto label_2b55f8;
        case 0x2b55fcu: goto label_2b55fc;
        case 0x2b5600u: goto label_2b5600;
        case 0x2b5604u: goto label_2b5604;
        case 0x2b5608u: goto label_2b5608;
        case 0x2b560cu: goto label_2b560c;
        case 0x2b5610u: goto label_2b5610;
        case 0x2b5614u: goto label_2b5614;
        case 0x2b5618u: goto label_2b5618;
        case 0x2b561cu: goto label_2b561c;
        case 0x2b5620u: goto label_2b5620;
        case 0x2b5624u: goto label_2b5624;
        case 0x2b5628u: goto label_2b5628;
        case 0x2b562cu: goto label_2b562c;
        case 0x2b5630u: goto label_2b5630;
        case 0x2b5634u: goto label_2b5634;
        case 0x2b5638u: goto label_2b5638;
        case 0x2b563cu: goto label_2b563c;
        case 0x2b5640u: goto label_2b5640;
        case 0x2b5644u: goto label_2b5644;
        case 0x2b5648u: goto label_2b5648;
        case 0x2b564cu: goto label_2b564c;
        case 0x2b5650u: goto label_2b5650;
        case 0x2b5654u: goto label_2b5654;
        case 0x2b5658u: goto label_2b5658;
        case 0x2b565cu: goto label_2b565c;
        case 0x2b5660u: goto label_2b5660;
        case 0x2b5664u: goto label_2b5664;
        case 0x2b5668u: goto label_2b5668;
        case 0x2b566cu: goto label_2b566c;
        case 0x2b5670u: goto label_2b5670;
        case 0x2b5674u: goto label_2b5674;
        case 0x2b5678u: goto label_2b5678;
        case 0x2b567cu: goto label_2b567c;
        case 0x2b5680u: goto label_2b5680;
        case 0x2b5684u: goto label_2b5684;
        case 0x2b5688u: goto label_2b5688;
        case 0x2b568cu: goto label_2b568c;
        case 0x2b5690u: goto label_2b5690;
        case 0x2b5694u: goto label_2b5694;
        case 0x2b5698u: goto label_2b5698;
        case 0x2b569cu: goto label_2b569c;
        case 0x2b56a0u: goto label_2b56a0;
        case 0x2b56a4u: goto label_2b56a4;
        case 0x2b56a8u: goto label_2b56a8;
        case 0x2b56acu: goto label_2b56ac;
        case 0x2b56b0u: goto label_2b56b0;
        case 0x2b56b4u: goto label_2b56b4;
        case 0x2b56b8u: goto label_2b56b8;
        case 0x2b56bcu: goto label_2b56bc;
        case 0x2b56c0u: goto label_2b56c0;
        case 0x2b56c4u: goto label_2b56c4;
        case 0x2b56c8u: goto label_2b56c8;
        case 0x2b56ccu: goto label_2b56cc;
        case 0x2b56d0u: goto label_2b56d0;
        case 0x2b56d4u: goto label_2b56d4;
        case 0x2b56d8u: goto label_2b56d8;
        case 0x2b56dcu: goto label_2b56dc;
        case 0x2b56e0u: goto label_2b56e0;
        case 0x2b56e4u: goto label_2b56e4;
        case 0x2b56e8u: goto label_2b56e8;
        case 0x2b56ecu: goto label_2b56ec;
        case 0x2b56f0u: goto label_2b56f0;
        case 0x2b56f4u: goto label_2b56f4;
        case 0x2b56f8u: goto label_2b56f8;
        case 0x2b56fcu: goto label_2b56fc;
        case 0x2b5700u: goto label_2b5700;
        case 0x2b5704u: goto label_2b5704;
        case 0x2b5708u: goto label_2b5708;
        case 0x2b570cu: goto label_2b570c;
        case 0x2b5710u: goto label_2b5710;
        case 0x2b5714u: goto label_2b5714;
        case 0x2b5718u: goto label_2b5718;
        case 0x2b571cu: goto label_2b571c;
        case 0x2b5720u: goto label_2b5720;
        case 0x2b5724u: goto label_2b5724;
        case 0x2b5728u: goto label_2b5728;
        case 0x2b572cu: goto label_2b572c;
        case 0x2b5730u: goto label_2b5730;
        case 0x2b5734u: goto label_2b5734;
        case 0x2b5738u: goto label_2b5738;
        case 0x2b573cu: goto label_2b573c;
        case 0x2b5740u: goto label_2b5740;
        case 0x2b5744u: goto label_2b5744;
        case 0x2b5748u: goto label_2b5748;
        case 0x2b574cu: goto label_2b574c;
        case 0x2b5750u: goto label_2b5750;
        case 0x2b5754u: goto label_2b5754;
        case 0x2b5758u: goto label_2b5758;
        case 0x2b575cu: goto label_2b575c;
        case 0x2b5760u: goto label_2b5760;
        case 0x2b5764u: goto label_2b5764;
        case 0x2b5768u: goto label_2b5768;
        case 0x2b576cu: goto label_2b576c;
        case 0x2b5770u: goto label_2b5770;
        case 0x2b5774u: goto label_2b5774;
        case 0x2b5778u: goto label_2b5778;
        case 0x2b577cu: goto label_2b577c;
        case 0x2b5780u: goto label_2b5780;
        case 0x2b5784u: goto label_2b5784;
        case 0x2b5788u: goto label_2b5788;
        case 0x2b578cu: goto label_2b578c;
        case 0x2b5790u: goto label_2b5790;
        case 0x2b5794u: goto label_2b5794;
        case 0x2b5798u: goto label_2b5798;
        case 0x2b579cu: goto label_2b579c;
        case 0x2b57a0u: goto label_2b57a0;
        case 0x2b57a4u: goto label_2b57a4;
        case 0x2b57a8u: goto label_2b57a8;
        case 0x2b57acu: goto label_2b57ac;
        case 0x2b57b0u: goto label_2b57b0;
        case 0x2b57b4u: goto label_2b57b4;
        case 0x2b57b8u: goto label_2b57b8;
        case 0x2b57bcu: goto label_2b57bc;
        case 0x2b57c0u: goto label_2b57c0;
        case 0x2b57c4u: goto label_2b57c4;
        case 0x2b57c8u: goto label_2b57c8;
        case 0x2b57ccu: goto label_2b57cc;
        case 0x2b57d0u: goto label_2b57d0;
        case 0x2b57d4u: goto label_2b57d4;
        case 0x2b57d8u: goto label_2b57d8;
        case 0x2b57dcu: goto label_2b57dc;
        case 0x2b57e0u: goto label_2b57e0;
        case 0x2b57e4u: goto label_2b57e4;
        case 0x2b57e8u: goto label_2b57e8;
        case 0x2b57ecu: goto label_2b57ec;
        case 0x2b57f0u: goto label_2b57f0;
        case 0x2b57f4u: goto label_2b57f4;
        default: break;
    }

    ctx->pc = 0x2b55f0u;

label_2b55f0:
    // 0x2b55f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b55f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2b55f4:
    // 0x2b55f4: 0x24021170  addiu       $v0, $zero, 0x1170
    ctx->pc = 0x2b55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4464));
label_2b55f8:
    // 0x2b55f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b55f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b55fc:
    // 0x2b55fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b55fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2b5600:
    // 0x2b5600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b5604:
    // 0x2b5604: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b5604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2b5608:
    // 0x2b5608: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2b5608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2b560c:
    // 0x2b560c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2b5610:
    // 0x2b5610: 0x8e110030  lw          $s1, 0x30($s0)
    ctx->pc = 0x2b5610u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2b5614:
    // 0x2b5614: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
label_2b5618:
    if (ctx->pc == 0x2B5618u) {
        ctx->pc = 0x2B5618u;
            // 0x2b5618: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2B561Cu;
        goto label_2b561c;
    }
    ctx->pc = 0x2B5614u;
    {
        const bool branch_taken_0x2b5614 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5614u;
            // 0x2b5618: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5614) {
            ctx->pc = 0x2B5658u;
            goto label_2b5658;
        }
    }
    ctx->pc = 0x2B561Cu;
label_2b561c:
    // 0x2b561c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2b561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2b5620:
    // 0x2b5620: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2b5624:
    if (ctx->pc == 0x2B5624u) {
        ctx->pc = 0x2B5624u;
            // 0x2b5624: 0x24021171  addiu       $v0, $zero, 0x1171 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4465));
        ctx->pc = 0x2B5628u;
        goto label_2b5628;
    }
    ctx->pc = 0x2B5620u;
    {
        const bool branch_taken_0x2b5620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5620) {
            ctx->pc = 0x2B5624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5620u;
            // 0x2b5624: 0x24021171  addiu       $v0, $zero, 0x1171 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4465));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5648u;
            goto label_2b5648;
        }
    }
    ctx->pc = 0x2B5628u;
label_2b5628:
    // 0x2b5628: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2b5628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b562c:
    // 0x2b562c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b5630:
    // 0x2b5630: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b5634:
    if (ctx->pc == 0x2B5634u) {
        ctx->pc = 0x2B5634u;
            // 0x2b5634: 0x24021171  addiu       $v0, $zero, 0x1171 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4465));
        ctx->pc = 0x2B5638u;
        goto label_2b5638;
    }
    ctx->pc = 0x2B5630u;
    {
        const bool branch_taken_0x2b5630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5630u;
            // 0x2b5634: 0x24021171  addiu       $v0, $zero, 0x1171 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5630) {
            ctx->pc = 0x2B5648u;
            goto label_2b5648;
        }
    }
    ctx->pc = 0x2B5638u;
label_2b5638:
    // 0x2b5638: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b5638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b563c:
    // 0x2b563c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b5640:
    if (ctx->pc == 0x2B5640u) {
        ctx->pc = 0x2B5640u;
            // 0x2b5640: 0x24021172  addiu       $v0, $zero, 0x1172 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
        ctx->pc = 0x2B5644u;
        goto label_2b5644;
    }
    ctx->pc = 0x2B563Cu;
    {
        const bool branch_taken_0x2b563c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B563Cu;
            // 0x2b5640: 0x24021172  addiu       $v0, $zero, 0x1172 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b563c) {
            ctx->pc = 0x2B5650u;
            goto label_2b5650;
        }
    }
    ctx->pc = 0x2B5644u;
label_2b5644:
    // 0x2b5644: 0x24021171  addiu       $v0, $zero, 0x1171
    ctx->pc = 0x2b5644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4465));
label_2b5648:
    // 0x2b5648: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b564c:
    if (ctx->pc == 0x2B564Cu) {
        ctx->pc = 0x2B564Cu;
            // 0x2b564c: 0x24111171  addiu       $s1, $zero, 0x1171 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4465));
        ctx->pc = 0x2B5650u;
        goto label_2b5650;
    }
    ctx->pc = 0x2B5648u;
    {
        const bool branch_taken_0x2b5648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5648u;
            // 0x2b564c: 0x24111171  addiu       $s1, $zero, 0x1171 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5648) {
            ctx->pc = 0x2B5654u;
            goto label_2b5654;
        }
    }
    ctx->pc = 0x2B5650u;
label_2b5650:
    // 0x2b5650: 0x24111172  addiu       $s1, $zero, 0x1172
    ctx->pc = 0x2b5650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
label_2b5654:
    // 0x2b5654: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b5654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2b5658:
    // 0x2b5658: 0x24021171  addiu       $v0, $zero, 0x1171
    ctx->pc = 0x2b5658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4465));
label_2b565c:
    // 0x2b565c: 0x1622004a  bne         $s1, $v0, . + 4 + (0x4A << 2)
label_2b5660:
    if (ctx->pc == 0x2B5660u) {
        ctx->pc = 0x2B5660u;
            // 0x2b5660: 0x24021172  addiu       $v0, $zero, 0x1172 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
        ctx->pc = 0x2B5664u;
        goto label_2b5664;
    }
    ctx->pc = 0x2B565Cu;
    {
        const bool branch_taken_0x2b565c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B565Cu;
            // 0x2b5660: 0x24021172  addiu       $v0, $zero, 0x1172 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b565c) {
            ctx->pc = 0x2B5788u;
            goto label_2b5788;
        }
    }
    ctx->pc = 0x2B5664u;
label_2b5664:
    // 0x2b5664: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2b5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2b5668:
    // 0x2b5668: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x2b5668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_2b566c:
    // 0x2b566c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b5670:
    if (ctx->pc == 0x2B5670u) {
        ctx->pc = 0x2B5670u;
            // 0x2b5670: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5674u;
        goto label_2b5674;
    }
    ctx->pc = 0x2B566Cu;
    {
        const bool branch_taken_0x2b566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B566Cu;
            // 0x2b5670: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b566c) {
            ctx->pc = 0x2B5688u;
            goto label_2b5688;
        }
    }
    ctx->pc = 0x2B5674u;
label_2b5674:
    // 0x2b5674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5678:
    // 0x2b5678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b5678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b567c:
    // 0x2b567c: 0x40f809  jalr        $v0
label_2b5680:
    if (ctx->pc == 0x2B5680u) {
        ctx->pc = 0x2B5680u;
            // 0x2b5680: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x2B5684u;
        goto label_2b5684;
    }
    ctx->pc = 0x2B567Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B5684u);
        ctx->pc = 0x2B5680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B567Cu;
            // 0x2b5680: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B5684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B5684u; }
            if (ctx->pc != 0x2B5684u) { return; }
        }
        }
    }
    ctx->pc = 0x2B5684u;
label_2b5684:
    // 0x2b5684: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b5684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5688:
    // 0x2b5688: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
label_2b568c:
    if (ctx->pc == 0x2B568Cu) {
        ctx->pc = 0x2B568Cu;
            // 0x2b568c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B5690u;
        goto label_2b5690;
    }
    ctx->pc = 0x2B5688u;
    {
        const bool branch_taken_0x2b5688 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2B568Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5688u;
            // 0x2b568c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5688) {
            ctx->pc = 0x2B56A0u;
            goto label_2b56a0;
        }
    }
    ctx->pc = 0x2B5690u;
label_2b5690:
    // 0x2b5690: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b5690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b5694:
    // 0x2b5694: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b5694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b5698:
    // 0x2b5698: 0x10000050  b           . + 4 + (0x50 << 2)
label_2b569c:
    if (ctx->pc == 0x2B569Cu) {
        ctx->pc = 0x2B569Cu;
            // 0x2b569c: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x2B56A0u;
        goto label_2b56a0;
    }
    ctx->pc = 0x2B5698u;
    {
        const bool branch_taken_0x2b5698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5698u;
            // 0x2b569c: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5698) {
            ctx->pc = 0x2B57DCu;
            goto label_2b57dc;
        }
    }
    ctx->pc = 0x2B56A0u;
label_2b56a0:
    // 0x2b56a0: 0x1642001b  bne         $s2, $v0, . + 4 + (0x1B << 2)
label_2b56a4:
    if (ctx->pc == 0x2B56A4u) {
        ctx->pc = 0x2B56A4u;
            // 0x2b56a4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x2B56A8u;
        goto label_2b56a8;
    }
    ctx->pc = 0x2B56A0u;
    {
        const bool branch_taken_0x2b56a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B56A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56A0u;
            // 0x2b56a4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56a0) {
            ctx->pc = 0x2B5710u;
            goto label_2b5710;
        }
    }
    ctx->pc = 0x2B56A8u;
label_2b56a8:
    // 0x2b56a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2b56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b56ac:
    // 0x2b56ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b56b0:
    if (ctx->pc == 0x2B56B0u) {
        ctx->pc = 0x2B56B0u;
            // 0x2b56b0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2B56B4u;
        goto label_2b56b4;
    }
    ctx->pc = 0x2B56ACu;
    {
        const bool branch_taken_0x2b56ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B56B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56ACu;
            // 0x2b56b0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56ac) {
            ctx->pc = 0x2B56E8u;
            goto label_2b56e8;
        }
    }
    ctx->pc = 0x2B56B4u;
label_2b56b4:
    // 0x2b56b4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_2b56b8:
    if (ctx->pc == 0x2B56B8u) {
        ctx->pc = 0x2B56B8u;
            // 0x2b56b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B56BCu;
        goto label_2b56bc;
    }
    ctx->pc = 0x2B56B4u;
    {
        const bool branch_taken_0x2b56b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B56B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56B4u;
            // 0x2b56b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56b4) {
            ctx->pc = 0x2B56ECu;
            goto label_2b56ec;
        }
    }
    ctx->pc = 0x2B56BCu;
label_2b56bc:
    // 0x2b56bc: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x2b56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_2b56c0:
    // 0x2b56c0: 0xc0ac62c  jal         func_2B18B0
label_2b56c4:
    if (ctx->pc == 0x2B56C4u) {
        ctx->pc = 0x2B56C4u;
            // 0x2b56c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B56C8u;
        goto label_2b56c8;
    }
    ctx->pc = 0x2B56C0u;
    SET_GPR_U32(ctx, 31, 0x2B56C8u);
    ctx->pc = 0x2B56C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56C0u;
            // 0x2b56c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B18B0u;
    if (runtime->hasFunction(0x2B18B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B18B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56C8u; }
        if (ctx->pc != 0x2B56C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B18B0_0x2b18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56C8u; }
        if (ctx->pc != 0x2B56C8u) { return; }
    }
    ctx->pc = 0x2B56C8u;
label_2b56c8:
    // 0x2b56c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b56cc:
    if (ctx->pc == 0x2B56CCu) {
        ctx->pc = 0x2B56CCu;
            // 0x2b56cc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x2B56D0u;
        goto label_2b56d0;
    }
    ctx->pc = 0x2B56C8u;
    {
        const bool branch_taken_0x2b56c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B56CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56C8u;
            // 0x2b56cc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56c8) {
            ctx->pc = 0x2B56E0u;
            goto label_2b56e0;
        }
    }
    ctx->pc = 0x2B56D0u;
label_2b56d0:
    // 0x2b56d0: 0xc0ac6c2  jal         func_2B1B08
label_2b56d4:
    if (ctx->pc == 0x2B56D4u) {
        ctx->pc = 0x2B56D4u;
            // 0x2b56d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B56D8u;
        goto label_2b56d8;
    }
    ctx->pc = 0x2B56D0u;
    SET_GPR_U32(ctx, 31, 0x2B56D8u);
    ctx->pc = 0x2B56D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56D0u;
            // 0x2b56d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1B08u;
    if (runtime->hasFunction(0x2B1B08u)) {
        auto targetFn = runtime->lookupFunction(0x2B1B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56D8u; }
        if (ctx->pc != 0x2B56D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1B08_0x2b1b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56D8u; }
        if (ctx->pc != 0x2B56D8u) { return; }
    }
    ctx->pc = 0x2B56D8u;
label_2b56d8:
    // 0x2b56d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2b56dc:
    if (ctx->pc == 0x2B56DCu) {
        ctx->pc = 0x2B56DCu;
            // 0x2b56dc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2B56E0u;
        goto label_2b56e0;
    }
    ctx->pc = 0x2B56D8u;
    {
        const bool branch_taken_0x2b56d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B56DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56D8u;
            // 0x2b56dc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56d8) {
            ctx->pc = 0x2B5714u;
            goto label_2b5714;
        }
    }
    ctx->pc = 0x2B56E0u;
label_2b56e0:
    // 0x2b56e0: 0x1000000b  b           . + 4 + (0xB << 2)
label_2b56e4:
    if (ctx->pc == 0x2B56E4u) {
        ctx->pc = 0x2B56E4u;
            // 0x2b56e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B56E8u;
        goto label_2b56e8;
    }
    ctx->pc = 0x2B56E0u;
    {
        const bool branch_taken_0x2b56e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B56E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56E0u;
            // 0x2b56e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56e0) {
            ctx->pc = 0x2B5710u;
            goto label_2b5710;
        }
    }
    ctx->pc = 0x2B56E8u;
label_2b56e8:
    // 0x2b56e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b56ec:
    // 0x2b56ec: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_2b56f0:
    if (ctx->pc == 0x2B56F0u) {
        ctx->pc = 0x2B56F0u;
            // 0x2b56f0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2B56F4u;
        goto label_2b56f4;
    }
    ctx->pc = 0x2B56ECu;
    {
        const bool branch_taken_0x2b56ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B56F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56ECu;
            // 0x2b56f0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56ec) {
            ctx->pc = 0x2B5714u;
            goto label_2b5714;
        }
    }
    ctx->pc = 0x2B56F4u;
label_2b56f4:
    // 0x2b56f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b56f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b56f8:
    // 0x2b56f8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b56fc:
    // 0x2b56fc: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x2b56fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_2b5700:
    // 0x2b5700: 0x2406006a  addiu       $a2, $zero, 0x6A
    ctx->pc = 0x2b5700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2b5704:
    // 0x2b5704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5708:
    // 0x2b5708: 0xc0a5648  jal         func_295920
label_2b570c:
    if (ctx->pc == 0x2B570Cu) {
        ctx->pc = 0x2B570Cu;
            // 0x2b570c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5710u;
        goto label_2b5710;
    }
    ctx->pc = 0x2B5708u;
    SET_GPR_U32(ctx, 31, 0x2B5710u);
    ctx->pc = 0x2B570Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5708u;
            // 0x2b570c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5710u; }
        if (ctx->pc != 0x2B5710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5710u; }
        if (ctx->pc != 0x2B5710u) { return; }
    }
    ctx->pc = 0x2B5710u;
label_2b5710:
    // 0x2b5710: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2b5710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b5714:
    // 0x2b5714: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2b5718:
    if (ctx->pc == 0x2B5718u) {
        ctx->pc = 0x2B5718u;
            // 0x2b5718: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x2B571Cu;
        goto label_2b571c;
    }
    ctx->pc = 0x2B5714u;
    {
        const bool branch_taken_0x2b5714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5714) {
            ctx->pc = 0x2B5718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5714u;
            // 0x2b5718: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5728u;
            goto label_2b5728;
        }
    }
    ctx->pc = 0x2B571Cu;
label_2b571c:
    // 0x2b571c: 0xc0a390c  jal         func_28E430
label_2b5720:
    if (ctx->pc == 0x2B5720u) {
        ctx->pc = 0x2B5724u;
        goto label_2b5724;
    }
    ctx->pc = 0x2B571Cu;
    SET_GPR_U32(ctx, 31, 0x2B5724u);
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5724u; }
        if (ctx->pc != 0x2B5724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5724u; }
        if (ctx->pc != 0x2B5724u) { return; }
    }
    ctx->pc = 0x2B5724u;
label_2b5724:
    // 0x2b5724: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2b5724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b5728:
    // 0x2b5728: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b572c:
    if (ctx->pc == 0x2B572Cu) {
        ctx->pc = 0x2B5730u;
        goto label_2b5730;
    }
    ctx->pc = 0x2B5728u;
    {
        const bool branch_taken_0x2b5728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5728) {
            ctx->pc = 0x2B5738u;
            goto label_2b5738;
        }
    }
    ctx->pc = 0x2B5730u;
label_2b5730:
    // 0x2b5730: 0xc0a3d02  jal         func_28F408
label_2b5734:
    if (ctx->pc == 0x2B5734u) {
        ctx->pc = 0x2B5738u;
        goto label_2b5738;
    }
    ctx->pc = 0x2B5730u;
    SET_GPR_U32(ctx, 31, 0x2B5738u);
    ctx->pc = 0x28F408u;
    if (runtime->hasFunction(0x28F408u)) {
        auto targetFn = runtime->lookupFunction(0x28F408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5738u; }
        if (ctx->pc != 0x2B5738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F408_0x28f408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5738u; }
        if (ctx->pc != 0x2B5738u) { return; }
    }
    ctx->pc = 0x2B5738u;
label_2b5738:
    // 0x2b5738: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
label_2b573c:
    if (ctx->pc == 0x2B573Cu) {
        ctx->pc = 0x2B573Cu;
            // 0x2b573c: 0x24021172  addiu       $v0, $zero, 0x1172 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
        ctx->pc = 0x2B5740u;
        goto label_2b5740;
    }
    ctx->pc = 0x2B5738u;
    {
        const bool branch_taken_0x2b5738 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B573Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5738u;
            // 0x2b573c: 0x24021172  addiu       $v0, $zero, 0x1172 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5738) {
            ctx->pc = 0x2B577Cu;
            goto label_2b577c;
        }
    }
    ctx->pc = 0x2B5740u;
label_2b5740:
    // 0x2b5740: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b5740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b5744:
    // 0x2b5744: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x2b5744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_2b5748:
    // 0x2b5748: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_2b574c:
    if (ctx->pc == 0x2B574Cu) {
        ctx->pc = 0x2B574Cu;
            // 0x2b574c: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x2B5750u;
        goto label_2b5750;
    }
    ctx->pc = 0x2B5748u;
    {
        const bool branch_taken_0x2b5748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b5748) {
            ctx->pc = 0x2B574Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5748u;
            // 0x2b574c: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5770u;
            goto label_2b5770;
        }
    }
    ctx->pc = 0x2B5750u;
label_2b5750:
    // 0x2b5750: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2b5750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b5754:
    // 0x2b5754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5758:
    // 0x2b5758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b5758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b575c:
    // 0x2b575c: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2b575cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_2b5760:
    // 0x2b5760: 0xc0adb7e  jal         func_2B6DF8
label_2b5764:
    if (ctx->pc == 0x2B5764u) {
        ctx->pc = 0x2B5764u;
            // 0x2b5764: 0xac40016c  sw          $zero, 0x16C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 0));
        ctx->pc = 0x2B5768u;
        goto label_2b5768;
    }
    ctx->pc = 0x2B5760u;
    SET_GPR_U32(ctx, 31, 0x2B5768u);
    ctx->pc = 0x2B5764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5760u;
            // 0x2b5764: 0xac40016c  sw          $zero, 0x16C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5768u; }
        if (ctx->pc != 0x2B5768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5768u; }
        if (ctx->pc != 0x2B5768u) { return; }
    }
    ctx->pc = 0x2B5768u;
label_2b5768:
    // 0x2b5768: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2b576c:
    if (ctx->pc == 0x2B576Cu) {
        ctx->pc = 0x2B576Cu;
            // 0x2b576c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B5770u;
        goto label_2b5770;
    }
    ctx->pc = 0x2B5768u;
    {
        const bool branch_taken_0x2b5768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5768u;
            // 0x2b576c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5768) {
            ctx->pc = 0x2B57DCu;
            goto label_2b57dc;
        }
    }
    ctx->pc = 0x2B5770u;
label_2b5770:
    // 0x2b5770: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5774:
    // 0x2b5774: 0xac62016c  sw          $v0, 0x16C($v1)
    ctx->pc = 0x2b5774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 364), GPR_U32(ctx, 2));
label_2b5778:
    // 0x2b5778: 0x24021172  addiu       $v0, $zero, 0x1172
    ctx->pc = 0x2b5778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
label_2b577c:
    // 0x2b577c: 0x24111172  addiu       $s1, $zero, 0x1172
    ctx->pc = 0x2b577cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
label_2b5780:
    // 0x2b5780: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b5780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2b5784:
    // 0x2b5784: 0x24021172  addiu       $v0, $zero, 0x1172
    ctx->pc = 0x2b5784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4466));
label_2b5788:
    // 0x2b5788: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
label_2b578c:
    if (ctx->pc == 0x2B578Cu) {
        ctx->pc = 0x2B578Cu;
            // 0x2b578c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5790u;
        goto label_2b5790;
    }
    ctx->pc = 0x2B5788u;
    {
        const bool branch_taken_0x2b5788 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5788u;
            // 0x2b578c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5788) {
            ctx->pc = 0x2B57D4u;
            goto label_2b57d4;
        }
    }
    ctx->pc = 0x2B5790u;
label_2b5790:
    // 0x2b5790: 0x24021173  addiu       $v0, $zero, 0x1173
    ctx->pc = 0x2b5790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4467));
label_2b5794:
    // 0x2b5794: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2b5794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b5798:
    // 0x2b5798: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b5798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2b579c:
    // 0x2b579c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b579cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b57a0:
    // 0x2b57a0: 0x8c82016c  lw          $v0, 0x16C($a0)
    ctx->pc = 0x2b57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
label_2b57a4:
    // 0x2b57a4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_2b57a8:
    if (ctx->pc == 0x2B57A8u) {
        ctx->pc = 0x2B57A8u;
            // 0x2b57a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B57ACu;
        goto label_2b57ac;
    }
    ctx->pc = 0x2B57A4u;
    {
        const bool branch_taken_0x2b57a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b57a4) {
            ctx->pc = 0x2B57A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57A4u;
            // 0x2b57a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B57B8u;
            goto label_2b57b8;
        }
    }
    ctx->pc = 0x2B57ACu;
label_2b57ac:
    // 0x2b57ac: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2b57acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2b57b0:
    // 0x2b57b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2b57b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b57b4:
    // 0x2b57b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b57b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b57b8:
    // 0x2b57b8: 0xc0ab388  jal         func_2ACE20
label_2b57bc:
    if (ctx->pc == 0x2B57BCu) {
        ctx->pc = 0x2B57BCu;
            // 0x2b57bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B57C0u;
        goto label_2b57c0;
    }
    ctx->pc = 0x2B57B8u;
    SET_GPR_U32(ctx, 31, 0x2B57C0u);
    ctx->pc = 0x2B57BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57B8u;
            // 0x2b57bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE20u;
    if (runtime->hasFunction(0x2ACE20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57C0u; }
        if (ctx->pc != 0x2B57C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACE20_0x2ace20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57C0u; }
        if (ctx->pc != 0x2B57C0u) { return; }
    }
    ctx->pc = 0x2B57C0u;
label_2b57c0:
    // 0x2b57c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b57c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2b57c4:
    // 0x2b57c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b57c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b57c8:
    // 0x2b57c8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2b57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2b57cc:
    // 0x2b57cc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2b57ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2b57d0:
    // 0x2b57d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b57d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b57d4:
    // 0x2b57d4: 0xc0adc0a  jal         func_2B7028
label_2b57d8:
    if (ctx->pc == 0x2B57D8u) {
        ctx->pc = 0x2B57D8u;
            // 0x2b57d8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x2B57DCu;
        goto label_2b57dc;
    }
    ctx->pc = 0x2B57D4u;
    SET_GPR_U32(ctx, 31, 0x2B57DCu);
    ctx->pc = 0x2B57D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57D4u;
            // 0x2b57d8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7028u;
    if (runtime->hasFunction(0x2B7028u)) {
        auto targetFn = runtime->lookupFunction(0x2B7028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57DCu; }
        if (ctx->pc != 0x2B57DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7028_0x2b7028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57DCu; }
        if (ctx->pc != 0x2B57DCu) { return; }
    }
    ctx->pc = 0x2B57DCu;
label_2b57dc:
    // 0x2b57dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b57dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b57e0:
    // 0x2b57e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b57e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b57e4:
    // 0x2b57e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b57e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b57e8:
    // 0x2b57e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b57e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b57ec:
    // 0x2b57ec: 0x3e00008  jr          $ra
label_2b57f0:
    if (ctx->pc == 0x2B57F0u) {
        ctx->pc = 0x2B57F0u;
            // 0x2b57f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2B57F4u;
        goto label_2b57f4;
    }
    ctx->pc = 0x2B57ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B57F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57ECu;
            // 0x2b57f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B57F4u;
label_2b57f4:
    // 0x2b57f4: 0x0  nop
    ctx->pc = 0x2b57f4u;
    // NOP
    ctx->pc = 0x2b57f8u;
}
