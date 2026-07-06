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

// Function: sub_002BB518
// Address: 0x2bb518 - 0x2bb940
void sub_002BB518_0x2bb518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB518_0x2bb518");
#endif

    switch (ctx->pc) {
        case 0x2bb518u: goto label_2bb518;
        case 0x2bb51cu: goto label_2bb51c;
        case 0x2bb520u: goto label_2bb520;
        case 0x2bb524u: goto label_2bb524;
        case 0x2bb528u: goto label_2bb528;
        case 0x2bb52cu: goto label_2bb52c;
        case 0x2bb530u: goto label_2bb530;
        case 0x2bb534u: goto label_2bb534;
        case 0x2bb538u: goto label_2bb538;
        case 0x2bb53cu: goto label_2bb53c;
        case 0x2bb540u: goto label_2bb540;
        case 0x2bb544u: goto label_2bb544;
        case 0x2bb548u: goto label_2bb548;
        case 0x2bb54cu: goto label_2bb54c;
        case 0x2bb550u: goto label_2bb550;
        case 0x2bb554u: goto label_2bb554;
        case 0x2bb558u: goto label_2bb558;
        case 0x2bb55cu: goto label_2bb55c;
        case 0x2bb560u: goto label_2bb560;
        case 0x2bb564u: goto label_2bb564;
        case 0x2bb568u: goto label_2bb568;
        case 0x2bb56cu: goto label_2bb56c;
        case 0x2bb570u: goto label_2bb570;
        case 0x2bb574u: goto label_2bb574;
        case 0x2bb578u: goto label_2bb578;
        case 0x2bb57cu: goto label_2bb57c;
        case 0x2bb580u: goto label_2bb580;
        case 0x2bb584u: goto label_2bb584;
        case 0x2bb588u: goto label_2bb588;
        case 0x2bb58cu: goto label_2bb58c;
        case 0x2bb590u: goto label_2bb590;
        case 0x2bb594u: goto label_2bb594;
        case 0x2bb598u: goto label_2bb598;
        case 0x2bb59cu: goto label_2bb59c;
        case 0x2bb5a0u: goto label_2bb5a0;
        case 0x2bb5a4u: goto label_2bb5a4;
        case 0x2bb5a8u: goto label_2bb5a8;
        case 0x2bb5acu: goto label_2bb5ac;
        case 0x2bb5b0u: goto label_2bb5b0;
        case 0x2bb5b4u: goto label_2bb5b4;
        case 0x2bb5b8u: goto label_2bb5b8;
        case 0x2bb5bcu: goto label_2bb5bc;
        case 0x2bb5c0u: goto label_2bb5c0;
        case 0x2bb5c4u: goto label_2bb5c4;
        case 0x2bb5c8u: goto label_2bb5c8;
        case 0x2bb5ccu: goto label_2bb5cc;
        case 0x2bb5d0u: goto label_2bb5d0;
        case 0x2bb5d4u: goto label_2bb5d4;
        case 0x2bb5d8u: goto label_2bb5d8;
        case 0x2bb5dcu: goto label_2bb5dc;
        case 0x2bb5e0u: goto label_2bb5e0;
        case 0x2bb5e4u: goto label_2bb5e4;
        case 0x2bb5e8u: goto label_2bb5e8;
        case 0x2bb5ecu: goto label_2bb5ec;
        case 0x2bb5f0u: goto label_2bb5f0;
        case 0x2bb5f4u: goto label_2bb5f4;
        case 0x2bb5f8u: goto label_2bb5f8;
        case 0x2bb5fcu: goto label_2bb5fc;
        case 0x2bb600u: goto label_2bb600;
        case 0x2bb604u: goto label_2bb604;
        case 0x2bb608u: goto label_2bb608;
        case 0x2bb60cu: goto label_2bb60c;
        case 0x2bb610u: goto label_2bb610;
        case 0x2bb614u: goto label_2bb614;
        case 0x2bb618u: goto label_2bb618;
        case 0x2bb61cu: goto label_2bb61c;
        case 0x2bb620u: goto label_2bb620;
        case 0x2bb624u: goto label_2bb624;
        case 0x2bb628u: goto label_2bb628;
        case 0x2bb62cu: goto label_2bb62c;
        case 0x2bb630u: goto label_2bb630;
        case 0x2bb634u: goto label_2bb634;
        case 0x2bb638u: goto label_2bb638;
        case 0x2bb63cu: goto label_2bb63c;
        case 0x2bb640u: goto label_2bb640;
        case 0x2bb644u: goto label_2bb644;
        case 0x2bb648u: goto label_2bb648;
        case 0x2bb64cu: goto label_2bb64c;
        case 0x2bb650u: goto label_2bb650;
        case 0x2bb654u: goto label_2bb654;
        case 0x2bb658u: goto label_2bb658;
        case 0x2bb65cu: goto label_2bb65c;
        case 0x2bb660u: goto label_2bb660;
        case 0x2bb664u: goto label_2bb664;
        case 0x2bb668u: goto label_2bb668;
        case 0x2bb66cu: goto label_2bb66c;
        case 0x2bb670u: goto label_2bb670;
        case 0x2bb674u: goto label_2bb674;
        case 0x2bb678u: goto label_2bb678;
        case 0x2bb67cu: goto label_2bb67c;
        case 0x2bb680u: goto label_2bb680;
        case 0x2bb684u: goto label_2bb684;
        case 0x2bb688u: goto label_2bb688;
        case 0x2bb68cu: goto label_2bb68c;
        case 0x2bb690u: goto label_2bb690;
        case 0x2bb694u: goto label_2bb694;
        case 0x2bb698u: goto label_2bb698;
        case 0x2bb69cu: goto label_2bb69c;
        case 0x2bb6a0u: goto label_2bb6a0;
        case 0x2bb6a4u: goto label_2bb6a4;
        case 0x2bb6a8u: goto label_2bb6a8;
        case 0x2bb6acu: goto label_2bb6ac;
        case 0x2bb6b0u: goto label_2bb6b0;
        case 0x2bb6b4u: goto label_2bb6b4;
        case 0x2bb6b8u: goto label_2bb6b8;
        case 0x2bb6bcu: goto label_2bb6bc;
        case 0x2bb6c0u: goto label_2bb6c0;
        case 0x2bb6c4u: goto label_2bb6c4;
        case 0x2bb6c8u: goto label_2bb6c8;
        case 0x2bb6ccu: goto label_2bb6cc;
        case 0x2bb6d0u: goto label_2bb6d0;
        case 0x2bb6d4u: goto label_2bb6d4;
        case 0x2bb6d8u: goto label_2bb6d8;
        case 0x2bb6dcu: goto label_2bb6dc;
        case 0x2bb6e0u: goto label_2bb6e0;
        case 0x2bb6e4u: goto label_2bb6e4;
        case 0x2bb6e8u: goto label_2bb6e8;
        case 0x2bb6ecu: goto label_2bb6ec;
        case 0x2bb6f0u: goto label_2bb6f0;
        case 0x2bb6f4u: goto label_2bb6f4;
        case 0x2bb6f8u: goto label_2bb6f8;
        case 0x2bb6fcu: goto label_2bb6fc;
        case 0x2bb700u: goto label_2bb700;
        case 0x2bb704u: goto label_2bb704;
        case 0x2bb708u: goto label_2bb708;
        case 0x2bb70cu: goto label_2bb70c;
        case 0x2bb710u: goto label_2bb710;
        case 0x2bb714u: goto label_2bb714;
        case 0x2bb718u: goto label_2bb718;
        case 0x2bb71cu: goto label_2bb71c;
        case 0x2bb720u: goto label_2bb720;
        case 0x2bb724u: goto label_2bb724;
        case 0x2bb728u: goto label_2bb728;
        case 0x2bb72cu: goto label_2bb72c;
        case 0x2bb730u: goto label_2bb730;
        case 0x2bb734u: goto label_2bb734;
        case 0x2bb738u: goto label_2bb738;
        case 0x2bb73cu: goto label_2bb73c;
        case 0x2bb740u: goto label_2bb740;
        case 0x2bb744u: goto label_2bb744;
        case 0x2bb748u: goto label_2bb748;
        case 0x2bb74cu: goto label_2bb74c;
        case 0x2bb750u: goto label_2bb750;
        case 0x2bb754u: goto label_2bb754;
        case 0x2bb758u: goto label_2bb758;
        case 0x2bb75cu: goto label_2bb75c;
        case 0x2bb760u: goto label_2bb760;
        case 0x2bb764u: goto label_2bb764;
        case 0x2bb768u: goto label_2bb768;
        case 0x2bb76cu: goto label_2bb76c;
        case 0x2bb770u: goto label_2bb770;
        case 0x2bb774u: goto label_2bb774;
        case 0x2bb778u: goto label_2bb778;
        case 0x2bb77cu: goto label_2bb77c;
        case 0x2bb780u: goto label_2bb780;
        case 0x2bb784u: goto label_2bb784;
        case 0x2bb788u: goto label_2bb788;
        case 0x2bb78cu: goto label_2bb78c;
        case 0x2bb790u: goto label_2bb790;
        case 0x2bb794u: goto label_2bb794;
        case 0x2bb798u: goto label_2bb798;
        case 0x2bb79cu: goto label_2bb79c;
        case 0x2bb7a0u: goto label_2bb7a0;
        case 0x2bb7a4u: goto label_2bb7a4;
        case 0x2bb7a8u: goto label_2bb7a8;
        case 0x2bb7acu: goto label_2bb7ac;
        case 0x2bb7b0u: goto label_2bb7b0;
        case 0x2bb7b4u: goto label_2bb7b4;
        case 0x2bb7b8u: goto label_2bb7b8;
        case 0x2bb7bcu: goto label_2bb7bc;
        case 0x2bb7c0u: goto label_2bb7c0;
        case 0x2bb7c4u: goto label_2bb7c4;
        case 0x2bb7c8u: goto label_2bb7c8;
        case 0x2bb7ccu: goto label_2bb7cc;
        case 0x2bb7d0u: goto label_2bb7d0;
        case 0x2bb7d4u: goto label_2bb7d4;
        case 0x2bb7d8u: goto label_2bb7d8;
        case 0x2bb7dcu: goto label_2bb7dc;
        case 0x2bb7e0u: goto label_2bb7e0;
        case 0x2bb7e4u: goto label_2bb7e4;
        case 0x2bb7e8u: goto label_2bb7e8;
        case 0x2bb7ecu: goto label_2bb7ec;
        case 0x2bb7f0u: goto label_2bb7f0;
        case 0x2bb7f4u: goto label_2bb7f4;
        case 0x2bb7f8u: goto label_2bb7f8;
        case 0x2bb7fcu: goto label_2bb7fc;
        case 0x2bb800u: goto label_2bb800;
        case 0x2bb804u: goto label_2bb804;
        case 0x2bb808u: goto label_2bb808;
        case 0x2bb80cu: goto label_2bb80c;
        case 0x2bb810u: goto label_2bb810;
        case 0x2bb814u: goto label_2bb814;
        case 0x2bb818u: goto label_2bb818;
        case 0x2bb81cu: goto label_2bb81c;
        case 0x2bb820u: goto label_2bb820;
        case 0x2bb824u: goto label_2bb824;
        case 0x2bb828u: goto label_2bb828;
        case 0x2bb82cu: goto label_2bb82c;
        case 0x2bb830u: goto label_2bb830;
        case 0x2bb834u: goto label_2bb834;
        case 0x2bb838u: goto label_2bb838;
        case 0x2bb83cu: goto label_2bb83c;
        case 0x2bb840u: goto label_2bb840;
        case 0x2bb844u: goto label_2bb844;
        case 0x2bb848u: goto label_2bb848;
        case 0x2bb84cu: goto label_2bb84c;
        case 0x2bb850u: goto label_2bb850;
        case 0x2bb854u: goto label_2bb854;
        case 0x2bb858u: goto label_2bb858;
        case 0x2bb85cu: goto label_2bb85c;
        case 0x2bb860u: goto label_2bb860;
        case 0x2bb864u: goto label_2bb864;
        case 0x2bb868u: goto label_2bb868;
        case 0x2bb86cu: goto label_2bb86c;
        case 0x2bb870u: goto label_2bb870;
        case 0x2bb874u: goto label_2bb874;
        case 0x2bb878u: goto label_2bb878;
        case 0x2bb87cu: goto label_2bb87c;
        case 0x2bb880u: goto label_2bb880;
        case 0x2bb884u: goto label_2bb884;
        case 0x2bb888u: goto label_2bb888;
        case 0x2bb88cu: goto label_2bb88c;
        case 0x2bb890u: goto label_2bb890;
        case 0x2bb894u: goto label_2bb894;
        case 0x2bb898u: goto label_2bb898;
        case 0x2bb89cu: goto label_2bb89c;
        case 0x2bb8a0u: goto label_2bb8a0;
        case 0x2bb8a4u: goto label_2bb8a4;
        case 0x2bb8a8u: goto label_2bb8a8;
        case 0x2bb8acu: goto label_2bb8ac;
        case 0x2bb8b0u: goto label_2bb8b0;
        case 0x2bb8b4u: goto label_2bb8b4;
        case 0x2bb8b8u: goto label_2bb8b8;
        case 0x2bb8bcu: goto label_2bb8bc;
        case 0x2bb8c0u: goto label_2bb8c0;
        case 0x2bb8c4u: goto label_2bb8c4;
        case 0x2bb8c8u: goto label_2bb8c8;
        case 0x2bb8ccu: goto label_2bb8cc;
        case 0x2bb8d0u: goto label_2bb8d0;
        case 0x2bb8d4u: goto label_2bb8d4;
        case 0x2bb8d8u: goto label_2bb8d8;
        case 0x2bb8dcu: goto label_2bb8dc;
        case 0x2bb8e0u: goto label_2bb8e0;
        case 0x2bb8e4u: goto label_2bb8e4;
        case 0x2bb8e8u: goto label_2bb8e8;
        case 0x2bb8ecu: goto label_2bb8ec;
        case 0x2bb8f0u: goto label_2bb8f0;
        case 0x2bb8f4u: goto label_2bb8f4;
        case 0x2bb8f8u: goto label_2bb8f8;
        case 0x2bb8fcu: goto label_2bb8fc;
        case 0x2bb900u: goto label_2bb900;
        case 0x2bb904u: goto label_2bb904;
        case 0x2bb908u: goto label_2bb908;
        case 0x2bb90cu: goto label_2bb90c;
        case 0x2bb910u: goto label_2bb910;
        case 0x2bb914u: goto label_2bb914;
        case 0x2bb918u: goto label_2bb918;
        case 0x2bb91cu: goto label_2bb91c;
        case 0x2bb920u: goto label_2bb920;
        case 0x2bb924u: goto label_2bb924;
        case 0x2bb928u: goto label_2bb928;
        case 0x2bb92cu: goto label_2bb92c;
        case 0x2bb930u: goto label_2bb930;
        case 0x2bb934u: goto label_2bb934;
        case 0x2bb938u: goto label_2bb938;
        case 0x2bb93cu: goto label_2bb93c;
        default: break;
    }

    ctx->pc = 0x2bb518u;

label_2bb518:
    // 0x2bb518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bb51c:
    // 0x2bb51c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2bb51cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2bb520:
    // 0x2bb520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bb524:
    // 0x2bb524: 0x24e7e848  addiu       $a3, $a3, -0x17B8
    ctx->pc = 0x2bb524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961224));
label_2bb528:
    // 0x2bb528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb52c:
    // 0x2bb52c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bb530:
    // 0x2bb530: 0x26040098  addiu       $a0, $s0, 0x98
    ctx->pc = 0x2bb530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_2bb534:
    // 0x2bb534: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bb534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bb538:
    // 0x2bb538: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2bb538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2bb53c:
    // 0x2bb53c: 0xc0a8b46  jal         func_2A2D18
label_2bb540:
    if (ctx->pc == 0x2BB540u) {
        ctx->pc = 0x2BB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB53Cu;
        // 0x2bb540: 0x24080172  addiu       $t0, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB544u;
        goto label_2bb544;
    }
    ctx->pc = 0x2BB53Cu;
    SET_GPR_U32(ctx, 31, 0x2BB544u);
    ctx->pc = 0x2BB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB53Cu;
    // 0x2bb540: 0x24080172  addiu       $t0, $zero, 0x172 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2BB53Cu, 0x2BB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB544u;
label_2bb544:
    // 0x2bb544: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
label_2bb548:
    if (ctx->pc == 0x2BB548u) {
        ctx->pc = 0x2BB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB544u;
        // 0x2bb548: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB54Cu;
        goto label_2bb54c;
    }
    ctx->pc = 0x2BB544u;
    {
        const bool branch_taken_0x2bb544 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2BB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB544u;
        // 0x2bb548: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb544) {
            ctx->pc = 0x2BB604u;
            goto label_2bb604;
        }
    }
    ctx->pc = 0x2BB54Cu;
label_2bb54c:
    // 0x2bb54c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2bb550:
    // 0x2bb550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bb550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb554:
    // 0x2bb554: 0x8c447cd4  lw          $a0, 0x7CD4($v0)
    ctx->pc = 0x2bb554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31956)));
label_2bb558:
    // 0x2bb558: 0xc0a5d58  jal         func_297560
label_2bb55c:
    if (ctx->pc == 0x2BB55Cu) {
        ctx->pc = 0x2BB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB558u;
        // 0x2bb55c: 0x260600bc  addiu       $a2, $s0, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB560u;
        goto label_2bb560;
    }
    ctx->pc = 0x2BB558u;
    SET_GPR_U32(ctx, 31, 0x2BB560u);
    ctx->pc = 0x2BB55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB558u;
    // 0x2bb55c: 0x260600bc  addiu       $a2, $s0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297560u, 0x2BB558u, 0x2BB560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB560u;
label_2bb560:
    // 0x2bb560: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bb560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2bb564:
    // 0x2bb564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb568:
    // 0x2bb568: 0xc049cb6  jal         func_1272D8
label_2bb56c:
    if (ctx->pc == 0x2BB56Cu) {
        ctx->pc = 0x2BB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB568u;
        // 0x2bb56c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB570u;
        goto label_2bb570;
    }
    ctx->pc = 0x2BB568u;
    SET_GPR_U32(ctx, 31, 0x2BB570u);
    ctx->pc = 0x2BB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB568u;
    // 0x2bb56c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BB568u, 0x2BB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB570u;
label_2bb570:
    // 0x2bb570: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2bb570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2bb574:
    // 0x2bb574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb578:
    // 0x2bb578: 0xc049cb6  jal         func_1272D8
label_2bb57c:
    if (ctx->pc == 0x2BB57Cu) {
        ctx->pc = 0x2BB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB578u;
        // 0x2bb57c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB580u;
        goto label_2bb580;
    }
    ctx->pc = 0x2BB578u;
    SET_GPR_U32(ctx, 31, 0x2BB580u);
    ctx->pc = 0x2BB57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB578u;
    // 0x2bb57c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BB578u, 0x2BB580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB580u;
label_2bb580:
    // 0x2bb580: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2bb580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_2bb584:
    // 0x2bb584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb588:
    // 0x2bb588: 0xc049cb6  jal         func_1272D8
label_2bb58c:
    if (ctx->pc == 0x2BB58Cu) {
        ctx->pc = 0x2BB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB588u;
        // 0x2bb58c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB590u;
        goto label_2bb590;
    }
    ctx->pc = 0x2BB588u;
    SET_GPR_U32(ctx, 31, 0x2BB590u);
    ctx->pc = 0x2BB58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB588u;
    // 0x2bb58c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BB588u, 0x2BB590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB590u;
label_2bb590:
    // 0x2bb590: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x2bb590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_2bb594:
    // 0x2bb594: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2bb598:
    if (ctx->pc == 0x2BB598u) {
        ctx->pc = 0x2BB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB594u;
        // 0x2bb598: 0x8e040090  lw          $a0, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB59Cu;
        goto label_2bb59c;
    }
    ctx->pc = 0x2BB594u;
    {
        const bool branch_taken_0x2bb594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb594) {
            ctx->pc = 0x2BB598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB594u;
            // 0x2bb598: 0x8e040090  lw          $a0, 0x90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB5A8u;
            goto label_2bb5a8;
        }
    }
    ctx->pc = 0x2BB59Cu;
label_2bb59c:
    // 0x2bb59c: 0xc0a8e0a  jal         func_2A3828
label_2bb5a0:
    if (ctx->pc == 0x2BB5A0u) {
        ctx->pc = 0x2BB5A4u;
        goto label_2bb5a4;
    }
    ctx->pc = 0x2BB59Cu;
    SET_GPR_U32(ctx, 31, 0x2BB5A4u);
    ctx->pc = 0x2A3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3828u, 0x2BB59Cu, 0x2BB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5A4u;
label_2bb5a4:
    // 0x2bb5a4: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x2bb5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2bb5a8:
    // 0x2bb5a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2bb5ac:
    if (ctx->pc == 0x2BB5ACu) {
        ctx->pc = 0x2BB5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5A8u;
        // 0x2bb5ac: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB5B0u;
        goto label_2bb5b0;
    }
    ctx->pc = 0x2BB5A8u;
    {
        const bool branch_taken_0x2bb5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5a8) {
            ctx->pc = 0x2BB5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB5A8u;
            // 0x2bb5ac: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB5BCu;
            goto label_2bb5bc;
        }
    }
    ctx->pc = 0x2BB5B0u;
label_2bb5b0:
    // 0x2bb5b0: 0xc0abe62  jal         func_2AF988
label_2bb5b4:
    if (ctx->pc == 0x2BB5B4u) {
        ctx->pc = 0x2BB5B8u;
        goto label_2bb5b8;
    }
    ctx->pc = 0x2BB5B0u;
    SET_GPR_U32(ctx, 31, 0x2BB5B8u);
    ctx->pc = 0x2AF988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF988u, 0x2BB5B0u, 0x2BB5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5B8u;
label_2bb5b8:
    // 0x2bb5b8: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x2bb5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2bb5bc:
    // 0x2bb5bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2bb5c0:
    if (ctx->pc == 0x2BB5C0u) {
        ctx->pc = 0x2BB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5BCu;
        // 0x2bb5c0: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB5C4u;
        goto label_2bb5c4;
    }
    ctx->pc = 0x2BB5BCu;
    {
        const bool branch_taken_0x2bb5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5bc) {
            ctx->pc = 0x2BB5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB5BCu;
            // 0x2bb5c0: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB5D0u;
            goto label_2bb5d0;
        }
    }
    ctx->pc = 0x2BB5C4u;
label_2bb5c4:
    // 0x2bb5c4: 0xc0a390c  jal         func_28E430
label_2bb5c8:
    if (ctx->pc == 0x2BB5C8u) {
        ctx->pc = 0x2BB5CCu;
        goto label_2bb5cc;
    }
    ctx->pc = 0x2BB5C4u;
    SET_GPR_U32(ctx, 31, 0x2BB5CCu);
    ctx->pc = 0x28E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E430u, 0x2BB5C4u, 0x2BB5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5CCu;
label_2bb5cc:
    // 0x2bb5cc: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2bb5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2bb5d0:
    // 0x2bb5d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2bb5d4:
    if (ctx->pc == 0x2BB5D4u) {
        ctx->pc = 0x2BB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5D0u;
        // 0x2bb5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB5D8u;
        goto label_2bb5d8;
    }
    ctx->pc = 0x2BB5D0u;
    {
        const bool branch_taken_0x2bb5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5d0) {
            ctx->pc = 0x2BB5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB5D0u;
            // 0x2bb5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB5E4u;
            goto label_2bb5e4;
        }
    }
    ctx->pc = 0x2BB5D8u;
label_2bb5d8:
    // 0x2bb5d8: 0xc0af176  jal         func_2BC5D8
label_2bb5dc:
    if (ctx->pc == 0x2BB5DCu) {
        ctx->pc = 0x2BB5E0u;
        goto label_2bb5e0;
    }
    ctx->pc = 0x2BB5D8u;
    SET_GPR_U32(ctx, 31, 0x2BB5E0u);
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2BB5D8u, 0x2BB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5E0u;
label_2bb5e0:
    // 0x2bb5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb5e4:
    // 0x2bb5e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb5e8:
    // 0x2bb5e8: 0xc049cb6  jal         func_1272D8
label_2bb5ec:
    if (ctx->pc == 0x2BB5ECu) {
        ctx->pc = 0x2BB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5E8u;
        // 0x2bb5ec: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB5F0u;
        goto label_2bb5f0;
    }
    ctx->pc = 0x2BB5E8u;
    SET_GPR_U32(ctx, 31, 0x2BB5F0u);
    ctx->pc = 0x2BB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5E8u;
    // 0x2bb5ec: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BB5E8u, 0x2BB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5F0u;
label_2bb5f0:
    // 0x2bb5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb5f4:
    // 0x2bb5f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb5f8:
    // 0x2bb5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb5fc:
    // 0x2bb5fc: 0x80a8c0a  j           func_2A3028
label_2bb600:
    if (ctx->pc == 0x2BB600u) {
        ctx->pc = 0x2BB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5FCu;
        // 0x2bb600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB604u;
        goto label_2bb604;
    }
    ctx->pc = 0x2BB5FCu;
    ctx->pc = 0x2BB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5FCu;
    // 0x2bb600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2BB604u;
label_2bb604:
    // 0x2bb604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb608:
    // 0x2bb608: 0x3e00008  jr          $ra
label_2bb60c:
    if (ctx->pc == 0x2BB60Cu) {
        ctx->pc = 0x2BB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB608u;
        // 0x2bb60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB610u;
        goto label_2bb610;
    }
    ctx->pc = 0x2BB608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB608u;
        // 0x2bb60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB610u;
label_2bb610:
    // 0x2bb610: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2bb610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2bb614:
    // 0x2bb614: 0x24840098  addiu       $a0, $a0, 0x98
    ctx->pc = 0x2bb614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
label_2bb618:
    // 0x2bb618: 0x24e7e848  addiu       $a3, $a3, -0x17B8
    ctx->pc = 0x2bb618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961224));
label_2bb61c:
    // 0x2bb61c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb620:
    // 0x2bb620: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2bb620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2bb624:
    // 0x2bb624: 0x80a8b46  j           func_2A2D18
label_2bb628:
    if (ctx->pc == 0x2BB628u) {
        ctx->pc = 0x2BB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB624u;
        // 0x2bb628: 0x2408018f  addiu       $t0, $zero, 0x18F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB62Cu;
        goto label_2bb62c;
    }
    ctx->pc = 0x2BB624u;
    ctx->pc = 0x2BB628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB624u;
    // 0x2bb628: 0x2408018f  addiu       $t0, $zero, 0x18F (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    sub_002A2D18_0x2a2d18(rdram, ctx, runtime); return;
    ctx->pc = 0x2BB62Cu;
label_2bb62c:
    // 0x2bb62c: 0x0  nop
    ctx->pc = 0x2bb62cu;
    // NOP
label_2bb630:
    // 0x2bb630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bb634:
    // 0x2bb634: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bb634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2bb638:
    // 0x2bb638: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bb638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bb63c:
    // 0x2bb63c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2bb63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb640:
    // 0x2bb640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bb644:
    // 0x2bb644: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb648:
    // 0x2bb648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bb648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2bb64c:
    // 0x2bb64c: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_2bb650:
    if (ctx->pc == 0x2BB650u) {
        ctx->pc = 0x2BB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB64Cu;
        // 0x2bb650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB654u;
        goto label_2bb654;
    }
    ctx->pc = 0x2BB64Cu;
    {
        const bool branch_taken_0x2bb64c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB64Cu;
        // 0x2bb650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb64c) {
            ctx->pc = 0x2BB71Cu;
            goto label_2bb71c;
        }
    }
    ctx->pc = 0x2BB654u;
label_2bb654:
    // 0x2bb654: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2bb654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2bb658:
    // 0x2bb658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bb658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bb65c:
    // 0x2bb65c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2bb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2bb660:
    // 0x2bb660: 0x40f809  jalr        $v0
label_2bb664:
    if (ctx->pc == 0x2BB664u) {
        ctx->pc = 0x2BB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB660u;
        // 0x2bb664: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB668u;
        goto label_2bb668;
    }
    ctx->pc = 0x2BB660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BB668u);
        ctx->pc = 0x2BB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB660u;
        // 0x2bb664: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB660u, 0x2BB668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB668u;
label_2bb668:
    // 0x2bb668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb66c:
    // 0x2bb66c: 0x54a00010  bnel        $a1, $zero, . + 4 + (0x10 << 2)
label_2bb670:
    if (ctx->pc == 0x2BB670u) {
        ctx->pc = 0x2BB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB66Cu;
        // 0x2bb670: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB674u;
        goto label_2bb674;
    }
    ctx->pc = 0x2BB66Cu;
    {
        const bool branch_taken_0x2bb66c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb66c) {
            ctx->pc = 0x2BB670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB66Cu;
            // 0x2bb670: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB6B0u;
            goto label_2bb6b0;
        }
    }
    ctx->pc = 0x2BB674u;
label_2bb674:
    // 0x2bb674: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2bb674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2bb678:
    // 0x2bb678: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2bb678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2bb67c:
    // 0x2bb67c: 0x40f809  jalr        $v0
label_2bb680:
    if (ctx->pc == 0x2BB680u) {
        ctx->pc = 0x2BB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB67Cu;
        // 0x2bb680: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB684u;
        goto label_2bb684;
    }
    ctx->pc = 0x2BB67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BB684u);
        ctx->pc = 0x2BB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB67Cu;
        // 0x2bb680: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB67Cu, 0x2BB684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB684u;
label_2bb684:
    // 0x2bb684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb688:
    // 0x2bb688: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
label_2bb68c:
    if (ctx->pc == 0x2BB68Cu) {
        ctx->pc = 0x2BB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB688u;
        // 0x2bb68c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB690u;
        goto label_2bb690;
    }
    ctx->pc = 0x2BB688u;
    {
        const bool branch_taken_0x2bb688 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb688) {
            ctx->pc = 0x2BB68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB688u;
            // 0x2bb68c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB6B0u;
            goto label_2bb6b0;
        }
    }
    ctx->pc = 0x2BB690u;
label_2bb690:
    // 0x2bb690: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bb690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bb694:
    // 0x2bb694: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x2bb694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_2bb698:
    // 0x2bb698: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x2bb698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2bb69c:
    // 0x2bb69c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bb69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb6a0:
    // 0x2bb6a0: 0xc0a5648  jal         func_295920
label_2bb6a4:
    if (ctx->pc == 0x2BB6A4u) {
        ctx->pc = 0x2BB6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6A0u;
        // 0x2bb6a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6A8u;
        goto label_2bb6a8;
    }
    ctx->pc = 0x2BB6A0u;
    SET_GPR_U32(ctx, 31, 0x2BB6A8u);
    ctx->pc = 0x2BB6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6A0u;
    // 0x2bb6a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BB6A0u, 0x2BB6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6A8u;
label_2bb6a8:
    // 0x2bb6a8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2bb6ac:
    if (ctx->pc == 0x2BB6ACu) {
        ctx->pc = 0x2BB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6A8u;
        // 0x2bb6ac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6B0u;
        goto label_2bb6b0;
    }
    ctx->pc = 0x2BB6A8u;
    {
        const bool branch_taken_0x2bb6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6A8u;
        // 0x2bb6ac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6a8) {
            ctx->pc = 0x2BB760u;
            goto label_2bb760;
        }
    }
    ctx->pc = 0x2BB6B0u;
label_2bb6b0:
    // 0x2bb6b0: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_2bb6b4:
    if (ctx->pc == 0x2BB6B4u) {
        ctx->pc = 0x2BB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6B0u;
        // 0x2bb6b4: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6B8u;
        goto label_2bb6b8;
    }
    ctx->pc = 0x2BB6B0u;
    {
        const bool branch_taken_0x2bb6b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6B0u;
        // 0x2bb6b4: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6b0) {
            ctx->pc = 0x2BB6E8u;
            goto label_2bb6e8;
        }
    }
    ctx->pc = 0x2BB6B8u;
label_2bb6b8:
    // 0x2bb6b8: 0xc0ac47a  jal         func_2B11E8
label_2bb6bc:
    if (ctx->pc == 0x2BB6BCu) {
        ctx->pc = 0x2BB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6B8u;
        // 0x2bb6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6C0u;
        goto label_2bb6c0;
    }
    ctx->pc = 0x2BB6B8u;
    SET_GPR_U32(ctx, 31, 0x2BB6C0u);
    ctx->pc = 0x2BB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6B8u;
    // 0x2bb6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B11E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B11E8u, 0x2BB6B8u, 0x2BB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6C0u;
label_2bb6c0:
    // 0x2bb6c0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2bb6c4:
    if (ctx->pc == 0x2BB6C4u) {
        ctx->pc = 0x2BB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6C0u;
        // 0x2bb6c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6C8u;
        goto label_2bb6c8;
    }
    ctx->pc = 0x2BB6C0u;
    {
        const bool branch_taken_0x2bb6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6C0u;
        // 0x2bb6c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6c0) {
            ctx->pc = 0x2BB760u;
            goto label_2bb760;
        }
    }
    ctx->pc = 0x2BB6C8u;
label_2bb6c8:
    // 0x2bb6c8: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2bb6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2bb6cc:
    // 0x2bb6cc: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x2bb6ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_2bb6d0:
    // 0x2bb6d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2bb6d4:
    if (ctx->pc == 0x2BB6D4u) {
        ctx->pc = 0x2BB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6D0u;
        // 0x2bb6d4: 0xfe2200a0  sd          $v0, 0xA0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6D8u;
        goto label_2bb6d8;
    }
    ctx->pc = 0x2BB6D0u;
    {
        const bool branch_taken_0x2bb6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb6d0) {
            ctx->pc = 0x2BB6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB6D0u;
            // 0x2bb6d4: 0xfe2200a0  sd          $v0, 0xA0($s1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB6E4u;
            goto label_2bb6e4;
        }
    }
    ctx->pc = 0x2BB6D8u;
label_2bb6d8:
    // 0x2bb6d8: 0xc0ac09e  jal         func_2B0278
label_2bb6dc:
    if (ctx->pc == 0x2BB6DCu) {
        ctx->pc = 0x2BB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6D8u;
        // 0x2bb6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6E0u;
        goto label_2bb6e0;
    }
    ctx->pc = 0x2BB6D8u;
    SET_GPR_U32(ctx, 31, 0x2BB6E0u);
    ctx->pc = 0x2BB6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6D8u;
    // 0x2bb6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0278u, 0x2BB6D8u, 0x2BB6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6E0u;
label_2bb6e0:
    // 0x2bb6e0: 0xfe2200a0  sd          $v0, 0xA0($s1)
    ctx->pc = 0x2bb6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 2));
label_2bb6e4:
    // 0x2bb6e4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2bb6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2bb6e8:
    // 0x2bb6e8: 0x26240098  addiu       $a0, $s1, 0x98
    ctx->pc = 0x2bb6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_2bb6ec:
    // 0x2bb6ec: 0x24e7e848  addiu       $a3, $a3, -0x17B8
    ctx->pc = 0x2bb6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961224));
label_2bb6f0:
    // 0x2bb6f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bb6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb6f4:
    // 0x2bb6f4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2bb6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2bb6f8:
    // 0x2bb6f8: 0xc0a8b46  jal         func_2A2D18
label_2bb6fc:
    if (ctx->pc == 0x2BB6FCu) {
        ctx->pc = 0x2BB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6F8u;
        // 0x2bb6fc: 0x240801ae  addiu       $t0, $zero, 0x1AE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB700u;
        goto label_2bb700;
    }
    ctx->pc = 0x2BB6F8u;
    SET_GPR_U32(ctx, 31, 0x2BB700u);
    ctx->pc = 0x2BB6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6F8u;
    // 0x2bb6fc: 0x240801ae  addiu       $t0, $zero, 0x1AE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2BB6F8u, 0x2BB700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB700u;
label_2bb700:
    // 0x2bb700: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x2bb700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2bb704:
    // 0x2bb704: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_2bb708:
    if (ctx->pc == 0x2BB708u) {
        ctx->pc = 0x2BB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB704u;
        // 0x2bb708: 0xae1100b0  sw          $s1, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB70Cu;
        goto label_2bb70c;
    }
    ctx->pc = 0x2BB704u;
    {
        const bool branch_taken_0x2bb704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb704) {
            ctx->pc = 0x2BB708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB704u;
            // 0x2bb708: 0xae1100b0  sw          $s1, 0xB0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB758u;
            goto label_2bb758;
        }
    }
    ctx->pc = 0x2BB70Cu;
label_2bb70c:
    // 0x2bb70c: 0xc0aed46  jal         func_2BB518
label_2bb710:
    if (ctx->pc == 0x2BB710u) {
        ctx->pc = 0x2BB714u;
        goto label_2bb714;
    }
    ctx->pc = 0x2BB70Cu;
    SET_GPR_U32(ctx, 31, 0x2BB714u);
    ctx->pc = 0x2BB518u;
    goto label_2bb518;
    ctx->pc = 0x2BB714u;
label_2bb714:
    // 0x2bb714: 0x10000010  b           . + 4 + (0x10 << 2)
label_2bb718:
    if (ctx->pc == 0x2BB718u) {
        ctx->pc = 0x2BB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB714u;
        // 0x2bb718: 0xae1100b0  sw          $s1, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB71Cu;
        goto label_2bb71c;
    }
    ctx->pc = 0x2BB714u;
    {
        const bool branch_taken_0x2bb714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB714u;
        // 0x2bb718: 0xae1100b0  sw          $s1, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb714) {
            ctx->pc = 0x2BB758u;
            goto label_2bb758;
        }
    }
    ctx->pc = 0x2BB71Cu;
label_2bb71c:
    // 0x2bb71c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x2bb71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2bb720:
    // 0x2bb720: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2bb724:
    if (ctx->pc == 0x2BB724u) {
        ctx->pc = 0x2BB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB720u;
        // 0x2bb724: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB728u;
        goto label_2bb728;
    }
    ctx->pc = 0x2BB720u;
    {
        const bool branch_taken_0x2bb720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb720) {
            ctx->pc = 0x2BB724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB720u;
            // 0x2bb724: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB738u;
            goto label_2bb738;
        }
    }
    ctx->pc = 0x2BB728u;
label_2bb728:
    // 0x2bb728: 0xc0aed46  jal         func_2BB518
label_2bb72c:
    if (ctx->pc == 0x2BB72Cu) {
        ctx->pc = 0x2BB730u;
        goto label_2bb730;
    }
    ctx->pc = 0x2BB728u;
    SET_GPR_U32(ctx, 31, 0x2BB730u);
    ctx->pc = 0x2BB518u;
    goto label_2bb518;
    ctx->pc = 0x2BB730u;
label_2bb730:
    // 0x2bb730: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x2bb730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_2bb734:
    // 0x2bb734: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2bb734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2bb738:
    // 0x2bb738: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2bb738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2bb73c:
    // 0x2bb73c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2bb73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bb740:
    // 0x2bb740: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_2bb744:
    if (ctx->pc == 0x2BB744u) {
        ctx->pc = 0x2BB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB740u;
        // 0x2bb744: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB748u;
        goto label_2bb748;
    }
    ctx->pc = 0x2BB740u;
    {
        const bool branch_taken_0x2bb740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bb740) {
            ctx->pc = 0x2BB744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB740u;
            // 0x2bb744: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB75Cu;
            goto label_2bb75c;
        }
    }
    ctx->pc = 0x2BB748u;
label_2bb748:
    // 0x2bb748: 0xc0ac47a  jal         func_2B11E8
label_2bb74c:
    if (ctx->pc == 0x2BB74Cu) {
        ctx->pc = 0x2BB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB748u;
        // 0x2bb74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB750u;
        goto label_2bb750;
    }
    ctx->pc = 0x2BB748u;
    SET_GPR_U32(ctx, 31, 0x2BB750u);
    ctx->pc = 0x2BB74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB748u;
    // 0x2bb74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B11E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B11E8u, 0x2BB748u, 0x2BB750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB750u;
label_2bb750:
    // 0x2bb750: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bb754:
    if (ctx->pc == 0x2BB754u) {
        ctx->pc = 0x2BB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB750u;
        // 0x2bb754: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB758u;
        goto label_2bb758;
    }
    ctx->pc = 0x2BB750u;
    {
        const bool branch_taken_0x2bb750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB750u;
        // 0x2bb754: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb750) {
            ctx->pc = 0x2BB760u;
            goto label_2bb760;
        }
    }
    ctx->pc = 0x2BB758u;
label_2bb758:
    // 0x2bb758: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2bb758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb75c:
    // 0x2bb75c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2bb75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb760:
    // 0x2bb760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bb760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bb764:
    // 0x2bb764: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bb764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb768:
    // 0x2bb768: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bb768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb76c:
    // 0x2bb76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb770:
    // 0x2bb770: 0x3e00008  jr          $ra
label_2bb774:
    if (ctx->pc == 0x2BB774u) {
        ctx->pc = 0x2BB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB770u;
        // 0x2bb774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB778u;
        goto label_2bb778;
    }
    ctx->pc = 0x2BB770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB770u;
        // 0x2bb774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB778u;
label_2bb778:
    // 0x2bb778: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_2bb77c:
    if (ctx->pc == 0x2BB77Cu) {
        ctx->pc = 0x2BB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB778u;
        // 0x2bb77c: 0xfc8500a0  sd          $a1, 0xA0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB780u;
        goto label_2bb780;
    }
    ctx->pc = 0x2BB778u;
    {
        const bool branch_taken_0x2bb778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb778) {
            ctx->pc = 0x2BB77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB778u;
            // 0x2bb77c: 0xfc8500a0  sd          $a1, 0xA0($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB788u;
            goto label_2bb788;
        }
    }
    ctx->pc = 0x2BB780u;
label_2bb780:
    // 0x2bb780: 0x3e00008  jr          $ra
label_2bb784:
    if (ctx->pc == 0x2BB784u) {
        ctx->pc = 0x2BB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB780u;
        // 0x2bb784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB788u;
        goto label_2bb788;
    }
    ctx->pc = 0x2BB780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB780u;
        // 0x2bb784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB788u;
label_2bb788:
    // 0x2bb788: 0x3e00008  jr          $ra
label_2bb78c:
    if (ctx->pc == 0x2BB78Cu) {
        ctx->pc = 0x2BB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB788u;
        // 0x2bb78c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB790u;
        goto label_2bb790;
    }
    ctx->pc = 0x2BB788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB788u;
        // 0x2bb78c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB790u;
label_2bb790:
    // 0x2bb790: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bb794:
    if (ctx->pc == 0x2BB794u) {
        ctx->pc = 0x2BB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB790u;
        // 0x2bb794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB798u;
        goto label_2bb798;
    }
    ctx->pc = 0x2BB790u;
    {
        const bool branch_taken_0x2bb790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB790u;
        // 0x2bb794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb790) {
            ctx->pc = 0x2BB7A0u;
            goto label_2bb7a0;
        }
    }
    ctx->pc = 0x2BB798u;
label_2bb798:
    // 0x2bb798: 0x3e00008  jr          $ra
label_2bb79c:
    if (ctx->pc == 0x2BB79Cu) {
        ctx->pc = 0x2BB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB798u;
        // 0x2bb79c: 0xdc8200a0  ld          $v0, 0xA0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7A0u;
        goto label_2bb7a0;
    }
    ctx->pc = 0x2BB798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB798u;
        // 0x2bb79c: 0xdc8200a0  ld          $v0, 0xA0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB7A0u;
label_2bb7a0:
    // 0x2bb7a0: 0x3e00008  jr          $ra
label_2bb7a4:
    if (ctx->pc == 0x2BB7A4u) {
        ctx->pc = 0x2BB7A8u;
        goto label_2bb7a8;
    }
    ctx->pc = 0x2BB7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB7A8u;
label_2bb7a8:
    // 0x2bb7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bb7ac:
    // 0x2bb7ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bb7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bb7b0:
    // 0x2bb7b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bb7b4:
    // 0x2bb7b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7b8:
    // 0x2bb7b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bb7bc:
    if (ctx->pc == 0x2BB7BCu) {
        ctx->pc = 0x2BB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7B8u;
        // 0x2bb7bc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7C0u;
        goto label_2bb7c0;
    }
    ctx->pc = 0x2BB7B8u;
    {
        const bool branch_taken_0x2bb7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7B8u;
        // 0x2bb7bc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7b8) {
            ctx->pc = 0x2BB7C8u;
            goto label_2bb7c8;
        }
    }
    ctx->pc = 0x2BB7C0u;
label_2bb7c0:
    // 0x2bb7c0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2bb7c4:
    if (ctx->pc == 0x2BB7C4u) {
        ctx->pc = 0x2BB7C8u;
        goto label_2bb7c8;
    }
    ctx->pc = 0x2BB7C0u;
    {
        const bool branch_taken_0x2bb7c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb7c0) {
            ctx->pc = 0x2BB7D0u;
            goto label_2bb7d0;
        }
    }
    ctx->pc = 0x2BB7C8u;
label_2bb7c8:
    // 0x2bb7c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2bb7cc:
    if (ctx->pc == 0x2BB7CCu) {
        ctx->pc = 0x2BB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7C8u;
        // 0x2bb7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7D0u;
        goto label_2bb7d0;
    }
    ctx->pc = 0x2BB7C8u;
    {
        const bool branch_taken_0x2bb7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7C8u;
        // 0x2bb7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7c8) {
            ctx->pc = 0x2BB7ECu;
            goto label_2bb7ec;
        }
    }
    ctx->pc = 0x2BB7D0u;
label_2bb7d0:
    // 0x2bb7d0: 0xc0a8a3c  jal         func_2A28F0
label_2bb7d4:
    if (ctx->pc == 0x2BB7D4u) {
        ctx->pc = 0x2BB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7D0u;
        // 0x2bb7d4: 0x8c9000a8  lw          $s0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7D8u;
        goto label_2bb7d8;
    }
    ctx->pc = 0x2BB7D0u;
    SET_GPR_U32(ctx, 31, 0x2BB7D8u);
    ctx->pc = 0x2BB7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB7D0u;
    // 0x2bb7d4: 0x8c9000a8  lw          $s0, 0xA8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A28F0u, 0x2BB7D0u, 0x2BB7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7D8u;
label_2bb7d8:
    // 0x2bb7d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bb7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7dc:
    // 0x2bb7dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bb7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7e0:
    // 0x2bb7e0: 0xc049c48  jal         func_127120
label_2bb7e4:
    if (ctx->pc == 0x2BB7E4u) {
        ctx->pc = 0x2BB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7E0u;
        // 0x2bb7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7E8u;
        goto label_2bb7e8;
    }
    ctx->pc = 0x2BB7E0u;
    SET_GPR_U32(ctx, 31, 0x2BB7E8u);
    ctx->pc = 0x2BB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB7E0u;
    // 0x2bb7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BB7E0u, 0x2BB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7E8u;
label_2bb7e8:
    // 0x2bb7e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7ec:
    // 0x2bb7ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb7f0:
    // 0x2bb7f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bb7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb7f4:
    // 0x2bb7f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb7f8:
    // 0x2bb7f8: 0x3e00008  jr          $ra
label_2bb7fc:
    if (ctx->pc == 0x2BB7FCu) {
        ctx->pc = 0x2BB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7F8u;
        // 0x2bb7fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB800u;
        goto label_2bb800;
    }
    ctx->pc = 0x2BB7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7F8u;
        // 0x2bb7fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB800u;
label_2bb800:
    // 0x2bb800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bb804:
    // 0x2bb804: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bb804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bb808:
    // 0x2bb808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bb80c:
    // 0x2bb80c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb810:
    // 0x2bb810: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bb814:
    if (ctx->pc == 0x2BB814u) {
        ctx->pc = 0x2BB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB810u;
        // 0x2bb814: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB818u;
        goto label_2bb818;
    }
    ctx->pc = 0x2BB810u;
    {
        const bool branch_taken_0x2bb810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB810u;
        // 0x2bb814: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb810) {
            ctx->pc = 0x2BB820u;
            goto label_2bb820;
        }
    }
    ctx->pc = 0x2BB818u;
label_2bb818:
    // 0x2bb818: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2bb81c:
    if (ctx->pc == 0x2BB81Cu) {
        ctx->pc = 0x2BB820u;
        goto label_2bb820;
    }
    ctx->pc = 0x2BB818u;
    {
        const bool branch_taken_0x2bb818 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb818) {
            ctx->pc = 0x2BB828u;
            goto label_2bb828;
        }
    }
    ctx->pc = 0x2BB820u;
label_2bb820:
    // 0x2bb820: 0x10000008  b           . + 4 + (0x8 << 2)
label_2bb824:
    if (ctx->pc == 0x2BB824u) {
        ctx->pc = 0x2BB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB820u;
        // 0x2bb824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB828u;
        goto label_2bb828;
    }
    ctx->pc = 0x2BB820u;
    {
        const bool branch_taken_0x2bb820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB820u;
        // 0x2bb824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb820) {
            ctx->pc = 0x2BB844u;
            goto label_2bb844;
        }
    }
    ctx->pc = 0x2BB828u;
label_2bb828:
    // 0x2bb828: 0xc0a8a3c  jal         func_2A28F0
label_2bb82c:
    if (ctx->pc == 0x2BB82Cu) {
        ctx->pc = 0x2BB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB828u;
        // 0x2bb82c: 0x8c9000a8  lw          $s0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB830u;
        goto label_2bb830;
    }
    ctx->pc = 0x2BB828u;
    SET_GPR_U32(ctx, 31, 0x2BB830u);
    ctx->pc = 0x2BB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB828u;
    // 0x2bb82c: 0x8c9000a8  lw          $s0, 0xA8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A28F0u, 0x2BB828u, 0x2BB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB830u;
label_2bb830:
    // 0x2bb830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb834:
    // 0x2bb834: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bb834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb838:
    // 0x2bb838: 0xc049c48  jal         func_127120
label_2bb83c:
    if (ctx->pc == 0x2BB83Cu) {
        ctx->pc = 0x2BB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB838u;
        // 0x2bb83c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB840u;
        goto label_2bb840;
    }
    ctx->pc = 0x2BB838u;
    SET_GPR_U32(ctx, 31, 0x2BB840u);
    ctx->pc = 0x2BB83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB838u;
    // 0x2bb83c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BB838u, 0x2BB840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB840u;
label_2bb840:
    // 0x2bb840: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb844:
    // 0x2bb844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb848:
    // 0x2bb848: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bb848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb84c:
    // 0x2bb84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb850:
    // 0x2bb850: 0x3e00008  jr          $ra
label_2bb854:
    if (ctx->pc == 0x2BB854u) {
        ctx->pc = 0x2BB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB850u;
        // 0x2bb854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB858u;
        goto label_2bb858;
    }
    ctx->pc = 0x2BB850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB850u;
        // 0x2bb854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB858u;
label_2bb858:
    // 0x2bb858: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_2bb85c:
    if (ctx->pc == 0x2BB85Cu) {
        ctx->pc = 0x2BB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB858u;
        // 0x2bb85c: 0xdc820038  ld          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB860u;
        goto label_2bb860;
    }
    ctx->pc = 0x2BB858u;
    {
        const bool branch_taken_0x2bb858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb858) {
            ctx->pc = 0x2BB85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB858u;
            // 0x2bb85c: 0xdc820038  ld          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB868u;
            goto label_2bb868;
        }
    }
    ctx->pc = 0x2BB860u;
label_2bb860:
    // 0x2bb860: 0x3e00008  jr          $ra
label_2bb864:
    if (ctx->pc == 0x2BB864u) {
        ctx->pc = 0x2BB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB860u;
        // 0x2bb864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB868u;
        goto label_2bb868;
    }
    ctx->pc = 0x2BB860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB860u;
        // 0x2bb864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB868u;
label_2bb868:
    // 0x2bb868: 0x3e00008  jr          $ra
label_2bb86c:
    if (ctx->pc == 0x2BB86Cu) {
        ctx->pc = 0x2BB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB868u;
        // 0x2bb86c: 0xfc850038  sd          $a1, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB870u;
        goto label_2bb870;
    }
    ctx->pc = 0x2BB868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB868u;
        // 0x2bb86c: 0xfc850038  sd          $a1, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB870u;
label_2bb870:
    // 0x2bb870: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bb874:
    if (ctx->pc == 0x2BB874u) {
        ctx->pc = 0x2BB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB870u;
        // 0x2bb874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB878u;
        goto label_2bb878;
    }
    ctx->pc = 0x2BB870u;
    {
        const bool branch_taken_0x2bb870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB870u;
        // 0x2bb874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb870) {
            ctx->pc = 0x2BB880u;
            goto label_2bb880;
        }
    }
    ctx->pc = 0x2BB878u;
label_2bb878:
    // 0x2bb878: 0x3e00008  jr          $ra
label_2bb87c:
    if (ctx->pc == 0x2BB87Cu) {
        ctx->pc = 0x2BB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB878u;
        // 0x2bb87c: 0xdc820038  ld          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB880u;
        goto label_2bb880;
    }
    ctx->pc = 0x2BB878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB878u;
        // 0x2bb87c: 0xdc820038  ld          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB880u;
label_2bb880:
    // 0x2bb880: 0x3e00008  jr          $ra
label_2bb884:
    if (ctx->pc == 0x2BB884u) {
        ctx->pc = 0x2BB888u;
        goto label_2bb888;
    }
    ctx->pc = 0x2BB880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB888u;
label_2bb888:
    // 0x2bb888: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bb888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2bb88c:
    // 0x2bb88c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bb88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2bb890:
    // 0x2bb890: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bb890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2bb894:
    // 0x2bb894: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bb894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb898:
    // 0x2bb898: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bb898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bb89c:
    // 0x2bb89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bb8a0:
    // 0x2bb8a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bb8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bb8a4:
    // 0x2bb8a4: 0xc0a8df2  jal         func_2A37C8
label_2bb8a8:
    if (ctx->pc == 0x2BB8A8u) {
        ctx->pc = 0x2BB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8A4u;
        // 0x2bb8a8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8ACu;
        goto label_2bb8ac;
    }
    ctx->pc = 0x2BB8A4u;
    SET_GPR_U32(ctx, 31, 0x2BB8ACu);
    ctx->pc = 0x2BB8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8A4u;
    // 0x2bb8a8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A37C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A37C8u, 0x2BB8A4u, 0x2BB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8ACu;
label_2bb8ac:
    // 0x2bb8ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bb8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb8b0:
    // 0x2bb8b0: 0x8e4600a0  lw          $a2, 0xA0($s2)
    ctx->pc = 0x2bb8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_2bb8b4:
    // 0x2bb8b4: 0x8e4500a8  lw          $a1, 0xA8($s2)
    ctx->pc = 0x2bb8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_2bb8b8:
    // 0x2bb8b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bb8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb8bc:
    // 0x2bb8bc: 0xc0a8e0c  jal         func_2A3830
label_2bb8c0:
    if (ctx->pc == 0x2BB8C0u) {
        ctx->pc = 0x2BB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8BCu;
        // 0x2bb8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8C4u;
        goto label_2bb8c4;
    }
    ctx->pc = 0x2BB8BCu;
    SET_GPR_U32(ctx, 31, 0x2BB8C4u);
    ctx->pc = 0x2BB8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8BCu;
    // 0x2bb8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3830u, 0x2BB8BCu, 0x2BB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8C4u;
label_2bb8c4:
    // 0x2bb8c4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2bb8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2bb8c8:
    // 0x2bb8c8: 0xc0a8e4e  jal         func_2A3938
label_2bb8cc:
    if (ctx->pc == 0x2BB8CCu) {
        ctx->pc = 0x2BB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8C8u;
        // 0x2bb8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8D0u;
        goto label_2bb8d0;
    }
    ctx->pc = 0x2BB8C8u;
    SET_GPR_U32(ctx, 31, 0x2BB8D0u);
    ctx->pc = 0x2BB8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8C8u;
    // 0x2bb8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3938u, 0x2BB8C8u, 0x2BB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8D0u;
label_2bb8d0:
    // 0x2bb8d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bb8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb8d4:
    // 0x2bb8d4: 0xc0a8e0a  jal         func_2A3828
label_2bb8d8:
    if (ctx->pc == 0x2BB8D8u) {
        ctx->pc = 0x2BB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8D4u;
        // 0x2bb8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8DCu;
        goto label_2bb8dc;
    }
    ctx->pc = 0x2BB8D4u;
    SET_GPR_U32(ctx, 31, 0x2BB8DCu);
    ctx->pc = 0x2BB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8D4u;
    // 0x2bb8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3828u, 0x2BB8D4u, 0x2BB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8DCu;
label_2bb8dc:
    // 0x2bb8dc: 0x1e200012  bgtz        $s1, . + 4 + (0x12 << 2)
label_2bb8e0:
    if (ctx->pc == 0x2BB8E0u) {
        ctx->pc = 0x2BB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8DCu;
        // 0x2bb8e0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8E4u;
        goto label_2bb8e4;
    }
    ctx->pc = 0x2BB8DCu;
    {
        const bool branch_taken_0x2bb8dc = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2BB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8DCu;
        // 0x2bb8e0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb8dc) {
            ctx->pc = 0x2BB928u;
            goto label_2bb928;
        }
    }
    ctx->pc = 0x2BB8E4u;
label_2bb8e4:
    // 0x2bb8e4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2bb8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2bb8e8:
    // 0x2bb8e8: 0xc0a6218  jal         func_298860
label_2bb8ec:
    if (ctx->pc == 0x2BB8ECu) {
        ctx->pc = 0x2BB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8E8u;
        // 0x2bb8ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8F0u;
        goto label_2bb8f0;
    }
    ctx->pc = 0x2BB8E8u;
    SET_GPR_U32(ctx, 31, 0x2BB8F0u);
    ctx->pc = 0x2BB8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8E8u;
    // 0x2bb8ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298860u, 0x2BB8E8u, 0x2BB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8F0u;
label_2bb8f0:
    // 0x2bb8f0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2bb8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bb8f4:
    // 0x2bb8f4: 0xc0aeeae  jal         func_2BBAB8
label_2bb8f8:
    if (ctx->pc == 0x2BB8F8u) {
        ctx->pc = 0x2BB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8F4u;
        // 0x2bb8f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8FCu;
        goto label_2bb8fc;
    }
    ctx->pc = 0x2BB8F4u;
    SET_GPR_U32(ctx, 31, 0x2BB8FCu);
    ctx->pc = 0x2BB8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8F4u;
    // 0x2bb8f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAB8u, 0x2BB8F4u, 0x2BB8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8FCu;
label_2bb8fc:
    // 0x2bb8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb900:
    // 0x2bb900: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x2bb900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_2bb904:
    // 0x2bb904: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2bb904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bb908:
    // 0x2bb908: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x2bb908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_2bb90c:
    // 0x2bb90c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bb910:
    if (ctx->pc == 0x2BB910u) {
        ctx->pc = 0x2BB914u;
        goto label_2bb914;
    }
    ctx->pc = 0x2BB90Cu;
    {
        const bool branch_taken_0x2bb90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb90c) {
            ctx->pc = 0x2BB91Cu;
            goto label_2bb91c;
        }
    }
    ctx->pc = 0x2BB914u;
label_2bb914:
    // 0x2bb914: 0x40f809  jalr        $v0
label_2bb918:
    if (ctx->pc == 0x2BB918u) {
        ctx->pc = 0x2BB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB914u;
        // 0x2bb918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB91Cu;
        goto label_2bb91c;
    }
    ctx->pc = 0x2BB914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BB91Cu);
        ctx->pc = 0x2BB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB914u;
        // 0x2bb918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB914u, 0x2BB91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB91Cu;
label_2bb91c:
    // 0x2bb91c: 0xc0aed46  jal         func_2BB518
label_2bb920:
    if (ctx->pc == 0x2BB920u) {
        ctx->pc = 0x2BB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB91Cu;
        // 0x2bb920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB924u;
        goto label_2bb924;
    }
    ctx->pc = 0x2BB91Cu;
    SET_GPR_U32(ctx, 31, 0x2BB924u);
    ctx->pc = 0x2BB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB91Cu;
    // 0x2bb920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB518u;
    goto label_2bb518;
    ctx->pc = 0x2BB924u;
label_2bb924:
    // 0x2bb924: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bb924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bb928:
    // 0x2bb928: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bb928u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bb92c:
    // 0x2bb92c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bb92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb930:
    // 0x2bb930: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bb930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb934:
    // 0x2bb934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb938:
    // 0x2bb938: 0x3e00008  jr          $ra
label_2bb93c:
    if (ctx->pc == 0x2BB93Cu) {
        ctx->pc = 0x2BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB938u;
        // 0x2bb93c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB940u;
        goto label_fallthrough_0x2bb938;
    }
    ctx->pc = 0x2BB938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB938u;
        // 0x2bb93c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bb938:
    ctx->pc = 0x2BB940u;
}
