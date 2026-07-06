#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002695D0
// Address: 0x2695d0 - 0x26aff0
void sub_002695D0_0x2695d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002695D0_0x2695d0");
#endif

    switch (ctx->pc) {
        case 0x2695d0u: goto label_2695d0;
        case 0x2695d4u: goto label_2695d4;
        case 0x2695d8u: goto label_2695d8;
        case 0x2695dcu: goto label_2695dc;
        case 0x2695e0u: goto label_2695e0;
        case 0x2695e4u: goto label_2695e4;
        case 0x2695e8u: goto label_2695e8;
        case 0x2695ecu: goto label_2695ec;
        case 0x2695f0u: goto label_2695f0;
        case 0x2695f4u: goto label_2695f4;
        case 0x2695f8u: goto label_2695f8;
        case 0x2695fcu: goto label_2695fc;
        case 0x269600u: goto label_269600;
        case 0x269604u: goto label_269604;
        case 0x269608u: goto label_269608;
        case 0x26960cu: goto label_26960c;
        case 0x269610u: goto label_269610;
        case 0x269614u: goto label_269614;
        case 0x269618u: goto label_269618;
        case 0x26961cu: goto label_26961c;
        case 0x269620u: goto label_269620;
        case 0x269624u: goto label_269624;
        case 0x269628u: goto label_269628;
        case 0x26962cu: goto label_26962c;
        case 0x269630u: goto label_269630;
        case 0x269634u: goto label_269634;
        case 0x269638u: goto label_269638;
        case 0x26963cu: goto label_26963c;
        case 0x269640u: goto label_269640;
        case 0x269644u: goto label_269644;
        case 0x269648u: goto label_269648;
        case 0x26964cu: goto label_26964c;
        case 0x269650u: goto label_269650;
        case 0x269654u: goto label_269654;
        case 0x269658u: goto label_269658;
        case 0x26965cu: goto label_26965c;
        case 0x269660u: goto label_269660;
        case 0x269664u: goto label_269664;
        case 0x269668u: goto label_269668;
        case 0x26966cu: goto label_26966c;
        case 0x269670u: goto label_269670;
        case 0x269674u: goto label_269674;
        case 0x269678u: goto label_269678;
        case 0x26967cu: goto label_26967c;
        case 0x269680u: goto label_269680;
        case 0x269684u: goto label_269684;
        case 0x269688u: goto label_269688;
        case 0x26968cu: goto label_26968c;
        case 0x269690u: goto label_269690;
        case 0x269694u: goto label_269694;
        case 0x269698u: goto label_269698;
        case 0x26969cu: goto label_26969c;
        case 0x2696a0u: goto label_2696a0;
        case 0x2696a4u: goto label_2696a4;
        case 0x2696a8u: goto label_2696a8;
        case 0x2696acu: goto label_2696ac;
        case 0x2696b0u: goto label_2696b0;
        case 0x2696b4u: goto label_2696b4;
        case 0x2696b8u: goto label_2696b8;
        case 0x2696bcu: goto label_2696bc;
        case 0x2696c0u: goto label_2696c0;
        case 0x2696c4u: goto label_2696c4;
        case 0x2696c8u: goto label_2696c8;
        case 0x2696ccu: goto label_2696cc;
        case 0x2696d0u: goto label_2696d0;
        case 0x2696d4u: goto label_2696d4;
        case 0x2696d8u: goto label_2696d8;
        case 0x2696dcu: goto label_2696dc;
        case 0x2696e0u: goto label_2696e0;
        case 0x2696e4u: goto label_2696e4;
        case 0x2696e8u: goto label_2696e8;
        case 0x2696ecu: goto label_2696ec;
        case 0x2696f0u: goto label_2696f0;
        case 0x2696f4u: goto label_2696f4;
        case 0x2696f8u: goto label_2696f8;
        case 0x2696fcu: goto label_2696fc;
        case 0x269700u: goto label_269700;
        case 0x269704u: goto label_269704;
        case 0x269708u: goto label_269708;
        case 0x26970cu: goto label_26970c;
        case 0x269710u: goto label_269710;
        case 0x269714u: goto label_269714;
        case 0x269718u: goto label_269718;
        case 0x26971cu: goto label_26971c;
        case 0x269720u: goto label_269720;
        case 0x269724u: goto label_269724;
        case 0x269728u: goto label_269728;
        case 0x26972cu: goto label_26972c;
        case 0x269730u: goto label_269730;
        case 0x269734u: goto label_269734;
        case 0x269738u: goto label_269738;
        case 0x26973cu: goto label_26973c;
        case 0x269740u: goto label_269740;
        case 0x269744u: goto label_269744;
        case 0x269748u: goto label_269748;
        case 0x26974cu: goto label_26974c;
        case 0x269750u: goto label_269750;
        case 0x269754u: goto label_269754;
        case 0x269758u: goto label_269758;
        case 0x26975cu: goto label_26975c;
        case 0x269760u: goto label_269760;
        case 0x269764u: goto label_269764;
        case 0x269768u: goto label_269768;
        case 0x26976cu: goto label_26976c;
        case 0x269770u: goto label_269770;
        case 0x269774u: goto label_269774;
        case 0x269778u: goto label_269778;
        case 0x26977cu: goto label_26977c;
        case 0x269780u: goto label_269780;
        case 0x269784u: goto label_269784;
        case 0x269788u: goto label_269788;
        case 0x26978cu: goto label_26978c;
        case 0x269790u: goto label_269790;
        case 0x269794u: goto label_269794;
        case 0x269798u: goto label_269798;
        case 0x26979cu: goto label_26979c;
        case 0x2697a0u: goto label_2697a0;
        case 0x2697a4u: goto label_2697a4;
        case 0x2697a8u: goto label_2697a8;
        case 0x2697acu: goto label_2697ac;
        case 0x2697b0u: goto label_2697b0;
        case 0x2697b4u: goto label_2697b4;
        case 0x2697b8u: goto label_2697b8;
        case 0x2697bcu: goto label_2697bc;
        case 0x2697c0u: goto label_2697c0;
        case 0x2697c4u: goto label_2697c4;
        case 0x2697c8u: goto label_2697c8;
        case 0x2697ccu: goto label_2697cc;
        case 0x2697d0u: goto label_2697d0;
        case 0x2697d4u: goto label_2697d4;
        case 0x2697d8u: goto label_2697d8;
        case 0x2697dcu: goto label_2697dc;
        case 0x2697e0u: goto label_2697e0;
        case 0x2697e4u: goto label_2697e4;
        case 0x2697e8u: goto label_2697e8;
        case 0x2697ecu: goto label_2697ec;
        case 0x2697f0u: goto label_2697f0;
        case 0x2697f4u: goto label_2697f4;
        case 0x2697f8u: goto label_2697f8;
        case 0x2697fcu: goto label_2697fc;
        case 0x269800u: goto label_269800;
        case 0x269804u: goto label_269804;
        case 0x269808u: goto label_269808;
        case 0x26980cu: goto label_26980c;
        case 0x269810u: goto label_269810;
        case 0x269814u: goto label_269814;
        case 0x269818u: goto label_269818;
        case 0x26981cu: goto label_26981c;
        case 0x269820u: goto label_269820;
        case 0x269824u: goto label_269824;
        case 0x269828u: goto label_269828;
        case 0x26982cu: goto label_26982c;
        case 0x269830u: goto label_269830;
        case 0x269834u: goto label_269834;
        case 0x269838u: goto label_269838;
        case 0x26983cu: goto label_26983c;
        case 0x269840u: goto label_269840;
        case 0x269844u: goto label_269844;
        case 0x269848u: goto label_269848;
        case 0x26984cu: goto label_26984c;
        case 0x269850u: goto label_269850;
        case 0x269854u: goto label_269854;
        case 0x269858u: goto label_269858;
        case 0x26985cu: goto label_26985c;
        case 0x269860u: goto label_269860;
        case 0x269864u: goto label_269864;
        case 0x269868u: goto label_269868;
        case 0x26986cu: goto label_26986c;
        case 0x269870u: goto label_269870;
        case 0x269874u: goto label_269874;
        case 0x269878u: goto label_269878;
        case 0x26987cu: goto label_26987c;
        case 0x269880u: goto label_269880;
        case 0x269884u: goto label_269884;
        case 0x269888u: goto label_269888;
        case 0x26988cu: goto label_26988c;
        case 0x269890u: goto label_269890;
        case 0x269894u: goto label_269894;
        case 0x269898u: goto label_269898;
        case 0x26989cu: goto label_26989c;
        case 0x2698a0u: goto label_2698a0;
        case 0x2698a4u: goto label_2698a4;
        case 0x2698a8u: goto label_2698a8;
        case 0x2698acu: goto label_2698ac;
        case 0x2698b0u: goto label_2698b0;
        case 0x2698b4u: goto label_2698b4;
        case 0x2698b8u: goto label_2698b8;
        case 0x2698bcu: goto label_2698bc;
        case 0x2698c0u: goto label_2698c0;
        case 0x2698c4u: goto label_2698c4;
        case 0x2698c8u: goto label_2698c8;
        case 0x2698ccu: goto label_2698cc;
        case 0x2698d0u: goto label_2698d0;
        case 0x2698d4u: goto label_2698d4;
        case 0x2698d8u: goto label_2698d8;
        case 0x2698dcu: goto label_2698dc;
        case 0x2698e0u: goto label_2698e0;
        case 0x2698e4u: goto label_2698e4;
        case 0x2698e8u: goto label_2698e8;
        case 0x2698ecu: goto label_2698ec;
        case 0x2698f0u: goto label_2698f0;
        case 0x2698f4u: goto label_2698f4;
        case 0x2698f8u: goto label_2698f8;
        case 0x2698fcu: goto label_2698fc;
        case 0x269900u: goto label_269900;
        case 0x269904u: goto label_269904;
        case 0x269908u: goto label_269908;
        case 0x26990cu: goto label_26990c;
        case 0x269910u: goto label_269910;
        case 0x269914u: goto label_269914;
        case 0x269918u: goto label_269918;
        case 0x26991cu: goto label_26991c;
        case 0x269920u: goto label_269920;
        case 0x269924u: goto label_269924;
        case 0x269928u: goto label_269928;
        case 0x26992cu: goto label_26992c;
        case 0x269930u: goto label_269930;
        case 0x269934u: goto label_269934;
        case 0x269938u: goto label_269938;
        case 0x26993cu: goto label_26993c;
        case 0x269940u: goto label_269940;
        case 0x269944u: goto label_269944;
        case 0x269948u: goto label_269948;
        case 0x26994cu: goto label_26994c;
        case 0x269950u: goto label_269950;
        case 0x269954u: goto label_269954;
        case 0x269958u: goto label_269958;
        case 0x26995cu: goto label_26995c;
        case 0x269960u: goto label_269960;
        case 0x269964u: goto label_269964;
        case 0x269968u: goto label_269968;
        case 0x26996cu: goto label_26996c;
        case 0x269970u: goto label_269970;
        case 0x269974u: goto label_269974;
        case 0x269978u: goto label_269978;
        case 0x26997cu: goto label_26997c;
        case 0x269980u: goto label_269980;
        case 0x269984u: goto label_269984;
        case 0x269988u: goto label_269988;
        case 0x26998cu: goto label_26998c;
        case 0x269990u: goto label_269990;
        case 0x269994u: goto label_269994;
        case 0x269998u: goto label_269998;
        case 0x26999cu: goto label_26999c;
        case 0x2699a0u: goto label_2699a0;
        case 0x2699a4u: goto label_2699a4;
        case 0x2699a8u: goto label_2699a8;
        case 0x2699acu: goto label_2699ac;
        case 0x2699b0u: goto label_2699b0;
        case 0x2699b4u: goto label_2699b4;
        case 0x2699b8u: goto label_2699b8;
        case 0x2699bcu: goto label_2699bc;
        case 0x2699c0u: goto label_2699c0;
        case 0x2699c4u: goto label_2699c4;
        case 0x2699c8u: goto label_2699c8;
        case 0x2699ccu: goto label_2699cc;
        case 0x2699d0u: goto label_2699d0;
        case 0x2699d4u: goto label_2699d4;
        case 0x2699d8u: goto label_2699d8;
        case 0x2699dcu: goto label_2699dc;
        case 0x2699e0u: goto label_2699e0;
        case 0x2699e4u: goto label_2699e4;
        case 0x2699e8u: goto label_2699e8;
        case 0x2699ecu: goto label_2699ec;
        case 0x2699f0u: goto label_2699f0;
        case 0x2699f4u: goto label_2699f4;
        case 0x2699f8u: goto label_2699f8;
        case 0x2699fcu: goto label_2699fc;
        case 0x269a00u: goto label_269a00;
        case 0x269a04u: goto label_269a04;
        case 0x269a08u: goto label_269a08;
        case 0x269a0cu: goto label_269a0c;
        case 0x269a10u: goto label_269a10;
        case 0x269a14u: goto label_269a14;
        case 0x269a18u: goto label_269a18;
        case 0x269a1cu: goto label_269a1c;
        case 0x269a20u: goto label_269a20;
        case 0x269a24u: goto label_269a24;
        case 0x269a28u: goto label_269a28;
        case 0x269a2cu: goto label_269a2c;
        case 0x269a30u: goto label_269a30;
        case 0x269a34u: goto label_269a34;
        case 0x269a38u: goto label_269a38;
        case 0x269a3cu: goto label_269a3c;
        case 0x269a40u: goto label_269a40;
        case 0x269a44u: goto label_269a44;
        case 0x269a48u: goto label_269a48;
        case 0x269a4cu: goto label_269a4c;
        case 0x269a50u: goto label_269a50;
        case 0x269a54u: goto label_269a54;
        case 0x269a58u: goto label_269a58;
        case 0x269a5cu: goto label_269a5c;
        case 0x269a60u: goto label_269a60;
        case 0x269a64u: goto label_269a64;
        case 0x269a68u: goto label_269a68;
        case 0x269a6cu: goto label_269a6c;
        case 0x269a70u: goto label_269a70;
        case 0x269a74u: goto label_269a74;
        case 0x269a78u: goto label_269a78;
        case 0x269a7cu: goto label_269a7c;
        case 0x269a80u: goto label_269a80;
        case 0x269a84u: goto label_269a84;
        case 0x269a88u: goto label_269a88;
        case 0x269a8cu: goto label_269a8c;
        case 0x269a90u: goto label_269a90;
        case 0x269a94u: goto label_269a94;
        case 0x269a98u: goto label_269a98;
        case 0x269a9cu: goto label_269a9c;
        case 0x269aa0u: goto label_269aa0;
        case 0x269aa4u: goto label_269aa4;
        case 0x269aa8u: goto label_269aa8;
        case 0x269aacu: goto label_269aac;
        case 0x269ab0u: goto label_269ab0;
        case 0x269ab4u: goto label_269ab4;
        case 0x269ab8u: goto label_269ab8;
        case 0x269abcu: goto label_269abc;
        case 0x269ac0u: goto label_269ac0;
        case 0x269ac4u: goto label_269ac4;
        case 0x269ac8u: goto label_269ac8;
        case 0x269accu: goto label_269acc;
        case 0x269ad0u: goto label_269ad0;
        case 0x269ad4u: goto label_269ad4;
        case 0x269ad8u: goto label_269ad8;
        case 0x269adcu: goto label_269adc;
        case 0x269ae0u: goto label_269ae0;
        case 0x269ae4u: goto label_269ae4;
        case 0x269ae8u: goto label_269ae8;
        case 0x269aecu: goto label_269aec;
        case 0x269af0u: goto label_269af0;
        case 0x269af4u: goto label_269af4;
        case 0x269af8u: goto label_269af8;
        case 0x269afcu: goto label_269afc;
        case 0x269b00u: goto label_269b00;
        case 0x269b04u: goto label_269b04;
        case 0x269b08u: goto label_269b08;
        case 0x269b0cu: goto label_269b0c;
        case 0x269b10u: goto label_269b10;
        case 0x269b14u: goto label_269b14;
        case 0x269b18u: goto label_269b18;
        case 0x269b1cu: goto label_269b1c;
        case 0x269b20u: goto label_269b20;
        case 0x269b24u: goto label_269b24;
        case 0x269b28u: goto label_269b28;
        case 0x269b2cu: goto label_269b2c;
        case 0x269b30u: goto label_269b30;
        case 0x269b34u: goto label_269b34;
        case 0x269b38u: goto label_269b38;
        case 0x269b3cu: goto label_269b3c;
        case 0x269b40u: goto label_269b40;
        case 0x269b44u: goto label_269b44;
        case 0x269b48u: goto label_269b48;
        case 0x269b4cu: goto label_269b4c;
        case 0x269b50u: goto label_269b50;
        case 0x269b54u: goto label_269b54;
        case 0x269b58u: goto label_269b58;
        case 0x269b5cu: goto label_269b5c;
        case 0x269b60u: goto label_269b60;
        case 0x269b64u: goto label_269b64;
        case 0x269b68u: goto label_269b68;
        case 0x269b6cu: goto label_269b6c;
        case 0x269b70u: goto label_269b70;
        case 0x269b74u: goto label_269b74;
        case 0x269b78u: goto label_269b78;
        case 0x269b7cu: goto label_269b7c;
        case 0x269b80u: goto label_269b80;
        case 0x269b84u: goto label_269b84;
        case 0x269b88u: goto label_269b88;
        case 0x269b8cu: goto label_269b8c;
        case 0x269b90u: goto label_269b90;
        case 0x269b94u: goto label_269b94;
        case 0x269b98u: goto label_269b98;
        case 0x269b9cu: goto label_269b9c;
        case 0x269ba0u: goto label_269ba0;
        case 0x269ba4u: goto label_269ba4;
        case 0x269ba8u: goto label_269ba8;
        case 0x269bacu: goto label_269bac;
        case 0x269bb0u: goto label_269bb0;
        case 0x269bb4u: goto label_269bb4;
        case 0x269bb8u: goto label_269bb8;
        case 0x269bbcu: goto label_269bbc;
        case 0x269bc0u: goto label_269bc0;
        case 0x269bc4u: goto label_269bc4;
        case 0x269bc8u: goto label_269bc8;
        case 0x269bccu: goto label_269bcc;
        case 0x269bd0u: goto label_269bd0;
        case 0x269bd4u: goto label_269bd4;
        case 0x269bd8u: goto label_269bd8;
        case 0x269bdcu: goto label_269bdc;
        case 0x269be0u: goto label_269be0;
        case 0x269be4u: goto label_269be4;
        case 0x269be8u: goto label_269be8;
        case 0x269becu: goto label_269bec;
        case 0x269bf0u: goto label_269bf0;
        case 0x269bf4u: goto label_269bf4;
        case 0x269bf8u: goto label_269bf8;
        case 0x269bfcu: goto label_269bfc;
        case 0x269c00u: goto label_269c00;
        case 0x269c04u: goto label_269c04;
        case 0x269c08u: goto label_269c08;
        case 0x269c0cu: goto label_269c0c;
        case 0x269c10u: goto label_269c10;
        case 0x269c14u: goto label_269c14;
        case 0x269c18u: goto label_269c18;
        case 0x269c1cu: goto label_269c1c;
        case 0x269c20u: goto label_269c20;
        case 0x269c24u: goto label_269c24;
        case 0x269c28u: goto label_269c28;
        case 0x269c2cu: goto label_269c2c;
        case 0x269c30u: goto label_269c30;
        case 0x269c34u: goto label_269c34;
        case 0x269c38u: goto label_269c38;
        case 0x269c3cu: goto label_269c3c;
        case 0x269c40u: goto label_269c40;
        case 0x269c44u: goto label_269c44;
        case 0x269c48u: goto label_269c48;
        case 0x269c4cu: goto label_269c4c;
        case 0x269c50u: goto label_269c50;
        case 0x269c54u: goto label_269c54;
        case 0x269c58u: goto label_269c58;
        case 0x269c5cu: goto label_269c5c;
        case 0x269c60u: goto label_269c60;
        case 0x269c64u: goto label_269c64;
        case 0x269c68u: goto label_269c68;
        case 0x269c6cu: goto label_269c6c;
        case 0x269c70u: goto label_269c70;
        case 0x269c74u: goto label_269c74;
        case 0x269c78u: goto label_269c78;
        case 0x269c7cu: goto label_269c7c;
        case 0x269c80u: goto label_269c80;
        case 0x269c84u: goto label_269c84;
        case 0x269c88u: goto label_269c88;
        case 0x269c8cu: goto label_269c8c;
        case 0x269c90u: goto label_269c90;
        case 0x269c94u: goto label_269c94;
        case 0x269c98u: goto label_269c98;
        case 0x269c9cu: goto label_269c9c;
        case 0x269ca0u: goto label_269ca0;
        case 0x269ca4u: goto label_269ca4;
        case 0x269ca8u: goto label_269ca8;
        case 0x269cacu: goto label_269cac;
        case 0x269cb0u: goto label_269cb0;
        case 0x269cb4u: goto label_269cb4;
        case 0x269cb8u: goto label_269cb8;
        case 0x269cbcu: goto label_269cbc;
        case 0x269cc0u: goto label_269cc0;
        case 0x269cc4u: goto label_269cc4;
        case 0x269cc8u: goto label_269cc8;
        case 0x269cccu: goto label_269ccc;
        case 0x269cd0u: goto label_269cd0;
        case 0x269cd4u: goto label_269cd4;
        case 0x269cd8u: goto label_269cd8;
        case 0x269cdcu: goto label_269cdc;
        case 0x269ce0u: goto label_269ce0;
        case 0x269ce4u: goto label_269ce4;
        case 0x269ce8u: goto label_269ce8;
        case 0x269cecu: goto label_269cec;
        case 0x269cf0u: goto label_269cf0;
        case 0x269cf4u: goto label_269cf4;
        case 0x269cf8u: goto label_269cf8;
        case 0x269cfcu: goto label_269cfc;
        case 0x269d00u: goto label_269d00;
        case 0x269d04u: goto label_269d04;
        case 0x269d08u: goto label_269d08;
        case 0x269d0cu: goto label_269d0c;
        case 0x269d10u: goto label_269d10;
        case 0x269d14u: goto label_269d14;
        case 0x269d18u: goto label_269d18;
        case 0x269d1cu: goto label_269d1c;
        case 0x269d20u: goto label_269d20;
        case 0x269d24u: goto label_269d24;
        case 0x269d28u: goto label_269d28;
        case 0x269d2cu: goto label_269d2c;
        case 0x269d30u: goto label_269d30;
        case 0x269d34u: goto label_269d34;
        case 0x269d38u: goto label_269d38;
        case 0x269d3cu: goto label_269d3c;
        case 0x269d40u: goto label_269d40;
        case 0x269d44u: goto label_269d44;
        case 0x269d48u: goto label_269d48;
        case 0x269d4cu: goto label_269d4c;
        case 0x269d50u: goto label_269d50;
        case 0x269d54u: goto label_269d54;
        case 0x269d58u: goto label_269d58;
        case 0x269d5cu: goto label_269d5c;
        case 0x269d60u: goto label_269d60;
        case 0x269d64u: goto label_269d64;
        case 0x269d68u: goto label_269d68;
        case 0x269d6cu: goto label_269d6c;
        case 0x269d70u: goto label_269d70;
        case 0x269d74u: goto label_269d74;
        case 0x269d78u: goto label_269d78;
        case 0x269d7cu: goto label_269d7c;
        case 0x269d80u: goto label_269d80;
        case 0x269d84u: goto label_269d84;
        case 0x269d88u: goto label_269d88;
        case 0x269d8cu: goto label_269d8c;
        case 0x269d90u: goto label_269d90;
        case 0x269d94u: goto label_269d94;
        case 0x269d98u: goto label_269d98;
        case 0x269d9cu: goto label_269d9c;
        case 0x269da0u: goto label_269da0;
        case 0x269da4u: goto label_269da4;
        case 0x269da8u: goto label_269da8;
        case 0x269dacu: goto label_269dac;
        case 0x269db0u: goto label_269db0;
        case 0x269db4u: goto label_269db4;
        case 0x269db8u: goto label_269db8;
        case 0x269dbcu: goto label_269dbc;
        case 0x269dc0u: goto label_269dc0;
        case 0x269dc4u: goto label_269dc4;
        case 0x269dc8u: goto label_269dc8;
        case 0x269dccu: goto label_269dcc;
        case 0x269dd0u: goto label_269dd0;
        case 0x269dd4u: goto label_269dd4;
        case 0x269dd8u: goto label_269dd8;
        case 0x269ddcu: goto label_269ddc;
        case 0x269de0u: goto label_269de0;
        case 0x269de4u: goto label_269de4;
        case 0x269de8u: goto label_269de8;
        case 0x269decu: goto label_269dec;
        case 0x269df0u: goto label_269df0;
        case 0x269df4u: goto label_269df4;
        case 0x269df8u: goto label_269df8;
        case 0x269dfcu: goto label_269dfc;
        case 0x269e00u: goto label_269e00;
        case 0x269e04u: goto label_269e04;
        case 0x269e08u: goto label_269e08;
        case 0x269e0cu: goto label_269e0c;
        case 0x269e10u: goto label_269e10;
        case 0x269e14u: goto label_269e14;
        case 0x269e18u: goto label_269e18;
        case 0x269e1cu: goto label_269e1c;
        case 0x269e20u: goto label_269e20;
        case 0x269e24u: goto label_269e24;
        case 0x269e28u: goto label_269e28;
        case 0x269e2cu: goto label_269e2c;
        case 0x269e30u: goto label_269e30;
        case 0x269e34u: goto label_269e34;
        case 0x269e38u: goto label_269e38;
        case 0x269e3cu: goto label_269e3c;
        case 0x269e40u: goto label_269e40;
        case 0x269e44u: goto label_269e44;
        case 0x269e48u: goto label_269e48;
        case 0x269e4cu: goto label_269e4c;
        case 0x269e50u: goto label_269e50;
        case 0x269e54u: goto label_269e54;
        case 0x269e58u: goto label_269e58;
        case 0x269e5cu: goto label_269e5c;
        case 0x269e60u: goto label_269e60;
        case 0x269e64u: goto label_269e64;
        case 0x269e68u: goto label_269e68;
        case 0x269e6cu: goto label_269e6c;
        case 0x269e70u: goto label_269e70;
        case 0x269e74u: goto label_269e74;
        case 0x269e78u: goto label_269e78;
        case 0x269e7cu: goto label_269e7c;
        case 0x269e80u: goto label_269e80;
        case 0x269e84u: goto label_269e84;
        case 0x269e88u: goto label_269e88;
        case 0x269e8cu: goto label_269e8c;
        case 0x269e90u: goto label_269e90;
        case 0x269e94u: goto label_269e94;
        case 0x269e98u: goto label_269e98;
        case 0x269e9cu: goto label_269e9c;
        case 0x269ea0u: goto label_269ea0;
        case 0x269ea4u: goto label_269ea4;
        case 0x269ea8u: goto label_269ea8;
        case 0x269eacu: goto label_269eac;
        case 0x269eb0u: goto label_269eb0;
        case 0x269eb4u: goto label_269eb4;
        case 0x269eb8u: goto label_269eb8;
        case 0x269ebcu: goto label_269ebc;
        case 0x269ec0u: goto label_269ec0;
        case 0x269ec4u: goto label_269ec4;
        case 0x269ec8u: goto label_269ec8;
        case 0x269eccu: goto label_269ecc;
        case 0x269ed0u: goto label_269ed0;
        case 0x269ed4u: goto label_269ed4;
        case 0x269ed8u: goto label_269ed8;
        case 0x269edcu: goto label_269edc;
        case 0x269ee0u: goto label_269ee0;
        case 0x269ee4u: goto label_269ee4;
        case 0x269ee8u: goto label_269ee8;
        case 0x269eecu: goto label_269eec;
        case 0x269ef0u: goto label_269ef0;
        case 0x269ef4u: goto label_269ef4;
        case 0x269ef8u: goto label_269ef8;
        case 0x269efcu: goto label_269efc;
        case 0x269f00u: goto label_269f00;
        case 0x269f04u: goto label_269f04;
        case 0x269f08u: goto label_269f08;
        case 0x269f0cu: goto label_269f0c;
        case 0x269f10u: goto label_269f10;
        case 0x269f14u: goto label_269f14;
        case 0x269f18u: goto label_269f18;
        case 0x269f1cu: goto label_269f1c;
        case 0x269f20u: goto label_269f20;
        case 0x269f24u: goto label_269f24;
        case 0x269f28u: goto label_269f28;
        case 0x269f2cu: goto label_269f2c;
        case 0x269f30u: goto label_269f30;
        case 0x269f34u: goto label_269f34;
        case 0x269f38u: goto label_269f38;
        case 0x269f3cu: goto label_269f3c;
        case 0x269f40u: goto label_269f40;
        case 0x269f44u: goto label_269f44;
        case 0x269f48u: goto label_269f48;
        case 0x269f4cu: goto label_269f4c;
        case 0x269f50u: goto label_269f50;
        case 0x269f54u: goto label_269f54;
        case 0x269f58u: goto label_269f58;
        case 0x269f5cu: goto label_269f5c;
        case 0x269f60u: goto label_269f60;
        case 0x269f64u: goto label_269f64;
        case 0x269f68u: goto label_269f68;
        case 0x269f6cu: goto label_269f6c;
        case 0x269f70u: goto label_269f70;
        case 0x269f74u: goto label_269f74;
        case 0x269f78u: goto label_269f78;
        case 0x269f7cu: goto label_269f7c;
        case 0x269f80u: goto label_269f80;
        case 0x269f84u: goto label_269f84;
        case 0x269f88u: goto label_269f88;
        case 0x269f8cu: goto label_269f8c;
        case 0x269f90u: goto label_269f90;
        case 0x269f94u: goto label_269f94;
        case 0x269f98u: goto label_269f98;
        case 0x269f9cu: goto label_269f9c;
        case 0x269fa0u: goto label_269fa0;
        case 0x269fa4u: goto label_269fa4;
        case 0x269fa8u: goto label_269fa8;
        case 0x269facu: goto label_269fac;
        case 0x269fb0u: goto label_269fb0;
        case 0x269fb4u: goto label_269fb4;
        case 0x269fb8u: goto label_269fb8;
        case 0x269fbcu: goto label_269fbc;
        case 0x269fc0u: goto label_269fc0;
        case 0x269fc4u: goto label_269fc4;
        case 0x269fc8u: goto label_269fc8;
        case 0x269fccu: goto label_269fcc;
        case 0x269fd0u: goto label_269fd0;
        case 0x269fd4u: goto label_269fd4;
        case 0x269fd8u: goto label_269fd8;
        case 0x269fdcu: goto label_269fdc;
        case 0x269fe0u: goto label_269fe0;
        case 0x269fe4u: goto label_269fe4;
        case 0x269fe8u: goto label_269fe8;
        case 0x269fecu: goto label_269fec;
        case 0x269ff0u: goto label_269ff0;
        case 0x269ff4u: goto label_269ff4;
        case 0x269ff8u: goto label_269ff8;
        case 0x269ffcu: goto label_269ffc;
        case 0x26a000u: goto label_26a000;
        case 0x26a004u: goto label_26a004;
        case 0x26a008u: goto label_26a008;
        case 0x26a00cu: goto label_26a00c;
        case 0x26a010u: goto label_26a010;
        case 0x26a014u: goto label_26a014;
        case 0x26a018u: goto label_26a018;
        case 0x26a01cu: goto label_26a01c;
        case 0x26a020u: goto label_26a020;
        case 0x26a024u: goto label_26a024;
        case 0x26a028u: goto label_26a028;
        case 0x26a02cu: goto label_26a02c;
        case 0x26a030u: goto label_26a030;
        case 0x26a034u: goto label_26a034;
        case 0x26a038u: goto label_26a038;
        case 0x26a03cu: goto label_26a03c;
        case 0x26a040u: goto label_26a040;
        case 0x26a044u: goto label_26a044;
        case 0x26a048u: goto label_26a048;
        case 0x26a04cu: goto label_26a04c;
        case 0x26a050u: goto label_26a050;
        case 0x26a054u: goto label_26a054;
        case 0x26a058u: goto label_26a058;
        case 0x26a05cu: goto label_26a05c;
        case 0x26a060u: goto label_26a060;
        case 0x26a064u: goto label_26a064;
        case 0x26a068u: goto label_26a068;
        case 0x26a06cu: goto label_26a06c;
        case 0x26a070u: goto label_26a070;
        case 0x26a074u: goto label_26a074;
        case 0x26a078u: goto label_26a078;
        case 0x26a07cu: goto label_26a07c;
        case 0x26a080u: goto label_26a080;
        case 0x26a084u: goto label_26a084;
        case 0x26a088u: goto label_26a088;
        case 0x26a08cu: goto label_26a08c;
        case 0x26a090u: goto label_26a090;
        case 0x26a094u: goto label_26a094;
        case 0x26a098u: goto label_26a098;
        case 0x26a09cu: goto label_26a09c;
        case 0x26a0a0u: goto label_26a0a0;
        case 0x26a0a4u: goto label_26a0a4;
        case 0x26a0a8u: goto label_26a0a8;
        case 0x26a0acu: goto label_26a0ac;
        case 0x26a0b0u: goto label_26a0b0;
        case 0x26a0b4u: goto label_26a0b4;
        case 0x26a0b8u: goto label_26a0b8;
        case 0x26a0bcu: goto label_26a0bc;
        case 0x26a0c0u: goto label_26a0c0;
        case 0x26a0c4u: goto label_26a0c4;
        case 0x26a0c8u: goto label_26a0c8;
        case 0x26a0ccu: goto label_26a0cc;
        case 0x26a0d0u: goto label_26a0d0;
        case 0x26a0d4u: goto label_26a0d4;
        case 0x26a0d8u: goto label_26a0d8;
        case 0x26a0dcu: goto label_26a0dc;
        case 0x26a0e0u: goto label_26a0e0;
        case 0x26a0e4u: goto label_26a0e4;
        case 0x26a0e8u: goto label_26a0e8;
        case 0x26a0ecu: goto label_26a0ec;
        case 0x26a0f0u: goto label_26a0f0;
        case 0x26a0f4u: goto label_26a0f4;
        case 0x26a0f8u: goto label_26a0f8;
        case 0x26a0fcu: goto label_26a0fc;
        case 0x26a100u: goto label_26a100;
        case 0x26a104u: goto label_26a104;
        case 0x26a108u: goto label_26a108;
        case 0x26a10cu: goto label_26a10c;
        case 0x26a110u: goto label_26a110;
        case 0x26a114u: goto label_26a114;
        case 0x26a118u: goto label_26a118;
        case 0x26a11cu: goto label_26a11c;
        case 0x26a120u: goto label_26a120;
        case 0x26a124u: goto label_26a124;
        case 0x26a128u: goto label_26a128;
        case 0x26a12cu: goto label_26a12c;
        case 0x26a130u: goto label_26a130;
        case 0x26a134u: goto label_26a134;
        case 0x26a138u: goto label_26a138;
        case 0x26a13cu: goto label_26a13c;
        case 0x26a140u: goto label_26a140;
        case 0x26a144u: goto label_26a144;
        case 0x26a148u: goto label_26a148;
        case 0x26a14cu: goto label_26a14c;
        case 0x26a150u: goto label_26a150;
        case 0x26a154u: goto label_26a154;
        case 0x26a158u: goto label_26a158;
        case 0x26a15cu: goto label_26a15c;
        case 0x26a160u: goto label_26a160;
        case 0x26a164u: goto label_26a164;
        case 0x26a168u: goto label_26a168;
        case 0x26a16cu: goto label_26a16c;
        case 0x26a170u: goto label_26a170;
        case 0x26a174u: goto label_26a174;
        case 0x26a178u: goto label_26a178;
        case 0x26a17cu: goto label_26a17c;
        case 0x26a180u: goto label_26a180;
        case 0x26a184u: goto label_26a184;
        case 0x26a188u: goto label_26a188;
        case 0x26a18cu: goto label_26a18c;
        case 0x26a190u: goto label_26a190;
        case 0x26a194u: goto label_26a194;
        case 0x26a198u: goto label_26a198;
        case 0x26a19cu: goto label_26a19c;
        case 0x26a1a0u: goto label_26a1a0;
        case 0x26a1a4u: goto label_26a1a4;
        case 0x26a1a8u: goto label_26a1a8;
        case 0x26a1acu: goto label_26a1ac;
        case 0x26a1b0u: goto label_26a1b0;
        case 0x26a1b4u: goto label_26a1b4;
        case 0x26a1b8u: goto label_26a1b8;
        case 0x26a1bcu: goto label_26a1bc;
        case 0x26a1c0u: goto label_26a1c0;
        case 0x26a1c4u: goto label_26a1c4;
        case 0x26a1c8u: goto label_26a1c8;
        case 0x26a1ccu: goto label_26a1cc;
        case 0x26a1d0u: goto label_26a1d0;
        case 0x26a1d4u: goto label_26a1d4;
        case 0x26a1d8u: goto label_26a1d8;
        case 0x26a1dcu: goto label_26a1dc;
        case 0x26a1e0u: goto label_26a1e0;
        case 0x26a1e4u: goto label_26a1e4;
        case 0x26a1e8u: goto label_26a1e8;
        case 0x26a1ecu: goto label_26a1ec;
        case 0x26a1f0u: goto label_26a1f0;
        case 0x26a1f4u: goto label_26a1f4;
        case 0x26a1f8u: goto label_26a1f8;
        case 0x26a1fcu: goto label_26a1fc;
        case 0x26a200u: goto label_26a200;
        case 0x26a204u: goto label_26a204;
        case 0x26a208u: goto label_26a208;
        case 0x26a20cu: goto label_26a20c;
        case 0x26a210u: goto label_26a210;
        case 0x26a214u: goto label_26a214;
        case 0x26a218u: goto label_26a218;
        case 0x26a21cu: goto label_26a21c;
        case 0x26a220u: goto label_26a220;
        case 0x26a224u: goto label_26a224;
        case 0x26a228u: goto label_26a228;
        case 0x26a22cu: goto label_26a22c;
        case 0x26a230u: goto label_26a230;
        case 0x26a234u: goto label_26a234;
        case 0x26a238u: goto label_26a238;
        case 0x26a23cu: goto label_26a23c;
        case 0x26a240u: goto label_26a240;
        case 0x26a244u: goto label_26a244;
        case 0x26a248u: goto label_26a248;
        case 0x26a24cu: goto label_26a24c;
        case 0x26a250u: goto label_26a250;
        case 0x26a254u: goto label_26a254;
        case 0x26a258u: goto label_26a258;
        case 0x26a25cu: goto label_26a25c;
        case 0x26a260u: goto label_26a260;
        case 0x26a264u: goto label_26a264;
        case 0x26a268u: goto label_26a268;
        case 0x26a26cu: goto label_26a26c;
        case 0x26a270u: goto label_26a270;
        case 0x26a274u: goto label_26a274;
        case 0x26a278u: goto label_26a278;
        case 0x26a27cu: goto label_26a27c;
        case 0x26a280u: goto label_26a280;
        case 0x26a284u: goto label_26a284;
        case 0x26a288u: goto label_26a288;
        case 0x26a28cu: goto label_26a28c;
        case 0x26a290u: goto label_26a290;
        case 0x26a294u: goto label_26a294;
        case 0x26a298u: goto label_26a298;
        case 0x26a29cu: goto label_26a29c;
        case 0x26a2a0u: goto label_26a2a0;
        case 0x26a2a4u: goto label_26a2a4;
        case 0x26a2a8u: goto label_26a2a8;
        case 0x26a2acu: goto label_26a2ac;
        case 0x26a2b0u: goto label_26a2b0;
        case 0x26a2b4u: goto label_26a2b4;
        case 0x26a2b8u: goto label_26a2b8;
        case 0x26a2bcu: goto label_26a2bc;
        case 0x26a2c0u: goto label_26a2c0;
        case 0x26a2c4u: goto label_26a2c4;
        case 0x26a2c8u: goto label_26a2c8;
        case 0x26a2ccu: goto label_26a2cc;
        case 0x26a2d0u: goto label_26a2d0;
        case 0x26a2d4u: goto label_26a2d4;
        case 0x26a2d8u: goto label_26a2d8;
        case 0x26a2dcu: goto label_26a2dc;
        case 0x26a2e0u: goto label_26a2e0;
        case 0x26a2e4u: goto label_26a2e4;
        case 0x26a2e8u: goto label_26a2e8;
        case 0x26a2ecu: goto label_26a2ec;
        case 0x26a2f0u: goto label_26a2f0;
        case 0x26a2f4u: goto label_26a2f4;
        case 0x26a2f8u: goto label_26a2f8;
        case 0x26a2fcu: goto label_26a2fc;
        case 0x26a300u: goto label_26a300;
        case 0x26a304u: goto label_26a304;
        case 0x26a308u: goto label_26a308;
        case 0x26a30cu: goto label_26a30c;
        case 0x26a310u: goto label_26a310;
        case 0x26a314u: goto label_26a314;
        case 0x26a318u: goto label_26a318;
        case 0x26a31cu: goto label_26a31c;
        case 0x26a320u: goto label_26a320;
        case 0x26a324u: goto label_26a324;
        case 0x26a328u: goto label_26a328;
        case 0x26a32cu: goto label_26a32c;
        case 0x26a330u: goto label_26a330;
        case 0x26a334u: goto label_26a334;
        case 0x26a338u: goto label_26a338;
        case 0x26a33cu: goto label_26a33c;
        case 0x26a340u: goto label_26a340;
        case 0x26a344u: goto label_26a344;
        case 0x26a348u: goto label_26a348;
        case 0x26a34cu: goto label_26a34c;
        case 0x26a350u: goto label_26a350;
        case 0x26a354u: goto label_26a354;
        case 0x26a358u: goto label_26a358;
        case 0x26a35cu: goto label_26a35c;
        case 0x26a360u: goto label_26a360;
        case 0x26a364u: goto label_26a364;
        case 0x26a368u: goto label_26a368;
        case 0x26a36cu: goto label_26a36c;
        case 0x26a370u: goto label_26a370;
        case 0x26a374u: goto label_26a374;
        case 0x26a378u: goto label_26a378;
        case 0x26a37cu: goto label_26a37c;
        case 0x26a380u: goto label_26a380;
        case 0x26a384u: goto label_26a384;
        case 0x26a388u: goto label_26a388;
        case 0x26a38cu: goto label_26a38c;
        case 0x26a390u: goto label_26a390;
        case 0x26a394u: goto label_26a394;
        case 0x26a398u: goto label_26a398;
        case 0x26a39cu: goto label_26a39c;
        case 0x26a3a0u: goto label_26a3a0;
        case 0x26a3a4u: goto label_26a3a4;
        case 0x26a3a8u: goto label_26a3a8;
        case 0x26a3acu: goto label_26a3ac;
        case 0x26a3b0u: goto label_26a3b0;
        case 0x26a3b4u: goto label_26a3b4;
        case 0x26a3b8u: goto label_26a3b8;
        case 0x26a3bcu: goto label_26a3bc;
        case 0x26a3c0u: goto label_26a3c0;
        case 0x26a3c4u: goto label_26a3c4;
        case 0x26a3c8u: goto label_26a3c8;
        case 0x26a3ccu: goto label_26a3cc;
        case 0x26a3d0u: goto label_26a3d0;
        case 0x26a3d4u: goto label_26a3d4;
        case 0x26a3d8u: goto label_26a3d8;
        case 0x26a3dcu: goto label_26a3dc;
        case 0x26a3e0u: goto label_26a3e0;
        case 0x26a3e4u: goto label_26a3e4;
        case 0x26a3e8u: goto label_26a3e8;
        case 0x26a3ecu: goto label_26a3ec;
        case 0x26a3f0u: goto label_26a3f0;
        case 0x26a3f4u: goto label_26a3f4;
        case 0x26a3f8u: goto label_26a3f8;
        case 0x26a3fcu: goto label_26a3fc;
        case 0x26a400u: goto label_26a400;
        case 0x26a404u: goto label_26a404;
        case 0x26a408u: goto label_26a408;
        case 0x26a40cu: goto label_26a40c;
        case 0x26a410u: goto label_26a410;
        case 0x26a414u: goto label_26a414;
        case 0x26a418u: goto label_26a418;
        case 0x26a41cu: goto label_26a41c;
        case 0x26a420u: goto label_26a420;
        case 0x26a424u: goto label_26a424;
        case 0x26a428u: goto label_26a428;
        case 0x26a42cu: goto label_26a42c;
        case 0x26a430u: goto label_26a430;
        case 0x26a434u: goto label_26a434;
        case 0x26a438u: goto label_26a438;
        case 0x26a43cu: goto label_26a43c;
        case 0x26a440u: goto label_26a440;
        case 0x26a444u: goto label_26a444;
        case 0x26a448u: goto label_26a448;
        case 0x26a44cu: goto label_26a44c;
        case 0x26a450u: goto label_26a450;
        case 0x26a454u: goto label_26a454;
        case 0x26a458u: goto label_26a458;
        case 0x26a45cu: goto label_26a45c;
        case 0x26a460u: goto label_26a460;
        case 0x26a464u: goto label_26a464;
        case 0x26a468u: goto label_26a468;
        case 0x26a46cu: goto label_26a46c;
        case 0x26a470u: goto label_26a470;
        case 0x26a474u: goto label_26a474;
        case 0x26a478u: goto label_26a478;
        case 0x26a47cu: goto label_26a47c;
        case 0x26a480u: goto label_26a480;
        case 0x26a484u: goto label_26a484;
        case 0x26a488u: goto label_26a488;
        case 0x26a48cu: goto label_26a48c;
        case 0x26a490u: goto label_26a490;
        case 0x26a494u: goto label_26a494;
        case 0x26a498u: goto label_26a498;
        case 0x26a49cu: goto label_26a49c;
        case 0x26a4a0u: goto label_26a4a0;
        case 0x26a4a4u: goto label_26a4a4;
        case 0x26a4a8u: goto label_26a4a8;
        case 0x26a4acu: goto label_26a4ac;
        case 0x26a4b0u: goto label_26a4b0;
        case 0x26a4b4u: goto label_26a4b4;
        case 0x26a4b8u: goto label_26a4b8;
        case 0x26a4bcu: goto label_26a4bc;
        case 0x26a4c0u: goto label_26a4c0;
        case 0x26a4c4u: goto label_26a4c4;
        case 0x26a4c8u: goto label_26a4c8;
        case 0x26a4ccu: goto label_26a4cc;
        case 0x26a4d0u: goto label_26a4d0;
        case 0x26a4d4u: goto label_26a4d4;
        case 0x26a4d8u: goto label_26a4d8;
        case 0x26a4dcu: goto label_26a4dc;
        case 0x26a4e0u: goto label_26a4e0;
        case 0x26a4e4u: goto label_26a4e4;
        case 0x26a4e8u: goto label_26a4e8;
        case 0x26a4ecu: goto label_26a4ec;
        case 0x26a4f0u: goto label_26a4f0;
        case 0x26a4f4u: goto label_26a4f4;
        case 0x26a4f8u: goto label_26a4f8;
        case 0x26a4fcu: goto label_26a4fc;
        case 0x26a500u: goto label_26a500;
        case 0x26a504u: goto label_26a504;
        case 0x26a508u: goto label_26a508;
        case 0x26a50cu: goto label_26a50c;
        case 0x26a510u: goto label_26a510;
        case 0x26a514u: goto label_26a514;
        case 0x26a518u: goto label_26a518;
        case 0x26a51cu: goto label_26a51c;
        case 0x26a520u: goto label_26a520;
        case 0x26a524u: goto label_26a524;
        case 0x26a528u: goto label_26a528;
        case 0x26a52cu: goto label_26a52c;
        case 0x26a530u: goto label_26a530;
        case 0x26a534u: goto label_26a534;
        case 0x26a538u: goto label_26a538;
        case 0x26a53cu: goto label_26a53c;
        case 0x26a540u: goto label_26a540;
        case 0x26a544u: goto label_26a544;
        case 0x26a548u: goto label_26a548;
        case 0x26a54cu: goto label_26a54c;
        case 0x26a550u: goto label_26a550;
        case 0x26a554u: goto label_26a554;
        case 0x26a558u: goto label_26a558;
        case 0x26a55cu: goto label_26a55c;
        case 0x26a560u: goto label_26a560;
        case 0x26a564u: goto label_26a564;
        case 0x26a568u: goto label_26a568;
        case 0x26a56cu: goto label_26a56c;
        case 0x26a570u: goto label_26a570;
        case 0x26a574u: goto label_26a574;
        case 0x26a578u: goto label_26a578;
        case 0x26a57cu: goto label_26a57c;
        case 0x26a580u: goto label_26a580;
        case 0x26a584u: goto label_26a584;
        case 0x26a588u: goto label_26a588;
        case 0x26a58cu: goto label_26a58c;
        case 0x26a590u: goto label_26a590;
        case 0x26a594u: goto label_26a594;
        case 0x26a598u: goto label_26a598;
        case 0x26a59cu: goto label_26a59c;
        case 0x26a5a0u: goto label_26a5a0;
        case 0x26a5a4u: goto label_26a5a4;
        case 0x26a5a8u: goto label_26a5a8;
        case 0x26a5acu: goto label_26a5ac;
        case 0x26a5b0u: goto label_26a5b0;
        case 0x26a5b4u: goto label_26a5b4;
        case 0x26a5b8u: goto label_26a5b8;
        case 0x26a5bcu: goto label_26a5bc;
        case 0x26a5c0u: goto label_26a5c0;
        case 0x26a5c4u: goto label_26a5c4;
        case 0x26a5c8u: goto label_26a5c8;
        case 0x26a5ccu: goto label_26a5cc;
        case 0x26a5d0u: goto label_26a5d0;
        case 0x26a5d4u: goto label_26a5d4;
        case 0x26a5d8u: goto label_26a5d8;
        case 0x26a5dcu: goto label_26a5dc;
        case 0x26a5e0u: goto label_26a5e0;
        case 0x26a5e4u: goto label_26a5e4;
        case 0x26a5e8u: goto label_26a5e8;
        case 0x26a5ecu: goto label_26a5ec;
        case 0x26a5f0u: goto label_26a5f0;
        case 0x26a5f4u: goto label_26a5f4;
        case 0x26a5f8u: goto label_26a5f8;
        case 0x26a5fcu: goto label_26a5fc;
        case 0x26a600u: goto label_26a600;
        case 0x26a604u: goto label_26a604;
        case 0x26a608u: goto label_26a608;
        case 0x26a60cu: goto label_26a60c;
        case 0x26a610u: goto label_26a610;
        case 0x26a614u: goto label_26a614;
        case 0x26a618u: goto label_26a618;
        case 0x26a61cu: goto label_26a61c;
        case 0x26a620u: goto label_26a620;
        case 0x26a624u: goto label_26a624;
        case 0x26a628u: goto label_26a628;
        case 0x26a62cu: goto label_26a62c;
        case 0x26a630u: goto label_26a630;
        case 0x26a634u: goto label_26a634;
        case 0x26a638u: goto label_26a638;
        case 0x26a63cu: goto label_26a63c;
        case 0x26a640u: goto label_26a640;
        case 0x26a644u: goto label_26a644;
        case 0x26a648u: goto label_26a648;
        case 0x26a64cu: goto label_26a64c;
        case 0x26a650u: goto label_26a650;
        case 0x26a654u: goto label_26a654;
        case 0x26a658u: goto label_26a658;
        case 0x26a65cu: goto label_26a65c;
        case 0x26a660u: goto label_26a660;
        case 0x26a664u: goto label_26a664;
        case 0x26a668u: goto label_26a668;
        case 0x26a66cu: goto label_26a66c;
        case 0x26a670u: goto label_26a670;
        case 0x26a674u: goto label_26a674;
        case 0x26a678u: goto label_26a678;
        case 0x26a67cu: goto label_26a67c;
        case 0x26a680u: goto label_26a680;
        case 0x26a684u: goto label_26a684;
        case 0x26a688u: goto label_26a688;
        case 0x26a68cu: goto label_26a68c;
        case 0x26a690u: goto label_26a690;
        case 0x26a694u: goto label_26a694;
        case 0x26a698u: goto label_26a698;
        case 0x26a69cu: goto label_26a69c;
        case 0x26a6a0u: goto label_26a6a0;
        case 0x26a6a4u: goto label_26a6a4;
        case 0x26a6a8u: goto label_26a6a8;
        case 0x26a6acu: goto label_26a6ac;
        case 0x26a6b0u: goto label_26a6b0;
        case 0x26a6b4u: goto label_26a6b4;
        case 0x26a6b8u: goto label_26a6b8;
        case 0x26a6bcu: goto label_26a6bc;
        case 0x26a6c0u: goto label_26a6c0;
        case 0x26a6c4u: goto label_26a6c4;
        case 0x26a6c8u: goto label_26a6c8;
        case 0x26a6ccu: goto label_26a6cc;
        case 0x26a6d0u: goto label_26a6d0;
        case 0x26a6d4u: goto label_26a6d4;
        case 0x26a6d8u: goto label_26a6d8;
        case 0x26a6dcu: goto label_26a6dc;
        case 0x26a6e0u: goto label_26a6e0;
        case 0x26a6e4u: goto label_26a6e4;
        case 0x26a6e8u: goto label_26a6e8;
        case 0x26a6ecu: goto label_26a6ec;
        case 0x26a6f0u: goto label_26a6f0;
        case 0x26a6f4u: goto label_26a6f4;
        case 0x26a6f8u: goto label_26a6f8;
        case 0x26a6fcu: goto label_26a6fc;
        case 0x26a700u: goto label_26a700;
        case 0x26a704u: goto label_26a704;
        case 0x26a708u: goto label_26a708;
        case 0x26a70cu: goto label_26a70c;
        case 0x26a710u: goto label_26a710;
        case 0x26a714u: goto label_26a714;
        case 0x26a718u: goto label_26a718;
        case 0x26a71cu: goto label_26a71c;
        case 0x26a720u: goto label_26a720;
        case 0x26a724u: goto label_26a724;
        case 0x26a728u: goto label_26a728;
        case 0x26a72cu: goto label_26a72c;
        case 0x26a730u: goto label_26a730;
        case 0x26a734u: goto label_26a734;
        case 0x26a738u: goto label_26a738;
        case 0x26a73cu: goto label_26a73c;
        case 0x26a740u: goto label_26a740;
        case 0x26a744u: goto label_26a744;
        case 0x26a748u: goto label_26a748;
        case 0x26a74cu: goto label_26a74c;
        case 0x26a750u: goto label_26a750;
        case 0x26a754u: goto label_26a754;
        case 0x26a758u: goto label_26a758;
        case 0x26a75cu: goto label_26a75c;
        case 0x26a760u: goto label_26a760;
        case 0x26a764u: goto label_26a764;
        case 0x26a768u: goto label_26a768;
        case 0x26a76cu: goto label_26a76c;
        case 0x26a770u: goto label_26a770;
        case 0x26a774u: goto label_26a774;
        case 0x26a778u: goto label_26a778;
        case 0x26a77cu: goto label_26a77c;
        case 0x26a780u: goto label_26a780;
        case 0x26a784u: goto label_26a784;
        case 0x26a788u: goto label_26a788;
        case 0x26a78cu: goto label_26a78c;
        case 0x26a790u: goto label_26a790;
        case 0x26a794u: goto label_26a794;
        case 0x26a798u: goto label_26a798;
        case 0x26a79cu: goto label_26a79c;
        case 0x26a7a0u: goto label_26a7a0;
        case 0x26a7a4u: goto label_26a7a4;
        case 0x26a7a8u: goto label_26a7a8;
        case 0x26a7acu: goto label_26a7ac;
        case 0x26a7b0u: goto label_26a7b0;
        case 0x26a7b4u: goto label_26a7b4;
        case 0x26a7b8u: goto label_26a7b8;
        case 0x26a7bcu: goto label_26a7bc;
        case 0x26a7c0u: goto label_26a7c0;
        case 0x26a7c4u: goto label_26a7c4;
        case 0x26a7c8u: goto label_26a7c8;
        case 0x26a7ccu: goto label_26a7cc;
        case 0x26a7d0u: goto label_26a7d0;
        case 0x26a7d4u: goto label_26a7d4;
        case 0x26a7d8u: goto label_26a7d8;
        case 0x26a7dcu: goto label_26a7dc;
        case 0x26a7e0u: goto label_26a7e0;
        case 0x26a7e4u: goto label_26a7e4;
        case 0x26a7e8u: goto label_26a7e8;
        case 0x26a7ecu: goto label_26a7ec;
        case 0x26a7f0u: goto label_26a7f0;
        case 0x26a7f4u: goto label_26a7f4;
        case 0x26a7f8u: goto label_26a7f8;
        case 0x26a7fcu: goto label_26a7fc;
        case 0x26a800u: goto label_26a800;
        case 0x26a804u: goto label_26a804;
        case 0x26a808u: goto label_26a808;
        case 0x26a80cu: goto label_26a80c;
        case 0x26a810u: goto label_26a810;
        case 0x26a814u: goto label_26a814;
        case 0x26a818u: goto label_26a818;
        case 0x26a81cu: goto label_26a81c;
        case 0x26a820u: goto label_26a820;
        case 0x26a824u: goto label_26a824;
        case 0x26a828u: goto label_26a828;
        case 0x26a82cu: goto label_26a82c;
        case 0x26a830u: goto label_26a830;
        case 0x26a834u: goto label_26a834;
        case 0x26a838u: goto label_26a838;
        case 0x26a83cu: goto label_26a83c;
        case 0x26a840u: goto label_26a840;
        case 0x26a844u: goto label_26a844;
        case 0x26a848u: goto label_26a848;
        case 0x26a84cu: goto label_26a84c;
        case 0x26a850u: goto label_26a850;
        case 0x26a854u: goto label_26a854;
        case 0x26a858u: goto label_26a858;
        case 0x26a85cu: goto label_26a85c;
        case 0x26a860u: goto label_26a860;
        case 0x26a864u: goto label_26a864;
        case 0x26a868u: goto label_26a868;
        case 0x26a86cu: goto label_26a86c;
        case 0x26a870u: goto label_26a870;
        case 0x26a874u: goto label_26a874;
        case 0x26a878u: goto label_26a878;
        case 0x26a87cu: goto label_26a87c;
        case 0x26a880u: goto label_26a880;
        case 0x26a884u: goto label_26a884;
        case 0x26a888u: goto label_26a888;
        case 0x26a88cu: goto label_26a88c;
        case 0x26a890u: goto label_26a890;
        case 0x26a894u: goto label_26a894;
        case 0x26a898u: goto label_26a898;
        case 0x26a89cu: goto label_26a89c;
        case 0x26a8a0u: goto label_26a8a0;
        case 0x26a8a4u: goto label_26a8a4;
        case 0x26a8a8u: goto label_26a8a8;
        case 0x26a8acu: goto label_26a8ac;
        case 0x26a8b0u: goto label_26a8b0;
        case 0x26a8b4u: goto label_26a8b4;
        case 0x26a8b8u: goto label_26a8b8;
        case 0x26a8bcu: goto label_26a8bc;
        case 0x26a8c0u: goto label_26a8c0;
        case 0x26a8c4u: goto label_26a8c4;
        case 0x26a8c8u: goto label_26a8c8;
        case 0x26a8ccu: goto label_26a8cc;
        case 0x26a8d0u: goto label_26a8d0;
        case 0x26a8d4u: goto label_26a8d4;
        case 0x26a8d8u: goto label_26a8d8;
        case 0x26a8dcu: goto label_26a8dc;
        case 0x26a8e0u: goto label_26a8e0;
        case 0x26a8e4u: goto label_26a8e4;
        case 0x26a8e8u: goto label_26a8e8;
        case 0x26a8ecu: goto label_26a8ec;
        case 0x26a8f0u: goto label_26a8f0;
        case 0x26a8f4u: goto label_26a8f4;
        case 0x26a8f8u: goto label_26a8f8;
        case 0x26a8fcu: goto label_26a8fc;
        case 0x26a900u: goto label_26a900;
        case 0x26a904u: goto label_26a904;
        case 0x26a908u: goto label_26a908;
        case 0x26a90cu: goto label_26a90c;
        case 0x26a910u: goto label_26a910;
        case 0x26a914u: goto label_26a914;
        case 0x26a918u: goto label_26a918;
        case 0x26a91cu: goto label_26a91c;
        case 0x26a920u: goto label_26a920;
        case 0x26a924u: goto label_26a924;
        case 0x26a928u: goto label_26a928;
        case 0x26a92cu: goto label_26a92c;
        case 0x26a930u: goto label_26a930;
        case 0x26a934u: goto label_26a934;
        case 0x26a938u: goto label_26a938;
        case 0x26a93cu: goto label_26a93c;
        case 0x26a940u: goto label_26a940;
        case 0x26a944u: goto label_26a944;
        case 0x26a948u: goto label_26a948;
        case 0x26a94cu: goto label_26a94c;
        case 0x26a950u: goto label_26a950;
        case 0x26a954u: goto label_26a954;
        case 0x26a958u: goto label_26a958;
        case 0x26a95cu: goto label_26a95c;
        case 0x26a960u: goto label_26a960;
        case 0x26a964u: goto label_26a964;
        case 0x26a968u: goto label_26a968;
        case 0x26a96cu: goto label_26a96c;
        case 0x26a970u: goto label_26a970;
        case 0x26a974u: goto label_26a974;
        case 0x26a978u: goto label_26a978;
        case 0x26a97cu: goto label_26a97c;
        case 0x26a980u: goto label_26a980;
        case 0x26a984u: goto label_26a984;
        case 0x26a988u: goto label_26a988;
        case 0x26a98cu: goto label_26a98c;
        case 0x26a990u: goto label_26a990;
        case 0x26a994u: goto label_26a994;
        case 0x26a998u: goto label_26a998;
        case 0x26a99cu: goto label_26a99c;
        case 0x26a9a0u: goto label_26a9a0;
        case 0x26a9a4u: goto label_26a9a4;
        case 0x26a9a8u: goto label_26a9a8;
        case 0x26a9acu: goto label_26a9ac;
        case 0x26a9b0u: goto label_26a9b0;
        case 0x26a9b4u: goto label_26a9b4;
        case 0x26a9b8u: goto label_26a9b8;
        case 0x26a9bcu: goto label_26a9bc;
        case 0x26a9c0u: goto label_26a9c0;
        case 0x26a9c4u: goto label_26a9c4;
        case 0x26a9c8u: goto label_26a9c8;
        case 0x26a9ccu: goto label_26a9cc;
        case 0x26a9d0u: goto label_26a9d0;
        case 0x26a9d4u: goto label_26a9d4;
        case 0x26a9d8u: goto label_26a9d8;
        case 0x26a9dcu: goto label_26a9dc;
        case 0x26a9e0u: goto label_26a9e0;
        case 0x26a9e4u: goto label_26a9e4;
        case 0x26a9e8u: goto label_26a9e8;
        case 0x26a9ecu: goto label_26a9ec;
        case 0x26a9f0u: goto label_26a9f0;
        case 0x26a9f4u: goto label_26a9f4;
        case 0x26a9f8u: goto label_26a9f8;
        case 0x26a9fcu: goto label_26a9fc;
        case 0x26aa00u: goto label_26aa00;
        case 0x26aa04u: goto label_26aa04;
        case 0x26aa08u: goto label_26aa08;
        case 0x26aa0cu: goto label_26aa0c;
        case 0x26aa10u: goto label_26aa10;
        case 0x26aa14u: goto label_26aa14;
        case 0x26aa18u: goto label_26aa18;
        case 0x26aa1cu: goto label_26aa1c;
        case 0x26aa20u: goto label_26aa20;
        case 0x26aa24u: goto label_26aa24;
        case 0x26aa28u: goto label_26aa28;
        case 0x26aa2cu: goto label_26aa2c;
        case 0x26aa30u: goto label_26aa30;
        case 0x26aa34u: goto label_26aa34;
        case 0x26aa38u: goto label_26aa38;
        case 0x26aa3cu: goto label_26aa3c;
        case 0x26aa40u: goto label_26aa40;
        case 0x26aa44u: goto label_26aa44;
        case 0x26aa48u: goto label_26aa48;
        case 0x26aa4cu: goto label_26aa4c;
        case 0x26aa50u: goto label_26aa50;
        case 0x26aa54u: goto label_26aa54;
        case 0x26aa58u: goto label_26aa58;
        case 0x26aa5cu: goto label_26aa5c;
        case 0x26aa60u: goto label_26aa60;
        case 0x26aa64u: goto label_26aa64;
        case 0x26aa68u: goto label_26aa68;
        case 0x26aa6cu: goto label_26aa6c;
        case 0x26aa70u: goto label_26aa70;
        case 0x26aa74u: goto label_26aa74;
        case 0x26aa78u: goto label_26aa78;
        case 0x26aa7cu: goto label_26aa7c;
        case 0x26aa80u: goto label_26aa80;
        case 0x26aa84u: goto label_26aa84;
        case 0x26aa88u: goto label_26aa88;
        case 0x26aa8cu: goto label_26aa8c;
        case 0x26aa90u: goto label_26aa90;
        case 0x26aa94u: goto label_26aa94;
        case 0x26aa98u: goto label_26aa98;
        case 0x26aa9cu: goto label_26aa9c;
        case 0x26aaa0u: goto label_26aaa0;
        case 0x26aaa4u: goto label_26aaa4;
        case 0x26aaa8u: goto label_26aaa8;
        case 0x26aaacu: goto label_26aaac;
        case 0x26aab0u: goto label_26aab0;
        case 0x26aab4u: goto label_26aab4;
        case 0x26aab8u: goto label_26aab8;
        case 0x26aabcu: goto label_26aabc;
        case 0x26aac0u: goto label_26aac0;
        case 0x26aac4u: goto label_26aac4;
        case 0x26aac8u: goto label_26aac8;
        case 0x26aaccu: goto label_26aacc;
        case 0x26aad0u: goto label_26aad0;
        case 0x26aad4u: goto label_26aad4;
        case 0x26aad8u: goto label_26aad8;
        case 0x26aadcu: goto label_26aadc;
        case 0x26aae0u: goto label_26aae0;
        case 0x26aae4u: goto label_26aae4;
        case 0x26aae8u: goto label_26aae8;
        case 0x26aaecu: goto label_26aaec;
        case 0x26aaf0u: goto label_26aaf0;
        case 0x26aaf4u: goto label_26aaf4;
        case 0x26aaf8u: goto label_26aaf8;
        case 0x26aafcu: goto label_26aafc;
        case 0x26ab00u: goto label_26ab00;
        case 0x26ab04u: goto label_26ab04;
        case 0x26ab08u: goto label_26ab08;
        case 0x26ab0cu: goto label_26ab0c;
        case 0x26ab10u: goto label_26ab10;
        case 0x26ab14u: goto label_26ab14;
        case 0x26ab18u: goto label_26ab18;
        case 0x26ab1cu: goto label_26ab1c;
        case 0x26ab20u: goto label_26ab20;
        case 0x26ab24u: goto label_26ab24;
        case 0x26ab28u: goto label_26ab28;
        case 0x26ab2cu: goto label_26ab2c;
        case 0x26ab30u: goto label_26ab30;
        case 0x26ab34u: goto label_26ab34;
        case 0x26ab38u: goto label_26ab38;
        case 0x26ab3cu: goto label_26ab3c;
        case 0x26ab40u: goto label_26ab40;
        case 0x26ab44u: goto label_26ab44;
        case 0x26ab48u: goto label_26ab48;
        case 0x26ab4cu: goto label_26ab4c;
        case 0x26ab50u: goto label_26ab50;
        case 0x26ab54u: goto label_26ab54;
        case 0x26ab58u: goto label_26ab58;
        case 0x26ab5cu: goto label_26ab5c;
        case 0x26ab60u: goto label_26ab60;
        case 0x26ab64u: goto label_26ab64;
        case 0x26ab68u: goto label_26ab68;
        case 0x26ab6cu: goto label_26ab6c;
        case 0x26ab70u: goto label_26ab70;
        case 0x26ab74u: goto label_26ab74;
        case 0x26ab78u: goto label_26ab78;
        case 0x26ab7cu: goto label_26ab7c;
        case 0x26ab80u: goto label_26ab80;
        case 0x26ab84u: goto label_26ab84;
        case 0x26ab88u: goto label_26ab88;
        case 0x26ab8cu: goto label_26ab8c;
        case 0x26ab90u: goto label_26ab90;
        case 0x26ab94u: goto label_26ab94;
        case 0x26ab98u: goto label_26ab98;
        case 0x26ab9cu: goto label_26ab9c;
        case 0x26aba0u: goto label_26aba0;
        case 0x26aba4u: goto label_26aba4;
        case 0x26aba8u: goto label_26aba8;
        case 0x26abacu: goto label_26abac;
        case 0x26abb0u: goto label_26abb0;
        case 0x26abb4u: goto label_26abb4;
        case 0x26abb8u: goto label_26abb8;
        case 0x26abbcu: goto label_26abbc;
        case 0x26abc0u: goto label_26abc0;
        case 0x26abc4u: goto label_26abc4;
        case 0x26abc8u: goto label_26abc8;
        case 0x26abccu: goto label_26abcc;
        case 0x26abd0u: goto label_26abd0;
        case 0x26abd4u: goto label_26abd4;
        case 0x26abd8u: goto label_26abd8;
        case 0x26abdcu: goto label_26abdc;
        case 0x26abe0u: goto label_26abe0;
        case 0x26abe4u: goto label_26abe4;
        case 0x26abe8u: goto label_26abe8;
        case 0x26abecu: goto label_26abec;
        case 0x26abf0u: goto label_26abf0;
        case 0x26abf4u: goto label_26abf4;
        case 0x26abf8u: goto label_26abf8;
        case 0x26abfcu: goto label_26abfc;
        case 0x26ac00u: goto label_26ac00;
        case 0x26ac04u: goto label_26ac04;
        case 0x26ac08u: goto label_26ac08;
        case 0x26ac0cu: goto label_26ac0c;
        case 0x26ac10u: goto label_26ac10;
        case 0x26ac14u: goto label_26ac14;
        case 0x26ac18u: goto label_26ac18;
        case 0x26ac1cu: goto label_26ac1c;
        case 0x26ac20u: goto label_26ac20;
        case 0x26ac24u: goto label_26ac24;
        case 0x26ac28u: goto label_26ac28;
        case 0x26ac2cu: goto label_26ac2c;
        case 0x26ac30u: goto label_26ac30;
        case 0x26ac34u: goto label_26ac34;
        case 0x26ac38u: goto label_26ac38;
        case 0x26ac3cu: goto label_26ac3c;
        case 0x26ac40u: goto label_26ac40;
        case 0x26ac44u: goto label_26ac44;
        case 0x26ac48u: goto label_26ac48;
        case 0x26ac4cu: goto label_26ac4c;
        case 0x26ac50u: goto label_26ac50;
        case 0x26ac54u: goto label_26ac54;
        case 0x26ac58u: goto label_26ac58;
        case 0x26ac5cu: goto label_26ac5c;
        case 0x26ac60u: goto label_26ac60;
        case 0x26ac64u: goto label_26ac64;
        case 0x26ac68u: goto label_26ac68;
        case 0x26ac6cu: goto label_26ac6c;
        case 0x26ac70u: goto label_26ac70;
        case 0x26ac74u: goto label_26ac74;
        case 0x26ac78u: goto label_26ac78;
        case 0x26ac7cu: goto label_26ac7c;
        case 0x26ac80u: goto label_26ac80;
        case 0x26ac84u: goto label_26ac84;
        case 0x26ac88u: goto label_26ac88;
        case 0x26ac8cu: goto label_26ac8c;
        case 0x26ac90u: goto label_26ac90;
        case 0x26ac94u: goto label_26ac94;
        case 0x26ac98u: goto label_26ac98;
        case 0x26ac9cu: goto label_26ac9c;
        case 0x26aca0u: goto label_26aca0;
        case 0x26aca4u: goto label_26aca4;
        case 0x26aca8u: goto label_26aca8;
        case 0x26acacu: goto label_26acac;
        case 0x26acb0u: goto label_26acb0;
        case 0x26acb4u: goto label_26acb4;
        case 0x26acb8u: goto label_26acb8;
        case 0x26acbcu: goto label_26acbc;
        case 0x26acc0u: goto label_26acc0;
        case 0x26acc4u: goto label_26acc4;
        case 0x26acc8u: goto label_26acc8;
        case 0x26acccu: goto label_26accc;
        case 0x26acd0u: goto label_26acd0;
        case 0x26acd4u: goto label_26acd4;
        case 0x26acd8u: goto label_26acd8;
        case 0x26acdcu: goto label_26acdc;
        case 0x26ace0u: goto label_26ace0;
        case 0x26ace4u: goto label_26ace4;
        case 0x26ace8u: goto label_26ace8;
        case 0x26acecu: goto label_26acec;
        case 0x26acf0u: goto label_26acf0;
        case 0x26acf4u: goto label_26acf4;
        case 0x26acf8u: goto label_26acf8;
        case 0x26acfcu: goto label_26acfc;
        case 0x26ad00u: goto label_26ad00;
        case 0x26ad04u: goto label_26ad04;
        case 0x26ad08u: goto label_26ad08;
        case 0x26ad0cu: goto label_26ad0c;
        case 0x26ad10u: goto label_26ad10;
        case 0x26ad14u: goto label_26ad14;
        case 0x26ad18u: goto label_26ad18;
        case 0x26ad1cu: goto label_26ad1c;
        case 0x26ad20u: goto label_26ad20;
        case 0x26ad24u: goto label_26ad24;
        case 0x26ad28u: goto label_26ad28;
        case 0x26ad2cu: goto label_26ad2c;
        case 0x26ad30u: goto label_26ad30;
        case 0x26ad34u: goto label_26ad34;
        case 0x26ad38u: goto label_26ad38;
        case 0x26ad3cu: goto label_26ad3c;
        case 0x26ad40u: goto label_26ad40;
        case 0x26ad44u: goto label_26ad44;
        case 0x26ad48u: goto label_26ad48;
        case 0x26ad4cu: goto label_26ad4c;
        case 0x26ad50u: goto label_26ad50;
        case 0x26ad54u: goto label_26ad54;
        case 0x26ad58u: goto label_26ad58;
        case 0x26ad5cu: goto label_26ad5c;
        case 0x26ad60u: goto label_26ad60;
        case 0x26ad64u: goto label_26ad64;
        case 0x26ad68u: goto label_26ad68;
        case 0x26ad6cu: goto label_26ad6c;
        case 0x26ad70u: goto label_26ad70;
        case 0x26ad74u: goto label_26ad74;
        case 0x26ad78u: goto label_26ad78;
        case 0x26ad7cu: goto label_26ad7c;
        case 0x26ad80u: goto label_26ad80;
        case 0x26ad84u: goto label_26ad84;
        case 0x26ad88u: goto label_26ad88;
        case 0x26ad8cu: goto label_26ad8c;
        case 0x26ad90u: goto label_26ad90;
        case 0x26ad94u: goto label_26ad94;
        case 0x26ad98u: goto label_26ad98;
        case 0x26ad9cu: goto label_26ad9c;
        case 0x26ada0u: goto label_26ada0;
        case 0x26ada4u: goto label_26ada4;
        case 0x26ada8u: goto label_26ada8;
        case 0x26adacu: goto label_26adac;
        case 0x26adb0u: goto label_26adb0;
        case 0x26adb4u: goto label_26adb4;
        case 0x26adb8u: goto label_26adb8;
        case 0x26adbcu: goto label_26adbc;
        case 0x26adc0u: goto label_26adc0;
        case 0x26adc4u: goto label_26adc4;
        case 0x26adc8u: goto label_26adc8;
        case 0x26adccu: goto label_26adcc;
        case 0x26add0u: goto label_26add0;
        case 0x26add4u: goto label_26add4;
        case 0x26add8u: goto label_26add8;
        case 0x26addcu: goto label_26addc;
        case 0x26ade0u: goto label_26ade0;
        case 0x26ade4u: goto label_26ade4;
        case 0x26ade8u: goto label_26ade8;
        case 0x26adecu: goto label_26adec;
        case 0x26adf0u: goto label_26adf0;
        case 0x26adf4u: goto label_26adf4;
        case 0x26adf8u: goto label_26adf8;
        case 0x26adfcu: goto label_26adfc;
        case 0x26ae00u: goto label_26ae00;
        case 0x26ae04u: goto label_26ae04;
        case 0x26ae08u: goto label_26ae08;
        case 0x26ae0cu: goto label_26ae0c;
        case 0x26ae10u: goto label_26ae10;
        case 0x26ae14u: goto label_26ae14;
        case 0x26ae18u: goto label_26ae18;
        case 0x26ae1cu: goto label_26ae1c;
        case 0x26ae20u: goto label_26ae20;
        case 0x26ae24u: goto label_26ae24;
        case 0x26ae28u: goto label_26ae28;
        case 0x26ae2cu: goto label_26ae2c;
        case 0x26ae30u: goto label_26ae30;
        case 0x26ae34u: goto label_26ae34;
        case 0x26ae38u: goto label_26ae38;
        case 0x26ae3cu: goto label_26ae3c;
        case 0x26ae40u: goto label_26ae40;
        case 0x26ae44u: goto label_26ae44;
        case 0x26ae48u: goto label_26ae48;
        case 0x26ae4cu: goto label_26ae4c;
        case 0x26ae50u: goto label_26ae50;
        case 0x26ae54u: goto label_26ae54;
        case 0x26ae58u: goto label_26ae58;
        case 0x26ae5cu: goto label_26ae5c;
        case 0x26ae60u: goto label_26ae60;
        case 0x26ae64u: goto label_26ae64;
        case 0x26ae68u: goto label_26ae68;
        case 0x26ae6cu: goto label_26ae6c;
        case 0x26ae70u: goto label_26ae70;
        case 0x26ae74u: goto label_26ae74;
        case 0x26ae78u: goto label_26ae78;
        case 0x26ae7cu: goto label_26ae7c;
        case 0x26ae80u: goto label_26ae80;
        case 0x26ae84u: goto label_26ae84;
        case 0x26ae88u: goto label_26ae88;
        case 0x26ae8cu: goto label_26ae8c;
        case 0x26ae90u: goto label_26ae90;
        case 0x26ae94u: goto label_26ae94;
        case 0x26ae98u: goto label_26ae98;
        case 0x26ae9cu: goto label_26ae9c;
        case 0x26aea0u: goto label_26aea0;
        case 0x26aea4u: goto label_26aea4;
        case 0x26aea8u: goto label_26aea8;
        case 0x26aeacu: goto label_26aeac;
        case 0x26aeb0u: goto label_26aeb0;
        case 0x26aeb4u: goto label_26aeb4;
        case 0x26aeb8u: goto label_26aeb8;
        case 0x26aebcu: goto label_26aebc;
        case 0x26aec0u: goto label_26aec0;
        case 0x26aec4u: goto label_26aec4;
        case 0x26aec8u: goto label_26aec8;
        case 0x26aeccu: goto label_26aecc;
        case 0x26aed0u: goto label_26aed0;
        case 0x26aed4u: goto label_26aed4;
        case 0x26aed8u: goto label_26aed8;
        case 0x26aedcu: goto label_26aedc;
        case 0x26aee0u: goto label_26aee0;
        case 0x26aee4u: goto label_26aee4;
        case 0x26aee8u: goto label_26aee8;
        case 0x26aeecu: goto label_26aeec;
        case 0x26aef0u: goto label_26aef0;
        case 0x26aef4u: goto label_26aef4;
        case 0x26aef8u: goto label_26aef8;
        case 0x26aefcu: goto label_26aefc;
        case 0x26af00u: goto label_26af00;
        case 0x26af04u: goto label_26af04;
        case 0x26af08u: goto label_26af08;
        case 0x26af0cu: goto label_26af0c;
        case 0x26af10u: goto label_26af10;
        case 0x26af14u: goto label_26af14;
        case 0x26af18u: goto label_26af18;
        case 0x26af1cu: goto label_26af1c;
        case 0x26af20u: goto label_26af20;
        case 0x26af24u: goto label_26af24;
        case 0x26af28u: goto label_26af28;
        case 0x26af2cu: goto label_26af2c;
        case 0x26af30u: goto label_26af30;
        case 0x26af34u: goto label_26af34;
        case 0x26af38u: goto label_26af38;
        case 0x26af3cu: goto label_26af3c;
        case 0x26af40u: goto label_26af40;
        case 0x26af44u: goto label_26af44;
        case 0x26af48u: goto label_26af48;
        case 0x26af4cu: goto label_26af4c;
        case 0x26af50u: goto label_26af50;
        case 0x26af54u: goto label_26af54;
        case 0x26af58u: goto label_26af58;
        case 0x26af5cu: goto label_26af5c;
        case 0x26af60u: goto label_26af60;
        case 0x26af64u: goto label_26af64;
        case 0x26af68u: goto label_26af68;
        case 0x26af6cu: goto label_26af6c;
        case 0x26af70u: goto label_26af70;
        case 0x26af74u: goto label_26af74;
        case 0x26af78u: goto label_26af78;
        case 0x26af7cu: goto label_26af7c;
        case 0x26af80u: goto label_26af80;
        case 0x26af84u: goto label_26af84;
        case 0x26af88u: goto label_26af88;
        case 0x26af8cu: goto label_26af8c;
        case 0x26af90u: goto label_26af90;
        case 0x26af94u: goto label_26af94;
        case 0x26af98u: goto label_26af98;
        case 0x26af9cu: goto label_26af9c;
        case 0x26afa0u: goto label_26afa0;
        case 0x26afa4u: goto label_26afa4;
        case 0x26afa8u: goto label_26afa8;
        case 0x26afacu: goto label_26afac;
        case 0x26afb0u: goto label_26afb0;
        case 0x26afb4u: goto label_26afb4;
        case 0x26afb8u: goto label_26afb8;
        case 0x26afbcu: goto label_26afbc;
        case 0x26afc0u: goto label_26afc0;
        case 0x26afc4u: goto label_26afc4;
        case 0x26afc8u: goto label_26afc8;
        case 0x26afccu: goto label_26afcc;
        case 0x26afd0u: goto label_26afd0;
        case 0x26afd4u: goto label_26afd4;
        case 0x26afd8u: goto label_26afd8;
        case 0x26afdcu: goto label_26afdc;
        case 0x26afe0u: goto label_26afe0;
        case 0x26afe4u: goto label_26afe4;
        case 0x26afe8u: goto label_26afe8;
        case 0x26afecu: goto label_26afec;
        default: break;
    }

    ctx->pc = 0x2695d0u;

label_2695d0:
    // 0x2695d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2695d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2695d4:
    // 0x2695d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2695d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2695d8:
    // 0x2695d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2695d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2695dc:
    // 0x2695dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2695dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2695e0:
    // 0x2695e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2695e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2695e4:
    // 0x2695e4: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x2695e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_2695e8:
    // 0x2695e8: 0x8c5003e0  lw          $s0, 0x3E0($v0)
    ctx->pc = 0x2695e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 992)));
label_2695ec:
    // 0x2695ec: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2695ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2695f0:
    // 0x2695f0: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_2695f4:
    if (ctx->pc == 0x2695F4u) {
        ctx->pc = 0x2695F4u;
            // 0x2695f4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x2695F8u;
        goto label_2695f8;
    }
    ctx->pc = 0x2695F0u;
    {
        const bool branch_taken_0x2695f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2695F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2695F0u;
            // 0x2695f4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695f0) {
            ctx->pc = 0x269630u;
            goto label_269630;
        }
    }
    ctx->pc = 0x2695F8u;
label_2695f8:
    // 0x2695f8: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x2695f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_2695fc:
    // 0x2695fc: 0xc043736  jal         func_10DCD8
label_269600:
    if (ctx->pc == 0x269600u) {
        ctx->pc = 0x269600u;
            // 0x269600: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->pc = 0x269604u;
        goto label_269604;
    }
    ctx->pc = 0x2695FCu;
    SET_GPR_U32(ctx, 31, 0x269604u);
    ctx->pc = 0x269600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2695FCu;
            // 0x269600: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (runtime->hasFunction(0x10DCD8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269604u; }
        if (ctx->pc != 0x269604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DCD8_0x10dcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269604u; }
        if (ctx->pc != 0x269604u) { return; }
    }
    ctx->pc = 0x269604u;
label_269604:
    // 0x269604: 0xc04332c  jal         func_10CCB0
label_269608:
    if (ctx->pc == 0x269608u) {
        ctx->pc = 0x269608u;
            // 0x269608: 0x8e2401b0  lw          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->pc = 0x26960Cu;
        goto label_26960c;
    }
    ctx->pc = 0x269604u;
    SET_GPR_U32(ctx, 31, 0x26960Cu);
    ctx->pc = 0x269608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269604u;
            // 0x269608: 0x8e2401b0  lw          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26960Cu; }
        if (ctx->pc != 0x26960Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26960Cu; }
        if (ctx->pc != 0x26960Cu) { return; }
    }
    ctx->pc = 0x26960Cu;
label_26960c:
    // 0x26960c: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x26960cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_269610:
    // 0x269610: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_269614:
    if (ctx->pc == 0x269614u) {
        ctx->pc = 0x269614u;
            // 0x269614: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269618u;
        goto label_269618;
    }
    ctx->pc = 0x269610u;
    {
        const bool branch_taken_0x269610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x269614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269610u;
            // 0x269614: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269610) {
            ctx->pc = 0x269628u;
            goto label_269628;
        }
    }
    ctx->pc = 0x269618u;
label_269618:
    // 0x269618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26961c:
    // 0x26961c: 0xc09a536  jal         func_2694D8
label_269620:
    if (ctx->pc == 0x269620u) {
        ctx->pc = 0x269620u;
            // 0x269620: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x269624u;
        goto label_269624;
    }
    ctx->pc = 0x26961Cu;
    SET_GPR_U32(ctx, 31, 0x269624u);
    ctx->pc = 0x269620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26961Cu;
            // 0x269620: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2694D8u;
    if (runtime->hasFunction(0x2694D8u)) {
        auto targetFn = runtime->lookupFunction(0x2694D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269624u; }
        if (ctx->pc != 0x269624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002694D8_0x2694d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269624u; }
        if (ctx->pc != 0x269624u) { return; }
    }
    ctx->pc = 0x269624u;
label_269624:
    // 0x269624: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x269624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269628:
    // 0x269628: 0x1c40fff3  bgtz        $v0, . + 4 + (-0xD << 2)
label_26962c:
    if (ctx->pc == 0x26962Cu) {
        ctx->pc = 0x26962Cu;
            // 0x26962c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x269630u;
        goto label_269630;
    }
    ctx->pc = 0x269628u;
    {
        const bool branch_taken_0x269628 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269628u;
            // 0x26962c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269628) {
            ctx->pc = 0x2695F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2695f8;
        }
    }
    ctx->pc = 0x269630u;
label_269630:
    // 0x269630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_269634:
    // 0x269634: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x269634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_269638:
    // 0x269638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x269638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26963c:
    // 0x26963c: 0x3e00008  jr          $ra
label_269640:
    if (ctx->pc == 0x269640u) {
        ctx->pc = 0x269640u;
            // 0x269640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x269644u;
        goto label_269644;
    }
    ctx->pc = 0x26963Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26963Cu;
            // 0x269640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269644u;
label_269644:
    // 0x269644: 0x0  nop
    ctx->pc = 0x269644u;
    // NOP
label_269648:
    // 0x269648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x269648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26964c:
    // 0x26964c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269650:
    // 0x269650: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x269650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_269654:
    // 0x269654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x269654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269658:
    // 0x269658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x269658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26965c:
    // 0x26965c: 0xc09ae2a  jal         func_26B8A8
label_269660:
    if (ctx->pc == 0x269660u) {
        ctx->pc = 0x269660u;
            // 0x269660: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x269664u;
        goto label_269664;
    }
    ctx->pc = 0x26965Cu;
    SET_GPR_U32(ctx, 31, 0x269664u);
    ctx->pc = 0x269660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26965Cu;
            // 0x269660: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B8A8u;
    if (runtime->hasFunction(0x26B8A8u)) {
        auto targetFn = runtime->lookupFunction(0x26B8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269664u; }
        if (ctx->pc != 0x269664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B8A8_0x26b8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269664u; }
        if (ctx->pc != 0x269664u) { return; }
    }
    ctx->pc = 0x269664u;
label_269664:
    // 0x269664: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_269668:
    if (ctx->pc == 0x269668u) {
        ctx->pc = 0x269668u;
            // 0x269668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26966Cu;
        goto label_26966c;
    }
    ctx->pc = 0x269664u;
    {
        const bool branch_taken_0x269664 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x269668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269664u;
            // 0x269668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269664) {
            ctx->pc = 0x269674u;
            goto label_269674;
        }
    }
    ctx->pc = 0x26966Cu;
label_26966c:
    // 0x26966c: 0x10000021  b           . + 4 + (0x21 << 2)
label_269670:
    if (ctx->pc == 0x269670u) {
        ctx->pc = 0x269670u;
            // 0x269670: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x269674u;
        goto label_269674;
    }
    ctx->pc = 0x26966Cu;
    {
        const bool branch_taken_0x26966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26966Cu;
            // 0x269670: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26966c) {
            ctx->pc = 0x2696F4u;
            goto label_2696f4;
        }
    }
    ctx->pc = 0x269674u;
label_269674:
    // 0x269674: 0xc09b67a  jal         func_26D9E8
label_269678:
    if (ctx->pc == 0x269678u) {
        ctx->pc = 0x269678u;
            // 0x269678: 0x2630005c  addiu       $s0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x26967Cu;
        goto label_26967c;
    }
    ctx->pc = 0x269674u;
    SET_GPR_U32(ctx, 31, 0x26967Cu);
    ctx->pc = 0x269678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269674u;
            // 0x269678: 0x2630005c  addiu       $s0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D9E8u;
    if (runtime->hasFunction(0x26D9E8u)) {
        auto targetFn = runtime->lookupFunction(0x26D9E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26967Cu; }
        if (ctx->pc != 0x26967Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D9E8_0x26d9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26967Cu; }
        if (ctx->pc != 0x26967Cu) { return; }
    }
    ctx->pc = 0x26967Cu;
label_26967c:
    // 0x26967c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x26967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_269680:
    // 0x269680: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x269680u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
label_269684:
    // 0x269684: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x269684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_269688:
    // 0x269688: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x269688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
label_26968c:
    // 0x26968c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x26968cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_269690:
    // 0x269690: 0xc08b60c  jal         func_22D830
label_269694:
    if (ctx->pc == 0x269694u) {
        ctx->pc = 0x269694u;
            // 0x269694: 0x96240066  lhu         $a0, 0x66($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
        ctx->pc = 0x269698u;
        goto label_269698;
    }
    ctx->pc = 0x269690u;
    SET_GPR_U32(ctx, 31, 0x269698u);
    ctx->pc = 0x269694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269690u;
            // 0x269694: 0x96240066  lhu         $a0, 0x66($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269698u; }
        if (ctx->pc != 0x269698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269698u; }
        if (ctx->pc != 0x269698u) { return; }
    }
    ctx->pc = 0x269698u;
label_269698:
    // 0x269698: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x269698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_26969c:
    // 0x26969c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2696a0:
    // 0x2696a0: 0xc09adee  jal         func_26B7B8
label_2696a4:
    if (ctx->pc == 0x2696A4u) {
        ctx->pc = 0x2696A4u;
            // 0x2696a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2696A8u;
        goto label_2696a8;
    }
    ctx->pc = 0x2696A0u;
    SET_GPR_U32(ctx, 31, 0x2696A8u);
    ctx->pc = 0x2696A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2696A0u;
            // 0x2696a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B7B8u;
    if (runtime->hasFunction(0x26B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x26B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696A8u; }
        if (ctx->pc != 0x2696A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B7B8_0x26b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696A8u; }
        if (ctx->pc != 0x2696A8u) { return; }
    }
    ctx->pc = 0x2696A8u;
label_2696a8:
    // 0x2696a8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2696a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2696ac:
    // 0x2696ac: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2696acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2696b0:
    // 0x2696b0: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x2696b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
label_2696b4:
    // 0x2696b4: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x2696b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
label_2696b8:
    // 0x2696b8: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x2696b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2696bc:
    // 0x2696bc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2696bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2696c0:
    // 0x2696c0: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x2696c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2696c4:
    // 0x2696c4: 0xc0980bc  jal         func_2602F0
label_2696c8:
    if (ctx->pc == 0x2696C8u) {
        ctx->pc = 0x2696C8u;
            // 0x2696c8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x2696CCu;
        goto label_2696cc;
    }
    ctx->pc = 0x2696C4u;
    SET_GPR_U32(ctx, 31, 0x2696CCu);
    ctx->pc = 0x2696C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2696C4u;
            // 0x2696c8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2602F0u;
    if (runtime->hasFunction(0x2602F0u)) {
        auto targetFn = runtime->lookupFunction(0x2602F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696CCu; }
        if (ctx->pc != 0x2696CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002602F0_0x2602f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696CCu; }
        if (ctx->pc != 0x2696CCu) { return; }
    }
    ctx->pc = 0x2696CCu;
label_2696cc:
    // 0x2696cc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2696ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2696d0:
    // 0x2696d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2696d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2696d4:
    // 0x2696d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2696d8:
    if (ctx->pc == 0x2696D8u) {
        ctx->pc = 0x2696D8u;
            // 0x2696d8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2696DCu;
        goto label_2696dc;
    }
    ctx->pc = 0x2696D4u;
    {
        const bool branch_taken_0x2696d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2696D4u;
            // 0x2696d8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696d4) {
            ctx->pc = 0x2696F0u;
            goto label_2696f0;
        }
    }
    ctx->pc = 0x2696DCu;
label_2696dc:
    // 0x2696dc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2696dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2696e0:
    // 0x2696e0: 0xc08b5ac  jal         func_22D6B0
label_2696e4:
    if (ctx->pc == 0x2696E4u) {
        ctx->pc = 0x2696E4u;
            // 0x2696e4: 0x24a580c8  addiu       $a1, $a1, -0x7F38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934728));
        ctx->pc = 0x2696E8u;
        goto label_2696e8;
    }
    ctx->pc = 0x2696E0u;
    SET_GPR_U32(ctx, 31, 0x2696E8u);
    ctx->pc = 0x2696E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2696E0u;
            // 0x2696e4: 0x24a580c8  addiu       $a1, $a1, -0x7F38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696E8u; }
        if (ctx->pc != 0x2696E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696E8u; }
        if (ctx->pc != 0x2696E8u) { return; }
    }
    ctx->pc = 0x2696E8u;
label_2696e8:
    // 0x2696e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2696ec:
    if (ctx->pc == 0x2696ECu) {
        ctx->pc = 0x2696ECu;
            // 0x2696ec: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x2696F0u;
        goto label_2696f0;
    }
    ctx->pc = 0x2696E8u;
    {
        const bool branch_taken_0x2696e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2696E8u;
            // 0x2696ec: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696e8) {
            ctx->pc = 0x2696F4u;
            goto label_2696f4;
        }
    }
    ctx->pc = 0x2696F0u;
label_2696f0:
    // 0x2696f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2696f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2696f4:
    // 0x2696f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2696f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2696f8:
    // 0x2696f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2696f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2696fc:
    // 0x2696fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2696fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269700:
    // 0x269700: 0x3e00008  jr          $ra
label_269704:
    if (ctx->pc == 0x269704u) {
        ctx->pc = 0x269704u;
            // 0x269704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x269708u;
        goto label_269708;
    }
    ctx->pc = 0x269700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269700u;
            // 0x269704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269708u;
label_269708:
    // 0x269708: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x269708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_26970c:
    // 0x26970c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_269710:
    // 0x269710: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x269710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_269714:
    // 0x269714: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x269714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269718:
    // 0x269718: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x269718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_26971c:
    // 0x26971c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x26971cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_269720:
    // 0x269720: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x269720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_269724:
    // 0x269724: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x269724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_269728:
    // 0x269728: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x269728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_26972c:
    // 0x26972c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_269730:
    if (ctx->pc == 0x269730u) {
        ctx->pc = 0x269730u;
            // 0x269730: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->pc = 0x269734u;
        goto label_269734;
    }
    ctx->pc = 0x26972Cu;
    {
        const bool branch_taken_0x26972c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x269730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26972Cu;
            // 0x269730: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26972c) {
            ctx->pc = 0x269754u;
            goto label_269754;
        }
    }
    ctx->pc = 0x269734u;
label_269734:
    // 0x269734: 0x8e440188  lw          $a0, 0x188($s2)
    ctx->pc = 0x269734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_269738:
    // 0x269738: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
label_26973c:
    if (ctx->pc == 0x26973Cu) {
        ctx->pc = 0x26973Cu;
            // 0x26973c: 0x8e420190  lw          $v0, 0x190($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
        ctx->pc = 0x269740u;
        goto label_269740;
    }
    ctx->pc = 0x269738u;
    {
        const bool branch_taken_0x269738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269738) {
            ctx->pc = 0x26973Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269738u;
            // 0x26973c: 0x8e420190  lw          $v0, 0x190($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2697ACu;
            goto label_2697ac;
        }
    }
    ctx->pc = 0x269740u;
label_269740:
    // 0x269740: 0xc09b4cc  jal         func_26D330
label_269744:
    if (ctx->pc == 0x269744u) {
        ctx->pc = 0x269748u;
        goto label_269748;
    }
    ctx->pc = 0x269740u;
    SET_GPR_U32(ctx, 31, 0x269748u);
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269748u; }
        if (ctx->pc != 0x269748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269748u; }
        if (ctx->pc != 0x269748u) { return; }
    }
    ctx->pc = 0x269748u;
label_269748:
    // 0x269748: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x269748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
label_26974c:
    // 0x26974c: 0x10000017  b           . + 4 + (0x17 << 2)
label_269750:
    if (ctx->pc == 0x269750u) {
        ctx->pc = 0x269750u;
            // 0x269750: 0x8e420190  lw          $v0, 0x190($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
        ctx->pc = 0x269754u;
        goto label_269754;
    }
    ctx->pc = 0x26974Cu;
    {
        const bool branch_taken_0x26974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26974Cu;
            // 0x269750: 0x8e420190  lw          $v0, 0x190($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26974c) {
            ctx->pc = 0x2697ACu;
            goto label_2697ac;
        }
    }
    ctx->pc = 0x269754u;
label_269754:
    // 0x269754: 0xc08b614  jal         func_22D850
label_269758:
    if (ctx->pc == 0x269758u) {
        ctx->pc = 0x26975Cu;
        goto label_26975c;
    }
    ctx->pc = 0x269754u;
    SET_GPR_U32(ctx, 31, 0x26975Cu);
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26975Cu; }
        if (ctx->pc != 0x26975Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26975Cu; }
        if (ctx->pc != 0x26975Cu) { return; }
    }
    ctx->pc = 0x26975Cu;
label_26975c:
    // 0x26975c: 0x8e4401a8  lw          $a0, 0x1A8($s2)
    ctx->pc = 0x26975cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_269760:
    // 0x269760: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x269760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_269764:
    // 0x269764: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x269764u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_269768:
    // 0x269768: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_26976c:
    if (ctx->pc == 0x26976Cu) {
        ctx->pc = 0x26976Cu;
            // 0x26976c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x269770u;
        goto label_269770;
    }
    ctx->pc = 0x269768u;
    {
        const bool branch_taken_0x269768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269768) {
            ctx->pc = 0x26976Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269768u;
            // 0x26976c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x269770u;
            goto label_269770;
        }
    }
    ctx->pc = 0x269770u;
label_269770:
    // 0x269770: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x269770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_269774:
    // 0x269774: 0x2810  mfhi        $a1
    ctx->pc = 0x269774u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_269778:
    // 0x269778: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x269778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_26977c:
    // 0x26977c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26977cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_269780:
    // 0x269780: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_269784:
    if (ctx->pc == 0x269784u) {
        ctx->pc = 0x269784u;
            // 0x269784: 0xae4401a8  sw          $a0, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 4));
        ctx->pc = 0x269788u;
        goto label_269788;
    }
    ctx->pc = 0x269780u;
    {
        const bool branch_taken_0x269780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269780u;
            // 0x269784: 0xae4401a8  sw          $a0, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269780) {
            ctx->pc = 0x2697B0u;
            goto label_2697b0;
        }
    }
    ctx->pc = 0x269788u;
label_269788:
    // 0x269788: 0xc08b614  jal         func_22D850
label_26978c:
    if (ctx->pc == 0x26978Cu) {
        ctx->pc = 0x269790u;
        goto label_269790;
    }
    ctx->pc = 0x269788u;
    SET_GPR_U32(ctx, 31, 0x269790u);
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269790u; }
        if (ctx->pc != 0x269790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269790u; }
        if (ctx->pc != 0x269790u) { return; }
    }
    ctx->pc = 0x269790u;
label_269790:
    // 0x269790: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x269790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_269794:
    // 0x269794: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x269794u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_269798:
    // 0x269798: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_26979c:
    if (ctx->pc == 0x26979Cu) {
        ctx->pc = 0x26979Cu;
            // 0x26979c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2697A0u;
        goto label_2697a0;
    }
    ctx->pc = 0x269798u;
    {
        const bool branch_taken_0x269798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269798) {
            ctx->pc = 0x26979Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269798u;
            // 0x26979c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2697A0u;
            goto label_2697a0;
        }
    }
    ctx->pc = 0x2697A0u;
label_2697a0:
    // 0x2697a0: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x2697a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_2697a4:
    // 0x2697a4: 0x2010  mfhi        $a0
    ctx->pc = 0x2697a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2697a8:
    // 0x2697a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2697a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2697ac:
    // 0x2697ac: 0xae4201a8  sw          $v0, 0x1A8($s2)
    ctx->pc = 0x2697acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 2));
label_2697b0:
    // 0x2697b0: 0xc098ba8  jal         func_262EA0
label_2697b4:
    if (ctx->pc == 0x2697B4u) {
        ctx->pc = 0x2697B4u;
            // 0x2697b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2697B8u;
        goto label_2697b8;
    }
    ctx->pc = 0x2697B0u;
    SET_GPR_U32(ctx, 31, 0x2697B8u);
    ctx->pc = 0x2697B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2697B0u;
            // 0x2697b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2697B8u; }
        if (ctx->pc != 0x2697B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2697B8u; }
        if (ctx->pc != 0x2697B8u) { return; }
    }
    ctx->pc = 0x2697B8u;
label_2697b8:
    // 0x2697b8: 0x44000a9  bltz        $v0, . + 4 + (0xA9 << 2)
label_2697bc:
    if (ctx->pc == 0x2697BCu) {
        ctx->pc = 0x2697BCu;
            // 0x2697bc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2697C0u;
        goto label_2697c0;
    }
    ctx->pc = 0x2697B8u;
    {
        const bool branch_taken_0x2697b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2697BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2697B8u;
            // 0x2697bc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697b8) {
            ctx->pc = 0x269A60u;
            goto label_269a60;
        }
    }
    ctx->pc = 0x2697C0u;
label_2697c0:
    // 0x2697c0: 0x8e42018c  lw          $v0, 0x18C($s2)
    ctx->pc = 0x2697c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
label_2697c4:
    // 0x2697c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2697c8:
    if (ctx->pc == 0x2697C8u) {
        ctx->pc = 0x2697C8u;
            // 0x2697c8: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->pc = 0x2697CCu;
        goto label_2697cc;
    }
    ctx->pc = 0x2697C4u;
    {
        const bool branch_taken_0x2697c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2697C4u;
            // 0x2697c8: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697c4) {
            ctx->pc = 0x2697F8u;
            goto label_2697f8;
        }
    }
    ctx->pc = 0x2697CCu;
label_2697cc:
    // 0x2697cc: 0x9e4301a8  lwu         $v1, 0x1A8($s2)
    ctx->pc = 0x2697ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_2697d0:
    // 0x2697d0: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x2697d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2697d4:
    // 0x2697d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2697d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2697d8:
    // 0x2697d8: 0xde440198  ld          $a0, 0x198($s2)
    ctx->pc = 0x2697d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 408)));
label_2697dc:
    // 0x2697dc: 0xa3182d  daddu       $v1, $a1, $v1
    ctx->pc = 0x2697dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
label_2697e0:
    // 0x2697e0: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x2697e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_2697e4:
    // 0x2697e4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2697e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2697e8:
    // 0x2697e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2697ec:
    if (ctx->pc == 0x2697ECu) {
        ctx->pc = 0x2697ECu;
            // 0x2697ec: 0x8e4901a8  lw          $t1, 0x1A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
        ctx->pc = 0x2697F0u;
        goto label_2697f0;
    }
    ctx->pc = 0x2697E8u;
    {
        const bool branch_taken_0x2697e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2697E8u;
            // 0x2697ec: 0x8e4901a8  lw          $t1, 0x1A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697e8) {
            ctx->pc = 0x269804u;
            goto label_269804;
        }
    }
    ctx->pc = 0x2697F0u;
label_2697f0:
    // 0x2697f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2697f4:
    if (ctx->pc == 0x2697F4u) {
        ctx->pc = 0x2697F4u;
            // 0x2697f4: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2697F8u;
        goto label_2697f8;
    }
    ctx->pc = 0x2697F0u;
    {
        const bool branch_taken_0x2697f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2697F0u;
            // 0x2697f4: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697f0) {
            ctx->pc = 0x269818u;
            goto label_269818;
        }
    }
    ctx->pc = 0x2697F8u;
label_2697f8:
    // 0x2697f8: 0x8e4901a8  lw          $t1, 0x1A8($s2)
    ctx->pc = 0x2697f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_2697fc:
    // 0x2697fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_269800:
    if (ctx->pc == 0x269800u) {
        ctx->pc = 0x269800u;
            // 0x269800: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269804u;
        goto label_269804;
    }
    ctx->pc = 0x2697FCu;
    {
        const bool branch_taken_0x2697fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2697FCu;
            // 0x269800: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697fc) {
            ctx->pc = 0x269818u;
            goto label_269818;
        }
    }
    ctx->pc = 0x269804u;
label_269804:
    // 0x269804: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x269804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_269808:
    // 0x269808: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
label_26980c:
    if (ctx->pc == 0x26980Cu) {
        ctx->pc = 0x26980Cu;
            // 0x26980c: 0x85102f  dsubu       $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
        ctx->pc = 0x269810u;
        goto label_269810;
    }
    ctx->pc = 0x269808u;
    {
        const bool branch_taken_0x269808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26980Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269808u;
            // 0x26980c: 0x85102f  dsubu       $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269808) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269810u;
label_269810:
    // 0x269810: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x269810u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
label_269814:
    // 0x269814: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x269814u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_269818:
    // 0x269818: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x269818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_26981c:
    // 0x26981c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26981cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_269820:
    // 0x269820: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x269820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_269824:
    // 0x269824: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x269824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_269828:
    // 0x269828: 0x88640013  lwl         $a0, 0x13($v1)
    ctx->pc = 0x269828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26982c:
    // 0x26982c: 0x98640010  lwr         $a0, 0x10($v1)
    ctx->pc = 0x26982cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_269830:
    // 0x269830: 0x26108118  addiu       $s0, $s0, -0x7EE8
    ctx->pc = 0x269830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934808));
label_269834:
    // 0x269834: 0xc0990d8  jal         func_264360
label_269838:
    if (ctx->pc == 0x269838u) {
        ctx->pc = 0x269838u;
            // 0x269838: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->pc = 0x26983Cu;
        goto label_26983c;
    }
    ctx->pc = 0x269834u;
    SET_GPR_U32(ctx, 31, 0x26983Cu);
    ctx->pc = 0x269838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269834u;
            // 0x269838: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26983Cu; }
        if (ctx->pc != 0x26983Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26983Cu; }
        if (ctx->pc != 0x26983Cu) { return; }
    }
    ctx->pc = 0x26983Cu;
label_26983c:
    // 0x26983c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x26983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_269840:
    // 0x269840: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x269840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269844:
    // 0x269844: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x269844u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_269848:
    // 0x269848: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x269848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26984c:
    // 0x26984c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26984cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_269850:
    // 0x269850: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x269850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_269854:
    // 0x269854: 0xc08b60c  jal         func_22D830
label_269858:
    if (ctx->pc == 0x269858u) {
        ctx->pc = 0x269858u;
            // 0x269858: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26985Cu;
        goto label_26985c;
    }
    ctx->pc = 0x269854u;
    SET_GPR_U32(ctx, 31, 0x26985Cu);
    ctx->pc = 0x269858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269854u;
            // 0x269858: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26985Cu; }
        if (ctx->pc != 0x26985Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26985Cu; }
        if (ctx->pc != 0x26985Cu) { return; }
    }
    ctx->pc = 0x26985Cu;
label_26985c:
    // 0x26985c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26985cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269860:
    // 0x269860: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x269860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269864:
    // 0x269864: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x269864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269868:
    // 0x269868: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x269868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26986c:
    // 0x26986c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26986cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269870:
    // 0x269870: 0xc08b5ac  jal         func_22D6B0
label_269874:
    if (ctx->pc == 0x269874u) {
        ctx->pc = 0x269874u;
            // 0x269874: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269878u;
        goto label_269878;
    }
    ctx->pc = 0x269870u;
    SET_GPR_U32(ctx, 31, 0x269878u);
    ctx->pc = 0x269874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269870u;
            // 0x269874: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269878u; }
        if (ctx->pc != 0x269878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269878u; }
        if (ctx->pc != 0x269878u) { return; }
    }
    ctx->pc = 0x269878u;
label_269878:
    // 0x269878: 0x1a800074  blez        $s4, . + 4 + (0x74 << 2)
label_26987c:
    if (ctx->pc == 0x26987Cu) {
        ctx->pc = 0x269880u;
        goto label_269880;
    }
    ctx->pc = 0x269878u;
    {
        const bool branch_taken_0x269878 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x269878) {
            ctx->pc = 0x269A4Cu;
            goto label_269a4c;
        }
    }
    ctx->pc = 0x269880u;
label_269880:
    // 0x269880: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x269880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_269884:
    // 0x269884: 0x0  nop
    ctx->pc = 0x269884u;
    // NOP
label_269888:
    // 0x269888: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x269888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_26988c:
    // 0x26988c: 0xc098092  jal         func_260248
label_269890:
    if (ctx->pc == 0x269890u) {
        ctx->pc = 0x269890u;
            // 0x269890: 0x8e46001c  lw          $a2, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x269894u;
        goto label_269894;
    }
    ctx->pc = 0x26988Cu;
    SET_GPR_U32(ctx, 31, 0x269894u);
    ctx->pc = 0x269890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26988Cu;
            // 0x269890: 0x8e46001c  lw          $a2, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260248u;
    if (runtime->hasFunction(0x260248u)) {
        auto targetFn = runtime->lookupFunction(0x260248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269894u; }
        if (ctx->pc != 0x269894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260248_0x260248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269894u; }
        if (ctx->pc != 0x269894u) { return; }
    }
    ctx->pc = 0x269894u;
label_269894:
    // 0x269894: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x269894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269898:
    // 0x269898: 0x6600086  bltz        $s3, . + 4 + (0x86 << 2)
label_26989c:
    if (ctx->pc == 0x26989Cu) {
        ctx->pc = 0x26989Cu;
            // 0x26989c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2698A0u;
        goto label_2698a0;
    }
    ctx->pc = 0x269898u;
    {
        const bool branch_taken_0x269898 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x26989Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269898u;
            // 0x26989c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269898) {
            ctx->pc = 0x269AB4u;
            goto label_269ab4;
        }
    }
    ctx->pc = 0x2698A0u;
label_2698a0:
    // 0x2698a0: 0xc04332c  jal         func_10CCB0
label_2698a4:
    if (ctx->pc == 0x2698A4u) {
        ctx->pc = 0x2698A4u;
            // 0x2698a4: 0x8e4401b0  lw          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->pc = 0x2698A8u;
        goto label_2698a8;
    }
    ctx->pc = 0x2698A0u;
    SET_GPR_U32(ctx, 31, 0x2698A8u);
    ctx->pc = 0x2698A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2698A0u;
            // 0x2698a4: 0x8e4401b0  lw          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2698A8u; }
        if (ctx->pc != 0x2698A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2698A8u; }
        if (ctx->pc != 0x2698A8u) { return; }
    }
    ctx->pc = 0x2698A8u;
label_2698a8:
    // 0x2698a8: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x2698a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_2698ac:
    // 0x2698ac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2698b0:
    if (ctx->pc == 0x2698B0u) {
        ctx->pc = 0x2698B0u;
            // 0x2698b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2698B4u;
        goto label_2698b4;
    }
    ctx->pc = 0x2698ACu;
    {
        const bool branch_taken_0x2698ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2698B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2698ACu;
            // 0x2698b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698ac) {
            ctx->pc = 0x2698BCu;
            goto label_2698bc;
        }
    }
    ctx->pc = 0x2698B4u;
label_2698b4:
    // 0x2698b4: 0xc09a536  jal         func_2694D8
label_2698b8:
    if (ctx->pc == 0x2698B8u) {
        ctx->pc = 0x2698B8u;
            // 0x2698b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2698BCu;
        goto label_2698bc;
    }
    ctx->pc = 0x2698B4u;
    SET_GPR_U32(ctx, 31, 0x2698BCu);
    ctx->pc = 0x2698B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2698B4u;
            // 0x2698b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2694D8u;
    if (runtime->hasFunction(0x2694D8u)) {
        auto targetFn = runtime->lookupFunction(0x2694D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2698BCu; }
        if (ctx->pc != 0x2698BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002694D8_0x2694d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2698BCu; }
        if (ctx->pc != 0x2698BCu) { return; }
    }
    ctx->pc = 0x2698BCu;
label_2698bc:
    // 0x2698bc: 0x1a600060  blez        $s3, . + 4 + (0x60 << 2)
label_2698c0:
    if (ctx->pc == 0x2698C0u) {
        ctx->pc = 0x2698C0u;
            // 0x2698c0: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x2698C4u;
        goto label_2698c4;
    }
    ctx->pc = 0x2698BCu;
    {
        const bool branch_taken_0x2698bc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2698C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2698BCu;
            // 0x2698c0: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698bc) {
            ctx->pc = 0x269A40u;
            goto label_269a40;
        }
    }
    ctx->pc = 0x2698C4u;
label_2698c4:
    // 0x2698c4: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x2698c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_2698c8:
    // 0x2698c8: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x2698c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_2698cc:
    // 0x2698cc: 0x0  nop
    ctx->pc = 0x2698ccu;
    // NOP
label_2698d0:
    // 0x2698d0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2698d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2698d4:
    // 0x2698d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2698d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2698d8:
    // 0x2698d8: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2698d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2698dc:
    // 0x2698dc: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x2698dcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_2698e0:
    // 0x2698e0: 0x24a5000e  addiu       $a1, $a1, 0xE
    ctx->pc = 0x2698e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_2698e4:
    // 0x2698e4: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2698e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2698e8:
    // 0x2698e8: 0xae450034  sw          $a1, 0x34($s2)
    ctx->pc = 0x2698e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 5));
label_2698ec:
    // 0x2698ec: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2698ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2698f0:
    // 0x2698f0: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x2698f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_2698f4:
    // 0x2698f4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2698f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2698f8:
    // 0x2698f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2698f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2698fc:
    // 0x2698fc: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2698fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_269900:
    // 0x269900: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x269900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_269904:
    // 0x269904: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x269904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_269908:
    // 0x269908: 0xae440038  sw          $a0, 0x38($s2)
    ctx->pc = 0x269908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
label_26990c:
    // 0x26990c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x26990cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_269910:
    // 0x269910: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x269910u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_269914:
    // 0x269914: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x269914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_269918:
    // 0x269918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x269918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26991c:
    // 0x26991c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_269920:
    // 0x269920: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x269920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
label_269924:
    // 0x269924: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x269924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_269928:
    // 0x269928: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x269928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_26992c:
    // 0x26992c: 0xc09a3cc  jal         func_268F30
label_269930:
    if (ctx->pc == 0x269930u) {
        ctx->pc = 0x269930u;
            // 0x269930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269934u;
        goto label_269934;
    }
    ctx->pc = 0x26992Cu;
    SET_GPR_U32(ctx, 31, 0x269934u);
    ctx->pc = 0x269930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26992Cu;
            // 0x269930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268F30u;
    if (runtime->hasFunction(0x268F30u)) {
        auto targetFn = runtime->lookupFunction(0x268F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269934u; }
        if (ctx->pc != 0x269934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268F30_0x268f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269934u; }
        if (ctx->pc != 0x269934u) { return; }
    }
    ctx->pc = 0x269934u;
label_269934:
    // 0x269934: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
label_269938:
    if (ctx->pc == 0x269938u) {
        ctx->pc = 0x269938u;
            // 0x269938: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26993Cu;
        goto label_26993c;
    }
    ctx->pc = 0x269934u;
    {
        const bool branch_taken_0x269934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269934) {
            ctx->pc = 0x269938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269934u;
            // 0x269938: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269A14u;
            goto label_269a14;
        }
    }
    ctx->pc = 0x26993Cu;
label_26993c:
    // 0x26993c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x26993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_269940:
    // 0x269940: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x269940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_269944:
    // 0x269944: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x269944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_269948:
    // 0x269948: 0x265104c0  addiu       $s1, $s2, 0x4C0
    ctx->pc = 0x269948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1216));
label_26994c:
    // 0x26994c: 0x8844000f  lwl         $a0, 0xF($v0)
    ctx->pc = 0x26994cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_269950:
    // 0x269950: 0x9844000c  lwr         $a0, 0xC($v0)
    ctx->pc = 0x269950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_269954:
    // 0x269954: 0xc0990d8  jal         func_264360
label_269958:
    if (ctx->pc == 0x269958u) {
        ctx->pc = 0x269958u;
            // 0x269958: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->pc = 0x26995Cu;
        goto label_26995c;
    }
    ctx->pc = 0x269954u;
    SET_GPR_U32(ctx, 31, 0x26995Cu);
    ctx->pc = 0x269958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269954u;
            // 0x269958: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26995Cu; }
        if (ctx->pc != 0x26995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26995Cu; }
        if (ctx->pc != 0x26995Cu) { return; }
    }
    ctx->pc = 0x26995Cu;
label_26995c:
    // 0x26995c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26995cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269960:
    // 0x269960: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x269960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_269964:
    // 0x269964: 0xc08b5ac  jal         func_22D6B0
label_269968:
    if (ctx->pc == 0x269968u) {
        ctx->pc = 0x269968u;
            // 0x269968: 0x26c58180  addiu       $a1, $s6, -0x7E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934912));
        ctx->pc = 0x26996Cu;
        goto label_26996c;
    }
    ctx->pc = 0x269964u;
    SET_GPR_U32(ctx, 31, 0x26996Cu);
    ctx->pc = 0x269968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269964u;
            // 0x269968: 0x26c58180  addiu       $a1, $s6, -0x7E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26996Cu; }
        if (ctx->pc != 0x26996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26996Cu; }
        if (ctx->pc != 0x26996Cu) { return; }
    }
    ctx->pc = 0x26996Cu;
label_26996c:
    // 0x26996c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269970:
    // 0x269970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x269970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269974:
    // 0x269974: 0xc049cb6  jal         func_1272D8
label_269978:
    if (ctx->pc == 0x269978u) {
        ctx->pc = 0x269978u;
            // 0x269978: 0x24060404  addiu       $a2, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->pc = 0x26997Cu;
        goto label_26997c;
    }
    ctx->pc = 0x269974u;
    SET_GPR_U32(ctx, 31, 0x26997Cu);
    ctx->pc = 0x269978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269974u;
            // 0x269978: 0x24060404  addiu       $a2, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26997Cu; }
        if (ctx->pc != 0x26997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26997Cu; }
        if (ctx->pc != 0x26997Cu) { return; }
    }
    ctx->pc = 0x26997Cu;
label_26997c:
    // 0x26997c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x26997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_269980:
    // 0x269980: 0x90640005  lbu         $a0, 0x5($v1)
    ctx->pc = 0x269980u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_269984:
    // 0x269984: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x269984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_269988:
    // 0x269988: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x269988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26998c:
    // 0x26998c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26998cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_269990:
    // 0x269990: 0xc08b60c  jal         func_22D830
label_269994:
    if (ctx->pc == 0x269994u) {
        ctx->pc = 0x269994u;
            // 0x269994: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x269998u;
        goto label_269998;
    }
    ctx->pc = 0x269990u;
    SET_GPR_U32(ctx, 31, 0x269998u);
    ctx->pc = 0x269994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269990u;
            // 0x269994: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269998u; }
        if (ctx->pc != 0x269998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269998u; }
        if (ctx->pc != 0x269998u) { return; }
    }
    ctx->pc = 0x269998u;
label_269998:
    // 0x269998: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x269998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_26999c:
    // 0x26999c: 0xc09b13e  jal         func_26C4F8
label_2699a0:
    if (ctx->pc == 0x2699A0u) {
        ctx->pc = 0x2699A0u;
            // 0x2699a0: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x2699A4u;
        goto label_2699a4;
    }
    ctx->pc = 0x26999Cu;
    SET_GPR_U32(ctx, 31, 0x2699A4u);
    ctx->pc = 0x2699A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26999Cu;
            // 0x2699a0: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C4F8u;
    if (runtime->hasFunction(0x26C4F8u)) {
        auto targetFn = runtime->lookupFunction(0x26C4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699A4u; }
        if (ctx->pc != 0x2699A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C4F8_0x26c4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699A4u; }
        if (ctx->pc != 0x2699A4u) { return; }
    }
    ctx->pc = 0x2699A4u;
label_2699a4:
    // 0x2699a4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_2699a8:
    if (ctx->pc == 0x2699A8u) {
        ctx->pc = 0x2699A8u;
            // 0x2699a8: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x2699ACu;
        goto label_2699ac;
    }
    ctx->pc = 0x2699A4u;
    {
        const bool branch_taken_0x2699a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2699a4) {
            ctx->pc = 0x2699A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2699A4u;
            // 0x2699a8: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269A14u;
            goto label_269a14;
        }
    }
    ctx->pc = 0x2699ACu;
label_2699ac:
    // 0x2699ac: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2699acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2699b0:
    // 0x2699b0: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x2699b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_2699b4:
    // 0x2699b4: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x2699b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_2699b8:
    // 0x2699b8: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x2699b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_2699bc:
    // 0x2699bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2699bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2699c0:
    // 0x2699c0: 0xc08b60c  jal         func_22D830
label_2699c4:
    if (ctx->pc == 0x2699C4u) {
        ctx->pc = 0x2699C4u;
            // 0x2699c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2699C8u;
        goto label_2699c8;
    }
    ctx->pc = 0x2699C0u;
    SET_GPR_U32(ctx, 31, 0x2699C8u);
    ctx->pc = 0x2699C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2699C0u;
            // 0x2699c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699C8u; }
        if (ctx->pc != 0x2699C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699C8u; }
        if (ctx->pc != 0x2699C8u) { return; }
    }
    ctx->pc = 0x2699C8u;
label_2699c8:
    // 0x2699c8: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2699c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2699cc:
    // 0x2699cc: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x2699ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2699d0:
    // 0x2699d0: 0xc09b2a4  jal         func_26CA90
label_2699d4:
    if (ctx->pc == 0x2699D4u) {
        ctx->pc = 0x2699D4u;
            // 0x2699d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2699D8u;
        goto label_2699d8;
    }
    ctx->pc = 0x2699D0u;
    SET_GPR_U32(ctx, 31, 0x2699D8u);
    ctx->pc = 0x2699D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2699D0u;
            // 0x2699d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA90u;
    if (runtime->hasFunction(0x26CA90u)) {
        auto targetFn = runtime->lookupFunction(0x26CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699D8u; }
        if (ctx->pc != 0x2699D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA90_0x26ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699D8u; }
        if (ctx->pc != 0x2699D8u) { return; }
    }
    ctx->pc = 0x2699D8u;
label_2699d8:
    // 0x2699d8: 0x4400053  bltz        $v0, . + 4 + (0x53 << 2)
label_2699dc:
    if (ctx->pc == 0x2699DCu) {
        ctx->pc = 0x2699DCu;
            // 0x2699dc: 0x2402ff32  addiu       $v0, $zero, -0xCE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967090));
        ctx->pc = 0x2699E0u;
        goto label_2699e0;
    }
    ctx->pc = 0x2699D8u;
    {
        const bool branch_taken_0x2699d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2699DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2699D8u;
            // 0x2699dc: 0x2402ff32  addiu       $v0, $zero, -0xCE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967090));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699d8) {
            ctx->pc = 0x269B28u;
            goto label_269b28;
        }
    }
    ctx->pc = 0x2699E0u;
label_2699e0:
    // 0x2699e0: 0x8e2203e8  lw          $v0, 0x3E8($s1)
    ctx->pc = 0x2699e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
label_2699e4:
    // 0x2699e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2699e8:
    if (ctx->pc == 0x2699E8u) {
        ctx->pc = 0x2699ECu;
        goto label_2699ec;
    }
    ctx->pc = 0x2699E4u;
    {
        const bool branch_taken_0x2699e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2699e4) {
            ctx->pc = 0x269A08u;
            goto label_269a08;
        }
    }
    ctx->pc = 0x2699ECu;
label_2699ec:
    // 0x2699ec: 0x8e2203dc  lw          $v0, 0x3DC($s1)
    ctx->pc = 0x2699ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 988)));
label_2699f0:
    // 0x2699f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2699f4:
    if (ctx->pc == 0x2699F4u) {
        ctx->pc = 0x2699F4u;
            // 0x2699f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2699F8u;
        goto label_2699f8;
    }
    ctx->pc = 0x2699F0u;
    {
        const bool branch_taken_0x2699f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2699F0u;
            // 0x2699f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699f0) {
            ctx->pc = 0x269A08u;
            goto label_269a08;
        }
    }
    ctx->pc = 0x2699F8u;
label_2699f8:
    // 0x2699f8: 0xc09afdc  jal         func_26BF70
label_2699fc:
    if (ctx->pc == 0x2699FCu) {
        ctx->pc = 0x2699FCu;
            // 0x2699fc: 0x264504cd  addiu       $a1, $s2, 0x4CD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1229));
        ctx->pc = 0x269A00u;
        goto label_269a00;
    }
    ctx->pc = 0x2699F8u;
    SET_GPR_U32(ctx, 31, 0x269A00u);
    ctx->pc = 0x2699FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2699F8u;
            // 0x2699fc: 0x264504cd  addiu       $a1, $s2, 0x4CD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1229));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF70u;
    if (runtime->hasFunction(0x26BF70u)) {
        auto targetFn = runtime->lookupFunction(0x26BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A00u; }
        if (ctx->pc != 0x269A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF70_0x26bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A00u; }
        if (ctx->pc != 0x269A00u) { return; }
    }
    ctx->pc = 0x269A00u;
label_269a00:
    // 0x269a00: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_269a04:
    if (ctx->pc == 0x269A04u) {
        ctx->pc = 0x269A04u;
            // 0x269a04: 0xae510188  sw          $s1, 0x188($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 17));
        ctx->pc = 0x269A08u;
        goto label_269a08;
    }
    ctx->pc = 0x269A00u;
    {
        const bool branch_taken_0x269a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269a00) {
            ctx->pc = 0x269A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269A00u;
            // 0x269a04: 0xae510188  sw          $s1, 0x188($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269AC8u;
            goto label_269ac8;
        }
    }
    ctx->pc = 0x269A08u;
label_269a08:
    // 0x269a08: 0xc09b4cc  jal         func_26D330
label_269a0c:
    if (ctx->pc == 0x269A0Cu) {
        ctx->pc = 0x269A0Cu;
            // 0x269a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269A10u;
        goto label_269a10;
    }
    ctx->pc = 0x269A08u;
    SET_GPR_U32(ctx, 31, 0x269A10u);
    ctx->pc = 0x269A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A08u;
            // 0x269a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A10u; }
        if (ctx->pc != 0x269A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A10u; }
        if (ctx->pc != 0x269A10u) { return; }
    }
    ctx->pc = 0x269A10u;
label_269a10:
    // 0x269a10: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x269a10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_269a14:
    // 0x269a14: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x269a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_269a18:
    // 0x269a18: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x269a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_269a1c:
    // 0x269a1c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x269a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_269a20:
    // 0x269a20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x269a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_269a24:
    // 0x269a24: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x269a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_269a28:
    // 0x269a28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x269a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_269a2c:
    // 0x269a2c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x269a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_269a30:
    // 0x269a30: 0x2151823  subu        $v1, $s0, $s5
    ctx->pc = 0x269a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_269a34:
    // 0x269a34: 0x2639823  subu        $s3, $s3, $v1
    ctx->pc = 0x269a34u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_269a38:
    // 0x269a38: 0x5e60ffa5  bgtzl       $s3, . + 4 + (-0x5B << 2)
label_269a3c:
    if (ctx->pc == 0x269A3Cu) {
        ctx->pc = 0x269A3Cu;
            // 0x269a3c: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x269A40u;
        goto label_269a40;
    }
    ctx->pc = 0x269A38u;
    {
        const bool branch_taken_0x269a38 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x269a38) {
            ctx->pc = 0x269A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269A38u;
            // 0x269a3c: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2698D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2698d0;
        }
    }
    ctx->pc = 0x269A40u;
label_269a40:
    // 0x269a40: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x269a40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_269a44:
    // 0x269a44: 0x5e80ff90  bgtzl       $s4, . + 4 + (-0x70 << 2)
label_269a48:
    if (ctx->pc == 0x269A48u) {
        ctx->pc = 0x269A48u;
            // 0x269a48: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x269A4Cu;
        goto label_269a4c;
    }
    ctx->pc = 0x269A44u;
    {
        const bool branch_taken_0x269a44 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x269a44) {
            ctx->pc = 0x269A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269A44u;
            // 0x269a48: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269888;
        }
    }
    ctx->pc = 0x269A4Cu;
label_269a4c:
    // 0x269a4c: 0xc098ba8  jal         func_262EA0
label_269a50:
    if (ctx->pc == 0x269A50u) {
        ctx->pc = 0x269A50u;
            // 0x269a50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269A54u;
        goto label_269a54;
    }
    ctx->pc = 0x269A4Cu;
    SET_GPR_U32(ctx, 31, 0x269A54u);
    ctx->pc = 0x269A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A4Cu;
            // 0x269a50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A54u; }
        if (ctx->pc != 0x269A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A54u; }
        if (ctx->pc != 0x269A54u) { return; }
    }
    ctx->pc = 0x269A54u;
label_269a54:
    // 0x269a54: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_269a58:
    if (ctx->pc == 0x269A58u) {
        ctx->pc = 0x269A58u;
            // 0x269a58: 0x8e42018c  lw          $v0, 0x18C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
        ctx->pc = 0x269A5Cu;
        goto label_269a5c;
    }
    ctx->pc = 0x269A54u;
    {
        const bool branch_taken_0x269a54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x269a54) {
            ctx->pc = 0x269A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269A54u;
            // 0x269a58: 0x8e42018c  lw          $v0, 0x18C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269A74u;
            goto label_269a74;
        }
    }
    ctx->pc = 0x269A5Cu;
label_269a5c:
    // 0x269a5c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x269a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_269a60:
    // 0x269a60: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x269a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_269a64:
    // 0x269a64: 0xc08b5ac  jal         func_22D6B0
label_269a68:
    if (ctx->pc == 0x269A68u) {
        ctx->pc = 0x269A68u;
            // 0x269a68: 0x24a580f0  addiu       $a1, $a1, -0x7F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934768));
        ctx->pc = 0x269A6Cu;
        goto label_269a6c;
    }
    ctx->pc = 0x269A64u;
    SET_GPR_U32(ctx, 31, 0x269A6Cu);
    ctx->pc = 0x269A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A64u;
            // 0x269a68: 0x24a580f0  addiu       $a1, $a1, -0x7F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A6Cu; }
        if (ctx->pc != 0x269A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A6Cu; }
        if (ctx->pc != 0x269A6Cu) { return; }
    }
    ctx->pc = 0x269A6Cu;
label_269a6c:
    // 0x269a6c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_269a70:
    if (ctx->pc == 0x269A70u) {
        ctx->pc = 0x269A70u;
            // 0x269a70: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x269A74u;
        goto label_269a74;
    }
    ctx->pc = 0x269A6Cu;
    {
        const bool branch_taken_0x269a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A6Cu;
            // 0x269a70: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a6c) {
            ctx->pc = 0x269B28u;
            goto label_269b28;
        }
    }
    ctx->pc = 0x269A74u;
label_269a74:
    // 0x269a74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_269a78:
    if (ctx->pc == 0x269A78u) {
        ctx->pc = 0x269A78u;
            // 0x269a78: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x269A7Cu;
        goto label_269a7c;
    }
    ctx->pc = 0x269A74u;
    {
        const bool branch_taken_0x269a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A74u;
            // 0x269a78: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a74) {
            ctx->pc = 0x269A98u;
            goto label_269a98;
        }
    }
    ctx->pc = 0x269A7Cu;
label_269a7c:
    // 0x269a7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x269a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_269a80:
    // 0x269a80: 0xde440198  ld          $a0, 0x198($s2)
    ctx->pc = 0x269a80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 408)));
label_269a84:
    // 0x269a84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x269a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_269a88:
    // 0x269a88: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x269a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_269a8c:
    // 0x269a8c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x269a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_269a90:
    // 0x269a90: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_269a94:
    if (ctx->pc == 0x269A94u) {
        ctx->pc = 0x269A94u;
            // 0x269a94: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x269A98u;
        goto label_269a98;
    }
    ctx->pc = 0x269A90u;
    {
        const bool branch_taken_0x269a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A90u;
            // 0x269a94: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a90) {
            ctx->pc = 0x269AD4u;
            goto label_269ad4;
        }
    }
    ctx->pc = 0x269A98u;
label_269a98:
    // 0x269a98: 0xc09b10a  jal         func_26C428
label_269a9c:
    if (ctx->pc == 0x269A9Cu) {
        ctx->pc = 0x269A9Cu;
            // 0x269a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269AA0u;
        goto label_269aa0;
    }
    ctx->pc = 0x269A98u;
    SET_GPR_U32(ctx, 31, 0x269AA0u);
    ctx->pc = 0x269A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A98u;
            // 0x269a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C428u;
    if (runtime->hasFunction(0x26C428u)) {
        auto targetFn = runtime->lookupFunction(0x26C428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AA0u; }
        if (ctx->pc != 0x269AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C428_0x26c428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AA0u; }
        if (ctx->pc != 0x269AA0u) { return; }
    }
    ctx->pc = 0x269AA0u;
label_269aa0:
    // 0x269aa0: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x269aa0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_269aa4:
    // 0x269aa4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x269aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_269aa8:
    // 0x269aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269aac:
    // 0x269aac: 0x1000001e  b           . + 4 + (0x1E << 2)
label_269ab0:
    if (ctx->pc == 0x269AB0u) {
        ctx->pc = 0x269AB0u;
            // 0x269ab0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->pc = 0x269AB4u;
        goto label_269ab4;
    }
    ctx->pc = 0x269AACu;
    {
        const bool branch_taken_0x269aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269AACu;
            // 0x269ab0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269aac) {
            ctx->pc = 0x269B28u;
            goto label_269b28;
        }
    }
    ctx->pc = 0x269AB4u;
label_269ab4:
    // 0x269ab4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x269ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_269ab8:
    // 0x269ab8: 0xc08b5ac  jal         func_22D6B0
label_269abc:
    if (ctx->pc == 0x269ABCu) {
        ctx->pc = 0x269ABCu;
            // 0x269abc: 0x24a58150  addiu       $a1, $a1, -0x7EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934864));
        ctx->pc = 0x269AC0u;
        goto label_269ac0;
    }
    ctx->pc = 0x269AB8u;
    SET_GPR_U32(ctx, 31, 0x269AC0u);
    ctx->pc = 0x269ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269AB8u;
            // 0x269abc: 0x24a58150  addiu       $a1, $a1, -0x7EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AC0u; }
        if (ctx->pc != 0x269AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AC0u; }
        if (ctx->pc != 0x269AC0u) { return; }
    }
    ctx->pc = 0x269AC0u;
label_269ac0:
    // 0x269ac0: 0x10000019  b           . + 4 + (0x19 << 2)
label_269ac4:
    if (ctx->pc == 0x269AC4u) {
        ctx->pc = 0x269AC4u;
            // 0x269ac4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x269AC8u;
        goto label_269ac8;
    }
    ctx->pc = 0x269AC0u;
    {
        const bool branch_taken_0x269ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269AC0u;
            // 0x269ac4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ac0) {
            ctx->pc = 0x269B28u;
            goto label_269b28;
        }
    }
    ctx->pc = 0x269AC8u;
label_269ac8:
    // 0x269ac8: 0x10000017  b           . + 4 + (0x17 << 2)
label_269acc:
    if (ctx->pc == 0x269ACCu) {
        ctx->pc = 0x269ACCu;
            // 0x269acc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x269AD0u;
        goto label_269ad0;
    }
    ctx->pc = 0x269AC8u;
    {
        const bool branch_taken_0x269ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269AC8u;
            // 0x269acc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ac8) {
            ctx->pc = 0x269B28u;
            goto label_269b28;
        }
    }
    ctx->pc = 0x269AD0u;
label_269ad0:
    // 0x269ad0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x269ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_269ad4:
    // 0x269ad4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x269ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_269ad8:
    // 0x269ad8: 0xc08b5ac  jal         func_22D6B0
label_269adc:
    if (ctx->pc == 0x269ADCu) {
        ctx->pc = 0x269ADCu;
            // 0x269adc: 0x24a581a0  addiu       $a1, $a1, -0x7E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934944));
        ctx->pc = 0x269AE0u;
        goto label_269ae0;
    }
    ctx->pc = 0x269AD8u;
    SET_GPR_U32(ctx, 31, 0x269AE0u);
    ctx->pc = 0x269ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269AD8u;
            // 0x269adc: 0x24a581a0  addiu       $a1, $a1, -0x7E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AE0u; }
        if (ctx->pc != 0x269AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AE0u; }
        if (ctx->pc != 0x269AE0u) { return; }
    }
    ctx->pc = 0x269AE0u;
label_269ae0:
    // 0x269ae0: 0x8e4301b8  lw          $v1, 0x1B8($s2)
    ctx->pc = 0x269ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_269ae4:
    // 0x269ae4: 0x2402ff37  addiu       $v0, $zero, -0xC9
    ctx->pc = 0x269ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
label_269ae8:
    // 0x269ae8: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x269ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_269aec:
    // 0x269aec: 0x8e4401b8  lw          $a0, 0x1B8($s2)
    ctx->pc = 0x269aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_269af0:
    // 0x269af0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x269af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_269af4:
    // 0x269af4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_269af8:
    if (ctx->pc == 0x269AF8u) {
        ctx->pc = 0x269AF8u;
            // 0x269af8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x269AFCu;
        goto label_269afc;
    }
    ctx->pc = 0x269AF4u;
    {
        const bool branch_taken_0x269af4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x269AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269AF4u;
            // 0x269af8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269af4) {
            ctx->pc = 0x269B18u;
            goto label_269b18;
        }
    }
    ctx->pc = 0x269AFCu;
label_269afc:
    // 0x269afc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x269afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_269b00:
    // 0x269b00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x269b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_269b04:
    // 0x269b04: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x269b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_269b08:
    // 0x269b08: 0x8e4301b8  lw          $v1, 0x1B8($s2)
    ctx->pc = 0x269b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_269b0c:
    // 0x269b0c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x269b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 28))); // MMIO: 0x1000001c
label_269b10:
    // 0x269b10: 0x40f809  jalr        $v0
label_269b14:
    if (ctx->pc == 0x269B14u) {
        ctx->pc = 0x269B18u;
        goto label_269b18;
    }
    ctx->pc = 0x269B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269B18u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x269B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x269B18u; }
            if (ctx->pc != 0x269B18u) { return; }
        }
        }
    }
    ctx->pc = 0x269B18u;
label_269b18:
    // 0x269b18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269b1c:
    // 0x269b1c: 0xc09a536  jal         func_2694D8
label_269b20:
    if (ctx->pc == 0x269B20u) {
        ctx->pc = 0x269B20u;
            // 0x269b20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x269B24u;
        goto label_269b24;
    }
    ctx->pc = 0x269B1Cu;
    SET_GPR_U32(ctx, 31, 0x269B24u);
    ctx->pc = 0x269B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269B1Cu;
            // 0x269b20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2694D8u;
    if (runtime->hasFunction(0x2694D8u)) {
        auto targetFn = runtime->lookupFunction(0x2694D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B24u; }
        if (ctx->pc != 0x269B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002694D8_0x2694d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B24u; }
        if (ctx->pc != 0x269B24u) { return; }
    }
    ctx->pc = 0x269B24u;
label_269b24:
    // 0x269b24: 0x2402ff37  addiu       $v0, $zero, -0xC9
    ctx->pc = 0x269b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
label_269b28:
    // 0x269b28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x269b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_269b2c:
    // 0x269b2c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x269b2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_269b30:
    // 0x269b30: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x269b30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_269b34:
    // 0x269b34: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x269b34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_269b38:
    // 0x269b38: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x269b38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_269b3c:
    // 0x269b3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x269b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_269b40:
    // 0x269b40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x269b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_269b44:
    // 0x269b44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x269b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_269b48:
    // 0x269b48: 0x3e00008  jr          $ra
label_269b4c:
    if (ctx->pc == 0x269B4Cu) {
        ctx->pc = 0x269B4Cu;
            // 0x269b4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x269B50u;
        goto label_269b50;
    }
    ctx->pc = 0x269B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269B48u;
            // 0x269b4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269B50u;
label_269b50:
    // 0x269b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_269b54:
    // 0x269b54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x269b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_269b58:
    // 0x269b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x269b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_269b5c:
    // 0x269b5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_269b60:
    // 0x269b60: 0xc09b7ee  jal         func_26DFB8
label_269b64:
    if (ctx->pc == 0x269B64u) {
        ctx->pc = 0x269B64u;
            // 0x269b64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269B68u;
        goto label_269b68;
    }
    ctx->pc = 0x269B60u;
    SET_GPR_U32(ctx, 31, 0x269B68u);
    ctx->pc = 0x269B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269B60u;
            // 0x269b64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26DFB8u;
    if (runtime->hasFunction(0x26DFB8u)) {
        auto targetFn = runtime->lookupFunction(0x26DFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B68u; }
        if (ctx->pc != 0x269B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026DFB8_0x26dfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B68u; }
        if (ctx->pc != 0x269B68u) { return; }
    }
    ctx->pc = 0x269B68u;
label_269b68:
    // 0x269b68: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_269b6c:
    if (ctx->pc == 0x269B6Cu) {
        ctx->pc = 0x269B6Cu;
            // 0x269b6c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x269B70u;
        goto label_269b70;
    }
    ctx->pc = 0x269B68u;
    {
        const bool branch_taken_0x269b68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x269b68) {
            ctx->pc = 0x269B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269B68u;
            // 0x269b6c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269B88u;
            goto label_269b88;
        }
    }
    ctx->pc = 0x269B70u;
label_269b70:
    // 0x269b70: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x269b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_269b74:
    // 0x269b74: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x269b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_269b78:
    // 0x269b78: 0xc08b5ac  jal         func_22D6B0
label_269b7c:
    if (ctx->pc == 0x269B7Cu) {
        ctx->pc = 0x269B7Cu;
            // 0x269b7c: 0x24a581c8  addiu       $a1, $a1, -0x7E38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934984));
        ctx->pc = 0x269B80u;
        goto label_269b80;
    }
    ctx->pc = 0x269B78u;
    SET_GPR_U32(ctx, 31, 0x269B80u);
    ctx->pc = 0x269B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269B78u;
            // 0x269b7c: 0x24a581c8  addiu       $a1, $a1, -0x7E38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B80u; }
        if (ctx->pc != 0x269B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B80u; }
        if (ctx->pc != 0x269B80u) { return; }
    }
    ctx->pc = 0x269B80u;
label_269b80:
    // 0x269b80: 0x1000000f  b           . + 4 + (0xF << 2)
label_269b84:
    if (ctx->pc == 0x269B84u) {
        ctx->pc = 0x269B84u;
            // 0x269b84: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x269B88u;
        goto label_269b88;
    }
    ctx->pc = 0x269B80u;
    {
        const bool branch_taken_0x269b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269B80u;
            // 0x269b84: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b80) {
            ctx->pc = 0x269BC0u;
            goto label_269bc0;
        }
    }
    ctx->pc = 0x269B88u;
label_269b88:
    // 0x269b88: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x269b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_269b8c:
    // 0x269b8c: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x269b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_269b90:
    // 0x269b90: 0xc0980bc  jal         func_2602F0
label_269b94:
    if (ctx->pc == 0x269B94u) {
        ctx->pc = 0x269B94u;
            // 0x269b94: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x269B98u;
        goto label_269b98;
    }
    ctx->pc = 0x269B90u;
    SET_GPR_U32(ctx, 31, 0x269B98u);
    ctx->pc = 0x269B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269B90u;
            // 0x269b94: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2602F0u;
    if (runtime->hasFunction(0x2602F0u)) {
        auto targetFn = runtime->lookupFunction(0x2602F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B98u; }
        if (ctx->pc != 0x269B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002602F0_0x2602f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B98u; }
        if (ctx->pc != 0x269B98u) { return; }
    }
    ctx->pc = 0x269B98u;
label_269b98:
    // 0x269b98: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x269b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_269b9c:
    // 0x269b9c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_269ba0:
    // 0x269ba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_269ba4:
    if (ctx->pc == 0x269BA4u) {
        ctx->pc = 0x269BA4u;
            // 0x269ba4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x269BA8u;
        goto label_269ba8;
    }
    ctx->pc = 0x269BA0u;
    {
        const bool branch_taken_0x269ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269BA0u;
            // 0x269ba4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ba0) {
            ctx->pc = 0x269BBCu;
            goto label_269bbc;
        }
    }
    ctx->pc = 0x269BA8u;
label_269ba8:
    // 0x269ba8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x269ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_269bac:
    // 0x269bac: 0xc08b5ac  jal         func_22D6B0
label_269bb0:
    if (ctx->pc == 0x269BB0u) {
        ctx->pc = 0x269BB0u;
            // 0x269bb0: 0x24a581f8  addiu       $a1, $a1, -0x7E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935032));
        ctx->pc = 0x269BB4u;
        goto label_269bb4;
    }
    ctx->pc = 0x269BACu;
    SET_GPR_U32(ctx, 31, 0x269BB4u);
    ctx->pc = 0x269BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269BACu;
            // 0x269bb0: 0x24a581f8  addiu       $a1, $a1, -0x7E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269BB4u; }
        if (ctx->pc != 0x269BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269BB4u; }
        if (ctx->pc != 0x269BB4u) { return; }
    }
    ctx->pc = 0x269BB4u;
label_269bb4:
    // 0x269bb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_269bb8:
    if (ctx->pc == 0x269BB8u) {
        ctx->pc = 0x269BB8u;
            // 0x269bb8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x269BBCu;
        goto label_269bbc;
    }
    ctx->pc = 0x269BB4u;
    {
        const bool branch_taken_0x269bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269BB4u;
            // 0x269bb8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bb4) {
            ctx->pc = 0x269BC0u;
            goto label_269bc0;
        }
    }
    ctx->pc = 0x269BBCu;
label_269bbc:
    // 0x269bbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x269bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_269bc0:
    // 0x269bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x269bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_269bc4:
    // 0x269bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x269bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269bc8:
    // 0x269bc8: 0x3e00008  jr          $ra
label_269bcc:
    if (ctx->pc == 0x269BCCu) {
        ctx->pc = 0x269BCCu;
            // 0x269bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x269BD0u;
        goto label_269bd0;
    }
    ctx->pc = 0x269BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269BC8u;
            // 0x269bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269BD0u;
label_269bd0:
    // 0x269bd0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x269bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_269bd4:
    // 0x269bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x269bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_269bd8:
    // 0x269bd8: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x269bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
label_269bdc:
    // 0x269bdc: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x269bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
label_269be0:
    // 0x269be0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x269be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269be4:
    // 0x269be4: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x269be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
label_269be8:
    // 0x269be8: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x269be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
label_269bec:
    // 0x269bec: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x269becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
label_269bf0:
    // 0x269bf0: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x269bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
label_269bf4:
    // 0x269bf4: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x269bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
label_269bf8:
    // 0x269bf8: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x269bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
label_269bfc:
    // 0x269bfc: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x269bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
label_269c00:
    // 0x269c00: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_269c04:
    if (ctx->pc == 0x269C04u) {
        ctx->pc = 0x269C04u;
            // 0x269c04: 0xffb00110  sd          $s0, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
        ctx->pc = 0x269C08u;
        goto label_269c08;
    }
    ctx->pc = 0x269C00u;
    {
        const bool branch_taken_0x269c00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x269C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C00u;
            // 0x269c04: 0xffb00110  sd          $s0, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c00) {
            ctx->pc = 0x269C10u;
            goto label_269c10;
        }
    }
    ctx->pc = 0x269C08u;
label_269c08:
    // 0x269c08: 0x10000017  b           . + 4 + (0x17 << 2)
label_269c0c:
    if (ctx->pc == 0x269C0Cu) {
        ctx->pc = 0x269C0Cu;
            // 0x269c0c: 0x8e420190  lw          $v0, 0x190($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
        ctx->pc = 0x269C10u;
        goto label_269c10;
    }
    ctx->pc = 0x269C08u;
    {
        const bool branch_taken_0x269c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C08u;
            // 0x269c0c: 0x8e420190  lw          $v0, 0x190($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c08) {
            ctx->pc = 0x269C68u;
            goto label_269c68;
        }
    }
    ctx->pc = 0x269C10u;
label_269c10:
    // 0x269c10: 0xc08b614  jal         func_22D850
label_269c14:
    if (ctx->pc == 0x269C14u) {
        ctx->pc = 0x269C18u;
        goto label_269c18;
    }
    ctx->pc = 0x269C10u;
    SET_GPR_U32(ctx, 31, 0x269C18u);
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C18u; }
        if (ctx->pc != 0x269C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C18u; }
        if (ctx->pc != 0x269C18u) { return; }
    }
    ctx->pc = 0x269C18u;
label_269c18:
    // 0x269c18: 0x8e4401a8  lw          $a0, 0x1A8($s2)
    ctx->pc = 0x269c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_269c1c:
    // 0x269c1c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x269c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_269c20:
    // 0x269c20: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x269c20u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_269c24:
    // 0x269c24: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_269c28:
    if (ctx->pc == 0x269C28u) {
        ctx->pc = 0x269C28u;
            // 0x269c28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x269C2Cu;
        goto label_269c2c;
    }
    ctx->pc = 0x269C24u;
    {
        const bool branch_taken_0x269c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c24) {
            ctx->pc = 0x269C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269C24u;
            // 0x269c28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x269C2Cu;
            goto label_269c2c;
        }
    }
    ctx->pc = 0x269C2Cu;
label_269c2c:
    // 0x269c2c: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x269c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_269c30:
    // 0x269c30: 0x2810  mfhi        $a1
    ctx->pc = 0x269c30u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_269c34:
    // 0x269c34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x269c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_269c38:
    // 0x269c38: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x269c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_269c3c:
    // 0x269c3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_269c40:
    if (ctx->pc == 0x269C40u) {
        ctx->pc = 0x269C40u;
            // 0x269c40: 0xae4401a8  sw          $a0, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 4));
        ctx->pc = 0x269C44u;
        goto label_269c44;
    }
    ctx->pc = 0x269C3Cu;
    {
        const bool branch_taken_0x269c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C3Cu;
            // 0x269c40: 0xae4401a8  sw          $a0, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c3c) {
            ctx->pc = 0x269C6Cu;
            goto label_269c6c;
        }
    }
    ctx->pc = 0x269C44u;
label_269c44:
    // 0x269c44: 0xc08b614  jal         func_22D850
label_269c48:
    if (ctx->pc == 0x269C48u) {
        ctx->pc = 0x269C4Cu;
        goto label_269c4c;
    }
    ctx->pc = 0x269C44u;
    SET_GPR_U32(ctx, 31, 0x269C4Cu);
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C4Cu; }
        if (ctx->pc != 0x269C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C4Cu; }
        if (ctx->pc != 0x269C4Cu) { return; }
    }
    ctx->pc = 0x269C4Cu;
label_269c4c:
    // 0x269c4c: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x269c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_269c50:
    // 0x269c50: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x269c50u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_269c54:
    // 0x269c54: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_269c58:
    if (ctx->pc == 0x269C58u) {
        ctx->pc = 0x269C58u;
            // 0x269c58: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x269C5Cu;
        goto label_269c5c;
    }
    ctx->pc = 0x269C54u;
    {
        const bool branch_taken_0x269c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c54) {
            ctx->pc = 0x269C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269C54u;
            // 0x269c58: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x269C5Cu;
            goto label_269c5c;
        }
    }
    ctx->pc = 0x269C5Cu;
label_269c5c:
    // 0x269c5c: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x269c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_269c60:
    // 0x269c60: 0x2010  mfhi        $a0
    ctx->pc = 0x269c60u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_269c64:
    // 0x269c64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x269c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_269c68:
    // 0x269c68: 0xae4201a8  sw          $v0, 0x1A8($s2)
    ctx->pc = 0x269c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 2));
label_269c6c:
    // 0x269c6c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x269c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_269c70:
    // 0x269c70: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x269c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_269c74:
    // 0x269c74: 0xc098ba8  jal         func_262EA0
label_269c78:
    if (ctx->pc == 0x269C78u) {
        ctx->pc = 0x269C78u;
            // 0x269c78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269C7Cu;
        goto label_269c7c;
    }
    ctx->pc = 0x269C74u;
    SET_GPR_U32(ctx, 31, 0x269C7Cu);
    ctx->pc = 0x269C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269C74u;
            // 0x269c78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C7Cu; }
        if (ctx->pc != 0x269C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C7Cu; }
        if (ctx->pc != 0x269C7Cu) { return; }
    }
    ctx->pc = 0x269C7Cu;
label_269c7c:
    // 0x269c7c: 0x4400109  bltz        $v0, . + 4 + (0x109 << 2)
label_269c80:
    if (ctx->pc == 0x269C80u) {
        ctx->pc = 0x269C80u;
            // 0x269c80: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x269C84u;
        goto label_269c84;
    }
    ctx->pc = 0x269C7Cu;
    {
        const bool branch_taken_0x269c7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x269C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C7Cu;
            // 0x269c80: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c7c) {
            ctx->pc = 0x26A0A4u;
            goto label_26a0a4;
        }
    }
    ctx->pc = 0x269C84u;
label_269c84:
    // 0x269c84: 0x8e42018c  lw          $v0, 0x18C($s2)
    ctx->pc = 0x269c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
label_269c88:
    // 0x269c88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_269c8c:
    if (ctx->pc == 0x269C8Cu) {
        ctx->pc = 0x269C8Cu;
            // 0x269c8c: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->pc = 0x269C90u;
        goto label_269c90;
    }
    ctx->pc = 0x269C88u;
    {
        const bool branch_taken_0x269c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C88u;
            // 0x269c8c: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c88) {
            ctx->pc = 0x269CBCu;
            goto label_269cbc;
        }
    }
    ctx->pc = 0x269C90u;
label_269c90:
    // 0x269c90: 0x9e4301a8  lwu         $v1, 0x1A8($s2)
    ctx->pc = 0x269c90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_269c94:
    // 0x269c94: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x269c94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_269c98:
    // 0x269c98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x269c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_269c9c:
    // 0x269c9c: 0xde440198  ld          $a0, 0x198($s2)
    ctx->pc = 0x269c9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 408)));
label_269ca0:
    // 0x269ca0: 0xa3182d  daddu       $v1, $a1, $v1
    ctx->pc = 0x269ca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
label_269ca4:
    // 0x269ca4: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x269ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_269ca8:
    // 0x269ca8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x269ca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_269cac:
    // 0x269cac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_269cb0:
    if (ctx->pc == 0x269CB0u) {
        ctx->pc = 0x269CB0u;
            // 0x269cb0: 0x8e4901a8  lw          $t1, 0x1A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
        ctx->pc = 0x269CB4u;
        goto label_269cb4;
    }
    ctx->pc = 0x269CACu;
    {
        const bool branch_taken_0x269cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269CACu;
            // 0x269cb0: 0x8e4901a8  lw          $t1, 0x1A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cac) {
            ctx->pc = 0x269CC8u;
            goto label_269cc8;
        }
    }
    ctx->pc = 0x269CB4u;
label_269cb4:
    // 0x269cb4: 0x10000009  b           . + 4 + (0x9 << 2)
label_269cb8:
    if (ctx->pc == 0x269CB8u) {
        ctx->pc = 0x269CB8u;
            // 0x269cb8: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269CBCu;
        goto label_269cbc;
    }
    ctx->pc = 0x269CB4u;
    {
        const bool branch_taken_0x269cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269CB4u;
            // 0x269cb8: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cb4) {
            ctx->pc = 0x269CDCu;
            goto label_269cdc;
        }
    }
    ctx->pc = 0x269CBCu;
label_269cbc:
    // 0x269cbc: 0x8e4901a8  lw          $t1, 0x1A8($s2)
    ctx->pc = 0x269cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_269cc0:
    // 0x269cc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_269cc4:
    if (ctx->pc == 0x269CC4u) {
        ctx->pc = 0x269CC4u;
            // 0x269cc4: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269CC8u;
        goto label_269cc8;
    }
    ctx->pc = 0x269CC0u;
    {
        const bool branch_taken_0x269cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269CC0u;
            // 0x269cc4: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cc0) {
            ctx->pc = 0x269CDCu;
            goto label_269cdc;
        }
    }
    ctx->pc = 0x269CC8u;
label_269cc8:
    // 0x269cc8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x269cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_269ccc:
    // 0x269ccc: 0x1040011e  beqz        $v0, . + 4 + (0x11E << 2)
label_269cd0:
    if (ctx->pc == 0x269CD0u) {
        ctx->pc = 0x269CD0u;
            // 0x269cd0: 0x85102f  dsubu       $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
        ctx->pc = 0x269CD4u;
        goto label_269cd4;
    }
    ctx->pc = 0x269CCCu;
    {
        const bool branch_taken_0x269ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269CCCu;
            // 0x269cd0: 0x85102f  dsubu       $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ccc) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269CD4u;
label_269cd4:
    // 0x269cd4: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x269cd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
label_269cd8:
    // 0x269cd8: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x269cd8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_269cdc:
    // 0x269cdc: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x269cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_269ce0:
    // 0x269ce0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_269ce4:
    // 0x269ce4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x269ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_269ce8:
    // 0x269ce8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x269ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_269cec:
    // 0x269cec: 0x88640013  lwl         $a0, 0x13($v1)
    ctx->pc = 0x269cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_269cf0:
    // 0x269cf0: 0x98640010  lwr         $a0, 0x10($v1)
    ctx->pc = 0x269cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_269cf4:
    // 0x269cf4: 0x26108250  addiu       $s0, $s0, -0x7DB0
    ctx->pc = 0x269cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935120));
label_269cf8:
    // 0x269cf8: 0xc0990d8  jal         func_264360
label_269cfc:
    if (ctx->pc == 0x269CFCu) {
        ctx->pc = 0x269CFCu;
            // 0x269cfc: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->pc = 0x269D00u;
        goto label_269d00;
    }
    ctx->pc = 0x269CF8u;
    SET_GPR_U32(ctx, 31, 0x269D00u);
    ctx->pc = 0x269CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269CF8u;
            // 0x269cfc: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D00u; }
        if (ctx->pc != 0x269D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D00u; }
        if (ctx->pc != 0x269D00u) { return; }
    }
    ctx->pc = 0x269D00u;
label_269d00:
    // 0x269d00: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x269d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_269d04:
    // 0x269d04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x269d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269d08:
    // 0x269d08: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x269d08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_269d0c:
    // 0x269d0c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x269d0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_269d10:
    // 0x269d10: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x269d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_269d14:
    // 0x269d14: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x269d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_269d18:
    // 0x269d18: 0xc08b60c  jal         func_22D830
label_269d1c:
    if (ctx->pc == 0x269D1Cu) {
        ctx->pc = 0x269D1Cu;
            // 0x269d1c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x269D20u;
        goto label_269d20;
    }
    ctx->pc = 0x269D18u;
    SET_GPR_U32(ctx, 31, 0x269D20u);
    ctx->pc = 0x269D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D18u;
            // 0x269d1c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D20u; }
        if (ctx->pc != 0x269D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D20u; }
        if (ctx->pc != 0x269D20u) { return; }
    }
    ctx->pc = 0x269D20u;
label_269d20:
    // 0x269d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x269d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269d24:
    // 0x269d24: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x269d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269d28:
    // 0x269d28: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x269d28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269d2c:
    // 0x269d2c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x269d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_269d30:
    // 0x269d30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x269d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269d34:
    // 0x269d34: 0xc08b5ac  jal         func_22D6B0
label_269d38:
    if (ctx->pc == 0x269D38u) {
        ctx->pc = 0x269D38u;
            // 0x269d38: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269D3Cu;
        goto label_269d3c;
    }
    ctx->pc = 0x269D34u;
    SET_GPR_U32(ctx, 31, 0x269D3Cu);
    ctx->pc = 0x269D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D34u;
            // 0x269d38: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D3Cu; }
        if (ctx->pc != 0x269D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D3Cu; }
        if (ctx->pc != 0x269D3Cu) { return; }
    }
    ctx->pc = 0x269D3Cu;
label_269d3c:
    // 0x269d3c: 0x1a6000d4  blez        $s3, . + 4 + (0xD4 << 2)
label_269d40:
    if (ctx->pc == 0x269D40u) {
        ctx->pc = 0x269D44u;
        goto label_269d44;
    }
    ctx->pc = 0x269D3Cu;
    {
        const bool branch_taken_0x269d3c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x269d3c) {
            ctx->pc = 0x26A090u;
            goto label_26a090;
        }
    }
    ctx->pc = 0x269D44u;
label_269d44:
    // 0x269d44: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x269d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_269d48:
    // 0x269d48: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x269d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_269d4c:
    // 0x269d4c: 0xc098092  jal         func_260248
label_269d50:
    if (ctx->pc == 0x269D50u) {
        ctx->pc = 0x269D50u;
            // 0x269d50: 0x8e46001c  lw          $a2, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x269D54u;
        goto label_269d54;
    }
    ctx->pc = 0x269D4Cu;
    SET_GPR_U32(ctx, 31, 0x269D54u);
    ctx->pc = 0x269D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D4Cu;
            // 0x269d50: 0x8e46001c  lw          $a2, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260248u;
    if (runtime->hasFunction(0x260248u)) {
        auto targetFn = runtime->lookupFunction(0x260248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D54u; }
        if (ctx->pc != 0x269D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260248_0x260248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D54u; }
        if (ctx->pc != 0x269D54u) { return; }
    }
    ctx->pc = 0x269D54u;
label_269d54:
    // 0x269d54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x269d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269d58:
    // 0x269d58: 0x62000e7  bltz        $s1, . + 4 + (0xE7 << 2)
label_269d5c:
    if (ctx->pc == 0x269D5Cu) {
        ctx->pc = 0x269D5Cu;
            // 0x269d5c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x269D60u;
        goto label_269d60;
    }
    ctx->pc = 0x269D58u;
    {
        const bool branch_taken_0x269d58 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x269D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269D58u;
            // 0x269d5c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d58) {
            ctx->pc = 0x26A0F8u;
            goto label_26a0f8;
        }
    }
    ctx->pc = 0x269D60u;
label_269d60:
    // 0x269d60: 0xc04332c  jal         func_10CCB0
label_269d64:
    if (ctx->pc == 0x269D64u) {
        ctx->pc = 0x269D64u;
            // 0x269d64: 0x8e4401b0  lw          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->pc = 0x269D68u;
        goto label_269d68;
    }
    ctx->pc = 0x269D60u;
    SET_GPR_U32(ctx, 31, 0x269D68u);
    ctx->pc = 0x269D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D60u;
            // 0x269d64: 0x8e4401b0  lw          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D68u; }
        if (ctx->pc != 0x269D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D68u; }
        if (ctx->pc != 0x269D68u) { return; }
    }
    ctx->pc = 0x269D68u;
label_269d68:
    // 0x269d68: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x269d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_269d6c:
    // 0x269d6c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_269d70:
    if (ctx->pc == 0x269D70u) {
        ctx->pc = 0x269D70u;
            // 0x269d70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269D74u;
        goto label_269d74;
    }
    ctx->pc = 0x269D6Cu;
    {
        const bool branch_taken_0x269d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x269D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269D6Cu;
            // 0x269d70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d6c) {
            ctx->pc = 0x269D7Cu;
            goto label_269d7c;
        }
    }
    ctx->pc = 0x269D74u;
label_269d74:
    // 0x269d74: 0xc09a536  jal         func_2694D8
label_269d78:
    if (ctx->pc == 0x269D78u) {
        ctx->pc = 0x269D78u;
            // 0x269d78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x269D7Cu;
        goto label_269d7c;
    }
    ctx->pc = 0x269D74u;
    SET_GPR_U32(ctx, 31, 0x269D7Cu);
    ctx->pc = 0x269D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D74u;
            // 0x269d78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2694D8u;
    if (runtime->hasFunction(0x2694D8u)) {
        auto targetFn = runtime->lookupFunction(0x2694D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D7Cu; }
        if (ctx->pc != 0x269D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002694D8_0x2694d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D7Cu; }
        if (ctx->pc != 0x269D7Cu) { return; }
    }
    ctx->pc = 0x269D7Cu;
label_269d7c:
    // 0x269d7c: 0x1a2000c1  blez        $s1, . + 4 + (0xC1 << 2)
label_269d80:
    if (ctx->pc == 0x269D80u) {
        ctx->pc = 0x269D80u;
            // 0x269d80: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x269D84u;
        goto label_269d84;
    }
    ctx->pc = 0x269D7Cu;
    {
        const bool branch_taken_0x269d7c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x269D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269D7Cu;
            // 0x269d80: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d7c) {
            ctx->pc = 0x26A084u;
            goto label_26a084;
        }
    }
    ctx->pc = 0x269D84u;
label_269d84:
    // 0x269d84: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x269d84u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_269d88:
    // 0x269d88: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x269d88u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_269d8c:
    // 0x269d8c: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x269d8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_269d90:
    // 0x269d90: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x269d90u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
label_269d94:
    // 0x269d94: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x269d94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_269d98:
    // 0x269d98: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x269d98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269d9c:
    // 0x269d9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x269d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_269da0:
    // 0x269da0: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x269da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_269da4:
    // 0x269da4: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x269da4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_269da8:
    // 0x269da8: 0x24a5000e  addiu       $a1, $a1, 0xE
    ctx->pc = 0x269da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_269dac:
    // 0x269dac: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x269dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_269db0:
    // 0x269db0: 0xae450034  sw          $a1, 0x34($s2)
    ctx->pc = 0x269db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 5));
label_269db4:
    // 0x269db4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x269db4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_269db8:
    // 0x269db8: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x269db8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_269dbc:
    // 0x269dbc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x269dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_269dc0:
    // 0x269dc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_269dc4:
    // 0x269dc4: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x269dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_269dc8:
    // 0x269dc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x269dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_269dcc:
    // 0x269dcc: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x269dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_269dd0:
    // 0x269dd0: 0xae440038  sw          $a0, 0x38($s2)
    ctx->pc = 0x269dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
label_269dd4:
    // 0x269dd4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x269dd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_269dd8:
    // 0x269dd8: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x269dd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_269ddc:
    // 0x269ddc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x269ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_269de0:
    // 0x269de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x269de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_269de4:
    // 0x269de4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_269de8:
    // 0x269de8: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x269de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
label_269dec:
    // 0x269dec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x269decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_269df0:
    // 0x269df0: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x269df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_269df4:
    // 0x269df4: 0xc09a476  jal         func_2691D8
label_269df8:
    if (ctx->pc == 0x269DF8u) {
        ctx->pc = 0x269DF8u;
            // 0x269df8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269DFCu;
        goto label_269dfc;
    }
    ctx->pc = 0x269DF4u;
    SET_GPR_U32(ctx, 31, 0x269DFCu);
    ctx->pc = 0x269DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269DF4u;
            // 0x269df8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2691D8u;
    if (runtime->hasFunction(0x2691D8u)) {
        auto targetFn = runtime->lookupFunction(0x2691D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DFCu; }
        if (ctx->pc != 0x269DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002691D8_0x2691d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DFCu; }
        if (ctx->pc != 0x269DFCu) { return; }
    }
    ctx->pc = 0x269DFCu;
label_269dfc:
    // 0x269dfc: 0x54400096  bnel        $v0, $zero, . + 4 + (0x96 << 2)
label_269e00:
    if (ctx->pc == 0x269E00u) {
        ctx->pc = 0x269E00u;
            // 0x269e00: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x269E04u;
        goto label_269e04;
    }
    ctx->pc = 0x269DFCu;
    {
        const bool branch_taken_0x269dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269dfc) {
            ctx->pc = 0x269E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269DFCu;
            // 0x269e00: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A058u;
            goto label_26a058;
        }
    }
    ctx->pc = 0x269E04u;
label_269e04:
    // 0x269e04: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x269e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_269e08:
    // 0x269e08: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x269e08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_269e0c:
    // 0x269e0c: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x269e0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_269e10:
    // 0x269e10: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x269e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_269e14:
    // 0x269e14: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x269e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_269e18:
    // 0x269e18: 0xc08b60c  jal         func_22D830
label_269e1c:
    if (ctx->pc == 0x269E1Cu) {
        ctx->pc = 0x269E1Cu;
            // 0x269e1c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x269E20u;
        goto label_269e20;
    }
    ctx->pc = 0x269E18u;
    SET_GPR_U32(ctx, 31, 0x269E20u);
    ctx->pc = 0x269E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E18u;
            // 0x269e1c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E20u; }
        if (ctx->pc != 0x269E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E20u; }
        if (ctx->pc != 0x269E20u) { return; }
    }
    ctx->pc = 0x269E20u;
label_269e20:
    // 0x269e20: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x269e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_269e24:
    // 0x269e24: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x269e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_269e28:
    // 0x269e28: 0xc09b218  jal         func_26C860
label_269e2c:
    if (ctx->pc == 0x269E2Cu) {
        ctx->pc = 0x269E2Cu;
            // 0x269e2c: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->pc = 0x269E30u;
        goto label_269e30;
    }
    ctx->pc = 0x269E28u;
    SET_GPR_U32(ctx, 31, 0x269E30u);
    ctx->pc = 0x269E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E28u;
            // 0x269e2c: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C860u;
    if (runtime->hasFunction(0x26C860u)) {
        auto targetFn = runtime->lookupFunction(0x26C860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E30u; }
        if (ctx->pc != 0x269E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C860_0x26c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E30u; }
        if (ctx->pc != 0x269E30u) { return; }
    }
    ctx->pc = 0x269E30u;
label_269e30:
    // 0x269e30: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
label_269e34:
    if (ctx->pc == 0x269E34u) {
        ctx->pc = 0x269E34u;
            // 0x269e34: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x269E38u;
        goto label_269e38;
    }
    ctx->pc = 0x269E30u;
    {
        const bool branch_taken_0x269e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e30) {
            ctx->pc = 0x269E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269E30u;
            // 0x269e34: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A058u;
            goto label_26a058;
        }
    }
    ctx->pc = 0x269E38u;
label_269e38:
    // 0x269e38: 0x80440002  lb          $a0, 0x2($v0)
    ctx->pc = 0x269e38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_269e3c:
    // 0x269e3c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x269e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_269e40:
    // 0x269e40: 0x1482002a  bne         $a0, $v0, . + 4 + (0x2A << 2)
label_269e44:
    if (ctx->pc == 0x269E44u) {
        ctx->pc = 0x269E44u;
            // 0x269e44: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x269E48u;
        goto label_269e48;
    }
    ctx->pc = 0x269E40u;
    {
        const bool branch_taken_0x269e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x269E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269E40u;
            // 0x269e44: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e40) {
            ctx->pc = 0x269EECu;
            goto label_269eec;
        }
    }
    ctx->pc = 0x269E48u;
label_269e48:
    // 0x269e48: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x269e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_269e4c:
    // 0x269e4c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x269e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_269e50:
    // 0x269e50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x269e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_269e54:
    // 0x269e54: 0x8844000f  lwl         $a0, 0xF($v0)
    ctx->pc = 0x269e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_269e58:
    // 0x269e58: 0x9844000c  lwr         $a0, 0xC($v0)
    ctx->pc = 0x269e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_269e5c:
    // 0x269e5c: 0xc0990d8  jal         func_264360
label_269e60:
    if (ctx->pc == 0x269E60u) {
        ctx->pc = 0x269E60u;
            // 0x269e60: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->pc = 0x269E64u;
        goto label_269e64;
    }
    ctx->pc = 0x269E5Cu;
    SET_GPR_U32(ctx, 31, 0x269E64u);
    ctx->pc = 0x269E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E5Cu;
            // 0x269e60: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E64u; }
        if (ctx->pc != 0x269E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E64u; }
        if (ctx->pc != 0x269E64u) { return; }
    }
    ctx->pc = 0x269E64u;
label_269e64:
    // 0x269e64: 0x26c582b8  addiu       $a1, $s6, -0x7D48
    ctx->pc = 0x269e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935224));
label_269e68:
    // 0x269e68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x269e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269e6c:
    // 0x269e6c: 0xc08b5ac  jal         func_22D6B0
label_269e70:
    if (ctx->pc == 0x269E70u) {
        ctx->pc = 0x269E70u;
            // 0x269e70: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x269E74u;
        goto label_269e74;
    }
    ctx->pc = 0x269E6Cu;
    SET_GPR_U32(ctx, 31, 0x269E74u);
    ctx->pc = 0x269E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E6Cu;
            // 0x269e70: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E74u; }
        if (ctx->pc != 0x269E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E74u; }
        if (ctx->pc != 0x269E74u) { return; }
    }
    ctx->pc = 0x269E74u;
label_269e74:
    // 0x269e74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x269e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_269e78:
    // 0x269e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x269e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269e7c:
    // 0x269e7c: 0xc049cb6  jal         func_1272D8
label_269e80:
    if (ctx->pc == 0x269E80u) {
        ctx->pc = 0x269E80u;
            // 0x269e80: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x269E84u;
        goto label_269e84;
    }
    ctx->pc = 0x269E7Cu;
    SET_GPR_U32(ctx, 31, 0x269E84u);
    ctx->pc = 0x269E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E7Cu;
            // 0x269e80: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E84u; }
        if (ctx->pc != 0x269E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E84u; }
        if (ctx->pc != 0x269E84u) { return; }
    }
    ctx->pc = 0x269E84u;
label_269e84:
    // 0x269e84: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x269e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_269e88:
    // 0x269e88: 0x90640005  lbu         $a0, 0x5($v1)
    ctx->pc = 0x269e88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_269e8c:
    // 0x269e8c: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x269e8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_269e90:
    // 0x269e90: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x269e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_269e94:
    // 0x269e94: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x269e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_269e98:
    // 0x269e98: 0xc08b60c  jal         func_22D830
label_269e9c:
    if (ctx->pc == 0x269E9Cu) {
        ctx->pc = 0x269E9Cu;
            // 0x269e9c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x269EA0u;
        goto label_269ea0;
    }
    ctx->pc = 0x269E98u;
    SET_GPR_U32(ctx, 31, 0x269EA0u);
    ctx->pc = 0x269E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E98u;
            // 0x269e9c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EA0u; }
        if (ctx->pc != 0x269EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EA0u; }
        if (ctx->pc != 0x269EA0u) { return; }
    }
    ctx->pc = 0x269EA0u;
label_269ea0:
    // 0x269ea0: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x269ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_269ea4:
    // 0x269ea4: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x269ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_269ea8:
    // 0x269ea8: 0xc09b218  jal         func_26C860
label_269eac:
    if (ctx->pc == 0x269EACu) {
        ctx->pc = 0x269EACu;
            // 0x269eac: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->pc = 0x269EB0u;
        goto label_269eb0;
    }
    ctx->pc = 0x269EA8u;
    SET_GPR_U32(ctx, 31, 0x269EB0u);
    ctx->pc = 0x269EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269EA8u;
            // 0x269eac: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C860u;
    if (runtime->hasFunction(0x26C860u)) {
        auto targetFn = runtime->lookupFunction(0x26C860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EB0u; }
        if (ctx->pc != 0x269EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C860_0x26c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EB0u; }
        if (ctx->pc != 0x269EB0u) { return; }
    }
    ctx->pc = 0x269EB0u;
label_269eb0:
    // 0x269eb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_269eb4:
    if (ctx->pc == 0x269EB4u) {
        ctx->pc = 0x269EB4u;
            // 0x269eb4: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x269EB8u;
        goto label_269eb8;
    }
    ctx->pc = 0x269EB0u;
    {
        const bool branch_taken_0x269eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269EB0u;
            // 0x269eb4: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269eb0) {
            ctx->pc = 0x269ED8u;
            goto label_269ed8;
        }
    }
    ctx->pc = 0x269EB8u;
label_269eb8:
    // 0x269eb8: 0x80460001  lb          $a2, 0x1($v0)
    ctx->pc = 0x269eb8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_269ebc:
    // 0x269ebc: 0xc09b4bc  jal         func_26D2F0
label_269ec0:
    if (ctx->pc == 0x269EC0u) {
        ctx->pc = 0x269EC0u;
            // 0x269ec0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269EC4u;
        goto label_269ec4;
    }
    ctx->pc = 0x269EBCu;
    SET_GPR_U32(ctx, 31, 0x269EC4u);
    ctx->pc = 0x269EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269EBCu;
            // 0x269ec0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D2F0u;
    if (runtime->hasFunction(0x26D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x26D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EC4u; }
        if (ctx->pc != 0x269EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D2F0_0x26d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EC4u; }
        if (ctx->pc != 0x269EC4u) { return; }
    }
    ctx->pc = 0x269EC4u;
label_269ec4:
    // 0x269ec4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x269ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_269ec8:
    // 0x269ec8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x269ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_269ecc:
    // 0x269ecc: 0x24a582d8  addiu       $a1, $a1, -0x7D28
    ctx->pc = 0x269eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935256));
label_269ed0:
    // 0x269ed0: 0xc08b5ac  jal         func_22D6B0
label_269ed4:
    if (ctx->pc == 0x269ED4u) {
        ctx->pc = 0x269ED4u;
            // 0x269ed4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269ED8u;
        goto label_269ed8;
    }
    ctx->pc = 0x269ED0u;
    SET_GPR_U32(ctx, 31, 0x269ED8u);
    ctx->pc = 0x269ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269ED0u;
            // 0x269ed4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269ED8u; }
        if (ctx->pc != 0x269ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269ED8u; }
        if (ctx->pc != 0x269ED8u) { return; }
    }
    ctx->pc = 0x269ED8u;
label_269ed8:
    // 0x269ed8: 0xc09b4cc  jal         func_26D330
label_269edc:
    if (ctx->pc == 0x269EDCu) {
        ctx->pc = 0x269EDCu;
            // 0x269edc: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->pc = 0x269EE0u;
        goto label_269ee0;
    }
    ctx->pc = 0x269ED8u;
    SET_GPR_U32(ctx, 31, 0x269EE0u);
    ctx->pc = 0x269EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269ED8u;
            // 0x269edc: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EE0u; }
        if (ctx->pc != 0x269EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EE0u; }
        if (ctx->pc != 0x269EE0u) { return; }
    }
    ctx->pc = 0x269EE0u;
label_269ee0:
    // 0x269ee0: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x269ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
label_269ee4:
    // 0x269ee4: 0x100000ae  b           . + 4 + (0xAE << 2)
label_269ee8:
    if (ctx->pc == 0x269EE8u) {
        ctx->pc = 0x269EE8u;
            // 0x269ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269EECu;
        goto label_269eec;
    }
    ctx->pc = 0x269EE4u;
    {
        const bool branch_taken_0x269ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269EE4u;
            // 0x269ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ee4) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x269EECu;
label_269eec:
    // 0x269eec: 0x5482005a  bnel        $a0, $v0, . + 4 + (0x5A << 2)
label_269ef0:
    if (ctx->pc == 0x269EF0u) {
        ctx->pc = 0x269EF0u;
            // 0x269ef0: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x269EF4u;
        goto label_269ef4;
    }
    ctx->pc = 0x269EECu;
    {
        const bool branch_taken_0x269eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x269eec) {
            ctx->pc = 0x269EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269EECu;
            // 0x269ef0: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A058u;
            goto label_26a058;
        }
    }
    ctx->pc = 0x269EF4u;
label_269ef4:
    // 0x269ef4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x269ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_269ef8:
    // 0x269ef8: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x269ef8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_269efc:
    // 0x269efc: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x269efcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_269f00:
    // 0x269f00: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x269f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_269f04:
    // 0x269f04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x269f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_269f08:
    // 0x269f08: 0xc08b60c  jal         func_22D830
label_269f0c:
    if (ctx->pc == 0x269F0Cu) {
        ctx->pc = 0x269F0Cu;
            // 0x269f0c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x269F10u;
        goto label_269f10;
    }
    ctx->pc = 0x269F08u;
    SET_GPR_U32(ctx, 31, 0x269F10u);
    ctx->pc = 0x269F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F08u;
            // 0x269f0c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F10u; }
        if (ctx->pc != 0x269F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F10u; }
        if (ctx->pc != 0x269F10u) { return; }
    }
    ctx->pc = 0x269F10u;
label_269f10:
    // 0x269f10: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x269f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_269f14:
    // 0x269f14: 0xc09b13e  jal         func_26C4F8
label_269f18:
    if (ctx->pc == 0x269F18u) {
        ctx->pc = 0x269F18u;
            // 0x269f18: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x269F1Cu;
        goto label_269f1c;
    }
    ctx->pc = 0x269F14u;
    SET_GPR_U32(ctx, 31, 0x269F1Cu);
    ctx->pc = 0x269F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F14u;
            // 0x269f18: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C4F8u;
    if (runtime->hasFunction(0x26C4F8u)) {
        auto targetFn = runtime->lookupFunction(0x26C4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F1Cu; }
        if (ctx->pc != 0x269F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C4F8_0x26c4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F1Cu; }
        if (ctx->pc != 0x269F1Cu) { return; }
    }
    ctx->pc = 0x269F1Cu;
label_269f1c:
    // 0x269f1c: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
label_269f20:
    if (ctx->pc == 0x269F20u) {
        ctx->pc = 0x269F20u;
            // 0x269f20: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x269F24u;
        goto label_269f24;
    }
    ctx->pc = 0x269F1Cu;
    {
        const bool branch_taken_0x269f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269f1c) {
            ctx->pc = 0x269F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269F1Cu;
            // 0x269f20: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A058u;
            goto label_26a058;
        }
    }
    ctx->pc = 0x269F24u;
label_269f24:
    // 0x269f24: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x269f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_269f28:
    // 0x269f28: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x269f28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_269f2c:
    // 0x269f2c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x269f2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_269f30:
    // 0x269f30: 0x8844000f  lwl         $a0, 0xF($v0)
    ctx->pc = 0x269f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_269f34:
    // 0x269f34: 0x9844000c  lwr         $a0, 0xC($v0)
    ctx->pc = 0x269f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_269f38:
    // 0x269f38: 0xc0990d8  jal         func_264360
label_269f3c:
    if (ctx->pc == 0x269F3Cu) {
        ctx->pc = 0x269F3Cu;
            // 0x269f3c: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->pc = 0x269F40u;
        goto label_269f40;
    }
    ctx->pc = 0x269F38u;
    SET_GPR_U32(ctx, 31, 0x269F40u);
    ctx->pc = 0x269F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F38u;
            // 0x269f3c: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F40u; }
        if (ctx->pc != 0x269F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F40u; }
        if (ctx->pc != 0x269F40u) { return; }
    }
    ctx->pc = 0x269F40u;
label_269f40:
    // 0x269f40: 0x26a58310  addiu       $a1, $s5, -0x7CF0
    ctx->pc = 0x269f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935312));
label_269f44:
    // 0x269f44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x269f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269f48:
    // 0x269f48: 0xc08b5ac  jal         func_22D6B0
label_269f4c:
    if (ctx->pc == 0x269F4Cu) {
        ctx->pc = 0x269F4Cu;
            // 0x269f4c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x269F50u;
        goto label_269f50;
    }
    ctx->pc = 0x269F48u;
    SET_GPR_U32(ctx, 31, 0x269F50u);
    ctx->pc = 0x269F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F48u;
            // 0x269f4c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F50u; }
        if (ctx->pc != 0x269F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F50u; }
        if (ctx->pc != 0x269F50u) { return; }
    }
    ctx->pc = 0x269F50u;
label_269f50:
    // 0x269f50: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x269f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_269f54:
    // 0x269f54: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x269f54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_269f58:
    // 0x269f58: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x269f58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_269f5c:
    // 0x269f5c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x269f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_269f60:
    // 0x269f60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x269f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_269f64:
    // 0x269f64: 0xc08b60c  jal         func_22D830
label_269f68:
    if (ctx->pc == 0x269F68u) {
        ctx->pc = 0x269F68u;
            // 0x269f68: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x269F6Cu;
        goto label_269f6c;
    }
    ctx->pc = 0x269F64u;
    SET_GPR_U32(ctx, 31, 0x269F6Cu);
    ctx->pc = 0x269F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F64u;
            // 0x269f68: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F6Cu; }
        if (ctx->pc != 0x269F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F6Cu; }
        if (ctx->pc != 0x269F6Cu) { return; }
    }
    ctx->pc = 0x269F6Cu;
label_269f6c:
    // 0x269f6c: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x269f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_269f70:
    // 0x269f70: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x269f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_269f74:
    // 0x269f74: 0xc09b2a4  jal         func_26CA90
label_269f78:
    if (ctx->pc == 0x269F78u) {
        ctx->pc = 0x269F78u;
            // 0x269f78: 0x8e460188  lw          $a2, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->pc = 0x269F7Cu;
        goto label_269f7c;
    }
    ctx->pc = 0x269F74u;
    SET_GPR_U32(ctx, 31, 0x269F7Cu);
    ctx->pc = 0x269F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F74u;
            // 0x269f78: 0x8e460188  lw          $a2, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA90u;
    if (runtime->hasFunction(0x26CA90u)) {
        auto targetFn = runtime->lookupFunction(0x26CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F7Cu; }
        if (ctx->pc != 0x269F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA90_0x26ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F7Cu; }
        if (ctx->pc != 0x269F7Cu) { return; }
    }
    ctx->pc = 0x269F7Cu;
label_269f7c:
    // 0x269f7c: 0x4400061  bltz        $v0, . + 4 + (0x61 << 2)
label_269f80:
    if (ctx->pc == 0x269F80u) {
        ctx->pc = 0x269F80u;
            // 0x269f80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269F84u;
        goto label_269f84;
    }
    ctx->pc = 0x269F7Cu;
    {
        const bool branch_taken_0x269f7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x269F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269F7Cu;
            // 0x269f80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f7c) {
            ctx->pc = 0x26A104u;
            goto label_26a104;
        }
    }
    ctx->pc = 0x269F84u;
label_269f84:
    // 0x269f84: 0x8e450188  lw          $a1, 0x188($s2)
    ctx->pc = 0x269f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_269f88:
    // 0x269f88: 0xc09afdc  jal         func_26BF70
label_269f8c:
    if (ctx->pc == 0x269F8Cu) {
        ctx->pc = 0x269F8Cu;
            // 0x269f8c: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
        ctx->pc = 0x269F90u;
        goto label_269f90;
    }
    ctx->pc = 0x269F88u;
    SET_GPR_U32(ctx, 31, 0x269F90u);
    ctx->pc = 0x269F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F88u;
            // 0x269f8c: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF70u;
    if (runtime->hasFunction(0x26BF70u)) {
        auto targetFn = runtime->lookupFunction(0x26BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F90u; }
        if (ctx->pc != 0x269F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF70_0x26bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F90u; }
        if (ctx->pc != 0x269F90u) { return; }
    }
    ctx->pc = 0x269F90u;
label_269f90:
    // 0x269f90: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_269f94:
    if (ctx->pc == 0x269F94u) {
        ctx->pc = 0x269F94u;
            // 0x269f94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269F98u;
        goto label_269f98;
    }
    ctx->pc = 0x269F90u;
    {
        const bool branch_taken_0x269f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269F90u;
            // 0x269f94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f90) {
            ctx->pc = 0x269FECu;
            goto label_269fec;
        }
    }
    ctx->pc = 0x269F98u;
label_269f98:
    // 0x269f98: 0xc098ba8  jal         func_262EA0
label_269f9c:
    if (ctx->pc == 0x269F9Cu) {
        ctx->pc = 0x269F9Cu;
            // 0x269f9c: 0x264401a0  addiu       $a0, $s2, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
        ctx->pc = 0x269FA0u;
        goto label_269fa0;
    }
    ctx->pc = 0x269F98u;
    SET_GPR_U32(ctx, 31, 0x269FA0u);
    ctx->pc = 0x269F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F98u;
            // 0x269f9c: 0x264401a0  addiu       $a0, $s2, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FA0u; }
        if (ctx->pc != 0x269FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FA0u; }
        if (ctx->pc != 0x269FA0u) { return; }
    }
    ctx->pc = 0x269FA0u;
label_269fa0:
    // 0x269fa0: 0x442005a  bltzl       $v0, . + 4 + (0x5A << 2)
label_269fa4:
    if (ctx->pc == 0x269FA4u) {
        ctx->pc = 0x269FA4u;
            // 0x269fa4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x269FA8u;
        goto label_269fa8;
    }
    ctx->pc = 0x269FA0u;
    {
        const bool branch_taken_0x269fa0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x269fa0) {
            ctx->pc = 0x269FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269FA0u;
            // 0x269fa4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A10Cu;
            goto label_26a10c;
        }
    }
    ctx->pc = 0x269FA8u;
label_269fa8:
    // 0x269fa8: 0x8e420188  lw          $v0, 0x188($s2)
    ctx->pc = 0x269fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_269fac:
    // 0x269fac: 0x88440010  lwl         $a0, 0x10($v0)
    ctx->pc = 0x269facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_269fb0:
    // 0x269fb0: 0x9844000d  lwr         $a0, 0xD($v0)
    ctx->pc = 0x269fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_269fb4:
    // 0x269fb4: 0xc0990d8  jal         func_264360
label_269fb8:
    if (ctx->pc == 0x269FB8u) {
        ctx->pc = 0x269FB8u;
            // 0x269fb8: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->pc = 0x269FBCu;
        goto label_269fbc;
    }
    ctx->pc = 0x269FB4u;
    SET_GPR_U32(ctx, 31, 0x269FBCu);
    ctx->pc = 0x269FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269FB4u;
            // 0x269fb8: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FBCu; }
        if (ctx->pc != 0x269FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FBCu; }
        if (ctx->pc != 0x269FBCu) { return; }
    }
    ctx->pc = 0x269FBCu;
label_269fbc:
    // 0x269fbc: 0x8e430188  lw          $v1, 0x188($s2)
    ctx->pc = 0x269fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_269fc0:
    // 0x269fc0: 0x26e58330  addiu       $a1, $s7, -0x7CD0
    ctx->pc = 0x269fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935344));
label_269fc4:
    // 0x269fc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x269fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269fc8:
    // 0x269fc8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x269fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_269fcc:
    // 0x269fcc: 0xc08b5ac  jal         func_22D6B0
label_269fd0:
    if (ctx->pc == 0x269FD0u) {
        ctx->pc = 0x269FD0u;
            // 0x269fd0: 0x8c6703e0  lw          $a3, 0x3E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 992)));
        ctx->pc = 0x269FD4u;
        goto label_269fd4;
    }
    ctx->pc = 0x269FCCu;
    SET_GPR_U32(ctx, 31, 0x269FD4u);
    ctx->pc = 0x269FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269FCCu;
            // 0x269fd0: 0x8c6703e0  lw          $a3, 0x3E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FD4u; }
        if (ctx->pc != 0x269FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FD4u; }
        if (ctx->pc != 0x269FD4u) { return; }
    }
    ctx->pc = 0x269FD4u;
label_269fd4:
    // 0x269fd4: 0x8e450188  lw          $a1, 0x188($s2)
    ctx->pc = 0x269fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_269fd8:
    // 0x269fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269fdc:
    // 0x269fdc: 0xc09b032  jal         func_26C0C8
label_269fe0:
    if (ctx->pc == 0x269FE0u) {
        ctx->pc = 0x269FE0u;
            // 0x269fe0: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
        ctx->pc = 0x269FE4u;
        goto label_269fe4;
    }
    ctx->pc = 0x269FDCu;
    SET_GPR_U32(ctx, 31, 0x269FE4u);
    ctx->pc = 0x269FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269FDCu;
            // 0x269fe0: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C0C8u;
    if (runtime->hasFunction(0x26C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x26C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FE4u; }
        if (ctx->pc != 0x269FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C0C8_0x26c0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FE4u; }
        if (ctx->pc != 0x269FE4u) { return; }
    }
    ctx->pc = 0x269FE4u;
label_269fe4:
    // 0x269fe4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_269fe8:
    if (ctx->pc == 0x269FE8u) {
        ctx->pc = 0x269FE8u;
            // 0x269fe8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x269FECu;
        goto label_269fec;
    }
    ctx->pc = 0x269FE4u;
    {
        const bool branch_taken_0x269fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FE4u;
            // 0x269fe8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fe4) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x269FECu;
label_269fec:
    // 0x269fec: 0xc09b9b0  jal         func_26E6C0
label_269ff0:
    if (ctx->pc == 0x269FF0u) {
        ctx->pc = 0x269FF0u;
            // 0x269ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x269FF4u;
        goto label_269ff4;
    }
    ctx->pc = 0x269FECu;
    SET_GPR_U32(ctx, 31, 0x269FF4u);
    ctx->pc = 0x269FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269FECu;
            // 0x269ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E6C0u;
    if (runtime->hasFunction(0x26E6C0u)) {
        auto targetFn = runtime->lookupFunction(0x26E6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FF4u; }
        if (ctx->pc != 0x269FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E6C0_0x26e6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FF4u; }
        if (ctx->pc != 0x269FF4u) { return; }
    }
    ctx->pc = 0x269FF4u;
label_269ff4:
    // 0x269ff4: 0x4420048  bltzl       $v0, . + 4 + (0x48 << 2)
label_269ff8:
    if (ctx->pc == 0x269FF8u) {
        ctx->pc = 0x269FF8u;
            // 0x269ff8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x269FFCu;
        goto label_269ffc;
    }
    ctx->pc = 0x269FF4u;
    {
        const bool branch_taken_0x269ff4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x269ff4) {
            ctx->pc = 0x269FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269FF4u;
            // 0x269ff8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A118u;
            goto label_26a118;
        }
    }
    ctx->pc = 0x269FFCu;
label_269ffc:
    // 0x269ffc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x269ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_26a000:
    // 0x26a000: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x26a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_26a004:
    // 0x26a004: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x26a004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_26a008:
    // 0x26a008: 0xc0980bc  jal         func_2602F0
label_26a00c:
    if (ctx->pc == 0x26A00Cu) {
        ctx->pc = 0x26A00Cu;
            // 0x26a00c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x26A010u;
        goto label_26a010;
    }
    ctx->pc = 0x26A008u;
    SET_GPR_U32(ctx, 31, 0x26A010u);
    ctx->pc = 0x26A00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A008u;
            // 0x26a00c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2602F0u;
    if (runtime->hasFunction(0x2602F0u)) {
        auto targetFn = runtime->lookupFunction(0x2602F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A010u; }
        if (ctx->pc != 0x26A010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002602F0_0x2602f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A010u; }
        if (ctx->pc != 0x26A010u) { return; }
    }
    ctx->pc = 0x26A010u;
label_26a010:
    // 0x26a010: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x26a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_26a014:
    // 0x26a014: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26a014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26a018:
    // 0x26a018: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_26a01c:
    if (ctx->pc == 0x26A01Cu) {
        ctx->pc = 0x26A01Cu;
            // 0x26a01c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26A020u;
        goto label_26a020;
    }
    ctx->pc = 0x26A018u;
    {
        const bool branch_taken_0x26a018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A018u;
            // 0x26a01c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a018) {
            ctx->pc = 0x26A130u;
            goto label_26a130;
        }
    }
    ctx->pc = 0x26A020u;
label_26a020:
    // 0x26a020: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x26a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_26a024:
    // 0x26a024: 0x88440013  lwl         $a0, 0x13($v0)
    ctx->pc = 0x26a024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26a028:
    // 0x26a028: 0x98440010  lwr         $a0, 0x10($v0)
    ctx->pc = 0x26a028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_26a02c:
    // 0x26a02c: 0xc0990d8  jal         func_264360
label_26a030:
    if (ctx->pc == 0x26A030u) {
        ctx->pc = 0x26A030u;
            // 0x26a030: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->pc = 0x26A034u;
        goto label_26a034;
    }
    ctx->pc = 0x26A02Cu;
    SET_GPR_U32(ctx, 31, 0x26A034u);
    ctx->pc = 0x26A030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A02Cu;
            // 0x26a030: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A034u; }
        if (ctx->pc != 0x26A034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A034u; }
        if (ctx->pc != 0x26A034u) { return; }
    }
    ctx->pc = 0x26A034u;
label_26a034:
    // 0x26a034: 0x27c583c8  addiu       $a1, $fp, -0x7C38
    ctx->pc = 0x26a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935496));
label_26a038:
    // 0x26a038: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26a038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a03c:
    // 0x26a03c: 0xc08b5ac  jal         func_22D6B0
label_26a040:
    if (ctx->pc == 0x26A040u) {
        ctx->pc = 0x26A040u;
            // 0x26a040: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26A044u;
        goto label_26a044;
    }
    ctx->pc = 0x26A03Cu;
    SET_GPR_U32(ctx, 31, 0x26A044u);
    ctx->pc = 0x26A040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A03Cu;
            // 0x26a040: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A044u; }
        if (ctx->pc != 0x26A044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A044u; }
        if (ctx->pc != 0x26A044u) { return; }
    }
    ctx->pc = 0x26A044u;
label_26a044:
    // 0x26a044: 0xc09b4cc  jal         func_26D330
label_26a048:
    if (ctx->pc == 0x26A048u) {
        ctx->pc = 0x26A048u;
            // 0x26a048: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->pc = 0x26A04Cu;
        goto label_26a04c;
    }
    ctx->pc = 0x26A044u;
    SET_GPR_U32(ctx, 31, 0x26A04Cu);
    ctx->pc = 0x26A048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A044u;
            // 0x26a048: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A04Cu; }
        if (ctx->pc != 0x26A04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A04Cu; }
        if (ctx->pc != 0x26A04Cu) { return; }
    }
    ctx->pc = 0x26A04Cu;
label_26a04c:
    // 0x26a04c: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x26a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
label_26a050:
    // 0x26a050: 0x10000053  b           . + 4 + (0x53 << 2)
label_26a054:
    if (ctx->pc == 0x26A054u) {
        ctx->pc = 0x26A054u;
            // 0x26a054: 0x2402ff34  addiu       $v0, $zero, -0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967092));
        ctx->pc = 0x26A058u;
        goto label_26a058;
    }
    ctx->pc = 0x26A050u;
    {
        const bool branch_taken_0x26a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A050u;
            // 0x26a054: 0x2402ff34  addiu       $v0, $zero, -0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967092));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a050) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x26A058u;
label_26a058:
    // 0x26a058: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26a058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_26a05c:
    // 0x26a05c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_26a060:
    // 0x26a060: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x26a060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_26a064:
    // 0x26a064: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_26a068:
    // 0x26a068: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x26a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_26a06c:
    // 0x26a06c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26a070:
    // 0x26a070: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26a070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26a074:
    // 0x26a074: 0x2141823  subu        $v1, $s0, $s4
    ctx->pc = 0x26a074u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_26a078:
    // 0x26a078: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x26a078u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_26a07c:
    // 0x26a07c: 0x5e20ff46  bgtzl       $s1, . + 4 + (-0xBA << 2)
label_26a080:
    if (ctx->pc == 0x26A080u) {
        ctx->pc = 0x26A080u;
            // 0x26a080: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26A084u;
        goto label_26a084;
    }
    ctx->pc = 0x26A07Cu;
    {
        const bool branch_taken_0x26a07c = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x26a07c) {
            ctx->pc = 0x26A080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A07Cu;
            // 0x26a080: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269D98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269d98;
        }
    }
    ctx->pc = 0x26A084u;
label_26a084:
    // 0x26a084: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x26a084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_26a088:
    // 0x26a088: 0x5e60ff2f  bgtzl       $s3, . + 4 + (-0xD1 << 2)
label_26a08c:
    if (ctx->pc == 0x26A08Cu) {
        ctx->pc = 0x26A08Cu;
            // 0x26a08c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x26A090u;
        goto label_26a090;
    }
    ctx->pc = 0x26A088u;
    {
        const bool branch_taken_0x26a088 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x26a088) {
            ctx->pc = 0x26A08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A088u;
            // 0x26a08c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269d48;
        }
    }
    ctx->pc = 0x26A090u;
label_26a090:
    // 0x26a090: 0xc098ba8  jal         func_262EA0
label_26a094:
    if (ctx->pc == 0x26A094u) {
        ctx->pc = 0x26A094u;
            // 0x26a094: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x26A098u;
        goto label_26a098;
    }
    ctx->pc = 0x26A090u;
    SET_GPR_U32(ctx, 31, 0x26A098u);
    ctx->pc = 0x26A094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A090u;
            // 0x26a094: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A098u; }
        if (ctx->pc != 0x26A098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A098u; }
        if (ctx->pc != 0x26A098u) { return; }
    }
    ctx->pc = 0x26A098u;
label_26a098:
    // 0x26a098: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_26a09c:
    if (ctx->pc == 0x26A09Cu) {
        ctx->pc = 0x26A09Cu;
            // 0x26a09c: 0x8e42018c  lw          $v0, 0x18C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
        ctx->pc = 0x26A0A0u;
        goto label_26a0a0;
    }
    ctx->pc = 0x26A098u;
    {
        const bool branch_taken_0x26a098 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26a098) {
            ctx->pc = 0x26A09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A098u;
            // 0x26a09c: 0x8e42018c  lw          $v0, 0x18C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A0B8u;
            goto label_26a0b8;
        }
    }
    ctx->pc = 0x26A0A0u;
label_26a0a0:
    // 0x26a0a0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26a0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26a0a4:
    // 0x26a0a4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a0a8:
    // 0x26a0a8: 0xc08b5ac  jal         func_22D6B0
label_26a0ac:
    if (ctx->pc == 0x26A0ACu) {
        ctx->pc = 0x26A0ACu;
            // 0x26a0ac: 0x24a58228  addiu       $a1, $a1, -0x7DD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935080));
        ctx->pc = 0x26A0B0u;
        goto label_26a0b0;
    }
    ctx->pc = 0x26A0A8u;
    SET_GPR_U32(ctx, 31, 0x26A0B0u);
    ctx->pc = 0x26A0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0A8u;
            // 0x26a0ac: 0x24a58228  addiu       $a1, $a1, -0x7DD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0B0u; }
        if (ctx->pc != 0x26A0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0B0u; }
        if (ctx->pc != 0x26A0B0u) { return; }
    }
    ctx->pc = 0x26A0B0u;
label_26a0b0:
    // 0x26a0b0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_26a0b4:
    if (ctx->pc == 0x26A0B4u) {
        ctx->pc = 0x26A0B4u;
            // 0x26a0b4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x26A0B8u;
        goto label_26a0b8;
    }
    ctx->pc = 0x26A0B0u;
    {
        const bool branch_taken_0x26a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0B0u;
            // 0x26a0b4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0b0) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x26A0B8u;
label_26a0b8:
    // 0x26a0b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26a0bc:
    if (ctx->pc == 0x26A0BCu) {
        ctx->pc = 0x26A0BCu;
            // 0x26a0bc: 0xdfa30100  ld          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->pc = 0x26A0C0u;
        goto label_26a0c0;
    }
    ctx->pc = 0x26A0B8u;
    {
        const bool branch_taken_0x26a0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0B8u;
            // 0x26a0bc: 0xdfa30100  ld          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0b8) {
            ctx->pc = 0x26A0DCu;
            goto label_26a0dc;
        }
    }
    ctx->pc = 0x26A0C0u;
label_26a0c0:
    // 0x26a0c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26a0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26a0c4:
    // 0x26a0c4: 0xde440198  ld          $a0, 0x198($s2)
    ctx->pc = 0x26a0c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 408)));
label_26a0c8:
    // 0x26a0c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26a0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_26a0cc:
    // 0x26a0cc: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x26a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_26a0d0:
    // 0x26a0d0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x26a0d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26a0d4:
    // 0x26a0d4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_26a0d8:
    if (ctx->pc == 0x26A0D8u) {
        ctx->pc = 0x26A0D8u;
            // 0x26a0d8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26A0DCu;
        goto label_26a0dc;
    }
    ctx->pc = 0x26A0D4u;
    {
        const bool branch_taken_0x26a0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0D4u;
            // 0x26a0d8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0d4) {
            ctx->pc = 0x26A14Cu;
            goto label_26a14c;
        }
    }
    ctx->pc = 0x26A0DCu;
label_26a0dc:
    // 0x26a0dc: 0xc09b10a  jal         func_26C428
label_26a0e0:
    if (ctx->pc == 0x26A0E0u) {
        ctx->pc = 0x26A0E0u;
            // 0x26a0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A0E4u;
        goto label_26a0e4;
    }
    ctx->pc = 0x26A0DCu;
    SET_GPR_U32(ctx, 31, 0x26A0E4u);
    ctx->pc = 0x26A0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0DCu;
            // 0x26a0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C428u;
    if (runtime->hasFunction(0x26C428u)) {
        auto targetFn = runtime->lookupFunction(0x26C428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0E4u; }
        if (ctx->pc != 0x26A0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C428_0x26c428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0E4u; }
        if (ctx->pc != 0x26A0E4u) { return; }
    }
    ctx->pc = 0x26A0E4u;
label_26a0e4:
    // 0x26a0e4: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x26a0e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_26a0e8:
    // 0x26a0e8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x26a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_26a0ec:
    // 0x26a0ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26a0f0:
    // 0x26a0f0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_26a0f4:
    if (ctx->pc == 0x26A0F4u) {
        ctx->pc = 0x26A0F4u;
            // 0x26a0f4: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->pc = 0x26A0F8u;
        goto label_26a0f8;
    }
    ctx->pc = 0x26A0F0u;
    {
        const bool branch_taken_0x26a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0F0u;
            // 0x26a0f4: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0f0) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x26A0F8u;
label_26a0f8:
    // 0x26a0f8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a0fc:
    // 0x26a0fc: 0x1000000e  b           . + 4 + (0xE << 2)
label_26a100:
    if (ctx->pc == 0x26A100u) {
        ctx->pc = 0x26A100u;
            // 0x26a100: 0x24a58288  addiu       $a1, $a1, -0x7D78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935176));
        ctx->pc = 0x26A104u;
        goto label_26a104;
    }
    ctx->pc = 0x26A0FCu;
    {
        const bool branch_taken_0x26a0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0FCu;
            // 0x26a100: 0x24a58288  addiu       $a1, $a1, -0x7D78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0fc) {
            ctx->pc = 0x26A138u;
            goto label_26a138;
        }
    }
    ctx->pc = 0x26A104u;
label_26a104:
    // 0x26a104: 0x10000026  b           . + 4 + (0x26 << 2)
label_26a108:
    if (ctx->pc == 0x26A108u) {
        ctx->pc = 0x26A108u;
            // 0x26a108: 0x2402ff32  addiu       $v0, $zero, -0xCE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967090));
        ctx->pc = 0x26A10Cu;
        goto label_26a10c;
    }
    ctx->pc = 0x26A104u;
    {
        const bool branch_taken_0x26a104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A104u;
            // 0x26a108: 0x2402ff32  addiu       $v0, $zero, -0xCE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967090));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a104) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x26A10Cu;
label_26a10c:
    // 0x26a10c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a110:
    // 0x26a110: 0x10000003  b           . + 4 + (0x3 << 2)
label_26a114:
    if (ctx->pc == 0x26A114u) {
        ctx->pc = 0x26A114u;
            // 0x26a114: 0x24a58228  addiu       $a1, $a1, -0x7DD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935080));
        ctx->pc = 0x26A118u;
        goto label_26a118;
    }
    ctx->pc = 0x26A110u;
    {
        const bool branch_taken_0x26a110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A110u;
            // 0x26a114: 0x24a58228  addiu       $a1, $a1, -0x7DD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a110) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x26A118u;
label_26a118:
    // 0x26a118: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a11c:
    // 0x26a11c: 0x24a58368  addiu       $a1, $a1, -0x7C98
    ctx->pc = 0x26a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935400));
label_26a120:
    // 0x26a120: 0xc08b5ac  jal         func_22D6B0
label_26a124:
    if (ctx->pc == 0x26A124u) {
        ctx->pc = 0x26A128u;
        goto label_26a128;
    }
    ctx->pc = 0x26A120u;
    SET_GPR_U32(ctx, 31, 0x26A128u);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A128u; }
        if (ctx->pc != 0x26A128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A128u; }
        if (ctx->pc != 0x26A128u) { return; }
    }
    ctx->pc = 0x26A128u;
label_26a128:
    // 0x26a128: 0x1000001d  b           . + 4 + (0x1D << 2)
label_26a12c:
    if (ctx->pc == 0x26A12Cu) {
        ctx->pc = 0x26A12Cu;
            // 0x26a12c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x26A130u;
        goto label_26a130;
    }
    ctx->pc = 0x26A128u;
    {
        const bool branch_taken_0x26a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A128u;
            // 0x26a12c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a128) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x26A130u;
label_26a130:
    // 0x26a130: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a134:
    // 0x26a134: 0x24a58398  addiu       $a1, $a1, -0x7C68
    ctx->pc = 0x26a134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935448));
label_26a138:
    // 0x26a138: 0xc08b5ac  jal         func_22D6B0
label_26a13c:
    if (ctx->pc == 0x26A13Cu) {
        ctx->pc = 0x26A140u;
        goto label_26a140;
    }
    ctx->pc = 0x26A138u;
    SET_GPR_U32(ctx, 31, 0x26A140u);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A140u; }
        if (ctx->pc != 0x26A140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A140u; }
        if (ctx->pc != 0x26A140u) { return; }
    }
    ctx->pc = 0x26A140u;
label_26a140:
    // 0x26a140: 0x10000017  b           . + 4 + (0x17 << 2)
label_26a144:
    if (ctx->pc == 0x26A144u) {
        ctx->pc = 0x26A144u;
            // 0x26a144: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26A148u;
        goto label_26a148;
    }
    ctx->pc = 0x26A140u;
    {
        const bool branch_taken_0x26a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A140u;
            // 0x26a144: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a140) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x26A148u;
label_26a148:
    // 0x26a148: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26a148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26a14c:
    // 0x26a14c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26a150:
    // 0x26a150: 0xc08b5ac  jal         func_22D6B0
label_26a154:
    if (ctx->pc == 0x26A154u) {
        ctx->pc = 0x26A154u;
            // 0x26a154: 0x24a583e8  addiu       $a1, $a1, -0x7C18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935528));
        ctx->pc = 0x26A158u;
        goto label_26a158;
    }
    ctx->pc = 0x26A150u;
    SET_GPR_U32(ctx, 31, 0x26A158u);
    ctx->pc = 0x26A154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A150u;
            // 0x26a154: 0x24a583e8  addiu       $a1, $a1, -0x7C18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A158u; }
        if (ctx->pc != 0x26A158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A158u; }
        if (ctx->pc != 0x26A158u) { return; }
    }
    ctx->pc = 0x26A158u;
label_26a158:
    // 0x26a158: 0x8e4301b8  lw          $v1, 0x1B8($s2)
    ctx->pc = 0x26a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_26a15c:
    // 0x26a15c: 0x2402ff36  addiu       $v0, $zero, -0xCA
    ctx->pc = 0x26a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967094));
label_26a160:
    // 0x26a160: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x26a160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_26a164:
    // 0x26a164: 0x8e4401b8  lw          $a0, 0x1B8($s2)
    ctx->pc = 0x26a164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_26a168:
    // 0x26a168: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x26a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_26a16c:
    // 0x26a16c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_26a170:
    if (ctx->pc == 0x26A170u) {
        ctx->pc = 0x26A170u;
            // 0x26a170: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x26A174u;
        goto label_26a174;
    }
    ctx->pc = 0x26A16Cu;
    {
        const bool branch_taken_0x26a16c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26A170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A16Cu;
            // 0x26a170: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a16c) {
            ctx->pc = 0x26A190u;
            goto label_26a190;
        }
    }
    ctx->pc = 0x26A174u;
label_26a174:
    // 0x26a174: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x26a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_26a178:
    // 0x26a178: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26a178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26a17c:
    // 0x26a17c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x26a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_26a180:
    // 0x26a180: 0x8e4301b8  lw          $v1, 0x1B8($s2)
    ctx->pc = 0x26a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_26a184:
    // 0x26a184: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x26a184u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 28))); // MMIO: 0x1000001c
label_26a188:
    // 0x26a188: 0x40f809  jalr        $v0
label_26a18c:
    if (ctx->pc == 0x26A18Cu) {
        ctx->pc = 0x26A190u;
        goto label_26a190;
    }
    ctx->pc = 0x26A188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A190u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A190u; }
            if (ctx->pc != 0x26A190u) { return; }
        }
        }
    }
    ctx->pc = 0x26A190u;
label_26a190:
    // 0x26a190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a194:
    // 0x26a194: 0xc09a536  jal         func_2694D8
label_26a198:
    if (ctx->pc == 0x26A198u) {
        ctx->pc = 0x26A198u;
            // 0x26a198: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26A19Cu;
        goto label_26a19c;
    }
    ctx->pc = 0x26A194u;
    SET_GPR_U32(ctx, 31, 0x26A19Cu);
    ctx->pc = 0x26A198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A194u;
            // 0x26a198: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2694D8u;
    if (runtime->hasFunction(0x2694D8u)) {
        auto targetFn = runtime->lookupFunction(0x2694D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A19Cu; }
        if (ctx->pc != 0x26A19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002694D8_0x2694d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A19Cu; }
        if (ctx->pc != 0x26A19Cu) { return; }
    }
    ctx->pc = 0x26A19Cu;
label_26a19c:
    // 0x26a19c: 0x2402ff36  addiu       $v0, $zero, -0xCA
    ctx->pc = 0x26a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967094));
label_26a1a0:
    // 0x26a1a0: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x26a1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_26a1a4:
    // 0x26a1a4: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x26a1a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_26a1a8:
    // 0x26a1a8: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x26a1a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_26a1ac:
    // 0x26a1ac: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x26a1acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_26a1b0:
    // 0x26a1b0: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x26a1b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_26a1b4:
    // 0x26a1b4: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x26a1b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_26a1b8:
    // 0x26a1b8: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x26a1b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_26a1bc:
    // 0x26a1bc: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x26a1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_26a1c0:
    // 0x26a1c0: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x26a1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_26a1c4:
    // 0x26a1c4: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x26a1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_26a1c8:
    // 0x26a1c8: 0x3e00008  jr          $ra
label_26a1cc:
    if (ctx->pc == 0x26A1CCu) {
        ctx->pc = 0x26A1CCu;
            // 0x26a1cc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x26A1D0u;
        goto label_26a1d0;
    }
    ctx->pc = 0x26A1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1C8u;
            // 0x26a1cc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A1D0u;
label_26a1d0:
    // 0x26a1d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_26a1d4:
    // 0x26a1d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_26a1d8:
    // 0x26a1d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_26a1dc:
    // 0x26a1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26a1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a1e0:
    // 0x26a1e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26a1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_26a1e4:
    // 0x26a1e4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x26a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_26a1e8:
    // 0x26a1e8: 0xc09ae44  jal         func_26B910
label_26a1ec:
    if (ctx->pc == 0x26A1ECu) {
        ctx->pc = 0x26A1ECu;
            // 0x26a1ec: 0x8e050188  lw          $a1, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->pc = 0x26A1F0u;
        goto label_26a1f0;
    }
    ctx->pc = 0x26A1E8u;
    SET_GPR_U32(ctx, 31, 0x26A1F0u);
    ctx->pc = 0x26A1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1E8u;
            // 0x26a1ec: 0x8e050188  lw          $a1, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B910u;
    if (runtime->hasFunction(0x26B910u)) {
        auto targetFn = runtime->lookupFunction(0x26B910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1F0u; }
        if (ctx->pc != 0x26A1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B910_0x26b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1F0u; }
        if (ctx->pc != 0x26A1F0u) { return; }
    }
    ctx->pc = 0x26A1F0u;
label_26a1f0:
    // 0x26a1f0: 0x440008f  bltz        $v0, . + 4 + (0x8F << 2)
label_26a1f4:
    if (ctx->pc == 0x26A1F4u) {
        ctx->pc = 0x26A1F4u;
            // 0x26a1f4: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26A1F8u;
        goto label_26a1f8;
    }
    ctx->pc = 0x26A1F0u;
    {
        const bool branch_taken_0x26a1f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26A1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1F0u;
            // 0x26a1f4: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1f0) {
            ctx->pc = 0x26A430u;
            goto label_26a430;
        }
    }
    ctx->pc = 0x26A1F8u;
label_26a1f8:
    // 0x26a1f8: 0xc09af02  jal         func_26BC08
label_26a1fc:
    if (ctx->pc == 0x26A1FCu) {
        ctx->pc = 0x26A1FCu;
            // 0x26a1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A200u;
        goto label_26a200;
    }
    ctx->pc = 0x26A1F8u;
    SET_GPR_U32(ctx, 31, 0x26A200u);
    ctx->pc = 0x26A1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1F8u;
            // 0x26a1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BC08u;
    if (runtime->hasFunction(0x26BC08u)) {
        auto targetFn = runtime->lookupFunction(0x26BC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A200u; }
        if (ctx->pc != 0x26A200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BC08_0x26bc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A200u; }
        if (ctx->pc != 0x26A200u) { return; }
    }
    ctx->pc = 0x26A200u;
label_26a200:
    // 0x26a200: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_26a204:
    if (ctx->pc == 0x26A204u) {
        ctx->pc = 0x26A204u;
            // 0x26a204: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->pc = 0x26A208u;
        goto label_26a208;
    }
    ctx->pc = 0x26A200u;
    {
        const bool branch_taken_0x26a200 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26a200) {
            ctx->pc = 0x26A204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A200u;
            // 0x26a204: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A210u;
            goto label_26a210;
        }
    }
    ctx->pc = 0x26A208u;
label_26a208:
    // 0x26a208: 0x10000089  b           . + 4 + (0x89 << 2)
label_26a20c:
    if (ctx->pc == 0x26A20Cu) {
        ctx->pc = 0x26A20Cu;
            // 0x26a20c: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->pc = 0x26A210u;
        goto label_26a210;
    }
    ctx->pc = 0x26A208u;
    {
        const bool branch_taken_0x26a208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A208u;
            // 0x26a20c: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a208) {
            ctx->pc = 0x26A430u;
            goto label_26a430;
        }
    }
    ctx->pc = 0x26A210u;
label_26a210:
    // 0x26a210: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_26a214:
    if (ctx->pc == 0x26A214u) {
        ctx->pc = 0x26A218u;
        goto label_26a218;
    }
    ctx->pc = 0x26A210u;
    {
        const bool branch_taken_0x26a210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a210) {
            ctx->pc = 0x26A300u;
            goto label_26a300;
        }
    }
    ctx->pc = 0x26A218u;
label_26a218:
    // 0x26a218: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x26a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_26a21c:
    // 0x26a21c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x26a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_26a220:
    // 0x26a220: 0x4600037  bltz        $v1, . + 4 + (0x37 << 2)
label_26a224:
    if (ctx->pc == 0x26A224u) {
        ctx->pc = 0x26A228u;
        goto label_26a228;
    }
    ctx->pc = 0x26A220u;
    {
        const bool branch_taken_0x26a220 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x26a220) {
            ctx->pc = 0x26A300u;
            goto label_26a300;
        }
    }
    ctx->pc = 0x26A228u;
label_26a228:
    // 0x26a228: 0x8e050188  lw          $a1, 0x188($s0)
    ctx->pc = 0x26a228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_26a22c:
    // 0x26a22c: 0x88a403ef  lwl         $a0, 0x3EF($a1)
    ctx->pc = 0x26a22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 1007); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26a230:
    // 0x26a230: 0x98a403ec  lwr         $a0, 0x3EC($a1)
    ctx->pc = 0x26a230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 1004); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_26a234:
    // 0x26a234: 0x88a303eb  lwl         $v1, 0x3EB($a1)
    ctx->pc = 0x26a234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 1003); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_26a238:
    // 0x26a238: 0x98a303e8  lwr         $v1, 0x3E8($a1)
    ctx->pc = 0x26a238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 1000); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_26a23c:
    // 0x26a23c: 0x88a20010  lwl         $v0, 0x10($a1)
    ctx->pc = 0x26a23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_26a240:
    // 0x26a240: 0x98a2000d  lwr         $v0, 0xD($a1)
    ctx->pc = 0x26a240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_26a244:
    // 0x26a244: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26a244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_26a248:
    // 0x26a248: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26a248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_26a24c:
    // 0x26a24c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_26a250:
    if (ctx->pc == 0x26A250u) {
        ctx->pc = 0x26A250u;
            // 0x26a250: 0x261208ca  addiu       $s2, $s0, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2250));
        ctx->pc = 0x26A254u;
        goto label_26a254;
    }
    ctx->pc = 0x26A24Cu;
    {
        const bool branch_taken_0x26a24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A24Cu;
            // 0x26a250: 0x261208ca  addiu       $s2, $s0, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a24c) {
            ctx->pc = 0x26A284u;
            goto label_26a284;
        }
    }
    ctx->pc = 0x26A254u;
label_26a254:
    // 0x26a254: 0x24a503e8  addiu       $a1, $a1, 0x3E8
    ctx->pc = 0x26a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
label_26a258:
    // 0x26a258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a25c:
    // 0x26a25c: 0xc08b538  jal         func_22D4E0
label_26a260:
    if (ctx->pc == 0x26A260u) {
        ctx->pc = 0x26A260u;
            // 0x26a260: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x26A264u;
        goto label_26a264;
    }
    ctx->pc = 0x26A25Cu;
    SET_GPR_U32(ctx, 31, 0x26A264u);
    ctx->pc = 0x26A260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A25Cu;
            // 0x26a260: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A264u; }
        if (ctx->pc != 0x26A264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A264u; }
        if (ctx->pc != 0x26A264u) { return; }
    }
    ctx->pc = 0x26A264u;
label_26a264:
    // 0x26a264: 0x261108c4  addiu       $s1, $s0, 0x8C4
    ctx->pc = 0x26a264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2244));
label_26a268:
    // 0x26a268: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x26a268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26a26c:
    // 0x26a26c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a270:
    // 0x26a270: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x26a270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26a274:
    // 0x26a274: 0xc08b538  jal         func_22D4E0
label_26a278:
    if (ctx->pc == 0x26A278u) {
        ctx->pc = 0x26A278u;
            // 0x26a278: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->pc = 0x26A27Cu;
        goto label_26a27c;
    }
    ctx->pc = 0x26A274u;
    SET_GPR_U32(ctx, 31, 0x26A27Cu);
    ctx->pc = 0x26A278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A274u;
            // 0x26a278: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A27Cu; }
        if (ctx->pc != 0x26A27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A27Cu; }
        if (ctx->pc != 0x26A27Cu) { return; }
    }
    ctx->pc = 0x26A27Cu;
label_26a27c:
    // 0x26a27c: 0x10000013  b           . + 4 + (0x13 << 2)
label_26a280:
    if (ctx->pc == 0x26A280u) {
        ctx->pc = 0x26A280u;
            // 0x26a280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A284u;
        goto label_26a284;
    }
    ctx->pc = 0x26A27Cu;
    {
        const bool branch_taken_0x26a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A27Cu;
            // 0x26a280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a27c) {
            ctx->pc = 0x26A2CCu;
            goto label_26a2cc;
        }
    }
    ctx->pc = 0x26A284u;
label_26a284:
    // 0x26a284: 0x24a503f4  addiu       $a1, $a1, 0x3F4
    ctx->pc = 0x26a284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1012));
label_26a288:
    // 0x26a288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a28c:
    // 0x26a28c: 0xc08b538  jal         func_22D4E0
label_26a290:
    if (ctx->pc == 0x26A290u) {
        ctx->pc = 0x26A290u;
            // 0x26a290: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x26A294u;
        goto label_26a294;
    }
    ctx->pc = 0x26A28Cu;
    SET_GPR_U32(ctx, 31, 0x26A294u);
    ctx->pc = 0x26A290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A28Cu;
            // 0x26a290: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A294u; }
        if (ctx->pc != 0x26A294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A294u; }
        if (ctx->pc != 0x26A294u) { return; }
    }
    ctx->pc = 0x26A294u;
label_26a294:
    // 0x26a294: 0x8e050188  lw          $a1, 0x188($s0)
    ctx->pc = 0x26a294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_26a298:
    // 0x26a298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a29c:
    // 0x26a29c: 0xc09aff2  jal         func_26BFC8
label_26a2a0:
    if (ctx->pc == 0x26A2A0u) {
        ctx->pc = 0x26A2A0u;
            // 0x26a2a0: 0x24a503f4  addiu       $a1, $a1, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1012));
        ctx->pc = 0x26A2A4u;
        goto label_26a2a4;
    }
    ctx->pc = 0x26A29Cu;
    SET_GPR_U32(ctx, 31, 0x26A2A4u);
    ctx->pc = 0x26A2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A29Cu;
            // 0x26a2a0: 0x24a503f4  addiu       $a1, $a1, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1012));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BFC8u;
    if (runtime->hasFunction(0x26BFC8u)) {
        auto targetFn = runtime->lookupFunction(0x26BFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2A4u; }
        if (ctx->pc != 0x26A2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BFC8_0x26bfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2A4u; }
        if (ctx->pc != 0x26A2A4u) { return; }
    }
    ctx->pc = 0x26A2A4u;
label_26a2a4:
    // 0x26a2a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26a2a8:
    if (ctx->pc == 0x26A2A8u) {
        ctx->pc = 0x26A2A8u;
            // 0x26a2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A2ACu;
        goto label_26a2ac;
    }
    ctx->pc = 0x26A2A4u;
    {
        const bool branch_taken_0x26a2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2A4u;
            // 0x26a2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2a4) {
            ctx->pc = 0x26A2C0u;
            goto label_26a2c0;
        }
    }
    ctx->pc = 0x26A2ACu;
label_26a2ac:
    // 0x26a2ac: 0x8e0501b4  lw          $a1, 0x1B4($s0)
    ctx->pc = 0x26a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_26a2b0:
    // 0x26a2b0: 0xc09a536  jal         func_2694D8
label_26a2b4:
    if (ctx->pc == 0x26A2B4u) {
        ctx->pc = 0x26A2B4u;
            // 0x26a2b4: 0x261108c4  addiu       $s1, $s0, 0x8C4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2244));
        ctx->pc = 0x26A2B8u;
        goto label_26a2b8;
    }
    ctx->pc = 0x26A2B0u;
    SET_GPR_U32(ctx, 31, 0x26A2B8u);
    ctx->pc = 0x26A2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2B0u;
            // 0x26a2b4: 0x261108c4  addiu       $s1, $s0, 0x8C4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2694D8u;
    if (runtime->hasFunction(0x2694D8u)) {
        auto targetFn = runtime->lookupFunction(0x2694D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2B8u; }
        if (ctx->pc != 0x26A2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002694D8_0x2694d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2B8u; }
        if (ctx->pc != 0x26A2B8u) { return; }
    }
    ctx->pc = 0x26A2B8u;
label_26a2b8:
    // 0x26a2b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_26a2bc:
    if (ctx->pc == 0x26A2BCu) {
        ctx->pc = 0x26A2BCu;
            // 0x26a2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A2C0u;
        goto label_26a2c0;
    }
    ctx->pc = 0x26A2B8u;
    {
        const bool branch_taken_0x26a2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2B8u;
            // 0x26a2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2b8) {
            ctx->pc = 0x26A2CCu;
            goto label_26a2cc;
        }
    }
    ctx->pc = 0x26A2C0u;
label_26a2c0:
    // 0x26a2c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_26a2c4:
    if (ctx->pc == 0x26A2C4u) {
        ctx->pc = 0x26A2C4u;
            // 0x26a2c4: 0x261108c4  addiu       $s1, $s0, 0x8C4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2244));
        ctx->pc = 0x26A2C8u;
        goto label_26a2c8;
    }
    ctx->pc = 0x26A2C0u;
    {
        const bool branch_taken_0x26a2c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26A2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2C0u;
            // 0x26a2c4: 0x261108c4  addiu       $s1, $s0, 0x8C4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2c0) {
            ctx->pc = 0x26A2D4u;
            goto label_26a2d4;
        }
    }
    ctx->pc = 0x26A2C8u;
label_26a2c8:
    // 0x26a2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a2cc:
    // 0x26a2cc: 0xc09a24a  jal         func_268928
label_26a2d0:
    if (ctx->pc == 0x26A2D0u) {
        ctx->pc = 0x26A2D0u;
            // 0x26a2d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A2D4u;
        goto label_26a2d4;
    }
    ctx->pc = 0x26A2CCu;
    SET_GPR_U32(ctx, 31, 0x26A2D4u);
    ctx->pc = 0x26A2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2CCu;
            // 0x26a2d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268928u;
    if (runtime->hasFunction(0x268928u)) {
        auto targetFn = runtime->lookupFunction(0x268928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2D4u; }
        if (ctx->pc != 0x26A2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268928_0x268928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2D4u; }
        if (ctx->pc != 0x26A2D4u) { return; }
    }
    ctx->pc = 0x26A2D4u;
label_26a2d4:
    // 0x26a2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a2d8:
    // 0x26a2d8: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x26a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_26a2dc:
    // 0x26a2dc: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x26a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_26a2e0:
    // 0x26a2e0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x26a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_26a2e4:
    // 0x26a2e4: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x26a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_26a2e8:
    // 0x26a2e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26a2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26a2ec:
    // 0x26a2ec: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x26a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_26a2f0:
    // 0x26a2f0: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x26a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_26a2f4:
    // 0x26a2f4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x26a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_26a2f8:
    // 0x26a2f8: 0x40f809  jalr        $v0
label_26a2fc:
    if (ctx->pc == 0x26A2FCu) {
        ctx->pc = 0x26A300u;
        goto label_26a300;
    }
    ctx->pc = 0x26A2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A300u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A300u; }
            if (ctx->pc != 0x26A300u) { return; }
        }
        }
    }
    ctx->pc = 0x26A300u;
label_26a300:
    // 0x26a300: 0xc09a574  jal         func_2695D0
label_26a304:
    if (ctx->pc == 0x26A304u) {
        ctx->pc = 0x26A304u;
            // 0x26a304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A308u;
        goto label_26a308;
    }
    ctx->pc = 0x26A300u;
    SET_GPR_U32(ctx, 31, 0x26A308u);
    ctx->pc = 0x26A304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A300u;
            // 0x26a304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2695D0u;
    goto label_2695d0;
    ctx->pc = 0x26A308u;
label_26a308:
    // 0x26a308: 0xc098ba8  jal         func_262EA0
label_26a30c:
    if (ctx->pc == 0x26A30Cu) {
        ctx->pc = 0x26A30Cu;
            // 0x26a30c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A310u;
        goto label_26a310;
    }
    ctx->pc = 0x26A308u;
    SET_GPR_U32(ctx, 31, 0x26A310u);
    ctx->pc = 0x26A30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A308u;
            // 0x26a30c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A310u; }
        if (ctx->pc != 0x26A310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A310u; }
        if (ctx->pc != 0x26A310u) { return; }
    }
    ctx->pc = 0x26A310u;
label_26a310:
    // 0x26a310: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_26a314:
    if (ctx->pc == 0x26A314u) {
        ctx->pc = 0x26A314u;
            // 0x26a314: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->pc = 0x26A318u;
        goto label_26a318;
    }
    ctx->pc = 0x26A310u;
    {
        const bool branch_taken_0x26a310 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26a310) {
            ctx->pc = 0x26A314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A310u;
            // 0x26a314: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A328u;
            goto label_26a328;
        }
    }
    ctx->pc = 0x26A318u;
label_26a318:
    // 0x26a318: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26a318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26a31c:
    // 0x26a31c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a320:
    // 0x26a320: 0x10000025  b           . + 4 + (0x25 << 2)
label_26a324:
    if (ctx->pc == 0x26A324u) {
        ctx->pc = 0x26A324u;
            // 0x26a324: 0x24a58420  addiu       $a1, $a1, -0x7BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935584));
        ctx->pc = 0x26A328u;
        goto label_26a328;
    }
    ctx->pc = 0x26A320u;
    {
        const bool branch_taken_0x26a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A320u;
            // 0x26a324: 0x24a58420  addiu       $a1, $a1, -0x7BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a320) {
            ctx->pc = 0x26A3B8u;
            goto label_26a3b8;
        }
    }
    ctx->pc = 0x26A328u;
label_26a328:
    // 0x26a328: 0xde0501a0  ld          $a1, 0x1A0($s0)
    ctx->pc = 0x26a328u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 416)));
label_26a32c:
    // 0x26a32c: 0x9c8203e4  lwu         $v0, 0x3E4($a0)
    ctx->pc = 0x26a32cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 996)));
label_26a330:
    // 0x26a330: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x26a330u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26a334:
    // 0x26a334: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x26a334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_26a338:
    // 0x26a338: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26a338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26a33c:
    // 0x26a33c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_26a340:
    if (ctx->pc == 0x26A340u) {
        ctx->pc = 0x26A340u;
            // 0x26a340: 0x9c8203dc  lwu         $v0, 0x3DC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 988)));
        ctx->pc = 0x26A344u;
        goto label_26a344;
    }
    ctx->pc = 0x26A33Cu;
    {
        const bool branch_taken_0x26a33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a33c) {
            ctx->pc = 0x26A340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A33Cu;
            // 0x26a340: 0x9c8203dc  lwu         $v0, 0x3DC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 988)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A38Cu;
            goto label_26a38c;
        }
    }
    ctx->pc = 0x26A344u;
label_26a344:
    // 0x26a344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a348:
    // 0x26a348: 0xc09b7ee  jal         func_26DFB8
label_26a34c:
    if (ctx->pc == 0x26A34Cu) {
        ctx->pc = 0x26A34Cu;
            // 0x26a34c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x26A350u;
        goto label_26a350;
    }
    ctx->pc = 0x26A348u;
    SET_GPR_U32(ctx, 31, 0x26A350u);
    ctx->pc = 0x26A34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A348u;
            // 0x26a34c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26DFB8u;
    if (runtime->hasFunction(0x26DFB8u)) {
        auto targetFn = runtime->lookupFunction(0x26DFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A350u; }
        if (ctx->pc != 0x26A350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026DFB8_0x26dfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A350u; }
        if (ctx->pc != 0x26A350u) { return; }
    }
    ctx->pc = 0x26A350u;
label_26a350:
    // 0x26a350: 0x4420017  bltzl       $v0, . + 4 + (0x17 << 2)
label_26a354:
    if (ctx->pc == 0x26A354u) {
        ctx->pc = 0x26A354u;
            // 0x26a354: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26A358u;
        goto label_26a358;
    }
    ctx->pc = 0x26A350u;
    {
        const bool branch_taken_0x26a350 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26a350) {
            ctx->pc = 0x26A354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A350u;
            // 0x26a354: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A3B0u;
            goto label_26a3b0;
        }
    }
    ctx->pc = 0x26A358u;
label_26a358:
    // 0x26a358: 0x8e040188  lw          $a0, 0x188($s0)
    ctx->pc = 0x26a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_26a35c:
    // 0x26a35c: 0x8c8203e8  lw          $v0, 0x3E8($a0)
    ctx->pc = 0x26a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1000)));
label_26a360:
    // 0x26a360: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_26a364:
    if (ctx->pc == 0x26A364u) {
        ctx->pc = 0x26A364u;
            // 0x26a364: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x26A368u;
        goto label_26a368;
    }
    ctx->pc = 0x26A360u;
    {
        const bool branch_taken_0x26a360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a360) {
            ctx->pc = 0x26A364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A360u;
            // 0x26a364: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A370u;
            goto label_26a370;
        }
    }
    ctx->pc = 0x26A368u;
label_26a368:
    // 0x26a368: 0x10000031  b           . + 4 + (0x31 << 2)
label_26a36c:
    if (ctx->pc == 0x26A36Cu) {
        ctx->pc = 0x26A36Cu;
            // 0x26a36c: 0x2402ff37  addiu       $v0, $zero, -0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
        ctx->pc = 0x26A370u;
        goto label_26a370;
    }
    ctx->pc = 0x26A368u;
    {
        const bool branch_taken_0x26a368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A368u;
            // 0x26a36c: 0x2402ff37  addiu       $v0, $zero, -0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a368) {
            ctx->pc = 0x26A430u;
            goto label_26a430;
        }
    }
    ctx->pc = 0x26A370u;
label_26a370:
    // 0x26a370: 0xc09b08c  jal         func_26C230
label_26a374:
    if (ctx->pc == 0x26A374u) {
        ctx->pc = 0x26A374u;
            // 0x26a374: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
        ctx->pc = 0x26A378u;
        goto label_26a378;
    }
    ctx->pc = 0x26A370u;
    SET_GPR_U32(ctx, 31, 0x26A378u);
    ctx->pc = 0x26A374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A370u;
            // 0x26a374: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C230u;
    if (runtime->hasFunction(0x26C230u)) {
        auto targetFn = runtime->lookupFunction(0x26C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A378u; }
        if (ctx->pc != 0x26A378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C230_0x26c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A378u; }
        if (ctx->pc != 0x26A378u) { return; }
    }
    ctx->pc = 0x26A378u;
label_26a378:
    // 0x26a378: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x26a378u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_26a37c:
    // 0x26a37c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x26a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_26a380:
    // 0x26a380: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26a384:
    // 0x26a384: 0x1000002a  b           . + 4 + (0x2A << 2)
label_26a388:
    if (ctx->pc == 0x26A388u) {
        ctx->pc = 0x26A388u;
            // 0x26a388: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->pc = 0x26A38Cu;
        goto label_26a38c;
    }
    ctx->pc = 0x26A384u;
    {
        const bool branch_taken_0x26a384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A384u;
            // 0x26a388: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a384) {
            ctx->pc = 0x26A430u;
            goto label_26a430;
        }
    }
    ctx->pc = 0x26A38Cu;
label_26a38c:
    // 0x26a38c: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x26a38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_26a390:
    // 0x26a390: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26a390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26a394:
    // 0x26a394: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_26a398:
    if (ctx->pc == 0x26A398u) {
        ctx->pc = 0x26A398u;
            // 0x26a398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A39Cu;
        goto label_26a39c;
    }
    ctx->pc = 0x26A394u;
    {
        const bool branch_taken_0x26a394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A394u;
            // 0x26a398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a394) {
            ctx->pc = 0x26A404u;
            goto label_26a404;
        }
    }
    ctx->pc = 0x26A39Cu;
label_26a39c:
    // 0x26a39c: 0xc09b7ee  jal         func_26DFB8
label_26a3a0:
    if (ctx->pc == 0x26A3A0u) {
        ctx->pc = 0x26A3A0u;
            // 0x26a3a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26A3A4u;
        goto label_26a3a4;
    }
    ctx->pc = 0x26A39Cu;
    SET_GPR_U32(ctx, 31, 0x26A3A4u);
    ctx->pc = 0x26A3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A39Cu;
            // 0x26a3a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26DFB8u;
    if (runtime->hasFunction(0x26DFB8u)) {
        auto targetFn = runtime->lookupFunction(0x26DFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3A4u; }
        if (ctx->pc != 0x26A3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026DFB8_0x26dfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3A4u; }
        if (ctx->pc != 0x26A3A4u) { return; }
    }
    ctx->pc = 0x26A3A4u;
label_26a3a4:
    // 0x26a3a4: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
label_26a3a8:
    if (ctx->pc == 0x26A3A8u) {
        ctx->pc = 0x26A3A8u;
            // 0x26a3a8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x26A3ACu;
        goto label_26a3ac;
    }
    ctx->pc = 0x26A3A4u;
    {
        const bool branch_taken_0x26a3a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26a3a4) {
            ctx->pc = 0x26A3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3A4u;
            // 0x26a3a8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A3C8u;
            goto label_26a3c8;
        }
    }
    ctx->pc = 0x26A3ACu;
label_26a3ac:
    // 0x26a3ac: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26a3b0:
    // 0x26a3b0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a3b4:
    // 0x26a3b4: 0x24a58440  addiu       $a1, $a1, -0x7BC0
    ctx->pc = 0x26a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935616));
label_26a3b8:
    // 0x26a3b8: 0xc08b5ac  jal         func_22D6B0
label_26a3bc:
    if (ctx->pc == 0x26A3BCu) {
        ctx->pc = 0x26A3C0u;
        goto label_26a3c0;
    }
    ctx->pc = 0x26A3B8u;
    SET_GPR_U32(ctx, 31, 0x26A3C0u);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3C0u; }
        if (ctx->pc != 0x26A3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3C0u; }
        if (ctx->pc != 0x26A3C0u) { return; }
    }
    ctx->pc = 0x26A3C0u;
label_26a3c0:
    // 0x26a3c0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_26a3c4:
    if (ctx->pc == 0x26A3C4u) {
        ctx->pc = 0x26A3C4u;
            // 0x26a3c4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x26A3C8u;
        goto label_26a3c8;
    }
    ctx->pc = 0x26A3C0u;
    {
        const bool branch_taken_0x26a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3C0u;
            // 0x26a3c4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3c0) {
            ctx->pc = 0x26A430u;
            goto label_26a430;
        }
    }
    ctx->pc = 0x26A3C8u;
label_26a3c8:
    // 0x26a3c8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x26a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_26a3cc:
    // 0x26a3cc: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x26a3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_26a3d0:
    // 0x26a3d0: 0xc0980bc  jal         func_2602F0
label_26a3d4:
    if (ctx->pc == 0x26A3D4u) {
        ctx->pc = 0x26A3D4u;
            // 0x26a3d4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x26A3D8u;
        goto label_26a3d8;
    }
    ctx->pc = 0x26A3D0u;
    SET_GPR_U32(ctx, 31, 0x26A3D8u);
    ctx->pc = 0x26A3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3D0u;
            // 0x26a3d4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2602F0u;
    if (runtime->hasFunction(0x2602F0u)) {
        auto targetFn = runtime->lookupFunction(0x2602F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3D8u; }
        if (ctx->pc != 0x26A3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002602F0_0x2602f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3D8u; }
        if (ctx->pc != 0x26A3D8u) { return; }
    }
    ctx->pc = 0x26A3D8u;
label_26a3d8:
    // 0x26a3d8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x26a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_26a3dc:
    // 0x26a3dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26a3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26a3e0:
    // 0x26a3e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_26a3e4:
    if (ctx->pc == 0x26A3E4u) {
        ctx->pc = 0x26A3E4u;
            // 0x26a3e4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26A3E8u;
        goto label_26a3e8;
    }
    ctx->pc = 0x26A3E0u;
    {
        const bool branch_taken_0x26a3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3E0u;
            // 0x26a3e4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3e0) {
            ctx->pc = 0x26A3FCu;
            goto label_26a3fc;
        }
    }
    ctx->pc = 0x26A3E8u;
label_26a3e8:
    // 0x26a3e8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a3ec:
    // 0x26a3ec: 0xc08b5ac  jal         func_22D6B0
label_26a3f0:
    if (ctx->pc == 0x26A3F0u) {
        ctx->pc = 0x26A3F0u;
            // 0x26a3f0: 0x24a58468  addiu       $a1, $a1, -0x7B98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935656));
        ctx->pc = 0x26A3F4u;
        goto label_26a3f4;
    }
    ctx->pc = 0x26A3ECu;
    SET_GPR_U32(ctx, 31, 0x26A3F4u);
    ctx->pc = 0x26A3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3ECu;
            // 0x26a3f0: 0x24a58468  addiu       $a1, $a1, -0x7B98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3F4u; }
        if (ctx->pc != 0x26A3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3F4u; }
        if (ctx->pc != 0x26A3F4u) { return; }
    }
    ctx->pc = 0x26A3F4u;
label_26a3f4:
    // 0x26a3f4: 0x1000000e  b           . + 4 + (0xE << 2)
label_26a3f8:
    if (ctx->pc == 0x26A3F8u) {
        ctx->pc = 0x26A3F8u;
            // 0x26a3f8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26A3FCu;
        goto label_26a3fc;
    }
    ctx->pc = 0x26A3F4u;
    {
        const bool branch_taken_0x26a3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3F4u;
            // 0x26a3f8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3f4) {
            ctx->pc = 0x26A430u;
            goto label_26a430;
        }
    }
    ctx->pc = 0x26A3FCu;
label_26a3fc:
    // 0x26a3fc: 0x1000000c  b           . + 4 + (0xC << 2)
label_26a400:
    if (ctx->pc == 0x26A400u) {
        ctx->pc = 0x26A400u;
            // 0x26a400: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26A404u;
        goto label_26a404;
    }
    ctx->pc = 0x26A3FCu;
    {
        const bool branch_taken_0x26a3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3FCu;
            // 0x26a400: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3fc) {
            ctx->pc = 0x26A430u;
            goto label_26a430;
        }
    }
    ctx->pc = 0x26A404u;
label_26a404:
    // 0x26a404: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26a404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26a408:
    // 0x26a408: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26a408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26a40c:
    // 0x26a40c: 0xc08b5ac  jal         func_22D6B0
label_26a410:
    if (ctx->pc == 0x26A410u) {
        ctx->pc = 0x26A410u;
            // 0x26a410: 0x24a58490  addiu       $a1, $a1, -0x7B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935696));
        ctx->pc = 0x26A414u;
        goto label_26a414;
    }
    ctx->pc = 0x26A40Cu;
    SET_GPR_U32(ctx, 31, 0x26A414u);
    ctx->pc = 0x26A410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A40Cu;
            // 0x26a410: 0x24a58490  addiu       $a1, $a1, -0x7B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A414u; }
        if (ctx->pc != 0x26A414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A414u; }
        if (ctx->pc != 0x26A414u) { return; }
    }
    ctx->pc = 0x26A414u;
label_26a414:
    // 0x26a414: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x26a414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_26a418:
    // 0x26a418: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x26a418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
label_26a41c:
    // 0x26a41c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26a41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_26a420:
    // 0x26a420: 0x2402ff33  addiu       $v0, $zero, -0xCD
    ctx->pc = 0x26a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967091));
label_26a424:
    // 0x26a424: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x26a424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_26a428:
    // 0x26a428: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26a428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_26a42c:
    // 0x26a42c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x26a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_26a430:
    // 0x26a430: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26a430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26a434:
    // 0x26a434: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26a434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26a438:
    // 0x26a438: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26a438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26a43c:
    // 0x26a43c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26a43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26a440:
    // 0x26a440: 0x3e00008  jr          $ra
label_26a444:
    if (ctx->pc == 0x26A444u) {
        ctx->pc = 0x26A444u;
            // 0x26a444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x26A448u;
        goto label_26a448;
    }
    ctx->pc = 0x26A440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A440u;
            // 0x26a444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A448u;
label_26a448:
    // 0x26a448: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x26a448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_26a44c:
    // 0x26a44c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26a450:
    // 0x26a450: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x26a450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
label_26a454:
    // 0x26a454: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x26a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
label_26a458:
    // 0x26a458: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a45c:
    // 0x26a45c: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x26a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
label_26a460:
    // 0x26a460: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x26a460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
label_26a464:
    // 0x26a464: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x26a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
label_26a468:
    // 0x26a468: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x26a468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
label_26a46c:
    // 0x26a46c: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x26a46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
label_26a470:
    // 0x26a470: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x26a470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
label_26a474:
    // 0x26a474: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x26a474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
label_26a478:
    // 0x26a478: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_26a47c:
    if (ctx->pc == 0x26A47Cu) {
        ctx->pc = 0x26A47Cu;
            // 0x26a47c: 0xffb00110  sd          $s0, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
        ctx->pc = 0x26A480u;
        goto label_26a480;
    }
    ctx->pc = 0x26A478u;
    {
        const bool branch_taken_0x26a478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A478u;
            // 0x26a47c: 0xffb00110  sd          $s0, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a478) {
            ctx->pc = 0x26A488u;
            goto label_26a488;
        }
    }
    ctx->pc = 0x26A480u;
label_26a480:
    // 0x26a480: 0x10000017  b           . + 4 + (0x17 << 2)
label_26a484:
    if (ctx->pc == 0x26A484u) {
        ctx->pc = 0x26A484u;
            // 0x26a484: 0x8e220190  lw          $v0, 0x190($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
        ctx->pc = 0x26A488u;
        goto label_26a488;
    }
    ctx->pc = 0x26A480u;
    {
        const bool branch_taken_0x26a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A480u;
            // 0x26a484: 0x8e220190  lw          $v0, 0x190($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a480) {
            ctx->pc = 0x26A4E0u;
            goto label_26a4e0;
        }
    }
    ctx->pc = 0x26A488u;
label_26a488:
    // 0x26a488: 0xc08b614  jal         func_22D850
label_26a48c:
    if (ctx->pc == 0x26A48Cu) {
        ctx->pc = 0x26A490u;
        goto label_26a490;
    }
    ctx->pc = 0x26A488u;
    SET_GPR_U32(ctx, 31, 0x26A490u);
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A490u; }
        if (ctx->pc != 0x26A490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A490u; }
        if (ctx->pc != 0x26A490u) { return; }
    }
    ctx->pc = 0x26A490u;
label_26a490:
    // 0x26a490: 0x8e2401a8  lw          $a0, 0x1A8($s1)
    ctx->pc = 0x26a490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_26a494:
    // 0x26a494: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x26a494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_26a498:
    // 0x26a498: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x26a498u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_26a49c:
    // 0x26a49c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_26a4a0:
    if (ctx->pc == 0x26A4A0u) {
        ctx->pc = 0x26A4A0u;
            // 0x26a4a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x26A4A4u;
        goto label_26a4a4;
    }
    ctx->pc = 0x26A49Cu;
    {
        const bool branch_taken_0x26a49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a49c) {
            ctx->pc = 0x26A4A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A49Cu;
            // 0x26a4a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A4A4u;
            goto label_26a4a4;
        }
    }
    ctx->pc = 0x26A4A4u;
label_26a4a4:
    // 0x26a4a4: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x26a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_26a4a8:
    // 0x26a4a8: 0x2810  mfhi        $a1
    ctx->pc = 0x26a4a8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26a4ac:
    // 0x26a4ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_26a4b0:
    // 0x26a4b0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26a4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_26a4b4:
    // 0x26a4b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26a4b8:
    if (ctx->pc == 0x26A4B8u) {
        ctx->pc = 0x26A4B8u;
            // 0x26a4b8: 0xae2401a8  sw          $a0, 0x1A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 4));
        ctx->pc = 0x26A4BCu;
        goto label_26a4bc;
    }
    ctx->pc = 0x26A4B4u;
    {
        const bool branch_taken_0x26a4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4B4u;
            // 0x26a4b8: 0xae2401a8  sw          $a0, 0x1A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4b4) {
            ctx->pc = 0x26A4E4u;
            goto label_26a4e4;
        }
    }
    ctx->pc = 0x26A4BCu;
label_26a4bc:
    // 0x26a4bc: 0xc08b614  jal         func_22D850
label_26a4c0:
    if (ctx->pc == 0x26A4C0u) {
        ctx->pc = 0x26A4C4u;
        goto label_26a4c4;
    }
    ctx->pc = 0x26A4BCu;
    SET_GPR_U32(ctx, 31, 0x26A4C4u);
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4C4u; }
        if (ctx->pc != 0x26A4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4C4u; }
        if (ctx->pc != 0x26A4C4u) { return; }
    }
    ctx->pc = 0x26A4C4u;
label_26a4c4:
    // 0x26a4c4: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x26a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_26a4c8:
    // 0x26a4c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x26a4c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_26a4cc:
    // 0x26a4cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_26a4d0:
    if (ctx->pc == 0x26A4D0u) {
        ctx->pc = 0x26A4D0u;
            // 0x26a4d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x26A4D4u;
        goto label_26a4d4;
    }
    ctx->pc = 0x26A4CCu;
    {
        const bool branch_taken_0x26a4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4cc) {
            ctx->pc = 0x26A4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4CCu;
            // 0x26a4d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A4D4u;
            goto label_26a4d4;
        }
    }
    ctx->pc = 0x26A4D4u;
label_26a4d4:
    // 0x26a4d4: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x26a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_26a4d8:
    // 0x26a4d8: 0x2010  mfhi        $a0
    ctx->pc = 0x26a4d8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26a4dc:
    // 0x26a4dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_26a4e0:
    // 0x26a4e0: 0xae2201a8  sw          $v0, 0x1A8($s1)
    ctx->pc = 0x26a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 2));
label_26a4e4:
    // 0x26a4e4: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x26a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_26a4e8:
    // 0x26a4e8: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x26a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_26a4ec:
    // 0x26a4ec: 0xc098ba8  jal         func_262EA0
label_26a4f0:
    if (ctx->pc == 0x26A4F0u) {
        ctx->pc = 0x26A4F0u;
            // 0x26a4f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A4F4u;
        goto label_26a4f4;
    }
    ctx->pc = 0x26A4ECu;
    SET_GPR_U32(ctx, 31, 0x26A4F4u);
    ctx->pc = 0x26A4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4ECu;
            // 0x26a4f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4F4u; }
        if (ctx->pc != 0x26A4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4F4u; }
        if (ctx->pc != 0x26A4F4u) { return; }
    }
    ctx->pc = 0x26A4F4u;
label_26a4f4:
    // 0x26a4f4: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_26a4f8:
    if (ctx->pc == 0x26A4F8u) {
        ctx->pc = 0x26A4F8u;
            // 0x26a4f8: 0x8e260188  lw          $a2, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x26A4FCu;
        goto label_26a4fc;
    }
    ctx->pc = 0x26A4F4u;
    {
        const bool branch_taken_0x26a4f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26a4f4) {
            ctx->pc = 0x26A4F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4F4u;
            // 0x26a4f8: 0x8e260188  lw          $a2, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A50Cu;
            goto label_26a50c;
        }
    }
    ctx->pc = 0x26A4FCu;
label_26a4fc:
    // 0x26a4fc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26a4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26a500:
    // 0x26a500: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a504:
    // 0x26a504: 0x100000ef  b           . + 4 + (0xEF << 2)
label_26a508:
    if (ctx->pc == 0x26A508u) {
        ctx->pc = 0x26A508u;
            // 0x26a508: 0x24a584b0  addiu       $a1, $a1, -0x7B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935728));
        ctx->pc = 0x26A50Cu;
        goto label_26a50c;
    }
    ctx->pc = 0x26A504u;
    {
        const bool branch_taken_0x26a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A504u;
            // 0x26a508: 0x24a584b0  addiu       $a1, $a1, -0x7B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a504) {
            ctx->pc = 0x26A8C4u;
            goto label_26a8c4;
        }
    }
    ctx->pc = 0x26A50Cu;
label_26a50c:
    // 0x26a50c: 0xde2401a0  ld          $a0, 0x1A0($s1)
    ctx->pc = 0x26a50cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 416)));
label_26a510:
    // 0x26a510: 0x9cc303e4  lwu         $v1, 0x3E4($a2)
    ctx->pc = 0x26a510u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 996)));
label_26a514:
    // 0x26a514: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x26a514u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_26a518:
    // 0x26a518: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x26a518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
label_26a51c:
    // 0x26a51c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x26a51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26a520:
    // 0x26a520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26a524:
    if (ctx->pc == 0x26A524u) {
        ctx->pc = 0x26A524u;
            // 0x26a524: 0x85102f  dsubu       $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
        ctx->pc = 0x26A528u;
        goto label_26a528;
    }
    ctx->pc = 0x26A520u;
    {
        const bool branch_taken_0x26a520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A520u;
            // 0x26a524: 0x85102f  dsubu       $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a520) {
            ctx->pc = 0x26A530u;
            goto label_26a530;
        }
    }
    ctx->pc = 0x26A528u;
label_26a528:
    // 0x26a528: 0x1000010c  b           . + 4 + (0x10C << 2)
label_26a52c:
    if (ctx->pc == 0x26A52Cu) {
        ctx->pc = 0x26A52Cu;
            // 0x26a52c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26A530u;
        goto label_26a530;
    }
    ctx->pc = 0x26A528u;
    {
        const bool branch_taken_0x26a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A528u;
            // 0x26a52c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a528) {
            ctx->pc = 0x26A95Cu;
            goto label_26a95c;
        }
    }
    ctx->pc = 0x26A530u;
label_26a530:
    // 0x26a530: 0x8e2301a8  lw          $v1, 0x1A8($s1)
    ctx->pc = 0x26a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_26a534:
    // 0x26a534: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x26a534u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
label_26a538:
    // 0x26a538: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x26a538u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_26a53c:
    // 0x26a53c: 0x88c503eb  lwl         $a1, 0x3EB($a2)
    ctx->pc = 0x26a53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 1003); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
label_26a540:
    // 0x26a540: 0x98c503e8  lwr         $a1, 0x3E8($a2)
    ctx->pc = 0x26a540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 1000); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
label_26a544:
    // 0x26a544: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x26a544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_26a548:
    // 0x26a548: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26a548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_26a54c:
    // 0x26a54c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x26a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_26a550:
    // 0x26a550: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x26a550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_26a554:
    // 0x26a554: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x26a554u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_26a558:
    // 0x26a558: 0x26108250  addiu       $s0, $s0, -0x7DB0
    ctx->pc = 0x26a558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935120));
label_26a55c:
    // 0x26a55c: 0xc0990d8  jal         func_264360
label_26a560:
    if (ctx->pc == 0x26A560u) {
        ctx->pc = 0x26A560u;
            // 0x26a560: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->pc = 0x26A564u;
        goto label_26a564;
    }
    ctx->pc = 0x26A55Cu;
    SET_GPR_U32(ctx, 31, 0x26A564u);
    ctx->pc = 0x26A560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A55Cu;
            // 0x26a560: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A564u; }
        if (ctx->pc != 0x26A564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A564u; }
        if (ctx->pc != 0x26A564u) { return; }
    }
    ctx->pc = 0x26A564u;
label_26a564:
    // 0x26a564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a568:
    // 0x26a568: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26a568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a56c:
    // 0x26a56c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26a570:
    // 0x26a570: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26a570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a574:
    // 0x26a574: 0x24080043  addiu       $t0, $zero, 0x43
    ctx->pc = 0x26a574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_26a578:
    // 0x26a578: 0xc08b5ac  jal         func_22D6B0
label_26a57c:
    if (ctx->pc == 0x26A57Cu) {
        ctx->pc = 0x26A57Cu;
            // 0x26a57c: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A580u;
        goto label_26a580;
    }
    ctx->pc = 0x26A578u;
    SET_GPR_U32(ctx, 31, 0x26A580u);
    ctx->pc = 0x26A57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A578u;
            // 0x26a57c: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A580u; }
        if (ctx->pc != 0x26A580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A580u; }
        if (ctx->pc != 0x26A580u) { return; }
    }
    ctx->pc = 0x26A580u;
label_26a580:
    // 0x26a580: 0x1a6000b9  blez        $s3, . + 4 + (0xB9 << 2)
label_26a584:
    if (ctx->pc == 0x26A584u) {
        ctx->pc = 0x26A588u;
        goto label_26a588;
    }
    ctx->pc = 0x26A580u;
    {
        const bool branch_taken_0x26a580 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x26a580) {
            ctx->pc = 0x26A868u;
            goto label_26a868;
        }
    }
    ctx->pc = 0x26A588u;
label_26a588:
    // 0x26a588: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x26a588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_26a58c:
    // 0x26a58c: 0x0  nop
    ctx->pc = 0x26a58cu;
    // NOP
label_26a590:
    // 0x26a590: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x26a590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_26a594:
    // 0x26a594: 0xc098092  jal         func_260248
label_26a598:
    if (ctx->pc == 0x26A598u) {
        ctx->pc = 0x26A598u;
            // 0x26a598: 0x8e26001c  lw          $a2, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x26A59Cu;
        goto label_26a59c;
    }
    ctx->pc = 0x26A594u;
    SET_GPR_U32(ctx, 31, 0x26A59Cu);
    ctx->pc = 0x26A598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A594u;
            // 0x26a598: 0x8e26001c  lw          $a2, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260248u;
    if (runtime->hasFunction(0x260248u)) {
        auto targetFn = runtime->lookupFunction(0x260248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A59Cu; }
        if (ctx->pc != 0x26A59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260248_0x260248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A59Cu; }
        if (ctx->pc != 0x26A59Cu) { return; }
    }
    ctx->pc = 0x26A59Cu;
label_26a59c:
    // 0x26a59c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26a59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a5a0:
    // 0x26a5a0: 0x64000dd  bltz        $s2, . + 4 + (0xDD << 2)
label_26a5a4:
    if (ctx->pc == 0x26A5A4u) {
        ctx->pc = 0x26A5A4u;
            // 0x26a5a4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26A5A8u;
        goto label_26a5a8;
    }
    ctx->pc = 0x26A5A0u;
    {
        const bool branch_taken_0x26a5a0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x26A5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5A0u;
            // 0x26a5a4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5a0) {
            ctx->pc = 0x26A918u;
            goto label_26a918;
        }
    }
    ctx->pc = 0x26A5A8u;
label_26a5a8:
    // 0x26a5a8: 0xc04332c  jal         func_10CCB0
label_26a5ac:
    if (ctx->pc == 0x26A5ACu) {
        ctx->pc = 0x26A5ACu;
            // 0x26a5ac: 0x8e2401b0  lw          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->pc = 0x26A5B0u;
        goto label_26a5b0;
    }
    ctx->pc = 0x26A5A8u;
    SET_GPR_U32(ctx, 31, 0x26A5B0u);
    ctx->pc = 0x26A5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5A8u;
            // 0x26a5ac: 0x8e2401b0  lw          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5B0u; }
        if (ctx->pc != 0x26A5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5B0u; }
        if (ctx->pc != 0x26A5B0u) { return; }
    }
    ctx->pc = 0x26A5B0u;
label_26a5b0:
    // 0x26a5b0: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x26a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_26a5b4:
    // 0x26a5b4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_26a5b8:
    if (ctx->pc == 0x26A5B8u) {
        ctx->pc = 0x26A5B8u;
            // 0x26a5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A5BCu;
        goto label_26a5bc;
    }
    ctx->pc = 0x26A5B4u;
    {
        const bool branch_taken_0x26a5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5B4u;
            // 0x26a5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5b4) {
            ctx->pc = 0x26A5C4u;
            goto label_26a5c4;
        }
    }
    ctx->pc = 0x26A5BCu;
label_26a5bc:
    // 0x26a5bc: 0xc09a536  jal         func_2694D8
label_26a5c0:
    if (ctx->pc == 0x26A5C0u) {
        ctx->pc = 0x26A5C0u;
            // 0x26a5c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x26A5C4u;
        goto label_26a5c4;
    }
    ctx->pc = 0x26A5BCu;
    SET_GPR_U32(ctx, 31, 0x26A5C4u);
    ctx->pc = 0x26A5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5BCu;
            // 0x26a5c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2694D8u;
    if (runtime->hasFunction(0x2694D8u)) {
        auto targetFn = runtime->lookupFunction(0x2694D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5C4u; }
        if (ctx->pc != 0x26A5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002694D8_0x2694d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5C4u; }
        if (ctx->pc != 0x26A5C4u) { return; }
    }
    ctx->pc = 0x26A5C4u;
label_26a5c4:
    // 0x26a5c4: 0x1a4000a5  blez        $s2, . + 4 + (0xA5 << 2)
label_26a5c8:
    if (ctx->pc == 0x26A5C8u) {
        ctx->pc = 0x26A5C8u;
            // 0x26a5c8: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x26A5CCu;
        goto label_26a5cc;
    }
    ctx->pc = 0x26A5C4u;
    {
        const bool branch_taken_0x26a5c4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x26A5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5C4u;
            // 0x26a5c8: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5c4) {
            ctx->pc = 0x26A85Cu;
            goto label_26a85c;
        }
    }
    ctx->pc = 0x26A5CCu;
label_26a5cc:
    // 0x26a5cc: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x26a5ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_26a5d0:
    // 0x26a5d0: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x26a5d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
label_26a5d4:
    // 0x26a5d4: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x26a5d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_26a5d8:
    // 0x26a5d8: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x26a5d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_26a5dc:
    // 0x26a5dc: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x26a5dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
label_26a5e0:
    // 0x26a5e0: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26a5e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_26a5e4:
    // 0x26a5e4: 0x0  nop
    ctx->pc = 0x26a5e4u;
    // NOP
label_26a5e8:
    // 0x26a5e8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x26a5e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a5ec:
    // 0x26a5ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26a5f0:
    // 0x26a5f0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x26a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_26a5f4:
    // 0x26a5f4: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x26a5f4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_26a5f8:
    // 0x26a5f8: 0x24a5000e  addiu       $a1, $a1, 0xE
    ctx->pc = 0x26a5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_26a5fc:
    // 0x26a5fc: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x26a5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_26a600:
    // 0x26a600: 0xae250034  sw          $a1, 0x34($s1)
    ctx->pc = 0x26a600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 5));
label_26a604:
    // 0x26a604: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x26a604u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_26a608:
    // 0x26a608: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x26a608u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_26a60c:
    // 0x26a60c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x26a60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_26a610:
    // 0x26a610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26a614:
    // 0x26a614: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x26a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_26a618:
    // 0x26a618: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26a618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26a61c:
    // 0x26a61c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x26a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_26a620:
    // 0x26a620: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x26a620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
label_26a624:
    // 0x26a624: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x26a624u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_26a628:
    // 0x26a628: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26a628u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_26a62c:
    // 0x26a62c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x26a62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_26a630:
    // 0x26a630: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26a634:
    // 0x26a634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26a638:
    // 0x26a638: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x26a638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
label_26a63c:
    // 0x26a63c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26a640:
    // 0x26a640: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x26a640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_26a644:
    // 0x26a644: 0xc09a476  jal         func_2691D8
label_26a648:
    if (ctx->pc == 0x26A648u) {
        ctx->pc = 0x26A648u;
            // 0x26a648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A64Cu;
        goto label_26a64c;
    }
    ctx->pc = 0x26A644u;
    SET_GPR_U32(ctx, 31, 0x26A64Cu);
    ctx->pc = 0x26A648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A644u;
            // 0x26a648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2691D8u;
    if (runtime->hasFunction(0x2691D8u)) {
        auto targetFn = runtime->lookupFunction(0x2691D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A64Cu; }
        if (ctx->pc != 0x26A64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002691D8_0x2691d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A64Cu; }
        if (ctx->pc != 0x26A64Cu) { return; }
    }
    ctx->pc = 0x26A64Cu;
label_26a64c:
    // 0x26a64c: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
label_26a650:
    if (ctx->pc == 0x26A650u) {
        ctx->pc = 0x26A650u;
            // 0x26a650: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26A654u;
        goto label_26a654;
    }
    ctx->pc = 0x26A64Cu;
    {
        const bool branch_taken_0x26a64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a64c) {
            ctx->pc = 0x26A650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A64Cu;
            // 0x26a650: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A830u;
            goto label_26a830;
        }
    }
    ctx->pc = 0x26A654u;
label_26a654:
    // 0x26a654: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x26a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_26a658:
    // 0x26a658: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x26a658u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_26a65c:
    // 0x26a65c: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x26a65cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_26a660:
    // 0x26a660: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26a660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26a664:
    // 0x26a664: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26a664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_26a668:
    // 0x26a668: 0xc08b60c  jal         func_22D830
label_26a66c:
    if (ctx->pc == 0x26A66Cu) {
        ctx->pc = 0x26A66Cu;
            // 0x26a66c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26A670u;
        goto label_26a670;
    }
    ctx->pc = 0x26A668u;
    SET_GPR_U32(ctx, 31, 0x26A670u);
    ctx->pc = 0x26A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A668u;
            // 0x26a66c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A670u; }
        if (ctx->pc != 0x26A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A670u; }
        if (ctx->pc != 0x26A670u) { return; }
    }
    ctx->pc = 0x26A670u;
label_26a670:
    // 0x26a670: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x26a670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_26a674:
    // 0x26a674: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x26a674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_26a678:
    // 0x26a678: 0xc09b218  jal         func_26C860
label_26a67c:
    if (ctx->pc == 0x26A67Cu) {
        ctx->pc = 0x26A67Cu;
            // 0x26a67c: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->pc = 0x26A680u;
        goto label_26a680;
    }
    ctx->pc = 0x26A678u;
    SET_GPR_U32(ctx, 31, 0x26A680u);
    ctx->pc = 0x26A67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A678u;
            // 0x26a67c: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C860u;
    if (runtime->hasFunction(0x26C860u)) {
        auto targetFn = runtime->lookupFunction(0x26C860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A680u; }
        if (ctx->pc != 0x26A680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C860_0x26c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A680u; }
        if (ctx->pc != 0x26A680u) { return; }
    }
    ctx->pc = 0x26A680u;
label_26a680:
    // 0x26a680: 0x5040006b  beql        $v0, $zero, . + 4 + (0x6B << 2)
label_26a684:
    if (ctx->pc == 0x26A684u) {
        ctx->pc = 0x26A684u;
            // 0x26a684: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26A688u;
        goto label_26a688;
    }
    ctx->pc = 0x26A680u;
    {
        const bool branch_taken_0x26a680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a680) {
            ctx->pc = 0x26A684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A680u;
            // 0x26a684: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A830u;
            goto label_26a830;
        }
    }
    ctx->pc = 0x26A688u;
label_26a688:
    // 0x26a688: 0x80440002  lb          $a0, 0x2($v0)
    ctx->pc = 0x26a688u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_26a68c:
    // 0x26a68c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26a690:
    // 0x26a690: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
label_26a694:
    if (ctx->pc == 0x26A694u) {
        ctx->pc = 0x26A694u;
            // 0x26a694: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x26A698u;
        goto label_26a698;
    }
    ctx->pc = 0x26A690u;
    {
        const bool branch_taken_0x26a690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A690u;
            // 0x26a694: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a690) {
            ctx->pc = 0x26A74Cu;
            goto label_26a74c;
        }
    }
    ctx->pc = 0x26A698u;
label_26a698:
    // 0x26a698: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x26a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_26a69c:
    // 0x26a69c: 0x8844000f  lwl         $a0, 0xF($v0)
    ctx->pc = 0x26a69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26a6a0:
    // 0x26a6a0: 0x9844000c  lwr         $a0, 0xC($v0)
    ctx->pc = 0x26a6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_26a6a4:
    // 0x26a6a4: 0xc0990d8  jal         func_264360
label_26a6a8:
    if (ctx->pc == 0x26A6A8u) {
        ctx->pc = 0x26A6A8u;
            // 0x26a6a8: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->pc = 0x26A6ACu;
        goto label_26a6ac;
    }
    ctx->pc = 0x26A6A4u;
    SET_GPR_U32(ctx, 31, 0x26A6ACu);
    ctx->pc = 0x26A6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6A4u;
            // 0x26a6a8: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6ACu; }
        if (ctx->pc != 0x26A6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6ACu; }
        if (ctx->pc != 0x26A6ACu) { return; }
    }
    ctx->pc = 0x26A6ACu;
label_26a6ac:
    // 0x26a6ac: 0x26c582b8  addiu       $a1, $s6, -0x7D48
    ctx->pc = 0x26a6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935224));
label_26a6b0:
    // 0x26a6b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26a6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a6b4:
    // 0x26a6b4: 0xc08b5ac  jal         func_22D6B0
label_26a6b8:
    if (ctx->pc == 0x26A6B8u) {
        ctx->pc = 0x26A6B8u;
            // 0x26a6b8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26A6BCu;
        goto label_26a6bc;
    }
    ctx->pc = 0x26A6B4u;
    SET_GPR_U32(ctx, 31, 0x26A6BCu);
    ctx->pc = 0x26A6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6B4u;
            // 0x26a6b8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6BCu; }
        if (ctx->pc != 0x26A6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6BCu; }
        if (ctx->pc != 0x26A6BCu) { return; }
    }
    ctx->pc = 0x26A6BCu;
label_26a6bc:
    // 0x26a6bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26a6c0:
    // 0x26a6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26a6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a6c4:
    // 0x26a6c4: 0xc049cb6  jal         func_1272D8
label_26a6c8:
    if (ctx->pc == 0x26A6C8u) {
        ctx->pc = 0x26A6C8u;
            // 0x26a6c8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26A6CCu;
        goto label_26a6cc;
    }
    ctx->pc = 0x26A6C4u;
    SET_GPR_U32(ctx, 31, 0x26A6CCu);
    ctx->pc = 0x26A6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6C4u;
            // 0x26a6c8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6CCu; }
        if (ctx->pc != 0x26A6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6CCu; }
        if (ctx->pc != 0x26A6CCu) { return; }
    }
    ctx->pc = 0x26A6CCu;
label_26a6cc:
    // 0x26a6cc: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x26a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_26a6d0:
    // 0x26a6d0: 0x90640005  lbu         $a0, 0x5($v1)
    ctx->pc = 0x26a6d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_26a6d4:
    // 0x26a6d4: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x26a6d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_26a6d8:
    // 0x26a6d8: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26a6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26a6dc:
    // 0x26a6dc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26a6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_26a6e0:
    // 0x26a6e0: 0xc08b60c  jal         func_22D830
label_26a6e4:
    if (ctx->pc == 0x26A6E4u) {
        ctx->pc = 0x26A6E4u;
            // 0x26a6e4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26A6E8u;
        goto label_26a6e8;
    }
    ctx->pc = 0x26A6E0u;
    SET_GPR_U32(ctx, 31, 0x26A6E8u);
    ctx->pc = 0x26A6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6E0u;
            // 0x26a6e4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6E8u; }
        if (ctx->pc != 0x26A6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6E8u; }
        if (ctx->pc != 0x26A6E8u) { return; }
    }
    ctx->pc = 0x26A6E8u;
label_26a6e8:
    // 0x26a6e8: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x26a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_26a6ec:
    // 0x26a6ec: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x26a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_26a6f0:
    // 0x26a6f0: 0xc09b218  jal         func_26C860
label_26a6f4:
    if (ctx->pc == 0x26A6F4u) {
        ctx->pc = 0x26A6F4u;
            // 0x26a6f4: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->pc = 0x26A6F8u;
        goto label_26a6f8;
    }
    ctx->pc = 0x26A6F0u;
    SET_GPR_U32(ctx, 31, 0x26A6F8u);
    ctx->pc = 0x26A6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6F0u;
            // 0x26a6f4: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C860u;
    if (runtime->hasFunction(0x26C860u)) {
        auto targetFn = runtime->lookupFunction(0x26C860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6F8u; }
        if (ctx->pc != 0x26A6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C860_0x26c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6F8u; }
        if (ctx->pc != 0x26A6F8u) { return; }
    }
    ctx->pc = 0x26A6F8u;
label_26a6f8:
    // 0x26a6f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26a6fc:
    if (ctx->pc == 0x26A6FCu) {
        ctx->pc = 0x26A6FCu;
            // 0x26a6fc: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x26A700u;
        goto label_26a700;
    }
    ctx->pc = 0x26A6F8u;
    {
        const bool branch_taken_0x26a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6F8u;
            // 0x26a6fc: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6f8) {
            ctx->pc = 0x26A720u;
            goto label_26a720;
        }
    }
    ctx->pc = 0x26A700u;
label_26a700:
    // 0x26a700: 0x80460001  lb          $a2, 0x1($v0)
    ctx->pc = 0x26a700u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_26a704:
    // 0x26a704: 0xc09b4bc  jal         func_26D2F0
label_26a708:
    if (ctx->pc == 0x26A708u) {
        ctx->pc = 0x26A708u;
            // 0x26a708: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A70Cu;
        goto label_26a70c;
    }
    ctx->pc = 0x26A704u;
    SET_GPR_U32(ctx, 31, 0x26A70Cu);
    ctx->pc = 0x26A708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A704u;
            // 0x26a708: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D2F0u;
    if (runtime->hasFunction(0x26D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x26D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A70Cu; }
        if (ctx->pc != 0x26A70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D2F0_0x26d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A70Cu; }
        if (ctx->pc != 0x26A70Cu) { return; }
    }
    ctx->pc = 0x26A70Cu;
label_26a70c:
    // 0x26a70c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26a710:
    // 0x26a710: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26a714:
    // 0x26a714: 0x24a582d8  addiu       $a1, $a1, -0x7D28
    ctx->pc = 0x26a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935256));
label_26a718:
    // 0x26a718: 0xc08b5ac  jal         func_22D6B0
label_26a71c:
    if (ctx->pc == 0x26A71Cu) {
        ctx->pc = 0x26A71Cu;
            // 0x26a71c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A720u;
        goto label_26a720;
    }
    ctx->pc = 0x26A718u;
    SET_GPR_U32(ctx, 31, 0x26A720u);
    ctx->pc = 0x26A71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A718u;
            // 0x26a71c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A720u; }
        if (ctx->pc != 0x26A720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A720u; }
        if (ctx->pc != 0x26A720u) { return; }
    }
    ctx->pc = 0x26A720u;
label_26a720:
    // 0x26a720: 0xc09b4cc  jal         func_26D330
label_26a724:
    if (ctx->pc == 0x26A724u) {
        ctx->pc = 0x26A724u;
            // 0x26a724: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x26A728u;
        goto label_26a728;
    }
    ctx->pc = 0x26A720u;
    SET_GPR_U32(ctx, 31, 0x26A728u);
    ctx->pc = 0x26A724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A720u;
            // 0x26a724: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A728u; }
        if (ctx->pc != 0x26A728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A728u; }
        if (ctx->pc != 0x26A728u) { return; }
    }
    ctx->pc = 0x26A728u;
label_26a728:
    // 0x26a728: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x26a728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_26a72c:
    // 0x26a72c: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x26a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
label_26a730:
    // 0x26a730: 0xae200188  sw          $zero, 0x188($s1)
    ctx->pc = 0x26a730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 0));
label_26a734:
    // 0x26a734: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26a734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_26a738:
    // 0x26a738: 0x2402ff35  addiu       $v0, $zero, -0xCB
    ctx->pc = 0x26a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
label_26a73c:
    // 0x26a73c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x26a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_26a740:
    // 0x26a740: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26a740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_26a744:
    // 0x26a744: 0x10000085  b           . + 4 + (0x85 << 2)
label_26a748:
    if (ctx->pc == 0x26A748u) {
        ctx->pc = 0x26A748u;
            // 0x26a748: 0xaca30030  sw          $v1, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x26A74Cu;
        goto label_26a74c;
    }
    ctx->pc = 0x26A744u;
    {
        const bool branch_taken_0x26a744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A744u;
            // 0x26a748: 0xaca30030  sw          $v1, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a744) {
            ctx->pc = 0x26A95Cu;
            goto label_26a95c;
        }
    }
    ctx->pc = 0x26A74Cu;
label_26a74c:
    // 0x26a74c: 0x54820038  bnel        $a0, $v0, . + 4 + (0x38 << 2)
label_26a750:
    if (ctx->pc == 0x26A750u) {
        ctx->pc = 0x26A750u;
            // 0x26a750: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26A754u;
        goto label_26a754;
    }
    ctx->pc = 0x26A74Cu;
    {
        const bool branch_taken_0x26a74c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26a74c) {
            ctx->pc = 0x26A750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A74Cu;
            // 0x26a750: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A830u;
            goto label_26a830;
        }
    }
    ctx->pc = 0x26A754u;
label_26a754:
    // 0x26a754: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x26a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_26a758:
    // 0x26a758: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x26a758u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_26a75c:
    // 0x26a75c: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x26a75cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_26a760:
    // 0x26a760: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26a760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26a764:
    // 0x26a764: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26a764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_26a768:
    // 0x26a768: 0xc08b60c  jal         func_22D830
label_26a76c:
    if (ctx->pc == 0x26A76Cu) {
        ctx->pc = 0x26A76Cu;
            // 0x26a76c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26A770u;
        goto label_26a770;
    }
    ctx->pc = 0x26A768u;
    SET_GPR_U32(ctx, 31, 0x26A770u);
    ctx->pc = 0x26A76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A768u;
            // 0x26a76c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A770u; }
        if (ctx->pc != 0x26A770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A770u; }
        if (ctx->pc != 0x26A770u) { return; }
    }
    ctx->pc = 0x26A770u;
label_26a770:
    // 0x26a770: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x26a770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_26a774:
    // 0x26a774: 0xc09b13e  jal         func_26C4F8
label_26a778:
    if (ctx->pc == 0x26A778u) {
        ctx->pc = 0x26A778u;
            // 0x26a778: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x26A77Cu;
        goto label_26a77c;
    }
    ctx->pc = 0x26A774u;
    SET_GPR_U32(ctx, 31, 0x26A77Cu);
    ctx->pc = 0x26A778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A774u;
            // 0x26a778: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C4F8u;
    if (runtime->hasFunction(0x26C4F8u)) {
        auto targetFn = runtime->lookupFunction(0x26C4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A77Cu; }
        if (ctx->pc != 0x26A77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C4F8_0x26c4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A77Cu; }
        if (ctx->pc != 0x26A77Cu) { return; }
    }
    ctx->pc = 0x26A77Cu;
label_26a77c:
    // 0x26a77c: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_26a780:
    if (ctx->pc == 0x26A780u) {
        ctx->pc = 0x26A780u;
            // 0x26a780: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26A784u;
        goto label_26a784;
    }
    ctx->pc = 0x26A77Cu;
    {
        const bool branch_taken_0x26a77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a77c) {
            ctx->pc = 0x26A780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A77Cu;
            // 0x26a780: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A830u;
            goto label_26a830;
        }
    }
    ctx->pc = 0x26A784u;
label_26a784:
    // 0x26a784: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x26a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_26a788:
    // 0x26a788: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x26a788u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_26a78c:
    // 0x26a78c: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x26a78cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_26a790:
    // 0x26a790: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26a790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26a794:
    // 0x26a794: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26a794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_26a798:
    // 0x26a798: 0xc08b60c  jal         func_22D830
label_26a79c:
    if (ctx->pc == 0x26A79Cu) {
        ctx->pc = 0x26A79Cu;
            // 0x26a79c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26A7A0u;
        goto label_26a7a0;
    }
    ctx->pc = 0x26A798u;
    SET_GPR_U32(ctx, 31, 0x26A7A0u);
    ctx->pc = 0x26A79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A798u;
            // 0x26a79c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7A0u; }
        if (ctx->pc != 0x26A7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7A0u; }
        if (ctx->pc != 0x26A7A0u) { return; }
    }
    ctx->pc = 0x26A7A0u;
label_26a7a0:
    // 0x26a7a0: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x26a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_26a7a4:
    // 0x26a7a4: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x26a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_26a7a8:
    // 0x26a7a8: 0xc09b2a4  jal         func_26CA90
label_26a7ac:
    if (ctx->pc == 0x26A7ACu) {
        ctx->pc = 0x26A7ACu;
            // 0x26a7ac: 0x8e260188  lw          $a2, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x26A7B0u;
        goto label_26a7b0;
    }
    ctx->pc = 0x26A7A8u;
    SET_GPR_U32(ctx, 31, 0x26A7B0u);
    ctx->pc = 0x26A7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7A8u;
            // 0x26a7ac: 0x8e260188  lw          $a2, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA90u;
    if (runtime->hasFunction(0x26CA90u)) {
        auto targetFn = runtime->lookupFunction(0x26CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7B0u; }
        if (ctx->pc != 0x26A7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA90_0x26ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7B0u; }
        if (ctx->pc != 0x26A7B0u) { return; }
    }
    ctx->pc = 0x26A7B0u;
label_26a7b0:
    // 0x26a7b0: 0x440006a  bltz        $v0, . + 4 + (0x6A << 2)
label_26a7b4:
    if (ctx->pc == 0x26A7B4u) {
        ctx->pc = 0x26A7B4u;
            // 0x26a7b4: 0x2402ff32  addiu       $v0, $zero, -0xCE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967090));
        ctx->pc = 0x26A7B8u;
        goto label_26a7b8;
    }
    ctx->pc = 0x26A7B0u;
    {
        const bool branch_taken_0x26a7b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26A7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7B0u;
            // 0x26a7b4: 0x2402ff32  addiu       $v0, $zero, -0xCE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967090));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7b0) {
            ctx->pc = 0x26A95Cu;
            goto label_26a95c;
        }
    }
    ctx->pc = 0x26A7B8u;
label_26a7b8:
    // 0x26a7b8: 0xc098ba8  jal         func_262EA0
label_26a7bc:
    if (ctx->pc == 0x26A7BCu) {
        ctx->pc = 0x26A7BCu;
            // 0x26a7bc: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->pc = 0x26A7C0u;
        goto label_26a7c0;
    }
    ctx->pc = 0x26A7B8u;
    SET_GPR_U32(ctx, 31, 0x26A7C0u);
    ctx->pc = 0x26A7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7B8u;
            // 0x26a7bc: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7C0u; }
        if (ctx->pc != 0x26A7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7C0u; }
        if (ctx->pc != 0x26A7C0u) { return; }
    }
    ctx->pc = 0x26A7C0u;
label_26a7c0:
    // 0x26a7c0: 0x440005a  bltz        $v0, . + 4 + (0x5A << 2)
label_26a7c4:
    if (ctx->pc == 0x26A7C4u) {
        ctx->pc = 0x26A7C4u;
            // 0x26a7c4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26A7C8u;
        goto label_26a7c8;
    }
    ctx->pc = 0x26A7C0u;
    {
        const bool branch_taken_0x26a7c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7C0u;
            // 0x26a7c4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7c0) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A7C8u;
label_26a7c8:
    // 0x26a7c8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x26a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_26a7cc:
    // 0x26a7cc: 0x8844000f  lwl         $a0, 0xF($v0)
    ctx->pc = 0x26a7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26a7d0:
    // 0x26a7d0: 0x9844000c  lwr         $a0, 0xC($v0)
    ctx->pc = 0x26a7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_26a7d4:
    // 0x26a7d4: 0xc0990d8  jal         func_264360
label_26a7d8:
    if (ctx->pc == 0x26A7D8u) {
        ctx->pc = 0x26A7D8u;
            // 0x26a7d8: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->pc = 0x26A7DCu;
        goto label_26a7dc;
    }
    ctx->pc = 0x26A7D4u;
    SET_GPR_U32(ctx, 31, 0x26A7DCu);
    ctx->pc = 0x26A7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7D4u;
            // 0x26a7d8: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7DCu; }
        if (ctx->pc != 0x26A7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7DCu; }
        if (ctx->pc != 0x26A7DCu) { return; }
    }
    ctx->pc = 0x26A7DCu;
label_26a7dc:
    // 0x26a7dc: 0x26e58310  addiu       $a1, $s7, -0x7CF0
    ctx->pc = 0x26a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935312));
label_26a7e0:
    // 0x26a7e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26a7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a7e4:
    // 0x26a7e4: 0xc08b5ac  jal         func_22D6B0
label_26a7e8:
    if (ctx->pc == 0x26A7E8u) {
        ctx->pc = 0x26A7E8u;
            // 0x26a7e8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26A7ECu;
        goto label_26a7ec;
    }
    ctx->pc = 0x26A7E4u;
    SET_GPR_U32(ctx, 31, 0x26A7ECu);
    ctx->pc = 0x26A7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7E4u;
            // 0x26a7e8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7ECu; }
        if (ctx->pc != 0x26A7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7ECu; }
        if (ctx->pc != 0x26A7ECu) { return; }
    }
    ctx->pc = 0x26A7ECu;
label_26a7ec:
    // 0x26a7ec: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x26a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_26a7f0:
    // 0x26a7f0: 0x88440010  lwl         $a0, 0x10($v0)
    ctx->pc = 0x26a7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26a7f4:
    // 0x26a7f4: 0x9844000d  lwr         $a0, 0xD($v0)
    ctx->pc = 0x26a7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_26a7f8:
    // 0x26a7f8: 0xc0990d8  jal         func_264360
label_26a7fc:
    if (ctx->pc == 0x26A7FCu) {
        ctx->pc = 0x26A7FCu;
            // 0x26a7fc: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->pc = 0x26A800u;
        goto label_26a800;
    }
    ctx->pc = 0x26A7F8u;
    SET_GPR_U32(ctx, 31, 0x26A800u);
    ctx->pc = 0x26A7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7F8u;
            // 0x26a7fc: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A800u; }
        if (ctx->pc != 0x26A800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A800u; }
        if (ctx->pc != 0x26A800u) { return; }
    }
    ctx->pc = 0x26A800u;
label_26a800:
    // 0x26a800: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x26a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_26a804:
    // 0x26a804: 0x27c58330  addiu       $a1, $fp, -0x7CD0
    ctx->pc = 0x26a804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935344));
label_26a808:
    // 0x26a808: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26a808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a80c:
    // 0x26a80c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26a810:
    // 0x26a810: 0xc08b5ac  jal         func_22D6B0
label_26a814:
    if (ctx->pc == 0x26A814u) {
        ctx->pc = 0x26A814u;
            // 0x26a814: 0x8c6703e0  lw          $a3, 0x3E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 992)));
        ctx->pc = 0x26A818u;
        goto label_26a818;
    }
    ctx->pc = 0x26A810u;
    SET_GPR_U32(ctx, 31, 0x26A818u);
    ctx->pc = 0x26A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A810u;
            // 0x26a814: 0x8c6703e0  lw          $a3, 0x3E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A818u; }
        if (ctx->pc != 0x26A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A818u; }
        if (ctx->pc != 0x26A818u) { return; }
    }
    ctx->pc = 0x26A818u;
label_26a818:
    // 0x26a818: 0x8e250188  lw          $a1, 0x188($s1)
    ctx->pc = 0x26a818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_26a81c:
    // 0x26a81c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a820:
    // 0x26a820: 0xc09b032  jal         func_26C0C8
label_26a824:
    if (ctx->pc == 0x26A824u) {
        ctx->pc = 0x26A824u;
            // 0x26a824: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
        ctx->pc = 0x26A828u;
        goto label_26a828;
    }
    ctx->pc = 0x26A820u;
    SET_GPR_U32(ctx, 31, 0x26A828u);
    ctx->pc = 0x26A824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A820u;
            // 0x26a824: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C0C8u;
    if (runtime->hasFunction(0x26C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x26C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A828u; }
        if (ctx->pc != 0x26A828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C0C8_0x26c0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A828u; }
        if (ctx->pc != 0x26A828u) { return; }
    }
    ctx->pc = 0x26A828u;
label_26a828:
    // 0x26a828: 0x1000004c  b           . + 4 + (0x4C << 2)
label_26a82c:
    if (ctx->pc == 0x26A82Cu) {
        ctx->pc = 0x26A82Cu;
            // 0x26a82c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x26A830u;
        goto label_26a830;
    }
    ctx->pc = 0x26A828u;
    {
        const bool branch_taken_0x26a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A828u;
            // 0x26a82c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a828) {
            ctx->pc = 0x26A95Cu;
            goto label_26a95c;
        }
    }
    ctx->pc = 0x26A830u;
label_26a830:
    // 0x26a830: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26a830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_26a834:
    // 0x26a834: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26a834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_26a838:
    // 0x26a838: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x26a838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_26a83c:
    // 0x26a83c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_26a840:
    // 0x26a840: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x26a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_26a844:
    // 0x26a844: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26a848:
    // 0x26a848: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26a848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26a84c:
    // 0x26a84c: 0x2141823  subu        $v1, $s0, $s4
    ctx->pc = 0x26a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_26a850:
    // 0x26a850: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x26a850u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_26a854:
    // 0x26a854: 0x5e40ff64  bgtzl       $s2, . + 4 + (-0x9C << 2)
label_26a858:
    if (ctx->pc == 0x26A858u) {
        ctx->pc = 0x26A858u;
            // 0x26a858: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26A85Cu;
        goto label_26a85c;
    }
    ctx->pc = 0x26A854u;
    {
        const bool branch_taken_0x26a854 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x26a854) {
            ctx->pc = 0x26A858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A854u;
            // 0x26a858: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A5E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26a5e8;
        }
    }
    ctx->pc = 0x26A85Cu;
label_26a85c:
    // 0x26a85c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x26a85cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_26a860:
    // 0x26a860: 0x5e60ff4b  bgtzl       $s3, . + 4 + (-0xB5 << 2)
label_26a864:
    if (ctx->pc == 0x26A864u) {
        ctx->pc = 0x26A864u;
            // 0x26a864: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x26A868u;
        goto label_26a868;
    }
    ctx->pc = 0x26A860u;
    {
        const bool branch_taken_0x26a860 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x26a860) {
            ctx->pc = 0x26A864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A860u;
            // 0x26a864: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26a590;
        }
    }
    ctx->pc = 0x26A868u;
label_26a868:
    // 0x26a868: 0xc098ba8  jal         func_262EA0
label_26a86c:
    if (ctx->pc == 0x26A86Cu) {
        ctx->pc = 0x26A86Cu;
            // 0x26a86c: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x26A870u;
        goto label_26a870;
    }
    ctx->pc = 0x26A868u;
    SET_GPR_U32(ctx, 31, 0x26A870u);
    ctx->pc = 0x26A86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A868u;
            // 0x26a86c: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A870u; }
        if (ctx->pc != 0x26A870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A870u; }
        if (ctx->pc != 0x26A870u) { return; }
    }
    ctx->pc = 0x26A870u;
label_26a870:
    // 0x26a870: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_26a874:
    if (ctx->pc == 0x26A874u) {
        ctx->pc = 0x26A874u;
            // 0x26a874: 0x8e260188  lw          $a2, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x26A878u;
        goto label_26a878;
    }
    ctx->pc = 0x26A870u;
    {
        const bool branch_taken_0x26a870 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26a870) {
            ctx->pc = 0x26A874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A870u;
            // 0x26a874: 0x8e260188  lw          $a2, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A888u;
            goto label_26a888;
        }
    }
    ctx->pc = 0x26A878u;
label_26a878:
    // 0x26a878: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26a878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26a87c:
    // 0x26a87c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a880:
    // 0x26a880: 0x10000010  b           . + 4 + (0x10 << 2)
label_26a884:
    if (ctx->pc == 0x26A884u) {
        ctx->pc = 0x26A884u;
            // 0x26a884: 0x24a584b0  addiu       $a1, $a1, -0x7B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935728));
        ctx->pc = 0x26A888u;
        goto label_26a888;
    }
    ctx->pc = 0x26A880u;
    {
        const bool branch_taken_0x26a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A880u;
            // 0x26a884: 0x24a584b0  addiu       $a1, $a1, -0x7B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a880) {
            ctx->pc = 0x26A8C4u;
            goto label_26a8c4;
        }
    }
    ctx->pc = 0x26A888u;
label_26a888:
    // 0x26a888: 0xde2201a0  ld          $v0, 0x1A0($s1)
    ctx->pc = 0x26a888u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 416)));
label_26a88c:
    // 0x26a88c: 0x9cc403e4  lwu         $a0, 0x3E4($a2)
    ctx->pc = 0x26a88cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 996)));
label_26a890:
    // 0x26a890: 0xdfa30100  ld          $v1, 0x100($sp)
    ctx->pc = 0x26a890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_26a894:
    // 0x26a894: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x26a894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_26a898:
    // 0x26a898: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x26a898u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26a89c:
    // 0x26a89c: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
label_26a8a0:
    if (ctx->pc == 0x26A8A0u) {
        ctx->pc = 0x26A8A0u;
            // 0x26a8a0: 0x8cc203e8  lw          $v0, 0x3E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1000)));
        ctx->pc = 0x26A8A4u;
        goto label_26a8a4;
    }
    ctx->pc = 0x26A89Cu;
    {
        const bool branch_taken_0x26a89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a89c) {
            ctx->pc = 0x26A8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A89Cu;
            // 0x26a8a0: 0x8cc203e8  lw          $v0, 0x3E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1000)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A908u;
            goto label_26a908;
        }
    }
    ctx->pc = 0x26A8A4u;
label_26a8a4:
    // 0x26a8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a8a8:
    // 0x26a8a8: 0xc09b7ee  jal         func_26DFB8
label_26a8ac:
    if (ctx->pc == 0x26A8ACu) {
        ctx->pc = 0x26A8ACu;
            // 0x26a8ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26A8B0u;
        goto label_26a8b0;
    }
    ctx->pc = 0x26A8A8u;
    SET_GPR_U32(ctx, 31, 0x26A8B0u);
    ctx->pc = 0x26A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8A8u;
            // 0x26a8ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26DFB8u;
    if (runtime->hasFunction(0x26DFB8u)) {
        auto targetFn = runtime->lookupFunction(0x26DFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8B0u; }
        if (ctx->pc != 0x26A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026DFB8_0x26dfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8B0u; }
        if (ctx->pc != 0x26A8B0u) { return; }
    }
    ctx->pc = 0x26A8B0u;
label_26a8b0:
    // 0x26a8b0: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
label_26a8b4:
    if (ctx->pc == 0x26A8B4u) {
        ctx->pc = 0x26A8B4u;
            // 0x26a8b4: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x26A8B8u;
        goto label_26a8b8;
    }
    ctx->pc = 0x26A8B0u;
    {
        const bool branch_taken_0x26a8b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26a8b0) {
            ctx->pc = 0x26A8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8B0u;
            // 0x26a8b4: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A8D4u;
            goto label_26a8d4;
        }
    }
    ctx->pc = 0x26A8B8u;
label_26a8b8:
    // 0x26a8b8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26a8bc:
    // 0x26a8bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a8c0:
    // 0x26a8c0: 0x24a58500  addiu       $a1, $a1, -0x7B00
    ctx->pc = 0x26a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935808));
label_26a8c4:
    // 0x26a8c4: 0xc08b5ac  jal         func_22D6B0
label_26a8c8:
    if (ctx->pc == 0x26A8C8u) {
        ctx->pc = 0x26A8CCu;
        goto label_26a8cc;
    }
    ctx->pc = 0x26A8C4u;
    SET_GPR_U32(ctx, 31, 0x26A8CCu);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8CCu; }
        if (ctx->pc != 0x26A8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8CCu; }
        if (ctx->pc != 0x26A8CCu) { return; }
    }
    ctx->pc = 0x26A8CCu;
label_26a8cc:
    // 0x26a8cc: 0x10000023  b           . + 4 + (0x23 << 2)
label_26a8d0:
    if (ctx->pc == 0x26A8D0u) {
        ctx->pc = 0x26A8D0u;
            // 0x26a8d0: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x26A8D4u;
        goto label_26a8d4;
    }
    ctx->pc = 0x26A8CCu;
    {
        const bool branch_taken_0x26a8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8CCu;
            // 0x26a8d0: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8cc) {
            ctx->pc = 0x26A95Cu;
            goto label_26a95c;
        }
    }
    ctx->pc = 0x26A8D4u;
label_26a8d4:
    // 0x26a8d4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x26a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_26a8d8:
    // 0x26a8d8: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x26a8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_26a8dc:
    // 0x26a8dc: 0xc0980bc  jal         func_2602F0
label_26a8e0:
    if (ctx->pc == 0x26A8E0u) {
        ctx->pc = 0x26A8E0u;
            // 0x26a8e0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x26A8E4u;
        goto label_26a8e4;
    }
    ctx->pc = 0x26A8DCu;
    SET_GPR_U32(ctx, 31, 0x26A8E4u);
    ctx->pc = 0x26A8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8DCu;
            // 0x26a8e0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2602F0u;
    if (runtime->hasFunction(0x2602F0u)) {
        auto targetFn = runtime->lookupFunction(0x2602F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8E4u; }
        if (ctx->pc != 0x26A8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002602F0_0x2602f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8E4u; }
        if (ctx->pc != 0x26A8E4u) { return; }
    }
    ctx->pc = 0x26A8E4u;
label_26a8e4:
    // 0x26a8e4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x26a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_26a8e8:
    // 0x26a8e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26a8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26a8ec:
    // 0x26a8ec: 0x1040ff0e  beqz        $v0, . + 4 + (-0xF2 << 2)
label_26a8f0:
    if (ctx->pc == 0x26A8F0u) {
        ctx->pc = 0x26A8F0u;
            // 0x26a8f0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26A8F4u;
        goto label_26a8f4;
    }
    ctx->pc = 0x26A8ECu;
    {
        const bool branch_taken_0x26a8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8ECu;
            // 0x26a8f0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8ec) {
            ctx->pc = 0x26A528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26a528;
        }
    }
    ctx->pc = 0x26A8F4u;
label_26a8f4:
    // 0x26a8f4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a8f8:
    // 0x26a8f8: 0xc08b5ac  jal         func_22D6B0
label_26a8fc:
    if (ctx->pc == 0x26A8FCu) {
        ctx->pc = 0x26A8FCu;
            // 0x26a8fc: 0x24a58528  addiu       $a1, $a1, -0x7AD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935848));
        ctx->pc = 0x26A900u;
        goto label_26a900;
    }
    ctx->pc = 0x26A8F8u;
    SET_GPR_U32(ctx, 31, 0x26A900u);
    ctx->pc = 0x26A8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8F8u;
            // 0x26a8fc: 0x24a58528  addiu       $a1, $a1, -0x7AD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A900u; }
        if (ctx->pc != 0x26A900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A900u; }
        if (ctx->pc != 0x26A900u) { return; }
    }
    ctx->pc = 0x26A900u;
label_26a900:
    // 0x26a900: 0x10000016  b           . + 4 + (0x16 << 2)
label_26a904:
    if (ctx->pc == 0x26A904u) {
        ctx->pc = 0x26A904u;
            // 0x26a904: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26A908u;
        goto label_26a908;
    }
    ctx->pc = 0x26A900u;
    {
        const bool branch_taken_0x26a900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A900u;
            // 0x26a904: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a900) {
            ctx->pc = 0x26A95Cu;
            goto label_26a95c;
        }
    }
    ctx->pc = 0x26A908u;
label_26a908:
    // 0x26a908: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_26a90c:
    if (ctx->pc == 0x26A90Cu) {
        ctx->pc = 0x26A90Cu;
            // 0x26a90c: 0x8e250058  lw          $a1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x26A910u;
        goto label_26a910;
    }
    ctx->pc = 0x26A908u;
    {
        const bool branch_taken_0x26a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a908) {
            ctx->pc = 0x26A90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A908u;
            // 0x26a90c: 0x8e250058  lw          $a1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A940u;
            goto label_26a940;
        }
    }
    ctx->pc = 0x26A910u;
label_26a910:
    // 0x26a910: 0x10000012  b           . + 4 + (0x12 << 2)
label_26a914:
    if (ctx->pc == 0x26A914u) {
        ctx->pc = 0x26A914u;
            // 0x26a914: 0x2402ff37  addiu       $v0, $zero, -0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
        ctx->pc = 0x26A918u;
        goto label_26a918;
    }
    ctx->pc = 0x26A910u;
    {
        const bool branch_taken_0x26a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A910u;
            // 0x26a914: 0x2402ff37  addiu       $v0, $zero, -0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a910) {
            ctx->pc = 0x26A95Cu;
            goto label_26a95c;
        }
    }
    ctx->pc = 0x26A918u;
label_26a918:
    // 0x26a918: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a91c:
    // 0x26a91c: 0xc08b5ac  jal         func_22D6B0
label_26a920:
    if (ctx->pc == 0x26A920u) {
        ctx->pc = 0x26A920u;
            // 0x26a920: 0x24a584d0  addiu       $a1, $a1, -0x7B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935760));
        ctx->pc = 0x26A924u;
        goto label_26a924;
    }
    ctx->pc = 0x26A91Cu;
    SET_GPR_U32(ctx, 31, 0x26A924u);
    ctx->pc = 0x26A920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A91Cu;
            // 0x26a920: 0x24a584d0  addiu       $a1, $a1, -0x7B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A924u; }
        if (ctx->pc != 0x26A924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A924u; }
        if (ctx->pc != 0x26A924u) { return; }
    }
    ctx->pc = 0x26A924u;
label_26a924:
    // 0x26a924: 0x1000000d  b           . + 4 + (0xD << 2)
label_26a928:
    if (ctx->pc == 0x26A928u) {
        ctx->pc = 0x26A928u;
            // 0x26a928: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26A92Cu;
        goto label_26a92c;
    }
    ctx->pc = 0x26A924u;
    {
        const bool branch_taken_0x26a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A924u;
            // 0x26a928: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a924) {
            ctx->pc = 0x26A95Cu;
            goto label_26a95c;
        }
    }
    ctx->pc = 0x26A92Cu;
label_26a92c:
    // 0x26a92c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26a930:
    // 0x26a930: 0xc08b5ac  jal         func_22D6B0
label_26a934:
    if (ctx->pc == 0x26A934u) {
        ctx->pc = 0x26A934u;
            // 0x26a934: 0x24a584b0  addiu       $a1, $a1, -0x7B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935728));
        ctx->pc = 0x26A938u;
        goto label_26a938;
    }
    ctx->pc = 0x26A930u;
    SET_GPR_U32(ctx, 31, 0x26A938u);
    ctx->pc = 0x26A934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A930u;
            // 0x26a934: 0x24a584b0  addiu       $a1, $a1, -0x7B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A938u; }
        if (ctx->pc != 0x26A938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A938u; }
        if (ctx->pc != 0x26A938u) { return; }
    }
    ctx->pc = 0x26A938u;
label_26a938:
    // 0x26a938: 0x10000008  b           . + 4 + (0x8 << 2)
label_26a93c:
    if (ctx->pc == 0x26A93Cu) {
        ctx->pc = 0x26A93Cu;
            // 0x26a93c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x26A940u;
        goto label_26a940;
    }
    ctx->pc = 0x26A938u;
    {
        const bool branch_taken_0x26a938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A938u;
            // 0x26a93c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a938) {
            ctx->pc = 0x26A95Cu;
            goto label_26a95c;
        }
    }
    ctx->pc = 0x26A940u;
label_26a940:
    // 0x26a940: 0xc09b08c  jal         func_26C230
label_26a944:
    if (ctx->pc == 0x26A944u) {
        ctx->pc = 0x26A944u;
            // 0x26a944: 0x24c403e8  addiu       $a0, $a2, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1000));
        ctx->pc = 0x26A948u;
        goto label_26a948;
    }
    ctx->pc = 0x26A940u;
    SET_GPR_U32(ctx, 31, 0x26A948u);
    ctx->pc = 0x26A944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A940u;
            // 0x26a944: 0x24c403e8  addiu       $a0, $a2, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C230u;
    if (runtime->hasFunction(0x26C230u)) {
        auto targetFn = runtime->lookupFunction(0x26C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A948u; }
        if (ctx->pc != 0x26A948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C230_0x26c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A948u; }
        if (ctx->pc != 0x26A948u) { return; }
    }
    ctx->pc = 0x26A948u;
label_26a948:
    // 0x26a948: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26a94c:
    // 0x26a94c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x26a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26a950:
    // 0x26a950: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x26a950u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26a954:
    // 0x26a954: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x26a954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_26a958:
    // 0x26a958: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x26a958u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_26a95c:
    // 0x26a95c: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x26a95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_26a960:
    // 0x26a960: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x26a960u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_26a964:
    // 0x26a964: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x26a964u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_26a968:
    // 0x26a968: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x26a968u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_26a96c:
    // 0x26a96c: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x26a96cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_26a970:
    // 0x26a970: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x26a970u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_26a974:
    // 0x26a974: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x26a974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_26a978:
    // 0x26a978: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x26a978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_26a97c:
    // 0x26a97c: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x26a97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_26a980:
    // 0x26a980: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x26a980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_26a984:
    // 0x26a984: 0x3e00008  jr          $ra
label_26a988:
    if (ctx->pc == 0x26A988u) {
        ctx->pc = 0x26A988u;
            // 0x26a988: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x26A98Cu;
        goto label_26a98c;
    }
    ctx->pc = 0x26A984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A984u;
            // 0x26a988: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A98Cu;
label_26a98c:
    // 0x26a98c: 0x0  nop
    ctx->pc = 0x26a98cu;
    // NOP
label_26a990:
    // 0x26a990: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x26a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_26a994:
    // 0x26a994: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26a998:
    // 0x26a998: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x26a998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
label_26a99c:
    // 0x26a99c: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x26a99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
label_26a9a0:
    // 0x26a9a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26a9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a9a4:
    // 0x26a9a4: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x26a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
label_26a9a8:
    // 0x26a9a8: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x26a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
label_26a9ac:
    // 0x26a9ac: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x26a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
label_26a9b0:
    // 0x26a9b0: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x26a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
label_26a9b4:
    // 0x26a9b4: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x26a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
label_26a9b8:
    // 0x26a9b8: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x26a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
label_26a9bc:
    // 0x26a9bc: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x26a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
label_26a9c0:
    // 0x26a9c0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_26a9c4:
    if (ctx->pc == 0x26A9C4u) {
        ctx->pc = 0x26A9C4u;
            // 0x26a9c4: 0xffb00110  sd          $s0, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
        ctx->pc = 0x26A9C8u;
        goto label_26a9c8;
    }
    ctx->pc = 0x26A9C0u;
    {
        const bool branch_taken_0x26a9c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9C0u;
            // 0x26a9c4: 0xffb00110  sd          $s0, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9c0) {
            ctx->pc = 0x26A9D0u;
            goto label_26a9d0;
        }
    }
    ctx->pc = 0x26A9C8u;
label_26a9c8:
    // 0x26a9c8: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x26a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_26a9cc:
    // 0x26a9cc: 0xae4201a8  sw          $v0, 0x1A8($s2)
    ctx->pc = 0x26a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 2));
label_26a9d0:
    // 0x26a9d0: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x26a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_26a9d4:
    // 0x26a9d4: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x26a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_26a9d8:
    // 0x26a9d8: 0xc098ba8  jal         func_262EA0
label_26a9dc:
    if (ctx->pc == 0x26A9DCu) {
        ctx->pc = 0x26A9DCu;
            // 0x26a9dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26A9E0u;
        goto label_26a9e0;
    }
    ctx->pc = 0x26A9D8u;
    SET_GPR_U32(ctx, 31, 0x26A9E0u);
    ctx->pc = 0x26A9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9D8u;
            // 0x26a9dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9E0u; }
        if (ctx->pc != 0x26A9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9E0u; }
        if (ctx->pc != 0x26A9E0u) { return; }
    }
    ctx->pc = 0x26A9E0u;
label_26a9e0:
    // 0x26a9e0: 0x44000f8  bltz        $v0, . + 4 + (0xF8 << 2)
label_26a9e4:
    if (ctx->pc == 0x26A9E4u) {
        ctx->pc = 0x26A9E4u;
            // 0x26a9e4: 0xdfa20100  ld          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->pc = 0x26A9E8u;
        goto label_26a9e8;
    }
    ctx->pc = 0x26A9E0u;
    {
        const bool branch_taken_0x26a9e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9E0u;
            // 0x26a9e4: 0xdfa20100  ld          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9e0) {
            ctx->pc = 0x26ADC4u;
            goto label_26adc4;
        }
    }
    ctx->pc = 0x26A9E8u;
label_26a9e8:
    // 0x26a9e8: 0x8e440188  lw          $a0, 0x188($s2)
    ctx->pc = 0x26a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_26a9ec:
    // 0x26a9ec: 0xde4301a0  ld          $v1, 0x1A0($s2)
    ctx->pc = 0x26a9ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 416)));
label_26a9f0:
    // 0x26a9f0: 0x9c8503dc  lwu         $a1, 0x3DC($a0)
    ctx->pc = 0x26a9f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 988)));
label_26a9f4:
    // 0x26a9f4: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x26a9f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_26a9f8:
    // 0x26a9f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26a9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26a9fc:
    // 0x26a9fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_26aa00:
    if (ctx->pc == 0x26AA00u) {
        ctx->pc = 0x26AA00u;
            // 0x26aa00: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26AA04u;
        goto label_26aa04;
    }
    ctx->pc = 0x26A9FCu;
    {
        const bool branch_taken_0x26a9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9FCu;
            // 0x26aa00: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9fc) {
            ctx->pc = 0x26AA10u;
            goto label_26aa10;
        }
    }
    ctx->pc = 0x26AA04u;
label_26aa04:
    // 0x26aa04: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26aa08:
    // 0x26aa08: 0x100000fd  b           . + 4 + (0xFD << 2)
label_26aa0c:
    if (ctx->pc == 0x26AA0Cu) {
        ctx->pc = 0x26AA0Cu;
            // 0x26aa0c: 0x24a58580  addiu       $a1, $a1, -0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935936));
        ctx->pc = 0x26AA10u;
        goto label_26aa10;
    }
    ctx->pc = 0x26AA08u;
    {
        const bool branch_taken_0x26aa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA08u;
            // 0x26aa0c: 0x24a58580  addiu       $a1, $a1, -0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa08) {
            ctx->pc = 0x26AE00u;
            goto label_26ae00;
        }
    }
    ctx->pc = 0x26AA10u;
label_26aa10:
    // 0x26aa10: 0xc08b614  jal         func_22D850
label_26aa14:
    if (ctx->pc == 0x26AA14u) {
        ctx->pc = 0x26AA18u;
        goto label_26aa18;
    }
    ctx->pc = 0x26AA10u;
    SET_GPR_U32(ctx, 31, 0x26AA18u);
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA18u; }
        if (ctx->pc != 0x26AA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA18u; }
        if (ctx->pc != 0x26AA18u) { return; }
    }
    ctx->pc = 0x26AA18u;
label_26aa18:
    // 0x26aa18: 0x8e4401a8  lw          $a0, 0x1A8($s2)
    ctx->pc = 0x26aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_26aa1c:
    // 0x26aa1c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x26aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_26aa20:
    // 0x26aa20: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x26aa20u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_26aa24:
    // 0x26aa24: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_26aa28:
    if (ctx->pc == 0x26AA28u) {
        ctx->pc = 0x26AA28u;
            // 0x26aa28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x26AA2Cu;
        goto label_26aa2c;
    }
    ctx->pc = 0x26AA24u;
    {
        const bool branch_taken_0x26aa24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aa24) {
            ctx->pc = 0x26AA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA24u;
            // 0x26aa28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AA2Cu;
            goto label_26aa2c;
        }
    }
    ctx->pc = 0x26AA2Cu;
label_26aa2c:
    // 0x26aa2c: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x26aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_26aa30:
    // 0x26aa30: 0x2810  mfhi        $a1
    ctx->pc = 0x26aa30u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26aa34:
    // 0x26aa34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_26aa38:
    // 0x26aa38: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26aa38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_26aa3c:
    // 0x26aa3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26aa40:
    if (ctx->pc == 0x26AA40u) {
        ctx->pc = 0x26AA40u;
            // 0x26aa40: 0xae4401a8  sw          $a0, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 4));
        ctx->pc = 0x26AA44u;
        goto label_26aa44;
    }
    ctx->pc = 0x26AA3Cu;
    {
        const bool branch_taken_0x26aa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA3Cu;
            // 0x26aa40: 0xae4401a8  sw          $a0, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa3c) {
            ctx->pc = 0x26AA6Cu;
            goto label_26aa6c;
        }
    }
    ctx->pc = 0x26AA44u;
label_26aa44:
    // 0x26aa44: 0xc08b614  jal         func_22D850
label_26aa48:
    if (ctx->pc == 0x26AA48u) {
        ctx->pc = 0x26AA4Cu;
        goto label_26aa4c;
    }
    ctx->pc = 0x26AA44u;
    SET_GPR_U32(ctx, 31, 0x26AA4Cu);
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA4Cu; }
        if (ctx->pc != 0x26AA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA4Cu; }
        if (ctx->pc != 0x26AA4Cu) { return; }
    }
    ctx->pc = 0x26AA4Cu;
label_26aa4c:
    // 0x26aa4c: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x26aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_26aa50:
    // 0x26aa50: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x26aa50u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_26aa54:
    // 0x26aa54: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_26aa58:
    if (ctx->pc == 0x26AA58u) {
        ctx->pc = 0x26AA58u;
            // 0x26aa58: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x26AA5Cu;
        goto label_26aa5c;
    }
    ctx->pc = 0x26AA54u;
    {
        const bool branch_taken_0x26aa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aa54) {
            ctx->pc = 0x26AA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA54u;
            // 0x26aa58: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AA5Cu;
            goto label_26aa5c;
        }
    }
    ctx->pc = 0x26AA5Cu;
label_26aa5c:
    // 0x26aa5c: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x26aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_26aa60:
    // 0x26aa60: 0x2010  mfhi        $a0
    ctx->pc = 0x26aa60u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26aa64:
    // 0x26aa64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_26aa68:
    // 0x26aa68: 0xae4201a8  sw          $v0, 0x1A8($s2)
    ctx->pc = 0x26aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 2));
label_26aa6c:
    // 0x26aa6c: 0x8e440188  lw          $a0, 0x188($s2)
    ctx->pc = 0x26aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_26aa70:
    // 0x26aa70: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x26aa70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_26aa74:
    // 0x26aa74: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x26aa74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_26aa78:
    // 0x26aa78: 0xde4201a0  ld          $v0, 0x1A0($s2)
    ctx->pc = 0x26aa78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 416)));
label_26aa7c:
    // 0x26aa7c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26aa7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_26aa80:
    // 0x26aa80: 0x9c8303dc  lwu         $v1, 0x3DC($a0)
    ctx->pc = 0x26aa80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 988)));
label_26aa84:
    // 0x26aa84: 0x26108250  addiu       $s0, $s0, -0x7DB0
    ctx->pc = 0x26aa84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935120));
label_26aa88:
    // 0x26aa88: 0xdfa40100  ld          $a0, 0x100($sp)
    ctx->pc = 0x26aa88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_26aa8c:
    // 0x26aa8c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x26aa8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_26aa90:
    // 0x26aa90: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x26aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_26aa94:
    // 0x26aa94: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x26aa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_26aa98:
    // 0x26aa98: 0x8e4301a8  lw          $v1, 0x1A8($s2)
    ctx->pc = 0x26aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_26aa9c:
    // 0x26aa9c: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x26aa9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
label_26aaa0:
    // 0x26aaa0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x26aaa0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_26aaa4:
    // 0x26aaa4: 0x88a40013  lwl         $a0, 0x13($a1)
    ctx->pc = 0x26aaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26aaa8:
    // 0x26aaa8: 0x98a40010  lwr         $a0, 0x10($a1)
    ctx->pc = 0x26aaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_26aaac:
    // 0x26aaac: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x26aaacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_26aab0:
    // 0x26aab0: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x26aab0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_26aab4:
    // 0x26aab4: 0xc0990d8  jal         func_264360
label_26aab8:
    if (ctx->pc == 0x26AAB8u) {
        ctx->pc = 0x26AAB8u;
            // 0x26aab8: 0x862024  and         $a0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->pc = 0x26AABCu;
        goto label_26aabc;
    }
    ctx->pc = 0x26AAB4u;
    SET_GPR_U32(ctx, 31, 0x26AABCu);
    ctx->pc = 0x26AAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAB4u;
            // 0x26aab8: 0x862024  and         $a0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AABCu; }
        if (ctx->pc != 0x26AABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AABCu; }
        if (ctx->pc != 0x26AABCu) { return; }
    }
    ctx->pc = 0x26AABCu;
label_26aabc:
    // 0x26aabc: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x26aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_26aac0:
    // 0x26aac0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26aac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26aac4:
    // 0x26aac4: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x26aac4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_26aac8:
    // 0x26aac8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26aac8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26aacc:
    // 0x26aacc: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26aaccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26aad0:
    // 0x26aad0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26aad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_26aad4:
    // 0x26aad4: 0xc08b60c  jal         func_22D830
label_26aad8:
    if (ctx->pc == 0x26AAD8u) {
        ctx->pc = 0x26AAD8u;
            // 0x26aad8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26AADCu;
        goto label_26aadc;
    }
    ctx->pc = 0x26AAD4u;
    SET_GPR_U32(ctx, 31, 0x26AADCu);
    ctx->pc = 0x26AAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAD4u;
            // 0x26aad8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AADCu; }
        if (ctx->pc != 0x26AADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AADCu; }
        if (ctx->pc != 0x26AADCu) { return; }
    }
    ctx->pc = 0x26AADCu;
label_26aadc:
    // 0x26aadc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26aadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26aae0:
    // 0x26aae0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26aae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26aae4:
    // 0x26aae4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x26aae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26aae8:
    // 0x26aae8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26aaec:
    // 0x26aaec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26aaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26aaf0:
    // 0x26aaf0: 0xc08b5ac  jal         func_22D6B0
label_26aaf4:
    if (ctx->pc == 0x26AAF4u) {
        ctx->pc = 0x26AAF4u;
            // 0x26aaf4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26AAF8u;
        goto label_26aaf8;
    }
    ctx->pc = 0x26AAF0u;
    SET_GPR_U32(ctx, 31, 0x26AAF8u);
    ctx->pc = 0x26AAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAF0u;
            // 0x26aaf4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AAF8u; }
        if (ctx->pc != 0x26AAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AAF8u; }
        if (ctx->pc != 0x26AAF8u) { return; }
    }
    ctx->pc = 0x26AAF8u;
label_26aaf8:
    // 0x26aaf8: 0x1a6000ae  blez        $s3, . + 4 + (0xAE << 2)
label_26aafc:
    if (ctx->pc == 0x26AAFCu) {
        ctx->pc = 0x26AB00u;
        goto label_26ab00;
    }
    ctx->pc = 0x26AAF8u;
    {
        const bool branch_taken_0x26aaf8 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x26aaf8) {
            ctx->pc = 0x26ADB4u;
            goto label_26adb4;
        }
    }
    ctx->pc = 0x26AB00u;
label_26ab00:
    // 0x26ab00: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x26ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_26ab04:
    // 0x26ab04: 0x0  nop
    ctx->pc = 0x26ab04u;
    // NOP
label_26ab08:
    // 0x26ab08: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x26ab08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_26ab0c:
    // 0x26ab0c: 0xc098092  jal         func_260248
label_26ab10:
    if (ctx->pc == 0x26AB10u) {
        ctx->pc = 0x26AB10u;
            // 0x26ab10: 0x8e46001c  lw          $a2, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x26AB14u;
        goto label_26ab14;
    }
    ctx->pc = 0x26AB0Cu;
    SET_GPR_U32(ctx, 31, 0x26AB14u);
    ctx->pc = 0x26AB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB0Cu;
            // 0x26ab10: 0x8e46001c  lw          $a2, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260248u;
    if (runtime->hasFunction(0x260248u)) {
        auto targetFn = runtime->lookupFunction(0x260248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB14u; }
        if (ctx->pc != 0x26AB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260248_0x260248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB14u; }
        if (ctx->pc != 0x26AB14u) { return; }
    }
    ctx->pc = 0x26AB14u;
label_26ab14:
    // 0x26ab14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ab14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ab18:
    // 0x26ab18: 0x62000c3  bltz        $s1, . + 4 + (0xC3 << 2)
label_26ab1c:
    if (ctx->pc == 0x26AB1Cu) {
        ctx->pc = 0x26AB1Cu;
            // 0x26ab1c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26AB20u;
        goto label_26ab20;
    }
    ctx->pc = 0x26AB18u;
    {
        const bool branch_taken_0x26ab18 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x26AB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB18u;
            // 0x26ab1c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab18) {
            ctx->pc = 0x26AE28u;
            goto label_26ae28;
        }
    }
    ctx->pc = 0x26AB20u;
label_26ab20:
    // 0x26ab20: 0xc04332c  jal         func_10CCB0
label_26ab24:
    if (ctx->pc == 0x26AB24u) {
        ctx->pc = 0x26AB24u;
            // 0x26ab24: 0x8e4401b0  lw          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->pc = 0x26AB28u;
        goto label_26ab28;
    }
    ctx->pc = 0x26AB20u;
    SET_GPR_U32(ctx, 31, 0x26AB28u);
    ctx->pc = 0x26AB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB20u;
            // 0x26ab24: 0x8e4401b0  lw          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB28u; }
        if (ctx->pc != 0x26AB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB28u; }
        if (ctx->pc != 0x26AB28u) { return; }
    }
    ctx->pc = 0x26AB28u;
label_26ab28:
    // 0x26ab28: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x26ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_26ab2c:
    // 0x26ab2c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_26ab30:
    if (ctx->pc == 0x26AB30u) {
        ctx->pc = 0x26AB30u;
            // 0x26ab30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26AB34u;
        goto label_26ab34;
    }
    ctx->pc = 0x26AB2Cu;
    {
        const bool branch_taken_0x26ab2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26AB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB2Cu;
            // 0x26ab30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab2c) {
            ctx->pc = 0x26AB3Cu;
            goto label_26ab3c;
        }
    }
    ctx->pc = 0x26AB34u;
label_26ab34:
    // 0x26ab34: 0xc09a536  jal         func_2694D8
label_26ab38:
    if (ctx->pc == 0x26AB38u) {
        ctx->pc = 0x26AB38u;
            // 0x26ab38: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26AB3Cu;
        goto label_26ab3c;
    }
    ctx->pc = 0x26AB34u;
    SET_GPR_U32(ctx, 31, 0x26AB3Cu);
    ctx->pc = 0x26AB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB34u;
            // 0x26ab38: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2694D8u;
    if (runtime->hasFunction(0x2694D8u)) {
        auto targetFn = runtime->lookupFunction(0x2694D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB3Cu; }
        if (ctx->pc != 0x26AB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002694D8_0x2694d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB3Cu; }
        if (ctx->pc != 0x26AB3Cu) { return; }
    }
    ctx->pc = 0x26AB3Cu;
label_26ab3c:
    // 0x26ab3c: 0x1a20009a  blez        $s1, . + 4 + (0x9A << 2)
label_26ab40:
    if (ctx->pc == 0x26AB40u) {
        ctx->pc = 0x26AB40u;
            // 0x26ab40: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x26AB44u;
        goto label_26ab44;
    }
    ctx->pc = 0x26AB3Cu;
    {
        const bool branch_taken_0x26ab3c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x26AB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB3Cu;
            // 0x26ab40: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab3c) {
            ctx->pc = 0x26ADA8u;
            goto label_26ada8;
        }
    }
    ctx->pc = 0x26AB44u;
label_26ab44:
    // 0x26ab44: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x26ab44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_26ab48:
    // 0x26ab48: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x26ab48u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
label_26ab4c:
    // 0x26ab4c: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x26ab4cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_26ab50:
    // 0x26ab50: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x26ab50u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
label_26ab54:
    // 0x26ab54: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x26ab54u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_26ab58:
    // 0x26ab58: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26ab58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_26ab5c:
    // 0x26ab5c: 0x0  nop
    ctx->pc = 0x26ab5cu;
    // NOP
label_26ab60:
    // 0x26ab60: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x26ab60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ab64:
    // 0x26ab64: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26ab68:
    // 0x26ab68: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x26ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_26ab6c:
    // 0x26ab6c: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x26ab6cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_26ab70:
    // 0x26ab70: 0x24a5000e  addiu       $a1, $a1, 0xE
    ctx->pc = 0x26ab70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_26ab74:
    // 0x26ab74: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x26ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_26ab78:
    // 0x26ab78: 0xae450034  sw          $a1, 0x34($s2)
    ctx->pc = 0x26ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 5));
label_26ab7c:
    // 0x26ab7c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x26ab7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_26ab80:
    // 0x26ab80: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x26ab80u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_26ab84:
    // 0x26ab84: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x26ab84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_26ab88:
    // 0x26ab88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26ab8c:
    // 0x26ab8c: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x26ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_26ab90:
    // 0x26ab90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26ab94:
    // 0x26ab94: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x26ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_26ab98:
    // 0x26ab98: 0xae440038  sw          $a0, 0x38($s2)
    ctx->pc = 0x26ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
label_26ab9c:
    // 0x26ab9c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x26ab9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_26aba0:
    // 0x26aba0: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26aba0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_26aba4:
    // 0x26aba4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x26aba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_26aba8:
    // 0x26aba8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26abac:
    // 0x26abac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26abb0:
    // 0x26abb0: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x26abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
label_26abb4:
    // 0x26abb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26abb8:
    // 0x26abb8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x26abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_26abbc:
    // 0x26abbc: 0xc09a476  jal         func_2691D8
label_26abc0:
    if (ctx->pc == 0x26ABC0u) {
        ctx->pc = 0x26ABC0u;
            // 0x26abc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26ABC4u;
        goto label_26abc4;
    }
    ctx->pc = 0x26ABBCu;
    SET_GPR_U32(ctx, 31, 0x26ABC4u);
    ctx->pc = 0x26ABC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABBCu;
            // 0x26abc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2691D8u;
    if (runtime->hasFunction(0x2691D8u)) {
        auto targetFn = runtime->lookupFunction(0x2691D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABC4u; }
        if (ctx->pc != 0x26ABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002691D8_0x2691d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABC4u; }
        if (ctx->pc != 0x26ABC4u) { return; }
    }
    ctx->pc = 0x26ABC4u;
label_26abc4:
    // 0x26abc4: 0x5440006d  bnel        $v0, $zero, . + 4 + (0x6D << 2)
label_26abc8:
    if (ctx->pc == 0x26ABC8u) {
        ctx->pc = 0x26ABC8u;
            // 0x26abc8: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26ABCCu;
        goto label_26abcc;
    }
    ctx->pc = 0x26ABC4u;
    {
        const bool branch_taken_0x26abc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26abc4) {
            ctx->pc = 0x26ABC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABC4u;
            // 0x26abc8: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AD7Cu;
            goto label_26ad7c;
        }
    }
    ctx->pc = 0x26ABCCu;
label_26abcc:
    // 0x26abcc: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x26abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_26abd0:
    // 0x26abd0: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x26abd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_26abd4:
    // 0x26abd4: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x26abd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_26abd8:
    // 0x26abd8: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26abd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26abdc:
    // 0x26abdc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26abdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_26abe0:
    // 0x26abe0: 0xc08b60c  jal         func_22D830
label_26abe4:
    if (ctx->pc == 0x26ABE4u) {
        ctx->pc = 0x26ABE4u;
            // 0x26abe4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26ABE8u;
        goto label_26abe8;
    }
    ctx->pc = 0x26ABE0u;
    SET_GPR_U32(ctx, 31, 0x26ABE8u);
    ctx->pc = 0x26ABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABE0u;
            // 0x26abe4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABE8u; }
        if (ctx->pc != 0x26ABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABE8u; }
        if (ctx->pc != 0x26ABE8u) { return; }
    }
    ctx->pc = 0x26ABE8u;
label_26abe8:
    // 0x26abe8: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x26abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_26abec:
    // 0x26abec: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x26abecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_26abf0:
    // 0x26abf0: 0xc09b218  jal         func_26C860
label_26abf4:
    if (ctx->pc == 0x26ABF4u) {
        ctx->pc = 0x26ABF4u;
            // 0x26abf4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->pc = 0x26ABF8u;
        goto label_26abf8;
    }
    ctx->pc = 0x26ABF0u;
    SET_GPR_U32(ctx, 31, 0x26ABF8u);
    ctx->pc = 0x26ABF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABF0u;
            // 0x26abf4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C860u;
    if (runtime->hasFunction(0x26C860u)) {
        auto targetFn = runtime->lookupFunction(0x26C860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABF8u; }
        if (ctx->pc != 0x26ABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C860_0x26c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABF8u; }
        if (ctx->pc != 0x26ABF8u) { return; }
    }
    ctx->pc = 0x26ABF8u;
label_26abf8:
    // 0x26abf8: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
label_26abfc:
    if (ctx->pc == 0x26ABFCu) {
        ctx->pc = 0x26ABFCu;
            // 0x26abfc: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26AC00u;
        goto label_26ac00;
    }
    ctx->pc = 0x26ABF8u;
    {
        const bool branch_taken_0x26abf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26abf8) {
            ctx->pc = 0x26ABFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABF8u;
            // 0x26abfc: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AD7Cu;
            goto label_26ad7c;
        }
    }
    ctx->pc = 0x26AC00u;
label_26ac00:
    // 0x26ac00: 0x80440002  lb          $a0, 0x2($v0)
    ctx->pc = 0x26ac00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_26ac04:
    // 0x26ac04: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26ac08:
    // 0x26ac08: 0x14820024  bne         $a0, $v0, . + 4 + (0x24 << 2)
label_26ac0c:
    if (ctx->pc == 0x26AC0Cu) {
        ctx->pc = 0x26AC0Cu;
            // 0x26ac0c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x26AC10u;
        goto label_26ac10;
    }
    ctx->pc = 0x26AC08u;
    {
        const bool branch_taken_0x26ac08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26AC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC08u;
            // 0x26ac0c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac08) {
            ctx->pc = 0x26AC9Cu;
            goto label_26ac9c;
        }
    }
    ctx->pc = 0x26AC10u;
label_26ac10:
    // 0x26ac10: 0x26c585d0  addiu       $a1, $s6, -0x7A30
    ctx->pc = 0x26ac10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936016));
label_26ac14:
    // 0x26ac14: 0xc08b5ac  jal         func_22D6B0
label_26ac18:
    if (ctx->pc == 0x26AC18u) {
        ctx->pc = 0x26AC18u;
            // 0x26ac18: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26AC1Cu;
        goto label_26ac1c;
    }
    ctx->pc = 0x26AC14u;
    SET_GPR_U32(ctx, 31, 0x26AC1Cu);
    ctx->pc = 0x26AC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC14u;
            // 0x26ac18: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC1Cu; }
        if (ctx->pc != 0x26AC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC1Cu; }
        if (ctx->pc != 0x26AC1Cu) { return; }
    }
    ctx->pc = 0x26AC1Cu;
label_26ac1c:
    // 0x26ac1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26ac20:
    // 0x26ac20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ac20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ac24:
    // 0x26ac24: 0xc049cb6  jal         func_1272D8
label_26ac28:
    if (ctx->pc == 0x26AC28u) {
        ctx->pc = 0x26AC28u;
            // 0x26ac28: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26AC2Cu;
        goto label_26ac2c;
    }
    ctx->pc = 0x26AC24u;
    SET_GPR_U32(ctx, 31, 0x26AC2Cu);
    ctx->pc = 0x26AC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC24u;
            // 0x26ac28: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC2Cu; }
        if (ctx->pc != 0x26AC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC2Cu; }
        if (ctx->pc != 0x26AC2Cu) { return; }
    }
    ctx->pc = 0x26AC2Cu;
label_26ac2c:
    // 0x26ac2c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x26ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_26ac30:
    // 0x26ac30: 0x90640005  lbu         $a0, 0x5($v1)
    ctx->pc = 0x26ac30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_26ac34:
    // 0x26ac34: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x26ac34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_26ac38:
    // 0x26ac38: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26ac38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26ac3c:
    // 0x26ac3c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26ac3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_26ac40:
    // 0x26ac40: 0xc08b60c  jal         func_22D830
label_26ac44:
    if (ctx->pc == 0x26AC44u) {
        ctx->pc = 0x26AC44u;
            // 0x26ac44: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26AC48u;
        goto label_26ac48;
    }
    ctx->pc = 0x26AC40u;
    SET_GPR_U32(ctx, 31, 0x26AC48u);
    ctx->pc = 0x26AC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC40u;
            // 0x26ac44: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC48u; }
        if (ctx->pc != 0x26AC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC48u; }
        if (ctx->pc != 0x26AC48u) { return; }
    }
    ctx->pc = 0x26AC48u;
label_26ac48:
    // 0x26ac48: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x26ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_26ac4c:
    // 0x26ac4c: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x26ac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_26ac50:
    // 0x26ac50: 0xc09b218  jal         func_26C860
label_26ac54:
    if (ctx->pc == 0x26AC54u) {
        ctx->pc = 0x26AC54u;
            // 0x26ac54: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->pc = 0x26AC58u;
        goto label_26ac58;
    }
    ctx->pc = 0x26AC50u;
    SET_GPR_U32(ctx, 31, 0x26AC58u);
    ctx->pc = 0x26AC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC50u;
            // 0x26ac54: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C860u;
    if (runtime->hasFunction(0x26C860u)) {
        auto targetFn = runtime->lookupFunction(0x26C860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC58u; }
        if (ctx->pc != 0x26AC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C860_0x26c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC58u; }
        if (ctx->pc != 0x26AC58u) { return; }
    }
    ctx->pc = 0x26AC58u;
label_26ac58:
    // 0x26ac58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26ac5c:
    if (ctx->pc == 0x26AC5Cu) {
        ctx->pc = 0x26AC5Cu;
            // 0x26ac5c: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x26AC60u;
        goto label_26ac60;
    }
    ctx->pc = 0x26AC58u;
    {
        const bool branch_taken_0x26ac58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC58u;
            // 0x26ac5c: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac58) {
            ctx->pc = 0x26AC7Cu;
            goto label_26ac7c;
        }
    }
    ctx->pc = 0x26AC60u;
label_26ac60:
    // 0x26ac60: 0x80460001  lb          $a2, 0x1($v0)
    ctx->pc = 0x26ac60u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_26ac64:
    // 0x26ac64: 0xc09b4bc  jal         func_26D2F0
label_26ac68:
    if (ctx->pc == 0x26AC68u) {
        ctx->pc = 0x26AC68u;
            // 0x26ac68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26AC6Cu;
        goto label_26ac6c;
    }
    ctx->pc = 0x26AC64u;
    SET_GPR_U32(ctx, 31, 0x26AC6Cu);
    ctx->pc = 0x26AC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC64u;
            // 0x26ac68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D2F0u;
    if (runtime->hasFunction(0x26D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x26D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC6Cu; }
        if (ctx->pc != 0x26AC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D2F0_0x26d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC6Cu; }
        if (ctx->pc != 0x26AC6Cu) { return; }
    }
    ctx->pc = 0x26AC6Cu;
label_26ac6c:
    // 0x26ac6c: 0x27c582d8  addiu       $a1, $fp, -0x7D28
    ctx->pc = 0x26ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935256));
label_26ac70:
    // 0x26ac70: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26ac74:
    // 0x26ac74: 0xc08b5ac  jal         func_22D6B0
label_26ac78:
    if (ctx->pc == 0x26AC78u) {
        ctx->pc = 0x26AC78u;
            // 0x26ac78: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26AC7Cu;
        goto label_26ac7c;
    }
    ctx->pc = 0x26AC74u;
    SET_GPR_U32(ctx, 31, 0x26AC7Cu);
    ctx->pc = 0x26AC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC74u;
            // 0x26ac78: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC7Cu; }
        if (ctx->pc != 0x26AC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC7Cu; }
        if (ctx->pc != 0x26AC7Cu) { return; }
    }
    ctx->pc = 0x26AC7Cu;
label_26ac7c:
    // 0x26ac7c: 0xc09b4cc  jal         func_26D330
label_26ac80:
    if (ctx->pc == 0x26AC80u) {
        ctx->pc = 0x26AC80u;
            // 0x26ac80: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->pc = 0x26AC84u;
        goto label_26ac84;
    }
    ctx->pc = 0x26AC7Cu;
    SET_GPR_U32(ctx, 31, 0x26AC84u);
    ctx->pc = 0x26AC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC7Cu;
            // 0x26ac80: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC84u; }
        if (ctx->pc != 0x26AC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC84u; }
        if (ctx->pc != 0x26AC84u) { return; }
    }
    ctx->pc = 0x26AC84u;
label_26ac84:
    // 0x26ac84: 0x8e4501b8  lw          $a1, 0x1B8($s2)
    ctx->pc = 0x26ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_26ac88:
    // 0x26ac88: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x26ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
label_26ac8c:
    // 0x26ac8c: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x26ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
label_26ac90:
    // 0x26ac90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26ac90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_26ac94:
    // 0x26ac94: 0x10000060  b           . + 4 + (0x60 << 2)
label_26ac98:
    if (ctx->pc == 0x26AC98u) {
        ctx->pc = 0x26AC98u;
            // 0x26ac98: 0x2402ff35  addiu       $v0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x26AC9Cu;
        goto label_26ac9c;
    }
    ctx->pc = 0x26AC94u;
    {
        const bool branch_taken_0x26ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC94u;
            // 0x26ac98: 0x2402ff35  addiu       $v0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac94) {
            ctx->pc = 0x26AE18u;
            goto label_26ae18;
        }
    }
    ctx->pc = 0x26AC9Cu;
label_26ac9c:
    // 0x26ac9c: 0x54820037  bnel        $a0, $v0, . + 4 + (0x37 << 2)
label_26aca0:
    if (ctx->pc == 0x26ACA0u) {
        ctx->pc = 0x26ACA0u;
            // 0x26aca0: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26ACA4u;
        goto label_26aca4;
    }
    ctx->pc = 0x26AC9Cu;
    {
        const bool branch_taken_0x26ac9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ac9c) {
            ctx->pc = 0x26ACA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC9Cu;
            // 0x26aca0: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AD7Cu;
            goto label_26ad7c;
        }
    }
    ctx->pc = 0x26ACA4u;
label_26aca4:
    // 0x26aca4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x26aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_26aca8:
    // 0x26aca8: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x26aca8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_26acac:
    // 0x26acac: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x26acacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_26acb0:
    // 0x26acb0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26acb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26acb4:
    // 0x26acb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26acb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_26acb8:
    // 0x26acb8: 0xc08b60c  jal         func_22D830
label_26acbc:
    if (ctx->pc == 0x26ACBCu) {
        ctx->pc = 0x26ACBCu;
            // 0x26acbc: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26ACC0u;
        goto label_26acc0;
    }
    ctx->pc = 0x26ACB8u;
    SET_GPR_U32(ctx, 31, 0x26ACC0u);
    ctx->pc = 0x26ACBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACB8u;
            // 0x26acbc: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACC0u; }
        if (ctx->pc != 0x26ACC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACC0u; }
        if (ctx->pc != 0x26ACC0u) { return; }
    }
    ctx->pc = 0x26ACC0u;
label_26acc0:
    // 0x26acc0: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x26acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_26acc4:
    // 0x26acc4: 0xc09b13e  jal         func_26C4F8
label_26acc8:
    if (ctx->pc == 0x26ACC8u) {
        ctx->pc = 0x26ACC8u;
            // 0x26acc8: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x26ACCCu;
        goto label_26accc;
    }
    ctx->pc = 0x26ACC4u;
    SET_GPR_U32(ctx, 31, 0x26ACCCu);
    ctx->pc = 0x26ACC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACC4u;
            // 0x26acc8: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C4F8u;
    if (runtime->hasFunction(0x26C4F8u)) {
        auto targetFn = runtime->lookupFunction(0x26C4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACCCu; }
        if (ctx->pc != 0x26ACCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C4F8_0x26c4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACCCu; }
        if (ctx->pc != 0x26ACCCu) { return; }
    }
    ctx->pc = 0x26ACCCu;
label_26accc:
    // 0x26accc: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_26acd0:
    if (ctx->pc == 0x26ACD0u) {
        ctx->pc = 0x26ACD0u;
            // 0x26acd0: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26ACD4u;
        goto label_26acd4;
    }
    ctx->pc = 0x26ACCCu;
    {
        const bool branch_taken_0x26accc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26accc) {
            ctx->pc = 0x26ACD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACCCu;
            // 0x26acd0: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AD7Cu;
            goto label_26ad7c;
        }
    }
    ctx->pc = 0x26ACD4u;
label_26acd4:
    // 0x26acd4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x26acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_26acd8:
    // 0x26acd8: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x26acd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_26acdc:
    // 0x26acdc: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x26acdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_26ace0:
    // 0x26ace0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26ace0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_26ace4:
    // 0x26ace4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26ace4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_26ace8:
    // 0x26ace8: 0xc08b60c  jal         func_22D830
label_26acec:
    if (ctx->pc == 0x26ACECu) {
        ctx->pc = 0x26ACECu;
            // 0x26acec: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x26ACF0u;
        goto label_26acf0;
    }
    ctx->pc = 0x26ACE8u;
    SET_GPR_U32(ctx, 31, 0x26ACF0u);
    ctx->pc = 0x26ACECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACE8u;
            // 0x26acec: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACF0u; }
        if (ctx->pc != 0x26ACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACF0u; }
        if (ctx->pc != 0x26ACF0u) { return; }
    }
    ctx->pc = 0x26ACF0u;
label_26acf0:
    // 0x26acf0: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x26acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_26acf4:
    // 0x26acf4: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x26acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_26acf8:
    // 0x26acf8: 0xc09b2a4  jal         func_26CA90
label_26acfc:
    if (ctx->pc == 0x26ACFCu) {
        ctx->pc = 0x26ACFCu;
            // 0x26acfc: 0x8e460188  lw          $a2, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->pc = 0x26AD00u;
        goto label_26ad00;
    }
    ctx->pc = 0x26ACF8u;
    SET_GPR_U32(ctx, 31, 0x26AD00u);
    ctx->pc = 0x26ACFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACF8u;
            // 0x26acfc: 0x8e460188  lw          $a2, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA90u;
    if (runtime->hasFunction(0x26CA90u)) {
        auto targetFn = runtime->lookupFunction(0x26CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD00u; }
        if (ctx->pc != 0x26AD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA90_0x26ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD00u; }
        if (ctx->pc != 0x26AD00u) { return; }
    }
    ctx->pc = 0x26AD00u;
label_26ad00:
    // 0x26ad00: 0xc098ba8  jal         func_262EA0
label_26ad04:
    if (ctx->pc == 0x26AD04u) {
        ctx->pc = 0x26AD04u;
            // 0x26ad04: 0x264401a0  addiu       $a0, $s2, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
        ctx->pc = 0x26AD08u;
        goto label_26ad08;
    }
    ctx->pc = 0x26AD00u;
    SET_GPR_U32(ctx, 31, 0x26AD08u);
    ctx->pc = 0x26AD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD00u;
            // 0x26ad04: 0x264401a0  addiu       $a0, $s2, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD08u; }
        if (ctx->pc != 0x26AD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD08u; }
        if (ctx->pc != 0x26AD08u) { return; }
    }
    ctx->pc = 0x26AD08u;
label_26ad08:
    // 0x26ad08: 0x440004c  bltz        $v0, . + 4 + (0x4C << 2)
label_26ad0c:
    if (ctx->pc == 0x26AD0Cu) {
        ctx->pc = 0x26AD0Cu;
            // 0x26ad0c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26AD10u;
        goto label_26ad10;
    }
    ctx->pc = 0x26AD08u;
    {
        const bool branch_taken_0x26ad08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26AD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD08u;
            // 0x26ad0c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad08) {
            ctx->pc = 0x26AE3Cu;
            goto label_26ae3c;
        }
    }
    ctx->pc = 0x26AD10u;
label_26ad10:
    // 0x26ad10: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x26ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_26ad14:
    // 0x26ad14: 0x8844000f  lwl         $a0, 0xF($v0)
    ctx->pc = 0x26ad14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26ad18:
    // 0x26ad18: 0x9844000c  lwr         $a0, 0xC($v0)
    ctx->pc = 0x26ad18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_26ad1c:
    // 0x26ad1c: 0xc0990d8  jal         func_264360
label_26ad20:
    if (ctx->pc == 0x26AD20u) {
        ctx->pc = 0x26AD20u;
            // 0x26ad20: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->pc = 0x26AD24u;
        goto label_26ad24;
    }
    ctx->pc = 0x26AD1Cu;
    SET_GPR_U32(ctx, 31, 0x26AD24u);
    ctx->pc = 0x26AD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD1Cu;
            // 0x26ad20: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD24u; }
        if (ctx->pc != 0x26AD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD24u; }
        if (ctx->pc != 0x26AD24u) { return; }
    }
    ctx->pc = 0x26AD24u;
label_26ad24:
    // 0x26ad24: 0x26e58310  addiu       $a1, $s7, -0x7CF0
    ctx->pc = 0x26ad24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935312));
label_26ad28:
    // 0x26ad28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26ad28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ad2c:
    // 0x26ad2c: 0xc08b5ac  jal         func_22D6B0
label_26ad30:
    if (ctx->pc == 0x26AD30u) {
        ctx->pc = 0x26AD30u;
            // 0x26ad30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26AD34u;
        goto label_26ad34;
    }
    ctx->pc = 0x26AD2Cu;
    SET_GPR_U32(ctx, 31, 0x26AD34u);
    ctx->pc = 0x26AD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD2Cu;
            // 0x26ad30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD34u; }
        if (ctx->pc != 0x26AD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD34u; }
        if (ctx->pc != 0x26AD34u) { return; }
    }
    ctx->pc = 0x26AD34u;
label_26ad34:
    // 0x26ad34: 0x8e420188  lw          $v0, 0x188($s2)
    ctx->pc = 0x26ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_26ad38:
    // 0x26ad38: 0x88440010  lwl         $a0, 0x10($v0)
    ctx->pc = 0x26ad38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_26ad3c:
    // 0x26ad3c: 0x9844000d  lwr         $a0, 0xD($v0)
    ctx->pc = 0x26ad3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_26ad40:
    // 0x26ad40: 0xc0990d8  jal         func_264360
label_26ad44:
    if (ctx->pc == 0x26AD44u) {
        ctx->pc = 0x26AD44u;
            // 0x26ad44: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->pc = 0x26AD48u;
        goto label_26ad48;
    }
    ctx->pc = 0x26AD40u;
    SET_GPR_U32(ctx, 31, 0x26AD48u);
    ctx->pc = 0x26AD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD40u;
            // 0x26ad44: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD48u; }
        if (ctx->pc != 0x26AD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD48u; }
        if (ctx->pc != 0x26AD48u) { return; }
    }
    ctx->pc = 0x26AD48u;
label_26ad48:
    // 0x26ad48: 0x8e430188  lw          $v1, 0x188($s2)
    ctx->pc = 0x26ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_26ad4c:
    // 0x26ad4c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x26ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_26ad50:
    // 0x26ad50: 0x24858330  addiu       $a1, $a0, -0x7CD0
    ctx->pc = 0x26ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935344));
label_26ad54:
    // 0x26ad54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26ad54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ad58:
    // 0x26ad58: 0x8c6703e0  lw          $a3, 0x3E0($v1)
    ctx->pc = 0x26ad58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 992)));
label_26ad5c:
    // 0x26ad5c: 0xc08b5ac  jal         func_22D6B0
label_26ad60:
    if (ctx->pc == 0x26AD60u) {
        ctx->pc = 0x26AD60u;
            // 0x26ad60: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26AD64u;
        goto label_26ad64;
    }
    ctx->pc = 0x26AD5Cu;
    SET_GPR_U32(ctx, 31, 0x26AD64u);
    ctx->pc = 0x26AD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD5Cu;
            // 0x26ad60: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD64u; }
        if (ctx->pc != 0x26AD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD64u; }
        if (ctx->pc != 0x26AD64u) { return; }
    }
    ctx->pc = 0x26AD64u;
label_26ad64:
    // 0x26ad64: 0x8e450188  lw          $a1, 0x188($s2)
    ctx->pc = 0x26ad64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_26ad68:
    // 0x26ad68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ad68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ad6c:
    // 0x26ad6c: 0xc09b032  jal         func_26C0C8
label_26ad70:
    if (ctx->pc == 0x26AD70u) {
        ctx->pc = 0x26AD70u;
            // 0x26ad70: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
        ctx->pc = 0x26AD74u;
        goto label_26ad74;
    }
    ctx->pc = 0x26AD6Cu;
    SET_GPR_U32(ctx, 31, 0x26AD74u);
    ctx->pc = 0x26AD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD6Cu;
            // 0x26ad70: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C0C8u;
    if (runtime->hasFunction(0x26C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x26C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD74u; }
        if (ctx->pc != 0x26AD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C0C8_0x26c0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD74u; }
        if (ctx->pc != 0x26AD74u) { return; }
    }
    ctx->pc = 0x26AD74u;
label_26ad74:
    // 0x26ad74: 0x1000003d  b           . + 4 + (0x3D << 2)
label_26ad78:
    if (ctx->pc == 0x26AD78u) {
        ctx->pc = 0x26AD78u;
            // 0x26ad78: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x26AD7Cu;
        goto label_26ad7c;
    }
    ctx->pc = 0x26AD74u;
    {
        const bool branch_taken_0x26ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD74u;
            // 0x26ad78: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad74) {
            ctx->pc = 0x26AE6Cu;
            goto label_26ae6c;
        }
    }
    ctx->pc = 0x26AD7Cu;
label_26ad7c:
    // 0x26ad7c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_26ad80:
    // 0x26ad80: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_26ad84:
    // 0x26ad84: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x26ad84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_26ad88:
    // 0x26ad88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_26ad8c:
    // 0x26ad8c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x26ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_26ad90:
    // 0x26ad90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26ad94:
    // 0x26ad94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26ad94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26ad98:
    // 0x26ad98: 0x2141823  subu        $v1, $s0, $s4
    ctx->pc = 0x26ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_26ad9c:
    // 0x26ad9c: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x26ad9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_26ada0:
    // 0x26ada0: 0x5e20ff6f  bgtzl       $s1, . + 4 + (-0x91 << 2)
label_26ada4:
    if (ctx->pc == 0x26ADA4u) {
        ctx->pc = 0x26ADA4u;
            // 0x26ada4: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26ADA8u;
        goto label_26ada8;
    }
    ctx->pc = 0x26ADA0u;
    {
        const bool branch_taken_0x26ada0 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x26ada0) {
            ctx->pc = 0x26ADA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADA0u;
            // 0x26ada4: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AB60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ab60;
        }
    }
    ctx->pc = 0x26ADA8u;
label_26ada8:
    // 0x26ada8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x26ada8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_26adac:
    // 0x26adac: 0x5e60ff56  bgtzl       $s3, . + 4 + (-0xAA << 2)
label_26adb0:
    if (ctx->pc == 0x26ADB0u) {
        ctx->pc = 0x26ADB0u;
            // 0x26adb0: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x26ADB4u;
        goto label_26adb4;
    }
    ctx->pc = 0x26ADACu;
    {
        const bool branch_taken_0x26adac = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x26adac) {
            ctx->pc = 0x26ADB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADACu;
            // 0x26adb0: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ab08;
        }
    }
    ctx->pc = 0x26ADB4u;
label_26adb4:
    // 0x26adb4: 0xc098ba8  jal         func_262EA0
label_26adb8:
    if (ctx->pc == 0x26ADB8u) {
        ctx->pc = 0x26ADB8u;
            // 0x26adb8: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x26ADBCu;
        goto label_26adbc;
    }
    ctx->pc = 0x26ADB4u;
    SET_GPR_U32(ctx, 31, 0x26ADBCu);
    ctx->pc = 0x26ADB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADB4u;
            // 0x26adb8: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADBCu; }
        if (ctx->pc != 0x26ADBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADBCu; }
        if (ctx->pc != 0x26ADBCu) { return; }
    }
    ctx->pc = 0x26ADBCu;
label_26adbc:
    // 0x26adbc: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_26adc0:
    if (ctx->pc == 0x26ADC0u) {
        ctx->pc = 0x26ADC0u;
            // 0x26adc0: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->pc = 0x26ADC4u;
        goto label_26adc4;
    }
    ctx->pc = 0x26ADBCu;
    {
        const bool branch_taken_0x26adbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26adbc) {
            ctx->pc = 0x26ADC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADBCu;
            // 0x26adc0: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26ADDCu;
            goto label_26addc;
        }
    }
    ctx->pc = 0x26ADC4u;
label_26adc4:
    // 0x26adc4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26adc8:
    // 0x26adc8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26adcc:
    // 0x26adcc: 0xc08b5ac  jal         func_22D6B0
label_26add0:
    if (ctx->pc == 0x26ADD0u) {
        ctx->pc = 0x26ADD0u;
            // 0x26add0: 0x24a58558  addiu       $a1, $a1, -0x7AA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935896));
        ctx->pc = 0x26ADD4u;
        goto label_26add4;
    }
    ctx->pc = 0x26ADCCu;
    SET_GPR_U32(ctx, 31, 0x26ADD4u);
    ctx->pc = 0x26ADD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADCCu;
            // 0x26add0: 0x24a58558  addiu       $a1, $a1, -0x7AA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADD4u; }
        if (ctx->pc != 0x26ADD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADD4u; }
        if (ctx->pc != 0x26ADD4u) { return; }
    }
    ctx->pc = 0x26ADD4u;
label_26add4:
    // 0x26add4: 0x10000025  b           . + 4 + (0x25 << 2)
label_26add8:
    if (ctx->pc == 0x26ADD8u) {
        ctx->pc = 0x26ADD8u;
            // 0x26add8: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x26ADDCu;
        goto label_26addc;
    }
    ctx->pc = 0x26ADD4u;
    {
        const bool branch_taken_0x26add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADD4u;
            // 0x26add8: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26add4) {
            ctx->pc = 0x26AE6Cu;
            goto label_26ae6c;
        }
    }
    ctx->pc = 0x26ADDCu;
label_26addc:
    // 0x26addc: 0xde4301a0  ld          $v1, 0x1A0($s2)
    ctx->pc = 0x26addcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 416)));
label_26ade0:
    // 0x26ade0: 0x9c8503dc  lwu         $a1, 0x3DC($a0)
    ctx->pc = 0x26ade0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 988)));
label_26ade4:
    // 0x26ade4: 0xdfa20100  ld          $v0, 0x100($sp)
    ctx->pc = 0x26ade4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_26ade8:
    // 0x26ade8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x26ade8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_26adec:
    // 0x26adec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26adecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26adf0:
    // 0x26adf0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_26adf4:
    if (ctx->pc == 0x26ADF4u) {
        ctx->pc = 0x26ADF4u;
            // 0x26adf4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26ADF8u;
        goto label_26adf8;
    }
    ctx->pc = 0x26ADF0u;
    {
        const bool branch_taken_0x26adf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADF0u;
            // 0x26adf4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adf0) {
            ctx->pc = 0x26AE50u;
            goto label_26ae50;
        }
    }
    ctx->pc = 0x26ADF8u;
label_26adf8:
    // 0x26adf8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26adfc:
    // 0x26adfc: 0x24a58490  addiu       $a1, $a1, -0x7B70
    ctx->pc = 0x26adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935696));
label_26ae00:
    // 0x26ae00: 0xc08b5ac  jal         func_22D6B0
label_26ae04:
    if (ctx->pc == 0x26AE04u) {
        ctx->pc = 0x26AE08u;
        goto label_26ae08;
    }
    ctx->pc = 0x26AE00u;
    SET_GPR_U32(ctx, 31, 0x26AE08u);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE08u; }
        if (ctx->pc != 0x26AE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE08u; }
        if (ctx->pc != 0x26AE08u) { return; }
    }
    ctx->pc = 0x26AE08u;
label_26ae08:
    // 0x26ae08: 0x8e4501b8  lw          $a1, 0x1B8($s2)
    ctx->pc = 0x26ae08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_26ae0c:
    // 0x26ae0c: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x26ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
label_26ae10:
    // 0x26ae10: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26ae10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_26ae14:
    // 0x26ae14: 0x2402ff33  addiu       $v0, $zero, -0xCD
    ctx->pc = 0x26ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967091));
label_26ae18:
    // 0x26ae18: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x26ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_26ae1c:
    // 0x26ae1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26ae1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_26ae20:
    // 0x26ae20: 0x10000012  b           . + 4 + (0x12 << 2)
label_26ae24:
    if (ctx->pc == 0x26AE24u) {
        ctx->pc = 0x26AE24u;
            // 0x26ae24: 0xaca30030  sw          $v1, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x26AE28u;
        goto label_26ae28;
    }
    ctx->pc = 0x26AE20u;
    {
        const bool branch_taken_0x26ae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE20u;
            // 0x26ae24: 0xaca30030  sw          $v1, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae20) {
            ctx->pc = 0x26AE6Cu;
            goto label_26ae6c;
        }
    }
    ctx->pc = 0x26AE28u;
label_26ae28:
    // 0x26ae28: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26ae2c:
    // 0x26ae2c: 0xc08b5ac  jal         func_22D6B0
label_26ae30:
    if (ctx->pc == 0x26AE30u) {
        ctx->pc = 0x26AE30u;
            // 0x26ae30: 0x24a585a0  addiu       $a1, $a1, -0x7A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935968));
        ctx->pc = 0x26AE34u;
        goto label_26ae34;
    }
    ctx->pc = 0x26AE2Cu;
    SET_GPR_U32(ctx, 31, 0x26AE34u);
    ctx->pc = 0x26AE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE2Cu;
            // 0x26ae30: 0x24a585a0  addiu       $a1, $a1, -0x7A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE34u; }
        if (ctx->pc != 0x26AE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE34u; }
        if (ctx->pc != 0x26AE34u) { return; }
    }
    ctx->pc = 0x26AE34u;
label_26ae34:
    // 0x26ae34: 0x1000000d  b           . + 4 + (0xD << 2)
label_26ae38:
    if (ctx->pc == 0x26AE38u) {
        ctx->pc = 0x26AE38u;
            // 0x26ae38: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26AE3Cu;
        goto label_26ae3c;
    }
    ctx->pc = 0x26AE34u;
    {
        const bool branch_taken_0x26ae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE34u;
            // 0x26ae38: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae34) {
            ctx->pc = 0x26AE6Cu;
            goto label_26ae6c;
        }
    }
    ctx->pc = 0x26AE3Cu;
label_26ae3c:
    // 0x26ae3c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26ae40:
    // 0x26ae40: 0xc08b5ac  jal         func_22D6B0
label_26ae44:
    if (ctx->pc == 0x26AE44u) {
        ctx->pc = 0x26AE44u;
            // 0x26ae44: 0x24a58558  addiu       $a1, $a1, -0x7AA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935896));
        ctx->pc = 0x26AE48u;
        goto label_26ae48;
    }
    ctx->pc = 0x26AE40u;
    SET_GPR_U32(ctx, 31, 0x26AE48u);
    ctx->pc = 0x26AE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE40u;
            // 0x26ae44: 0x24a58558  addiu       $a1, $a1, -0x7AA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE48u; }
        if (ctx->pc != 0x26AE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE48u; }
        if (ctx->pc != 0x26AE48u) { return; }
    }
    ctx->pc = 0x26AE48u;
label_26ae48:
    // 0x26ae48: 0x10000008  b           . + 4 + (0x8 << 2)
label_26ae4c:
    if (ctx->pc == 0x26AE4Cu) {
        ctx->pc = 0x26AE4Cu;
            // 0x26ae4c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x26AE50u;
        goto label_26ae50;
    }
    ctx->pc = 0x26AE48u;
    {
        const bool branch_taken_0x26ae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE48u;
            // 0x26ae4c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae48) {
            ctx->pc = 0x26AE6Cu;
            goto label_26ae6c;
        }
    }
    ctx->pc = 0x26AE50u;
label_26ae50:
    // 0x26ae50: 0xc09b10a  jal         func_26C428
label_26ae54:
    if (ctx->pc == 0x26AE54u) {
        ctx->pc = 0x26AE54u;
            // 0x26ae54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26AE58u;
        goto label_26ae58;
    }
    ctx->pc = 0x26AE50u;
    SET_GPR_U32(ctx, 31, 0x26AE58u);
    ctx->pc = 0x26AE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE50u;
            // 0x26ae54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C428u;
    if (runtime->hasFunction(0x26C428u)) {
        auto targetFn = runtime->lookupFunction(0x26C428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE58u; }
        if (ctx->pc != 0x26AE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C428_0x26c428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE58u; }
        if (ctx->pc != 0x26AE58u) { return; }
    }
    ctx->pc = 0x26AE58u;
label_26ae58:
    // 0x26ae58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26ae5c:
    // 0x26ae5c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26ae60:
    // 0x26ae60: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x26ae60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26ae64:
    // 0x26ae64: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x26ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_26ae68:
    // 0x26ae68: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x26ae68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_26ae6c:
    // 0x26ae6c: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x26ae6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_26ae70:
    // 0x26ae70: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x26ae70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_26ae74:
    // 0x26ae74: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x26ae74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_26ae78:
    // 0x26ae78: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x26ae78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_26ae7c:
    // 0x26ae7c: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x26ae7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_26ae80:
    // 0x26ae80: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x26ae80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_26ae84:
    // 0x26ae84: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x26ae84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_26ae88:
    // 0x26ae88: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x26ae88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_26ae8c:
    // 0x26ae8c: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x26ae8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_26ae90:
    // 0x26ae90: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x26ae90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_26ae94:
    // 0x26ae94: 0x3e00008  jr          $ra
label_26ae98:
    if (ctx->pc == 0x26AE98u) {
        ctx->pc = 0x26AE98u;
            // 0x26ae98: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x26AE9Cu;
        goto label_26ae9c;
    }
    ctx->pc = 0x26AE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE94u;
            // 0x26ae98: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AE9Cu;
label_26ae9c:
    // 0x26ae9c: 0x0  nop
    ctx->pc = 0x26ae9cu;
    // NOP
label_26aea0:
    // 0x26aea0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_26aea4:
    // 0x26aea4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x26aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_26aea8:
    // 0x26aea8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_26aeac:
    // 0x26aeac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26aeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_26aeb0:
    // 0x26aeb0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26aeb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26aeb4:
    // 0x26aeb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_26aeb8:
    // 0x26aeb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26aeb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26aebc:
    // 0x26aebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26aebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26aec0:
    // 0x26aec0: 0x2452dbd8  addiu       $s2, $v0, -0x2428
    ctx->pc = 0x26aec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958040));
label_26aec4:
    // 0x26aec4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x26aec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_26aec8:
    // 0x26aec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26aec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26aecc:
    // 0x26aecc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x26aeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_26aed0:
    // 0x26aed0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x26aed0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_26aed4:
    // 0x26aed4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_26aed8:
    // 0x26aed8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x26aed8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_26aedc:
    // 0x26aedc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26aedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_26aee0:
    // 0x26aee0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x26aee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26aee4:
    // 0x26aee4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_26aee8:
    // 0x26aee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26aee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26aeec:
    // 0x26aeec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26aeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26aef0:
    // 0x26aef0: 0xc049cb6  jal         func_1272D8
label_26aef4:
    if (ctx->pc == 0x26AEF4u) {
        ctx->pc = 0x26AEF4u;
            // 0x26aef4: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x26AEF8u;
        goto label_26aef8;
    }
    ctx->pc = 0x26AEF0u;
    SET_GPR_U32(ctx, 31, 0x26AEF8u);
    ctx->pc = 0x26AEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEF0u;
            // 0x26aef4: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEF8u; }
        if (ctx->pc != 0x26AEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEF8u; }
        if (ctx->pc != 0x26AEF8u) { return; }
    }
    ctx->pc = 0x26AEF8u;
label_26aef8:
    // 0x26aef8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x26aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
label_26aefc:
    // 0x26aefc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26aefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26af00:
    // 0x26af00: 0x2471dc38  addiu       $s1, $v1, -0x23C8
    ctx->pc = 0x26af00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958136));
label_26af04:
    // 0x26af04: 0x3406af20  ori         $a2, $zero, 0xAF20
    ctx->pc = 0x26af04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
label_26af08:
    // 0x26af08: 0xc049cb6  jal         func_1272D8
label_26af0c:
    if (ctx->pc == 0x26AF0Cu) {
        ctx->pc = 0x26AF0Cu;
            // 0x26af0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26AF10u;
        goto label_26af10;
    }
    ctx->pc = 0x26AF08u;
    SET_GPR_U32(ctx, 31, 0x26AF10u);
    ctx->pc = 0x26AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF08u;
            // 0x26af0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF10u; }
        if (ctx->pc != 0x26AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF10u; }
        if (ctx->pc != 0x26AF10u) { return; }
    }
    ctx->pc = 0x26AF10u;
label_26af10:
    // 0x26af10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26af10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26af14:
    // 0x26af14: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x26af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_26af18:
    // 0x26af18: 0xc04a966  jal         func_12A598
label_26af1c:
    if (ctx->pc == 0x26AF1Cu) {
        ctx->pc = 0x26AF1Cu;
            // 0x26af1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x26AF20u;
        goto label_26af20;
    }
    ctx->pc = 0x26AF18u;
    SET_GPR_U32(ctx, 31, 0x26AF20u);
    ctx->pc = 0x26AF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF18u;
            // 0x26af1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF20u; }
        if (ctx->pc != 0x26AF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF20u; }
        if (ctx->pc != 0x26AF20u) { return; }
    }
    ctx->pc = 0x26AF20u;
label_26af20:
    // 0x26af20: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_26af24:
    if (ctx->pc == 0x26AF24u) {
        ctx->pc = 0x26AF24u;
            // 0x26af24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26AF28u;
        goto label_26af28;
    }
    ctx->pc = 0x26AF20u;
    {
        const bool branch_taken_0x26af20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF20u;
            // 0x26af24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af20) {
            ctx->pc = 0x26AF34u;
            goto label_26af34;
        }
    }
    ctx->pc = 0x26AF28u;
label_26af28:
    // 0x26af28: 0x26246709  addiu       $a0, $s1, 0x6709
    ctx->pc = 0x26af28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 26377));
label_26af2c:
    // 0x26af2c: 0xc04a966  jal         func_12A598
label_26af30:
    if (ctx->pc == 0x26AF30u) {
        ctx->pc = 0x26AF30u;
            // 0x26af30: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26AF34u;
        goto label_26af34;
    }
    ctx->pc = 0x26AF2Cu;
    SET_GPR_U32(ctx, 31, 0x26AF34u);
    ctx->pc = 0x26AF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF2Cu;
            // 0x26af30: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF34u; }
        if (ctx->pc != 0x26AF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF34u; }
        if (ctx->pc != 0x26AF34u) { return; }
    }
    ctx->pc = 0x26AF34u;
label_26af34:
    // 0x26af34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26af38:
    // 0x26af38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26af38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26af3c:
    // 0x26af3c: 0xa222680a  sb          $v0, 0x680A($s1)
    ctx->pc = 0x26af3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26634), (uint8_t)GPR_U32(ctx, 2));
label_26af40:
    // 0x26af40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26af40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26af44:
    // 0x26af44: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x26af44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
label_26af48:
    // 0x26af48: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26af48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26af4c:
    // 0x26af4c: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x26af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
label_26af50:
    // 0x26af50: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x26af50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26af54:
    // 0x26af54: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x26af54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26af58:
    // 0x26af58: 0xa2206809  sb          $zero, 0x6809($s1)
    ctx->pc = 0x26af58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26633), (uint8_t)GPR_U32(ctx, 0));
label_26af5c:
    // 0x26af5c: 0xc09abfc  jal         func_26AFF0
label_26af60:
    if (ctx->pc == 0x26AF60u) {
        ctx->pc = 0x26AF60u;
            // 0x26af60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26AF64u;
        goto label_26af64;
    }
    ctx->pc = 0x26AF5Cu;
    SET_GPR_U32(ctx, 31, 0x26AF64u);
    ctx->pc = 0x26AF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF5Cu;
            // 0x26af60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AFF0u;
    if (runtime->hasFunction(0x26AFF0u)) {
        auto targetFn = runtime->lookupFunction(0x26AFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF64u; }
        if (ctx->pc != 0x26AF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AFF0_0x26aff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF64u; }
        if (ctx->pc != 0x26AF64u) { return; }
    }
    ctx->pc = 0x26AF64u;
label_26af64:
    // 0x26af64: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
label_26af68:
    if (ctx->pc == 0x26AF68u) {
        ctx->pc = 0x26AF68u;
            // 0x26af68: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x26AF6Cu;
        goto label_26af6c;
    }
    ctx->pc = 0x26AF64u;
    {
        const bool branch_taken_0x26af64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26AF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF64u;
            // 0x26af68: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af64) {
            ctx->pc = 0x26AFC8u;
            goto label_26afc8;
        }
    }
    ctx->pc = 0x26AF6Cu;
label_26af6c:
    // 0x26af6c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x26af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_26af70:
    // 0x26af70: 0x24440006  addiu       $a0, $v0, 0x6
    ctx->pc = 0x26af70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_26af74:
    // 0x26af74: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x26af74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_26af78:
    // 0x26af78: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_26af7c:
    if (ctx->pc == 0x26AF7Cu) {
        ctx->pc = 0x26AF7Cu;
            // 0x26af7c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26AF80u;
        goto label_26af80;
    }
    ctx->pc = 0x26AF78u;
    {
        const bool branch_taken_0x26af78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF78u;
            // 0x26af7c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af78) {
            ctx->pc = 0x26AFC0u;
            goto label_26afc0;
        }
    }
    ctx->pc = 0x26AF80u;
label_26af80:
    // 0x26af80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26af80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_26af84:
    // 0x26af84: 0x24428600  addiu       $v0, $v0, -0x7A00
    ctx->pc = 0x26af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936064));
label_26af88:
    // 0x26af88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26af88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26af8c:
    // 0x26af8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26af90:
    // 0x26af90: 0x800008  jr          $a0
label_26af94:
    if (ctx->pc == 0x26AF94u) {
        ctx->pc = 0x26AF98u;
        goto label_26af98;
    }
    ctx->pc = 0x26AF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AF98u: goto label_26af98;
            case 0x26AFA0u: goto label_26afa0;
            case 0x26AFA8u: goto label_26afa8;
            case 0x26AFB0u: goto label_26afb0;
            case 0x26AFB8u: goto label_26afb8;
            case 0x26AFC0u: goto label_26afc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AF98u;
label_26af98:
    // 0x26af98: 0x1000000a  b           . + 4 + (0xA << 2)
label_26af9c:
    if (ctx->pc == 0x26AF9Cu) {
        ctx->pc = 0x26AF9Cu;
            // 0x26af9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x26AFA0u;
        goto label_26afa0;
    }
    ctx->pc = 0x26AF98u;
    {
        const bool branch_taken_0x26af98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF98u;
            // 0x26af9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af98) {
            ctx->pc = 0x26AFC4u;
            goto label_26afc4;
        }
    }
    ctx->pc = 0x26AFA0u;
label_26afa0:
    // 0x26afa0: 0x10000008  b           . + 4 + (0x8 << 2)
label_26afa4:
    if (ctx->pc == 0x26AFA4u) {
        ctx->pc = 0x26AFA4u;
            // 0x26afa4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x26AFA8u;
        goto label_26afa8;
    }
    ctx->pc = 0x26AFA0u;
    {
        const bool branch_taken_0x26afa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFA0u;
            // 0x26afa4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afa0) {
            ctx->pc = 0x26AFC4u;
            goto label_26afc4;
        }
    }
    ctx->pc = 0x26AFA8u;
label_26afa8:
    // 0x26afa8: 0x10000006  b           . + 4 + (0x6 << 2)
label_26afac:
    if (ctx->pc == 0x26AFACu) {
        ctx->pc = 0x26AFACu;
            // 0x26afac: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x26AFB0u;
        goto label_26afb0;
    }
    ctx->pc = 0x26AFA8u;
    {
        const bool branch_taken_0x26afa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFA8u;
            // 0x26afac: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afa8) {
            ctx->pc = 0x26AFC4u;
            goto label_26afc4;
        }
    }
    ctx->pc = 0x26AFB0u;
label_26afb0:
    // 0x26afb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_26afb4:
    if (ctx->pc == 0x26AFB4u) {
        ctx->pc = 0x26AFB4u;
            // 0x26afb4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26AFB8u;
        goto label_26afb8;
    }
    ctx->pc = 0x26AFB0u;
    {
        const bool branch_taken_0x26afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFB0u;
            // 0x26afb4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afb0) {
            ctx->pc = 0x26AFC4u;
            goto label_26afc4;
        }
    }
    ctx->pc = 0x26AFB8u;
label_26afb8:
    // 0x26afb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_26afbc:
    if (ctx->pc == 0x26AFBCu) {
        ctx->pc = 0x26AFBCu;
            // 0x26afbc: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26AFC0u;
        goto label_26afc0;
    }
    ctx->pc = 0x26AFB8u;
    {
        const bool branch_taken_0x26afb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFB8u;
            // 0x26afbc: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afb8) {
            ctx->pc = 0x26AFC4u;
            goto label_26afc4;
        }
    }
    ctx->pc = 0x26AFC0u;
label_26afc0:
    // 0x26afc0: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x26afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
label_26afc4:
    // 0x26afc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26afc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26afc8:
    // 0x26afc8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x26afc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26afcc:
    // 0x26afcc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x26afccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26afd0:
    // 0x26afd0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26afd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26afd4:
    // 0x26afd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26afd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26afd8:
    // 0x26afd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26afd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26afdc:
    // 0x26afdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26afdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26afe0:
    // 0x26afe0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26afe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26afe4:
    // 0x26afe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26afe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26afe8:
    // 0x26afe8: 0x3e00008  jr          $ra
label_26afec:
    if (ctx->pc == 0x26AFECu) {
        ctx->pc = 0x26AFECu;
            // 0x26afec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x26AFF0u;
        goto label_fallthrough_0x26afe8;
    }
    ctx->pc = 0x26AFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFE8u;
            // 0x26afec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26afe8:
    ctx->pc = 0x26AFF0u;
    ctx->pc = 0x26aff0u;
}
