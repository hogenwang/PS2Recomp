#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B04E8
// Address: 0x2b04e8 - 0x2b0710
void sub_002B04E8_0x2b04e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B04E8_0x2b04e8");
#endif

    switch (ctx->pc) {
        case 0x2b04e8u: goto label_2b04e8;
        case 0x2b04ecu: goto label_2b04ec;
        case 0x2b04f0u: goto label_2b04f0;
        case 0x2b04f4u: goto label_2b04f4;
        case 0x2b04f8u: goto label_2b04f8;
        case 0x2b04fcu: goto label_2b04fc;
        case 0x2b0500u: goto label_2b0500;
        case 0x2b0504u: goto label_2b0504;
        case 0x2b0508u: goto label_2b0508;
        case 0x2b050cu: goto label_2b050c;
        case 0x2b0510u: goto label_2b0510;
        case 0x2b0514u: goto label_2b0514;
        case 0x2b0518u: goto label_2b0518;
        case 0x2b051cu: goto label_2b051c;
        case 0x2b0520u: goto label_2b0520;
        case 0x2b0524u: goto label_2b0524;
        case 0x2b0528u: goto label_2b0528;
        case 0x2b052cu: goto label_2b052c;
        case 0x2b0530u: goto label_2b0530;
        case 0x2b0534u: goto label_2b0534;
        case 0x2b0538u: goto label_2b0538;
        case 0x2b053cu: goto label_2b053c;
        case 0x2b0540u: goto label_2b0540;
        case 0x2b0544u: goto label_2b0544;
        case 0x2b0548u: goto label_2b0548;
        case 0x2b054cu: goto label_2b054c;
        case 0x2b0550u: goto label_2b0550;
        case 0x2b0554u: goto label_2b0554;
        case 0x2b0558u: goto label_2b0558;
        case 0x2b055cu: goto label_2b055c;
        case 0x2b0560u: goto label_2b0560;
        case 0x2b0564u: goto label_2b0564;
        case 0x2b0568u: goto label_2b0568;
        case 0x2b056cu: goto label_2b056c;
        case 0x2b0570u: goto label_2b0570;
        case 0x2b0574u: goto label_2b0574;
        case 0x2b0578u: goto label_2b0578;
        case 0x2b057cu: goto label_2b057c;
        case 0x2b0580u: goto label_2b0580;
        case 0x2b0584u: goto label_2b0584;
        case 0x2b0588u: goto label_2b0588;
        case 0x2b058cu: goto label_2b058c;
        case 0x2b0590u: goto label_2b0590;
        case 0x2b0594u: goto label_2b0594;
        case 0x2b0598u: goto label_2b0598;
        case 0x2b059cu: goto label_2b059c;
        case 0x2b05a0u: goto label_2b05a0;
        case 0x2b05a4u: goto label_2b05a4;
        case 0x2b05a8u: goto label_2b05a8;
        case 0x2b05acu: goto label_2b05ac;
        case 0x2b05b0u: goto label_2b05b0;
        case 0x2b05b4u: goto label_2b05b4;
        case 0x2b05b8u: goto label_2b05b8;
        case 0x2b05bcu: goto label_2b05bc;
        case 0x2b05c0u: goto label_2b05c0;
        case 0x2b05c4u: goto label_2b05c4;
        case 0x2b05c8u: goto label_2b05c8;
        case 0x2b05ccu: goto label_2b05cc;
        case 0x2b05d0u: goto label_2b05d0;
        case 0x2b05d4u: goto label_2b05d4;
        case 0x2b05d8u: goto label_2b05d8;
        case 0x2b05dcu: goto label_2b05dc;
        case 0x2b05e0u: goto label_2b05e0;
        case 0x2b05e4u: goto label_2b05e4;
        case 0x2b05e8u: goto label_2b05e8;
        case 0x2b05ecu: goto label_2b05ec;
        case 0x2b05f0u: goto label_2b05f0;
        case 0x2b05f4u: goto label_2b05f4;
        case 0x2b05f8u: goto label_2b05f8;
        case 0x2b05fcu: goto label_2b05fc;
        case 0x2b0600u: goto label_2b0600;
        case 0x2b0604u: goto label_2b0604;
        case 0x2b0608u: goto label_2b0608;
        case 0x2b060cu: goto label_2b060c;
        case 0x2b0610u: goto label_2b0610;
        case 0x2b0614u: goto label_2b0614;
        case 0x2b0618u: goto label_2b0618;
        case 0x2b061cu: goto label_2b061c;
        case 0x2b0620u: goto label_2b0620;
        case 0x2b0624u: goto label_2b0624;
        case 0x2b0628u: goto label_2b0628;
        case 0x2b062cu: goto label_2b062c;
        case 0x2b0630u: goto label_2b0630;
        case 0x2b0634u: goto label_2b0634;
        case 0x2b0638u: goto label_2b0638;
        case 0x2b063cu: goto label_2b063c;
        case 0x2b0640u: goto label_2b0640;
        case 0x2b0644u: goto label_2b0644;
        case 0x2b0648u: goto label_2b0648;
        case 0x2b064cu: goto label_2b064c;
        case 0x2b0650u: goto label_2b0650;
        case 0x2b0654u: goto label_2b0654;
        case 0x2b0658u: goto label_2b0658;
        case 0x2b065cu: goto label_2b065c;
        case 0x2b0660u: goto label_2b0660;
        case 0x2b0664u: goto label_2b0664;
        case 0x2b0668u: goto label_2b0668;
        case 0x2b066cu: goto label_2b066c;
        case 0x2b0670u: goto label_2b0670;
        case 0x2b0674u: goto label_2b0674;
        case 0x2b0678u: goto label_2b0678;
        case 0x2b067cu: goto label_2b067c;
        case 0x2b0680u: goto label_2b0680;
        case 0x2b0684u: goto label_2b0684;
        case 0x2b0688u: goto label_2b0688;
        case 0x2b068cu: goto label_2b068c;
        case 0x2b0690u: goto label_2b0690;
        case 0x2b0694u: goto label_2b0694;
        case 0x2b0698u: goto label_2b0698;
        case 0x2b069cu: goto label_2b069c;
        case 0x2b06a0u: goto label_2b06a0;
        case 0x2b06a4u: goto label_2b06a4;
        case 0x2b06a8u: goto label_2b06a8;
        case 0x2b06acu: goto label_2b06ac;
        case 0x2b06b0u: goto label_2b06b0;
        case 0x2b06b4u: goto label_2b06b4;
        case 0x2b06b8u: goto label_2b06b8;
        case 0x2b06bcu: goto label_2b06bc;
        case 0x2b06c0u: goto label_2b06c0;
        case 0x2b06c4u: goto label_2b06c4;
        case 0x2b06c8u: goto label_2b06c8;
        case 0x2b06ccu: goto label_2b06cc;
        case 0x2b06d0u: goto label_2b06d0;
        case 0x2b06d4u: goto label_2b06d4;
        case 0x2b06d8u: goto label_2b06d8;
        case 0x2b06dcu: goto label_2b06dc;
        case 0x2b06e0u: goto label_2b06e0;
        case 0x2b06e4u: goto label_2b06e4;
        case 0x2b06e8u: goto label_2b06e8;
        case 0x2b06ecu: goto label_2b06ec;
        case 0x2b06f0u: goto label_2b06f0;
        case 0x2b06f4u: goto label_2b06f4;
        case 0x2b06f8u: goto label_2b06f8;
        case 0x2b06fcu: goto label_2b06fc;
        case 0x2b0700u: goto label_2b0700;
        case 0x2b0704u: goto label_2b0704;
        case 0x2b0708u: goto label_2b0708;
        case 0x2b070cu: goto label_2b070c;
        default: break;
    }

    ctx->pc = 0x2b04e8u;

label_2b04e8:
    // 0x2b04e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b04e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b04ec:
    // 0x2b04ec: 0x24a3ffec  addiu       $v1, $a1, -0x14
    ctx->pc = 0x2b04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
label_2b04f0:
    // 0x2b04f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b04f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b04f4:
    // 0x2b04f4: 0x2c620024  sltiu       $v0, $v1, 0x24
    ctx->pc = 0x2b04f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
label_2b04f8:
    // 0x2b04f8: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_2b04fc:
    if (ctx->pc == 0x2B04FCu) {
        ctx->pc = 0x2B04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04F8u;
        // 0x2b04fc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0500u;
        goto label_2b0500;
    }
    ctx->pc = 0x2B04F8u;
    {
        const bool branch_taken_0x2b04f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04F8u;
        // 0x2b04fc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04f8) {
            ctx->pc = 0x2B068Cu;
            goto label_2b068c;
        }
    }
    ctx->pc = 0x2B0500u;
label_2b0500:
    // 0x2b0500: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b0500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b0504:
    // 0x2b0504: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b0504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b0508:
    // 0x2b0508: 0x2442d2d0  addiu       $v0, $v0, -0x2D30
    ctx->pc = 0x2b0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955728));
label_2b050c:
    // 0x2b050c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b0510:
    // 0x2b0510: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b0510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b0514:
    // 0x2b0514: 0x800008  jr          $a0
label_2b0518:
    if (ctx->pc == 0x2B0518u) {
        ctx->pc = 0x2B051Cu;
        goto label_2b051c;
    }
    ctx->pc = 0x2B0514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B051Cu: goto label_2b051c;
            case 0x2B0524u: goto label_2b0524;
            case 0x2B053Cu: goto label_2b053c;
            case 0x2B0574u: goto label_2b0574;
            case 0x2B05A8u: goto label_2b05a8;
            case 0x2B05B4u: goto label_2b05b4;
            case 0x2B05BCu: goto label_2b05bc;
            case 0x2B05D0u: goto label_2b05d0;
            case 0x2B05D8u: goto label_2b05d8;
            case 0x2B05E4u: goto label_2b05e4;
            case 0x2B05ECu: goto label_2b05ec;
            case 0x2B05F4u: goto label_2b05f4;
            case 0x2B05FCu: goto label_2b05fc;
            case 0x2B0604u: goto label_2b0604;
            case 0x2B060Cu: goto label_2b060c;
            case 0x2B0614u: goto label_2b0614;
            case 0x2B061Cu: goto label_2b061c;
            case 0x2B0624u: goto label_2b0624;
            case 0x2B062Cu: goto label_2b062c;
            case 0x2B0634u: goto label_2b0634;
            case 0x2B063Cu: goto label_2b063c;
            case 0x2B064Cu: goto label_2b064c;
            case 0x2B0654u: goto label_2b0654;
            case 0x2B0668u: goto label_2b0668;
            case 0x2B0670u: goto label_2b0670;
            case 0x2B0684u: goto label_2b0684;
            case 0x2B068Cu: goto label_2b068c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0514u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B051Cu;
label_2b051c:
    // 0x2b051c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2b0520:
    if (ctx->pc == 0x2B0520u) {
        ctx->pc = 0x2B0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B051Cu;
        // 0x2b0520: 0x8d0200a4  lw          $v0, 0xA4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0524u;
        goto label_2b0524;
    }
    ctx->pc = 0x2B051Cu;
    {
        const bool branch_taken_0x2b051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B051Cu;
        // 0x2b0520: 0x8d0200a4  lw          $v0, 0xA4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b051c) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B0524u;
label_2b0524:
    // 0x2b0524: 0x8d0500a4  lw          $a1, 0xA4($t0)
    ctx->pc = 0x2b0524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 164)));
label_2b0528:
    // 0x2b0528: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2b0528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2b052c:
    // 0x2b052c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b052cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b0530:
    // 0x2b0530: 0xad0200a4  sw          $v0, 0xA4($t0)
    ctx->pc = 0x2b0530u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 164), GPR_U32(ctx, 2));
label_2b0534:
    // 0x2b0534: 0x10000059  b           . + 4 + (0x59 << 2)
label_2b0538:
    if (ctx->pc == 0x2B0538u) {
        ctx->pc = 0x2B0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0534u;
        // 0x2b0538: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B053Cu;
        goto label_2b053c;
    }
    ctx->pc = 0x2B0534u;
    {
        const bool branch_taken_0x2b0534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0534u;
        // 0x2b0538: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0534) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B053Cu;
label_2b053c:
    // 0x2b053c: 0x24e2ff9c  addiu       $v0, $a3, -0x64
    ctx->pc = 0x2b053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967196));
label_2b0540:
    // 0x2b0540: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b0540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b0544:
    // 0x2b0544: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b0548:
    if (ctx->pc == 0x2B0548u) {
        ctx->pc = 0x2B0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0544u;
        // 0x2b0548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B054Cu;
        goto label_2b054c;
    }
    ctx->pc = 0x2B0544u;
    {
        const bool branch_taken_0x2b0544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0544u;
        // 0x2b0548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0544) {
            ctx->pc = 0x2B0554u;
            goto label_2b0554;
        }
    }
    ctx->pc = 0x2B054Cu;
label_2b054c:
    // 0x2b054c: 0xfd0600e8  sd          $a2, 0xE8($t0)
    ctx->pc = 0x2b054cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 232), GPR_U64(ctx, 6));
label_2b0550:
    // 0x2b0550: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b0550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0554:
    // 0x2b0554: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2b0554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2b0558:
    // 0x2b0558: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_2b055c:
    if (ctx->pc == 0x2B055Cu) {
        ctx->pc = 0x2B055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0558u;
        // 0x2b055c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0560u;
        goto label_2b0560;
    }
    ctx->pc = 0x2B0558u;
    {
        const bool branch_taken_0x2b0558 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0558u;
        // 0x2b055c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0558) {
            ctx->pc = 0x2B0568u;
            goto label_2b0568;
        }
    }
    ctx->pc = 0x2B0560u;
label_2b0560:
    // 0x2b0560: 0x14e2004e  bne         $a3, $v0, . + 4 + (0x4E << 2)
label_2b0564:
    if (ctx->pc == 0x2B0564u) {
        ctx->pc = 0x2B0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0560u;
        // 0x2b0564: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0568u;
        goto label_2b0568;
    }
    ctx->pc = 0x2B0560u;
    {
        const bool branch_taken_0x2b0560 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0560u;
        // 0x2b0564: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0560) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B0568u;
label_2b0568:
    // 0x2b0568: 0xfd0600f0  sd          $a2, 0xF0($t0)
    ctx->pc = 0x2b0568u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 240), GPR_U64(ctx, 6));
label_2b056c:
    // 0x2b056c: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_2b0570:
    if (ctx->pc == 0x2B0570u) {
        ctx->pc = 0x2B0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B056Cu;
        // 0x2b0570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0574u;
        goto label_2b0574;
    }
    ctx->pc = 0x2B056Cu;
    {
        const bool branch_taken_0x2b056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B056Cu;
        // 0x2b0570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b056c) {
            ctx->pc = 0x2B0534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0534;
        }
    }
    ctx->pc = 0x2B0574u;
label_2b0574:
    // 0x2b0574: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2b0574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2b0578:
    // 0x2b0578: 0x34a59000  ori         $a1, $a1, 0x9000
    ctx->pc = 0x2b0578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
label_2b057c:
    // 0x2b057c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2b057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2b0580:
    // 0x2b0580: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_2b0584:
    if (ctx->pc == 0x2B0584u) {
        ctx->pc = 0x2B0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0580u;
        // 0x2b0584: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0588u;
        goto label_2b0588;
    }
    ctx->pc = 0x2B0580u;
    {
        const bool branch_taken_0x2b0580 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0580u;
        // 0x2b0584: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0580) {
            ctx->pc = 0x2B0594u;
            goto label_2b0594;
        }
    }
    ctx->pc = 0x2B0588u;
label_2b0588:
    // 0x2b0588: 0xdd0200e8  ld          $v0, 0xE8($t0)
    ctx->pc = 0x2b0588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 232)));
label_2b058c:
    // 0x2b058c: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_2b0590:
    if (ctx->pc == 0x2B0590u) {
        ctx->pc = 0x2B0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B058Cu;
        // 0x2b0590: 0x42280b  movn        $a1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0594u;
        goto label_2b0594;
    }
    ctx->pc = 0x2B058Cu;
    {
        const bool branch_taken_0x2b058c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B058Cu;
        // 0x2b0590: 0x42280b  movn        $a1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b058c) {
            ctx->pc = 0x2B0534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0534;
        }
    }
    ctx->pc = 0x2B0594u;
label_2b0594:
    // 0x2b0594: 0x54e2ffe7  bnel        $a3, $v0, . + 4 + (-0x19 << 2)
label_2b0598:
    if (ctx->pc == 0x2B0598u) {
        ctx->pc = 0x2B0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0594u;
        // 0x2b0598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B059Cu;
        goto label_2b059c;
    }
    ctx->pc = 0x2B0594u;
    {
        const bool branch_taken_0x2b0594 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0594) {
            ctx->pc = 0x2B0598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0594u;
            // 0x2b0598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0534;
        }
    }
    ctx->pc = 0x2B059Cu;
label_2b059c:
    // 0x2b059c: 0xdd0200f0  ld          $v0, 0xF0($t0)
    ctx->pc = 0x2b059cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 240)));
label_2b05a0:
    // 0x2b05a0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_2b05a4:
    if (ctx->pc == 0x2B05A4u) {
        ctx->pc = 0x2B05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05A0u;
        // 0x2b05a4: 0x42280b  movn        $a1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B05A8u;
        goto label_2b05a8;
    }
    ctx->pc = 0x2B05A0u;
    {
        const bool branch_taken_0x2b05a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05A0u;
        // 0x2b05a4: 0x42280b  movn        $a1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05a0) {
            ctx->pc = 0x2B0534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0534;
        }
    }
    ctx->pc = 0x2B05A8u;
label_2b05a8:
    // 0x2b05a8: 0xdd050020  ld          $a1, 0x20($t0)
    ctx->pc = 0x2b05a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 8), 32)));
label_2b05ac:
    // 0x2b05ac: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_2b05b0:
    if (ctx->pc == 0x2B05B0u) {
        ctx->pc = 0x2B05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05ACu;
        // 0x2b05b0: 0xfd060020  sd          $a2, 0x20($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B05B4u;
        goto label_2b05b4;
    }
    ctx->pc = 0x2B05ACu;
    {
        const bool branch_taken_0x2b05ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05ACu;
        // 0x2b05b0: 0xfd060020  sd          $a2, 0x20($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05ac) {
            ctx->pc = 0x2B0534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0534;
        }
    }
    ctx->pc = 0x2B05B4u;
label_2b05b4:
    // 0x2b05b4: 0x10000039  b           . + 4 + (0x39 << 2)
label_2b05b8:
    if (ctx->pc == 0x2B05B8u) {
        ctx->pc = 0x2B05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05B4u;
        // 0x2b05b8: 0xdd020020  ld          $v0, 0x20($t0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B05BCu;
        goto label_2b05bc;
    }
    ctx->pc = 0x2B05B4u;
    {
        const bool branch_taken_0x2b05b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05B4u;
        // 0x2b05b8: 0xdd020020  ld          $v0, 0x20($t0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05b4) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B05BCu;
label_2b05bc:
    // 0x2b05bc: 0x8d050030  lw          $a1, 0x30($t0)
    ctx->pc = 0x2b05bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_2b05c0:
    // 0x2b05c0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2b05c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2b05c4:
    // 0x2b05c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b05c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b05c8:
    // 0x2b05c8: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_2b05cc:
    if (ctx->pc == 0x2B05CCu) {
        ctx->pc = 0x2B05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05C8u;
        // 0x2b05cc: 0xad020030  sw          $v0, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B05D0u;
        goto label_2b05d0;
    }
    ctx->pc = 0x2B05C8u;
    {
        const bool branch_taken_0x2b05c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05C8u;
        // 0x2b05cc: 0xad020030  sw          $v0, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05c8) {
            ctx->pc = 0x2B0534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0534;
        }
    }
    ctx->pc = 0x2B05D0u;
label_2b05d0:
    // 0x2b05d0: 0x10000032  b           . + 4 + (0x32 << 2)
label_2b05d4:
    if (ctx->pc == 0x2B05D4u) {
        ctx->pc = 0x2B05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05D0u;
        // 0x2b05d4: 0x8d020030  lw          $v0, 0x30($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B05D8u;
        goto label_2b05d8;
    }
    ctx->pc = 0x2B05D0u;
    {
        const bool branch_taken_0x2b05d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05D0u;
        // 0x2b05d4: 0x8d020030  lw          $v0, 0x30($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05d0) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B05D8u;
label_2b05d8:
    // 0x2b05d8: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x2b05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_2b05dc:
    // 0x2b05dc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2b05e0:
    if (ctx->pc == 0x2B05E0u) {
        ctx->pc = 0x2B05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05DCu;
        // 0x2b05e0: 0xdc620030  ld          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B05E4u;
        goto label_2b05e4;
    }
    ctx->pc = 0x2B05DCu;
    {
        const bool branch_taken_0x2b05dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05DCu;
        // 0x2b05e0: 0xdc620030  ld          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05dc) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B05E4u;
label_2b05e4:
    // 0x2b05e4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2b05e8:
    if (ctx->pc == 0x2B05E8u) {
        ctx->pc = 0x2B05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05E4u;
        // 0x2b05e8: 0x8d02004c  lw          $v0, 0x4C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B05ECu;
        goto label_2b05ec;
    }
    ctx->pc = 0x2B05E4u;
    {
        const bool branch_taken_0x2b05e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05E4u;
        // 0x2b05e8: 0x8d02004c  lw          $v0, 0x4C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05e4) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B05ECu;
label_2b05ec:
    // 0x2b05ec: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2b05f0:
    if (ctx->pc == 0x2B05F0u) {
        ctx->pc = 0x2B05F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05ECu;
        // 0x2b05f0: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B05F4u;
        goto label_2b05f4;
    }
    ctx->pc = 0x2B05ECu;
    {
        const bool branch_taken_0x2b05ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05ECu;
        // 0x2b05f0: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05ec) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B05F4u;
label_2b05f4:
    // 0x2b05f4: 0x10000029  b           . + 4 + (0x29 << 2)
label_2b05f8:
    if (ctx->pc == 0x2B05F8u) {
        ctx->pc = 0x2B05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05F4u;
        // 0x2b05f8: 0x8d020050  lw          $v0, 0x50($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B05FCu;
        goto label_2b05fc;
    }
    ctx->pc = 0x2B05F4u;
    {
        const bool branch_taken_0x2b05f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05F4u;
        // 0x2b05f8: 0x8d020050  lw          $v0, 0x50($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05f4) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B05FCu;
label_2b05fc:
    // 0x2b05fc: 0x10000027  b           . + 4 + (0x27 << 2)
label_2b0600:
    if (ctx->pc == 0x2B0600u) {
        ctx->pc = 0x2B0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05FCu;
        // 0x2b0600: 0x8d020058  lw          $v0, 0x58($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0604u;
        goto label_2b0604;
    }
    ctx->pc = 0x2B05FCu;
    {
        const bool branch_taken_0x2b05fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05FCu;
        // 0x2b0600: 0x8d020058  lw          $v0, 0x58($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05fc) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B0604u;
label_2b0604:
    // 0x2b0604: 0x10000025  b           . + 4 + (0x25 << 2)
label_2b0608:
    if (ctx->pc == 0x2B0608u) {
        ctx->pc = 0x2B0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0604u;
        // 0x2b0608: 0x8d020060  lw          $v0, 0x60($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B060Cu;
        goto label_2b060c;
    }
    ctx->pc = 0x2B0604u;
    {
        const bool branch_taken_0x2b0604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0604u;
        // 0x2b0608: 0x8d020060  lw          $v0, 0x60($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0604) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B060Cu;
label_2b060c:
    // 0x2b060c: 0x10000023  b           . + 4 + (0x23 << 2)
label_2b0610:
    if (ctx->pc == 0x2B0610u) {
        ctx->pc = 0x2B0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B060Cu;
        // 0x2b0610: 0x8d02005c  lw          $v0, 0x5C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0614u;
        goto label_2b0614;
    }
    ctx->pc = 0x2B060Cu;
    {
        const bool branch_taken_0x2b060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B060Cu;
        // 0x2b0610: 0x8d02005c  lw          $v0, 0x5C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b060c) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B0614u;
label_2b0614:
    // 0x2b0614: 0x10000021  b           . + 4 + (0x21 << 2)
label_2b0618:
    if (ctx->pc == 0x2B0618u) {
        ctx->pc = 0x2B0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0614u;
        // 0x2b0618: 0x8d020070  lw          $v0, 0x70($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B061Cu;
        goto label_2b061c;
    }
    ctx->pc = 0x2B0614u;
    {
        const bool branch_taken_0x2b0614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0614u;
        // 0x2b0618: 0x8d020070  lw          $v0, 0x70($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0614) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B061Cu;
label_2b061c:
    // 0x2b061c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2b0620:
    if (ctx->pc == 0x2B0620u) {
        ctx->pc = 0x2B0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B061Cu;
        // 0x2b0620: 0x8d020074  lw          $v0, 0x74($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0624u;
        goto label_2b0624;
    }
    ctx->pc = 0x2B061Cu;
    {
        const bool branch_taken_0x2b061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B061Cu;
        // 0x2b0620: 0x8d020074  lw          $v0, 0x74($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b061c) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B0624u;
label_2b0624:
    // 0x2b0624: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2b0628:
    if (ctx->pc == 0x2B0628u) {
        ctx->pc = 0x2B0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0624u;
        // 0x2b0628: 0x8d020064  lw          $v0, 0x64($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B062Cu;
        goto label_2b062c;
    }
    ctx->pc = 0x2B0624u;
    {
        const bool branch_taken_0x2b0624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0624u;
        // 0x2b0628: 0x8d020064  lw          $v0, 0x64($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0624) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B062Cu;
label_2b062c:
    // 0x2b062c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2b0630:
    if (ctx->pc == 0x2B0630u) {
        ctx->pc = 0x2B0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B062Cu;
        // 0x2b0630: 0x8d020068  lw          $v0, 0x68($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0634u;
        goto label_2b0634;
    }
    ctx->pc = 0x2B062Cu;
    {
        const bool branch_taken_0x2b062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B062Cu;
        // 0x2b0630: 0x8d020068  lw          $v0, 0x68($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b062c) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B0634u;
label_2b0634:
    // 0x2b0634: 0x10000019  b           . + 4 + (0x19 << 2)
label_2b0638:
    if (ctx->pc == 0x2B0638u) {
        ctx->pc = 0x2B0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0634u;
        // 0x2b0638: 0x8d02006c  lw          $v0, 0x6C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B063Cu;
        goto label_2b063c;
    }
    ctx->pc = 0x2B0634u;
    {
        const bool branch_taken_0x2b0634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0634u;
        // 0x2b0638: 0x8d02006c  lw          $v0, 0x6C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0634) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B063Cu;
label_2b063c:
    // 0x2b063c: 0xdd020008  ld          $v0, 0x8($t0)
    ctx->pc = 0x2b063cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 8)));
label_2b0640:
    // 0x2b0640: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b0640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2b0644:
    // 0x2b0644: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b0648:
    if (ctx->pc == 0x2B0648u) {
        ctx->pc = 0x2B0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0644u;
        // 0x2b0648: 0xfd020008  sd          $v0, 0x8($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B064Cu;
        goto label_2b064c;
    }
    ctx->pc = 0x2B0644u;
    {
        const bool branch_taken_0x2b0644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0644u;
        // 0x2b0648: 0xfd020008  sd          $v0, 0x8($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0644) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B064Cu;
label_2b064c:
    // 0x2b064c: 0x10000013  b           . + 4 + (0x13 << 2)
label_2b0650:
    if (ctx->pc == 0x2B0650u) {
        ctx->pc = 0x2B0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B064Cu;
        // 0x2b0650: 0x8d020114  lw          $v0, 0x114($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0654u;
        goto label_2b0654;
    }
    ctx->pc = 0x2B064Cu;
    {
        const bool branch_taken_0x2b064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B064Cu;
        // 0x2b0650: 0x8d020114  lw          $v0, 0x114($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b064c) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B0654u;
label_2b0654:
    // 0x2b0654: 0x8d050114  lw          $a1, 0x114($t0)
    ctx->pc = 0x2b0654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 276)));
label_2b0658:
    // 0x2b0658: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2b0658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2b065c:
    // 0x2b065c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b065cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b0660:
    // 0x2b0660: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_2b0664:
    if (ctx->pc == 0x2B0664u) {
        ctx->pc = 0x2B0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0660u;
        // 0x2b0664: 0xad020114  sw          $v0, 0x114($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0668u;
        goto label_2b0668;
    }
    ctx->pc = 0x2B0660u;
    {
        const bool branch_taken_0x2b0660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0660u;
        // 0x2b0664: 0xad020114  sw          $v0, 0x114($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0660) {
            ctx->pc = 0x2B0534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0534;
        }
    }
    ctx->pc = 0x2B0668u;
label_2b0668:
    // 0x2b0668: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b066c:
    if (ctx->pc == 0x2B066Cu) {
        ctx->pc = 0x2B066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0668u;
        // 0x2b066c: 0x8d020118  lw          $v0, 0x118($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0670u;
        goto label_2b0670;
    }
    ctx->pc = 0x2B0668u;
    {
        const bool branch_taken_0x2b0668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0668u;
        // 0x2b066c: 0x8d020118  lw          $v0, 0x118($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0668) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B0670u;
label_2b0670:
    // 0x2b0670: 0x8d050118  lw          $a1, 0x118($t0)
    ctx->pc = 0x2b0670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 280)));
label_2b0674:
    // 0x2b0674: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2b0674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2b0678:
    // 0x2b0678: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b0678u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b067c:
    // 0x2b067c: 0x1000ffad  b           . + 4 + (-0x53 << 2)
label_2b0680:
    if (ctx->pc == 0x2B0680u) {
        ctx->pc = 0x2B0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B067Cu;
        // 0x2b0680: 0xad020118  sw          $v0, 0x118($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0684u;
        goto label_2b0684;
    }
    ctx->pc = 0x2B067Cu;
    {
        const bool branch_taken_0x2b067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B067Cu;
        // 0x2b0680: 0xad020118  sw          $v0, 0x118($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b067c) {
            ctx->pc = 0x2B0534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0534;
        }
    }
    ctx->pc = 0x2B0684u;
label_2b0684:
    // 0x2b0684: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b0688:
    if (ctx->pc == 0x2B0688u) {
        ctx->pc = 0x2B0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0684u;
        // 0x2b0688: 0x8d020078  lw          $v0, 0x78($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B068Cu;
        goto label_2b068c;
    }
    ctx->pc = 0x2B0684u;
    {
        const bool branch_taken_0x2b0684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0684u;
        // 0x2b0688: 0x8d020078  lw          $v0, 0x78($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0684) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B068Cu;
label_2b068c:
    // 0x2b068c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b0690:
    // 0x2b0690: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b0690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b0694:
    // 0x2b0694: 0x40f809  jalr        $v0
label_2b0698:
    if (ctx->pc == 0x2B0698u) {
        ctx->pc = 0x2B0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0694u;
        // 0x2b0698: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B069Cu;
        goto label_2b069c;
    }
    ctx->pc = 0x2B0694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B069Cu);
        ctx->pc = 0x2B0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0694u;
        // 0x2b0698: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0694u, 0x2B069Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B069Cu;
label_2b069c:
    // 0x2b069c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b069cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b06a0:
    // 0x2b06a0: 0x3e00008  jr          $ra
label_2b06a4:
    if (ctx->pc == 0x2B06A4u) {
        ctx->pc = 0x2B06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06A0u;
        // 0x2b06a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06A8u;
        goto label_2b06a8;
    }
    ctx->pc = 0x2B06A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06A0u;
        // 0x2b06a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B06A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B06A8u;
label_2b06a8:
    // 0x2b06a8: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x2b06a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_2b06ac:
    // 0x2b06ac: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x2b06acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_2b06b0:
    // 0x2b06b0: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2b06b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_2b06b4:
    // 0x2b06b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2b06b8:
    if (ctx->pc == 0x2B06B8u) {
        ctx->pc = 0x2B06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06B4u;
        // 0x2b06b8: 0x28640001  slti        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06BCu;
        goto label_2b06bc;
    }
    ctx->pc = 0x2B06B4u;
    {
        const bool branch_taken_0x2b06b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06B4u;
        // 0x2b06b8: 0x28640001  slti        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06b4) {
            ctx->pc = 0x2B06C4u;
            goto label_2b06c4;
        }
    }
    ctx->pc = 0x2B06BCu;
label_2b06bc:
    // 0x2b06bc: 0x3e00008  jr          $ra
label_2b06c0:
    if (ctx->pc == 0x2B06C0u) {
        ctx->pc = 0x2B06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06BCu;
        // 0x2b06c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06C4u;
        goto label_2b06c4;
    }
    ctx->pc = 0x2B06BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06BCu;
        // 0x2b06c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B06BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B06C4u;
label_2b06c4:
    // 0x2b06c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b06c8:
    // 0x2b06c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b06cc:
    // 0x2b06cc: 0x3e00008  jr          $ra
label_2b06d0:
    if (ctx->pc == 0x2B06D0u) {
        ctx->pc = 0x2B06D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06CCu;
        // 0x2b06d0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06D4u;
        goto label_2b06d4;
    }
    ctx->pc = 0x2B06CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B06D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06CCu;
        // 0x2b06d0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B06CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B06D4u;
label_2b06d4:
    // 0x2b06d4: 0x0  nop
    ctx->pc = 0x2b06d4u;
    // NOP
label_2b06d8:
    // 0x2b06d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b06d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b06dc:
    // 0x2b06dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2b06dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b06e0:
    // 0x2b06e0: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2b06e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_2b06e4:
    // 0x2b06e4: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x2b06e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_2b06e8:
    // 0x2b06e8: 0xa2202f  dsubu       $a0, $a1, $v0
    ctx->pc = 0x2b06e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
label_2b06ec:
    // 0x2b06ec: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2b06f0:
    if (ctx->pc == 0x2B06F0u) {
        ctx->pc = 0x2B06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06ECu;
        // 0x2b06f0: 0x28840001  slti        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06F4u;
        goto label_2b06f4;
    }
    ctx->pc = 0x2B06ECu;
    {
        const bool branch_taken_0x2b06ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06ECu;
        // 0x2b06f0: 0x28840001  slti        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06ec) {
            ctx->pc = 0x2B06FCu;
            goto label_2b06fc;
        }
    }
    ctx->pc = 0x2B06F4u;
label_2b06f4:
    // 0x2b06f4: 0x3e00008  jr          $ra
label_2b06f8:
    if (ctx->pc == 0x2B06F8u) {
        ctx->pc = 0x2B06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06F4u;
        // 0x2b06f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06FCu;
        goto label_2b06fc;
    }
    ctx->pc = 0x2B06F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06F4u;
        // 0x2b06f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B06F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B06FCu;
label_2b06fc:
    // 0x2b06fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b0700:
    // 0x2b0700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0704:
    // 0x2b0704: 0x3e00008  jr          $ra
label_2b0708:
    if (ctx->pc == 0x2B0708u) {
        ctx->pc = 0x2B0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0704u;
        // 0x2b0708: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B070Cu;
        goto label_2b070c;
    }
    ctx->pc = 0x2B0704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0704u;
        // 0x2b0708: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B070Cu;
label_2b070c:
    // 0x2b070c: 0x0  nop
    ctx->pc = 0x2b070cu;
    // NOP
}
