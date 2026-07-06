#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001285A0
// Address: 0x1285a0 - 0x128ee0
void sub_001285A0_0x1285a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001285A0_0x1285a0");
#endif

    switch (ctx->pc) {
        case 0x1285a0u: goto label_1285a0;
        case 0x1285a4u: goto label_1285a4;
        case 0x1285a8u: goto label_1285a8;
        case 0x1285acu: goto label_1285ac;
        case 0x1285b0u: goto label_1285b0;
        case 0x1285b4u: goto label_1285b4;
        case 0x1285b8u: goto label_1285b8;
        case 0x1285bcu: goto label_1285bc;
        case 0x1285c0u: goto label_1285c0;
        case 0x1285c4u: goto label_1285c4;
        case 0x1285c8u: goto label_1285c8;
        case 0x1285ccu: goto label_1285cc;
        case 0x1285d0u: goto label_1285d0;
        case 0x1285d4u: goto label_1285d4;
        case 0x1285d8u: goto label_1285d8;
        case 0x1285dcu: goto label_1285dc;
        case 0x1285e0u: goto label_1285e0;
        case 0x1285e4u: goto label_1285e4;
        case 0x1285e8u: goto label_1285e8;
        case 0x1285ecu: goto label_1285ec;
        case 0x1285f0u: goto label_1285f0;
        case 0x1285f4u: goto label_1285f4;
        case 0x1285f8u: goto label_1285f8;
        case 0x1285fcu: goto label_1285fc;
        case 0x128600u: goto label_128600;
        case 0x128604u: goto label_128604;
        case 0x128608u: goto label_128608;
        case 0x12860cu: goto label_12860c;
        case 0x128610u: goto label_128610;
        case 0x128614u: goto label_128614;
        case 0x128618u: goto label_128618;
        case 0x12861cu: goto label_12861c;
        case 0x128620u: goto label_128620;
        case 0x128624u: goto label_128624;
        case 0x128628u: goto label_128628;
        case 0x12862cu: goto label_12862c;
        case 0x128630u: goto label_128630;
        case 0x128634u: goto label_128634;
        case 0x128638u: goto label_128638;
        case 0x12863cu: goto label_12863c;
        case 0x128640u: goto label_128640;
        case 0x128644u: goto label_128644;
        case 0x128648u: goto label_128648;
        case 0x12864cu: goto label_12864c;
        case 0x128650u: goto label_128650;
        case 0x128654u: goto label_128654;
        case 0x128658u: goto label_128658;
        case 0x12865cu: goto label_12865c;
        case 0x128660u: goto label_128660;
        case 0x128664u: goto label_128664;
        case 0x128668u: goto label_128668;
        case 0x12866cu: goto label_12866c;
        case 0x128670u: goto label_128670;
        case 0x128674u: goto label_128674;
        case 0x128678u: goto label_128678;
        case 0x12867cu: goto label_12867c;
        case 0x128680u: goto label_128680;
        case 0x128684u: goto label_128684;
        case 0x128688u: goto label_128688;
        case 0x12868cu: goto label_12868c;
        case 0x128690u: goto label_128690;
        case 0x128694u: goto label_128694;
        case 0x128698u: goto label_128698;
        case 0x12869cu: goto label_12869c;
        case 0x1286a0u: goto label_1286a0;
        case 0x1286a4u: goto label_1286a4;
        case 0x1286a8u: goto label_1286a8;
        case 0x1286acu: goto label_1286ac;
        case 0x1286b0u: goto label_1286b0;
        case 0x1286b4u: goto label_1286b4;
        case 0x1286b8u: goto label_1286b8;
        case 0x1286bcu: goto label_1286bc;
        case 0x1286c0u: goto label_1286c0;
        case 0x1286c4u: goto label_1286c4;
        case 0x1286c8u: goto label_1286c8;
        case 0x1286ccu: goto label_1286cc;
        case 0x1286d0u: goto label_1286d0;
        case 0x1286d4u: goto label_1286d4;
        case 0x1286d8u: goto label_1286d8;
        case 0x1286dcu: goto label_1286dc;
        case 0x1286e0u: goto label_1286e0;
        case 0x1286e4u: goto label_1286e4;
        case 0x1286e8u: goto label_1286e8;
        case 0x1286ecu: goto label_1286ec;
        case 0x1286f0u: goto label_1286f0;
        case 0x1286f4u: goto label_1286f4;
        case 0x1286f8u: goto label_1286f8;
        case 0x1286fcu: goto label_1286fc;
        case 0x128700u: goto label_128700;
        case 0x128704u: goto label_128704;
        case 0x128708u: goto label_128708;
        case 0x12870cu: goto label_12870c;
        case 0x128710u: goto label_128710;
        case 0x128714u: goto label_128714;
        case 0x128718u: goto label_128718;
        case 0x12871cu: goto label_12871c;
        case 0x128720u: goto label_128720;
        case 0x128724u: goto label_128724;
        case 0x128728u: goto label_128728;
        case 0x12872cu: goto label_12872c;
        case 0x128730u: goto label_128730;
        case 0x128734u: goto label_128734;
        case 0x128738u: goto label_128738;
        case 0x12873cu: goto label_12873c;
        case 0x128740u: goto label_128740;
        case 0x128744u: goto label_128744;
        case 0x128748u: goto label_128748;
        case 0x12874cu: goto label_12874c;
        case 0x128750u: goto label_128750;
        case 0x128754u: goto label_128754;
        case 0x128758u: goto label_128758;
        case 0x12875cu: goto label_12875c;
        case 0x128760u: goto label_128760;
        case 0x128764u: goto label_128764;
        case 0x128768u: goto label_128768;
        case 0x12876cu: goto label_12876c;
        case 0x128770u: goto label_128770;
        case 0x128774u: goto label_128774;
        case 0x128778u: goto label_128778;
        case 0x12877cu: goto label_12877c;
        case 0x128780u: goto label_128780;
        case 0x128784u: goto label_128784;
        case 0x128788u: goto label_128788;
        case 0x12878cu: goto label_12878c;
        case 0x128790u: goto label_128790;
        case 0x128794u: goto label_128794;
        case 0x128798u: goto label_128798;
        case 0x12879cu: goto label_12879c;
        case 0x1287a0u: goto label_1287a0;
        case 0x1287a4u: goto label_1287a4;
        case 0x1287a8u: goto label_1287a8;
        case 0x1287acu: goto label_1287ac;
        case 0x1287b0u: goto label_1287b0;
        case 0x1287b4u: goto label_1287b4;
        case 0x1287b8u: goto label_1287b8;
        case 0x1287bcu: goto label_1287bc;
        case 0x1287c0u: goto label_1287c0;
        case 0x1287c4u: goto label_1287c4;
        case 0x1287c8u: goto label_1287c8;
        case 0x1287ccu: goto label_1287cc;
        case 0x1287d0u: goto label_1287d0;
        case 0x1287d4u: goto label_1287d4;
        case 0x1287d8u: goto label_1287d8;
        case 0x1287dcu: goto label_1287dc;
        case 0x1287e0u: goto label_1287e0;
        case 0x1287e4u: goto label_1287e4;
        case 0x1287e8u: goto label_1287e8;
        case 0x1287ecu: goto label_1287ec;
        case 0x1287f0u: goto label_1287f0;
        case 0x1287f4u: goto label_1287f4;
        case 0x1287f8u: goto label_1287f8;
        case 0x1287fcu: goto label_1287fc;
        case 0x128800u: goto label_128800;
        case 0x128804u: goto label_128804;
        case 0x128808u: goto label_128808;
        case 0x12880cu: goto label_12880c;
        case 0x128810u: goto label_128810;
        case 0x128814u: goto label_128814;
        case 0x128818u: goto label_128818;
        case 0x12881cu: goto label_12881c;
        case 0x128820u: goto label_128820;
        case 0x128824u: goto label_128824;
        case 0x128828u: goto label_128828;
        case 0x12882cu: goto label_12882c;
        case 0x128830u: goto label_128830;
        case 0x128834u: goto label_128834;
        case 0x128838u: goto label_128838;
        case 0x12883cu: goto label_12883c;
        case 0x128840u: goto label_128840;
        case 0x128844u: goto label_128844;
        case 0x128848u: goto label_128848;
        case 0x12884cu: goto label_12884c;
        case 0x128850u: goto label_128850;
        case 0x128854u: goto label_128854;
        case 0x128858u: goto label_128858;
        case 0x12885cu: goto label_12885c;
        case 0x128860u: goto label_128860;
        case 0x128864u: goto label_128864;
        case 0x128868u: goto label_128868;
        case 0x12886cu: goto label_12886c;
        case 0x128870u: goto label_128870;
        case 0x128874u: goto label_128874;
        case 0x128878u: goto label_128878;
        case 0x12887cu: goto label_12887c;
        case 0x128880u: goto label_128880;
        case 0x128884u: goto label_128884;
        case 0x128888u: goto label_128888;
        case 0x12888cu: goto label_12888c;
        case 0x128890u: goto label_128890;
        case 0x128894u: goto label_128894;
        case 0x128898u: goto label_128898;
        case 0x12889cu: goto label_12889c;
        case 0x1288a0u: goto label_1288a0;
        case 0x1288a4u: goto label_1288a4;
        case 0x1288a8u: goto label_1288a8;
        case 0x1288acu: goto label_1288ac;
        case 0x1288b0u: goto label_1288b0;
        case 0x1288b4u: goto label_1288b4;
        case 0x1288b8u: goto label_1288b8;
        case 0x1288bcu: goto label_1288bc;
        case 0x1288c0u: goto label_1288c0;
        case 0x1288c4u: goto label_1288c4;
        case 0x1288c8u: goto label_1288c8;
        case 0x1288ccu: goto label_1288cc;
        case 0x1288d0u: goto label_1288d0;
        case 0x1288d4u: goto label_1288d4;
        case 0x1288d8u: goto label_1288d8;
        case 0x1288dcu: goto label_1288dc;
        case 0x1288e0u: goto label_1288e0;
        case 0x1288e4u: goto label_1288e4;
        case 0x1288e8u: goto label_1288e8;
        case 0x1288ecu: goto label_1288ec;
        case 0x1288f0u: goto label_1288f0;
        case 0x1288f4u: goto label_1288f4;
        case 0x1288f8u: goto label_1288f8;
        case 0x1288fcu: goto label_1288fc;
        case 0x128900u: goto label_128900;
        case 0x128904u: goto label_128904;
        case 0x128908u: goto label_128908;
        case 0x12890cu: goto label_12890c;
        case 0x128910u: goto label_128910;
        case 0x128914u: goto label_128914;
        case 0x128918u: goto label_128918;
        case 0x12891cu: goto label_12891c;
        case 0x128920u: goto label_128920;
        case 0x128924u: goto label_128924;
        case 0x128928u: goto label_128928;
        case 0x12892cu: goto label_12892c;
        case 0x128930u: goto label_128930;
        case 0x128934u: goto label_128934;
        case 0x128938u: goto label_128938;
        case 0x12893cu: goto label_12893c;
        case 0x128940u: goto label_128940;
        case 0x128944u: goto label_128944;
        case 0x128948u: goto label_128948;
        case 0x12894cu: goto label_12894c;
        case 0x128950u: goto label_128950;
        case 0x128954u: goto label_128954;
        case 0x128958u: goto label_128958;
        case 0x12895cu: goto label_12895c;
        case 0x128960u: goto label_128960;
        case 0x128964u: goto label_128964;
        case 0x128968u: goto label_128968;
        case 0x12896cu: goto label_12896c;
        case 0x128970u: goto label_128970;
        case 0x128974u: goto label_128974;
        case 0x128978u: goto label_128978;
        case 0x12897cu: goto label_12897c;
        case 0x128980u: goto label_128980;
        case 0x128984u: goto label_128984;
        case 0x128988u: goto label_128988;
        case 0x12898cu: goto label_12898c;
        case 0x128990u: goto label_128990;
        case 0x128994u: goto label_128994;
        case 0x128998u: goto label_128998;
        case 0x12899cu: goto label_12899c;
        case 0x1289a0u: goto label_1289a0;
        case 0x1289a4u: goto label_1289a4;
        case 0x1289a8u: goto label_1289a8;
        case 0x1289acu: goto label_1289ac;
        case 0x1289b0u: goto label_1289b0;
        case 0x1289b4u: goto label_1289b4;
        case 0x1289b8u: goto label_1289b8;
        case 0x1289bcu: goto label_1289bc;
        case 0x1289c0u: goto label_1289c0;
        case 0x1289c4u: goto label_1289c4;
        case 0x1289c8u: goto label_1289c8;
        case 0x1289ccu: goto label_1289cc;
        case 0x1289d0u: goto label_1289d0;
        case 0x1289d4u: goto label_1289d4;
        case 0x1289d8u: goto label_1289d8;
        case 0x1289dcu: goto label_1289dc;
        case 0x1289e0u: goto label_1289e0;
        case 0x1289e4u: goto label_1289e4;
        case 0x1289e8u: goto label_1289e8;
        case 0x1289ecu: goto label_1289ec;
        case 0x1289f0u: goto label_1289f0;
        case 0x1289f4u: goto label_1289f4;
        case 0x1289f8u: goto label_1289f8;
        case 0x1289fcu: goto label_1289fc;
        case 0x128a00u: goto label_128a00;
        case 0x128a04u: goto label_128a04;
        case 0x128a08u: goto label_128a08;
        case 0x128a0cu: goto label_128a0c;
        case 0x128a10u: goto label_128a10;
        case 0x128a14u: goto label_128a14;
        case 0x128a18u: goto label_128a18;
        case 0x128a1cu: goto label_128a1c;
        case 0x128a20u: goto label_128a20;
        case 0x128a24u: goto label_128a24;
        case 0x128a28u: goto label_128a28;
        case 0x128a2cu: goto label_128a2c;
        case 0x128a30u: goto label_128a30;
        case 0x128a34u: goto label_128a34;
        case 0x128a38u: goto label_128a38;
        case 0x128a3cu: goto label_128a3c;
        case 0x128a40u: goto label_128a40;
        case 0x128a44u: goto label_128a44;
        case 0x128a48u: goto label_128a48;
        case 0x128a4cu: goto label_128a4c;
        case 0x128a50u: goto label_128a50;
        case 0x128a54u: goto label_128a54;
        case 0x128a58u: goto label_128a58;
        case 0x128a5cu: goto label_128a5c;
        case 0x128a60u: goto label_128a60;
        case 0x128a64u: goto label_128a64;
        case 0x128a68u: goto label_128a68;
        case 0x128a6cu: goto label_128a6c;
        case 0x128a70u: goto label_128a70;
        case 0x128a74u: goto label_128a74;
        case 0x128a78u: goto label_128a78;
        case 0x128a7cu: goto label_128a7c;
        case 0x128a80u: goto label_128a80;
        case 0x128a84u: goto label_128a84;
        case 0x128a88u: goto label_128a88;
        case 0x128a8cu: goto label_128a8c;
        case 0x128a90u: goto label_128a90;
        case 0x128a94u: goto label_128a94;
        case 0x128a98u: goto label_128a98;
        case 0x128a9cu: goto label_128a9c;
        case 0x128aa0u: goto label_128aa0;
        case 0x128aa4u: goto label_128aa4;
        case 0x128aa8u: goto label_128aa8;
        case 0x128aacu: goto label_128aac;
        case 0x128ab0u: goto label_128ab0;
        case 0x128ab4u: goto label_128ab4;
        case 0x128ab8u: goto label_128ab8;
        case 0x128abcu: goto label_128abc;
        case 0x128ac0u: goto label_128ac0;
        case 0x128ac4u: goto label_128ac4;
        case 0x128ac8u: goto label_128ac8;
        case 0x128accu: goto label_128acc;
        case 0x128ad0u: goto label_128ad0;
        case 0x128ad4u: goto label_128ad4;
        case 0x128ad8u: goto label_128ad8;
        case 0x128adcu: goto label_128adc;
        case 0x128ae0u: goto label_128ae0;
        case 0x128ae4u: goto label_128ae4;
        case 0x128ae8u: goto label_128ae8;
        case 0x128aecu: goto label_128aec;
        case 0x128af0u: goto label_128af0;
        case 0x128af4u: goto label_128af4;
        case 0x128af8u: goto label_128af8;
        case 0x128afcu: goto label_128afc;
        case 0x128b00u: goto label_128b00;
        case 0x128b04u: goto label_128b04;
        case 0x128b08u: goto label_128b08;
        case 0x128b0cu: goto label_128b0c;
        case 0x128b10u: goto label_128b10;
        case 0x128b14u: goto label_128b14;
        case 0x128b18u: goto label_128b18;
        case 0x128b1cu: goto label_128b1c;
        case 0x128b20u: goto label_128b20;
        case 0x128b24u: goto label_128b24;
        case 0x128b28u: goto label_128b28;
        case 0x128b2cu: goto label_128b2c;
        case 0x128b30u: goto label_128b30;
        case 0x128b34u: goto label_128b34;
        case 0x128b38u: goto label_128b38;
        case 0x128b3cu: goto label_128b3c;
        case 0x128b40u: goto label_128b40;
        case 0x128b44u: goto label_128b44;
        case 0x128b48u: goto label_128b48;
        case 0x128b4cu: goto label_128b4c;
        case 0x128b50u: goto label_128b50;
        case 0x128b54u: goto label_128b54;
        case 0x128b58u: goto label_128b58;
        case 0x128b5cu: goto label_128b5c;
        case 0x128b60u: goto label_128b60;
        case 0x128b64u: goto label_128b64;
        case 0x128b68u: goto label_128b68;
        case 0x128b6cu: goto label_128b6c;
        case 0x128b70u: goto label_128b70;
        case 0x128b74u: goto label_128b74;
        case 0x128b78u: goto label_128b78;
        case 0x128b7cu: goto label_128b7c;
        case 0x128b80u: goto label_128b80;
        case 0x128b84u: goto label_128b84;
        case 0x128b88u: goto label_128b88;
        case 0x128b8cu: goto label_128b8c;
        case 0x128b90u: goto label_128b90;
        case 0x128b94u: goto label_128b94;
        case 0x128b98u: goto label_128b98;
        case 0x128b9cu: goto label_128b9c;
        case 0x128ba0u: goto label_128ba0;
        case 0x128ba4u: goto label_128ba4;
        case 0x128ba8u: goto label_128ba8;
        case 0x128bacu: goto label_128bac;
        case 0x128bb0u: goto label_128bb0;
        case 0x128bb4u: goto label_128bb4;
        case 0x128bb8u: goto label_128bb8;
        case 0x128bbcu: goto label_128bbc;
        case 0x128bc0u: goto label_128bc0;
        case 0x128bc4u: goto label_128bc4;
        case 0x128bc8u: goto label_128bc8;
        case 0x128bccu: goto label_128bcc;
        case 0x128bd0u: goto label_128bd0;
        case 0x128bd4u: goto label_128bd4;
        case 0x128bd8u: goto label_128bd8;
        case 0x128bdcu: goto label_128bdc;
        case 0x128be0u: goto label_128be0;
        case 0x128be4u: goto label_128be4;
        case 0x128be8u: goto label_128be8;
        case 0x128becu: goto label_128bec;
        case 0x128bf0u: goto label_128bf0;
        case 0x128bf4u: goto label_128bf4;
        case 0x128bf8u: goto label_128bf8;
        case 0x128bfcu: goto label_128bfc;
        case 0x128c00u: goto label_128c00;
        case 0x128c04u: goto label_128c04;
        case 0x128c08u: goto label_128c08;
        case 0x128c0cu: goto label_128c0c;
        case 0x128c10u: goto label_128c10;
        case 0x128c14u: goto label_128c14;
        case 0x128c18u: goto label_128c18;
        case 0x128c1cu: goto label_128c1c;
        case 0x128c20u: goto label_128c20;
        case 0x128c24u: goto label_128c24;
        case 0x128c28u: goto label_128c28;
        case 0x128c2cu: goto label_128c2c;
        case 0x128c30u: goto label_128c30;
        case 0x128c34u: goto label_128c34;
        case 0x128c38u: goto label_128c38;
        case 0x128c3cu: goto label_128c3c;
        case 0x128c40u: goto label_128c40;
        case 0x128c44u: goto label_128c44;
        case 0x128c48u: goto label_128c48;
        case 0x128c4cu: goto label_128c4c;
        case 0x128c50u: goto label_128c50;
        case 0x128c54u: goto label_128c54;
        case 0x128c58u: goto label_128c58;
        case 0x128c5cu: goto label_128c5c;
        case 0x128c60u: goto label_128c60;
        case 0x128c64u: goto label_128c64;
        case 0x128c68u: goto label_128c68;
        case 0x128c6cu: goto label_128c6c;
        case 0x128c70u: goto label_128c70;
        case 0x128c74u: goto label_128c74;
        case 0x128c78u: goto label_128c78;
        case 0x128c7cu: goto label_128c7c;
        case 0x128c80u: goto label_128c80;
        case 0x128c84u: goto label_128c84;
        case 0x128c88u: goto label_128c88;
        case 0x128c8cu: goto label_128c8c;
        case 0x128c90u: goto label_128c90;
        case 0x128c94u: goto label_128c94;
        case 0x128c98u: goto label_128c98;
        case 0x128c9cu: goto label_128c9c;
        case 0x128ca0u: goto label_128ca0;
        case 0x128ca4u: goto label_128ca4;
        case 0x128ca8u: goto label_128ca8;
        case 0x128cacu: goto label_128cac;
        case 0x128cb0u: goto label_128cb0;
        case 0x128cb4u: goto label_128cb4;
        case 0x128cb8u: goto label_128cb8;
        case 0x128cbcu: goto label_128cbc;
        case 0x128cc0u: goto label_128cc0;
        case 0x128cc4u: goto label_128cc4;
        case 0x128cc8u: goto label_128cc8;
        case 0x128cccu: goto label_128ccc;
        case 0x128cd0u: goto label_128cd0;
        case 0x128cd4u: goto label_128cd4;
        case 0x128cd8u: goto label_128cd8;
        case 0x128cdcu: goto label_128cdc;
        case 0x128ce0u: goto label_128ce0;
        case 0x128ce4u: goto label_128ce4;
        case 0x128ce8u: goto label_128ce8;
        case 0x128cecu: goto label_128cec;
        case 0x128cf0u: goto label_128cf0;
        case 0x128cf4u: goto label_128cf4;
        case 0x128cf8u: goto label_128cf8;
        case 0x128cfcu: goto label_128cfc;
        case 0x128d00u: goto label_128d00;
        case 0x128d04u: goto label_128d04;
        case 0x128d08u: goto label_128d08;
        case 0x128d0cu: goto label_128d0c;
        case 0x128d10u: goto label_128d10;
        case 0x128d14u: goto label_128d14;
        case 0x128d18u: goto label_128d18;
        case 0x128d1cu: goto label_128d1c;
        case 0x128d20u: goto label_128d20;
        case 0x128d24u: goto label_128d24;
        case 0x128d28u: goto label_128d28;
        case 0x128d2cu: goto label_128d2c;
        case 0x128d30u: goto label_128d30;
        case 0x128d34u: goto label_128d34;
        case 0x128d38u: goto label_128d38;
        case 0x128d3cu: goto label_128d3c;
        case 0x128d40u: goto label_128d40;
        case 0x128d44u: goto label_128d44;
        case 0x128d48u: goto label_128d48;
        case 0x128d4cu: goto label_128d4c;
        case 0x128d50u: goto label_128d50;
        case 0x128d54u: goto label_128d54;
        case 0x128d58u: goto label_128d58;
        case 0x128d5cu: goto label_128d5c;
        case 0x128d60u: goto label_128d60;
        case 0x128d64u: goto label_128d64;
        case 0x128d68u: goto label_128d68;
        case 0x128d6cu: goto label_128d6c;
        case 0x128d70u: goto label_128d70;
        case 0x128d74u: goto label_128d74;
        case 0x128d78u: goto label_128d78;
        case 0x128d7cu: goto label_128d7c;
        case 0x128d80u: goto label_128d80;
        case 0x128d84u: goto label_128d84;
        case 0x128d88u: goto label_128d88;
        case 0x128d8cu: goto label_128d8c;
        case 0x128d90u: goto label_128d90;
        case 0x128d94u: goto label_128d94;
        case 0x128d98u: goto label_128d98;
        case 0x128d9cu: goto label_128d9c;
        case 0x128da0u: goto label_128da0;
        case 0x128da4u: goto label_128da4;
        case 0x128da8u: goto label_128da8;
        case 0x128dacu: goto label_128dac;
        case 0x128db0u: goto label_128db0;
        case 0x128db4u: goto label_128db4;
        case 0x128db8u: goto label_128db8;
        case 0x128dbcu: goto label_128dbc;
        case 0x128dc0u: goto label_128dc0;
        case 0x128dc4u: goto label_128dc4;
        case 0x128dc8u: goto label_128dc8;
        case 0x128dccu: goto label_128dcc;
        case 0x128dd0u: goto label_128dd0;
        case 0x128dd4u: goto label_128dd4;
        case 0x128dd8u: goto label_128dd8;
        case 0x128ddcu: goto label_128ddc;
        case 0x128de0u: goto label_128de0;
        case 0x128de4u: goto label_128de4;
        case 0x128de8u: goto label_128de8;
        case 0x128decu: goto label_128dec;
        case 0x128df0u: goto label_128df0;
        case 0x128df4u: goto label_128df4;
        case 0x128df8u: goto label_128df8;
        case 0x128dfcu: goto label_128dfc;
        case 0x128e00u: goto label_128e00;
        case 0x128e04u: goto label_128e04;
        case 0x128e08u: goto label_128e08;
        case 0x128e0cu: goto label_128e0c;
        case 0x128e10u: goto label_128e10;
        case 0x128e14u: goto label_128e14;
        case 0x128e18u: goto label_128e18;
        case 0x128e1cu: goto label_128e1c;
        case 0x128e20u: goto label_128e20;
        case 0x128e24u: goto label_128e24;
        case 0x128e28u: goto label_128e28;
        case 0x128e2cu: goto label_128e2c;
        case 0x128e30u: goto label_128e30;
        case 0x128e34u: goto label_128e34;
        case 0x128e38u: goto label_128e38;
        case 0x128e3cu: goto label_128e3c;
        case 0x128e40u: goto label_128e40;
        case 0x128e44u: goto label_128e44;
        case 0x128e48u: goto label_128e48;
        case 0x128e4cu: goto label_128e4c;
        case 0x128e50u: goto label_128e50;
        case 0x128e54u: goto label_128e54;
        case 0x128e58u: goto label_128e58;
        case 0x128e5cu: goto label_128e5c;
        case 0x128e60u: goto label_128e60;
        case 0x128e64u: goto label_128e64;
        case 0x128e68u: goto label_128e68;
        case 0x128e6cu: goto label_128e6c;
        case 0x128e70u: goto label_128e70;
        case 0x128e74u: goto label_128e74;
        case 0x128e78u: goto label_128e78;
        case 0x128e7cu: goto label_128e7c;
        case 0x128e80u: goto label_128e80;
        case 0x128e84u: goto label_128e84;
        case 0x128e88u: goto label_128e88;
        case 0x128e8cu: goto label_128e8c;
        case 0x128e90u: goto label_128e90;
        case 0x128e94u: goto label_128e94;
        case 0x128e98u: goto label_128e98;
        case 0x128e9cu: goto label_128e9c;
        case 0x128ea0u: goto label_128ea0;
        case 0x128ea4u: goto label_128ea4;
        case 0x128ea8u: goto label_128ea8;
        case 0x128eacu: goto label_128eac;
        case 0x128eb0u: goto label_128eb0;
        case 0x128eb4u: goto label_128eb4;
        case 0x128eb8u: goto label_128eb8;
        case 0x128ebcu: goto label_128ebc;
        case 0x128ec0u: goto label_128ec0;
        case 0x128ec4u: goto label_128ec4;
        case 0x128ec8u: goto label_128ec8;
        case 0x128eccu: goto label_128ecc;
        case 0x128ed0u: goto label_128ed0;
        case 0x128ed4u: goto label_128ed4;
        case 0x128ed8u: goto label_128ed8;
        case 0x128edcu: goto label_128edc;
        default: break;
    }

    ctx->pc = 0x1285a0u;

label_1285a0:
    // 0x1285a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1285a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1285a4:
    // 0x1285a4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1285a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_1285a8:
    // 0x1285a8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1285a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_1285ac:
    // 0x1285ac: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x1285acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
label_1285b0:
    // 0x1285b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1285b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1285b4:
    // 0x1285b4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1285b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_1285b8:
    // 0x1285b8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1285b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1285bc:
    // 0x1285bc: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1285bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_1285c0:
    // 0x1285c0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1285c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1285c4:
    // 0x1285c4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1285c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_1285c8:
    // 0x1285c8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1285c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1285cc:
    // 0x1285cc: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1285ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_1285d0:
    // 0x1285d0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1285d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_1285d4:
    // 0x1285d4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1285d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_1285d8:
    // 0x1285d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1285d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1285dc:
    // 0x1285dc: 0x32cf0007  andi        $t7, $s6, 0x7
    ctx->pc = 0x1285dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_1285e0:
    // 0x1285e0: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
label_1285e4:
    if (ctx->pc == 0x1285E4u) {
        ctx->pc = 0x1285E4u;
            // 0x1285e4: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1285E8u;
        goto label_1285e8;
    }
    ctx->pc = 0x1285E0u;
    {
        const bool branch_taken_0x1285e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1285E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285E0u;
            // 0x1285e4: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285e0) {
            ctx->pc = 0x1285F8u;
            goto label_1285f8;
        }
    }
    ctx->pc = 0x1285E8u;
label_1285e8:
    // 0x1285e8: 0x326f0007  andi        $t7, $s3, 0x7
    ctx->pc = 0x1285e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_1285ec:
    // 0x1285ec: 0x15e00002  bnez        $t7, . + 4 + (0x2 << 2)
label_1285f0:
    if (ctx->pc == 0x1285F0u) {
        ctx->pc = 0x1285F0u;
            // 0x1285f0: 0x3a6f0008  xori        $t7, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
        ctx->pc = 0x1285F4u;
        goto label_1285f4;
    }
    ctx->pc = 0x1285ECu;
    {
        const bool branch_taken_0x1285ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1285F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285ECu;
            // 0x1285f0: 0x3a6f0008  xori        $t7, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285ec) {
            ctx->pc = 0x1285F8u;
            goto label_1285f8;
        }
    }
    ctx->pc = 0x1285F4u;
label_1285f4:
    // 0x1285f4: 0xff02b  sltu        $fp, $zero, $t7
    ctx->pc = 0x1285f4u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_1285f8:
    // 0x1285f8: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x1285f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1285fc:
    // 0x1285fc: 0x2daf0007  sltiu       $t7, $t5, 0x7
    ctx->pc = 0x1285fcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_128600:
    // 0x128600: 0x11e00049  beqz        $t7, . + 4 + (0x49 << 2)
label_128604:
    if (ctx->pc == 0x128604u) {
        ctx->pc = 0x128604u;
            // 0x128604: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x128608u;
        goto label_128608;
    }
    ctx->pc = 0x128600u;
    {
        const bool branch_taken_0x128600 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128600u;
            // 0x128604: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128600) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x128608u;
label_128608:
    // 0x128608: 0x1b37018  mult        $t6, $t5, $s3
    ctx->pc = 0x128608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_12860c:
    // 0x12860c: 0x2d39021  addu        $s2, $s6, $s3
    ctx->pc = 0x12860cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_128610:
    // 0x128610: 0x2ce2821  addu        $a1, $s6, $t6
    ctx->pc = 0x128610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
label_128614:
    // 0x128614: 0x245782b  sltu        $t7, $s2, $a1
    ctx->pc = 0x128614u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_128618:
    // 0x128618: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
label_12861c:
    if (ctx->pc == 0x12861Cu) {
        ctx->pc = 0x12861Cu;
            // 0x12861c: 0x2bd40002  slti        $s4, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x128620u;
        goto label_128620;
    }
    ctx->pc = 0x128618u;
    {
        const bool branch_taken_0x128618 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128618u;
            // 0x12861c: 0x2bd40002  slti        $s4, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128618) {
            ctx->pc = 0x128660u;
            goto label_128660;
        }
    }
    ctx->pc = 0x128620u;
label_128620:
    // 0x128620: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x128620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_128624:
    // 0x128624: 0x13a8c2  srl         $s5, $s3, 3
    ctx->pc = 0x128624u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
label_128628:
    // 0x128628: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x128628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12862c:
    // 0x12862c: 0x2d0782b  sltu        $t7, $s6, $s0
    ctx->pc = 0x12862cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_128630:
    // 0x128630: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
label_128634:
    if (ctx->pc == 0x128634u) {
        ctx->pc = 0x128634u;
            // 0x128634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128638u;
        goto label_128638;
    }
    ctx->pc = 0x128630u;
    {
        const bool branch_taken_0x128630 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128630u;
            // 0x128634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128630) {
            ctx->pc = 0x12864Cu;
            goto label_12864c;
        }
    }
    ctx->pc = 0x128638u;
label_128638:
    // 0x128638: 0x2138823  subu        $s1, $s0, $s3
    ctx->pc = 0x128638u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_12863c:
    // 0x12863c: 0x2e0f809  jalr        $s7
label_128640:
    if (ctx->pc == 0x128640u) {
        ctx->pc = 0x128640u;
            // 0x128640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128644u;
        goto label_128644;
    }
    ctx->pc = 0x12863Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128644u);
        ctx->pc = 0x128640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12863Cu;
            // 0x128640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128644u; }
            if (ctx->pc != 0x128644u) { return; }
        }
        }
    }
    ctx->pc = 0x128644u;
label_128644:
    // 0x128644: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
label_128648:
    if (ctx->pc == 0x128648u) {
        ctx->pc = 0x12864Cu;
        goto label_12864c;
    }
    ctx->pc = 0x128644u;
    {
        const bool branch_taken_0x128644 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x128644) {
            ctx->pc = 0x128690u;
            goto label_128690;
        }
    }
    ctx->pc = 0x12864Cu;
label_12864c:
    // 0x12864c: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x12864cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_128650:
    // 0x128650: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x128650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_128654:
    // 0x128654: 0x24e782b  sltu        $t7, $s2, $t6
    ctx->pc = 0x128654u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_128658:
    // 0x128658: 0x15e0fff4  bnez        $t7, . + 4 + (-0xC << 2)
label_12865c:
    if (ctx->pc == 0x12865Cu) {
        ctx->pc = 0x12865Cu;
            // 0x12865c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128660u;
        goto label_128660;
    }
    ctx->pc = 0x128658u;
    {
        const bool branch_taken_0x128658 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12865Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128658u;
            // 0x12865c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128658) {
            ctx->pc = 0x12862Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12862c;
        }
    }
    ctx->pc = 0x128660u;
label_128660:
    // 0x128660: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x128660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_128664:
    // 0x128664: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x128664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_128668:
    // 0x128668: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x128668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_12866c:
    // 0x12866c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x12866cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_128670:
    // 0x128670: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x128670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_128674:
    // 0x128674: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x128674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_128678:
    // 0x128678: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x128678u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_12867c:
    // 0x12867c: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x12867cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_128680:
    // 0x128680: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x128680u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_128684:
    // 0x128684: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x128684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_128688:
    // 0x128688: 0x3e00008  jr          $ra
label_12868c:
    if (ctx->pc == 0x12868Cu) {
        ctx->pc = 0x12868Cu;
            // 0x12868c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x128690u;
        goto label_128690;
    }
    ctx->pc = 0x128688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12868Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128688u;
            // 0x12868c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128690u;
label_128690:
    // 0x128690: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
label_128694:
    if (ctx->pc == 0x128694u) {
        ctx->pc = 0x128698u;
        goto label_128698;
    }
    ctx->pc = 0x128690u;
    {
        const bool branch_taken_0x128690 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x128690) {
            ctx->pc = 0x1286B0u;
            goto label_1286b0;
        }
    }
    ctx->pc = 0x128698u;
label_128698:
    // 0x128698: 0xde0e0000  ld          $t6, 0x0($s0)
    ctx->pc = 0x128698u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_12869c:
    // 0x12869c: 0xde2f0000  ld          $t7, 0x0($s1)
    ctx->pc = 0x12869cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_1286a0:
    // 0x1286a0: 0xfe0f0000  sd          $t7, 0x0($s0)
    ctx->pc = 0x1286a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 15));
label_1286a4:
    // 0x1286a4: 0xfe2e0000  sd          $t6, 0x0($s1)
    ctx->pc = 0x1286a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 14));
label_1286a8:
    // 0x1286a8: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_1286ac:
    if (ctx->pc == 0x1286ACu) {
        ctx->pc = 0x1286ACu;
            // 0x1286ac: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1286B0u;
        goto label_1286b0;
    }
    ctx->pc = 0x1286A8u;
    {
        const bool branch_taken_0x1286a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286A8u;
            // 0x1286ac: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286a8) {
            ctx->pc = 0x12862Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12862c;
        }
    }
    ctx->pc = 0x1286B0u;
label_1286b0:
    // 0x1286b0: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_1286b4:
    if (ctx->pc == 0x1286B4u) {
        ctx->pc = 0x1286B4u;
            // 0x1286b4: 0x15603c  dsll32      $t4, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 21) << (32 + 0));
        ctx->pc = 0x1286B8u;
        goto label_1286b8;
    }
    ctx->pc = 0x1286B0u;
    {
        const bool branch_taken_0x1286b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286B0u;
            // 0x1286b4: 0x15603c  dsll32      $t4, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286b0) {
            ctx->pc = 0x1286ECu;
            goto label_1286ec;
        }
    }
    ctx->pc = 0x1286B8u;
label_1286b8:
    // 0x1286b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1286b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1286bc:
    // 0x1286bc: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x1286bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
label_1286c0:
    // 0x1286c0: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x1286c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1286c4:
    // 0x1286c4: 0xdc8e0000  ld          $t6, 0x0($a0)
    ctx->pc = 0x1286c4u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1286c8:
    // 0x1286c8: 0x658cffff  daddiu      $t4, $t4, -0x1
    ctx->pc = 0x1286c8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4294967295);
label_1286cc:
    // 0x1286cc: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x1286ccu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_1286d0:
    // 0x1286d0: 0xfc8f0000  sd          $t7, 0x0($a0)
    ctx->pc = 0x1286d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 15));
label_1286d4:
    // 0x1286d4: 0xfdae0000  sd          $t6, 0x0($t5)
    ctx->pc = 0x1286d4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 14));
label_1286d8:
    // 0x1286d8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1286d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1286dc:
    // 0x1286dc: 0x1d80fff9  bgtz        $t4, . + 4 + (-0x7 << 2)
label_1286e0:
    if (ctx->pc == 0x1286E0u) {
        ctx->pc = 0x1286E0u;
            // 0x1286e0: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->pc = 0x1286E4u;
        goto label_1286e4;
    }
    ctx->pc = 0x1286DCu;
    {
        const bool branch_taken_0x1286dc = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x1286E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286DCu;
            // 0x1286e0: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286dc) {
            ctx->pc = 0x1286C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1286c4;
        }
    }
    ctx->pc = 0x1286E4u;
label_1286e4:
    // 0x1286e4: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_1286e8:
    if (ctx->pc == 0x1286E8u) {
        ctx->pc = 0x1286E8u;
            // 0x1286e8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1286ECu;
        goto label_1286ec;
    }
    ctx->pc = 0x1286E4u;
    {
        const bool branch_taken_0x1286e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286E4u;
            // 0x1286e8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286e4) {
            ctx->pc = 0x12862Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12862c;
        }
    }
    ctx->pc = 0x1286ECu;
label_1286ec:
    // 0x1286ec: 0x13603c  dsll32      $t4, $s3, 0
    ctx->pc = 0x1286ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 0));
label_1286f0:
    // 0x1286f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1286f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1286f4:
    // 0x1286f4: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x1286f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
label_1286f8:
    // 0x1286f8: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x1286f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1286fc:
    // 0x1286fc: 0x808e0000  lb          $t6, 0x0($a0)
    ctx->pc = 0x1286fcu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_128700:
    // 0x128700: 0x658cffff  daddiu      $t4, $t4, -0x1
    ctx->pc = 0x128700u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4294967295);
label_128704:
    // 0x128704: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x128704u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_128708:
    // 0x128708: 0xa08f0000  sb          $t7, 0x0($a0)
    ctx->pc = 0x128708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 15));
label_12870c:
    // 0x12870c: 0xa1ae0000  sb          $t6, 0x0($t5)
    ctx->pc = 0x12870cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
label_128710:
    // 0x128710: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x128710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_128714:
    // 0x128714: 0x1d80fff9  bgtz        $t4, . + 4 + (-0x7 << 2)
label_128718:
    if (ctx->pc == 0x128718u) {
        ctx->pc = 0x128718u;
            // 0x128718: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->pc = 0x12871Cu;
        goto label_12871c;
    }
    ctx->pc = 0x128714u;
    {
        const bool branch_taken_0x128714 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x128718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128714u;
            // 0x128718: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128714) {
            ctx->pc = 0x1286FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1286fc;
        }
    }
    ctx->pc = 0x12871Cu;
label_12871c:
    // 0x12871c: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
label_128720:
    if (ctx->pc == 0x128720u) {
        ctx->pc = 0x128720u;
            // 0x128720: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128724u;
        goto label_128724;
    }
    ctx->pc = 0x12871Cu;
    {
        const bool branch_taken_0x12871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12871Cu;
            // 0x128720: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12871c) {
            ctx->pc = 0x12862Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12862c;
        }
    }
    ctx->pc = 0x128724u;
label_128724:
    // 0x128724: 0x0  nop
    ctx->pc = 0x128724u;
    // NOP
label_128728:
    // 0x128728: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x128728u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12872c:
    // 0x12872c: 0xd7842  srl         $t7, $t5, 1
    ctx->pc = 0x12872cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_128730:
    // 0x128730: 0x2dae0008  sltiu       $t6, $t5, 0x8
    ctx->pc = 0x128730u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_128734:
    // 0x128734: 0x1f37818  mult        $t7, $t7, $s3
    ctx->pc = 0x128734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_128738:
    // 0x128738: 0x15c001e5  bnez        $t6, . + 4 + (0x1E5 << 2)
label_12873c:
    if (ctx->pc == 0x12873Cu) {
        ctx->pc = 0x12873Cu;
            // 0x12873c: 0x2cf9021  addu        $s2, $s6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
        ctx->pc = 0x128740u;
        goto label_128740;
    }
    ctx->pc = 0x128738u;
    {
        const bool branch_taken_0x128738 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128738u;
            // 0x12873c: 0x2cf9021  addu        $s2, $s6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128738) {
            ctx->pc = 0x128ED0u;
            goto label_128ed0;
        }
    }
    ctx->pc = 0x128740u;
label_128740:
    // 0x128740: 0x25b5ffff  addiu       $s5, $t5, -0x1
    ctx->pc = 0x128740u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_128744:
    // 0x128744: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x128744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128748:
    // 0x128748: 0x2b37818  mult        $t7, $s5, $s3
    ctx->pc = 0x128748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_12874c:
    // 0x12874c: 0x2dae0029  sltiu       $t6, $t5, 0x29
    ctx->pc = 0x12874cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_128750:
    // 0x128750: 0x15c00042  bnez        $t6, . + 4 + (0x42 << 2)
label_128754:
    if (ctx->pc == 0x128754u) {
        ctx->pc = 0x128754u;
            // 0x128754: 0x2cfa021  addu        $s4, $s6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
        ctx->pc = 0x128758u;
        goto label_128758;
    }
    ctx->pc = 0x128750u;
    {
        const bool branch_taken_0x128750 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x128754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128750u;
            // 0x128754: 0x2cfa021  addu        $s4, $s6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128750) {
            ctx->pc = 0x12885Cu;
            goto label_12885c;
        }
    }
    ctx->pc = 0x128758u;
label_128758:
    // 0x128758: 0xd78c2  srl         $t7, $t5, 3
    ctx->pc = 0x128758u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 13), 3));
label_12875c:
    // 0x12875c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128760:
    // 0x128760: 0x1f37018  mult        $t6, $t7, $s3
    ctx->pc = 0x128760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_128764:
    // 0x128764: 0xe7840  sll         $t7, $t6, 1
    ctx->pc = 0x128764u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
label_128768:
    // 0x128768: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x128768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
label_12876c:
    // 0x12876c: 0x2ce8021  addu        $s0, $s6, $t6
    ctx->pc = 0x12876cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
label_128770:
    // 0x128770: 0xafaf0010  sw          $t7, 0x10($sp)
    ctx->pc = 0x128770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 15));
label_128774:
    // 0x128774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128778:
    // 0x128778: 0x2e0f809  jalr        $s7
label_12877c:
    if (ctx->pc == 0x12877Cu) {
        ctx->pc = 0x12877Cu;
            // 0x12877c: 0x2cf8821  addu        $s1, $s6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
        ctx->pc = 0x128780u;
        goto label_128780;
    }
    ctx->pc = 0x128778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128780u);
        ctx->pc = 0x12877Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128778u;
            // 0x12877c: 0x2cf8821  addu        $s1, $s6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128780u; }
            if (ctx->pc != 0x128780u) { return; }
        }
        }
    }
    ctx->pc = 0x128780u;
label_128780:
    // 0x128780: 0x44101c7  bgez        $v0, . + 4 + (0x1C7 << 2)
label_128784:
    if (ctx->pc == 0x128784u) {
        ctx->pc = 0x128784u;
            // 0x128784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128788u;
        goto label_128788;
    }
    ctx->pc = 0x128780u;
    {
        const bool branch_taken_0x128780 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x128784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128780u;
            // 0x128784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128780) {
            ctx->pc = 0x128EA0u;
            goto label_128ea0;
        }
    }
    ctx->pc = 0x128788u;
label_128788:
    // 0x128788: 0x2e0f809  jalr        $s7
label_12878c:
    if (ctx->pc == 0x12878Cu) {
        ctx->pc = 0x12878Cu;
            // 0x12878c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128790u;
        goto label_128790;
    }
    ctx->pc = 0x128788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128790u);
        ctx->pc = 0x12878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128788u;
            // 0x12878c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128790u; }
            if (ctx->pc != 0x128790u) { return; }
        }
        }
    }
    ctx->pc = 0x128790u;
label_128790:
    // 0x128790: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
label_128794:
    if (ctx->pc == 0x128794u) {
        ctx->pc = 0x128794u;
            // 0x128794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128798u;
        goto label_128798;
    }
    ctx->pc = 0x128790u;
    {
        const bool branch_taken_0x128790 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x128790) {
            ctx->pc = 0x128794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128790u;
            // 0x128794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1287B0u;
            goto label_1287b0;
        }
    }
    ctx->pc = 0x128798u;
label_128798:
    // 0x128798: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12879c:
    // 0x12879c: 0x2e0f809  jalr        $s7
label_1287a0:
    if (ctx->pc == 0x1287A0u) {
        ctx->pc = 0x1287A0u;
            // 0x1287a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1287A4u;
        goto label_1287a4;
    }
    ctx->pc = 0x12879Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x1287A4u);
        ctx->pc = 0x1287A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12879Cu;
            // 0x1287a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1287A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1287A4u; }
            if (ctx->pc != 0x1287A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1287A4u;
label_1287a4:
    // 0x1287a4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1287a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1287a8:
    // 0x1287a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1287a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1287ac:
    // 0x1287ac: 0x2c2200a  movz        $a0, $s6, $v0
    ctx->pc = 0x1287acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
label_1287b0:
    // 0x1287b0: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x1287b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1287b4:
    // 0x1287b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1287b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1287b8:
    // 0x1287b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1287b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1287bc:
    // 0x1287bc: 0x24d6823  subu        $t5, $s2, $t5
    ctx->pc = 0x1287bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
label_1287c0:
    // 0x1287c0: 0xafad0014  sw          $t5, 0x14($sp)
    ctx->pc = 0x1287c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 13));
label_1287c4:
    // 0x1287c4: 0x2e0f809  jalr        $s7
label_1287c8:
    if (ctx->pc == 0x1287C8u) {
        ctx->pc = 0x1287C8u;
            // 0x1287c8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1287CCu;
        goto label_1287cc;
    }
    ctx->pc = 0x1287C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x1287CCu);
        ctx->pc = 0x1287C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287C4u;
            // 0x1287c8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1287CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1287CCu; }
            if (ctx->pc != 0x1287CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1287CCu;
label_1287cc:
    // 0x1287cc: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x1287ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1287d0:
    // 0x1287d0: 0x44101a7  bgez        $v0, . + 4 + (0x1A7 << 2)
label_1287d4:
    if (ctx->pc == 0x1287D4u) {
        ctx->pc = 0x1287D4u;
            // 0x1287d4: 0x24e8821  addu        $s1, $s2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
        ctx->pc = 0x1287D8u;
        goto label_1287d8;
    }
    ctx->pc = 0x1287D0u;
    {
        const bool branch_taken_0x1287d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1287D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287D0u;
            // 0x1287d4: 0x24e8821  addu        $s1, $s2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287d0) {
            ctx->pc = 0x128E70u;
            goto label_128e70;
        }
    }
    ctx->pc = 0x1287D8u;
label_1287d8:
    // 0x1287d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1287d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1287dc:
    // 0x1287dc: 0x2e0f809  jalr        $s7
label_1287e0:
    if (ctx->pc == 0x1287E0u) {
        ctx->pc = 0x1287E0u;
            // 0x1287e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1287E4u;
        goto label_1287e4;
    }
    ctx->pc = 0x1287DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x1287E4u);
        ctx->pc = 0x1287E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287DCu;
            // 0x1287e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1287E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1287E4u; }
            if (ctx->pc != 0x1287E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1287E4u;
label_1287e4:
    // 0x1287e4: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
label_1287e8:
    if (ctx->pc == 0x1287E8u) {
        ctx->pc = 0x1287E8u;
            // 0x1287e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1287ECu;
        goto label_1287ec;
    }
    ctx->pc = 0x1287E4u;
    {
        const bool branch_taken_0x1287e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1287e4) {
            ctx->pc = 0x1287E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1287E4u;
            // 0x1287e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128804u;
            goto label_128804;
        }
    }
    ctx->pc = 0x1287ECu;
label_1287ec:
    // 0x1287ec: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1287ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1287f0:
    // 0x1287f0: 0x2e0f809  jalr        $s7
label_1287f4:
    if (ctx->pc == 0x1287F4u) {
        ctx->pc = 0x1287F4u;
            // 0x1287f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1287F8u;
        goto label_1287f8;
    }
    ctx->pc = 0x1287F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x1287F8u);
        ctx->pc = 0x1287F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287F0u;
            // 0x1287f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1287F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1287F8u; }
            if (ctx->pc != 0x1287F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1287F8u;
label_1287f8:
    // 0x1287f8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1287f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1287fc:
    // 0x1287fc: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1287fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_128800:
    // 0x128800: 0x222200b  movn        $a0, $s1, $v0
    ctx->pc = 0x128800u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
label_128804:
    // 0x128804: 0x8faf0010  lw          $t7, 0x10($sp)
    ctx->pc = 0x128804u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_128808:
    // 0x128808: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x128808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12880c:
    // 0x12880c: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x12880cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_128810:
    // 0x128810: 0x28f7823  subu        $t7, $s4, $t7
    ctx->pc = 0x128810u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
label_128814:
    // 0x128814: 0xafaf0018  sw          $t7, 0x18($sp)
    ctx->pc = 0x128814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 15));
label_128818:
    // 0x128818: 0x28d8823  subu        $s1, $s4, $t5
    ctx->pc = 0x128818u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
label_12881c:
    // 0x12881c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12881cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_128820:
    // 0x128820: 0x2e0f809  jalr        $s7
label_128824:
    if (ctx->pc == 0x128824u) {
        ctx->pc = 0x128824u;
            // 0x128824: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x128828u;
        goto label_128828;
    }
    ctx->pc = 0x128820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128828u);
        ctx->pc = 0x128824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128820u;
            // 0x128824: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128828u; }
            if (ctx->pc != 0x128828u) { return; }
        }
        }
    }
    ctx->pc = 0x128828u;
label_128828:
    // 0x128828: 0x4410186  bgez        $v0, . + 4 + (0x186 << 2)
label_12882c:
    if (ctx->pc == 0x12882Cu) {
        ctx->pc = 0x12882Cu;
            // 0x12882c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128830u;
        goto label_128830;
    }
    ctx->pc = 0x128828u;
    {
        const bool branch_taken_0x128828 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12882Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128828u;
            // 0x12882c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128828) {
            ctx->pc = 0x128E44u;
            goto label_128e44;
        }
    }
    ctx->pc = 0x128830u;
label_128830:
    // 0x128830: 0x2e0f809  jalr        $s7
label_128834:
    if (ctx->pc == 0x128834u) {
        ctx->pc = 0x128834u;
            // 0x128834: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128838u;
        goto label_128838;
    }
    ctx->pc = 0x128830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128838u);
        ctx->pc = 0x128834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128830u;
            // 0x128834: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128838u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128838u; }
            if (ctx->pc != 0x128838u) { return; }
        }
        }
    }
    ctx->pc = 0x128838u;
label_128838:
    // 0x128838: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_12883c:
    if (ctx->pc == 0x12883Cu) {
        ctx->pc = 0x12883Cu;
            // 0x12883c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128840u;
        goto label_128840;
    }
    ctx->pc = 0x128838u;
    {
        const bool branch_taken_0x128838 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128838u;
            // 0x12883c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128838) {
            ctx->pc = 0x128858u;
            goto label_128858;
        }
    }
    ctx->pc = 0x128840u;
label_128840:
    // 0x128840: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x128840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_128844:
    // 0x128844: 0x2e0f809  jalr        $s7
label_128848:
    if (ctx->pc == 0x128848u) {
        ctx->pc = 0x128848u;
            // 0x128848: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12884Cu;
        goto label_12884c;
    }
    ctx->pc = 0x128844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x12884Cu);
        ctx->pc = 0x128848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128844u;
            // 0x128848: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12884Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12884Cu; }
            if (ctx->pc != 0x12884Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12884Cu;
label_12884c:
    // 0x12884c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12884cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_128850:
    // 0x128850: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x128850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_128854:
    // 0x128854: 0x282200b  movn        $a0, $s4, $v0
    ctx->pc = 0x128854u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
label_128858:
    // 0x128858: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x128858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12885c:
    // 0x12885c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12885cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128860:
    // 0x128860: 0x2e0f809  jalr        $s7
label_128864:
    if (ctx->pc == 0x128864u) {
        ctx->pc = 0x128864u;
            // 0x128864: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128868u;
        goto label_128868;
    }
    ctx->pc = 0x128860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128868u);
        ctx->pc = 0x128864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128860u;
            // 0x128864: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128868u; }
            if (ctx->pc != 0x128868u) { return; }
        }
        }
    }
    ctx->pc = 0x128868u;
label_128868:
    // 0x128868: 0x441016b  bgez        $v0, . + 4 + (0x16B << 2)
label_12886c:
    if (ctx->pc == 0x12886Cu) {
        ctx->pc = 0x12886Cu;
            // 0x12886c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128870u;
        goto label_128870;
    }
    ctx->pc = 0x128868u;
    {
        const bool branch_taken_0x128868 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128868u;
            // 0x12886c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128868) {
            ctx->pc = 0x128E18u;
            goto label_128e18;
        }
    }
    ctx->pc = 0x128870u;
label_128870:
    // 0x128870: 0x2e0f809  jalr        $s7
label_128874:
    if (ctx->pc == 0x128874u) {
        ctx->pc = 0x128874u;
            // 0x128874: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128878u;
        goto label_128878;
    }
    ctx->pc = 0x128870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128878u);
        ctx->pc = 0x128874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128870u;
            // 0x128874: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128878u; }
            if (ctx->pc != 0x128878u) { return; }
        }
        }
    }
    ctx->pc = 0x128878u;
label_128878:
    // 0x128878: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_12887c:
    if (ctx->pc == 0x12887Cu) {
        ctx->pc = 0x12887Cu;
            // 0x12887c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128880u;
        goto label_128880;
    }
    ctx->pc = 0x128878u;
    {
        const bool branch_taken_0x128878 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128878u;
            // 0x12887c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128878) {
            ctx->pc = 0x128898u;
            goto label_128898;
        }
    }
    ctx->pc = 0x128880u;
label_128880:
    // 0x128880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128884:
    // 0x128884: 0x2e0f809  jalr        $s7
label_128888:
    if (ctx->pc == 0x128888u) {
        ctx->pc = 0x128888u;
            // 0x128888: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12888Cu;
        goto label_12888c;
    }
    ctx->pc = 0x128884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x12888Cu);
        ctx->pc = 0x128888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128884u;
            // 0x128888: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12888Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12888Cu; }
            if (ctx->pc != 0x12888Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12888Cu;
label_12888c:
    // 0x12888c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x12888cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_128890:
    // 0x128890: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_128894:
    // 0x128894: 0x202200a  movz        $a0, $s0, $v0
    ctx->pc = 0x128894u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
label_128898:
    // 0x128898: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x128898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12889c:
    // 0x12889c: 0x17c00140  bnez        $fp, . + 4 + (0x140 << 2)
label_1288a0:
    if (ctx->pc == 0x1288A0u) {
        ctx->pc = 0x1288A0u;
            // 0x1288a0: 0x2bcf0002  slti        $t7, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1288A4u;
        goto label_1288a4;
    }
    ctx->pc = 0x12889Cu;
    {
        const bool branch_taken_0x12889c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1288A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12889Cu;
            // 0x1288a0: 0x2bcf0002  slti        $t7, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12889c) {
            ctx->pc = 0x128DA0u;
            goto label_128da0;
        }
    }
    ctx->pc = 0x1288A4u;
label_1288a4:
    // 0x1288a4: 0xdece0000  ld          $t6, 0x0($s6)
    ctx->pc = 0x1288a4u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_1288a8:
    // 0x1288a8: 0xde4f0000  ld          $t7, 0x0($s2)
    ctx->pc = 0x1288a8u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_1288ac:
    // 0x1288ac: 0xfecf0000  sd          $t7, 0x0($s6)
    ctx->pc = 0x1288acu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 15));
label_1288b0:
    // 0x1288b0: 0xfe4e0000  sd          $t6, 0x0($s2)
    ctx->pc = 0x1288b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 14));
label_1288b4:
    // 0x1288b4: 0x2b37818  mult        $t7, $s5, $s3
    ctx->pc = 0x1288b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_1288b8:
    // 0x1288b8: 0x2d39021  addu        $s2, $s6, $s3
    ctx->pc = 0x1288b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_1288bc:
    // 0x1288bc: 0x2bcd0002  slti        $t5, $fp, 0x2
    ctx->pc = 0x1288bcu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_1288c0:
    // 0x1288c0: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x1288c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
label_1288c4:
    // 0x1288c4: 0x1370c2  srl         $t6, $s3, 3
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
label_1288c8:
    // 0x1288c8: 0xafad001c  sw          $t5, 0x1C($sp)
    ctx->pc = 0x1288c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 13));
label_1288cc:
    // 0x1288cc: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x1288ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
label_1288d0:
    // 0x1288d0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1288d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1288d4:
    // 0x1288d4: 0x2cfa821  addu        $s5, $s6, $t7
    ctx->pc = 0x1288d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
label_1288d8:
    // 0x1288d8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1288d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1288dc:
    // 0x1288dc: 0x232802b  sltu        $s0, $s1, $s2
    ctx->pc = 0x1288dcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1288e0:
    // 0x1288e0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1288e4:
    if (ctx->pc == 0x1288E4u) {
        ctx->pc = 0x1288E4u;
            // 0x1288e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1288E8u;
        goto label_1288e8;
    }
    ctx->pc = 0x1288E0u;
    {
        const bool branch_taken_0x1288e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1288E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1288E0u;
            // 0x1288e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288e0) {
            ctx->pc = 0x1288F8u;
            goto label_1288f8;
        }
    }
    ctx->pc = 0x1288E8u;
label_1288e8:
    // 0x1288e8: 0x2e0f809  jalr        $s7
label_1288ec:
    if (ctx->pc == 0x1288ECu) {
        ctx->pc = 0x1288ECu;
            // 0x1288ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1288F0u;
        goto label_1288f0;
    }
    ctx->pc = 0x1288E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x1288F0u);
        ctx->pc = 0x1288ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1288E8u;
            // 0x1288ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1288F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1288F0u; }
            if (ctx->pc != 0x1288F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1288F0u;
label_1288f0:
    // 0x1288f0: 0x184000ff  blez        $v0, . + 4 + (0xFF << 2)
label_1288f4:
    if (ctx->pc == 0x1288F4u) {
        ctx->pc = 0x1288F8u;
        goto label_1288f8;
    }
    ctx->pc = 0x1288F0u;
    {
        const bool branch_taken_0x1288f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1288f0) {
            ctx->pc = 0x128CF0u;
            goto label_128cf0;
        }
    }
    ctx->pc = 0x1288F8u;
label_1288f8:
    // 0x1288f8: 0x2bcf0002  slti        $t7, $fp, 0x2
    ctx->pc = 0x1288f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_1288fc:
    // 0x1288fc: 0x1368c2  srl         $t5, $s3, 3
    ctx->pc = 0x1288fcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
label_128900:
    // 0x128900: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x128900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
label_128904:
    // 0x128904: 0xafad0040  sw          $t5, 0x40($sp)
    ctx->pc = 0x128904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 13));
label_128908:
    // 0x128908: 0x1600005b  bnez        $s0, . + 4 + (0x5B << 2)
label_12890c:
    if (ctx->pc == 0x12890Cu) {
        ctx->pc = 0x12890Cu;
            // 0x12890c: 0x8faf0008  lw          $t7, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x128910u;
        goto label_128910;
    }
    ctx->pc = 0x128908u;
    {
        const bool branch_taken_0x128908 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128908u;
            // 0x12890c: 0x8faf0008  lw          $t7, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128908) {
            ctx->pc = 0x128A78u;
            goto label_128a78;
        }
    }
    ctx->pc = 0x128910u;
label_128910:
    // 0x128910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_128914:
    // 0x128914: 0x2e0f809  jalr        $s7
label_128918:
    if (ctx->pc == 0x128918u) {
        ctx->pc = 0x128918u;
            // 0x128918: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12891Cu;
        goto label_12891c;
    }
    ctx->pc = 0x128914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x12891Cu);
        ctx->pc = 0x128918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128914u;
            // 0x128918: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12891Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12891Cu; }
            if (ctx->pc != 0x12891Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12891Cu;
label_12891c:
    // 0x12891c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
label_128920:
    if (ctx->pc == 0x128920u) {
        ctx->pc = 0x128924u;
        goto label_128924;
    }
    ctx->pc = 0x12891Cu;
    {
        const bool branch_taken_0x12891c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12891c) {
            ctx->pc = 0x1289C8u;
            goto label_1289c8;
        }
    }
    ctx->pc = 0x128924u;
label_128924:
    // 0x128924: 0x17c0000a  bnez        $fp, . + 4 + (0xA << 2)
label_128928:
    if (ctx->pc == 0x128928u) {
        ctx->pc = 0x128928u;
            // 0x128928: 0x2bcf0002  slti        $t7, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x12892Cu;
        goto label_12892c;
    }
    ctx->pc = 0x128924u;
    {
        const bool branch_taken_0x128924 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x128928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128924u;
            // 0x128928: 0x2bcf0002  slti        $t7, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128924) {
            ctx->pc = 0x128950u;
            goto label_128950;
        }
    }
    ctx->pc = 0x12892Cu;
label_12892c:
    // 0x12892c: 0xde4e0000  ld          $t6, 0x0($s2)
    ctx->pc = 0x12892cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_128930:
    // 0x128930: 0xde2f0000  ld          $t7, 0x0($s1)
    ctx->pc = 0x128930u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_128934:
    // 0x128934: 0xfe4f0000  sd          $t7, 0x0($s2)
    ctx->pc = 0x128934u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 15));
label_128938:
    // 0x128938: 0xfe2e0000  sd          $t6, 0x0($s1)
    ctx->pc = 0x128938u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 14));
label_12893c:
    // 0x12893c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12893cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128940:
    // 0x128940: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x128940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_128944:
    // 0x128944: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x128944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
label_128948:
    // 0x128948: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_12894c:
    if (ctx->pc == 0x12894Cu) {
        ctx->pc = 0x12894Cu;
            // 0x12894c: 0x2338823  subu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->pc = 0x128950u;
        goto label_128950;
    }
    ctx->pc = 0x128948u;
    {
        const bool branch_taken_0x128948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12894Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128948u;
            // 0x12894c: 0x2338823  subu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128948) {
            ctx->pc = 0x1288DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1288dc;
        }
    }
    ctx->pc = 0x128950u;
label_128950:
    // 0x128950: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
label_128954:
    if (ctx->pc == 0x128954u) {
        ctx->pc = 0x128954u;
            // 0x128954: 0x1378c2  srl         $t7, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->pc = 0x128958u;
        goto label_128958;
    }
    ctx->pc = 0x128950u;
    {
        const bool branch_taken_0x128950 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128950u;
            // 0x128954: 0x1378c2  srl         $t7, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128950) {
            ctx->pc = 0x128990u;
            goto label_128990;
        }
    }
    ctx->pc = 0x128958u;
label_128958:
    // 0x128958: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x128958u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12895c:
    // 0x12895c: 0xf583c  dsll32      $t3, $t7, 0
    ctx->pc = 0x12895cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) << (32 + 0));
label_128960:
    // 0x128960: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x128960u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_128964:
    // 0x128964: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x128964u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
label_128968:
    // 0x128968: 0xdd8e0000  ld          $t6, 0x0($t4)
    ctx->pc = 0x128968u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 12), 0)));
label_12896c:
    // 0x12896c: 0x656bffff  daddiu      $t3, $t3, -0x1
    ctx->pc = 0x12896cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
label_128970:
    // 0x128970: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x128970u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_128974:
    // 0x128974: 0xfd8f0000  sd          $t7, 0x0($t4)
    ctx->pc = 0x128974u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 15));
label_128978:
    // 0x128978: 0xfdae0000  sd          $t6, 0x0($t5)
    ctx->pc = 0x128978u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 14));
label_12897c:
    // 0x12897c: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x12897cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_128980:
    // 0x128980: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
label_128984:
    if (ctx->pc == 0x128984u) {
        ctx->pc = 0x128984u;
            // 0x128984: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->pc = 0x128988u;
        goto label_128988;
    }
    ctx->pc = 0x128980u;
    {
        const bool branch_taken_0x128980 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x128984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128980u;
            // 0x128984: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128980) {
            ctx->pc = 0x128968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128968;
        }
    }
    ctx->pc = 0x128988u;
label_128988:
    // 0x128988: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_12898c:
    if (ctx->pc == 0x12898Cu) {
        ctx->pc = 0x12898Cu;
            // 0x12898c: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x128990u;
        goto label_128990;
    }
    ctx->pc = 0x128988u;
    {
        const bool branch_taken_0x128988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128988u;
            // 0x12898c: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128988) {
            ctx->pc = 0x128940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128940;
        }
    }
    ctx->pc = 0x128990u;
label_128990:
    // 0x128990: 0x13583c  dsll32      $t3, $s3, 0
    ctx->pc = 0x128990u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) << (32 + 0));
label_128994:
    // 0x128994: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x128994u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128998:
    // 0x128998: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x128998u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
label_12899c:
    // 0x12899c: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x12899cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1289a0:
    // 0x1289a0: 0x818e0000  lb          $t6, 0x0($t4)
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_1289a4:
    // 0x1289a4: 0x656bffff  daddiu      $t3, $t3, -0x1
    ctx->pc = 0x1289a4u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
label_1289a8:
    // 0x1289a8: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x1289a8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_1289ac:
    // 0x1289ac: 0xa18f0000  sb          $t7, 0x0($t4)
    ctx->pc = 0x1289acu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 15));
label_1289b0:
    // 0x1289b0: 0xa1ae0000  sb          $t6, 0x0($t5)
    ctx->pc = 0x1289b0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
label_1289b4:
    // 0x1289b4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1289b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_1289b8:
    // 0x1289b8: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
label_1289bc:
    if (ctx->pc == 0x1289BCu) {
        ctx->pc = 0x1289BCu;
            // 0x1289bc: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->pc = 0x1289C0u;
        goto label_1289c0;
    }
    ctx->pc = 0x1289B8u;
    {
        const bool branch_taken_0x1289b8 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x1289BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289B8u;
            // 0x1289bc: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289b8) {
            ctx->pc = 0x1289A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1289a0;
        }
    }
    ctx->pc = 0x1289C0u;
label_1289c0:
    // 0x1289c0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_1289c4:
    if (ctx->pc == 0x1289C4u) {
        ctx->pc = 0x1289C4u;
            // 0x1289c4: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1289C8u;
        goto label_1289c8;
    }
    ctx->pc = 0x1289C0u;
    {
        const bool branch_taken_0x1289c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289C0u;
            // 0x1289c4: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289c0) {
            ctx->pc = 0x128940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128940;
        }
    }
    ctx->pc = 0x1289C8u;
label_1289c8:
    // 0x1289c8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1289cc:
    if (ctx->pc == 0x1289CCu) {
        ctx->pc = 0x1289CCu;
            // 0x1289cc: 0x2338823  subu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->pc = 0x1289D0u;
        goto label_1289d0;
    }
    ctx->pc = 0x1289C8u;
    {
        const bool branch_taken_0x1289c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1289c8) {
            ctx->pc = 0x1289CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1289C8u;
            // 0x1289cc: 0x2338823  subu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1289F4u;
            goto label_1289f4;
        }
    }
    ctx->pc = 0x1289D0u;
label_1289d0:
    // 0x1289d0: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1289d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1289d4:
    // 0x1289d4: 0x17c00009  bnez        $fp, . + 4 + (0x9 << 2)
label_1289d8:
    if (ctx->pc == 0x1289D8u) {
        ctx->pc = 0x1289D8u;
            // 0x1289d8: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->pc = 0x1289DCu;
        goto label_1289dc;
    }
    ctx->pc = 0x1289D4u;
    {
        const bool branch_taken_0x1289d4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289D4u;
            // 0x1289d8: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289d4) {
            ctx->pc = 0x1289FCu;
            goto label_1289fc;
        }
    }
    ctx->pc = 0x1289DCu;
label_1289dc:
    // 0x1289dc: 0xde2e0000  ld          $t6, 0x0($s1)
    ctx->pc = 0x1289dcu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_1289e0:
    // 0x1289e0: 0xdeaf0000  ld          $t7, 0x0($s5)
    ctx->pc = 0x1289e0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_1289e4:
    // 0x1289e4: 0xfe2f0000  sd          $t7, 0x0($s1)
    ctx->pc = 0x1289e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 15));
label_1289e8:
    // 0x1289e8: 0xfeae0000  sd          $t6, 0x0($s5)
    ctx->pc = 0x1289e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 14));
label_1289ec:
    // 0x1289ec: 0x2b3a823  subu        $s5, $s5, $s3
    ctx->pc = 0x1289ecu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1289f0:
    // 0x1289f0: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x1289f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1289f4:
    // 0x1289f4: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_1289f8:
    if (ctx->pc == 0x1289F8u) {
        ctx->pc = 0x1289F8u;
            // 0x1289f8: 0x232802b  sltu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->pc = 0x1289FCu;
        goto label_1289fc;
    }
    ctx->pc = 0x1289F4u;
    {
        const bool branch_taken_0x1289f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289F4u;
            // 0x1289f8: 0x232802b  sltu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289f4) {
            ctx->pc = 0x128908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128908;
        }
    }
    ctx->pc = 0x1289FCu;
label_1289fc:
    // 0x1289fc: 0x8faf0030  lw          $t7, 0x30($sp)
    ctx->pc = 0x1289fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_128a00:
    // 0x128a00: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
label_128a04:
    if (ctx->pc == 0x128A04u) {
        ctx->pc = 0x128A04u;
            // 0x128a04: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128A08u;
        goto label_128a08;
    }
    ctx->pc = 0x128A00u;
    {
        const bool branch_taken_0x128a00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A00u;
            // 0x128a04: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a00) {
            ctx->pc = 0x128A40u;
            goto label_128a40;
        }
    }
    ctx->pc = 0x128A08u;
label_128a08:
    // 0x128a08: 0x8fad0040  lw          $t5, 0x40($sp)
    ctx->pc = 0x128a08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_128a0c:
    // 0x128a0c: 0xd583c  dsll32      $t3, $t5, 0
    ctx->pc = 0x128a0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) << (32 + 0));
label_128a10:
    // 0x128a10: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x128a10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
label_128a14:
    // 0x128a14: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x128a14u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_128a18:
    // 0x128a18: 0xdd8e0000  ld          $t6, 0x0($t4)
    ctx->pc = 0x128a18u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 12), 0)));
label_128a1c:
    // 0x128a1c: 0x656bffff  daddiu      $t3, $t3, -0x1
    ctx->pc = 0x128a1cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
label_128a20:
    // 0x128a20: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x128a20u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_128a24:
    // 0x128a24: 0xfd8f0000  sd          $t7, 0x0($t4)
    ctx->pc = 0x128a24u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 15));
label_128a28:
    // 0x128a28: 0xfdae0000  sd          $t6, 0x0($t5)
    ctx->pc = 0x128a28u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 14));
label_128a2c:
    // 0x128a2c: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x128a2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_128a30:
    // 0x128a30: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
label_128a34:
    if (ctx->pc == 0x128A34u) {
        ctx->pc = 0x128A34u;
            // 0x128a34: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->pc = 0x128A38u;
        goto label_128a38;
    }
    ctx->pc = 0x128A30u;
    {
        const bool branch_taken_0x128a30 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x128A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A30u;
            // 0x128a34: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a30) {
            ctx->pc = 0x128A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128a18;
        }
    }
    ctx->pc = 0x128A38u;
label_128a38:
    // 0x128a38: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_128a3c:
    if (ctx->pc == 0x128A3Cu) {
        ctx->pc = 0x128A3Cu;
            // 0x128a3c: 0x2b3a823  subu        $s5, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->pc = 0x128A40u;
        goto label_128a40;
    }
    ctx->pc = 0x128A38u;
    {
        const bool branch_taken_0x128a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A38u;
            // 0x128a3c: 0x2b3a823  subu        $s5, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a38) {
            ctx->pc = 0x1289F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1289f0;
        }
    }
    ctx->pc = 0x128A40u;
label_128a40:
    // 0x128a40: 0x13583c  dsll32      $t3, $s3, 0
    ctx->pc = 0x128a40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) << (32 + 0));
label_128a44:
    // 0x128a44: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x128a44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
label_128a48:
    // 0x128a48: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x128a48u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_128a4c:
    // 0x128a4c: 0x818e0000  lb          $t6, 0x0($t4)
    ctx->pc = 0x128a4cu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_128a50:
    // 0x128a50: 0x656bffff  daddiu      $t3, $t3, -0x1
    ctx->pc = 0x128a50u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
label_128a54:
    // 0x128a54: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x128a54u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_128a58:
    // 0x128a58: 0xa18f0000  sb          $t7, 0x0($t4)
    ctx->pc = 0x128a58u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 15));
label_128a5c:
    // 0x128a5c: 0xa1ae0000  sb          $t6, 0x0($t5)
    ctx->pc = 0x128a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
label_128a60:
    // 0x128a60: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x128a60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_128a64:
    // 0x128a64: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
label_128a68:
    if (ctx->pc == 0x128A68u) {
        ctx->pc = 0x128A68u;
            // 0x128a68: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->pc = 0x128A6Cu;
        goto label_128a6c;
    }
    ctx->pc = 0x128A64u;
    {
        const bool branch_taken_0x128a64 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x128A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A64u;
            // 0x128a68: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a64) {
            ctx->pc = 0x128A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128a4c;
        }
    }
    ctx->pc = 0x128A6Cu;
label_128a6c:
    // 0x128a6c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_128a70:
    if (ctx->pc == 0x128A70u) {
        ctx->pc = 0x128A70u;
            // 0x128a70: 0x2b3a823  subu        $s5, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->pc = 0x128A74u;
        goto label_128a74;
    }
    ctx->pc = 0x128A6Cu;
    {
        const bool branch_taken_0x128a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A6Cu;
            // 0x128a70: 0x2b3a823  subu        $s5, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a6c) {
            ctx->pc = 0x1289F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1289f0;
        }
    }
    ctx->pc = 0x128A74u;
label_128a74:
    // 0x128a74: 0x0  nop
    ctx->pc = 0x128a74u;
    // NOP
label_128a78:
    // 0x128a78: 0x15e00041  bnez        $t7, . + 4 + (0x41 << 2)
label_128a7c:
    if (ctx->pc == 0x128A7Cu) {
        ctx->pc = 0x128A7Cu;
            // 0x128a7c: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x128A80u;
        goto label_128a80;
    }
    ctx->pc = 0x128A78u;
    {
        const bool branch_taken_0x128a78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A78u;
            // 0x128a7c: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a78) {
            ctx->pc = 0x128B80u;
            goto label_128b80;
        }
    }
    ctx->pc = 0x128A80u;
label_128a80:
    // 0x128a80: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x128a80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_128a84:
    // 0x128a84: 0x8fb20054  lw          $s2, 0x54($sp)
    ctx->pc = 0x128a84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_128a88:
    // 0x128a88: 0x1b37018  mult        $t6, $t5, $s3
    ctx->pc = 0x128a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_128a8c:
    // 0x128a8c: 0x2ce2821  addu        $a1, $s6, $t6
    ctx->pc = 0x128a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
label_128a90:
    // 0x128a90: 0x245782b  sltu        $t7, $s2, $a1
    ctx->pc = 0x128a90u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_128a94:
    // 0x128a94: 0x11e0fef2  beqz        $t7, . + 4 + (-0x10E << 2)
label_128a98:
    if (ctx->pc == 0x128A98u) {
        ctx->pc = 0x128A98u;
            // 0x128a98: 0x2bd40002  slti        $s4, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x128A9Cu;
        goto label_128a9c;
    }
    ctx->pc = 0x128A94u;
    {
        const bool branch_taken_0x128a94 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A94u;
            // 0x128a98: 0x2bd40002  slti        $s4, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a94) {
            ctx->pc = 0x128660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128660;
        }
    }
    ctx->pc = 0x128A9Cu;
label_128a9c:
    // 0x128a9c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x128a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_128aa0:
    // 0x128aa0: 0x13a8c2  srl         $s5, $s3, 3
    ctx->pc = 0x128aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
label_128aa4:
    // 0x128aa4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x128aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128aa8:
    // 0x128aa8: 0x2d0782b  sltu        $t7, $s6, $s0
    ctx->pc = 0x128aa8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_128aac:
    // 0x128aac: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
label_128ab0:
    if (ctx->pc == 0x128AB0u) {
        ctx->pc = 0x128AB0u;
            // 0x128ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128AB4u;
        goto label_128ab4;
    }
    ctx->pc = 0x128AACu;
    {
        const bool branch_taken_0x128aac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128AACu;
            // 0x128ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128aac) {
            ctx->pc = 0x128AC8u;
            goto label_128ac8;
        }
    }
    ctx->pc = 0x128AB4u;
label_128ab4:
    // 0x128ab4: 0x2138823  subu        $s1, $s0, $s3
    ctx->pc = 0x128ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_128ab8:
    // 0x128ab8: 0x2e0f809  jalr        $s7
label_128abc:
    if (ctx->pc == 0x128ABCu) {
        ctx->pc = 0x128ABCu;
            // 0x128abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128AC0u;
        goto label_128ac0;
    }
    ctx->pc = 0x128AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128AC0u);
        ctx->pc = 0x128ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128AB8u;
            // 0x128abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128AC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128AC0u; }
            if (ctx->pc != 0x128AC0u) { return; }
        }
        }
    }
    ctx->pc = 0x128AC0u;
label_128ac0:
    // 0x128ac0: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_128ac4:
    if (ctx->pc == 0x128AC4u) {
        ctx->pc = 0x128AC8u;
        goto label_128ac8;
    }
    ctx->pc = 0x128AC0u;
    {
        const bool branch_taken_0x128ac0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x128ac0) {
            ctx->pc = 0x128AE8u;
            goto label_128ae8;
        }
    }
    ctx->pc = 0x128AC8u;
label_128ac8:
    // 0x128ac8: 0x8fae0050  lw          $t6, 0x50($sp)
    ctx->pc = 0x128ac8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_128acc:
    // 0x128acc: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x128accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_128ad0:
    // 0x128ad0: 0x24e782b  sltu        $t7, $s2, $t6
    ctx->pc = 0x128ad0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_128ad4:
    // 0x128ad4: 0x55e0fff4  bnel        $t7, $zero, . + 4 + (-0xC << 2)
label_128ad8:
    if (ctx->pc == 0x128AD8u) {
        ctx->pc = 0x128AD8u;
            // 0x128ad8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128ADCu;
        goto label_128adc;
    }
    ctx->pc = 0x128AD4u;
    {
        const bool branch_taken_0x128ad4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x128ad4) {
            ctx->pc = 0x128AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128AD4u;
            // 0x128ad8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128aa8;
        }
    }
    ctx->pc = 0x128ADCu;
label_128adc:
    // 0x128adc: 0x1000fee1  b           . + 4 + (-0x11F << 2)
label_128ae0:
    if (ctx->pc == 0x128AE0u) {
        ctx->pc = 0x128AE0u;
            // 0x128ae0: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x128AE4u;
        goto label_128ae4;
    }
    ctx->pc = 0x128ADCu;
    {
        const bool branch_taken_0x128adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128ADCu;
            // 0x128ae0: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128adc) {
            ctx->pc = 0x128664u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128664;
        }
    }
    ctx->pc = 0x128AE4u;
label_128ae4:
    // 0x128ae4: 0x0  nop
    ctx->pc = 0x128ae4u;
    // NOP
label_128ae8:
    // 0x128ae8: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
label_128aec:
    if (ctx->pc == 0x128AECu) {
        ctx->pc = 0x128AF0u;
        goto label_128af0;
    }
    ctx->pc = 0x128AE8u;
    {
        const bool branch_taken_0x128ae8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x128ae8) {
            ctx->pc = 0x128B08u;
            goto label_128b08;
        }
    }
    ctx->pc = 0x128AF0u;
label_128af0:
    // 0x128af0: 0xde0e0000  ld          $t6, 0x0($s0)
    ctx->pc = 0x128af0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_128af4:
    // 0x128af4: 0xde2f0000  ld          $t7, 0x0($s1)
    ctx->pc = 0x128af4u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_128af8:
    // 0x128af8: 0xfe0f0000  sd          $t7, 0x0($s0)
    ctx->pc = 0x128af8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 15));
label_128afc:
    // 0x128afc: 0xfe2e0000  sd          $t6, 0x0($s1)
    ctx->pc = 0x128afcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 14));
label_128b00:
    // 0x128b00: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_128b04:
    if (ctx->pc == 0x128B04u) {
        ctx->pc = 0x128B04u;
            // 0x128b04: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128B08u;
        goto label_128b08;
    }
    ctx->pc = 0x128B00u;
    {
        const bool branch_taken_0x128b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B00u;
            // 0x128b04: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b00) {
            ctx->pc = 0x128AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128aa8;
        }
    }
    ctx->pc = 0x128B08u;
label_128b08:
    // 0x128b08: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_128b0c:
    if (ctx->pc == 0x128B0Cu) {
        ctx->pc = 0x128B0Cu;
            // 0x128b0c: 0x15603c  dsll32      $t4, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 21) << (32 + 0));
        ctx->pc = 0x128B10u;
        goto label_128b10;
    }
    ctx->pc = 0x128B08u;
    {
        const bool branch_taken_0x128b08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B08u;
            // 0x128b0c: 0x15603c  dsll32      $t4, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b08) {
            ctx->pc = 0x128B44u;
            goto label_128b44;
        }
    }
    ctx->pc = 0x128B10u;
label_128b10:
    // 0x128b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128b14:
    // 0x128b14: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x128b14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
label_128b18:
    // 0x128b18: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x128b18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_128b1c:
    // 0x128b1c: 0xdc8e0000  ld          $t6, 0x0($a0)
    ctx->pc = 0x128b1cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_128b20:
    // 0x128b20: 0x658cffff  daddiu      $t4, $t4, -0x1
    ctx->pc = 0x128b20u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4294967295);
label_128b24:
    // 0x128b24: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x128b24u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_128b28:
    // 0x128b28: 0xfc8f0000  sd          $t7, 0x0($a0)
    ctx->pc = 0x128b28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 15));
label_128b2c:
    // 0x128b2c: 0xfdae0000  sd          $t6, 0x0($t5)
    ctx->pc = 0x128b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 14));
label_128b30:
    // 0x128b30: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x128b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_128b34:
    // 0x128b34: 0x1d80fff9  bgtz        $t4, . + 4 + (-0x7 << 2)
label_128b38:
    if (ctx->pc == 0x128B38u) {
        ctx->pc = 0x128B38u;
            // 0x128b38: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->pc = 0x128B3Cu;
        goto label_128b3c;
    }
    ctx->pc = 0x128B34u;
    {
        const bool branch_taken_0x128b34 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x128B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B34u;
            // 0x128b38: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b34) {
            ctx->pc = 0x128B1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128b1c;
        }
    }
    ctx->pc = 0x128B3Cu;
label_128b3c:
    // 0x128b3c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_128b40:
    if (ctx->pc == 0x128B40u) {
        ctx->pc = 0x128B40u;
            // 0x128b40: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128B44u;
        goto label_128b44;
    }
    ctx->pc = 0x128B3Cu;
    {
        const bool branch_taken_0x128b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B3Cu;
            // 0x128b40: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b3c) {
            ctx->pc = 0x128AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128aa8;
        }
    }
    ctx->pc = 0x128B44u;
label_128b44:
    // 0x128b44: 0x13603c  dsll32      $t4, $s3, 0
    ctx->pc = 0x128b44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 0));
label_128b48:
    // 0x128b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128b4c:
    // 0x128b4c: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x128b4cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
label_128b50:
    // 0x128b50: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x128b50u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_128b54:
    // 0x128b54: 0x808e0000  lb          $t6, 0x0($a0)
    ctx->pc = 0x128b54u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_128b58:
    // 0x128b58: 0x658cffff  daddiu      $t4, $t4, -0x1
    ctx->pc = 0x128b58u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4294967295);
label_128b5c:
    // 0x128b5c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x128b5cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_128b60:
    // 0x128b60: 0xa08f0000  sb          $t7, 0x0($a0)
    ctx->pc = 0x128b60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 15));
label_128b64:
    // 0x128b64: 0xa1ae0000  sb          $t6, 0x0($t5)
    ctx->pc = 0x128b64u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
label_128b68:
    // 0x128b68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x128b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_128b6c:
    // 0x128b6c: 0x1d80fff9  bgtz        $t4, . + 4 + (-0x7 << 2)
label_128b70:
    if (ctx->pc == 0x128B70u) {
        ctx->pc = 0x128B70u;
            // 0x128b70: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->pc = 0x128B74u;
        goto label_128b74;
    }
    ctx->pc = 0x128B6Cu;
    {
        const bool branch_taken_0x128b6c = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x128B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B6Cu;
            // 0x128b70: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b6c) {
            ctx->pc = 0x128B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128b54;
        }
    }
    ctx->pc = 0x128B74u;
label_128b74:
    // 0x128b74: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_128b78:
    if (ctx->pc == 0x128B78u) {
        ctx->pc = 0x128B78u;
            // 0x128b78: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128B7Cu;
        goto label_128b7c;
    }
    ctx->pc = 0x128B74u;
    {
        const bool branch_taken_0x128b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B74u;
            // 0x128b78: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b74) {
            ctx->pc = 0x128AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128aa8;
        }
    }
    ctx->pc = 0x128B7Cu;
label_128b7c:
    // 0x128b7c: 0x0  nop
    ctx->pc = 0x128b7cu;
    // NOP
label_128b80:
    // 0x128b80: 0x2541023  subu        $v0, $s2, $s4
    ctx->pc = 0x128b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_128b84:
    // 0x128b84: 0x2967023  subu        $t6, $s4, $s6
    ctx->pc = 0x128b84u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_128b88:
    // 0x128b88: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x128b88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128b8c:
    // 0x128b8c: 0x1f36818  mult        $t5, $t7, $s3
    ctx->pc = 0x128b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_128b90:
    // 0x128b90: 0x1c2782a  slt         $t7, $t6, $v0
    ctx->pc = 0x128b90u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_128b94:
    // 0x128b94: 0x1cf100b  movn        $v0, $t6, $t7
    ctx->pc = 0x128b94u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
label_128b98:
    // 0x128b98: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_128b9c:
    if (ctx->pc == 0x128B9Cu) {
        ctx->pc = 0x128B9Cu;
            // 0x128b9c: 0x2cda021  addu        $s4, $s6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
        ctx->pc = 0x128BA0u;
        goto label_128ba0;
    }
    ctx->pc = 0x128B98u;
    {
        const bool branch_taken_0x128b98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x128B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B98u;
            // 0x128b9c: 0x2cda021  addu        $s4, $s6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b98) {
            ctx->pc = 0x128BE0u;
            goto label_128be0;
        }
    }
    ctx->pc = 0x128BA0u;
label_128ba0:
    // 0x128ba0: 0x2bcf0002  slti        $t7, $fp, 0x2
    ctx->pc = 0x128ba0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_128ba4:
    // 0x128ba4: 0x11e00044  beqz        $t7, . + 4 + (0x44 << 2)
label_128ba8:
    if (ctx->pc == 0x128BA8u) {
        ctx->pc = 0x128BA8u;
            // 0x128ba8: 0x2426823  subu        $t5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x128BACu;
        goto label_128bac;
    }
    ctx->pc = 0x128BA4u;
    {
        const bool branch_taken_0x128ba4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BA4u;
            // 0x128ba8: 0x2426823  subu        $t5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ba4) {
            ctx->pc = 0x128CB8u;
            goto label_128cb8;
        }
    }
    ctx->pc = 0x128BACu;
label_128bac:
    // 0x128bac: 0x278c2  srl         $t7, $v0, 3
    ctx->pc = 0x128bacu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_128bb0:
    // 0x128bb0: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x128bb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_128bb4:
    // 0x128bb4: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x128bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
label_128bb8:
    // 0x128bb8: 0x2c0682d  daddu       $t5, $s6, $zero
    ctx->pc = 0x128bb8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128bbc:
    // 0x128bbc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x128bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_128bc0:
    // 0x128bc0: 0xddae0000  ld          $t6, 0x0($t5)
    ctx->pc = 0x128bc0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_128bc4:
    // 0x128bc4: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x128bc4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_128bc8:
    // 0x128bc8: 0xdd8f0000  ld          $t7, 0x0($t4)
    ctx->pc = 0x128bc8u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 12), 0)));
label_128bcc:
    // 0x128bcc: 0xfdaf0000  sd          $t7, 0x0($t5)
    ctx->pc = 0x128bccu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 15));
label_128bd0:
    // 0x128bd0: 0xfd8e0000  sd          $t6, 0x0($t4)
    ctx->pc = 0x128bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 14));
label_128bd4:
    // 0x128bd4: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x128bd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_128bd8:
    // 0x128bd8: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
label_128bdc:
    if (ctx->pc == 0x128BDCu) {
        ctx->pc = 0x128BDCu;
            // 0x128bdc: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->pc = 0x128BE0u;
        goto label_128be0;
    }
    ctx->pc = 0x128BD8u;
    {
        const bool branch_taken_0x128bd8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x128BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BD8u;
            // 0x128bdc: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bd8) {
            ctx->pc = 0x128BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128bc0;
        }
    }
    ctx->pc = 0x128BE0u;
label_128be0:
    // 0x128be0: 0x2957023  subu        $t6, $s4, $s5
    ctx->pc = 0x128be0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_128be4:
    // 0x128be4: 0x2b18023  subu        $s0, $s5, $s1
    ctx->pc = 0x128be4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_128be8:
    // 0x128be8: 0x1d31023  subu        $v0, $t6, $s3
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
label_128bec:
    // 0x128bec: 0x202782b  sltu        $t7, $s0, $v0
    ctx->pc = 0x128becu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_128bf0:
    // 0x128bf0: 0x20f100b  movn        $v0, $s0, $t7
    ctx->pc = 0x128bf0u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_128bf4:
    // 0x128bf4: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_128bf8:
    if (ctx->pc == 0x128BF8u) {
        ctx->pc = 0x128BF8u;
            // 0x128bf8: 0x2bcf0002  slti        $t7, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x128BFCu;
        goto label_128bfc;
    }
    ctx->pc = 0x128BF4u;
    {
        const bool branch_taken_0x128bf4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x128BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BF4u;
            // 0x128bf8: 0x2bcf0002  slti        $t7, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bf4) {
            ctx->pc = 0x128C34u;
            goto label_128c34;
        }
    }
    ctx->pc = 0x128BFCu;
label_128bfc:
    // 0x128bfc: 0x11e00020  beqz        $t7, . + 4 + (0x20 << 2)
label_128c00:
    if (ctx->pc == 0x128C00u) {
        ctx->pc = 0x128C00u;
            // 0x128c00: 0x2826823  subu        $t5, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x128C04u;
        goto label_128c04;
    }
    ctx->pc = 0x128BFCu;
    {
        const bool branch_taken_0x128bfc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BFCu;
            // 0x128c00: 0x2826823  subu        $t5, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bfc) {
            ctx->pc = 0x128C80u;
            goto label_128c80;
        }
    }
    ctx->pc = 0x128C04u;
label_128c04:
    // 0x128c04: 0x278c2  srl         $t7, $v0, 3
    ctx->pc = 0x128c04u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_128c08:
    // 0x128c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128c0c:
    // 0x128c0c: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x128c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
label_128c10:
    // 0x128c10: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x128c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_128c14:
    // 0x128c14: 0xdc8e0000  ld          $t6, 0x0($a0)
    ctx->pc = 0x128c14u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_128c18:
    // 0x128c18: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x128c18u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_128c1c:
    // 0x128c1c: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x128c1cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_128c20:
    // 0x128c20: 0xfc8f0000  sd          $t7, 0x0($a0)
    ctx->pc = 0x128c20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 15));
label_128c24:
    // 0x128c24: 0xfdae0000  sd          $t6, 0x0($t5)
    ctx->pc = 0x128c24u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 14));
label_128c28:
    // 0x128c28: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x128c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_128c2c:
    // 0x128c2c: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
label_128c30:
    if (ctx->pc == 0x128C30u) {
        ctx->pc = 0x128C30u;
            // 0x128c30: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->pc = 0x128C34u;
        goto label_128c34;
    }
    ctx->pc = 0x128C2Cu;
    {
        const bool branch_taken_0x128c2c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x128C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C2Cu;
            // 0x128c30: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c2c) {
            ctx->pc = 0x128C14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128c14;
        }
    }
    ctx->pc = 0x128C34u;
label_128c34:
    // 0x128c34: 0x26b782b  sltu        $t7, $s3, $t3
    ctx->pc = 0x128c34u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_128c38:
    // 0x128c38: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
label_128c3c:
    if (ctx->pc == 0x128C3Cu) {
        ctx->pc = 0x128C3Cu;
            // 0x128c3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128C40u;
        goto label_128c40;
    }
    ctx->pc = 0x128C38u;
    {
        const bool branch_taken_0x128c38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C38u;
            // 0x128c3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c38) {
            ctx->pc = 0x128C5Cu;
            goto label_128c5c;
        }
    }
    ctx->pc = 0x128C40u;
label_128c40:
    // 0x128c40: 0x173001b  divu        $zero, $t3, $s3
    ctx->pc = 0x128c40u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
label_128c44:
    // 0x128c44: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_128c48:
    if (ctx->pc == 0x128C48u) {
        ctx->pc = 0x128C48u;
            // 0x128c48: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x128C4Cu;
        goto label_128c4c;
    }
    ctx->pc = 0x128C44u;
    {
        const bool branch_taken_0x128c44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c44) {
            ctx->pc = 0x128C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128C44u;
            // 0x128c48: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x128C4Cu;
            goto label_128c4c;
        }
    }
    ctx->pc = 0x128C4Cu;
label_128c4c:
    // 0x128c4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x128c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_128c50:
    // 0x128c50: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x128c50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_128c54:
    // 0x128c54: 0xc04a168  jal         func_1285A0
label_128c58:
    if (ctx->pc == 0x128C58u) {
        ctx->pc = 0x128C58u;
            // 0x128c58: 0x2812  mflo        $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->lo);
        ctx->pc = 0x128C5Cu;
        goto label_128c5c;
    }
    ctx->pc = 0x128C54u;
    SET_GPR_U32(ctx, 31, 0x128C5Cu);
    ctx->pc = 0x128C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128C54u;
            // 0x128c58: 0x2812  mflo        $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->lo);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1285A0u;
    goto label_1285a0;
    ctx->pc = 0x128C5Cu;
label_128c5c:
    // 0x128c5c: 0x270782b  sltu        $t7, $s3, $s0
    ctx->pc = 0x128c5cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_128c60:
    // 0x128c60: 0x11e0fe7f  beqz        $t7, . + 4 + (-0x181 << 2)
label_128c64:
    if (ctx->pc == 0x128C64u) {
        ctx->pc = 0x128C64u;
            // 0x128c64: 0x290b023  subu        $s6, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->pc = 0x128C68u;
        goto label_128c68;
    }
    ctx->pc = 0x128C60u;
    {
        const bool branch_taken_0x128c60 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C60u;
            // 0x128c64: 0x290b023  subu        $s6, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c60) {
            ctx->pc = 0x128660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128660;
        }
    }
    ctx->pc = 0x128C68u;
label_128c68:
    // 0x128c68: 0x213001b  divu        $zero, $s0, $s3
    ctx->pc = 0x128c68u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_128c6c:
    // 0x128c6c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_128c70:
    if (ctx->pc == 0x128C70u) {
        ctx->pc = 0x128C70u;
            // 0x128c70: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x128C74u;
        goto label_128c74;
    }
    ctx->pc = 0x128C6Cu;
    {
        const bool branch_taken_0x128c6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c6c) {
            ctx->pc = 0x128C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128C6Cu;
            // 0x128c70: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x128C74u;
            goto label_128c74;
        }
    }
    ctx->pc = 0x128C74u;
label_128c74:
    // 0x128c74: 0x7812  mflo        $t7
    ctx->pc = 0x128c74u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_128c78:
    // 0x128c78: 0x1000fe58  b           . + 4 + (-0x1A8 << 2)
label_128c7c:
    if (ctx->pc == 0x128C7Cu) {
        ctx->pc = 0x128C7Cu;
            // 0x128c7c: 0xafaf0000  sw          $t7, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
        ctx->pc = 0x128C80u;
        goto label_128c80;
    }
    ctx->pc = 0x128C78u;
    {
        const bool branch_taken_0x128c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C78u;
            // 0x128c7c: 0xafaf0000  sw          $t7, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c78) {
            ctx->pc = 0x1285DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1285dc;
        }
    }
    ctx->pc = 0x128C80u;
label_128c80:
    // 0x128c80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x128c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_128c84:
    // 0x128c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128c88:
    // 0x128c88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x128c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_128c8c:
    // 0x128c8c: 0x808e0000  lb          $t6, 0x0($a0)
    ctx->pc = 0x128c8cu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_128c90:
    // 0x128c90: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x128c90u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_128c94:
    // 0x128c94: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x128c94u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_128c98:
    // 0x128c98: 0xa08f0000  sb          $t7, 0x0($a0)
    ctx->pc = 0x128c98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 15));
label_128c9c:
    // 0x128c9c: 0xa1ae0000  sb          $t6, 0x0($t5)
    ctx->pc = 0x128c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
label_128ca0:
    // 0x128ca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x128ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_128ca4:
    // 0x128ca4: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
label_128ca8:
    if (ctx->pc == 0x128CA8u) {
        ctx->pc = 0x128CA8u;
            // 0x128ca8: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->pc = 0x128CACu;
        goto label_128cac;
    }
    ctx->pc = 0x128CA4u;
    {
        const bool branch_taken_0x128ca4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x128CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128CA4u;
            // 0x128ca8: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ca4) {
            ctx->pc = 0x128C8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128c8c;
        }
    }
    ctx->pc = 0x128CACu;
label_128cac:
    // 0x128cac: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_128cb0:
    if (ctx->pc == 0x128CB0u) {
        ctx->pc = 0x128CB0u;
            // 0x128cb0: 0x26b782b  sltu        $t7, $s3, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->pc = 0x128CB4u;
        goto label_128cb4;
    }
    ctx->pc = 0x128CACu;
    {
        const bool branch_taken_0x128cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128CACu;
            // 0x128cb0: 0x26b782b  sltu        $t7, $s3, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cac) {
            ctx->pc = 0x128C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128c38;
        }
    }
    ctx->pc = 0x128CB4u;
label_128cb4:
    // 0x128cb4: 0x0  nop
    ctx->pc = 0x128cb4u;
    // NOP
label_128cb8:
    // 0x128cb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x128cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_128cbc:
    // 0x128cbc: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x128cbcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_128cc0:
    // 0x128cc0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x128cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_128cc4:
    // 0x128cc4: 0x2c0682d  daddu       $t5, $s6, $zero
    ctx->pc = 0x128cc4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128cc8:
    // 0x128cc8: 0x81ae0000  lb          $t6, 0x0($t5)
    ctx->pc = 0x128cc8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_128ccc:
    // 0x128ccc: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x128cccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_128cd0:
    // 0x128cd0: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x128cd0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_128cd4:
    // 0x128cd4: 0xa1af0000  sb          $t7, 0x0($t5)
    ctx->pc = 0x128cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 15));
label_128cd8:
    // 0x128cd8: 0xa18e0000  sb          $t6, 0x0($t4)
    ctx->pc = 0x128cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 14));
label_128cdc:
    // 0x128cdc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x128cdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_128ce0:
    // 0x128ce0: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
label_128ce4:
    if (ctx->pc == 0x128CE4u) {
        ctx->pc = 0x128CE4u;
            // 0x128ce4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->pc = 0x128CE8u;
        goto label_128ce8;
    }
    ctx->pc = 0x128CE0u;
    {
        const bool branch_taken_0x128ce0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x128CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128CE0u;
            // 0x128ce4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ce0) {
            ctx->pc = 0x128CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128cc8;
        }
    }
    ctx->pc = 0x128CE8u;
label_128ce8:
    // 0x128ce8: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
label_128cec:
    if (ctx->pc == 0x128CECu) {
        ctx->pc = 0x128CECu;
            // 0x128cec: 0x2957023  subu        $t6, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->pc = 0x128CF0u;
        goto label_128cf0;
    }
    ctx->pc = 0x128CE8u;
    {
        const bool branch_taken_0x128ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128CE8u;
            // 0x128cec: 0x2957023  subu        $t6, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ce8) {
            ctx->pc = 0x128BE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128be4;
        }
    }
    ctx->pc = 0x128CF0u;
label_128cf0:
    // 0x128cf0: 0x5440fefa  bnel        $v0, $zero, . + 4 + (-0x106 << 2)
label_128cf4:
    if (ctx->pc == 0x128CF4u) {
        ctx->pc = 0x128CF4u;
            // 0x128cf4: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->pc = 0x128CF8u;
        goto label_128cf8;
    }
    ctx->pc = 0x128CF0u;
    {
        const bool branch_taken_0x128cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128cf0) {
            ctx->pc = 0x128CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128CF0u;
            // 0x128cf4: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1288DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1288dc;
        }
    }
    ctx->pc = 0x128CF8u;
label_128cf8:
    // 0x128cf8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x128cf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128cfc:
    // 0x128cfc: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
label_128d00:
    if (ctx->pc == 0x128D00u) {
        ctx->pc = 0x128D00u;
            // 0x128d00: 0xafaf0008  sw          $t7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
        ctx->pc = 0x128D04u;
        goto label_128d04;
    }
    ctx->pc = 0x128CFCu;
    {
        const bool branch_taken_0x128cfc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128CFCu;
            // 0x128d00: 0xafaf0008  sw          $t7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cfc) {
            ctx->pc = 0x128D20u;
            goto label_128d20;
        }
    }
    ctx->pc = 0x128D04u;
label_128d04:
    // 0x128d04: 0xde8e0000  ld          $t6, 0x0($s4)
    ctx->pc = 0x128d04u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_128d08:
    // 0x128d08: 0xde4f0000  ld          $t7, 0x0($s2)
    ctx->pc = 0x128d08u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_128d0c:
    // 0x128d0c: 0xfe8f0000  sd          $t7, 0x0($s4)
    ctx->pc = 0x128d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 15));
label_128d10:
    // 0x128d10: 0xfe4e0000  sd          $t6, 0x0($s2)
    ctx->pc = 0x128d10u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 14));
label_128d14:
    // 0x128d14: 0x293a021  addu        $s4, $s4, $s3
    ctx->pc = 0x128d14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_128d18:
    // 0x128d18: 0x1000fef0  b           . + 4 + (-0x110 << 2)
label_128d1c:
    if (ctx->pc == 0x128D1Cu) {
        ctx->pc = 0x128D1Cu;
            // 0x128d1c: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->pc = 0x128D20u;
        goto label_128d20;
    }
    ctx->pc = 0x128D18u;
    {
        const bool branch_taken_0x128d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D18u;
            // 0x128d1c: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d18) {
            ctx->pc = 0x1288DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1288dc;
        }
    }
    ctx->pc = 0x128D20u;
label_128d20:
    // 0x128d20: 0x8fad001c  lw          $t5, 0x1C($sp)
    ctx->pc = 0x128d20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_128d24:
    // 0x128d24: 0x11a0000f  beqz        $t5, . + 4 + (0xF << 2)
label_128d28:
    if (ctx->pc == 0x128D28u) {
        ctx->pc = 0x128D28u;
            // 0x128d28: 0x8fae0020  lw          $t6, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x128D2Cu;
        goto label_128d2c;
    }
    ctx->pc = 0x128D24u;
    {
        const bool branch_taken_0x128d24 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D24u;
            // 0x128d28: 0x8fae0020  lw          $t6, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d24) {
            ctx->pc = 0x128D64u;
            goto label_128d64;
        }
    }
    ctx->pc = 0x128D2Cu;
label_128d2c:
    // 0x128d2c: 0x280602d  daddu       $t4, $s4, $zero
    ctx->pc = 0x128d2cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_128d30:
    // 0x128d30: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x128d30u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128d34:
    // 0x128d34: 0xe583c  dsll32      $t3, $t6, 0
    ctx->pc = 0x128d34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) << (32 + 0));
label_128d38:
    // 0x128d38: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x128d38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
label_128d3c:
    // 0x128d3c: 0xdd8e0000  ld          $t6, 0x0($t4)
    ctx->pc = 0x128d3cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 12), 0)));
label_128d40:
    // 0x128d40: 0x656bffff  daddiu      $t3, $t3, -0x1
    ctx->pc = 0x128d40u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
label_128d44:
    // 0x128d44: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x128d44u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_128d48:
    // 0x128d48: 0xfd8f0000  sd          $t7, 0x0($t4)
    ctx->pc = 0x128d48u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 15));
label_128d4c:
    // 0x128d4c: 0xfdae0000  sd          $t6, 0x0($t5)
    ctx->pc = 0x128d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 14));
label_128d50:
    // 0x128d50: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x128d50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_128d54:
    // 0x128d54: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
label_128d58:
    if (ctx->pc == 0x128D58u) {
        ctx->pc = 0x128D58u;
            // 0x128d58: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->pc = 0x128D5Cu;
        goto label_128d5c;
    }
    ctx->pc = 0x128D54u;
    {
        const bool branch_taken_0x128d54 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x128D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D54u;
            // 0x128d58: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d54) {
            ctx->pc = 0x128D3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128d3c;
        }
    }
    ctx->pc = 0x128D5Cu;
label_128d5c:
    // 0x128d5c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_128d60:
    if (ctx->pc == 0x128D60u) {
        ctx->pc = 0x128D60u;
            // 0x128d60: 0x293a021  addu        $s4, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->pc = 0x128D64u;
        goto label_128d64;
    }
    ctx->pc = 0x128D5Cu;
    {
        const bool branch_taken_0x128d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D5Cu;
            // 0x128d60: 0x293a021  addu        $s4, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d5c) {
            ctx->pc = 0x128D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128d18;
        }
    }
    ctx->pc = 0x128D64u;
label_128d64:
    // 0x128d64: 0x13583c  dsll32      $t3, $s3, 0
    ctx->pc = 0x128d64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) << (32 + 0));
label_128d68:
    // 0x128d68: 0x280602d  daddu       $t4, $s4, $zero
    ctx->pc = 0x128d68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_128d6c:
    // 0x128d6c: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x128d6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
label_128d70:
    // 0x128d70: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x128d70u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128d74:
    // 0x128d74: 0x818e0000  lb          $t6, 0x0($t4)
    ctx->pc = 0x128d74u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_128d78:
    // 0x128d78: 0x656bffff  daddiu      $t3, $t3, -0x1
    ctx->pc = 0x128d78u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
label_128d7c:
    // 0x128d7c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x128d7cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_128d80:
    // 0x128d80: 0xa18f0000  sb          $t7, 0x0($t4)
    ctx->pc = 0x128d80u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 15));
label_128d84:
    // 0x128d84: 0xa1ae0000  sb          $t6, 0x0($t5)
    ctx->pc = 0x128d84u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
label_128d88:
    // 0x128d88: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x128d88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_128d8c:
    // 0x128d8c: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
label_128d90:
    if (ctx->pc == 0x128D90u) {
        ctx->pc = 0x128D90u;
            // 0x128d90: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->pc = 0x128D94u;
        goto label_128d94;
    }
    ctx->pc = 0x128D8Cu;
    {
        const bool branch_taken_0x128d8c = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x128D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D8Cu;
            // 0x128d90: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d8c) {
            ctx->pc = 0x128D74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128d74;
        }
    }
    ctx->pc = 0x128D94u;
label_128d94:
    // 0x128d94: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_128d98:
    if (ctx->pc == 0x128D98u) {
        ctx->pc = 0x128D98u;
            // 0x128d98: 0x293a021  addu        $s4, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->pc = 0x128D9Cu;
        goto label_128d9c;
    }
    ctx->pc = 0x128D94u;
    {
        const bool branch_taken_0x128d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D94u;
            // 0x128d98: 0x293a021  addu        $s4, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d94) {
            ctx->pc = 0x128D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128d18;
        }
    }
    ctx->pc = 0x128D9Cu;
label_128d9c:
    // 0x128d9c: 0x0  nop
    ctx->pc = 0x128d9cu;
    // NOP
label_128da0:
    // 0x128da0: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
label_128da4:
    if (ctx->pc == 0x128DA4u) {
        ctx->pc = 0x128DA4u;
            // 0x128da4: 0x1378c2  srl         $t7, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->pc = 0x128DA8u;
        goto label_128da8;
    }
    ctx->pc = 0x128DA0u;
    {
        const bool branch_taken_0x128da0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DA0u;
            // 0x128da4: 0x1378c2  srl         $t7, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128da0) {
            ctx->pc = 0x128DE0u;
            goto label_128de0;
        }
    }
    ctx->pc = 0x128DA8u;
label_128da8:
    // 0x128da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128dac:
    // 0x128dac: 0xf603c  dsll32      $t4, $t7, 0
    ctx->pc = 0x128dacu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) << (32 + 0));
label_128db0:
    // 0x128db0: 0x2c0682d  daddu       $t5, $s6, $zero
    ctx->pc = 0x128db0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128db4:
    // 0x128db4: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x128db4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
label_128db8:
    // 0x128db8: 0xddae0000  ld          $t6, 0x0($t5)
    ctx->pc = 0x128db8u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_128dbc:
    // 0x128dbc: 0x658cffff  daddiu      $t4, $t4, -0x1
    ctx->pc = 0x128dbcu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4294967295);
label_128dc0:
    // 0x128dc0: 0xdc8f0000  ld          $t7, 0x0($a0)
    ctx->pc = 0x128dc0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_128dc4:
    // 0x128dc4: 0xfdaf0000  sd          $t7, 0x0($t5)
    ctx->pc = 0x128dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 15));
label_128dc8:
    // 0x128dc8: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x128dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
label_128dcc:
    // 0x128dcc: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x128dccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_128dd0:
    // 0x128dd0: 0x1d80fff9  bgtz        $t4, . + 4 + (-0x7 << 2)
label_128dd4:
    if (ctx->pc == 0x128DD4u) {
        ctx->pc = 0x128DD4u;
            // 0x128dd4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x128DD8u;
        goto label_128dd8;
    }
    ctx->pc = 0x128DD0u;
    {
        const bool branch_taken_0x128dd0 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x128DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DD0u;
            // 0x128dd4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dd0) {
            ctx->pc = 0x128DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128db8;
        }
    }
    ctx->pc = 0x128DD8u;
label_128dd8:
    // 0x128dd8: 0x1000feb7  b           . + 4 + (-0x149 << 2)
label_128ddc:
    if (ctx->pc == 0x128DDCu) {
        ctx->pc = 0x128DDCu;
            // 0x128ddc: 0x2b37818  mult        $t7, $s5, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->pc = 0x128DE0u;
        goto label_128de0;
    }
    ctx->pc = 0x128DD8u;
    {
        const bool branch_taken_0x128dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DD8u;
            // 0x128ddc: 0x2b37818  mult        $t7, $s5, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dd8) {
            ctx->pc = 0x1288B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1288b8;
        }
    }
    ctx->pc = 0x128DE0u;
label_128de0:
    // 0x128de0: 0x13603c  dsll32      $t4, $s3, 0
    ctx->pc = 0x128de0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 0));
label_128de4:
    // 0x128de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128de8:
    // 0x128de8: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x128de8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
label_128dec:
    // 0x128dec: 0x2c0682d  daddu       $t5, $s6, $zero
    ctx->pc = 0x128decu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128df0:
    // 0x128df0: 0x81ae0000  lb          $t6, 0x0($t5)
    ctx->pc = 0x128df0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_128df4:
    // 0x128df4: 0x658cffff  daddiu      $t4, $t4, -0x1
    ctx->pc = 0x128df4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4294967295);
label_128df8:
    // 0x128df8: 0x908f0000  lbu         $t7, 0x0($a0)
    ctx->pc = 0x128df8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_128dfc:
    // 0x128dfc: 0xa1af0000  sb          $t7, 0x0($t5)
    ctx->pc = 0x128dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 15));
label_128e00:
    // 0x128e00: 0xa08e0000  sb          $t6, 0x0($a0)
    ctx->pc = 0x128e00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 14));
label_128e04:
    // 0x128e04: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x128e04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_128e08:
    // 0x128e08: 0x1d80fff9  bgtz        $t4, . + 4 + (-0x7 << 2)
label_128e0c:
    if (ctx->pc == 0x128E0Cu) {
        ctx->pc = 0x128E0Cu;
            // 0x128e0c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x128E10u;
        goto label_128e10;
    }
    ctx->pc = 0x128E08u;
    {
        const bool branch_taken_0x128e08 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x128E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E08u;
            // 0x128e0c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e08) {
            ctx->pc = 0x128DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128df0;
        }
    }
    ctx->pc = 0x128E10u;
label_128e10:
    // 0x128e10: 0x1000fea9  b           . + 4 + (-0x157 << 2)
label_128e14:
    if (ctx->pc == 0x128E14u) {
        ctx->pc = 0x128E14u;
            // 0x128e14: 0x2b37818  mult        $t7, $s5, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->pc = 0x128E18u;
        goto label_128e18;
    }
    ctx->pc = 0x128E10u;
    {
        const bool branch_taken_0x128e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E10u;
            // 0x128e14: 0x2b37818  mult        $t7, $s5, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e10) {
            ctx->pc = 0x1288B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1288b8;
        }
    }
    ctx->pc = 0x128E18u;
label_128e18:
    // 0x128e18: 0x2e0f809  jalr        $s7
label_128e1c:
    if (ctx->pc == 0x128E1Cu) {
        ctx->pc = 0x128E1Cu;
            // 0x128e1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128E20u;
        goto label_128e20;
    }
    ctx->pc = 0x128E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128E20u);
        ctx->pc = 0x128E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E18u;
            // 0x128e1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128E20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128E20u; }
            if (ctx->pc != 0x128E20u) { return; }
        }
        }
    }
    ctx->pc = 0x128E20u;
label_128e20:
    // 0x128e20: 0x5c40fe9d  bgtzl       $v0, . + 4 + (-0x163 << 2)
label_128e24:
    if (ctx->pc == 0x128E24u) {
        ctx->pc = 0x128E24u;
            // 0x128e24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128E28u;
        goto label_128e28;
    }
    ctx->pc = 0x128E20u;
    {
        const bool branch_taken_0x128e20 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x128e20) {
            ctx->pc = 0x128E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128E20u;
            // 0x128e24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128898;
        }
    }
    ctx->pc = 0x128E28u;
label_128e28:
    // 0x128e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128e2c:
    // 0x128e2c: 0x2e0f809  jalr        $s7
label_128e30:
    if (ctx->pc == 0x128E30u) {
        ctx->pc = 0x128E30u;
            // 0x128e30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128E34u;
        goto label_128e34;
    }
    ctx->pc = 0x128E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128E34u);
        ctx->pc = 0x128E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E2Cu;
            // 0x128e30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128E34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128E34u; }
            if (ctx->pc != 0x128E34u) { return; }
        }
        }
    }
    ctx->pc = 0x128E34u;
label_128e34:
    // 0x128e34: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x128e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_128e38:
    // 0x128e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128e3c:
    // 0x128e3c: 0x1000fe96  b           . + 4 + (-0x16A << 2)
label_128e40:
    if (ctx->pc == 0x128E40u) {
        ctx->pc = 0x128E40u;
            // 0x128e40: 0x282200a  movz        $a0, $s4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->pc = 0x128E44u;
        goto label_128e44;
    }
    ctx->pc = 0x128E3Cu;
    {
        const bool branch_taken_0x128e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E3Cu;
            // 0x128e40: 0x282200a  movz        $a0, $s4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e3c) {
            ctx->pc = 0x128898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128898;
        }
    }
    ctx->pc = 0x128E44u;
label_128e44:
    // 0x128e44: 0x2e0f809  jalr        $s7
label_128e48:
    if (ctx->pc == 0x128E48u) {
        ctx->pc = 0x128E48u;
            // 0x128e48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128E4Cu;
        goto label_128e4c;
    }
    ctx->pc = 0x128E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128E4Cu);
        ctx->pc = 0x128E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E44u;
            // 0x128e48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128E4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128E4Cu; }
            if (ctx->pc != 0x128E4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x128E4Cu;
label_128e4c:
    // 0x128e4c: 0x5c40fe82  bgtzl       $v0, . + 4 + (-0x17E << 2)
label_128e50:
    if (ctx->pc == 0x128E50u) {
        ctx->pc = 0x128E50u;
            // 0x128e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128E54u;
        goto label_128e54;
    }
    ctx->pc = 0x128E4Cu;
    {
        const bool branch_taken_0x128e4c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x128e4c) {
            ctx->pc = 0x128E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128E4Cu;
            // 0x128e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128858;
        }
    }
    ctx->pc = 0x128E54u;
label_128e54:
    // 0x128e54: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x128e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_128e58:
    // 0x128e58: 0x2e0f809  jalr        $s7
label_128e5c:
    if (ctx->pc == 0x128E5Cu) {
        ctx->pc = 0x128E5Cu;
            // 0x128e5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128E60u;
        goto label_128e60;
    }
    ctx->pc = 0x128E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128E60u);
        ctx->pc = 0x128E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E58u;
            // 0x128e5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128E60u; }
            if (ctx->pc != 0x128E60u) { return; }
        }
        }
    }
    ctx->pc = 0x128E60u;
label_128e60:
    // 0x128e60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x128e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_128e64:
    // 0x128e64: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x128e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_128e68:
    // 0x128e68: 0x1000fe7b  b           . + 4 + (-0x185 << 2)
label_128e6c:
    if (ctx->pc == 0x128E6Cu) {
        ctx->pc = 0x128E6Cu;
            // 0x128e6c: 0x282200a  movz        $a0, $s4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->pc = 0x128E70u;
        goto label_128e70;
    }
    ctx->pc = 0x128E68u;
    {
        const bool branch_taken_0x128e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E68u;
            // 0x128e6c: 0x282200a  movz        $a0, $s4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e68) {
            ctx->pc = 0x128858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128858;
        }
    }
    ctx->pc = 0x128E70u;
label_128e70:
    // 0x128e70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128e74:
    // 0x128e74: 0x2e0f809  jalr        $s7
label_128e78:
    if (ctx->pc == 0x128E78u) {
        ctx->pc = 0x128E78u;
            // 0x128e78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128E7Cu;
        goto label_128e7c;
    }
    ctx->pc = 0x128E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128E7Cu);
        ctx->pc = 0x128E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E74u;
            // 0x128e78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128E7Cu; }
            if (ctx->pc != 0x128E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x128E7Cu;
label_128e7c:
    // 0x128e7c: 0x5c40fe61  bgtzl       $v0, . + 4 + (-0x19F << 2)
label_128e80:
    if (ctx->pc == 0x128E80u) {
        ctx->pc = 0x128E80u;
            // 0x128e80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128E84u;
        goto label_128e84;
    }
    ctx->pc = 0x128E7Cu;
    {
        const bool branch_taken_0x128e7c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x128e7c) {
            ctx->pc = 0x128E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128E7Cu;
            // 0x128e80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128804;
        }
    }
    ctx->pc = 0x128E84u;
label_128e84:
    // 0x128e84: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x128e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_128e88:
    // 0x128e88: 0x2e0f809  jalr        $s7
label_128e8c:
    if (ctx->pc == 0x128E8Cu) {
        ctx->pc = 0x128E8Cu;
            // 0x128e8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128E90u;
        goto label_128e90;
    }
    ctx->pc = 0x128E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128E90u);
        ctx->pc = 0x128E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E88u;
            // 0x128e8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128E90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128E90u; }
            if (ctx->pc != 0x128E90u) { return; }
        }
        }
    }
    ctx->pc = 0x128E90u;
label_128e90:
    // 0x128e90: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x128e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_128e94:
    // 0x128e94: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x128e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_128e98:
    // 0x128e98: 0x1000fe5a  b           . + 4 + (-0x1A6 << 2)
label_128e9c:
    if (ctx->pc == 0x128E9Cu) {
        ctx->pc = 0x128E9Cu;
            // 0x128e9c: 0x222200a  movz        $a0, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->pc = 0x128EA0u;
        goto label_128ea0;
    }
    ctx->pc = 0x128E98u;
    {
        const bool branch_taken_0x128e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E98u;
            // 0x128e9c: 0x222200a  movz        $a0, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e98) {
            ctx->pc = 0x128804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128804;
        }
    }
    ctx->pc = 0x128EA0u;
label_128ea0:
    // 0x128ea0: 0x2e0f809  jalr        $s7
label_128ea4:
    if (ctx->pc == 0x128EA4u) {
        ctx->pc = 0x128EA4u;
            // 0x128ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128EA8u;
        goto label_128ea8;
    }
    ctx->pc = 0x128EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128EA8u);
        ctx->pc = 0x128EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128EA0u;
            // 0x128ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128EA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128EA8u; }
            if (ctx->pc != 0x128EA8u) { return; }
        }
        }
    }
    ctx->pc = 0x128EA8u;
label_128ea8:
    // 0x128ea8: 0x5c40fe41  bgtzl       $v0, . + 4 + (-0x1BF << 2)
label_128eac:
    if (ctx->pc == 0x128EACu) {
        ctx->pc = 0x128EACu;
            // 0x128eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128EB0u;
        goto label_128eb0;
    }
    ctx->pc = 0x128EA8u;
    {
        const bool branch_taken_0x128ea8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x128ea8) {
            ctx->pc = 0x128EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128EA8u;
            // 0x128eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1287B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1287b0;
        }
    }
    ctx->pc = 0x128EB0u;
label_128eb0:
    // 0x128eb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128eb4:
    // 0x128eb4: 0x2e0f809  jalr        $s7
label_128eb8:
    if (ctx->pc == 0x128EB8u) {
        ctx->pc = 0x128EB8u;
            // 0x128eb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128EBCu;
        goto label_128ebc;
    }
    ctx->pc = 0x128EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x128EBCu);
        ctx->pc = 0x128EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128EB4u;
            // 0x128eb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128EBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128EBCu; }
            if (ctx->pc != 0x128EBCu) { return; }
        }
        }
    }
    ctx->pc = 0x128EBCu;
label_128ebc:
    // 0x128ebc: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x128ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_128ec0:
    // 0x128ec0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128ec4:
    // 0x128ec4: 0x1000fe3a  b           . + 4 + (-0x1C6 << 2)
label_128ec8:
    if (ctx->pc == 0x128EC8u) {
        ctx->pc = 0x128EC8u;
            // 0x128ec8: 0x222200a  movz        $a0, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->pc = 0x128ECCu;
        goto label_128ecc;
    }
    ctx->pc = 0x128EC4u;
    {
        const bool branch_taken_0x128ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128EC4u;
            // 0x128ec8: 0x222200a  movz        $a0, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ec4) {
            ctx->pc = 0x1287B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1287b0;
        }
    }
    ctx->pc = 0x128ECCu;
label_128ecc:
    // 0x128ecc: 0x0  nop
    ctx->pc = 0x128eccu;
    // NOP
label_128ed0:
    // 0x128ed0: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x128ed0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_128ed4:
    // 0x128ed4: 0x1000fe71  b           . + 4 + (-0x18F << 2)
label_128ed8:
    if (ctx->pc == 0x128ED8u) {
        ctx->pc = 0x128ED8u;
            // 0x128ed8: 0x25d5ffff  addiu       $s5, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->pc = 0x128EDCu;
        goto label_128edc;
    }
    ctx->pc = 0x128ED4u;
    {
        const bool branch_taken_0x128ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128ED4u;
            // 0x128ed8: 0x25d5ffff  addiu       $s5, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ed4) {
            ctx->pc = 0x12889Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12889c;
        }
    }
    ctx->pc = 0x128EDCu;
label_128edc:
    // 0x128edc: 0x0  nop
    ctx->pc = 0x128edcu;
    // NOP
    ctx->pc = 0x128ee0u;
}
