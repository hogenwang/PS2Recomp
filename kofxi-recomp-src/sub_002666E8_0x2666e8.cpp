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

// Function: sub_002666E8
// Address: 0x2666e8 - 0x267288
void sub_002666E8_0x2666e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002666E8_0x2666e8");
#endif

    switch (ctx->pc) {
        case 0x2666e8u: goto label_2666e8;
        case 0x2666ecu: goto label_2666ec;
        case 0x2666f0u: goto label_2666f0;
        case 0x2666f4u: goto label_2666f4;
        case 0x2666f8u: goto label_2666f8;
        case 0x2666fcu: goto label_2666fc;
        case 0x266700u: goto label_266700;
        case 0x266704u: goto label_266704;
        case 0x266708u: goto label_266708;
        case 0x26670cu: goto label_26670c;
        case 0x266710u: goto label_266710;
        case 0x266714u: goto label_266714;
        case 0x266718u: goto label_266718;
        case 0x26671cu: goto label_26671c;
        case 0x266720u: goto label_266720;
        case 0x266724u: goto label_266724;
        case 0x266728u: goto label_266728;
        case 0x26672cu: goto label_26672c;
        case 0x266730u: goto label_266730;
        case 0x266734u: goto label_266734;
        case 0x266738u: goto label_266738;
        case 0x26673cu: goto label_26673c;
        case 0x266740u: goto label_266740;
        case 0x266744u: goto label_266744;
        case 0x266748u: goto label_266748;
        case 0x26674cu: goto label_26674c;
        case 0x266750u: goto label_266750;
        case 0x266754u: goto label_266754;
        case 0x266758u: goto label_266758;
        case 0x26675cu: goto label_26675c;
        case 0x266760u: goto label_266760;
        case 0x266764u: goto label_266764;
        case 0x266768u: goto label_266768;
        case 0x26676cu: goto label_26676c;
        case 0x266770u: goto label_266770;
        case 0x266774u: goto label_266774;
        case 0x266778u: goto label_266778;
        case 0x26677cu: goto label_26677c;
        case 0x266780u: goto label_266780;
        case 0x266784u: goto label_266784;
        case 0x266788u: goto label_266788;
        case 0x26678cu: goto label_26678c;
        case 0x266790u: goto label_266790;
        case 0x266794u: goto label_266794;
        case 0x266798u: goto label_266798;
        case 0x26679cu: goto label_26679c;
        case 0x2667a0u: goto label_2667a0;
        case 0x2667a4u: goto label_2667a4;
        case 0x2667a8u: goto label_2667a8;
        case 0x2667acu: goto label_2667ac;
        case 0x2667b0u: goto label_2667b0;
        case 0x2667b4u: goto label_2667b4;
        case 0x2667b8u: goto label_2667b8;
        case 0x2667bcu: goto label_2667bc;
        case 0x2667c0u: goto label_2667c0;
        case 0x2667c4u: goto label_2667c4;
        case 0x2667c8u: goto label_2667c8;
        case 0x2667ccu: goto label_2667cc;
        case 0x2667d0u: goto label_2667d0;
        case 0x2667d4u: goto label_2667d4;
        case 0x2667d8u: goto label_2667d8;
        case 0x2667dcu: goto label_2667dc;
        case 0x2667e0u: goto label_2667e0;
        case 0x2667e4u: goto label_2667e4;
        case 0x2667e8u: goto label_2667e8;
        case 0x2667ecu: goto label_2667ec;
        case 0x2667f0u: goto label_2667f0;
        case 0x2667f4u: goto label_2667f4;
        case 0x2667f8u: goto label_2667f8;
        case 0x2667fcu: goto label_2667fc;
        case 0x266800u: goto label_266800;
        case 0x266804u: goto label_266804;
        case 0x266808u: goto label_266808;
        case 0x26680cu: goto label_26680c;
        case 0x266810u: goto label_266810;
        case 0x266814u: goto label_266814;
        case 0x266818u: goto label_266818;
        case 0x26681cu: goto label_26681c;
        case 0x266820u: goto label_266820;
        case 0x266824u: goto label_266824;
        case 0x266828u: goto label_266828;
        case 0x26682cu: goto label_26682c;
        case 0x266830u: goto label_266830;
        case 0x266834u: goto label_266834;
        case 0x266838u: goto label_266838;
        case 0x26683cu: goto label_26683c;
        case 0x266840u: goto label_266840;
        case 0x266844u: goto label_266844;
        case 0x266848u: goto label_266848;
        case 0x26684cu: goto label_26684c;
        case 0x266850u: goto label_266850;
        case 0x266854u: goto label_266854;
        case 0x266858u: goto label_266858;
        case 0x26685cu: goto label_26685c;
        case 0x266860u: goto label_266860;
        case 0x266864u: goto label_266864;
        case 0x266868u: goto label_266868;
        case 0x26686cu: goto label_26686c;
        case 0x266870u: goto label_266870;
        case 0x266874u: goto label_266874;
        case 0x266878u: goto label_266878;
        case 0x26687cu: goto label_26687c;
        case 0x266880u: goto label_266880;
        case 0x266884u: goto label_266884;
        case 0x266888u: goto label_266888;
        case 0x26688cu: goto label_26688c;
        case 0x266890u: goto label_266890;
        case 0x266894u: goto label_266894;
        case 0x266898u: goto label_266898;
        case 0x26689cu: goto label_26689c;
        case 0x2668a0u: goto label_2668a0;
        case 0x2668a4u: goto label_2668a4;
        case 0x2668a8u: goto label_2668a8;
        case 0x2668acu: goto label_2668ac;
        case 0x2668b0u: goto label_2668b0;
        case 0x2668b4u: goto label_2668b4;
        case 0x2668b8u: goto label_2668b8;
        case 0x2668bcu: goto label_2668bc;
        case 0x2668c0u: goto label_2668c0;
        case 0x2668c4u: goto label_2668c4;
        case 0x2668c8u: goto label_2668c8;
        case 0x2668ccu: goto label_2668cc;
        case 0x2668d0u: goto label_2668d0;
        case 0x2668d4u: goto label_2668d4;
        case 0x2668d8u: goto label_2668d8;
        case 0x2668dcu: goto label_2668dc;
        case 0x2668e0u: goto label_2668e0;
        case 0x2668e4u: goto label_2668e4;
        case 0x2668e8u: goto label_2668e8;
        case 0x2668ecu: goto label_2668ec;
        case 0x2668f0u: goto label_2668f0;
        case 0x2668f4u: goto label_2668f4;
        case 0x2668f8u: goto label_2668f8;
        case 0x2668fcu: goto label_2668fc;
        case 0x266900u: goto label_266900;
        case 0x266904u: goto label_266904;
        case 0x266908u: goto label_266908;
        case 0x26690cu: goto label_26690c;
        case 0x266910u: goto label_266910;
        case 0x266914u: goto label_266914;
        case 0x266918u: goto label_266918;
        case 0x26691cu: goto label_26691c;
        case 0x266920u: goto label_266920;
        case 0x266924u: goto label_266924;
        case 0x266928u: goto label_266928;
        case 0x26692cu: goto label_26692c;
        case 0x266930u: goto label_266930;
        case 0x266934u: goto label_266934;
        case 0x266938u: goto label_266938;
        case 0x26693cu: goto label_26693c;
        case 0x266940u: goto label_266940;
        case 0x266944u: goto label_266944;
        case 0x266948u: goto label_266948;
        case 0x26694cu: goto label_26694c;
        case 0x266950u: goto label_266950;
        case 0x266954u: goto label_266954;
        case 0x266958u: goto label_266958;
        case 0x26695cu: goto label_26695c;
        case 0x266960u: goto label_266960;
        case 0x266964u: goto label_266964;
        case 0x266968u: goto label_266968;
        case 0x26696cu: goto label_26696c;
        case 0x266970u: goto label_266970;
        case 0x266974u: goto label_266974;
        case 0x266978u: goto label_266978;
        case 0x26697cu: goto label_26697c;
        case 0x266980u: goto label_266980;
        case 0x266984u: goto label_266984;
        case 0x266988u: goto label_266988;
        case 0x26698cu: goto label_26698c;
        case 0x266990u: goto label_266990;
        case 0x266994u: goto label_266994;
        case 0x266998u: goto label_266998;
        case 0x26699cu: goto label_26699c;
        case 0x2669a0u: goto label_2669a0;
        case 0x2669a4u: goto label_2669a4;
        case 0x2669a8u: goto label_2669a8;
        case 0x2669acu: goto label_2669ac;
        case 0x2669b0u: goto label_2669b0;
        case 0x2669b4u: goto label_2669b4;
        case 0x2669b8u: goto label_2669b8;
        case 0x2669bcu: goto label_2669bc;
        case 0x2669c0u: goto label_2669c0;
        case 0x2669c4u: goto label_2669c4;
        case 0x2669c8u: goto label_2669c8;
        case 0x2669ccu: goto label_2669cc;
        case 0x2669d0u: goto label_2669d0;
        case 0x2669d4u: goto label_2669d4;
        case 0x2669d8u: goto label_2669d8;
        case 0x2669dcu: goto label_2669dc;
        case 0x2669e0u: goto label_2669e0;
        case 0x2669e4u: goto label_2669e4;
        case 0x2669e8u: goto label_2669e8;
        case 0x2669ecu: goto label_2669ec;
        case 0x2669f0u: goto label_2669f0;
        case 0x2669f4u: goto label_2669f4;
        case 0x2669f8u: goto label_2669f8;
        case 0x2669fcu: goto label_2669fc;
        case 0x266a00u: goto label_266a00;
        case 0x266a04u: goto label_266a04;
        case 0x266a08u: goto label_266a08;
        case 0x266a0cu: goto label_266a0c;
        case 0x266a10u: goto label_266a10;
        case 0x266a14u: goto label_266a14;
        case 0x266a18u: goto label_266a18;
        case 0x266a1cu: goto label_266a1c;
        case 0x266a20u: goto label_266a20;
        case 0x266a24u: goto label_266a24;
        case 0x266a28u: goto label_266a28;
        case 0x266a2cu: goto label_266a2c;
        case 0x266a30u: goto label_266a30;
        case 0x266a34u: goto label_266a34;
        case 0x266a38u: goto label_266a38;
        case 0x266a3cu: goto label_266a3c;
        case 0x266a40u: goto label_266a40;
        case 0x266a44u: goto label_266a44;
        case 0x266a48u: goto label_266a48;
        case 0x266a4cu: goto label_266a4c;
        case 0x266a50u: goto label_266a50;
        case 0x266a54u: goto label_266a54;
        case 0x266a58u: goto label_266a58;
        case 0x266a5cu: goto label_266a5c;
        case 0x266a60u: goto label_266a60;
        case 0x266a64u: goto label_266a64;
        case 0x266a68u: goto label_266a68;
        case 0x266a6cu: goto label_266a6c;
        case 0x266a70u: goto label_266a70;
        case 0x266a74u: goto label_266a74;
        case 0x266a78u: goto label_266a78;
        case 0x266a7cu: goto label_266a7c;
        case 0x266a80u: goto label_266a80;
        case 0x266a84u: goto label_266a84;
        case 0x266a88u: goto label_266a88;
        case 0x266a8cu: goto label_266a8c;
        case 0x266a90u: goto label_266a90;
        case 0x266a94u: goto label_266a94;
        case 0x266a98u: goto label_266a98;
        case 0x266a9cu: goto label_266a9c;
        case 0x266aa0u: goto label_266aa0;
        case 0x266aa4u: goto label_266aa4;
        case 0x266aa8u: goto label_266aa8;
        case 0x266aacu: goto label_266aac;
        case 0x266ab0u: goto label_266ab0;
        case 0x266ab4u: goto label_266ab4;
        case 0x266ab8u: goto label_266ab8;
        case 0x266abcu: goto label_266abc;
        case 0x266ac0u: goto label_266ac0;
        case 0x266ac4u: goto label_266ac4;
        case 0x266ac8u: goto label_266ac8;
        case 0x266accu: goto label_266acc;
        case 0x266ad0u: goto label_266ad0;
        case 0x266ad4u: goto label_266ad4;
        case 0x266ad8u: goto label_266ad8;
        case 0x266adcu: goto label_266adc;
        case 0x266ae0u: goto label_266ae0;
        case 0x266ae4u: goto label_266ae4;
        case 0x266ae8u: goto label_266ae8;
        case 0x266aecu: goto label_266aec;
        case 0x266af0u: goto label_266af0;
        case 0x266af4u: goto label_266af4;
        case 0x266af8u: goto label_266af8;
        case 0x266afcu: goto label_266afc;
        case 0x266b00u: goto label_266b00;
        case 0x266b04u: goto label_266b04;
        case 0x266b08u: goto label_266b08;
        case 0x266b0cu: goto label_266b0c;
        case 0x266b10u: goto label_266b10;
        case 0x266b14u: goto label_266b14;
        case 0x266b18u: goto label_266b18;
        case 0x266b1cu: goto label_266b1c;
        case 0x266b20u: goto label_266b20;
        case 0x266b24u: goto label_266b24;
        case 0x266b28u: goto label_266b28;
        case 0x266b2cu: goto label_266b2c;
        case 0x266b30u: goto label_266b30;
        case 0x266b34u: goto label_266b34;
        case 0x266b38u: goto label_266b38;
        case 0x266b3cu: goto label_266b3c;
        case 0x266b40u: goto label_266b40;
        case 0x266b44u: goto label_266b44;
        case 0x266b48u: goto label_266b48;
        case 0x266b4cu: goto label_266b4c;
        case 0x266b50u: goto label_266b50;
        case 0x266b54u: goto label_266b54;
        case 0x266b58u: goto label_266b58;
        case 0x266b5cu: goto label_266b5c;
        case 0x266b60u: goto label_266b60;
        case 0x266b64u: goto label_266b64;
        case 0x266b68u: goto label_266b68;
        case 0x266b6cu: goto label_266b6c;
        case 0x266b70u: goto label_266b70;
        case 0x266b74u: goto label_266b74;
        case 0x266b78u: goto label_266b78;
        case 0x266b7cu: goto label_266b7c;
        case 0x266b80u: goto label_266b80;
        case 0x266b84u: goto label_266b84;
        case 0x266b88u: goto label_266b88;
        case 0x266b8cu: goto label_266b8c;
        case 0x266b90u: goto label_266b90;
        case 0x266b94u: goto label_266b94;
        case 0x266b98u: goto label_266b98;
        case 0x266b9cu: goto label_266b9c;
        case 0x266ba0u: goto label_266ba0;
        case 0x266ba4u: goto label_266ba4;
        case 0x266ba8u: goto label_266ba8;
        case 0x266bacu: goto label_266bac;
        case 0x266bb0u: goto label_266bb0;
        case 0x266bb4u: goto label_266bb4;
        case 0x266bb8u: goto label_266bb8;
        case 0x266bbcu: goto label_266bbc;
        case 0x266bc0u: goto label_266bc0;
        case 0x266bc4u: goto label_266bc4;
        case 0x266bc8u: goto label_266bc8;
        case 0x266bccu: goto label_266bcc;
        case 0x266bd0u: goto label_266bd0;
        case 0x266bd4u: goto label_266bd4;
        case 0x266bd8u: goto label_266bd8;
        case 0x266bdcu: goto label_266bdc;
        case 0x266be0u: goto label_266be0;
        case 0x266be4u: goto label_266be4;
        case 0x266be8u: goto label_266be8;
        case 0x266becu: goto label_266bec;
        case 0x266bf0u: goto label_266bf0;
        case 0x266bf4u: goto label_266bf4;
        case 0x266bf8u: goto label_266bf8;
        case 0x266bfcu: goto label_266bfc;
        case 0x266c00u: goto label_266c00;
        case 0x266c04u: goto label_266c04;
        case 0x266c08u: goto label_266c08;
        case 0x266c0cu: goto label_266c0c;
        case 0x266c10u: goto label_266c10;
        case 0x266c14u: goto label_266c14;
        case 0x266c18u: goto label_266c18;
        case 0x266c1cu: goto label_266c1c;
        case 0x266c20u: goto label_266c20;
        case 0x266c24u: goto label_266c24;
        case 0x266c28u: goto label_266c28;
        case 0x266c2cu: goto label_266c2c;
        case 0x266c30u: goto label_266c30;
        case 0x266c34u: goto label_266c34;
        case 0x266c38u: goto label_266c38;
        case 0x266c3cu: goto label_266c3c;
        case 0x266c40u: goto label_266c40;
        case 0x266c44u: goto label_266c44;
        case 0x266c48u: goto label_266c48;
        case 0x266c4cu: goto label_266c4c;
        case 0x266c50u: goto label_266c50;
        case 0x266c54u: goto label_266c54;
        case 0x266c58u: goto label_266c58;
        case 0x266c5cu: goto label_266c5c;
        case 0x266c60u: goto label_266c60;
        case 0x266c64u: goto label_266c64;
        case 0x266c68u: goto label_266c68;
        case 0x266c6cu: goto label_266c6c;
        case 0x266c70u: goto label_266c70;
        case 0x266c74u: goto label_266c74;
        case 0x266c78u: goto label_266c78;
        case 0x266c7cu: goto label_266c7c;
        case 0x266c80u: goto label_266c80;
        case 0x266c84u: goto label_266c84;
        case 0x266c88u: goto label_266c88;
        case 0x266c8cu: goto label_266c8c;
        case 0x266c90u: goto label_266c90;
        case 0x266c94u: goto label_266c94;
        case 0x266c98u: goto label_266c98;
        case 0x266c9cu: goto label_266c9c;
        case 0x266ca0u: goto label_266ca0;
        case 0x266ca4u: goto label_266ca4;
        case 0x266ca8u: goto label_266ca8;
        case 0x266cacu: goto label_266cac;
        case 0x266cb0u: goto label_266cb0;
        case 0x266cb4u: goto label_266cb4;
        case 0x266cb8u: goto label_266cb8;
        case 0x266cbcu: goto label_266cbc;
        case 0x266cc0u: goto label_266cc0;
        case 0x266cc4u: goto label_266cc4;
        case 0x266cc8u: goto label_266cc8;
        case 0x266cccu: goto label_266ccc;
        case 0x266cd0u: goto label_266cd0;
        case 0x266cd4u: goto label_266cd4;
        case 0x266cd8u: goto label_266cd8;
        case 0x266cdcu: goto label_266cdc;
        case 0x266ce0u: goto label_266ce0;
        case 0x266ce4u: goto label_266ce4;
        case 0x266ce8u: goto label_266ce8;
        case 0x266cecu: goto label_266cec;
        case 0x266cf0u: goto label_266cf0;
        case 0x266cf4u: goto label_266cf4;
        case 0x266cf8u: goto label_266cf8;
        case 0x266cfcu: goto label_266cfc;
        case 0x266d00u: goto label_266d00;
        case 0x266d04u: goto label_266d04;
        case 0x266d08u: goto label_266d08;
        case 0x266d0cu: goto label_266d0c;
        case 0x266d10u: goto label_266d10;
        case 0x266d14u: goto label_266d14;
        case 0x266d18u: goto label_266d18;
        case 0x266d1cu: goto label_266d1c;
        case 0x266d20u: goto label_266d20;
        case 0x266d24u: goto label_266d24;
        case 0x266d28u: goto label_266d28;
        case 0x266d2cu: goto label_266d2c;
        case 0x266d30u: goto label_266d30;
        case 0x266d34u: goto label_266d34;
        case 0x266d38u: goto label_266d38;
        case 0x266d3cu: goto label_266d3c;
        case 0x266d40u: goto label_266d40;
        case 0x266d44u: goto label_266d44;
        case 0x266d48u: goto label_266d48;
        case 0x266d4cu: goto label_266d4c;
        case 0x266d50u: goto label_266d50;
        case 0x266d54u: goto label_266d54;
        case 0x266d58u: goto label_266d58;
        case 0x266d5cu: goto label_266d5c;
        case 0x266d60u: goto label_266d60;
        case 0x266d64u: goto label_266d64;
        case 0x266d68u: goto label_266d68;
        case 0x266d6cu: goto label_266d6c;
        case 0x266d70u: goto label_266d70;
        case 0x266d74u: goto label_266d74;
        case 0x266d78u: goto label_266d78;
        case 0x266d7cu: goto label_266d7c;
        case 0x266d80u: goto label_266d80;
        case 0x266d84u: goto label_266d84;
        case 0x266d88u: goto label_266d88;
        case 0x266d8cu: goto label_266d8c;
        case 0x266d90u: goto label_266d90;
        case 0x266d94u: goto label_266d94;
        case 0x266d98u: goto label_266d98;
        case 0x266d9cu: goto label_266d9c;
        case 0x266da0u: goto label_266da0;
        case 0x266da4u: goto label_266da4;
        case 0x266da8u: goto label_266da8;
        case 0x266dacu: goto label_266dac;
        case 0x266db0u: goto label_266db0;
        case 0x266db4u: goto label_266db4;
        case 0x266db8u: goto label_266db8;
        case 0x266dbcu: goto label_266dbc;
        case 0x266dc0u: goto label_266dc0;
        case 0x266dc4u: goto label_266dc4;
        case 0x266dc8u: goto label_266dc8;
        case 0x266dccu: goto label_266dcc;
        case 0x266dd0u: goto label_266dd0;
        case 0x266dd4u: goto label_266dd4;
        case 0x266dd8u: goto label_266dd8;
        case 0x266ddcu: goto label_266ddc;
        case 0x266de0u: goto label_266de0;
        case 0x266de4u: goto label_266de4;
        case 0x266de8u: goto label_266de8;
        case 0x266decu: goto label_266dec;
        case 0x266df0u: goto label_266df0;
        case 0x266df4u: goto label_266df4;
        case 0x266df8u: goto label_266df8;
        case 0x266dfcu: goto label_266dfc;
        case 0x266e00u: goto label_266e00;
        case 0x266e04u: goto label_266e04;
        case 0x266e08u: goto label_266e08;
        case 0x266e0cu: goto label_266e0c;
        case 0x266e10u: goto label_266e10;
        case 0x266e14u: goto label_266e14;
        case 0x266e18u: goto label_266e18;
        case 0x266e1cu: goto label_266e1c;
        case 0x266e20u: goto label_266e20;
        case 0x266e24u: goto label_266e24;
        case 0x266e28u: goto label_266e28;
        case 0x266e2cu: goto label_266e2c;
        case 0x266e30u: goto label_266e30;
        case 0x266e34u: goto label_266e34;
        case 0x266e38u: goto label_266e38;
        case 0x266e3cu: goto label_266e3c;
        case 0x266e40u: goto label_266e40;
        case 0x266e44u: goto label_266e44;
        case 0x266e48u: goto label_266e48;
        case 0x266e4cu: goto label_266e4c;
        case 0x266e50u: goto label_266e50;
        case 0x266e54u: goto label_266e54;
        case 0x266e58u: goto label_266e58;
        case 0x266e5cu: goto label_266e5c;
        case 0x266e60u: goto label_266e60;
        case 0x266e64u: goto label_266e64;
        case 0x266e68u: goto label_266e68;
        case 0x266e6cu: goto label_266e6c;
        case 0x266e70u: goto label_266e70;
        case 0x266e74u: goto label_266e74;
        case 0x266e78u: goto label_266e78;
        case 0x266e7cu: goto label_266e7c;
        case 0x266e80u: goto label_266e80;
        case 0x266e84u: goto label_266e84;
        case 0x266e88u: goto label_266e88;
        case 0x266e8cu: goto label_266e8c;
        case 0x266e90u: goto label_266e90;
        case 0x266e94u: goto label_266e94;
        case 0x266e98u: goto label_266e98;
        case 0x266e9cu: goto label_266e9c;
        case 0x266ea0u: goto label_266ea0;
        case 0x266ea4u: goto label_266ea4;
        case 0x266ea8u: goto label_266ea8;
        case 0x266eacu: goto label_266eac;
        case 0x266eb0u: goto label_266eb0;
        case 0x266eb4u: goto label_266eb4;
        case 0x266eb8u: goto label_266eb8;
        case 0x266ebcu: goto label_266ebc;
        case 0x266ec0u: goto label_266ec0;
        case 0x266ec4u: goto label_266ec4;
        case 0x266ec8u: goto label_266ec8;
        case 0x266eccu: goto label_266ecc;
        case 0x266ed0u: goto label_266ed0;
        case 0x266ed4u: goto label_266ed4;
        case 0x266ed8u: goto label_266ed8;
        case 0x266edcu: goto label_266edc;
        case 0x266ee0u: goto label_266ee0;
        case 0x266ee4u: goto label_266ee4;
        case 0x266ee8u: goto label_266ee8;
        case 0x266eecu: goto label_266eec;
        case 0x266ef0u: goto label_266ef0;
        case 0x266ef4u: goto label_266ef4;
        case 0x266ef8u: goto label_266ef8;
        case 0x266efcu: goto label_266efc;
        case 0x266f00u: goto label_266f00;
        case 0x266f04u: goto label_266f04;
        case 0x266f08u: goto label_266f08;
        case 0x266f0cu: goto label_266f0c;
        case 0x266f10u: goto label_266f10;
        case 0x266f14u: goto label_266f14;
        case 0x266f18u: goto label_266f18;
        case 0x266f1cu: goto label_266f1c;
        case 0x266f20u: goto label_266f20;
        case 0x266f24u: goto label_266f24;
        case 0x266f28u: goto label_266f28;
        case 0x266f2cu: goto label_266f2c;
        case 0x266f30u: goto label_266f30;
        case 0x266f34u: goto label_266f34;
        case 0x266f38u: goto label_266f38;
        case 0x266f3cu: goto label_266f3c;
        case 0x266f40u: goto label_266f40;
        case 0x266f44u: goto label_266f44;
        case 0x266f48u: goto label_266f48;
        case 0x266f4cu: goto label_266f4c;
        case 0x266f50u: goto label_266f50;
        case 0x266f54u: goto label_266f54;
        case 0x266f58u: goto label_266f58;
        case 0x266f5cu: goto label_266f5c;
        case 0x266f60u: goto label_266f60;
        case 0x266f64u: goto label_266f64;
        case 0x266f68u: goto label_266f68;
        case 0x266f6cu: goto label_266f6c;
        case 0x266f70u: goto label_266f70;
        case 0x266f74u: goto label_266f74;
        case 0x266f78u: goto label_266f78;
        case 0x266f7cu: goto label_266f7c;
        case 0x266f80u: goto label_266f80;
        case 0x266f84u: goto label_266f84;
        case 0x266f88u: goto label_266f88;
        case 0x266f8cu: goto label_266f8c;
        case 0x266f90u: goto label_266f90;
        case 0x266f94u: goto label_266f94;
        case 0x266f98u: goto label_266f98;
        case 0x266f9cu: goto label_266f9c;
        case 0x266fa0u: goto label_266fa0;
        case 0x266fa4u: goto label_266fa4;
        case 0x266fa8u: goto label_266fa8;
        case 0x266facu: goto label_266fac;
        case 0x266fb0u: goto label_266fb0;
        case 0x266fb4u: goto label_266fb4;
        case 0x266fb8u: goto label_266fb8;
        case 0x266fbcu: goto label_266fbc;
        case 0x266fc0u: goto label_266fc0;
        case 0x266fc4u: goto label_266fc4;
        case 0x266fc8u: goto label_266fc8;
        case 0x266fccu: goto label_266fcc;
        case 0x266fd0u: goto label_266fd0;
        case 0x266fd4u: goto label_266fd4;
        case 0x266fd8u: goto label_266fd8;
        case 0x266fdcu: goto label_266fdc;
        case 0x266fe0u: goto label_266fe0;
        case 0x266fe4u: goto label_266fe4;
        case 0x266fe8u: goto label_266fe8;
        case 0x266fecu: goto label_266fec;
        case 0x266ff0u: goto label_266ff0;
        case 0x266ff4u: goto label_266ff4;
        case 0x266ff8u: goto label_266ff8;
        case 0x266ffcu: goto label_266ffc;
        case 0x267000u: goto label_267000;
        case 0x267004u: goto label_267004;
        case 0x267008u: goto label_267008;
        case 0x26700cu: goto label_26700c;
        case 0x267010u: goto label_267010;
        case 0x267014u: goto label_267014;
        case 0x267018u: goto label_267018;
        case 0x26701cu: goto label_26701c;
        case 0x267020u: goto label_267020;
        case 0x267024u: goto label_267024;
        case 0x267028u: goto label_267028;
        case 0x26702cu: goto label_26702c;
        case 0x267030u: goto label_267030;
        case 0x267034u: goto label_267034;
        case 0x267038u: goto label_267038;
        case 0x26703cu: goto label_26703c;
        case 0x267040u: goto label_267040;
        case 0x267044u: goto label_267044;
        case 0x267048u: goto label_267048;
        case 0x26704cu: goto label_26704c;
        case 0x267050u: goto label_267050;
        case 0x267054u: goto label_267054;
        case 0x267058u: goto label_267058;
        case 0x26705cu: goto label_26705c;
        case 0x267060u: goto label_267060;
        case 0x267064u: goto label_267064;
        case 0x267068u: goto label_267068;
        case 0x26706cu: goto label_26706c;
        case 0x267070u: goto label_267070;
        case 0x267074u: goto label_267074;
        case 0x267078u: goto label_267078;
        case 0x26707cu: goto label_26707c;
        case 0x267080u: goto label_267080;
        case 0x267084u: goto label_267084;
        case 0x267088u: goto label_267088;
        case 0x26708cu: goto label_26708c;
        case 0x267090u: goto label_267090;
        case 0x267094u: goto label_267094;
        case 0x267098u: goto label_267098;
        case 0x26709cu: goto label_26709c;
        case 0x2670a0u: goto label_2670a0;
        case 0x2670a4u: goto label_2670a4;
        case 0x2670a8u: goto label_2670a8;
        case 0x2670acu: goto label_2670ac;
        case 0x2670b0u: goto label_2670b0;
        case 0x2670b4u: goto label_2670b4;
        case 0x2670b8u: goto label_2670b8;
        case 0x2670bcu: goto label_2670bc;
        case 0x2670c0u: goto label_2670c0;
        case 0x2670c4u: goto label_2670c4;
        case 0x2670c8u: goto label_2670c8;
        case 0x2670ccu: goto label_2670cc;
        case 0x2670d0u: goto label_2670d0;
        case 0x2670d4u: goto label_2670d4;
        case 0x2670d8u: goto label_2670d8;
        case 0x2670dcu: goto label_2670dc;
        case 0x2670e0u: goto label_2670e0;
        case 0x2670e4u: goto label_2670e4;
        case 0x2670e8u: goto label_2670e8;
        case 0x2670ecu: goto label_2670ec;
        case 0x2670f0u: goto label_2670f0;
        case 0x2670f4u: goto label_2670f4;
        case 0x2670f8u: goto label_2670f8;
        case 0x2670fcu: goto label_2670fc;
        case 0x267100u: goto label_267100;
        case 0x267104u: goto label_267104;
        case 0x267108u: goto label_267108;
        case 0x26710cu: goto label_26710c;
        case 0x267110u: goto label_267110;
        case 0x267114u: goto label_267114;
        case 0x267118u: goto label_267118;
        case 0x26711cu: goto label_26711c;
        case 0x267120u: goto label_267120;
        case 0x267124u: goto label_267124;
        case 0x267128u: goto label_267128;
        case 0x26712cu: goto label_26712c;
        case 0x267130u: goto label_267130;
        case 0x267134u: goto label_267134;
        case 0x267138u: goto label_267138;
        case 0x26713cu: goto label_26713c;
        case 0x267140u: goto label_267140;
        case 0x267144u: goto label_267144;
        case 0x267148u: goto label_267148;
        case 0x26714cu: goto label_26714c;
        case 0x267150u: goto label_267150;
        case 0x267154u: goto label_267154;
        case 0x267158u: goto label_267158;
        case 0x26715cu: goto label_26715c;
        case 0x267160u: goto label_267160;
        case 0x267164u: goto label_267164;
        case 0x267168u: goto label_267168;
        case 0x26716cu: goto label_26716c;
        case 0x267170u: goto label_267170;
        case 0x267174u: goto label_267174;
        case 0x267178u: goto label_267178;
        case 0x26717cu: goto label_26717c;
        case 0x267180u: goto label_267180;
        case 0x267184u: goto label_267184;
        case 0x267188u: goto label_267188;
        case 0x26718cu: goto label_26718c;
        case 0x267190u: goto label_267190;
        case 0x267194u: goto label_267194;
        case 0x267198u: goto label_267198;
        case 0x26719cu: goto label_26719c;
        case 0x2671a0u: goto label_2671a0;
        case 0x2671a4u: goto label_2671a4;
        case 0x2671a8u: goto label_2671a8;
        case 0x2671acu: goto label_2671ac;
        case 0x2671b0u: goto label_2671b0;
        case 0x2671b4u: goto label_2671b4;
        case 0x2671b8u: goto label_2671b8;
        case 0x2671bcu: goto label_2671bc;
        case 0x2671c0u: goto label_2671c0;
        case 0x2671c4u: goto label_2671c4;
        case 0x2671c8u: goto label_2671c8;
        case 0x2671ccu: goto label_2671cc;
        case 0x2671d0u: goto label_2671d0;
        case 0x2671d4u: goto label_2671d4;
        case 0x2671d8u: goto label_2671d8;
        case 0x2671dcu: goto label_2671dc;
        case 0x2671e0u: goto label_2671e0;
        case 0x2671e4u: goto label_2671e4;
        case 0x2671e8u: goto label_2671e8;
        case 0x2671ecu: goto label_2671ec;
        case 0x2671f0u: goto label_2671f0;
        case 0x2671f4u: goto label_2671f4;
        case 0x2671f8u: goto label_2671f8;
        case 0x2671fcu: goto label_2671fc;
        case 0x267200u: goto label_267200;
        case 0x267204u: goto label_267204;
        case 0x267208u: goto label_267208;
        case 0x26720cu: goto label_26720c;
        case 0x267210u: goto label_267210;
        case 0x267214u: goto label_267214;
        case 0x267218u: goto label_267218;
        case 0x26721cu: goto label_26721c;
        case 0x267220u: goto label_267220;
        case 0x267224u: goto label_267224;
        case 0x267228u: goto label_267228;
        case 0x26722cu: goto label_26722c;
        case 0x267230u: goto label_267230;
        case 0x267234u: goto label_267234;
        case 0x267238u: goto label_267238;
        case 0x26723cu: goto label_26723c;
        case 0x267240u: goto label_267240;
        case 0x267244u: goto label_267244;
        case 0x267248u: goto label_267248;
        case 0x26724cu: goto label_26724c;
        case 0x267250u: goto label_267250;
        case 0x267254u: goto label_267254;
        case 0x267258u: goto label_267258;
        case 0x26725cu: goto label_26725c;
        case 0x267260u: goto label_267260;
        case 0x267264u: goto label_267264;
        case 0x267268u: goto label_267268;
        case 0x26726cu: goto label_26726c;
        case 0x267270u: goto label_267270;
        case 0x267274u: goto label_267274;
        case 0x267278u: goto label_267278;
        case 0x26727cu: goto label_26727c;
        case 0x267280u: goto label_267280;
        case 0x267284u: goto label_267284;
        default: break;
    }

    ctx->pc = 0x2666e8u;

label_2666e8:
    // 0x2666e8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2666e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_2666ec:
    // 0x2666ec: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2666ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
label_2666f0:
    // 0x2666f0: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x2666f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
label_2666f4:
    // 0x2666f4: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x2666f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
label_2666f8:
    // 0x2666f8: 0xffb701a0  sd          $s7, 0x1A0($sp)
    ctx->pc = 0x2666f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 23));
label_2666fc:
    // 0x2666fc: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x2666fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
label_266700:
    // 0x266700: 0xffb50180  sd          $s5, 0x180($sp)
    ctx->pc = 0x266700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 21));
label_266704:
    // 0x266704: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x266704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
label_266708:
    // 0x266708: 0xffb30160  sd          $s3, 0x160($sp)
    ctx->pc = 0x266708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 19));
label_26670c:
    // 0x26670c: 0xffb10140  sd          $s1, 0x140($sp)
    ctx->pc = 0x26670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
label_266710:
    // 0x266710: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x266710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
label_266714:
    // 0x266714: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x266714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
label_266718:
    // 0x266718: 0xafa600f4  sw          $a2, 0xF4($sp)
    ctx->pc = 0x266718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 6));
label_26671c:
    // 0x26671c: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x26671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
label_266720:
    // 0x266720: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x266720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
label_266724:
    // 0x266724: 0xc0432d4  jal         func_10CB50
label_266728:
    if (ctx->pc == 0x266728u) {
        ctx->pc = 0x266728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266724u;
        // 0x266728: 0xafa400e4  sw          $a0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26672Cu;
        goto label_26672c;
    }
    ctx->pc = 0x266724u;
    SET_GPR_U32(ctx, 31, 0x26672Cu);
    ctx->pc = 0x266728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266724u;
    // 0x266728: 0xafa400e4  sw          $a0, 0xE4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x266724u, 0x26672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26672Cu;
label_26672c:
    // 0x26672c: 0xc097242  jal         func_25C908
label_266730:
    if (ctx->pc == 0x266730u) {
        ctx->pc = 0x266730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26672Cu;
        // 0x266730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266734u;
        goto label_266734;
    }
    ctx->pc = 0x26672Cu;
    SET_GPR_U32(ctx, 31, 0x266734u);
    ctx->pc = 0x266730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26672Cu;
    // 0x266730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C908u, 0x26672Cu, 0x266734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266734u;
label_266734:
    // 0x266734: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x266734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266738:
    // 0x266738: 0x124002c6  beqz        $s2, . + 4 + (0x2C6 << 2)
label_26673c:
    if (ctx->pc == 0x26673Cu) {
        ctx->pc = 0x26673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266738u;
        // 0x26673c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266740u;
        goto label_266740;
    }
    ctx->pc = 0x266738u;
    {
        const bool branch_taken_0x266738 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266738u;
        // 0x26673c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266738) {
            ctx->pc = 0x267254u;
            goto label_267254;
        }
    }
    ctx->pc = 0x266740u;
label_266740:
    // 0x266740: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x266740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_266744:
    // 0x266744: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_266748:
    if (ctx->pc == 0x266748u) {
        ctx->pc = 0x266748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266744u;
        // 0x266748: 0x8e420058  lw          $v0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26674Cu;
        goto label_26674c;
    }
    ctx->pc = 0x266744u;
    {
        const bool branch_taken_0x266744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266744) {
            ctx->pc = 0x266748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266744u;
            // 0x266748: 0x8e420058  lw          $v0, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266764u;
            goto label_266764;
        }
    }
    ctx->pc = 0x26674Cu;
label_26674c:
    // 0x26674c: 0xc099642  jal         func_265908
label_266750:
    if (ctx->pc == 0x266750u) {
        ctx->pc = 0x266750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26674Cu;
        // 0x266750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266754u;
        goto label_266754;
    }
    ctx->pc = 0x26674Cu;
    SET_GPR_U32(ctx, 31, 0x266754u);
    ctx->pc = 0x266750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26674Cu;
    // 0x266750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265908u, 0x26674Cu, 0x266754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266754u;
label_266754:
    // 0x266754: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x266754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_266758:
    // 0x266758: 0x104302be  beq         $v0, $v1, . + 4 + (0x2BE << 2)
label_26675c:
    if (ctx->pc == 0x26675Cu) {
        ctx->pc = 0x26675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266758u;
        // 0x26675c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266760u;
        goto label_266760;
    }
    ctx->pc = 0x266758u;
    {
        const bool branch_taken_0x266758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266758u;
        // 0x26675c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266758) {
            ctx->pc = 0x267254u;
            goto label_267254;
        }
    }
    ctx->pc = 0x266760u;
label_266760:
    // 0x266760: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x266760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266764:
    // 0x266764: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_266768:
    if (ctx->pc == 0x266768u) {
        ctx->pc = 0x266768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266764u;
        // 0x266768: 0x8fa300f8  lw          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26676Cu;
        goto label_26676c;
    }
    ctx->pc = 0x266764u;
    {
        const bool branch_taken_0x266764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266764u;
        // 0x266768: 0x8fa300f8  lw          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266764) {
            ctx->pc = 0x2667B8u;
            goto label_2667b8;
        }
    }
    ctx->pc = 0x26676Cu;
label_26676c:
    // 0x26676c: 0xc098552  jal         func_261548
label_266770:
    if (ctx->pc == 0x266770u) {
        ctx->pc = 0x266770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26676Cu;
        // 0x266770: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266774u;
        goto label_266774;
    }
    ctx->pc = 0x26676Cu;
    SET_GPR_U32(ctx, 31, 0x266774u);
    ctx->pc = 0x266770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26676Cu;
    // 0x266770: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x26676Cu, 0x266774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266774u;
label_266774:
    // 0x266774: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x266774u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266778:
    // 0x266778: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_26677c:
    if (ctx->pc == 0x26677Cu) {
        ctx->pc = 0x26677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266778u;
        // 0x26677c: 0xae430058  sw          $v1, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266780u;
        goto label_266780;
    }
    ctx->pc = 0x266778u;
    {
        const bool branch_taken_0x266778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266778u;
        // 0x26677c: 0xae430058  sw          $v1, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266778) {
            ctx->pc = 0x266794u;
            goto label_266794;
        }
    }
    ctx->pc = 0x266780u;
label_266780:
    // 0x266780: 0xc0972fa  jal         func_25CBE8
label_266784:
    if (ctx->pc == 0x266784u) {
        ctx->pc = 0x266788u;
        goto label_266788;
    }
    ctx->pc = 0x266780u;
    SET_GPR_U32(ctx, 31, 0x266788u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266780u, 0x266788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266788u;
label_266788:
    // 0x266788: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x266788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_26678c:
    // 0x26678c: 0x100002b0  b           . + 4 + (0x2B0 << 2)
label_266790:
    if (ctx->pc == 0x266790u) {
        ctx->pc = 0x266790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26678Cu;
        // 0x266790: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266794u;
        goto label_266794;
    }
    ctx->pc = 0x26678Cu;
    {
        const bool branch_taken_0x26678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26678Cu;
        // 0x266790: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26678c) {
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x266794u;
label_266794:
    // 0x266794: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x266794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_266798:
    // 0x266798: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x266798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_26679c:
    // 0x26679c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x26679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_2667a0:
    // 0x2667a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2667a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2667a4:
    // 0x2667a4: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2667a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_2667a8:
    // 0x2667a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2667a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2667ac:
    // 0x2667ac: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2667acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_2667b0:
    // 0x2667b0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2667b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_2667b4:
    // 0x2667b4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2667b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_2667b8:
    // 0x2667b8: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x2667b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_2667bc:
    // 0x2667bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2667c0:
    if (ctx->pc == 0x2667C0u) {
        ctx->pc = 0x2667C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667BCu;
        // 0x2667c0: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2667C4u;
        goto label_2667c4;
    }
    ctx->pc = 0x2667BCu;
    {
        const bool branch_taken_0x2667bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2667bc) {
            ctx->pc = 0x2667C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2667BCu;
            // 0x2667c0: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2667D8u;
            goto label_2667d8;
        }
    }
    ctx->pc = 0x2667C4u;
label_2667c4:
    // 0x2667c4: 0xc0972fa  jal         func_25CBE8
label_2667c8:
    if (ctx->pc == 0x2667C8u) {
        ctx->pc = 0x2667CCu;
        goto label_2667cc;
    }
    ctx->pc = 0x2667C4u;
    SET_GPR_U32(ctx, 31, 0x2667CCu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2667C4u, 0x2667CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667CCu;
label_2667cc:
    // 0x2667cc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2667ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2667d0:
    // 0x2667d0: 0x1000029f  b           . + 4 + (0x29F << 2)
label_2667d4:
    if (ctx->pc == 0x2667D4u) {
        ctx->pc = 0x2667D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667D0u;
        // 0x2667d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2667D8u;
        goto label_2667d8;
    }
    ctx->pc = 0x2667D0u;
    {
        const bool branch_taken_0x2667d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2667D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667D0u;
        // 0x2667d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667d0) {
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x2667D8u;
label_2667d8:
    // 0x2667d8: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x2667d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_2667dc:
    // 0x2667dc: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x2667dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_2667e0:
    // 0x2667e0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2667e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2667e4:
    // 0x2667e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2667e8:
    if (ctx->pc == 0x2667E8u) {
        ctx->pc = 0x2667E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667E4u;
        // 0x2667e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2667ECu;
        goto label_2667ec;
    }
    ctx->pc = 0x2667E4u;
    {
        const bool branch_taken_0x2667e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2667E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667E4u;
        // 0x2667e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667e4) {
            ctx->pc = 0x2667FCu;
            goto label_2667fc;
        }
    }
    ctx->pc = 0x2667ECu;
label_2667ec:
    // 0x2667ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2667ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2667f0:
    // 0x2667f0: 0x28420201  slti        $v0, $v0, 0x201
    ctx->pc = 0x2667f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
label_2667f4:
    // 0x2667f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2667f8:
    if (ctx->pc == 0x2667F8u) {
        ctx->pc = 0x2667F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667F4u;
        // 0x2667f8: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2667FCu;
        goto label_2667fc;
    }
    ctx->pc = 0x2667F4u;
    {
        const bool branch_taken_0x2667f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2667f4) {
            ctx->pc = 0x2667F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2667F4u;
            // 0x2667f8: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266808u;
            goto label_266808;
        }
    }
    ctx->pc = 0x2667FCu;
label_2667fc:
    // 0x2667fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2667fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266800:
    // 0x266800: 0xafa5010c  sw          $a1, 0x10C($sp)
    ctx->pc = 0x266800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
label_266804:
    // 0x266804: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x266804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_266808:
    // 0x266808: 0x241e0074  addiu       $fp, $zero, 0x74
    ctx->pc = 0x266808u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_26680c:
    // 0x26680c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_266810:
    // 0x266810: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x266810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_266814:
    // 0x266814: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x266814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_266818:
    // 0x266818: 0x18400271  blez        $v0, . + 4 + (0x271 << 2)
label_26681c:
    if (ctx->pc == 0x26681Cu) {
        ctx->pc = 0x26681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266818u;
        // 0x26681c: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266820u;
        goto label_266820;
    }
    ctx->pc = 0x266818u;
    {
        const bool branch_taken_0x266818 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266818u;
        // 0x26681c: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266818) {
            ctx->pc = 0x2671E0u;
            goto label_2671e0;
        }
    }
    ctx->pc = 0x266820u;
label_266820:
    // 0x266820: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x266820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_266824:
    // 0x266824: 0x0  nop
    ctx->pc = 0x266824u;
    // NOP
label_266828:
    // 0x266828: 0x18400265  blez        $v0, . + 4 + (0x265 << 2)
label_26682c:
    if (ctx->pc == 0x26682Cu) {
        ctx->pc = 0x26682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266828u;
        // 0x26682c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266830u;
        goto label_266830;
    }
    ctx->pc = 0x266828u;
    {
        const bool branch_taken_0x266828 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266828u;
        // 0x26682c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266828) {
            ctx->pc = 0x2671C0u;
            goto label_2671c0;
        }
    }
    ctx->pc = 0x266830u;
label_266830:
    // 0x266830: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x266830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_266834:
    // 0x266834: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x266834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_266838:
    // 0x266838: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x266838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26683c:
    // 0x26683c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x26683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_266840:
    // 0x266840: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x266840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_266844:
    // 0x266844: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x266844u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_266848:
    // 0x266848: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26684c:
    if (ctx->pc == 0x26684Cu) {
        ctx->pc = 0x26684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266848u;
        // 0x26684c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266850u;
        goto label_266850;
    }
    ctx->pc = 0x266848u;
    {
        const bool branch_taken_0x266848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266848u;
        // 0x26684c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266848) {
            ctx->pc = 0x26685Cu;
            goto label_26685c;
        }
    }
    ctx->pc = 0x266850u;
label_266850:
    // 0x266850: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x266850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_266854:
    // 0x266854: 0x10000222  b           . + 4 + (0x222 << 2)
label_266858:
    if (ctx->pc == 0x266858u) {
        ctx->pc = 0x266858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266854u;
        // 0x266858: 0xafa60114  sw          $a2, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26685Cu;
        goto label_26685c;
    }
    ctx->pc = 0x266854u;
    {
        const bool branch_taken_0x266854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266854u;
        // 0x266858: 0xafa60114  sw          $a2, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266854) {
            ctx->pc = 0x2670E0u;
            goto label_2670e0;
        }
    }
    ctx->pc = 0x26685Cu;
label_26685c:
    // 0x26685c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x26685cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_266860:
    // 0x266860: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x266860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_266864:
    // 0x266864: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x266864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_266868:
    // 0x266868: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x266868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_26686c:
    // 0x26686c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x26686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_266870:
    // 0x266870: 0x2e42007  srav        $a0, $a0, $s7
    ctx->pc = 0x266870u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 23) & 0x1F));
label_266874:
    // 0x266874: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x266874u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_266878:
    // 0x266878: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x266878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_26687c:
    // 0x26687c: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x26687cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_266880:
    // 0x266880: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x266880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_266884:
    // 0x266884: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x266884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_266888:
    // 0x266888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26688c:
    if (ctx->pc == 0x26688Cu) {
        ctx->pc = 0x26688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266888u;
        // 0x26688c: 0x3c0a003a  lui         $t2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266890u;
        goto label_266890;
    }
    ctx->pc = 0x266888u;
    {
        const bool branch_taken_0x266888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266888u;
        // 0x26688c: 0x3c0a003a  lui         $t2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266888) {
            ctx->pc = 0x2668A0u;
            goto label_2668a0;
        }
    }
    ctx->pc = 0x266890u;
label_266890:
    // 0x266890: 0xc099ca2  jal         func_267288
label_266894:
    if (ctx->pc == 0x266894u) {
        ctx->pc = 0x266894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266890u;
        // 0x266894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266898u;
        goto label_266898;
    }
    ctx->pc = 0x266890u;
    SET_GPR_U32(ctx, 31, 0x266898u);
    ctx->pc = 0x266894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266890u;
    // 0x266894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x266890u, 0x266898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266898u;
label_266898:
    // 0x266898: 0x10000244  b           . + 4 + (0x244 << 2)
label_26689c:
    if (ctx->pc == 0x26689Cu) {
        ctx->pc = 0x26689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266898u;
        // 0x26689c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668A0u;
        goto label_2668a0;
    }
    ctx->pc = 0x266898u;
    {
        const bool branch_taken_0x266898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266898u;
        // 0x26689c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266898) {
            ctx->pc = 0x2671ACu;
            goto label_2671ac;
        }
    }
    ctx->pc = 0x2668A0u;
label_2668a0:
    // 0x2668a0: 0x8d421a38  lw          $v0, 0x1A38($t2)
    ctx->pc = 0x2668a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 6712)));
label_2668a4:
    // 0x2668a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2668a8:
    if (ctx->pc == 0x2668A8u) {
        ctx->pc = 0x2668A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668A4u;
        // 0x2668a8: 0x8fa2010c  lw          $v0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668ACu;
        goto label_2668ac;
    }
    ctx->pc = 0x2668A4u;
    {
        const bool branch_taken_0x2668a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668A4u;
        // 0x2668a8: 0x8fa2010c  lw          $v0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668a4) {
            ctx->pc = 0x266938u;
            goto label_266938;
        }
    }
    ctx->pc = 0x2668ACu;
label_2668ac:
    // 0x2668ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2668acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2668b0:
    // 0x2668b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2668b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2668b4:
    // 0x2668b4: 0x27b600e0  addiu       $s6, $sp, 0xE0
    ctx->pc = 0x2668b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2668b8:
    // 0x2668b8: 0x27b500e4  addiu       $s5, $sp, 0xE4
    ctx->pc = 0x2668b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_2668bc:
    // 0x2668bc: 0x27b400e8  addiu       $s4, $sp, 0xE8
    ctx->pc = 0x2668bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2668c0:
    // 0x2668c0: 0x27b100ec  addiu       $s1, $sp, 0xEC
    ctx->pc = 0x2668c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_2668c4:
    // 0x2668c4: 0x8d421a38  lw          $v0, 0x1A38($t2)
    ctx->pc = 0x2668c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 6712)));
label_2668c8:
    // 0x2668c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2668c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2668cc:
    // 0x2668cc: 0x8fa700f4  lw          $a3, 0xF4($sp)
    ctx->pc = 0x2668ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2668d0:
    // 0x2668d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2668d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2668d4:
    // 0x2668d4: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2668d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_2668d8:
    // 0x2668d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2668d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2668dc:
    // 0x2668dc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2668dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2668e0:
    // 0x2668e0: 0x40f809  jalr        $v0
label_2668e4:
    if (ctx->pc == 0x2668E4u) {
        ctx->pc = 0x2668E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668E0u;
        // 0x2668e4: 0x7faa0120  sq          $t2, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668E8u;
        goto label_2668e8;
    }
    ctx->pc = 0x2668E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2668E8u);
        ctx->pc = 0x2668E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668E0u;
        // 0x2668e4: 0x7faa0120  sq          $t2, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2668E0u, 0x2668E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2668E8u;
label_2668e8:
    // 0x2668e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2668e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2668ec:
    // 0x2668ec: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2668ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2668f0:
    // 0x2668f0: 0x10400257  beqz        $v0, . + 4 + (0x257 << 2)
label_2668f4:
    if (ctx->pc == 0x2668F4u) {
        ctx->pc = 0x2668F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668F0u;
        // 0x2668f4: 0x7baa0120  lq          $t2, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668F8u;
        goto label_2668f8;
    }
    ctx->pc = 0x2668F0u;
    {
        const bool branch_taken_0x2668f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668F0u;
        // 0x2668f4: 0x7baa0120  lq          $t2, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668f0) {
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x2668F8u;
label_2668f8:
    // 0x2668f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2668f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_2668fc:
    // 0x2668fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2668fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_266900:
    // 0x266900: 0x24427810  addiu       $v0, $v0, 0x7810
    ctx->pc = 0x266900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30736));
label_266904:
    // 0x266904: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x266904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_266908:
    // 0x266908: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x266908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26690c:
    // 0x26690c: 0x600008  jr          $v1
label_266910:
    if (ctx->pc == 0x266910u) {
        ctx->pc = 0x266914u;
        goto label_266914;
    }
    ctx->pc = 0x26690Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x266890u: goto label_266890;
            case 0x266914u: goto label_266914;
            case 0x26691Cu: goto label_26691c;
            case 0x2671A4u: goto label_2671a4;
            case 0x267250u: goto label_267250;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26690Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x266914u;
label_266914:
    // 0x266914: 0x10000005  b           . + 4 + (0x5 << 2)
label_266918:
    if (ctx->pc == 0x266918u) {
        ctx->pc = 0x266918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266914u;
        // 0x266918: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26691Cu;
        goto label_26691c;
    }
    ctx->pc = 0x266914u;
    {
        const bool branch_taken_0x266914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266914u;
        // 0x266918: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266914) {
            ctx->pc = 0x26692Cu;
            goto label_26692c;
        }
    }
    ctx->pc = 0x26691Cu;
label_26691c:
    // 0x26691c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26691cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_266920:
    // 0x266920: 0x2a02002a  slti        $v0, $s0, 0x2A
    ctx->pc = 0x266920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)42) ? 1 : 0);
label_266924:
    // 0x266924: 0x1040024b  beqz        $v0, . + 4 + (0x24B << 2)
label_266928:
    if (ctx->pc == 0x266928u) {
        ctx->pc = 0x266928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266924u;
        // 0x266928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26692Cu;
        goto label_26692c;
    }
    ctx->pc = 0x266924u;
    {
        const bool branch_taken_0x266924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266924u;
        // 0x266928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266924) {
            ctx->pc = 0x267254u;
            goto label_267254;
        }
    }
    ctx->pc = 0x26692Cu;
label_26692c:
    // 0x26692c: 0x1260ffe6  beqz        $s3, . + 4 + (-0x1A << 2)
label_266930:
    if (ctx->pc == 0x266930u) {
        ctx->pc = 0x266930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26692Cu;
        // 0x266930: 0x8d421a38  lw          $v0, 0x1A38($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 6712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266934u;
        goto label_266934;
    }
    ctx->pc = 0x26692Cu;
    {
        const bool branch_taken_0x26692c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x266930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26692Cu;
        // 0x266930: 0x8d421a38  lw          $v0, 0x1A38($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 6712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26692c) {
            ctx->pc = 0x2668C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2668c8;
        }
    }
    ctx->pc = 0x266934u;
label_266934:
    // 0x266934: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x266934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_266938:
    // 0x266938: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_26693c:
    if (ctx->pc == 0x26693Cu) {
        ctx->pc = 0x26693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266938u;
        // 0x26693c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266940u;
        goto label_266940;
    }
    ctx->pc = 0x266938u;
    {
        const bool branch_taken_0x266938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266938u;
        // 0x26693c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266938) {
            ctx->pc = 0x266CE8u;
            goto label_266ce8;
        }
    }
    ctx->pc = 0x266940u;
label_266940:
    // 0x266940: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x266940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_266944:
    // 0x266944: 0x8e470058  lw          $a3, 0x58($s2)
    ctx->pc = 0x266944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266948:
    // 0x266948: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x266948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26694c:
    // 0x26694c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x26694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_266950:
    // 0x266950: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_266954:
    if (ctx->pc == 0x266954u) {
        ctx->pc = 0x266954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266950u;
        // 0x266954: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266958u;
        goto label_266958;
    }
    ctx->pc = 0x266950u;
    {
        const bool branch_taken_0x266950 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x266954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266950u;
        // 0x266954: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266950) {
            ctx->pc = 0x266980u;
            goto label_266980;
        }
    }
    ctx->pc = 0x266958u;
label_266958:
    // 0x266958: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x266958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_26695c:
    // 0x26695c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_266960:
    if (ctx->pc == 0x266960u) {
        ctx->pc = 0x266960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26695Cu;
        // 0x266960: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266964u;
        goto label_266964;
    }
    ctx->pc = 0x26695Cu;
    {
        const bool branch_taken_0x26695c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26695Cu;
        // 0x266960: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26695c) {
            ctx->pc = 0x266974u;
            goto label_266974;
        }
    }
    ctx->pc = 0x266964u;
label_266964:
    // 0x266964: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x266964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_266968:
    // 0x266968: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x266968u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_26696c:
    // 0x26696c: 0x50830035  beql        $a0, $v1, . + 4 + (0x35 << 2)
label_266970:
    if (ctx->pc == 0x266970u) {
        ctx->pc = 0x266970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26696Cu;
        // 0x266970: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266974u;
        goto label_266974;
    }
    ctx->pc = 0x26696Cu;
    {
        const bool branch_taken_0x26696c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26696c) {
            ctx->pc = 0x266970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26696Cu;
            // 0x266970: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266A44u;
            goto label_266a44;
        }
    }
    ctx->pc = 0x266974u;
label_266974:
    // 0x266974: 0xc099ca2  jal         func_267288
label_266978:
    if (ctx->pc == 0x266978u) {
        ctx->pc = 0x266978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266974u;
        // 0x266978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26697Cu;
        goto label_26697c;
    }
    ctx->pc = 0x266974u;
    SET_GPR_U32(ctx, 31, 0x26697Cu);
    ctx->pc = 0x266978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266974u;
    // 0x266978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x266974u, 0x26697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26697Cu;
label_26697c:
    // 0x26697c: 0x8e470058  lw          $a3, 0x58($s2)
    ctx->pc = 0x26697cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266980:
    // 0x266980: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x266980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_266984:
    // 0x266984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x266984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266988:
    // 0x266988: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x266988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26698c:
    // 0x26698c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x26698cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_266990:
    // 0x266990: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x266990u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_266994:
    // 0x266994: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x266994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266998:
    // 0x266998: 0xc0973ba  jal         func_25CEE8
label_26699c:
    if (ctx->pc == 0x26699Cu) {
        ctx->pc = 0x26699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266998u;
        // 0x26699c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2669A0u;
        goto label_2669a0;
    }
    ctx->pc = 0x266998u;
    SET_GPR_U32(ctx, 31, 0x2669A0u);
    ctx->pc = 0x26699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266998u;
    // 0x26699c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x266998u, 0x2669A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669A0u;
label_2669a0:
    // 0x2669a0: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2669a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_2669a4:
    // 0x2669a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2669a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2669a8:
    // 0x2669a8: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2669a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_2669ac:
    // 0x2669ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2669acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2669b0:
    // 0x2669b0: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
label_2669b4:
    if (ctx->pc == 0x2669B4u) {
        ctx->pc = 0x2669B8u;
        goto label_2669b8;
    }
    ctx->pc = 0x2669B0u;
    {
        const bool branch_taken_0x2669b0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2669b0) {
            ctx->pc = 0x2669E8u;
            goto label_2669e8;
        }
    }
    ctx->pc = 0x2669B8u;
label_2669b8:
    // 0x2669b8: 0xc0972fa  jal         func_25CBE8
label_2669bc:
    if (ctx->pc == 0x2669BCu) {
        ctx->pc = 0x2669C0u;
        goto label_2669c0;
    }
    ctx->pc = 0x2669B8u;
    SET_GPR_U32(ctx, 31, 0x2669C0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2669B8u, 0x2669C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669C0u;
label_2669c0:
    // 0x2669c0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2669c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2669c4:
    // 0x2669c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2669c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2669c8:
    // 0x2669c8: 0x2e31804  sllv        $v1, $v1, $s7
    ctx->pc = 0x2669c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
label_2669cc:
    // 0x2669cc: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x2669ccu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2669d0:
    // 0x2669d0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2669d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2669d4:
    // 0x2669d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2669d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2669d8:
    // 0x2669d8: 0xc099ca2  jal         func_267288
label_2669dc:
    if (ctx->pc == 0x2669DCu) {
        ctx->pc = 0x2669DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669D8u;
        // 0x2669dc: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2669E0u;
        goto label_2669e0;
    }
    ctx->pc = 0x2669D8u;
    SET_GPR_U32(ctx, 31, 0x2669E0u);
    ctx->pc = 0x2669DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669D8u;
    // 0x2669dc: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x2669D8u, 0x2669E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669E0u;
label_2669e0:
    // 0x2669e0: 0x100001f2  b           . + 4 + (0x1F2 << 2)
label_2669e4:
    if (ctx->pc == 0x2669E4u) {
        ctx->pc = 0x2669E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669E0u;
        // 0x2669e4: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2669E8u;
        goto label_2669e8;
    }
    ctx->pc = 0x2669E0u;
    {
        const bool branch_taken_0x2669e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669E0u;
        // 0x2669e4: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669e0) {
            ctx->pc = 0x2671ACu;
            goto label_2671ac;
        }
    }
    ctx->pc = 0x2669E8u;
label_2669e8:
    // 0x2669e8: 0xc0972fa  jal         func_25CBE8
label_2669ec:
    if (ctx->pc == 0x2669ECu) {
        ctx->pc = 0x2669F0u;
        goto label_2669f0;
    }
    ctx->pc = 0x2669E8u;
    SET_GPR_U32(ctx, 31, 0x2669F0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2669E8u, 0x2669F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669F0u;
label_2669f0:
    // 0x2669f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2669f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2669f4:
    // 0x2669f4: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2669f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_2669f8:
    // 0x2669f8: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x2669f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_2669fc:
    // 0x2669fc: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2669fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_266a00:
    // 0x266a00: 0xc0974ee  jal         func_25D3B8
label_266a04:
    if (ctx->pc == 0x266A04u) {
        ctx->pc = 0x266A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A00u;
        // 0x266a04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A08u;
        goto label_266a08;
    }
    ctx->pc = 0x266A00u;
    SET_GPR_U32(ctx, 31, 0x266A08u);
    ctx->pc = 0x266A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A00u;
    // 0x266a04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3B8u, 0x266A00u, 0x266A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A08u;
label_266a08:
    // 0x266a08: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
label_266a0c:
    if (ctx->pc == 0x266A0Cu) {
        ctx->pc = 0x266A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A08u;
        // 0x266a0c: 0x8e430058  lw          $v1, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A10u;
        goto label_266a10;
    }
    ctx->pc = 0x266A08u;
    {
        const bool branch_taken_0x266a08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x266a08) {
            ctx->pc = 0x266A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266A08u;
            // 0x266a0c: 0x8e430058  lw          $v1, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266A38u;
            goto label_266a38;
        }
    }
    ctx->pc = 0x266A10u;
label_266a10:
    // 0x266a10: 0xc0972fa  jal         func_25CBE8
label_266a14:
    if (ctx->pc == 0x266A14u) {
        ctx->pc = 0x266A18u;
        goto label_266a18;
    }
    ctx->pc = 0x266A10u;
    SET_GPR_U32(ctx, 31, 0x266A18u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266A10u, 0x266A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A18u;
label_266a18:
    // 0x266a18: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x266a18u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266a1c:
    // 0x266a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266a20:
    // 0x266a20: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x266a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_266a24:
    // 0x266a24: 0x2e31804  sllv        $v1, $v1, $s7
    ctx->pc = 0x266a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
label_266a28:
    // 0x266a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266a2c:
    // 0x266a2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x266a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_266a30:
    // 0x266a30: 0x10000159  b           . + 4 + (0x159 << 2)
label_266a34:
    if (ctx->pc == 0x266A34u) {
        ctx->pc = 0x266A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A30u;
        // 0x266a34: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A38u;
        goto label_266a38;
    }
    ctx->pc = 0x266A30u;
    {
        const bool branch_taken_0x266a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A30u;
        // 0x266a34: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a30) {
            ctx->pc = 0x266F98u;
            goto label_266f98;
        }
    }
    ctx->pc = 0x266A38u;
label_266a38:
    // 0x266a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266a3c:
    // 0x266a3c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x266a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_266a40:
    // 0x266a40: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x266a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_266a44:
    // 0x266a44: 0x97a400e8  lhu         $a0, 0xE8($sp)
    ctx->pc = 0x266a44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 232)));
label_266a48:
    // 0x266a48: 0xc099334  jal         func_264CD0
label_266a4c:
    if (ctx->pc == 0x266A4Cu) {
        ctx->pc = 0x266A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A48u;
        // 0x266a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A50u;
        goto label_266a50;
    }
    ctx->pc = 0x266A48u;
    SET_GPR_U32(ctx, 31, 0x266A50u);
    ctx->pc = 0x266A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A48u;
    // 0x266a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CD0u, 0x266A48u, 0x266A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A50u;
label_266a50:
    // 0x266a50: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x266a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_266a54:
    // 0x266a54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_266a58:
    // 0x266a58: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x266a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_266a5c:
    // 0x266a5c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x266a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_266a60:
    // 0x266a60: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x266a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_266a64:
    // 0x266a64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x266a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_266a68:
    // 0x266a68: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x266a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_266a6c:
    // 0x266a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x266a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266a70:
    // 0x266a70: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x266a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_266a74:
    // 0x266a74: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x266a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_266a78:
    // 0x266a78: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x266a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_266a7c:
    // 0x266a7c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x266a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_266a80:
    // 0x266a80: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x266a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_266a84:
    // 0x266a84: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x266a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_266a88:
    // 0x266a88: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x266a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_266a8c:
    // 0x266a8c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x266a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266a90:
    // 0x266a90: 0xc0975a8  jal         func_25D6A0
label_266a94:
    if (ctx->pc == 0x266A94u) {
        ctx->pc = 0x266A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A90u;
        // 0x266a94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A98u;
        goto label_266a98;
    }
    ctx->pc = 0x266A90u;
    SET_GPR_U32(ctx, 31, 0x266A98u);
    ctx->pc = 0x266A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A90u;
    // 0x266a94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D6A0u, 0x266A90u, 0x266A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A98u;
label_266a98:
    // 0x266a98: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x266a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_266a9c:
    // 0x266a9c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x266a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_266aa0:
    // 0x266aa0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_266aa4:
    if (ctx->pc == 0x266AA4u) {
        ctx->pc = 0x266AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AA0u;
        // 0x266aa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266AA8u;
        goto label_266aa8;
    }
    ctx->pc = 0x266AA0u;
    {
        const bool branch_taken_0x266aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x266AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AA0u;
        // 0x266aa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266aa0) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266AA8u;
label_266aa8:
    // 0x266aa8: 0xc0972fa  jal         func_25CBE8
label_266aac:
    if (ctx->pc == 0x266AACu) {
        ctx->pc = 0x266AB0u;
        goto label_266ab0;
    }
    ctx->pc = 0x266AA8u;
    SET_GPR_U32(ctx, 31, 0x266AB0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266AA8u, 0x266AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AB0u;
label_266ab0:
    // 0x266ab0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x266ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_266ab4:
    // 0x266ab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266ab8:
    // 0x266ab8: 0x2e31804  sllv        $v1, $v1, $s7
    ctx->pc = 0x266ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
label_266abc:
    // 0x266abc: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x266abcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266ac0:
    // 0x266ac0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x266ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_266ac4:
    // 0x266ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266ac8:
    // 0x266ac8: 0x10000133  b           . + 4 + (0x133 << 2)
label_266acc:
    if (ctx->pc == 0x266ACCu) {
        ctx->pc = 0x266ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AC8u;
        // 0x266acc: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266AD0u;
        goto label_266ad0;
    }
    ctx->pc = 0x266AC8u;
    {
        const bool branch_taken_0x266ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AC8u;
        // 0x266acc: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ac8) {
            ctx->pc = 0x266F98u;
            goto label_266f98;
        }
    }
    ctx->pc = 0x266AD0u;
label_266ad0:
    // 0x266ad0: 0x8fb100f4  lw          $s1, 0xF4($sp)
    ctx->pc = 0x266ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_266ad4:
    // 0x266ad4: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x266ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
label_266ad8:
    // 0x266ad8: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x266ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266adc:
    // 0x266adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_266ae0:
    // 0x266ae0: 0x97a60030  lhu         $a2, 0x30($sp)
    ctx->pc = 0x266ae0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_266ae4:
    // 0x266ae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x266ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266ae8:
    // 0x266ae8: 0xc09765c  jal         func_25D970
label_266aec:
    if (ctx->pc == 0x266AECu) {
        ctx->pc = 0x266AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AE8u;
        // 0x266aec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266AF0u;
        goto label_266af0;
    }
    ctx->pc = 0x266AE8u;
    SET_GPR_U32(ctx, 31, 0x266AF0u);
    ctx->pc = 0x266AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266AE8u;
    // 0x266aec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D970u, 0x266AE8u, 0x266AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AF0u;
label_266af0:
    // 0x266af0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x266af0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_266af4:
    // 0x266af4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x266af4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_266af8:
    // 0x266af8: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
label_266afc:
    if (ctx->pc == 0x266AFCu) {
        ctx->pc = 0x266AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AF8u;
        // 0x266afc: 0x97a20030  lhu         $v0, 0x30($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B00u;
        goto label_266b00;
    }
    ctx->pc = 0x266AF8u;
    {
        const bool branch_taken_0x266af8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x266AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AF8u;
        // 0x266afc: 0x97a20030  lhu         $v0, 0x30($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266af8) {
            ctx->pc = 0x266B1Cu;
            goto label_266b1c;
        }
    }
    ctx->pc = 0x266B00u;
label_266b00:
    // 0x266b00: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x266b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_266b04:
    // 0x266b04: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x266b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_266b08:
    // 0x266b08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x266b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_266b0c:
    // 0x266b0c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_266b10:
    if (ctx->pc == 0x266B10u) {
        ctx->pc = 0x266B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B0Cu;
        // 0x266b10: 0xa7a20030  sh          $v0, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B14u;
        goto label_266b14;
    }
    ctx->pc = 0x266B0Cu;
    {
        const bool branch_taken_0x266b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x266B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B0Cu;
        // 0x266b10: 0xa7a20030  sh          $v0, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b0c) {
            ctx->pc = 0x266AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266ad8;
        }
    }
    ctx->pc = 0x266B14u;
label_266b14:
    // 0x266b14: 0x1e000011  bgtz        $s0, . + 4 + (0x11 << 2)
label_266b18:
    if (ctx->pc == 0x266B18u) {
        ctx->pc = 0x266B1Cu;
        goto label_266b1c;
    }
    ctx->pc = 0x266B14u;
    {
        const bool branch_taken_0x266b14 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x266b14) {
            ctx->pc = 0x266B5Cu;
            goto label_266b5c;
        }
    }
    ctx->pc = 0x266B1Cu;
label_266b1c:
    // 0x266b1c: 0xc0972fa  jal         func_25CBE8
label_266b20:
    if (ctx->pc == 0x266B20u) {
        ctx->pc = 0x266B24u;
        goto label_266b24;
    }
    ctx->pc = 0x266B1Cu;
    SET_GPR_U32(ctx, 31, 0x266B24u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266B1Cu, 0x266B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B24u;
label_266b24:
    // 0x266b24: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x266b24u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266b28:
    // 0x266b28: 0xc099ca2  jal         func_267288
label_266b2c:
    if (ctx->pc == 0x266B2Cu) {
        ctx->pc = 0x266B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B28u;
        // 0x266b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B30u;
        goto label_266b30;
    }
    ctx->pc = 0x266B28u;
    SET_GPR_U32(ctx, 31, 0x266B30u);
    ctx->pc = 0x266B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B28u;
    // 0x266b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x266B28u, 0x266B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B30u;
label_266b30:
    // 0x266b30: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x266b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_266b34:
    // 0x266b34: 0x17c20118  bne         $fp, $v0, . + 4 + (0x118 << 2)
label_266b38:
    if (ctx->pc == 0x266B38u) {
        ctx->pc = 0x266B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B34u;
        // 0x266b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B3Cu;
        goto label_266b3c;
    }
    ctx->pc = 0x266B34u;
    {
        const bool branch_taken_0x266b34 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x266B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B34u;
        // 0x266b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b34) {
            ctx->pc = 0x266F98u;
            goto label_266f98;
        }
    }
    ctx->pc = 0x266B3Cu;
label_266b3c:
    // 0x266b3c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x266b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_266b40:
    // 0x266b40: 0x14400115  bnez        $v0, . + 4 + (0x115 << 2)
label_266b44:
    if (ctx->pc == 0x266B44u) {
        ctx->pc = 0x266B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B40u;
        // 0x266b44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B48u;
        goto label_266b48;
    }
    ctx->pc = 0x266B40u;
    {
        const bool branch_taken_0x266b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B40u;
        // 0x266b44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b40) {
            ctx->pc = 0x266F98u;
            goto label_266f98;
        }
    }
    ctx->pc = 0x266B48u;
label_266b48:
    // 0x266b48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266b4c:
    // 0x266b4c: 0xc099ca2  jal         func_267288
label_266b50:
    if (ctx->pc == 0x266B50u) {
        ctx->pc = 0x266B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B4Cu;
        // 0x266b50: 0xafa30104  sw          $v1, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B54u;
        goto label_266b54;
    }
    ctx->pc = 0x266B4Cu;
    SET_GPR_U32(ctx, 31, 0x266B54u);
    ctx->pc = 0x266B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B4Cu;
    // 0x266b50: 0xafa30104  sw          $v1, 0x104($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x266B4Cu, 0x266B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B54u;
label_266b54:
    // 0x266b54: 0x1000ff4b  b           . + 4 + (-0xB5 << 2)
label_266b58:
    if (ctx->pc == 0x266B58u) {
        ctx->pc = 0x266B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B54u;
        // 0x266b58: 0x8fa50118  lw          $a1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B5Cu;
        goto label_266b5c;
    }
    ctx->pc = 0x266B54u;
    {
        const bool branch_taken_0x266b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B54u;
        // 0x266b58: 0x8fa50118  lw          $a1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b54) {
            ctx->pc = 0x266884u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266884;
        }
    }
    ctx->pc = 0x266B5Cu;
label_266b5c:
    // 0x266b5c: 0xc099322  jal         func_264C88
label_266b60:
    if (ctx->pc == 0x266B60u) {
        ctx->pc = 0x266B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B5Cu;
        // 0x266b60: 0x8fa400f4  lw          $a0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B64u;
        goto label_266b64;
    }
    ctx->pc = 0x266B5Cu;
    SET_GPR_U32(ctx, 31, 0x266B64u);
    ctx->pc = 0x266B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B5Cu;
    // 0x266b60: 0x8fa400f4  lw          $a0, 0xF4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C88u, 0x266B5Cu, 0x266B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B64u;
label_266b64:
    // 0x266b64: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x266b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_266b68:
    // 0x266b68: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x266b68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_266b6c:
    // 0x266b6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_266b70:
    if (ctx->pc == 0x266B70u) {
        ctx->pc = 0x266B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B6Cu;
        // 0x266b70: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B74u;
        goto label_266b74;
    }
    ctx->pc = 0x266B6Cu;
    {
        const bool branch_taken_0x266b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B6Cu;
        // 0x266b70: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b6c) {
            ctx->pc = 0x266B80u;
            goto label_266b80;
        }
    }
    ctx->pc = 0x266B74u;
label_266b74:
    // 0x266b74: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x266b74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266b78:
    // 0x266b78: 0x10000003  b           . + 4 + (0x3 << 2)
label_266b7c:
    if (ctx->pc == 0x266B7Cu) {
        ctx->pc = 0x266B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B78u;
        // 0x266b7c: 0xa7a40030  sh          $a0, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B80u;
        goto label_266b80;
    }
    ctx->pc = 0x266B78u;
    {
        const bool branch_taken_0x266b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B78u;
        // 0x266b7c: 0xa7a40030  sh          $a0, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b78) {
            ctx->pc = 0x266B88u;
            goto label_266b88;
        }
    }
    ctx->pc = 0x266B80u;
label_266b80:
    // 0x266b80: 0x97a200ec  lhu         $v0, 0xEC($sp)
    ctx->pc = 0x266b80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 236)));
label_266b84:
    // 0x266b84: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x266b84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
label_266b88:
    // 0x266b88: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x266b88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_266b8c:
    // 0x266b8c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x266b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_266b90:
    // 0x266b90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_266b94:
    if (ctx->pc == 0x266B94u) {
        ctx->pc = 0x266B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B90u;
        // 0x266b94: 0x8fa50110  lw          $a1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B98u;
        goto label_266b98;
    }
    ctx->pc = 0x266B90u;
    {
        const bool branch_taken_0x266b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B90u;
        // 0x266b94: 0x8fa50110  lw          $a1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b90) {
            ctx->pc = 0x266BB0u;
            goto label_266bb0;
        }
    }
    ctx->pc = 0x266B98u;
label_266b98:
    // 0x266b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266b9c:
    // 0x266b9c: 0x2e21004  sllv        $v0, $v0, $s7
    ctx->pc = 0x266b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 23) & 0x1F));
label_266ba0:
    // 0x266ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266ba4:
    // 0x266ba4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x266ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_266ba8:
    // 0x266ba8: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
label_266bac:
    if (ctx->pc == 0x266BACu) {
        ctx->pc = 0x266BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BA8u;
        // 0x266bac: 0x241e007a  addiu       $fp, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266BB0u;
        goto label_266bb0;
    }
    ctx->pc = 0x266BA8u;
    {
        const bool branch_taken_0x266ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BA8u;
        // 0x266bac: 0x241e007a  addiu       $fp, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ba8) {
            ctx->pc = 0x2669D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2669d8;
        }
    }
    ctx->pc = 0x266BB0u;
label_266bb0:
    // 0x266bb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_266bb4:
    if (ctx->pc == 0x266BB4u) {
        ctx->pc = 0x266BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BB0u;
        // 0x266bb4: 0x8fb100f4  lw          $s1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266BB8u;
        goto label_266bb8;
    }
    ctx->pc = 0x266BB0u;
    {
        const bool branch_taken_0x266bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BB0u;
        // 0x266bb4: 0x8fb100f4  lw          $s1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bb0) {
            ctx->pc = 0x266BC8u;
            goto label_266bc8;
        }
    }
    ctx->pc = 0x266BB8u;
label_266bb8:
    // 0x266bb8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x266bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_266bbc:
    // 0x266bbc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x266bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_266bc0:
    // 0x266bc0: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x266bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
label_266bc4:
    // 0x266bc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x266bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266bc8:
    // 0x266bc8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x266bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_266bcc:
    // 0x266bcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_266bd0:
    if (ctx->pc == 0x266BD0u) {
        ctx->pc = 0x266BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BCCu;
        // 0x266bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266BD4u;
        goto label_266bd4;
    }
    ctx->pc = 0x266BCCu;
    {
        const bool branch_taken_0x266bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BCCu;
        // 0x266bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bcc) {
            ctx->pc = 0x266BF8u;
            goto label_266bf8;
        }
    }
    ctx->pc = 0x266BD4u;
label_266bd4:
    // 0x266bd4: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x266bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266bd8:
    // 0x266bd8: 0x97a60030  lhu         $a2, 0x30($sp)
    ctx->pc = 0x266bd8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_266bdc:
    // 0x266bdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x266bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266be0:
    // 0x266be0: 0xc09765c  jal         func_25D970
label_266be4:
    if (ctx->pc == 0x266BE4u) {
        ctx->pc = 0x266BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BE0u;
        // 0x266be4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266BE8u;
        goto label_266be8;
    }
    ctx->pc = 0x266BE0u;
    SET_GPR_U32(ctx, 31, 0x266BE8u);
    ctx->pc = 0x266BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266BE0u;
    // 0x266be4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D970u, 0x266BE0u, 0x266BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BE8u;
label_266be8:
    // 0x266be8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x266be8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_266bec:
    // 0x266bec: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x266becu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_266bf0:
    // 0x266bf0: 0x1e00fff1  bgtz        $s0, . + 4 + (-0xF << 2)
label_266bf4:
    if (ctx->pc == 0x266BF4u) {
        ctx->pc = 0x266BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BF0u;
        // 0x266bf4: 0x97a20030  lhu         $v0, 0x30($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266BF8u;
        goto label_266bf8;
    }
    ctx->pc = 0x266BF0u;
    {
        const bool branch_taken_0x266bf0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x266BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BF0u;
        // 0x266bf4: 0x97a20030  lhu         $v0, 0x30($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bf0) {
            ctx->pc = 0x266BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266bb8;
        }
    }
    ctx->pc = 0x266BF8u;
label_266bf8:
    // 0x266bf8: 0x1a0000e3  blez        $s0, . + 4 + (0xE3 << 2)
label_266bfc:
    if (ctx->pc == 0x266BFCu) {
        ctx->pc = 0x266C00u;
        goto label_266c00;
    }
    ctx->pc = 0x266BF8u;
    {
        const bool branch_taken_0x266bf8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x266bf8) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266C00u;
label_266c00:
    // 0x266c00: 0x12800031  beqz        $s4, . + 4 + (0x31 << 2)
label_266c04:
    if (ctx->pc == 0x266C04u) {
        ctx->pc = 0x266C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C00u;
        // 0x266c04: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C08u;
        goto label_266c08;
    }
    ctx->pc = 0x266C00u;
    {
        const bool branch_taken_0x266c00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C00u;
        // 0x266c04: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c00) {
            ctx->pc = 0x266CC8u;
            goto label_266cc8;
        }
    }
    ctx->pc = 0x266C08u;
label_266c08:
    // 0x266c08: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x266c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_266c0c:
    // 0x266c0c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x266c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_266c10:
    // 0x266c10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x266c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266c14:
    // 0x266c14: 0x97a300ec  lhu         $v1, 0xEC($sp)
    ctx->pc = 0x266c14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 236)));
label_266c18:
    // 0x266c18: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x266c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_266c1c:
    // 0x266c1c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x266c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_266c20:
    // 0x266c20: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x266c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_266c24:
    // 0x266c24: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x266c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_266c28:
    // 0x266c28: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x266c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_266c2c:
    // 0x266c2c: 0xc098552  jal         func_261548
label_266c30:
    if (ctx->pc == 0x266C30u) {
        ctx->pc = 0x266C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C2Cu;
        // 0x266c30: 0xa7a30030  sh          $v1, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C34u;
        goto label_266c34;
    }
    ctx->pc = 0x266C2Cu;
    SET_GPR_U32(ctx, 31, 0x266C34u);
    ctx->pc = 0x266C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C2Cu;
    // 0x266c30: 0xa7a30030  sh          $v1, 0x30($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x266C2Cu, 0x266C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C34u;
label_266c34:
    // 0x266c34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266c38:
    // 0x266c38: 0x1220017a  beqz        $s1, . + 4 + (0x17A << 2)
label_266c3c:
    if (ctx->pc == 0x266C3Cu) {
        ctx->pc = 0x266C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C38u;
        // 0x266c3c: 0x97a40030  lhu         $a0, 0x30($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C40u;
        goto label_266c40;
    }
    ctx->pc = 0x266C38u;
    {
        const bool branch_taken_0x266c38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C38u;
        // 0x266c3c: 0x97a40030  lhu         $a0, 0x30($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c38) {
            ctx->pc = 0x267224u;
            goto label_267224;
        }
    }
    ctx->pc = 0x266C40u;
label_266c40:
    // 0x266c40: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_266c44:
    if (ctx->pc == 0x266C44u) {
        ctx->pc = 0x266C48u;
        goto label_266c48;
    }
    ctx->pc = 0x266C40u;
    {
        const bool branch_taken_0x266c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c40) {
            ctx->pc = 0x266CC0u;
            goto label_266cc0;
        }
    }
    ctx->pc = 0x266C48u;
label_266c48:
    // 0x266c48: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x266c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_266c4c:
    // 0x266c4c: 0x0  nop
    ctx->pc = 0x266c4cu;
    // NOP
label_266c50:
    // 0x266c50: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x266c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266c54:
    // 0x266c54: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x266c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_266c58:
    // 0x266c58: 0x24100200  addiu       $s0, $zero, 0x200
    ctx->pc = 0x266c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_266c5c:
    // 0x266c5c: 0x97a60030  lhu         $a2, 0x30($sp)
    ctx->pc = 0x266c5cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_266c60:
    // 0x266c60: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x266c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_266c64:
    // 0x266c64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266c68:
    // 0x266c68: 0x203300b  movn        $a2, $s0, $v1
    ctx->pc = 0x266c68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_266c6c:
    // 0x266c6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_266c70:
    // 0x266c70: 0xc09765c  jal         func_25D970
label_266c74:
    if (ctx->pc == 0x266C74u) {
        ctx->pc = 0x266C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C70u;
        // 0x266c74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C78u;
        goto label_266c78;
    }
    ctx->pc = 0x266C70u;
    SET_GPR_U32(ctx, 31, 0x266C78u);
    ctx->pc = 0x266C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C70u;
    // 0x266c74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D970u, 0x266C70u, 0x266C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C78u;
label_266c78:
    // 0x266c78: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x266c78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_266c7c:
    // 0x266c7c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x266c7cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_266c80:
    // 0x266c80: 0x1e00000a  bgtz        $s0, . + 4 + (0xA << 2)
label_266c84:
    if (ctx->pc == 0x266C84u) {
        ctx->pc = 0x266C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C80u;
        // 0x266c84: 0x97a20030  lhu         $v0, 0x30($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C88u;
        goto label_266c88;
    }
    ctx->pc = 0x266C80u;
    {
        const bool branch_taken_0x266c80 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x266C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C80u;
        // 0x266c84: 0x97a20030  lhu         $v0, 0x30($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c80) {
            ctx->pc = 0x266CACu;
            goto label_266cac;
        }
    }
    ctx->pc = 0x266C88u;
label_266c88:
    // 0x266c88: 0xc0972fa  jal         func_25CBE8
label_266c8c:
    if (ctx->pc == 0x266C8Cu) {
        ctx->pc = 0x266C90u;
        goto label_266c90;
    }
    ctx->pc = 0x266C88u;
    SET_GPR_U32(ctx, 31, 0x266C90u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266C88u, 0x266C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C90u;
label_266c90:
    // 0x266c90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x266c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266c94:
    // 0x266c94: 0x1473000a  bne         $v1, $s3, . + 4 + (0xA << 2)
label_266c98:
    if (ctx->pc == 0x266C98u) {
        ctx->pc = 0x266C9Cu;
        goto label_266c9c;
    }
    ctx->pc = 0x266C94u;
    {
        const bool branch_taken_0x266c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x266c94) {
            ctx->pc = 0x266CC0u;
            goto label_266cc0;
        }
    }
    ctx->pc = 0x266C9Cu;
label_266c9c:
    // 0x266c9c: 0xc098560  jal         func_261580
label_266ca0:
    if (ctx->pc == 0x266CA0u) {
        ctx->pc = 0x266CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C9Cu;
        // 0x266ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CA4u;
        goto label_266ca4;
    }
    ctx->pc = 0x266C9Cu;
    SET_GPR_U32(ctx, 31, 0x266CA4u);
    ctx->pc = 0x266CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C9Cu;
    // 0x266ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x266C9Cu, 0x266CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CA4u;
label_266ca4:
    // 0x266ca4: 0x1000016b  b           . + 4 + (0x16B << 2)
label_266ca8:
    if (ctx->pc == 0x266CA8u) {
        ctx->pc = 0x266CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CA4u;
        // 0x266ca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CACu;
        goto label_266cac;
    }
    ctx->pc = 0x266CA4u;
    {
        const bool branch_taken_0x266ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CA4u;
        // 0x266ca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ca4) {
            ctx->pc = 0x267254u;
            goto label_267254;
        }
    }
    ctx->pc = 0x266CACu;
label_266cac:
    // 0x266cac: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x266cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_266cb0:
    // 0x266cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x266cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266cb4:
    // 0x266cb4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x266cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_266cb8:
    // 0x266cb8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_266cbc:
    if (ctx->pc == 0x266CBCu) {
        ctx->pc = 0x266CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CB8u;
        // 0x266cbc: 0xa7a20030  sh          $v0, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CC0u;
        goto label_266cc0;
    }
    ctx->pc = 0x266CB8u;
    {
        const bool branch_taken_0x266cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x266CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CB8u;
        // 0x266cbc: 0xa7a20030  sh          $v0, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cb8) {
            ctx->pc = 0x266C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266c50;
        }
    }
    ctx->pc = 0x266CC0u;
label_266cc0:
    // 0x266cc0: 0xc098560  jal         func_261580
label_266cc4:
    if (ctx->pc == 0x266CC4u) {
        ctx->pc = 0x266CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CC0u;
        // 0x266cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CC8u;
        goto label_266cc8;
    }
    ctx->pc = 0x266CC0u;
    SET_GPR_U32(ctx, 31, 0x266CC8u);
    ctx->pc = 0x266CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266CC0u;
    // 0x266cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x266CC0u, 0x266CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CC8u;
label_266cc8:
    // 0x266cc8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x266cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_266ccc:
    // 0x266ccc: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x266cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_266cd0:
    // 0x266cd0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x266cd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_266cd4:
    // 0x266cd4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x266cd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_266cd8:
    // 0x266cd8: 0x1462ff7d  bne         $v1, $v0, . + 4 + (-0x83 << 2)
label_266cdc:
    if (ctx->pc == 0x266CDCu) {
        ctx->pc = 0x266CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CD8u;
        // 0x266cdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CE0u;
        goto label_266ce0;
    }
    ctx->pc = 0x266CD8u;
    {
        const bool branch_taken_0x266cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x266CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CD8u;
        // 0x266cdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cd8) {
            ctx->pc = 0x266AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266CE0u;
label_266ce0:
    // 0x266ce0: 0x10000102  b           . + 4 + (0x102 << 2)
label_266ce4:
    if (ctx->pc == 0x266CE4u) {
        ctx->pc = 0x266CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CE0u;
        // 0x266ce4: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CE8u;
        goto label_266ce8;
    }
    ctx->pc = 0x266CE0u;
    {
        const bool branch_taken_0x266ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CE0u;
        // 0x266ce4: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ce0) {
            ctx->pc = 0x2670ECu;
            goto label_2670ec;
        }
    }
    ctx->pc = 0x266CE8u;
label_266ce8:
    // 0x266ce8: 0x8e470058  lw          $a3, 0x58($s2)
    ctx->pc = 0x266ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266cec:
    // 0x266cec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x266cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_266cf0:
    // 0x266cf0: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_266cf4:
    if (ctx->pc == 0x266CF4u) {
        ctx->pc = 0x266CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CF0u;
        // 0x266cf4: 0x8ce50008  lw          $a1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CF8u;
        goto label_266cf8;
    }
    ctx->pc = 0x266CF0u;
    {
        const bool branch_taken_0x266cf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x266CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CF0u;
        // 0x266cf4: 0x8ce50008  lw          $a1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cf0) {
            ctx->pc = 0x266D10u;
            goto label_266d10;
        }
    }
    ctx->pc = 0x266CF8u;
label_266cf8:
    // 0x266cf8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_266cfc:
    if (ctx->pc == 0x266CFCu) {
        ctx->pc = 0x266CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CF8u;
        // 0x266cfc: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D00u;
        goto label_266d00;
    }
    ctx->pc = 0x266CF8u;
    {
        const bool branch_taken_0x266cf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x266CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CF8u;
        // 0x266cfc: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cf8) {
            ctx->pc = 0x266D18u;
            goto label_266d18;
        }
    }
    ctx->pc = 0x266D00u;
label_266d00:
    // 0x266d00: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x266d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_266d04:
    // 0x266d04: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x266d04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_266d08:
    // 0x266d08: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
label_266d0c:
    if (ctx->pc == 0x266D0Cu) {
        ctx->pc = 0x266D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D08u;
        // 0x266d0c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D10u;
        goto label_266d10;
    }
    ctx->pc = 0x266D08u;
    {
        const bool branch_taken_0x266d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x266d08) {
            ctx->pc = 0x266D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266D08u;
            // 0x266d0c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266D68u;
            goto label_266d68;
        }
    }
    ctx->pc = 0x266D10u;
label_266d10:
    // 0x266d10: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_266d14:
    if (ctx->pc == 0x266D14u) {
        ctx->pc = 0x266D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D10u;
        // 0x266d14: 0x8fa300e0  lw          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D18u;
        goto label_266d18;
    }
    ctx->pc = 0x266D10u;
    {
        const bool branch_taken_0x266d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D10u;
        // 0x266d14: 0x8fa300e0  lw          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d10) {
            ctx->pc = 0x266D28u;
            goto label_266d28;
        }
    }
    ctx->pc = 0x266D18u;
label_266d18:
    // 0x266d18: 0xc099ca2  jal         func_267288
label_266d1c:
    if (ctx->pc == 0x266D1Cu) {
        ctx->pc = 0x266D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D18u;
        // 0x266d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D20u;
        goto label_266d20;
    }
    ctx->pc = 0x266D18u;
    SET_GPR_U32(ctx, 31, 0x266D20u);
    ctx->pc = 0x266D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D18u;
    // 0x266d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x266D18u, 0x266D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D20u;
label_266d20:
    // 0x266d20: 0x8e470058  lw          $a3, 0x58($s2)
    ctx->pc = 0x266d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266d24:
    // 0x266d24: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x266d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_266d28:
    // 0x266d28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x266d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_266d2c:
    // 0x266d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x266d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266d30:
    // 0x266d30: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x266d30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_266d34:
    // 0x266d34: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x266d34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_266d38:
    // 0x266d38: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x266d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266d3c:
    // 0x266d3c: 0xc0973ba  jal         func_25CEE8
label_266d40:
    if (ctx->pc == 0x266D40u) {
        ctx->pc = 0x266D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D3Cu;
        // 0x266d40: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D44u;
        goto label_266d44;
    }
    ctx->pc = 0x266D3Cu;
    SET_GPR_U32(ctx, 31, 0x266D44u);
    ctx->pc = 0x266D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D3Cu;
    // 0x266d40: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x266D3Cu, 0x266D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D44u;
label_266d44:
    // 0x266d44: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x266d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266d48:
    // 0x266d48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x266d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_266d4c:
    // 0x266d4c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x266d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266d50:
    // 0x266d50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x266d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266d54:
    // 0x266d54: 0x440ff18  bltz        $v0, . + 4 + (-0xE8 << 2)
label_266d58:
    if (ctx->pc == 0x266D58u) {
        ctx->pc = 0x266D5Cu;
        goto label_266d5c;
    }
    ctx->pc = 0x266D54u;
    {
        const bool branch_taken_0x266d54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x266d54) {
            ctx->pc = 0x2669B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2669b8;
        }
    }
    ctx->pc = 0x266D5Cu;
label_266d5c:
    // 0x266d5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x266d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_266d60:
    // 0x266d60: 0x8e470058  lw          $a3, 0x58($s2)
    ctx->pc = 0x266d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266d64:
    // 0x266d64: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_266d68:
    // 0x266d68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x266d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266d6c:
    // 0x266d6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x266d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_266d70:
    // 0x266d70: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_266d74:
    if (ctx->pc == 0x266D74u) {
        ctx->pc = 0x266D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D70u;
        // 0x266d74: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D78u;
        goto label_266d78;
    }
    ctx->pc = 0x266D70u;
    {
        const bool branch_taken_0x266d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x266D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D70u;
        // 0x266d74: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d70) {
            ctx->pc = 0x266D88u;
            goto label_266d88;
        }
    }
    ctx->pc = 0x266D78u;
label_266d78:
    // 0x266d78: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_266d7c:
    if (ctx->pc == 0x266D7Cu) {
        ctx->pc = 0x266D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D78u;
        // 0x266d7c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D80u;
        goto label_266d80;
    }
    ctx->pc = 0x266D78u;
    {
        const bool branch_taken_0x266d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266d78) {
            ctx->pc = 0x266D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266D78u;
            // 0x266d7c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266E18u;
            goto label_266e18;
        }
    }
    ctx->pc = 0x266D80u;
label_266d80:
    // 0x266d80: 0x56e00025  bnel        $s7, $zero, . + 4 + (0x25 << 2)
label_266d84:
    if (ctx->pc == 0x266D84u) {
        ctx->pc = 0x266D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D80u;
        // 0x266d84: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D88u;
        goto label_266d88;
    }
    ctx->pc = 0x266D80u;
    {
        const bool branch_taken_0x266d80 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x266d80) {
            ctx->pc = 0x266D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266D80u;
            // 0x266d84: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266E18u;
            goto label_266e18;
        }
    }
    ctx->pc = 0x266D88u;
label_266d88:
    // 0x266d88: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x266d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_266d8c:
    // 0x266d8c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_266d90:
    if (ctx->pc == 0x266D90u) {
        ctx->pc = 0x266D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D8Cu;
        // 0x266d90: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D94u;
        goto label_266d94;
    }
    ctx->pc = 0x266D8Cu;
    {
        const bool branch_taken_0x266d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D8Cu;
        // 0x266d90: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d8c) {
            ctx->pc = 0x266DD4u;
            goto label_266dd4;
        }
    }
    ctx->pc = 0x266D94u;
label_266d94:
    // 0x266d94: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x266d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_266d98:
    // 0x266d98: 0xc0974ee  jal         func_25D3B8
label_266d9c:
    if (ctx->pc == 0x266D9Cu) {
        ctx->pc = 0x266D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D98u;
        // 0x266d9c: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DA0u;
        goto label_266da0;
    }
    ctx->pc = 0x266D98u;
    SET_GPR_U32(ctx, 31, 0x266DA0u);
    ctx->pc = 0x266D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D98u;
    // 0x266d9c: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3B8u, 0x266D98u, 0x266DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DA0u;
label_266da0:
    // 0x266da0: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
label_266da4:
    if (ctx->pc == 0x266DA4u) {
        ctx->pc = 0x266DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DA0u;
        // 0x266da4: 0x8e420058  lw          $v0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DA8u;
        goto label_266da8;
    }
    ctx->pc = 0x266DA0u;
    {
        const bool branch_taken_0x266da0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x266da0) {
            ctx->pc = 0x266DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266DA0u;
            // 0x266da4: 0x8e420058  lw          $v0, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266DC8u;
            goto label_266dc8;
        }
    }
    ctx->pc = 0x266DA8u;
label_266da8:
    // 0x266da8: 0xc0972fa  jal         func_25CBE8
label_266dac:
    if (ctx->pc == 0x266DACu) {
        ctx->pc = 0x266DB0u;
        goto label_266db0;
    }
    ctx->pc = 0x266DA8u;
    SET_GPR_U32(ctx, 31, 0x266DB0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266DA8u, 0x266DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DB0u;
label_266db0:
    // 0x266db0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x266db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_266db4:
    // 0x266db4: 0x2f01804  sllv        $v1, $s0, $s7
    ctx->pc = 0x266db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 23) & 0x1F));
label_266db8:
    // 0x266db8: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x266db8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266dbc:
    // 0x266dbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x266dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_266dc0:
    // 0x266dc0: 0x10000074  b           . + 4 + (0x74 << 2)
label_266dc4:
    if (ctx->pc == 0x266DC4u) {
        ctx->pc = 0x266DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DC0u;
        // 0x266dc4: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DC8u;
        goto label_266dc8;
    }
    ctx->pc = 0x266DC0u;
    {
        const bool branch_taken_0x266dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DC0u;
        // 0x266dc4: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dc0) {
            ctx->pc = 0x266F94u;
            goto label_266f94;
        }
    }
    ctx->pc = 0x266DC8u;
label_266dc8:
    // 0x266dc8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x266dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_266dcc:
    // 0x266dcc: 0x8e470058  lw          $a3, 0x58($s2)
    ctx->pc = 0x266dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266dd0:
    // 0x266dd0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x266dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_266dd4:
    // 0x266dd4: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x266dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_266dd8:
    // 0x266dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x266dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266ddc:
    // 0x266ddc: 0xc09754a  jal         func_25D528
label_266de0:
    if (ctx->pc == 0x266DE0u) {
        ctx->pc = 0x266DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DDCu;
        // 0x266de0: 0x8fa600e8  lw          $a2, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DE4u;
        goto label_266de4;
    }
    ctx->pc = 0x266DDCu;
    SET_GPR_U32(ctx, 31, 0x266DE4u);
    ctx->pc = 0x266DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266DDCu;
    // 0x266de0: 0x8fa600e8  lw          $a2, 0xE8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D528u, 0x266DDCu, 0x266DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DE4u;
label_266de4:
    // 0x266de4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x266de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_266de8:
    // 0x266de8: 0x5043002e  beql        $v0, $v1, . + 4 + (0x2E << 2)
label_266dec:
    if (ctx->pc == 0x266DECu) {
        ctx->pc = 0x266DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DE8u;
        // 0x266dec: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DF0u;
        goto label_266df0;
    }
    ctx->pc = 0x266DE8u;
    {
        const bool branch_taken_0x266de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x266de8) {
            ctx->pc = 0x266DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266DE8u;
            // 0x266dec: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266EA4u;
            goto label_266ea4;
        }
    }
    ctx->pc = 0x266DF0u;
label_266df0:
    // 0x266df0: 0xc0972fa  jal         func_25CBE8
label_266df4:
    if (ctx->pc == 0x266DF4u) {
        ctx->pc = 0x266DF8u;
        goto label_266df8;
    }
    ctx->pc = 0x266DF0u;
    SET_GPR_U32(ctx, 31, 0x266DF8u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266DF0u, 0x266DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DF8u;
label_266df8:
    // 0x266df8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x266df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_266dfc:
    // 0x266dfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266e00:
    // 0x266e00: 0x2e31804  sllv        $v1, $v1, $s7
    ctx->pc = 0x266e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
label_266e04:
    // 0x266e04: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x266e04u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266e08:
    // 0x266e08: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x266e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_266e0c:
    // 0x266e0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266e10:
    // 0x266e10: 0x10000061  b           . + 4 + (0x61 << 2)
label_266e14:
    if (ctx->pc == 0x266E14u) {
        ctx->pc = 0x266E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E10u;
        // 0x266e14: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E18u;
        goto label_266e18;
    }
    ctx->pc = 0x266E10u;
    {
        const bool branch_taken_0x266e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E10u;
        // 0x266e14: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e10) {
            ctx->pc = 0x266F98u;
            goto label_266f98;
        }
    }
    ctx->pc = 0x266E18u;
label_266e18:
    // 0x266e18: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_266e1c:
    if (ctx->pc == 0x266E1Cu) {
        ctx->pc = 0x266E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E18u;
        // 0x266e1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E20u;
        goto label_266e20;
    }
    ctx->pc = 0x266E18u;
    {
        const bool branch_taken_0x266e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E18u;
        // 0x266e1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e18) {
            ctx->pc = 0x266E54u;
            goto label_266e54;
        }
    }
    ctx->pc = 0x266E20u;
label_266e20:
    // 0x266e20: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x266e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_266e24:
    // 0x266e24: 0xa3a200d1  sb          $v0, 0xD1($sp)
    ctx->pc = 0x266e24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 209), (uint8_t)GPR_U32(ctx, 2));
label_266e28:
    // 0x266e28: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x266e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_266e2c:
    // 0x266e2c: 0xa7a000d2  sh          $zero, 0xD2($sp)
    ctx->pc = 0x266e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 210), (uint16_t)GPR_U32(ctx, 0));
label_266e30:
    // 0x266e30: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x266e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_266e34:
    // 0x266e34: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x266e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266e38:
    // 0x266e38: 0xc0974ee  jal         func_25D3B8
label_266e3c:
    if (ctx->pc == 0x266E3Cu) {
        ctx->pc = 0x266E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E38u;
        // 0x266e3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E40u;
        goto label_266e40;
    }
    ctx->pc = 0x266E38u;
    SET_GPR_U32(ctx, 31, 0x266E40u);
    ctx->pc = 0x266E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E38u;
    // 0x266e3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3B8u, 0x266E38u, 0x266E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E40u;
label_266e40:
    // 0x266e40: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x266e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266e44:
    // 0x266e44: 0xc0972fa  jal         func_25CBE8
label_266e48:
    if (ctx->pc == 0x266E48u) {
        ctx->pc = 0x266E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E44u;
        // 0x266e48: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E4Cu;
        goto label_266e4c;
    }
    ctx->pc = 0x266E44u;
    SET_GPR_U32(ctx, 31, 0x266E4Cu);
    ctx->pc = 0x266E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E44u;
    // 0x266e48: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266E44u, 0x266E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E4Cu;
label_266e4c:
    // 0x266e4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x266e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_266e50:
    // 0x266e50: 0x8e470058  lw          $a3, 0x58($s2)
    ctx->pc = 0x266e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266e54:
    // 0x266e54: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x266e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_266e58:
    // 0x266e58: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x266e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_266e5c:
    // 0x266e5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x266e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266e60:
    // 0x266e60: 0x8fa90114  lw          $t1, 0x114($sp)
    ctx->pc = 0x266e60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_266e64:
    // 0x266e64: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x266e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_266e68:
    // 0x266e68: 0xc097576  jal         func_25D5D8
label_266e6c:
    if (ctx->pc == 0x266E6Cu) {
        ctx->pc = 0x266E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E68u;
        // 0x266e6c: 0x8fa800e0  lw          $t0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E70u;
        goto label_266e70;
    }
    ctx->pc = 0x266E68u;
    SET_GPR_U32(ctx, 31, 0x266E70u);
    ctx->pc = 0x266E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E68u;
    // 0x266e6c: 0x8fa800e0  lw          $t0, 0xE0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D5D8u, 0x266E68u, 0x266E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E70u;
label_266e70:
    // 0x266e70: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x266e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_266e74:
    // 0x266e74: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_266e78:
    if (ctx->pc == 0x266E78u) {
        ctx->pc = 0x266E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E74u;
        // 0x266e78: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E7Cu;
        goto label_266e7c;
    }
    ctx->pc = 0x266E74u;
    {
        const bool branch_taken_0x266e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x266e74) {
            ctx->pc = 0x266E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266E74u;
            // 0x266e78: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266EA4u;
            goto label_266ea4;
        }
    }
    ctx->pc = 0x266E7Cu;
label_266e7c:
    // 0x266e7c: 0xc0972fa  jal         func_25CBE8
label_266e80:
    if (ctx->pc == 0x266E80u) {
        ctx->pc = 0x266E84u;
        goto label_266e84;
    }
    ctx->pc = 0x266E7Cu;
    SET_GPR_U32(ctx, 31, 0x266E84u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266E7Cu, 0x266E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E84u;
label_266e84:
    // 0x266e84: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x266e84u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266e88:
    // 0x266e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266e8c:
    // 0x266e8c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x266e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_266e90:
    // 0x266e90: 0x2e31804  sllv        $v1, $v1, $s7
    ctx->pc = 0x266e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
label_266e94:
    // 0x266e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266e98:
    // 0x266e98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x266e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_266e9c:
    // 0x266e9c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_266ea0:
    if (ctx->pc == 0x266EA0u) {
        ctx->pc = 0x266EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E9Cu;
        // 0x266ea0: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EA4u;
        goto label_266ea4;
    }
    ctx->pc = 0x266E9Cu;
    {
        const bool branch_taken_0x266e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E9Cu;
        // 0x266ea0: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e9c) {
            ctx->pc = 0x266F98u;
            goto label_266f98;
        }
    }
    ctx->pc = 0x266EA4u;
label_266ea4:
    // 0x266ea4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x266ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_266ea8:
    // 0x266ea8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x266ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266eac:
    // 0x266eac: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x266eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_266eb0:
    // 0x266eb0: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
label_266eb4:
    if (ctx->pc == 0x266EB4u) {
        ctx->pc = 0x266EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EB0u;
        // 0x266eb4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EB8u;
        goto label_266eb8;
    }
    ctx->pc = 0x266EB0u;
    {
        const bool branch_taken_0x266eb0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x266EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EB0u;
        // 0x266eb4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266eb0) {
            ctx->pc = 0x266EC8u;
            goto label_266ec8;
        }
    }
    ctx->pc = 0x266EB8u;
label_266eb8:
    // 0x266eb8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x266eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_266ebc:
    // 0x266ebc: 0xc04818c  jal         func_120630
label_266ec0:
    if (ctx->pc == 0x266EC0u) {
        ctx->pc = 0x266EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EBCu;
        // 0x266ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EC4u;
        goto label_266ec4;
    }
    ctx->pc = 0x266EBCu;
    SET_GPR_U32(ctx, 31, 0x266EC4u);
    ctx->pc = 0x266EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266EBCu;
    // 0x266ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x266EBCu, 0x266EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266EC4u;
label_266ec4:
    // 0x266ec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266ec8:
    // 0x266ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266ecc:
    // 0x266ecc: 0x11102a  slt         $v0, $zero, $s1
    ctx->pc = 0x266eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_266ed0:
    // 0x266ed0: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x266ed0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_266ed4:
    // 0x266ed4: 0xc098ba8  jal         func_262EA0
label_266ed8:
    if (ctx->pc == 0x266ED8u) {
        ctx->pc = 0x266ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266ED4u;
        // 0x266ed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EDCu;
        goto label_266edc;
    }
    ctx->pc = 0x266ED4u;
    SET_GPR_U32(ctx, 31, 0x266EDCu);
    ctx->pc = 0x266ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266ED4u;
    // 0x266ed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262EA0u, 0x266ED4u, 0x266EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266EDCu;
label_266edc:
    // 0x266edc: 0x11a178  dsll        $s4, $s1, 5
    ctx->pc = 0x266edcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << 5);
label_266ee0:
    // 0x266ee0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x266ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266ee4:
    // 0x266ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266ee8:
    // 0x266ee8: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x266ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_266eec:
    // 0x266eec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266ef0:
    // 0x266ef0: 0xa7a30044  sh          $v1, 0x44($sp)
    ctx->pc = 0x266ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 3));
label_266ef4:
    // 0x266ef4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x266ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_266ef8:
    // 0x266ef8: 0x291302f  dsubu       $a2, $s4, $s1
    ctx->pc = 0x266ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) - GPR_U64(ctx, 17));
label_266efc:
    // 0x266efc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_266f00:
    // 0x266f00: 0x630b8  dsll        $a2, $a2, 2
    ctx->pc = 0x266f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 2);
label_266f04:
    // 0x266f04: 0xd1302d  daddu       $a2, $a2, $s1
    ctx->pc = 0x266f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 17));
label_266f08:
    // 0x266f08: 0x630fc  dsll32      $a2, $a2, 3
    ctx->pc = 0x266f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 3));
label_266f0c:
    // 0x266f0c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x266f0cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_266f10:
    // 0x266f10: 0xc097b12  jal         func_25EC48
label_266f14:
    if (ctx->pc == 0x266F14u) {
        ctx->pc = 0x266F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F10u;
        // 0x266f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F18u;
        goto label_266f18;
    }
    ctx->pc = 0x266F10u;
    SET_GPR_U32(ctx, 31, 0x266F18u);
    ctx->pc = 0x266F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F10u;
    // 0x266f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EC48u, 0x266F10u, 0x266F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F18u;
label_266f18:
    // 0x266f18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266f1c:
    // 0x266f1c: 0x600001a  bltz        $s0, . + 4 + (0x1A << 2)
label_266f20:
    if (ctx->pc == 0x266F20u) {
        ctx->pc = 0x266F24u;
        goto label_266f24;
    }
    ctx->pc = 0x266F1Cu;
    {
        const bool branch_taken_0x266f1c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x266f1c) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266F24u;
label_266f24:
    // 0x266f24: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_266f28:
    if (ctx->pc == 0x266F28u) {
        ctx->pc = 0x266F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F24u;
        // 0x266f28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F2Cu;
        goto label_266f2c;
    }
    ctx->pc = 0x266F24u;
    {
        const bool branch_taken_0x266f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x266F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F24u;
        // 0x266f28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f24) {
            ctx->pc = 0x266F40u;
            goto label_266f40;
        }
    }
    ctx->pc = 0x266F2Cu;
label_266f2c:
    // 0x266f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266f30:
    // 0x266f30: 0xc099ca2  jal         func_267288
label_266f34:
    if (ctx->pc == 0x266F34u) {
        ctx->pc = 0x266F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F30u;
        // 0x266f34: 0xafa50100  sw          $a1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F38u;
        goto label_266f38;
    }
    ctx->pc = 0x266F30u;
    SET_GPR_U32(ctx, 31, 0x266F38u);
    ctx->pc = 0x266F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F30u;
    // 0x266f34: 0xafa50100  sw          $a1, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x266F30u, 0x266F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F38u;
label_266f38:
    // 0x266f38: 0x1000009c  b           . + 4 + (0x9C << 2)
label_266f3c:
    if (ctx->pc == 0x266F3Cu) {
        ctx->pc = 0x266F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F38u;
        // 0x266f3c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F40u;
        goto label_266f40;
    }
    ctx->pc = 0x266F38u;
    {
        const bool branch_taken_0x266f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F38u;
        // 0x266f3c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f38) {
            ctx->pc = 0x2671ACu;
            goto label_2671ac;
        }
    }
    ctx->pc = 0x266F40u;
label_266f40:
    // 0x266f40: 0xc0972fa  jal         func_25CBE8
label_266f44:
    if (ctx->pc == 0x266F44u) {
        ctx->pc = 0x266F48u;
        goto label_266f48;
    }
    ctx->pc = 0x266F40u;
    SET_GPR_U32(ctx, 31, 0x266F48u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266F40u, 0x266F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F48u;
label_266f48:
    // 0x266f48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x266f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_266f4c:
    // 0x266f4c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x266f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_266f50:
    // 0x266f50: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x266f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_266f54:
    // 0x266f54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x266f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266f58:
    // 0x266f58: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x266f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266f5c:
    // 0x266f5c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x266f5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266f60:
    // 0x266f60: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x266f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_266f64:
    // 0x266f64: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x266f64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_266f68:
    // 0x266f68: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x266f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_266f6c:
    // 0x266f6c: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x266f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_266f70:
    // 0x266f70: 0xc097688  jal         func_25DA20
label_266f74:
    if (ctx->pc == 0x266F74u) {
        ctx->pc = 0x266F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F70u;
        // 0x266f74: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F78u;
        goto label_266f78;
    }
    ctx->pc = 0x266F70u;
    SET_GPR_U32(ctx, 31, 0x266F78u);
    ctx->pc = 0x266F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F70u;
    // 0x266f74: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA20u, 0x266F70u, 0x266F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F78u;
label_266f78:
    // 0x266f78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x266f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_266f7c:
    // 0x266f7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x266f7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_266f80:
    // 0x266f80: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
label_266f84:
    if (ctx->pc == 0x266F84u) {
        ctx->pc = 0x266F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F80u;
        // 0x266f84: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F88u;
        goto label_266f88;
    }
    ctx->pc = 0x266F80u;
    {
        const bool branch_taken_0x266f80 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x266F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F80u;
        // 0x266f84: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f80) {
            ctx->pc = 0x266FB4u;
            goto label_266fb4;
        }
    }
    ctx->pc = 0x266F88u;
label_266f88:
    // 0x266f88: 0xc0972fa  jal         func_25CBE8
label_266f8c:
    if (ctx->pc == 0x266F8Cu) {
        ctx->pc = 0x266F90u;
        goto label_266f90;
    }
    ctx->pc = 0x266F88u;
    SET_GPR_U32(ctx, 31, 0x266F90u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x266F88u, 0x266F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F90u;
label_266f90:
    // 0x266f90: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x266f90u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266f94:
    // 0x266f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266f98:
    // 0x266f98: 0xc099ca2  jal         func_267288
label_266f9c:
    if (ctx->pc == 0x266F9Cu) {
        ctx->pc = 0x266FA0u;
        goto label_266fa0;
    }
    ctx->pc = 0x266F98u;
    SET_GPR_U32(ctx, 31, 0x266FA0u);
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x266F98u, 0x266FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FA0u;
label_266fa0:
    // 0x266fa0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x266fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_266fa4:
    // 0x266fa4: 0x57c20081  bnel        $fp, $v0, . + 4 + (0x81 << 2)
label_266fa8:
    if (ctx->pc == 0x266FA8u) {
        ctx->pc = 0x266FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FA4u;
        // 0x266fa8: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FACu;
        goto label_266fac;
    }
    ctx->pc = 0x266FA4u;
    {
        const bool branch_taken_0x266fa4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x266fa4) {
            ctx->pc = 0x266FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266FA4u;
            // 0x266fa8: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2671ACu;
            goto label_2671ac;
        }
    }
    ctx->pc = 0x266FACu;
label_266fac:
    // 0x266fac: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_266fb0:
    if (ctx->pc == 0x266FB0u) {
        ctx->pc = 0x266FB4u;
        goto label_266fb4;
    }
    ctx->pc = 0x266FACu;
    {
        const bool branch_taken_0x266fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266fac) {
            ctx->pc = 0x267244u;
            goto label_267244;
        }
    }
    ctx->pc = 0x266FB4u;
label_266fb4:
    // 0x266fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266fb8:
    // 0x266fb8: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x266fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
label_266fbc:
    // 0x266fbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_266fc0:
    if (ctx->pc == 0x266FC0u) {
        ctx->pc = 0x266FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FBCu;
        // 0x266fc0: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FC4u;
        goto label_266fc4;
    }
    ctx->pc = 0x266FBCu;
    {
        const bool branch_taken_0x266fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FBCu;
        // 0x266fc0: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fbc) {
            ctx->pc = 0x266FDCu;
            goto label_266fdc;
        }
    }
    ctx->pc = 0x266FC4u;
label_266fc4:
    // 0x266fc4: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x266fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_266fc8:
    // 0x266fc8: 0x2e31004  sllv        $v0, $v1, $s7
    ctx->pc = 0x266fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
label_266fcc:
    // 0x266fcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266fd0:
    // 0x266fd0: 0x241e007a  addiu       $fp, $zero, 0x7A
    ctx->pc = 0x266fd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_266fd4:
    // 0x266fd4: 0x1000fe80  b           . + 4 + (-0x180 << 2)
label_266fd8:
    if (ctx->pc == 0x266FD8u) {
        ctx->pc = 0x266FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FD4u;
        // 0x266fd8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FDCu;
        goto label_266fdc;
    }
    ctx->pc = 0x266FD4u;
    {
        const bool branch_taken_0x266fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FD4u;
        // 0x266fd8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fd4) {
            ctx->pc = 0x2669D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2669d8;
        }
    }
    ctx->pc = 0x266FDCu;
label_266fdc:
    // 0x266fdc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x266fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_266fe0:
    // 0x266fe0: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x266fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_266fe4:
    // 0x266fe4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x266fe4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_266fe8:
    // 0x266fe8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x266fe8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_266fec:
    // 0x266fec: 0x1462ffc3  bne         $v1, $v0, . + 4 + (-0x3D << 2)
label_266ff0:
    if (ctx->pc == 0x266FF0u) {
        ctx->pc = 0x266FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FECu;
        // 0x266ff0: 0x291302f  dsubu       $a2, $s4, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FF4u;
        goto label_266ff4;
    }
    ctx->pc = 0x266FECu;
    {
        const bool branch_taken_0x266fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x266FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FECu;
        // 0x266ff0: 0x291302f  dsubu       $a2, $s4, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fec) {
            ctx->pc = 0x266EFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266efc;
        }
    }
    ctx->pc = 0x266FF4u;
label_266ff4:
    // 0x266ff4: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x266ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_266ff8:
    // 0x266ff8: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x266ff8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_266ffc:
    // 0x266ffc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x266ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_267000:
    // 0x267000: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_267004:
    if (ctx->pc == 0x267004u) {
        ctx->pc = 0x267004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267000u;
        // 0x267004: 0xdc620008  ld          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267008u;
        goto label_267008;
    }
    ctx->pc = 0x267000u;
    {
        const bool branch_taken_0x267000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267000) {
            ctx->pc = 0x267004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267000u;
            // 0x267004: 0xdc620008  ld          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267020u;
            goto label_267020;
        }
    }
    ctx->pc = 0x267008u;
label_267008:
    // 0x267008: 0xc0998d2  jal         func_266348
label_26700c:
    if (ctx->pc == 0x26700Cu) {
        ctx->pc = 0x26700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267008u;
        // 0x26700c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267010u;
        goto label_267010;
    }
    ctx->pc = 0x267008u;
    SET_GPR_U32(ctx, 31, 0x267010u);
    ctx->pc = 0x26700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267008u;
    // 0x26700c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266348u, 0x267008u, 0x267010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267010u;
label_267010:
    // 0x267010: 0x1040ffba  beqz        $v0, . + 4 + (-0x46 << 2)
label_267014:
    if (ctx->pc == 0x267014u) {
        ctx->pc = 0x267014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267010u;
        // 0x267014: 0x291302f  dsubu       $a2, $s4, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267018u;
        goto label_267018;
    }
    ctx->pc = 0x267010u;
    {
        const bool branch_taken_0x267010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267010u;
        // 0x267014: 0x291302f  dsubu       $a2, $s4, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267010) {
            ctx->pc = 0x266EFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266efc;
        }
    }
    ctx->pc = 0x267018u;
label_267018:
    // 0x267018: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x267018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_26701c:
    // 0x26701c: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x26701cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_267020:
    // 0x267020: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x267020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_267024:
    // 0x267024: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_267028:
    if (ctx->pc == 0x267028u) {
        ctx->pc = 0x267028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267024u;
        // 0x267028: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26702Cu;
        goto label_26702c;
    }
    ctx->pc = 0x267024u;
    {
        const bool branch_taken_0x267024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267024u;
        // 0x267028: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267024) {
            ctx->pc = 0x267050u;
            goto label_267050;
        }
    }
    ctx->pc = 0x26702Cu;
label_26702c:
    // 0x26702c: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x26702cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_267030:
    // 0x267030: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x267030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_267034:
    // 0x267034: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x267034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_267038:
    // 0x267038: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x267038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_26703c:
    // 0x26703c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x26703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_267040:
    // 0x267040: 0xc099956  jal         func_266558
label_267044:
    if (ctx->pc == 0x267044u) {
        ctx->pc = 0x267044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267040u;
        // 0x267044: 0xc23821  addu        $a3, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267048u;
        goto label_267048;
    }
    ctx->pc = 0x267040u;
    SET_GPR_U32(ctx, 31, 0x267048u);
    ctx->pc = 0x267044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267040u;
    // 0x267044: 0xc23821  addu        $a3, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266558u, 0x267040u, 0x267048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267048u;
label_267048:
    // 0x267048: 0x1040ffab  beqz        $v0, . + 4 + (-0x55 << 2)
label_26704c:
    if (ctx->pc == 0x26704Cu) {
        ctx->pc = 0x26704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267048u;
        // 0x26704c: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267050u;
        goto label_267050;
    }
    ctx->pc = 0x267048u;
    {
        const bool branch_taken_0x267048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267048u;
        // 0x26704c: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267048) {
            ctx->pc = 0x266EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266ef8;
        }
    }
    ctx->pc = 0x267050u;
label_267050:
    // 0x267050: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x267050u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_267054:
    // 0x267054: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x267054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267058:
    // 0x267058: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x267058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_26705c:
    // 0x26705c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_267060:
    if (ctx->pc == 0x267060u) {
        ctx->pc = 0x267060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26705Cu;
        // 0x267060: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267064u;
        goto label_267064;
    }
    ctx->pc = 0x26705Cu;
    {
        const bool branch_taken_0x26705c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x267060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26705Cu;
        // 0x267060: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26705c) {
            ctx->pc = 0x267074u;
            goto label_267074;
        }
    }
    ctx->pc = 0x267064u;
label_267064:
    // 0x267064: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_267068:
    if (ctx->pc == 0x267068u) {
        ctx->pc = 0x267068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267064u;
        // 0x267068: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26706Cu;
        goto label_26706c;
    }
    ctx->pc = 0x267064u;
    {
        const bool branch_taken_0x267064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267064u;
        // 0x267068: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267064) {
            ctx->pc = 0x267074u;
            goto label_267074;
        }
    }
    ctx->pc = 0x26706Cu;
label_26706c:
    // 0x26706c: 0x5482000e  bnel        $a0, $v0, . + 4 + (0xE << 2)
label_267070:
    if (ctx->pc == 0x267070u) {
        ctx->pc = 0x267070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26706Cu;
        // 0x267070: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267074u;
        goto label_267074;
    }
    ctx->pc = 0x26706Cu;
    {
        const bool branch_taken_0x26706c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26706c) {
            ctx->pc = 0x267070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26706Cu;
            // 0x267070: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2670A8u;
            goto label_2670a8;
        }
    }
    ctx->pc = 0x267074u;
label_267074:
    // 0x267074: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x267074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_267078:
    // 0x267078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26707c:
    // 0x26707c: 0x2e21004  sllv        $v0, $v0, $s7
    ctx->pc = 0x26707cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 23) & 0x1F));
label_267080:
    // 0x267080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267084:
    // 0x267084: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x267084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_267088:
    // 0x267088: 0xc099ca2  jal         func_267288
label_26708c:
    if (ctx->pc == 0x26708Cu) {
        ctx->pc = 0x26708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267088u;
        // 0x26708c: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267090u;
        goto label_267090;
    }
    ctx->pc = 0x267088u;
    SET_GPR_U32(ctx, 31, 0x267090u);
    ctx->pc = 0x26708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267088u;
    // 0x26708c: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x267088u, 0x267090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267090u;
label_267090:
    // 0x267090: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x267090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_267094:
    // 0x267094: 0xdc620038  ld          $v0, 0x38($v1)
    ctx->pc = 0x267094u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 56)));
label_267098:
    // 0x267098: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
label_26709c:
    if (ctx->pc == 0x26709Cu) {
        ctx->pc = 0x26709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267098u;
        // 0x26709c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670A0u;
        goto label_2670a0;
    }
    ctx->pc = 0x267098u;
    {
        const bool branch_taken_0x267098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267098) {
            ctx->pc = 0x26709Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267098u;
            // 0x26709c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2671B0u;
            goto label_2671b0;
        }
    }
    ctx->pc = 0x2670A0u;
label_2670a0:
    // 0x2670a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2670a4:
    if (ctx->pc == 0x2670A4u) {
        ctx->pc = 0x2670A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670A0u;
        // 0x2670a4: 0xdc620008  ld          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670A8u;
        goto label_2670a8;
    }
    ctx->pc = 0x2670A0u;
    {
        const bool branch_taken_0x2670a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670A0u;
        // 0x2670a4: 0xdc620008  ld          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670a0) {
            ctx->pc = 0x2670ACu;
            goto label_2670ac;
        }
    }
    ctx->pc = 0x2670A8u;
label_2670a8:
    // 0x2670a8: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x2670a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_2670ac:
    // 0x2670ac: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2670acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2670b0:
    // 0x2670b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2670b4:
    if (ctx->pc == 0x2670B4u) {
        ctx->pc = 0x2670B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670B0u;
        // 0x2670b4: 0x8fa4010c  lw          $a0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670B8u;
        goto label_2670b8;
    }
    ctx->pc = 0x2670B0u;
    {
        const bool branch_taken_0x2670b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2670B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670B0u;
        // 0x2670b4: 0x8fa4010c  lw          $a0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670b0) {
            ctx->pc = 0x2670F0u;
            goto label_2670f0;
        }
    }
    ctx->pc = 0x2670B8u;
label_2670b8:
    // 0x2670b8: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x2670b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2670bc:
    // 0x2670bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2670bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2670c0:
    // 0x2670c0: 0x21442  srl         $v0, $v0, 17
    ctx->pc = 0x2670c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 17));
label_2670c4:
    // 0x2670c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2670c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2670c8:
    // 0x2670c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2670cc:
    if (ctx->pc == 0x2670CCu) {
        ctx->pc = 0x2670CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670C8u;
        // 0x2670cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670D0u;
        goto label_2670d0;
    }
    ctx->pc = 0x2670C8u;
    {
        const bool branch_taken_0x2670c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670C8u;
        // 0x2670cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670c8) {
            ctx->pc = 0x2670ECu;
            goto label_2670ec;
        }
    }
    ctx->pc = 0x2670D0u;
label_2670d0:
    // 0x2670d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2670d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2670d4:
    // 0x2670d4: 0xc099ca2  jal         func_267288
label_2670d8:
    if (ctx->pc == 0x2670D8u) {
        ctx->pc = 0x2670D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670D4u;
        // 0x2670d8: 0xafa5010c  sw          $a1, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670DCu;
        goto label_2670dc;
    }
    ctx->pc = 0x2670D4u;
    SET_GPR_U32(ctx, 31, 0x2670DCu);
    ctx->pc = 0x2670D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670D4u;
    // 0x2670d8: 0xafa5010c  sw          $a1, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x2670D4u, 0x2670DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670DCu;
label_2670dc:
    // 0x2670dc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2670e0:
    // 0x2670e0: 0x2e21007  srav        $v0, $v0, $s7
    ctx->pc = 0x2670e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 23) & 0x1F));
label_2670e4:
    // 0x2670e4: 0x1000fde6  b           . + 4 + (-0x21A << 2)
label_2670e8:
    if (ctx->pc == 0x2670E8u) {
        ctx->pc = 0x2670E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670E4u;
        // 0x2670e8: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670ECu;
        goto label_2670ec;
    }
    ctx->pc = 0x2670E4u;
    {
        const bool branch_taken_0x2670e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670E4u;
        // 0x2670e8: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670e4) {
            ctx->pc = 0x266880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266880;
        }
    }
    ctx->pc = 0x2670ECu;
label_2670ec:
    // 0x2670ec: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x2670ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2670f0:
    // 0x2670f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2670f4:
    if (ctx->pc == 0x2670F4u) {
        ctx->pc = 0x2670F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670F0u;
        // 0x2670f4: 0xdc620008  ld          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670F8u;
        goto label_2670f8;
    }
    ctx->pc = 0x2670F0u;
    {
        const bool branch_taken_0x2670f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670F0u;
        // 0x2670f4: 0xdc620008  ld          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670f0) {
            ctx->pc = 0x267110u;
            goto label_267110;
        }
    }
    ctx->pc = 0x2670F8u;
label_2670f8:
    // 0x2670f8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2670f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2670fc:
    // 0x2670fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_267100:
    if (ctx->pc == 0x267100u) {
        ctx->pc = 0x267104u;
        goto label_267104;
    }
    ctx->pc = 0x2670FCu;
    {
        const bool branch_taken_0x2670fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2670fc) {
            ctx->pc = 0x26711Cu;
            goto label_26711c;
        }
    }
    ctx->pc = 0x267104u;
label_267104:
    // 0x267104: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
label_267108:
    if (ctx->pc == 0x267108u) {
        ctx->pc = 0x26710Cu;
        goto label_26710c;
    }
    ctx->pc = 0x267104u;
    {
        const bool branch_taken_0x267104 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x267104) {
            ctx->pc = 0x26711Cu;
            goto label_26711c;
        }
    }
    ctx->pc = 0x26710Cu;
label_26710c:
    // 0x26710c: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x26710cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_267110:
    // 0x267110: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x267110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_267114:
    // 0x267114: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_267118:
    if (ctx->pc == 0x267118u) {
        ctx->pc = 0x267118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267114u;
        // 0x267118: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26711Cu;
        goto label_26711c;
    }
    ctx->pc = 0x267114u;
    {
        const bool branch_taken_0x267114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267114u;
        // 0x267118: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267114) {
            ctx->pc = 0x267128u;
            goto label_267128;
        }
    }
    ctx->pc = 0x26711Cu;
label_26711c:
    // 0x26711c: 0xc099ca2  jal         func_267288
label_267120:
    if (ctx->pc == 0x267120u) {
        ctx->pc = 0x267120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26711Cu;
        // 0x267120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267124u;
        goto label_267124;
    }
    ctx->pc = 0x26711Cu;
    SET_GPR_U32(ctx, 31, 0x267124u);
    ctx->pc = 0x267120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26711Cu;
    // 0x267120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x26711Cu, 0x267124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267124u;
label_267124:
    // 0x267124: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x267124u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
label_267128:
    // 0x267128: 0x8e821a3c  lw          $v0, 0x1A3C($s4)
    ctx->pc = 0x267128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6716)));
label_26712c:
    // 0x26712c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_267130:
    if (ctx->pc == 0x267130u) {
        ctx->pc = 0x267130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26712Cu;
        // 0x267130: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267134u;
        goto label_267134;
    }
    ctx->pc = 0x26712Cu;
    {
        const bool branch_taken_0x26712c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26712Cu;
        // 0x267130: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26712c) {
            ctx->pc = 0x2671A4u;
            goto label_2671a4;
        }
    }
    ctx->pc = 0x267134u;
label_267134:
    // 0x267134: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x267134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267138:
    // 0x267138: 0x27b100ec  addiu       $s1, $sp, 0xEC
    ctx->pc = 0x267138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_26713c:
    // 0x26713c: 0x8e821a3c  lw          $v0, 0x1A3C($s4)
    ctx->pc = 0x26713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6716)));
label_267140:
    // 0x267140: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x267140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267144:
    // 0x267144: 0x8fa700f4  lw          $a3, 0xF4($sp)
    ctx->pc = 0x267144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_267148:
    // 0x267148: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x267148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_26714c:
    // 0x26714c: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x26714cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_267150:
    // 0x267150: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x267150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_267154:
    // 0x267154: 0x40f809  jalr        $v0
label_267158:
    if (ctx->pc == 0x267158u) {
        ctx->pc = 0x267158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267154u;
        // 0x267158: 0x8fa600e8  lw          $a2, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26715Cu;
        goto label_26715c;
    }
    ctx->pc = 0x267154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26715Cu);
        ctx->pc = 0x267158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267154u;
        // 0x267158: 0x8fa600e8  lw          $a2, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267154u, 0x26715Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26715Cu;
label_26715c:
    // 0x26715c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267160:
    // 0x267160: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x267160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_267164:
    // 0x267164: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_267168:
    if (ctx->pc == 0x267168u) {
        ctx->pc = 0x267168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267164u;
        // 0x267168: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26716Cu;
        goto label_26716c;
    }
    ctx->pc = 0x267164u;
    {
        const bool branch_taken_0x267164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267164u;
        // 0x267168: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267164) {
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x26716Cu;
label_26716c:
    // 0x26716c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26716cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_267170:
    // 0x267170: 0x24427830  addiu       $v0, $v0, 0x7830
    ctx->pc = 0x267170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30768));
label_267174:
    // 0x267174: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x267174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_267178:
    // 0x267178: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x267178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26717c:
    // 0x26717c: 0x600008  jr          $v1
label_267180:
    if (ctx->pc == 0x267180u) {
        ctx->pc = 0x267184u;
        goto label_267184;
    }
    ctx->pc = 0x26717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x266890u: goto label_266890;
            case 0x267184u: goto label_267184;
            case 0x26718Cu: goto label_26718c;
            case 0x267250u: goto label_267250;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26717Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x267184u;
label_267184:
    // 0x267184: 0x10000005  b           . + 4 + (0x5 << 2)
label_267188:
    if (ctx->pc == 0x267188u) {
        ctx->pc = 0x267188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267184u;
        // 0x267188: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26718Cu;
        goto label_26718c;
    }
    ctx->pc = 0x267184u;
    {
        const bool branch_taken_0x267184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267184u;
        // 0x267188: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267184) {
            ctx->pc = 0x26719Cu;
            goto label_26719c;
        }
    }
    ctx->pc = 0x26718Cu;
label_26718c:
    // 0x26718c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26718cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_267190:
    // 0x267190: 0x2a02002a  slti        $v0, $s0, 0x2A
    ctx->pc = 0x267190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)42) ? 1 : 0);
label_267194:
    // 0x267194: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_267198:
    if (ctx->pc == 0x267198u) {
        ctx->pc = 0x267198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267194u;
        // 0x267198: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26719Cu;
        goto label_26719c;
    }
    ctx->pc = 0x267194u;
    {
        const bool branch_taken_0x267194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267194u;
        // 0x267198: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267194) {
            ctx->pc = 0x267254u;
            goto label_267254;
        }
    }
    ctx->pc = 0x26719Cu;
label_26719c:
    // 0x26719c: 0x1260ffe8  beqz        $s3, . + 4 + (-0x18 << 2)
label_2671a0:
    if (ctx->pc == 0x2671A0u) {
        ctx->pc = 0x2671A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26719Cu;
        // 0x2671a0: 0x8e821a3c  lw          $v0, 0x1A3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6716)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2671A4u;
        goto label_2671a4;
    }
    ctx->pc = 0x26719Cu;
    {
        const bool branch_taken_0x26719c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2671A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26719Cu;
        // 0x2671a0: 0x8e821a3c  lw          $v0, 0x1A3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26719c) {
            ctx->pc = 0x267140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267140;
        }
    }
    ctx->pc = 0x2671A4u;
label_2671a4:
    // 0x2671a4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2671a8:
    if (ctx->pc == 0x2671A8u) {
        ctx->pc = 0x2671A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671A4u;
        // 0x2671a8: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2671ACu;
        goto label_2671ac;
    }
    ctx->pc = 0x2671A4u;
    {
        const bool branch_taken_0x2671a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2671A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671A4u;
        // 0x2671a8: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671a4) {
            ctx->pc = 0x267254u;
            goto label_267254;
        }
    }
    ctx->pc = 0x2671ACu;
label_2671ac:
    // 0x2671ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2671acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2671b0:
    // 0x2671b0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2671b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2671b4:
    // 0x2671b4: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2671b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2671b8:
    // 0x2671b8: 0x1440fd9d  bnez        $v0, . + 4 + (-0x263 << 2)
label_2671bc:
    if (ctx->pc == 0x2671BCu) {
        ctx->pc = 0x2671BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671B8u;
        // 0x2671bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2671C0u;
        goto label_2671c0;
    }
    ctx->pc = 0x2671B8u;
    {
        const bool branch_taken_0x2671b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2671BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671B8u;
        // 0x2671bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671b8) {
            ctx->pc = 0x266830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266830;
        }
    }
    ctx->pc = 0x2671C0u;
label_2671c0:
    // 0x2671c0: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2671c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2671c4:
    // 0x2671c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2671c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2671c8:
    // 0x2671c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2671c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2671cc:
    // 0x2671cc: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x2671ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
label_2671d0:
    // 0x2671d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2671d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2671d4:
    // 0x2671d4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2671d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2671d8:
    // 0x2671d8: 0x5440fd93  bnel        $v0, $zero, . + 4 + (-0x26D << 2)
label_2671dc:
    if (ctx->pc == 0x2671DCu) {
        ctx->pc = 0x2671DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671D8u;
        // 0x2671dc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2671E0u;
        goto label_2671e0;
    }
    ctx->pc = 0x2671D8u;
    {
        const bool branch_taken_0x2671d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2671d8) {
            ctx->pc = 0x2671DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2671D8u;
            // 0x2671dc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266828;
        }
    }
    ctx->pc = 0x2671E0u;
label_2671e0:
    // 0x2671e0: 0xc099ca2  jal         func_267288
label_2671e4:
    if (ctx->pc == 0x2671E4u) {
        ctx->pc = 0x2671E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671E0u;
        // 0x2671e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2671E8u;
        goto label_2671e8;
    }
    ctx->pc = 0x2671E0u;
    SET_GPR_U32(ctx, 31, 0x2671E8u);
    ctx->pc = 0x2671E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2671E0u;
    // 0x2671e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267288u, 0x2671E0u, 0x2671E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671E8u;
label_2671e8:
    // 0x2671e8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2671e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2671ec:
    // 0x2671ec: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2671f0:
    if (ctx->pc == 0x2671F0u) {
        ctx->pc = 0x2671F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671ECu;
        // 0x2671f0: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2671F4u;
        goto label_2671f4;
    }
    ctx->pc = 0x2671ECu;
    {
        const bool branch_taken_0x2671ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2671F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671ECu;
        // 0x2671f0: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671ec) {
            ctx->pc = 0x267244u;
            goto label_267244;
        }
    }
    ctx->pc = 0x2671F4u;
label_2671f4:
    // 0x2671f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2671f8:
    if (ctx->pc == 0x2671F8u) {
        ctx->pc = 0x2671FCu;
        goto label_2671fc;
    }
    ctx->pc = 0x2671F4u;
    {
        const bool branch_taken_0x2671f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2671f4) {
            ctx->pc = 0x267210u;
            goto label_267210;
        }
    }
    ctx->pc = 0x2671FCu;
label_2671fc:
    // 0x2671fc: 0xc0972fa  jal         func_25CBE8
label_267200:
    if (ctx->pc == 0x267200u) {
        ctx->pc = 0x267204u;
        goto label_267204;
    }
    ctx->pc = 0x2671FCu;
    SET_GPR_U32(ctx, 31, 0x267204u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2671FCu, 0x267204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267204u;
label_267204:
    // 0x267204: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x267204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_267208:
    // 0x267208: 0x10000011  b           . + 4 + (0x11 << 2)
label_26720c:
    if (ctx->pc == 0x26720Cu) {
        ctx->pc = 0x26720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267208u;
        // 0x26720c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267210u;
        goto label_267210;
    }
    ctx->pc = 0x267208u;
    {
        const bool branch_taken_0x267208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267208u;
        // 0x26720c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267208) {
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x267210u;
label_267210:
    // 0x267210: 0xc0972fa  jal         func_25CBE8
label_267214:
    if (ctx->pc == 0x267214u) {
        ctx->pc = 0x267218u;
        goto label_267218;
    }
    ctx->pc = 0x267210u;
    SET_GPR_U32(ctx, 31, 0x267218u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x267210u, 0x267218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267218u;
label_267218:
    // 0x267218: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x267218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_26721c:
    // 0x26721c: 0x1000000c  b           . + 4 + (0xC << 2)
label_267220:
    if (ctx->pc == 0x267220u) {
        ctx->pc = 0x267220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26721Cu;
        // 0x267220: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267224u;
        goto label_267224;
    }
    ctx->pc = 0x26721Cu;
    {
        const bool branch_taken_0x26721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26721Cu;
        // 0x267220: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26721c) {
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x267224u;
label_267224:
    // 0x267224: 0xc0972fa  jal         func_25CBE8
label_267228:
    if (ctx->pc == 0x267228u) {
        ctx->pc = 0x26722Cu;
        goto label_26722c;
    }
    ctx->pc = 0x267224u;
    SET_GPR_U32(ctx, 31, 0x26722Cu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x267224u, 0x26722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26722Cu;
label_26722c:
    // 0x26722c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x26722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_267230:
    // 0x267230: 0xc097308  jal         func_25CC20
label_267234:
    if (ctx->pc == 0x267234u) {
        ctx->pc = 0x267234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267230u;
        // 0x267234: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267238u;
        goto label_267238;
    }
    ctx->pc = 0x267230u;
    SET_GPR_U32(ctx, 31, 0x267238u);
    ctx->pc = 0x267234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267230u;
    // 0x267234: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x267230u, 0x267238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267238u;
label_267238:
    // 0x267238: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x267238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26723c:
    // 0x26723c: 0x10000004  b           . + 4 + (0x4 << 2)
label_267240:
    if (ctx->pc == 0x267240u) {
        ctx->pc = 0x267240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26723Cu;
        // 0x267240: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267244u;
        goto label_267244;
    }
    ctx->pc = 0x26723Cu;
    {
        const bool branch_taken_0x26723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26723Cu;
        // 0x267240: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26723c) {
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x267244u;
label_267244:
    // 0x267244: 0xc0972fa  jal         func_25CBE8
label_267248:
    if (ctx->pc == 0x267248u) {
        ctx->pc = 0x26724Cu;
        goto label_26724c;
    }
    ctx->pc = 0x267244u;
    SET_GPR_U32(ctx, 31, 0x26724Cu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x267244u, 0x26724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26724Cu;
label_26724c:
    // 0x26724c: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x26724cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_267250:
    // 0x267250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_267254:
    // 0x267254: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x267254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_267258:
    // 0x267258: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x267258u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_26725c:
    // 0x26725c: 0xdfb701a0  ld          $s7, 0x1A0($sp)
    ctx->pc = 0x26725cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_267260:
    // 0x267260: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x267260u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_267264:
    // 0x267264: 0xdfb50180  ld          $s5, 0x180($sp)
    ctx->pc = 0x267264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_267268:
    // 0x267268: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x267268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_26726c:
    // 0x26726c: 0xdfb30160  ld          $s3, 0x160($sp)
    ctx->pc = 0x26726cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_267270:
    // 0x267270: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x267270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_267274:
    // 0x267274: 0xdfb10140  ld          $s1, 0x140($sp)
    ctx->pc = 0x267274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_267278:
    // 0x267278: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x267278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_26727c:
    // 0x26727c: 0x3e00008  jr          $ra
label_267280:
    if (ctx->pc == 0x267280u) {
        ctx->pc = 0x267280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26727Cu;
        // 0x267280: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267284u;
        goto label_267284;
    }
    ctx->pc = 0x26727Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26727Cu;
        // 0x267280: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26727Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267284u;
label_267284:
    // 0x267284: 0x0  nop
    ctx->pc = 0x267284u;
    // NOP
}
