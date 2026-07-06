#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00290400
// Address: 0x290400 - 0x290a58
void sub_00290400_0x290400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290400_0x290400");
#endif

    switch (ctx->pc) {
        case 0x290400u: goto label_290400;
        case 0x290404u: goto label_290404;
        case 0x290408u: goto label_290408;
        case 0x29040cu: goto label_29040c;
        case 0x290410u: goto label_290410;
        case 0x290414u: goto label_290414;
        case 0x290418u: goto label_290418;
        case 0x29041cu: goto label_29041c;
        case 0x290420u: goto label_290420;
        case 0x290424u: goto label_290424;
        case 0x290428u: goto label_290428;
        case 0x29042cu: goto label_29042c;
        case 0x290430u: goto label_290430;
        case 0x290434u: goto label_290434;
        case 0x290438u: goto label_290438;
        case 0x29043cu: goto label_29043c;
        case 0x290440u: goto label_290440;
        case 0x290444u: goto label_290444;
        case 0x290448u: goto label_290448;
        case 0x29044cu: goto label_29044c;
        case 0x290450u: goto label_290450;
        case 0x290454u: goto label_290454;
        case 0x290458u: goto label_290458;
        case 0x29045cu: goto label_29045c;
        case 0x290460u: goto label_290460;
        case 0x290464u: goto label_290464;
        case 0x290468u: goto label_290468;
        case 0x29046cu: goto label_29046c;
        case 0x290470u: goto label_290470;
        case 0x290474u: goto label_290474;
        case 0x290478u: goto label_290478;
        case 0x29047cu: goto label_29047c;
        case 0x290480u: goto label_290480;
        case 0x290484u: goto label_290484;
        case 0x290488u: goto label_290488;
        case 0x29048cu: goto label_29048c;
        case 0x290490u: goto label_290490;
        case 0x290494u: goto label_290494;
        case 0x290498u: goto label_290498;
        case 0x29049cu: goto label_29049c;
        case 0x2904a0u: goto label_2904a0;
        case 0x2904a4u: goto label_2904a4;
        case 0x2904a8u: goto label_2904a8;
        case 0x2904acu: goto label_2904ac;
        case 0x2904b0u: goto label_2904b0;
        case 0x2904b4u: goto label_2904b4;
        case 0x2904b8u: goto label_2904b8;
        case 0x2904bcu: goto label_2904bc;
        case 0x2904c0u: goto label_2904c0;
        case 0x2904c4u: goto label_2904c4;
        case 0x2904c8u: goto label_2904c8;
        case 0x2904ccu: goto label_2904cc;
        case 0x2904d0u: goto label_2904d0;
        case 0x2904d4u: goto label_2904d4;
        case 0x2904d8u: goto label_2904d8;
        case 0x2904dcu: goto label_2904dc;
        case 0x2904e0u: goto label_2904e0;
        case 0x2904e4u: goto label_2904e4;
        case 0x2904e8u: goto label_2904e8;
        case 0x2904ecu: goto label_2904ec;
        case 0x2904f0u: goto label_2904f0;
        case 0x2904f4u: goto label_2904f4;
        case 0x2904f8u: goto label_2904f8;
        case 0x2904fcu: goto label_2904fc;
        case 0x290500u: goto label_290500;
        case 0x290504u: goto label_290504;
        case 0x290508u: goto label_290508;
        case 0x29050cu: goto label_29050c;
        case 0x290510u: goto label_290510;
        case 0x290514u: goto label_290514;
        case 0x290518u: goto label_290518;
        case 0x29051cu: goto label_29051c;
        case 0x290520u: goto label_290520;
        case 0x290524u: goto label_290524;
        case 0x290528u: goto label_290528;
        case 0x29052cu: goto label_29052c;
        case 0x290530u: goto label_290530;
        case 0x290534u: goto label_290534;
        case 0x290538u: goto label_290538;
        case 0x29053cu: goto label_29053c;
        case 0x290540u: goto label_290540;
        case 0x290544u: goto label_290544;
        case 0x290548u: goto label_290548;
        case 0x29054cu: goto label_29054c;
        case 0x290550u: goto label_290550;
        case 0x290554u: goto label_290554;
        case 0x290558u: goto label_290558;
        case 0x29055cu: goto label_29055c;
        case 0x290560u: goto label_290560;
        case 0x290564u: goto label_290564;
        case 0x290568u: goto label_290568;
        case 0x29056cu: goto label_29056c;
        case 0x290570u: goto label_290570;
        case 0x290574u: goto label_290574;
        case 0x290578u: goto label_290578;
        case 0x29057cu: goto label_29057c;
        case 0x290580u: goto label_290580;
        case 0x290584u: goto label_290584;
        case 0x290588u: goto label_290588;
        case 0x29058cu: goto label_29058c;
        case 0x290590u: goto label_290590;
        case 0x290594u: goto label_290594;
        case 0x290598u: goto label_290598;
        case 0x29059cu: goto label_29059c;
        case 0x2905a0u: goto label_2905a0;
        case 0x2905a4u: goto label_2905a4;
        case 0x2905a8u: goto label_2905a8;
        case 0x2905acu: goto label_2905ac;
        case 0x2905b0u: goto label_2905b0;
        case 0x2905b4u: goto label_2905b4;
        case 0x2905b8u: goto label_2905b8;
        case 0x2905bcu: goto label_2905bc;
        case 0x2905c0u: goto label_2905c0;
        case 0x2905c4u: goto label_2905c4;
        case 0x2905c8u: goto label_2905c8;
        case 0x2905ccu: goto label_2905cc;
        case 0x2905d0u: goto label_2905d0;
        case 0x2905d4u: goto label_2905d4;
        case 0x2905d8u: goto label_2905d8;
        case 0x2905dcu: goto label_2905dc;
        case 0x2905e0u: goto label_2905e0;
        case 0x2905e4u: goto label_2905e4;
        case 0x2905e8u: goto label_2905e8;
        case 0x2905ecu: goto label_2905ec;
        case 0x2905f0u: goto label_2905f0;
        case 0x2905f4u: goto label_2905f4;
        case 0x2905f8u: goto label_2905f8;
        case 0x2905fcu: goto label_2905fc;
        case 0x290600u: goto label_290600;
        case 0x290604u: goto label_290604;
        case 0x290608u: goto label_290608;
        case 0x29060cu: goto label_29060c;
        case 0x290610u: goto label_290610;
        case 0x290614u: goto label_290614;
        case 0x290618u: goto label_290618;
        case 0x29061cu: goto label_29061c;
        case 0x290620u: goto label_290620;
        case 0x290624u: goto label_290624;
        case 0x290628u: goto label_290628;
        case 0x29062cu: goto label_29062c;
        case 0x290630u: goto label_290630;
        case 0x290634u: goto label_290634;
        case 0x290638u: goto label_290638;
        case 0x29063cu: goto label_29063c;
        case 0x290640u: goto label_290640;
        case 0x290644u: goto label_290644;
        case 0x290648u: goto label_290648;
        case 0x29064cu: goto label_29064c;
        case 0x290650u: goto label_290650;
        case 0x290654u: goto label_290654;
        case 0x290658u: goto label_290658;
        case 0x29065cu: goto label_29065c;
        case 0x290660u: goto label_290660;
        case 0x290664u: goto label_290664;
        case 0x290668u: goto label_290668;
        case 0x29066cu: goto label_29066c;
        case 0x290670u: goto label_290670;
        case 0x290674u: goto label_290674;
        case 0x290678u: goto label_290678;
        case 0x29067cu: goto label_29067c;
        case 0x290680u: goto label_290680;
        case 0x290684u: goto label_290684;
        case 0x290688u: goto label_290688;
        case 0x29068cu: goto label_29068c;
        case 0x290690u: goto label_290690;
        case 0x290694u: goto label_290694;
        case 0x290698u: goto label_290698;
        case 0x29069cu: goto label_29069c;
        case 0x2906a0u: goto label_2906a0;
        case 0x2906a4u: goto label_2906a4;
        case 0x2906a8u: goto label_2906a8;
        case 0x2906acu: goto label_2906ac;
        case 0x2906b0u: goto label_2906b0;
        case 0x2906b4u: goto label_2906b4;
        case 0x2906b8u: goto label_2906b8;
        case 0x2906bcu: goto label_2906bc;
        case 0x2906c0u: goto label_2906c0;
        case 0x2906c4u: goto label_2906c4;
        case 0x2906c8u: goto label_2906c8;
        case 0x2906ccu: goto label_2906cc;
        case 0x2906d0u: goto label_2906d0;
        case 0x2906d4u: goto label_2906d4;
        case 0x2906d8u: goto label_2906d8;
        case 0x2906dcu: goto label_2906dc;
        case 0x2906e0u: goto label_2906e0;
        case 0x2906e4u: goto label_2906e4;
        case 0x2906e8u: goto label_2906e8;
        case 0x2906ecu: goto label_2906ec;
        case 0x2906f0u: goto label_2906f0;
        case 0x2906f4u: goto label_2906f4;
        case 0x2906f8u: goto label_2906f8;
        case 0x2906fcu: goto label_2906fc;
        case 0x290700u: goto label_290700;
        case 0x290704u: goto label_290704;
        case 0x290708u: goto label_290708;
        case 0x29070cu: goto label_29070c;
        case 0x290710u: goto label_290710;
        case 0x290714u: goto label_290714;
        case 0x290718u: goto label_290718;
        case 0x29071cu: goto label_29071c;
        case 0x290720u: goto label_290720;
        case 0x290724u: goto label_290724;
        case 0x290728u: goto label_290728;
        case 0x29072cu: goto label_29072c;
        case 0x290730u: goto label_290730;
        case 0x290734u: goto label_290734;
        case 0x290738u: goto label_290738;
        case 0x29073cu: goto label_29073c;
        case 0x290740u: goto label_290740;
        case 0x290744u: goto label_290744;
        case 0x290748u: goto label_290748;
        case 0x29074cu: goto label_29074c;
        case 0x290750u: goto label_290750;
        case 0x290754u: goto label_290754;
        case 0x290758u: goto label_290758;
        case 0x29075cu: goto label_29075c;
        case 0x290760u: goto label_290760;
        case 0x290764u: goto label_290764;
        case 0x290768u: goto label_290768;
        case 0x29076cu: goto label_29076c;
        case 0x290770u: goto label_290770;
        case 0x290774u: goto label_290774;
        case 0x290778u: goto label_290778;
        case 0x29077cu: goto label_29077c;
        case 0x290780u: goto label_290780;
        case 0x290784u: goto label_290784;
        case 0x290788u: goto label_290788;
        case 0x29078cu: goto label_29078c;
        case 0x290790u: goto label_290790;
        case 0x290794u: goto label_290794;
        case 0x290798u: goto label_290798;
        case 0x29079cu: goto label_29079c;
        case 0x2907a0u: goto label_2907a0;
        case 0x2907a4u: goto label_2907a4;
        case 0x2907a8u: goto label_2907a8;
        case 0x2907acu: goto label_2907ac;
        case 0x2907b0u: goto label_2907b0;
        case 0x2907b4u: goto label_2907b4;
        case 0x2907b8u: goto label_2907b8;
        case 0x2907bcu: goto label_2907bc;
        case 0x2907c0u: goto label_2907c0;
        case 0x2907c4u: goto label_2907c4;
        case 0x2907c8u: goto label_2907c8;
        case 0x2907ccu: goto label_2907cc;
        case 0x2907d0u: goto label_2907d0;
        case 0x2907d4u: goto label_2907d4;
        case 0x2907d8u: goto label_2907d8;
        case 0x2907dcu: goto label_2907dc;
        case 0x2907e0u: goto label_2907e0;
        case 0x2907e4u: goto label_2907e4;
        case 0x2907e8u: goto label_2907e8;
        case 0x2907ecu: goto label_2907ec;
        case 0x2907f0u: goto label_2907f0;
        case 0x2907f4u: goto label_2907f4;
        case 0x2907f8u: goto label_2907f8;
        case 0x2907fcu: goto label_2907fc;
        case 0x290800u: goto label_290800;
        case 0x290804u: goto label_290804;
        case 0x290808u: goto label_290808;
        case 0x29080cu: goto label_29080c;
        case 0x290810u: goto label_290810;
        case 0x290814u: goto label_290814;
        case 0x290818u: goto label_290818;
        case 0x29081cu: goto label_29081c;
        case 0x290820u: goto label_290820;
        case 0x290824u: goto label_290824;
        case 0x290828u: goto label_290828;
        case 0x29082cu: goto label_29082c;
        case 0x290830u: goto label_290830;
        case 0x290834u: goto label_290834;
        case 0x290838u: goto label_290838;
        case 0x29083cu: goto label_29083c;
        case 0x290840u: goto label_290840;
        case 0x290844u: goto label_290844;
        case 0x290848u: goto label_290848;
        case 0x29084cu: goto label_29084c;
        case 0x290850u: goto label_290850;
        case 0x290854u: goto label_290854;
        case 0x290858u: goto label_290858;
        case 0x29085cu: goto label_29085c;
        case 0x290860u: goto label_290860;
        case 0x290864u: goto label_290864;
        case 0x290868u: goto label_290868;
        case 0x29086cu: goto label_29086c;
        case 0x290870u: goto label_290870;
        case 0x290874u: goto label_290874;
        case 0x290878u: goto label_290878;
        case 0x29087cu: goto label_29087c;
        case 0x290880u: goto label_290880;
        case 0x290884u: goto label_290884;
        case 0x290888u: goto label_290888;
        case 0x29088cu: goto label_29088c;
        case 0x290890u: goto label_290890;
        case 0x290894u: goto label_290894;
        case 0x290898u: goto label_290898;
        case 0x29089cu: goto label_29089c;
        case 0x2908a0u: goto label_2908a0;
        case 0x2908a4u: goto label_2908a4;
        case 0x2908a8u: goto label_2908a8;
        case 0x2908acu: goto label_2908ac;
        case 0x2908b0u: goto label_2908b0;
        case 0x2908b4u: goto label_2908b4;
        case 0x2908b8u: goto label_2908b8;
        case 0x2908bcu: goto label_2908bc;
        case 0x2908c0u: goto label_2908c0;
        case 0x2908c4u: goto label_2908c4;
        case 0x2908c8u: goto label_2908c8;
        case 0x2908ccu: goto label_2908cc;
        case 0x2908d0u: goto label_2908d0;
        case 0x2908d4u: goto label_2908d4;
        case 0x2908d8u: goto label_2908d8;
        case 0x2908dcu: goto label_2908dc;
        case 0x2908e0u: goto label_2908e0;
        case 0x2908e4u: goto label_2908e4;
        case 0x2908e8u: goto label_2908e8;
        case 0x2908ecu: goto label_2908ec;
        case 0x2908f0u: goto label_2908f0;
        case 0x2908f4u: goto label_2908f4;
        case 0x2908f8u: goto label_2908f8;
        case 0x2908fcu: goto label_2908fc;
        case 0x290900u: goto label_290900;
        case 0x290904u: goto label_290904;
        case 0x290908u: goto label_290908;
        case 0x29090cu: goto label_29090c;
        case 0x290910u: goto label_290910;
        case 0x290914u: goto label_290914;
        case 0x290918u: goto label_290918;
        case 0x29091cu: goto label_29091c;
        case 0x290920u: goto label_290920;
        case 0x290924u: goto label_290924;
        case 0x290928u: goto label_290928;
        case 0x29092cu: goto label_29092c;
        case 0x290930u: goto label_290930;
        case 0x290934u: goto label_290934;
        case 0x290938u: goto label_290938;
        case 0x29093cu: goto label_29093c;
        case 0x290940u: goto label_290940;
        case 0x290944u: goto label_290944;
        case 0x290948u: goto label_290948;
        case 0x29094cu: goto label_29094c;
        case 0x290950u: goto label_290950;
        case 0x290954u: goto label_290954;
        case 0x290958u: goto label_290958;
        case 0x29095cu: goto label_29095c;
        case 0x290960u: goto label_290960;
        case 0x290964u: goto label_290964;
        case 0x290968u: goto label_290968;
        case 0x29096cu: goto label_29096c;
        case 0x290970u: goto label_290970;
        case 0x290974u: goto label_290974;
        case 0x290978u: goto label_290978;
        case 0x29097cu: goto label_29097c;
        case 0x290980u: goto label_290980;
        case 0x290984u: goto label_290984;
        case 0x290988u: goto label_290988;
        case 0x29098cu: goto label_29098c;
        case 0x290990u: goto label_290990;
        case 0x290994u: goto label_290994;
        case 0x290998u: goto label_290998;
        case 0x29099cu: goto label_29099c;
        case 0x2909a0u: goto label_2909a0;
        case 0x2909a4u: goto label_2909a4;
        case 0x2909a8u: goto label_2909a8;
        case 0x2909acu: goto label_2909ac;
        case 0x2909b0u: goto label_2909b0;
        case 0x2909b4u: goto label_2909b4;
        case 0x2909b8u: goto label_2909b8;
        case 0x2909bcu: goto label_2909bc;
        case 0x2909c0u: goto label_2909c0;
        case 0x2909c4u: goto label_2909c4;
        case 0x2909c8u: goto label_2909c8;
        case 0x2909ccu: goto label_2909cc;
        case 0x2909d0u: goto label_2909d0;
        case 0x2909d4u: goto label_2909d4;
        case 0x2909d8u: goto label_2909d8;
        case 0x2909dcu: goto label_2909dc;
        case 0x2909e0u: goto label_2909e0;
        case 0x2909e4u: goto label_2909e4;
        case 0x2909e8u: goto label_2909e8;
        case 0x2909ecu: goto label_2909ec;
        case 0x2909f0u: goto label_2909f0;
        case 0x2909f4u: goto label_2909f4;
        case 0x2909f8u: goto label_2909f8;
        case 0x2909fcu: goto label_2909fc;
        case 0x290a00u: goto label_290a00;
        case 0x290a04u: goto label_290a04;
        case 0x290a08u: goto label_290a08;
        case 0x290a0cu: goto label_290a0c;
        case 0x290a10u: goto label_290a10;
        case 0x290a14u: goto label_290a14;
        case 0x290a18u: goto label_290a18;
        case 0x290a1cu: goto label_290a1c;
        case 0x290a20u: goto label_290a20;
        case 0x290a24u: goto label_290a24;
        case 0x290a28u: goto label_290a28;
        case 0x290a2cu: goto label_290a2c;
        case 0x290a30u: goto label_290a30;
        case 0x290a34u: goto label_290a34;
        case 0x290a38u: goto label_290a38;
        case 0x290a3cu: goto label_290a3c;
        case 0x290a40u: goto label_290a40;
        case 0x290a44u: goto label_290a44;
        case 0x290a48u: goto label_290a48;
        case 0x290a4cu: goto label_290a4c;
        case 0x290a50u: goto label_290a50;
        case 0x290a54u: goto label_290a54;
        default: break;
    }

    ctx->pc = 0x290400u;

label_290400:
    // 0x290400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_290404:
    // 0x290404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x290404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_290408:
    // 0x290408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29040c:
    // 0x29040c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29040cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290410:
    // 0x290410: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x290410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_290414:
    // 0x290414: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_290418:
    if (ctx->pc == 0x290418u) {
        ctx->pc = 0x29041Cu;
        goto label_29041c;
    }
    ctx->pc = 0x290414u;
    {
        const bool branch_taken_0x290414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x290414) {
            ctx->pc = 0x290428u;
            goto label_290428;
        }
    }
    ctx->pc = 0x29041Cu;
label_29041c:
    // 0x29041c: 0xc0a5a18  jal         func_296860
label_290420:
    if (ctx->pc == 0x290420u) {
        ctx->pc = 0x290424u;
        goto label_290424;
    }
    ctx->pc = 0x29041Cu;
    SET_GPR_U32(ctx, 31, 0x290424u);
    ctx->pc = 0x296860u;
    if (runtime->hasFunction(0x296860u)) {
        auto targetFn = runtime->lookupFunction(0x296860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290424u; }
        if (ctx->pc != 0x290424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296860_0x296860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290424u; }
        if (ctx->pc != 0x290424u) { return; }
    }
    ctx->pc = 0x290424u;
label_290424:
    // 0x290424: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x290424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_290428:
    // 0x290428: 0xc0a58b8  jal         func_2962E0
label_29042c:
    if (ctx->pc == 0x29042Cu) {
        ctx->pc = 0x290430u;
        goto label_290430;
    }
    ctx->pc = 0x290428u;
    SET_GPR_U32(ctx, 31, 0x290430u);
    ctx->pc = 0x2962E0u;
    if (runtime->hasFunction(0x2962E0u)) {
        auto targetFn = runtime->lookupFunction(0x2962E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290430u; }
        if (ctx->pc != 0x290430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002962E0_0x2962e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290430u; }
        if (ctx->pc != 0x290430u) { return; }
    }
    ctx->pc = 0x290430u;
label_290430:
    // 0x290430: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_290434:
    if (ctx->pc == 0x290434u) {
        ctx->pc = 0x290434u;
            // 0x290434: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x290438u;
        goto label_290438;
    }
    ctx->pc = 0x290430u;
    {
        const bool branch_taken_0x290430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290430u;
            // 0x290434: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290430) {
            ctx->pc = 0x290440u;
            goto label_290440;
        }
    }
    ctx->pc = 0x290438u;
label_290438:
    // 0x290438: 0x1000000f  b           . + 4 + (0xF << 2)
label_29043c:
    if (ctx->pc == 0x29043Cu) {
        ctx->pc = 0x29043Cu;
            // 0x29043c: 0x24022715  addiu       $v0, $zero, 0x2715 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
        ctx->pc = 0x290440u;
        goto label_290440;
    }
    ctx->pc = 0x290438u;
    {
        const bool branch_taken_0x290438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290438u;
            // 0x29043c: 0x24022715  addiu       $v0, $zero, 0x2715 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290438) {
            ctx->pc = 0x290478u;
            goto label_290478;
        }
    }
    ctx->pc = 0x290440u;
label_290440:
    // 0x290440: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x290440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_290444:
    // 0x290444: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x290444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_290448:
    // 0x290448: 0x40f809  jalr        $v0
label_29044c:
    if (ctx->pc == 0x29044Cu) {
        ctx->pc = 0x290450u;
        goto label_290450;
    }
    ctx->pc = 0x290448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290450u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x290450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x290450u; }
            if (ctx->pc != 0x290450u) { return; }
        }
        }
    }
    ctx->pc = 0x290450u;
label_290450:
    // 0x290450: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x290450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_290454:
    // 0x290454: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_290458:
    if (ctx->pc == 0x290458u) {
        ctx->pc = 0x290458u;
            // 0x290458: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29045Cu;
        goto label_29045c;
    }
    ctx->pc = 0x290454u;
    {
        const bool branch_taken_0x290454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290454u;
            // 0x290458: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290454) {
            ctx->pc = 0x290464u;
            goto label_290464;
        }
    }
    ctx->pc = 0x29045Cu;
label_29045c:
    // 0x29045c: 0x10000006  b           . + 4 + (0x6 << 2)
label_290460:
    if (ctx->pc == 0x290460u) {
        ctx->pc = 0x290460u;
            // 0x290460: 0x24022711  addiu       $v0, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->pc = 0x290464u;
        goto label_290464;
    }
    ctx->pc = 0x29045Cu;
    {
        const bool branch_taken_0x29045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29045Cu;
            // 0x290460: 0x24022711  addiu       $v0, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29045c) {
            ctx->pc = 0x290478u;
            goto label_290478;
        }
    }
    ctx->pc = 0x290464u;
label_290464:
    // 0x290464: 0xc0a587a  jal         func_2961E8
label_290468:
    if (ctx->pc == 0x290468u) {
        ctx->pc = 0x290468u;
            // 0x290468: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x29046Cu;
        goto label_29046c;
    }
    ctx->pc = 0x290464u;
    SET_GPR_U32(ctx, 31, 0x29046Cu);
    ctx->pc = 0x290468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290464u;
            // 0x290468: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2961E8u;
    if (runtime->hasFunction(0x2961E8u)) {
        auto targetFn = runtime->lookupFunction(0x2961E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29046Cu; }
        if (ctx->pc != 0x29046Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002961E8_0x2961e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29046Cu; }
        if (ctx->pc != 0x29046Cu) { return; }
    }
    ctx->pc = 0x29046Cu;
label_29046c:
    // 0x29046c: 0x24032711  addiu       $v1, $zero, 0x2711
    ctx->pc = 0x29046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
label_290470:
    // 0x290470: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x290470u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_290474:
    // 0x290474: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x290474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_290478:
    // 0x290478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29047c:
    // 0x29047c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29047cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290480:
    // 0x290480: 0x3e00008  jr          $ra
label_290484:
    if (ctx->pc == 0x290484u) {
        ctx->pc = 0x290484u;
            // 0x290484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x290488u;
        goto label_290488;
    }
    ctx->pc = 0x290480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290480u;
            // 0x290484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290488u;
label_290488:
    // 0x290488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29048c:
    // 0x29048c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_290490:
    // 0x290490: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_290494:
    // 0x290494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290498:
    // 0x290498: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x290498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_29049c:
    // 0x29049c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2904a0:
    if (ctx->pc == 0x2904A0u) {
        ctx->pc = 0x2904A0u;
            // 0x2904a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2904A4u;
        goto label_2904a4;
    }
    ctx->pc = 0x29049Cu;
    {
        const bool branch_taken_0x29049c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2904A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29049Cu;
            // 0x2904a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29049c) {
            ctx->pc = 0x2904B4u;
            goto label_2904b4;
        }
    }
    ctx->pc = 0x2904A4u;
label_2904a4:
    // 0x2904a4: 0xc0a5a18  jal         func_296860
label_2904a8:
    if (ctx->pc == 0x2904A8u) {
        ctx->pc = 0x2904ACu;
        goto label_2904ac;
    }
    ctx->pc = 0x2904A4u;
    SET_GPR_U32(ctx, 31, 0x2904ACu);
    ctx->pc = 0x296860u;
    if (runtime->hasFunction(0x296860u)) {
        auto targetFn = runtime->lookupFunction(0x296860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904ACu; }
        if (ctx->pc != 0x2904ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296860_0x296860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904ACu; }
        if (ctx->pc != 0x2904ACu) { return; }
    }
    ctx->pc = 0x2904ACu;
label_2904ac:
    // 0x2904ac: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2904acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2904b0:
    // 0x2904b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2904b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2904b4:
    // 0x2904b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2904b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2904b8:
    // 0x2904b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2904b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2904bc:
    // 0x2904bc: 0x3e00008  jr          $ra
label_2904c0:
    if (ctx->pc == 0x2904C0u) {
        ctx->pc = 0x2904C0u;
            // 0x2904c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2904C4u;
        goto label_2904c4;
    }
    ctx->pc = 0x2904BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2904C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2904BCu;
            // 0x2904c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2904C4u;
label_2904c4:
    // 0x2904c4: 0x0  nop
    ctx->pc = 0x2904c4u;
    // NOP
label_2904c8:
    // 0x2904c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2904c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2904cc:
    // 0x2904cc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_2904d0:
    if (ctx->pc == 0x2904D0u) {
        ctx->pc = 0x2904D0u;
            // 0x2904d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2904D4u;
        goto label_2904d4;
    }
    ctx->pc = 0x2904CCu;
    {
        const bool branch_taken_0x2904cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2904D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2904CCu;
            // 0x2904d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904cc) {
            ctx->pc = 0x2904E8u;
            goto label_2904e8;
        }
    }
    ctx->pc = 0x2904D4u;
label_2904d4:
    // 0x2904d4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2904d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2904d8:
    // 0x2904d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2904d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2904dc:
    // 0x2904dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2904dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2904e0:
    // 0x2904e0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2904e4:
    if (ctx->pc == 0x2904E4u) {
        ctx->pc = 0x2904E4u;
            // 0x2904e4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x2904E8u;
        goto label_2904e8;
    }
    ctx->pc = 0x2904E0u;
    {
        const bool branch_taken_0x2904e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2904E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2904E0u;
            // 0x2904e4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904e0) {
            ctx->pc = 0x290560u;
            goto label_290560;
        }
    }
    ctx->pc = 0x2904E8u;
label_2904e8:
    // 0x2904e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2904e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2904ec:
    // 0x2904ec: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_2904f0:
    if (ctx->pc == 0x2904F0u) {
        ctx->pc = 0x2904F0u;
            // 0x2904f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2904F4u;
        goto label_2904f4;
    }
    ctx->pc = 0x2904ECu;
    {
        const bool branch_taken_0x2904ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2904F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2904ECu;
            // 0x2904f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904ec) {
            ctx->pc = 0x290504u;
            goto label_290504;
        }
    }
    ctx->pc = 0x2904F4u;
label_2904f4:
    // 0x2904f4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2904f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2904f8:
    // 0x2904f8: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2904f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2904fc:
    // 0x2904fc: 0x10000018  b           . + 4 + (0x18 << 2)
label_290500:
    if (ctx->pc == 0x290500u) {
        ctx->pc = 0x290500u;
            // 0x290500: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x290504u;
        goto label_290504;
    }
    ctx->pc = 0x2904FCu;
    {
        const bool branch_taken_0x2904fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2904FCu;
            // 0x290500: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904fc) {
            ctx->pc = 0x290560u;
            goto label_290560;
        }
    }
    ctx->pc = 0x290504u;
label_290504:
    // 0x290504: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_290508:
    if (ctx->pc == 0x290508u) {
        ctx->pc = 0x290508u;
            // 0x290508: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x29050Cu;
        goto label_29050c;
    }
    ctx->pc = 0x290504u;
    {
        const bool branch_taken_0x290504 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290504u;
            // 0x290508: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290504) {
            ctx->pc = 0x290520u;
            goto label_290520;
        }
    }
    ctx->pc = 0x29050Cu;
label_29050c:
    // 0x29050c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x29050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_290510:
    // 0x290510: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x290510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_290514:
    // 0x290514: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x290514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_290518:
    // 0x290518: 0x10000011  b           . + 4 + (0x11 << 2)
label_29051c:
    if (ctx->pc == 0x29051Cu) {
        ctx->pc = 0x29051Cu;
            // 0x29051c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x290520u;
        goto label_290520;
    }
    ctx->pc = 0x290518u;
    {
        const bool branch_taken_0x290518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29051Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290518u;
            // 0x29051c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290518) {
            ctx->pc = 0x290560u;
            goto label_290560;
        }
    }
    ctx->pc = 0x290520u;
label_290520:
    // 0x290520: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_290524:
    if (ctx->pc == 0x290524u) {
        ctx->pc = 0x290524u;
            // 0x290524: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x290528u;
        goto label_290528;
    }
    ctx->pc = 0x290520u;
    {
        const bool branch_taken_0x290520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290520u;
            // 0x290524: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290520) {
            ctx->pc = 0x29053Cu;
            goto label_29053c;
        }
    }
    ctx->pc = 0x290528u;
label_290528:
    // 0x290528: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x290528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_29052c:
    // 0x29052c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_290530:
    // 0x290530: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_290534:
    // 0x290534: 0x1000000a  b           . + 4 + (0xA << 2)
label_290538:
    if (ctx->pc == 0x290538u) {
        ctx->pc = 0x290538u;
            // 0x290538: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x29053Cu;
        goto label_29053c;
    }
    ctx->pc = 0x290534u;
    {
        const bool branch_taken_0x290534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290534u;
            // 0x290538: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290534) {
            ctx->pc = 0x290560u;
            goto label_290560;
        }
    }
    ctx->pc = 0x29053Cu;
label_29053c:
    // 0x29053c: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
label_290540:
    if (ctx->pc == 0x290540u) {
        ctx->pc = 0x290540u;
            // 0x290540: 0x24072722  addiu       $a3, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->pc = 0x290544u;
        goto label_290544;
    }
    ctx->pc = 0x29053Cu;
    {
        const bool branch_taken_0x29053c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29053c) {
            ctx->pc = 0x290540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29053Cu;
            // 0x290540: 0x24072722  addiu       $a3, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290560u;
            goto label_290560;
        }
    }
    ctx->pc = 0x290544u;
label_290544:
    // 0x290544: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x290544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_290548:
    // 0x290548: 0x6843008f  ldl         $v1, 0x8F($v0)
    ctx->pc = 0x290548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_29054c:
    // 0x29054c: 0x6c430088  ldr         $v1, 0x88($v0)
    ctx->pc = 0x29054cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_290550:
    // 0x290550: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x290550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_290554:
    // 0x290554: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x290554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_290558:
    // 0x290558: 0x3e00008  jr          $ra
label_29055c:
    if (ctx->pc == 0x29055Cu) {
        ctx->pc = 0x29055Cu;
            // 0x29055c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290560u;
        goto label_290560;
    }
    ctx->pc = 0x290558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29055Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290558u;
            // 0x29055c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290560u;
label_290560:
    // 0x290560: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x290560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_290564:
    // 0x290564: 0x3e00008  jr          $ra
label_290568:
    if (ctx->pc == 0x290568u) {
        ctx->pc = 0x29056Cu;
        goto label_29056c;
    }
    ctx->pc = 0x290564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29056Cu;
label_29056c:
    // 0x29056c: 0x0  nop
    ctx->pc = 0x29056cu;
    // NOP
label_290570:
    // 0x290570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290574:
    // 0x290574: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_290578:
    if (ctx->pc == 0x290578u) {
        ctx->pc = 0x290578u;
            // 0x290578: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29057Cu;
        goto label_29057c;
    }
    ctx->pc = 0x290574u;
    {
        const bool branch_taken_0x290574 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290574u;
            // 0x290578: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290574) {
            ctx->pc = 0x290590u;
            goto label_290590;
        }
    }
    ctx->pc = 0x29057Cu;
label_29057c:
    // 0x29057c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x29057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_290580:
    // 0x290580: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x290580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_290584:
    // 0x290584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x290584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_290588:
    // 0x290588: 0x1000001f  b           . + 4 + (0x1F << 2)
label_29058c:
    if (ctx->pc == 0x29058Cu) {
        ctx->pc = 0x29058Cu;
            // 0x29058c: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x290590u;
        goto label_290590;
    }
    ctx->pc = 0x290588u;
    {
        const bool branch_taken_0x290588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29058Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290588u;
            // 0x29058c: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290588) {
            ctx->pc = 0x290608u;
            goto label_290608;
        }
    }
    ctx->pc = 0x290590u;
label_290590:
    // 0x290590: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x290590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_290594:
    // 0x290594: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_290598:
    if (ctx->pc == 0x290598u) {
        ctx->pc = 0x290598u;
            // 0x290598: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x29059Cu;
        goto label_29059c;
    }
    ctx->pc = 0x290594u;
    {
        const bool branch_taken_0x290594 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290594u;
            // 0x290598: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290594) {
            ctx->pc = 0x2905ACu;
            goto label_2905ac;
        }
    }
    ctx->pc = 0x29059Cu;
label_29059c:
    // 0x29059c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x29059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2905a0:
    // 0x2905a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2905a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2905a4:
    // 0x2905a4: 0x10000018  b           . + 4 + (0x18 << 2)
label_2905a8:
    if (ctx->pc == 0x2905A8u) {
        ctx->pc = 0x2905A8u;
            // 0x2905a8: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2905ACu;
        goto label_2905ac;
    }
    ctx->pc = 0x2905A4u;
    {
        const bool branch_taken_0x2905a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905A4u;
            // 0x2905a8: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905a4) {
            ctx->pc = 0x290608u;
            goto label_290608;
        }
    }
    ctx->pc = 0x2905ACu;
label_2905ac:
    // 0x2905ac: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_2905b0:
    if (ctx->pc == 0x2905B0u) {
        ctx->pc = 0x2905B0u;
            // 0x2905b0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2905B4u;
        goto label_2905b4;
    }
    ctx->pc = 0x2905ACu;
    {
        const bool branch_taken_0x2905ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2905B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905ACu;
            // 0x2905b0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905ac) {
            ctx->pc = 0x2905C8u;
            goto label_2905c8;
        }
    }
    ctx->pc = 0x2905B4u;
label_2905b4:
    // 0x2905b4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2905b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2905b8:
    // 0x2905b8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2905b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2905bc:
    // 0x2905bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2905bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2905c0:
    // 0x2905c0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2905c4:
    if (ctx->pc == 0x2905C4u) {
        ctx->pc = 0x2905C4u;
            // 0x2905c4: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->pc = 0x2905C8u;
        goto label_2905c8;
    }
    ctx->pc = 0x2905C0u;
    {
        const bool branch_taken_0x2905c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905C0u;
            // 0x2905c4: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905c0) {
            ctx->pc = 0x290608u;
            goto label_290608;
        }
    }
    ctx->pc = 0x2905C8u;
label_2905c8:
    // 0x2905c8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_2905cc:
    if (ctx->pc == 0x2905CCu) {
        ctx->pc = 0x2905CCu;
            // 0x2905cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2905D0u;
        goto label_2905d0;
    }
    ctx->pc = 0x2905C8u;
    {
        const bool branch_taken_0x2905c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2905CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905C8u;
            // 0x2905cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905c8) {
            ctx->pc = 0x2905E4u;
            goto label_2905e4;
        }
    }
    ctx->pc = 0x2905D0u;
label_2905d0:
    // 0x2905d0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2905d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2905d4:
    // 0x2905d4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2905d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2905d8:
    // 0x2905d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2905d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2905dc:
    // 0x2905dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_2905e0:
    if (ctx->pc == 0x2905E0u) {
        ctx->pc = 0x2905E0u;
            // 0x2905e0: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x2905E4u;
        goto label_2905e4;
    }
    ctx->pc = 0x2905DCu;
    {
        const bool branch_taken_0x2905dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905DCu;
            // 0x2905e0: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905dc) {
            ctx->pc = 0x290608u;
            goto label_290608;
        }
    }
    ctx->pc = 0x2905E4u;
label_2905e4:
    // 0x2905e4: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
label_2905e8:
    if (ctx->pc == 0x2905E8u) {
        ctx->pc = 0x2905E8u;
            // 0x2905e8: 0x24072722  addiu       $a3, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->pc = 0x2905ECu;
        goto label_2905ec;
    }
    ctx->pc = 0x2905E4u;
    {
        const bool branch_taken_0x2905e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2905e4) {
            ctx->pc = 0x2905E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2905E4u;
            // 0x2905e8: 0x24072722  addiu       $a3, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290608u;
            goto label_290608;
        }
    }
    ctx->pc = 0x2905ECu;
label_2905ec:
    // 0x2905ec: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2905ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2905f0:
    // 0x2905f0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2905f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2905f4:
    // 0x2905f4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2905f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2905f8:
    // 0x2905f8: 0xb043008f  sdl         $v1, 0x8F($v0)
    ctx->pc = 0x2905f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2905fc:
    // 0x2905fc: 0xb4430088  sdr         $v1, 0x88($v0)
    ctx->pc = 0x2905fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_290600:
    // 0x290600: 0x3e00008  jr          $ra
label_290604:
    if (ctx->pc == 0x290604u) {
        ctx->pc = 0x290604u;
            // 0x290604: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290608u;
        goto label_290608;
    }
    ctx->pc = 0x290600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290600u;
            // 0x290604: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290608u;
label_290608:
    // 0x290608: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x290608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29060c:
    // 0x29060c: 0x3e00008  jr          $ra
label_290610:
    if (ctx->pc == 0x290610u) {
        ctx->pc = 0x290614u;
        goto label_290614;
    }
    ctx->pc = 0x29060Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290614u;
label_290614:
    // 0x290614: 0x0  nop
    ctx->pc = 0x290614u;
    // NOP
label_290618:
    // 0x290618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29061c:
    // 0x29061c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_290620:
    // 0x290620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_290624:
    // 0x290624: 0xc0a4100  jal         func_290400
label_290628:
    if (ctx->pc == 0x290628u) {
        ctx->pc = 0x290628u;
            // 0x290628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29062Cu;
        goto label_29062c;
    }
    ctx->pc = 0x290624u;
    SET_GPR_U32(ctx, 31, 0x29062Cu);
    ctx->pc = 0x290628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290624u;
            // 0x290628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290400u;
    goto label_290400;
    ctx->pc = 0x29062Cu;
label_29062c:
    // 0x29062c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290630:
    // 0x290630: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
label_290634:
    if (ctx->pc == 0x290634u) {
        ctx->pc = 0x290634u;
            // 0x290634: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x290638u;
        goto label_290638;
    }
    ctx->pc = 0x290630u;
    {
        const bool branch_taken_0x290630 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x290634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290630u;
            // 0x290634: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290630) {
            ctx->pc = 0x29065Cu;
            goto label_29065c;
        }
    }
    ctx->pc = 0x290638u;
label_290638:
    // 0x290638: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x290638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_29063c:
    // 0x29063c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_290640:
    // 0x290640: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x290640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_290644:
    // 0x290644: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x290644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_290648:
    // 0x290648: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x290648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_29064c:
    // 0x29064c: 0xac640080  sw          $a0, 0x80($v1)
    ctx->pc = 0x29064cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
label_290650:
    // 0x290650: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x290650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_290654:
    // 0x290654: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x290654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_290658:
    // 0x290658: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x290658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_29065c:
    // 0x29065c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29065cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_290660:
    // 0x290660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290664:
    // 0x290664: 0x3e00008  jr          $ra
label_290668:
    if (ctx->pc == 0x290668u) {
        ctx->pc = 0x290668u;
            // 0x290668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29066Cu;
        goto label_29066c;
    }
    ctx->pc = 0x290664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290664u;
            // 0x290668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29066Cu;
label_29066c:
    // 0x29066c: 0x0  nop
    ctx->pc = 0x29066cu;
    // NOP
label_290670:
    // 0x290670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_290674:
    // 0x290674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x290674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_290678:
    // 0x290678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29067c:
    // 0x29067c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29067cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290680:
    // 0x290680: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x290680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_290684:
    // 0x290684: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_290688:
    if (ctx->pc == 0x290688u) {
        ctx->pc = 0x29068Cu;
        goto label_29068c;
    }
    ctx->pc = 0x290684u;
    {
        const bool branch_taken_0x290684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x290684) {
            ctx->pc = 0x290698u;
            goto label_290698;
        }
    }
    ctx->pc = 0x29068Cu;
label_29068c:
    // 0x29068c: 0xc0a5f2a  jal         func_297CA8
label_290690:
    if (ctx->pc == 0x290690u) {
        ctx->pc = 0x290694u;
        goto label_290694;
    }
    ctx->pc = 0x29068Cu;
    SET_GPR_U32(ctx, 31, 0x290694u);
    ctx->pc = 0x297CA8u;
    if (runtime->hasFunction(0x297CA8u)) {
        auto targetFn = runtime->lookupFunction(0x297CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290694u; }
        if (ctx->pc != 0x290694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297CA8_0x297ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290694u; }
        if (ctx->pc != 0x290694u) { return; }
    }
    ctx->pc = 0x290694u;
label_290694:
    // 0x290694: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x290694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_290698:
    // 0x290698: 0xc0a5ef6  jal         func_297BD8
label_29069c:
    if (ctx->pc == 0x29069Cu) {
        ctx->pc = 0x2906A0u;
        goto label_2906a0;
    }
    ctx->pc = 0x290698u;
    SET_GPR_U32(ctx, 31, 0x2906A0u);
    ctx->pc = 0x297BD8u;
    if (runtime->hasFunction(0x297BD8u)) {
        auto targetFn = runtime->lookupFunction(0x297BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2906A0u; }
        if (ctx->pc != 0x2906A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297BD8_0x297bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2906A0u; }
        if (ctx->pc != 0x2906A0u) { return; }
    }
    ctx->pc = 0x2906A0u;
label_2906a0:
    // 0x2906a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2906a4:
    if (ctx->pc == 0x2906A4u) {
        ctx->pc = 0x2906A4u;
            // 0x2906a4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2906A8u;
        goto label_2906a8;
    }
    ctx->pc = 0x2906A0u;
    {
        const bool branch_taken_0x2906a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2906A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906A0u;
            // 0x2906a4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906a0) {
            ctx->pc = 0x2906B0u;
            goto label_2906b0;
        }
    }
    ctx->pc = 0x2906A8u;
label_2906a8:
    // 0x2906a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2906ac:
    if (ctx->pc == 0x2906ACu) {
        ctx->pc = 0x2906ACu;
            // 0x2906ac: 0x24052715  addiu       $a1, $zero, 0x2715 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
        ctx->pc = 0x2906B0u;
        goto label_2906b0;
    }
    ctx->pc = 0x2906A8u;
    {
        const bool branch_taken_0x2906a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906A8u;
            // 0x2906ac: 0x24052715  addiu       $a1, $zero, 0x2715 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906a8) {
            ctx->pc = 0x2906D0u;
            goto label_2906d0;
        }
    }
    ctx->pc = 0x2906B0u;
label_2906b0:
    // 0x2906b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2906b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2906b4:
    // 0x2906b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2906b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2906b8:
    // 0x2906b8: 0x40f809  jalr        $v0
label_2906bc:
    if (ctx->pc == 0x2906BCu) {
        ctx->pc = 0x2906C0u;
        goto label_2906c0;
    }
    ctx->pc = 0x2906B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2906C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2906C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2906C0u; }
            if (ctx->pc != 0x2906C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2906C0u;
label_2906c0:
    // 0x2906c0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2906c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2906c4:
    // 0x2906c4: 0x24052711  addiu       $a1, $zero, 0x2711
    ctx->pc = 0x2906c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
label_2906c8:
    // 0x2906c8: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x2906c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2906cc:
    // 0x2906cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2906ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2906d0:
    // 0x2906d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2906d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2906d4:
    // 0x2906d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2906d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2906d8:
    // 0x2906d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2906d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2906dc:
    // 0x2906dc: 0x3e00008  jr          $ra
label_2906e0:
    if (ctx->pc == 0x2906E0u) {
        ctx->pc = 0x2906E0u;
            // 0x2906e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2906E4u;
        goto label_2906e4;
    }
    ctx->pc = 0x2906DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2906E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906DCu;
            // 0x2906e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2906E4u;
label_2906e4:
    // 0x2906e4: 0x0  nop
    ctx->pc = 0x2906e4u;
    // NOP
label_2906e8:
    // 0x2906e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2906e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2906ec:
    // 0x2906ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2906ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2906f0:
    // 0x2906f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2906f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2906f4:
    // 0x2906f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2906f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2906f8:
    // 0x2906f8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2906f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2906fc:
    // 0x2906fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_290700:
    if (ctx->pc == 0x290700u) {
        ctx->pc = 0x290700u;
            // 0x290700: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x290704u;
        goto label_290704;
    }
    ctx->pc = 0x2906FCu;
    {
        const bool branch_taken_0x2906fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906FCu;
            // 0x290700: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906fc) {
            ctx->pc = 0x290720u;
            goto label_290720;
        }
    }
    ctx->pc = 0x290704u;
label_290704:
    // 0x290704: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x290704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_290708:
    // 0x290708: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_29070c:
    if (ctx->pc == 0x29070Cu) {
        ctx->pc = 0x29070Cu;
            // 0x29070c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x290710u;
        goto label_290710;
    }
    ctx->pc = 0x290708u;
    {
        const bool branch_taken_0x290708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290708) {
            ctx->pc = 0x29070Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290708u;
            // 0x29070c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290710u;
            goto label_290710;
        }
    }
    ctx->pc = 0x290710u;
label_290710:
    // 0x290710: 0xc0a5f2a  jal         func_297CA8
label_290714:
    if (ctx->pc == 0x290714u) {
        ctx->pc = 0x290714u;
            // 0x290714: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x290718u;
        goto label_290718;
    }
    ctx->pc = 0x290710u;
    SET_GPR_U32(ctx, 31, 0x290718u);
    ctx->pc = 0x290714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290710u;
            // 0x290714: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297CA8u;
    if (runtime->hasFunction(0x297CA8u)) {
        auto targetFn = runtime->lookupFunction(0x297CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290718u; }
        if (ctx->pc != 0x290718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297CA8_0x297ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290718u; }
        if (ctx->pc != 0x290718u) { return; }
    }
    ctx->pc = 0x290718u;
label_290718:
    // 0x290718: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x290718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_29071c:
    // 0x29071c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29071cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_290720:
    // 0x290720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290724:
    // 0x290724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290728:
    // 0x290728: 0x3e00008  jr          $ra
label_29072c:
    if (ctx->pc == 0x29072Cu) {
        ctx->pc = 0x29072Cu;
            // 0x29072c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x290730u;
        goto label_290730;
    }
    ctx->pc = 0x290728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290728u;
            // 0x29072c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290730u;
label_290730:
    // 0x290730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290734:
    // 0x290734: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_290738:
    if (ctx->pc == 0x290738u) {
        ctx->pc = 0x290738u;
            // 0x290738: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29073Cu;
        goto label_29073c;
    }
    ctx->pc = 0x290734u;
    {
        const bool branch_taken_0x290734 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290734u;
            // 0x290738: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290734) {
            ctx->pc = 0x29074Cu;
            goto label_29074c;
        }
    }
    ctx->pc = 0x29073Cu;
label_29073c:
    // 0x29073c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x29073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_290740:
    // 0x290740: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x290740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_290744:
    // 0x290744: 0x10000008  b           . + 4 + (0x8 << 2)
label_290748:
    if (ctx->pc == 0x290748u) {
        ctx->pc = 0x290748u;
            // 0x290748: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x29074Cu;
        goto label_29074c;
    }
    ctx->pc = 0x290744u;
    {
        const bool branch_taken_0x290744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290744u;
            // 0x290748: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290744) {
            ctx->pc = 0x290768u;
            goto label_290768;
        }
    }
    ctx->pc = 0x29074Cu;
label_29074c:
    // 0x29074c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x29074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_290750:
    // 0x290750: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
label_290754:
    if (ctx->pc == 0x290754u) {
        ctx->pc = 0x290754u;
            // 0x290754: 0x24072722  addiu       $a3, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->pc = 0x290758u;
        goto label_290758;
    }
    ctx->pc = 0x290750u;
    {
        const bool branch_taken_0x290750 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x290750) {
            ctx->pc = 0x290754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290750u;
            // 0x290754: 0x24072722  addiu       $a3, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290768u;
            goto label_290768;
        }
    }
    ctx->pc = 0x290758u;
label_290758:
    // 0x290758: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x290758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_29075c:
    // 0x29075c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_290760:
    // 0x290760: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x290760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_290764:
    // 0x290764: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x290764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_290768:
    // 0x290768: 0x3e00008  jr          $ra
label_29076c:
    if (ctx->pc == 0x29076Cu) {
        ctx->pc = 0x29076Cu;
            // 0x29076c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290770u;
        goto label_290770;
    }
    ctx->pc = 0x290768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290768u;
            // 0x29076c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290770u;
label_290770:
    // 0x290770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290774:
    // 0x290774: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_290778:
    if (ctx->pc == 0x290778u) {
        ctx->pc = 0x290778u;
            // 0x290778: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29077Cu;
        goto label_29077c;
    }
    ctx->pc = 0x290774u;
    {
        const bool branch_taken_0x290774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290774u;
            // 0x290778: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290774) {
            ctx->pc = 0x29078Cu;
            goto label_29078c;
        }
    }
    ctx->pc = 0x29077Cu;
label_29077c:
    // 0x29077c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x29077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_290780:
    // 0x290780: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x290780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_290784:
    // 0x290784: 0x10000008  b           . + 4 + (0x8 << 2)
label_290788:
    if (ctx->pc == 0x290788u) {
        ctx->pc = 0x290788u;
            // 0x290788: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x29078Cu;
        goto label_29078c;
    }
    ctx->pc = 0x290784u;
    {
        const bool branch_taken_0x290784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290784u;
            // 0x290788: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290784) {
            ctx->pc = 0x2907A8u;
            goto label_2907a8;
        }
    }
    ctx->pc = 0x29078Cu;
label_29078c:
    // 0x29078c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x29078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_290790:
    // 0x290790: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
label_290794:
    if (ctx->pc == 0x290794u) {
        ctx->pc = 0x290794u;
            // 0x290794: 0x24072722  addiu       $a3, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->pc = 0x290798u;
        goto label_290798;
    }
    ctx->pc = 0x290790u;
    {
        const bool branch_taken_0x290790 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x290790) {
            ctx->pc = 0x290794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290790u;
            // 0x290794: 0x24072722  addiu       $a3, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2907A8u;
            goto label_2907a8;
        }
    }
    ctx->pc = 0x290798u;
label_290798:
    // 0x290798: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x290798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_29079c:
    // 0x29079c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x29079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2907a0:
    // 0x2907a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2907a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2907a4:
    // 0x2907a4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2907a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_2907a8:
    // 0x2907a8: 0x3e00008  jr          $ra
label_2907ac:
    if (ctx->pc == 0x2907ACu) {
        ctx->pc = 0x2907ACu;
            // 0x2907ac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2907B0u;
        goto label_2907b0;
    }
    ctx->pc = 0x2907A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2907ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907A8u;
            // 0x2907ac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2907B0u;
label_2907b0:
    // 0x2907b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2907b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2907b4:
    // 0x2907b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2907b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2907b8:
    // 0x2907b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2907b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2907bc:
    // 0x2907bc: 0xc0a80b0  jal         func_2A02C0
label_2907c0:
    if (ctx->pc == 0x2907C0u) {
        ctx->pc = 0x2907C0u;
            // 0x2907c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2907C4u;
        goto label_2907c4;
    }
    ctx->pc = 0x2907BCu;
    SET_GPR_U32(ctx, 31, 0x2907C4u);
    ctx->pc = 0x2907C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2907BCu;
            // 0x2907c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A02C0u;
    if (runtime->hasFunction(0x2A02C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2907C4u; }
        if (ctx->pc != 0x2907C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A02C0_0x2a02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2907C4u; }
        if (ctx->pc != 0x2907C4u) { return; }
    }
    ctx->pc = 0x2907C4u;
label_2907c4:
    // 0x2907c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2907c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2907c8:
    // 0x2907c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2907c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2907cc:
    // 0x2907cc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2907ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_2907d0:
    // 0x2907d0: 0x24022715  addiu       $v0, $zero, 0x2715
    ctx->pc = 0x2907d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
label_2907d4:
    // 0x2907d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2907d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2907d8:
    // 0x2907d8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2907d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2907dc:
    // 0x2907dc: 0x3e00008  jr          $ra
label_2907e0:
    if (ctx->pc == 0x2907E0u) {
        ctx->pc = 0x2907E0u;
            // 0x2907e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2907E4u;
        goto label_2907e4;
    }
    ctx->pc = 0x2907DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2907E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907DCu;
            // 0x2907e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2907E4u;
label_2907e4:
    // 0x2907e4: 0x0  nop
    ctx->pc = 0x2907e4u;
    // NOP
label_2907e8:
    // 0x2907e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2907e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2907ec:
    // 0x2907ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2907ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2907f0:
    // 0x2907f0: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x2907f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2907f4:
    // 0x2907f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2907f8:
    if (ctx->pc == 0x2907F8u) {
        ctx->pc = 0x2907F8u;
            // 0x2907f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2907FCu;
        goto label_2907fc;
    }
    ctx->pc = 0x2907F4u;
    {
        const bool branch_taken_0x2907f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907F4u;
            // 0x2907f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907f4) {
            ctx->pc = 0x290808u;
            goto label_290808;
        }
    }
    ctx->pc = 0x2907FCu;
label_2907fc:
    // 0x2907fc: 0xc0a80c2  jal         func_2A0308
label_290800:
    if (ctx->pc == 0x290800u) {
        ctx->pc = 0x290804u;
        goto label_290804;
    }
    ctx->pc = 0x2907FCu;
    SET_GPR_U32(ctx, 31, 0x290804u);
    ctx->pc = 0x2A0308u;
    if (runtime->hasFunction(0x2A0308u)) {
        auto targetFn = runtime->lookupFunction(0x2A0308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290804u; }
        if (ctx->pc != 0x290804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0308_0x2a0308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290804u; }
        if (ctx->pc != 0x290804u) { return; }
    }
    ctx->pc = 0x290804u;
label_290804:
    // 0x290804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290808:
    // 0x290808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29080c:
    // 0x29080c: 0x3e00008  jr          $ra
label_290810:
    if (ctx->pc == 0x290810u) {
        ctx->pc = 0x290810u;
            // 0x290810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x290814u;
        goto label_290814;
    }
    ctx->pc = 0x29080Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29080Cu;
            // 0x290810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290814u;
label_290814:
    // 0x290814: 0x0  nop
    ctx->pc = 0x290814u;
    // NOP
label_290818:
    // 0x290818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29081c:
    // 0x29081c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290820:
    // 0x290820: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_290824:
    if (ctx->pc == 0x290824u) {
        ctx->pc = 0x290824u;
            // 0x290824: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x290828u;
        goto label_290828;
    }
    ctx->pc = 0x290820u;
    {
        const bool branch_taken_0x290820 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290820u;
            // 0x290824: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290820) {
            ctx->pc = 0x290844u;
            goto label_290844;
        }
    }
    ctx->pc = 0x290828u;
label_290828:
    // 0x290828: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x290828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29082c:
    // 0x29082c: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x29082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_290830:
    // 0x290830: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x290830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_290834:
    // 0x290834: 0xc0a8186  jal         func_2A0618
label_290838:
    if (ctx->pc == 0x290838u) {
        ctx->pc = 0x290838u;
            // 0x290838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29083Cu;
        goto label_29083c;
    }
    ctx->pc = 0x290834u;
    SET_GPR_U32(ctx, 31, 0x29083Cu);
    ctx->pc = 0x290838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290834u;
            // 0x290838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0618u;
    if (runtime->hasFunction(0x2A0618u)) {
        auto targetFn = runtime->lookupFunction(0x2A0618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29083Cu; }
        if (ctx->pc != 0x29083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0618_0x2a0618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29083Cu; }
        if (ctx->pc != 0x29083Cu) { return; }
    }
    ctx->pc = 0x29083Cu;
label_29083c:
    // 0x29083c: 0x10000003  b           . + 4 + (0x3 << 2)
label_290840:
    if (ctx->pc == 0x290840u) {
        ctx->pc = 0x290840u;
            // 0x290840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x290844u;
        goto label_290844;
    }
    ctx->pc = 0x29083Cu;
    {
        const bool branch_taken_0x29083c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29083Cu;
            // 0x290840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29083c) {
            ctx->pc = 0x29084Cu;
            goto label_29084c;
        }
    }
    ctx->pc = 0x290844u;
label_290844:
    // 0x290844: 0x24022722  addiu       $v0, $zero, 0x2722
    ctx->pc = 0x290844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
label_290848:
    // 0x290848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29084c:
    // 0x29084c: 0x3e00008  jr          $ra
label_290850:
    if (ctx->pc == 0x290850u) {
        ctx->pc = 0x290850u;
            // 0x290850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x290854u;
        goto label_290854;
    }
    ctx->pc = 0x29084Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29084Cu;
            // 0x290850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290854u;
label_290854:
    // 0x290854: 0x0  nop
    ctx->pc = 0x290854u;
    // NOP
label_290858:
    // 0x290858: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x290858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_29085c:
    // 0x29085c: 0x24022722  addiu       $v0, $zero, 0x2722
    ctx->pc = 0x29085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
label_290860:
    // 0x290860: 0x3e00008  jr          $ra
label_290864:
    if (ctx->pc == 0x290864u) {
        ctx->pc = 0x290864u;
            // 0x290864: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x290868u;
        goto label_290868;
    }
    ctx->pc = 0x290860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290860u;
            // 0x290864: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290868u;
label_290868:
    // 0x290868: 0x3e00008  jr          $ra
label_29086c:
    if (ctx->pc == 0x29086Cu) {
        ctx->pc = 0x29086Cu;
            // 0x29086c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290870u;
        goto label_290870;
    }
    ctx->pc = 0x290868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290868u;
            // 0x29086c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290870u;
label_290870:
    // 0x290870: 0x3e00008  jr          $ra
label_290874:
    if (ctx->pc == 0x290874u) {
        ctx->pc = 0x290874u;
            // 0x290874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290878u;
        goto label_290878;
    }
    ctx->pc = 0x290870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290870u;
            // 0x290874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290878u;
label_290878:
    // 0x290878: 0x3e00008  jr          $ra
label_29087c:
    if (ctx->pc == 0x29087Cu) {
        ctx->pc = 0x29087Cu;
            // 0x29087c: 0x24022722  addiu       $v0, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->pc = 0x290880u;
        goto label_290880;
    }
    ctx->pc = 0x290878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290878u;
            // 0x29087c: 0x24022722  addiu       $v0, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290880u;
label_290880:
    // 0x290880: 0x3e00008  jr          $ra
label_290884:
    if (ctx->pc == 0x290884u) {
        ctx->pc = 0x290884u;
            // 0x290884: 0x24022722  addiu       $v0, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->pc = 0x290888u;
        goto label_290888;
    }
    ctx->pc = 0x290880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290880u;
            // 0x290884: 0x24022722  addiu       $v0, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290888u;
label_290888:
    // 0x290888: 0x3e00008  jr          $ra
label_29088c:
    if (ctx->pc == 0x29088Cu) {
        ctx->pc = 0x29088Cu;
            // 0x29088c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290890u;
        goto label_290890;
    }
    ctx->pc = 0x290888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290888u;
            // 0x29088c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290890u;
label_290890:
    // 0x290890: 0x3e00008  jr          $ra
label_290894:
    if (ctx->pc == 0x290894u) {
        ctx->pc = 0x290894u;
            // 0x290894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290898u;
        goto label_290898;
    }
    ctx->pc = 0x290890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290890u;
            // 0x290894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290898u;
label_290898:
    // 0x290898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29089c:
    // 0x29089c: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_2908a0:
    if (ctx->pc == 0x2908A0u) {
        ctx->pc = 0x2908A0u;
            // 0x2908a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2908A4u;
        goto label_2908a4;
    }
    ctx->pc = 0x29089Cu;
    {
        const bool branch_taken_0x29089c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2908A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29089Cu;
            // 0x2908a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29089c) {
            ctx->pc = 0x2908C8u;
            goto label_2908c8;
        }
    }
    ctx->pc = 0x2908A4u;
label_2908a4:
    // 0x2908a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2908a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2908a8:
    // 0x2908a8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_2908ac:
    if (ctx->pc == 0x2908ACu) {
        ctx->pc = 0x2908ACu;
            // 0x2908ac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2908B0u;
        goto label_2908b0;
    }
    ctx->pc = 0x2908A8u;
    {
        const bool branch_taken_0x2908a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2908ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908A8u;
            // 0x2908ac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908a8) {
            ctx->pc = 0x2908C8u;
            goto label_2908c8;
        }
    }
    ctx->pc = 0x2908B0u;
label_2908b0:
    // 0x2908b0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_2908b4:
    if (ctx->pc == 0x2908B4u) {
        ctx->pc = 0x2908B4u;
            // 0x2908b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2908B8u;
        goto label_2908b8;
    }
    ctx->pc = 0x2908B0u;
    {
        const bool branch_taken_0x2908b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2908B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908B0u;
            // 0x2908b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908b0) {
            ctx->pc = 0x2908C8u;
            goto label_2908c8;
        }
    }
    ctx->pc = 0x2908B8u;
label_2908b8:
    // 0x2908b8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2908bc:
    if (ctx->pc == 0x2908BCu) {
        ctx->pc = 0x2908BCu;
            // 0x2908bc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2908C0u;
        goto label_2908c0;
    }
    ctx->pc = 0x2908B8u;
    {
        const bool branch_taken_0x2908b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2908BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908B8u;
            // 0x2908bc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908b8) {
            ctx->pc = 0x2908C8u;
            goto label_2908c8;
        }
    }
    ctx->pc = 0x2908C0u;
label_2908c0:
    // 0x2908c0: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
label_2908c4:
    if (ctx->pc == 0x2908C4u) {
        ctx->pc = 0x2908C4u;
            // 0x2908c4: 0x24032722  addiu       $v1, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->pc = 0x2908C8u;
        goto label_2908c8;
    }
    ctx->pc = 0x2908C0u;
    {
        const bool branch_taken_0x2908c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2908c0) {
            ctx->pc = 0x2908C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2908C0u;
            // 0x2908c4: 0x24032722  addiu       $v1, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2908CCu;
            goto label_2908cc;
        }
    }
    ctx->pc = 0x2908C8u;
label_2908c8:
    // 0x2908c8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2908c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2908cc:
    // 0x2908cc: 0x3e00008  jr          $ra
label_2908d0:
    if (ctx->pc == 0x2908D0u) {
        ctx->pc = 0x2908D0u;
            // 0x2908d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2908D4u;
        goto label_2908d4;
    }
    ctx->pc = 0x2908CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2908D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908CCu;
            // 0x2908d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2908D4u;
label_2908d4:
    // 0x2908d4: 0x0  nop
    ctx->pc = 0x2908d4u;
    // NOP
label_2908d8:
    // 0x2908d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2908d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2908dc:
    // 0x2908dc: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_2908e0:
    if (ctx->pc == 0x2908E0u) {
        ctx->pc = 0x2908E0u;
            // 0x2908e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2908E4u;
        goto label_2908e4;
    }
    ctx->pc = 0x2908DCu;
    {
        const bool branch_taken_0x2908dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2908E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908DCu;
            // 0x2908e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908dc) {
            ctx->pc = 0x290908u;
            goto label_290908;
        }
    }
    ctx->pc = 0x2908E4u;
label_2908e4:
    // 0x2908e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2908e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2908e8:
    // 0x2908e8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_2908ec:
    if (ctx->pc == 0x2908ECu) {
        ctx->pc = 0x2908ECu;
            // 0x2908ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2908F0u;
        goto label_2908f0;
    }
    ctx->pc = 0x2908E8u;
    {
        const bool branch_taken_0x2908e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2908ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908E8u;
            // 0x2908ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908e8) {
            ctx->pc = 0x290908u;
            goto label_290908;
        }
    }
    ctx->pc = 0x2908F0u;
label_2908f0:
    // 0x2908f0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_2908f4:
    if (ctx->pc == 0x2908F4u) {
        ctx->pc = 0x2908F4u;
            // 0x2908f4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2908F8u;
        goto label_2908f8;
    }
    ctx->pc = 0x2908F0u;
    {
        const bool branch_taken_0x2908f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2908F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908F0u;
            // 0x2908f4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908f0) {
            ctx->pc = 0x290908u;
            goto label_290908;
        }
    }
    ctx->pc = 0x2908F8u;
label_2908f8:
    // 0x2908f8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2908fc:
    if (ctx->pc == 0x2908FCu) {
        ctx->pc = 0x2908FCu;
            // 0x2908fc: 0x38a20007  xori        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
        ctx->pc = 0x290900u;
        goto label_290900;
    }
    ctx->pc = 0x2908F8u;
    {
        const bool branch_taken_0x2908f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2908FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908F8u;
            // 0x2908fc: 0x38a20007  xori        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908f8) {
            ctx->pc = 0x290908u;
            goto label_290908;
        }
    }
    ctx->pc = 0x290900u;
label_290900:
    // 0x290900: 0x24032722  addiu       $v1, $zero, 0x2722
    ctx->pc = 0x290900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
label_290904:
    // 0x290904: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x290904u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_290908:
    // 0x290908: 0x3e00008  jr          $ra
label_29090c:
    if (ctx->pc == 0x29090Cu) {
        ctx->pc = 0x29090Cu;
            // 0x29090c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290910u;
        goto label_290910;
    }
    ctx->pc = 0x290908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290908u;
            // 0x29090c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290910u;
label_290910:
    // 0x290910: 0x3e00008  jr          $ra
label_290914:
    if (ctx->pc == 0x290914u) {
        ctx->pc = 0x290914u;
            // 0x290914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290918u;
        goto label_290918;
    }
    ctx->pc = 0x290910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290910u;
            // 0x290914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290918u;
label_290918:
    // 0x290918: 0x3e00008  jr          $ra
label_29091c:
    if (ctx->pc == 0x29091Cu) {
        ctx->pc = 0x29091Cu;
            // 0x29091c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290920u;
        goto label_290920;
    }
    ctx->pc = 0x290918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29091Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290918u;
            // 0x29091c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290920u;
label_290920:
    // 0x290920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290924:
    // 0x290924: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_290928:
    if (ctx->pc == 0x290928u) {
        ctx->pc = 0x290928u;
            // 0x290928: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29092Cu;
        goto label_29092c;
    }
    ctx->pc = 0x290924u;
    {
        const bool branch_taken_0x290924 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290924u;
            // 0x290928: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290924) {
            ctx->pc = 0x290934u;
            goto label_290934;
        }
    }
    ctx->pc = 0x29092Cu;
label_29092c:
    // 0x29092c: 0x10000002  b           . + 4 + (0x2 << 2)
label_290930:
    if (ctx->pc == 0x290930u) {
        ctx->pc = 0x290930u;
            // 0x290930: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x290934u;
        goto label_290934;
    }
    ctx->pc = 0x29092Cu;
    {
        const bool branch_taken_0x29092c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29092Cu;
            // 0x290930: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29092c) {
            ctx->pc = 0x290938u;
            goto label_290938;
        }
    }
    ctx->pc = 0x290934u;
label_290934:
    // 0x290934: 0x24032722  addiu       $v1, $zero, 0x2722
    ctx->pc = 0x290934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
label_290938:
    // 0x290938: 0x3e00008  jr          $ra
label_29093c:
    if (ctx->pc == 0x29093Cu) {
        ctx->pc = 0x29093Cu;
            // 0x29093c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290940u;
        goto label_290940;
    }
    ctx->pc = 0x290938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290938u;
            // 0x29093c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290940u;
label_290940:
    // 0x290940: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x290940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_290944:
    // 0x290944: 0x24022722  addiu       $v0, $zero, 0x2722
    ctx->pc = 0x290944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
label_290948:
    // 0x290948: 0x3e00008  jr          $ra
label_29094c:
    if (ctx->pc == 0x29094Cu) {
        ctx->pc = 0x29094Cu;
            // 0x29094c: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x290950u;
        goto label_290950;
    }
    ctx->pc = 0x290948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290948u;
            // 0x29094c: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290950u;
label_290950:
    // 0x290950: 0x3e00008  jr          $ra
label_290954:
    if (ctx->pc == 0x290954u) {
        ctx->pc = 0x290954u;
            // 0x290954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290958u;
        goto label_290958;
    }
    ctx->pc = 0x290950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290950u;
            // 0x290954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290958u;
label_290958:
    // 0x290958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29095c:
    // 0x29095c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_290960:
    // 0x290960: 0xc0a8d8a  jal         func_2A3628
label_290964:
    if (ctx->pc == 0x290964u) {
        ctx->pc = 0x290968u;
        goto label_290968;
    }
    ctx->pc = 0x290960u;
    SET_GPR_U32(ctx, 31, 0x290968u);
    ctx->pc = 0x2A3628u;
    if (runtime->hasFunction(0x2A3628u)) {
        auto targetFn = runtime->lookupFunction(0x2A3628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290968u; }
        if (ctx->pc != 0x290968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3628_0x2a3628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290968u; }
        if (ctx->pc != 0x290968u) { return; }
    }
    ctx->pc = 0x290968u;
label_290968:
    // 0x290968: 0xc0a8d48  jal         func_2A3520
label_29096c:
    if (ctx->pc == 0x29096Cu) {
        ctx->pc = 0x29096Cu;
            // 0x29096c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290970u;
        goto label_290970;
    }
    ctx->pc = 0x290968u;
    SET_GPR_U32(ctx, 31, 0x290970u);
    ctx->pc = 0x29096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290968u;
            // 0x29096c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3520u;
    if (runtime->hasFunction(0x2A3520u)) {
        auto targetFn = runtime->lookupFunction(0x2A3520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290970u; }
        if (ctx->pc != 0x290970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3520_0x2a3520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290970u; }
        if (ctx->pc != 0x290970u) { return; }
    }
    ctx->pc = 0x290970u;
label_290970:
    // 0x290970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290974:
    // 0x290974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290978:
    // 0x290978: 0x3e00008  jr          $ra
label_29097c:
    if (ctx->pc == 0x29097Cu) {
        ctx->pc = 0x29097Cu;
            // 0x29097c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x290980u;
        goto label_290980;
    }
    ctx->pc = 0x290978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290978u;
            // 0x29097c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290980u;
label_290980:
    // 0x290980: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x290980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_290984:
    // 0x290984: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_290988:
    if (ctx->pc == 0x290988u) {
        ctx->pc = 0x290988u;
            // 0x290988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29098Cu;
        goto label_29098c;
    }
    ctx->pc = 0x290984u;
    {
        const bool branch_taken_0x290984 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290984u;
            // 0x290988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290984) {
            ctx->pc = 0x29099Cu;
            goto label_29099c;
        }
    }
    ctx->pc = 0x29098Cu;
label_29098c:
    // 0x29098c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_290990:
    // 0x290990: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x290990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_290994:
    // 0x290994: 0x10000002  b           . + 4 + (0x2 << 2)
label_290998:
    if (ctx->pc == 0x290998u) {
        ctx->pc = 0x290998u;
            // 0x290998: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x29099Cu;
        goto label_29099c;
    }
    ctx->pc = 0x290994u;
    {
        const bool branch_taken_0x290994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290994u;
            // 0x290998: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290994) {
            ctx->pc = 0x2909A0u;
            goto label_2909a0;
        }
    }
    ctx->pc = 0x29099Cu;
label_29099c:
    // 0x29099c: 0x24072722  addiu       $a3, $zero, 0x2722
    ctx->pc = 0x29099cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
label_2909a0:
    // 0x2909a0: 0x3e00008  jr          $ra
label_2909a4:
    if (ctx->pc == 0x2909A4u) {
        ctx->pc = 0x2909A4u;
            // 0x2909a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2909A8u;
        goto label_2909a8;
    }
    ctx->pc = 0x2909A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2909A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909A0u;
            // 0x2909a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2909A8u;
label_2909a8:
    // 0x2909a8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2909a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2909ac:
    // 0x2909ac: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_2909b0:
    if (ctx->pc == 0x2909B0u) {
        ctx->pc = 0x2909B0u;
            // 0x2909b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2909B4u;
        goto label_2909b4;
    }
    ctx->pc = 0x2909ACu;
    {
        const bool branch_taken_0x2909ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2909B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909ACu;
            // 0x2909b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909ac) {
            ctx->pc = 0x2909C4u;
            goto label_2909c4;
        }
    }
    ctx->pc = 0x2909B4u;
label_2909b4:
    // 0x2909b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2909b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2909b8:
    // 0x2909b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2909b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2909bc:
    // 0x2909bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2909c0:
    if (ctx->pc == 0x2909C0u) {
        ctx->pc = 0x2909C0u;
            // 0x2909c0: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2909C4u;
        goto label_2909c4;
    }
    ctx->pc = 0x2909BCu;
    {
        const bool branch_taken_0x2909bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909BCu;
            // 0x2909c0: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909bc) {
            ctx->pc = 0x2909C8u;
            goto label_2909c8;
        }
    }
    ctx->pc = 0x2909C4u;
label_2909c4:
    // 0x2909c4: 0x24072722  addiu       $a3, $zero, 0x2722
    ctx->pc = 0x2909c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
label_2909c8:
    // 0x2909c8: 0x3e00008  jr          $ra
label_2909cc:
    if (ctx->pc == 0x2909CCu) {
        ctx->pc = 0x2909CCu;
            // 0x2909cc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2909D0u;
        goto label_2909d0;
    }
    ctx->pc = 0x2909C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2909CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909C8u;
            // 0x2909cc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2909D0u;
label_2909d0:
    // 0x2909d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2909d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2909d4:
    // 0x2909d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2909d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2909d8:
    // 0x2909d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2909d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2909dc:
    // 0x2909dc: 0xc0a80b0  jal         func_2A02C0
label_2909e0:
    if (ctx->pc == 0x2909E0u) {
        ctx->pc = 0x2909E0u;
            // 0x2909e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2909E4u;
        goto label_2909e4;
    }
    ctx->pc = 0x2909DCu;
    SET_GPR_U32(ctx, 31, 0x2909E4u);
    ctx->pc = 0x2909E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2909DCu;
            // 0x2909e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A02C0u;
    if (runtime->hasFunction(0x2A02C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2909E4u; }
        if (ctx->pc != 0x2909E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A02C0_0x2a02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2909E4u; }
        if (ctx->pc != 0x2909E4u) { return; }
    }
    ctx->pc = 0x2909E4u;
label_2909e4:
    // 0x2909e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2909e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2909e8:
    // 0x2909e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2909e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2909ec:
    // 0x2909ec: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2909ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_2909f0:
    // 0x2909f0: 0x24022715  addiu       $v0, $zero, 0x2715
    ctx->pc = 0x2909f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
label_2909f4:
    // 0x2909f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2909f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2909f8:
    // 0x2909f8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2909f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2909fc:
    // 0x2909fc: 0x3e00008  jr          $ra
label_290a00:
    if (ctx->pc == 0x290A00u) {
        ctx->pc = 0x290A00u;
            // 0x290a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x290A04u;
        goto label_290a04;
    }
    ctx->pc = 0x2909FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909FCu;
            // 0x290a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290A04u;
label_290a04:
    // 0x290a04: 0x0  nop
    ctx->pc = 0x290a04u;
    // NOP
label_290a08:
    // 0x290a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_290a0c:
    // 0x290a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_290a10:
    // 0x290a10: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x290a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_290a14:
    // 0x290a14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_290a18:
    if (ctx->pc == 0x290A18u) {
        ctx->pc = 0x290A18u;
            // 0x290a18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x290A1Cu;
        goto label_290a1c;
    }
    ctx->pc = 0x290A14u;
    {
        const bool branch_taken_0x290a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A14u;
            // 0x290a18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a14) {
            ctx->pc = 0x290A28u;
            goto label_290a28;
        }
    }
    ctx->pc = 0x290A1Cu;
label_290a1c:
    // 0x290a1c: 0xc0a80c2  jal         func_2A0308
label_290a20:
    if (ctx->pc == 0x290A20u) {
        ctx->pc = 0x290A24u;
        goto label_290a24;
    }
    ctx->pc = 0x290A1Cu;
    SET_GPR_U32(ctx, 31, 0x290A24u);
    ctx->pc = 0x2A0308u;
    if (runtime->hasFunction(0x2A0308u)) {
        auto targetFn = runtime->lookupFunction(0x2A0308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A24u; }
        if (ctx->pc != 0x290A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0308_0x2a0308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A24u; }
        if (ctx->pc != 0x290A24u) { return; }
    }
    ctx->pc = 0x290A24u;
label_290a24:
    // 0x290a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290a28:
    // 0x290a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290a2c:
    // 0x290a2c: 0x3e00008  jr          $ra
label_290a30:
    if (ctx->pc == 0x290A30u) {
        ctx->pc = 0x290A30u;
            // 0x290a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x290A34u;
        goto label_290a34;
    }
    ctx->pc = 0x290A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A2Cu;
            // 0x290a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290A34u;
label_290a34:
    // 0x290a34: 0x0  nop
    ctx->pc = 0x290a34u;
    // NOP
label_290a38:
    // 0x290a38: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x290a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_290a3c:
    // 0x290a3c: 0x24022722  addiu       $v0, $zero, 0x2722
    ctx->pc = 0x290a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
label_290a40:
    // 0x290a40: 0x3e00008  jr          $ra
label_290a44:
    if (ctx->pc == 0x290A44u) {
        ctx->pc = 0x290A44u;
            // 0x290a44: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x290A48u;
        goto label_290a48;
    }
    ctx->pc = 0x290A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A40u;
            // 0x290a44: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290A48u;
label_290a48:
    // 0x290a48: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x290a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_290a4c:
    // 0x290a4c: 0x24022722  addiu       $v0, $zero, 0x2722
    ctx->pc = 0x290a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
label_290a50:
    // 0x290a50: 0x3e00008  jr          $ra
label_290a54:
    if (ctx->pc == 0x290A54u) {
        ctx->pc = 0x290A54u;
            // 0x290a54: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x290A58u;
        goto label_fallthrough_0x290a50;
    }
    ctx->pc = 0x290A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A50u;
            // 0x290a54: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x290a50:
    ctx->pc = 0x290A58u;
    ctx->pc = 0x290a58u;
}
