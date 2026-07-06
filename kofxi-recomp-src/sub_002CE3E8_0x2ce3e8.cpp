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

// Function: sub_002CE3E8
// Address: 0x2ce3e8 - 0x2ce8e8
void sub_002CE3E8_0x2ce3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE3E8_0x2ce3e8");
#endif

    switch (ctx->pc) {
        case 0x2ce3e8u: goto label_2ce3e8;
        case 0x2ce3ecu: goto label_2ce3ec;
        case 0x2ce3f0u: goto label_2ce3f0;
        case 0x2ce3f4u: goto label_2ce3f4;
        case 0x2ce3f8u: goto label_2ce3f8;
        case 0x2ce3fcu: goto label_2ce3fc;
        case 0x2ce400u: goto label_2ce400;
        case 0x2ce404u: goto label_2ce404;
        case 0x2ce408u: goto label_2ce408;
        case 0x2ce40cu: goto label_2ce40c;
        case 0x2ce410u: goto label_2ce410;
        case 0x2ce414u: goto label_2ce414;
        case 0x2ce418u: goto label_2ce418;
        case 0x2ce41cu: goto label_2ce41c;
        case 0x2ce420u: goto label_2ce420;
        case 0x2ce424u: goto label_2ce424;
        case 0x2ce428u: goto label_2ce428;
        case 0x2ce42cu: goto label_2ce42c;
        case 0x2ce430u: goto label_2ce430;
        case 0x2ce434u: goto label_2ce434;
        case 0x2ce438u: goto label_2ce438;
        case 0x2ce43cu: goto label_2ce43c;
        case 0x2ce440u: goto label_2ce440;
        case 0x2ce444u: goto label_2ce444;
        case 0x2ce448u: goto label_2ce448;
        case 0x2ce44cu: goto label_2ce44c;
        case 0x2ce450u: goto label_2ce450;
        case 0x2ce454u: goto label_2ce454;
        case 0x2ce458u: goto label_2ce458;
        case 0x2ce45cu: goto label_2ce45c;
        case 0x2ce460u: goto label_2ce460;
        case 0x2ce464u: goto label_2ce464;
        case 0x2ce468u: goto label_2ce468;
        case 0x2ce46cu: goto label_2ce46c;
        case 0x2ce470u: goto label_2ce470;
        case 0x2ce474u: goto label_2ce474;
        case 0x2ce478u: goto label_2ce478;
        case 0x2ce47cu: goto label_2ce47c;
        case 0x2ce480u: goto label_2ce480;
        case 0x2ce484u: goto label_2ce484;
        case 0x2ce488u: goto label_2ce488;
        case 0x2ce48cu: goto label_2ce48c;
        case 0x2ce490u: goto label_2ce490;
        case 0x2ce494u: goto label_2ce494;
        case 0x2ce498u: goto label_2ce498;
        case 0x2ce49cu: goto label_2ce49c;
        case 0x2ce4a0u: goto label_2ce4a0;
        case 0x2ce4a4u: goto label_2ce4a4;
        case 0x2ce4a8u: goto label_2ce4a8;
        case 0x2ce4acu: goto label_2ce4ac;
        case 0x2ce4b0u: goto label_2ce4b0;
        case 0x2ce4b4u: goto label_2ce4b4;
        case 0x2ce4b8u: goto label_2ce4b8;
        case 0x2ce4bcu: goto label_2ce4bc;
        case 0x2ce4c0u: goto label_2ce4c0;
        case 0x2ce4c4u: goto label_2ce4c4;
        case 0x2ce4c8u: goto label_2ce4c8;
        case 0x2ce4ccu: goto label_2ce4cc;
        case 0x2ce4d0u: goto label_2ce4d0;
        case 0x2ce4d4u: goto label_2ce4d4;
        case 0x2ce4d8u: goto label_2ce4d8;
        case 0x2ce4dcu: goto label_2ce4dc;
        case 0x2ce4e0u: goto label_2ce4e0;
        case 0x2ce4e4u: goto label_2ce4e4;
        case 0x2ce4e8u: goto label_2ce4e8;
        case 0x2ce4ecu: goto label_2ce4ec;
        case 0x2ce4f0u: goto label_2ce4f0;
        case 0x2ce4f4u: goto label_2ce4f4;
        case 0x2ce4f8u: goto label_2ce4f8;
        case 0x2ce4fcu: goto label_2ce4fc;
        case 0x2ce500u: goto label_2ce500;
        case 0x2ce504u: goto label_2ce504;
        case 0x2ce508u: goto label_2ce508;
        case 0x2ce50cu: goto label_2ce50c;
        case 0x2ce510u: goto label_2ce510;
        case 0x2ce514u: goto label_2ce514;
        case 0x2ce518u: goto label_2ce518;
        case 0x2ce51cu: goto label_2ce51c;
        case 0x2ce520u: goto label_2ce520;
        case 0x2ce524u: goto label_2ce524;
        case 0x2ce528u: goto label_2ce528;
        case 0x2ce52cu: goto label_2ce52c;
        case 0x2ce530u: goto label_2ce530;
        case 0x2ce534u: goto label_2ce534;
        case 0x2ce538u: goto label_2ce538;
        case 0x2ce53cu: goto label_2ce53c;
        case 0x2ce540u: goto label_2ce540;
        case 0x2ce544u: goto label_2ce544;
        case 0x2ce548u: goto label_2ce548;
        case 0x2ce54cu: goto label_2ce54c;
        case 0x2ce550u: goto label_2ce550;
        case 0x2ce554u: goto label_2ce554;
        case 0x2ce558u: goto label_2ce558;
        case 0x2ce55cu: goto label_2ce55c;
        case 0x2ce560u: goto label_2ce560;
        case 0x2ce564u: goto label_2ce564;
        case 0x2ce568u: goto label_2ce568;
        case 0x2ce56cu: goto label_2ce56c;
        case 0x2ce570u: goto label_2ce570;
        case 0x2ce574u: goto label_2ce574;
        case 0x2ce578u: goto label_2ce578;
        case 0x2ce57cu: goto label_2ce57c;
        case 0x2ce580u: goto label_2ce580;
        case 0x2ce584u: goto label_2ce584;
        case 0x2ce588u: goto label_2ce588;
        case 0x2ce58cu: goto label_2ce58c;
        case 0x2ce590u: goto label_2ce590;
        case 0x2ce594u: goto label_2ce594;
        case 0x2ce598u: goto label_2ce598;
        case 0x2ce59cu: goto label_2ce59c;
        case 0x2ce5a0u: goto label_2ce5a0;
        case 0x2ce5a4u: goto label_2ce5a4;
        case 0x2ce5a8u: goto label_2ce5a8;
        case 0x2ce5acu: goto label_2ce5ac;
        case 0x2ce5b0u: goto label_2ce5b0;
        case 0x2ce5b4u: goto label_2ce5b4;
        case 0x2ce5b8u: goto label_2ce5b8;
        case 0x2ce5bcu: goto label_2ce5bc;
        case 0x2ce5c0u: goto label_2ce5c0;
        case 0x2ce5c4u: goto label_2ce5c4;
        case 0x2ce5c8u: goto label_2ce5c8;
        case 0x2ce5ccu: goto label_2ce5cc;
        case 0x2ce5d0u: goto label_2ce5d0;
        case 0x2ce5d4u: goto label_2ce5d4;
        case 0x2ce5d8u: goto label_2ce5d8;
        case 0x2ce5dcu: goto label_2ce5dc;
        case 0x2ce5e0u: goto label_2ce5e0;
        case 0x2ce5e4u: goto label_2ce5e4;
        case 0x2ce5e8u: goto label_2ce5e8;
        case 0x2ce5ecu: goto label_2ce5ec;
        case 0x2ce5f0u: goto label_2ce5f0;
        case 0x2ce5f4u: goto label_2ce5f4;
        case 0x2ce5f8u: goto label_2ce5f8;
        case 0x2ce5fcu: goto label_2ce5fc;
        case 0x2ce600u: goto label_2ce600;
        case 0x2ce604u: goto label_2ce604;
        case 0x2ce608u: goto label_2ce608;
        case 0x2ce60cu: goto label_2ce60c;
        case 0x2ce610u: goto label_2ce610;
        case 0x2ce614u: goto label_2ce614;
        case 0x2ce618u: goto label_2ce618;
        case 0x2ce61cu: goto label_2ce61c;
        case 0x2ce620u: goto label_2ce620;
        case 0x2ce624u: goto label_2ce624;
        case 0x2ce628u: goto label_2ce628;
        case 0x2ce62cu: goto label_2ce62c;
        case 0x2ce630u: goto label_2ce630;
        case 0x2ce634u: goto label_2ce634;
        case 0x2ce638u: goto label_2ce638;
        case 0x2ce63cu: goto label_2ce63c;
        case 0x2ce640u: goto label_2ce640;
        case 0x2ce644u: goto label_2ce644;
        case 0x2ce648u: goto label_2ce648;
        case 0x2ce64cu: goto label_2ce64c;
        case 0x2ce650u: goto label_2ce650;
        case 0x2ce654u: goto label_2ce654;
        case 0x2ce658u: goto label_2ce658;
        case 0x2ce65cu: goto label_2ce65c;
        case 0x2ce660u: goto label_2ce660;
        case 0x2ce664u: goto label_2ce664;
        case 0x2ce668u: goto label_2ce668;
        case 0x2ce66cu: goto label_2ce66c;
        case 0x2ce670u: goto label_2ce670;
        case 0x2ce674u: goto label_2ce674;
        case 0x2ce678u: goto label_2ce678;
        case 0x2ce67cu: goto label_2ce67c;
        case 0x2ce680u: goto label_2ce680;
        case 0x2ce684u: goto label_2ce684;
        case 0x2ce688u: goto label_2ce688;
        case 0x2ce68cu: goto label_2ce68c;
        case 0x2ce690u: goto label_2ce690;
        case 0x2ce694u: goto label_2ce694;
        case 0x2ce698u: goto label_2ce698;
        case 0x2ce69cu: goto label_2ce69c;
        case 0x2ce6a0u: goto label_2ce6a0;
        case 0x2ce6a4u: goto label_2ce6a4;
        case 0x2ce6a8u: goto label_2ce6a8;
        case 0x2ce6acu: goto label_2ce6ac;
        case 0x2ce6b0u: goto label_2ce6b0;
        case 0x2ce6b4u: goto label_2ce6b4;
        case 0x2ce6b8u: goto label_2ce6b8;
        case 0x2ce6bcu: goto label_2ce6bc;
        case 0x2ce6c0u: goto label_2ce6c0;
        case 0x2ce6c4u: goto label_2ce6c4;
        case 0x2ce6c8u: goto label_2ce6c8;
        case 0x2ce6ccu: goto label_2ce6cc;
        case 0x2ce6d0u: goto label_2ce6d0;
        case 0x2ce6d4u: goto label_2ce6d4;
        case 0x2ce6d8u: goto label_2ce6d8;
        case 0x2ce6dcu: goto label_2ce6dc;
        case 0x2ce6e0u: goto label_2ce6e0;
        case 0x2ce6e4u: goto label_2ce6e4;
        case 0x2ce6e8u: goto label_2ce6e8;
        case 0x2ce6ecu: goto label_2ce6ec;
        case 0x2ce6f0u: goto label_2ce6f0;
        case 0x2ce6f4u: goto label_2ce6f4;
        case 0x2ce6f8u: goto label_2ce6f8;
        case 0x2ce6fcu: goto label_2ce6fc;
        case 0x2ce700u: goto label_2ce700;
        case 0x2ce704u: goto label_2ce704;
        case 0x2ce708u: goto label_2ce708;
        case 0x2ce70cu: goto label_2ce70c;
        case 0x2ce710u: goto label_2ce710;
        case 0x2ce714u: goto label_2ce714;
        case 0x2ce718u: goto label_2ce718;
        case 0x2ce71cu: goto label_2ce71c;
        case 0x2ce720u: goto label_2ce720;
        case 0x2ce724u: goto label_2ce724;
        case 0x2ce728u: goto label_2ce728;
        case 0x2ce72cu: goto label_2ce72c;
        case 0x2ce730u: goto label_2ce730;
        case 0x2ce734u: goto label_2ce734;
        case 0x2ce738u: goto label_2ce738;
        case 0x2ce73cu: goto label_2ce73c;
        case 0x2ce740u: goto label_2ce740;
        case 0x2ce744u: goto label_2ce744;
        case 0x2ce748u: goto label_2ce748;
        case 0x2ce74cu: goto label_2ce74c;
        case 0x2ce750u: goto label_2ce750;
        case 0x2ce754u: goto label_2ce754;
        case 0x2ce758u: goto label_2ce758;
        case 0x2ce75cu: goto label_2ce75c;
        case 0x2ce760u: goto label_2ce760;
        case 0x2ce764u: goto label_2ce764;
        case 0x2ce768u: goto label_2ce768;
        case 0x2ce76cu: goto label_2ce76c;
        case 0x2ce770u: goto label_2ce770;
        case 0x2ce774u: goto label_2ce774;
        case 0x2ce778u: goto label_2ce778;
        case 0x2ce77cu: goto label_2ce77c;
        case 0x2ce780u: goto label_2ce780;
        case 0x2ce784u: goto label_2ce784;
        case 0x2ce788u: goto label_2ce788;
        case 0x2ce78cu: goto label_2ce78c;
        case 0x2ce790u: goto label_2ce790;
        case 0x2ce794u: goto label_2ce794;
        case 0x2ce798u: goto label_2ce798;
        case 0x2ce79cu: goto label_2ce79c;
        case 0x2ce7a0u: goto label_2ce7a0;
        case 0x2ce7a4u: goto label_2ce7a4;
        case 0x2ce7a8u: goto label_2ce7a8;
        case 0x2ce7acu: goto label_2ce7ac;
        case 0x2ce7b0u: goto label_2ce7b0;
        case 0x2ce7b4u: goto label_2ce7b4;
        case 0x2ce7b8u: goto label_2ce7b8;
        case 0x2ce7bcu: goto label_2ce7bc;
        case 0x2ce7c0u: goto label_2ce7c0;
        case 0x2ce7c4u: goto label_2ce7c4;
        case 0x2ce7c8u: goto label_2ce7c8;
        case 0x2ce7ccu: goto label_2ce7cc;
        case 0x2ce7d0u: goto label_2ce7d0;
        case 0x2ce7d4u: goto label_2ce7d4;
        case 0x2ce7d8u: goto label_2ce7d8;
        case 0x2ce7dcu: goto label_2ce7dc;
        case 0x2ce7e0u: goto label_2ce7e0;
        case 0x2ce7e4u: goto label_2ce7e4;
        case 0x2ce7e8u: goto label_2ce7e8;
        case 0x2ce7ecu: goto label_2ce7ec;
        case 0x2ce7f0u: goto label_2ce7f0;
        case 0x2ce7f4u: goto label_2ce7f4;
        case 0x2ce7f8u: goto label_2ce7f8;
        case 0x2ce7fcu: goto label_2ce7fc;
        case 0x2ce800u: goto label_2ce800;
        case 0x2ce804u: goto label_2ce804;
        case 0x2ce808u: goto label_2ce808;
        case 0x2ce80cu: goto label_2ce80c;
        case 0x2ce810u: goto label_2ce810;
        case 0x2ce814u: goto label_2ce814;
        case 0x2ce818u: goto label_2ce818;
        case 0x2ce81cu: goto label_2ce81c;
        case 0x2ce820u: goto label_2ce820;
        case 0x2ce824u: goto label_2ce824;
        case 0x2ce828u: goto label_2ce828;
        case 0x2ce82cu: goto label_2ce82c;
        case 0x2ce830u: goto label_2ce830;
        case 0x2ce834u: goto label_2ce834;
        case 0x2ce838u: goto label_2ce838;
        case 0x2ce83cu: goto label_2ce83c;
        case 0x2ce840u: goto label_2ce840;
        case 0x2ce844u: goto label_2ce844;
        case 0x2ce848u: goto label_2ce848;
        case 0x2ce84cu: goto label_2ce84c;
        case 0x2ce850u: goto label_2ce850;
        case 0x2ce854u: goto label_2ce854;
        case 0x2ce858u: goto label_2ce858;
        case 0x2ce85cu: goto label_2ce85c;
        case 0x2ce860u: goto label_2ce860;
        case 0x2ce864u: goto label_2ce864;
        case 0x2ce868u: goto label_2ce868;
        case 0x2ce86cu: goto label_2ce86c;
        case 0x2ce870u: goto label_2ce870;
        case 0x2ce874u: goto label_2ce874;
        case 0x2ce878u: goto label_2ce878;
        case 0x2ce87cu: goto label_2ce87c;
        case 0x2ce880u: goto label_2ce880;
        case 0x2ce884u: goto label_2ce884;
        case 0x2ce888u: goto label_2ce888;
        case 0x2ce88cu: goto label_2ce88c;
        case 0x2ce890u: goto label_2ce890;
        case 0x2ce894u: goto label_2ce894;
        case 0x2ce898u: goto label_2ce898;
        case 0x2ce89cu: goto label_2ce89c;
        case 0x2ce8a0u: goto label_2ce8a0;
        case 0x2ce8a4u: goto label_2ce8a4;
        case 0x2ce8a8u: goto label_2ce8a8;
        case 0x2ce8acu: goto label_2ce8ac;
        case 0x2ce8b0u: goto label_2ce8b0;
        case 0x2ce8b4u: goto label_2ce8b4;
        case 0x2ce8b8u: goto label_2ce8b8;
        case 0x2ce8bcu: goto label_2ce8bc;
        case 0x2ce8c0u: goto label_2ce8c0;
        case 0x2ce8c4u: goto label_2ce8c4;
        case 0x2ce8c8u: goto label_2ce8c8;
        case 0x2ce8ccu: goto label_2ce8cc;
        case 0x2ce8d0u: goto label_2ce8d0;
        case 0x2ce8d4u: goto label_2ce8d4;
        case 0x2ce8d8u: goto label_2ce8d8;
        case 0x2ce8dcu: goto label_2ce8dc;
        case 0x2ce8e0u: goto label_2ce8e0;
        case 0x2ce8e4u: goto label_2ce8e4;
        default: break;
    }

    ctx->pc = 0x2ce3e8u;

label_2ce3e8:
    // 0x2ce3e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ce3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ce3ec:
    // 0x2ce3ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ce3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ce3f0:
    // 0x2ce3f0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2ce3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2ce3f4:
    // 0x2ce3f4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2ce3f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ce3f8:
    // 0x2ce3f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ce3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ce3fc:
    // 0x2ce3fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ce3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce400:
    // 0x2ce400: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ce400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2ce404:
    // 0x2ce404: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ce404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ce408:
    // 0x2ce408: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2ce408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2ce40c:
    // 0x2ce40c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2ce40cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ce410:
    // 0x2ce410: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ce410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2ce414:
    // 0x2ce414: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ce414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2ce418:
    // 0x2ce418: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ce418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2ce41c:
    // 0x2ce41c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2ce41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2ce420:
    // 0x2ce420: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2ce420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_2ce424:
    // 0x2ce424: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2ce424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_2ce428:
    // 0x2ce428: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x2ce428u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_2ce42c:
    // 0x2ce42c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2ce42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_2ce430:
    // 0x2ce430: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2ce430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ce434:
    // 0x2ce434: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ce434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2ce438:
    // 0x2ce438: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_2ce43c:
    if (ctx->pc == 0x2CE43Cu) {
        ctx->pc = 0x2CE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE438u;
        // 0x2ce43c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE440u;
        goto label_2ce440;
    }
    ctx->pc = 0x2CE438u;
    {
        const bool branch_taken_0x2ce438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE438u;
        // 0x2ce43c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce438) {
            ctx->pc = 0x2CE718u;
            goto label_2ce718;
        }
    }
    ctx->pc = 0x2CE440u;
label_2ce440:
    // 0x2ce440: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2ce440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2ce444:
    // 0x2ce444: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ce444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ce448:
    // 0x2ce448: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2ce448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2ce44c:
    // 0x2ce44c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ce44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce450:
    // 0x2ce450: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ce454:
    if (ctx->pc == 0x2CE454u) {
        ctx->pc = 0x2CE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE450u;
        // 0x2ce454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE458u;
        goto label_2ce458;
    }
    ctx->pc = 0x2CE450u;
    {
        const bool branch_taken_0x2ce450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE450u;
        // 0x2ce454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce450) {
            ctx->pc = 0x2CE488u;
            goto label_2ce488;
        }
    }
    ctx->pc = 0x2CE458u;
label_2ce458:
    // 0x2ce458: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x2ce458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ce45c:
    // 0x2ce45c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2ce45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce460:
    // 0x2ce460: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2ce460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ce464:
    // 0x2ce464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce468:
    // 0x2ce468: 0xc0b2692  jal         func_2C9A48
label_2ce46c:
    if (ctx->pc == 0x2CE46Cu) {
        ctx->pc = 0x2CE470u;
        goto label_2ce470;
    }
    ctx->pc = 0x2CE468u;
    SET_GPR_U32(ctx, 31, 0x2CE470u);
    ctx->pc = 0x2C9A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9A48u, 0x2CE468u, 0x2CE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE470u;
label_2ce470:
    // 0x2ce470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce474:
    // 0x2ce474: 0x122000d6  beqz        $s1, . + 4 + (0xD6 << 2)
label_2ce478:
    if (ctx->pc == 0x2CE478u) {
        ctx->pc = 0x2CE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE474u;
        // 0x2ce478: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE47Cu;
        goto label_2ce47c;
    }
    ctx->pc = 0x2CE474u;
    {
        const bool branch_taken_0x2ce474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE474u;
        // 0x2ce478: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce474) {
            ctx->pc = 0x2CE7D0u;
            goto label_2ce7d0;
        }
    }
    ctx->pc = 0x2CE47Cu;
label_2ce47c:
    // 0x2ce47c: 0x10000105  b           . + 4 + (0x105 << 2)
label_2ce480:
    if (ctx->pc == 0x2CE480u) {
        ctx->pc = 0x2CE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE47Cu;
        // 0x2ce480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE484u;
        goto label_2ce484;
    }
    ctx->pc = 0x2CE47Cu;
    {
        const bool branch_taken_0x2ce47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE47Cu;
        // 0x2ce480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce47c) {
            ctx->pc = 0x2CE894u;
            goto label_2ce894;
        }
    }
    ctx->pc = 0x2CE484u;
label_2ce484:
    // 0x2ce484: 0x0  nop
    ctx->pc = 0x2ce484u;
    // NOP
label_2ce488:
    // 0x2ce488: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x2ce488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_2ce48c:
    // 0x2ce48c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2ce490:
    if (ctx->pc == 0x2CE490u) {
        ctx->pc = 0x2CE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE48Cu;
        // 0x2ce490: 0x32a200c0  andi        $v0, $s5, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE494u;
        goto label_2ce494;
    }
    ctx->pc = 0x2CE48Cu;
    {
        const bool branch_taken_0x2ce48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE48Cu;
        // 0x2ce490: 0x32a200c0  andi        $v0, $s5, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce48c) {
            ctx->pc = 0x2CE4B8u;
            goto label_2ce4b8;
        }
    }
    ctx->pc = 0x2CE494u;
label_2ce494:
    // 0x2ce494: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ce494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ce498:
    // 0x2ce498: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ce498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2ce49c:
    // 0x2ce49c: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
label_2ce4a0:
    if (ctx->pc == 0x2CE4A0u) {
        ctx->pc = 0x2CE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE49Cu;
        // 0x2ce4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4A4u;
        goto label_2ce4a4;
    }
    ctx->pc = 0x2CE49Cu;
    {
        const bool branch_taken_0x2ce49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE49Cu;
        // 0x2ce4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce49c) {
            ctx->pc = 0x2CE8B4u;
            goto label_2ce8b4;
        }
    }
    ctx->pc = 0x2CE4A4u;
label_2ce4a4:
    // 0x2ce4a4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ce4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce4a8:
    // 0x2ce4a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ce4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4ac:
    // 0x2ce4ac: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2ce4acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4b0:
    // 0x2ce4b0: 0x100000fa  b           . + 4 + (0xFA << 2)
label_2ce4b4:
    if (ctx->pc == 0x2CE4B4u) {
        ctx->pc = 0x2CE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4B0u;
        // 0x2ce4b4: 0x24040809  addiu       $a0, $zero, 0x809 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4B8u;
        goto label_2ce4b8;
    }
    ctx->pc = 0x2CE4B0u;
    {
        const bool branch_taken_0x2ce4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4B0u;
        // 0x2ce4b4: 0x24040809  addiu       $a0, $zero, 0x809 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4b0) {
            ctx->pc = 0x2CE89Cu;
            goto label_2ce89c;
        }
    }
    ctx->pc = 0x2CE4B8u;
label_2ce4b8:
    // 0x2ce4b8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2ce4bc:
    if (ctx->pc == 0x2CE4BCu) {
        ctx->pc = 0x2CE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4B8u;
        // 0x2ce4bc: 0x32a21000  andi        $v0, $s5, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4C0u;
        goto label_2ce4c0;
    }
    ctx->pc = 0x2CE4B8u;
    {
        const bool branch_taken_0x2ce4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4B8u;
        // 0x2ce4bc: 0x32a21000  andi        $v0, $s5, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4b8) {
            ctx->pc = 0x2CE520u;
            goto label_2ce520;
        }
    }
    ctx->pc = 0x2CE4C0u;
label_2ce4c0:
    // 0x2ce4c0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2ce4c4:
    if (ctx->pc == 0x2CE4C4u) {
        ctx->pc = 0x2CE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4C0u;
        // 0x2ce4c4: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4C8u;
        goto label_2ce4c8;
    }
    ctx->pc = 0x2CE4C0u;
    {
        const bool branch_taken_0x2ce4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce4c0) {
            ctx->pc = 0x2CE4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE4C0u;
            // 0x2ce4c4: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE524u;
            goto label_2ce524;
        }
    }
    ctx->pc = 0x2CE4C8u;
label_2ce4c8:
    // 0x2ce4c8: 0x32a501ff  andi        $a1, $s5, 0x1FF
    ctx->pc = 0x2ce4c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)511);
label_2ce4cc:
    // 0x2ce4cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4d0:
    // 0x2ce4d0: 0xc0b3ab0  jal         func_2CEAC0
label_2ce4d4:
    if (ctx->pc == 0x2CE4D4u) {
        ctx->pc = 0x2CE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4D0u;
        // 0x2ce4d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4D8u;
        goto label_2ce4d8;
    }
    ctx->pc = 0x2CE4D0u;
    SET_GPR_U32(ctx, 31, 0x2CE4D8u);
    ctx->pc = 0x2CE4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE4D0u;
    // 0x2ce4d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEAC0u, 0x2CE4D0u, 0x2CE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4D8u;
label_2ce4d8:
    // 0x2ce4d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4dc:
    // 0x2ce4dc: 0x162000ec  bnez        $s1, . + 4 + (0xEC << 2)
label_2ce4e0:
    if (ctx->pc == 0x2CE4E0u) {
        ctx->pc = 0x2CE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4DCu;
        // 0x2ce4e0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4E4u;
        goto label_2ce4e4;
    }
    ctx->pc = 0x2CE4DCu;
    {
        const bool branch_taken_0x2ce4dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4DCu;
        // 0x2ce4e0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4dc) {
            ctx->pc = 0x2CE890u;
            goto label_2ce890;
        }
    }
    ctx->pc = 0x2CE4E4u;
label_2ce4e4:
    // 0x2ce4e4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ce4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4e8:
    // 0x2ce4e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4ec:
    // 0x2ce4ec: 0x26650014  addiu       $a1, $s3, 0x14
    ctx->pc = 0x2ce4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_2ce4f0:
    // 0x2ce4f0: 0xc0b38fa  jal         func_2CE3E8
label_2ce4f4:
    if (ctx->pc == 0x2CE4F4u) {
        ctx->pc = 0x2CE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4F0u;
        // 0x2ce4f4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4F8u;
        goto label_2ce4f8;
    }
    ctx->pc = 0x2CE4F0u;
    SET_GPR_U32(ctx, 31, 0x2CE4F8u);
    ctx->pc = 0x2CE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE4F0u;
    // 0x2ce4f4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3E8u;
    goto label_2ce3e8;
    ctx->pc = 0x2CE4F8u;
label_2ce4f8:
    // 0x2ce4f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4fc:
    // 0x2ce4fc: 0x562000e4  bnel        $s1, $zero, . + 4 + (0xE4 << 2)
label_2ce500:
    if (ctx->pc == 0x2CE500u) {
        ctx->pc = 0x2CE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4FCu;
        // 0x2ce500: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE504u;
        goto label_2ce504;
    }
    ctx->pc = 0x2CE4FCu;
    {
        const bool branch_taken_0x2ce4fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce4fc) {
            ctx->pc = 0x2CE500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE4FCu;
            // 0x2ce500: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE890u;
            goto label_2ce890;
        }
    }
    ctx->pc = 0x2CE504u;
label_2ce504:
    // 0x2ce504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce508:
    // 0x2ce508: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x2ce508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2ce50c:
    // 0x2ce50c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce510:
    // 0x2ce510: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ce510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce514:
    // 0x2ce514: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
label_2ce518:
    if (ctx->pc == 0x2CE518u) {
        ctx->pc = 0x2CE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE514u;
        // 0x2ce518: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE51Cu;
        goto label_2ce51c;
    }
    ctx->pc = 0x2CE514u;
    {
        const bool branch_taken_0x2ce514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE514u;
        // 0x2ce518: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce514) {
            ctx->pc = 0x2CE468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce468;
        }
    }
    ctx->pc = 0x2CE51Cu;
label_2ce51c:
    // 0x2ce51c: 0x0  nop
    ctx->pc = 0x2ce51cu;
    // NOP
label_2ce520:
    // 0x2ce520: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2ce520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2ce524:
    // 0x2ce524: 0x24100103  addiu       $s0, $zero, 0x103
    ctx->pc = 0x2ce524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2ce528:
    // 0x2ce528: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2ce52c:
    if (ctx->pc == 0x2CE52Cu) {
        ctx->pc = 0x2CE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE528u;
        // 0x2ce52c: 0x32a20400  andi        $v0, $s5, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE530u;
        goto label_2ce530;
    }
    ctx->pc = 0x2CE528u;
    {
        const bool branch_taken_0x2ce528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2CE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE528u;
        // 0x2ce52c: 0x32a20400  andi        $v0, $s5, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce528) {
            ctx->pc = 0x2CE558u;
            goto label_2ce558;
        }
    }
    ctx->pc = 0x2CE530u;
label_2ce530:
    // 0x2ce530: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ce530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ce534:
    // 0x2ce534: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ce534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2ce538:
    // 0x2ce538: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
label_2ce53c:
    if (ctx->pc == 0x2CE53Cu) {
        ctx->pc = 0x2CE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE538u;
        // 0x2ce53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE540u;
        goto label_2ce540;
    }
    ctx->pc = 0x2CE538u;
    {
        const bool branch_taken_0x2ce538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE538u;
        // 0x2ce53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce538) {
            ctx->pc = 0x2CE8B4u;
            goto label_2ce8b4;
        }
    }
    ctx->pc = 0x2CE540u;
label_2ce540:
    // 0x2ce540: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ce540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce544:
    // 0x2ce544: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ce544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce548:
    // 0x2ce548: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2ce548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ce54c:
    // 0x2ce54c: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2ce550:
    if (ctx->pc == 0x2CE550u) {
        ctx->pc = 0x2CE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE54Cu;
        // 0x2ce550: 0x24040809  addiu       $a0, $zero, 0x809 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE554u;
        goto label_2ce554;
    }
    ctx->pc = 0x2CE54Cu;
    {
        const bool branch_taken_0x2ce54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE54Cu;
        // 0x2ce550: 0x24040809  addiu       $a0, $zero, 0x809 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce54c) {
            ctx->pc = 0x2CE89Cu;
            goto label_2ce89c;
        }
    }
    ctx->pc = 0x2CE554u;
label_2ce554:
    // 0x2ce554: 0x0  nop
    ctx->pc = 0x2ce554u;
    // NOP
label_2ce558:
    // 0x2ce558: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_2ce55c:
    if (ctx->pc == 0x2CE55Cu) {
        ctx->pc = 0x2CE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE558u;
        // 0x2ce55c: 0x26a2ffd0  addiu       $v0, $s5, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE560u;
        goto label_2ce560;
    }
    ctx->pc = 0x2CE558u;
    {
        const bool branch_taken_0x2ce558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE558u;
        // 0x2ce55c: 0x26a2ffd0  addiu       $v0, $s5, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce558) {
            ctx->pc = 0x2CE640u;
            goto label_2ce640;
        }
    }
    ctx->pc = 0x2CE560u;
label_2ce560:
    // 0x2ce560: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2ce560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2ce564:
    // 0x2ce564: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
label_2ce568:
    if (ctx->pc == 0x2CE568u) {
        ctx->pc = 0x2CE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE564u;
        // 0x2ce568: 0x32b401ff  andi        $s4, $s5, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)511);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE56Cu;
        goto label_2ce56c;
    }
    ctx->pc = 0x2CE564u;
    {
        const bool branch_taken_0x2ce564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE564u;
        // 0x2ce568: 0x32b401ff  andi        $s4, $s5, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)511);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce564) {
            ctx->pc = 0x2CE838u;
            goto label_2ce838;
        }
    }
    ctx->pc = 0x2CE56Cu;
label_2ce56c:
    // 0x2ce56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce570:
    // 0x2ce570: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ce570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ce574:
    // 0x2ce574: 0xc0b3ab0  jal         func_2CEAC0
label_2ce578:
    if (ctx->pc == 0x2CE578u) {
        ctx->pc = 0x2CE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE574u;
        // 0x2ce578: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE57Cu;
        goto label_2ce57c;
    }
    ctx->pc = 0x2CE574u;
    SET_GPR_U32(ctx, 31, 0x2CE57Cu);
    ctx->pc = 0x2CE578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE574u;
    // 0x2ce578: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEAC0u, 0x2CE574u, 0x2CE57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE57Cu;
label_2ce57c:
    // 0x2ce57c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce580:
    // 0x2ce580: 0x162000c3  bnez        $s1, . + 4 + (0xC3 << 2)
label_2ce584:
    if (ctx->pc == 0x2CE584u) {
        ctx->pc = 0x2CE584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE580u;
        // 0x2ce584: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE588u;
        goto label_2ce588;
    }
    ctx->pc = 0x2CE580u;
    {
        const bool branch_taken_0x2ce580 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE580u;
        // 0x2ce584: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce580) {
            ctx->pc = 0x2CE890u;
            goto label_2ce890;
        }
    }
    ctx->pc = 0x2CE588u;
label_2ce588:
    // 0x2ce588: 0x267e0014  addiu       $fp, $s3, 0x14
    ctx->pc = 0x2ce588u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_2ce58c:
    // 0x2ce58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce590:
    // 0x2ce590: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2ce590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ce594:
    // 0x2ce594: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ce594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ce598:
    // 0x2ce598: 0xc0b38fa  jal         func_2CE3E8
label_2ce59c:
    if (ctx->pc == 0x2CE59Cu) {
        ctx->pc = 0x2CE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE598u;
        // 0x2ce59c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE5A0u;
        goto label_2ce5a0;
    }
    ctx->pc = 0x2CE598u;
    SET_GPR_U32(ctx, 31, 0x2CE5A0u);
    ctx->pc = 0x2CE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE598u;
    // 0x2ce59c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3E8u;
    goto label_2ce3e8;
    ctx->pc = 0x2CE5A0u;
label_2ce5a0:
    // 0x2ce5a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce5a4:
    // 0x2ce5a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce5a8:
    // 0x2ce5a8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2ce5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2ce5ac:
    // 0x2ce5ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ce5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ce5b0:
    // 0x2ce5b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce5b4:
    // 0x2ce5b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ce5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ce5b8:
    // 0x2ce5b8: 0x162000a8  bnez        $s1, . + 4 + (0xA8 << 2)
label_2ce5bc:
    if (ctx->pc == 0x2CE5BCu) {
        ctx->pc = 0x2CE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5B8u;
        // 0x2ce5bc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE5C0u;
        goto label_2ce5c0;
    }
    ctx->pc = 0x2CE5B8u;
    {
        const bool branch_taken_0x2ce5b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5B8u;
        // 0x2ce5bc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5b8) {
            ctx->pc = 0x2CE85Cu;
            goto label_2ce85c;
        }
    }
    ctx->pc = 0x2CE5C0u;
label_2ce5c0:
    // 0x2ce5c0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2ce5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2ce5c4:
    // 0x2ce5c4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2ce5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2ce5c8:
    // 0x2ce5c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ce5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ce5cc:
    // 0x2ce5cc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2ce5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ce5d0:
    // 0x2ce5d0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2ce5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2ce5d4:
    // 0x2ce5d4: 0x40f809  jalr        $v0
label_2ce5d8:
    if (ctx->pc == 0x2CE5D8u) {
        ctx->pc = 0x2CE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5D4u;
        // 0x2ce5d8: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE5DCu;
        goto label_2ce5dc;
    }
    ctx->pc = 0x2CE5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CE5DCu);
        ctx->pc = 0x2CE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5D4u;
        // 0x2ce5d8: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE5D4u, 0x2CE5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE5DCu;
label_2ce5dc:
    // 0x2ce5dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce5e0:
    // 0x2ce5e0: 0x5620009b  bnel        $s1, $zero, . + 4 + (0x9B << 2)
label_2ce5e4:
    if (ctx->pc == 0x2CE5E4u) {
        ctx->pc = 0x2CE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5E0u;
        // 0x2ce5e4: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE5E8u;
        goto label_2ce5e8;
    }
    ctx->pc = 0x2CE5E0u;
    {
        const bool branch_taken_0x2ce5e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce5e0) {
            ctx->pc = 0x2CE5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE5E0u;
            // 0x2ce5e4: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE850u;
            goto label_2ce850;
        }
    }
    ctx->pc = 0x2CE5E8u;
label_2ce5e8:
    // 0x2ce5e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ce5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ce5ec:
    // 0x2ce5ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ce5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ce5f0:
    // 0x2ce5f0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2ce5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ce5f4:
    // 0x2ce5f4: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
label_2ce5f8:
    if (ctx->pc == 0x2CE5F8u) {
        ctx->pc = 0x2CE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5F4u;
        // 0x2ce5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE5FCu;
        goto label_2ce5fc;
    }
    ctx->pc = 0x2CE5F4u;
    {
        const bool branch_taken_0x2ce5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5F4u;
        // 0x2ce5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5f4) {
            ctx->pc = 0x2CE590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce590;
        }
    }
    ctx->pc = 0x2CE5FCu;
label_2ce5fc:
    // 0x2ce5fc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2ce5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2ce600:
    // 0x2ce600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce604:
    // 0x2ce604: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x2ce604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2ce608:
    // 0x2ce608: 0x24020103  addiu       $v0, $zero, 0x103
    ctx->pc = 0x2ce608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2ce60c:
    // 0x2ce60c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ce60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2ce610:
    // 0x2ce610: 0x5462ffdf  bnel        $v1, $v0, . + 4 + (-0x21 << 2)
label_2ce614:
    if (ctx->pc == 0x2CE614u) {
        ctx->pc = 0x2CE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE610u;
        // 0x2ce614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE618u;
        goto label_2ce618;
    }
    ctx->pc = 0x2CE610u;
    {
        const bool branch_taken_0x2ce610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce610) {
            ctx->pc = 0x2CE614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE610u;
            // 0x2ce614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce590;
        }
    }
    ctx->pc = 0x2CE618u;
label_2ce618:
    // 0x2ce618: 0x24020431  addiu       $v0, $zero, 0x431
    ctx->pc = 0x2ce618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
label_2ce61c:
    // 0x2ce61c: 0x12a20004  beq         $s5, $v0, . + 4 + (0x4 << 2)
label_2ce620:
    if (ctx->pc == 0x2CE620u) {
        ctx->pc = 0x2CE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE61Cu;
        // 0x2ce620: 0x32a33020  andi        $v1, $s5, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE624u;
        goto label_2ce624;
    }
    ctx->pc = 0x2CE61Cu;
    {
        const bool branch_taken_0x2ce61c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE61Cu;
        // 0x2ce620: 0x32a33020  andi        $v1, $s5, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce61c) {
            ctx->pc = 0x2CE630u;
            goto label_2ce630;
        }
    }
    ctx->pc = 0x2CE624u;
label_2ce624:
    // 0x2ce624: 0x24023020  addiu       $v0, $zero, 0x3020
    ctx->pc = 0x2ce624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12320));
label_2ce628:
    // 0x2ce628: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_2ce62c:
    if (ctx->pc == 0x2CE62Cu) {
        ctx->pc = 0x2CE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE628u;
        // 0x2ce62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE630u;
        goto label_2ce630;
    }
    ctx->pc = 0x2CE628u;
    {
        const bool branch_taken_0x2ce628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce628) {
            ctx->pc = 0x2CE62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE628u;
            // 0x2ce62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE638u;
            goto label_2ce638;
        }
    }
    ctx->pc = 0x2CE630u;
label_2ce630:
    // 0x2ce630: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ce630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2ce634:
    // 0x2ce634: 0x24428549  addiu       $v0, $v0, -0x7AB7
    ctx->pc = 0x2ce634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935881));
label_2ce638:
    // 0x2ce638: 0x10000065  b           . + 4 + (0x65 << 2)
label_2ce63c:
    if (ctx->pc == 0x2CE63Cu) {
        ctx->pc = 0x2CE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE638u;
        // 0x2ce63c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE640u;
        goto label_2ce640;
    }
    ctx->pc = 0x2CE638u;
    {
        const bool branch_taken_0x2ce638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE638u;
        // 0x2ce63c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce638) {
            ctx->pc = 0x2CE7D0u;
            goto label_2ce7d0;
        }
    }
    ctx->pc = 0x2CE640u;
label_2ce640:
    // 0x2ce640: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ce640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ce644:
    // 0x2ce644: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ce648:
    if (ctx->pc == 0x2CE648u) {
        ctx->pc = 0x2CE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE644u;
        // 0x2ce648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE64Cu;
        goto label_2ce64c;
    }
    ctx->pc = 0x2CE644u;
    {
        const bool branch_taken_0x2ce644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE644u;
        // 0x2ce648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce644) {
            ctx->pc = 0x2CE658u;
            goto label_2ce658;
        }
    }
    ctx->pc = 0x2CE64Cu;
label_2ce64c:
    // 0x2ce64c: 0x32a21000  andi        $v0, $s5, 0x1000
    ctx->pc = 0x2ce64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
label_2ce650:
    // 0x2ce650: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_2ce654:
    if (ctx->pc == 0x2CE654u) {
        ctx->pc = 0x2CE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE650u;
        // 0x2ce654: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE658u;
        goto label_2ce658;
    }
    ctx->pc = 0x2CE650u;
    {
        const bool branch_taken_0x2ce650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE650u;
        // 0x2ce654: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce650) {
            ctx->pc = 0x2CE7D4u;
            goto label_2ce7d4;
        }
    }
    ctx->pc = 0x2CE658u;
label_2ce658:
    // 0x2ce658: 0x32a501ff  andi        $a1, $s5, 0x1FF
    ctx->pc = 0x2ce658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)511);
label_2ce65c:
    // 0x2ce65c: 0xc0b3ab0  jal         func_2CEAC0
label_2ce660:
    if (ctx->pc == 0x2CE660u) {
        ctx->pc = 0x2CE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE65Cu;
        // 0x2ce660: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE664u;
        goto label_2ce664;
    }
    ctx->pc = 0x2CE65Cu;
    SET_GPR_U32(ctx, 31, 0x2CE664u);
    ctx->pc = 0x2CE660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE65Cu;
    // 0x2ce660: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEAC0u, 0x2CE65Cu, 0x2CE664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE664u;
label_2ce664:
    // 0x2ce664: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce668:
    // 0x2ce668: 0x56200089  bnel        $s1, $zero, . + 4 + (0x89 << 2)
label_2ce66c:
    if (ctx->pc == 0x2CE66Cu) {
        ctx->pc = 0x2CE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE668u;
        // 0x2ce66c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE670u;
        goto label_2ce670;
    }
    ctx->pc = 0x2CE668u;
    {
        const bool branch_taken_0x2ce668 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce668) {
            ctx->pc = 0x2CE66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE668u;
            // 0x2ce66c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE890u;
            goto label_2ce890;
        }
    }
    ctx->pc = 0x2CE670u;
label_2ce670:
    // 0x2ce670: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2ce670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2ce674:
    // 0x2ce674: 0x1050001b  beq         $v0, $s0, . + 4 + (0x1B << 2)
label_2ce678:
    if (ctx->pc == 0x2CE678u) {
        ctx->pc = 0x2CE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE674u;
        // 0x2ce678: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE67Cu;
        goto label_2ce67c;
    }
    ctx->pc = 0x2CE674u;
    {
        const bool branch_taken_0x2ce674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE674u;
        // 0x2ce678: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce674) {
            ctx->pc = 0x2CE6E4u;
            goto label_2ce6e4;
        }
    }
    ctx->pc = 0x2CE67Cu;
label_2ce67c:
    // 0x2ce67c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2ce67cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ce680:
    // 0x2ce680: 0x241e0103  addiu       $fp, $zero, 0x103
    ctx->pc = 0x2ce680u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2ce684:
    // 0x2ce684: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x2ce684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2ce688:
    // 0x2ce688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce68c:
    // 0x2ce68c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2ce68cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ce690:
    // 0x2ce690: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ce690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ce694:
    // 0x2ce694: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x2ce694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2ce698:
    // 0x2ce698: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2ce698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ce69c:
    // 0x2ce69c: 0xc0b38fa  jal         func_2CE3E8
label_2ce6a0:
    if (ctx->pc == 0x2CE6A0u) {
        ctx->pc = 0x2CE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE69Cu;
        // 0x2ce6a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6A4u;
        goto label_2ce6a4;
    }
    ctx->pc = 0x2CE69Cu;
    SET_GPR_U32(ctx, 31, 0x2CE6A4u);
    ctx->pc = 0x2CE6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE69Cu;
    // 0x2ce6a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3E8u;
    goto label_2ce3e8;
    ctx->pc = 0x2CE6A4u;
label_2ce6a4:
    // 0x2ce6a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce6a8:
    // 0x2ce6a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce6ac:
    // 0x2ce6ac: 0x16200077  bnez        $s1, . + 4 + (0x77 << 2)
label_2ce6b0:
    if (ctx->pc == 0x2CE6B0u) {
        ctx->pc = 0x2CE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6ACu;
        // 0x2ce6b0: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6B4u;
        goto label_2ce6b4;
    }
    ctx->pc = 0x2CE6ACu;
    {
        const bool branch_taken_0x2ce6ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6ACu;
        // 0x2ce6b0: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6ac) {
            ctx->pc = 0x2CE88Cu;
            goto label_2ce88c;
        }
    }
    ctx->pc = 0x2CE6B4u;
label_2ce6b4:
    // 0x2ce6b4: 0xc0b2748  jal         func_2C9D20
label_2ce6b8:
    if (ctx->pc == 0x2CE6B8u) {
        ctx->pc = 0x2CE6BCu;
        goto label_2ce6bc;
    }
    ctx->pc = 0x2CE6B4u;
    SET_GPR_U32(ctx, 31, 0x2CE6BCu);
    ctx->pc = 0x2C9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D20u, 0x2CE6B4u, 0x2CE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6BCu;
label_2ce6bc:
    // 0x2ce6bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ce6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ce6c0:
    // 0x2ce6c0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2ce6c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2ce6c4:
    // 0x2ce6c4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2ce6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2ce6c8:
    // 0x2ce6c8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2ce6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ce6cc:
    // 0x2ce6cc: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2ce6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2ce6d0:
    // 0x2ce6d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ce6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ce6d4:
    // 0x2ce6d4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ce6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2ce6d8:
    // 0x2ce6d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ce6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce6dc:
    // 0x2ce6dc: 0x547effea  bnel        $v1, $fp, . + 4 + (-0x16 << 2)
label_2ce6e0:
    if (ctx->pc == 0x2CE6E0u) {
        ctx->pc = 0x2CE6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6DCu;
        // 0x2ce6e0: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6E4u;
        goto label_2ce6e4;
    }
    ctx->pc = 0x2CE6DCu;
    {
        const bool branch_taken_0x2ce6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        if (branch_taken_0x2ce6dc) {
            ctx->pc = 0x2CE6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE6DCu;
            // 0x2ce6e0: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce688;
        }
    }
    ctx->pc = 0x2CE6E4u;
label_2ce6e4:
    // 0x2ce6e4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2ce6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2ce6e8:
    // 0x2ce6e8: 0x12a20004  beq         $s5, $v0, . + 4 + (0x4 << 2)
label_2ce6ec:
    if (ctx->pc == 0x2CE6ECu) {
        ctx->pc = 0x2CE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6E8u;
        // 0x2ce6ec: 0x32a33020  andi        $v1, $s5, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6F0u;
        goto label_2ce6f0;
    }
    ctx->pc = 0x2CE6E8u;
    {
        const bool branch_taken_0x2ce6e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6E8u;
        // 0x2ce6ec: 0x32a33020  andi        $v1, $s5, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6e8) {
            ctx->pc = 0x2CE6FCu;
            goto label_2ce6fc;
        }
    }
    ctx->pc = 0x2CE6F0u;
label_2ce6f0:
    // 0x2ce6f0: 0x24023020  addiu       $v0, $zero, 0x3020
    ctx->pc = 0x2ce6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12320));
label_2ce6f4:
    // 0x2ce6f4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_2ce6f8:
    if (ctx->pc == 0x2CE6F8u) {
        ctx->pc = 0x2CE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6F4u;
        // 0x2ce6f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6FCu;
        goto label_2ce6fc;
    }
    ctx->pc = 0x2CE6F4u;
    {
        const bool branch_taken_0x2ce6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce6f4) {
            ctx->pc = 0x2CE6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE6F4u;
            // 0x2ce6f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE704u;
            goto label_2ce704;
        }
    }
    ctx->pc = 0x2CE6FCu;
label_2ce6fc:
    // 0x2ce6fc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ce6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2ce700:
    // 0x2ce700: 0x24478549  addiu       $a3, $v0, -0x7AB7
    ctx->pc = 0x2ce700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935881));
label_2ce704:
    // 0x2ce704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce708:
    // 0x2ce708: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x2ce708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2ce70c:
    // 0x2ce70c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce710:
    // 0x2ce710: 0x1000ff55  b           . + 4 + (-0xAB << 2)
label_2ce714:
    if (ctx->pc == 0x2CE714u) {
        ctx->pc = 0x2CE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE710u;
        // 0x2ce714: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE718u;
        goto label_2ce718;
    }
    ctx->pc = 0x2CE710u;
    {
        const bool branch_taken_0x2ce710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE710u;
        // 0x2ce714: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce710) {
            ctx->pc = 0x2CE468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce468;
        }
    }
    ctx->pc = 0x2CE718u;
label_2ce718:
    // 0x2ce718: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ce718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ce71c:
    // 0x2ce71c: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x2ce71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2ce720:
    // 0x2ce720: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2ce720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2ce724:
    // 0x2ce724: 0x1060ff46  beqz        $v1, . + 4 + (-0xBA << 2)
label_2ce728:
    if (ctx->pc == 0x2CE728u) {
        ctx->pc = 0x2CE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE724u;
        // 0x2ce728: 0xa2a824  and         $s5, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE72Cu;
        goto label_2ce72c;
    }
    ctx->pc = 0x2CE724u;
    {
        const bool branch_taken_0x2ce724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE724u;
        // 0x2ce728: 0xa2a824  and         $s5, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce724) {
            ctx->pc = 0x2CE440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce440;
        }
    }
    ctx->pc = 0x2CE72Cu;
label_2ce72c:
    // 0x2ce72c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2ce72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2ce730:
    // 0x2ce730: 0x30b001ff  andi        $s0, $a1, 0x1FF
    ctx->pc = 0x2ce730u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
label_2ce734:
    // 0x2ce734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce738:
    // 0x2ce738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce73c:
    // 0x2ce73c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ce73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ce740:
    // 0x2ce740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce744:
    // 0x2ce744: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2ce744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2ce748:
    // 0x2ce748: 0x60f809  jalr        $v1
label_2ce74c:
    if (ctx->pc == 0x2CE74Cu) {
        ctx->pc = 0x2CE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE748u;
        // 0x2ce74c: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE750u;
        goto label_2ce750;
    }
    ctx->pc = 0x2CE748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CE750u);
        ctx->pc = 0x2CE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE748u;
        // 0x2ce74c: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE748u, 0x2CE750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE750u;
label_2ce750:
    // 0x2ce750: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce754:
    // 0x2ce754: 0x5620004a  bnel        $s1, $zero, . + 4 + (0x4A << 2)
label_2ce758:
    if (ctx->pc == 0x2CE758u) {
        ctx->pc = 0x2CE758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE754u;
        // 0x2ce758: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE75Cu;
        goto label_2ce75c;
    }
    ctx->pc = 0x2CE754u;
    {
        const bool branch_taken_0x2ce754 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce754) {
            ctx->pc = 0x2CE758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE754u;
            // 0x2ce758: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE880u;
            goto label_2ce880;
        }
    }
    ctx->pc = 0x2CE75Cu;
label_2ce75c:
    // 0x2ce75c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2ce75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ce760:
    // 0x2ce760: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ce760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2ce764:
    // 0x2ce764: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2ce764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2ce768:
    // 0x2ce768: 0x1040ff48  beqz        $v0, . + 4 + (-0xB8 << 2)
label_2ce76c:
    if (ctx->pc == 0x2CE76Cu) {
        ctx->pc = 0x2CE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE768u;
        // 0x2ce76c: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE770u;
        goto label_2ce770;
    }
    ctx->pc = 0x2CE768u;
    {
        const bool branch_taken_0x2ce768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE768u;
        // 0x2ce76c: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce768) {
            ctx->pc = 0x2CE48Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce48c;
        }
    }
    ctx->pc = 0x2CE770u;
label_2ce770:
    // 0x2ce770: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2ce770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2ce774:
    // 0x2ce774: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2ce774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2ce778:
    // 0x2ce778: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x2ce778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2ce77c:
    // 0x2ce77c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ce77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ce780:
    // 0x2ce780: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x2ce780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2ce784:
    // 0x2ce784: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ce784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2ce788:
    // 0x2ce788: 0x14850012  bne         $a0, $a1, . + 4 + (0x12 << 2)
label_2ce78c:
    if (ctx->pc == 0x2CE78Cu) {
        ctx->pc = 0x2CE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE788u;
        // 0x2ce78c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE790u;
        goto label_2ce790;
    }
    ctx->pc = 0x2CE788u;
    {
        const bool branch_taken_0x2ce788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2CE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE788u;
        // 0x2ce78c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce788) {
            ctx->pc = 0x2CE7D4u;
            goto label_2ce7d4;
        }
    }
    ctx->pc = 0x2CE790u;
label_2ce790:
    // 0x2ce790: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2ce790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2ce794:
    // 0x2ce794: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ce794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce798:
    // 0x2ce798: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2ce798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2ce79c:
    // 0x2ce79c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7a0:
    // 0x2ce7a0: 0xc0b3ab0  jal         func_2CEAC0
label_2ce7a4:
    if (ctx->pc == 0x2CE7A4u) {
        ctx->pc = 0x2CE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7A0u;
        // 0x2ce7a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7A8u;
        goto label_2ce7a8;
    }
    ctx->pc = 0x2CE7A0u;
    SET_GPR_U32(ctx, 31, 0x2CE7A8u);
    ctx->pc = 0x2CE7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE7A0u;
    // 0x2ce7a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEAC0u, 0x2CE7A0u, 0x2CE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7A8u;
label_2ce7a8:
    // 0x2ce7a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7ac:
    // 0x2ce7ac: 0x56200038  bnel        $s1, $zero, . + 4 + (0x38 << 2)
label_2ce7b0:
    if (ctx->pc == 0x2CE7B0u) {
        ctx->pc = 0x2CE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7ACu;
        // 0x2ce7b0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7B4u;
        goto label_2ce7b4;
    }
    ctx->pc = 0x2CE7ACu;
    {
        const bool branch_taken_0x2ce7ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7ac) {
            ctx->pc = 0x2CE7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE7ACu;
            // 0x2ce7b0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE890u;
            goto label_2ce890;
        }
    }
    ctx->pc = 0x2CE7B4u;
label_2ce7b4:
    // 0x2ce7b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7b8:
    // 0x2ce7b8: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x2ce7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2ce7bc:
    // 0x2ce7bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7c0:
    // 0x2ce7c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ce7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7c4:
    // 0x2ce7c4: 0x1000ff28  b           . + 4 + (-0xD8 << 2)
label_2ce7c8:
    if (ctx->pc == 0x2CE7C8u) {
        ctx->pc = 0x2CE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7C4u;
        // 0x2ce7c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7CCu;
        goto label_2ce7cc;
    }
    ctx->pc = 0x2CE7C4u;
    {
        const bool branch_taken_0x2ce7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7C4u;
        // 0x2ce7c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7c4) {
            ctx->pc = 0x2CE468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce468;
        }
    }
    ctx->pc = 0x2CE7CCu;
label_2ce7cc:
    // 0x2ce7cc: 0x0  nop
    ctx->pc = 0x2ce7ccu;
    // NOP
label_2ce7d0:
    // 0x2ce7d0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2ce7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2ce7d4:
    // 0x2ce7d4: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_2ce7d8:
    if (ctx->pc == 0x2CE7D8u) {
        ctx->pc = 0x2CE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7D4u;
        // 0x2ce7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7DCu;
        goto label_2ce7dc;
    }
    ctx->pc = 0x2CE7D4u;
    {
        const bool branch_taken_0x2ce7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7D4u;
        // 0x2ce7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7d4) {
            ctx->pc = 0x2CE8B4u;
            goto label_2ce8b4;
        }
    }
    ctx->pc = 0x2CE7DCu;
label_2ce7dc:
    // 0x2ce7dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2ce7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ce7e0:
    // 0x2ce7e0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_2ce7e4:
    if (ctx->pc == 0x2CE7E4u) {
        ctx->pc = 0x2CE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7E0u;
        // 0x2ce7e4: 0x24050103  addiu       $a1, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7E8u;
        goto label_2ce7e8;
    }
    ctx->pc = 0x2CE7E0u;
    {
        const bool branch_taken_0x2ce7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7E0u;
        // 0x2ce7e4: 0x24050103  addiu       $a1, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7e0) {
            ctx->pc = 0x2CE818u;
            goto label_2ce818;
        }
    }
    ctx->pc = 0x2CE7E8u;
label_2ce7e8:
    // 0x2ce7e8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2ce7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2ce7ec:
    // 0x2ce7ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ce7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ce7f0:
    // 0x2ce7f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ce7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ce7f4:
    // 0x2ce7f4: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x2ce7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2ce7f8:
    // 0x2ce7f8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ce7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2ce7fc:
    // 0x2ce7fc: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_2ce800:
    if (ctx->pc == 0x2CE800u) {
        ctx->pc = 0x2CE804u;
        goto label_2ce804;
    }
    ctx->pc = 0x2CE7FCu;
    {
        const bool branch_taken_0x2ce7fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ce7fc) {
            ctx->pc = 0x2CE818u;
            goto label_2ce818;
        }
    }
    ctx->pc = 0x2CE804u;
label_2ce804:
    // 0x2ce804: 0xc0b3ae8  jal         func_2CEBA0
label_2ce808:
    if (ctx->pc == 0x2CE808u) {
        ctx->pc = 0x2CE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE804u;
        // 0x2ce808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE80Cu;
        goto label_2ce80c;
    }
    ctx->pc = 0x2CE804u;
    SET_GPR_U32(ctx, 31, 0x2CE80Cu);
    ctx->pc = 0x2CE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE804u;
    // 0x2ce808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBA0u, 0x2CE804u, 0x2CE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE80Cu;
label_2ce80c:
    // 0x2ce80c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce810:
    // 0x2ce810: 0x1620001f  bnez        $s1, . + 4 + (0x1F << 2)
label_2ce814:
    if (ctx->pc == 0x2CE814u) {
        ctx->pc = 0x2CE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE810u;
        // 0x2ce814: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE818u;
        goto label_2ce818;
    }
    ctx->pc = 0x2CE810u;
    {
        const bool branch_taken_0x2ce810 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE810u;
        // 0x2ce814: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce810) {
            ctx->pc = 0x2CE890u;
            goto label_2ce890;
        }
    }
    ctx->pc = 0x2CE818u;
label_2ce818:
    // 0x2ce818: 0xc0b3afc  jal         func_2CEBF0
label_2ce81c:
    if (ctx->pc == 0x2CE81Cu) {
        ctx->pc = 0x2CE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE818u;
        // 0x2ce81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE820u;
        goto label_2ce820;
    }
    ctx->pc = 0x2CE818u;
    SET_GPR_U32(ctx, 31, 0x2CE820u);
    ctx->pc = 0x2CE81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE818u;
    // 0x2ce81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBF0u, 0x2CE818u, 0x2CE820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE820u;
label_2ce820:
    // 0x2ce820: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce824:
    // 0x2ce824: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_2ce828:
    if (ctx->pc == 0x2CE828u) {
        ctx->pc = 0x2CE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE824u;
        // 0x2ce828: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE82Cu;
        goto label_2ce82c;
    }
    ctx->pc = 0x2CE824u;
    {
        const bool branch_taken_0x2ce824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE824u;
        // 0x2ce828: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce824) {
            ctx->pc = 0x2CE8B0u;
            goto label_2ce8b0;
        }
    }
    ctx->pc = 0x2CE82Cu;
label_2ce82c:
    // 0x2ce82c: 0x10000019  b           . + 4 + (0x19 << 2)
label_2ce830:
    if (ctx->pc == 0x2CE830u) {
        ctx->pc = 0x2CE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE82Cu;
        // 0x2ce830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE834u;
        goto label_2ce834;
    }
    ctx->pc = 0x2CE82Cu;
    {
        const bool branch_taken_0x2ce82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE82Cu;
        // 0x2ce830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce82c) {
            ctx->pc = 0x2CE894u;
            goto label_2ce894;
        }
    }
    ctx->pc = 0x2CE834u;
label_2ce834:
    // 0x2ce834: 0x0  nop
    ctx->pc = 0x2ce834u;
    // NOP
label_2ce838:
    // 0x2ce838: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ce838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce83c:
    // 0x2ce83c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ce83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce840:
    // 0x2ce840: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2ce840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ce844:
    // 0x2ce844: 0x10000015  b           . + 4 + (0x15 << 2)
label_2ce848:
    if (ctx->pc == 0x2CE848u) {
        ctx->pc = 0x2CE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE844u;
        // 0x2ce848: 0x24040804  addiu       $a0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE84Cu;
        goto label_2ce84c;
    }
    ctx->pc = 0x2CE844u;
    {
        const bool branch_taken_0x2ce844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE844u;
        // 0x2ce848: 0x24040804  addiu       $a0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce844) {
            ctx->pc = 0x2CE89Cu;
            goto label_2ce89c;
        }
    }
    ctx->pc = 0x2CE84Cu;
label_2ce84c:
    // 0x2ce84c: 0x0  nop
    ctx->pc = 0x2ce84cu;
    // NOP
label_2ce850:
    // 0x2ce850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ce850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ce854:
    // 0x2ce854: 0xc0b29b4  jal         func_2CA6D0
label_2ce858:
    if (ctx->pc == 0x2CE858u) {
        ctx->pc = 0x2CE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE854u;
        // 0x2ce858: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE85Cu;
        goto label_2ce85c;
    }
    ctx->pc = 0x2CE854u;
    SET_GPR_U32(ctx, 31, 0x2CE85Cu);
    ctx->pc = 0x2CE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE854u;
    // 0x2ce858: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6D0u, 0x2CE854u, 0x2CE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE85Cu;
label_2ce85c:
    // 0x2ce85c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ce85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce860:
    // 0x2ce860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ce864:
    // 0x2ce864: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2ce864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2ce868:
    // 0x2ce868: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ce868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce86c:
    // 0x2ce86c: 0xc0b2940  jal         func_2CA500
label_2ce870:
    if (ctx->pc == 0x2CE870u) {
        ctx->pc = 0x2CE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE86Cu;
        // 0x2ce870: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE874u;
        goto label_2ce874;
    }
    ctx->pc = 0x2CE86Cu;
    SET_GPR_U32(ctx, 31, 0x2CE874u);
    ctx->pc = 0x2CE870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE86Cu;
    // 0x2ce870: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA500u, 0x2CE86Cu, 0x2CE874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE874u;
label_2ce874:
    // 0x2ce874: 0x10000010  b           . + 4 + (0x10 << 2)
label_2ce878:
    if (ctx->pc == 0x2CE878u) {
        ctx->pc = 0x2CE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE874u;
        // 0x2ce878: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE87Cu;
        goto label_2ce87c;
    }
    ctx->pc = 0x2CE874u;
    {
        const bool branch_taken_0x2ce874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE874u;
        // 0x2ce878: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce874) {
            ctx->pc = 0x2CE8B8u;
            goto label_2ce8b8;
        }
    }
    ctx->pc = 0x2CE87Cu;
label_2ce87c:
    // 0x2ce87c: 0x0  nop
    ctx->pc = 0x2ce87cu;
    // NOP
label_2ce880:
    // 0x2ce880: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ce880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ce884:
    // 0x2ce884: 0xc0b29b4  jal         func_2CA6D0
label_2ce888:
    if (ctx->pc == 0x2CE888u) {
        ctx->pc = 0x2CE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE884u;
        // 0x2ce888: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE88Cu;
        goto label_2ce88c;
    }
    ctx->pc = 0x2CE884u;
    SET_GPR_U32(ctx, 31, 0x2CE88Cu);
    ctx->pc = 0x2CE888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE884u;
    // 0x2ce888: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6D0u, 0x2CE884u, 0x2CE88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE88Cu;
label_2ce88c:
    // 0x2ce88c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ce88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce890:
    // 0x2ce890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ce894:
    // 0x2ce894: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ce894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce898:
    // 0x2ce898: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2ce898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ce89c:
    // 0x2ce89c: 0xc0b2940  jal         func_2CA500
label_2ce8a0:
    if (ctx->pc == 0x2CE8A0u) {
        ctx->pc = 0x2CE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE89Cu;
        // 0x2ce8a0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE8A4u;
        goto label_2ce8a4;
    }
    ctx->pc = 0x2CE89Cu;
    SET_GPR_U32(ctx, 31, 0x2CE8A4u);
    ctx->pc = 0x2CE8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE89Cu;
    // 0x2ce8a0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA500u, 0x2CE89Cu, 0x2CE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE8A4u;
label_2ce8a4:
    // 0x2ce8a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ce8a8:
    if (ctx->pc == 0x2CE8A8u) {
        ctx->pc = 0x2CE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8A4u;
        // 0x2ce8a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE8ACu;
        goto label_2ce8ac;
    }
    ctx->pc = 0x2CE8A4u;
    {
        const bool branch_taken_0x2ce8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8A4u;
        // 0x2ce8a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8a4) {
            ctx->pc = 0x2CE8B8u;
            goto label_2ce8b8;
        }
    }
    ctx->pc = 0x2CE8ACu;
label_2ce8ac:
    // 0x2ce8ac: 0x0  nop
    ctx->pc = 0x2ce8acu;
    // NOP
label_2ce8b0:
    // 0x2ce8b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ce8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce8b4:
    // 0x2ce8b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ce8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ce8b8:
    // 0x2ce8b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ce8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ce8bc:
    // 0x2ce8bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ce8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce8c0:
    // 0x2ce8c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ce8c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ce8c4:
    // 0x2ce8c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ce8c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ce8c8:
    // 0x2ce8c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2ce8c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ce8cc:
    // 0x2ce8cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2ce8ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ce8d0:
    // 0x2ce8d0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2ce8d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2ce8d4:
    // 0x2ce8d4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2ce8d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ce8d8:
    // 0x2ce8d8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2ce8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2ce8dc:
    // 0x2ce8dc: 0x3e00008  jr          $ra
label_2ce8e0:
    if (ctx->pc == 0x2CE8E0u) {
        ctx->pc = 0x2CE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8DCu;
        // 0x2ce8e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE8E4u;
        goto label_2ce8e4;
    }
    ctx->pc = 0x2CE8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8DCu;
        // 0x2ce8e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE8E4u;
label_2ce8e4:
    // 0x2ce8e4: 0x0  nop
    ctx->pc = 0x2ce8e4u;
    // NOP
    if (ctx->pc == 0x2ce8e4u) { ctx->pc = 0x2ce8e8u; }
}
