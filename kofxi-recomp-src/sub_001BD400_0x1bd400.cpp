#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD400
// Address: 0x1bd400 - 0x1bd7c0
void sub_001BD400_0x1bd400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD400_0x1bd400");
#endif

    switch (ctx->pc) {
        case 0x1bd400u: goto label_1bd400;
        case 0x1bd404u: goto label_1bd404;
        case 0x1bd408u: goto label_1bd408;
        case 0x1bd40cu: goto label_1bd40c;
        case 0x1bd410u: goto label_1bd410;
        case 0x1bd414u: goto label_1bd414;
        case 0x1bd418u: goto label_1bd418;
        case 0x1bd41cu: goto label_1bd41c;
        case 0x1bd420u: goto label_1bd420;
        case 0x1bd424u: goto label_1bd424;
        case 0x1bd428u: goto label_1bd428;
        case 0x1bd42cu: goto label_1bd42c;
        case 0x1bd430u: goto label_1bd430;
        case 0x1bd434u: goto label_1bd434;
        case 0x1bd438u: goto label_1bd438;
        case 0x1bd43cu: goto label_1bd43c;
        case 0x1bd440u: goto label_1bd440;
        case 0x1bd444u: goto label_1bd444;
        case 0x1bd448u: goto label_1bd448;
        case 0x1bd44cu: goto label_1bd44c;
        case 0x1bd450u: goto label_1bd450;
        case 0x1bd454u: goto label_1bd454;
        case 0x1bd458u: goto label_1bd458;
        case 0x1bd45cu: goto label_1bd45c;
        case 0x1bd460u: goto label_1bd460;
        case 0x1bd464u: goto label_1bd464;
        case 0x1bd468u: goto label_1bd468;
        case 0x1bd46cu: goto label_1bd46c;
        case 0x1bd470u: goto label_1bd470;
        case 0x1bd474u: goto label_1bd474;
        case 0x1bd478u: goto label_1bd478;
        case 0x1bd47cu: goto label_1bd47c;
        case 0x1bd480u: goto label_1bd480;
        case 0x1bd484u: goto label_1bd484;
        case 0x1bd488u: goto label_1bd488;
        case 0x1bd48cu: goto label_1bd48c;
        case 0x1bd490u: goto label_1bd490;
        case 0x1bd494u: goto label_1bd494;
        case 0x1bd498u: goto label_1bd498;
        case 0x1bd49cu: goto label_1bd49c;
        case 0x1bd4a0u: goto label_1bd4a0;
        case 0x1bd4a4u: goto label_1bd4a4;
        case 0x1bd4a8u: goto label_1bd4a8;
        case 0x1bd4acu: goto label_1bd4ac;
        case 0x1bd4b0u: goto label_1bd4b0;
        case 0x1bd4b4u: goto label_1bd4b4;
        case 0x1bd4b8u: goto label_1bd4b8;
        case 0x1bd4bcu: goto label_1bd4bc;
        case 0x1bd4c0u: goto label_1bd4c0;
        case 0x1bd4c4u: goto label_1bd4c4;
        case 0x1bd4c8u: goto label_1bd4c8;
        case 0x1bd4ccu: goto label_1bd4cc;
        case 0x1bd4d0u: goto label_1bd4d0;
        case 0x1bd4d4u: goto label_1bd4d4;
        case 0x1bd4d8u: goto label_1bd4d8;
        case 0x1bd4dcu: goto label_1bd4dc;
        case 0x1bd4e0u: goto label_1bd4e0;
        case 0x1bd4e4u: goto label_1bd4e4;
        case 0x1bd4e8u: goto label_1bd4e8;
        case 0x1bd4ecu: goto label_1bd4ec;
        case 0x1bd4f0u: goto label_1bd4f0;
        case 0x1bd4f4u: goto label_1bd4f4;
        case 0x1bd4f8u: goto label_1bd4f8;
        case 0x1bd4fcu: goto label_1bd4fc;
        case 0x1bd500u: goto label_1bd500;
        case 0x1bd504u: goto label_1bd504;
        case 0x1bd508u: goto label_1bd508;
        case 0x1bd50cu: goto label_1bd50c;
        case 0x1bd510u: goto label_1bd510;
        case 0x1bd514u: goto label_1bd514;
        case 0x1bd518u: goto label_1bd518;
        case 0x1bd51cu: goto label_1bd51c;
        case 0x1bd520u: goto label_1bd520;
        case 0x1bd524u: goto label_1bd524;
        case 0x1bd528u: goto label_1bd528;
        case 0x1bd52cu: goto label_1bd52c;
        case 0x1bd530u: goto label_1bd530;
        case 0x1bd534u: goto label_1bd534;
        case 0x1bd538u: goto label_1bd538;
        case 0x1bd53cu: goto label_1bd53c;
        case 0x1bd540u: goto label_1bd540;
        case 0x1bd544u: goto label_1bd544;
        case 0x1bd548u: goto label_1bd548;
        case 0x1bd54cu: goto label_1bd54c;
        case 0x1bd550u: goto label_1bd550;
        case 0x1bd554u: goto label_1bd554;
        case 0x1bd558u: goto label_1bd558;
        case 0x1bd55cu: goto label_1bd55c;
        case 0x1bd560u: goto label_1bd560;
        case 0x1bd564u: goto label_1bd564;
        case 0x1bd568u: goto label_1bd568;
        case 0x1bd56cu: goto label_1bd56c;
        case 0x1bd570u: goto label_1bd570;
        case 0x1bd574u: goto label_1bd574;
        case 0x1bd578u: goto label_1bd578;
        case 0x1bd57cu: goto label_1bd57c;
        case 0x1bd580u: goto label_1bd580;
        case 0x1bd584u: goto label_1bd584;
        case 0x1bd588u: goto label_1bd588;
        case 0x1bd58cu: goto label_1bd58c;
        case 0x1bd590u: goto label_1bd590;
        case 0x1bd594u: goto label_1bd594;
        case 0x1bd598u: goto label_1bd598;
        case 0x1bd59cu: goto label_1bd59c;
        case 0x1bd5a0u: goto label_1bd5a0;
        case 0x1bd5a4u: goto label_1bd5a4;
        case 0x1bd5a8u: goto label_1bd5a8;
        case 0x1bd5acu: goto label_1bd5ac;
        case 0x1bd5b0u: goto label_1bd5b0;
        case 0x1bd5b4u: goto label_1bd5b4;
        case 0x1bd5b8u: goto label_1bd5b8;
        case 0x1bd5bcu: goto label_1bd5bc;
        case 0x1bd5c0u: goto label_1bd5c0;
        case 0x1bd5c4u: goto label_1bd5c4;
        case 0x1bd5c8u: goto label_1bd5c8;
        case 0x1bd5ccu: goto label_1bd5cc;
        case 0x1bd5d0u: goto label_1bd5d0;
        case 0x1bd5d4u: goto label_1bd5d4;
        case 0x1bd5d8u: goto label_1bd5d8;
        case 0x1bd5dcu: goto label_1bd5dc;
        case 0x1bd5e0u: goto label_1bd5e0;
        case 0x1bd5e4u: goto label_1bd5e4;
        case 0x1bd5e8u: goto label_1bd5e8;
        case 0x1bd5ecu: goto label_1bd5ec;
        case 0x1bd5f0u: goto label_1bd5f0;
        case 0x1bd5f4u: goto label_1bd5f4;
        case 0x1bd5f8u: goto label_1bd5f8;
        case 0x1bd5fcu: goto label_1bd5fc;
        case 0x1bd600u: goto label_1bd600;
        case 0x1bd604u: goto label_1bd604;
        case 0x1bd608u: goto label_1bd608;
        case 0x1bd60cu: goto label_1bd60c;
        case 0x1bd610u: goto label_1bd610;
        case 0x1bd614u: goto label_1bd614;
        case 0x1bd618u: goto label_1bd618;
        case 0x1bd61cu: goto label_1bd61c;
        case 0x1bd620u: goto label_1bd620;
        case 0x1bd624u: goto label_1bd624;
        case 0x1bd628u: goto label_1bd628;
        case 0x1bd62cu: goto label_1bd62c;
        case 0x1bd630u: goto label_1bd630;
        case 0x1bd634u: goto label_1bd634;
        case 0x1bd638u: goto label_1bd638;
        case 0x1bd63cu: goto label_1bd63c;
        case 0x1bd640u: goto label_1bd640;
        case 0x1bd644u: goto label_1bd644;
        case 0x1bd648u: goto label_1bd648;
        case 0x1bd64cu: goto label_1bd64c;
        case 0x1bd650u: goto label_1bd650;
        case 0x1bd654u: goto label_1bd654;
        case 0x1bd658u: goto label_1bd658;
        case 0x1bd65cu: goto label_1bd65c;
        case 0x1bd660u: goto label_1bd660;
        case 0x1bd664u: goto label_1bd664;
        case 0x1bd668u: goto label_1bd668;
        case 0x1bd66cu: goto label_1bd66c;
        case 0x1bd670u: goto label_1bd670;
        case 0x1bd674u: goto label_1bd674;
        case 0x1bd678u: goto label_1bd678;
        case 0x1bd67cu: goto label_1bd67c;
        case 0x1bd680u: goto label_1bd680;
        case 0x1bd684u: goto label_1bd684;
        case 0x1bd688u: goto label_1bd688;
        case 0x1bd68cu: goto label_1bd68c;
        case 0x1bd690u: goto label_1bd690;
        case 0x1bd694u: goto label_1bd694;
        case 0x1bd698u: goto label_1bd698;
        case 0x1bd69cu: goto label_1bd69c;
        case 0x1bd6a0u: goto label_1bd6a0;
        case 0x1bd6a4u: goto label_1bd6a4;
        case 0x1bd6a8u: goto label_1bd6a8;
        case 0x1bd6acu: goto label_1bd6ac;
        case 0x1bd6b0u: goto label_1bd6b0;
        case 0x1bd6b4u: goto label_1bd6b4;
        case 0x1bd6b8u: goto label_1bd6b8;
        case 0x1bd6bcu: goto label_1bd6bc;
        case 0x1bd6c0u: goto label_1bd6c0;
        case 0x1bd6c4u: goto label_1bd6c4;
        case 0x1bd6c8u: goto label_1bd6c8;
        case 0x1bd6ccu: goto label_1bd6cc;
        case 0x1bd6d0u: goto label_1bd6d0;
        case 0x1bd6d4u: goto label_1bd6d4;
        case 0x1bd6d8u: goto label_1bd6d8;
        case 0x1bd6dcu: goto label_1bd6dc;
        case 0x1bd6e0u: goto label_1bd6e0;
        case 0x1bd6e4u: goto label_1bd6e4;
        case 0x1bd6e8u: goto label_1bd6e8;
        case 0x1bd6ecu: goto label_1bd6ec;
        case 0x1bd6f0u: goto label_1bd6f0;
        case 0x1bd6f4u: goto label_1bd6f4;
        case 0x1bd6f8u: goto label_1bd6f8;
        case 0x1bd6fcu: goto label_1bd6fc;
        case 0x1bd700u: goto label_1bd700;
        case 0x1bd704u: goto label_1bd704;
        case 0x1bd708u: goto label_1bd708;
        case 0x1bd70cu: goto label_1bd70c;
        case 0x1bd710u: goto label_1bd710;
        case 0x1bd714u: goto label_1bd714;
        case 0x1bd718u: goto label_1bd718;
        case 0x1bd71cu: goto label_1bd71c;
        case 0x1bd720u: goto label_1bd720;
        case 0x1bd724u: goto label_1bd724;
        case 0x1bd728u: goto label_1bd728;
        case 0x1bd72cu: goto label_1bd72c;
        case 0x1bd730u: goto label_1bd730;
        case 0x1bd734u: goto label_1bd734;
        case 0x1bd738u: goto label_1bd738;
        case 0x1bd73cu: goto label_1bd73c;
        case 0x1bd740u: goto label_1bd740;
        case 0x1bd744u: goto label_1bd744;
        case 0x1bd748u: goto label_1bd748;
        case 0x1bd74cu: goto label_1bd74c;
        case 0x1bd750u: goto label_1bd750;
        case 0x1bd754u: goto label_1bd754;
        case 0x1bd758u: goto label_1bd758;
        case 0x1bd75cu: goto label_1bd75c;
        case 0x1bd760u: goto label_1bd760;
        case 0x1bd764u: goto label_1bd764;
        case 0x1bd768u: goto label_1bd768;
        case 0x1bd76cu: goto label_1bd76c;
        case 0x1bd770u: goto label_1bd770;
        case 0x1bd774u: goto label_1bd774;
        case 0x1bd778u: goto label_1bd778;
        case 0x1bd77cu: goto label_1bd77c;
        case 0x1bd780u: goto label_1bd780;
        case 0x1bd784u: goto label_1bd784;
        case 0x1bd788u: goto label_1bd788;
        case 0x1bd78cu: goto label_1bd78c;
        case 0x1bd790u: goto label_1bd790;
        case 0x1bd794u: goto label_1bd794;
        case 0x1bd798u: goto label_1bd798;
        case 0x1bd79cu: goto label_1bd79c;
        case 0x1bd7a0u: goto label_1bd7a0;
        case 0x1bd7a4u: goto label_1bd7a4;
        case 0x1bd7a8u: goto label_1bd7a8;
        case 0x1bd7acu: goto label_1bd7ac;
        case 0x1bd7b0u: goto label_1bd7b0;
        case 0x1bd7b4u: goto label_1bd7b4;
        case 0x1bd7b8u: goto label_1bd7b8;
        case 0x1bd7bcu: goto label_1bd7bc;
        default: break;
    }

    ctx->pc = 0x1bd400u;

label_1bd400:
    // 0x1bd400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bd400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bd404:
    // 0x1bd404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bd404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bd408:
    // 0x1bd408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bd40c:
    // 0x1bd40c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bd40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1bd410:
    // 0x1bd410: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bd410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1bd414:
    // 0x1bd414: 0xc06b48e  jal         func_1AD238
label_1bd418:
    if (ctx->pc == 0x1BD418u) {
        ctx->pc = 0x1BD418u;
            // 0x1bd418: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD41Cu;
        goto label_1bd41c;
    }
    ctx->pc = 0x1BD414u;
    SET_GPR_U32(ctx, 31, 0x1BD41Cu);
    ctx->pc = 0x1BD418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD414u;
            // 0x1bd418: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD41Cu; }
        if (ctx->pc != 0x1BD41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD41Cu; }
        if (ctx->pc != 0x1BD41Cu) { return; }
    }
    ctx->pc = 0x1BD41Cu;
label_1bd41c:
    // 0x1bd41c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1bd41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1bd420:
    // 0x1bd420: 0xc06d2e6  jal         func_1B4B98
label_1bd424:
    if (ctx->pc == 0x1BD424u) {
        ctx->pc = 0x1BD424u;
            // 0x1bd424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD428u;
        goto label_1bd428;
    }
    ctx->pc = 0x1BD420u;
    SET_GPR_U32(ctx, 31, 0x1BD428u);
    ctx->pc = 0x1BD424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD420u;
            // 0x1bd424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B98u;
    if (runtime->hasFunction(0x1B4B98u)) {
        auto targetFn = runtime->lookupFunction(0x1B4B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD428u; }
        if (ctx->pc != 0x1BD428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4B98_0x1b4b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD428u; }
        if (ctx->pc != 0x1BD428u) { return; }
    }
    ctx->pc = 0x1BD428u;
label_1bd428:
    // 0x1bd428: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1bd428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1bd42c:
    // 0x1bd42c: 0xc06d2ec  jal         func_1B4BB0
label_1bd430:
    if (ctx->pc == 0x1BD430u) {
        ctx->pc = 0x1BD430u;
            // 0x1bd430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD434u;
        goto label_1bd434;
    }
    ctx->pc = 0x1BD42Cu;
    SET_GPR_U32(ctx, 31, 0x1BD434u);
    ctx->pc = 0x1BD430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD42Cu;
            // 0x1bd430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BB0u;
    if (runtime->hasFunction(0x1B4BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD434u; }
        if (ctx->pc != 0x1BD434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4BB0_0x1b4bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD434u; }
        if (ctx->pc != 0x1BD434u) { return; }
    }
    ctx->pc = 0x1BD434u;
label_1bd434:
    // 0x1bd434: 0xc06d484  jal         func_1B5210
label_1bd438:
    if (ctx->pc == 0x1BD438u) {
        ctx->pc = 0x1BD438u;
            // 0x1bd438: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1BD43Cu;
        goto label_1bd43c;
    }
    ctx->pc = 0x1BD434u;
    SET_GPR_U32(ctx, 31, 0x1BD43Cu);
    ctx->pc = 0x1BD438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD434u;
            // 0x1bd438: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5210u;
    if (runtime->hasFunction(0x1B5210u)) {
        auto targetFn = runtime->lookupFunction(0x1B5210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD43Cu; }
        if (ctx->pc != 0x1BD43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5210_0x1b5210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD43Cu; }
        if (ctx->pc != 0x1BD43Cu) { return; }
    }
    ctx->pc = 0x1BD43Cu;
label_1bd43c:
    // 0x1bd43c: 0xc06b494  jal         func_1AD250
label_1bd440:
    if (ctx->pc == 0x1BD440u) {
        ctx->pc = 0x1BD444u;
        goto label_1bd444;
    }
    ctx->pc = 0x1BD43Cu;
    SET_GPR_U32(ctx, 31, 0x1BD444u);
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD444u; }
        if (ctx->pc != 0x1BD444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD444u; }
        if (ctx->pc != 0x1BD444u) { return; }
    }
    ctx->pc = 0x1BD444u;
label_1bd444:
    // 0x1bd444: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1bd444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1bd448:
    // 0x1bd448: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1bd44c:
    if (ctx->pc == 0x1BD44Cu) {
        ctx->pc = 0x1BD450u;
        goto label_1bd450;
    }
    ctx->pc = 0x1BD448u;
    {
        const bool branch_taken_0x1bd448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd448) {
            ctx->pc = 0x1BD46Cu;
            goto label_1bd46c;
        }
    }
    ctx->pc = 0x1BD450u;
label_1bd450:
    // 0x1bd450: 0xc06dbcc  jal         func_1B6F30
label_1bd454:
    if (ctx->pc == 0x1BD454u) {
        ctx->pc = 0x1BD458u;
        goto label_1bd458;
    }
    ctx->pc = 0x1BD450u;
    SET_GPR_U32(ctx, 31, 0x1BD458u);
    ctx->pc = 0x1B6F30u;
    if (runtime->hasFunction(0x1B6F30u)) {
        auto targetFn = runtime->lookupFunction(0x1B6F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD458u; }
        if (ctx->pc != 0x1BD458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6F30_0x1b6f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD458u; }
        if (ctx->pc != 0x1BD458u) { return; }
    }
    ctx->pc = 0x1BD458u;
label_1bd458:
    // 0x1bd458: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1bd45c:
    // 0x1bd45c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd460:
    // 0x1bd460: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1bd460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1bd464:
    // 0x1bd464: 0x40f809  jalr        $v0
label_1bd468:
    if (ctx->pc == 0x1BD468u) {
        ctx->pc = 0x1BD46Cu;
        goto label_1bd46c;
    }
    ctx->pc = 0x1BD464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD46Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD46Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD46Cu; }
            if (ctx->pc != 0x1BD46Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD46Cu;
label_1bd46c:
    // 0x1bd46c: 0xc06b48e  jal         func_1AD238
label_1bd470:
    if (ctx->pc == 0x1BD470u) {
        ctx->pc = 0x1BD470u;
            // 0x1bd470: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD474u;
        goto label_1bd474;
    }
    ctx->pc = 0x1BD46Cu;
    SET_GPR_U32(ctx, 31, 0x1BD474u);
    ctx->pc = 0x1BD470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD46Cu;
            // 0x1bd470: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD474u; }
        if (ctx->pc != 0x1BD474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD474u; }
        if (ctx->pc != 0x1BD474u) { return; }
    }
    ctx->pc = 0x1BD474u;
label_1bd474:
    // 0x1bd474: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x1bd474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1bd478:
    // 0x1bd478: 0x5840000d  blezl       $v0, . + 4 + (0xD << 2)
label_1bd47c:
    if (ctx->pc == 0x1BD47Cu) {
        ctx->pc = 0x1BD47Cu;
            // 0x1bd47c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1BD480u;
        goto label_1bd480;
    }
    ctx->pc = 0x1BD478u;
    {
        const bool branch_taken_0x1bd478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1bd478) {
            ctx->pc = 0x1BD47Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD478u;
            // 0x1bd47c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD4B0u;
            goto label_1bd4b0;
        }
    }
    ctx->pc = 0x1BD480u;
label_1bd480:
    // 0x1bd480: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x1bd480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1bd484:
    // 0x1bd484: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bd484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bd488:
    // 0x1bd488: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1bd488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1bd48c:
    // 0x1bd48c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd490:
    // 0x1bd490: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1bd490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1bd494:
    // 0x1bd494: 0x60f809  jalr        $v1
label_1bd498:
    if (ctx->pc == 0x1BD498u) {
        ctx->pc = 0x1BD498u;
            // 0x1bd498: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x1BD49Cu;
        goto label_1bd49c;
    }
    ctx->pc = 0x1BD494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BD49Cu);
        ctx->pc = 0x1BD498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD494u;
            // 0x1bd498: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD49Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD49Cu; }
            if (ctx->pc != 0x1BD49Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD49Cu;
label_1bd49c:
    // 0x1bd49c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x1bd49cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1bd4a0:
    // 0x1bd4a0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1bd4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1bd4a4:
    // 0x1bd4a4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1bd4a8:
    if (ctx->pc == 0x1BD4A8u) {
        ctx->pc = 0x1BD4A8u;
            // 0x1bd4a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1BD4ACu;
        goto label_1bd4ac;
    }
    ctx->pc = 0x1BD4A4u;
    {
        const bool branch_taken_0x1bd4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4a4) {
            ctx->pc = 0x1BD4A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4A4u;
            // 0x1bd4a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bd488;
        }
    }
    ctx->pc = 0x1BD4ACu;
label_1bd4ac:
    // 0x1bd4ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1bd4b0:
    // 0x1bd4b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1bd4b4:
    if (ctx->pc == 0x1BD4B4u) {
        ctx->pc = 0x1BD4B4u;
            // 0x1bd4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4B8u;
        goto label_1bd4b8;
    }
    ctx->pc = 0x1BD4B0u;
    {
        const bool branch_taken_0x1bd4b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4b0) {
            ctx->pc = 0x1BD4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4B0u;
            // 0x1bd4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD4CCu;
            goto label_1bd4cc;
        }
    }
    ctx->pc = 0x1BD4B8u;
label_1bd4b8:
    // 0x1bd4b8: 0xc06db28  jal         func_1B6CA0
label_1bd4bc:
    if (ctx->pc == 0x1BD4BCu) {
        ctx->pc = 0x1BD4BCu;
            // 0x1bd4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4C0u;
        goto label_1bd4c0;
    }
    ctx->pc = 0x1BD4B8u;
    SET_GPR_U32(ctx, 31, 0x1BD4C0u);
    ctx->pc = 0x1BD4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4B8u;
            // 0x1bd4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CA0u;
    if (runtime->hasFunction(0x1B6CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B6CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4C0u; }
        if (ctx->pc != 0x1BD4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6CA0_0x1b6ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4C0u; }
        if (ctx->pc != 0x1BD4C0u) { return; }
    }
    ctx->pc = 0x1BD4C0u;
label_1bd4c0:
    // 0x1bd4c0: 0xc06db64  jal         func_1B6D90
label_1bd4c4:
    if (ctx->pc == 0x1BD4C4u) {
        ctx->pc = 0x1BD4C4u;
            // 0x1bd4c4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1BD4C8u;
        goto label_1bd4c8;
    }
    ctx->pc = 0x1BD4C0u;
    SET_GPR_U32(ctx, 31, 0x1BD4C8u);
    ctx->pc = 0x1BD4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4C0u;
            // 0x1bd4c4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (runtime->hasFunction(0x1B6D90u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4C8u; }
        if (ctx->pc != 0x1BD4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D90_0x1b6d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4C8u; }
        if (ctx->pc != 0x1BD4C8u) { return; }
    }
    ctx->pc = 0x1BD4C8u;
label_1bd4c8:
    // 0x1bd4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bd4cc:
    // 0x1bd4cc: 0xc06e3c4  jal         func_1B8F10
label_1bd4d0:
    if (ctx->pc == 0x1BD4D0u) {
        ctx->pc = 0x1BD4D0u;
            // 0x1bd4d0: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x1BD4D4u;
        goto label_1bd4d4;
    }
    ctx->pc = 0x1BD4CCu;
    SET_GPR_U32(ctx, 31, 0x1BD4D4u);
    ctx->pc = 0x1BD4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4CCu;
            // 0x1bd4d0: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F10u;
    if (runtime->hasFunction(0x1B8F10u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4D4u; }
        if (ctx->pc != 0x1BD4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F10_0x1b8f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4D4u; }
        if (ctx->pc != 0x1BD4D4u) { return; }
    }
    ctx->pc = 0x1BD4D4u;
label_1bd4d4:
    // 0x1bd4d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd4d8:
    // 0x1bd4d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bd4dc:
    // 0x1bd4dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd4dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd4e0:
    // 0x1bd4e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bd4e4:
    // 0x1bd4e4: 0x806b494  j           func_1AD250
label_1bd4e8:
    if (ctx->pc == 0x1BD4E8u) {
        ctx->pc = 0x1BD4E8u;
            // 0x1bd4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BD4ECu;
        goto label_1bd4ec;
    }
    ctx->pc = 0x1BD4E4u;
    ctx->pc = 0x1BD4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4E4u;
            // 0x1bd4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BD4ECu;
label_1bd4ec:
    // 0x1bd4ec: 0x0  nop
    ctx->pc = 0x1bd4ecu;
    // NOP
label_1bd4f0:
    // 0x1bd4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bd4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bd4f4:
    // 0x1bd4f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd4f8:
    // 0x1bd4f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bd4fc:
    // 0x1bd4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd500:
    // 0x1bd500: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bd500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bd504:
    // 0x1bd504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bd504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bd508:
    // 0x1bd508: 0x82110001  lb          $s1, 0x1($s0)
    ctx->pc = 0x1bd508u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1bd50c:
    // 0x1bd50c: 0x56220029  bnel        $s1, $v0, . + 4 + (0x29 << 2)
label_1bd510:
    if (ctx->pc == 0x1BD510u) {
        ctx->pc = 0x1BD510u;
            // 0x1bd510: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1BD514u;
        goto label_1bd514;
    }
    ctx->pc = 0x1BD50Cu;
    {
        const bool branch_taken_0x1bd50c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd50c) {
            ctx->pc = 0x1BD510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD50Cu;
            // 0x1bd510: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD5B4u;
            goto label_1bd5b4;
        }
    }
    ctx->pc = 0x1BD514u;
label_1bd514:
    // 0x1bd514: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x1bd514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_1bd518:
    // 0x1bd518: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_1bd51c:
    if (ctx->pc == 0x1BD51Cu) {
        ctx->pc = 0x1BD51Cu;
            // 0x1bd51c: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1BD520u;
        goto label_1bd520;
    }
    ctx->pc = 0x1BD518u;
    {
        const bool branch_taken_0x1bd518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd518) {
            ctx->pc = 0x1BD51Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD518u;
            // 0x1bd51c: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD5B4u;
            goto label_1bd5b4;
        }
    }
    ctx->pc = 0x1BD520u;
label_1bd520:
    // 0x1bd520: 0xc06d446  jal         func_1B5118
label_1bd524:
    if (ctx->pc == 0x1BD524u) {
        ctx->pc = 0x1BD524u;
            // 0x1bd524: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BD528u;
        goto label_1bd528;
    }
    ctx->pc = 0x1BD520u;
    SET_GPR_U32(ctx, 31, 0x1BD528u);
    ctx->pc = 0x1BD524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD520u;
            // 0x1bd524: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5118u;
    if (runtime->hasFunction(0x1B5118u)) {
        auto targetFn = runtime->lookupFunction(0x1B5118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD528u; }
        if (ctx->pc != 0x1BD528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5118_0x1b5118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD528u; }
        if (ctx->pc != 0x1BD528u) { return; }
    }
    ctx->pc = 0x1BD528u;
label_1bd528:
    // 0x1bd528: 0x50510022  beql        $v0, $s1, . + 4 + (0x22 << 2)
label_1bd52c:
    if (ctx->pc == 0x1BD52Cu) {
        ctx->pc = 0x1BD52Cu;
            // 0x1bd52c: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1BD530u;
        goto label_1bd530;
    }
    ctx->pc = 0x1BD528u;
    {
        const bool branch_taken_0x1bd528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1bd528) {
            ctx->pc = 0x1BD52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD528u;
            // 0x1bd52c: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD5B4u;
            goto label_1bd5b4;
        }
    }
    ctx->pc = 0x1BD530u;
label_1bd530:
    // 0x1bd530: 0xc06d830  jal         func_1B60C0
label_1bd534:
    if (ctx->pc == 0x1BD534u) {
        ctx->pc = 0x1BD534u;
            // 0x1bd534: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BD538u;
        goto label_1bd538;
    }
    ctx->pc = 0x1BD530u;
    SET_GPR_U32(ctx, 31, 0x1BD538u);
    ctx->pc = 0x1BD534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD530u;
            // 0x1bd534: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60C0u;
    if (runtime->hasFunction(0x1B60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD538u; }
        if (ctx->pc != 0x1BD538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B60C0_0x1b60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD538u; }
        if (ctx->pc != 0x1BD538u) { return; }
    }
    ctx->pc = 0x1BD538u;
label_1bd538:
    // 0x1bd538: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bd538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd53c:
    // 0x1bd53c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1bd53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1bd540:
    // 0x1bd540: 0x5446000d  bnel        $v0, $a2, . + 4 + (0xD << 2)
label_1bd544:
    if (ctx->pc == 0x1BD544u) {
        ctx->pc = 0x1BD544u;
            // 0x1bd544: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1BD548u;
        goto label_1bd548;
    }
    ctx->pc = 0x1BD540u;
    {
        const bool branch_taken_0x1bd540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1bd540) {
            ctx->pc = 0x1BD544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD540u;
            // 0x1bd544: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD578u;
            goto label_1bd578;
        }
    }
    ctx->pc = 0x1BD548u;
label_1bd548:
    // 0x1bd548: 0x96040068  lhu         $a0, 0x68($s0)
    ctx->pc = 0x1bd548u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
label_1bd54c:
    // 0x1bd54c: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1bd54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1bd550:
    // 0x1bd550: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1bd554:
    // 0x1bd554: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1bd554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1bd558:
    // 0x1bd558: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1bd558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1bd55c:
    // 0x1bd55c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bd55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bd560:
    // 0x1bd560: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1bd560u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1bd564:
    // 0x1bd564: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bd564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bd568:
    // 0x1bd568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1bd56c:
    if (ctx->pc == 0x1BD56Cu) {
        ctx->pc = 0x1BD56Cu;
            // 0x1bd56c: 0xa6040068  sh          $a0, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x1BD570u;
        goto label_1bd570;
    }
    ctx->pc = 0x1BD568u;
    {
        const bool branch_taken_0x1bd568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD568u;
            // 0x1bd56c: 0xa6040068  sh          $a0, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd568) {
            ctx->pc = 0x1BD578u;
            goto label_1bd578;
        }
    }
    ctx->pc = 0x1BD570u;
label_1bd570:
    // 0x1bd570: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1bd570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1bd574:
    // 0x1bd574: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x1bd574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_1bd578:
    // 0x1bd578: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1bd578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_1bd57c:
    // 0x1bd57c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1bd580:
    if (ctx->pc == 0x1BD580u) {
        ctx->pc = 0x1BD580u;
            // 0x1bd580: 0xae060064  sw          $a2, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        ctx->pc = 0x1BD584u;
        goto label_1bd584;
    }
    ctx->pc = 0x1BD57Cu;
    {
        const bool branch_taken_0x1bd57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD57Cu;
            // 0x1bd580: 0xae060064  sw          $a2, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd57c) {
            ctx->pc = 0x1BD5B4u;
            goto label_1bd5b4;
        }
    }
    ctx->pc = 0x1BD584u;
label_1bd584:
    // 0x1bd584: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x1bd584u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_1bd588:
    // 0x1bd588: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1bd588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bd58c:
    // 0x1bd58c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bd58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bd590:
    // 0x1bd590: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bd594:
    if (ctx->pc == 0x1BD594u) {
        ctx->pc = 0x1BD598u;
        goto label_1bd598;
    }
    ctx->pc = 0x1BD590u;
    {
        const bool branch_taken_0x1bd590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd590) {
            ctx->pc = 0x1BD5A4u;
            goto label_1bd5a4;
        }
    }
    ctx->pc = 0x1BD598u;
label_1bd598:
    // 0x1bd598: 0xc06e4a0  jal         func_1B9280
label_1bd59c:
    if (ctx->pc == 0x1BD59Cu) {
        ctx->pc = 0x1BD59Cu;
            // 0x1bd59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5A0u;
        goto label_1bd5a0;
    }
    ctx->pc = 0x1BD598u;
    SET_GPR_U32(ctx, 31, 0x1BD5A0u);
    ctx->pc = 0x1BD59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD598u;
            // 0x1bd59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (runtime->hasFunction(0x1B9280u)) {
        auto targetFn = runtime->lookupFunction(0x1B9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5A0u; }
        if (ctx->pc != 0x1BD5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9280_0x1b9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5A0u; }
        if (ctx->pc != 0x1BD5A0u) { return; }
    }
    ctx->pc = 0x1BD5A0u;
label_1bd5a0:
    // 0x1bd5a0: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x1bd5a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_1bd5a4:
    // 0x1bd5a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bd5a8:
    if (ctx->pc == 0x1BD5A8u) {
        ctx->pc = 0x1BD5A8u;
            // 0x1bd5a8: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1BD5ACu;
        goto label_1bd5ac;
    }
    ctx->pc = 0x1BD5A4u;
    {
        const bool branch_taken_0x1bd5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5A4u;
            // 0x1bd5a8: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5a4) {
            ctx->pc = 0x1BD5B8u;
            goto label_1bd5b8;
        }
    }
    ctx->pc = 0x1BD5ACu;
label_1bd5ac:
    // 0x1bd5ac: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x1bd5acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_1bd5b0:
    // 0x1bd5b0: 0xa6000068  sh          $zero, 0x68($s0)
    ctx->pc = 0x1bd5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
label_1bd5b4:
    // 0x1bd5b4: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1bd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1bd5b8:
    // 0x1bd5b8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1bd5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1bd5bc:
    // 0x1bd5bc: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_1bd5c0:
    if (ctx->pc == 0x1BD5C0u) {
        ctx->pc = 0x1BD5C0u;
            // 0x1bd5c0: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1BD5C4u;
        goto label_1bd5c4;
    }
    ctx->pc = 0x1BD5BCu;
    {
        const bool branch_taken_0x1bd5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5bc) {
            ctx->pc = 0x1BD5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5BCu;
            // 0x1bd5c0: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD6C0u;
            goto label_1bd6c0;
        }
    }
    ctx->pc = 0x1BD5C4u;
label_1bd5c4:
    // 0x1bd5c4: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x1bd5c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_1bd5c8:
    // 0x1bd5c8: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_1bd5cc:
    if (ctx->pc == 0x1BD5CCu) {
        ctx->pc = 0x1BD5CCu;
            // 0x1bd5cc: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1BD5D0u;
        goto label_1bd5d0;
    }
    ctx->pc = 0x1BD5C8u;
    {
        const bool branch_taken_0x1bd5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5c8) {
            ctx->pc = 0x1BD5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5C8u;
            // 0x1bd5cc: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD6C0u;
            goto label_1bd6c0;
        }
    }
    ctx->pc = 0x1BD5D0u;
label_1bd5d0:
    // 0x1bd5d0: 0xc06d446  jal         func_1B5118
label_1bd5d4:
    if (ctx->pc == 0x1BD5D4u) {
        ctx->pc = 0x1BD5D4u;
            // 0x1bd5d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BD5D8u;
        goto label_1bd5d8;
    }
    ctx->pc = 0x1BD5D0u;
    SET_GPR_U32(ctx, 31, 0x1BD5D8u);
    ctx->pc = 0x1BD5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5D0u;
            // 0x1bd5d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5118u;
    if (runtime->hasFunction(0x1B5118u)) {
        auto targetFn = runtime->lookupFunction(0x1B5118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5D8u; }
        if (ctx->pc != 0x1BD5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5118_0x1b5118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5D8u; }
        if (ctx->pc != 0x1BD5D8u) { return; }
    }
    ctx->pc = 0x1BD5D8u;
label_1bd5d8:
    // 0x1bd5d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd5dc:
    // 0x1bd5dc: 0x50430038  beql        $v0, $v1, . + 4 + (0x38 << 2)
label_1bd5e0:
    if (ctx->pc == 0x1BD5E0u) {
        ctx->pc = 0x1BD5E0u;
            // 0x1bd5e0: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1BD5E4u;
        goto label_1bd5e4;
    }
    ctx->pc = 0x1BD5DCu;
    {
        const bool branch_taken_0x1bd5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd5dc) {
            ctx->pc = 0x1BD5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5DCu;
            // 0x1bd5e0: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD6C0u;
            goto label_1bd6c0;
        }
    }
    ctx->pc = 0x1BD5E4u;
label_1bd5e4:
    // 0x1bd5e4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1bd5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1bd5e8:
    // 0x1bd5e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1bd5ec:
    if (ctx->pc == 0x1BD5ECu) {
        ctx->pc = 0x1BD5ECu;
            // 0x1bd5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5F0u;
        goto label_1bd5f0;
    }
    ctx->pc = 0x1BD5E8u;
    {
        const bool branch_taken_0x1bd5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5E8u;
            // 0x1bd5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5e8) {
            ctx->pc = 0x1BD608u;
            goto label_1bd608;
        }
    }
    ctx->pc = 0x1BD5F0u;
label_1bd5f0:
    // 0x1bd5f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd5f4:
    // 0x1bd5f4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1bd5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1bd5f8:
    // 0x1bd5f8: 0x40f809  jalr        $v0
label_1bd5fc:
    if (ctx->pc == 0x1BD5FCu) {
        ctx->pc = 0x1BD5FCu;
            // 0x1bd5fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BD600u;
        goto label_1bd600;
    }
    ctx->pc = 0x1BD5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD600u);
        ctx->pc = 0x1BD5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5F8u;
            // 0x1bd5fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD600u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD600u; }
            if (ctx->pc != 0x1BD600u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD600u;
label_1bd600:
    // 0x1bd600: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bd604:
    if (ctx->pc == 0x1BD604u) {
        ctx->pc = 0x1BD604u;
            // 0x1bd604: 0x28420040  slti        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->pc = 0x1BD608u;
        goto label_1bd608;
    }
    ctx->pc = 0x1BD600u;
    {
        const bool branch_taken_0x1bd600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD600u;
            // 0x1bd604: 0x28420040  slti        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd600) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD608u;
label_1bd608:
    // 0x1bd608: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1bd608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_1bd60c:
    // 0x1bd60c: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_1bd610:
    if (ctx->pc == 0x1BD610u) {
        ctx->pc = 0x1BD610u;
            // 0x1bd610: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1BD614u;
        goto label_1bd614;
    }
    ctx->pc = 0x1BD60Cu;
    {
        const bool branch_taken_0x1bd60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd60c) {
            ctx->pc = 0x1BD610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD60Cu;
            // 0x1bd610: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD6C0u;
            goto label_1bd6c0;
        }
    }
    ctx->pc = 0x1BD614u;
label_1bd614:
    // 0x1bd614: 0x9602006a  lhu         $v0, 0x6A($s0)
    ctx->pc = 0x1bd614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
label_1bd618:
    // 0x1bd618: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd61c:
    // 0x1bd61c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bd620:
    // 0x1bd620: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
label_1bd624:
    if (ctx->pc == 0x1BD624u) {
        ctx->pc = 0x1BD624u;
            // 0x1bd624: 0xa602006a  sh          $v0, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1BD628u;
        goto label_1bd628;
    }
    ctx->pc = 0x1BD620u;
    {
        const bool branch_taken_0x1bd620 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BD624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD620u;
            // 0x1bd624: 0xa602006a  sh          $v0, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd620) {
            ctx->pc = 0x1BD640u;
            goto label_1bd640;
        }
    }
    ctx->pc = 0x1BD628u;
label_1bd628:
    // 0x1bd628: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1bd628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1bd62c:
    // 0x1bd62c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1bd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bd630:
    // 0x1bd630: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1bd630u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1bd634:
    // 0x1bd634: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bd634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bd638:
    // 0x1bd638: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bd63c:
    if (ctx->pc == 0x1BD63Cu) {
        ctx->pc = 0x1BD63Cu;
            // 0x1bd63c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x1BD640u;
        goto label_1bd640;
    }
    ctx->pc = 0x1BD638u;
    {
        const bool branch_taken_0x1bd638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD638u;
            // 0x1bd63c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd638) {
            ctx->pc = 0x1BD658u;
            goto label_1bd658;
        }
    }
    ctx->pc = 0x1BD640u;
label_1bd640:
    // 0x1bd640: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1bd644:
    // 0x1bd644: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1bd644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bd648:
    // 0x1bd648: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1bd648u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1bd64c:
    // 0x1bd64c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bd650:
    // 0x1bd650: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bd654:
    // 0x1bd654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bd658:
    // 0x1bd658: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bd658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bd65c:
    // 0x1bd65c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1bd660:
    if (ctx->pc == 0x1BD660u) {
        ctx->pc = 0x1BD660u;
            // 0x1bd660: 0x86020060  lh          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x1BD664u;
        goto label_1bd664;
    }
    ctx->pc = 0x1BD65Cu;
    {
        const bool branch_taken_0x1bd65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd65c) {
            ctx->pc = 0x1BD660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD65Cu;
            // 0x1bd660: 0x86020060  lh          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD670u;
            goto label_1bd670;
        }
    }
    ctx->pc = 0x1BD664u;
label_1bd664:
    // 0x1bd664: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bd668:
    // 0x1bd668: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x1bd668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_1bd66c:
    // 0x1bd66c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1bd66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_1bd670:
    // 0x1bd670: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1bd674:
    if (ctx->pc == 0x1BD674u) {
        ctx->pc = 0x1BD674u;
            // 0x1bd674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BD678u;
        goto label_1bd678;
    }
    ctx->pc = 0x1BD670u;
    {
        const bool branch_taken_0x1bd670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD670u;
            // 0x1bd674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd670) {
            ctx->pc = 0x1BD6C0u;
            goto label_1bd6c0;
        }
    }
    ctx->pc = 0x1BD678u;
label_1bd678:
    // 0x1bd678: 0x8204006d  lb          $a0, 0x6D($s0)
    ctx->pc = 0x1bd678u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_1bd67c:
    // 0x1bd67c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_1bd680:
    if (ctx->pc == 0x1BD680u) {
        ctx->pc = 0x1BD680u;
            // 0x1bd680: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x1BD684u;
        goto label_1bd684;
    }
    ctx->pc = 0x1BD67Cu;
    {
        const bool branch_taken_0x1bd67c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD67Cu;
            // 0x1bd680: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd67c) {
            ctx->pc = 0x1BD698u;
            goto label_1bd698;
        }
    }
    ctx->pc = 0x1BD684u;
label_1bd684:
    // 0x1bd684: 0xc06e4a0  jal         func_1B9280
label_1bd688:
    if (ctx->pc == 0x1BD688u) {
        ctx->pc = 0x1BD688u;
            // 0x1bd688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD68Cu;
        goto label_1bd68c;
    }
    ctx->pc = 0x1BD684u;
    SET_GPR_U32(ctx, 31, 0x1BD68Cu);
    ctx->pc = 0x1BD688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD684u;
            // 0x1bd688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (runtime->hasFunction(0x1B9280u)) {
        auto targetFn = runtime->lookupFunction(0x1B9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD68Cu; }
        if (ctx->pc != 0x1BD68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9280_0x1b9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD68Cu; }
        if (ctx->pc != 0x1BD68Cu) { return; }
    }
    ctx->pc = 0x1BD68Cu;
label_1bd68c:
    // 0x1bd68c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bd690:
    if (ctx->pc == 0x1BD690u) {
        ctx->pc = 0x1BD690u;
            // 0x1bd690: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x1BD694u;
        goto label_1bd694;
    }
    ctx->pc = 0x1BD68Cu;
    {
        const bool branch_taken_0x1bd68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD68Cu;
            // 0x1bd690: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd68c) {
            ctx->pc = 0x1BD6B0u;
            goto label_1bd6b0;
        }
    }
    ctx->pc = 0x1BD694u;
label_1bd694:
    // 0x1bd694: 0x0  nop
    ctx->pc = 0x1bd694u;
    // NOP
label_1bd698:
    // 0x1bd698: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bd698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bd69c:
    // 0x1bd69c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1bd6a0:
    if (ctx->pc == 0x1BD6A0u) {
        ctx->pc = 0x1BD6A4u;
        goto label_1bd6a4;
    }
    ctx->pc = 0x1BD69Cu;
    {
        const bool branch_taken_0x1bd69c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd69c) {
            ctx->pc = 0x1BD6B0u;
            goto label_1bd6b0;
        }
    }
    ctx->pc = 0x1BD6A4u;
label_1bd6a4:
    // 0x1bd6a4: 0xc06f500  jal         func_1BD400
label_1bd6a8:
    if (ctx->pc == 0x1BD6A8u) {
        ctx->pc = 0x1BD6A8u;
            // 0x1bd6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6ACu;
        goto label_1bd6ac;
    }
    ctx->pc = 0x1BD6A4u;
    SET_GPR_U32(ctx, 31, 0x1BD6ACu);
    ctx->pc = 0x1BD6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6A4u;
            // 0x1bd6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD400u;
    goto label_1bd400;
    ctx->pc = 0x1BD6ACu;
label_1bd6ac:
    // 0x1bd6ac: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x1bd6acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_1bd6b0:
    // 0x1bd6b0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1bd6b4:
    if (ctx->pc == 0x1BD6B4u) {
        ctx->pc = 0x1BD6B4u;
            // 0x1bd6b4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1BD6B8u;
        goto label_1bd6b8;
    }
    ctx->pc = 0x1BD6B0u;
    {
        const bool branch_taken_0x1bd6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6b0) {
            ctx->pc = 0x1BD6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6B0u;
            // 0x1bd6b4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD6C4u;
            goto label_1bd6c4;
        }
    }
    ctx->pc = 0x1BD6B8u;
label_1bd6b8:
    // 0x1bd6b8: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x1bd6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_1bd6bc:
    // 0x1bd6bc: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x1bd6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_1bd6c0:
    // 0x1bd6c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bd6c4:
    // 0x1bd6c4: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
label_1bd6c8:
    if (ctx->pc == 0x1BD6C8u) {
        ctx->pc = 0x1BD6C8u;
            // 0x1bd6c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BD6CCu;
        goto label_1bd6cc;
    }
    ctx->pc = 0x1BD6C4u;
    {
        const bool branch_taken_0x1bd6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6c4) {
            ctx->pc = 0x1BD6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6C4u;
            // 0x1bd6c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD72Cu;
            goto label_1bd72c;
        }
    }
    ctx->pc = 0x1BD6CCu;
label_1bd6cc:
    // 0x1bd6cc: 0xc06db18  jal         func_1B6C60
label_1bd6d0:
    if (ctx->pc == 0x1BD6D0u) {
        ctx->pc = 0x1BD6D4u;
        goto label_1bd6d4;
    }
    ctx->pc = 0x1BD6CCu;
    SET_GPR_U32(ctx, 31, 0x1BD6D4u);
    ctx->pc = 0x1B6C60u;
    if (runtime->hasFunction(0x1B6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6D4u; }
        if (ctx->pc != 0x1BD6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C60_0x1b6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6D4u; }
        if (ctx->pc != 0x1BD6D4u) { return; }
    }
    ctx->pc = 0x1BD6D4u;
label_1bd6d4:
    // 0x1bd6d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bd6d8:
    // 0x1bd6d8: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_1bd6dc:
    if (ctx->pc == 0x1BD6DCu) {
        ctx->pc = 0x1BD6DCu;
            // 0x1bd6dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BD6E0u;
        goto label_1bd6e0;
    }
    ctx->pc = 0x1BD6D8u;
    {
        const bool branch_taken_0x1bd6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd6d8) {
            ctx->pc = 0x1BD6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6D8u;
            // 0x1bd6dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD72Cu;
            goto label_1bd72c;
        }
    }
    ctx->pc = 0x1BD6E0u;
label_1bd6e0:
    // 0x1bd6e0: 0x8204006d  lb          $a0, 0x6D($s0)
    ctx->pc = 0x1bd6e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_1bd6e4:
    // 0x1bd6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd6e8:
    // 0x1bd6e8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1bd6ec:
    if (ctx->pc == 0x1BD6ECu) {
        ctx->pc = 0x1BD6ECu;
            // 0x1bd6ec: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x1BD6F0u;
        goto label_1bd6f0;
    }
    ctx->pc = 0x1BD6E8u;
    {
        const bool branch_taken_0x1bd6e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6E8u;
            // 0x1bd6ec: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6e8) {
            ctx->pc = 0x1BD700u;
            goto label_1bd700;
        }
    }
    ctx->pc = 0x1BD6F0u;
label_1bd6f0:
    // 0x1bd6f0: 0xc06e4a0  jal         func_1B9280
label_1bd6f4:
    if (ctx->pc == 0x1BD6F4u) {
        ctx->pc = 0x1BD6F4u;
            // 0x1bd6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6F8u;
        goto label_1bd6f8;
    }
    ctx->pc = 0x1BD6F0u;
    SET_GPR_U32(ctx, 31, 0x1BD6F8u);
    ctx->pc = 0x1BD6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6F0u;
            // 0x1bd6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (runtime->hasFunction(0x1B9280u)) {
        auto targetFn = runtime->lookupFunction(0x1B9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6F8u; }
        if (ctx->pc != 0x1BD6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9280_0x1b9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6F8u; }
        if (ctx->pc != 0x1BD6F8u) { return; }
    }
    ctx->pc = 0x1BD6F8u;
label_1bd6f8:
    // 0x1bd6f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bd6fc:
    if (ctx->pc == 0x1BD6FCu) {
        ctx->pc = 0x1BD6FCu;
            // 0x1bd6fc: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x1BD700u;
        goto label_1bd700;
    }
    ctx->pc = 0x1BD6F8u;
    {
        const bool branch_taken_0x1bd6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6F8u;
            // 0x1bd6fc: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6f8) {
            ctx->pc = 0x1BD718u;
            goto label_1bd718;
        }
    }
    ctx->pc = 0x1BD700u;
label_1bd700:
    // 0x1bd700: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bd704:
    // 0x1bd704: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1bd708:
    if (ctx->pc == 0x1BD708u) {
        ctx->pc = 0x1BD70Cu;
        goto label_1bd70c;
    }
    ctx->pc = 0x1BD704u;
    {
        const bool branch_taken_0x1bd704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd704) {
            ctx->pc = 0x1BD718u;
            goto label_1bd718;
        }
    }
    ctx->pc = 0x1BD70Cu;
label_1bd70c:
    // 0x1bd70c: 0xc06f500  jal         func_1BD400
label_1bd710:
    if (ctx->pc == 0x1BD710u) {
        ctx->pc = 0x1BD710u;
            // 0x1bd710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD714u;
        goto label_1bd714;
    }
    ctx->pc = 0x1BD70Cu;
    SET_GPR_U32(ctx, 31, 0x1BD714u);
    ctx->pc = 0x1BD710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD70Cu;
            // 0x1bd710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD400u;
    goto label_1bd400;
    ctx->pc = 0x1BD714u;
label_1bd714:
    // 0x1bd714: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x1bd714u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_1bd718:
    // 0x1bd718: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1bd71c:
    if (ctx->pc == 0x1BD71Cu) {
        ctx->pc = 0x1BD71Cu;
            // 0x1bd71c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BD720u;
        goto label_1bd720;
    }
    ctx->pc = 0x1BD718u;
    {
        const bool branch_taken_0x1bd718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd718) {
            ctx->pc = 0x1BD71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD718u;
            // 0x1bd71c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD72Cu;
            goto label_1bd72c;
        }
    }
    ctx->pc = 0x1BD720u;
label_1bd720:
    // 0x1bd720: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x1bd720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_1bd724:
    // 0x1bd724: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x1bd724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_1bd728:
    // 0x1bd728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd72c:
    // 0x1bd72c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bd730:
    // 0x1bd730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bd730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd734:
    // 0x1bd734: 0x3e00008  jr          $ra
label_1bd738:
    if (ctx->pc == 0x1BD738u) {
        ctx->pc = 0x1BD738u;
            // 0x1bd738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BD73Cu;
        goto label_1bd73c;
    }
    ctx->pc = 0x1BD734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD734u;
            // 0x1bd738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD73Cu;
label_1bd73c:
    // 0x1bd73c: 0x0  nop
    ctx->pc = 0x1bd73cu;
    // NOP
label_1bd740:
    // 0x1bd740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bd744:
    // 0x1bd744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bd748:
    // 0x1bd748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd74c:
    // 0x1bd74c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1bd750:
    // 0x1bd750: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bd750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bd754:
    // 0x1bd754: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bd758:
    if (ctx->pc == 0x1BD758u) {
        ctx->pc = 0x1BD758u;
            // 0x1bd758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD75Cu;
        goto label_1bd75c;
    }
    ctx->pc = 0x1BD754u;
    {
        const bool branch_taken_0x1bd754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD754u;
            // 0x1bd758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd754) {
            ctx->pc = 0x1BD780u;
            goto label_1bd780;
        }
    }
    ctx->pc = 0x1BD75Cu;
label_1bd75c:
    // 0x1bd75c: 0xc06db18  jal         func_1B6C60
label_1bd760:
    if (ctx->pc == 0x1BD760u) {
        ctx->pc = 0x1BD764u;
        goto label_1bd764;
    }
    ctx->pc = 0x1BD75Cu;
    SET_GPR_U32(ctx, 31, 0x1BD764u);
    ctx->pc = 0x1B6C60u;
    if (runtime->hasFunction(0x1B6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD764u; }
        if (ctx->pc != 0x1BD764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C60_0x1b6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD764u; }
        if (ctx->pc != 0x1BD764u) { return; }
    }
    ctx->pc = 0x1BD764u;
label_1bd764:
    // 0x1bd764: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bd764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bd768:
    // 0x1bd768: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_1bd76c:
    if (ctx->pc == 0x1BD76Cu) {
        ctx->pc = 0x1BD76Cu;
            // 0x1bd76c: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x1BD770u;
        goto label_1bd770;
    }
    ctx->pc = 0x1BD768u;
    {
        const bool branch_taken_0x1bd768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd768) {
            ctx->pc = 0x1BD76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD768u;
            // 0x1bd76c: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD784u;
            goto label_1bd784;
        }
    }
    ctx->pc = 0x1BD770u;
label_1bd770:
    // 0x1bd770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bd774:
    // 0x1bd774: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bd778:
    // 0x1bd778: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x1bd778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_1bd77c:
    // 0x1bd77c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1bd77cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_1bd780:
    // 0x1bd780: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x1bd780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1bd784:
    // 0x1bd784: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_1bd788:
    if (ctx->pc == 0x1BD788u) {
        ctx->pc = 0x1BD788u;
            // 0x1bd788: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BD78Cu;
        goto label_1bd78c;
    }
    ctx->pc = 0x1BD784u;
    {
        const bool branch_taken_0x1bd784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd784) {
            ctx->pc = 0x1BD788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD784u;
            // 0x1bd788: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD7B4u;
            goto label_1bd7b4;
        }
    }
    ctx->pc = 0x1BD78Cu;
label_1bd78c:
    // 0x1bd78c: 0xc07191e  jal         func_1C6478
label_1bd790:
    if (ctx->pc == 0x1BD790u) {
        ctx->pc = 0x1BD794u;
        goto label_1bd794;
    }
    ctx->pc = 0x1BD78Cu;
    SET_GPR_U32(ctx, 31, 0x1BD794u);
    ctx->pc = 0x1C6478u;
    if (runtime->hasFunction(0x1C6478u)) {
        auto targetFn = runtime->lookupFunction(0x1C6478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD794u; }
        if (ctx->pc != 0x1BD794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6478_0x1c6478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD794u; }
        if (ctx->pc != 0x1BD794u) { return; }
    }
    ctx->pc = 0x1BD794u;
label_1bd794:
    // 0x1bd794: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd798:
    // 0x1bd798: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_1bd79c:
    if (ctx->pc == 0x1BD79Cu) {
        ctx->pc = 0x1BD79Cu;
            // 0x1bd79c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BD7A0u;
        goto label_1bd7a0;
    }
    ctx->pc = 0x1BD798u;
    {
        const bool branch_taken_0x1bd798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd798) {
            ctx->pc = 0x1BD79Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD798u;
            // 0x1bd79c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD7B4u;
            goto label_1bd7b4;
        }
    }
    ctx->pc = 0x1BD7A0u;
label_1bd7a0:
    // 0x1bd7a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bd7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bd7a4:
    // 0x1bd7a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bd7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bd7a8:
    // 0x1bd7a8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1bd7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1bd7ac:
    // 0x1bd7ac: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x1bd7acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
label_1bd7b0:
    // 0x1bd7b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd7b4:
    // 0x1bd7b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bd7b8:
    // 0x1bd7b8: 0x3e00008  jr          $ra
label_1bd7bc:
    if (ctx->pc == 0x1BD7BCu) {
        ctx->pc = 0x1BD7BCu;
            // 0x1bd7bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BD7C0u;
        goto label_fallthrough_0x1bd7b8;
    }
    ctx->pc = 0x1BD7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7B8u;
            // 0x1bd7bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1bd7b8:
    ctx->pc = 0x1BD7C0u;
    ctx->pc = 0x1bd7c0u;
}
