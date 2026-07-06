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

// Function: sub_00141510
// Address: 0x141510 - 0x141a70
void sub_00141510_0x141510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141510_0x141510");
#endif

    switch (ctx->pc) {
        case 0x141510u: goto label_141510;
        case 0x141514u: goto label_141514;
        case 0x141518u: goto label_141518;
        case 0x14151cu: goto label_14151c;
        case 0x141520u: goto label_141520;
        case 0x141524u: goto label_141524;
        case 0x141528u: goto label_141528;
        case 0x14152cu: goto label_14152c;
        case 0x141530u: goto label_141530;
        case 0x141534u: goto label_141534;
        case 0x141538u: goto label_141538;
        case 0x14153cu: goto label_14153c;
        case 0x141540u: goto label_141540;
        case 0x141544u: goto label_141544;
        case 0x141548u: goto label_141548;
        case 0x14154cu: goto label_14154c;
        case 0x141550u: goto label_141550;
        case 0x141554u: goto label_141554;
        case 0x141558u: goto label_141558;
        case 0x14155cu: goto label_14155c;
        case 0x141560u: goto label_141560;
        case 0x141564u: goto label_141564;
        case 0x141568u: goto label_141568;
        case 0x14156cu: goto label_14156c;
        case 0x141570u: goto label_141570;
        case 0x141574u: goto label_141574;
        case 0x141578u: goto label_141578;
        case 0x14157cu: goto label_14157c;
        case 0x141580u: goto label_141580;
        case 0x141584u: goto label_141584;
        case 0x141588u: goto label_141588;
        case 0x14158cu: goto label_14158c;
        case 0x141590u: goto label_141590;
        case 0x141594u: goto label_141594;
        case 0x141598u: goto label_141598;
        case 0x14159cu: goto label_14159c;
        case 0x1415a0u: goto label_1415a0;
        case 0x1415a4u: goto label_1415a4;
        case 0x1415a8u: goto label_1415a8;
        case 0x1415acu: goto label_1415ac;
        case 0x1415b0u: goto label_1415b0;
        case 0x1415b4u: goto label_1415b4;
        case 0x1415b8u: goto label_1415b8;
        case 0x1415bcu: goto label_1415bc;
        case 0x1415c0u: goto label_1415c0;
        case 0x1415c4u: goto label_1415c4;
        case 0x1415c8u: goto label_1415c8;
        case 0x1415ccu: goto label_1415cc;
        case 0x1415d0u: goto label_1415d0;
        case 0x1415d4u: goto label_1415d4;
        case 0x1415d8u: goto label_1415d8;
        case 0x1415dcu: goto label_1415dc;
        case 0x1415e0u: goto label_1415e0;
        case 0x1415e4u: goto label_1415e4;
        case 0x1415e8u: goto label_1415e8;
        case 0x1415ecu: goto label_1415ec;
        case 0x1415f0u: goto label_1415f0;
        case 0x1415f4u: goto label_1415f4;
        case 0x1415f8u: goto label_1415f8;
        case 0x1415fcu: goto label_1415fc;
        case 0x141600u: goto label_141600;
        case 0x141604u: goto label_141604;
        case 0x141608u: goto label_141608;
        case 0x14160cu: goto label_14160c;
        case 0x141610u: goto label_141610;
        case 0x141614u: goto label_141614;
        case 0x141618u: goto label_141618;
        case 0x14161cu: goto label_14161c;
        case 0x141620u: goto label_141620;
        case 0x141624u: goto label_141624;
        case 0x141628u: goto label_141628;
        case 0x14162cu: goto label_14162c;
        case 0x141630u: goto label_141630;
        case 0x141634u: goto label_141634;
        case 0x141638u: goto label_141638;
        case 0x14163cu: goto label_14163c;
        case 0x141640u: goto label_141640;
        case 0x141644u: goto label_141644;
        case 0x141648u: goto label_141648;
        case 0x14164cu: goto label_14164c;
        case 0x141650u: goto label_141650;
        case 0x141654u: goto label_141654;
        case 0x141658u: goto label_141658;
        case 0x14165cu: goto label_14165c;
        case 0x141660u: goto label_141660;
        case 0x141664u: goto label_141664;
        case 0x141668u: goto label_141668;
        case 0x14166cu: goto label_14166c;
        case 0x141670u: goto label_141670;
        case 0x141674u: goto label_141674;
        case 0x141678u: goto label_141678;
        case 0x14167cu: goto label_14167c;
        case 0x141680u: goto label_141680;
        case 0x141684u: goto label_141684;
        case 0x141688u: goto label_141688;
        case 0x14168cu: goto label_14168c;
        case 0x141690u: goto label_141690;
        case 0x141694u: goto label_141694;
        case 0x141698u: goto label_141698;
        case 0x14169cu: goto label_14169c;
        case 0x1416a0u: goto label_1416a0;
        case 0x1416a4u: goto label_1416a4;
        case 0x1416a8u: goto label_1416a8;
        case 0x1416acu: goto label_1416ac;
        case 0x1416b0u: goto label_1416b0;
        case 0x1416b4u: goto label_1416b4;
        case 0x1416b8u: goto label_1416b8;
        case 0x1416bcu: goto label_1416bc;
        case 0x1416c0u: goto label_1416c0;
        case 0x1416c4u: goto label_1416c4;
        case 0x1416c8u: goto label_1416c8;
        case 0x1416ccu: goto label_1416cc;
        case 0x1416d0u: goto label_1416d0;
        case 0x1416d4u: goto label_1416d4;
        case 0x1416d8u: goto label_1416d8;
        case 0x1416dcu: goto label_1416dc;
        case 0x1416e0u: goto label_1416e0;
        case 0x1416e4u: goto label_1416e4;
        case 0x1416e8u: goto label_1416e8;
        case 0x1416ecu: goto label_1416ec;
        case 0x1416f0u: goto label_1416f0;
        case 0x1416f4u: goto label_1416f4;
        case 0x1416f8u: goto label_1416f8;
        case 0x1416fcu: goto label_1416fc;
        case 0x141700u: goto label_141700;
        case 0x141704u: goto label_141704;
        case 0x141708u: goto label_141708;
        case 0x14170cu: goto label_14170c;
        case 0x141710u: goto label_141710;
        case 0x141714u: goto label_141714;
        case 0x141718u: goto label_141718;
        case 0x14171cu: goto label_14171c;
        case 0x141720u: goto label_141720;
        case 0x141724u: goto label_141724;
        case 0x141728u: goto label_141728;
        case 0x14172cu: goto label_14172c;
        case 0x141730u: goto label_141730;
        case 0x141734u: goto label_141734;
        case 0x141738u: goto label_141738;
        case 0x14173cu: goto label_14173c;
        case 0x141740u: goto label_141740;
        case 0x141744u: goto label_141744;
        case 0x141748u: goto label_141748;
        case 0x14174cu: goto label_14174c;
        case 0x141750u: goto label_141750;
        case 0x141754u: goto label_141754;
        case 0x141758u: goto label_141758;
        case 0x14175cu: goto label_14175c;
        case 0x141760u: goto label_141760;
        case 0x141764u: goto label_141764;
        case 0x141768u: goto label_141768;
        case 0x14176cu: goto label_14176c;
        case 0x141770u: goto label_141770;
        case 0x141774u: goto label_141774;
        case 0x141778u: goto label_141778;
        case 0x14177cu: goto label_14177c;
        case 0x141780u: goto label_141780;
        case 0x141784u: goto label_141784;
        case 0x141788u: goto label_141788;
        case 0x14178cu: goto label_14178c;
        case 0x141790u: goto label_141790;
        case 0x141794u: goto label_141794;
        case 0x141798u: goto label_141798;
        case 0x14179cu: goto label_14179c;
        case 0x1417a0u: goto label_1417a0;
        case 0x1417a4u: goto label_1417a4;
        case 0x1417a8u: goto label_1417a8;
        case 0x1417acu: goto label_1417ac;
        case 0x1417b0u: goto label_1417b0;
        case 0x1417b4u: goto label_1417b4;
        case 0x1417b8u: goto label_1417b8;
        case 0x1417bcu: goto label_1417bc;
        case 0x1417c0u: goto label_1417c0;
        case 0x1417c4u: goto label_1417c4;
        case 0x1417c8u: goto label_1417c8;
        case 0x1417ccu: goto label_1417cc;
        case 0x1417d0u: goto label_1417d0;
        case 0x1417d4u: goto label_1417d4;
        case 0x1417d8u: goto label_1417d8;
        case 0x1417dcu: goto label_1417dc;
        case 0x1417e0u: goto label_1417e0;
        case 0x1417e4u: goto label_1417e4;
        case 0x1417e8u: goto label_1417e8;
        case 0x1417ecu: goto label_1417ec;
        case 0x1417f0u: goto label_1417f0;
        case 0x1417f4u: goto label_1417f4;
        case 0x1417f8u: goto label_1417f8;
        case 0x1417fcu: goto label_1417fc;
        case 0x141800u: goto label_141800;
        case 0x141804u: goto label_141804;
        case 0x141808u: goto label_141808;
        case 0x14180cu: goto label_14180c;
        case 0x141810u: goto label_141810;
        case 0x141814u: goto label_141814;
        case 0x141818u: goto label_141818;
        case 0x14181cu: goto label_14181c;
        case 0x141820u: goto label_141820;
        case 0x141824u: goto label_141824;
        case 0x141828u: goto label_141828;
        case 0x14182cu: goto label_14182c;
        case 0x141830u: goto label_141830;
        case 0x141834u: goto label_141834;
        case 0x141838u: goto label_141838;
        case 0x14183cu: goto label_14183c;
        case 0x141840u: goto label_141840;
        case 0x141844u: goto label_141844;
        case 0x141848u: goto label_141848;
        case 0x14184cu: goto label_14184c;
        case 0x141850u: goto label_141850;
        case 0x141854u: goto label_141854;
        case 0x141858u: goto label_141858;
        case 0x14185cu: goto label_14185c;
        case 0x141860u: goto label_141860;
        case 0x141864u: goto label_141864;
        case 0x141868u: goto label_141868;
        case 0x14186cu: goto label_14186c;
        case 0x141870u: goto label_141870;
        case 0x141874u: goto label_141874;
        case 0x141878u: goto label_141878;
        case 0x14187cu: goto label_14187c;
        case 0x141880u: goto label_141880;
        case 0x141884u: goto label_141884;
        case 0x141888u: goto label_141888;
        case 0x14188cu: goto label_14188c;
        case 0x141890u: goto label_141890;
        case 0x141894u: goto label_141894;
        case 0x141898u: goto label_141898;
        case 0x14189cu: goto label_14189c;
        case 0x1418a0u: goto label_1418a0;
        case 0x1418a4u: goto label_1418a4;
        case 0x1418a8u: goto label_1418a8;
        case 0x1418acu: goto label_1418ac;
        case 0x1418b0u: goto label_1418b0;
        case 0x1418b4u: goto label_1418b4;
        case 0x1418b8u: goto label_1418b8;
        case 0x1418bcu: goto label_1418bc;
        case 0x1418c0u: goto label_1418c0;
        case 0x1418c4u: goto label_1418c4;
        case 0x1418c8u: goto label_1418c8;
        case 0x1418ccu: goto label_1418cc;
        case 0x1418d0u: goto label_1418d0;
        case 0x1418d4u: goto label_1418d4;
        case 0x1418d8u: goto label_1418d8;
        case 0x1418dcu: goto label_1418dc;
        case 0x1418e0u: goto label_1418e0;
        case 0x1418e4u: goto label_1418e4;
        case 0x1418e8u: goto label_1418e8;
        case 0x1418ecu: goto label_1418ec;
        case 0x1418f0u: goto label_1418f0;
        case 0x1418f4u: goto label_1418f4;
        case 0x1418f8u: goto label_1418f8;
        case 0x1418fcu: goto label_1418fc;
        case 0x141900u: goto label_141900;
        case 0x141904u: goto label_141904;
        case 0x141908u: goto label_141908;
        case 0x14190cu: goto label_14190c;
        case 0x141910u: goto label_141910;
        case 0x141914u: goto label_141914;
        case 0x141918u: goto label_141918;
        case 0x14191cu: goto label_14191c;
        case 0x141920u: goto label_141920;
        case 0x141924u: goto label_141924;
        case 0x141928u: goto label_141928;
        case 0x14192cu: goto label_14192c;
        case 0x141930u: goto label_141930;
        case 0x141934u: goto label_141934;
        case 0x141938u: goto label_141938;
        case 0x14193cu: goto label_14193c;
        case 0x141940u: goto label_141940;
        case 0x141944u: goto label_141944;
        case 0x141948u: goto label_141948;
        case 0x14194cu: goto label_14194c;
        case 0x141950u: goto label_141950;
        case 0x141954u: goto label_141954;
        case 0x141958u: goto label_141958;
        case 0x14195cu: goto label_14195c;
        case 0x141960u: goto label_141960;
        case 0x141964u: goto label_141964;
        case 0x141968u: goto label_141968;
        case 0x14196cu: goto label_14196c;
        case 0x141970u: goto label_141970;
        case 0x141974u: goto label_141974;
        case 0x141978u: goto label_141978;
        case 0x14197cu: goto label_14197c;
        case 0x141980u: goto label_141980;
        case 0x141984u: goto label_141984;
        case 0x141988u: goto label_141988;
        case 0x14198cu: goto label_14198c;
        case 0x141990u: goto label_141990;
        case 0x141994u: goto label_141994;
        case 0x141998u: goto label_141998;
        case 0x14199cu: goto label_14199c;
        case 0x1419a0u: goto label_1419a0;
        case 0x1419a4u: goto label_1419a4;
        case 0x1419a8u: goto label_1419a8;
        case 0x1419acu: goto label_1419ac;
        case 0x1419b0u: goto label_1419b0;
        case 0x1419b4u: goto label_1419b4;
        case 0x1419b8u: goto label_1419b8;
        case 0x1419bcu: goto label_1419bc;
        case 0x1419c0u: goto label_1419c0;
        case 0x1419c4u: goto label_1419c4;
        case 0x1419c8u: goto label_1419c8;
        case 0x1419ccu: goto label_1419cc;
        case 0x1419d0u: goto label_1419d0;
        case 0x1419d4u: goto label_1419d4;
        case 0x1419d8u: goto label_1419d8;
        case 0x1419dcu: goto label_1419dc;
        case 0x1419e0u: goto label_1419e0;
        case 0x1419e4u: goto label_1419e4;
        case 0x1419e8u: goto label_1419e8;
        case 0x1419ecu: goto label_1419ec;
        case 0x1419f0u: goto label_1419f0;
        case 0x1419f4u: goto label_1419f4;
        case 0x1419f8u: goto label_1419f8;
        case 0x1419fcu: goto label_1419fc;
        case 0x141a00u: goto label_141a00;
        case 0x141a04u: goto label_141a04;
        case 0x141a08u: goto label_141a08;
        case 0x141a0cu: goto label_141a0c;
        case 0x141a10u: goto label_141a10;
        case 0x141a14u: goto label_141a14;
        case 0x141a18u: goto label_141a18;
        case 0x141a1cu: goto label_141a1c;
        case 0x141a20u: goto label_141a20;
        case 0x141a24u: goto label_141a24;
        case 0x141a28u: goto label_141a28;
        case 0x141a2cu: goto label_141a2c;
        case 0x141a30u: goto label_141a30;
        case 0x141a34u: goto label_141a34;
        case 0x141a38u: goto label_141a38;
        case 0x141a3cu: goto label_141a3c;
        case 0x141a40u: goto label_141a40;
        case 0x141a44u: goto label_141a44;
        case 0x141a48u: goto label_141a48;
        case 0x141a4cu: goto label_141a4c;
        case 0x141a50u: goto label_141a50;
        case 0x141a54u: goto label_141a54;
        case 0x141a58u: goto label_141a58;
        case 0x141a5cu: goto label_141a5c;
        case 0x141a60u: goto label_141a60;
        case 0x141a64u: goto label_141a64;
        case 0x141a68u: goto label_141a68;
        case 0x141a6cu: goto label_141a6c;
        default: break;
    }

    ctx->pc = 0x141510u;

label_141510:
    // 0x141510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x141510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_141514:
    // 0x141514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x141514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_141518:
    // 0x141518: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x141518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14151c:
    // 0x14151c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_141520:
    // 0x141520: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x141520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_141524:
    // 0x141524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_141528:
    // 0x141528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14152c:
    // 0x14152c: 0x8cc400dc  lw          $a0, 0xDC($a2)
    ctx->pc = 0x14152cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
label_141530:
    // 0x141530: 0xc062804  jal         func_18A010
label_141534:
    if (ctx->pc == 0x141534u) {
        ctx->pc = 0x141534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141530u;
        // 0x141534: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141538u;
        goto label_141538;
    }
    ctx->pc = 0x141530u;
    SET_GPR_U32(ctx, 31, 0x141538u);
    ctx->pc = 0x141534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141530u;
    // 0x141534: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x141530u, 0x141538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141538u;
label_141538:
    // 0x141538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14153c:
    // 0x14153c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_141540:
    if (ctx->pc == 0x141540u) {
        ctx->pc = 0x141540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14153Cu;
        // 0x141540: 0x8e430238  lw          $v1, 0x238($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141544u;
        goto label_141544;
    }
    ctx->pc = 0x14153Cu;
    {
        const bool branch_taken_0x14153c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14153c) {
            ctx->pc = 0x141540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14153Cu;
            // 0x141540: 0x8e430238  lw          $v1, 0x238($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14154Cu;
            goto label_14154c;
        }
    }
    ctx->pc = 0x141544u;
label_141544:
    // 0x141544: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_141548:
    if (ctx->pc == 0x141548u) {
        ctx->pc = 0x141548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141544u;
        // 0x141548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14154Cu;
        goto label_14154c;
    }
    ctx->pc = 0x141544u;
    {
        const bool branch_taken_0x141544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141544u;
        // 0x141548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141544) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x14154Cu;
label_14154c:
    // 0x14154c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x14154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_141550:
    // 0x141550: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_141554:
    if (ctx->pc == 0x141554u) {
        ctx->pc = 0x141554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141550u;
        // 0x141554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141558u;
        goto label_141558;
    }
    ctx->pc = 0x141550u;
    {
        const bool branch_taken_0x141550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141550) {
            ctx->pc = 0x141554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141550u;
            // 0x141554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141568u;
            goto label_141568;
        }
    }
    ctx->pc = 0x141558u;
label_141558:
    // 0x141558: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x141558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_14155c:
    // 0x14155c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_141560:
    if (ctx->pc == 0x141560u) {
        ctx->pc = 0x141560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14155Cu;
        // 0x141560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141564u;
        goto label_141564;
    }
    ctx->pc = 0x14155Cu;
    {
        const bool branch_taken_0x14155c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14155c) {
            ctx->pc = 0x141560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14155Cu;
            // 0x141560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141570u;
            goto label_141570;
        }
    }
    ctx->pc = 0x141564u;
label_141564:
    // 0x141564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141568:
    // 0x141568: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_14156c:
    if (ctx->pc == 0x14156Cu) {
        ctx->pc = 0x14156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141568u;
        // 0x14156c: 0xae420214  sw          $v0, 0x214($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141570u;
        goto label_141570;
    }
    ctx->pc = 0x141568u;
    {
        const bool branch_taken_0x141568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141568u;
        // 0x14156c: 0xae420214  sw          $v0, 0x214($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141568) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x141570u;
label_141570:
    // 0x141570: 0xc04f71c  jal         func_13DC70
label_141574:
    if (ctx->pc == 0x141574u) {
        ctx->pc = 0x141578u;
        goto label_141578;
    }
    ctx->pc = 0x141570u;
    SET_GPR_U32(ctx, 31, 0x141578u);
    ctx->pc = 0x13DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC70u, 0x141570u, 0x141578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141578u;
label_141578:
    // 0x141578: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x141578u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_14157c:
    // 0x14157c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14157cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141580:
    // 0x141580: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x141580u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
label_141584:
    // 0x141584: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x141584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_141588:
    // 0x141588: 0xc063720  jal         func_18DC80
label_14158c:
    if (ctx->pc == 0x14158Cu) {
        ctx->pc = 0x14158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141588u;
        // 0x14158c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141590u;
        goto label_141590;
    }
    ctx->pc = 0x141588u;
    SET_GPR_U32(ctx, 31, 0x141590u);
    ctx->pc = 0x14158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141588u;
    // 0x14158c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC80u, 0x141588u, 0x141590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141590u;
label_141590:
    // 0x141590: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_141594:
    if (ctx->pc == 0x141594u) {
        ctx->pc = 0x141594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141590u;
        // 0x141594: 0x960600ea  lhu         $a2, 0xEA($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141598u;
        goto label_141598;
    }
    ctx->pc = 0x141590u;
    {
        const bool branch_taken_0x141590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141590) {
            ctx->pc = 0x141594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141590u;
            // 0x141594: 0x960600ea  lhu         $a2, 0xEA($s0) (Delay Slot)
            SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1415A0u;
            goto label_1415a0;
        }
    }
    ctx->pc = 0x141598u;
label_141598:
    // 0x141598: 0x1000009d  b           . + 4 + (0x9D << 2)
label_14159c:
    if (ctx->pc == 0x14159Cu) {
        ctx->pc = 0x14159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141598u;
        // 0x14159c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415A0u;
        goto label_1415a0;
    }
    ctx->pc = 0x141598u;
    {
        const bool branch_taken_0x141598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141598u;
        // 0x14159c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141598) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x1415A0u;
label_1415a0:
    // 0x1415a0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1415a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1415a4:
    // 0x1415a4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1415a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1415a8:
    // 0x1415a8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1415a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1415ac:
    // 0x1415ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1415acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1415b0:
    // 0x1415b0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1415b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1415b4:
    // 0x1415b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1415b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1415b8:
    // 0x1415b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1415b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1415bc:
    // 0x1415bc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1415bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1415c0:
    // 0x1415c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1415c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1415c4:
    // 0x1415c4: 0x12630024  beq         $s3, $v1, . + 4 + (0x24 << 2)
label_1415c8:
    if (ctx->pc == 0x1415C8u) {
        ctx->pc = 0x1415C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415C4u;
        // 0x1415c8: 0x443021  addu        $a2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415CCu;
        goto label_1415cc;
    }
    ctx->pc = 0x1415C4u;
    {
        const bool branch_taken_0x1415c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x1415C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415C4u;
        // 0x1415c8: 0x443021  addu        $a2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415c4) {
            ctx->pc = 0x141658u;
            goto label_141658;
        }
    }
    ctx->pc = 0x1415CCu;
label_1415cc:
    // 0x1415cc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1415ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1415d0:
    // 0x1415d0: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
label_1415d4:
    if (ctx->pc == 0x1415D4u) {
        ctx->pc = 0x1415D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415D0u;
        // 0x1415d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415D8u;
        goto label_1415d8;
    }
    ctx->pc = 0x1415D0u;
    {
        const bool branch_taken_0x1415d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1415D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415D0u;
        // 0x1415d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415d0) {
            ctx->pc = 0x141658u;
            goto label_141658;
        }
    }
    ctx->pc = 0x1415D8u;
label_1415d8:
    // 0x1415d8: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1415d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_1415dc:
    // 0x1415dc: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
label_1415e0:
    if (ctx->pc == 0x1415E0u) {
        ctx->pc = 0x1415E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415DCu;
        // 0x1415e0: 0x2664fff9  addiu       $a0, $s3, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415E4u;
        goto label_1415e4;
    }
    ctx->pc = 0x1415DCu;
    {
        const bool branch_taken_0x1415dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1415E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415DCu;
        // 0x1415e0: 0x2664fff9  addiu       $a0, $s3, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415dc) {
            ctx->pc = 0x141628u;
            goto label_141628;
        }
    }
    ctx->pc = 0x1415E4u;
label_1415e4:
    // 0x1415e4: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_1415e8:
    if (ctx->pc == 0x1415E8u) {
        ctx->pc = 0x1415E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415E4u;
        // 0x1415e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415ECu;
        goto label_1415ec;
    }
    ctx->pc = 0x1415E4u;
    {
        const bool branch_taken_0x1415e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1415E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415E4u;
        // 0x1415e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415e4) {
            ctx->pc = 0x141604u;
            goto label_141604;
        }
    }
    ctx->pc = 0x1415ECu;
label_1415ec:
    // 0x1415ec: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1415ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_1415f0:
    // 0x1415f0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1415f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_1415f4:
    // 0x1415f4: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x1415f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_1415f8:
    // 0x1415f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1415fc:
    if (ctx->pc == 0x1415FCu) {
        ctx->pc = 0x141600u;
        goto label_141600;
    }
    ctx->pc = 0x1415F8u;
    {
        const bool branch_taken_0x1415f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1415f8) {
            ctx->pc = 0x141604u;
            goto label_141604;
        }
    }
    ctx->pc = 0x141600u;
label_141600:
    // 0x141600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141604:
    // 0x141604: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_141608:
    if (ctx->pc == 0x141608u) {
        ctx->pc = 0x14160Cu;
        goto label_14160c;
    }
    ctx->pc = 0x141604u;
    {
        const bool branch_taken_0x141604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141604) {
            ctx->pc = 0x141628u;
            goto label_141628;
        }
    }
    ctx->pc = 0x14160Cu;
label_14160c:
    // 0x14160c: 0x90c30007  lbu         $v1, 0x7($a2)
    ctx->pc = 0x14160cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
label_141610:
    // 0x141610: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x141610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_141614:
    // 0x141614: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x141614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_141618:
    // 0x141618: 0x38840  sll         $s1, $v1, 1
    ctx->pc = 0x141618u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14161c:
    // 0x14161c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x14161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_141620:
    // 0x141620: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_141624:
    if (ctx->pc == 0x141624u) {
        ctx->pc = 0x141628u;
        goto label_141628;
    }
    ctx->pc = 0x141620u;
    {
        const bool branch_taken_0x141620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141620) {
            ctx->pc = 0x14160Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14160c;
        }
    }
    ctx->pc = 0x141628u;
label_141628:
    // 0x141628: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x141628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14162c:
    // 0x14162c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x14162cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_141630:
    // 0x141630: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_141634:
    if (ctx->pc == 0x141634u) {
        ctx->pc = 0x141638u;
        goto label_141638;
    }
    ctx->pc = 0x141630u;
    {
        const bool branch_taken_0x141630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141630) {
            ctx->pc = 0x141658u;
            goto label_141658;
        }
    }
    ctx->pc = 0x141638u;
label_141638:
    // 0x141638: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x141638u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_14163c:
    // 0x14163c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14163cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141640:
    // 0x141640: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x141640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_141644:
    // 0x141644: 0x38840  sll         $s1, $v1, 1
    ctx->pc = 0x141644u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_141648:
    // 0x141648: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x141648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_14164c:
    // 0x14164c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_141650:
    if (ctx->pc == 0x141650u) {
        ctx->pc = 0x141654u;
        goto label_141654;
    }
    ctx->pc = 0x14164Cu;
    {
        const bool branch_taken_0x14164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14164c) {
            ctx->pc = 0x141638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141638;
        }
    }
    ctx->pc = 0x141654u;
label_141654:
    // 0x141654: 0x0  nop
    ctx->pc = 0x141654u;
    // NOP
label_141658:
    // 0x141658: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x141658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_14165c:
    // 0x14165c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x14165cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_141660:
    // 0x141660: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x141660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141664:
    // 0x141664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x141664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141668:
    // 0x141668: 0xc04bbec  jal         func_12EFB0
label_14166c:
    if (ctx->pc == 0x14166Cu) {
        ctx->pc = 0x14166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141668u;
        // 0x14166c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x141670u;
        goto label_141670;
    }
    ctx->pc = 0x141668u;
    SET_GPR_U32(ctx, 31, 0x141670u);
    ctx->pc = 0x14166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141668u;
    // 0x14166c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x141668u, 0x141670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141670u;
label_141670:
    // 0x141670: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x141670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_141674:
    // 0x141674: 0x8e430208  lw          $v1, 0x208($s2)
    ctx->pc = 0x141674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
label_141678:
    // 0x141678: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x141678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14167c:
    // 0x14167c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x14167cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_141680:
    // 0x141680: 0x50600064  beql        $v1, $zero, . + 4 + (0x64 << 2)
label_141684:
    if (ctx->pc == 0x141684u) {
        ctx->pc = 0x141684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141680u;
        // 0x141684: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141688u;
        goto label_141688;
    }
    ctx->pc = 0x141680u;
    {
        const bool branch_taken_0x141680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141680) {
            ctx->pc = 0x141684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141680u;
            // 0x141684: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141814u;
            goto label_141814;
        }
    }
    ctx->pc = 0x141688u;
label_141688:
    // 0x141688: 0xc04f82c  jal         func_13E0B0
label_14168c:
    if (ctx->pc == 0x14168Cu) {
        ctx->pc = 0x14168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141688u;
        // 0x14168c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141690u;
        goto label_141690;
    }
    ctx->pc = 0x141688u;
    SET_GPR_U32(ctx, 31, 0x141690u);
    ctx->pc = 0x14168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141688u;
    // 0x14168c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E0B0u, 0x141688u, 0x141690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141690u;
label_141690:
    // 0x141690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x141690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_141694:
    // 0x141694: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_141698:
    if (ctx->pc == 0x141698u) {
        ctx->pc = 0x141698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141694u;
        // 0x141698: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14169Cu;
        goto label_14169c;
    }
    ctx->pc = 0x141694u;
    {
        const bool branch_taken_0x141694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x141694) {
            ctx->pc = 0x141698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141694u;
            // 0x141698: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1416D4u;
            goto label_1416d4;
        }
    }
    ctx->pc = 0x14169Cu;
label_14169c:
    // 0x14169c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x14169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1416a0:
    // 0x1416a0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1416a4:
    if (ctx->pc == 0x1416A4u) {
        ctx->pc = 0x1416A8u;
        goto label_1416a8;
    }
    ctx->pc = 0x1416A0u;
    {
        const bool branch_taken_0x1416a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1416a0) {
            ctx->pc = 0x1416B0u;
            goto label_1416b0;
        }
    }
    ctx->pc = 0x1416A8u;
label_1416a8:
    // 0x1416a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1416ac:
    if (ctx->pc == 0x1416ACu) {
        ctx->pc = 0x1416ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416A8u;
        // 0x1416ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416B0u;
        goto label_1416b0;
    }
    ctx->pc = 0x1416A8u;
    {
        const bool branch_taken_0x1416a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1416ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416A8u;
        // 0x1416ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416a8) {
            ctx->pc = 0x1416D0u;
            goto label_1416d0;
        }
    }
    ctx->pc = 0x1416B0u;
label_1416b0:
    // 0x1416b0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1416b4:
    if (ctx->pc == 0x1416B4u) {
        ctx->pc = 0x1416B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416B0u;
        // 0x1416b4: 0x8e420208  lw          $v0, 0x208($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416B8u;
        goto label_1416b8;
    }
    ctx->pc = 0x1416B0u;
    {
        const bool branch_taken_0x1416b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1416b0) {
            ctx->pc = 0x1416B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1416B0u;
            // 0x1416b4: 0x8e420208  lw          $v0, 0x208($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1416C0u;
            goto label_1416c0;
        }
    }
    ctx->pc = 0x1416B8u;
label_1416b8:
    // 0x1416b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1416bc:
    if (ctx->pc == 0x1416BCu) {
        ctx->pc = 0x1416BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416B8u;
        // 0x1416bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416C0u;
        goto label_1416c0;
    }
    ctx->pc = 0x1416B8u;
    {
        const bool branch_taken_0x1416b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1416BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416B8u;
        // 0x1416bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416b8) {
            ctx->pc = 0x1416D0u;
            goto label_1416d0;
        }
    }
    ctx->pc = 0x1416C0u;
label_1416c0:
    // 0x1416c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1416c4:
    if (ctx->pc == 0x1416C4u) {
        ctx->pc = 0x1416C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416C0u;
        // 0x1416c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416C8u;
        goto label_1416c8;
    }
    ctx->pc = 0x1416C0u;
    {
        const bool branch_taken_0x1416c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1416c0) {
            ctx->pc = 0x1416C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1416C0u;
            // 0x1416c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1416D0u;
            goto label_1416d0;
        }
    }
    ctx->pc = 0x1416C8u;
label_1416c8:
    // 0x1416c8: 0xc04f83c  jal         func_13E0F0
label_1416cc:
    if (ctx->pc == 0x1416CCu) {
        ctx->pc = 0x1416CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416C8u;
        // 0x1416cc: 0x9044ffff  lbu         $a0, -0x1($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416D0u;
        goto label_1416d0;
    }
    ctx->pc = 0x1416C8u;
    SET_GPR_U32(ctx, 31, 0x1416D0u);
    ctx->pc = 0x1416CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1416C8u;
    // 0x1416cc: 0x9044ffff  lbu         $a0, -0x1($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E0F0u, 0x1416C8u, 0x1416D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1416D0u;
label_1416d0:
    // 0x1416d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1416d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1416d4:
    // 0x1416d4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_1416d8:
    if (ctx->pc == 0x1416D8u) {
        ctx->pc = 0x1416D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416D4u;
        // 0x1416d8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416DCu;
        goto label_1416dc;
    }
    ctx->pc = 0x1416D4u;
    {
        const bool branch_taken_0x1416d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1416d4) {
            ctx->pc = 0x1416D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1416D4u;
            // 0x1416d8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1416E8u;
            goto label_1416e8;
        }
    }
    ctx->pc = 0x1416DCu;
label_1416dc:
    // 0x1416dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1416dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1416e0:
    // 0x1416e0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1416e4:
    if (ctx->pc == 0x1416E4u) {
        ctx->pc = 0x1416E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416E0u;
        // 0x1416e4: 0xae420214  sw          $v0, 0x214($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416E8u;
        goto label_1416e8;
    }
    ctx->pc = 0x1416E0u;
    {
        const bool branch_taken_0x1416e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1416E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416E0u;
        // 0x1416e4: 0xae420214  sw          $v0, 0x214($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416e0) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x1416E8u;
label_1416e8:
    // 0x1416e8: 0x52630013  beql        $s3, $v1, . + 4 + (0x13 << 2)
label_1416ec:
    if (ctx->pc == 0x1416ECu) {
        ctx->pc = 0x1416ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416E8u;
        // 0x1416ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416F0u;
        goto label_1416f0;
    }
    ctx->pc = 0x1416E8u;
    {
        const bool branch_taken_0x1416e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x1416e8) {
            ctx->pc = 0x1416ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1416E8u;
            // 0x1416ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141738u;
            goto label_141738;
        }
    }
    ctx->pc = 0x1416F0u;
label_1416f0:
    // 0x1416f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1416f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1416f4:
    // 0x1416f4: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
label_1416f8:
    if (ctx->pc == 0x1416F8u) {
        ctx->pc = 0x1416F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416F4u;
        // 0x1416f8: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416FCu;
        goto label_1416fc;
    }
    ctx->pc = 0x1416F4u;
    {
        const bool branch_taken_0x1416f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1416f4) {
            ctx->pc = 0x1416F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1416F4u;
            // 0x1416f8: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x141720u;
            goto label_141720;
        }
    }
    ctx->pc = 0x1416FCu;
label_1416fc:
    // 0x1416fc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_141700:
    if (ctx->pc == 0x141700u) {
        ctx->pc = 0x141700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416FCu;
        // 0x141700: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x141704u;
        goto label_141704;
    }
    ctx->pc = 0x1416FCu;
    {
        const bool branch_taken_0x1416fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1416fc) {
            ctx->pc = 0x141700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1416FCu;
            // 0x141700: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14170Cu;
            goto label_14170c;
        }
    }
    ctx->pc = 0x141704u;
label_141704:
    // 0x141704: 0x1000000b  b           . + 4 + (0xB << 2)
label_141708:
    if (ctx->pc == 0x141708u) {
        ctx->pc = 0x14170Cu;
        goto label_14170c;
    }
    ctx->pc = 0x141704u;
    {
        const bool branch_taken_0x141704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141704) {
            ctx->pc = 0x141734u;
            goto label_141734;
        }
    }
    ctx->pc = 0x14170Cu;
label_14170c:
    // 0x14170c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_141710:
    if (ctx->pc == 0x141710u) {
        ctx->pc = 0x141714u;
        goto label_141714;
    }
    ctx->pc = 0x14170Cu;
    {
        const bool branch_taken_0x14170c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14170c) {
            ctx->pc = 0x141734u;
            goto label_141734;
        }
    }
    ctx->pc = 0x141714u;
label_141714:
    // 0x141714: 0xae440214  sw          $a0, 0x214($s2)
    ctx->pc = 0x141714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 4));
label_141718:
    // 0x141718: 0x1000003d  b           . + 4 + (0x3D << 2)
label_14171c:
    if (ctx->pc == 0x14171Cu) {
        ctx->pc = 0x14171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141718u;
        // 0x14171c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141720u;
        goto label_141720;
    }
    ctx->pc = 0x141718u;
    {
        const bool branch_taken_0x141718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141718u;
        // 0x14171c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141718) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x141720u;
label_141720:
    // 0x141720: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_141724:
    if (ctx->pc == 0x141724u) {
        ctx->pc = 0x141728u;
        goto label_141728;
    }
    ctx->pc = 0x141720u;
    {
        const bool branch_taken_0x141720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141720) {
            ctx->pc = 0x141734u;
            goto label_141734;
        }
    }
    ctx->pc = 0x141728u;
label_141728:
    // 0x141728: 0xae440214  sw          $a0, 0x214($s2)
    ctx->pc = 0x141728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 4));
label_14172c:
    // 0x14172c: 0x10000038  b           . + 4 + (0x38 << 2)
label_141730:
    if (ctx->pc == 0x141730u) {
        ctx->pc = 0x141730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14172Cu;
        // 0x141730: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141734u;
        goto label_141734;
    }
    ctx->pc = 0x14172Cu;
    {
        const bool branch_taken_0x14172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14172Cu;
        // 0x141730: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14172c) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x141734u;
label_141734:
    // 0x141734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141738:
    // 0x141738: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_14173c:
    if (ctx->pc == 0x14173Cu) {
        ctx->pc = 0x14173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141738u;
        // 0x14173c: 0x9243008c  lbu         $v1, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141740u;
        goto label_141740;
    }
    ctx->pc = 0x141738u;
    {
        const bool branch_taken_0x141738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x141738) {
            ctx->pc = 0x14173Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141738u;
            // 0x14173c: 0x9243008c  lbu         $v1, 0x8C($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141750u;
            goto label_141750;
        }
    }
    ctx->pc = 0x141740u;
label_141740:
    // 0x141740: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x141740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_141744:
    // 0x141744: 0x56630032  bnel        $s3, $v1, . + 4 + (0x32 << 2)
label_141748:
    if (ctx->pc == 0x141748u) {
        ctx->pc = 0x141748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141744u;
        // 0x141748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14174Cu;
        goto label_14174c;
    }
    ctx->pc = 0x141744u;
    {
        const bool branch_taken_0x141744 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x141744) {
            ctx->pc = 0x141748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141744u;
            // 0x141748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x14174Cu;
label_14174c:
    // 0x14174c: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x14174cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_141750:
    // 0x141750: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x141750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_141754:
    // 0x141754: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_141758:
    if (ctx->pc == 0x141758u) {
        ctx->pc = 0x14175Cu;
        goto label_14175c;
    }
    ctx->pc = 0x141754u;
    {
        const bool branch_taken_0x141754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141754) {
            ctx->pc = 0x1417B4u;
            goto label_1417b4;
        }
    }
    ctx->pc = 0x14175Cu;
label_14175c:
    // 0x14175c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x14175cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_141760:
    // 0x141760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141764:
    // 0x141764: 0x8463db1c  lh          $v1, -0x24E4($v1)
    ctx->pc = 0x141764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957852)));
label_141768:
    // 0x141768: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
label_14176c:
    if (ctx->pc == 0x14176Cu) {
        ctx->pc = 0x14176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141768u;
        // 0x14176c: 0x2463002d  addiu       $v1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141770u;
        goto label_141770;
    }
    ctx->pc = 0x141768u;
    {
        const bool branch_taken_0x141768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x14176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141768u;
        // 0x14176c: 0x2463002d  addiu       $v1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141768) {
            ctx->pc = 0x141798u;
            goto label_141798;
        }
    }
    ctx->pc = 0x141770u;
label_141770:
    // 0x141770: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_141774:
    if (ctx->pc == 0x141774u) {
        ctx->pc = 0x141774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141770u;
        // 0x141774: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141778u;
        goto label_141778;
    }
    ctx->pc = 0x141770u;
    {
        const bool branch_taken_0x141770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141770) {
            ctx->pc = 0x141774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141770u;
            // 0x141774: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141780u;
            goto label_141780;
        }
    }
    ctx->pc = 0x141778u;
label_141778:
    // 0x141778: 0x10000024  b           . + 4 + (0x24 << 2)
label_14177c:
    if (ctx->pc == 0x14177Cu) {
        ctx->pc = 0x141780u;
        goto label_141780;
    }
    ctx->pc = 0x141778u;
    {
        const bool branch_taken_0x141778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141778) {
            ctx->pc = 0x14180Cu;
            goto label_14180c;
        }
    }
    ctx->pc = 0x141780u;
label_141780:
    // 0x141780: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x141780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_141784:
    // 0x141784: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_141788:
    if (ctx->pc == 0x141788u) {
        ctx->pc = 0x14178Cu;
        goto label_14178c;
    }
    ctx->pc = 0x141784u;
    {
        const bool branch_taken_0x141784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141784) {
            ctx->pc = 0x14180Cu;
            goto label_14180c;
        }
    }
    ctx->pc = 0x14178Cu;
label_14178c:
    // 0x14178c: 0xae440214  sw          $a0, 0x214($s2)
    ctx->pc = 0x14178cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 4));
label_141790:
    // 0x141790: 0x1000001f  b           . + 4 + (0x1F << 2)
label_141794:
    if (ctx->pc == 0x141794u) {
        ctx->pc = 0x141794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141790u;
        // 0x141794: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141798u;
        goto label_141798;
    }
    ctx->pc = 0x141790u;
    {
        const bool branch_taken_0x141790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141790u;
        // 0x141794: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141790) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x141798u;
label_141798:
    // 0x141798: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x141798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_14179c:
    // 0x14179c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x14179cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1417a0:
    // 0x1417a0: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_1417a4:
    if (ctx->pc == 0x1417A4u) {
        ctx->pc = 0x1417A8u;
        goto label_1417a8;
    }
    ctx->pc = 0x1417A0u;
    {
        const bool branch_taken_0x1417a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1417a0) {
            ctx->pc = 0x14180Cu;
            goto label_14180c;
        }
    }
    ctx->pc = 0x1417A8u;
label_1417a8:
    // 0x1417a8: 0xae440214  sw          $a0, 0x214($s2)
    ctx->pc = 0x1417a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 4));
label_1417ac:
    // 0x1417ac: 0x10000018  b           . + 4 + (0x18 << 2)
label_1417b0:
    if (ctx->pc == 0x1417B0u) {
        ctx->pc = 0x1417B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417ACu;
        // 0x1417b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1417B4u;
        goto label_1417b4;
    }
    ctx->pc = 0x1417ACu;
    {
        const bool branch_taken_0x1417ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1417B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417ACu;
        // 0x1417b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417ac) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x1417B4u;
label_1417b4:
    // 0x1417b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1417b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_1417b8:
    // 0x1417b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1417b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1417bc:
    // 0x1417bc: 0x8463db1e  lh          $v1, -0x24E2($v1)
    ctx->pc = 0x1417bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957854)));
label_1417c0:
    // 0x1417c0: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
label_1417c4:
    if (ctx->pc == 0x1417C4u) {
        ctx->pc = 0x1417C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417C0u;
        // 0x1417c4: 0x2463ffd3  addiu       $v1, $v1, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1417C8u;
        goto label_1417c8;
    }
    ctx->pc = 0x1417C0u;
    {
        const bool branch_taken_0x1417c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1417C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417C0u;
        // 0x1417c4: 0x2463ffd3  addiu       $v1, $v1, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417c0) {
            ctx->pc = 0x1417F0u;
            goto label_1417f0;
        }
    }
    ctx->pc = 0x1417C8u;
label_1417c8:
    // 0x1417c8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1417cc:
    if (ctx->pc == 0x1417CCu) {
        ctx->pc = 0x1417CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417C8u;
        // 0x1417cc: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1417D0u;
        goto label_1417d0;
    }
    ctx->pc = 0x1417C8u;
    {
        const bool branch_taken_0x1417c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1417c8) {
            ctx->pc = 0x1417CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1417C8u;
            // 0x1417cc: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1417D8u;
            goto label_1417d8;
        }
    }
    ctx->pc = 0x1417D0u;
label_1417d0:
    // 0x1417d0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1417d4:
    if (ctx->pc == 0x1417D4u) {
        ctx->pc = 0x1417D8u;
        goto label_1417d8;
    }
    ctx->pc = 0x1417D0u;
    {
        const bool branch_taken_0x1417d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1417d0) {
            ctx->pc = 0x14180Cu;
            goto label_14180c;
        }
    }
    ctx->pc = 0x1417D8u;
label_1417d8:
    // 0x1417d8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1417d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1417dc:
    // 0x1417dc: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_1417e0:
    if (ctx->pc == 0x1417E0u) {
        ctx->pc = 0x1417E4u;
        goto label_1417e4;
    }
    ctx->pc = 0x1417DCu;
    {
        const bool branch_taken_0x1417dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1417dc) {
            ctx->pc = 0x14180Cu;
            goto label_14180c;
        }
    }
    ctx->pc = 0x1417E4u;
label_1417e4:
    // 0x1417e4: 0xae440214  sw          $a0, 0x214($s2)
    ctx->pc = 0x1417e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 4));
label_1417e8:
    // 0x1417e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1417ec:
    if (ctx->pc == 0x1417ECu) {
        ctx->pc = 0x1417ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417E8u;
        // 0x1417ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1417F0u;
        goto label_1417f0;
    }
    ctx->pc = 0x1417E8u;
    {
        const bool branch_taken_0x1417e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1417ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417E8u;
        // 0x1417ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417e8) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x1417F0u;
label_1417f0:
    // 0x1417f0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x1417f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1417f4:
    // 0x1417f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1417f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1417f8:
    // 0x1417f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1417fc:
    if (ctx->pc == 0x1417FCu) {
        ctx->pc = 0x141800u;
        goto label_141800;
    }
    ctx->pc = 0x1417F8u;
    {
        const bool branch_taken_0x1417f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1417f8) {
            ctx->pc = 0x14180Cu;
            goto label_14180c;
        }
    }
    ctx->pc = 0x141800u;
label_141800:
    // 0x141800: 0xae440214  sw          $a0, 0x214($s2)
    ctx->pc = 0x141800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 4));
label_141804:
    // 0x141804: 0x10000002  b           . + 4 + (0x2 << 2)
label_141808:
    if (ctx->pc == 0x141808u) {
        ctx->pc = 0x141808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141804u;
        // 0x141808: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14180Cu;
        goto label_14180c;
    }
    ctx->pc = 0x141804u;
    {
        const bool branch_taken_0x141804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141804u;
        // 0x141808: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141804) {
            ctx->pc = 0x141810u;
            goto label_141810;
        }
    }
    ctx->pc = 0x14180Cu;
label_14180c:
    // 0x14180c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14180cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141810:
    // 0x141810: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x141810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_141814:
    // 0x141814: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x141814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_141818:
    // 0x141818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14181c:
    // 0x14181c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14181cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141820:
    // 0x141820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141824:
    // 0x141824: 0x3e00008  jr          $ra
label_141828:
    if (ctx->pc == 0x141828u) {
        ctx->pc = 0x141828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141824u;
        // 0x141828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14182Cu;
        goto label_14182c;
    }
    ctx->pc = 0x141824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141824u;
        // 0x141828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14182Cu;
label_14182c:
    // 0x14182c: 0x0  nop
    ctx->pc = 0x14182cu;
    // NOP
label_141830:
    // 0x141830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_141834:
    // 0x141834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141838:
    // 0x141838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14183c:
    // 0x14183c: 0x8cc30490  lw          $v1, 0x490($a2)
    ctx->pc = 0x14183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1168)));
label_141840:
    // 0x141840: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x141840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_141844:
    // 0x141844: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_141848:
    if (ctx->pc == 0x141848u) {
        ctx->pc = 0x141848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141844u;
        // 0x141848: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14184Cu;
        goto label_14184c;
    }
    ctx->pc = 0x141844u;
    {
        const bool branch_taken_0x141844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141844u;
        // 0x141848: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141844) {
            ctx->pc = 0x141860u;
            goto label_141860;
        }
    }
    ctx->pc = 0x14184Cu;
label_14184c:
    // 0x14184c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x14184cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_141850:
    // 0x141850: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_141854:
    if (ctx->pc == 0x141854u) {
        ctx->pc = 0x141854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141850u;
        // 0x141854: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141858u;
        goto label_141858;
    }
    ctx->pc = 0x141850u;
    {
        const bool branch_taken_0x141850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141850) {
            ctx->pc = 0x141854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141850u;
            // 0x141854: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141864u;
            goto label_141864;
        }
    }
    ctx->pc = 0x141858u;
label_141858:
    // 0x141858: 0x1000000e  b           . + 4 + (0xE << 2)
label_14185c:
    if (ctx->pc == 0x14185Cu) {
        ctx->pc = 0x14185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141858u;
        // 0x14185c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141860u;
        goto label_141860;
    }
    ctx->pc = 0x141858u;
    {
        const bool branch_taken_0x141858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141858u;
        // 0x14185c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141858) {
            ctx->pc = 0x141894u;
            goto label_141894;
        }
    }
    ctx->pc = 0x141860u;
label_141860:
    // 0x141860: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x141860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_141864:
    // 0x141864: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_141868:
    if (ctx->pc == 0x141868u) {
        ctx->pc = 0x141868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141864u;
        // 0x141868: 0x8e020238  lw          $v0, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14186Cu;
        goto label_14186c;
    }
    ctx->pc = 0x141864u;
    {
        const bool branch_taken_0x141864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141864) {
            ctx->pc = 0x141868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141864u;
            // 0x141868: 0x8e020238  lw          $v0, 0x238($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141884u;
            goto label_141884;
        }
    }
    ctx->pc = 0x14186Cu;
label_14186c:
    // 0x14186c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14186cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_141870:
    // 0x141870: 0xc04fd14  jal         func_13F450
label_141874:
    if (ctx->pc == 0x141874u) {
        ctx->pc = 0x141874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141870u;
        // 0x141874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141878u;
        goto label_141878;
    }
    ctx->pc = 0x141870u;
    SET_GPR_U32(ctx, 31, 0x141878u);
    ctx->pc = 0x141874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141870u;
    // 0x141874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F450u, 0x141870u, 0x141878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141878u;
label_141878:
    // 0x141878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14187c:
    // 0x14187c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x14187cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
label_141880:
    // 0x141880: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x141880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_141884:
    // 0x141884: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x141884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_141888:
    // 0x141888: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_14188c:
    if (ctx->pc == 0x14188Cu) {
        ctx->pc = 0x14188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141888u;
        // 0x14188c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141890u;
        goto label_141890;
    }
    ctx->pc = 0x141888u;
    {
        const bool branch_taken_0x141888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141888) {
            ctx->pc = 0x14188Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141888u;
            // 0x14188c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141894u;
            goto label_141894;
        }
    }
    ctx->pc = 0x141890u;
label_141890:
    // 0x141890: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_141894:
    // 0x141894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141898:
    // 0x141898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14189c:
    // 0x14189c: 0x3e00008  jr          $ra
label_1418a0:
    if (ctx->pc == 0x1418A0u) {
        ctx->pc = 0x1418A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14189Cu;
        // 0x1418a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1418A4u;
        goto label_1418a4;
    }
    ctx->pc = 0x14189Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1418A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14189Cu;
        // 0x1418a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14189Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1418A4u;
label_1418a4:
    // 0x1418a4: 0x0  nop
    ctx->pc = 0x1418a4u;
    // NOP
label_1418a8:
    // 0x1418a8: 0x0  nop
    ctx->pc = 0x1418a8u;
    // NOP
label_1418ac:
    // 0x1418ac: 0x0  nop
    ctx->pc = 0x1418acu;
    // NOP
label_1418b0:
    // 0x1418b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1418b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1418b4:
    // 0x1418b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1418b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1418b8:
    // 0x1418b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1418b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1418bc:
    // 0x1418bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1418bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1418c0:
    // 0x1418c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1418c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1418c4:
    // 0x1418c4: 0xc04fad4  jal         func_13EB50
label_1418c8:
    if (ctx->pc == 0x1418C8u) {
        ctx->pc = 0x1418C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418C4u;
        // 0x1418c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1418CCu;
        goto label_1418cc;
    }
    ctx->pc = 0x1418C4u;
    SET_GPR_U32(ctx, 31, 0x1418CCu);
    ctx->pc = 0x1418C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418C4u;
    // 0x1418c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EB50u, 0x1418C4u, 0x1418CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418CCu;
label_1418cc:
    // 0x1418cc: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x1418ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_1418d0:
    // 0x1418d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1418d4:
    if (ctx->pc == 0x1418D4u) {
        ctx->pc = 0x1418D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418D0u;
        // 0x1418d4: 0x96020234  lhu         $v0, 0x234($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1418D8u;
        goto label_1418d8;
    }
    ctx->pc = 0x1418D0u;
    {
        const bool branch_taken_0x1418d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1418d0) {
            ctx->pc = 0x1418D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1418D0u;
            // 0x1418d4: 0x96020234  lhu         $v0, 0x234($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1418E4u;
            goto label_1418e4;
        }
    }
    ctx->pc = 0x1418D8u;
label_1418d8:
    // 0x1418d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1418d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1418dc:
    // 0x1418dc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1418dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
label_1418e0:
    // 0x1418e0: 0x96020234  lhu         $v0, 0x234($s0)
    ctx->pc = 0x1418e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
label_1418e4:
    // 0x1418e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1418e8:
    if (ctx->pc == 0x1418E8u) {
        ctx->pc = 0x1418E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418E4u;
        // 0x1418e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1418ECu;
        goto label_1418ec;
    }
    ctx->pc = 0x1418E4u;
    {
        const bool branch_taken_0x1418e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1418e4) {
            ctx->pc = 0x1418E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1418E4u;
            // 0x1418e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1418F4u;
            goto label_1418f4;
        }
    }
    ctx->pc = 0x1418ECu;
label_1418ec:
    // 0x1418ec: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1418ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_1418f0:
    // 0x1418f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1418f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1418f4:
    // 0x1418f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1418f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1418f8:
    // 0x1418f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1418f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1418fc:
    // 0x1418fc: 0x3e00008  jr          $ra
label_141900:
    if (ctx->pc == 0x141900u) {
        ctx->pc = 0x141900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418FCu;
        // 0x141900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141904u;
        goto label_141904;
    }
    ctx->pc = 0x1418FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418FCu;
        // 0x141900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1418FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141904u;
label_141904:
    // 0x141904: 0x0  nop
    ctx->pc = 0x141904u;
    // NOP
label_141908:
    // 0x141908: 0x0  nop
    ctx->pc = 0x141908u;
    // NOP
label_14190c:
    // 0x14190c: 0x0  nop
    ctx->pc = 0x14190cu;
    // NOP
label_141910:
    // 0x141910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_141914:
    // 0x141914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141918:
    // 0x141918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14191c:
    // 0x14191c: 0x8cc20220  lw          $v0, 0x220($a2)
    ctx->pc = 0x14191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 544)));
label_141920:
    // 0x141920: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_141924:
    if (ctx->pc == 0x141924u) {
        ctx->pc = 0x141924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141920u;
        // 0x141924: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141928u;
        goto label_141928;
    }
    ctx->pc = 0x141920u;
    {
        const bool branch_taken_0x141920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141920u;
        // 0x141924: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141920) {
            ctx->pc = 0x141950u;
            goto label_141950;
        }
    }
    ctx->pc = 0x141928u;
label_141928:
    // 0x141928: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x141928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_14192c:
    // 0x14192c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14192cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_141930:
    // 0x141930: 0x2442dd60  addiu       $v0, $v0, -0x22A0
    ctx->pc = 0x141930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958432));
label_141934:
    // 0x141934: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x141934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_141938:
    // 0x141938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14193c:
    // 0x14193c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_141940:
    // 0x141940: 0x40f809  jalr        $v0
label_141944:
    if (ctx->pc == 0x141944u) {
        ctx->pc = 0x141944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141940u;
        // 0x141944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141948u;
        goto label_141948;
    }
    ctx->pc = 0x141940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141948u);
        ctx->pc = 0x141944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141940u;
        // 0x141944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141940u, 0x141948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141948u;
label_141948:
    // 0x141948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14194c:
    // 0x14194c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x14194cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
label_141950:
    // 0x141950: 0x96020234  lhu         $v0, 0x234($s0)
    ctx->pc = 0x141950u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
label_141954:
    // 0x141954: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_141958:
    if (ctx->pc == 0x141958u) {
        ctx->pc = 0x141958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141954u;
        // 0x141958: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14195Cu;
        goto label_14195c;
    }
    ctx->pc = 0x141954u;
    {
        const bool branch_taken_0x141954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141954) {
            ctx->pc = 0x141958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141954u;
            // 0x141958: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141964u;
            goto label_141964;
        }
    }
    ctx->pc = 0x14195Cu;
label_14195c:
    // 0x14195c: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x14195cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_141960:
    // 0x141960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141964:
    // 0x141964: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_141968:
    // 0x141968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14196c:
    // 0x14196c: 0x3e00008  jr          $ra
label_141970:
    if (ctx->pc == 0x141970u) {
        ctx->pc = 0x141970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14196Cu;
        // 0x141970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141974u;
        goto label_141974;
    }
    ctx->pc = 0x14196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14196Cu;
        // 0x141970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141974u;
label_141974:
    // 0x141974: 0x0  nop
    ctx->pc = 0x141974u;
    // NOP
label_141978:
    // 0x141978: 0x0  nop
    ctx->pc = 0x141978u;
    // NOP
label_14197c:
    // 0x14197c: 0x0  nop
    ctx->pc = 0x14197cu;
    // NOP
label_141980:
    // 0x141980: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
label_141984:
    if (ctx->pc == 0x141984u) {
        ctx->pc = 0x141984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141980u;
        // 0x141984: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141988u;
        goto label_141988;
    }
    ctx->pc = 0x141980u;
    {
        const bool branch_taken_0x141980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x141980) {
            ctx->pc = 0x141984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141980u;
            // 0x141984: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14198Cu;
            goto label_14198c;
        }
    }
    ctx->pc = 0x141988u;
label_141988:
    // 0x141988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x141988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14198c:
    // 0x14198c: 0x3e00008  jr          $ra
label_141990:
    if (ctx->pc == 0x141990u) {
        ctx->pc = 0x141994u;
        goto label_141994;
    }
    ctx->pc = 0x14198Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14198Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141994u;
label_141994:
    // 0x141994: 0x0  nop
    ctx->pc = 0x141994u;
    // NOP
label_141998:
    // 0x141998: 0x0  nop
    ctx->pc = 0x141998u;
    // NOP
label_14199c:
    // 0x14199c: 0x0  nop
    ctx->pc = 0x14199cu;
    // NOP
label_1419a0:
    // 0x1419a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1419a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1419a4:
    // 0x1419a4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1419a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_1419a8:
    // 0x1419a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1419a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1419ac:
    // 0x1419ac: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x1419acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1419b0:
    // 0x1419b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1419b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1419b4:
    // 0x1419b4: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1419b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1419b8:
    // 0x1419b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1419b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1419bc:
    // 0x1419bc: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1419bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_1419c0:
    // 0x1419c0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1419c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1419c4:
    // 0x1419c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1419c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1419c8:
    // 0x1419c8: 0x8e060494  lw          $a2, 0x494($s0)
    ctx->pc = 0x1419c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_1419cc:
    // 0x1419cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1419ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1419d0:
    // 0x1419d0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1419d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1419d4:
    // 0x1419d4: 0xae050494  sw          $a1, 0x494($s0)
    ctx->pc = 0x1419d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 5));
label_1419d8:
    // 0x1419d8: 0x8e050498  lw          $a1, 0x498($s0)
    ctx->pc = 0x1419d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_1419dc:
    // 0x1419dc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1419dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1419e0:
    // 0x1419e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1419e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1419e4:
    // 0x1419e4: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x1419e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
label_1419e8:
    // 0x1419e8: 0xc062d3c  jal         func_18B4F0
label_1419ec:
    if (ctx->pc == 0x1419ECu) {
        ctx->pc = 0x1419ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419E8u;
        // 0x1419ec: 0xae020498  sw          $v0, 0x498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1419F0u;
        goto label_1419f0;
    }
    ctx->pc = 0x1419E8u;
    SET_GPR_U32(ctx, 31, 0x1419F0u);
    ctx->pc = 0x1419ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1419E8u;
    // 0x1419ec: 0xae020498  sw          $v0, 0x498($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4F0u, 0x1419E8u, 0x1419F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419F0u;
label_1419f0:
    // 0x1419f0: 0xc058fa0  jal         func_163E80
label_1419f4:
    if (ctx->pc == 0x1419F4u) {
        ctx->pc = 0x1419F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419F0u;
        // 0x1419f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1419F8u;
        goto label_1419f8;
    }
    ctx->pc = 0x1419F0u;
    SET_GPR_U32(ctx, 31, 0x1419F8u);
    ctx->pc = 0x1419F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1419F0u;
    // 0x1419f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163E80u, 0x1419F0u, 0x1419F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419F8u;
label_1419f8:
    // 0x1419f8: 0x960205e0  lhu         $v0, 0x5E0($s0)
    ctx->pc = 0x1419f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1504)));
label_1419fc:
    // 0x1419fc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1419fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_141a00:
    // 0x141a00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_141a04:
    if (ctx->pc == 0x141A04u) {
        ctx->pc = 0x141A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A00u;
        // 0x141a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A08u;
        goto label_141a08;
    }
    ctx->pc = 0x141A00u;
    {
        const bool branch_taken_0x141a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141a00) {
            ctx->pc = 0x141A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141A00u;
            // 0x141a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141A18u;
            goto label_141a18;
        }
    }
    ctx->pc = 0x141A08u;
label_141a08:
    // 0x141a08: 0xc059274  jal         func_1649D0
label_141a0c:
    if (ctx->pc == 0x141A0Cu) {
        ctx->pc = 0x141A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A08u;
        // 0x141a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A10u;
        goto label_141a10;
    }
    ctx->pc = 0x141A08u;
    SET_GPR_U32(ctx, 31, 0x141A10u);
    ctx->pc = 0x141A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A08u;
    // 0x141a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1649D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1649D0u, 0x141A08u, 0x141A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A10u;
label_141a10:
    // 0x141a10: 0x10000013  b           . + 4 + (0x13 << 2)
label_141a14:
    if (ctx->pc == 0x141A14u) {
        ctx->pc = 0x141A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A10u;
        // 0x141a14: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A18u;
        goto label_141a18;
    }
    ctx->pc = 0x141A10u;
    {
        const bool branch_taken_0x141a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A10u;
        // 0x141a14: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a10) {
            ctx->pc = 0x141A60u;
            goto label_141a60;
        }
    }
    ctx->pc = 0x141A18u;
label_141a18:
    // 0x141a18: 0xc05277c  jal         func_149DF0
label_141a1c:
    if (ctx->pc == 0x141A1Cu) {
        ctx->pc = 0x141A20u;
        goto label_141a20;
    }
    ctx->pc = 0x141A18u;
    SET_GPR_U32(ctx, 31, 0x141A20u);
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x141A18u, 0x141A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A20u;
label_141a20:
    // 0x141a20: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x141a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_141a24:
    // 0x141a24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x141a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141a28:
    // 0x141a28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x141a28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_141a2c:
    // 0x141a2c: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_141a30:
    if (ctx->pc == 0x141A30u) {
        ctx->pc = 0x141A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A2Cu;
        // 0x141a30: 0x960400f2  lhu         $a0, 0xF2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A34u;
        goto label_141a34;
    }
    ctx->pc = 0x141A2Cu;
    {
        const bool branch_taken_0x141a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x141a2c) {
            ctx->pc = 0x141A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141A2Cu;
            // 0x141a30: 0x960400f2  lhu         $a0, 0xF2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141A44u;
            goto label_141a44;
        }
    }
    ctx->pc = 0x141A34u;
label_141a34:
    // 0x141a34: 0xa60400f0  sh          $a0, 0xF0($s0)
    ctx->pc = 0x141a34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 4));
label_141a38:
    // 0x141a38: 0xc05ac88  jal         func_16B220
label_141a3c:
    if (ctx->pc == 0x141A3Cu) {
        ctx->pc = 0x141A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A38u;
        // 0x141a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A40u;
        goto label_141a40;
    }
    ctx->pc = 0x141A38u;
    SET_GPR_U32(ctx, 31, 0x141A40u);
    ctx->pc = 0x141A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A38u;
    // 0x141a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B220u, 0x141A38u, 0x141A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A40u;
label_141a40:
    // 0x141a40: 0x960400f2  lhu         $a0, 0xF2($s0)
    ctx->pc = 0x141a40u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
label_141a44:
    // 0x141a44: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x141a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_141a48:
    // 0x141a48: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_141a4c:
    if (ctx->pc == 0x141A4Cu) {
        ctx->pc = 0x141A50u;
        goto label_141a50;
    }
    ctx->pc = 0x141A48u;
    {
        const bool branch_taken_0x141a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x141a48) {
            ctx->pc = 0x141A5Cu;
            goto label_141a5c;
        }
    }
    ctx->pc = 0x141A50u;
label_141a50:
    // 0x141a50: 0xa60400f0  sh          $a0, 0xF0($s0)
    ctx->pc = 0x141a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 4));
label_141a54:
    // 0x141a54: 0xc05ac88  jal         func_16B220
label_141a58:
    if (ctx->pc == 0x141A58u) {
        ctx->pc = 0x141A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A54u;
        // 0x141a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A5Cu;
        goto label_141a5c;
    }
    ctx->pc = 0x141A54u;
    SET_GPR_U32(ctx, 31, 0x141A5Cu);
    ctx->pc = 0x141A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A54u;
    // 0x141a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B220u, 0x141A54u, 0x141A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A5Cu;
label_141a5c:
    // 0x141a5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_141a60:
    // 0x141a60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141a64:
    // 0x141a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141a68:
    // 0x141a68: 0x3e00008  jr          $ra
label_141a6c:
    if (ctx->pc == 0x141A6Cu) {
        ctx->pc = 0x141A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A68u;
        // 0x141a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A70u;
        goto label_fallthrough_0x141a68;
    }
    ctx->pc = 0x141A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A68u;
        // 0x141a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x141a68:
    ctx->pc = 0x141A70u;
}
