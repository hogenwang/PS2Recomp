#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00247750
// Address: 0x247750 - 0x247e88
void sub_00247750_0x247750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247750_0x247750");
#endif

    switch (ctx->pc) {
        case 0x247750u: goto label_247750;
        case 0x247754u: goto label_247754;
        case 0x247758u: goto label_247758;
        case 0x24775cu: goto label_24775c;
        case 0x247760u: goto label_247760;
        case 0x247764u: goto label_247764;
        case 0x247768u: goto label_247768;
        case 0x24776cu: goto label_24776c;
        case 0x247770u: goto label_247770;
        case 0x247774u: goto label_247774;
        case 0x247778u: goto label_247778;
        case 0x24777cu: goto label_24777c;
        case 0x247780u: goto label_247780;
        case 0x247784u: goto label_247784;
        case 0x247788u: goto label_247788;
        case 0x24778cu: goto label_24778c;
        case 0x247790u: goto label_247790;
        case 0x247794u: goto label_247794;
        case 0x247798u: goto label_247798;
        case 0x24779cu: goto label_24779c;
        case 0x2477a0u: goto label_2477a0;
        case 0x2477a4u: goto label_2477a4;
        case 0x2477a8u: goto label_2477a8;
        case 0x2477acu: goto label_2477ac;
        case 0x2477b0u: goto label_2477b0;
        case 0x2477b4u: goto label_2477b4;
        case 0x2477b8u: goto label_2477b8;
        case 0x2477bcu: goto label_2477bc;
        case 0x2477c0u: goto label_2477c0;
        case 0x2477c4u: goto label_2477c4;
        case 0x2477c8u: goto label_2477c8;
        case 0x2477ccu: goto label_2477cc;
        case 0x2477d0u: goto label_2477d0;
        case 0x2477d4u: goto label_2477d4;
        case 0x2477d8u: goto label_2477d8;
        case 0x2477dcu: goto label_2477dc;
        case 0x2477e0u: goto label_2477e0;
        case 0x2477e4u: goto label_2477e4;
        case 0x2477e8u: goto label_2477e8;
        case 0x2477ecu: goto label_2477ec;
        case 0x2477f0u: goto label_2477f0;
        case 0x2477f4u: goto label_2477f4;
        case 0x2477f8u: goto label_2477f8;
        case 0x2477fcu: goto label_2477fc;
        case 0x247800u: goto label_247800;
        case 0x247804u: goto label_247804;
        case 0x247808u: goto label_247808;
        case 0x24780cu: goto label_24780c;
        case 0x247810u: goto label_247810;
        case 0x247814u: goto label_247814;
        case 0x247818u: goto label_247818;
        case 0x24781cu: goto label_24781c;
        case 0x247820u: goto label_247820;
        case 0x247824u: goto label_247824;
        case 0x247828u: goto label_247828;
        case 0x24782cu: goto label_24782c;
        case 0x247830u: goto label_247830;
        case 0x247834u: goto label_247834;
        case 0x247838u: goto label_247838;
        case 0x24783cu: goto label_24783c;
        case 0x247840u: goto label_247840;
        case 0x247844u: goto label_247844;
        case 0x247848u: goto label_247848;
        case 0x24784cu: goto label_24784c;
        case 0x247850u: goto label_247850;
        case 0x247854u: goto label_247854;
        case 0x247858u: goto label_247858;
        case 0x24785cu: goto label_24785c;
        case 0x247860u: goto label_247860;
        case 0x247864u: goto label_247864;
        case 0x247868u: goto label_247868;
        case 0x24786cu: goto label_24786c;
        case 0x247870u: goto label_247870;
        case 0x247874u: goto label_247874;
        case 0x247878u: goto label_247878;
        case 0x24787cu: goto label_24787c;
        case 0x247880u: goto label_247880;
        case 0x247884u: goto label_247884;
        case 0x247888u: goto label_247888;
        case 0x24788cu: goto label_24788c;
        case 0x247890u: goto label_247890;
        case 0x247894u: goto label_247894;
        case 0x247898u: goto label_247898;
        case 0x24789cu: goto label_24789c;
        case 0x2478a0u: goto label_2478a0;
        case 0x2478a4u: goto label_2478a4;
        case 0x2478a8u: goto label_2478a8;
        case 0x2478acu: goto label_2478ac;
        case 0x2478b0u: goto label_2478b0;
        case 0x2478b4u: goto label_2478b4;
        case 0x2478b8u: goto label_2478b8;
        case 0x2478bcu: goto label_2478bc;
        case 0x2478c0u: goto label_2478c0;
        case 0x2478c4u: goto label_2478c4;
        case 0x2478c8u: goto label_2478c8;
        case 0x2478ccu: goto label_2478cc;
        case 0x2478d0u: goto label_2478d0;
        case 0x2478d4u: goto label_2478d4;
        case 0x2478d8u: goto label_2478d8;
        case 0x2478dcu: goto label_2478dc;
        case 0x2478e0u: goto label_2478e0;
        case 0x2478e4u: goto label_2478e4;
        case 0x2478e8u: goto label_2478e8;
        case 0x2478ecu: goto label_2478ec;
        case 0x2478f0u: goto label_2478f0;
        case 0x2478f4u: goto label_2478f4;
        case 0x2478f8u: goto label_2478f8;
        case 0x2478fcu: goto label_2478fc;
        case 0x247900u: goto label_247900;
        case 0x247904u: goto label_247904;
        case 0x247908u: goto label_247908;
        case 0x24790cu: goto label_24790c;
        case 0x247910u: goto label_247910;
        case 0x247914u: goto label_247914;
        case 0x247918u: goto label_247918;
        case 0x24791cu: goto label_24791c;
        case 0x247920u: goto label_247920;
        case 0x247924u: goto label_247924;
        case 0x247928u: goto label_247928;
        case 0x24792cu: goto label_24792c;
        case 0x247930u: goto label_247930;
        case 0x247934u: goto label_247934;
        case 0x247938u: goto label_247938;
        case 0x24793cu: goto label_24793c;
        case 0x247940u: goto label_247940;
        case 0x247944u: goto label_247944;
        case 0x247948u: goto label_247948;
        case 0x24794cu: goto label_24794c;
        case 0x247950u: goto label_247950;
        case 0x247954u: goto label_247954;
        case 0x247958u: goto label_247958;
        case 0x24795cu: goto label_24795c;
        case 0x247960u: goto label_247960;
        case 0x247964u: goto label_247964;
        case 0x247968u: goto label_247968;
        case 0x24796cu: goto label_24796c;
        case 0x247970u: goto label_247970;
        case 0x247974u: goto label_247974;
        case 0x247978u: goto label_247978;
        case 0x24797cu: goto label_24797c;
        case 0x247980u: goto label_247980;
        case 0x247984u: goto label_247984;
        case 0x247988u: goto label_247988;
        case 0x24798cu: goto label_24798c;
        case 0x247990u: goto label_247990;
        case 0x247994u: goto label_247994;
        case 0x247998u: goto label_247998;
        case 0x24799cu: goto label_24799c;
        case 0x2479a0u: goto label_2479a0;
        case 0x2479a4u: goto label_2479a4;
        case 0x2479a8u: goto label_2479a8;
        case 0x2479acu: goto label_2479ac;
        case 0x2479b0u: goto label_2479b0;
        case 0x2479b4u: goto label_2479b4;
        case 0x2479b8u: goto label_2479b8;
        case 0x2479bcu: goto label_2479bc;
        case 0x2479c0u: goto label_2479c0;
        case 0x2479c4u: goto label_2479c4;
        case 0x2479c8u: goto label_2479c8;
        case 0x2479ccu: goto label_2479cc;
        case 0x2479d0u: goto label_2479d0;
        case 0x2479d4u: goto label_2479d4;
        case 0x2479d8u: goto label_2479d8;
        case 0x2479dcu: goto label_2479dc;
        case 0x2479e0u: goto label_2479e0;
        case 0x2479e4u: goto label_2479e4;
        case 0x2479e8u: goto label_2479e8;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f0u: goto label_2479f0;
        case 0x2479f4u: goto label_2479f4;
        case 0x2479f8u: goto label_2479f8;
        case 0x2479fcu: goto label_2479fc;
        case 0x247a00u: goto label_247a00;
        case 0x247a04u: goto label_247a04;
        case 0x247a08u: goto label_247a08;
        case 0x247a0cu: goto label_247a0c;
        case 0x247a10u: goto label_247a10;
        case 0x247a14u: goto label_247a14;
        case 0x247a18u: goto label_247a18;
        case 0x247a1cu: goto label_247a1c;
        case 0x247a20u: goto label_247a20;
        case 0x247a24u: goto label_247a24;
        case 0x247a28u: goto label_247a28;
        case 0x247a2cu: goto label_247a2c;
        case 0x247a30u: goto label_247a30;
        case 0x247a34u: goto label_247a34;
        case 0x247a38u: goto label_247a38;
        case 0x247a3cu: goto label_247a3c;
        case 0x247a40u: goto label_247a40;
        case 0x247a44u: goto label_247a44;
        case 0x247a48u: goto label_247a48;
        case 0x247a4cu: goto label_247a4c;
        case 0x247a50u: goto label_247a50;
        case 0x247a54u: goto label_247a54;
        case 0x247a58u: goto label_247a58;
        case 0x247a5cu: goto label_247a5c;
        case 0x247a60u: goto label_247a60;
        case 0x247a64u: goto label_247a64;
        case 0x247a68u: goto label_247a68;
        case 0x247a6cu: goto label_247a6c;
        case 0x247a70u: goto label_247a70;
        case 0x247a74u: goto label_247a74;
        case 0x247a78u: goto label_247a78;
        case 0x247a7cu: goto label_247a7c;
        case 0x247a80u: goto label_247a80;
        case 0x247a84u: goto label_247a84;
        case 0x247a88u: goto label_247a88;
        case 0x247a8cu: goto label_247a8c;
        case 0x247a90u: goto label_247a90;
        case 0x247a94u: goto label_247a94;
        case 0x247a98u: goto label_247a98;
        case 0x247a9cu: goto label_247a9c;
        case 0x247aa0u: goto label_247aa0;
        case 0x247aa4u: goto label_247aa4;
        case 0x247aa8u: goto label_247aa8;
        case 0x247aacu: goto label_247aac;
        case 0x247ab0u: goto label_247ab0;
        case 0x247ab4u: goto label_247ab4;
        case 0x247ab8u: goto label_247ab8;
        case 0x247abcu: goto label_247abc;
        case 0x247ac0u: goto label_247ac0;
        case 0x247ac4u: goto label_247ac4;
        case 0x247ac8u: goto label_247ac8;
        case 0x247accu: goto label_247acc;
        case 0x247ad0u: goto label_247ad0;
        case 0x247ad4u: goto label_247ad4;
        case 0x247ad8u: goto label_247ad8;
        case 0x247adcu: goto label_247adc;
        case 0x247ae0u: goto label_247ae0;
        case 0x247ae4u: goto label_247ae4;
        case 0x247ae8u: goto label_247ae8;
        case 0x247aecu: goto label_247aec;
        case 0x247af0u: goto label_247af0;
        case 0x247af4u: goto label_247af4;
        case 0x247af8u: goto label_247af8;
        case 0x247afcu: goto label_247afc;
        case 0x247b00u: goto label_247b00;
        case 0x247b04u: goto label_247b04;
        case 0x247b08u: goto label_247b08;
        case 0x247b0cu: goto label_247b0c;
        case 0x247b10u: goto label_247b10;
        case 0x247b14u: goto label_247b14;
        case 0x247b18u: goto label_247b18;
        case 0x247b1cu: goto label_247b1c;
        case 0x247b20u: goto label_247b20;
        case 0x247b24u: goto label_247b24;
        case 0x247b28u: goto label_247b28;
        case 0x247b2cu: goto label_247b2c;
        case 0x247b30u: goto label_247b30;
        case 0x247b34u: goto label_247b34;
        case 0x247b38u: goto label_247b38;
        case 0x247b3cu: goto label_247b3c;
        case 0x247b40u: goto label_247b40;
        case 0x247b44u: goto label_247b44;
        case 0x247b48u: goto label_247b48;
        case 0x247b4cu: goto label_247b4c;
        case 0x247b50u: goto label_247b50;
        case 0x247b54u: goto label_247b54;
        case 0x247b58u: goto label_247b58;
        case 0x247b5cu: goto label_247b5c;
        case 0x247b60u: goto label_247b60;
        case 0x247b64u: goto label_247b64;
        case 0x247b68u: goto label_247b68;
        case 0x247b6cu: goto label_247b6c;
        case 0x247b70u: goto label_247b70;
        case 0x247b74u: goto label_247b74;
        case 0x247b78u: goto label_247b78;
        case 0x247b7cu: goto label_247b7c;
        case 0x247b80u: goto label_247b80;
        case 0x247b84u: goto label_247b84;
        case 0x247b88u: goto label_247b88;
        case 0x247b8cu: goto label_247b8c;
        case 0x247b90u: goto label_247b90;
        case 0x247b94u: goto label_247b94;
        case 0x247b98u: goto label_247b98;
        case 0x247b9cu: goto label_247b9c;
        case 0x247ba0u: goto label_247ba0;
        case 0x247ba4u: goto label_247ba4;
        case 0x247ba8u: goto label_247ba8;
        case 0x247bacu: goto label_247bac;
        case 0x247bb0u: goto label_247bb0;
        case 0x247bb4u: goto label_247bb4;
        case 0x247bb8u: goto label_247bb8;
        case 0x247bbcu: goto label_247bbc;
        case 0x247bc0u: goto label_247bc0;
        case 0x247bc4u: goto label_247bc4;
        case 0x247bc8u: goto label_247bc8;
        case 0x247bccu: goto label_247bcc;
        case 0x247bd0u: goto label_247bd0;
        case 0x247bd4u: goto label_247bd4;
        case 0x247bd8u: goto label_247bd8;
        case 0x247bdcu: goto label_247bdc;
        case 0x247be0u: goto label_247be0;
        case 0x247be4u: goto label_247be4;
        case 0x247be8u: goto label_247be8;
        case 0x247becu: goto label_247bec;
        case 0x247bf0u: goto label_247bf0;
        case 0x247bf4u: goto label_247bf4;
        case 0x247bf8u: goto label_247bf8;
        case 0x247bfcu: goto label_247bfc;
        case 0x247c00u: goto label_247c00;
        case 0x247c04u: goto label_247c04;
        case 0x247c08u: goto label_247c08;
        case 0x247c0cu: goto label_247c0c;
        case 0x247c10u: goto label_247c10;
        case 0x247c14u: goto label_247c14;
        case 0x247c18u: goto label_247c18;
        case 0x247c1cu: goto label_247c1c;
        case 0x247c20u: goto label_247c20;
        case 0x247c24u: goto label_247c24;
        case 0x247c28u: goto label_247c28;
        case 0x247c2cu: goto label_247c2c;
        case 0x247c30u: goto label_247c30;
        case 0x247c34u: goto label_247c34;
        case 0x247c38u: goto label_247c38;
        case 0x247c3cu: goto label_247c3c;
        case 0x247c40u: goto label_247c40;
        case 0x247c44u: goto label_247c44;
        case 0x247c48u: goto label_247c48;
        case 0x247c4cu: goto label_247c4c;
        case 0x247c50u: goto label_247c50;
        case 0x247c54u: goto label_247c54;
        case 0x247c58u: goto label_247c58;
        case 0x247c5cu: goto label_247c5c;
        case 0x247c60u: goto label_247c60;
        case 0x247c64u: goto label_247c64;
        case 0x247c68u: goto label_247c68;
        case 0x247c6cu: goto label_247c6c;
        case 0x247c70u: goto label_247c70;
        case 0x247c74u: goto label_247c74;
        case 0x247c78u: goto label_247c78;
        case 0x247c7cu: goto label_247c7c;
        case 0x247c80u: goto label_247c80;
        case 0x247c84u: goto label_247c84;
        case 0x247c88u: goto label_247c88;
        case 0x247c8cu: goto label_247c8c;
        case 0x247c90u: goto label_247c90;
        case 0x247c94u: goto label_247c94;
        case 0x247c98u: goto label_247c98;
        case 0x247c9cu: goto label_247c9c;
        case 0x247ca0u: goto label_247ca0;
        case 0x247ca4u: goto label_247ca4;
        case 0x247ca8u: goto label_247ca8;
        case 0x247cacu: goto label_247cac;
        case 0x247cb0u: goto label_247cb0;
        case 0x247cb4u: goto label_247cb4;
        case 0x247cb8u: goto label_247cb8;
        case 0x247cbcu: goto label_247cbc;
        case 0x247cc0u: goto label_247cc0;
        case 0x247cc4u: goto label_247cc4;
        case 0x247cc8u: goto label_247cc8;
        case 0x247cccu: goto label_247ccc;
        case 0x247cd0u: goto label_247cd0;
        case 0x247cd4u: goto label_247cd4;
        case 0x247cd8u: goto label_247cd8;
        case 0x247cdcu: goto label_247cdc;
        case 0x247ce0u: goto label_247ce0;
        case 0x247ce4u: goto label_247ce4;
        case 0x247ce8u: goto label_247ce8;
        case 0x247cecu: goto label_247cec;
        case 0x247cf0u: goto label_247cf0;
        case 0x247cf4u: goto label_247cf4;
        case 0x247cf8u: goto label_247cf8;
        case 0x247cfcu: goto label_247cfc;
        case 0x247d00u: goto label_247d00;
        case 0x247d04u: goto label_247d04;
        case 0x247d08u: goto label_247d08;
        case 0x247d0cu: goto label_247d0c;
        case 0x247d10u: goto label_247d10;
        case 0x247d14u: goto label_247d14;
        case 0x247d18u: goto label_247d18;
        case 0x247d1cu: goto label_247d1c;
        case 0x247d20u: goto label_247d20;
        case 0x247d24u: goto label_247d24;
        case 0x247d28u: goto label_247d28;
        case 0x247d2cu: goto label_247d2c;
        case 0x247d30u: goto label_247d30;
        case 0x247d34u: goto label_247d34;
        case 0x247d38u: goto label_247d38;
        case 0x247d3cu: goto label_247d3c;
        case 0x247d40u: goto label_247d40;
        case 0x247d44u: goto label_247d44;
        case 0x247d48u: goto label_247d48;
        case 0x247d4cu: goto label_247d4c;
        case 0x247d50u: goto label_247d50;
        case 0x247d54u: goto label_247d54;
        case 0x247d58u: goto label_247d58;
        case 0x247d5cu: goto label_247d5c;
        case 0x247d60u: goto label_247d60;
        case 0x247d64u: goto label_247d64;
        case 0x247d68u: goto label_247d68;
        case 0x247d6cu: goto label_247d6c;
        case 0x247d70u: goto label_247d70;
        case 0x247d74u: goto label_247d74;
        case 0x247d78u: goto label_247d78;
        case 0x247d7cu: goto label_247d7c;
        case 0x247d80u: goto label_247d80;
        case 0x247d84u: goto label_247d84;
        case 0x247d88u: goto label_247d88;
        case 0x247d8cu: goto label_247d8c;
        case 0x247d90u: goto label_247d90;
        case 0x247d94u: goto label_247d94;
        case 0x247d98u: goto label_247d98;
        case 0x247d9cu: goto label_247d9c;
        case 0x247da0u: goto label_247da0;
        case 0x247da4u: goto label_247da4;
        case 0x247da8u: goto label_247da8;
        case 0x247dacu: goto label_247dac;
        case 0x247db0u: goto label_247db0;
        case 0x247db4u: goto label_247db4;
        case 0x247db8u: goto label_247db8;
        case 0x247dbcu: goto label_247dbc;
        case 0x247dc0u: goto label_247dc0;
        case 0x247dc4u: goto label_247dc4;
        case 0x247dc8u: goto label_247dc8;
        case 0x247dccu: goto label_247dcc;
        case 0x247dd0u: goto label_247dd0;
        case 0x247dd4u: goto label_247dd4;
        case 0x247dd8u: goto label_247dd8;
        case 0x247ddcu: goto label_247ddc;
        case 0x247de0u: goto label_247de0;
        case 0x247de4u: goto label_247de4;
        case 0x247de8u: goto label_247de8;
        case 0x247decu: goto label_247dec;
        case 0x247df0u: goto label_247df0;
        case 0x247df4u: goto label_247df4;
        case 0x247df8u: goto label_247df8;
        case 0x247dfcu: goto label_247dfc;
        case 0x247e00u: goto label_247e00;
        case 0x247e04u: goto label_247e04;
        case 0x247e08u: goto label_247e08;
        case 0x247e0cu: goto label_247e0c;
        case 0x247e10u: goto label_247e10;
        case 0x247e14u: goto label_247e14;
        case 0x247e18u: goto label_247e18;
        case 0x247e1cu: goto label_247e1c;
        case 0x247e20u: goto label_247e20;
        case 0x247e24u: goto label_247e24;
        case 0x247e28u: goto label_247e28;
        case 0x247e2cu: goto label_247e2c;
        case 0x247e30u: goto label_247e30;
        case 0x247e34u: goto label_247e34;
        case 0x247e38u: goto label_247e38;
        case 0x247e3cu: goto label_247e3c;
        case 0x247e40u: goto label_247e40;
        case 0x247e44u: goto label_247e44;
        case 0x247e48u: goto label_247e48;
        case 0x247e4cu: goto label_247e4c;
        case 0x247e50u: goto label_247e50;
        case 0x247e54u: goto label_247e54;
        case 0x247e58u: goto label_247e58;
        case 0x247e5cu: goto label_247e5c;
        case 0x247e60u: goto label_247e60;
        case 0x247e64u: goto label_247e64;
        case 0x247e68u: goto label_247e68;
        case 0x247e6cu: goto label_247e6c;
        case 0x247e70u: goto label_247e70;
        case 0x247e74u: goto label_247e74;
        case 0x247e78u: goto label_247e78;
        case 0x247e7cu: goto label_247e7c;
        case 0x247e80u: goto label_247e80;
        case 0x247e84u: goto label_247e84;
        default: break;
    }

    ctx->pc = 0x247750u;

label_247750:
    // 0x247750: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x247750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_247754:
    // 0x247754: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x247754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
label_247758:
    // 0x247758: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x247758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_24775c:
    // 0x24775c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x24775cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247760:
    // 0x247760: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x247760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_247764:
    // 0x247764: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x247764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
label_247768:
    // 0x247768: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x247768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_24776c:
    // 0x24776c: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x24776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
label_247770:
    // 0x247770: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x247770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_247774:
    // 0x247774: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x247774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_247778:
    // 0x247778: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x247778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
label_24777c:
    // 0x24777c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x24777cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
label_247780:
    // 0x247780: 0x8fd30008  lw          $s3, 0x8($fp)
    ctx->pc = 0x247780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_247784:
    // 0x247784: 0x8fd70014  lw          $s7, 0x14($fp)
    ctx->pc = 0x247784u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_247788:
    // 0x247788: 0x92640007  lbu         $a0, 0x7($s3)
    ctx->pc = 0x247788u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_24778c:
    // 0x24778c: 0x92620006  lbu         $v0, 0x6($s3)
    ctx->pc = 0x24778cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_247790:
    // 0x247790: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x247790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_247794:
    // 0x247794: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x247794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_247798:
    // 0x247798: 0xc08b60c  jal         func_22D830
label_24779c:
    if (ctx->pc == 0x24779Cu) {
        ctx->pc = 0x24779Cu;
            // 0x24779c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2477A0u;
        goto label_2477a0;
    }
    ctx->pc = 0x247798u;
    SET_GPR_U32(ctx, 31, 0x2477A0u);
    ctx->pc = 0x24779Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247798u;
            // 0x24779c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477A0u; }
        if (ctx->pc != 0x2477A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477A0u; }
        if (ctx->pc != 0x2477A0u) { return; }
    }
    ctx->pc = 0x2477A0u;
label_2477a0:
    // 0x2477a0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2477a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2477a4:
    // 0x2477a4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2477a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2477a8:
    // 0x2477a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2477a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2477ac:
    // 0x2477ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2477acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2477b0:
    // 0x2477b0: 0x92640004  lbu         $a0, 0x4($s3)
    ctx->pc = 0x2477b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_2477b4:
    // 0x2477b4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2477b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2477b8:
    // 0x2477b8: 0xc08b4f8  jal         func_22D3E0
label_2477bc:
    if (ctx->pc == 0x2477BCu) {
        ctx->pc = 0x2477BCu;
            // 0x2477bc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->pc = 0x2477C0u;
        goto label_2477c0;
    }
    ctx->pc = 0x2477B8u;
    SET_GPR_U32(ctx, 31, 0x2477C0u);
    ctx->pc = 0x2477BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2477B8u;
            // 0x2477bc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477C0u; }
        if (ctx->pc != 0x2477C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477C0u; }
        if (ctx->pc != 0x2477C0u) { return; }
    }
    ctx->pc = 0x2477C0u;
label_2477c0:
    // 0x2477c0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2477c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2477c4:
    // 0x2477c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2477c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2477c8:
    // 0x2477c8: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2477c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_2477cc:
    // 0x2477cc: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x2477ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_2477d0:
    // 0x2477d0: 0x92640004  lbu         $a0, 0x4($s3)
    ctx->pc = 0x2477d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_2477d4:
    // 0x2477d4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2477d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2477d8:
    // 0x2477d8: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2477d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2477dc:
    // 0x2477dc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2477dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2477e0:
    // 0x2477e0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2477e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2477e4:
    // 0x2477e4: 0xc08b4f8  jal         func_22D3E0
label_2477e8:
    if (ctx->pc == 0x2477E8u) {
        ctx->pc = 0x2477E8u;
            // 0x2477e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2477ECu;
        goto label_2477ec;
    }
    ctx->pc = 0x2477E4u;
    SET_GPR_U32(ctx, 31, 0x2477ECu);
    ctx->pc = 0x2477E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2477E4u;
            // 0x2477e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477ECu; }
        if (ctx->pc != 0x2477ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477ECu; }
        if (ctx->pc != 0x2477ECu) { return; }
    }
    ctx->pc = 0x2477ECu;
label_2477ec:
    // 0x2477ec: 0xc08a254  jal         func_228950
label_2477f0:
    if (ctx->pc == 0x2477F0u) {
        ctx->pc = 0x2477F0u;
            // 0x2477f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2477F4u;
        goto label_2477f4;
    }
    ctx->pc = 0x2477ECu;
    SET_GPR_U32(ctx, 31, 0x2477F4u);
    ctx->pc = 0x2477F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2477ECu;
            // 0x2477f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477F4u; }
        if (ctx->pc != 0x2477F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477F4u; }
        if (ctx->pc != 0x2477F4u) { return; }
    }
    ctx->pc = 0x2477F4u;
label_2477f4:
    // 0x2477f4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2477f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2477f8:
    // 0x2477f8: 0x10c2013e  beq         $a2, $v0, . + 4 + (0x13E << 2)
label_2477fc:
    if (ctx->pc == 0x2477FCu) {
        ctx->pc = 0x2477FCu;
            // 0x2477fc: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x247800u;
        goto label_247800;
    }
    ctx->pc = 0x2477F8u;
    {
        const bool branch_taken_0x2477f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2477FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2477F8u;
            // 0x2477fc: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2477f8) {
            ctx->pc = 0x247CF4u;
            goto label_247cf4;
        }
    }
    ctx->pc = 0x247800u;
label_247800:
    // 0x247800: 0x10a2013c  beq         $a1, $v0, . + 4 + (0x13C << 2)
label_247804:
    if (ctx->pc == 0x247804u) {
        ctx->pc = 0x247804u;
            // 0x247804: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->pc = 0x247808u;
        goto label_247808;
    }
    ctx->pc = 0x247800u;
    {
        const bool branch_taken_0x247800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x247804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247800u;
            // 0x247804: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247800) {
            ctx->pc = 0x247CF4u;
            goto label_247cf4;
        }
    }
    ctx->pc = 0x247808u;
label_247808:
    // 0x247808: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x247808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_24780c:
    // 0x24780c: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x24780cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_247810:
    // 0x247810: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_247814:
    if (ctx->pc == 0x247814u) {
        ctx->pc = 0x247814u;
            // 0x247814: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x247818u;
        goto label_247818;
    }
    ctx->pc = 0x247810u;
    {
        const bool branch_taken_0x247810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247810) {
            ctx->pc = 0x247814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247810u;
            // 0x247814: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x247818u;
            goto label_247818;
        }
    }
    ctx->pc = 0x247818u;
label_247818:
    // 0x247818: 0x8ce41198  lw          $a0, 0x1198($a3)
    ctx->pc = 0x247818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4504)));
label_24781c:
    // 0x24781c: 0x1810  mfhi        $v1
    ctx->pc = 0x24781cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_247820:
    // 0x247820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x247820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_247824:
    // 0x247824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_247828:
    // 0x247828: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x247828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24782c:
    // 0x24782c: 0x0  nop
    ctx->pc = 0x24782cu;
    // NOP
label_247830:
    // 0x247830: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_247834:
    if (ctx->pc == 0x247834u) {
        ctx->pc = 0x247834u;
            // 0x247834: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->pc = 0x247838u;
        goto label_247838;
    }
    ctx->pc = 0x247830u;
    {
        const bool branch_taken_0x247830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247830u;
            // 0x247834: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247830) {
            ctx->pc = 0x2478B8u;
            goto label_2478b8;
        }
    }
    ctx->pc = 0x247838u;
label_247838:
    // 0x247838: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x247838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_24783c:
    // 0x24783c: 0x5446fffc  bnel        $v0, $a2, . + 4 + (-0x4 << 2)
label_247840:
    if (ctx->pc == 0x247840u) {
        ctx->pc = 0x247840u;
            // 0x247840: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->pc = 0x247844u;
        goto label_247844;
    }
    ctx->pc = 0x24783Cu;
    {
        const bool branch_taken_0x24783c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x24783c) {
            ctx->pc = 0x247840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24783Cu;
            // 0x247840: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x247830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247830;
        }
    }
    ctx->pc = 0x247844u;
label_247844:
    // 0x247844: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x247844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_247848:
    // 0x247848: 0x94820030  lhu         $v0, 0x30($a0)
    ctx->pc = 0x247848u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
label_24784c:
    // 0x24784c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_247850:
    // 0x247850: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
label_247854:
    if (ctx->pc == 0x247854u) {
        ctx->pc = 0x247854u;
            // 0x247854: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->pc = 0x247858u;
        goto label_247858;
    }
    ctx->pc = 0x247850u;
    {
        const bool branch_taken_0x247850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247850) {
            ctx->pc = 0x247854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247850u;
            // 0x247854: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x247830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247830;
        }
    }
    ctx->pc = 0x247858u;
label_247858:
    // 0x247858: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_24785c:
    if (ctx->pc == 0x24785Cu) {
        ctx->pc = 0x24785Cu;
            // 0x24785c: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->pc = 0x247860u;
        goto label_247860;
    }
    ctx->pc = 0x247858u;
    {
        const bool branch_taken_0x247858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247858u;
            // 0x24785c: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247858) {
            ctx->pc = 0x2478B8u;
            goto label_2478b8;
        }
    }
    ctx->pc = 0x247860u;
label_247860:
    // 0x247860: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x247860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_247864:
    // 0x247864: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_247868:
    if (ctx->pc == 0x247868u) {
        ctx->pc = 0x24786Cu;
        goto label_24786c;
    }
    ctx->pc = 0x247864u;
    {
        const bool branch_taken_0x247864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x247864) {
            ctx->pc = 0x2478A8u;
            goto label_2478a8;
        }
    }
    ctx->pc = 0x24786Cu;
label_24786c:
    // 0x24786c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24786cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247870:
    // 0x247870: 0x88620063  lwl         $v0, 0x63($v1)
    ctx->pc = 0x247870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_247874:
    // 0x247874: 0x98620060  lwr         $v0, 0x60($v1)
    ctx->pc = 0x247874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_247878:
    // 0x247878: 0xaba20043  swl         $v0, 0x43($sp)
    ctx->pc = 0x247878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24787c:
    // 0x24787c: 0xbba20040  swr         $v0, 0x40($sp)
    ctx->pc = 0x24787cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_247880:
    // 0x247880: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x247880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_247884:
    // 0x247884: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x247884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_247888:
    // 0x247888: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_24788c:
    if (ctx->pc == 0x24788Cu) {
        ctx->pc = 0x24788Cu;
            // 0x24788c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x247890u;
        goto label_247890;
    }
    ctx->pc = 0x247888u;
    {
        const bool branch_taken_0x247888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247888) {
            ctx->pc = 0x24788Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247888u;
            // 0x24788c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2478B4u;
            goto label_2478b4;
        }
    }
    ctx->pc = 0x247890u;
label_247890:
    // 0x247890: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x247890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_247894:
    // 0x247894: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
label_247898:
    if (ctx->pc == 0x247898u) {
        ctx->pc = 0x247898u;
            // 0x247898: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->pc = 0x24789Cu;
        goto label_24789c;
    }
    ctx->pc = 0x247894u;
    {
        const bool branch_taken_0x247894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x247894) {
            ctx->pc = 0x247898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247894u;
            // 0x247898: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x247888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247888;
        }
    }
    ctx->pc = 0x24789Cu;
label_24789c:
    // 0x24789c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2478a0:
    // 0x2478a0: 0x1445fff3  bne         $v0, $a1, . + 4 + (-0xD << 2)
label_2478a4:
    if (ctx->pc == 0x2478A4u) {
        ctx->pc = 0x2478A8u;
        goto label_2478a8;
    }
    ctx->pc = 0x2478A0u;
    {
        const bool branch_taken_0x2478a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2478a0) {
            ctx->pc = 0x247870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247870;
        }
    }
    ctx->pc = 0x2478A8u;
label_2478a8:
    // 0x2478a8: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
label_2478ac:
    if (ctx->pc == 0x2478ACu) {
        ctx->pc = 0x2478B0u;
        goto label_2478b0;
    }
    ctx->pc = 0x2478A8u;
    {
        const bool branch_taken_0x2478a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2478a8) {
            ctx->pc = 0x24799Cu;
            goto label_24799c;
        }
    }
    ctx->pc = 0x2478B0u;
label_2478b0:
    // 0x2478b0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2478b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2478b4:
    // 0x2478b4: 0x240201fd  addiu       $v0, $zero, 0x1FD
    ctx->pc = 0x2478b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_2478b8:
    // 0x2478b8: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2478b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_2478bc:
    // 0x2478bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2478c0:
    if (ctx->pc == 0x2478C0u) {
        ctx->pc = 0x2478C0u;
            // 0x2478c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2478C4u;
        goto label_2478c4;
    }
    ctx->pc = 0x2478BCu;
    {
        const bool branch_taken_0x2478bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2478bc) {
            ctx->pc = 0x2478C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2478BCu;
            // 0x2478c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2478C4u;
            goto label_2478c4;
        }
    }
    ctx->pc = 0x2478C4u;
label_2478c4:
    // 0x2478c4: 0x8ce41198  lw          $a0, 0x1198($a3)
    ctx->pc = 0x2478c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4504)));
label_2478c8:
    // 0x2478c8: 0x1810  mfhi        $v1
    ctx->pc = 0x2478c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2478cc:
    // 0x2478cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2478ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2478d0:
    // 0x2478d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2478d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2478d4:
    // 0x2478d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2478d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2478d8:
    // 0x2478d8: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
label_2478dc:
    if (ctx->pc == 0x2478DCu) {
        ctx->pc = 0x2478DCu;
            // 0x2478dc: 0x8ee5000c  lw          $a1, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->pc = 0x2478E0u;
        goto label_2478e0;
    }
    ctx->pc = 0x2478D8u;
    {
        const bool branch_taken_0x2478d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2478d8) {
            ctx->pc = 0x2478DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2478D8u;
            // 0x2478dc: 0x8ee5000c  lw          $a1, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24795Cu;
            goto label_24795c;
        }
    }
    ctx->pc = 0x2478E0u;
label_2478e0:
    // 0x2478e0: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2478e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2478e4:
    // 0x2478e4: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
label_2478e8:
    if (ctx->pc == 0x2478E8u) {
        ctx->pc = 0x2478E8u;
            // 0x2478e8: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->pc = 0x2478ECu;
        goto label_2478ec;
    }
    ctx->pc = 0x2478E4u;
    {
        const bool branch_taken_0x2478e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2478e4) {
            ctx->pc = 0x2478E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2478E4u;
            // 0x2478e8: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2478D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2478d8;
        }
    }
    ctx->pc = 0x2478ECu;
label_2478ec:
    // 0x2478ec: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2478ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2478f0:
    // 0x2478f0: 0x94820030  lhu         $v0, 0x30($a0)
    ctx->pc = 0x2478f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
label_2478f4:
    // 0x2478f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2478f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2478f8:
    // 0x2478f8: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
label_2478fc:
    if (ctx->pc == 0x2478FCu) {
        ctx->pc = 0x2478FCu;
            // 0x2478fc: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->pc = 0x247900u;
        goto label_247900;
    }
    ctx->pc = 0x2478F8u;
    {
        const bool branch_taken_0x2478f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2478f8) {
            ctx->pc = 0x2478FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2478F8u;
            // 0x2478fc: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2478D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2478d8;
        }
    }
    ctx->pc = 0x247900u;
label_247900:
    // 0x247900: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_247904:
    if (ctx->pc == 0x247904u) {
        ctx->pc = 0x247904u;
            // 0x247904: 0x8ee5000c  lw          $a1, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->pc = 0x247908u;
        goto label_247908;
    }
    ctx->pc = 0x247900u;
    {
        const bool branch_taken_0x247900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247900) {
            ctx->pc = 0x247904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247900u;
            // 0x247904: 0x8ee5000c  lw          $a1, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24795Cu;
            goto label_24795c;
        }
    }
    ctx->pc = 0x247908u;
label_247908:
    // 0x247908: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x247908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_24790c:
    // 0x24790c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_247910:
    if (ctx->pc == 0x247910u) {
        ctx->pc = 0x247914u;
        goto label_247914;
    }
    ctx->pc = 0x24790Cu;
    {
        const bool branch_taken_0x24790c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24790c) {
            ctx->pc = 0x247950u;
            goto label_247950;
        }
    }
    ctx->pc = 0x247914u;
label_247914:
    // 0x247914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x247914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247918:
    // 0x247918: 0x88620063  lwl         $v0, 0x63($v1)
    ctx->pc = 0x247918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_24791c:
    // 0x24791c: 0x98620060  lwr         $v0, 0x60($v1)
    ctx->pc = 0x24791cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_247920:
    // 0x247920: 0xaba20043  swl         $v0, 0x43($sp)
    ctx->pc = 0x247920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_247924:
    // 0x247924: 0xbba20040  swr         $v0, 0x40($sp)
    ctx->pc = 0x247924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_247928:
    // 0x247928: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x247928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_24792c:
    // 0x24792c: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x24792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_247930:
    // 0x247930: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_247934:
    if (ctx->pc == 0x247934u) {
        ctx->pc = 0x247934u;
            // 0x247934: 0x8ee5000c  lw          $a1, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->pc = 0x247938u;
        goto label_247938;
    }
    ctx->pc = 0x247930u;
    {
        const bool branch_taken_0x247930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247930) {
            ctx->pc = 0x247934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247930u;
            // 0x247934: 0x8ee5000c  lw          $a1, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24795Cu;
            goto label_24795c;
        }
    }
    ctx->pc = 0x247938u;
label_247938:
    // 0x247938: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x247938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_24793c:
    // 0x24793c: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
label_247940:
    if (ctx->pc == 0x247940u) {
        ctx->pc = 0x247940u;
            // 0x247940: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->pc = 0x247944u;
        goto label_247944;
    }
    ctx->pc = 0x24793Cu;
    {
        const bool branch_taken_0x24793c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x24793c) {
            ctx->pc = 0x247940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24793Cu;
            // 0x247940: 0x8c63004c  lw          $v1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x247930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247930;
        }
    }
    ctx->pc = 0x247944u;
label_247944:
    // 0x247944: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x247944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_247948:
    // 0x247948: 0x1445fff3  bne         $v0, $a1, . + 4 + (-0xD << 2)
label_24794c:
    if (ctx->pc == 0x24794Cu) {
        ctx->pc = 0x247950u;
        goto label_247950;
    }
    ctx->pc = 0x247948u;
    {
        const bool branch_taken_0x247948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x247948) {
            ctx->pc = 0x247918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247918;
        }
    }
    ctx->pc = 0x247950u;
label_247950:
    // 0x247950: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_247954:
    if (ctx->pc == 0x247954u) {
        ctx->pc = 0x247958u;
        goto label_247958;
    }
    ctx->pc = 0x247950u;
    {
        const bool branch_taken_0x247950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247950) {
            ctx->pc = 0x24799Cu;
            goto label_24799c;
        }
    }
    ctx->pc = 0x247958u;
label_247958:
    // 0x247958: 0x8ee5000c  lw          $a1, 0xC($s7)
    ctx->pc = 0x247958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_24795c:
    // 0x24795c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_247960:
    if (ctx->pc == 0x247960u) {
        ctx->pc = 0x247960u;
            // 0x247960: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x247964u;
        goto label_247964;
    }
    ctx->pc = 0x24795Cu;
    {
        const bool branch_taken_0x24795c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x247960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24795Cu;
            // 0x247960: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24795c) {
            ctx->pc = 0x247990u;
            goto label_247990;
        }
    }
    ctx->pc = 0x247964u;
label_247964:
    // 0x247964: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x247964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_247968:
    // 0x247968: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x247968u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_24796c:
    // 0x24796c: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_247970:
    if (ctx->pc == 0x247970u) {
        ctx->pc = 0x247970u;
            // 0x247970: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247974u;
        goto label_247974;
    }
    ctx->pc = 0x24796Cu;
    {
        const bool branch_taken_0x24796c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x247970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24796Cu;
            // 0x247970: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24796c) {
            ctx->pc = 0x247994u;
            goto label_247994;
        }
    }
    ctx->pc = 0x247974u;
label_247974:
    // 0x247974: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x247974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_247978:
    // 0x247978: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_24797c:
    if (ctx->pc == 0x24797Cu) {
        ctx->pc = 0x24797Cu;
            // 0x24797c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247980u;
        goto label_247980;
    }
    ctx->pc = 0x247978u;
    {
        const bool branch_taken_0x247978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247978u;
            // 0x24797c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247978) {
            ctx->pc = 0x247994u;
            goto label_247994;
        }
    }
    ctx->pc = 0x247980u;
label_247980:
    // 0x247980: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x247980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_247984:
    // 0x247984: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x247984u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_247988:
    // 0x247988: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_24798c:
    if (ctx->pc == 0x24798Cu) {
        ctx->pc = 0x24798Cu;
            // 0x24798c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->pc = 0x247990u;
        goto label_247990;
    }
    ctx->pc = 0x247988u;
    {
        const bool branch_taken_0x247988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x247988) {
            ctx->pc = 0x24798Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247988u;
            // 0x24798c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x247978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247978;
        }
    }
    ctx->pc = 0x247990u;
label_247990:
    // 0x247990: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x247990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247994:
    // 0x247994: 0x106000d7  beqz        $v1, . + 4 + (0xD7 << 2)
label_247998:
    if (ctx->pc == 0x247998u) {
        ctx->pc = 0x24799Cu;
        goto label_24799c;
    }
    ctx->pc = 0x247994u;
    {
        const bool branch_taken_0x247994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247994) {
            ctx->pc = 0x247CF4u;
            goto label_247cf4;
        }
    }
    ctx->pc = 0x24799Cu;
label_24799c:
    // 0x24799c: 0x88680063  lwl         $t0, 0x63($v1)
    ctx->pc = 0x24799cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_2479a0:
    // 0x2479a0: 0x98680060  lwr         $t0, 0x60($v1)
    ctx->pc = 0x2479a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_2479a4:
    // 0x2479a4: 0xaba80033  swl         $t0, 0x33($sp)
    ctx->pc = 0x2479a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2479a8:
    // 0x2479a8: 0xbba80030  swr         $t0, 0x30($sp)
    ctx->pc = 0x2479a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2479ac:
    // 0x2479ac: 0x26760008  addiu       $s6, $s3, 0x8
    ctx->pc = 0x2479acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2479b0:
    // 0x2479b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2479b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2479b4:
    // 0x2479b4: 0x8ee200f0  lw          $v0, 0xF0($s7)
    ctx->pc = 0x2479b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
label_2479b8:
    // 0x2479b8: 0x92e60039  lbu         $a2, 0x39($s7)
    ctx->pc = 0x2479b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 57)));
label_2479bc:
    // 0x2479bc: 0x90450005  lbu         $a1, 0x5($v0)
    ctx->pc = 0x2479bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_2479c0:
    // 0x2479c0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2479c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2479c4:
    // 0x2479c4: 0xc048c5e  jal         func_123178
label_2479c8:
    if (ctx->pc == 0x2479C8u) {
        ctx->pc = 0x2479C8u;
            // 0x2479c8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x2479CCu;
        goto label_2479cc;
    }
    ctx->pc = 0x2479C4u;
    SET_GPR_U32(ctx, 31, 0x2479CCu);
    ctx->pc = 0x2479C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2479C4u;
            // 0x2479c8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479CCu; }
        if (ctx->pc != 0x2479CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479CCu; }
        if (ctx->pc != 0x2479CCu) { return; }
    }
    ctx->pc = 0x2479CCu;
label_2479cc:
    // 0x2479cc: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_2479d0:
    if (ctx->pc == 0x2479D0u) {
        ctx->pc = 0x2479D0u;
            // 0x2479d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2479D4u;
        goto label_2479d4;
    }
    ctx->pc = 0x2479CCu;
    {
        const bool branch_taken_0x2479cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2479D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2479CCu;
            // 0x2479d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479cc) {
            ctx->pc = 0x247CF4u;
            goto label_247cf4;
        }
    }
    ctx->pc = 0x2479D4u;
label_2479d4:
    // 0x2479d4: 0x8ee500f4  lw          $a1, 0xF4($s7)
    ctx->pc = 0x2479d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
label_2479d8:
    // 0x2479d8: 0xc048c5e  jal         func_123178
label_2479dc:
    if (ctx->pc == 0x2479DCu) {
        ctx->pc = 0x2479DCu;
            // 0x2479dc: 0x92e60039  lbu         $a2, 0x39($s7) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 57)));
        ctx->pc = 0x2479E0u;
        goto label_2479e0;
    }
    ctx->pc = 0x2479D8u;
    SET_GPR_U32(ctx, 31, 0x2479E0u);
    ctx->pc = 0x2479DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2479D8u;
            // 0x2479dc: 0x92e60039  lbu         $a2, 0x39($s7) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 57)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479E0u; }
        if (ctx->pc != 0x2479E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479E0u; }
        if (ctx->pc != 0x2479E0u) { return; }
    }
    ctx->pc = 0x2479E0u;
label_2479e0:
    // 0x2479e0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2479e4:
    if (ctx->pc == 0x2479E4u) {
        ctx->pc = 0x2479E4u;
            // 0x2479e4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2479E8u;
        goto label_2479e8;
    }
    ctx->pc = 0x2479E0u;
    {
        const bool branch_taken_0x2479e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2479E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2479E0u;
            // 0x2479e4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479e0) {
            ctx->pc = 0x247A24u;
            goto label_247a24;
        }
    }
    ctx->pc = 0x2479E8u;
label_2479e8:
    // 0x2479e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2479e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2479ec:
    // 0x2479ec: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x2479ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_2479f0:
    // 0x2479f0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2479f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2479f4:
    // 0x2479f4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2479f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2479f8:
    // 0x2479f8: 0x261068a0  addiu       $s0, $s0, 0x68A0
    ctx->pc = 0x2479f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26784));
label_2479fc:
    // 0x2479fc: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x2479fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_247a00:
    // 0x247a00: 0xc092576  jal         func_2495D8
label_247a04:
    if (ctx->pc == 0x247A04u) {
        ctx->pc = 0x247A04u;
            // 0x247a04: 0x26f10014  addiu       $s1, $s7, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
        ctx->pc = 0x247A08u;
        goto label_247a08;
    }
    ctx->pc = 0x247A00u;
    SET_GPR_U32(ctx, 31, 0x247A08u);
    ctx->pc = 0x247A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247A00u;
            // 0x247a04: 0x26f10014  addiu       $s1, $s7, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2495D8u;
    if (runtime->hasFunction(0x2495D8u)) {
        auto targetFn = runtime->lookupFunction(0x2495D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A08u; }
        if (ctx->pc != 0x247A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002495D8_0x2495d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A08u; }
        if (ctx->pc != 0x247A08u) { return; }
    }
    ctx->pc = 0x247A08u;
label_247a08:
    // 0x247a08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247a0c:
    // 0x247a0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247a10:
    // 0x247a10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x247a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247a14:
    // 0x247a14: 0xc08b5ac  jal         func_22D6B0
label_247a18:
    if (ctx->pc == 0x247A18u) {
        ctx->pc = 0x247A18u;
            // 0x247a18: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x247A1Cu;
        goto label_247a1c;
    }
    ctx->pc = 0x247A14u;
    SET_GPR_U32(ctx, 31, 0x247A1Cu);
    ctx->pc = 0x247A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247A14u;
            // 0x247a18: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A1Cu; }
        if (ctx->pc != 0x247A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A1Cu; }
        if (ctx->pc != 0x247A1Cu) { return; }
    }
    ctx->pc = 0x247A1Cu;
label_247a1c:
    // 0x247a1c: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_247a20:
    if (ctx->pc == 0x247A20u) {
        ctx->pc = 0x247A24u;
        goto label_247a24;
    }
    ctx->pc = 0x247A1Cu;
    {
        const bool branch_taken_0x247a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247a1c) {
            ctx->pc = 0x247CF4u;
            goto label_247cf4;
        }
    }
    ctx->pc = 0x247A24u;
label_247a24:
    // 0x247a24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x247a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_247a28:
    // 0x247a28: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_247a2c:
    if (ctx->pc == 0x247A2Cu) {
        ctx->pc = 0x247A2Cu;
            // 0x247a2c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x247A30u;
        goto label_247a30;
    }
    ctx->pc = 0x247A28u;
    {
        const bool branch_taken_0x247a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x247A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247A28u;
            // 0x247a2c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a28) {
            ctx->pc = 0x247A88u;
            goto label_247a88;
        }
    }
    ctx->pc = 0x247A30u;
label_247a30:
    // 0x247a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_247a34:
    // 0x247a34: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x247a34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_247a38:
    // 0x247a38: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x247a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_247a3c:
    // 0x247a3c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x247a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_247a40:
    // 0x247a40: 0x261068d8  addiu       $s0, $s0, 0x68D8
    ctx->pc = 0x247a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26840));
label_247a44:
    // 0x247a44: 0xc092576  jal         func_2495D8
label_247a48:
    if (ctx->pc == 0x247A48u) {
        ctx->pc = 0x247A48u;
            // 0x247a48: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->pc = 0x247A4Cu;
        goto label_247a4c;
    }
    ctx->pc = 0x247A44u;
    SET_GPR_U32(ctx, 31, 0x247A4Cu);
    ctx->pc = 0x247A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247A44u;
            // 0x247a48: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2495D8u;
    if (runtime->hasFunction(0x2495D8u)) {
        auto targetFn = runtime->lookupFunction(0x2495D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A4Cu; }
        if (ctx->pc != 0x247A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002495D8_0x2495d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A4Cu; }
        if (ctx->pc != 0x247A4Cu) { return; }
    }
    ctx->pc = 0x247A4Cu;
label_247a4c:
    // 0x247a4c: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x247a4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247a50:
    // 0x247a50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247a54:
    // 0x247a54: 0xc091b26  jal         func_246C98
label_247a58:
    if (ctx->pc == 0x247A58u) {
        ctx->pc = 0x247A58u;
            // 0x247a58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247A5Cu;
        goto label_247a5c;
    }
    ctx->pc = 0x247A54u;
    SET_GPR_U32(ctx, 31, 0x247A5Cu);
    ctx->pc = 0x247A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247A54u;
            // 0x247a58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x246C98u;
    if (runtime->hasFunction(0x246C98u)) {
        auto targetFn = runtime->lookupFunction(0x246C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A5Cu; }
        if (ctx->pc != 0x247A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00246C98_0x246c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A5Cu; }
        if (ctx->pc != 0x247A5Cu) { return; }
    }
    ctx->pc = 0x247A5Cu;
label_247a5c:
    // 0x247a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247a60:
    // 0x247a60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247a64:
    // 0x247a64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x247a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247a68:
    // 0x247a68: 0xc08b5ac  jal         func_22D6B0
label_247a6c:
    if (ctx->pc == 0x247A6Cu) {
        ctx->pc = 0x247A6Cu;
            // 0x247a6c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x247A70u;
        goto label_247a70;
    }
    ctx->pc = 0x247A68u;
    SET_GPR_U32(ctx, 31, 0x247A70u);
    ctx->pc = 0x247A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247A68u;
            // 0x247a6c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A70u; }
        if (ctx->pc != 0x247A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A70u; }
        if (ctx->pc != 0x247A70u) { return; }
    }
    ctx->pc = 0x247A70u;
label_247a70:
    // 0x247a70: 0x8ba60033  lwl         $a2, 0x33($sp)
    ctx->pc = 0x247a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_247a74:
    // 0x247a74: 0x9ba60030  lwr         $a2, 0x30($sp)
    ctx->pc = 0x247a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_247a78:
    // 0x247a78: 0xaba60023  swl         $a2, 0x23($sp)
    ctx->pc = 0x247a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_247a7c:
    // 0x247a7c: 0xbba60020  swr         $a2, 0x20($sp)
    ctx->pc = 0x247a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_247a80:
    // 0x247a80: 0x10000099  b           . + 4 + (0x99 << 2)
label_247a84:
    if (ctx->pc == 0x247A84u) {
        ctx->pc = 0x247A84u;
            // 0x247a84: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x247A88u;
        goto label_247a88;
    }
    ctx->pc = 0x247A80u;
    {
        const bool branch_taken_0x247a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247A80u;
            // 0x247a84: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a80) {
            ctx->pc = 0x247CE8u;
            goto label_247ce8;
        }
    }
    ctx->pc = 0x247A88u;
label_247a88:
    // 0x247a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247a8c:
    // 0x247a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247a90:
    // 0x247a90: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x247a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_247a94:
    // 0x247a94: 0xc091fcc  jal         func_247F30
label_247a98:
    if (ctx->pc == 0x247A98u) {
        ctx->pc = 0x247A98u;
            // 0x247a98: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x247A9Cu;
        goto label_247a9c;
    }
    ctx->pc = 0x247A94u;
    SET_GPR_U32(ctx, 31, 0x247A9Cu);
    ctx->pc = 0x247A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247A94u;
            // 0x247a98: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x247F30u;
    if (runtime->hasFunction(0x247F30u)) {
        auto targetFn = runtime->lookupFunction(0x247F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A9Cu; }
        if (ctx->pc != 0x247A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247F30_0x247f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A9Cu; }
        if (ctx->pc != 0x247A9Cu) { return; }
    }
    ctx->pc = 0x247A9Cu;
label_247a9c:
    // 0x247a9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x247a9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247aa0:
    // 0x247aa0: 0x12a00091  beqz        $s5, . + 4 + (0x91 << 2)
label_247aa4:
    if (ctx->pc == 0x247AA4u) {
        ctx->pc = 0x247AA4u;
            // 0x247aa4: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x247AA8u;
        goto label_247aa8;
    }
    ctx->pc = 0x247AA0u;
    {
        const bool branch_taken_0x247aa0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x247AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247AA0u;
            // 0x247aa4: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247aa0) {
            ctx->pc = 0x247CE8u;
            goto label_247ce8;
        }
    }
    ctx->pc = 0x247AA8u;
label_247aa8:
    // 0x247aa8: 0x8eb40008  lw          $s4, 0x8($s5)
    ctx->pc = 0x247aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_247aac:
    // 0x247aac: 0x1280008f  beqz        $s4, . + 4 + (0x8F << 2)
label_247ab0:
    if (ctx->pc == 0x247AB0u) {
        ctx->pc = 0x247AB0u;
            // 0x247ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x247AB4u;
        goto label_247ab4;
    }
    ctx->pc = 0x247AACu;
    {
        const bool branch_taken_0x247aac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x247AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247AACu;
            // 0x247ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247aac) {
            ctx->pc = 0x247CECu;
            goto label_247cec;
        }
    }
    ctx->pc = 0x247AB4u;
label_247ab4:
    // 0x247ab4: 0x8e920030  lw          $s2, 0x30($s4)
    ctx->pc = 0x247ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_247ab8:
    // 0x247ab8: 0x1240008c  beqz        $s2, . + 4 + (0x8C << 2)
label_247abc:
    if (ctx->pc == 0x247ABCu) {
        ctx->pc = 0x247AC0u;
        goto label_247ac0;
    }
    ctx->pc = 0x247AB8u;
    {
        const bool branch_taken_0x247ab8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x247ab8) {
            ctx->pc = 0x247CECu;
            goto label_247cec;
        }
    }
    ctx->pc = 0x247AC0u;
label_247ac0:
    // 0x247ac0: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x247ac0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_247ac4:
    // 0x247ac4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_247ac8:
    if (ctx->pc == 0x247AC8u) {
        ctx->pc = 0x247AC8u;
            // 0x247ac8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247ACCu;
        goto label_247acc;
    }
    ctx->pc = 0x247AC4u;
    {
        const bool branch_taken_0x247ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247AC4u;
            // 0x247ac8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ac4) {
            ctx->pc = 0x247C20u;
            goto label_247c20;
        }
    }
    ctx->pc = 0x247ACCu;
label_247acc:
    // 0x247acc: 0x92450005  lbu         $a1, 0x5($s2)
    ctx->pc = 0x247accu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_247ad0:
    // 0x247ad0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x247ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_247ad4:
    // 0x247ad4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x247ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_247ad8:
    // 0x247ad8: 0xc048c5e  jal         func_123178
label_247adc:
    if (ctx->pc == 0x247ADCu) {
        ctx->pc = 0x247ADCu;
            // 0x247adc: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->pc = 0x247AE0u;
        goto label_247ae0;
    }
    ctx->pc = 0x247AD8u;
    SET_GPR_U32(ctx, 31, 0x247AE0u);
    ctx->pc = 0x247ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247AD8u;
            // 0x247adc: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247AE0u; }
        if (ctx->pc != 0x247AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247AE0u; }
        if (ctx->pc != 0x247AE0u) { return; }
    }
    ctx->pc = 0x247AE0u;
label_247ae0:
    // 0x247ae0: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_247ae4:
    if (ctx->pc == 0x247AE4u) {
        ctx->pc = 0x247AE4u;
            // 0x247ae4: 0x92430006  lbu         $v1, 0x6($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->pc = 0x247AE8u;
        goto label_247ae8;
    }
    ctx->pc = 0x247AE0u;
    {
        const bool branch_taken_0x247ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247ae0) {
            ctx->pc = 0x247AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247AE0u;
            // 0x247ae4: 0x92430006  lbu         $v1, 0x6($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x247BE0u;
            goto label_247be0;
        }
    }
    ctx->pc = 0x247AE8u;
label_247ae8:
    // 0x247ae8: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x247ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_247aec:
    // 0x247aec: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x247aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_247af0:
    // 0x247af0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_247af4:
    if (ctx->pc == 0x247AF4u) {
        ctx->pc = 0x247AF4u;
            // 0x247af4: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x247AF8u;
        goto label_247af8;
    }
    ctx->pc = 0x247AF0u;
    {
        const bool branch_taken_0x247af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247AF0u;
            // 0x247af4: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247af0) {
            ctx->pc = 0x247B3Cu;
            goto label_247b3c;
        }
    }
    ctx->pc = 0x247AF8u;
label_247af8:
    // 0x247af8: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x247af8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247afc:
    // 0x247afc: 0x26106910  addiu       $s0, $s0, 0x6910
    ctx->pc = 0x247afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26896));
label_247b00:
    // 0x247b00: 0xc091b26  jal         func_246C98
label_247b04:
    if (ctx->pc == 0x247B04u) {
        ctx->pc = 0x247B04u;
            // 0x247b04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247B08u;
        goto label_247b08;
    }
    ctx->pc = 0x247B00u;
    SET_GPR_U32(ctx, 31, 0x247B08u);
    ctx->pc = 0x247B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B00u;
            // 0x247b04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x246C98u;
    if (runtime->hasFunction(0x246C98u)) {
        auto targetFn = runtime->lookupFunction(0x246C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B08u; }
        if (ctx->pc != 0x247B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00246C98_0x246c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B08u; }
        if (ctx->pc != 0x247B08u) { return; }
    }
    ctx->pc = 0x247B08u;
label_247b08:
    // 0x247b08: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x247b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_247b0c:
    // 0x247b0c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x247b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_247b10:
    // 0x247b10: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x247b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_247b14:
    // 0x247b14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247b18:
    // 0x247b18: 0xc092576  jal         func_2495D8
label_247b1c:
    if (ctx->pc == 0x247B1Cu) {
        ctx->pc = 0x247B1Cu;
            // 0x247b1c: 0x642024  and         $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->pc = 0x247B20u;
        goto label_247b20;
    }
    ctx->pc = 0x247B18u;
    SET_GPR_U32(ctx, 31, 0x247B20u);
    ctx->pc = 0x247B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B18u;
            // 0x247b1c: 0x642024  and         $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2495D8u;
    if (runtime->hasFunction(0x2495D8u)) {
        auto targetFn = runtime->lookupFunction(0x2495D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B20u; }
        if (ctx->pc != 0x247B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002495D8_0x2495d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B20u; }
        if (ctx->pc != 0x247B20u) { return; }
    }
    ctx->pc = 0x247B20u;
label_247b20:
    // 0x247b20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b24:
    // 0x247b24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247b28:
    // 0x247b28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x247b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247b2c:
    // 0x247b2c: 0xc08b5ac  jal         func_22D6B0
label_247b30:
    if (ctx->pc == 0x247B30u) {
        ctx->pc = 0x247B30u;
            // 0x247b30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x247B34u;
        goto label_247b34;
    }
    ctx->pc = 0x247B2Cu;
    SET_GPR_U32(ctx, 31, 0x247B34u);
    ctx->pc = 0x247B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B2Cu;
            // 0x247b30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B34u; }
        if (ctx->pc != 0x247B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B34u; }
        if (ctx->pc != 0x247B34u) { return; }
    }
    ctx->pc = 0x247B34u;
label_247b34:
    // 0x247b34: 0x1000006f  b           . + 4 + (0x6F << 2)
label_247b38:
    if (ctx->pc == 0x247B38u) {
        ctx->pc = 0x247B3Cu;
        goto label_247b3c;
    }
    ctx->pc = 0x247B34u;
    {
        const bool branch_taken_0x247b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247b34) {
            ctx->pc = 0x247CF4u;
            goto label_247cf4;
        }
    }
    ctx->pc = 0x247B3Cu;
label_247b3c:
    // 0x247b3c: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x247b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_247b40:
    // 0x247b40: 0x10570016  beq         $v0, $s7, . + 4 + (0x16 << 2)
label_247b44:
    if (ctx->pc == 0x247B44u) {
        ctx->pc = 0x247B44u;
            // 0x247b44: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x247B48u;
        goto label_247b48;
    }
    ctx->pc = 0x247B40u;
    {
        const bool branch_taken_0x247b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x247B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247B40u;
            // 0x247b44: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b40) {
            ctx->pc = 0x247B9Cu;
            goto label_247b9c;
        }
    }
    ctx->pc = 0x247B48u;
label_247b48:
    // 0x247b48: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x247b48u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247b4c:
    // 0x247b4c: 0x26106948  addiu       $s0, $s0, 0x6948
    ctx->pc = 0x247b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26952));
label_247b50:
    // 0x247b50: 0xc091b26  jal         func_246C98
label_247b54:
    if (ctx->pc == 0x247B54u) {
        ctx->pc = 0x247B54u;
            // 0x247b54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247B58u;
        goto label_247b58;
    }
    ctx->pc = 0x247B50u;
    SET_GPR_U32(ctx, 31, 0x247B58u);
    ctx->pc = 0x247B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B50u;
            // 0x247b54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x246C98u;
    if (runtime->hasFunction(0x246C98u)) {
        auto targetFn = runtime->lookupFunction(0x246C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B58u; }
        if (ctx->pc != 0x247B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00246C98_0x246c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B58u; }
        if (ctx->pc != 0x247B58u) { return; }
    }
    ctx->pc = 0x247B58u;
label_247b58:
    // 0x247b58: 0x26f20014  addiu       $s2, $s7, 0x14
    ctx->pc = 0x247b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
label_247b5c:
    // 0x247b5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x247b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_247b60:
    // 0x247b60: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x247b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_247b64:
    // 0x247b64: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x247b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_247b68:
    // 0x247b68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247b6c:
    // 0x247b6c: 0xc092576  jal         func_2495D8
label_247b70:
    if (ctx->pc == 0x247B70u) {
        ctx->pc = 0x247B70u;
            // 0x247b70: 0x642024  and         $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->pc = 0x247B74u;
        goto label_247b74;
    }
    ctx->pc = 0x247B6Cu;
    SET_GPR_U32(ctx, 31, 0x247B74u);
    ctx->pc = 0x247B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B6Cu;
            // 0x247b70: 0x642024  and         $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2495D8u;
    if (runtime->hasFunction(0x2495D8u)) {
        auto targetFn = runtime->lookupFunction(0x2495D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B74u; }
        if (ctx->pc != 0x247B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002495D8_0x2495d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B74u; }
        if (ctx->pc != 0x247B74u) { return; }
    }
    ctx->pc = 0x247B74u;
label_247b74:
    // 0x247b74: 0x8e890048  lw          $t1, 0x48($s4)
    ctx->pc = 0x247b74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_247b78:
    // 0x247b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b7c:
    // 0x247b7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247b80:
    // 0x247b80: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x247b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247b84:
    // 0x247b84: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x247b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247b88:
    // 0x247b88: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x247b88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
label_247b8c:
    // 0x247b8c: 0xc08b5ac  jal         func_22D6B0
label_247b90:
    if (ctx->pc == 0x247B90u) {
        ctx->pc = 0x247B90u;
            // 0x247b90: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x247B94u;
        goto label_247b94;
    }
    ctx->pc = 0x247B8Cu;
    SET_GPR_U32(ctx, 31, 0x247B94u);
    ctx->pc = 0x247B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B8Cu;
            // 0x247b90: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B94u; }
        if (ctx->pc != 0x247B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B94u; }
        if (ctx->pc != 0x247B94u) { return; }
    }
    ctx->pc = 0x247B94u;
label_247b94:
    // 0x247b94: 0x10000057  b           . + 4 + (0x57 << 2)
label_247b98:
    if (ctx->pc == 0x247B98u) {
        ctx->pc = 0x247B9Cu;
        goto label_247b9c;
    }
    ctx->pc = 0x247B94u;
    {
        const bool branch_taken_0x247b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247b94) {
            ctx->pc = 0x247CF4u;
            goto label_247cf4;
        }
    }
    ctx->pc = 0x247B9Cu;
label_247b9c:
    // 0x247b9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_247ba0:
    // 0x247ba0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x247ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_247ba4:
    // 0x247ba4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x247ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_247ba8:
    // 0x247ba8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x247ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_247bac:
    // 0x247bac: 0x26106980  addiu       $s0, $s0, 0x6980
    ctx->pc = 0x247bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27008));
label_247bb0:
    // 0x247bb0: 0xc092576  jal         func_2495D8
label_247bb4:
    if (ctx->pc == 0x247BB4u) {
        ctx->pc = 0x247BB4u;
            // 0x247bb4: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->pc = 0x247BB8u;
        goto label_247bb8;
    }
    ctx->pc = 0x247BB0u;
    SET_GPR_U32(ctx, 31, 0x247BB8u);
    ctx->pc = 0x247BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247BB0u;
            // 0x247bb4: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2495D8u;
    if (runtime->hasFunction(0x2495D8u)) {
        auto targetFn = runtime->lookupFunction(0x2495D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BB8u; }
        if (ctx->pc != 0x247BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002495D8_0x2495d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BB8u; }
        if (ctx->pc != 0x247BB8u) { return; }
    }
    ctx->pc = 0x247BB8u;
label_247bb8:
    // 0x247bb8: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x247bb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247bbc:
    // 0x247bbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247bc0:
    // 0x247bc0: 0xc091b26  jal         func_246C98
label_247bc4:
    if (ctx->pc == 0x247BC4u) {
        ctx->pc = 0x247BC4u;
            // 0x247bc4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247BC8u;
        goto label_247bc8;
    }
    ctx->pc = 0x247BC0u;
    SET_GPR_U32(ctx, 31, 0x247BC8u);
    ctx->pc = 0x247BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247BC0u;
            // 0x247bc4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x246C98u;
    if (runtime->hasFunction(0x246C98u)) {
        auto targetFn = runtime->lookupFunction(0x246C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BC8u; }
        if (ctx->pc != 0x247BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00246C98_0x246c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BC8u; }
        if (ctx->pc != 0x247BC8u) { return; }
    }
    ctx->pc = 0x247BC8u;
label_247bc8:
    // 0x247bc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247bcc:
    // 0x247bcc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247bd0:
    // 0x247bd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x247bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247bd4:
    // 0x247bd4: 0xc08b5ac  jal         func_22D6B0
label_247bd8:
    if (ctx->pc == 0x247BD8u) {
        ctx->pc = 0x247BD8u;
            // 0x247bd8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x247BDCu;
        goto label_247bdc;
    }
    ctx->pc = 0x247BD4u;
    SET_GPR_U32(ctx, 31, 0x247BDCu);
    ctx->pc = 0x247BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247BD4u;
            // 0x247bd8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BDCu; }
        if (ctx->pc != 0x247BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BDCu; }
        if (ctx->pc != 0x247BDCu) { return; }
    }
    ctx->pc = 0x247BDCu;
label_247bdc:
    // 0x247bdc: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x247bdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_247be0:
    // 0x247be0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_247be4:
    if (ctx->pc == 0x247BE4u) {
        ctx->pc = 0x247BE4u;
            // 0x247be4: 0x92620004  lbu         $v0, 0x4($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x247BE8u;
        goto label_247be8;
    }
    ctx->pc = 0x247BE0u;
    {
        const bool branch_taken_0x247be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247BE0u;
            // 0x247be4: 0x92620004  lbu         $v0, 0x4($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247be0) {
            ctx->pc = 0x247C24u;
            goto label_247c24;
        }
    }
    ctx->pc = 0x247BE8u;
label_247be8:
    // 0x247be8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_247bec:
    if (ctx->pc == 0x247BECu) {
        ctx->pc = 0x247BECu;
            // 0x247bec: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x247BF0u;
        goto label_247bf0;
    }
    ctx->pc = 0x247BE8u;
    {
        const bool branch_taken_0x247be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247BE8u;
            // 0x247bec: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247be8) {
            ctx->pc = 0x247C24u;
            goto label_247c24;
        }
    }
    ctx->pc = 0x247BF0u;
label_247bf0:
    // 0x247bf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_247bf4:
    // 0x247bf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x247bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_247bf8:
    // 0x247bf8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x247bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_247bfc:
    // 0x247bfc: 0x261069a8  addiu       $s0, $s0, 0x69A8
    ctx->pc = 0x247bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27048));
label_247c00:
    // 0x247c00: 0xc092576  jal         func_2495D8
label_247c04:
    if (ctx->pc == 0x247C04u) {
        ctx->pc = 0x247C04u;
            // 0x247c04: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->pc = 0x247C08u;
        goto label_247c08;
    }
    ctx->pc = 0x247C00u;
    SET_GPR_U32(ctx, 31, 0x247C08u);
    ctx->pc = 0x247C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C00u;
            // 0x247c04: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2495D8u;
    if (runtime->hasFunction(0x2495D8u)) {
        auto targetFn = runtime->lookupFunction(0x2495D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C08u; }
        if (ctx->pc != 0x247C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002495D8_0x2495d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C08u; }
        if (ctx->pc != 0x247C08u) { return; }
    }
    ctx->pc = 0x247C08u;
label_247c08:
    // 0x247c08: 0x92670004  lbu         $a3, 0x4($s3)
    ctx->pc = 0x247c08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247c0c:
    // 0x247c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247c10:
    // 0x247c10: 0x92480006  lbu         $t0, 0x6($s2)
    ctx->pc = 0x247c10u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_247c14:
    // 0x247c14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x247c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247c18:
    // 0x247c18: 0xc08b5ac  jal         func_22D6B0
label_247c1c:
    if (ctx->pc == 0x247C1Cu) {
        ctx->pc = 0x247C1Cu;
            // 0x247c1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x247C20u;
        goto label_247c20;
    }
    ctx->pc = 0x247C18u;
    SET_GPR_U32(ctx, 31, 0x247C20u);
    ctx->pc = 0x247C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C18u;
            // 0x247c1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C20u; }
        if (ctx->pc != 0x247C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C20u; }
        if (ctx->pc != 0x247C20u) { return; }
    }
    ctx->pc = 0x247C20u;
label_247c20:
    // 0x247c20: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x247c20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247c24:
    // 0x247c24: 0x92e60039  lbu         $a2, 0x39($s7)
    ctx->pc = 0x247c24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 57)));
label_247c28:
    // 0x247c28: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
label_247c2c:
    if (ctx->pc == 0x247C2Cu) {
        ctx->pc = 0x247C2Cu;
            // 0x247c2c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x247C30u;
        goto label_247c30;
    }
    ctx->pc = 0x247C28u;
    {
        const bool branch_taken_0x247c28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x247C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247C28u;
            // 0x247c2c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c28) {
            ctx->pc = 0x247C68u;
            goto label_247c68;
        }
    }
    ctx->pc = 0x247C30u;
label_247c30:
    // 0x247c30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_247c34:
    // 0x247c34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x247c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_247c38:
    // 0x247c38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x247c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_247c3c:
    // 0x247c3c: 0x261069d0  addiu       $s0, $s0, 0x69D0
    ctx->pc = 0x247c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27088));
label_247c40:
    // 0x247c40: 0xc092576  jal         func_2495D8
label_247c44:
    if (ctx->pc == 0x247C44u) {
        ctx->pc = 0x247C44u;
            // 0x247c44: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->pc = 0x247C48u;
        goto label_247c48;
    }
    ctx->pc = 0x247C40u;
    SET_GPR_U32(ctx, 31, 0x247C48u);
    ctx->pc = 0x247C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C40u;
            // 0x247c44: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2495D8u;
    if (runtime->hasFunction(0x2495D8u)) {
        auto targetFn = runtime->lookupFunction(0x2495D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C48u; }
        if (ctx->pc != 0x247C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002495D8_0x2495d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C48u; }
        if (ctx->pc != 0x247C48u) { return; }
    }
    ctx->pc = 0x247C48u;
label_247c48:
    // 0x247c48: 0x92670004  lbu         $a3, 0x4($s3)
    ctx->pc = 0x247c48u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247c4c:
    // 0x247c4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247c50:
    // 0x247c50: 0x92e80039  lbu         $t0, 0x39($s7)
    ctx->pc = 0x247c50u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 57)));
label_247c54:
    // 0x247c54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x247c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247c58:
    // 0x247c58: 0xc08b5ac  jal         func_22D6B0
label_247c5c:
    if (ctx->pc == 0x247C5Cu) {
        ctx->pc = 0x247C5Cu;
            // 0x247c5c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x247C60u;
        goto label_247c60;
    }
    ctx->pc = 0x247C58u;
    SET_GPR_U32(ctx, 31, 0x247C60u);
    ctx->pc = 0x247C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C58u;
            // 0x247c5c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C60u; }
        if (ctx->pc != 0x247C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C60u; }
        if (ctx->pc != 0x247C60u) { return; }
    }
    ctx->pc = 0x247C60u;
label_247c60:
    // 0x247c60: 0x10000021  b           . + 4 + (0x21 << 2)
label_247c64:
    if (ctx->pc == 0x247C64u) {
        ctx->pc = 0x247C64u;
            // 0x247c64: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x247C68u;
        goto label_247c68;
    }
    ctx->pc = 0x247C60u;
    {
        const bool branch_taken_0x247c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247C60u;
            // 0x247c64: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c60) {
            ctx->pc = 0x247CE8u;
            goto label_247ce8;
        }
    }
    ctx->pc = 0x247C68u;
label_247c68:
    // 0x247c68: 0x92450005  lbu         $a1, 0x5($s2)
    ctx->pc = 0x247c68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_247c6c:
    // 0x247c6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x247c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_247c70:
    // 0x247c70: 0xa2420006  sb          $v0, 0x6($s2)
    ctx->pc = 0x247c70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 2));
label_247c74:
    // 0x247c74: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x247c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_247c78:
    // 0x247c78: 0xc08b4f8  jal         func_22D3E0
label_247c7c:
    if (ctx->pc == 0x247C7Cu) {
        ctx->pc = 0x247C7Cu;
            // 0x247c7c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->pc = 0x247C80u;
        goto label_247c80;
    }
    ctx->pc = 0x247C78u;
    SET_GPR_U32(ctx, 31, 0x247C80u);
    ctx->pc = 0x247C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C78u;
            // 0x247c7c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C80u; }
        if (ctx->pc != 0x247C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C80u; }
        if (ctx->pc != 0x247C80u) { return; }
    }
    ctx->pc = 0x247C80u;
label_247c80:
    // 0x247c80: 0xde820070  ld          $v0, 0x70($s4)
    ctx->pc = 0x247c80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 112)));
label_247c84:
    // 0x247c84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_247c88:
    if (ctx->pc == 0x247C88u) {
        ctx->pc = 0x247C88u;
            // 0x247c88: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x247C8Cu;
        goto label_247c8c;
    }
    ctx->pc = 0x247C84u;
    {
        const bool branch_taken_0x247c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247C84u;
            // 0x247c88: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c84) {
            ctx->pc = 0x247CA0u;
            goto label_247ca0;
        }
    }
    ctx->pc = 0x247C8Cu;
label_247c8c:
    // 0x247c8c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x247c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_247c90:
    // 0x247c90: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x247c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_247c94:
    // 0x247c94: 0xdca217c0  ld          $v0, 0x17C0($a1)
    ctx->pc = 0x247c94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 6080)));
label_247c98:
    // 0x247c98: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x247c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_247c9c:
    // 0x247c9c: 0xfe820070  sd          $v0, 0x70($s4)
    ctx->pc = 0x247c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
label_247ca0:
    // 0x247ca0: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x247ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_247ca4:
    // 0x247ca4: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x247ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_247ca8:
    // 0x247ca8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x247ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_247cac:
    // 0x247cac: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x247cacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_247cb0:
    // 0x247cb0: 0xc08c682  jal         func_231A08
label_247cb4:
    if (ctx->pc == 0x247CB4u) {
        ctx->pc = 0x247CB4u;
            // 0x247cb4: 0xfea00010  sd          $zero, 0x10($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 0));
        ctx->pc = 0x247CB8u;
        goto label_247cb8;
    }
    ctx->pc = 0x247CB0u;
    SET_GPR_U32(ctx, 31, 0x247CB8u);
    ctx->pc = 0x247CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247CB0u;
            // 0x247cb4: 0xfea00010  sd          $zero, 0x10($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CB8u; }
        if (ctx->pc != 0x247CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CB8u; }
        if (ctx->pc != 0x247CB8u) { return; }
    }
    ctx->pc = 0x247CB8u;
label_247cb8:
    // 0x247cb8: 0x8eb0000c  lw          $s0, 0xC($s5)
    ctx->pc = 0x247cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_247cbc:
    // 0x247cbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x247cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247cc0:
    // 0x247cc0: 0xc08c698  jal         func_231A60
label_247cc4:
    if (ctx->pc == 0x247CC4u) {
        ctx->pc = 0x247CC4u;
            // 0x247cc4: 0xaea0000c  sw          $zero, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x247CC8u;
        goto label_247cc8;
    }
    ctx->pc = 0x247CC0u;
    SET_GPR_U32(ctx, 31, 0x247CC8u);
    ctx->pc = 0x247CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247CC0u;
            // 0x247cc4: 0xaea0000c  sw          $zero, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CC8u; }
        if (ctx->pc != 0x247CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CC8u; }
        if (ctx->pc != 0x247CC8u) { return; }
    }
    ctx->pc = 0x247CC8u;
label_247cc8:
    // 0x247cc8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_247ccc:
    if (ctx->pc == 0x247CCCu) {
        ctx->pc = 0x247CCCu;
            // 0x247ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247CD0u;
        goto label_247cd0;
    }
    ctx->pc = 0x247CC8u;
    {
        const bool branch_taken_0x247cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247CC8u;
            // 0x247ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247cc8) {
            ctx->pc = 0x247CE4u;
            goto label_247ce4;
        }
    }
    ctx->pc = 0x247CD0u;
label_247cd0:
    // 0x247cd0: 0x8ee200c0  lw          $v0, 0xC0($s7)
    ctx->pc = 0x247cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 192)));
label_247cd4:
    // 0x247cd4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x247cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_247cd8:
    // 0x247cd8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x247cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_247cdc:
    // 0x247cdc: 0x40f809  jalr        $v0
label_247ce0:
    if (ctx->pc == 0x247CE0u) {
        ctx->pc = 0x247CE0u;
            // 0x247ce0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247CE4u;
        goto label_247ce4;
    }
    ctx->pc = 0x247CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247CE4u);
        ctx->pc = 0x247CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247CDCu;
            // 0x247ce0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247CE4u; }
            if (ctx->pc != 0x247CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x247CE4u;
label_247ce4:
    // 0x247ce4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x247ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_247ce8:
    // 0x247ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247cec:
    // 0x247cec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_247cf0:
    if (ctx->pc == 0x247CF0u) {
        ctx->pc = 0x247CF0u;
            // 0x247cf0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x247CF4u;
        goto label_247cf4;
    }
    ctx->pc = 0x247CECu;
    {
        const bool branch_taken_0x247cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247CECu;
            // 0x247cf0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247cec) {
            ctx->pc = 0x247D04u;
            goto label_247d04;
        }
    }
    ctx->pc = 0x247CF4u;
label_247cf4:
    // 0x247cf4: 0xc08a9d6  jal         func_22A758
label_247cf8:
    if (ctx->pc == 0x247CF8u) {
        ctx->pc = 0x247CF8u;
            // 0x247cf8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247CFCu;
        goto label_247cfc;
    }
    ctx->pc = 0x247CF4u;
    SET_GPR_U32(ctx, 31, 0x247CFCu);
    ctx->pc = 0x247CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247CF4u;
            // 0x247cf8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CFCu; }
        if (ctx->pc != 0x247CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CFCu; }
        if (ctx->pc != 0x247CFCu) { return; }
    }
    ctx->pc = 0x247CFCu;
label_247cfc:
    // 0x247cfc: 0x10000057  b           . + 4 + (0x57 << 2)
label_247d00:
    if (ctx->pc == 0x247D00u) {
        ctx->pc = 0x247D00u;
            // 0x247d00: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x247D04u;
        goto label_247d04;
    }
    ctx->pc = 0x247CFCu;
    {
        const bool branch_taken_0x247cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247CFCu;
            // 0x247d00: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247cfc) {
            ctx->pc = 0x247E5Cu;
            goto label_247e5c;
        }
    }
    ctx->pc = 0x247D04u;
label_247d04:
    // 0x247d04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x247d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_247d08:
    // 0x247d08: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_247d0c:
    if (ctx->pc == 0x247D0Cu) {
        ctx->pc = 0x247D0Cu;
            // 0x247d0c: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x247D10u;
        goto label_247d10;
    }
    ctx->pc = 0x247D08u;
    {
        const bool branch_taken_0x247d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x247d08) {
            ctx->pc = 0x247D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x247D08u;
            // 0x247d0c: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x247D50u;
            goto label_247d50;
        }
    }
    ctx->pc = 0x247D10u;
label_247d10:
    // 0x247d10: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x247d10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247d14:
    // 0x247d14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x247d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_247d18:
    // 0x247d18: 0x92650005  lbu         $a1, 0x5($s3)
    ctx->pc = 0x247d18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_247d1c:
    // 0x247d1c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x247d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_247d20:
    // 0x247d20: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x247d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_247d24:
    // 0x247d24: 0xc08b4f8  jal         func_22D3E0
label_247d28:
    if (ctx->pc == 0x247D28u) {
        ctx->pc = 0x247D28u;
            // 0x247d28: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x247D2Cu;
        goto label_247d2c;
    }
    ctx->pc = 0x247D24u;
    SET_GPR_U32(ctx, 31, 0x247D2Cu);
    ctx->pc = 0x247D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D24u;
            // 0x247d28: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D2Cu; }
        if (ctx->pc != 0x247D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D2Cu; }
        if (ctx->pc != 0x247D2Cu) { return; }
    }
    ctx->pc = 0x247D2Cu;
label_247d2c:
    // 0x247d2c: 0x8ee200f0  lw          $v0, 0xF0($s7)
    ctx->pc = 0x247d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
label_247d30:
    // 0x247d30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x247d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_247d34:
    // 0x247d34: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x247d34u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247d38:
    // 0x247d38: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x247d38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_247d3c:
    // 0x247d3c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x247d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_247d40:
    // 0x247d40: 0xc08b4f8  jal         func_22D3E0
label_247d44:
    if (ctx->pc == 0x247D44u) {
        ctx->pc = 0x247D44u;
            // 0x247d44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x247D48u;
        goto label_247d48;
    }
    ctx->pc = 0x247D40u;
    SET_GPR_U32(ctx, 31, 0x247D48u);
    ctx->pc = 0x247D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D40u;
            // 0x247d44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D48u; }
        if (ctx->pc != 0x247D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D48u; }
        if (ctx->pc != 0x247D48u) { return; }
    }
    ctx->pc = 0x247D48u;
label_247d48:
    // 0x247d48: 0x10000016  b           . + 4 + (0x16 << 2)
label_247d4c:
    if (ctx->pc == 0x247D4Cu) {
        ctx->pc = 0x247D4Cu;
            // 0x247d4c: 0x92640004  lbu         $a0, 0x4($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x247D50u;
        goto label_247d50;
    }
    ctx->pc = 0x247D48u;
    {
        const bool branch_taken_0x247d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247D48u;
            // 0x247d4c: 0x92640004  lbu         $a0, 0x4($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d48) {
            ctx->pc = 0x247DA4u;
            goto label_247da4;
        }
    }
    ctx->pc = 0x247D50u;
label_247d50:
    // 0x247d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247d54:
    // 0x247d54: 0xc091fcc  jal         func_247F30
label_247d58:
    if (ctx->pc == 0x247D58u) {
        ctx->pc = 0x247D58u;
            // 0x247d58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x247D5Cu;
        goto label_247d5c;
    }
    ctx->pc = 0x247D54u;
    SET_GPR_U32(ctx, 31, 0x247D5Cu);
    ctx->pc = 0x247D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D54u;
            // 0x247d58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247F30u;
    if (runtime->hasFunction(0x247F30u)) {
        auto targetFn = runtime->lookupFunction(0x247F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D5Cu; }
        if (ctx->pc != 0x247D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247F30_0x247f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D5Cu; }
        if (ctx->pc != 0x247D5Cu) { return; }
    }
    ctx->pc = 0x247D5Cu;
label_247d5c:
    // 0x247d5c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x247d5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247d60:
    // 0x247d60: 0x12a0ffe4  beqz        $s5, . + 4 + (-0x1C << 2)
label_247d64:
    if (ctx->pc == 0x247D64u) {
        ctx->pc = 0x247D64u;
            // 0x247d64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247D68u;
        goto label_247d68;
    }
    ctx->pc = 0x247D60u;
    {
        const bool branch_taken_0x247d60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x247D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247D60u;
            // 0x247d64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d60) {
            ctx->pc = 0x247CF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247cf4;
        }
    }
    ctx->pc = 0x247D68u;
label_247d68:
    // 0x247d68: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x247d68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247d6c:
    // 0x247d6c: 0x92650005  lbu         $a1, 0x5($s3)
    ctx->pc = 0x247d6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_247d70:
    // 0x247d70: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x247d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_247d74:
    // 0x247d74: 0x8eb40008  lw          $s4, 0x8($s5)
    ctx->pc = 0x247d74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_247d78:
    // 0x247d78: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x247d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_247d7c:
    // 0x247d7c: 0xc08b4f8  jal         func_22D3E0
label_247d80:
    if (ctx->pc == 0x247D80u) {
        ctx->pc = 0x247D80u;
            // 0x247d80: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x247D84u;
        goto label_247d84;
    }
    ctx->pc = 0x247D7Cu;
    SET_GPR_U32(ctx, 31, 0x247D84u);
    ctx->pc = 0x247D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D7Cu;
            // 0x247d80: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D84u; }
        if (ctx->pc != 0x247D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D84u; }
        if (ctx->pc != 0x247D84u) { return; }
    }
    ctx->pc = 0x247D84u;
label_247d84:
    // 0x247d84: 0x8e920030  lw          $s2, 0x30($s4)
    ctx->pc = 0x247d84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_247d88:
    // 0x247d88: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x247d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_247d8c:
    // 0x247d8c: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x247d8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247d90:
    // 0x247d90: 0x92440005  lbu         $a0, 0x5($s2)
    ctx->pc = 0x247d90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_247d94:
    // 0x247d94: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x247d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_247d98:
    // 0x247d98: 0xc08b4f8  jal         func_22D3E0
label_247d9c:
    if (ctx->pc == 0x247D9Cu) {
        ctx->pc = 0x247D9Cu;
            // 0x247d9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x247DA0u;
        goto label_247da0;
    }
    ctx->pc = 0x247D98u;
    SET_GPR_U32(ctx, 31, 0x247DA0u);
    ctx->pc = 0x247D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D98u;
            // 0x247d9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DA0u; }
        if (ctx->pc != 0x247DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DA0u; }
        if (ctx->pc != 0x247DA0u) { return; }
    }
    ctx->pc = 0x247DA0u;
label_247da0:
    // 0x247da0: 0x92640004  lbu         $a0, 0x4($s3)
    ctx->pc = 0x247da0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247da4:
    // 0x247da4: 0x92660005  lbu         $a2, 0x5($s3)
    ctx->pc = 0x247da4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_247da8:
    // 0x247da8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x247da8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_247dac:
    // 0x247dac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x247dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_247db0:
    // 0x247db0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x247db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_247db4:
    // 0x247db4: 0x2661021  addu        $v0, $s3, $a2
    ctx->pc = 0x247db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_247db8:
    // 0x247db8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x247db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_247dbc:
    // 0x247dbc: 0xc08b4f8  jal         func_22D3E0
label_247dc0:
    if (ctx->pc == 0x247DC0u) {
        ctx->pc = 0x247DC0u;
            // 0x247dc0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x247DC4u;
        goto label_247dc4;
    }
    ctx->pc = 0x247DBCu;
    SET_GPR_U32(ctx, 31, 0x247DC4u);
    ctx->pc = 0x247DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247DBCu;
            // 0x247dc0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DC4u; }
        if (ctx->pc != 0x247DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DC4u; }
        if (ctx->pc != 0x247DC4u) { return; }
    }
    ctx->pc = 0x247DC4u;
label_247dc4:
    // 0x247dc4: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x247dc4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247dc8:
    // 0x247dc8: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x247dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_247dcc:
    // 0x247dcc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x247dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_247dd0:
    // 0x247dd0: 0x92660005  lbu         $a2, 0x5($s3)
    ctx->pc = 0x247dd0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_247dd4:
    // 0x247dd4: 0xc08b4f8  jal         func_22D3E0
label_247dd8:
    if (ctx->pc == 0x247DD8u) {
        ctx->pc = 0x247DD8u;
            // 0x247dd8: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->pc = 0x247DDCu;
        goto label_247ddc;
    }
    ctx->pc = 0x247DD4u;
    SET_GPR_U32(ctx, 31, 0x247DDCu);
    ctx->pc = 0x247DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247DD4u;
            // 0x247dd8: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DDCu; }
        if (ctx->pc != 0x247DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DDCu; }
        if (ctx->pc != 0x247DDCu) { return; }
    }
    ctx->pc = 0x247DDCu;
label_247ddc:
    // 0x247ddc: 0xc08a262  jal         func_228988
label_247de0:
    if (ctx->pc == 0x247DE0u) {
        ctx->pc = 0x247DE0u;
            // 0x247de0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x247DE4u;
        goto label_247de4;
    }
    ctx->pc = 0x247DDCu;
    SET_GPR_U32(ctx, 31, 0x247DE4u);
    ctx->pc = 0x247DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247DDCu;
            // 0x247de0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DE4u; }
        if (ctx->pc != 0x247DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DE4u; }
        if (ctx->pc != 0x247DE4u) { return; }
    }
    ctx->pc = 0x247DE4u;
label_247de4:
    // 0x247de4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x247de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_247de8:
    // 0x247de8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x247de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_247dec:
    // 0x247dec: 0xa2620006  sb          $v0, 0x6($s3)
    ctx->pc = 0x247decu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 2));
label_247df0:
    // 0x247df0: 0xc08a262  jal         func_228988
label_247df4:
    if (ctx->pc == 0x247DF4u) {
        ctx->pc = 0x247DF4u;
            // 0x247df4: 0xa2630007  sb          $v1, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x247DF8u;
        goto label_247df8;
    }
    ctx->pc = 0x247DF0u;
    SET_GPR_U32(ctx, 31, 0x247DF8u);
    ctx->pc = 0x247DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247DF0u;
            // 0x247df4: 0xa2630007  sb          $v1, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DF8u; }
        if (ctx->pc != 0x247DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DF8u; }
        if (ctx->pc != 0x247DF8u) { return; }
    }
    ctx->pc = 0x247DF8u;
label_247df8:
    // 0x247df8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x247df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_247dfc:
    // 0x247dfc: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x247dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_247e00:
    // 0x247e00: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x247e00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
label_247e04:
    // 0x247e04: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x247e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_247e08:
    // 0x247e08: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x247e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_247e0c:
    // 0x247e0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x247e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_247e10:
    // 0x247e10: 0x97c20012  lhu         $v0, 0x12($fp)
    ctx->pc = 0x247e10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
label_247e14:
    // 0x247e14: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x247e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_247e18:
    // 0x247e18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x247e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_247e1c:
    // 0x247e1c: 0x3042fcff  andi        $v0, $v0, 0xFCFF
    ctx->pc = 0x247e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64767);
label_247e20:
    // 0x247e20: 0xa7c20012  sh          $v0, 0x12($fp)
    ctx->pc = 0x247e20u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 18), (uint16_t)GPR_U32(ctx, 2));
label_247e24:
    // 0x247e24: 0x92630004  lbu         $v1, 0x4($s3)
    ctx->pc = 0x247e24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_247e28:
    // 0x247e28: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x247e28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_247e2c:
    // 0x247e2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x247e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247e30:
    // 0x247e30: 0xa3a80001  sb          $t0, 0x1($sp)
    ctx->pc = 0x247e30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 8));
label_247e34:
    // 0x247e34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x247e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_247e38:
    // 0x247e38: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x247e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_247e3c:
    // 0x247e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247e40:
    // 0x247e40: 0xa3a90000  sb          $t1, 0x0($sp)
    ctx->pc = 0x247e40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 9));
label_247e44:
    // 0x247e44: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x247e44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_247e48:
    // 0x247e48: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x247e48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_247e4c:
    // 0x247e4c: 0x8ee200c0  lw          $v0, 0xC0($s7)
    ctx->pc = 0x247e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 192)));
label_247e50:
    // 0x247e50: 0x40f809  jalr        $v0
label_247e54:
    if (ctx->pc == 0x247E54u) {
        ctx->pc = 0x247E54u;
            // 0x247e54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247E58u;
        goto label_247e58;
    }
    ctx->pc = 0x247E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247E58u);
        ctx->pc = 0x247E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247E50u;
            // 0x247e54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247E58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247E58u; }
            if (ctx->pc != 0x247E58u) { return; }
        }
        }
    }
    ctx->pc = 0x247E58u;
label_247e58:
    // 0x247e58: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x247e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_247e5c:
    // 0x247e5c: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x247e5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_247e60:
    // 0x247e60: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x247e60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_247e64:
    // 0x247e64: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x247e64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_247e68:
    // 0x247e68: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x247e68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_247e6c:
    // 0x247e6c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x247e6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_247e70:
    // 0x247e70: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x247e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_247e74:
    // 0x247e74: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x247e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_247e78:
    // 0x247e78: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x247e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_247e7c:
    // 0x247e7c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x247e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_247e80:
    // 0x247e80: 0x3e00008  jr          $ra
label_247e84:
    if (ctx->pc == 0x247E84u) {
        ctx->pc = 0x247E84u;
            // 0x247e84: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x247E88u;
        goto label_fallthrough_0x247e80;
    }
    ctx->pc = 0x247E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247E80u;
            // 0x247e84: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x247e80:
    ctx->pc = 0x247E88u;
    ctx->pc = 0x247e88u;
}
