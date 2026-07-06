#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001986B0
// Address: 0x1986b0 - 0x199510
void sub_001986B0_0x1986b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001986B0_0x1986b0");
#endif

    switch (ctx->pc) {
        case 0x1986b0u: goto label_1986b0;
        case 0x1986b4u: goto label_1986b4;
        case 0x1986b8u: goto label_1986b8;
        case 0x1986bcu: goto label_1986bc;
        case 0x1986c0u: goto label_1986c0;
        case 0x1986c4u: goto label_1986c4;
        case 0x1986c8u: goto label_1986c8;
        case 0x1986ccu: goto label_1986cc;
        case 0x1986d0u: goto label_1986d0;
        case 0x1986d4u: goto label_1986d4;
        case 0x1986d8u: goto label_1986d8;
        case 0x1986dcu: goto label_1986dc;
        case 0x1986e0u: goto label_1986e0;
        case 0x1986e4u: goto label_1986e4;
        case 0x1986e8u: goto label_1986e8;
        case 0x1986ecu: goto label_1986ec;
        case 0x1986f0u: goto label_1986f0;
        case 0x1986f4u: goto label_1986f4;
        case 0x1986f8u: goto label_1986f8;
        case 0x1986fcu: goto label_1986fc;
        case 0x198700u: goto label_198700;
        case 0x198704u: goto label_198704;
        case 0x198708u: goto label_198708;
        case 0x19870cu: goto label_19870c;
        case 0x198710u: goto label_198710;
        case 0x198714u: goto label_198714;
        case 0x198718u: goto label_198718;
        case 0x19871cu: goto label_19871c;
        case 0x198720u: goto label_198720;
        case 0x198724u: goto label_198724;
        case 0x198728u: goto label_198728;
        case 0x19872cu: goto label_19872c;
        case 0x198730u: goto label_198730;
        case 0x198734u: goto label_198734;
        case 0x198738u: goto label_198738;
        case 0x19873cu: goto label_19873c;
        case 0x198740u: goto label_198740;
        case 0x198744u: goto label_198744;
        case 0x198748u: goto label_198748;
        case 0x19874cu: goto label_19874c;
        case 0x198750u: goto label_198750;
        case 0x198754u: goto label_198754;
        case 0x198758u: goto label_198758;
        case 0x19875cu: goto label_19875c;
        case 0x198760u: goto label_198760;
        case 0x198764u: goto label_198764;
        case 0x198768u: goto label_198768;
        case 0x19876cu: goto label_19876c;
        case 0x198770u: goto label_198770;
        case 0x198774u: goto label_198774;
        case 0x198778u: goto label_198778;
        case 0x19877cu: goto label_19877c;
        case 0x198780u: goto label_198780;
        case 0x198784u: goto label_198784;
        case 0x198788u: goto label_198788;
        case 0x19878cu: goto label_19878c;
        case 0x198790u: goto label_198790;
        case 0x198794u: goto label_198794;
        case 0x198798u: goto label_198798;
        case 0x19879cu: goto label_19879c;
        case 0x1987a0u: goto label_1987a0;
        case 0x1987a4u: goto label_1987a4;
        case 0x1987a8u: goto label_1987a8;
        case 0x1987acu: goto label_1987ac;
        case 0x1987b0u: goto label_1987b0;
        case 0x1987b4u: goto label_1987b4;
        case 0x1987b8u: goto label_1987b8;
        case 0x1987bcu: goto label_1987bc;
        case 0x1987c0u: goto label_1987c0;
        case 0x1987c4u: goto label_1987c4;
        case 0x1987c8u: goto label_1987c8;
        case 0x1987ccu: goto label_1987cc;
        case 0x1987d0u: goto label_1987d0;
        case 0x1987d4u: goto label_1987d4;
        case 0x1987d8u: goto label_1987d8;
        case 0x1987dcu: goto label_1987dc;
        case 0x1987e0u: goto label_1987e0;
        case 0x1987e4u: goto label_1987e4;
        case 0x1987e8u: goto label_1987e8;
        case 0x1987ecu: goto label_1987ec;
        case 0x1987f0u: goto label_1987f0;
        case 0x1987f4u: goto label_1987f4;
        case 0x1987f8u: goto label_1987f8;
        case 0x1987fcu: goto label_1987fc;
        case 0x198800u: goto label_198800;
        case 0x198804u: goto label_198804;
        case 0x198808u: goto label_198808;
        case 0x19880cu: goto label_19880c;
        case 0x198810u: goto label_198810;
        case 0x198814u: goto label_198814;
        case 0x198818u: goto label_198818;
        case 0x19881cu: goto label_19881c;
        case 0x198820u: goto label_198820;
        case 0x198824u: goto label_198824;
        case 0x198828u: goto label_198828;
        case 0x19882cu: goto label_19882c;
        case 0x198830u: goto label_198830;
        case 0x198834u: goto label_198834;
        case 0x198838u: goto label_198838;
        case 0x19883cu: goto label_19883c;
        case 0x198840u: goto label_198840;
        case 0x198844u: goto label_198844;
        case 0x198848u: goto label_198848;
        case 0x19884cu: goto label_19884c;
        case 0x198850u: goto label_198850;
        case 0x198854u: goto label_198854;
        case 0x198858u: goto label_198858;
        case 0x19885cu: goto label_19885c;
        case 0x198860u: goto label_198860;
        case 0x198864u: goto label_198864;
        case 0x198868u: goto label_198868;
        case 0x19886cu: goto label_19886c;
        case 0x198870u: goto label_198870;
        case 0x198874u: goto label_198874;
        case 0x198878u: goto label_198878;
        case 0x19887cu: goto label_19887c;
        case 0x198880u: goto label_198880;
        case 0x198884u: goto label_198884;
        case 0x198888u: goto label_198888;
        case 0x19888cu: goto label_19888c;
        case 0x198890u: goto label_198890;
        case 0x198894u: goto label_198894;
        case 0x198898u: goto label_198898;
        case 0x19889cu: goto label_19889c;
        case 0x1988a0u: goto label_1988a0;
        case 0x1988a4u: goto label_1988a4;
        case 0x1988a8u: goto label_1988a8;
        case 0x1988acu: goto label_1988ac;
        case 0x1988b0u: goto label_1988b0;
        case 0x1988b4u: goto label_1988b4;
        case 0x1988b8u: goto label_1988b8;
        case 0x1988bcu: goto label_1988bc;
        case 0x1988c0u: goto label_1988c0;
        case 0x1988c4u: goto label_1988c4;
        case 0x1988c8u: goto label_1988c8;
        case 0x1988ccu: goto label_1988cc;
        case 0x1988d0u: goto label_1988d0;
        case 0x1988d4u: goto label_1988d4;
        case 0x1988d8u: goto label_1988d8;
        case 0x1988dcu: goto label_1988dc;
        case 0x1988e0u: goto label_1988e0;
        case 0x1988e4u: goto label_1988e4;
        case 0x1988e8u: goto label_1988e8;
        case 0x1988ecu: goto label_1988ec;
        case 0x1988f0u: goto label_1988f0;
        case 0x1988f4u: goto label_1988f4;
        case 0x1988f8u: goto label_1988f8;
        case 0x1988fcu: goto label_1988fc;
        case 0x198900u: goto label_198900;
        case 0x198904u: goto label_198904;
        case 0x198908u: goto label_198908;
        case 0x19890cu: goto label_19890c;
        case 0x198910u: goto label_198910;
        case 0x198914u: goto label_198914;
        case 0x198918u: goto label_198918;
        case 0x19891cu: goto label_19891c;
        case 0x198920u: goto label_198920;
        case 0x198924u: goto label_198924;
        case 0x198928u: goto label_198928;
        case 0x19892cu: goto label_19892c;
        case 0x198930u: goto label_198930;
        case 0x198934u: goto label_198934;
        case 0x198938u: goto label_198938;
        case 0x19893cu: goto label_19893c;
        case 0x198940u: goto label_198940;
        case 0x198944u: goto label_198944;
        case 0x198948u: goto label_198948;
        case 0x19894cu: goto label_19894c;
        case 0x198950u: goto label_198950;
        case 0x198954u: goto label_198954;
        case 0x198958u: goto label_198958;
        case 0x19895cu: goto label_19895c;
        case 0x198960u: goto label_198960;
        case 0x198964u: goto label_198964;
        case 0x198968u: goto label_198968;
        case 0x19896cu: goto label_19896c;
        case 0x198970u: goto label_198970;
        case 0x198974u: goto label_198974;
        case 0x198978u: goto label_198978;
        case 0x19897cu: goto label_19897c;
        case 0x198980u: goto label_198980;
        case 0x198984u: goto label_198984;
        case 0x198988u: goto label_198988;
        case 0x19898cu: goto label_19898c;
        case 0x198990u: goto label_198990;
        case 0x198994u: goto label_198994;
        case 0x198998u: goto label_198998;
        case 0x19899cu: goto label_19899c;
        case 0x1989a0u: goto label_1989a0;
        case 0x1989a4u: goto label_1989a4;
        case 0x1989a8u: goto label_1989a8;
        case 0x1989acu: goto label_1989ac;
        case 0x1989b0u: goto label_1989b0;
        case 0x1989b4u: goto label_1989b4;
        case 0x1989b8u: goto label_1989b8;
        case 0x1989bcu: goto label_1989bc;
        case 0x1989c0u: goto label_1989c0;
        case 0x1989c4u: goto label_1989c4;
        case 0x1989c8u: goto label_1989c8;
        case 0x1989ccu: goto label_1989cc;
        case 0x1989d0u: goto label_1989d0;
        case 0x1989d4u: goto label_1989d4;
        case 0x1989d8u: goto label_1989d8;
        case 0x1989dcu: goto label_1989dc;
        case 0x1989e0u: goto label_1989e0;
        case 0x1989e4u: goto label_1989e4;
        case 0x1989e8u: goto label_1989e8;
        case 0x1989ecu: goto label_1989ec;
        case 0x1989f0u: goto label_1989f0;
        case 0x1989f4u: goto label_1989f4;
        case 0x1989f8u: goto label_1989f8;
        case 0x1989fcu: goto label_1989fc;
        case 0x198a00u: goto label_198a00;
        case 0x198a04u: goto label_198a04;
        case 0x198a08u: goto label_198a08;
        case 0x198a0cu: goto label_198a0c;
        case 0x198a10u: goto label_198a10;
        case 0x198a14u: goto label_198a14;
        case 0x198a18u: goto label_198a18;
        case 0x198a1cu: goto label_198a1c;
        case 0x198a20u: goto label_198a20;
        case 0x198a24u: goto label_198a24;
        case 0x198a28u: goto label_198a28;
        case 0x198a2cu: goto label_198a2c;
        case 0x198a30u: goto label_198a30;
        case 0x198a34u: goto label_198a34;
        case 0x198a38u: goto label_198a38;
        case 0x198a3cu: goto label_198a3c;
        case 0x198a40u: goto label_198a40;
        case 0x198a44u: goto label_198a44;
        case 0x198a48u: goto label_198a48;
        case 0x198a4cu: goto label_198a4c;
        case 0x198a50u: goto label_198a50;
        case 0x198a54u: goto label_198a54;
        case 0x198a58u: goto label_198a58;
        case 0x198a5cu: goto label_198a5c;
        case 0x198a60u: goto label_198a60;
        case 0x198a64u: goto label_198a64;
        case 0x198a68u: goto label_198a68;
        case 0x198a6cu: goto label_198a6c;
        case 0x198a70u: goto label_198a70;
        case 0x198a74u: goto label_198a74;
        case 0x198a78u: goto label_198a78;
        case 0x198a7cu: goto label_198a7c;
        case 0x198a80u: goto label_198a80;
        case 0x198a84u: goto label_198a84;
        case 0x198a88u: goto label_198a88;
        case 0x198a8cu: goto label_198a8c;
        case 0x198a90u: goto label_198a90;
        case 0x198a94u: goto label_198a94;
        case 0x198a98u: goto label_198a98;
        case 0x198a9cu: goto label_198a9c;
        case 0x198aa0u: goto label_198aa0;
        case 0x198aa4u: goto label_198aa4;
        case 0x198aa8u: goto label_198aa8;
        case 0x198aacu: goto label_198aac;
        case 0x198ab0u: goto label_198ab0;
        case 0x198ab4u: goto label_198ab4;
        case 0x198ab8u: goto label_198ab8;
        case 0x198abcu: goto label_198abc;
        case 0x198ac0u: goto label_198ac0;
        case 0x198ac4u: goto label_198ac4;
        case 0x198ac8u: goto label_198ac8;
        case 0x198accu: goto label_198acc;
        case 0x198ad0u: goto label_198ad0;
        case 0x198ad4u: goto label_198ad4;
        case 0x198ad8u: goto label_198ad8;
        case 0x198adcu: goto label_198adc;
        case 0x198ae0u: goto label_198ae0;
        case 0x198ae4u: goto label_198ae4;
        case 0x198ae8u: goto label_198ae8;
        case 0x198aecu: goto label_198aec;
        case 0x198af0u: goto label_198af0;
        case 0x198af4u: goto label_198af4;
        case 0x198af8u: goto label_198af8;
        case 0x198afcu: goto label_198afc;
        case 0x198b00u: goto label_198b00;
        case 0x198b04u: goto label_198b04;
        case 0x198b08u: goto label_198b08;
        case 0x198b0cu: goto label_198b0c;
        case 0x198b10u: goto label_198b10;
        case 0x198b14u: goto label_198b14;
        case 0x198b18u: goto label_198b18;
        case 0x198b1cu: goto label_198b1c;
        case 0x198b20u: goto label_198b20;
        case 0x198b24u: goto label_198b24;
        case 0x198b28u: goto label_198b28;
        case 0x198b2cu: goto label_198b2c;
        case 0x198b30u: goto label_198b30;
        case 0x198b34u: goto label_198b34;
        case 0x198b38u: goto label_198b38;
        case 0x198b3cu: goto label_198b3c;
        case 0x198b40u: goto label_198b40;
        case 0x198b44u: goto label_198b44;
        case 0x198b48u: goto label_198b48;
        case 0x198b4cu: goto label_198b4c;
        case 0x198b50u: goto label_198b50;
        case 0x198b54u: goto label_198b54;
        case 0x198b58u: goto label_198b58;
        case 0x198b5cu: goto label_198b5c;
        case 0x198b60u: goto label_198b60;
        case 0x198b64u: goto label_198b64;
        case 0x198b68u: goto label_198b68;
        case 0x198b6cu: goto label_198b6c;
        case 0x198b70u: goto label_198b70;
        case 0x198b74u: goto label_198b74;
        case 0x198b78u: goto label_198b78;
        case 0x198b7cu: goto label_198b7c;
        case 0x198b80u: goto label_198b80;
        case 0x198b84u: goto label_198b84;
        case 0x198b88u: goto label_198b88;
        case 0x198b8cu: goto label_198b8c;
        case 0x198b90u: goto label_198b90;
        case 0x198b94u: goto label_198b94;
        case 0x198b98u: goto label_198b98;
        case 0x198b9cu: goto label_198b9c;
        case 0x198ba0u: goto label_198ba0;
        case 0x198ba4u: goto label_198ba4;
        case 0x198ba8u: goto label_198ba8;
        case 0x198bacu: goto label_198bac;
        case 0x198bb0u: goto label_198bb0;
        case 0x198bb4u: goto label_198bb4;
        case 0x198bb8u: goto label_198bb8;
        case 0x198bbcu: goto label_198bbc;
        case 0x198bc0u: goto label_198bc0;
        case 0x198bc4u: goto label_198bc4;
        case 0x198bc8u: goto label_198bc8;
        case 0x198bccu: goto label_198bcc;
        case 0x198bd0u: goto label_198bd0;
        case 0x198bd4u: goto label_198bd4;
        case 0x198bd8u: goto label_198bd8;
        case 0x198bdcu: goto label_198bdc;
        case 0x198be0u: goto label_198be0;
        case 0x198be4u: goto label_198be4;
        case 0x198be8u: goto label_198be8;
        case 0x198becu: goto label_198bec;
        case 0x198bf0u: goto label_198bf0;
        case 0x198bf4u: goto label_198bf4;
        case 0x198bf8u: goto label_198bf8;
        case 0x198bfcu: goto label_198bfc;
        case 0x198c00u: goto label_198c00;
        case 0x198c04u: goto label_198c04;
        case 0x198c08u: goto label_198c08;
        case 0x198c0cu: goto label_198c0c;
        case 0x198c10u: goto label_198c10;
        case 0x198c14u: goto label_198c14;
        case 0x198c18u: goto label_198c18;
        case 0x198c1cu: goto label_198c1c;
        case 0x198c20u: goto label_198c20;
        case 0x198c24u: goto label_198c24;
        case 0x198c28u: goto label_198c28;
        case 0x198c2cu: goto label_198c2c;
        case 0x198c30u: goto label_198c30;
        case 0x198c34u: goto label_198c34;
        case 0x198c38u: goto label_198c38;
        case 0x198c3cu: goto label_198c3c;
        case 0x198c40u: goto label_198c40;
        case 0x198c44u: goto label_198c44;
        case 0x198c48u: goto label_198c48;
        case 0x198c4cu: goto label_198c4c;
        case 0x198c50u: goto label_198c50;
        case 0x198c54u: goto label_198c54;
        case 0x198c58u: goto label_198c58;
        case 0x198c5cu: goto label_198c5c;
        case 0x198c60u: goto label_198c60;
        case 0x198c64u: goto label_198c64;
        case 0x198c68u: goto label_198c68;
        case 0x198c6cu: goto label_198c6c;
        case 0x198c70u: goto label_198c70;
        case 0x198c74u: goto label_198c74;
        case 0x198c78u: goto label_198c78;
        case 0x198c7cu: goto label_198c7c;
        case 0x198c80u: goto label_198c80;
        case 0x198c84u: goto label_198c84;
        case 0x198c88u: goto label_198c88;
        case 0x198c8cu: goto label_198c8c;
        case 0x198c90u: goto label_198c90;
        case 0x198c94u: goto label_198c94;
        case 0x198c98u: goto label_198c98;
        case 0x198c9cu: goto label_198c9c;
        case 0x198ca0u: goto label_198ca0;
        case 0x198ca4u: goto label_198ca4;
        case 0x198ca8u: goto label_198ca8;
        case 0x198cacu: goto label_198cac;
        case 0x198cb0u: goto label_198cb0;
        case 0x198cb4u: goto label_198cb4;
        case 0x198cb8u: goto label_198cb8;
        case 0x198cbcu: goto label_198cbc;
        case 0x198cc0u: goto label_198cc0;
        case 0x198cc4u: goto label_198cc4;
        case 0x198cc8u: goto label_198cc8;
        case 0x198cccu: goto label_198ccc;
        case 0x198cd0u: goto label_198cd0;
        case 0x198cd4u: goto label_198cd4;
        case 0x198cd8u: goto label_198cd8;
        case 0x198cdcu: goto label_198cdc;
        case 0x198ce0u: goto label_198ce0;
        case 0x198ce4u: goto label_198ce4;
        case 0x198ce8u: goto label_198ce8;
        case 0x198cecu: goto label_198cec;
        case 0x198cf0u: goto label_198cf0;
        case 0x198cf4u: goto label_198cf4;
        case 0x198cf8u: goto label_198cf8;
        case 0x198cfcu: goto label_198cfc;
        case 0x198d00u: goto label_198d00;
        case 0x198d04u: goto label_198d04;
        case 0x198d08u: goto label_198d08;
        case 0x198d0cu: goto label_198d0c;
        case 0x198d10u: goto label_198d10;
        case 0x198d14u: goto label_198d14;
        case 0x198d18u: goto label_198d18;
        case 0x198d1cu: goto label_198d1c;
        case 0x198d20u: goto label_198d20;
        case 0x198d24u: goto label_198d24;
        case 0x198d28u: goto label_198d28;
        case 0x198d2cu: goto label_198d2c;
        case 0x198d30u: goto label_198d30;
        case 0x198d34u: goto label_198d34;
        case 0x198d38u: goto label_198d38;
        case 0x198d3cu: goto label_198d3c;
        case 0x198d40u: goto label_198d40;
        case 0x198d44u: goto label_198d44;
        case 0x198d48u: goto label_198d48;
        case 0x198d4cu: goto label_198d4c;
        case 0x198d50u: goto label_198d50;
        case 0x198d54u: goto label_198d54;
        case 0x198d58u: goto label_198d58;
        case 0x198d5cu: goto label_198d5c;
        case 0x198d60u: goto label_198d60;
        case 0x198d64u: goto label_198d64;
        case 0x198d68u: goto label_198d68;
        case 0x198d6cu: goto label_198d6c;
        case 0x198d70u: goto label_198d70;
        case 0x198d74u: goto label_198d74;
        case 0x198d78u: goto label_198d78;
        case 0x198d7cu: goto label_198d7c;
        case 0x198d80u: goto label_198d80;
        case 0x198d84u: goto label_198d84;
        case 0x198d88u: goto label_198d88;
        case 0x198d8cu: goto label_198d8c;
        case 0x198d90u: goto label_198d90;
        case 0x198d94u: goto label_198d94;
        case 0x198d98u: goto label_198d98;
        case 0x198d9cu: goto label_198d9c;
        case 0x198da0u: goto label_198da0;
        case 0x198da4u: goto label_198da4;
        case 0x198da8u: goto label_198da8;
        case 0x198dacu: goto label_198dac;
        case 0x198db0u: goto label_198db0;
        case 0x198db4u: goto label_198db4;
        case 0x198db8u: goto label_198db8;
        case 0x198dbcu: goto label_198dbc;
        case 0x198dc0u: goto label_198dc0;
        case 0x198dc4u: goto label_198dc4;
        case 0x198dc8u: goto label_198dc8;
        case 0x198dccu: goto label_198dcc;
        case 0x198dd0u: goto label_198dd0;
        case 0x198dd4u: goto label_198dd4;
        case 0x198dd8u: goto label_198dd8;
        case 0x198ddcu: goto label_198ddc;
        case 0x198de0u: goto label_198de0;
        case 0x198de4u: goto label_198de4;
        case 0x198de8u: goto label_198de8;
        case 0x198decu: goto label_198dec;
        case 0x198df0u: goto label_198df0;
        case 0x198df4u: goto label_198df4;
        case 0x198df8u: goto label_198df8;
        case 0x198dfcu: goto label_198dfc;
        case 0x198e00u: goto label_198e00;
        case 0x198e04u: goto label_198e04;
        case 0x198e08u: goto label_198e08;
        case 0x198e0cu: goto label_198e0c;
        case 0x198e10u: goto label_198e10;
        case 0x198e14u: goto label_198e14;
        case 0x198e18u: goto label_198e18;
        case 0x198e1cu: goto label_198e1c;
        case 0x198e20u: goto label_198e20;
        case 0x198e24u: goto label_198e24;
        case 0x198e28u: goto label_198e28;
        case 0x198e2cu: goto label_198e2c;
        case 0x198e30u: goto label_198e30;
        case 0x198e34u: goto label_198e34;
        case 0x198e38u: goto label_198e38;
        case 0x198e3cu: goto label_198e3c;
        case 0x198e40u: goto label_198e40;
        case 0x198e44u: goto label_198e44;
        case 0x198e48u: goto label_198e48;
        case 0x198e4cu: goto label_198e4c;
        case 0x198e50u: goto label_198e50;
        case 0x198e54u: goto label_198e54;
        case 0x198e58u: goto label_198e58;
        case 0x198e5cu: goto label_198e5c;
        case 0x198e60u: goto label_198e60;
        case 0x198e64u: goto label_198e64;
        case 0x198e68u: goto label_198e68;
        case 0x198e6cu: goto label_198e6c;
        case 0x198e70u: goto label_198e70;
        case 0x198e74u: goto label_198e74;
        case 0x198e78u: goto label_198e78;
        case 0x198e7cu: goto label_198e7c;
        case 0x198e80u: goto label_198e80;
        case 0x198e84u: goto label_198e84;
        case 0x198e88u: goto label_198e88;
        case 0x198e8cu: goto label_198e8c;
        case 0x198e90u: goto label_198e90;
        case 0x198e94u: goto label_198e94;
        case 0x198e98u: goto label_198e98;
        case 0x198e9cu: goto label_198e9c;
        case 0x198ea0u: goto label_198ea0;
        case 0x198ea4u: goto label_198ea4;
        case 0x198ea8u: goto label_198ea8;
        case 0x198eacu: goto label_198eac;
        case 0x198eb0u: goto label_198eb0;
        case 0x198eb4u: goto label_198eb4;
        case 0x198eb8u: goto label_198eb8;
        case 0x198ebcu: goto label_198ebc;
        case 0x198ec0u: goto label_198ec0;
        case 0x198ec4u: goto label_198ec4;
        case 0x198ec8u: goto label_198ec8;
        case 0x198eccu: goto label_198ecc;
        case 0x198ed0u: goto label_198ed0;
        case 0x198ed4u: goto label_198ed4;
        case 0x198ed8u: goto label_198ed8;
        case 0x198edcu: goto label_198edc;
        case 0x198ee0u: goto label_198ee0;
        case 0x198ee4u: goto label_198ee4;
        case 0x198ee8u: goto label_198ee8;
        case 0x198eecu: goto label_198eec;
        case 0x198ef0u: goto label_198ef0;
        case 0x198ef4u: goto label_198ef4;
        case 0x198ef8u: goto label_198ef8;
        case 0x198efcu: goto label_198efc;
        case 0x198f00u: goto label_198f00;
        case 0x198f04u: goto label_198f04;
        case 0x198f08u: goto label_198f08;
        case 0x198f0cu: goto label_198f0c;
        case 0x198f10u: goto label_198f10;
        case 0x198f14u: goto label_198f14;
        case 0x198f18u: goto label_198f18;
        case 0x198f1cu: goto label_198f1c;
        case 0x198f20u: goto label_198f20;
        case 0x198f24u: goto label_198f24;
        case 0x198f28u: goto label_198f28;
        case 0x198f2cu: goto label_198f2c;
        case 0x198f30u: goto label_198f30;
        case 0x198f34u: goto label_198f34;
        case 0x198f38u: goto label_198f38;
        case 0x198f3cu: goto label_198f3c;
        case 0x198f40u: goto label_198f40;
        case 0x198f44u: goto label_198f44;
        case 0x198f48u: goto label_198f48;
        case 0x198f4cu: goto label_198f4c;
        case 0x198f50u: goto label_198f50;
        case 0x198f54u: goto label_198f54;
        case 0x198f58u: goto label_198f58;
        case 0x198f5cu: goto label_198f5c;
        case 0x198f60u: goto label_198f60;
        case 0x198f64u: goto label_198f64;
        case 0x198f68u: goto label_198f68;
        case 0x198f6cu: goto label_198f6c;
        case 0x198f70u: goto label_198f70;
        case 0x198f74u: goto label_198f74;
        case 0x198f78u: goto label_198f78;
        case 0x198f7cu: goto label_198f7c;
        case 0x198f80u: goto label_198f80;
        case 0x198f84u: goto label_198f84;
        case 0x198f88u: goto label_198f88;
        case 0x198f8cu: goto label_198f8c;
        case 0x198f90u: goto label_198f90;
        case 0x198f94u: goto label_198f94;
        case 0x198f98u: goto label_198f98;
        case 0x198f9cu: goto label_198f9c;
        case 0x198fa0u: goto label_198fa0;
        case 0x198fa4u: goto label_198fa4;
        case 0x198fa8u: goto label_198fa8;
        case 0x198facu: goto label_198fac;
        case 0x198fb0u: goto label_198fb0;
        case 0x198fb4u: goto label_198fb4;
        case 0x198fb8u: goto label_198fb8;
        case 0x198fbcu: goto label_198fbc;
        case 0x198fc0u: goto label_198fc0;
        case 0x198fc4u: goto label_198fc4;
        case 0x198fc8u: goto label_198fc8;
        case 0x198fccu: goto label_198fcc;
        case 0x198fd0u: goto label_198fd0;
        case 0x198fd4u: goto label_198fd4;
        case 0x198fd8u: goto label_198fd8;
        case 0x198fdcu: goto label_198fdc;
        case 0x198fe0u: goto label_198fe0;
        case 0x198fe4u: goto label_198fe4;
        case 0x198fe8u: goto label_198fe8;
        case 0x198fecu: goto label_198fec;
        case 0x198ff0u: goto label_198ff0;
        case 0x198ff4u: goto label_198ff4;
        case 0x198ff8u: goto label_198ff8;
        case 0x198ffcu: goto label_198ffc;
        case 0x199000u: goto label_199000;
        case 0x199004u: goto label_199004;
        case 0x199008u: goto label_199008;
        case 0x19900cu: goto label_19900c;
        case 0x199010u: goto label_199010;
        case 0x199014u: goto label_199014;
        case 0x199018u: goto label_199018;
        case 0x19901cu: goto label_19901c;
        case 0x199020u: goto label_199020;
        case 0x199024u: goto label_199024;
        case 0x199028u: goto label_199028;
        case 0x19902cu: goto label_19902c;
        case 0x199030u: goto label_199030;
        case 0x199034u: goto label_199034;
        case 0x199038u: goto label_199038;
        case 0x19903cu: goto label_19903c;
        case 0x199040u: goto label_199040;
        case 0x199044u: goto label_199044;
        case 0x199048u: goto label_199048;
        case 0x19904cu: goto label_19904c;
        case 0x199050u: goto label_199050;
        case 0x199054u: goto label_199054;
        case 0x199058u: goto label_199058;
        case 0x19905cu: goto label_19905c;
        case 0x199060u: goto label_199060;
        case 0x199064u: goto label_199064;
        case 0x199068u: goto label_199068;
        case 0x19906cu: goto label_19906c;
        case 0x199070u: goto label_199070;
        case 0x199074u: goto label_199074;
        case 0x199078u: goto label_199078;
        case 0x19907cu: goto label_19907c;
        case 0x199080u: goto label_199080;
        case 0x199084u: goto label_199084;
        case 0x199088u: goto label_199088;
        case 0x19908cu: goto label_19908c;
        case 0x199090u: goto label_199090;
        case 0x199094u: goto label_199094;
        case 0x199098u: goto label_199098;
        case 0x19909cu: goto label_19909c;
        case 0x1990a0u: goto label_1990a0;
        case 0x1990a4u: goto label_1990a4;
        case 0x1990a8u: goto label_1990a8;
        case 0x1990acu: goto label_1990ac;
        case 0x1990b0u: goto label_1990b0;
        case 0x1990b4u: goto label_1990b4;
        case 0x1990b8u: goto label_1990b8;
        case 0x1990bcu: goto label_1990bc;
        case 0x1990c0u: goto label_1990c0;
        case 0x1990c4u: goto label_1990c4;
        case 0x1990c8u: goto label_1990c8;
        case 0x1990ccu: goto label_1990cc;
        case 0x1990d0u: goto label_1990d0;
        case 0x1990d4u: goto label_1990d4;
        case 0x1990d8u: goto label_1990d8;
        case 0x1990dcu: goto label_1990dc;
        case 0x1990e0u: goto label_1990e0;
        case 0x1990e4u: goto label_1990e4;
        case 0x1990e8u: goto label_1990e8;
        case 0x1990ecu: goto label_1990ec;
        case 0x1990f0u: goto label_1990f0;
        case 0x1990f4u: goto label_1990f4;
        case 0x1990f8u: goto label_1990f8;
        case 0x1990fcu: goto label_1990fc;
        case 0x199100u: goto label_199100;
        case 0x199104u: goto label_199104;
        case 0x199108u: goto label_199108;
        case 0x19910cu: goto label_19910c;
        case 0x199110u: goto label_199110;
        case 0x199114u: goto label_199114;
        case 0x199118u: goto label_199118;
        case 0x19911cu: goto label_19911c;
        case 0x199120u: goto label_199120;
        case 0x199124u: goto label_199124;
        case 0x199128u: goto label_199128;
        case 0x19912cu: goto label_19912c;
        case 0x199130u: goto label_199130;
        case 0x199134u: goto label_199134;
        case 0x199138u: goto label_199138;
        case 0x19913cu: goto label_19913c;
        case 0x199140u: goto label_199140;
        case 0x199144u: goto label_199144;
        case 0x199148u: goto label_199148;
        case 0x19914cu: goto label_19914c;
        case 0x199150u: goto label_199150;
        case 0x199154u: goto label_199154;
        case 0x199158u: goto label_199158;
        case 0x19915cu: goto label_19915c;
        case 0x199160u: goto label_199160;
        case 0x199164u: goto label_199164;
        case 0x199168u: goto label_199168;
        case 0x19916cu: goto label_19916c;
        case 0x199170u: goto label_199170;
        case 0x199174u: goto label_199174;
        case 0x199178u: goto label_199178;
        case 0x19917cu: goto label_19917c;
        case 0x199180u: goto label_199180;
        case 0x199184u: goto label_199184;
        case 0x199188u: goto label_199188;
        case 0x19918cu: goto label_19918c;
        case 0x199190u: goto label_199190;
        case 0x199194u: goto label_199194;
        case 0x199198u: goto label_199198;
        case 0x19919cu: goto label_19919c;
        case 0x1991a0u: goto label_1991a0;
        case 0x1991a4u: goto label_1991a4;
        case 0x1991a8u: goto label_1991a8;
        case 0x1991acu: goto label_1991ac;
        case 0x1991b0u: goto label_1991b0;
        case 0x1991b4u: goto label_1991b4;
        case 0x1991b8u: goto label_1991b8;
        case 0x1991bcu: goto label_1991bc;
        case 0x1991c0u: goto label_1991c0;
        case 0x1991c4u: goto label_1991c4;
        case 0x1991c8u: goto label_1991c8;
        case 0x1991ccu: goto label_1991cc;
        case 0x1991d0u: goto label_1991d0;
        case 0x1991d4u: goto label_1991d4;
        case 0x1991d8u: goto label_1991d8;
        case 0x1991dcu: goto label_1991dc;
        case 0x1991e0u: goto label_1991e0;
        case 0x1991e4u: goto label_1991e4;
        case 0x1991e8u: goto label_1991e8;
        case 0x1991ecu: goto label_1991ec;
        case 0x1991f0u: goto label_1991f0;
        case 0x1991f4u: goto label_1991f4;
        case 0x1991f8u: goto label_1991f8;
        case 0x1991fcu: goto label_1991fc;
        case 0x199200u: goto label_199200;
        case 0x199204u: goto label_199204;
        case 0x199208u: goto label_199208;
        case 0x19920cu: goto label_19920c;
        case 0x199210u: goto label_199210;
        case 0x199214u: goto label_199214;
        case 0x199218u: goto label_199218;
        case 0x19921cu: goto label_19921c;
        case 0x199220u: goto label_199220;
        case 0x199224u: goto label_199224;
        case 0x199228u: goto label_199228;
        case 0x19922cu: goto label_19922c;
        case 0x199230u: goto label_199230;
        case 0x199234u: goto label_199234;
        case 0x199238u: goto label_199238;
        case 0x19923cu: goto label_19923c;
        case 0x199240u: goto label_199240;
        case 0x199244u: goto label_199244;
        case 0x199248u: goto label_199248;
        case 0x19924cu: goto label_19924c;
        case 0x199250u: goto label_199250;
        case 0x199254u: goto label_199254;
        case 0x199258u: goto label_199258;
        case 0x19925cu: goto label_19925c;
        case 0x199260u: goto label_199260;
        case 0x199264u: goto label_199264;
        case 0x199268u: goto label_199268;
        case 0x19926cu: goto label_19926c;
        case 0x199270u: goto label_199270;
        case 0x199274u: goto label_199274;
        case 0x199278u: goto label_199278;
        case 0x19927cu: goto label_19927c;
        case 0x199280u: goto label_199280;
        case 0x199284u: goto label_199284;
        case 0x199288u: goto label_199288;
        case 0x19928cu: goto label_19928c;
        case 0x199290u: goto label_199290;
        case 0x199294u: goto label_199294;
        case 0x199298u: goto label_199298;
        case 0x19929cu: goto label_19929c;
        case 0x1992a0u: goto label_1992a0;
        case 0x1992a4u: goto label_1992a4;
        case 0x1992a8u: goto label_1992a8;
        case 0x1992acu: goto label_1992ac;
        case 0x1992b0u: goto label_1992b0;
        case 0x1992b4u: goto label_1992b4;
        case 0x1992b8u: goto label_1992b8;
        case 0x1992bcu: goto label_1992bc;
        case 0x1992c0u: goto label_1992c0;
        case 0x1992c4u: goto label_1992c4;
        case 0x1992c8u: goto label_1992c8;
        case 0x1992ccu: goto label_1992cc;
        case 0x1992d0u: goto label_1992d0;
        case 0x1992d4u: goto label_1992d4;
        case 0x1992d8u: goto label_1992d8;
        case 0x1992dcu: goto label_1992dc;
        case 0x1992e0u: goto label_1992e0;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992e8u: goto label_1992e8;
        case 0x1992ecu: goto label_1992ec;
        case 0x1992f0u: goto label_1992f0;
        case 0x1992f4u: goto label_1992f4;
        case 0x1992f8u: goto label_1992f8;
        case 0x1992fcu: goto label_1992fc;
        case 0x199300u: goto label_199300;
        case 0x199304u: goto label_199304;
        case 0x199308u: goto label_199308;
        case 0x19930cu: goto label_19930c;
        case 0x199310u: goto label_199310;
        case 0x199314u: goto label_199314;
        case 0x199318u: goto label_199318;
        case 0x19931cu: goto label_19931c;
        case 0x199320u: goto label_199320;
        case 0x199324u: goto label_199324;
        case 0x199328u: goto label_199328;
        case 0x19932cu: goto label_19932c;
        case 0x199330u: goto label_199330;
        case 0x199334u: goto label_199334;
        case 0x199338u: goto label_199338;
        case 0x19933cu: goto label_19933c;
        case 0x199340u: goto label_199340;
        case 0x199344u: goto label_199344;
        case 0x199348u: goto label_199348;
        case 0x19934cu: goto label_19934c;
        case 0x199350u: goto label_199350;
        case 0x199354u: goto label_199354;
        case 0x199358u: goto label_199358;
        case 0x19935cu: goto label_19935c;
        case 0x199360u: goto label_199360;
        case 0x199364u: goto label_199364;
        case 0x199368u: goto label_199368;
        case 0x19936cu: goto label_19936c;
        case 0x199370u: goto label_199370;
        case 0x199374u: goto label_199374;
        case 0x199378u: goto label_199378;
        case 0x19937cu: goto label_19937c;
        case 0x199380u: goto label_199380;
        case 0x199384u: goto label_199384;
        case 0x199388u: goto label_199388;
        case 0x19938cu: goto label_19938c;
        case 0x199390u: goto label_199390;
        case 0x199394u: goto label_199394;
        case 0x199398u: goto label_199398;
        case 0x19939cu: goto label_19939c;
        case 0x1993a0u: goto label_1993a0;
        case 0x1993a4u: goto label_1993a4;
        case 0x1993a8u: goto label_1993a8;
        case 0x1993acu: goto label_1993ac;
        case 0x1993b0u: goto label_1993b0;
        case 0x1993b4u: goto label_1993b4;
        case 0x1993b8u: goto label_1993b8;
        case 0x1993bcu: goto label_1993bc;
        case 0x1993c0u: goto label_1993c0;
        case 0x1993c4u: goto label_1993c4;
        case 0x1993c8u: goto label_1993c8;
        case 0x1993ccu: goto label_1993cc;
        case 0x1993d0u: goto label_1993d0;
        case 0x1993d4u: goto label_1993d4;
        case 0x1993d8u: goto label_1993d8;
        case 0x1993dcu: goto label_1993dc;
        case 0x1993e0u: goto label_1993e0;
        case 0x1993e4u: goto label_1993e4;
        case 0x1993e8u: goto label_1993e8;
        case 0x1993ecu: goto label_1993ec;
        case 0x1993f0u: goto label_1993f0;
        case 0x1993f4u: goto label_1993f4;
        case 0x1993f8u: goto label_1993f8;
        case 0x1993fcu: goto label_1993fc;
        case 0x199400u: goto label_199400;
        case 0x199404u: goto label_199404;
        case 0x199408u: goto label_199408;
        case 0x19940cu: goto label_19940c;
        case 0x199410u: goto label_199410;
        case 0x199414u: goto label_199414;
        case 0x199418u: goto label_199418;
        case 0x19941cu: goto label_19941c;
        case 0x199420u: goto label_199420;
        case 0x199424u: goto label_199424;
        case 0x199428u: goto label_199428;
        case 0x19942cu: goto label_19942c;
        case 0x199430u: goto label_199430;
        case 0x199434u: goto label_199434;
        case 0x199438u: goto label_199438;
        case 0x19943cu: goto label_19943c;
        case 0x199440u: goto label_199440;
        case 0x199444u: goto label_199444;
        case 0x199448u: goto label_199448;
        case 0x19944cu: goto label_19944c;
        case 0x199450u: goto label_199450;
        case 0x199454u: goto label_199454;
        case 0x199458u: goto label_199458;
        case 0x19945cu: goto label_19945c;
        case 0x199460u: goto label_199460;
        case 0x199464u: goto label_199464;
        case 0x199468u: goto label_199468;
        case 0x19946cu: goto label_19946c;
        case 0x199470u: goto label_199470;
        case 0x199474u: goto label_199474;
        case 0x199478u: goto label_199478;
        case 0x19947cu: goto label_19947c;
        case 0x199480u: goto label_199480;
        case 0x199484u: goto label_199484;
        case 0x199488u: goto label_199488;
        case 0x19948cu: goto label_19948c;
        case 0x199490u: goto label_199490;
        case 0x199494u: goto label_199494;
        case 0x199498u: goto label_199498;
        case 0x19949cu: goto label_19949c;
        case 0x1994a0u: goto label_1994a0;
        case 0x1994a4u: goto label_1994a4;
        case 0x1994a8u: goto label_1994a8;
        case 0x1994acu: goto label_1994ac;
        case 0x1994b0u: goto label_1994b0;
        case 0x1994b4u: goto label_1994b4;
        case 0x1994b8u: goto label_1994b8;
        case 0x1994bcu: goto label_1994bc;
        case 0x1994c0u: goto label_1994c0;
        case 0x1994c4u: goto label_1994c4;
        case 0x1994c8u: goto label_1994c8;
        case 0x1994ccu: goto label_1994cc;
        case 0x1994d0u: goto label_1994d0;
        case 0x1994d4u: goto label_1994d4;
        case 0x1994d8u: goto label_1994d8;
        case 0x1994dcu: goto label_1994dc;
        case 0x1994e0u: goto label_1994e0;
        case 0x1994e4u: goto label_1994e4;
        case 0x1994e8u: goto label_1994e8;
        case 0x1994ecu: goto label_1994ec;
        case 0x1994f0u: goto label_1994f0;
        case 0x1994f4u: goto label_1994f4;
        case 0x1994f8u: goto label_1994f8;
        case 0x1994fcu: goto label_1994fc;
        case 0x199500u: goto label_199500;
        case 0x199504u: goto label_199504;
        case 0x199508u: goto label_199508;
        case 0x19950cu: goto label_19950c;
        default: break;
    }

    ctx->pc = 0x1986b0u;

label_1986b0:
    // 0x1986b0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1986b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_1986b4:
    // 0x1986b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1986b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1986b8:
    // 0x1986b8: 0x9084af65  lbu         $a0, -0x509B($a0)
    ctx->pc = 0x1986b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294946661)));
label_1986bc:
    // 0x1986bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1986bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_1986c0:
    // 0x1986c0: 0xa065d4b0  sb          $a1, -0x2B50($v1)
    ctx->pc = 0x1986c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294956208), (uint8_t)GPR_U32(ctx, 5));
label_1986c4:
    // 0x1986c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1986c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_1986c8:
    // 0x1986c8: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1986c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_1986cc:
    // 0x1986cc: 0x3e00008  jr          $ra
label_1986d0:
    if (ctx->pc == 0x1986D0u) {
        ctx->pc = 0x1986D0u;
            // 0x1986d0: 0xa064af65  sb          $a0, -0x509B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294946661), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x1986D4u;
        goto label_1986d4;
    }
    ctx->pc = 0x1986CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1986D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1986CCu;
            // 0x1986d0: 0xa064af65  sb          $a0, -0x509B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294946661), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1986D4u;
label_1986d4:
    // 0x1986d4: 0x0  nop
    ctx->pc = 0x1986d4u;
    // NOP
label_1986d8:
    // 0x1986d8: 0x0  nop
    ctx->pc = 0x1986d8u;
    // NOP
label_1986dc:
    // 0x1986dc: 0x0  nop
    ctx->pc = 0x1986dcu;
    // NOP
label_1986e0:
    // 0x1986e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1986e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1986e4:
    // 0x1986e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1986e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1986e8:
    // 0x1986e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1986e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1986ec:
    // 0x1986ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1986ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1986f0:
    // 0x1986f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1986f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1986f4:
    // 0x1986f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1986f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1986f8:
    // 0x1986f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1986f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1986fc:
    // 0x1986fc: 0x3c15009c  lui         $s5, 0x9C
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)156 << 16));
label_198700:
    // 0x198700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x198700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_198704:
    // 0x198704: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_198708:
    // 0x198708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19870c:
    // 0x19870c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_198710:
    // 0x198710: 0x8c52da28  lw          $s2, -0x25D8($v0)
    ctx->pc = 0x198710u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957608)));
label_198714:
    // 0x198714: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x198714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_198718:
    // 0x198718: 0x8042d4b0  lb          $v0, -0x2B50($v0)
    ctx->pc = 0x198718u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956208)));
label_19871c:
    // 0x19871c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_198720:
    if (ctx->pc == 0x198720u) {
        ctx->pc = 0x198720u;
            // 0x198720: 0x26b5ae00  addiu       $s5, $s5, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946304));
        ctx->pc = 0x198724u;
        goto label_198724;
    }
    ctx->pc = 0x19871Cu;
    {
        const bool branch_taken_0x19871c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19871Cu;
            // 0x198720: 0x26b5ae00  addiu       $s5, $s5, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19871c) {
            ctx->pc = 0x198750u;
            goto label_198750;
        }
    }
    ctx->pc = 0x198724u;
label_198724:
    // 0x198724: 0x92a20165  lbu         $v0, 0x165($s5)
    ctx->pc = 0x198724u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 357)));
label_198728:
    // 0x198728: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x198728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_19872c:
    // 0x19872c: 0xc055728  jal         func_155CA0
label_198730:
    if (ctx->pc == 0x198730u) {
        ctx->pc = 0x198730u;
            // 0x198730: 0xa2a20165  sb          $v0, 0x165($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x198734u;
        goto label_198734;
    }
    ctx->pc = 0x19872Cu;
    SET_GPR_U32(ctx, 31, 0x198734u);
    ctx->pc = 0x198730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19872Cu;
            // 0x198730: 0xa2a20165  sb          $v0, 0x165($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198734u; }
        if (ctx->pc != 0x198734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198734u; }
        if (ctx->pc != 0x198734u) { return; }
    }
    ctx->pc = 0x198734u;
label_198734:
    // 0x198734: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x198734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_198738:
    // 0x198738: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x198738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_19873c:
    // 0x19873c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19873cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_198740:
    // 0x198740: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x198740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_198744:
    // 0x198744: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x198744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_198748:
    // 0x198748: 0x10000365  b           . + 4 + (0x365 << 2)
label_19874c:
    if (ctx->pc == 0x19874Cu) {
        ctx->pc = 0x19874Cu;
            // 0x19874c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x198750u;
        goto label_198750;
    }
    ctx->pc = 0x198748u;
    {
        const bool branch_taken_0x198748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198748u;
            // 0x19874c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198748) {
            ctx->pc = 0x1994E0u;
            goto label_1994e0;
        }
    }
    ctx->pc = 0x198750u;
label_198750:
    // 0x198750: 0x8ed10010  lw          $s1, 0x10($s6)
    ctx->pc = 0x198750u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_198754:
    // 0x198754: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_198758:
    // 0x198758: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x198758u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19875c:
    // 0x19875c: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x19875cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_198760:
    // 0x198760: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x198760u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198764:
    // 0x198764: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198768:
    // 0x198768: 0x19000065  blez        $t0, . + 4 + (0x65 << 2)
label_19876c:
    if (ctx->pc == 0x19876Cu) {
        ctx->pc = 0x19876Cu;
            // 0x19876c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x198770u;
        goto label_198770;
    }
    ctx->pc = 0x198768u;
    {
        const bool branch_taken_0x198768 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x19876Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198768u;
            // 0x19876c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198768) {
            ctx->pc = 0x198900u;
            goto label_198900;
        }
    }
    ctx->pc = 0x198770u;
label_198770:
    // 0x198770: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x198770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_198774:
    // 0x198774: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x198774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_198778:
    // 0x198778: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_19877c:
    if (ctx->pc == 0x19877Cu) {
        ctx->pc = 0x198780u;
        goto label_198780;
    }
    ctx->pc = 0x198778u;
    {
        const bool branch_taken_0x198778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198778) {
            ctx->pc = 0x1988E0u;
            goto label_1988e0;
        }
    }
    ctx->pc = 0x198780u;
label_198780:
    // 0x198780: 0x92870000  lbu         $a3, 0x0($s4)
    ctx->pc = 0x198780u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198784:
    // 0x198784: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x198784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_198788:
    // 0x198788: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x198788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19878c:
    // 0x19878c: 0x2442e930  addiu       $v0, $v0, -0x16D0
    ctx->pc = 0x19878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961456));
label_198790:
    // 0x198790: 0x72103  sra         $a0, $a3, 4
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
label_198794:
    // 0x198794: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198794u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198798:
    // 0x198798: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x198798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_19879c:
    // 0x19879c: 0x30e4000f  andi        $a0, $a3, 0xF
    ctx->pc = 0x19879cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_1987a0:
    // 0x1987a0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1987a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1987a4:
    // 0x1987a4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1987a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1987a8:
    // 0x1987a8: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x1987a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_1987ac:
    // 0x1987ac: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1987acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1987b0:
    // 0x1987b0: 0x1052023  subu        $a0, $t0, $a1
    ctx->pc = 0x1987b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1987b4:
    // 0x1987b4: 0x2ca10011  sltiu       $at, $a1, 0x11
    ctx->pc = 0x1987b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_1987b8:
    // 0x1987b8: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
label_1987bc:
    if (ctx->pc == 0x1987BCu) {
        ctx->pc = 0x1987BCu;
            // 0x1987bc: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x1987C0u;
        goto label_1987c0;
    }
    ctx->pc = 0x1987B8u;
    {
        const bool branch_taken_0x1987b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1987B8u;
            // 0x1987bc: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987b8) {
            ctx->pc = 0x198900u;
            goto label_198900;
        }
    }
    ctx->pc = 0x1987C0u;
label_1987c0:
    // 0x1987c0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1987c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1987c4:
    // 0x1987c4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1987c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_1987c8:
    // 0x1987c8: 0x24a5ebd0  addiu       $a1, $a1, -0x1430
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962128));
label_1987cc:
    // 0x1987cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1987ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1987d0:
    // 0x1987d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1987d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1987d4:
    // 0x1987d4: 0x800008  jr          $a0
label_1987d8:
    if (ctx->pc == 0x1987D8u) {
        ctx->pc = 0x1987DCu;
        goto label_1987dc;
    }
    ctx->pc = 0x1987D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1987E0u: goto label_1987e0;
            case 0x1987F0u: goto label_1987f0;
            case 0x198800u: goto label_198800;
            case 0x198810u: goto label_198810;
            case 0x198820u: goto label_198820;
            case 0x198830u: goto label_198830;
            case 0x198840u: goto label_198840;
            case 0x198850u: goto label_198850;
            case 0x198860u: goto label_198860;
            case 0x198870u: goto label_198870;
            case 0x198880u: goto label_198880;
            case 0x198890u: goto label_198890;
            case 0x1988A0u: goto label_1988a0;
            case 0x1988B0u: goto label_1988b0;
            case 0x1988C0u: goto label_1988c0;
            case 0x1988D0u: goto label_1988d0;
            case 0x198900u: goto label_198900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1987DCu;
label_1987dc:
    // 0x1987dc: 0x0  nop
    ctx->pc = 0x1987dcu;
    // NOP
label_1987e0:
    // 0x1987e0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1987e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1987e4:
    // 0x1987e4: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x1987e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_1987e8:
    // 0x1987e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1987e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1987ec:
    // 0x1987ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1987ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1987f0:
    // 0x1987f0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1987f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1987f4:
    // 0x1987f4: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x1987f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_1987f8:
    // 0x1987f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1987f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1987fc:
    // 0x1987fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1987fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198800:
    // 0x198800: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198800u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198804:
    // 0x198804: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198804u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198808:
    // 0x198808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19880c:
    // 0x19880c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19880cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198810:
    // 0x198810: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198814:
    // 0x198814: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198814u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198818:
    // 0x198818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19881c:
    // 0x19881c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19881cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198820:
    // 0x198820: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198820u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198824:
    // 0x198824: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198824u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198828:
    // 0x198828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19882c:
    // 0x19882c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19882cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198830:
    // 0x198830: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198830u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198834:
    // 0x198834: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198834u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198838:
    // 0x198838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19883c:
    // 0x19883c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19883cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198840:
    // 0x198840: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198844:
    // 0x198844: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198844u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198848:
    // 0x198848: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19884c:
    // 0x19884c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198850:
    // 0x198850: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198850u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198854:
    // 0x198854: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198854u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198858:
    // 0x198858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19885c:
    // 0x19885c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19885cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198860:
    // 0x198860: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198860u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198864:
    // 0x198864: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198864u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198868:
    // 0x198868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19886c:
    // 0x19886c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19886cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198870:
    // 0x198870: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198870u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198874:
    // 0x198874: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198874u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198878:
    // 0x198878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19887c:
    // 0x19887c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19887cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198880:
    // 0x198880: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198880u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198884:
    // 0x198884: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198884u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198888:
    // 0x198888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19888c:
    // 0x19888c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19888cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198890:
    // 0x198890: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x198890u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_198894:
    // 0x198894: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x198894u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_198898:
    // 0x198898: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19889c:
    // 0x19889c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19889cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1988a0:
    // 0x1988a0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1988a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1988a4:
    // 0x1988a4: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x1988a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_1988a8:
    // 0x1988a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1988a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1988ac:
    // 0x1988ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1988acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1988b0:
    // 0x1988b0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1988b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1988b4:
    // 0x1988b4: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x1988b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_1988b8:
    // 0x1988b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1988b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1988bc:
    // 0x1988bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1988bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1988c0:
    // 0x1988c0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1988c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1988c4:
    // 0x1988c4: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x1988c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_1988c8:
    // 0x1988c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1988c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1988cc:
    // 0x1988cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1988ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1988d0:
    // 0x1988d0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1988d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1988d4:
    // 0x1988d4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1988d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1988d8:
    // 0x1988d8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1988dc:
    if (ctx->pc == 0x1988DCu) {
        ctx->pc = 0x1988DCu;
            // 0x1988dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x1988E0u;
        goto label_1988e0;
    }
    ctx->pc = 0x1988D8u;
    {
        const bool branch_taken_0x1988d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1988D8u;
            // 0x1988dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988d8) {
            ctx->pc = 0x198900u;
            goto label_198900;
        }
    }
    ctx->pc = 0x1988E0u;
label_1988e0:
    // 0x1988e0: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x1988e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1988e4:
    // 0x1988e4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1988e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1988e8:
    // 0x1988e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1988e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1988ec:
    // 0x1988ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1988ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1988f0:
    // 0x1988f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1988f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1988f4:
    // 0x1988f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1988f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1988f8:
    // 0x1988f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1988f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1988fc:
    // 0x1988fc: 0x0  nop
    ctx->pc = 0x1988fcu;
    // NOP
label_198900:
    // 0x198900: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198904:
    // 0x198904: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
label_198908:
    if (ctx->pc == 0x198908u) {
        ctx->pc = 0x19890Cu;
        goto label_19890c;
    }
    ctx->pc = 0x198904u;
    {
        const bool branch_taken_0x198904 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x198904) {
            ctx->pc = 0x198AA0u;
            goto label_198aa0;
        }
    }
    ctx->pc = 0x19890Cu;
label_19890c:
    // 0x19890c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19890cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_198910:
    // 0x198910: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x198910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_198914:
    // 0x198914: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x198914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_198918:
    // 0x198918: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x198918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_19891c:
    // 0x19891c: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
label_198920:
    if (ctx->pc == 0x198920u) {
        ctx->pc = 0x198924u;
        goto label_198924;
    }
    ctx->pc = 0x19891Cu;
    {
        const bool branch_taken_0x19891c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19891c) {
            ctx->pc = 0x198A80u;
            goto label_198a80;
        }
    }
    ctx->pc = 0x198924u;
label_198924:
    // 0x198924: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x198924u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198928:
    // 0x198928: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x198928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_19892c:
    // 0x19892c: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x19892cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
label_198930:
    // 0x198930: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x198930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_198934:
    // 0x198934: 0x82903  sra         $a1, $t0, 4
    ctx->pc = 0x198934u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 4));
label_198938:
    // 0x198938: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19893c:
    // 0x19893c: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x19893cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_198940:
    // 0x198940: 0x3105000f  andi        $a1, $t0, 0xF
    ctx->pc = 0x198940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_198944:
    // 0x198944: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_198948:
    // 0x198948: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x198948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_19894c:
    // 0x19894c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x19894cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_198950:
    // 0x198950: 0x2662023  subu        $a0, $s3, $a2
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_198954:
    // 0x198954: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x198954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198958:
    // 0x198958: 0x2ca10011  sltiu       $at, $a1, 0x11
    ctx->pc = 0x198958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_19895c:
    // 0x19895c: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_198960:
    if (ctx->pc == 0x198960u) {
        ctx->pc = 0x198960u;
            // 0x198960: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x198964u;
        goto label_198964;
    }
    ctx->pc = 0x19895Cu;
    {
        const bool branch_taken_0x19895c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19895Cu;
            // 0x198960: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19895c) {
            ctx->pc = 0x198AA0u;
            goto label_198aa0;
        }
    }
    ctx->pc = 0x198964u;
label_198964:
    // 0x198964: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x198964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_198968:
    // 0x198968: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x198968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_19896c:
    // 0x19896c: 0x24a5eb80  addiu       $a1, $a1, -0x1480
    ctx->pc = 0x19896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962048));
label_198970:
    // 0x198970: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x198970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198974:
    // 0x198974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x198974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_198978:
    // 0x198978: 0x400008  jr          $v0
label_19897c:
    if (ctx->pc == 0x19897Cu) {
        ctx->pc = 0x198980u;
        goto label_198980;
    }
    ctx->pc = 0x198978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198980u: goto label_198980;
            case 0x198990u: goto label_198990;
            case 0x1989A0u: goto label_1989a0;
            case 0x1989B0u: goto label_1989b0;
            case 0x1989C0u: goto label_1989c0;
            case 0x1989D0u: goto label_1989d0;
            case 0x1989E0u: goto label_1989e0;
            case 0x1989F0u: goto label_1989f0;
            case 0x198A00u: goto label_198a00;
            case 0x198A10u: goto label_198a10;
            case 0x198A20u: goto label_198a20;
            case 0x198A30u: goto label_198a30;
            case 0x198A40u: goto label_198a40;
            case 0x198A50u: goto label_198a50;
            case 0x198A60u: goto label_198a60;
            case 0x198A70u: goto label_198a70;
            case 0x198AA0u: goto label_198aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198980u;
label_198980:
    // 0x198980: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198980u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198984:
    // 0x198984: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198984u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198988:
    // 0x198988: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19898c:
    // 0x19898c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19898cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198990:
    // 0x198990: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198990u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198994:
    // 0x198994: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198994u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198998:
    // 0x198998: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19899c:
    // 0x19899c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19899cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1989a0:
    // 0x1989a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1989a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1989a4:
    // 0x1989a4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1989a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1989a8:
    // 0x1989a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1989a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1989ac:
    // 0x1989ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1989acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1989b0:
    // 0x1989b0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1989b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1989b4:
    // 0x1989b4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1989b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1989b8:
    // 0x1989b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1989b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1989bc:
    // 0x1989bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1989bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1989c0:
    // 0x1989c0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1989c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1989c4:
    // 0x1989c4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1989c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1989c8:
    // 0x1989c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1989c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1989cc:
    // 0x1989cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1989ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1989d0:
    // 0x1989d0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1989d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1989d4:
    // 0x1989d4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1989d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1989d8:
    // 0x1989d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1989d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1989dc:
    // 0x1989dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1989dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1989e0:
    // 0x1989e0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1989e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1989e4:
    // 0x1989e4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1989e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1989e8:
    // 0x1989e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1989e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1989ec:
    // 0x1989ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1989ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1989f0:
    // 0x1989f0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1989f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1989f4:
    // 0x1989f4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1989f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1989f8:
    // 0x1989f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1989f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1989fc:
    // 0x1989fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1989fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198a00:
    // 0x198a00: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198a04:
    // 0x198a04: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198a04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198a08:
    // 0x198a08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198a0c:
    // 0x198a0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198a0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198a10:
    // 0x198a10: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198a14:
    // 0x198a14: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198a14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198a18:
    // 0x198a18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198a1c:
    // 0x198a1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198a20:
    // 0x198a20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198a20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198a24:
    // 0x198a24: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198a24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198a28:
    // 0x198a28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198a2c:
    // 0x198a2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198a30:
    // 0x198a30: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198a34:
    // 0x198a34: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198a34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198a38:
    // 0x198a38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198a3c:
    // 0x198a3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198a40:
    // 0x198a40: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198a40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198a44:
    // 0x198a44: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198a44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198a48:
    // 0x198a48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198a4c:
    // 0x198a4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198a50:
    // 0x198a50: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198a50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198a54:
    // 0x198a54: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198a54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198a58:
    // 0x198a58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198a5c:
    // 0x198a5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198a60:
    // 0x198a60: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198a60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198a64:
    // 0x198a64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198a64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198a68:
    // 0x198a68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198a6c:
    // 0x198a6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198a70:
    // 0x198a70: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198a70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198a74:
    // 0x198a74: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198a74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198a78:
    // 0x198a78: 0x10000009  b           . + 4 + (0x9 << 2)
label_198a7c:
    if (ctx->pc == 0x198A7Cu) {
        ctx->pc = 0x198A7Cu;
            // 0x198a7c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x198A80u;
        goto label_198a80;
    }
    ctx->pc = 0x198A78u;
    {
        const bool branch_taken_0x198a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A78u;
            // 0x198a7c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a78) {
            ctx->pc = 0x198AA0u;
            goto label_198aa0;
        }
    }
    ctx->pc = 0x198A80u;
label_198a80:
    // 0x198a80: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198a84:
    // 0x198a84: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198a84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198a88:
    // 0x198a88: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198a88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198a8c:
    // 0x198a8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198a90:
    // 0x198a90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198a90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198a94:
    // 0x198a94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_198a98:
    // 0x198a98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x198a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_198a9c:
    // 0x198a9c: 0x0  nop
    ctx->pc = 0x198a9cu;
    // NOP
label_198aa0:
    // 0x198aa0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198aa4:
    // 0x198aa4: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
label_198aa8:
    if (ctx->pc == 0x198AA8u) {
        ctx->pc = 0x198AACu;
        goto label_198aac;
    }
    ctx->pc = 0x198AA4u;
    {
        const bool branch_taken_0x198aa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x198aa4) {
            ctx->pc = 0x198C40u;
            goto label_198c40;
        }
    }
    ctx->pc = 0x198AACu;
label_198aac:
    // 0x198aac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_198ab0:
    // 0x198ab0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_198ab4:
    // 0x198ab4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x198ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_198ab8:
    // 0x198ab8: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x198ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_198abc:
    // 0x198abc: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
label_198ac0:
    if (ctx->pc == 0x198AC0u) {
        ctx->pc = 0x198AC4u;
        goto label_198ac4;
    }
    ctx->pc = 0x198ABCu;
    {
        const bool branch_taken_0x198abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198abc) {
            ctx->pc = 0x198C20u;
            goto label_198c20;
        }
    }
    ctx->pc = 0x198AC4u;
label_198ac4:
    // 0x198ac4: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x198ac4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198ac8:
    // 0x198ac8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x198ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_198acc:
    // 0x198acc: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x198accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
label_198ad0:
    // 0x198ad0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x198ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_198ad4:
    // 0x198ad4: 0x82903  sra         $a1, $t0, 4
    ctx->pc = 0x198ad4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 4));
label_198ad8:
    // 0x198ad8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198ad8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198adc:
    // 0x198adc: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x198adcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_198ae0:
    // 0x198ae0: 0x3105000f  andi        $a1, $t0, 0xF
    ctx->pc = 0x198ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_198ae4:
    // 0x198ae4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x198ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_198ae8:
    // 0x198ae8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x198ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_198aec:
    // 0x198aec: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x198aecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_198af0:
    // 0x198af0: 0x2662023  subu        $a0, $s3, $a2
    ctx->pc = 0x198af0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_198af4:
    // 0x198af4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x198af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198af8:
    // 0x198af8: 0x2ca10011  sltiu       $at, $a1, 0x11
    ctx->pc = 0x198af8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_198afc:
    // 0x198afc: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_198b00:
    if (ctx->pc == 0x198B00u) {
        ctx->pc = 0x198B00u;
            // 0x198b00: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x198B04u;
        goto label_198b04;
    }
    ctx->pc = 0x198AFCu;
    {
        const bool branch_taken_0x198afc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AFCu;
            // 0x198b00: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198afc) {
            ctx->pc = 0x198C40u;
            goto label_198c40;
        }
    }
    ctx->pc = 0x198B04u;
label_198b04:
    // 0x198b04: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x198b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_198b08:
    // 0x198b08: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x198b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_198b0c:
    // 0x198b0c: 0x24a5eb30  addiu       $a1, $a1, -0x14D0
    ctx->pc = 0x198b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961968));
label_198b10:
    // 0x198b10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x198b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198b14:
    // 0x198b14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x198b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_198b18:
    // 0x198b18: 0x400008  jr          $v0
label_198b1c:
    if (ctx->pc == 0x198B1Cu) {
        ctx->pc = 0x198B20u;
        goto label_198b20;
    }
    ctx->pc = 0x198B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198B20u: goto label_198b20;
            case 0x198B30u: goto label_198b30;
            case 0x198B40u: goto label_198b40;
            case 0x198B50u: goto label_198b50;
            case 0x198B60u: goto label_198b60;
            case 0x198B70u: goto label_198b70;
            case 0x198B80u: goto label_198b80;
            case 0x198B90u: goto label_198b90;
            case 0x198BA0u: goto label_198ba0;
            case 0x198BB0u: goto label_198bb0;
            case 0x198BC0u: goto label_198bc0;
            case 0x198BD0u: goto label_198bd0;
            case 0x198BE0u: goto label_198be0;
            case 0x198BF0u: goto label_198bf0;
            case 0x198C00u: goto label_198c00;
            case 0x198C10u: goto label_198c10;
            case 0x198C40u: goto label_198c40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198B20u;
label_198b20:
    // 0x198b20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198b20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198b24:
    // 0x198b24: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198b24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198b28:
    // 0x198b28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198b2c:
    // 0x198b2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198b30:
    // 0x198b30: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198b34:
    // 0x198b34: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198b34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198b38:
    // 0x198b38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198b3c:
    // 0x198b3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198b40:
    // 0x198b40: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198b40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198b44:
    // 0x198b44: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198b44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198b48:
    // 0x198b48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198b4c:
    // 0x198b4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198b50:
    // 0x198b50: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198b54:
    // 0x198b54: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198b54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198b58:
    // 0x198b58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198b5c:
    // 0x198b5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198b60:
    // 0x198b60: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198b64:
    // 0x198b64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198b64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198b68:
    // 0x198b68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198b6c:
    // 0x198b6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198b6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198b70:
    // 0x198b70: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198b70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198b74:
    // 0x198b74: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198b74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198b78:
    // 0x198b78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198b7c:
    // 0x198b7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198b80:
    // 0x198b80: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198b80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198b84:
    // 0x198b84: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198b84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198b88:
    // 0x198b88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198b8c:
    // 0x198b8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198b90:
    // 0x198b90: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198b94:
    // 0x198b94: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198b94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198b98:
    // 0x198b98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198b9c:
    // 0x198b9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198ba0:
    // 0x198ba0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198ba0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198ba4:
    // 0x198ba4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198ba8:
    // 0x198ba8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198bac:
    // 0x198bac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198bacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198bb0:
    // 0x198bb0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198bb4:
    // 0x198bb4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198bb8:
    // 0x198bb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198bbc:
    // 0x198bbc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198bbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198bc0:
    // 0x198bc0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198bc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198bc4:
    // 0x198bc4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198bc8:
    // 0x198bc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198bcc:
    // 0x198bcc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198bccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198bd0:
    // 0x198bd0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198bd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198bd4:
    // 0x198bd4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198bd8:
    // 0x198bd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198bdc:
    // 0x198bdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198be0:
    // 0x198be0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198be0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198be4:
    // 0x198be4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198be4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198be8:
    // 0x198be8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198bec:
    // 0x198bec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198bf0:
    // 0x198bf0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198bf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198bf4:
    // 0x198bf4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198bf8:
    // 0x198bf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198bfc:
    // 0x198bfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198bfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198c00:
    // 0x198c00: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198c00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198c04:
    // 0x198c04: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198c04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198c08:
    // 0x198c08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198c0c:
    // 0x198c0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198c10:
    // 0x198c10: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198c10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198c14:
    // 0x198c14: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198c14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198c18:
    // 0x198c18: 0x10000009  b           . + 4 + (0x9 << 2)
label_198c1c:
    if (ctx->pc == 0x198C1Cu) {
        ctx->pc = 0x198C1Cu;
            // 0x198c1c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x198C20u;
        goto label_198c20;
    }
    ctx->pc = 0x198C18u;
    {
        const bool branch_taken_0x198c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C18u;
            // 0x198c1c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c18) {
            ctx->pc = 0x198C40u;
            goto label_198c40;
        }
    }
    ctx->pc = 0x198C20u;
label_198c20:
    // 0x198c20: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x198c20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198c24:
    // 0x198c24: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198c24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198c28:
    // 0x198c28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198c2c:
    // 0x198c2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198c30:
    // 0x198c30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198c34:
    // 0x198c34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_198c38:
    // 0x198c38: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x198c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_198c3c:
    // 0x198c3c: 0x0  nop
    ctx->pc = 0x198c3cu;
    // NOP
label_198c40:
    // 0x198c40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198c44:
    // 0x198c44: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
label_198c48:
    if (ctx->pc == 0x198C48u) {
        ctx->pc = 0x198C4Cu;
        goto label_198c4c;
    }
    ctx->pc = 0x198C44u;
    {
        const bool branch_taken_0x198c44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x198c44) {
            ctx->pc = 0x198DE0u;
            goto label_198de0;
        }
    }
    ctx->pc = 0x198C4Cu;
label_198c4c:
    // 0x198c4c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x198c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_198c50:
    // 0x198c50: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x198c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_198c54:
    // 0x198c54: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x198c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_198c58:
    // 0x198c58: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x198c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_198c5c:
    // 0x198c5c: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
label_198c60:
    if (ctx->pc == 0x198C60u) {
        ctx->pc = 0x198C64u;
        goto label_198c64;
    }
    ctx->pc = 0x198C5Cu;
    {
        const bool branch_taken_0x198c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c5c) {
            ctx->pc = 0x198DC0u;
            goto label_198dc0;
        }
    }
    ctx->pc = 0x198C64u;
label_198c64:
    // 0x198c64: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x198c64u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198c68:
    // 0x198c68: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x198c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_198c6c:
    // 0x198c6c: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x198c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
label_198c70:
    // 0x198c70: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x198c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_198c74:
    // 0x198c74: 0x82903  sra         $a1, $t0, 4
    ctx->pc = 0x198c74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 4));
label_198c78:
    // 0x198c78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198c78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198c7c:
    // 0x198c7c: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x198c7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_198c80:
    // 0x198c80: 0x3105000f  andi        $a1, $t0, 0xF
    ctx->pc = 0x198c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_198c84:
    // 0x198c84: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x198c84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_198c88:
    // 0x198c88: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x198c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_198c8c:
    // 0x198c8c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x198c8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_198c90:
    // 0x198c90: 0x2662023  subu        $a0, $s3, $a2
    ctx->pc = 0x198c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_198c94:
    // 0x198c94: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x198c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198c98:
    // 0x198c98: 0x2ca10011  sltiu       $at, $a1, 0x11
    ctx->pc = 0x198c98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_198c9c:
    // 0x198c9c: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_198ca0:
    if (ctx->pc == 0x198CA0u) {
        ctx->pc = 0x198CA0u;
            // 0x198ca0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x198CA4u;
        goto label_198ca4;
    }
    ctx->pc = 0x198C9Cu;
    {
        const bool branch_taken_0x198c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198C9Cu;
            // 0x198ca0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c9c) {
            ctx->pc = 0x198DE0u;
            goto label_198de0;
        }
    }
    ctx->pc = 0x198CA4u;
label_198ca4:
    // 0x198ca4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x198ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_198ca8:
    // 0x198ca8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x198ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_198cac:
    // 0x198cac: 0x24a5eae0  addiu       $a1, $a1, -0x1520
    ctx->pc = 0x198cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961888));
label_198cb0:
    // 0x198cb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x198cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198cb4:
    // 0x198cb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x198cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_198cb8:
    // 0x198cb8: 0x400008  jr          $v0
label_198cbc:
    if (ctx->pc == 0x198CBCu) {
        ctx->pc = 0x198CC0u;
        goto label_198cc0;
    }
    ctx->pc = 0x198CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198CC0u: goto label_198cc0;
            case 0x198CD0u: goto label_198cd0;
            case 0x198CE0u: goto label_198ce0;
            case 0x198CF0u: goto label_198cf0;
            case 0x198D00u: goto label_198d00;
            case 0x198D10u: goto label_198d10;
            case 0x198D20u: goto label_198d20;
            case 0x198D30u: goto label_198d30;
            case 0x198D40u: goto label_198d40;
            case 0x198D50u: goto label_198d50;
            case 0x198D60u: goto label_198d60;
            case 0x198D70u: goto label_198d70;
            case 0x198D80u: goto label_198d80;
            case 0x198D90u: goto label_198d90;
            case 0x198DA0u: goto label_198da0;
            case 0x198DB0u: goto label_198db0;
            case 0x198DE0u: goto label_198de0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198CC0u;
label_198cc0:
    // 0x198cc0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198cc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198cc4:
    // 0x198cc4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198cc8:
    // 0x198cc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198ccc:
    // 0x198ccc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198cccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198cd0:
    // 0x198cd0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198cd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198cd4:
    // 0x198cd4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198cd8:
    // 0x198cd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198cdc:
    // 0x198cdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198ce0:
    // 0x198ce0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198ce0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198ce4:
    // 0x198ce4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198ce8:
    // 0x198ce8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198cec:
    // 0x198cec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198cecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198cf0:
    // 0x198cf0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198cf4:
    // 0x198cf4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198cf8:
    // 0x198cf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198cfc:
    // 0x198cfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d00:
    // 0x198d00: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d04:
    // 0x198d04: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d08:
    // 0x198d08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d0c:
    // 0x198d0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d10:
    // 0x198d10: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d14:
    // 0x198d14: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d18:
    // 0x198d18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d1c:
    // 0x198d1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d20:
    // 0x198d20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d24:
    // 0x198d24: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d28:
    // 0x198d28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d2c:
    // 0x198d2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d30:
    // 0x198d30: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d34:
    // 0x198d34: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d38:
    // 0x198d38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d3c:
    // 0x198d3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d40:
    // 0x198d40: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d44:
    // 0x198d44: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d48:
    // 0x198d48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d4c:
    // 0x198d4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d50:
    // 0x198d50: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d54:
    // 0x198d54: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d58:
    // 0x198d58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d5c:
    // 0x198d5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d60:
    // 0x198d60: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d64:
    // 0x198d64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d68:
    // 0x198d68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d6c:
    // 0x198d6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d70:
    // 0x198d70: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d74:
    // 0x198d74: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d78:
    // 0x198d78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d7c:
    // 0x198d7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d80:
    // 0x198d80: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d84:
    // 0x198d84: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d88:
    // 0x198d88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d8c:
    // 0x198d8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198d90:
    // 0x198d90: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198d90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198d94:
    // 0x198d94: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198d94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198d98:
    // 0x198d98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198d9c:
    // 0x198d9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198da0:
    // 0x198da0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198da0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198da4:
    // 0x198da4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198da4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198da8:
    // 0x198da8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198dac:
    // 0x198dac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198db0:
    // 0x198db0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198db0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198db4:
    // 0x198db4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198db4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198db8:
    // 0x198db8: 0x10000009  b           . + 4 + (0x9 << 2)
label_198dbc:
    if (ctx->pc == 0x198DBCu) {
        ctx->pc = 0x198DBCu;
            // 0x198dbc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x198DC0u;
        goto label_198dc0;
    }
    ctx->pc = 0x198DB8u;
    {
        const bool branch_taken_0x198db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198DB8u;
            // 0x198dbc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198db8) {
            ctx->pc = 0x198DE0u;
            goto label_198de0;
        }
    }
    ctx->pc = 0x198DC0u;
label_198dc0:
    // 0x198dc0: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x198dc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198dc4:
    // 0x198dc4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198dc8:
    // 0x198dc8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198dcc:
    // 0x198dcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198dd0:
    // 0x198dd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198dd4:
    // 0x198dd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_198dd8:
    // 0x198dd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x198dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_198ddc:
    // 0x198ddc: 0x0  nop
    ctx->pc = 0x198ddcu;
    // NOP
label_198de0:
    // 0x198de0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198de4:
    // 0x198de4: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
label_198de8:
    if (ctx->pc == 0x198DE8u) {
        ctx->pc = 0x198DECu;
        goto label_198dec;
    }
    ctx->pc = 0x198DE4u;
    {
        const bool branch_taken_0x198de4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x198de4) {
            ctx->pc = 0x198F80u;
            goto label_198f80;
        }
    }
    ctx->pc = 0x198DECu;
label_198dec:
    // 0x198dec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x198decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_198df0:
    // 0x198df0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x198df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_198df4:
    // 0x198df4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x198df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_198df8:
    // 0x198df8: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x198df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_198dfc:
    // 0x198dfc: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
label_198e00:
    if (ctx->pc == 0x198E00u) {
        ctx->pc = 0x198E04u;
        goto label_198e04;
    }
    ctx->pc = 0x198DFCu;
    {
        const bool branch_taken_0x198dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198dfc) {
            ctx->pc = 0x198F60u;
            goto label_198f60;
        }
    }
    ctx->pc = 0x198E04u;
label_198e04:
    // 0x198e04: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x198e04u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198e08:
    // 0x198e08: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x198e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_198e0c:
    // 0x198e0c: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x198e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
label_198e10:
    // 0x198e10: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x198e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_198e14:
    // 0x198e14: 0x82903  sra         $a1, $t0, 4
    ctx->pc = 0x198e14u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 4));
label_198e18:
    // 0x198e18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198e18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198e1c:
    // 0x198e1c: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x198e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_198e20:
    // 0x198e20: 0x3105000f  andi        $a1, $t0, 0xF
    ctx->pc = 0x198e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_198e24:
    // 0x198e24: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x198e24u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_198e28:
    // 0x198e28: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x198e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_198e2c:
    // 0x198e2c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x198e2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_198e30:
    // 0x198e30: 0x2662023  subu        $a0, $s3, $a2
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_198e34:
    // 0x198e34: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x198e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198e38:
    // 0x198e38: 0x2ca10011  sltiu       $at, $a1, 0x11
    ctx->pc = 0x198e38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_198e3c:
    // 0x198e3c: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_198e40:
    if (ctx->pc == 0x198E40u) {
        ctx->pc = 0x198E40u;
            // 0x198e40: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x198E44u;
        goto label_198e44;
    }
    ctx->pc = 0x198E3Cu;
    {
        const bool branch_taken_0x198e3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E3Cu;
            // 0x198e40: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e3c) {
            ctx->pc = 0x198F80u;
            goto label_198f80;
        }
    }
    ctx->pc = 0x198E44u;
label_198e44:
    // 0x198e44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x198e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_198e48:
    // 0x198e48: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x198e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_198e4c:
    // 0x198e4c: 0x24a5ea90  addiu       $a1, $a1, -0x1570
    ctx->pc = 0x198e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961808));
label_198e50:
    // 0x198e50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x198e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198e54:
    // 0x198e54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x198e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_198e58:
    // 0x198e58: 0x400008  jr          $v0
label_198e5c:
    if (ctx->pc == 0x198E5Cu) {
        ctx->pc = 0x198E60u;
        goto label_198e60;
    }
    ctx->pc = 0x198E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198E60u: goto label_198e60;
            case 0x198E70u: goto label_198e70;
            case 0x198E80u: goto label_198e80;
            case 0x198E90u: goto label_198e90;
            case 0x198EA0u: goto label_198ea0;
            case 0x198EB0u: goto label_198eb0;
            case 0x198EC0u: goto label_198ec0;
            case 0x198ED0u: goto label_198ed0;
            case 0x198EE0u: goto label_198ee0;
            case 0x198EF0u: goto label_198ef0;
            case 0x198F00u: goto label_198f00;
            case 0x198F10u: goto label_198f10;
            case 0x198F20u: goto label_198f20;
            case 0x198F30u: goto label_198f30;
            case 0x198F40u: goto label_198f40;
            case 0x198F50u: goto label_198f50;
            case 0x198F80u: goto label_198f80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198E60u;
label_198e60:
    // 0x198e60: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198e60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198e64:
    // 0x198e64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198e64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198e68:
    // 0x198e68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198e6c:
    // 0x198e6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198e70:
    // 0x198e70: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198e70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198e74:
    // 0x198e74: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198e74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198e78:
    // 0x198e78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198e7c:
    // 0x198e7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198e80:
    // 0x198e80: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198e80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198e84:
    // 0x198e84: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198e84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198e88:
    // 0x198e88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198e8c:
    // 0x198e8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198e90:
    // 0x198e90: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198e90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198e94:
    // 0x198e94: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198e94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198e98:
    // 0x198e98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198e9c:
    // 0x198e9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198ea0:
    // 0x198ea0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198ea0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198ea4:
    // 0x198ea4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198ea8:
    // 0x198ea8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198eac:
    // 0x198eac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198eacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198eb0:
    // 0x198eb0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198eb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198eb4:
    // 0x198eb4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198eb8:
    // 0x198eb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198ebc:
    // 0x198ebc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198ec0:
    // 0x198ec0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198ec0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198ec4:
    // 0x198ec4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198ec8:
    // 0x198ec8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198ecc:
    // 0x198ecc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198eccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198ed0:
    // 0x198ed0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198ed0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198ed4:
    // 0x198ed4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198ed8:
    // 0x198ed8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198edc:
    // 0x198edc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198ee0:
    // 0x198ee0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198ee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198ee4:
    // 0x198ee4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198ee8:
    // 0x198ee8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198eec:
    // 0x198eec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198eecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198ef0:
    // 0x198ef0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198ef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198ef4:
    // 0x198ef4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198ef8:
    // 0x198ef8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198efc:
    // 0x198efc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198f00:
    // 0x198f00: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198f04:
    // 0x198f04: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198f04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198f08:
    // 0x198f08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198f0c:
    // 0x198f0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198f10:
    // 0x198f10: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198f10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198f14:
    // 0x198f14: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198f14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198f18:
    // 0x198f18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198f1c:
    // 0x198f1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198f20:
    // 0x198f20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198f24:
    // 0x198f24: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198f24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198f28:
    // 0x198f28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198f2c:
    // 0x198f2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198f30:
    // 0x198f30: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198f30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198f34:
    // 0x198f34: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198f34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198f38:
    // 0x198f38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198f3c:
    // 0x198f3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198f40:
    // 0x198f40: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198f40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198f44:
    // 0x198f44: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198f44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198f48:
    // 0x198f48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198f4c:
    // 0x198f4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198f4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198f50:
    // 0x198f50: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198f50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_198f54:
    // 0x198f54: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198f54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198f58:
    // 0x198f58: 0x10000009  b           . + 4 + (0x9 << 2)
label_198f5c:
    if (ctx->pc == 0x198F5Cu) {
        ctx->pc = 0x198F5Cu;
            // 0x198f5c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x198F60u;
        goto label_198f60;
    }
    ctx->pc = 0x198F58u;
    {
        const bool branch_taken_0x198f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198F58u;
            // 0x198f5c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f58) {
            ctx->pc = 0x198F80u;
            goto label_198f80;
        }
    }
    ctx->pc = 0x198F60u;
label_198f60:
    // 0x198f60: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x198f60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198f64:
    // 0x198f64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x198f64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_198f68:
    // 0x198f68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198f68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198f6c:
    // 0x198f6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198f70:
    // 0x198f70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198f74:
    // 0x198f74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_198f78:
    // 0x198f78: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x198f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_198f7c:
    // 0x198f7c: 0x0  nop
    ctx->pc = 0x198f7cu;
    // NOP
label_198f80:
    // 0x198f80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198f84:
    // 0x198f84: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
label_198f88:
    if (ctx->pc == 0x198F88u) {
        ctx->pc = 0x198F8Cu;
        goto label_198f8c;
    }
    ctx->pc = 0x198F84u;
    {
        const bool branch_taken_0x198f84 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x198f84) {
            ctx->pc = 0x199120u;
            goto label_199120;
        }
    }
    ctx->pc = 0x198F8Cu;
label_198f8c:
    // 0x198f8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x198f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_198f90:
    // 0x198f90: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_198f94:
    // 0x198f94: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x198f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_198f98:
    // 0x198f98: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x198f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_198f9c:
    // 0x198f9c: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
label_198fa0:
    if (ctx->pc == 0x198FA0u) {
        ctx->pc = 0x198FA4u;
        goto label_198fa4;
    }
    ctx->pc = 0x198F9Cu;
    {
        const bool branch_taken_0x198f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f9c) {
            ctx->pc = 0x199100u;
            goto label_199100;
        }
    }
    ctx->pc = 0x198FA4u;
label_198fa4:
    // 0x198fa4: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x198fa4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_198fa8:
    // 0x198fa8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x198fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_198fac:
    // 0x198fac: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x198facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
label_198fb0:
    // 0x198fb0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x198fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_198fb4:
    // 0x198fb4: 0x82903  sra         $a1, $t0, 4
    ctx->pc = 0x198fb4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 4));
label_198fb8:
    // 0x198fb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198fb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198fbc:
    // 0x198fbc: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x198fbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_198fc0:
    // 0x198fc0: 0x3105000f  andi        $a1, $t0, 0xF
    ctx->pc = 0x198fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_198fc4:
    // 0x198fc4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x198fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_198fc8:
    // 0x198fc8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x198fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_198fcc:
    // 0x198fcc: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x198fccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_198fd0:
    // 0x198fd0: 0x2662023  subu        $a0, $s3, $a2
    ctx->pc = 0x198fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_198fd4:
    // 0x198fd4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x198fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198fd8:
    // 0x198fd8: 0x2ca10011  sltiu       $at, $a1, 0x11
    ctx->pc = 0x198fd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_198fdc:
    // 0x198fdc: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_198fe0:
    if (ctx->pc == 0x198FE0u) {
        ctx->pc = 0x198FE0u;
            // 0x198fe0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x198FE4u;
        goto label_198fe4;
    }
    ctx->pc = 0x198FDCu;
    {
        const bool branch_taken_0x198fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198FDCu;
            // 0x198fe0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198fdc) {
            ctx->pc = 0x199120u;
            goto label_199120;
        }
    }
    ctx->pc = 0x198FE4u;
label_198fe4:
    // 0x198fe4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x198fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_198fe8:
    // 0x198fe8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_198fec:
    // 0x198fec: 0x24a5ea40  addiu       $a1, $a1, -0x15C0
    ctx->pc = 0x198fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
label_198ff0:
    // 0x198ff0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x198ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_198ff4:
    // 0x198ff4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x198ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_198ff8:
    // 0x198ff8: 0x400008  jr          $v0
label_198ffc:
    if (ctx->pc == 0x198FFCu) {
        ctx->pc = 0x199000u;
        goto label_199000;
    }
    ctx->pc = 0x198FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199000u: goto label_199000;
            case 0x199010u: goto label_199010;
            case 0x199020u: goto label_199020;
            case 0x199030u: goto label_199030;
            case 0x199040u: goto label_199040;
            case 0x199050u: goto label_199050;
            case 0x199060u: goto label_199060;
            case 0x199070u: goto label_199070;
            case 0x199080u: goto label_199080;
            case 0x199090u: goto label_199090;
            case 0x1990A0u: goto label_1990a0;
            case 0x1990B0u: goto label_1990b0;
            case 0x1990C0u: goto label_1990c0;
            case 0x1990D0u: goto label_1990d0;
            case 0x1990E0u: goto label_1990e0;
            case 0x1990F0u: goto label_1990f0;
            case 0x199120u: goto label_199120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199000u;
label_199000:
    // 0x199000: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199004:
    // 0x199004: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199004u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199008:
    // 0x199008: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19900c:
    // 0x19900c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19900cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199010:
    // 0x199010: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199014:
    // 0x199014: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199014u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199018:
    // 0x199018: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19901c:
    // 0x19901c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19901cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199020:
    // 0x199020: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199020u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199024:
    // 0x199024: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199024u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199028:
    // 0x199028: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19902c:
    // 0x19902c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19902cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199030:
    // 0x199030: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199034:
    // 0x199034: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199034u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199038:
    // 0x199038: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19903c:
    // 0x19903c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19903cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199040:
    // 0x199040: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199040u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199044:
    // 0x199044: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199044u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199048:
    // 0x199048: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19904c:
    // 0x19904c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19904cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199050:
    // 0x199050: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199050u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199054:
    // 0x199054: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199054u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199058:
    // 0x199058: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19905c:
    // 0x19905c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19905cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199060:
    // 0x199060: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199064:
    // 0x199064: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199064u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199068:
    // 0x199068: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19906c:
    // 0x19906c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19906cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199070:
    // 0x199070: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199070u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199074:
    // 0x199074: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199074u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199078:
    // 0x199078: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19907c:
    // 0x19907c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19907cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199080:
    // 0x199080: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199084:
    // 0x199084: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199084u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199088:
    // 0x199088: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19908c:
    // 0x19908c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19908cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199090:
    // 0x199090: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199094:
    // 0x199094: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199094u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199098:
    // 0x199098: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19909c:
    // 0x19909c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19909cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1990a0:
    // 0x1990a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1990a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1990a4:
    // 0x1990a4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1990a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1990a8:
    // 0x1990a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1990a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1990ac:
    // 0x1990ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1990acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1990b0:
    // 0x1990b0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1990b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1990b4:
    // 0x1990b4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1990b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1990b8:
    // 0x1990b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1990b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1990bc:
    // 0x1990bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1990bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1990c0:
    // 0x1990c0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1990c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1990c4:
    // 0x1990c4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1990c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1990c8:
    // 0x1990c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1990c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1990cc:
    // 0x1990cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1990ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1990d0:
    // 0x1990d0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1990d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1990d4:
    // 0x1990d4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1990d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1990d8:
    // 0x1990d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1990d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1990dc:
    // 0x1990dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1990e0:
    // 0x1990e0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1990e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1990e4:
    // 0x1990e4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1990e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1990e8:
    // 0x1990e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1990ec:
    // 0x1990ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1990ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1990f0:
    // 0x1990f0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1990f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1990f4:
    // 0x1990f4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1990f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1990f8:
    // 0x1990f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1990fc:
    if (ctx->pc == 0x1990FCu) {
        ctx->pc = 0x1990FCu;
            // 0x1990fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x199100u;
        goto label_199100;
    }
    ctx->pc = 0x1990F8u;
    {
        const bool branch_taken_0x1990f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1990F8u;
            // 0x1990fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990f8) {
            ctx->pc = 0x199120u;
            goto label_199120;
        }
    }
    ctx->pc = 0x199100u;
label_199100:
    // 0x199100: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x199100u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_199104:
    // 0x199104: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199104u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199108:
    // 0x199108: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19910c:
    // 0x19910c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x19910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_199110:
    // 0x199110: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x199110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199114:
    // 0x199114: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_199118:
    // 0x199118: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x199118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_19911c:
    // 0x19911c: 0x0  nop
    ctx->pc = 0x19911cu;
    // NOP
label_199120:
    // 0x199120: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x199120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_199124:
    // 0x199124: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
label_199128:
    if (ctx->pc == 0x199128u) {
        ctx->pc = 0x19912Cu;
        goto label_19912c;
    }
    ctx->pc = 0x199124u;
    {
        const bool branch_taken_0x199124 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x199124) {
            ctx->pc = 0x1992C0u;
            goto label_1992c0;
        }
    }
    ctx->pc = 0x19912Cu;
label_19912c:
    // 0x19912c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19912cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_199130:
    // 0x199130: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x199130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_199134:
    // 0x199134: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x199134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_199138:
    // 0x199138: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x199138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_19913c:
    // 0x19913c: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
label_199140:
    if (ctx->pc == 0x199140u) {
        ctx->pc = 0x199144u;
        goto label_199144;
    }
    ctx->pc = 0x19913Cu;
    {
        const bool branch_taken_0x19913c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19913c) {
            ctx->pc = 0x1992A0u;
            goto label_1992a0;
        }
    }
    ctx->pc = 0x199144u;
label_199144:
    // 0x199144: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x199144u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_199148:
    // 0x199148: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x199148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_19914c:
    // 0x19914c: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x19914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
label_199150:
    // 0x199150: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x199150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_199154:
    // 0x199154: 0x82903  sra         $a1, $t0, 4
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 4));
label_199158:
    // 0x199158: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x199158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19915c:
    // 0x19915c: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x19915cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_199160:
    // 0x199160: 0x3105000f  andi        $a1, $t0, 0xF
    ctx->pc = 0x199160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_199164:
    // 0x199164: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x199164u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_199168:
    // 0x199168: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x199168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_19916c:
    // 0x19916c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x19916cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_199170:
    // 0x199170: 0x2662023  subu        $a0, $s3, $a2
    ctx->pc = 0x199170u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_199174:
    // 0x199174: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x199174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_199178:
    // 0x199178: 0x2ca10011  sltiu       $at, $a1, 0x11
    ctx->pc = 0x199178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_19917c:
    // 0x19917c: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_199180:
    if (ctx->pc == 0x199180u) {
        ctx->pc = 0x199180u;
            // 0x199180: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x199184u;
        goto label_199184;
    }
    ctx->pc = 0x19917Cu;
    {
        const bool branch_taken_0x19917c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19917Cu;
            // 0x199180: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19917c) {
            ctx->pc = 0x1992C0u;
            goto label_1992c0;
        }
    }
    ctx->pc = 0x199184u;
label_199184:
    // 0x199184: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x199184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_199188:
    // 0x199188: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x199188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_19918c:
    // 0x19918c: 0x24a5e9f0  addiu       $a1, $a1, -0x1610
    ctx->pc = 0x19918cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961648));
label_199190:
    // 0x199190: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x199190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_199194:
    // 0x199194: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x199194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199198:
    // 0x199198: 0x400008  jr          $v0
label_19919c:
    if (ctx->pc == 0x19919Cu) {
        ctx->pc = 0x1991A0u;
        goto label_1991a0;
    }
    ctx->pc = 0x199198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1991A0u: goto label_1991a0;
            case 0x1991B0u: goto label_1991b0;
            case 0x1991C0u: goto label_1991c0;
            case 0x1991D0u: goto label_1991d0;
            case 0x1991E0u: goto label_1991e0;
            case 0x1991F0u: goto label_1991f0;
            case 0x199200u: goto label_199200;
            case 0x199210u: goto label_199210;
            case 0x199220u: goto label_199220;
            case 0x199230u: goto label_199230;
            case 0x199240u: goto label_199240;
            case 0x199250u: goto label_199250;
            case 0x199260u: goto label_199260;
            case 0x199270u: goto label_199270;
            case 0x199280u: goto label_199280;
            case 0x199290u: goto label_199290;
            case 0x1992C0u: goto label_1992c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1991A0u;
label_1991a0:
    // 0x1991a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1991a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1991a4:
    // 0x1991a4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1991a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1991a8:
    // 0x1991a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1991a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1991ac:
    // 0x1991ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1991acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1991b0:
    // 0x1991b0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1991b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1991b4:
    // 0x1991b4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1991b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1991b8:
    // 0x1991b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1991bc:
    // 0x1991bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1991bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1991c0:
    // 0x1991c0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1991c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1991c4:
    // 0x1991c4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1991c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1991c8:
    // 0x1991c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1991c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1991cc:
    // 0x1991cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1991ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1991d0:
    // 0x1991d0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1991d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1991d4:
    // 0x1991d4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1991d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1991d8:
    // 0x1991d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1991d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1991dc:
    // 0x1991dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1991dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1991e0:
    // 0x1991e0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1991e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1991e4:
    // 0x1991e4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1991e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1991e8:
    // 0x1991e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1991e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1991ec:
    // 0x1991ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1991ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1991f0:
    // 0x1991f0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1991f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1991f4:
    // 0x1991f4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1991f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1991f8:
    // 0x1991f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1991f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1991fc:
    // 0x1991fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1991fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199200:
    // 0x199200: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199204:
    // 0x199204: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199204u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199208:
    // 0x199208: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19920c:
    // 0x19920c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19920cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199210:
    // 0x199210: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199214:
    // 0x199214: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199214u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199218:
    // 0x199218: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19921c:
    // 0x19921c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199220:
    // 0x199220: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199220u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199224:
    // 0x199224: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199224u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199228:
    // 0x199228: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19922c:
    // 0x19922c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19922cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199230:
    // 0x199230: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199230u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199234:
    // 0x199234: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199234u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199238:
    // 0x199238: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19923c:
    // 0x19923c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19923cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199240:
    // 0x199240: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199240u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199244:
    // 0x199244: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199244u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199248:
    // 0x199248: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19924c:
    // 0x19924c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19924cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199250:
    // 0x199250: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199250u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199254:
    // 0x199254: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199254u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199258:
    // 0x199258: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19925c:
    // 0x19925c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19925cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199260:
    // 0x199260: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199264:
    // 0x199264: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199264u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199268:
    // 0x199268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19926c:
    // 0x19926c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19926cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199270:
    // 0x199270: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199270u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199274:
    // 0x199274: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199274u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199278:
    // 0x199278: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19927c:
    // 0x19927c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19927cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199280:
    // 0x199280: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199284:
    // 0x199284: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199284u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199288:
    // 0x199288: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19928c:
    // 0x19928c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19928cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199290:
    // 0x199290: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x199290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199294:
    // 0x199294: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199294u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199298:
    // 0x199298: 0x10000009  b           . + 4 + (0x9 << 2)
label_19929c:
    if (ctx->pc == 0x19929Cu) {
        ctx->pc = 0x19929Cu;
            // 0x19929c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x1992A0u;
        goto label_1992a0;
    }
    ctx->pc = 0x199298u;
    {
        const bool branch_taken_0x199298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19929Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199298u;
            // 0x19929c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199298) {
            ctx->pc = 0x1992C0u;
            goto label_1992c0;
        }
    }
    ctx->pc = 0x1992A0u;
label_1992a0:
    // 0x1992a0: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x1992a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1992a4:
    // 0x1992a4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1992a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1992a8:
    // 0x1992a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1992a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1992ac:
    // 0x1992ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1992acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1992b0:
    // 0x1992b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1992b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1992b4:
    // 0x1992b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1992b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1992b8:
    // 0x1992b8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1992b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1992bc:
    // 0x1992bc: 0x0  nop
    ctx->pc = 0x1992bcu;
    // NOP
label_1992c0:
    // 0x1992c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1992c4:
    // 0x1992c4: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
label_1992c8:
    if (ctx->pc == 0x1992C8u) {
        ctx->pc = 0x1992CCu;
        goto label_1992cc;
    }
    ctx->pc = 0x1992C4u;
    {
        const bool branch_taken_0x1992c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1992c4) {
            ctx->pc = 0x199460u;
            goto label_199460;
        }
    }
    ctx->pc = 0x1992CCu;
label_1992cc:
    // 0x1992cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1992ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1992d0:
    // 0x1992d0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1992d4:
    // 0x1992d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1992d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1992d8:
    // 0x1992d8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1992d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1992dc:
    // 0x1992dc: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_1992e0:
    if (ctx->pc == 0x1992E0u) {
        ctx->pc = 0x1992E4u;
        goto label_1992e4;
    }
    ctx->pc = 0x1992DCu;
    {
        const bool branch_taken_0x1992dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1992dc) {
            ctx->pc = 0x199440u;
            goto label_199440;
        }
    }
    ctx->pc = 0x1992E4u;
label_1992e4:
    // 0x1992e4: 0x92870000  lbu         $a3, 0x0($s4)
    ctx->pc = 0x1992e4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1992e8:
    // 0x1992e8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1992e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_1992ec:
    // 0x1992ec: 0x2463e930  addiu       $v1, $v1, -0x16D0
    ctx->pc = 0x1992ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961456));
label_1992f0:
    // 0x1992f0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1992f4:
    // 0x1992f4: 0x72103  sra         $a0, $a3, 4
    ctx->pc = 0x1992f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
label_1992f8:
    // 0x1992f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1992f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1992fc:
    // 0x1992fc: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x1992fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_199300:
    // 0x199300: 0x30e4000f  andi        $a0, $a3, 0xF
    ctx->pc = 0x199300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_199304:
    // 0x199304: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x199304u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_199308:
    // 0x199308: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x199308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19930c:
    // 0x19930c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x19930cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_199310:
    // 0x199310: 0x2651823  subu        $v1, $s3, $a1
    ctx->pc = 0x199310u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_199314:
    // 0x199314: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x199314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_199318:
    // 0x199318: 0x2c810011  sltiu       $at, $a0, 0x11
    ctx->pc = 0x199318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_19931c:
    // 0x19931c: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_199320:
    if (ctx->pc == 0x199320u) {
        ctx->pc = 0x199320u;
            // 0x199320: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x199324u;
        goto label_199324;
    }
    ctx->pc = 0x19931Cu;
    {
        const bool branch_taken_0x19931c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19931Cu;
            // 0x199320: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19931c) {
            ctx->pc = 0x199460u;
            goto label_199460;
        }
    }
    ctx->pc = 0x199324u;
label_199324:
    // 0x199324: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x199324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_199328:
    // 0x199328: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x199328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_19932c:
    // 0x19932c: 0x2484e9a0  addiu       $a0, $a0, -0x1660
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961568));
label_199330:
    // 0x199330: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x199330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_199334:
    // 0x199334: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x199334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199338:
    // 0x199338: 0x400008  jr          $v0
label_19933c:
    if (ctx->pc == 0x19933Cu) {
        ctx->pc = 0x199340u;
        goto label_199340;
    }
    ctx->pc = 0x199338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199340u: goto label_199340;
            case 0x199350u: goto label_199350;
            case 0x199360u: goto label_199360;
            case 0x199370u: goto label_199370;
            case 0x199380u: goto label_199380;
            case 0x199390u: goto label_199390;
            case 0x1993A0u: goto label_1993a0;
            case 0x1993B0u: goto label_1993b0;
            case 0x1993C0u: goto label_1993c0;
            case 0x1993D0u: goto label_1993d0;
            case 0x1993E0u: goto label_1993e0;
            case 0x1993F0u: goto label_1993f0;
            case 0x199400u: goto label_199400;
            case 0x199410u: goto label_199410;
            case 0x199420u: goto label_199420;
            case 0x199430u: goto label_199430;
            case 0x199460u: goto label_199460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199340u;
label_199340:
    // 0x199340: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199340u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199344:
    // 0x199344: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199344u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199348:
    // 0x199348: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19934c:
    // 0x19934c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19934cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199350:
    // 0x199350: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199354:
    // 0x199354: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199354u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199358:
    // 0x199358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19935c:
    // 0x19935c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19935cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199360:
    // 0x199360: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199364:
    // 0x199364: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199364u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199368:
    // 0x199368: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19936c:
    // 0x19936c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19936cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199370:
    // 0x199370: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199370u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199374:
    // 0x199374: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199374u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199378:
    // 0x199378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19937c:
    // 0x19937c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19937cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199380:
    // 0x199380: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199384:
    // 0x199384: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199384u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199388:
    // 0x199388: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19938c:
    // 0x19938c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19938cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199390:
    // 0x199390: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199394:
    // 0x199394: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199394u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199398:
    // 0x199398: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19939c:
    // 0x19939c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19939cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1993a0:
    // 0x1993a0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1993a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1993a4:
    // 0x1993a4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1993a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1993a8:
    // 0x1993a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1993a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1993ac:
    // 0x1993ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1993acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1993b0:
    // 0x1993b0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1993b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1993b4:
    // 0x1993b4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1993b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1993b8:
    // 0x1993b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1993bc:
    // 0x1993bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1993bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1993c0:
    // 0x1993c0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1993c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1993c4:
    // 0x1993c4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1993c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1993c8:
    // 0x1993c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1993c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1993cc:
    // 0x1993cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1993ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1993d0:
    // 0x1993d0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1993d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1993d4:
    // 0x1993d4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1993d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1993d8:
    // 0x1993d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1993d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1993dc:
    // 0x1993dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1993dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1993e0:
    // 0x1993e0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1993e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1993e4:
    // 0x1993e4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1993e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1993e8:
    // 0x1993e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1993e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1993ec:
    // 0x1993ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1993ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1993f0:
    // 0x1993f0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1993f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1993f4:
    // 0x1993f4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1993f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1993f8:
    // 0x1993f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1993f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1993fc:
    // 0x1993fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1993fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199400:
    // 0x199400: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199400u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199404:
    // 0x199404: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199404u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199408:
    // 0x199408: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19940c:
    // 0x19940c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19940cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199410:
    // 0x199410: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199410u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199414:
    // 0x199414: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199414u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199418:
    // 0x199418: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19941c:
    // 0x19941c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19941cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199420:
    // 0x199420: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199424:
    // 0x199424: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199424u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199428:
    // 0x199428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19942c:
    // 0x19942c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19942cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199430:
    // 0x199430: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x199430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_199434:
    // 0x199434: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199434u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199438:
    // 0x199438: 0x10000009  b           . + 4 + (0x9 << 2)
label_19943c:
    if (ctx->pc == 0x19943Cu) {
        ctx->pc = 0x19943Cu;
            // 0x19943c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x199440u;
        goto label_199440;
    }
    ctx->pc = 0x199438u;
    {
        const bool branch_taken_0x199438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199438u;
            // 0x19943c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199438) {
            ctx->pc = 0x199460u;
            goto label_199460;
        }
    }
    ctx->pc = 0x199440u;
label_199440:
    // 0x199440: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x199440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_199444:
    // 0x199444: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x199444u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_199448:
    // 0x199448: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x199448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19944c:
    // 0x19944c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x19944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_199450:
    // 0x199450: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x199450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199454:
    // 0x199454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_199458:
    // 0x199458: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x199458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_19945c:
    // 0x19945c: 0x0  nop
    ctx->pc = 0x19945cu;
    // NOP
label_199460:
    // 0x199460: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x199460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_199464:
    // 0x199464: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
label_199468:
    if (ctx->pc == 0x199468u) {
        ctx->pc = 0x19946Cu;
        goto label_19946c;
    }
    ctx->pc = 0x199464u;
    {
        const bool branch_taken_0x199464 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x199464) {
            ctx->pc = 0x1994B8u;
            goto label_1994b8;
        }
    }
    ctx->pc = 0x19946Cu;
label_19946c:
    // 0x19946c: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x19946cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_199470:
    // 0x199470: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x199470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_199474:
    // 0x199474: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x199474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_199478:
    // 0x199478: 0x92a20165  lbu         $v0, 0x165($s5)
    ctx->pc = 0x199478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 357)));
label_19947c:
    // 0x19947c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_199480:
    // 0x199480: 0xc055728  jal         func_155CA0
label_199484:
    if (ctx->pc == 0x199484u) {
        ctx->pc = 0x199484u;
            // 0x199484: 0xa2a20165  sb          $v0, 0x165($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x199488u;
        goto label_199488;
    }
    ctx->pc = 0x199480u;
    SET_GPR_U32(ctx, 31, 0x199488u);
    ctx->pc = 0x199484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199480u;
            // 0x199484: 0xa2a20165  sb          $v0, 0x165($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199488u; }
        if (ctx->pc != 0x199488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199488u; }
        if (ctx->pc != 0x199488u) { return; }
    }
    ctx->pc = 0x199488u;
label_199488:
    // 0x199488: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x199488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_19948c:
    // 0x19948c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_199490:
    if (ctx->pc == 0x199490u) {
        ctx->pc = 0x199490u;
            // 0x199490: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x199494u;
        goto label_199494;
    }
    ctx->pc = 0x19948Cu;
    {
        const bool branch_taken_0x19948c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19948c) {
            ctx->pc = 0x199490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19948Cu;
            // 0x199490: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1994A0u;
            goto label_1994a0;
        }
    }
    ctx->pc = 0x199494u;
label_199494:
    // 0x199494: 0x60f809  jalr        $v1
label_199498:
    if (ctx->pc == 0x199498u) {
        ctx->pc = 0x19949Cu;
        goto label_19949c;
    }
    ctx->pc = 0x199494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19949Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x19949Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19949Cu; }
            if (ctx->pc != 0x19949Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19949Cu;
label_19949c:
    // 0x19949c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19949cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1994a0:
    // 0x1994a0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1994a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1994a4:
    // 0x1994a4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1994a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1994a8:
    // 0x1994a8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1994a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1994ac:
    // 0x1994ac: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1994acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1994b0:
    // 0x1994b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1994b4:
    if (ctx->pc == 0x1994B4u) {
        ctx->pc = 0x1994B4u;
            // 0x1994b4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x1994B8u;
        goto label_1994b8;
    }
    ctx->pc = 0x1994B0u;
    {
        const bool branch_taken_0x1994b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1994B0u;
            // 0x1994b4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994b0) {
            ctx->pc = 0x1994E0u;
            goto label_1994e0;
        }
    }
    ctx->pc = 0x1994B8u;
label_1994b8:
    // 0x1994b8: 0xc067d80  jal         func_19F600
label_1994bc:
    if (ctx->pc == 0x1994BCu) {
        ctx->pc = 0x1994C0u;
        goto label_1994c0;
    }
    ctx->pc = 0x1994B8u;
    SET_GPR_U32(ctx, 31, 0x1994C0u);
    ctx->pc = 0x19F600u;
    if (runtime->hasFunction(0x19F600u)) {
        auto targetFn = runtime->lookupFunction(0x19F600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994C0u; }
        if (ctx->pc != 0x1994C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F600_0x19f600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994C0u; }
        if (ctx->pc != 0x1994C0u) { return; }
    }
    ctx->pc = 0x1994C0u;
label_1994c0:
    // 0x1994c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1994c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1994c4:
    // 0x1994c4: 0xc067d7c  jal         func_19F5F0
label_1994c8:
    if (ctx->pc == 0x1994C8u) {
        ctx->pc = 0x1994C8u;
            // 0x1994c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1994CCu;
        goto label_1994cc;
    }
    ctx->pc = 0x1994C4u;
    SET_GPR_U32(ctx, 31, 0x1994CCu);
    ctx->pc = 0x1994C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1994C4u;
            // 0x1994c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F5F0u;
    if (runtime->hasFunction(0x19F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x19F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994CCu; }
        if (ctx->pc != 0x1994CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F5F0_0x19f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994CCu; }
        if (ctx->pc != 0x1994CCu) { return; }
    }
    ctx->pc = 0x1994CCu;
label_1994cc:
    // 0x1994cc: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x1994ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1994d0:
    // 0x1994d0: 0x5460fca4  bnel        $v1, $zero, . + 4 + (-0x35C << 2)
label_1994d4:
    if (ctx->pc == 0x1994D4u) {
        ctx->pc = 0x1994D4u;
            // 0x1994d4: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x1994D8u;
        goto label_1994d8;
    }
    ctx->pc = 0x1994D0u;
    {
        const bool branch_taken_0x1994d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1994d0) {
            ctx->pc = 0x1994D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1994D0u;
            // 0x1994d4: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_198764;
        }
    }
    ctx->pc = 0x1994D8u;
label_1994d8:
    // 0x1994d8: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x1994d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_1994dc:
    // 0x1994dc: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x1994dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_1994e0:
    // 0x1994e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1994e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1994e4:
    // 0x1994e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1994e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1994e8:
    // 0x1994e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1994e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1994ec:
    // 0x1994ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1994ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1994f0:
    // 0x1994f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1994f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1994f4:
    // 0x1994f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1994f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1994f8:
    // 0x1994f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1994f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1994fc:
    // 0x1994fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1994fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_199500:
    // 0x199500: 0x3e00008  jr          $ra
label_199504:
    if (ctx->pc == 0x199504u) {
        ctx->pc = 0x199504u;
            // 0x199504: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x199508u;
        goto label_199508;
    }
    ctx->pc = 0x199500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199500u;
            // 0x199504: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199508u;
label_199508:
    // 0x199508: 0x0  nop
    ctx->pc = 0x199508u;
    // NOP
label_19950c:
    // 0x19950c: 0x0  nop
    ctx->pc = 0x19950cu;
    // NOP
    ctx->pc = 0x199510u;
}
