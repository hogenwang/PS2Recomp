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

// Function: sub_001D04F0
// Address: 0x1d04f0 - 0x1d08a0
void sub_001D04F0_0x1d04f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D04F0_0x1d04f0");
#endif

    switch (ctx->pc) {
        case 0x1d04f0u: goto label_1d04f0;
        case 0x1d04f4u: goto label_1d04f4;
        case 0x1d04f8u: goto label_1d04f8;
        case 0x1d04fcu: goto label_1d04fc;
        case 0x1d0500u: goto label_1d0500;
        case 0x1d0504u: goto label_1d0504;
        case 0x1d0508u: goto label_1d0508;
        case 0x1d050cu: goto label_1d050c;
        case 0x1d0510u: goto label_1d0510;
        case 0x1d0514u: goto label_1d0514;
        case 0x1d0518u: goto label_1d0518;
        case 0x1d051cu: goto label_1d051c;
        case 0x1d0520u: goto label_1d0520;
        case 0x1d0524u: goto label_1d0524;
        case 0x1d0528u: goto label_1d0528;
        case 0x1d052cu: goto label_1d052c;
        case 0x1d0530u: goto label_1d0530;
        case 0x1d0534u: goto label_1d0534;
        case 0x1d0538u: goto label_1d0538;
        case 0x1d053cu: goto label_1d053c;
        case 0x1d0540u: goto label_1d0540;
        case 0x1d0544u: goto label_1d0544;
        case 0x1d0548u: goto label_1d0548;
        case 0x1d054cu: goto label_1d054c;
        case 0x1d0550u: goto label_1d0550;
        case 0x1d0554u: goto label_1d0554;
        case 0x1d0558u: goto label_1d0558;
        case 0x1d055cu: goto label_1d055c;
        case 0x1d0560u: goto label_1d0560;
        case 0x1d0564u: goto label_1d0564;
        case 0x1d0568u: goto label_1d0568;
        case 0x1d056cu: goto label_1d056c;
        case 0x1d0570u: goto label_1d0570;
        case 0x1d0574u: goto label_1d0574;
        case 0x1d0578u: goto label_1d0578;
        case 0x1d057cu: goto label_1d057c;
        case 0x1d0580u: goto label_1d0580;
        case 0x1d0584u: goto label_1d0584;
        case 0x1d0588u: goto label_1d0588;
        case 0x1d058cu: goto label_1d058c;
        case 0x1d0590u: goto label_1d0590;
        case 0x1d0594u: goto label_1d0594;
        case 0x1d0598u: goto label_1d0598;
        case 0x1d059cu: goto label_1d059c;
        case 0x1d05a0u: goto label_1d05a0;
        case 0x1d05a4u: goto label_1d05a4;
        case 0x1d05a8u: goto label_1d05a8;
        case 0x1d05acu: goto label_1d05ac;
        case 0x1d05b0u: goto label_1d05b0;
        case 0x1d05b4u: goto label_1d05b4;
        case 0x1d05b8u: goto label_1d05b8;
        case 0x1d05bcu: goto label_1d05bc;
        case 0x1d05c0u: goto label_1d05c0;
        case 0x1d05c4u: goto label_1d05c4;
        case 0x1d05c8u: goto label_1d05c8;
        case 0x1d05ccu: goto label_1d05cc;
        case 0x1d05d0u: goto label_1d05d0;
        case 0x1d05d4u: goto label_1d05d4;
        case 0x1d05d8u: goto label_1d05d8;
        case 0x1d05dcu: goto label_1d05dc;
        case 0x1d05e0u: goto label_1d05e0;
        case 0x1d05e4u: goto label_1d05e4;
        case 0x1d05e8u: goto label_1d05e8;
        case 0x1d05ecu: goto label_1d05ec;
        case 0x1d05f0u: goto label_1d05f0;
        case 0x1d05f4u: goto label_1d05f4;
        case 0x1d05f8u: goto label_1d05f8;
        case 0x1d05fcu: goto label_1d05fc;
        case 0x1d0600u: goto label_1d0600;
        case 0x1d0604u: goto label_1d0604;
        case 0x1d0608u: goto label_1d0608;
        case 0x1d060cu: goto label_1d060c;
        case 0x1d0610u: goto label_1d0610;
        case 0x1d0614u: goto label_1d0614;
        case 0x1d0618u: goto label_1d0618;
        case 0x1d061cu: goto label_1d061c;
        case 0x1d0620u: goto label_1d0620;
        case 0x1d0624u: goto label_1d0624;
        case 0x1d0628u: goto label_1d0628;
        case 0x1d062cu: goto label_1d062c;
        case 0x1d0630u: goto label_1d0630;
        case 0x1d0634u: goto label_1d0634;
        case 0x1d0638u: goto label_1d0638;
        case 0x1d063cu: goto label_1d063c;
        case 0x1d0640u: goto label_1d0640;
        case 0x1d0644u: goto label_1d0644;
        case 0x1d0648u: goto label_1d0648;
        case 0x1d064cu: goto label_1d064c;
        case 0x1d0650u: goto label_1d0650;
        case 0x1d0654u: goto label_1d0654;
        case 0x1d0658u: goto label_1d0658;
        case 0x1d065cu: goto label_1d065c;
        case 0x1d0660u: goto label_1d0660;
        case 0x1d0664u: goto label_1d0664;
        case 0x1d0668u: goto label_1d0668;
        case 0x1d066cu: goto label_1d066c;
        case 0x1d0670u: goto label_1d0670;
        case 0x1d0674u: goto label_1d0674;
        case 0x1d0678u: goto label_1d0678;
        case 0x1d067cu: goto label_1d067c;
        case 0x1d0680u: goto label_1d0680;
        case 0x1d0684u: goto label_1d0684;
        case 0x1d0688u: goto label_1d0688;
        case 0x1d068cu: goto label_1d068c;
        case 0x1d0690u: goto label_1d0690;
        case 0x1d0694u: goto label_1d0694;
        case 0x1d0698u: goto label_1d0698;
        case 0x1d069cu: goto label_1d069c;
        case 0x1d06a0u: goto label_1d06a0;
        case 0x1d06a4u: goto label_1d06a4;
        case 0x1d06a8u: goto label_1d06a8;
        case 0x1d06acu: goto label_1d06ac;
        case 0x1d06b0u: goto label_1d06b0;
        case 0x1d06b4u: goto label_1d06b4;
        case 0x1d06b8u: goto label_1d06b8;
        case 0x1d06bcu: goto label_1d06bc;
        case 0x1d06c0u: goto label_1d06c0;
        case 0x1d06c4u: goto label_1d06c4;
        case 0x1d06c8u: goto label_1d06c8;
        case 0x1d06ccu: goto label_1d06cc;
        case 0x1d06d0u: goto label_1d06d0;
        case 0x1d06d4u: goto label_1d06d4;
        case 0x1d06d8u: goto label_1d06d8;
        case 0x1d06dcu: goto label_1d06dc;
        case 0x1d06e0u: goto label_1d06e0;
        case 0x1d06e4u: goto label_1d06e4;
        case 0x1d06e8u: goto label_1d06e8;
        case 0x1d06ecu: goto label_1d06ec;
        case 0x1d06f0u: goto label_1d06f0;
        case 0x1d06f4u: goto label_1d06f4;
        case 0x1d06f8u: goto label_1d06f8;
        case 0x1d06fcu: goto label_1d06fc;
        case 0x1d0700u: goto label_1d0700;
        case 0x1d0704u: goto label_1d0704;
        case 0x1d0708u: goto label_1d0708;
        case 0x1d070cu: goto label_1d070c;
        case 0x1d0710u: goto label_1d0710;
        case 0x1d0714u: goto label_1d0714;
        case 0x1d0718u: goto label_1d0718;
        case 0x1d071cu: goto label_1d071c;
        case 0x1d0720u: goto label_1d0720;
        case 0x1d0724u: goto label_1d0724;
        case 0x1d0728u: goto label_1d0728;
        case 0x1d072cu: goto label_1d072c;
        case 0x1d0730u: goto label_1d0730;
        case 0x1d0734u: goto label_1d0734;
        case 0x1d0738u: goto label_1d0738;
        case 0x1d073cu: goto label_1d073c;
        case 0x1d0740u: goto label_1d0740;
        case 0x1d0744u: goto label_1d0744;
        case 0x1d0748u: goto label_1d0748;
        case 0x1d074cu: goto label_1d074c;
        case 0x1d0750u: goto label_1d0750;
        case 0x1d0754u: goto label_1d0754;
        case 0x1d0758u: goto label_1d0758;
        case 0x1d075cu: goto label_1d075c;
        case 0x1d0760u: goto label_1d0760;
        case 0x1d0764u: goto label_1d0764;
        case 0x1d0768u: goto label_1d0768;
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0770u: goto label_1d0770;
        case 0x1d0774u: goto label_1d0774;
        case 0x1d0778u: goto label_1d0778;
        case 0x1d077cu: goto label_1d077c;
        case 0x1d0780u: goto label_1d0780;
        case 0x1d0784u: goto label_1d0784;
        case 0x1d0788u: goto label_1d0788;
        case 0x1d078cu: goto label_1d078c;
        case 0x1d0790u: goto label_1d0790;
        case 0x1d0794u: goto label_1d0794;
        case 0x1d0798u: goto label_1d0798;
        case 0x1d079cu: goto label_1d079c;
        case 0x1d07a0u: goto label_1d07a0;
        case 0x1d07a4u: goto label_1d07a4;
        case 0x1d07a8u: goto label_1d07a8;
        case 0x1d07acu: goto label_1d07ac;
        case 0x1d07b0u: goto label_1d07b0;
        case 0x1d07b4u: goto label_1d07b4;
        case 0x1d07b8u: goto label_1d07b8;
        case 0x1d07bcu: goto label_1d07bc;
        case 0x1d07c0u: goto label_1d07c0;
        case 0x1d07c4u: goto label_1d07c4;
        case 0x1d07c8u: goto label_1d07c8;
        case 0x1d07ccu: goto label_1d07cc;
        case 0x1d07d0u: goto label_1d07d0;
        case 0x1d07d4u: goto label_1d07d4;
        case 0x1d07d8u: goto label_1d07d8;
        case 0x1d07dcu: goto label_1d07dc;
        case 0x1d07e0u: goto label_1d07e0;
        case 0x1d07e4u: goto label_1d07e4;
        case 0x1d07e8u: goto label_1d07e8;
        case 0x1d07ecu: goto label_1d07ec;
        case 0x1d07f0u: goto label_1d07f0;
        case 0x1d07f4u: goto label_1d07f4;
        case 0x1d07f8u: goto label_1d07f8;
        case 0x1d07fcu: goto label_1d07fc;
        case 0x1d0800u: goto label_1d0800;
        case 0x1d0804u: goto label_1d0804;
        case 0x1d0808u: goto label_1d0808;
        case 0x1d080cu: goto label_1d080c;
        case 0x1d0810u: goto label_1d0810;
        case 0x1d0814u: goto label_1d0814;
        case 0x1d0818u: goto label_1d0818;
        case 0x1d081cu: goto label_1d081c;
        case 0x1d0820u: goto label_1d0820;
        case 0x1d0824u: goto label_1d0824;
        case 0x1d0828u: goto label_1d0828;
        case 0x1d082cu: goto label_1d082c;
        case 0x1d0830u: goto label_1d0830;
        case 0x1d0834u: goto label_1d0834;
        case 0x1d0838u: goto label_1d0838;
        case 0x1d083cu: goto label_1d083c;
        case 0x1d0840u: goto label_1d0840;
        case 0x1d0844u: goto label_1d0844;
        case 0x1d0848u: goto label_1d0848;
        case 0x1d084cu: goto label_1d084c;
        case 0x1d0850u: goto label_1d0850;
        case 0x1d0854u: goto label_1d0854;
        case 0x1d0858u: goto label_1d0858;
        case 0x1d085cu: goto label_1d085c;
        case 0x1d0860u: goto label_1d0860;
        case 0x1d0864u: goto label_1d0864;
        case 0x1d0868u: goto label_1d0868;
        case 0x1d086cu: goto label_1d086c;
        case 0x1d0870u: goto label_1d0870;
        case 0x1d0874u: goto label_1d0874;
        case 0x1d0878u: goto label_1d0878;
        case 0x1d087cu: goto label_1d087c;
        case 0x1d0880u: goto label_1d0880;
        case 0x1d0884u: goto label_1d0884;
        case 0x1d0888u: goto label_1d0888;
        case 0x1d088cu: goto label_1d088c;
        case 0x1d0890u: goto label_1d0890;
        case 0x1d0894u: goto label_1d0894;
        case 0x1d0898u: goto label_1d0898;
        case 0x1d089cu: goto label_1d089c;
        default: break;
    }

    ctx->pc = 0x1d04f0u;

label_1d04f0:
    // 0x1d04f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d04f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d04f4:
    // 0x1d04f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d04f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d04f8:
    // 0x1d04f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d04f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d04fc:
    // 0x1d04fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d0500:
    if (ctx->pc == 0x1D0500u) {
        ctx->pc = 0x1D0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04FCu;
        // 0x1d0500: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0504u;
        goto label_1d0504;
    }
    ctx->pc = 0x1D04FCu;
    {
        const bool branch_taken_0x1d04fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04FCu;
        // 0x1d0500: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04fc) {
            ctx->pc = 0x1D0518u;
            goto label_1d0518;
        }
    }
    ctx->pc = 0x1D0504u;
label_1d0504:
    // 0x1d0504: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d0504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d0508:
    // 0x1d0508: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1d050c:
    if (ctx->pc == 0x1D050Cu) {
        ctx->pc = 0x1D050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0508u;
        // 0x1d050c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0510u;
        goto label_1d0510;
    }
    ctx->pc = 0x1D0508u;
    {
        const bool branch_taken_0x1d0508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0508) {
            ctx->pc = 0x1D050Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0508u;
            // 0x1d050c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D051Cu;
            goto label_1d051c;
        }
    }
    ctx->pc = 0x1D0510u;
label_1d0510:
    // 0x1d0510: 0x40f809  jalr        $v0
label_1d0514:
    if (ctx->pc == 0x1D0514u) {
        ctx->pc = 0x1D0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0510u;
        // 0x1d0514: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0518u;
        goto label_1d0518;
    }
    ctx->pc = 0x1D0510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0518u);
        ctx->pc = 0x1D0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0510u;
        // 0x1d0514: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0510u, 0x1D0518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0518u;
label_1d0518:
    // 0x1d0518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d051c:
    // 0x1d051c: 0x3e00008  jr          $ra
label_1d0520:
    if (ctx->pc == 0x1D0520u) {
        ctx->pc = 0x1D0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D051Cu;
        // 0x1d0520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0524u;
        goto label_1d0524;
    }
    ctx->pc = 0x1D051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D051Cu;
        // 0x1d0520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D051Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0524u;
label_1d0524:
    // 0x1d0524: 0x0  nop
    ctx->pc = 0x1d0524u;
    // NOP
label_1d0528:
    // 0x1d0528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d052c:
    // 0x1d052c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d0530:
    // 0x1d0530: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d0530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d0534:
    // 0x1d0534: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d0534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d0538:
    // 0x1d0538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d053c:
    // 0x1d053c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d0540:
    // 0x1d0540: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d0544:
    // 0x1d0544: 0xc0757d4  jal         func_1D5F50
label_1d0548:
    if (ctx->pc == 0x1D0548u) {
        ctx->pc = 0x1D0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0544u;
        // 0x1d0548: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D054Cu;
        goto label_1d054c;
    }
    ctx->pc = 0x1D0544u;
    SET_GPR_U32(ctx, 31, 0x1D054Cu);
    ctx->pc = 0x1D0548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0544u;
    // 0x1d0548: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D0544u, 0x1D054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D054Cu;
label_1d054c:
    // 0x1d054c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d0550:
    if (ctx->pc == 0x1D0550u) {
        ctx->pc = 0x1D0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D054Cu;
        // 0x1d0550: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0554u;
        goto label_1d0554;
    }
    ctx->pc = 0x1D054Cu;
    {
        const bool branch_taken_0x1d054c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D054Cu;
        // 0x1d0550: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d054c) {
            ctx->pc = 0x1D0578u;
            goto label_1d0578;
        }
    }
    ctx->pc = 0x1D0554u;
label_1d0554:
    // 0x1d0554: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d0554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1d0558:
    // 0x1d0558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d055c:
    // 0x1d055c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d055cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0560:
    // 0x1d0560: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0564:
    // 0x1d0564: 0x34a5020a  ori         $a1, $a1, 0x20A
    ctx->pc = 0x1d0564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
label_1d0568:
    // 0x1d0568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d0568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d056c:
    // 0x1d056c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0570:
    // 0x1d0570: 0x8074128  j           func_1D04A0
label_1d0574:
    if (ctx->pc == 0x1D0574u) {
        ctx->pc = 0x1D0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0570u;
        // 0x1d0574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0578u;
        goto label_1d0578;
    }
    ctx->pc = 0x1D0570u;
    ctx->pc = 0x1D0574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0570u;
    // 0x1d0574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04A0u, 0x1D0570u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0578u;
label_1d0578:
    // 0x1d0578: 0x3c11ff03  lui         $s1, 0xFF03
    ctx->pc = 0x1d0578u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65283 << 16));
label_1d057c:
    // 0x1d057c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1d057cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d0580:
    // 0x1d0580: 0x36310305  ori         $s1, $s1, 0x305
    ctx->pc = 0x1d0580u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)773);
label_1d0584:
    // 0x1d0584: 0x0  nop
    ctx->pc = 0x1d0584u;
    // NOP
label_1d0588:
    // 0x1d0588: 0xc076e1e  jal         func_1DB878
label_1d058c:
    if (ctx->pc == 0x1D058Cu) {
        ctx->pc = 0x1D058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0588u;
        // 0x1d058c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0590u;
        goto label_1d0590;
    }
    ctx->pc = 0x1D0588u;
    SET_GPR_U32(ctx, 31, 0x1D0590u);
    ctx->pc = 0x1D058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0588u;
    // 0x1d058c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB878u, 0x1D0588u, 0x1D0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0590u;
label_1d0590:
    // 0x1d0590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0594:
    // 0x1d0594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0598:
    // 0x1d0598: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d0598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d059c:
    // 0x1d059c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d05a0:
    if (ctx->pc == 0x1D05A0u) {
        ctx->pc = 0x1D05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D059Cu;
        // 0x1d05a0: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05A4u;
        goto label_1d05a4;
    }
    ctx->pc = 0x1D059Cu;
    {
        const bool branch_taken_0x1d059c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D059Cu;
        // 0x1d05a0: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d059c) {
            ctx->pc = 0x1D05BCu;
            goto label_1d05bc;
        }
    }
    ctx->pc = 0x1D05A4u;
label_1d05a4:
    // 0x1d05a4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1d05a8:
    if (ctx->pc == 0x1D05A8u) {
        ctx->pc = 0x1D05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05A4u;
        // 0x1d05a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05ACu;
        goto label_1d05ac;
    }
    ctx->pc = 0x1D05A4u;
    {
        const bool branch_taken_0x1d05a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d05a4) {
            ctx->pc = 0x1D05A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D05A4u;
            // 0x1d05a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D05BCu;
            goto label_1d05bc;
        }
    }
    ctx->pc = 0x1D05ACu;
label_1d05ac:
    // 0x1d05ac: 0xc076ea8  jal         func_1DBAA0
label_1d05b0:
    if (ctx->pc == 0x1D05B0u) {
        ctx->pc = 0x1D05B4u;
        goto label_1d05b4;
    }
    ctx->pc = 0x1D05ACu;
    SET_GPR_U32(ctx, 31, 0x1D05B4u);
    ctx->pc = 0x1DBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBAA0u, 0x1D05ACu, 0x1D05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D05B4u;
label_1d05b4:
    // 0x1d05b4: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
label_1d05b8:
    if (ctx->pc == 0x1D05B8u) {
        ctx->pc = 0x1D05BCu;
        goto label_1d05bc;
    }
    ctx->pc = 0x1D05B4u;
    {
        const bool branch_taken_0x1d05b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1d05b4) {
            ctx->pc = 0x1D0588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0588;
        }
    }
    ctx->pc = 0x1D05BCu;
label_1d05bc:
    // 0x1d05bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d05bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d05c0:
    // 0x1d05c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d05c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d05c4:
    // 0x1d05c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d05c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d05c8:
    // 0x1d05c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d05c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d05cc:
    // 0x1d05cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d05ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d05d0:
    // 0x1d05d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d05d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d05d4:
    // 0x1d05d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d05d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d05d8:
    // 0x1d05d8: 0x8074128  j           func_1D04A0
label_1d05dc:
    if (ctx->pc == 0x1D05DCu) {
        ctx->pc = 0x1D05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D8u;
        // 0x1d05dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05E0u;
        goto label_1d05e0;
    }
    ctx->pc = 0x1D05D8u;
    ctx->pc = 0x1D05DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D05D8u;
    // 0x1d05dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04A0u, 0x1D05D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D05E0u;
label_1d05e0:
    // 0x1d05e0: 0x3e00008  jr          $ra
label_1d05e4:
    if (ctx->pc == 0x1D05E4u) {
        ctx->pc = 0x1D05E8u;
        goto label_1d05e8;
    }
    ctx->pc = 0x1D05E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D05E8u;
label_1d05e8:
    // 0x1d05e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d05e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d05ec:
    // 0x1d05ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d05ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d05f0:
    // 0x1d05f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d05f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1d05f4:
    // 0x1d05f4: 0xc0757d4  jal         func_1D5F50
label_1d05f8:
    if (ctx->pc == 0x1D05F8u) {
        ctx->pc = 0x1D05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05F4u;
        // 0x1d05f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05FCu;
        goto label_1d05fc;
    }
    ctx->pc = 0x1D05F4u;
    SET_GPR_U32(ctx, 31, 0x1D05FCu);
    ctx->pc = 0x1D05F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D05F4u;
    // 0x1d05f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D05F4u, 0x1D05FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D05FCu;
label_1d05fc:
    // 0x1d05fc: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1d0600:
    // 0x1d0600: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0604:
    // 0x1d0604: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d0608:
    if (ctx->pc == 0x1D0608u) {
        ctx->pc = 0x1D0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0604u;
        // 0x1d0608: 0x34a50210  ori         $a1, $a1, 0x210 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D060Cu;
        goto label_1d060c;
    }
    ctx->pc = 0x1D0604u;
    {
        const bool branch_taken_0x1d0604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0604u;
        // 0x1d0608: 0x34a50210  ori         $a1, $a1, 0x210 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0604) {
            ctx->pc = 0x1D0620u;
            goto label_1d0620;
        }
    }
    ctx->pc = 0x1D060Cu;
label_1d060c:
    // 0x1d060c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d060cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0610:
    // 0x1d0610: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d0614:
    // 0x1d0614: 0x8074128  j           func_1D04A0
label_1d0618:
    if (ctx->pc == 0x1D0618u) {
        ctx->pc = 0x1D0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0614u;
        // 0x1d0618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D061Cu;
        goto label_1d061c;
    }
    ctx->pc = 0x1D0614u;
    ctx->pc = 0x1D0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0614u;
    // 0x1d0618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04A0u, 0x1D0614u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D061Cu;
label_1d061c:
    // 0x1d061c: 0x0  nop
    ctx->pc = 0x1d061cu;
    // NOP
label_1d0620:
    // 0x1d0620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0624:
    // 0x1d0624: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d0628:
    // 0x1d0628: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x1d0628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_1d062c:
    // 0x1d062c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d062cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0630:
    // 0x1d0630: 0x3e00008  jr          $ra
label_1d0634:
    if (ctx->pc == 0x1D0634u) {
        ctx->pc = 0x1D0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0630u;
        // 0x1d0634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0638u;
        goto label_1d0638;
    }
    ctx->pc = 0x1D0630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0630u;
        // 0x1d0634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0638u;
label_1d0638:
    // 0x1d0638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d063c:
    // 0x1d063c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d0640:
    // 0x1d0640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0644:
    // 0x1d0644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d0648:
    // 0x1d0648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d064c:
    // 0x1d064c: 0xc0757d4  jal         func_1D5F50
label_1d0650:
    if (ctx->pc == 0x1D0650u) {
        ctx->pc = 0x1D0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D064Cu;
        // 0x1d0650: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0654u;
        goto label_1d0654;
    }
    ctx->pc = 0x1D064Cu;
    SET_GPR_U32(ctx, 31, 0x1D0654u);
    ctx->pc = 0x1D0650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D064Cu;
    // 0x1d0650: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D064Cu, 0x1D0654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0654u;
label_1d0654:
    // 0x1d0654: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d0658:
    if (ctx->pc == 0x1D0658u) {
        ctx->pc = 0x1D0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0654u;
        // 0x1d0658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D065Cu;
        goto label_1d065c;
    }
    ctx->pc = 0x1D0654u;
    {
        const bool branch_taken_0x1d0654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0654u;
        // 0x1d0658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0654) {
            ctx->pc = 0x1D0678u;
            goto label_1d0678;
        }
    }
    ctx->pc = 0x1D065Cu;
label_1d065c:
    // 0x1d065c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d065cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1d0660:
    // 0x1d0660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0664:
    // 0x1d0664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d0668:
    // 0x1d0668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d066c:
    // 0x1d066c: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x1d066cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
label_1d0670:
    // 0x1d0670: 0x8074128  j           func_1D04A0
label_1d0674:
    if (ctx->pc == 0x1D0674u) {
        ctx->pc = 0x1D0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0670u;
        // 0x1d0674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0678u;
        goto label_1d0678;
    }
    ctx->pc = 0x1D0670u;
    ctx->pc = 0x1D0674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0670u;
    // 0x1d0674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04A0u, 0x1D0670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0678u;
label_1d0678:
    // 0x1d0678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d0678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d067c:
    // 0x1d067c: 0x26030064  addiu       $v1, $s0, 0x64
    ctx->pc = 0x1d067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_1d0680:
    // 0x1d0680: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1d0680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1d0684:
    // 0x1d0684: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1d0684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1d0688:
    // 0x1d0688: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1d068c:
    if (ctx->pc == 0x1D068Cu) {
        ctx->pc = 0x1D068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0688u;
        // 0x1d068c: 0x260400e4  addiu       $a0, $s0, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0690u;
        goto label_1d0690;
    }
    ctx->pc = 0x1D0688u;
    {
        const bool branch_taken_0x1d0688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0688u;
        // 0x1d068c: 0x260400e4  addiu       $a0, $s0, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0688) {
            ctx->pc = 0x1D06F0u;
            goto label_1d06f0;
        }
    }
    ctx->pc = 0x1D0690u;
label_1d0690:
    // 0x1d0690: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1d0690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1d0694:
    // 0x1d0694: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1d0694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1d0698:
    // 0x1d0698: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1d0698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1d069c:
    // 0x1d069c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1d069cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1d06a0:
    // 0x1d06a0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1d06a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1d06a4:
    // 0x1d06a4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1d06a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1d06a8:
    // 0x1d06a8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1d06a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1d06ac:
    // 0x1d06ac: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1d06acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1d06b0:
    // 0x1d06b0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x1d06b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d06b4:
    // 0x1d06b4: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x1d06b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d06b8:
    // 0x1d06b8: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x1d06b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d06bc:
    // 0x1d06bc: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x1d06bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d06c0:
    // 0x1d06c0: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x1d06c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d06c4:
    // 0x1d06c4: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x1d06c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d06c8:
    // 0x1d06c8: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x1d06c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d06cc:
    // 0x1d06cc: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x1d06ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d06d0:
    // 0x1d06d0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1d06d4:
    // 0x1d06d4: 0x0  nop
    ctx->pc = 0x1d06d4u;
    // NOP
label_1d06d8:
    // 0x1d06d8: 0x0  nop
    ctx->pc = 0x1d06d8u;
    // NOP
label_1d06dc:
    // 0x1d06dc: 0x1464ffec  bne         $v1, $a0, . + 4 + (-0x14 << 2)
label_1d06e0:
    if (ctx->pc == 0x1D06E0u) {
        ctx->pc = 0x1D06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06DCu;
        // 0x1d06e0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06E4u;
        goto label_1d06e4;
    }
    ctx->pc = 0x1D06DCu;
    {
        const bool branch_taken_0x1d06dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06DCu;
        // 0x1d06e0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06dc) {
            ctx->pc = 0x1D0690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0690;
        }
    }
    ctx->pc = 0x1D06E4u;
label_1d06e4:
    // 0x1d06e4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d06e8:
    if (ctx->pc == 0x1D06E8u) {
        ctx->pc = 0x1D06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06E4u;
        // 0x1d06e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06ECu;
        goto label_1d06ec;
    }
    ctx->pc = 0x1D06E4u;
    {
        const bool branch_taken_0x1d06e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06E4u;
        // 0x1d06e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06e4) {
            ctx->pc = 0x1D0728u;
            goto label_1d0728;
        }
    }
    ctx->pc = 0x1D06ECu;
label_1d06ec:
    // 0x1d06ec: 0x0  nop
    ctx->pc = 0x1d06ecu;
    // NOP
label_1d06f0:
    // 0x1d06f0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1d06f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1d06f4:
    // 0x1d06f4: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1d06f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1d06f8:
    // 0x1d06f8: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1d06f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1d06fc:
    // 0x1d06fc: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1d06fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1d0700:
    // 0x1d0700: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1d0700u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_1d0704:
    // 0x1d0704: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x1d0704u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
label_1d0708:
    // 0x1d0708: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1d0708u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_1d070c:
    // 0x1d070c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x1d070cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
label_1d0710:
    // 0x1d0710: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1d0714:
    // 0x1d0714: 0x0  nop
    ctx->pc = 0x1d0714u;
    // NOP
label_1d0718:
    // 0x1d0718: 0x0  nop
    ctx->pc = 0x1d0718u;
    // NOP
label_1d071c:
    // 0x1d071c: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
label_1d0720:
    if (ctx->pc == 0x1D0720u) {
        ctx->pc = 0x1D0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D071Cu;
        // 0x1d0720: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0724u;
        goto label_1d0724;
    }
    ctx->pc = 0x1D071Cu;
    {
        const bool branch_taken_0x1d071c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D071Cu;
        // 0x1d0720: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d071c) {
            ctx->pc = 0x1D06F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d06f0;
        }
    }
    ctx->pc = 0x1D0724u;
label_1d0724:
    // 0x1d0724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0728:
    // 0x1d0728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d072c:
    // 0x1d072c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d072cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0730:
    // 0x1d0730: 0x3e00008  jr          $ra
label_1d0734:
    if (ctx->pc == 0x1D0734u) {
        ctx->pc = 0x1D0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0730u;
        // 0x1d0734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0738u;
        goto label_1d0738;
    }
    ctx->pc = 0x1D0730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0730u;
        // 0x1d0734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0738u;
label_1d0738:
    // 0x1d0738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d073c:
    // 0x1d073c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d073cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d0740:
    // 0x1d0740: 0x24900180  addiu       $s0, $a0, 0x180
    ctx->pc = 0x1d0740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1d0744:
    // 0x1d0744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d0748:
    // 0x1d0748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d074c:
    // 0x1d074c: 0xc0757d4  jal         func_1D5F50
label_1d0750:
    if (ctx->pc == 0x1D0750u) {
        ctx->pc = 0x1D0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D074Cu;
        // 0x1d0750: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0754u;
        goto label_1d0754;
    }
    ctx->pc = 0x1D074Cu;
    SET_GPR_U32(ctx, 31, 0x1D0754u);
    ctx->pc = 0x1D0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D074Cu;
    // 0x1d0750: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D074Cu, 0x1D0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0754u;
label_1d0754:
    // 0x1d0754: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d0754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1d0758:
    // 0x1d0758: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d075c:
    if (ctx->pc == 0x1D075Cu) {
        ctx->pc = 0x1D075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0758u;
        // 0x1d075c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0760u;
        goto label_1d0760;
    }
    ctx->pc = 0x1D0758u;
    {
        const bool branch_taken_0x1d0758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0758u;
        // 0x1d075c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0758) {
            ctx->pc = 0x1D0778u;
            goto label_1d0778;
        }
    }
    ctx->pc = 0x1D0760u;
label_1d0760:
    // 0x1d0760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0764:
    // 0x1d0764: 0x34a5020d  ori         $a1, $a1, 0x20D
    ctx->pc = 0x1d0764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)525);
label_1d0768:
    // 0x1d0768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d076c:
    // 0x1d076c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d076cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0770:
    // 0x1d0770: 0x8074128  j           func_1D04A0
label_1d0774:
    if (ctx->pc == 0x1D0774u) {
        ctx->pc = 0x1D0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0770u;
        // 0x1d0774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0778u;
        goto label_1d0778;
    }
    ctx->pc = 0x1D0770u;
    ctx->pc = 0x1D0774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0770u;
    // 0x1d0774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04A0u, 0x1D0770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0778u;
label_1d0778:
    // 0x1d0778: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x1d0778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_1d077c:
    // 0x1d077c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d077cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0780:
    // 0x1d0780: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d0780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d0784:
    // 0x1d0784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0788:
    // 0x1d0788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d078c:
    // 0x1d078c: 0x3e00008  jr          $ra
label_1d0790:
    if (ctx->pc == 0x1D0790u) {
        ctx->pc = 0x1D0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D078Cu;
        // 0x1d0790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0794u;
        goto label_1d0794;
    }
    ctx->pc = 0x1D078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D078Cu;
        // 0x1d0790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D078Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0794u;
label_1d0794:
    // 0x1d0794: 0x0  nop
    ctx->pc = 0x1d0794u;
    // NOP
label_1d0798:
    // 0x1d0798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d079c:
    // 0x1d079c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d07a0:
    // 0x1d07a0: 0x24900180  addiu       $s0, $a0, 0x180
    ctx->pc = 0x1d07a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1d07a4:
    // 0x1d07a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d07a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d07a8:
    // 0x1d07a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d07a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d07ac:
    // 0x1d07ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d07acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d07b0:
    // 0x1d07b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d07b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d07b4:
    // 0x1d07b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d07b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d07b8:
    // 0x1d07b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d07b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d07bc:
    // 0x1d07bc: 0xc0757d4  jal         func_1D5F50
label_1d07c0:
    if (ctx->pc == 0x1D07C0u) {
        ctx->pc = 0x1D07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07BCu;
        // 0x1d07c0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07C4u;
        goto label_1d07c4;
    }
    ctx->pc = 0x1D07BCu;
    SET_GPR_U32(ctx, 31, 0x1D07C4u);
    ctx->pc = 0x1D07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D07BCu;
    // 0x1d07c0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D07BCu, 0x1D07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D07C4u;
label_1d07c4:
    // 0x1d07c4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d07c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1d07c8:
    // 0x1d07c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d07c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d07cc:
    // 0x1d07cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d07d0:
    if (ctx->pc == 0x1D07D0u) {
        ctx->pc = 0x1D07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07CCu;
        // 0x1d07d0: 0x34a5020f  ori         $a1, $a1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07D4u;
        goto label_1d07d4;
    }
    ctx->pc = 0x1D07CCu;
    {
        const bool branch_taken_0x1d07cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07CCu;
        // 0x1d07d0: 0x34a5020f  ori         $a1, $a1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07cc) {
            ctx->pc = 0x1D07F0u;
            goto label_1d07f0;
        }
    }
    ctx->pc = 0x1D07D4u;
label_1d07d4:
    // 0x1d07d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d07d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d07d8:
    // 0x1d07d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d07d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d07dc:
    // 0x1d07dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d07dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d07e0:
    // 0x1d07e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d07e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d07e4:
    // 0x1d07e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d07e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d07e8:
    // 0x1d07e8: 0x8074128  j           func_1D04A0
label_1d07ec:
    if (ctx->pc == 0x1D07ECu) {
        ctx->pc = 0x1D07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07E8u;
        // 0x1d07ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07F0u;
        goto label_1d07f0;
    }
    ctx->pc = 0x1D07E8u;
    ctx->pc = 0x1D07ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D07E8u;
    // 0x1d07ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04A0u, 0x1D07E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D07F0u;
label_1d07f0:
    // 0x1d07f0: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1d07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1d07f4:
    // 0x1d07f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d07f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d07f8:
    // 0x1d07f8: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1d07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1d07fc:
    // 0x1d07fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d07fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d0800:
    // 0x1d0800: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0804:
    // 0x1d0804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d0808:
    // 0x1d0808: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x1d0808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_1d080c:
    // 0x1d080c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d080cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0810:
    // 0x1d0810: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d0810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1d0814:
    // 0x1d0814: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d0814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1d0818:
    // 0x1d0818: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d081c:
    // 0x1d081c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d081cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d0820:
    // 0x1d0820: 0x3e00008  jr          $ra
label_1d0824:
    if (ctx->pc == 0x1D0824u) {
        ctx->pc = 0x1D0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0820u;
        // 0x1d0824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0828u;
        goto label_1d0828;
    }
    ctx->pc = 0x1D0820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0820u;
        // 0x1d0824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0828u;
label_1d0828:
    // 0x1d0828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d082c:
    // 0x1d082c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d0830:
    // 0x1d0830: 0x24900180  addiu       $s0, $a0, 0x180
    ctx->pc = 0x1d0830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1d0834:
    // 0x1d0834: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d0838:
    // 0x1d0838: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d083c:
    // 0x1d083c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d083cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d0840:
    // 0x1d0840: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d0840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1d0844:
    // 0x1d0844: 0xc0757d4  jal         func_1D5F50
label_1d0848:
    if (ctx->pc == 0x1D0848u) {
        ctx->pc = 0x1D0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0844u;
        // 0x1d0848: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D084Cu;
        goto label_1d084c;
    }
    ctx->pc = 0x1D0844u;
    SET_GPR_U32(ctx, 31, 0x1D084Cu);
    ctx->pc = 0x1D0848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0844u;
    // 0x1d0848: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D0844u, 0x1D084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D084Cu;
label_1d084c:
    // 0x1d084c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d084cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1d0850:
    // 0x1d0850: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0854:
    // 0x1d0854: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d0858:
    if (ctx->pc == 0x1D0858u) {
        ctx->pc = 0x1D0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0854u;
        // 0x1d0858: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D085Cu;
        goto label_1d085c;
    }
    ctx->pc = 0x1D0854u;
    {
        const bool branch_taken_0x1d0854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0854u;
        // 0x1d0858: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0854) {
            ctx->pc = 0x1D0878u;
            goto label_1d0878;
        }
    }
    ctx->pc = 0x1D085Cu;
label_1d085c:
    // 0x1d085c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d085cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0860:
    // 0x1d0860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d0864:
    // 0x1d0864: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0868:
    // 0x1d0868: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d086c:
    // 0x1d086c: 0x8074128  j           func_1D04A0
label_1d0870:
    if (ctx->pc == 0x1D0870u) {
        ctx->pc = 0x1D0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D086Cu;
        // 0x1d0870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0874u;
        goto label_1d0874;
    }
    ctx->pc = 0x1D086Cu;
    ctx->pc = 0x1D0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D086Cu;
    // 0x1d0870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04A0u, 0x1D086Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0874u;
label_1d0874:
    // 0x1d0874: 0x0  nop
    ctx->pc = 0x1d0874u;
    // NOP
label_1d0878:
    // 0x1d0878: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1d0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1d087c:
    // 0x1d087c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d087cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d0880:
    // 0x1d0880: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d0880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d0884:
    // 0x1d0884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d0888:
    // 0x1d0888: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x1d0888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_1d088c:
    // 0x1d088c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d088cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0890:
    // 0x1d0890: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d0890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1d0894:
    // 0x1d0894: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0898:
    // 0x1d0898: 0x3e00008  jr          $ra
label_1d089c:
    if (ctx->pc == 0x1D089Cu) {
        ctx->pc = 0x1D089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0898u;
        // 0x1d089c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D08A0u;
        goto label_fallthrough_0x1d0898;
    }
    ctx->pc = 0x1D0898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0898u;
        // 0x1d089c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d0898:
    ctx->pc = 0x1D08A0u;
}
