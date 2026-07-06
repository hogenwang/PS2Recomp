#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9430
// Address: 0x2e9430 - 0x2e9860
void sub_002E9430_0x2e9430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9430_0x2e9430");
#endif

    switch (ctx->pc) {
        case 0x2e9430u: goto label_2e9430;
        case 0x2e9434u: goto label_2e9434;
        case 0x2e9438u: goto label_2e9438;
        case 0x2e943cu: goto label_2e943c;
        case 0x2e9440u: goto label_2e9440;
        case 0x2e9444u: goto label_2e9444;
        case 0x2e9448u: goto label_2e9448;
        case 0x2e944cu: goto label_2e944c;
        case 0x2e9450u: goto label_2e9450;
        case 0x2e9454u: goto label_2e9454;
        case 0x2e9458u: goto label_2e9458;
        case 0x2e945cu: goto label_2e945c;
        case 0x2e9460u: goto label_2e9460;
        case 0x2e9464u: goto label_2e9464;
        case 0x2e9468u: goto label_2e9468;
        case 0x2e946cu: goto label_2e946c;
        case 0x2e9470u: goto label_2e9470;
        case 0x2e9474u: goto label_2e9474;
        case 0x2e9478u: goto label_2e9478;
        case 0x2e947cu: goto label_2e947c;
        case 0x2e9480u: goto label_2e9480;
        case 0x2e9484u: goto label_2e9484;
        case 0x2e9488u: goto label_2e9488;
        case 0x2e948cu: goto label_2e948c;
        case 0x2e9490u: goto label_2e9490;
        case 0x2e9494u: goto label_2e9494;
        case 0x2e9498u: goto label_2e9498;
        case 0x2e949cu: goto label_2e949c;
        case 0x2e94a0u: goto label_2e94a0;
        case 0x2e94a4u: goto label_2e94a4;
        case 0x2e94a8u: goto label_2e94a8;
        case 0x2e94acu: goto label_2e94ac;
        case 0x2e94b0u: goto label_2e94b0;
        case 0x2e94b4u: goto label_2e94b4;
        case 0x2e94b8u: goto label_2e94b8;
        case 0x2e94bcu: goto label_2e94bc;
        case 0x2e94c0u: goto label_2e94c0;
        case 0x2e94c4u: goto label_2e94c4;
        case 0x2e94c8u: goto label_2e94c8;
        case 0x2e94ccu: goto label_2e94cc;
        case 0x2e94d0u: goto label_2e94d0;
        case 0x2e94d4u: goto label_2e94d4;
        case 0x2e94d8u: goto label_2e94d8;
        case 0x2e94dcu: goto label_2e94dc;
        case 0x2e94e0u: goto label_2e94e0;
        case 0x2e94e4u: goto label_2e94e4;
        case 0x2e94e8u: goto label_2e94e8;
        case 0x2e94ecu: goto label_2e94ec;
        case 0x2e94f0u: goto label_2e94f0;
        case 0x2e94f4u: goto label_2e94f4;
        case 0x2e94f8u: goto label_2e94f8;
        case 0x2e94fcu: goto label_2e94fc;
        case 0x2e9500u: goto label_2e9500;
        case 0x2e9504u: goto label_2e9504;
        case 0x2e9508u: goto label_2e9508;
        case 0x2e950cu: goto label_2e950c;
        case 0x2e9510u: goto label_2e9510;
        case 0x2e9514u: goto label_2e9514;
        case 0x2e9518u: goto label_2e9518;
        case 0x2e951cu: goto label_2e951c;
        case 0x2e9520u: goto label_2e9520;
        case 0x2e9524u: goto label_2e9524;
        case 0x2e9528u: goto label_2e9528;
        case 0x2e952cu: goto label_2e952c;
        case 0x2e9530u: goto label_2e9530;
        case 0x2e9534u: goto label_2e9534;
        case 0x2e9538u: goto label_2e9538;
        case 0x2e953cu: goto label_2e953c;
        case 0x2e9540u: goto label_2e9540;
        case 0x2e9544u: goto label_2e9544;
        case 0x2e9548u: goto label_2e9548;
        case 0x2e954cu: goto label_2e954c;
        case 0x2e9550u: goto label_2e9550;
        case 0x2e9554u: goto label_2e9554;
        case 0x2e9558u: goto label_2e9558;
        case 0x2e955cu: goto label_2e955c;
        case 0x2e9560u: goto label_2e9560;
        case 0x2e9564u: goto label_2e9564;
        case 0x2e9568u: goto label_2e9568;
        case 0x2e956cu: goto label_2e956c;
        case 0x2e9570u: goto label_2e9570;
        case 0x2e9574u: goto label_2e9574;
        case 0x2e9578u: goto label_2e9578;
        case 0x2e957cu: goto label_2e957c;
        case 0x2e9580u: goto label_2e9580;
        case 0x2e9584u: goto label_2e9584;
        case 0x2e9588u: goto label_2e9588;
        case 0x2e958cu: goto label_2e958c;
        case 0x2e9590u: goto label_2e9590;
        case 0x2e9594u: goto label_2e9594;
        case 0x2e9598u: goto label_2e9598;
        case 0x2e959cu: goto label_2e959c;
        case 0x2e95a0u: goto label_2e95a0;
        case 0x2e95a4u: goto label_2e95a4;
        case 0x2e95a8u: goto label_2e95a8;
        case 0x2e95acu: goto label_2e95ac;
        case 0x2e95b0u: goto label_2e95b0;
        case 0x2e95b4u: goto label_2e95b4;
        case 0x2e95b8u: goto label_2e95b8;
        case 0x2e95bcu: goto label_2e95bc;
        case 0x2e95c0u: goto label_2e95c0;
        case 0x2e95c4u: goto label_2e95c4;
        case 0x2e95c8u: goto label_2e95c8;
        case 0x2e95ccu: goto label_2e95cc;
        case 0x2e95d0u: goto label_2e95d0;
        case 0x2e95d4u: goto label_2e95d4;
        case 0x2e95d8u: goto label_2e95d8;
        case 0x2e95dcu: goto label_2e95dc;
        case 0x2e95e0u: goto label_2e95e0;
        case 0x2e95e4u: goto label_2e95e4;
        case 0x2e95e8u: goto label_2e95e8;
        case 0x2e95ecu: goto label_2e95ec;
        case 0x2e95f0u: goto label_2e95f0;
        case 0x2e95f4u: goto label_2e95f4;
        case 0x2e95f8u: goto label_2e95f8;
        case 0x2e95fcu: goto label_2e95fc;
        case 0x2e9600u: goto label_2e9600;
        case 0x2e9604u: goto label_2e9604;
        case 0x2e9608u: goto label_2e9608;
        case 0x2e960cu: goto label_2e960c;
        case 0x2e9610u: goto label_2e9610;
        case 0x2e9614u: goto label_2e9614;
        case 0x2e9618u: goto label_2e9618;
        case 0x2e961cu: goto label_2e961c;
        case 0x2e9620u: goto label_2e9620;
        case 0x2e9624u: goto label_2e9624;
        case 0x2e9628u: goto label_2e9628;
        case 0x2e962cu: goto label_2e962c;
        case 0x2e9630u: goto label_2e9630;
        case 0x2e9634u: goto label_2e9634;
        case 0x2e9638u: goto label_2e9638;
        case 0x2e963cu: goto label_2e963c;
        case 0x2e9640u: goto label_2e9640;
        case 0x2e9644u: goto label_2e9644;
        case 0x2e9648u: goto label_2e9648;
        case 0x2e964cu: goto label_2e964c;
        case 0x2e9650u: goto label_2e9650;
        case 0x2e9654u: goto label_2e9654;
        case 0x2e9658u: goto label_2e9658;
        case 0x2e965cu: goto label_2e965c;
        case 0x2e9660u: goto label_2e9660;
        case 0x2e9664u: goto label_2e9664;
        case 0x2e9668u: goto label_2e9668;
        case 0x2e966cu: goto label_2e966c;
        case 0x2e9670u: goto label_2e9670;
        case 0x2e9674u: goto label_2e9674;
        case 0x2e9678u: goto label_2e9678;
        case 0x2e967cu: goto label_2e967c;
        case 0x2e9680u: goto label_2e9680;
        case 0x2e9684u: goto label_2e9684;
        case 0x2e9688u: goto label_2e9688;
        case 0x2e968cu: goto label_2e968c;
        case 0x2e9690u: goto label_2e9690;
        case 0x2e9694u: goto label_2e9694;
        case 0x2e9698u: goto label_2e9698;
        case 0x2e969cu: goto label_2e969c;
        case 0x2e96a0u: goto label_2e96a0;
        case 0x2e96a4u: goto label_2e96a4;
        case 0x2e96a8u: goto label_2e96a8;
        case 0x2e96acu: goto label_2e96ac;
        case 0x2e96b0u: goto label_2e96b0;
        case 0x2e96b4u: goto label_2e96b4;
        case 0x2e96b8u: goto label_2e96b8;
        case 0x2e96bcu: goto label_2e96bc;
        case 0x2e96c0u: goto label_2e96c0;
        case 0x2e96c4u: goto label_2e96c4;
        case 0x2e96c8u: goto label_2e96c8;
        case 0x2e96ccu: goto label_2e96cc;
        case 0x2e96d0u: goto label_2e96d0;
        case 0x2e96d4u: goto label_2e96d4;
        case 0x2e96d8u: goto label_2e96d8;
        case 0x2e96dcu: goto label_2e96dc;
        case 0x2e96e0u: goto label_2e96e0;
        case 0x2e96e4u: goto label_2e96e4;
        case 0x2e96e8u: goto label_2e96e8;
        case 0x2e96ecu: goto label_2e96ec;
        case 0x2e96f0u: goto label_2e96f0;
        case 0x2e96f4u: goto label_2e96f4;
        case 0x2e96f8u: goto label_2e96f8;
        case 0x2e96fcu: goto label_2e96fc;
        case 0x2e9700u: goto label_2e9700;
        case 0x2e9704u: goto label_2e9704;
        case 0x2e9708u: goto label_2e9708;
        case 0x2e970cu: goto label_2e970c;
        case 0x2e9710u: goto label_2e9710;
        case 0x2e9714u: goto label_2e9714;
        case 0x2e9718u: goto label_2e9718;
        case 0x2e971cu: goto label_2e971c;
        case 0x2e9720u: goto label_2e9720;
        case 0x2e9724u: goto label_2e9724;
        case 0x2e9728u: goto label_2e9728;
        case 0x2e972cu: goto label_2e972c;
        case 0x2e9730u: goto label_2e9730;
        case 0x2e9734u: goto label_2e9734;
        case 0x2e9738u: goto label_2e9738;
        case 0x2e973cu: goto label_2e973c;
        case 0x2e9740u: goto label_2e9740;
        case 0x2e9744u: goto label_2e9744;
        case 0x2e9748u: goto label_2e9748;
        case 0x2e974cu: goto label_2e974c;
        case 0x2e9750u: goto label_2e9750;
        case 0x2e9754u: goto label_2e9754;
        case 0x2e9758u: goto label_2e9758;
        case 0x2e975cu: goto label_2e975c;
        case 0x2e9760u: goto label_2e9760;
        case 0x2e9764u: goto label_2e9764;
        case 0x2e9768u: goto label_2e9768;
        case 0x2e976cu: goto label_2e976c;
        case 0x2e9770u: goto label_2e9770;
        case 0x2e9774u: goto label_2e9774;
        case 0x2e9778u: goto label_2e9778;
        case 0x2e977cu: goto label_2e977c;
        case 0x2e9780u: goto label_2e9780;
        case 0x2e9784u: goto label_2e9784;
        case 0x2e9788u: goto label_2e9788;
        case 0x2e978cu: goto label_2e978c;
        case 0x2e9790u: goto label_2e9790;
        case 0x2e9794u: goto label_2e9794;
        case 0x2e9798u: goto label_2e9798;
        case 0x2e979cu: goto label_2e979c;
        case 0x2e97a0u: goto label_2e97a0;
        case 0x2e97a4u: goto label_2e97a4;
        case 0x2e97a8u: goto label_2e97a8;
        case 0x2e97acu: goto label_2e97ac;
        case 0x2e97b0u: goto label_2e97b0;
        case 0x2e97b4u: goto label_2e97b4;
        case 0x2e97b8u: goto label_2e97b8;
        case 0x2e97bcu: goto label_2e97bc;
        case 0x2e97c0u: goto label_2e97c0;
        case 0x2e97c4u: goto label_2e97c4;
        case 0x2e97c8u: goto label_2e97c8;
        case 0x2e97ccu: goto label_2e97cc;
        case 0x2e97d0u: goto label_2e97d0;
        case 0x2e97d4u: goto label_2e97d4;
        case 0x2e97d8u: goto label_2e97d8;
        case 0x2e97dcu: goto label_2e97dc;
        case 0x2e97e0u: goto label_2e97e0;
        case 0x2e97e4u: goto label_2e97e4;
        case 0x2e97e8u: goto label_2e97e8;
        case 0x2e97ecu: goto label_2e97ec;
        case 0x2e97f0u: goto label_2e97f0;
        case 0x2e97f4u: goto label_2e97f4;
        case 0x2e97f8u: goto label_2e97f8;
        case 0x2e97fcu: goto label_2e97fc;
        case 0x2e9800u: goto label_2e9800;
        case 0x2e9804u: goto label_2e9804;
        case 0x2e9808u: goto label_2e9808;
        case 0x2e980cu: goto label_2e980c;
        case 0x2e9810u: goto label_2e9810;
        case 0x2e9814u: goto label_2e9814;
        case 0x2e9818u: goto label_2e9818;
        case 0x2e981cu: goto label_2e981c;
        case 0x2e9820u: goto label_2e9820;
        case 0x2e9824u: goto label_2e9824;
        case 0x2e9828u: goto label_2e9828;
        case 0x2e982cu: goto label_2e982c;
        case 0x2e9830u: goto label_2e9830;
        case 0x2e9834u: goto label_2e9834;
        case 0x2e9838u: goto label_2e9838;
        case 0x2e983cu: goto label_2e983c;
        case 0x2e9840u: goto label_2e9840;
        case 0x2e9844u: goto label_2e9844;
        case 0x2e9848u: goto label_2e9848;
        case 0x2e984cu: goto label_2e984c;
        case 0x2e9850u: goto label_2e9850;
        case 0x2e9854u: goto label_2e9854;
        case 0x2e9858u: goto label_2e9858;
        case 0x2e985cu: goto label_2e985c;
        default: break;
    }

    ctx->pc = 0x2e9430u;

label_2e9430:
    // 0x2e9430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e9434:
    // 0x2e9434: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e9434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9438:
    // 0x2e9438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e943c:
    // 0x2e943c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e9440:
    // 0x2e9440: 0xac457cb4  sw          $a1, 0x7CB4($v0)
    ctx->pc = 0x2e9440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31924), GPR_U32(ctx, 5));
label_2e9444:
    // 0x2e9444: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2e9444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2e9448:
    // 0x2e9448: 0x8c437cc0  lw          $v1, 0x7CC0($v0)
    ctx->pc = 0x2e9448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31936)));
label_2e944c:
    // 0x2e944c: 0x24467ca0  addiu       $a2, $v0, 0x7CA0
    ctx->pc = 0x2e944cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31904));
label_2e9450:
    // 0x2e9450: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9454:
    // 0x2e9454: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9458:
    // 0x2e9458: 0x8c6500a0  lw          $a1, 0xA0($v1)
    ctx->pc = 0x2e9458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_2e945c:
    // 0x2e945c: 0xc098ab4  jal         func_262AD0
label_2e9460:
    if (ctx->pc == 0x2E9460u) {
        ctx->pc = 0x2E9460u;
            // 0x2e9460: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9464u;
        goto label_2e9464;
    }
    ctx->pc = 0x2E945Cu;
    SET_GPR_U32(ctx, 31, 0x2E9464u);
    ctx->pc = 0x2E9460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E945Cu;
            // 0x2e9460: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262AD0u;
    if (runtime->hasFunction(0x262AD0u)) {
        auto targetFn = runtime->lookupFunction(0x262AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9464u; }
        if (ctx->pc != 0x2E9464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262AD0_0x262ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9464u; }
        if (ctx->pc != 0x2E9464u) { return; }
    }
    ctx->pc = 0x2E9464u;
label_2e9464:
    // 0x2e9464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9468:
    // 0x2e9468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e946c:
    // 0x2e946c: 0x3e00008  jr          $ra
label_2e9470:
    if (ctx->pc == 0x2E9470u) {
        ctx->pc = 0x2E9470u;
            // 0x2e9470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E9474u;
        goto label_2e9474;
    }
    ctx->pc = 0x2E946Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E946Cu;
            // 0x2e9470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9474u;
label_2e9474:
    // 0x2e9474: 0x0  nop
    ctx->pc = 0x2e9474u;
    // NOP
label_2e9478:
    // 0x2e9478: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x2e9478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_2e947c:
    // 0x2e947c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e947cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9480:
    // 0x2e9480: 0xffb30250  sd          $s3, 0x250($sp)
    ctx->pc = 0x2e9480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 19));
label_2e9484:
    // 0x2e9484: 0x24060214  addiu       $a2, $zero, 0x214
    ctx->pc = 0x2e9484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
label_2e9488:
    // 0x2e9488: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x2e9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
label_2e948c:
    // 0x2e948c: 0xffb10230  sd          $s1, 0x230($sp)
    ctx->pc = 0x2e948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 17));
label_2e9490:
    // 0x2e9490: 0xffbf0260  sd          $ra, 0x260($sp)
    ctx->pc = 0x2e9490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 31));
label_2e9494:
    // 0x2e9494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9498:
    // 0x2e9498: 0xffb00220  sd          $s0, 0x220($sp)
    ctx->pc = 0x2e9498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
label_2e949c:
    // 0x2e949c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e94a0:
    // 0x2e94a0: 0xc049cb6  jal         func_1272D8
label_2e94a4:
    if (ctx->pc == 0x2E94A4u) {
        ctx->pc = 0x2E94A4u;
            // 0x2e94a4: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->pc = 0x2E94A8u;
        goto label_2e94a8;
    }
    ctx->pc = 0x2E94A0u;
    SET_GPR_U32(ctx, 31, 0x2E94A8u);
    ctx->pc = 0x2E94A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94A0u;
            // 0x2e94a4: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94A8u; }
        if (ctx->pc != 0x2E94A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94A8u; }
        if (ctx->pc != 0x2E94A8u) { return; }
    }
    ctx->pc = 0x2E94A8u;
label_2e94a8:
    // 0x2e94a8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2e94a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2e94ac:
    // 0x2e94ac: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2e94acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2e94b0:
    // 0x2e94b0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2e94b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e94b4:
    // 0x2e94b4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2e94b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2e94b8:
    // 0x2e94b8: 0xc04a966  jal         func_12A598
label_2e94bc:
    if (ctx->pc == 0x2E94BCu) {
        ctx->pc = 0x2E94BCu;
            // 0x2e94bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2E94C0u;
        goto label_2e94c0;
    }
    ctx->pc = 0x2E94B8u;
    SET_GPR_U32(ctx, 31, 0x2E94C0u);
    ctx->pc = 0x2E94BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94B8u;
            // 0x2e94bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94C0u; }
        if (ctx->pc != 0x2E94C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94C0u; }
        if (ctx->pc != 0x2E94C0u) { return; }
    }
    ctx->pc = 0x2E94C0u;
label_2e94c0:
    // 0x2e94c0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2e94c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e94c4:
    // 0x2e94c4: 0x27a40104  addiu       $a0, $sp, 0x104
    ctx->pc = 0x2e94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_2e94c8:
    // 0x2e94c8: 0xc04a966  jal         func_12A598
label_2e94cc:
    if (ctx->pc == 0x2E94CCu) {
        ctx->pc = 0x2E94CCu;
            // 0x2e94cc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x2E94D0u;
        goto label_2e94d0;
    }
    ctx->pc = 0x2E94C8u;
    SET_GPR_U32(ctx, 31, 0x2E94D0u);
    ctx->pc = 0x2E94CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94C8u;
            // 0x2e94cc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94D0u; }
        if (ctx->pc != 0x2E94D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94D0u; }
        if (ctx->pc != 0x2E94D0u) { return; }
    }
    ctx->pc = 0x2E94D0u;
label_2e94d0:
    // 0x2e94d0: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x2e94d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2e94d4:
    // 0x2e94d4: 0x27a40204  addiu       $a0, $sp, 0x204
    ctx->pc = 0x2e94d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_2e94d8:
    // 0x2e94d8: 0xc04a966  jal         func_12A598
label_2e94dc:
    if (ctx->pc == 0x2E94DCu) {
        ctx->pc = 0x2E94DCu;
            // 0x2e94dc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2E94E0u;
        goto label_2e94e0;
    }
    ctx->pc = 0x2E94D8u;
    SET_GPR_U32(ctx, 31, 0x2E94E0u);
    ctx->pc = 0x2E94DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94D8u;
            // 0x2e94dc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94E0u; }
        if (ctx->pc != 0x2E94E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94E0u; }
        if (ctx->pc != 0x2E94E0u) { return; }
    }
    ctx->pc = 0x2E94E0u;
label_2e94e0:
    // 0x2e94e0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2e94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2e94e4:
    // 0x2e94e4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2e94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2e94e8:
    // 0x2e94e8: 0x40f809  jalr        $v0
label_2e94ec:
    if (ctx->pc == 0x2E94ECu) {
        ctx->pc = 0x2E94ECu;
            // 0x2e94ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E94F0u;
        goto label_2e94f0;
    }
    ctx->pc = 0x2E94E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E94F0u);
        ctx->pc = 0x2E94ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94E8u;
            // 0x2e94ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E94F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E94F0u; }
            if (ctx->pc != 0x2E94F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E94F0u;
label_2e94f0:
    // 0x2e94f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e94f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e94f4:
    // 0x2e94f4: 0xc0ba34a  jal         func_2E8D28
label_2e94f8:
    if (ctx->pc == 0x2E94F8u) {
        ctx->pc = 0x2E94F8u;
            // 0x2e94f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E94FCu;
        goto label_2e94fc;
    }
    ctx->pc = 0x2E94F4u;
    SET_GPR_U32(ctx, 31, 0x2E94FCu);
    ctx->pc = 0x2E94F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94F4u;
            // 0x2e94f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8D28u;
    if (runtime->hasFunction(0x2E8D28u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94FCu; }
        if (ctx->pc != 0x2E94FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D28_0x2e8d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94FCu; }
        if (ctx->pc != 0x2E94FCu) { return; }
    }
    ctx->pc = 0x2E94FCu;
label_2e94fc:
    // 0x2e94fc: 0x26035c80  addiu       $v1, $s0, 0x5C80
    ctx->pc = 0x2e94fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 23680));
label_2e9500:
    // 0x2e9500: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2e9500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2e9504:
    // 0x2e9504: 0xc043320  jal         func_10CC80
label_2e9508:
    if (ctx->pc == 0x2E9508u) {
        ctx->pc = 0x2E9508u;
            // 0x2e9508: 0xae2300b8  sw          $v1, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
        ctx->pc = 0x2E950Cu;
        goto label_2e950c;
    }
    ctx->pc = 0x2E9504u;
    SET_GPR_U32(ctx, 31, 0x2E950Cu);
    ctx->pc = 0x2E9508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9504u;
            // 0x2e9508: 0xae2300b8  sw          $v1, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E950Cu; }
        if (ctx->pc != 0x2E950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E950Cu; }
        if (ctx->pc != 0x2E950Cu) { return; }
    }
    ctx->pc = 0x2E950Cu;
label_2e950c:
    // 0x2e950c: 0x10000015  b           . + 4 + (0x15 << 2)
label_2e9510:
    if (ctx->pc == 0x2E9510u) {
        ctx->pc = 0x2E9510u;
            // 0x2e9510: 0x3c1301cb  lui         $s3, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)459 << 16));
        ctx->pc = 0x2E9514u;
        goto label_2e9514;
    }
    ctx->pc = 0x2E950Cu;
    {
        const bool branch_taken_0x2e950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E950Cu;
            // 0x2e9510: 0x3c1301cb  lui         $s3, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e950c) {
            ctx->pc = 0x2E9564u;
            goto label_2e9564;
        }
    }
    ctx->pc = 0x2E9514u;
label_2e9514:
    // 0x2e9514: 0x0  nop
    ctx->pc = 0x2e9514u;
    // NOP
label_2e9518:
    // 0x2e9518: 0xc08c682  jal         func_231A08
label_2e951c:
    if (ctx->pc == 0x2E951Cu) {
        ctx->pc = 0x2E9520u;
        goto label_2e9520;
    }
    ctx->pc = 0x2E9518u;
    SET_GPR_U32(ctx, 31, 0x2E9520u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9520u; }
        if (ctx->pc != 0x2E9520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9520u; }
        if (ctx->pc != 0x2E9520u) { return; }
    }
    ctx->pc = 0x2E9520u;
label_2e9520:
    // 0x2e9520: 0x8e047d4c  lw          $a0, 0x7D4C($s0)
    ctx->pc = 0x2e9520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32076)));
label_2e9524:
    // 0x2e9524: 0xc04332c  jal         func_10CCB0
label_2e9528:
    if (ctx->pc == 0x2E9528u) {
        ctx->pc = 0x2E9528u;
            // 0x2e9528: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E952Cu;
        goto label_2e952c;
    }
    ctx->pc = 0x2E9524u;
    SET_GPR_U32(ctx, 31, 0x2E952Cu);
    ctx->pc = 0x2E9528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9524u;
            // 0x2e9528: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E952Cu; }
        if (ctx->pc != 0x2E952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E952Cu; }
        if (ctx->pc != 0x2E952Cu) { return; }
    }
    ctx->pc = 0x2E952Cu;
label_2e952c:
    // 0x2e952c: 0x8e037d4c  lw          $v1, 0x7D4C($s0)
    ctx->pc = 0x2e952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32076)));
label_2e9530:
    // 0x2e9530: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2e9534:
    if (ctx->pc == 0x2E9534u) {
        ctx->pc = 0x2E9538u;
        goto label_2e9538;
    }
    ctx->pc = 0x2E9530u;
    {
        const bool branch_taken_0x2e9530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9530) {
            ctx->pc = 0x2E9540u;
            goto label_2e9540;
        }
    }
    ctx->pc = 0x2E9538u;
label_2e9538:
    // 0x2e9538: 0xc0ba4de  jal         func_2E9378
label_2e953c:
    if (ctx->pc == 0x2E953Cu) {
        ctx->pc = 0x2E953Cu;
            // 0x2e953c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9540u;
        goto label_2e9540;
    }
    ctx->pc = 0x2E9538u;
    SET_GPR_U32(ctx, 31, 0x2E9540u);
    ctx->pc = 0x2E953Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9538u;
            // 0x2e953c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9378u;
    if (runtime->hasFunction(0x2E9378u)) {
        auto targetFn = runtime->lookupFunction(0x2E9378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9540u; }
        if (ctx->pc != 0x2E9540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9378_0x2e9378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9540u; }
        if (ctx->pc != 0x2E9540u) { return; }
    }
    ctx->pc = 0x2E9540u;
label_2e9540:
    // 0x2e9540: 0xc04332c  jal         func_10CCB0
label_2e9544:
    if (ctx->pc == 0x2E9544u) {
        ctx->pc = 0x2E9544u;
            // 0x2e9544: 0x8e047d50  lw          $a0, 0x7D50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32080)));
        ctx->pc = 0x2E9548u;
        goto label_2e9548;
    }
    ctx->pc = 0x2E9540u;
    SET_GPR_U32(ctx, 31, 0x2E9548u);
    ctx->pc = 0x2E9544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9540u;
            // 0x2e9544: 0x8e047d50  lw          $a0, 0x7D50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9548u; }
        if (ctx->pc != 0x2E9548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9548u; }
        if (ctx->pc != 0x2E9548u) { return; }
    }
    ctx->pc = 0x2E9548u;
label_2e9548:
    // 0x2e9548: 0x8e037d50  lw          $v1, 0x7D50($s0)
    ctx->pc = 0x2e9548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32080)));
label_2e954c:
    // 0x2e954c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2e9550:
    if (ctx->pc == 0x2E9550u) {
        ctx->pc = 0x2E9554u;
        goto label_2e9554;
    }
    ctx->pc = 0x2E954Cu;
    {
        const bool branch_taken_0x2e954c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e954c) {
            ctx->pc = 0x2E955Cu;
            goto label_2e955c;
        }
    }
    ctx->pc = 0x2E9554u;
label_2e9554:
    // 0x2e9554: 0xc0ba482  jal         func_2E9208
label_2e9558:
    if (ctx->pc == 0x2E9558u) {
        ctx->pc = 0x2E9558u;
            // 0x2e9558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E955Cu;
        goto label_2e955c;
    }
    ctx->pc = 0x2E9554u;
    SET_GPR_U32(ctx, 31, 0x2E955Cu);
    ctx->pc = 0x2E9558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9554u;
            // 0x2e9558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9208u;
    if (runtime->hasFunction(0x2E9208u)) {
        auto targetFn = runtime->lookupFunction(0x2E9208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E955Cu; }
        if (ctx->pc != 0x2E955Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9208_0x2e9208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E955Cu; }
        if (ctx->pc != 0x2E955Cu) { return; }
    }
    ctx->pc = 0x2E955Cu;
label_2e955c:
    // 0x2e955c: 0xc08c698  jal         func_231A60
label_2e9560:
    if (ctx->pc == 0x2E9560u) {
        ctx->pc = 0x2E9560u;
            // 0x2e9560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9564u;
        goto label_2e9564;
    }
    ctx->pc = 0x2E955Cu;
    SET_GPR_U32(ctx, 31, 0x2E9564u);
    ctx->pc = 0x2E9560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E955Cu;
            // 0x2e9560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9564u; }
        if (ctx->pc != 0x2E9564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9564u; }
        if (ctx->pc != 0x2E9564u) { return; }
    }
    ctx->pc = 0x2E9564u;
label_2e9564:
    // 0x2e9564: 0xc043328  jal         func_10CCA0
label_2e9568:
    if (ctx->pc == 0x2E9568u) {
        ctx->pc = 0x2E9568u;
            // 0x2e9568: 0x8e047d48  lw          $a0, 0x7D48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32072)));
        ctx->pc = 0x2E956Cu;
        goto label_2e956c;
    }
    ctx->pc = 0x2E9564u;
    SET_GPR_U32(ctx, 31, 0x2E956Cu);
    ctx->pc = 0x2E9568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9564u;
            // 0x2e9568: 0x8e047d48  lw          $a0, 0x7D48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E956Cu; }
        if (ctx->pc != 0x2E956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E956Cu; }
        if (ctx->pc != 0x2E956Cu) { return; }
    }
    ctx->pc = 0x2E956Cu;
label_2e956c:
    // 0x2e956c: 0x8e037d54  lw          $v1, 0x7D54($s0)
    ctx->pc = 0x2e956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32084)));
label_2e9570:
    // 0x2e9570: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2e9570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2e9574:
    // 0x2e9574: 0x1060ffe8  beqz        $v1, . + 4 + (-0x18 << 2)
label_2e9578:
    if (ctx->pc == 0x2E9578u) {
        ctx->pc = 0x2E9578u;
            // 0x2e9578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E957Cu;
        goto label_2e957c;
    }
    ctx->pc = 0x2E9574u;
    {
        const bool branch_taken_0x2e9574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9574u;
            // 0x2e9578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9574) {
            ctx->pc = 0x2E9518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9518;
        }
    }
    ctx->pc = 0x2E957Cu;
label_2e957c:
    // 0x2e957c: 0xc0ba3b2  jal         func_2E8EC8
label_2e9580:
    if (ctx->pc == 0x2E9580u) {
        ctx->pc = 0x2E9580u;
            // 0x2e9580: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9584u;
        goto label_2e9584;
    }
    ctx->pc = 0x2E957Cu;
    SET_GPR_U32(ctx, 31, 0x2E9584u);
    ctx->pc = 0x2E9580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E957Cu;
            // 0x2e9580: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8EC8u;
    if (runtime->hasFunction(0x2E8EC8u)) {
        auto targetFn = runtime->lookupFunction(0x2E8EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9584u; }
        if (ctx->pc != 0x2E9584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8EC8_0x2e8ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9584u; }
        if (ctx->pc != 0x2E9584u) { return; }
    }
    ctx->pc = 0x2E9584u;
label_2e9584:
    // 0x2e9584: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2e9584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2e9588:
    // 0x2e9588: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2e9588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2e958c:
    // 0x2e958c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2e9590:
    if (ctx->pc == 0x2E9590u) {
        ctx->pc = 0x2E9590u;
            // 0x2e9590: 0x8e62fda0  lw          $v0, -0x260($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966688)));
        ctx->pc = 0x2E9594u;
        goto label_2e9594;
    }
    ctx->pc = 0x2E958Cu;
    {
        const bool branch_taken_0x2e958c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e958c) {
            ctx->pc = 0x2E9590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E958Cu;
            // 0x2e9590: 0x8e62fda0  lw          $v0, -0x260($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966688)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E95A0u;
            goto label_2e95a0;
        }
    }
    ctx->pc = 0x2E9594u;
label_2e9594:
    // 0x2e9594: 0x40f809  jalr        $v0
label_2e9598:
    if (ctx->pc == 0x2E9598u) {
        ctx->pc = 0x2E9598u;
            // 0x2e9598: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E959Cu;
        goto label_2e959c;
    }
    ctx->pc = 0x2E9594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E959Cu);
        ctx->pc = 0x2E9598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9594u;
            // 0x2e9598: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E959Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E959Cu; }
            if (ctx->pc != 0x2E959Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E959Cu;
label_2e959c:
    // 0x2e959c: 0x8e62fda0  lw          $v0, -0x260($s3)
    ctx->pc = 0x2e959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966688)));
label_2e95a0:
    // 0x2e95a0: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_2e95a4:
    if (ctx->pc == 0x2E95A4u) {
        ctx->pc = 0x2E95A4u;
            // 0x2e95a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E95A8u;
        goto label_2e95a8;
    }
    ctx->pc = 0x2E95A0u;
    {
        const bool branch_taken_0x2e95a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E95A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95A0u;
            // 0x2e95a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95a0) {
            ctx->pc = 0x2E95BCu;
            goto label_2e95bc;
        }
    }
    ctx->pc = 0x2E95A8u;
label_2e95a8:
    // 0x2e95a8: 0x8e024e30  lw          $v0, 0x4E30($s0)
    ctx->pc = 0x2e95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20016)));
label_2e95ac:
    // 0x2e95ac: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e95b0:
    if (ctx->pc == 0x2E95B0u) {
        ctx->pc = 0x2E95B0u;
            // 0x2e95b0: 0xae62fda0  sw          $v0, -0x260($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294966688), GPR_U32(ctx, 2));
        ctx->pc = 0x2E95B4u;
        goto label_2e95b4;
    }
    ctx->pc = 0x2E95ACu;
    {
        const bool branch_taken_0x2e95ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95ACu;
            // 0x2e95b0: 0xae62fda0  sw          $v0, -0x260($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294966688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95ac) {
            ctx->pc = 0x2E95DCu;
            goto label_2e95dc;
        }
    }
    ctx->pc = 0x2E95B4u;
label_2e95b4:
    // 0x2e95b4: 0x0  nop
    ctx->pc = 0x2e95b4u;
    // NOP
label_2e95b8:
    // 0x2e95b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e95b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e95bc:
    // 0x2e95bc: 0x8c624e30  lw          $v0, 0x4E30($v1)
    ctx->pc = 0x2e95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20016)));
label_2e95c0:
    // 0x2e95c0: 0x0  nop
    ctx->pc = 0x2e95c0u;
    // NOP
label_2e95c4:
    // 0x2e95c4: 0x0  nop
    ctx->pc = 0x2e95c4u;
    // NOP
label_2e95c8:
    // 0x2e95c8: 0x0  nop
    ctx->pc = 0x2e95c8u;
    // NOP
label_2e95cc:
    // 0x2e95cc: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
label_2e95d0:
    if (ctx->pc == 0x2E95D0u) {
        ctx->pc = 0x2E95D4u;
        goto label_2e95d4;
    }
    ctx->pc = 0x2E95CCu;
    {
        const bool branch_taken_0x2e95cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e95cc) {
            ctx->pc = 0x2E95B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e95b8;
        }
    }
    ctx->pc = 0x2E95D4u;
label_2e95d4:
    // 0x2e95d4: 0x8c424e30  lw          $v0, 0x4E30($v0)
    ctx->pc = 0x2e95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20016)));
label_2e95d8:
    // 0x2e95d8: 0xac624e30  sw          $v0, 0x4E30($v1)
    ctx->pc = 0x2e95d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20016), GPR_U32(ctx, 2));
label_2e95dc:
    // 0x2e95dc: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x2e95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_2e95e0:
    // 0x2e95e0: 0xc098560  jal         func_261580
label_2e95e4:
    if (ctx->pc == 0x2E95E4u) {
        ctx->pc = 0x2E95E4u;
            // 0x2e95e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E95E8u;
        goto label_2e95e8;
    }
    ctx->pc = 0x2E95E0u;
    SET_GPR_U32(ctx, 31, 0x2E95E8u);
    ctx->pc = 0x2E95E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95E0u;
            // 0x2e95e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E95E8u; }
        if (ctx->pc != 0x2E95E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E95E8u; }
        if (ctx->pc != 0x2E95E8u) { return; }
    }
    ctx->pc = 0x2E95E8u;
label_2e95e8:
    // 0x2e95e8: 0xc043320  jal         func_10CC80
label_2e95ec:
    if (ctx->pc == 0x2E95ECu) {
        ctx->pc = 0x2E95ECu;
            // 0x2e95ec: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->pc = 0x2E95F0u;
        goto label_2e95f0;
    }
    ctx->pc = 0x2E95E8u;
    SET_GPR_U32(ctx, 31, 0x2E95F0u);
    ctx->pc = 0x2E95ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95E8u;
            // 0x2e95ec: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E95F0u; }
        if (ctx->pc != 0x2E95F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E95F0u; }
        if (ctx->pc != 0x2E95F0u) { return; }
    }
    ctx->pc = 0x2E95F0u;
label_2e95f0:
    // 0x2e95f0: 0xdfbf0260  ld          $ra, 0x260($sp)
    ctx->pc = 0x2e95f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_2e95f4:
    // 0x2e95f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e95f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e95f8:
    // 0x2e95f8: 0xdfb30250  ld          $s3, 0x250($sp)
    ctx->pc = 0x2e95f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_2e95fc:
    // 0x2e95fc: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x2e95fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_2e9600:
    // 0x2e9600: 0xdfb10230  ld          $s1, 0x230($sp)
    ctx->pc = 0x2e9600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_2e9604:
    // 0x2e9604: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x2e9604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
label_2e9608:
    // 0x2e9608: 0x3e00008  jr          $ra
label_2e960c:
    if (ctx->pc == 0x2E960Cu) {
        ctx->pc = 0x2E960Cu;
            // 0x2e960c: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x2E9610u;
        goto label_2e9610;
    }
    ctx->pc = 0x2E9608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9608u;
            // 0x2e960c: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9610u;
label_2e9610:
    // 0x2e9610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e9610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e9614:
    // 0x2e9614: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e9614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2e9618:
    // 0x2e9618: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e9618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2e961c:
    // 0x2e961c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2e9620:
    // 0x2e9620: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e9620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9624:
    // 0x2e9624: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e9624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2e9628:
    // 0x2e9628: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e9628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e962c:
    // 0x2e962c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e9630:
    // 0x2e9630: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e9630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e9634:
    // 0x2e9634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e9638:
    // 0x2e9638: 0xc08c682  jal         func_231A08
label_2e963c:
    if (ctx->pc == 0x2E963Cu) {
        ctx->pc = 0x2E963Cu;
            // 0x2e963c: 0x8e30ffc0  lw          $s0, -0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967232)));
        ctx->pc = 0x2E9640u;
        goto label_2e9640;
    }
    ctx->pc = 0x2E9638u;
    SET_GPR_U32(ctx, 31, 0x2E9640u);
    ctx->pc = 0x2E963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9638u;
            // 0x2e963c: 0x8e30ffc0  lw          $s0, -0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9640u; }
        if (ctx->pc != 0x2E9640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9640u; }
        if (ctx->pc != 0x2E9640u) { return; }
    }
    ctx->pc = 0x2E9640u;
label_2e9640:
    // 0x2e9640: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e9640u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9644:
    // 0x2e9644: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x2e9644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2e9648:
    // 0x2e9648: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2e9648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2e964c:
    // 0x2e964c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2e9650:
    if (ctx->pc == 0x2E9650u) {
        ctx->pc = 0x2E9650u;
            // 0x2e9650: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2E9654u;
        goto label_2e9654;
    }
    ctx->pc = 0x2E964Cu;
    {
        const bool branch_taken_0x2e964c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E964Cu;
            // 0x2e9650: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e964c) {
            ctx->pc = 0x2E96E4u;
            goto label_2e96e4;
        }
    }
    ctx->pc = 0x2E9654u;
label_2e9654:
    // 0x2e9654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e9654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e9658:
    // 0x2e9658: 0x2442fe10  addiu       $v0, $v0, -0x1F0
    ctx->pc = 0x2e9658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
label_2e965c:
    // 0x2e965c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e965cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e9660:
    // 0x2e9660: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e9660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9664:
    // 0x2e9664: 0x800008  jr          $a0
label_2e9668:
    if (ctx->pc == 0x2E9668u) {
        ctx->pc = 0x2E966Cu;
        goto label_2e966c;
    }
    ctx->pc = 0x2E9664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E966Cu: goto label_2e966c;
            case 0x2E967Cu: goto label_2e967c;
            case 0x2E96A8u: goto label_2e96a8;
            case 0x2E96DCu: goto label_2e96dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E966Cu;
label_2e966c:
    // 0x2e966c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e9670:
    // 0x2e9670: 0xae025c60  sw          $v0, 0x5C60($s0)
    ctx->pc = 0x2e9670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23648), GPR_U32(ctx, 2));
label_2e9674:
    // 0x2e9674: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2e9678:
    if (ctx->pc == 0x2E9678u) {
        ctx->pc = 0x2E9678u;
            // 0x2e9678: 0xae025c5c  sw          $v0, 0x5C5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23644), GPR_U32(ctx, 2));
        ctx->pc = 0x2E967Cu;
        goto label_2e967c;
    }
    ctx->pc = 0x2E9674u;
    {
        const bool branch_taken_0x2e9674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9674u;
            // 0x2e9678: 0xae025c5c  sw          $v0, 0x5C5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9674) {
            ctx->pc = 0x2E96F0u;
            goto label_2e96f0;
        }
    }
    ctx->pc = 0x2E967Cu;
label_2e967c:
    // 0x2e967c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e9680:
    // 0x2e9680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9684:
    // 0x2e9684: 0xae025c60  sw          $v0, 0x5C60($s0)
    ctx->pc = 0x2e9684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23648), GPR_U32(ctx, 2));
label_2e9688:
    // 0x2e9688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e968c:
    // 0x2e968c: 0xc0ba504  jal         func_2E9410
label_2e9690:
    if (ctx->pc == 0x2E9690u) {
        ctx->pc = 0x2E9690u;
            // 0x2e9690: 0xae025c5c  sw          $v0, 0x5C5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23644), GPR_U32(ctx, 2));
        ctx->pc = 0x2E9694u;
        goto label_2e9694;
    }
    ctx->pc = 0x2E968Cu;
    SET_GPR_U32(ctx, 31, 0x2E9694u);
    ctx->pc = 0x2E9690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E968Cu;
            // 0x2e9690: 0xae025c5c  sw          $v0, 0x5C5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9410u;
    if (runtime->hasFunction(0x2E9410u)) {
        auto targetFn = runtime->lookupFunction(0x2E9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9694u; }
        if (ctx->pc != 0x2E9694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9410_0x2e9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9694u; }
        if (ctx->pc != 0x2E9694u) { return; }
    }
    ctx->pc = 0x2E9694u;
label_2e9694:
    // 0x2e9694: 0x8e034e10  lw          $v1, 0x4E10($s0)
    ctx->pc = 0x2e9694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19984)));
label_2e9698:
    // 0x2e9698: 0x60f809  jalr        $v1
label_2e969c:
    if (ctx->pc == 0x2E969Cu) {
        ctx->pc = 0x2E969Cu;
            // 0x2e969c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E96A0u;
        goto label_2e96a0;
    }
    ctx->pc = 0x2E9698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E96A0u);
        ctx->pc = 0x2E969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9698u;
            // 0x2e969c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E96A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E96A0u; }
            if (ctx->pc != 0x2E96A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E96A0u;
label_2e96a0:
    // 0x2e96a0: 0x10000014  b           . + 4 + (0x14 << 2)
label_2e96a4:
    if (ctx->pc == 0x2E96A4u) {
        ctx->pc = 0x2E96A4u;
            // 0x2e96a4: 0x2a420050  slti        $v0, $s2, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x2E96A8u;
        goto label_2e96a8;
    }
    ctx->pc = 0x2E96A0u;
    {
        const bool branch_taken_0x2e96a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96A0u;
            // 0x2e96a4: 0x2a420050  slti        $v0, $s2, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96a0) {
            ctx->pc = 0x2E96F4u;
            goto label_2e96f4;
        }
    }
    ctx->pc = 0x2E96A8u;
label_2e96a8:
    // 0x2e96a8: 0x8e035c60  lw          $v1, 0x5C60($s0)
    ctx->pc = 0x2e96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23648)));
label_2e96ac:
    // 0x2e96ac: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2e96acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2e96b0:
    // 0x2e96b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2e96b4:
    if (ctx->pc == 0x2E96B4u) {
        ctx->pc = 0x2E96B4u;
            // 0x2e96b4: 0x8e024e14  lw          $v0, 0x4E14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19988)));
        ctx->pc = 0x2E96B8u;
        goto label_2e96b8;
    }
    ctx->pc = 0x2E96B0u;
    {
        const bool branch_taken_0x2e96b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e96b0) {
            ctx->pc = 0x2E96B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96B0u;
            // 0x2e96b4: 0x8e024e14  lw          $v0, 0x4E14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19988)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E96CCu;
            goto label_2e96cc;
        }
    }
    ctx->pc = 0x2E96B8u;
label_2e96b8:
    // 0x2e96b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e96bc:
    // 0x2e96bc: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_2e96c0:
    if (ctx->pc == 0x2E96C0u) {
        ctx->pc = 0x2E96C0u;
            // 0x2e96c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2E96C4u;
        goto label_2e96c4;
    }
    ctx->pc = 0x2E96BCu;
    {
        const bool branch_taken_0x2e96bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E96C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96BCu;
            // 0x2e96c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96bc) {
            ctx->pc = 0x2E96C8u;
            goto label_2e96c8;
        }
    }
    ctx->pc = 0x2E96C4u;
label_2e96c4:
    // 0x2e96c4: 0xae025c60  sw          $v0, 0x5C60($s0)
    ctx->pc = 0x2e96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23648), GPR_U32(ctx, 2));
label_2e96c8:
    // 0x2e96c8: 0x8e024e14  lw          $v0, 0x4E14($s0)
    ctx->pc = 0x2e96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19988)));
label_2e96cc:
    // 0x2e96cc: 0x40f809  jalr        $v0
label_2e96d0:
    if (ctx->pc == 0x2E96D0u) {
        ctx->pc = 0x2E96D0u;
            // 0x2e96d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E96D4u;
        goto label_2e96d4;
    }
    ctx->pc = 0x2E96CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E96D4u);
        ctx->pc = 0x2E96D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96CCu;
            // 0x2e96d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E96D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E96D4u; }
            if (ctx->pc != 0x2E96D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E96D4u;
label_2e96d4:
    // 0x2e96d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e96d8:
    if (ctx->pc == 0x2E96D8u) {
        ctx->pc = 0x2E96D8u;
            // 0x2e96d8: 0x2a420050  slti        $v0, $s2, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x2E96DCu;
        goto label_2e96dc;
    }
    ctx->pc = 0x2E96D4u;
    {
        const bool branch_taken_0x2e96d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96D4u;
            // 0x2e96d8: 0x2a420050  slti        $v0, $s2, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96d4) {
            ctx->pc = 0x2E96F4u;
            goto label_2e96f4;
        }
    }
    ctx->pc = 0x2E96DCu;
label_2e96dc:
    // 0x2e96dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e96e0:
    if (ctx->pc == 0x2E96E0u) {
        ctx->pc = 0x2E96E0u;
            // 0x2e96e0: 0xae005c5c  sw          $zero, 0x5C5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23644), GPR_U32(ctx, 0));
        ctx->pc = 0x2E96E4u;
        goto label_2e96e4;
    }
    ctx->pc = 0x2E96DCu;
    {
        const bool branch_taken_0x2e96dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96DCu;
            // 0x2e96e0: 0xae005c5c  sw          $zero, 0x5C5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96dc) {
            ctx->pc = 0x2E96F0u;
            goto label_2e96f0;
        }
    }
    ctx->pc = 0x2E96E4u;
label_2e96e4:
    // 0x2e96e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e96e8:
    // 0x2e96e8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2e96ec:
    if (ctx->pc == 0x2E96ECu) {
        ctx->pc = 0x2E96ECu;
            // 0x2e96ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2E96F0u;
        goto label_2e96f0;
    }
    ctx->pc = 0x2E96E8u;
    {
        const bool branch_taken_0x2e96e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96E8u;
            // 0x2e96ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96e8) {
            ctx->pc = 0x2E972Cu;
            goto label_2e972c;
        }
    }
    ctx->pc = 0x2E96F0u;
label_2e96f0:
    // 0x2e96f0: 0x2a420050  slti        $v0, $s2, 0x50
    ctx->pc = 0x2e96f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
label_2e96f4:
    // 0x2e96f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2e96f8:
    if (ctx->pc == 0x2E96F8u) {
        ctx->pc = 0x2E96F8u;
            // 0x2e96f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2E96FCu;
        goto label_2e96fc;
    }
    ctx->pc = 0x2E96F4u;
    {
        const bool branch_taken_0x2e96f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E96F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E96F4u;
            // 0x2e96f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96f4) {
            ctx->pc = 0x2E9710u;
            goto label_2e9710;
        }
    }
    ctx->pc = 0x2E96FCu;
label_2e96fc:
    // 0x2e96fc: 0x26047f80  addiu       $a0, $s0, 0x7F80
    ctx->pc = 0x2e96fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32640));
label_2e9700:
    // 0x2e9700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e9700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9704:
    // 0x2e9704: 0xc08b538  jal         func_22D4E0
label_2e9708:
    if (ctx->pc == 0x2E9708u) {
        ctx->pc = 0x2E9708u;
            // 0x2e9708: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2E970Cu;
        goto label_2e970c;
    }
    ctx->pc = 0x2E9704u;
    SET_GPR_U32(ctx, 31, 0x2E970Cu);
    ctx->pc = 0x2E9708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9704u;
            // 0x2e9708: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E970Cu; }
        if (ctx->pc != 0x2E970Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E970Cu; }
        if (ctx->pc != 0x2E970Cu) { return; }
    }
    ctx->pc = 0x2E970Cu;
label_2e970c:
    // 0x2e970c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e9710:
    // 0x2e9710: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
label_2e9714:
    if (ctx->pc == 0x2E9714u) {
        ctx->pc = 0x2E9714u;
            // 0x2e9714: 0x2a420070  slti        $v0, $s2, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)112) ? 1 : 0);
        ctx->pc = 0x2E9718u;
        goto label_2e9718;
    }
    ctx->pc = 0x2E9710u;
    {
        const bool branch_taken_0x2e9710 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9710u;
            // 0x2e9714: 0x2a420070  slti        $v0, $s2, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)112) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9710) {
            ctx->pc = 0x2E972Cu;
            goto label_2e972c;
        }
    }
    ctx->pc = 0x2E9718u;
label_2e9718:
    // 0x2e9718: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2e971c:
    if (ctx->pc == 0x2E971Cu) {
        ctx->pc = 0x2E971Cu;
            // 0x2e971c: 0x26047fd0  addiu       $a0, $s0, 0x7FD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32720));
        ctx->pc = 0x2E9720u;
        goto label_2e9720;
    }
    ctx->pc = 0x2E9718u;
    {
        const bool branch_taken_0x2e9718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E971Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9718u;
            // 0x2e971c: 0x26047fd0  addiu       $a0, $s0, 0x7FD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9718) {
            ctx->pc = 0x2E972Cu;
            goto label_2e972c;
        }
    }
    ctx->pc = 0x2E9720u;
label_2e9720:
    // 0x2e9720: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x2e9720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2e9724:
    // 0x2e9724: 0xc08b538  jal         func_22D4E0
label_2e9728:
    if (ctx->pc == 0x2E9728u) {
        ctx->pc = 0x2E9728u;
            // 0x2e9728: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2E972Cu;
        goto label_2e972c;
    }
    ctx->pc = 0x2E9724u;
    SET_GPR_U32(ctx, 31, 0x2E972Cu);
    ctx->pc = 0x2E9728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9724u;
            // 0x2e9728: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E972Cu; }
        if (ctx->pc != 0x2E972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E972Cu; }
        if (ctx->pc != 0x2E972Cu) { return; }
    }
    ctx->pc = 0x2E972Cu;
label_2e972c:
    // 0x2e972c: 0xc08c698  jal         func_231A60
label_2e9730:
    if (ctx->pc == 0x2E9730u) {
        ctx->pc = 0x2E9730u;
            // 0x2e9730: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9734u;
        goto label_2e9734;
    }
    ctx->pc = 0x2E972Cu;
    SET_GPR_U32(ctx, 31, 0x2E9734u);
    ctx->pc = 0x2E9730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E972Cu;
            // 0x2e9730: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9734u; }
        if (ctx->pc != 0x2E9734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9734u; }
        if (ctx->pc != 0x2E9734u) { return; }
    }
    ctx->pc = 0x2E9734u;
label_2e9734:
    // 0x2e9734: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e9734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9738:
    // 0x2e9738: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e9738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e973c:
    // 0x2e973c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e973cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e9740:
    // 0x2e9740: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e9740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e9744:
    // 0x2e9744: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e9744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e9748:
    // 0x2e9748: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e9748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e974c:
    // 0x2e974c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e974cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9750:
    // 0x2e9750: 0x3e00008  jr          $ra
label_2e9754:
    if (ctx->pc == 0x2E9754u) {
        ctx->pc = 0x2E9754u;
            // 0x2e9754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2E9758u;
        goto label_2e9758;
    }
    ctx->pc = 0x2E9750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9750u;
            // 0x2e9754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9758u;
label_2e9758:
    // 0x2e9758: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e975c:
    // 0x2e975c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2e975cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2e9760:
    // 0x2e9760: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e9760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2e9764:
    // 0x2e9764: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e9764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9768:
    // 0x2e9768: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e9768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2e976c:
    // 0x2e976c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e976cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e9770:
    // 0x2e9770: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e9770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2e9774:
    // 0x2e9774: 0xc098590  jal         func_261640
label_2e9778:
    if (ctx->pc == 0x2E9778u) {
        ctx->pc = 0x2E9778u;
            // 0x2e9778: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2E977Cu;
        goto label_2e977c;
    }
    ctx->pc = 0x2E9774u;
    SET_GPR_U32(ctx, 31, 0x2E977Cu);
    ctx->pc = 0x2E9778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9774u;
            // 0x2e9778: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261640u;
    if (runtime->hasFunction(0x261640u)) {
        auto targetFn = runtime->lookupFunction(0x261640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E977Cu; }
        if (ctx->pc != 0x2E977Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261640_0x261640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E977Cu; }
        if (ctx->pc != 0x2E977Cu) { return; }
    }
    ctx->pc = 0x2E977Cu;
label_2e977c:
    // 0x2e977c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e977cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9780:
    // 0x2e9780: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_2e9784:
    if (ctx->pc == 0x2E9784u) {
        ctx->pc = 0x2E9784u;
            // 0x2e9784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9788u;
        goto label_2e9788;
    }
    ctx->pc = 0x2E9780u;
    {
        const bool branch_taken_0x2e9780 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9780u;
            // 0x2e9784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9780) {
            ctx->pc = 0x2E97A0u;
            goto label_2e97a0;
        }
    }
    ctx->pc = 0x2E9788u;
label_2e9788:
    // 0x2e9788: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e9788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e978c:
    // 0x2e978c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e978cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e9790:
    // 0x2e9790: 0xc08b5ac  jal         func_22D6B0
label_2e9794:
    if (ctx->pc == 0x2E9794u) {
        ctx->pc = 0x2E9794u;
            // 0x2e9794: 0x24a5fe28  addiu       $a1, $a1, -0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966824));
        ctx->pc = 0x2E9798u;
        goto label_2e9798;
    }
    ctx->pc = 0x2E9790u;
    SET_GPR_U32(ctx, 31, 0x2E9798u);
    ctx->pc = 0x2E9794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9790u;
            // 0x2e9794: 0x24a5fe28  addiu       $a1, $a1, -0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9798u; }
        if (ctx->pc != 0x2E9798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9798u; }
        if (ctx->pc != 0x2E9798u) { return; }
    }
    ctx->pc = 0x2E9798u;
label_2e9798:
    // 0x2e9798: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2e979c:
    if (ctx->pc == 0x2E979Cu) {
        ctx->pc = 0x2E979Cu;
            // 0x2e979c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2E97A0u;
        goto label_2e97a0;
    }
    ctx->pc = 0x2E9798u;
    {
        const bool branch_taken_0x2e9798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9798u;
            // 0x2e979c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9798) {
            ctx->pc = 0x2E9818u;
            goto label_2e9818;
        }
    }
    ctx->pc = 0x2E97A0u;
label_2e97a0:
    // 0x2e97a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e97a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e97a4:
    // 0x2e97a4: 0xc049cb6  jal         func_1272D8
label_2e97a8:
    if (ctx->pc == 0x2E97A8u) {
        ctx->pc = 0x2E97A8u;
            // 0x2e97a8: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x2E97ACu;
        goto label_2e97ac;
    }
    ctx->pc = 0x2E97A4u;
    SET_GPR_U32(ctx, 31, 0x2E97ACu);
    ctx->pc = 0x2E97A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E97A4u;
            // 0x2e97a8: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97ACu; }
        if (ctx->pc != 0x2E97ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97ACu; }
        if (ctx->pc != 0x2E97ACu) { return; }
    }
    ctx->pc = 0x2E97ACu;
label_2e97ac:
    // 0x2e97ac: 0xc0ba336  jal         func_2E8CD8
label_2e97b0:
    if (ctx->pc == 0x2E97B0u) {
        ctx->pc = 0x2E97B0u;
            // 0x2e97b0: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x2E97B4u;
        goto label_2e97b4;
    }
    ctx->pc = 0x2E97ACu;
    SET_GPR_U32(ctx, 31, 0x2E97B4u);
    ctx->pc = 0x2E97B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E97ACu;
            // 0x2e97b0: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8CD8u;
    if (runtime->hasFunction(0x2E8CD8u)) {
        auto targetFn = runtime->lookupFunction(0x2E8CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97B4u; }
        if (ctx->pc != 0x2E97B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8CD8_0x2e8cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97B4u; }
        if (ctx->pc != 0x2E97B4u) { return; }
    }
    ctx->pc = 0x2E97B4u;
label_2e97b4:
    // 0x2e97b4: 0xae224e34  sw          $v0, 0x4E34($s1)
    ctx->pc = 0x2e97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20020), GPR_U32(ctx, 2));
label_2e97b8:
    // 0x2e97b8: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2e97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
label_2e97bc:
    // 0x2e97bc: 0x8c62fda0  lw          $v0, -0x260($v1)
    ctx->pc = 0x2e97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966688)));
label_2e97c0:
    // 0x2e97c0: 0xae224e30  sw          $v0, 0x4E30($s1)
    ctx->pc = 0x2e97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20016), GPR_U32(ctx, 2));
label_2e97c4:
    // 0x2e97c4: 0xac71fda0  sw          $s1, -0x260($v1)
    ctx->pc = 0x2e97c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966688), GPR_U32(ctx, 17));
label_2e97c8:
    // 0x2e97c8: 0xae5100c0  sw          $s1, 0xC0($s2)
    ctx->pc = 0x2e97c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 17));
label_2e97cc:
    // 0x2e97cc: 0xc0432d4  jal         func_10CB50
label_2e97d0:
    if (ctx->pc == 0x2E97D0u) {
        ctx->pc = 0x2E97D0u;
            // 0x2e97d0: 0xae317480  sw          $s1, 0x7480($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29824), GPR_U32(ctx, 17));
        ctx->pc = 0x2E97D4u;
        goto label_2e97d4;
    }
    ctx->pc = 0x2E97CCu;
    SET_GPR_U32(ctx, 31, 0x2E97D4u);
    ctx->pc = 0x2E97D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E97CCu;
            // 0x2e97d0: 0xae317480  sw          $s1, 0x7480($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29824), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97D4u; }
        if (ctx->pc != 0x2E97D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97D4u; }
        if (ctx->pc != 0x2E97D4u) { return; }
    }
    ctx->pc = 0x2E97D4u;
label_2e97d4:
    // 0x2e97d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e97d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e97d8:
    // 0x2e97d8: 0xc0443dc  jal         func_110F70
label_2e97dc:
    if (ctx->pc == 0x2E97DCu) {
        ctx->pc = 0x2E97DCu;
            // 0x2e97dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E97E0u;
        goto label_2e97e0;
    }
    ctx->pc = 0x2E97D8u;
    SET_GPR_U32(ctx, 31, 0x2E97E0u);
    ctx->pc = 0x2E97DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E97D8u;
            // 0x2e97dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110F70u;
    if (runtime->hasFunction(0x110F70u)) {
        auto targetFn = runtime->lookupFunction(0x110F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97E0u; }
        if (ctx->pc != 0x2E97E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110F70_0x110f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97E0u; }
        if (ctx->pc != 0x2E97E0u) { return; }
    }
    ctx->pc = 0x2E97E0u;
label_2e97e0:
    // 0x2e97e0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2e97e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_2e97e4:
    // 0x2e97e4: 0x8e4500ac  lw          $a1, 0xAC($s2)
    ctx->pc = 0x2e97e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_2e97e8:
    // 0x2e97e8: 0x262774c0  addiu       $a3, $s1, 0x74C0
    ctx->pc = 0x2e97e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 29888));
label_2e97ec:
    // 0x2e97ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e97ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e97f0:
    // 0x2e97f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e97f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e97f4:
    // 0x2e97f4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2e97f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e97f8:
    // 0x2e97f8: 0x24c69610  addiu       $a2, $a2, -0x69F0
    ctx->pc = 0x2e97f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940176));
label_2e97fc:
    // 0x2e97fc: 0xc044402  jal         func_111008
label_2e9800:
    if (ctx->pc == 0x2E9800u) {
        ctx->pc = 0x2E9800u;
            // 0x2e9800: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->pc = 0x2E9804u;
        goto label_2e9804;
    }
    ctx->pc = 0x2E97FCu;
    SET_GPR_U32(ctx, 31, 0x2E9804u);
    ctx->pc = 0x2E9800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E97FCu;
            // 0x2e9800: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111008u;
    if (runtime->hasFunction(0x111008u)) {
        auto targetFn = runtime->lookupFunction(0x111008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9804u; }
        if (ctx->pc != 0x2E9804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111008_0x111008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9804u; }
        if (ctx->pc != 0x2E9804u) { return; }
    }
    ctx->pc = 0x2E9804u;
label_2e9804:
    // 0x2e9804: 0xc043320  jal         func_10CC80
label_2e9808:
    if (ctx->pc == 0x2E9808u) {
        ctx->pc = 0x2E9808u;
            // 0x2e9808: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->pc = 0x2E980Cu;
        goto label_2e980c;
    }
    ctx->pc = 0x2E9804u;
    SET_GPR_U32(ctx, 31, 0x2E980Cu);
    ctx->pc = 0x2E9808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9804u;
            // 0x2e9808: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E980Cu; }
        if (ctx->pc != 0x2E980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E980Cu; }
        if (ctx->pc != 0x2E980Cu) { return; }
    }
    ctx->pc = 0x2E980Cu;
label_2e980c:
    // 0x2e980c: 0xc044508  jal         func_111420
label_2e9810:
    if (ctx->pc == 0x2E9810u) {
        ctx->pc = 0x2E9810u;
            // 0x2e9810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9814u;
        goto label_2e9814;
    }
    ctx->pc = 0x2E980Cu;
    SET_GPR_U32(ctx, 31, 0x2E9814u);
    ctx->pc = 0x2E9810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E980Cu;
            // 0x2e9810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111420u;
    if (runtime->hasFunction(0x111420u)) {
        auto targetFn = runtime->lookupFunction(0x111420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9814u; }
        if (ctx->pc != 0x2E9814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111420_0x111420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9814u; }
        if (ctx->pc != 0x2E9814u) { return; }
    }
    ctx->pc = 0x2E9814u;
label_2e9814:
    // 0x2e9814: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9818:
    // 0x2e9818: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e9818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e981c:
    // 0x2e981c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e981cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e9820:
    // 0x2e9820: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e9820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e9824:
    // 0x2e9824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9828:
    // 0x2e9828: 0x3e00008  jr          $ra
label_2e982c:
    if (ctx->pc == 0x2E982Cu) {
        ctx->pc = 0x2E982Cu;
            // 0x2e982c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E9830u;
        goto label_2e9830;
    }
    ctx->pc = 0x2E9828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9828u;
            // 0x2e982c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9830u;
label_2e9830:
    // 0x2e9830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e9834:
    // 0x2e9834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e9834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e9838:
    // 0x2e9838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e983c:
    // 0x2e983c: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2e983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2e9840:
    // 0x2e9840: 0x8c447d48  lw          $a0, 0x7D48($v0)
    ctx->pc = 0x2e9840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32072)));
label_2e9844:
    // 0x2e9844: 0xc043320  jal         func_10CC80
label_2e9848:
    if (ctx->pc == 0x2E9848u) {
        ctx->pc = 0x2E9848u;
            // 0x2e9848: 0xac437d54  sw          $v1, 0x7D54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32084), GPR_U32(ctx, 3));
        ctx->pc = 0x2E984Cu;
        goto label_2e984c;
    }
    ctx->pc = 0x2E9844u;
    SET_GPR_U32(ctx, 31, 0x2E984Cu);
    ctx->pc = 0x2E9848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9844u;
            // 0x2e9848: 0xac437d54  sw          $v1, 0x7D54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32084), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E984Cu; }
        if (ctx->pc != 0x2E984Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E984Cu; }
        if (ctx->pc != 0x2E984Cu) { return; }
    }
    ctx->pc = 0x2E984Cu;
label_2e984c:
    // 0x2e984c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e984cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9850:
    // 0x2e9850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9854:
    // 0x2e9854: 0x3e00008  jr          $ra
label_2e9858:
    if (ctx->pc == 0x2E9858u) {
        ctx->pc = 0x2E9858u;
            // 0x2e9858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E985Cu;
        goto label_2e985c;
    }
    ctx->pc = 0x2E9854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9854u;
            // 0x2e9858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E985Cu;
label_2e985c:
    // 0x2e985c: 0x0  nop
    ctx->pc = 0x2e985cu;
    // NOP
    ctx->pc = 0x2e9860u;
}
