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

// Function: sub_001601C0
// Address: 0x1601c0 - 0x160750
void sub_001601C0_0x1601c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001601C0_0x1601c0");
#endif

    switch (ctx->pc) {
        case 0x1601c0u: goto label_1601c0;
        case 0x1601c4u: goto label_1601c4;
        case 0x1601c8u: goto label_1601c8;
        case 0x1601ccu: goto label_1601cc;
        case 0x1601d0u: goto label_1601d0;
        case 0x1601d4u: goto label_1601d4;
        case 0x1601d8u: goto label_1601d8;
        case 0x1601dcu: goto label_1601dc;
        case 0x1601e0u: goto label_1601e0;
        case 0x1601e4u: goto label_1601e4;
        case 0x1601e8u: goto label_1601e8;
        case 0x1601ecu: goto label_1601ec;
        case 0x1601f0u: goto label_1601f0;
        case 0x1601f4u: goto label_1601f4;
        case 0x1601f8u: goto label_1601f8;
        case 0x1601fcu: goto label_1601fc;
        case 0x160200u: goto label_160200;
        case 0x160204u: goto label_160204;
        case 0x160208u: goto label_160208;
        case 0x16020cu: goto label_16020c;
        case 0x160210u: goto label_160210;
        case 0x160214u: goto label_160214;
        case 0x160218u: goto label_160218;
        case 0x16021cu: goto label_16021c;
        case 0x160220u: goto label_160220;
        case 0x160224u: goto label_160224;
        case 0x160228u: goto label_160228;
        case 0x16022cu: goto label_16022c;
        case 0x160230u: goto label_160230;
        case 0x160234u: goto label_160234;
        case 0x160238u: goto label_160238;
        case 0x16023cu: goto label_16023c;
        case 0x160240u: goto label_160240;
        case 0x160244u: goto label_160244;
        case 0x160248u: goto label_160248;
        case 0x16024cu: goto label_16024c;
        case 0x160250u: goto label_160250;
        case 0x160254u: goto label_160254;
        case 0x160258u: goto label_160258;
        case 0x16025cu: goto label_16025c;
        case 0x160260u: goto label_160260;
        case 0x160264u: goto label_160264;
        case 0x160268u: goto label_160268;
        case 0x16026cu: goto label_16026c;
        case 0x160270u: goto label_160270;
        case 0x160274u: goto label_160274;
        case 0x160278u: goto label_160278;
        case 0x16027cu: goto label_16027c;
        case 0x160280u: goto label_160280;
        case 0x160284u: goto label_160284;
        case 0x160288u: goto label_160288;
        case 0x16028cu: goto label_16028c;
        case 0x160290u: goto label_160290;
        case 0x160294u: goto label_160294;
        case 0x160298u: goto label_160298;
        case 0x16029cu: goto label_16029c;
        case 0x1602a0u: goto label_1602a0;
        case 0x1602a4u: goto label_1602a4;
        case 0x1602a8u: goto label_1602a8;
        case 0x1602acu: goto label_1602ac;
        case 0x1602b0u: goto label_1602b0;
        case 0x1602b4u: goto label_1602b4;
        case 0x1602b8u: goto label_1602b8;
        case 0x1602bcu: goto label_1602bc;
        case 0x1602c0u: goto label_1602c0;
        case 0x1602c4u: goto label_1602c4;
        case 0x1602c8u: goto label_1602c8;
        case 0x1602ccu: goto label_1602cc;
        case 0x1602d0u: goto label_1602d0;
        case 0x1602d4u: goto label_1602d4;
        case 0x1602d8u: goto label_1602d8;
        case 0x1602dcu: goto label_1602dc;
        case 0x1602e0u: goto label_1602e0;
        case 0x1602e4u: goto label_1602e4;
        case 0x1602e8u: goto label_1602e8;
        case 0x1602ecu: goto label_1602ec;
        case 0x1602f0u: goto label_1602f0;
        case 0x1602f4u: goto label_1602f4;
        case 0x1602f8u: goto label_1602f8;
        case 0x1602fcu: goto label_1602fc;
        case 0x160300u: goto label_160300;
        case 0x160304u: goto label_160304;
        case 0x160308u: goto label_160308;
        case 0x16030cu: goto label_16030c;
        case 0x160310u: goto label_160310;
        case 0x160314u: goto label_160314;
        case 0x160318u: goto label_160318;
        case 0x16031cu: goto label_16031c;
        case 0x160320u: goto label_160320;
        case 0x160324u: goto label_160324;
        case 0x160328u: goto label_160328;
        case 0x16032cu: goto label_16032c;
        case 0x160330u: goto label_160330;
        case 0x160334u: goto label_160334;
        case 0x160338u: goto label_160338;
        case 0x16033cu: goto label_16033c;
        case 0x160340u: goto label_160340;
        case 0x160344u: goto label_160344;
        case 0x160348u: goto label_160348;
        case 0x16034cu: goto label_16034c;
        case 0x160350u: goto label_160350;
        case 0x160354u: goto label_160354;
        case 0x160358u: goto label_160358;
        case 0x16035cu: goto label_16035c;
        case 0x160360u: goto label_160360;
        case 0x160364u: goto label_160364;
        case 0x160368u: goto label_160368;
        case 0x16036cu: goto label_16036c;
        case 0x160370u: goto label_160370;
        case 0x160374u: goto label_160374;
        case 0x160378u: goto label_160378;
        case 0x16037cu: goto label_16037c;
        case 0x160380u: goto label_160380;
        case 0x160384u: goto label_160384;
        case 0x160388u: goto label_160388;
        case 0x16038cu: goto label_16038c;
        case 0x160390u: goto label_160390;
        case 0x160394u: goto label_160394;
        case 0x160398u: goto label_160398;
        case 0x16039cu: goto label_16039c;
        case 0x1603a0u: goto label_1603a0;
        case 0x1603a4u: goto label_1603a4;
        case 0x1603a8u: goto label_1603a8;
        case 0x1603acu: goto label_1603ac;
        case 0x1603b0u: goto label_1603b0;
        case 0x1603b4u: goto label_1603b4;
        case 0x1603b8u: goto label_1603b8;
        case 0x1603bcu: goto label_1603bc;
        case 0x1603c0u: goto label_1603c0;
        case 0x1603c4u: goto label_1603c4;
        case 0x1603c8u: goto label_1603c8;
        case 0x1603ccu: goto label_1603cc;
        case 0x1603d0u: goto label_1603d0;
        case 0x1603d4u: goto label_1603d4;
        case 0x1603d8u: goto label_1603d8;
        case 0x1603dcu: goto label_1603dc;
        case 0x1603e0u: goto label_1603e0;
        case 0x1603e4u: goto label_1603e4;
        case 0x1603e8u: goto label_1603e8;
        case 0x1603ecu: goto label_1603ec;
        case 0x1603f0u: goto label_1603f0;
        case 0x1603f4u: goto label_1603f4;
        case 0x1603f8u: goto label_1603f8;
        case 0x1603fcu: goto label_1603fc;
        case 0x160400u: goto label_160400;
        case 0x160404u: goto label_160404;
        case 0x160408u: goto label_160408;
        case 0x16040cu: goto label_16040c;
        case 0x160410u: goto label_160410;
        case 0x160414u: goto label_160414;
        case 0x160418u: goto label_160418;
        case 0x16041cu: goto label_16041c;
        case 0x160420u: goto label_160420;
        case 0x160424u: goto label_160424;
        case 0x160428u: goto label_160428;
        case 0x16042cu: goto label_16042c;
        case 0x160430u: goto label_160430;
        case 0x160434u: goto label_160434;
        case 0x160438u: goto label_160438;
        case 0x16043cu: goto label_16043c;
        case 0x160440u: goto label_160440;
        case 0x160444u: goto label_160444;
        case 0x160448u: goto label_160448;
        case 0x16044cu: goto label_16044c;
        case 0x160450u: goto label_160450;
        case 0x160454u: goto label_160454;
        case 0x160458u: goto label_160458;
        case 0x16045cu: goto label_16045c;
        case 0x160460u: goto label_160460;
        case 0x160464u: goto label_160464;
        case 0x160468u: goto label_160468;
        case 0x16046cu: goto label_16046c;
        case 0x160470u: goto label_160470;
        case 0x160474u: goto label_160474;
        case 0x160478u: goto label_160478;
        case 0x16047cu: goto label_16047c;
        case 0x160480u: goto label_160480;
        case 0x160484u: goto label_160484;
        case 0x160488u: goto label_160488;
        case 0x16048cu: goto label_16048c;
        case 0x160490u: goto label_160490;
        case 0x160494u: goto label_160494;
        case 0x160498u: goto label_160498;
        case 0x16049cu: goto label_16049c;
        case 0x1604a0u: goto label_1604a0;
        case 0x1604a4u: goto label_1604a4;
        case 0x1604a8u: goto label_1604a8;
        case 0x1604acu: goto label_1604ac;
        case 0x1604b0u: goto label_1604b0;
        case 0x1604b4u: goto label_1604b4;
        case 0x1604b8u: goto label_1604b8;
        case 0x1604bcu: goto label_1604bc;
        case 0x1604c0u: goto label_1604c0;
        case 0x1604c4u: goto label_1604c4;
        case 0x1604c8u: goto label_1604c8;
        case 0x1604ccu: goto label_1604cc;
        case 0x1604d0u: goto label_1604d0;
        case 0x1604d4u: goto label_1604d4;
        case 0x1604d8u: goto label_1604d8;
        case 0x1604dcu: goto label_1604dc;
        case 0x1604e0u: goto label_1604e0;
        case 0x1604e4u: goto label_1604e4;
        case 0x1604e8u: goto label_1604e8;
        case 0x1604ecu: goto label_1604ec;
        case 0x1604f0u: goto label_1604f0;
        case 0x1604f4u: goto label_1604f4;
        case 0x1604f8u: goto label_1604f8;
        case 0x1604fcu: goto label_1604fc;
        case 0x160500u: goto label_160500;
        case 0x160504u: goto label_160504;
        case 0x160508u: goto label_160508;
        case 0x16050cu: goto label_16050c;
        case 0x160510u: goto label_160510;
        case 0x160514u: goto label_160514;
        case 0x160518u: goto label_160518;
        case 0x16051cu: goto label_16051c;
        case 0x160520u: goto label_160520;
        case 0x160524u: goto label_160524;
        case 0x160528u: goto label_160528;
        case 0x16052cu: goto label_16052c;
        case 0x160530u: goto label_160530;
        case 0x160534u: goto label_160534;
        case 0x160538u: goto label_160538;
        case 0x16053cu: goto label_16053c;
        case 0x160540u: goto label_160540;
        case 0x160544u: goto label_160544;
        case 0x160548u: goto label_160548;
        case 0x16054cu: goto label_16054c;
        case 0x160550u: goto label_160550;
        case 0x160554u: goto label_160554;
        case 0x160558u: goto label_160558;
        case 0x16055cu: goto label_16055c;
        case 0x160560u: goto label_160560;
        case 0x160564u: goto label_160564;
        case 0x160568u: goto label_160568;
        case 0x16056cu: goto label_16056c;
        case 0x160570u: goto label_160570;
        case 0x160574u: goto label_160574;
        case 0x160578u: goto label_160578;
        case 0x16057cu: goto label_16057c;
        case 0x160580u: goto label_160580;
        case 0x160584u: goto label_160584;
        case 0x160588u: goto label_160588;
        case 0x16058cu: goto label_16058c;
        case 0x160590u: goto label_160590;
        case 0x160594u: goto label_160594;
        case 0x160598u: goto label_160598;
        case 0x16059cu: goto label_16059c;
        case 0x1605a0u: goto label_1605a0;
        case 0x1605a4u: goto label_1605a4;
        case 0x1605a8u: goto label_1605a8;
        case 0x1605acu: goto label_1605ac;
        case 0x1605b0u: goto label_1605b0;
        case 0x1605b4u: goto label_1605b4;
        case 0x1605b8u: goto label_1605b8;
        case 0x1605bcu: goto label_1605bc;
        case 0x1605c0u: goto label_1605c0;
        case 0x1605c4u: goto label_1605c4;
        case 0x1605c8u: goto label_1605c8;
        case 0x1605ccu: goto label_1605cc;
        case 0x1605d0u: goto label_1605d0;
        case 0x1605d4u: goto label_1605d4;
        case 0x1605d8u: goto label_1605d8;
        case 0x1605dcu: goto label_1605dc;
        case 0x1605e0u: goto label_1605e0;
        case 0x1605e4u: goto label_1605e4;
        case 0x1605e8u: goto label_1605e8;
        case 0x1605ecu: goto label_1605ec;
        case 0x1605f0u: goto label_1605f0;
        case 0x1605f4u: goto label_1605f4;
        case 0x1605f8u: goto label_1605f8;
        case 0x1605fcu: goto label_1605fc;
        case 0x160600u: goto label_160600;
        case 0x160604u: goto label_160604;
        case 0x160608u: goto label_160608;
        case 0x16060cu: goto label_16060c;
        case 0x160610u: goto label_160610;
        case 0x160614u: goto label_160614;
        case 0x160618u: goto label_160618;
        case 0x16061cu: goto label_16061c;
        case 0x160620u: goto label_160620;
        case 0x160624u: goto label_160624;
        case 0x160628u: goto label_160628;
        case 0x16062cu: goto label_16062c;
        case 0x160630u: goto label_160630;
        case 0x160634u: goto label_160634;
        case 0x160638u: goto label_160638;
        case 0x16063cu: goto label_16063c;
        case 0x160640u: goto label_160640;
        case 0x160644u: goto label_160644;
        case 0x160648u: goto label_160648;
        case 0x16064cu: goto label_16064c;
        case 0x160650u: goto label_160650;
        case 0x160654u: goto label_160654;
        case 0x160658u: goto label_160658;
        case 0x16065cu: goto label_16065c;
        case 0x160660u: goto label_160660;
        case 0x160664u: goto label_160664;
        case 0x160668u: goto label_160668;
        case 0x16066cu: goto label_16066c;
        case 0x160670u: goto label_160670;
        case 0x160674u: goto label_160674;
        case 0x160678u: goto label_160678;
        case 0x16067cu: goto label_16067c;
        case 0x160680u: goto label_160680;
        case 0x160684u: goto label_160684;
        case 0x160688u: goto label_160688;
        case 0x16068cu: goto label_16068c;
        case 0x160690u: goto label_160690;
        case 0x160694u: goto label_160694;
        case 0x160698u: goto label_160698;
        case 0x16069cu: goto label_16069c;
        case 0x1606a0u: goto label_1606a0;
        case 0x1606a4u: goto label_1606a4;
        case 0x1606a8u: goto label_1606a8;
        case 0x1606acu: goto label_1606ac;
        case 0x1606b0u: goto label_1606b0;
        case 0x1606b4u: goto label_1606b4;
        case 0x1606b8u: goto label_1606b8;
        case 0x1606bcu: goto label_1606bc;
        case 0x1606c0u: goto label_1606c0;
        case 0x1606c4u: goto label_1606c4;
        case 0x1606c8u: goto label_1606c8;
        case 0x1606ccu: goto label_1606cc;
        case 0x1606d0u: goto label_1606d0;
        case 0x1606d4u: goto label_1606d4;
        case 0x1606d8u: goto label_1606d8;
        case 0x1606dcu: goto label_1606dc;
        case 0x1606e0u: goto label_1606e0;
        case 0x1606e4u: goto label_1606e4;
        case 0x1606e8u: goto label_1606e8;
        case 0x1606ecu: goto label_1606ec;
        case 0x1606f0u: goto label_1606f0;
        case 0x1606f4u: goto label_1606f4;
        case 0x1606f8u: goto label_1606f8;
        case 0x1606fcu: goto label_1606fc;
        case 0x160700u: goto label_160700;
        case 0x160704u: goto label_160704;
        case 0x160708u: goto label_160708;
        case 0x16070cu: goto label_16070c;
        case 0x160710u: goto label_160710;
        case 0x160714u: goto label_160714;
        case 0x160718u: goto label_160718;
        case 0x16071cu: goto label_16071c;
        case 0x160720u: goto label_160720;
        case 0x160724u: goto label_160724;
        case 0x160728u: goto label_160728;
        case 0x16072cu: goto label_16072c;
        case 0x160730u: goto label_160730;
        case 0x160734u: goto label_160734;
        case 0x160738u: goto label_160738;
        case 0x16073cu: goto label_16073c;
        case 0x160740u: goto label_160740;
        case 0x160744u: goto label_160744;
        case 0x160748u: goto label_160748;
        case 0x16074cu: goto label_16074c;
        default: break;
    }

    ctx->pc = 0x1601c0u;

label_1601c0:
    // 0x1601c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1601c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1601c4:
    // 0x1601c4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1601c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1601c8:
    // 0x1601c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1601c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1601cc:
    // 0x1601cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1601ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1601d0:
    // 0x1601d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1601d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1601d4:
    // 0x1601d4: 0xa7a50018  sh          $a1, 0x18($sp)
    ctx->pc = 0x1601d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 5));
label_1601d8:
    // 0x1601d8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1601d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_1601dc:
    // 0x1601dc: 0xa7a7001a  sh          $a3, 0x1A($sp)
    ctx->pc = 0x1601dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 7));
label_1601e0:
    // 0x1601e0: 0x24421d20  addiu       $v0, $v0, 0x1D20
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7456));
label_1601e4:
    // 0x1601e4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1601e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1601e8:
    // 0x1601e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1601e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1601ec:
    // 0x1601ec: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1601ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_1601f0:
    // 0x1601f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1601f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1601f4:
    // 0x1601f4: 0x40f809  jalr        $v0
label_1601f8:
    if (ctx->pc == 0x1601F8u) {
        ctx->pc = 0x1601F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601F4u;
        // 0x1601f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601FCu;
        goto label_1601fc;
    }
    ctx->pc = 0x1601F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1601FCu);
        ctx->pc = 0x1601F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601F4u;
        // 0x1601f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1601F4u, 0x1601FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1601FCu;
label_1601fc:
    // 0x1601fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1601fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160200:
    // 0x160200: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x160200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_160204:
    // 0x160204: 0x3e00008  jr          $ra
label_160208:
    if (ctx->pc == 0x160208u) {
        ctx->pc = 0x160208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160204u;
        // 0x160208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16020Cu;
        goto label_16020c;
    }
    ctx->pc = 0x160204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160204u;
        // 0x160208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16020Cu;
label_16020c:
    // 0x16020c: 0x0  nop
    ctx->pc = 0x16020cu;
    // NOP
label_160210:
    // 0x160210: 0x3e00008  jr          $ra
label_160214:
    if (ctx->pc == 0x160214u) {
        ctx->pc = 0x160214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160210u;
        // 0x160214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160218u;
        goto label_160218;
    }
    ctx->pc = 0x160210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160210u;
        // 0x160214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160218u;
label_160218:
    // 0x160218: 0x0  nop
    ctx->pc = 0x160218u;
    // NOP
label_16021c:
    // 0x16021c: 0x0  nop
    ctx->pc = 0x16021cu;
    // NOP
label_160220:
    // 0x160220: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_160224:
    // 0x160224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160228:
    // 0x160228: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_16022c:
    if (ctx->pc == 0x16022Cu) {
        ctx->pc = 0x16022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160228u;
        // 0x16022c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160230u;
        goto label_160230;
    }
    ctx->pc = 0x160228u;
    {
        const bool branch_taken_0x160228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x160228) {
            ctx->pc = 0x16022Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160228u;
            // 0x16022c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16025Cu;
            goto label_16025c;
        }
    }
    ctx->pc = 0x160230u;
label_160230:
    // 0x160230: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x160230u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_160234:
    // 0x160234: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x160234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_160238:
    // 0x160238: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x160238u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_16023c:
    // 0x16023c: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x16023cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_160240:
    // 0x160240: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x160240u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_160244:
    // 0x160244: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x160244u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_160248:
    // 0x160248: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x160248u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
label_16024c:
    // 0x16024c: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x16024cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_160250:
    // 0x160250: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x160250u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_160254:
    // 0x160254: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x160254u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_160258:
    // 0x160258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16025c:
    // 0x16025c: 0x3e00008  jr          $ra
label_160260:
    if (ctx->pc == 0x160260u) {
        ctx->pc = 0x160264u;
        goto label_160264;
    }
    ctx->pc = 0x16025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160264u;
label_160264:
    // 0x160264: 0x0  nop
    ctx->pc = 0x160264u;
    // NOP
label_160268:
    // 0x160268: 0x0  nop
    ctx->pc = 0x160268u;
    // NOP
label_16026c:
    // 0x16026c: 0x0  nop
    ctx->pc = 0x16026cu;
    // NOP
label_160270:
    // 0x160270: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x160270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_160274:
    // 0x160274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160278:
    // 0x160278: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_16027c:
    if (ctx->pc == 0x16027Cu) {
        ctx->pc = 0x16027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160278u;
        // 0x16027c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160280u;
        goto label_160280;
    }
    ctx->pc = 0x160278u;
    {
        const bool branch_taken_0x160278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x160278) {
            ctx->pc = 0x16027Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160278u;
            // 0x16027c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1602ACu;
            goto label_1602ac;
        }
    }
    ctx->pc = 0x160280u;
label_160280:
    // 0x160280: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x160280u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_160284:
    // 0x160284: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x160284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_160288:
    // 0x160288: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x160288u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_16028c:
    // 0x16028c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x16028cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_160290:
    // 0x160290: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x160290u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_160294:
    // 0x160294: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x160294u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_160298:
    // 0x160298: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x160298u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
label_16029c:
    // 0x16029c: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x16029cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_1602a0:
    // 0x1602a0: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x1602a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_1602a4:
    // 0x1602a4: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x1602a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_1602a8:
    // 0x1602a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1602a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1602ac:
    // 0x1602ac: 0x3e00008  jr          $ra
label_1602b0:
    if (ctx->pc == 0x1602B0u) {
        ctx->pc = 0x1602B4u;
        goto label_1602b4;
    }
    ctx->pc = 0x1602ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1602ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1602B4u;
label_1602b4:
    // 0x1602b4: 0x0  nop
    ctx->pc = 0x1602b4u;
    // NOP
label_1602b8:
    // 0x1602b8: 0x0  nop
    ctx->pc = 0x1602b8u;
    // NOP
label_1602bc:
    // 0x1602bc: 0x0  nop
    ctx->pc = 0x1602bcu;
    // NOP
label_1602c0:
    // 0x1602c0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1602c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1602c4:
    // 0x1602c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1602c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1602c8:
    // 0x1602c8: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_1602cc:
    if (ctx->pc == 0x1602CCu) {
        ctx->pc = 0x1602CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602C8u;
        // 0x1602cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602D0u;
        goto label_1602d0;
    }
    ctx->pc = 0x1602C8u;
    {
        const bool branch_taken_0x1602c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1602c8) {
            ctx->pc = 0x1602CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1602C8u;
            // 0x1602cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160300u;
            goto label_160300;
        }
    }
    ctx->pc = 0x1602D0u;
label_1602d0:
    // 0x1602d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1602d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1602d4:
    // 0x1602d4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1602d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1602d8:
    // 0x1602d8: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1602d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1602dc:
    // 0x1602dc: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1602dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_1602e0:
    // 0x1602e0: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x1602e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_1602e4:
    // 0x1602e4: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x1602e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_1602e8:
    // 0x1602e8: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x1602e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_1602ec:
    // 0x1602ec: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x1602ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
label_1602f0:
    // 0x1602f0: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x1602f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_1602f4:
    // 0x1602f4: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x1602f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_1602f8:
    // 0x1602f8: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x1602f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_1602fc:
    // 0x1602fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1602fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160300:
    // 0x160300: 0x3e00008  jr          $ra
label_160304:
    if (ctx->pc == 0x160304u) {
        ctx->pc = 0x160308u;
        goto label_160308;
    }
    ctx->pc = 0x160300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160308u;
label_160308:
    // 0x160308: 0x0  nop
    ctx->pc = 0x160308u;
    // NOP
label_16030c:
    // 0x16030c: 0x0  nop
    ctx->pc = 0x16030cu;
    // NOP
label_160310:
    // 0x160310: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_160314:
    // 0x160314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160318:
    // 0x160318: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_16031c:
    if (ctx->pc == 0x16031Cu) {
        ctx->pc = 0x16031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160318u;
        // 0x16031c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160320u;
        goto label_160320;
    }
    ctx->pc = 0x160318u;
    {
        const bool branch_taken_0x160318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x160318) {
            ctx->pc = 0x16031Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160318u;
            // 0x16031c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160358u;
            goto label_160358;
        }
    }
    ctx->pc = 0x160320u;
label_160320:
    // 0x160320: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x160320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_160324:
    // 0x160324: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x160324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_160328:
    // 0x160328: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x160328u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_16032c:
    // 0x16032c: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x16032cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_160330:
    // 0x160330: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x160330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_160334:
    // 0x160334: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x160334u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_160338:
    // 0x160338: 0x2402f600  addiu       $v0, $zero, -0xA00
    ctx->pc = 0x160338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964736));
label_16033c:
    // 0x16033c: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x16033cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
label_160340:
    // 0x160340: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x160340u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_160344:
    // 0x160344: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x160344u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_160348:
    // 0x160348: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x160348u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_16034c:
    // 0x16034c: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x16034cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_160350:
    // 0x160350: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x160350u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_160354:
    // 0x160354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160358:
    // 0x160358: 0x3e00008  jr          $ra
label_16035c:
    if (ctx->pc == 0x16035Cu) {
        ctx->pc = 0x160360u;
        goto label_160360;
    }
    ctx->pc = 0x160358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160360u;
label_160360:
    // 0x160360: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x160360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_160364:
    // 0x160364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160368:
    // 0x160368: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_16036c:
    if (ctx->pc == 0x16036Cu) {
        ctx->pc = 0x16036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160368u;
        // 0x16036c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160370u;
        goto label_160370;
    }
    ctx->pc = 0x160368u;
    {
        const bool branch_taken_0x160368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x160368) {
            ctx->pc = 0x16036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160368u;
            // 0x16036c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1603A4u;
            goto label_1603a4;
        }
    }
    ctx->pc = 0x160370u;
label_160370:
    // 0x160370: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x160370u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_160374:
    // 0x160374: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x160374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_160378:
    // 0x160378: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x160378u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_16037c:
    // 0x16037c: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x16037cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
label_160380:
    // 0x160380: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x160380u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_160384:
    // 0x160384: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x160384u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
label_160388:
    // 0x160388: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x160388u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_16038c:
    // 0x16038c: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x16038cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_160390:
    // 0x160390: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x160390u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
label_160394:
    // 0x160394: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x160394u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_160398:
    // 0x160398: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x160398u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_16039c:
    // 0x16039c: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x16039cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_1603a0:
    // 0x1603a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1603a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1603a4:
    // 0x1603a4: 0x3e00008  jr          $ra
label_1603a8:
    if (ctx->pc == 0x1603A8u) {
        ctx->pc = 0x1603ACu;
        goto label_1603ac;
    }
    ctx->pc = 0x1603A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1603A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1603ACu;
label_1603ac:
    // 0x1603ac: 0x0  nop
    ctx->pc = 0x1603acu;
    // NOP
label_1603b0:
    // 0x1603b0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1603b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1603b4:
    // 0x1603b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1603b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1603b8:
    // 0x1603b8: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_1603bc:
    if (ctx->pc == 0x1603BCu) {
        ctx->pc = 0x1603BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603B8u;
        // 0x1603bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603C0u;
        goto label_1603c0;
    }
    ctx->pc = 0x1603B8u;
    {
        const bool branch_taken_0x1603b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1603b8) {
            ctx->pc = 0x1603BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1603B8u;
            // 0x1603bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1603F0u;
            goto label_1603f0;
        }
    }
    ctx->pc = 0x1603C0u;
label_1603c0:
    // 0x1603c0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1603c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1603c4:
    // 0x1603c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1603c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1603c8:
    // 0x1603c8: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1603c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1603cc:
    // 0x1603cc: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1603ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1603d0:
    // 0x1603d0: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1603d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1603d4:
    // 0x1603d4: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1603d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1603d8:
    // 0x1603d8: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x1603d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_1603dc:
    // 0x1603dc: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x1603dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
label_1603e0:
    // 0x1603e0: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x1603e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_1603e4:
    // 0x1603e4: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x1603e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_1603e8:
    // 0x1603e8: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x1603e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_1603ec:
    // 0x1603ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1603ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1603f0:
    // 0x1603f0: 0x3e00008  jr          $ra
label_1603f4:
    if (ctx->pc == 0x1603F4u) {
        ctx->pc = 0x1603F8u;
        goto label_1603f8;
    }
    ctx->pc = 0x1603F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1603F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1603F8u;
label_1603f8:
    // 0x1603f8: 0x0  nop
    ctx->pc = 0x1603f8u;
    // NOP
label_1603fc:
    // 0x1603fc: 0x0  nop
    ctx->pc = 0x1603fcu;
    // NOP
label_160400:
    // 0x160400: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_160404:
    // 0x160404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160408:
    // 0x160408: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
label_16040c:
    if (ctx->pc == 0x16040Cu) {
        ctx->pc = 0x16040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160408u;
        // 0x16040c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160410u;
        goto label_160410;
    }
    ctx->pc = 0x160408u;
    {
        const bool branch_taken_0x160408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x160408) {
            ctx->pc = 0x16040Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160408u;
            // 0x16040c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160460u;
            goto label_160460;
        }
    }
    ctx->pc = 0x160410u;
label_160410:
    // 0x160410: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x160410u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_160414:
    // 0x160414: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x160414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_160418:
    // 0x160418: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x160418u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_16041c:
    // 0x16041c: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x16041cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
label_160420:
    // 0x160420: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x160420u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_160424:
    // 0x160424: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x160424u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_160428:
    // 0x160428: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x160428u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
label_16042c:
    // 0x16042c: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x16042cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_160430:
    // 0x160430: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x160430u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
label_160434:
    // 0x160434: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x160434u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_160438:
    // 0x160438: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x160438u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_16043c:
    // 0x16043c: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x16043cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_160440:
    // 0x160440: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x160440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_160444:
    // 0x160444: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_160448:
    if (ctx->pc == 0x160448u) {
        ctx->pc = 0x160448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160444u;
        // 0x160448: 0x90a20002  lbu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16044Cu;
        goto label_16044c;
    }
    ctx->pc = 0x160444u;
    {
        const bool branch_taken_0x160444 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x160444) {
            ctx->pc = 0x160448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160444u;
            // 0x160448: 0x90a20002  lbu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160458u;
            goto label_160458;
        }
    }
    ctx->pc = 0x16044Cu;
label_16044c:
    // 0x16044c: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x16044cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_160450:
    // 0x160450: 0x10000002  b           . + 4 + (0x2 << 2)
label_160454:
    if (ctx->pc == 0x160454u) {
        ctx->pc = 0x160454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160450u;
        // 0x160454: 0xa0a20004  sb          $v0, 0x4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160458u;
        goto label_160458;
    }
    ctx->pc = 0x160450u;
    {
        const bool branch_taken_0x160450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160450u;
        // 0x160454: 0xa0a20004  sb          $v0, 0x4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160450) {
            ctx->pc = 0x16045Cu;
            goto label_16045c;
        }
    }
    ctx->pc = 0x160458u;
label_160458:
    // 0x160458: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x160458u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_16045c:
    // 0x16045c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_160460:
    // 0x160460: 0x3e00008  jr          $ra
label_160464:
    if (ctx->pc == 0x160464u) {
        ctx->pc = 0x160468u;
        goto label_160468;
    }
    ctx->pc = 0x160460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160468u;
label_160468:
    // 0x160468: 0x0  nop
    ctx->pc = 0x160468u;
    // NOP
label_16046c:
    // 0x16046c: 0x0  nop
    ctx->pc = 0x16046cu;
    // NOP
label_160470:
    // 0x160470: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x160470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_160474:
    // 0x160474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160478:
    // 0x160478: 0x54430025  bnel        $v0, $v1, . + 4 + (0x25 << 2)
label_16047c:
    if (ctx->pc == 0x16047Cu) {
        ctx->pc = 0x16047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160478u;
        // 0x16047c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160480u;
        goto label_160480;
    }
    ctx->pc = 0x160478u;
    {
        const bool branch_taken_0x160478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x160478) {
            ctx->pc = 0x16047Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160478u;
            // 0x16047c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x160480u;
label_160480:
    // 0x160480: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x160480u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_160484:
    // 0x160484: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x160484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_160488:
    // 0x160488: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x160488u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_16048c:
    // 0x16048c: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x16048cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
label_160490:
    // 0x160490: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x160490u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_160494:
    // 0x160494: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x160494u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
label_160498:
    // 0x160498: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x160498u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_16049c:
    // 0x16049c: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x16049cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_1604a0:
    // 0x1604a0: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x1604a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1604a4:
    // 0x1604a4: 0x41143  sra         $v0, $a0, 5
    ctx->pc = 0x1604a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
label_1604a8:
    // 0x1604a8: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x1604a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
label_1604ac:
    // 0x1604ac: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x1604acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
label_1604b0:
    // 0x1604b0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1604b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_1604b4:
    // 0x1604b4: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x1604b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_1604b8:
    // 0x1604b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1604b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1604bc:
    // 0x1604bc: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1604bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1604c0:
    // 0x1604c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1604c4:
    if (ctx->pc == 0x1604C4u) {
        ctx->pc = 0x1604C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604C0u;
        // 0x1604c4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604C8u;
        goto label_1604c8;
    }
    ctx->pc = 0x1604C0u;
    {
        const bool branch_taken_0x1604c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604c0) {
            ctx->pc = 0x1604C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1604C0u;
            // 0x1604c4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1604D8u;
            goto label_1604d8;
        }
    }
    ctx->pc = 0x1604C8u;
label_1604c8:
    // 0x1604c8: 0x2402fc00  addiu       $v0, $zero, -0x400
    ctx->pc = 0x1604c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
label_1604cc:
    // 0x1604cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1604ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1604d0:
    // 0x1604d0: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x1604d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_1604d4:
    // 0x1604d4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1604d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1604d8:
    // 0x1604d8: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x1604d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_1604dc:
    // 0x1604dc: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x1604dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
label_1604e0:
    // 0x1604e0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1604e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_1604e4:
    // 0x1604e4: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x1604e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
label_1604e8:
    // 0x1604e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1604e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1604ec:
    // 0x1604ec: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1604ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1604f0:
    // 0x1604f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1604f4:
    if (ctx->pc == 0x1604F4u) {
        ctx->pc = 0x1604F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F0u;
        // 0x1604f4: 0xa4a0000a  sh          $zero, 0xA($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604F8u;
        goto label_1604f8;
    }
    ctx->pc = 0x1604F0u;
    {
        const bool branch_taken_0x1604f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604f0) {
            ctx->pc = 0x1604F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1604F0u;
            // 0x1604f4: 0xa4a0000a  sh          $zero, 0xA($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160508u;
            goto label_160508;
        }
    }
    ctx->pc = 0x1604F8u;
label_1604f8:
    // 0x1604f8: 0x2402fc00  addiu       $v0, $zero, -0x400
    ctx->pc = 0x1604f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
label_1604fc:
    // 0x1604fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1604fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_160500:
    // 0x160500: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x160500u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
label_160504:
    // 0x160504: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x160504u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_160508:
    // 0x160508: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x160508u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_16050c:
    // 0x16050c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_160510:
    // 0x160510: 0x3e00008  jr          $ra
label_160514:
    if (ctx->pc == 0x160514u) {
        ctx->pc = 0x160518u;
        goto label_160518;
    }
    ctx->pc = 0x160510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160518u;
label_160518:
    // 0x160518: 0x0  nop
    ctx->pc = 0x160518u;
    // NOP
label_16051c:
    // 0x16051c: 0x0  nop
    ctx->pc = 0x16051cu;
    // NOP
label_160520:
    // 0x160520: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_160524:
    // 0x160524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160528:
    // 0x160528: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_16052c:
    if (ctx->pc == 0x16052Cu) {
        ctx->pc = 0x16052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160528u;
        // 0x16052c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160530u;
        goto label_160530;
    }
    ctx->pc = 0x160528u;
    {
        const bool branch_taken_0x160528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x160528) {
            ctx->pc = 0x16052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160528u;
            // 0x16052c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160568u;
            goto label_160568;
        }
    }
    ctx->pc = 0x160530u;
label_160530:
    // 0x160530: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x160530u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_160534:
    // 0x160534: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160538:
    // 0x160538: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x160538u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_16053c:
    // 0x16053c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x16053cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_160540:
    // 0x160540: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x160540u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_160544:
    // 0x160544: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x160544u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_160548:
    // 0x160548: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x160548u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_16054c:
    // 0x16054c: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x16054cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_160550:
    // 0x160550: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x160550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_160554:
    // 0x160554: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x160554u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_160558:
    // 0x160558: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x160558u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_16055c:
    // 0x16055c: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x16055cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_160560:
    // 0x160560: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x160560u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_160564:
    // 0x160564: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x160564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_160568:
    // 0x160568: 0x3e00008  jr          $ra
label_16056c:
    if (ctx->pc == 0x16056Cu) {
        ctx->pc = 0x160570u;
        goto label_160570;
    }
    ctx->pc = 0x160568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160570u;
label_160570:
    // 0x160570: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x160570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_160574:
    // 0x160574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160578:
    // 0x160578: 0x5443003c  bnel        $v0, $v1, . + 4 + (0x3C << 2)
label_16057c:
    if (ctx->pc == 0x16057Cu) {
        ctx->pc = 0x16057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160578u;
        // 0x16057c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160580u;
        goto label_160580;
    }
    ctx->pc = 0x160578u;
    {
        const bool branch_taken_0x160578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x160578) {
            ctx->pc = 0x16057Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160578u;
            // 0x16057c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16066Cu;
            goto label_16066c;
        }
    }
    ctx->pc = 0x160580u;
label_160580:
    // 0x160580: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x160580u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_160584:
    // 0x160584: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x160584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_160588:
    // 0x160588: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x160588u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_16058c:
    // 0x16058c: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x16058cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
label_160590:
    // 0x160590: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x160590u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_160594:
    // 0x160594: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x160594u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
label_160598:
    // 0x160598: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x160598u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_16059c:
    // 0x16059c: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x16059cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_1605a0:
    // 0x1605a0: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x1605a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1605a4:
    // 0x1605a4: 0x61143  sra         $v0, $a2, 5
    ctx->pc = 0x1605a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 5));
label_1605a8:
    // 0x1605a8: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x1605a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
label_1605ac:
    // 0x1605ac: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x1605acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
label_1605b0:
    // 0x1605b0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1605b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_1605b4:
    // 0x1605b4: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x1605b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_1605b8:
    // 0x1605b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1605b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1605bc:
    // 0x1605bc: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1605bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1605c0:
    // 0x1605c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1605c4:
    if (ctx->pc == 0x1605C4u) {
        ctx->pc = 0x1605C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605C0u;
        // 0x1605c4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605C8u;
        goto label_1605c8;
    }
    ctx->pc = 0x1605C0u;
    {
        const bool branch_taken_0x1605c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1605c0) {
            ctx->pc = 0x1605C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1605C0u;
            // 0x1605c4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1605D8u;
            goto label_1605d8;
        }
    }
    ctx->pc = 0x1605C8u;
label_1605c8:
    // 0x1605c8: 0x2402fc00  addiu       $v0, $zero, -0x400
    ctx->pc = 0x1605c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
label_1605cc:
    // 0x1605cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1605ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1605d0:
    // 0x1605d0: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x1605d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_1605d4:
    // 0x1605d4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1605d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1605d8:
    // 0x1605d8: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x1605d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_1605dc:
    // 0x1605dc: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x1605dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
label_1605e0:
    // 0x1605e0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1605e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_1605e4:
    // 0x1605e4: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x1605e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
label_1605e8:
    // 0x1605e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1605e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1605ec:
    // 0x1605ec: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1605ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1605f0:
    // 0x1605f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1605f4:
    if (ctx->pc == 0x1605F4u) {
        ctx->pc = 0x1605F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605F0u;
        // 0x1605f4: 0x94840004  lhu         $a0, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605F8u;
        goto label_1605f8;
    }
    ctx->pc = 0x1605F0u;
    {
        const bool branch_taken_0x1605f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1605f0) {
            ctx->pc = 0x1605F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1605F0u;
            // 0x1605f4: 0x94840004  lhu         $a0, 0x4($a0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160608u;
            goto label_160608;
        }
    }
    ctx->pc = 0x1605F8u;
label_1605f8:
    // 0x1605f8: 0x2402fc00  addiu       $v0, $zero, -0x400
    ctx->pc = 0x1605f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
label_1605fc:
    // 0x1605fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1605fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_160600:
    // 0x160600: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x160600u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
label_160604:
    // 0x160604: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x160604u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_160608:
    // 0x160608: 0x41183  sra         $v0, $a0, 6
    ctx->pc = 0x160608u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 6));
label_16060c:
    // 0x16060c: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x16060cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_160610:
    // 0x160610: 0x30423fc0  andi        $v0, $v0, 0x3FC0
    ctx->pc = 0x160610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16320);
label_160614:
    // 0x160614: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x160614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_160618:
    // 0x160618: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x160618u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
label_16061c:
    // 0x16061c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16061cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_160620:
    // 0x160620: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x160620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_160624:
    // 0x160624: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_160628:
    if (ctx->pc == 0x160628u) {
        ctx->pc = 0x160628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160624u;
        // 0x160628: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16062Cu;
        goto label_16062c;
    }
    ctx->pc = 0x160624u;
    {
        const bool branch_taken_0x160624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160624) {
            ctx->pc = 0x160628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160624u;
            // 0x160628: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16063Cu;
            goto label_16063c;
        }
    }
    ctx->pc = 0x16062Cu;
label_16062c:
    // 0x16062c: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x16062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
label_160630:
    // 0x160630: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x160630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_160634:
    // 0x160634: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x160634u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
label_160638:
    // 0x160638: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16063c:
    // 0x16063c: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x16063cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_160640:
    // 0x160640: 0x30423fc0  andi        $v0, $v0, 0x3FC0
    ctx->pc = 0x160640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16320);
label_160644:
    // 0x160644: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x160644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_160648:
    // 0x160648: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x160648u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
label_16064c:
    // 0x16064c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16064cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_160650:
    // 0x160650: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x160650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_160654:
    // 0x160654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_160658:
    if (ctx->pc == 0x160658u) {
        ctx->pc = 0x16065Cu;
        goto label_16065c;
    }
    ctx->pc = 0x160654u;
    {
        const bool branch_taken_0x160654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160654) {
            ctx->pc = 0x160668u;
            goto label_160668;
        }
    }
    ctx->pc = 0x16065Cu;
label_16065c:
    // 0x16065c: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x16065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
label_160660:
    // 0x160660: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x160660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_160664:
    // 0x160664: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x160664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
label_160668:
    // 0x160668: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x160668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16066c:
    // 0x16066c: 0x3e00008  jr          $ra
label_160670:
    if (ctx->pc == 0x160670u) {
        ctx->pc = 0x160674u;
        goto label_160674;
    }
    ctx->pc = 0x16066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16066Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160674u;
label_160674:
    // 0x160674: 0x0  nop
    ctx->pc = 0x160674u;
    // NOP
label_160678:
    // 0x160678: 0x0  nop
    ctx->pc = 0x160678u;
    // NOP
label_16067c:
    // 0x16067c: 0x0  nop
    ctx->pc = 0x16067cu;
    // NOP
label_160680:
    // 0x160680: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_160684:
    // 0x160684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160688:
    // 0x160688: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_16068c:
    if (ctx->pc == 0x16068Cu) {
        ctx->pc = 0x16068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160688u;
        // 0x16068c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160690u;
        goto label_160690;
    }
    ctx->pc = 0x160688u;
    {
        const bool branch_taken_0x160688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x160688) {
            ctx->pc = 0x16068Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160688u;
            // 0x16068c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1606CCu;
            goto label_1606cc;
        }
    }
    ctx->pc = 0x160690u;
label_160690:
    // 0x160690: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x160690u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_160694:
    // 0x160694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160698:
    // 0x160698: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x160698u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_16069c:
    // 0x16069c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x16069cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1606a0:
    // 0x1606a0: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1606a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1606a4:
    // 0x1606a4: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1606a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1606a8:
    // 0x1606a8: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x1606a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_1606ac:
    // 0x1606ac: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x1606acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_1606b0:
    // 0x1606b0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1606b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1606b4:
    // 0x1606b4: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x1606b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_1606b8:
    // 0x1606b8: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x1606b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_1606bc:
    // 0x1606bc: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1606bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1606c0:
    // 0x1606c0: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x1606c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
label_1606c4:
    // 0x1606c4: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x1606c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_1606c8:
    // 0x1606c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1606c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1606cc:
    // 0x1606cc: 0x3e00008  jr          $ra
label_1606d0:
    if (ctx->pc == 0x1606D0u) {
        ctx->pc = 0x1606D4u;
        goto label_1606d4;
    }
    ctx->pc = 0x1606CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1606CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1606D4u;
label_1606d4:
    // 0x1606d4: 0x0  nop
    ctx->pc = 0x1606d4u;
    // NOP
label_1606d8:
    // 0x1606d8: 0x0  nop
    ctx->pc = 0x1606d8u;
    // NOP
label_1606dc:
    // 0x1606dc: 0x0  nop
    ctx->pc = 0x1606dcu;
    // NOP
label_1606e0:
    // 0x1606e0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1606e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1606e4:
    // 0x1606e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1606e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1606e8:
    // 0x1606e8: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
label_1606ec:
    if (ctx->pc == 0x1606ECu) {
        ctx->pc = 0x1606ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606E8u;
        // 0x1606ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606F0u;
        goto label_1606f0;
    }
    ctx->pc = 0x1606E8u;
    {
        const bool branch_taken_0x1606e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1606e8) {
            ctx->pc = 0x1606ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1606E8u;
            // 0x1606ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160744u;
            goto label_160744;
        }
    }
    ctx->pc = 0x1606F0u;
label_1606f0:
    // 0x1606f0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1606f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1606f4:
    // 0x1606f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1606f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1606f8:
    // 0x1606f8: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1606f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1606fc:
    // 0x1606fc: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x1606fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
label_160700:
    // 0x160700: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x160700u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_160704:
    // 0x160704: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x160704u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_160708:
    // 0x160708: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x160708u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_16070c:
    // 0x16070c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x16070cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_160710:
    // 0x160710: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x160710u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_160714:
    // 0x160714: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x160714u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_160718:
    // 0x160718: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x160718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_16071c:
    // 0x16071c: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x16071cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
label_160720:
    // 0x160720: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x160720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_160724:
    // 0x160724: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x160724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_160728:
    // 0x160728: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_16072c:
    if (ctx->pc == 0x16072Cu) {
        ctx->pc = 0x16072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160728u;
        // 0x16072c: 0x90a20002  lbu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160730u;
        goto label_160730;
    }
    ctx->pc = 0x160728u;
    {
        const bool branch_taken_0x160728 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x160728) {
            ctx->pc = 0x16072Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160728u;
            // 0x16072c: 0x90a20002  lbu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16073Cu;
            goto label_16073c;
        }
    }
    ctx->pc = 0x160730u;
label_160730:
    // 0x160730: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x160730u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_160734:
    // 0x160734: 0x10000002  b           . + 4 + (0x2 << 2)
label_160738:
    if (ctx->pc == 0x160738u) {
        ctx->pc = 0x160738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160734u;
        // 0x160738: 0xa0a20004  sb          $v0, 0x4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16073Cu;
        goto label_16073c;
    }
    ctx->pc = 0x160734u;
    {
        const bool branch_taken_0x160734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160734u;
        // 0x160738: 0xa0a20004  sb          $v0, 0x4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160734) {
            ctx->pc = 0x160740u;
            goto label_160740;
        }
    }
    ctx->pc = 0x16073Cu;
label_16073c:
    // 0x16073c: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x16073cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_160740:
    // 0x160740: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x160740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_160744:
    // 0x160744: 0x3e00008  jr          $ra
label_160748:
    if (ctx->pc == 0x160748u) {
        ctx->pc = 0x16074Cu;
        goto label_16074c;
    }
    ctx->pc = 0x160744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16074Cu;
label_16074c:
    // 0x16074c: 0x0  nop
    ctx->pc = 0x16074cu;
    // NOP
}
