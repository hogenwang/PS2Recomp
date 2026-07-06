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

// Function: sub_0022B5E8
// Address: 0x22b5e8 - 0x22bb80
void sub_0022B5E8_0x22b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B5E8_0x22b5e8");
#endif

    switch (ctx->pc) {
        case 0x22b5e8u: goto label_22b5e8;
        case 0x22b5ecu: goto label_22b5ec;
        case 0x22b5f0u: goto label_22b5f0;
        case 0x22b5f4u: goto label_22b5f4;
        case 0x22b5f8u: goto label_22b5f8;
        case 0x22b5fcu: goto label_22b5fc;
        case 0x22b600u: goto label_22b600;
        case 0x22b604u: goto label_22b604;
        case 0x22b608u: goto label_22b608;
        case 0x22b60cu: goto label_22b60c;
        case 0x22b610u: goto label_22b610;
        case 0x22b614u: goto label_22b614;
        case 0x22b618u: goto label_22b618;
        case 0x22b61cu: goto label_22b61c;
        case 0x22b620u: goto label_22b620;
        case 0x22b624u: goto label_22b624;
        case 0x22b628u: goto label_22b628;
        case 0x22b62cu: goto label_22b62c;
        case 0x22b630u: goto label_22b630;
        case 0x22b634u: goto label_22b634;
        case 0x22b638u: goto label_22b638;
        case 0x22b63cu: goto label_22b63c;
        case 0x22b640u: goto label_22b640;
        case 0x22b644u: goto label_22b644;
        case 0x22b648u: goto label_22b648;
        case 0x22b64cu: goto label_22b64c;
        case 0x22b650u: goto label_22b650;
        case 0x22b654u: goto label_22b654;
        case 0x22b658u: goto label_22b658;
        case 0x22b65cu: goto label_22b65c;
        case 0x22b660u: goto label_22b660;
        case 0x22b664u: goto label_22b664;
        case 0x22b668u: goto label_22b668;
        case 0x22b66cu: goto label_22b66c;
        case 0x22b670u: goto label_22b670;
        case 0x22b674u: goto label_22b674;
        case 0x22b678u: goto label_22b678;
        case 0x22b67cu: goto label_22b67c;
        case 0x22b680u: goto label_22b680;
        case 0x22b684u: goto label_22b684;
        case 0x22b688u: goto label_22b688;
        case 0x22b68cu: goto label_22b68c;
        case 0x22b690u: goto label_22b690;
        case 0x22b694u: goto label_22b694;
        case 0x22b698u: goto label_22b698;
        case 0x22b69cu: goto label_22b69c;
        case 0x22b6a0u: goto label_22b6a0;
        case 0x22b6a4u: goto label_22b6a4;
        case 0x22b6a8u: goto label_22b6a8;
        case 0x22b6acu: goto label_22b6ac;
        case 0x22b6b0u: goto label_22b6b0;
        case 0x22b6b4u: goto label_22b6b4;
        case 0x22b6b8u: goto label_22b6b8;
        case 0x22b6bcu: goto label_22b6bc;
        case 0x22b6c0u: goto label_22b6c0;
        case 0x22b6c4u: goto label_22b6c4;
        case 0x22b6c8u: goto label_22b6c8;
        case 0x22b6ccu: goto label_22b6cc;
        case 0x22b6d0u: goto label_22b6d0;
        case 0x22b6d4u: goto label_22b6d4;
        case 0x22b6d8u: goto label_22b6d8;
        case 0x22b6dcu: goto label_22b6dc;
        case 0x22b6e0u: goto label_22b6e0;
        case 0x22b6e4u: goto label_22b6e4;
        case 0x22b6e8u: goto label_22b6e8;
        case 0x22b6ecu: goto label_22b6ec;
        case 0x22b6f0u: goto label_22b6f0;
        case 0x22b6f4u: goto label_22b6f4;
        case 0x22b6f8u: goto label_22b6f8;
        case 0x22b6fcu: goto label_22b6fc;
        case 0x22b700u: goto label_22b700;
        case 0x22b704u: goto label_22b704;
        case 0x22b708u: goto label_22b708;
        case 0x22b70cu: goto label_22b70c;
        case 0x22b710u: goto label_22b710;
        case 0x22b714u: goto label_22b714;
        case 0x22b718u: goto label_22b718;
        case 0x22b71cu: goto label_22b71c;
        case 0x22b720u: goto label_22b720;
        case 0x22b724u: goto label_22b724;
        case 0x22b728u: goto label_22b728;
        case 0x22b72cu: goto label_22b72c;
        case 0x22b730u: goto label_22b730;
        case 0x22b734u: goto label_22b734;
        case 0x22b738u: goto label_22b738;
        case 0x22b73cu: goto label_22b73c;
        case 0x22b740u: goto label_22b740;
        case 0x22b744u: goto label_22b744;
        case 0x22b748u: goto label_22b748;
        case 0x22b74cu: goto label_22b74c;
        case 0x22b750u: goto label_22b750;
        case 0x22b754u: goto label_22b754;
        case 0x22b758u: goto label_22b758;
        case 0x22b75cu: goto label_22b75c;
        case 0x22b760u: goto label_22b760;
        case 0x22b764u: goto label_22b764;
        case 0x22b768u: goto label_22b768;
        case 0x22b76cu: goto label_22b76c;
        case 0x22b770u: goto label_22b770;
        case 0x22b774u: goto label_22b774;
        case 0x22b778u: goto label_22b778;
        case 0x22b77cu: goto label_22b77c;
        case 0x22b780u: goto label_22b780;
        case 0x22b784u: goto label_22b784;
        case 0x22b788u: goto label_22b788;
        case 0x22b78cu: goto label_22b78c;
        case 0x22b790u: goto label_22b790;
        case 0x22b794u: goto label_22b794;
        case 0x22b798u: goto label_22b798;
        case 0x22b79cu: goto label_22b79c;
        case 0x22b7a0u: goto label_22b7a0;
        case 0x22b7a4u: goto label_22b7a4;
        case 0x22b7a8u: goto label_22b7a8;
        case 0x22b7acu: goto label_22b7ac;
        case 0x22b7b0u: goto label_22b7b0;
        case 0x22b7b4u: goto label_22b7b4;
        case 0x22b7b8u: goto label_22b7b8;
        case 0x22b7bcu: goto label_22b7bc;
        case 0x22b7c0u: goto label_22b7c0;
        case 0x22b7c4u: goto label_22b7c4;
        case 0x22b7c8u: goto label_22b7c8;
        case 0x22b7ccu: goto label_22b7cc;
        case 0x22b7d0u: goto label_22b7d0;
        case 0x22b7d4u: goto label_22b7d4;
        case 0x22b7d8u: goto label_22b7d8;
        case 0x22b7dcu: goto label_22b7dc;
        case 0x22b7e0u: goto label_22b7e0;
        case 0x22b7e4u: goto label_22b7e4;
        case 0x22b7e8u: goto label_22b7e8;
        case 0x22b7ecu: goto label_22b7ec;
        case 0x22b7f0u: goto label_22b7f0;
        case 0x22b7f4u: goto label_22b7f4;
        case 0x22b7f8u: goto label_22b7f8;
        case 0x22b7fcu: goto label_22b7fc;
        case 0x22b800u: goto label_22b800;
        case 0x22b804u: goto label_22b804;
        case 0x22b808u: goto label_22b808;
        case 0x22b80cu: goto label_22b80c;
        case 0x22b810u: goto label_22b810;
        case 0x22b814u: goto label_22b814;
        case 0x22b818u: goto label_22b818;
        case 0x22b81cu: goto label_22b81c;
        case 0x22b820u: goto label_22b820;
        case 0x22b824u: goto label_22b824;
        case 0x22b828u: goto label_22b828;
        case 0x22b82cu: goto label_22b82c;
        case 0x22b830u: goto label_22b830;
        case 0x22b834u: goto label_22b834;
        case 0x22b838u: goto label_22b838;
        case 0x22b83cu: goto label_22b83c;
        case 0x22b840u: goto label_22b840;
        case 0x22b844u: goto label_22b844;
        case 0x22b848u: goto label_22b848;
        case 0x22b84cu: goto label_22b84c;
        case 0x22b850u: goto label_22b850;
        case 0x22b854u: goto label_22b854;
        case 0x22b858u: goto label_22b858;
        case 0x22b85cu: goto label_22b85c;
        case 0x22b860u: goto label_22b860;
        case 0x22b864u: goto label_22b864;
        case 0x22b868u: goto label_22b868;
        case 0x22b86cu: goto label_22b86c;
        case 0x22b870u: goto label_22b870;
        case 0x22b874u: goto label_22b874;
        case 0x22b878u: goto label_22b878;
        case 0x22b87cu: goto label_22b87c;
        case 0x22b880u: goto label_22b880;
        case 0x22b884u: goto label_22b884;
        case 0x22b888u: goto label_22b888;
        case 0x22b88cu: goto label_22b88c;
        case 0x22b890u: goto label_22b890;
        case 0x22b894u: goto label_22b894;
        case 0x22b898u: goto label_22b898;
        case 0x22b89cu: goto label_22b89c;
        case 0x22b8a0u: goto label_22b8a0;
        case 0x22b8a4u: goto label_22b8a4;
        case 0x22b8a8u: goto label_22b8a8;
        case 0x22b8acu: goto label_22b8ac;
        case 0x22b8b0u: goto label_22b8b0;
        case 0x22b8b4u: goto label_22b8b4;
        case 0x22b8b8u: goto label_22b8b8;
        case 0x22b8bcu: goto label_22b8bc;
        case 0x22b8c0u: goto label_22b8c0;
        case 0x22b8c4u: goto label_22b8c4;
        case 0x22b8c8u: goto label_22b8c8;
        case 0x22b8ccu: goto label_22b8cc;
        case 0x22b8d0u: goto label_22b8d0;
        case 0x22b8d4u: goto label_22b8d4;
        case 0x22b8d8u: goto label_22b8d8;
        case 0x22b8dcu: goto label_22b8dc;
        case 0x22b8e0u: goto label_22b8e0;
        case 0x22b8e4u: goto label_22b8e4;
        case 0x22b8e8u: goto label_22b8e8;
        case 0x22b8ecu: goto label_22b8ec;
        case 0x22b8f0u: goto label_22b8f0;
        case 0x22b8f4u: goto label_22b8f4;
        case 0x22b8f8u: goto label_22b8f8;
        case 0x22b8fcu: goto label_22b8fc;
        case 0x22b900u: goto label_22b900;
        case 0x22b904u: goto label_22b904;
        case 0x22b908u: goto label_22b908;
        case 0x22b90cu: goto label_22b90c;
        case 0x22b910u: goto label_22b910;
        case 0x22b914u: goto label_22b914;
        case 0x22b918u: goto label_22b918;
        case 0x22b91cu: goto label_22b91c;
        case 0x22b920u: goto label_22b920;
        case 0x22b924u: goto label_22b924;
        case 0x22b928u: goto label_22b928;
        case 0x22b92cu: goto label_22b92c;
        case 0x22b930u: goto label_22b930;
        case 0x22b934u: goto label_22b934;
        case 0x22b938u: goto label_22b938;
        case 0x22b93cu: goto label_22b93c;
        case 0x22b940u: goto label_22b940;
        case 0x22b944u: goto label_22b944;
        case 0x22b948u: goto label_22b948;
        case 0x22b94cu: goto label_22b94c;
        case 0x22b950u: goto label_22b950;
        case 0x22b954u: goto label_22b954;
        case 0x22b958u: goto label_22b958;
        case 0x22b95cu: goto label_22b95c;
        case 0x22b960u: goto label_22b960;
        case 0x22b964u: goto label_22b964;
        case 0x22b968u: goto label_22b968;
        case 0x22b96cu: goto label_22b96c;
        case 0x22b970u: goto label_22b970;
        case 0x22b974u: goto label_22b974;
        case 0x22b978u: goto label_22b978;
        case 0x22b97cu: goto label_22b97c;
        case 0x22b980u: goto label_22b980;
        case 0x22b984u: goto label_22b984;
        case 0x22b988u: goto label_22b988;
        case 0x22b98cu: goto label_22b98c;
        case 0x22b990u: goto label_22b990;
        case 0x22b994u: goto label_22b994;
        case 0x22b998u: goto label_22b998;
        case 0x22b99cu: goto label_22b99c;
        case 0x22b9a0u: goto label_22b9a0;
        case 0x22b9a4u: goto label_22b9a4;
        case 0x22b9a8u: goto label_22b9a8;
        case 0x22b9acu: goto label_22b9ac;
        case 0x22b9b0u: goto label_22b9b0;
        case 0x22b9b4u: goto label_22b9b4;
        case 0x22b9b8u: goto label_22b9b8;
        case 0x22b9bcu: goto label_22b9bc;
        case 0x22b9c0u: goto label_22b9c0;
        case 0x22b9c4u: goto label_22b9c4;
        case 0x22b9c8u: goto label_22b9c8;
        case 0x22b9ccu: goto label_22b9cc;
        case 0x22b9d0u: goto label_22b9d0;
        case 0x22b9d4u: goto label_22b9d4;
        case 0x22b9d8u: goto label_22b9d8;
        case 0x22b9dcu: goto label_22b9dc;
        case 0x22b9e0u: goto label_22b9e0;
        case 0x22b9e4u: goto label_22b9e4;
        case 0x22b9e8u: goto label_22b9e8;
        case 0x22b9ecu: goto label_22b9ec;
        case 0x22b9f0u: goto label_22b9f0;
        case 0x22b9f4u: goto label_22b9f4;
        case 0x22b9f8u: goto label_22b9f8;
        case 0x22b9fcu: goto label_22b9fc;
        case 0x22ba00u: goto label_22ba00;
        case 0x22ba04u: goto label_22ba04;
        case 0x22ba08u: goto label_22ba08;
        case 0x22ba0cu: goto label_22ba0c;
        case 0x22ba10u: goto label_22ba10;
        case 0x22ba14u: goto label_22ba14;
        case 0x22ba18u: goto label_22ba18;
        case 0x22ba1cu: goto label_22ba1c;
        case 0x22ba20u: goto label_22ba20;
        case 0x22ba24u: goto label_22ba24;
        case 0x22ba28u: goto label_22ba28;
        case 0x22ba2cu: goto label_22ba2c;
        case 0x22ba30u: goto label_22ba30;
        case 0x22ba34u: goto label_22ba34;
        case 0x22ba38u: goto label_22ba38;
        case 0x22ba3cu: goto label_22ba3c;
        case 0x22ba40u: goto label_22ba40;
        case 0x22ba44u: goto label_22ba44;
        case 0x22ba48u: goto label_22ba48;
        case 0x22ba4cu: goto label_22ba4c;
        case 0x22ba50u: goto label_22ba50;
        case 0x22ba54u: goto label_22ba54;
        case 0x22ba58u: goto label_22ba58;
        case 0x22ba5cu: goto label_22ba5c;
        case 0x22ba60u: goto label_22ba60;
        case 0x22ba64u: goto label_22ba64;
        case 0x22ba68u: goto label_22ba68;
        case 0x22ba6cu: goto label_22ba6c;
        case 0x22ba70u: goto label_22ba70;
        case 0x22ba74u: goto label_22ba74;
        case 0x22ba78u: goto label_22ba78;
        case 0x22ba7cu: goto label_22ba7c;
        case 0x22ba80u: goto label_22ba80;
        case 0x22ba84u: goto label_22ba84;
        case 0x22ba88u: goto label_22ba88;
        case 0x22ba8cu: goto label_22ba8c;
        case 0x22ba90u: goto label_22ba90;
        case 0x22ba94u: goto label_22ba94;
        case 0x22ba98u: goto label_22ba98;
        case 0x22ba9cu: goto label_22ba9c;
        case 0x22baa0u: goto label_22baa0;
        case 0x22baa4u: goto label_22baa4;
        case 0x22baa8u: goto label_22baa8;
        case 0x22baacu: goto label_22baac;
        case 0x22bab0u: goto label_22bab0;
        case 0x22bab4u: goto label_22bab4;
        case 0x22bab8u: goto label_22bab8;
        case 0x22babcu: goto label_22babc;
        case 0x22bac0u: goto label_22bac0;
        case 0x22bac4u: goto label_22bac4;
        case 0x22bac8u: goto label_22bac8;
        case 0x22baccu: goto label_22bacc;
        case 0x22bad0u: goto label_22bad0;
        case 0x22bad4u: goto label_22bad4;
        case 0x22bad8u: goto label_22bad8;
        case 0x22badcu: goto label_22badc;
        case 0x22bae0u: goto label_22bae0;
        case 0x22bae4u: goto label_22bae4;
        case 0x22bae8u: goto label_22bae8;
        case 0x22baecu: goto label_22baec;
        case 0x22baf0u: goto label_22baf0;
        case 0x22baf4u: goto label_22baf4;
        case 0x22baf8u: goto label_22baf8;
        case 0x22bafcu: goto label_22bafc;
        case 0x22bb00u: goto label_22bb00;
        case 0x22bb04u: goto label_22bb04;
        case 0x22bb08u: goto label_22bb08;
        case 0x22bb0cu: goto label_22bb0c;
        case 0x22bb10u: goto label_22bb10;
        case 0x22bb14u: goto label_22bb14;
        case 0x22bb18u: goto label_22bb18;
        case 0x22bb1cu: goto label_22bb1c;
        case 0x22bb20u: goto label_22bb20;
        case 0x22bb24u: goto label_22bb24;
        case 0x22bb28u: goto label_22bb28;
        case 0x22bb2cu: goto label_22bb2c;
        case 0x22bb30u: goto label_22bb30;
        case 0x22bb34u: goto label_22bb34;
        case 0x22bb38u: goto label_22bb38;
        case 0x22bb3cu: goto label_22bb3c;
        case 0x22bb40u: goto label_22bb40;
        case 0x22bb44u: goto label_22bb44;
        case 0x22bb48u: goto label_22bb48;
        case 0x22bb4cu: goto label_22bb4c;
        case 0x22bb50u: goto label_22bb50;
        case 0x22bb54u: goto label_22bb54;
        case 0x22bb58u: goto label_22bb58;
        case 0x22bb5cu: goto label_22bb5c;
        case 0x22bb60u: goto label_22bb60;
        case 0x22bb64u: goto label_22bb64;
        case 0x22bb68u: goto label_22bb68;
        case 0x22bb6cu: goto label_22bb6c;
        case 0x22bb70u: goto label_22bb70;
        case 0x22bb74u: goto label_22bb74;
        case 0x22bb78u: goto label_22bb78;
        case 0x22bb7cu: goto label_22bb7c;
        default: break;
    }

    ctx->pc = 0x22b5e8u;

label_22b5e8:
    // 0x22b5e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22b5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22b5ec:
    // 0x22b5ec: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x22b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_22b5f0:
    // 0x22b5f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22b5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_22b5f4:
    // 0x22b5f4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x22b5f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b5f8:
    // 0x22b5f8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x22b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_22b5fc:
    // 0x22b5fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22b5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b600:
    // 0x22b600: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_22b604:
    // 0x22b604: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x22b604u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22b608:
    // 0x22b608: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22b60c:
    // 0x22b60c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x22b60cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_22b610:
    // 0x22b610: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_22b614:
    // 0x22b614: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x22b614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22b618:
    // 0x22b618: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_22b61c:
    // 0x22b61c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22b620:
    // 0x22b620: 0x10000002  b           . + 4 + (0x2 << 2)
label_22b624:
    if (ctx->pc == 0x22B624u) {
        ctx->pc = 0x22B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B620u;
        // 0x22b624: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B628u;
        goto label_22b628;
    }
    ctx->pc = 0x22B620u;
    {
        const bool branch_taken_0x22b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B620u;
        // 0x22b624: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b620) {
            ctx->pc = 0x22B62Cu;
            goto label_22b62c;
        }
    }
    ctx->pc = 0x22B628u;
label_22b628:
    // 0x22b628: 0x283a023  subu        $s4, $s4, $v1
    ctx->pc = 0x22b628u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_22b62c:
    // 0x22b62c: 0x12400096  beqz        $s2, . + 4 + (0x96 << 2)
label_22b630:
    if (ctx->pc == 0x22B630u) {
        ctx->pc = 0x22B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B62Cu;
        // 0x22b630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B634u;
        goto label_22b634;
    }
    ctx->pc = 0x22B62Cu;
    {
        const bool branch_taken_0x22b62c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B62Cu;
        // 0x22b630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b62c) {
            ctx->pc = 0x22B888u;
            goto label_22b888;
        }
    }
    ctx->pc = 0x22B634u;
label_22b634:
    // 0x22b634: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22b634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22b638:
    // 0x22b638: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x22b638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_22b63c:
    // 0x22b63c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_22b640:
    if (ctx->pc == 0x22B640u) {
        ctx->pc = 0x22B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B63Cu;
        // 0x22b640: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B644u;
        goto label_22b644;
    }
    ctx->pc = 0x22B63Cu;
    {
        const bool branch_taken_0x22b63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b63c) {
            ctx->pc = 0x22B640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B63Cu;
            // 0x22b640: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b628;
        }
    }
    ctx->pc = 0x22B644u;
label_22b644:
    // 0x22b644: 0x5640000c  bnel        $s2, $zero, . + 4 + (0xC << 2)
label_22b648:
    if (ctx->pc == 0x22B648u) {
        ctx->pc = 0x22B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B644u;
        // 0x22b648: 0x96620012  lhu         $v0, 0x12($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B64Cu;
        goto label_22b64c;
    }
    ctx->pc = 0x22B644u;
    {
        const bool branch_taken_0x22b644 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b644) {
            ctx->pc = 0x22B648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B644u;
            // 0x22b648: 0x96620012  lhu         $v0, 0x12($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B678u;
            goto label_22b678;
        }
    }
    ctx->pc = 0x22B64Cu;
label_22b64c:
    // 0x22b64c: 0x1000008e  b           . + 4 + (0x8E << 2)
label_22b650:
    if (ctx->pc == 0x22B650u) {
        ctx->pc = 0x22B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B64Cu;
        // 0x22b650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B654u;
        goto label_22b654;
    }
    ctx->pc = 0x22B64Cu;
    {
        const bool branch_taken_0x22b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B64Cu;
        // 0x22b650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b64c) {
            ctx->pc = 0x22B888u;
            goto label_22b888;
        }
    }
    ctx->pc = 0x22B654u;
label_22b654:
    // 0x22b654: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x22b654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_22b658:
    // 0x22b658: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22b658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b65c:
    // 0x22b65c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x22b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_22b660:
    // 0x22b660: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x22b660u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_22b664:
    // 0x22b664: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x22b664u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
label_22b668:
    // 0x22b668: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22b668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22b66c:
    // 0x22b66c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_22b670:
    // 0x22b670: 0x10000013  b           . + 4 + (0x13 << 2)
label_22b674:
    if (ctx->pc == 0x22B674u) {
        ctx->pc = 0x22B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B670u;
        // 0x22b674: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B678u;
        goto label_22b678;
    }
    ctx->pc = 0x22B670u;
    {
        const bool branch_taken_0x22b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B670u;
        // 0x22b674: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b670) {
            ctx->pc = 0x22B6C0u;
            goto label_22b6c0;
        }
    }
    ctx->pc = 0x22B678u;
label_22b678:
    // 0x22b678: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_22b67c:
    // 0x22b67c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_22b680:
    if (ctx->pc == 0x22B680u) {
        ctx->pc = 0x22B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B67Cu;
        // 0x22b680: 0x74a823  subu        $s5, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B684u;
        goto label_22b684;
    }
    ctx->pc = 0x22B67Cu;
    {
        const bool branch_taken_0x22b67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B67Cu;
        // 0x22b680: 0x74a823  subu        $s5, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b67c) {
            ctx->pc = 0x22B738u;
            goto label_22b738;
        }
    }
    ctx->pc = 0x22B684u;
label_22b684:
    // 0x22b684: 0xc08c682  jal         func_231A08
label_22b688:
    if (ctx->pc == 0x22B688u) {
        ctx->pc = 0x22B68Cu;
        goto label_22b68c;
    }
    ctx->pc = 0x22B684u;
    SET_GPR_U32(ctx, 31, 0x22B68Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22B684u, 0x22B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B68Cu;
label_22b68c:
    // 0x22b68c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b690:
    // 0x22b690: 0xc098552  jal         func_261548
label_22b694:
    if (ctx->pc == 0x22B694u) {
        ctx->pc = 0x22B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B690u;
        // 0x22b694: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B698u;
        goto label_22b698;
    }
    ctx->pc = 0x22B690u;
    SET_GPR_U32(ctx, 31, 0x22B698u);
    ctx->pc = 0x22B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B690u;
    // 0x22b694: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22B690u, 0x22B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B698u;
label_22b698:
    // 0x22b698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b69c:
    // 0x22b69c: 0xc08c698  jal         func_231A60
label_22b6a0:
    if (ctx->pc == 0x22B6A0u) {
        ctx->pc = 0x22B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B69Cu;
        // 0x22b6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6A4u;
        goto label_22b6a4;
    }
    ctx->pc = 0x22B69Cu;
    SET_GPR_U32(ctx, 31, 0x22B6A4u);
    ctx->pc = 0x22B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B69Cu;
    // 0x22b6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22B69Cu, 0x22B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6A4u;
label_22b6a4:
    // 0x22b6a4: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
label_22b6a8:
    if (ctx->pc == 0x22B6A8u) {
        ctx->pc = 0x22B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6A4u;
        // 0x22b6a8: 0x96620010  lhu         $v0, 0x10($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6ACu;
        goto label_22b6ac;
    }
    ctx->pc = 0x22B6A4u;
    {
        const bool branch_taken_0x22b6a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b6a4) {
            ctx->pc = 0x22B6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B6A4u;
            // 0x22b6a8: 0x96620010  lhu         $v0, 0x10($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b654;
        }
    }
    ctx->pc = 0x22B6ACu;
label_22b6ac:
    // 0x22b6ac: 0x86650010  lh          $a1, 0x10($s3)
    ctx->pc = 0x22b6acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
label_22b6b0:
    // 0x22b6b0: 0xc08a8cc  jal         func_22A330
label_22b6b4:
    if (ctx->pc == 0x22B6B4u) {
        ctx->pc = 0x22B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6B0u;
        // 0x22b6b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6B8u;
        goto label_22b6b8;
    }
    ctx->pc = 0x22B6B0u;
    SET_GPR_U32(ctx, 31, 0x22B6B8u);
    ctx->pc = 0x22B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6B0u;
    // 0x22b6b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x22B6B0u, 0x22B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6B8u;
label_22b6b8:
    // 0x22b6b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b6bc:
    // 0x22b6bc: 0x0  nop
    ctx->pc = 0x22b6bcu;
    // NOP
label_22b6c0:
    // 0x22b6c0: 0x12200071  beqz        $s1, . + 4 + (0x71 << 2)
label_22b6c4:
    if (ctx->pc == 0x22B6C4u) {
        ctx->pc = 0x22B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6C0u;
        // 0x22b6c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6C8u;
        goto label_22b6c8;
    }
    ctx->pc = 0x22B6C0u;
    {
        const bool branch_taken_0x22b6c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6C0u;
        // 0x22b6c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6c0) {
            ctx->pc = 0x22B888u;
            goto label_22b888;
        }
    }
    ctx->pc = 0x22B6C8u;
label_22b6c8:
    // 0x22b6c8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x22b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_22b6cc:
    // 0x22b6cc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x22b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_22b6d0:
    // 0x22b6d0: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x22b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_22b6d4:
    // 0x22b6d4: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x22b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_22b6d8:
    // 0x22b6d8: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x22b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_22b6dc:
    // 0x22b6dc: 0x8e700018  lw          $s0, 0x18($s3)
    ctx->pc = 0x22b6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_22b6e0:
    // 0x22b6e0: 0xae770018  sw          $s7, 0x18($s3)
    ctx->pc = 0x22b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 23));
label_22b6e4:
    // 0x22b6e4: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22b6e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_22b6e8:
    // 0x22b6e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22b6ec:
    // 0x22b6ec: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_22b6f0:
    if (ctx->pc == 0x22B6F0u) {
        ctx->pc = 0x22B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6ECu;
        // 0x22b6f0: 0x2ea200e1  sltiu       $v0, $s5, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6F4u;
        goto label_22b6f4;
    }
    ctx->pc = 0x22B6ECu;
    {
        const bool branch_taken_0x22b6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6ECu;
        // 0x22b6f0: 0x2ea200e1  sltiu       $v0, $s5, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6ec) {
            ctx->pc = 0x22B7DCu;
            goto label_22b7dc;
        }
    }
    ctx->pc = 0x22B6F4u;
label_22b6f4:
    // 0x22b6f4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_22b6f8:
    if (ctx->pc == 0x22B6F8u) {
        ctx->pc = 0x22B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6F4u;
        // 0x22b6f8: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6FCu;
        goto label_22b6fc;
    }
    ctx->pc = 0x22B6F4u;
    {
        const bool branch_taken_0x22b6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6F4u;
        // 0x22b6f8: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6f4) {
            ctx->pc = 0x22B7B0u;
            goto label_22b7b0;
        }
    }
    ctx->pc = 0x22B6FCu;
label_22b6fc:
    // 0x22b6fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x22b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22b700:
    // 0x22b700: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x22b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_22b704:
    // 0x22b704: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22b704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_22b708:
    // 0x22b708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22b708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b70c:
    // 0x22b70c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22b70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22b710:
    // 0x22b710: 0xc08ad7a  jal         func_22B5E8
label_22b714:
    if (ctx->pc == 0x22B714u) {
        ctx->pc = 0x22B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B710u;
        // 0x22b714: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B718u;
        goto label_22b718;
    }
    ctx->pc = 0x22B710u;
    SET_GPR_U32(ctx, 31, 0x22B718u);
    ctx->pc = 0x22B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B710u;
    // 0x22b714: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5E8u;
    goto label_22b5e8;
    ctx->pc = 0x22B718u;
label_22b718:
    // 0x22b718: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_22b71c:
    if (ctx->pc == 0x22B71Cu) {
        ctx->pc = 0x22B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B718u;
        // 0x22b71c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B720u;
        goto label_22b720;
    }
    ctx->pc = 0x22B718u;
    {
        const bool branch_taken_0x22b718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B718u;
        // 0x22b71c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b718) {
            ctx->pc = 0x22B748u;
            goto label_22b748;
        }
    }
    ctx->pc = 0x22B720u;
label_22b720:
    // 0x22b720: 0xc08a996  jal         func_22A658
label_22b724:
    if (ctx->pc == 0x22B724u) {
        ctx->pc = 0x22B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B720u;
        // 0x22b724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B728u;
        goto label_22b728;
    }
    ctx->pc = 0x22B720u;
    SET_GPR_U32(ctx, 31, 0x22B728u);
    ctx->pc = 0x22B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B720u;
    // 0x22b724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x22B720u, 0x22B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B728u;
label_22b728:
    // 0x22b728: 0xae700018  sw          $s0, 0x18($s3)
    ctx->pc = 0x22b728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 16));
label_22b72c:
    // 0x22b72c: 0x0  nop
    ctx->pc = 0x22b72cu;
    // NOP
label_22b730:
    // 0x22b730: 0x10000055  b           . + 4 + (0x55 << 2)
label_22b734:
    if (ctx->pc == 0x22B734u) {
        ctx->pc = 0x22B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B730u;
        // 0x22b734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B738u;
        goto label_22b738;
    }
    ctx->pc = 0x22B730u;
    {
        const bool branch_taken_0x22b730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B730u;
        // 0x22b734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b730) {
            ctx->pc = 0x22B888u;
            goto label_22b888;
        }
    }
    ctx->pc = 0x22B738u;
label_22b738:
    // 0x22b738: 0x16a0000c  bnez        $s5, . + 4 + (0xC << 2)
label_22b73c:
    if (ctx->pc == 0x22B73Cu) {
        ctx->pc = 0x22B740u;
        goto label_22b740;
    }
    ctx->pc = 0x22B738u;
    {
        const bool branch_taken_0x22b738 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b738) {
            ctx->pc = 0x22B76Cu;
            goto label_22b76c;
        }
    }
    ctx->pc = 0x22B740u;
label_22b740:
    // 0x22b740: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x22b740u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b744:
    // 0x22b744: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22b744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_22b748:
    // 0x22b748: 0x1000004f  b           . + 4 + (0x4F << 2)
label_22b74c:
    if (ctx->pc == 0x22B74Cu) {
        ctx->pc = 0x22B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B748u;
        // 0x22b74c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B750u;
        goto label_22b750;
    }
    ctx->pc = 0x22B748u;
    {
        const bool branch_taken_0x22b748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B748u;
        // 0x22b74c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b748) {
            ctx->pc = 0x22B888u;
            goto label_22b888;
        }
    }
    ctx->pc = 0x22B750u;
label_22b750:
    // 0x22b750: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x22b750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_22b754:
    // 0x22b754: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22b754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_22b758:
    // 0x22b758: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x22b758u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_22b75c:
    // 0x22b75c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22b760:
    // 0x22b760: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22b760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_22b764:
    // 0x22b764: 0x10000010  b           . + 4 + (0x10 << 2)
label_22b768:
    if (ctx->pc == 0x22B768u) {
        ctx->pc = 0x22B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B764u;
        // 0x22b768: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B76Cu;
        goto label_22b76c;
    }
    ctx->pc = 0x22B764u;
    {
        const bool branch_taken_0x22b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B764u;
        // 0x22b768: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b764) {
            ctx->pc = 0x22B7A8u;
            goto label_22b7a8;
        }
    }
    ctx->pc = 0x22B76Cu;
label_22b76c:
    // 0x22b76c: 0xc08c682  jal         func_231A08
label_22b770:
    if (ctx->pc == 0x22B770u) {
        ctx->pc = 0x22B774u;
        goto label_22b774;
    }
    ctx->pc = 0x22B76Cu;
    SET_GPR_U32(ctx, 31, 0x22B774u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22B76Cu, 0x22B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B774u;
label_22b774:
    // 0x22b774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b778:
    // 0x22b778: 0xc098552  jal         func_261548
label_22b77c:
    if (ctx->pc == 0x22B77Cu) {
        ctx->pc = 0x22B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B778u;
        // 0x22b77c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B780u;
        goto label_22b780;
    }
    ctx->pc = 0x22B778u;
    SET_GPR_U32(ctx, 31, 0x22B780u);
    ctx->pc = 0x22B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B778u;
    // 0x22b77c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22B778u, 0x22B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B780u;
label_22b780:
    // 0x22b780: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b784:
    // 0x22b784: 0xc08c698  jal         func_231A60
label_22b788:
    if (ctx->pc == 0x22B788u) {
        ctx->pc = 0x22B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B784u;
        // 0x22b788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B78Cu;
        goto label_22b78c;
    }
    ctx->pc = 0x22B784u;
    SET_GPR_U32(ctx, 31, 0x22B78Cu);
    ctx->pc = 0x22B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B784u;
    // 0x22b788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22B784u, 0x22B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B78Cu;
label_22b78c:
    // 0x22b78c: 0x5620fff0  bnel        $s1, $zero, . + 4 + (-0x10 << 2)
label_22b790:
    if (ctx->pc == 0x22B790u) {
        ctx->pc = 0x22B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B78Cu;
        // 0x22b790: 0x96430010  lhu         $v1, 0x10($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B794u;
        goto label_22b794;
    }
    ctx->pc = 0x22B78Cu;
    {
        const bool branch_taken_0x22b78c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b78c) {
            ctx->pc = 0x22B790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B78Cu;
            // 0x22b790: 0x96430010  lhu         $v1, 0x10($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b750;
        }
    }
    ctx->pc = 0x22B794u;
label_22b794:
    // 0x22b794: 0x86450010  lh          $a1, 0x10($s2)
    ctx->pc = 0x22b794u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_22b798:
    // 0x22b798: 0xc08a8ae  jal         func_22A2B8
label_22b79c:
    if (ctx->pc == 0x22B79Cu) {
        ctx->pc = 0x22B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B798u;
        // 0x22b79c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7A0u;
        goto label_22b7a0;
    }
    ctx->pc = 0x22B798u;
    SET_GPR_U32(ctx, 31, 0x22B7A0u);
    ctx->pc = 0x22B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B798u;
    // 0x22b79c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x22B798u, 0x22B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7A0u;
label_22b7a0:
    // 0x22b7a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b7a4:
    // 0x22b7a4: 0x0  nop
    ctx->pc = 0x22b7a4u;
    // NOP
label_22b7a8:
    // 0x22b7a8: 0x1220ffe1  beqz        $s1, . + 4 + (-0x1F << 2)
label_22b7ac:
    if (ctx->pc == 0x22B7ACu) {
        ctx->pc = 0x22B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7A8u;
        // 0x22b7ac: 0x240200ec  addiu       $v0, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7B0u;
        goto label_22b7b0;
    }
    ctx->pc = 0x22B7A8u;
    {
        const bool branch_taken_0x22b7a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7A8u;
        // 0x22b7ac: 0x240200ec  addiu       $v0, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7a8) {
            ctx->pc = 0x22B730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b730;
        }
    }
    ctx->pc = 0x22B7B0u;
label_22b7b0:
    // 0x22b7b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_22b7b4:
    // 0x22b7b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22b7b8:
    // 0x22b7b8: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x22b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_22b7bc:
    // 0x22b7bc: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x22b7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
label_22b7c0:
    // 0x22b7c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22b7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22b7c4:
    // 0x22b7c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_22b7c8:
    // 0x22b7c8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x22b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_22b7cc:
    // 0x22b7cc: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22b7ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_22b7d0:
    // 0x22b7d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22b7d4:
    // 0x22b7d4: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_22b7d8:
    if (ctx->pc == 0x22B7D8u) {
        ctx->pc = 0x22B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7D4u;
        // 0x22b7d8: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7DCu;
        goto label_22b7dc;
    }
    ctx->pc = 0x22B7D4u;
    {
        const bool branch_taken_0x22b7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b7d4) {
            ctx->pc = 0x22B7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B7D4u;
            // 0x22b7d8: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B860u;
            goto label_22b860;
        }
    }
    ctx->pc = 0x22B7DCu;
label_22b7dc:
    // 0x22b7dc: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x22b7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_22b7e0:
    // 0x22b7e0: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x22b7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_22b7e4:
    // 0x22b7e4: 0x6a43002f  ldl         $v1, 0x2F($s2)
    ctx->pc = 0x22b7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_22b7e8:
    // 0x22b7e8: 0x6e430028  ldr         $v1, 0x28($s2)
    ctx->pc = 0x22b7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_22b7ec:
    // 0x22b7ec: 0x6a440037  ldl         $a0, 0x37($s2)
    ctx->pc = 0x22b7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_22b7f0:
    // 0x22b7f0: 0x6e440030  ldr         $a0, 0x30($s2)
    ctx->pc = 0x22b7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_22b7f4:
    // 0x22b7f4: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x22b7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_22b7f8:
    // 0x22b7f8: 0xb2220027  sdl         $v0, 0x27($s1)
    ctx->pc = 0x22b7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_22b7fc:
    // 0x22b7fc: 0xb6220020  sdr         $v0, 0x20($s1)
    ctx->pc = 0x22b7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_22b800:
    // 0x22b800: 0xb223002f  sdl         $v1, 0x2F($s1)
    ctx->pc = 0x22b800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_22b804:
    // 0x22b804: 0xb6230028  sdr         $v1, 0x28($s1)
    ctx->pc = 0x22b804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_22b808:
    // 0x22b808: 0xb2240037  sdl         $a0, 0x37($s1)
    ctx->pc = 0x22b808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_22b80c:
    // 0x22b80c: 0xb6240030  sdr         $a0, 0x30($s1)
    ctx->pc = 0x22b80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_22b810:
    // 0x22b810: 0xc08c682  jal         func_231A08
label_22b814:
    if (ctx->pc == 0x22B814u) {
        ctx->pc = 0x22B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B810u;
        // 0x22b814: 0xae250038  sw          $a1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B818u;
        goto label_22b818;
    }
    ctx->pc = 0x22B810u;
    SET_GPR_U32(ctx, 31, 0x22B818u);
    ctx->pc = 0x22B814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B810u;
    // 0x22b814: 0xae250038  sw          $a1, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22B810u, 0x22B818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B818u;
label_22b818:
    // 0x22b818: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x22b818u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_22b81c:
    // 0x22b81c: 0x96240012  lhu         $a0, 0x12($s1)
    ctx->pc = 0x22b81cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_22b820:
    // 0x22b820: 0x30630009  andi        $v1, $v1, 0x9
    ctx->pc = 0x22b820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9);
label_22b824:
    // 0x22b824: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22b824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_22b828:
    // 0x22b828: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x22b828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
label_22b82c:
    // 0x22b82c: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x22b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_22b830:
    // 0x22b830: 0xae320038  sw          $s2, 0x38($s1)
    ctx->pc = 0x22b830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 18));
label_22b834:
    // 0x22b834: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x22b834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_22b838:
    // 0x22b838: 0xae510034  sw          $s1, 0x34($s2)
    ctx->pc = 0x22b838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
label_22b83c:
    // 0x22b83c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x22b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_22b840:
    // 0x22b840: 0xac710038  sw          $s1, 0x38($v1)
    ctx->pc = 0x22b840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 17));
label_22b844:
    // 0x22b844: 0xc08c698  jal         func_231A60
label_22b848:
    if (ctx->pc == 0x22B848u) {
        ctx->pc = 0x22B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B844u;
        // 0x22b848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B84Cu;
        goto label_22b84c;
    }
    ctx->pc = 0x22B844u;
    SET_GPR_U32(ctx, 31, 0x22B84Cu);
    ctx->pc = 0x22B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B844u;
    // 0x22b848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22B844u, 0x22B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B84Cu;
label_22b84c:
    // 0x22b84c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x22b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_22b850:
    // 0x22b850: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x22b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_22b854:
    // 0x22b854: 0x10000006  b           . + 4 + (0x6 << 2)
label_22b858:
    if (ctx->pc == 0x22B858u) {
        ctx->pc = 0x22B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B854u;
        // 0x22b858: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B85Cu;
        goto label_22b85c;
    }
    ctx->pc = 0x22B854u;
    {
        const bool branch_taken_0x22b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B854u;
        // 0x22b858: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b854) {
            ctx->pc = 0x22B870u;
            goto label_22b870;
        }
    }
    ctx->pc = 0x22B85Cu;
label_22b85c:
    // 0x22b85c: 0x0  nop
    ctx->pc = 0x22b85cu;
    // NOP
label_22b860:
    // 0x22b860: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x22b860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22b864:
    // 0x22b864: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22b864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22b868:
    // 0x22b868: 0xc08b538  jal         func_22D4E0
label_22b86c:
    if (ctx->pc == 0x22B86Cu) {
        ctx->pc = 0x22B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B868u;
        // 0x22b86c: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B870u;
        goto label_22b870;
    }
    ctx->pc = 0x22B868u;
    SET_GPR_U32(ctx, 31, 0x22B870u);
    ctx->pc = 0x22B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B868u;
    // 0x22b86c: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22B868u, 0x22B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B870u;
label_22b870:
    // 0x22b870: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x22b870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
label_22b874:
    // 0x22b874: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22b874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b878:
    // 0x22b878: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x22b878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_22b87c:
    // 0x22b87c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b880:
    // 0x22b880: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x22b880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_22b884:
    // 0x22b884: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22b884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_22b888:
    // 0x22b888: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22b888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22b88c:
    // 0x22b88c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x22b88cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22b890:
    // 0x22b890: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22b890u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22b894:
    // 0x22b894: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22b894u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22b898:
    // 0x22b898: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22b898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22b89c:
    // 0x22b89c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22b89cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22b8a0:
    // 0x22b8a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22b8a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22b8a4:
    // 0x22b8a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22b8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22b8a8:
    // 0x22b8a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b8a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b8ac:
    // 0x22b8ac: 0x3e00008  jr          $ra
label_22b8b0:
    if (ctx->pc == 0x22B8B0u) {
        ctx->pc = 0x22B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8ACu;
        // 0x22b8b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8B4u;
        goto label_22b8b4;
    }
    ctx->pc = 0x22B8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8ACu;
        // 0x22b8b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B8B4u;
label_22b8b4:
    // 0x22b8b4: 0x0  nop
    ctx->pc = 0x22b8b4u;
    // NOP
label_22b8b8:
    // 0x22b8b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_22b8bc:
    // 0x22b8bc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_22b8c0:
    // 0x22b8c0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_22b8c4:
    // 0x22b8c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22b8c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b8c8:
    // 0x22b8c8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x22b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_22b8cc:
    // 0x22b8cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22b8ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b8d0:
    // 0x22b8d0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x22b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_22b8d4:
    // 0x22b8d4: 0x2b4f021  addu        $fp, $s5, $s4
    ctx->pc = 0x22b8d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_22b8d8:
    // 0x22b8d8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x22b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_22b8dc:
    // 0x22b8dc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x22b8dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22b8e0:
    // 0x22b8e0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22b8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_22b8e4:
    // 0x22b8e4: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x22b8e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b8e8:
    // 0x22b8e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22b8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_22b8ec:
    // 0x22b8ec: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x22b8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22b8f0:
    // 0x22b8f0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x22b8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_22b8f4:
    // 0x22b8f4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22b8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22b8f8:
    // 0x22b8f8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_22b8fc:
    // 0x22b8fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22b8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_22b900:
    // 0x22b900: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_22b904:
    if (ctx->pc == 0x22B904u) {
        ctx->pc = 0x22B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B900u;
        // 0x22b904: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B908u;
        goto label_22b908;
    }
    ctx->pc = 0x22B900u;
    {
        const bool branch_taken_0x22b900 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B900u;
        // 0x22b904: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b900) {
            ctx->pc = 0x22B914u;
            goto label_22b914;
        }
    }
    ctx->pc = 0x22B908u;
label_22b908:
    // 0x22b908: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x22b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_22b90c:
    // 0x22b90c: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x22b90cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_22b910:
    // 0x22b910: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x22b910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_22b914:
    // 0x22b914: 0xc08c682  jal         func_231A08
label_22b918:
    if (ctx->pc == 0x22B918u) {
        ctx->pc = 0x22B91Cu;
        goto label_22b91c;
    }
    ctx->pc = 0x22B914u;
    SET_GPR_U32(ctx, 31, 0x22B91Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22B914u, 0x22B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B91Cu;
label_22b91c:
    // 0x22b91c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b920:
    // 0x22b920: 0xc098552  jal         func_261548
label_22b924:
    if (ctx->pc == 0x22B924u) {
        ctx->pc = 0x22B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B920u;
        // 0x22b924: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B928u;
        goto label_22b928;
    }
    ctx->pc = 0x22B920u;
    SET_GPR_U32(ctx, 31, 0x22B928u);
    ctx->pc = 0x22B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B920u;
    // 0x22b924: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22B920u, 0x22B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B928u;
label_22b928:
    // 0x22b928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b92c:
    // 0x22b92c: 0xc08c698  jal         func_231A60
label_22b930:
    if (ctx->pc == 0x22B930u) {
        ctx->pc = 0x22B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B92Cu;
        // 0x22b930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B934u;
        goto label_22b934;
    }
    ctx->pc = 0x22B92Cu;
    SET_GPR_U32(ctx, 31, 0x22B934u);
    ctx->pc = 0x22B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B92Cu;
    // 0x22b930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22B92Cu, 0x22B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B934u;
label_22b934:
    // 0x22b934: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_22b938:
    if (ctx->pc == 0x22B938u) {
        ctx->pc = 0x22B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B934u;
        // 0x22b938: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B93Cu;
        goto label_22b93c;
    }
    ctx->pc = 0x22B934u;
    {
        const bool branch_taken_0x22b934 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B934u;
        // 0x22b938: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b934) {
            ctx->pc = 0x22B958u;
            goto label_22b958;
        }
    }
    ctx->pc = 0x22B93Cu;
label_22b93c:
    // 0x22b93c: 0xc08a8cc  jal         func_22A330
label_22b940:
    if (ctx->pc == 0x22B940u) {
        ctx->pc = 0x22B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B93Cu;
        // 0x22b940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B944u;
        goto label_22b944;
    }
    ctx->pc = 0x22B93Cu;
    SET_GPR_U32(ctx, 31, 0x22B944u);
    ctx->pc = 0x22B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B93Cu;
    // 0x22b940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x22B93Cu, 0x22B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B944u;
label_22b944:
    // 0x22b944: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b948:
    // 0x22b948: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
label_22b94c:
    if (ctx->pc == 0x22B94Cu) {
        ctx->pc = 0x22B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B948u;
        // 0x22b94c: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B950u;
        goto label_22b950;
    }
    ctx->pc = 0x22B948u;
    {
        const bool branch_taken_0x22b948 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B948u;
        // 0x22b94c: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b948) {
            ctx->pc = 0x22B990u;
            goto label_22b990;
        }
    }
    ctx->pc = 0x22B950u;
label_22b950:
    // 0x22b950: 0x1000007f  b           . + 4 + (0x7F << 2)
label_22b954:
    if (ctx->pc == 0x22B954u) {
        ctx->pc = 0x22B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B950u;
        // 0x22b954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B958u;
        goto label_22b958;
    }
    ctx->pc = 0x22B950u;
    {
        const bool branch_taken_0x22b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B950u;
        // 0x22b954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b950) {
            ctx->pc = 0x22BB50u;
            goto label_22bb50;
        }
    }
    ctx->pc = 0x22B958u;
label_22b958:
    // 0x22b958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b95c:
    // 0x22b95c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x22b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_22b960:
    // 0x22b960: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22b960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b964:
    // 0x22b964: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x22b964u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_22b968:
    // 0x22b968: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x22b968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_22b96c:
    // 0x22b96c: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x22b96cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
label_22b970:
    // 0x22b970: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22b970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22b974:
    // 0x22b974: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22b974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_22b978:
    // 0x22b978: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_22b97c:
    if (ctx->pc == 0x22B97Cu) {
        ctx->pc = 0x22B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B978u;
        // 0x22b97c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B980u;
        goto label_22b980;
    }
    ctx->pc = 0x22B978u;
    {
        const bool branch_taken_0x22b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B978u;
        // 0x22b97c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b978) {
            ctx->pc = 0x22B948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b948;
        }
    }
    ctx->pc = 0x22B980u;
label_22b980:
    // 0x22b980: 0xc08a996  jal         func_22A658
label_22b984:
    if (ctx->pc == 0x22B984u) {
        ctx->pc = 0x22B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B980u;
        // 0x22b984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B988u;
        goto label_22b988;
    }
    ctx->pc = 0x22B980u;
    SET_GPR_U32(ctx, 31, 0x22B988u);
    ctx->pc = 0x22B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B980u;
    // 0x22b984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x22B980u, 0x22B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B988u;
label_22b988:
    // 0x22b988: 0x10000017  b           . + 4 + (0x17 << 2)
label_22b98c:
    if (ctx->pc == 0x22B98Cu) {
        ctx->pc = 0x22B990u;
        goto label_22b990;
    }
    ctx->pc = 0x22B988u;
    {
        const bool branch_taken_0x22b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b988) {
            ctx->pc = 0x22B9E8u;
            goto label_22b9e8;
        }
    }
    ctx->pc = 0x22B990u;
label_22b990:
    // 0x22b990: 0xae320014  sw          $s2, 0x14($s1)
    ctx->pc = 0x22b990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
label_22b994:
    // 0x22b994: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x22b994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_22b998:
    // 0x22b998: 0x1a80006c  blez        $s4, . + 4 + (0x6C << 2)
label_22b99c:
    if (ctx->pc == 0x22B99Cu) {
        ctx->pc = 0x22B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B998u;
        // 0x22b99c: 0xae340018  sw          $s4, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9A0u;
        goto label_22b9a0;
    }
    ctx->pc = 0x22B998u;
    {
        const bool branch_taken_0x22b998 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x22B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B998u;
        // 0x22b99c: 0xae340018  sw          $s4, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b998) {
            ctx->pc = 0x22BB4Cu;
            goto label_22bb4c;
        }
    }
    ctx->pc = 0x22B9A0u;
label_22b9a0:
    // 0x22b9a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22b9a4:
    // 0x22b9a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_22b9a8:
    if (ctx->pc == 0x22B9A8u) {
        ctx->pc = 0x22B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9A4u;
        // 0x22b9a8: 0x3d31023  subu        $v0, $fp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9ACu;
        goto label_22b9ac;
    }
    ctx->pc = 0x22B9A4u;
    {
        const bool branch_taken_0x22b9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9A4u;
        // 0x22b9a8: 0x3d31023  subu        $v0, $fp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9a4) {
            ctx->pc = 0x22BA20u;
            goto label_22ba20;
        }
    }
    ctx->pc = 0x22B9ACu;
label_22b9ac:
    // 0x22b9ac: 0xc08c682  jal         func_231A08
label_22b9b0:
    if (ctx->pc == 0x22B9B0u) {
        ctx->pc = 0x22B9B4u;
        goto label_22b9b4;
    }
    ctx->pc = 0x22B9ACu;
    SET_GPR_U32(ctx, 31, 0x22B9B4u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22B9ACu, 0x22B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9B4u;
label_22b9b4:
    // 0x22b9b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b9b8:
    // 0x22b9b8: 0xc098552  jal         func_261548
label_22b9bc:
    if (ctx->pc == 0x22B9BCu) {
        ctx->pc = 0x22B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9B8u;
        // 0x22b9bc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9C0u;
        goto label_22b9c0;
    }
    ctx->pc = 0x22B9B8u;
    SET_GPR_U32(ctx, 31, 0x22B9C0u);
    ctx->pc = 0x22B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9B8u;
    // 0x22b9bc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22B9B8u, 0x22B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9C0u;
label_22b9c0:
    // 0x22b9c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b9c4:
    // 0x22b9c4: 0xc08c698  jal         func_231A60
label_22b9c8:
    if (ctx->pc == 0x22B9C8u) {
        ctx->pc = 0x22B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9C4u;
        // 0x22b9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9CCu;
        goto label_22b9cc;
    }
    ctx->pc = 0x22B9C4u;
    SET_GPR_U32(ctx, 31, 0x22B9CCu);
    ctx->pc = 0x22B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9C4u;
    // 0x22b9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22B9C4u, 0x22B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9CCu;
label_22b9cc:
    // 0x22b9cc: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_22b9d0:
    if (ctx->pc == 0x22B9D0u) {
        ctx->pc = 0x22B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9CCu;
        // 0x22b9d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9D4u;
        goto label_22b9d4;
    }
    ctx->pc = 0x22B9CCu;
    {
        const bool branch_taken_0x22b9cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9CCu;
        // 0x22b9d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9cc) {
            ctx->pc = 0x22B9F8u;
            goto label_22b9f8;
        }
    }
    ctx->pc = 0x22B9D4u;
label_22b9d4:
    // 0x22b9d4: 0xc08a8ae  jal         func_22A2B8
label_22b9d8:
    if (ctx->pc == 0x22B9D8u) {
        ctx->pc = 0x22B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9D4u;
        // 0x22b9d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9DCu;
        goto label_22b9dc;
    }
    ctx->pc = 0x22B9D4u;
    SET_GPR_U32(ctx, 31, 0x22B9DCu);
    ctx->pc = 0x22B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9D4u;
    // 0x22b9d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x22B9D4u, 0x22B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9DCu;
label_22b9dc:
    // 0x22b9dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b9e0:
    // 0x22b9e0: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_22b9e4:
    if (ctx->pc == 0x22B9E4u) {
        ctx->pc = 0x22B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9E0u;
        // 0x22b9e4: 0x240200ec  addiu       $v0, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9E8u;
        goto label_22b9e8;
    }
    ctx->pc = 0x22B9E0u;
    {
        const bool branch_taken_0x22b9e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9E0u;
        // 0x22b9e4: 0x240200ec  addiu       $v0, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9e0) {
            ctx->pc = 0x22BA18u;
            goto label_22ba18;
        }
    }
    ctx->pc = 0x22B9E8u;
label_22b9e8:
    // 0x22b9e8: 0xc08a9d6  jal         func_22A758
label_22b9ec:
    if (ctx->pc == 0x22B9ECu) {
        ctx->pc = 0x22B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9E8u;
        // 0x22b9ec: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9F0u;
        goto label_22b9f0;
    }
    ctx->pc = 0x22B9E8u;
    SET_GPR_U32(ctx, 31, 0x22B9F0u);
    ctx->pc = 0x22B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9E8u;
    // 0x22b9ec: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22B9E8u, 0x22B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9F0u;
label_22b9f0:
    // 0x22b9f0: 0x10000057  b           . + 4 + (0x57 << 2)
label_22b9f4:
    if (ctx->pc == 0x22B9F4u) {
        ctx->pc = 0x22B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9F0u;
        // 0x22b9f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9F8u;
        goto label_22b9f8;
    }
    ctx->pc = 0x22B9F0u;
    {
        const bool branch_taken_0x22b9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9F0u;
        // 0x22b9f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9f0) {
            ctx->pc = 0x22BB50u;
            goto label_22bb50;
        }
    }
    ctx->pc = 0x22B9F8u;
label_22b9f8:
    // 0x22b9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b9fc:
    // 0x22b9fc: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x22b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_22ba00:
    // 0x22ba00: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x22ba00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_22ba04:
    // 0x22ba04: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x22ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_22ba08:
    // 0x22ba08: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22ba0c:
    // 0x22ba0c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_22ba10:
    // 0x22ba10: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_22ba14:
    if (ctx->pc == 0x22BA14u) {
        ctx->pc = 0x22BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA10u;
        // 0x22ba14: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA18u;
        goto label_22ba18;
    }
    ctx->pc = 0x22BA10u;
    {
        const bool branch_taken_0x22ba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA10u;
        // 0x22ba14: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba10) {
            ctx->pc = 0x22B9E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b9e0;
        }
    }
    ctx->pc = 0x22BA18u;
label_22ba18:
    // 0x22ba18: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x22ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_22ba1c:
    // 0x22ba1c: 0x3d31023  subu        $v0, $fp, $s3
    ctx->pc = 0x22ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
label_22ba20:
    // 0x22ba20: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x22ba20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22ba24:
    // 0x22ba24: 0x282182b  sltu        $v1, $s4, $v0
    ctx->pc = 0x22ba24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22ba28:
    // 0x22ba28: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x22ba28u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_22ba2c:
    // 0x22ba2c: 0x2e0401cd  sltiu       $a0, $s0, 0x1CD
    ctx->pc = 0x22ba2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)461) ? 1 : 0);
label_22ba30:
    // 0x22ba30: 0x54800024  bnel        $a0, $zero, . + 4 + (0x24 << 2)
label_22ba34:
    if (ctx->pc == 0x22BA34u) {
        ctx->pc = 0x22BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA30u;
        // 0x22ba34: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA38u;
        goto label_22ba38;
    }
    ctx->pc = 0x22BA30u;
    {
        const bool branch_taken_0x22ba30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ba30) {
            ctx->pc = 0x22BA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BA30u;
            // 0x22ba34: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BAC4u;
            goto label_22bac4;
        }
    }
    ctx->pc = 0x22BA38u;
label_22ba38:
    // 0x22ba38: 0xc08c682  jal         func_231A08
label_22ba3c:
    if (ctx->pc == 0x22BA3Cu) {
        ctx->pc = 0x22BA40u;
        goto label_22ba40;
    }
    ctx->pc = 0x22BA38u;
    SET_GPR_U32(ctx, 31, 0x22BA40u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22BA38u, 0x22BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA40u;
label_22ba40:
    // 0x22ba40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22ba40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ba44:
    // 0x22ba44: 0xc098552  jal         func_261548
label_22ba48:
    if (ctx->pc == 0x22BA48u) {
        ctx->pc = 0x22BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA44u;
        // 0x22ba48: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA4Cu;
        goto label_22ba4c;
    }
    ctx->pc = 0x22BA44u;
    SET_GPR_U32(ctx, 31, 0x22BA4Cu);
    ctx->pc = 0x22BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA44u;
    // 0x22ba48: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22BA44u, 0x22BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA4Cu;
label_22ba4c:
    // 0x22ba4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_22ba50:
    if (ctx->pc == 0x22BA50u) {
        ctx->pc = 0x22BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA4Cu;
        // 0x22ba50: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA54u;
        goto label_22ba54;
    }
    ctx->pc = 0x22BA4Cu;
    {
        const bool branch_taken_0x22ba4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA4Cu;
        // 0x22ba50: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba4c) {
            ctx->pc = 0x22BA68u;
            goto label_22ba68;
        }
    }
    ctx->pc = 0x22BA54u;
label_22ba54:
    // 0x22ba54: 0xc08a8ec  jal         func_22A3B0
label_22ba58:
    if (ctx->pc == 0x22BA58u) {
        ctx->pc = 0x22BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA54u;
        // 0x22ba58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA5Cu;
        goto label_22ba5c;
    }
    ctx->pc = 0x22BA54u;
    SET_GPR_U32(ctx, 31, 0x22BA5Cu);
    ctx->pc = 0x22BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA54u;
    // 0x22ba58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x22BA54u, 0x22BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA5Cu;
label_22ba5c:
    // 0x22ba5c: 0xc098552  jal         func_261548
label_22ba60:
    if (ctx->pc == 0x22BA60u) {
        ctx->pc = 0x22BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA5Cu;
        // 0x22ba60: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA64u;
        goto label_22ba64;
    }
    ctx->pc = 0x22BA5Cu;
    SET_GPR_U32(ctx, 31, 0x22BA64u);
    ctx->pc = 0x22BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA5Cu;
    // 0x22ba60: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22BA5Cu, 0x22BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA64u;
label_22ba64:
    // 0x22ba64: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x22ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_22ba68:
    // 0x22ba68: 0xc08c698  jal         func_231A60
label_22ba6c:
    if (ctx->pc == 0x22BA6Cu) {
        ctx->pc = 0x22BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA68u;
        // 0x22ba6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA70u;
        goto label_22ba70;
    }
    ctx->pc = 0x22BA68u;
    SET_GPR_U32(ctx, 31, 0x22BA70u);
    ctx->pc = 0x22BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA68u;
    // 0x22ba6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22BA68u, 0x22BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA70u;
label_22ba70:
    // 0x22ba70: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x22ba70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22ba74:
    // 0x22ba74: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_22ba78:
    if (ctx->pc == 0x22BA78u) {
        ctx->pc = 0x22BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA74u;
        // 0x22ba78: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA7Cu;
        goto label_22ba7c;
    }
    ctx->pc = 0x22BA74u;
    {
        const bool branch_taken_0x22ba74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA74u;
        // 0x22ba78: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba74) {
            ctx->pc = 0x22BAA0u;
            goto label_22baa0;
        }
    }
    ctx->pc = 0x22BA7Cu;
label_22ba7c:
    // 0x22ba7c: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x22ba7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_22ba80:
    // 0x22ba80: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x22ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_22ba84:
    // 0x22ba84: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x22ba84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_22ba88:
    // 0x22ba88: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x22ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_22ba8c:
    // 0x22ba8c: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x22ba8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_22ba90:
    // 0x22ba90: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x22ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_22ba94:
    // 0x22ba94: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x22ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_22ba98:
    // 0x22ba98: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x22ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
label_22ba9c:
    // 0x22ba9c: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x22ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_22baa0:
    // 0x22baa0: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x22baa0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_22baa4:
    // 0x22baa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22baa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22baa8:
    // 0x22baa8: 0x1040ffb5  beqz        $v0, . + 4 + (-0x4B << 2)
label_22baac:
    if (ctx->pc == 0x22BAACu) {
        ctx->pc = 0x22BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAA8u;
        // 0x22baac: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAB0u;
        goto label_22bab0;
    }
    ctx->pc = 0x22BAA8u;
    {
        const bool branch_taken_0x22baa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAA8u;
        // 0x22baac: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22baa8) {
            ctx->pc = 0x22B980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b980;
        }
    }
    ctx->pc = 0x22BAB0u;
label_22bab0:
    // 0x22bab0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x22bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_22bab4:
    // 0x22bab4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x22bab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_22bab8:
    // 0x22bab8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x22bab8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_22babc:
    // 0x22babc: 0x10000011  b           . + 4 + (0x11 << 2)
label_22bac0:
    if (ctx->pc == 0x22BAC0u) {
        ctx->pc = 0x22BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BABCu;
        // 0x22bac0: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAC4u;
        goto label_22bac4;
    }
    ctx->pc = 0x22BABCu;
    {
        const bool branch_taken_0x22babc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BABCu;
        // 0x22bac0: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22babc) {
            ctx->pc = 0x22BB04u;
            goto label_22bb04;
        }
    }
    ctx->pc = 0x22BAC4u;
label_22bac4:
    // 0x22bac4: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x22bac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_22bac8:
    // 0x22bac8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_22bacc:
    if (ctx->pc == 0x22BACCu) {
        ctx->pc = 0x22BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAC8u;
        // 0x22bacc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAD0u;
        goto label_22bad0;
    }
    ctx->pc = 0x22BAC8u;
    {
        const bool branch_taken_0x22bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAC8u;
        // 0x22bacc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bac8) {
            ctx->pc = 0x22BB00u;
            goto label_22bb00;
        }
    }
    ctx->pc = 0x22BAD0u;
label_22bad0:
    // 0x22bad0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_22bad4:
    if (ctx->pc == 0x22BAD4u) {
        ctx->pc = 0x22BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAD0u;
        // 0x22bad4: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAD8u;
        goto label_22bad8;
    }
    ctx->pc = 0x22BAD0u;
    {
        const bool branch_taken_0x22bad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bad0) {
            ctx->pc = 0x22BAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BAD0u;
            // 0x22bad4: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BB04u;
            goto label_22bb04;
        }
    }
    ctx->pc = 0x22BAD8u;
label_22bad8:
    // 0x22bad8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x22bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_22badc:
    // 0x22badc: 0x8c63f9e8  lw          $v1, -0x618($v1)
    ctx->pc = 0x22badcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965736)));
label_22bae0:
    // 0x22bae0: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x22bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_22bae4:
    // 0x22bae4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x22bae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22bae8:
    // 0x22bae8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_22baec:
    if (ctx->pc == 0x22BAECu) {
        ctx->pc = 0x22BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAE8u;
        // 0x22baec: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAF0u;
        goto label_22baf0;
    }
    ctx->pc = 0x22BAE8u;
    {
        const bool branch_taken_0x22bae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bae8) {
            ctx->pc = 0x22BAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BAE8u;
            // 0x22baec: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BB04u;
            goto label_22bb04;
        }
    }
    ctx->pc = 0x22BAF0u;
label_22baf0:
    // 0x22baf0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x22baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22baf4:
    // 0x22baf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22baf8:
    // 0x22baf8: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_22bafc:
    if (ctx->pc == 0x22BAFCu) {
        ctx->pc = 0x22BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAF8u;
        // 0x22bafc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB00u;
        goto label_22bb00;
    }
    ctx->pc = 0x22BAF8u;
    {
        const bool branch_taken_0x22baf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAF8u;
        // 0x22bafc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22baf8) {
            ctx->pc = 0x22BABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22babc;
        }
    }
    ctx->pc = 0x22BB00u;
label_22bb00:
    // 0x22bb00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22bb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22bb04:
    // 0x22bb04: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_22bb08:
    if (ctx->pc == 0x22BB08u) {
        ctx->pc = 0x22BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB04u;
        // 0x22bb08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB0Cu;
        goto label_22bb0c;
    }
    ctx->pc = 0x22BB04u;
    {
        const bool branch_taken_0x22bb04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB04u;
        // 0x22bb08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb04) {
            ctx->pc = 0x22BB20u;
            goto label_22bb20;
        }
    }
    ctx->pc = 0x22BB0Cu;
label_22bb0c:
    // 0x22bb0c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x22bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22bb10:
    // 0x22bb10: 0x2e0f809  jalr        $s7
label_22bb14:
    if (ctx->pc == 0x22BB14u) {
        ctx->pc = 0x22BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB10u;
        // 0x22bb14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB18u;
        goto label_22bb18;
    }
    ctx->pc = 0x22BB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x22BB18u);
        ctx->pc = 0x22BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB10u;
        // 0x22bb14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BB10u, 0x22BB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BB18u;
label_22bb18:
    // 0x22bb18: 0x10000006  b           . + 4 + (0x6 << 2)
label_22bb1c:
    if (ctx->pc == 0x22BB1Cu) {
        ctx->pc = 0x22BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB18u;
        // 0x22bb1c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB20u;
        goto label_22bb20;
    }
    ctx->pc = 0x22BB18u;
    {
        const bool branch_taken_0x22bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB18u;
        // 0x22bb1c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb18) {
            ctx->pc = 0x22BB34u;
            goto label_22bb34;
        }
    }
    ctx->pc = 0x22BB20u;
label_22bb20:
    // 0x22bb20: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22bb24:
    // 0x22bb24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22bb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22bb28:
    // 0x22bb28: 0xc08b538  jal         func_22D4E0
label_22bb2c:
    if (ctx->pc == 0x22BB2Cu) {
        ctx->pc = 0x22BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB28u;
        // 0x22bb2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB30u;
        goto label_22bb30;
    }
    ctx->pc = 0x22BB28u;
    SET_GPR_U32(ctx, 31, 0x22BB30u);
    ctx->pc = 0x22BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB28u;
    // 0x22bb2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22BB28u, 0x22BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB30u;
label_22bb30:
    // 0x22bb30: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x22bb30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_22bb34:
    // 0x22bb34: 0xaed10000  sw          $s1, 0x0($s6)
    ctx->pc = 0x22bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
label_22bb38:
    // 0x22bb38: 0x27e1026  xor         $v0, $s3, $fp
    ctx->pc = 0x22bb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 30));
label_22bb3c:
    // 0x22bb3c: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x22bb3cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_22bb40:
    // 0x22bb40: 0x2a2980a  movz        $s3, $s5, $v0
    ctx->pc = 0x22bb40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 21));
label_22bb44:
    // 0x22bb44: 0x1e80ff96  bgtz        $s4, . + 4 + (-0x6A << 2)
label_22bb48:
    if (ctx->pc == 0x22BB48u) {
        ctx->pc = 0x22BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB44u;
        // 0x22bb48: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB4Cu;
        goto label_22bb4c;
    }
    ctx->pc = 0x22BB44u;
    {
        const bool branch_taken_0x22bb44 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x22BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB44u;
        // 0x22bb48: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb44) {
            ctx->pc = 0x22B9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b9a0;
        }
    }
    ctx->pc = 0x22BB4Cu;
label_22bb4c:
    // 0x22bb4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22bb50:
    // 0x22bb50: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x22bb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_22bb54:
    // 0x22bb54: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22bb54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_22bb58:
    // 0x22bb58: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x22bb58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22bb5c:
    // 0x22bb5c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22bb5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22bb60:
    // 0x22bb60: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22bb60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22bb64:
    // 0x22bb64: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22bb64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22bb68:
    // 0x22bb68: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22bb68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22bb6c:
    // 0x22bb6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22bb6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22bb70:
    // 0x22bb70: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22bb70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22bb74:
    // 0x22bb74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22bb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22bb78:
    // 0x22bb78: 0x3e00008  jr          $ra
label_22bb7c:
    if (ctx->pc == 0x22BB7Cu) {
        ctx->pc = 0x22BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB78u;
        // 0x22bb7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB80u;
        goto label_fallthrough_0x22bb78;
    }
    ctx->pc = 0x22BB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB78u;
        // 0x22bb7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22bb78:
    ctx->pc = 0x22BB80u;
}
