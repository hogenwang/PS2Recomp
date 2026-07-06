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

// Function: sub_0023BCB8
// Address: 0x23bcb8 - 0x23d3f0
void sub_0023BCB8_0x23bcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BCB8_0x23bcb8");
#endif

    switch (ctx->pc) {
        case 0x23bcb8u: goto label_23bcb8;
        case 0x23bcbcu: goto label_23bcbc;
        case 0x23bcc0u: goto label_23bcc0;
        case 0x23bcc4u: goto label_23bcc4;
        case 0x23bcc8u: goto label_23bcc8;
        case 0x23bcccu: goto label_23bccc;
        case 0x23bcd0u: goto label_23bcd0;
        case 0x23bcd4u: goto label_23bcd4;
        case 0x23bcd8u: goto label_23bcd8;
        case 0x23bcdcu: goto label_23bcdc;
        case 0x23bce0u: goto label_23bce0;
        case 0x23bce4u: goto label_23bce4;
        case 0x23bce8u: goto label_23bce8;
        case 0x23bcecu: goto label_23bcec;
        case 0x23bcf0u: goto label_23bcf0;
        case 0x23bcf4u: goto label_23bcf4;
        case 0x23bcf8u: goto label_23bcf8;
        case 0x23bcfcu: goto label_23bcfc;
        case 0x23bd00u: goto label_23bd00;
        case 0x23bd04u: goto label_23bd04;
        case 0x23bd08u: goto label_23bd08;
        case 0x23bd0cu: goto label_23bd0c;
        case 0x23bd10u: goto label_23bd10;
        case 0x23bd14u: goto label_23bd14;
        case 0x23bd18u: goto label_23bd18;
        case 0x23bd1cu: goto label_23bd1c;
        case 0x23bd20u: goto label_23bd20;
        case 0x23bd24u: goto label_23bd24;
        case 0x23bd28u: goto label_23bd28;
        case 0x23bd2cu: goto label_23bd2c;
        case 0x23bd30u: goto label_23bd30;
        case 0x23bd34u: goto label_23bd34;
        case 0x23bd38u: goto label_23bd38;
        case 0x23bd3cu: goto label_23bd3c;
        case 0x23bd40u: goto label_23bd40;
        case 0x23bd44u: goto label_23bd44;
        case 0x23bd48u: goto label_23bd48;
        case 0x23bd4cu: goto label_23bd4c;
        case 0x23bd50u: goto label_23bd50;
        case 0x23bd54u: goto label_23bd54;
        case 0x23bd58u: goto label_23bd58;
        case 0x23bd5cu: goto label_23bd5c;
        case 0x23bd60u: goto label_23bd60;
        case 0x23bd64u: goto label_23bd64;
        case 0x23bd68u: goto label_23bd68;
        case 0x23bd6cu: goto label_23bd6c;
        case 0x23bd70u: goto label_23bd70;
        case 0x23bd74u: goto label_23bd74;
        case 0x23bd78u: goto label_23bd78;
        case 0x23bd7cu: goto label_23bd7c;
        case 0x23bd80u: goto label_23bd80;
        case 0x23bd84u: goto label_23bd84;
        case 0x23bd88u: goto label_23bd88;
        case 0x23bd8cu: goto label_23bd8c;
        case 0x23bd90u: goto label_23bd90;
        case 0x23bd94u: goto label_23bd94;
        case 0x23bd98u: goto label_23bd98;
        case 0x23bd9cu: goto label_23bd9c;
        case 0x23bda0u: goto label_23bda0;
        case 0x23bda4u: goto label_23bda4;
        case 0x23bda8u: goto label_23bda8;
        case 0x23bdacu: goto label_23bdac;
        case 0x23bdb0u: goto label_23bdb0;
        case 0x23bdb4u: goto label_23bdb4;
        case 0x23bdb8u: goto label_23bdb8;
        case 0x23bdbcu: goto label_23bdbc;
        case 0x23bdc0u: goto label_23bdc0;
        case 0x23bdc4u: goto label_23bdc4;
        case 0x23bdc8u: goto label_23bdc8;
        case 0x23bdccu: goto label_23bdcc;
        case 0x23bdd0u: goto label_23bdd0;
        case 0x23bdd4u: goto label_23bdd4;
        case 0x23bdd8u: goto label_23bdd8;
        case 0x23bddcu: goto label_23bddc;
        case 0x23bde0u: goto label_23bde0;
        case 0x23bde4u: goto label_23bde4;
        case 0x23bde8u: goto label_23bde8;
        case 0x23bdecu: goto label_23bdec;
        case 0x23bdf0u: goto label_23bdf0;
        case 0x23bdf4u: goto label_23bdf4;
        case 0x23bdf8u: goto label_23bdf8;
        case 0x23bdfcu: goto label_23bdfc;
        case 0x23be00u: goto label_23be00;
        case 0x23be04u: goto label_23be04;
        case 0x23be08u: goto label_23be08;
        case 0x23be0cu: goto label_23be0c;
        case 0x23be10u: goto label_23be10;
        case 0x23be14u: goto label_23be14;
        case 0x23be18u: goto label_23be18;
        case 0x23be1cu: goto label_23be1c;
        case 0x23be20u: goto label_23be20;
        case 0x23be24u: goto label_23be24;
        case 0x23be28u: goto label_23be28;
        case 0x23be2cu: goto label_23be2c;
        case 0x23be30u: goto label_23be30;
        case 0x23be34u: goto label_23be34;
        case 0x23be38u: goto label_23be38;
        case 0x23be3cu: goto label_23be3c;
        case 0x23be40u: goto label_23be40;
        case 0x23be44u: goto label_23be44;
        case 0x23be48u: goto label_23be48;
        case 0x23be4cu: goto label_23be4c;
        case 0x23be50u: goto label_23be50;
        case 0x23be54u: goto label_23be54;
        case 0x23be58u: goto label_23be58;
        case 0x23be5cu: goto label_23be5c;
        case 0x23be60u: goto label_23be60;
        case 0x23be64u: goto label_23be64;
        case 0x23be68u: goto label_23be68;
        case 0x23be6cu: goto label_23be6c;
        case 0x23be70u: goto label_23be70;
        case 0x23be74u: goto label_23be74;
        case 0x23be78u: goto label_23be78;
        case 0x23be7cu: goto label_23be7c;
        case 0x23be80u: goto label_23be80;
        case 0x23be84u: goto label_23be84;
        case 0x23be88u: goto label_23be88;
        case 0x23be8cu: goto label_23be8c;
        case 0x23be90u: goto label_23be90;
        case 0x23be94u: goto label_23be94;
        case 0x23be98u: goto label_23be98;
        case 0x23be9cu: goto label_23be9c;
        case 0x23bea0u: goto label_23bea0;
        case 0x23bea4u: goto label_23bea4;
        case 0x23bea8u: goto label_23bea8;
        case 0x23beacu: goto label_23beac;
        case 0x23beb0u: goto label_23beb0;
        case 0x23beb4u: goto label_23beb4;
        case 0x23beb8u: goto label_23beb8;
        case 0x23bebcu: goto label_23bebc;
        case 0x23bec0u: goto label_23bec0;
        case 0x23bec4u: goto label_23bec4;
        case 0x23bec8u: goto label_23bec8;
        case 0x23beccu: goto label_23becc;
        case 0x23bed0u: goto label_23bed0;
        case 0x23bed4u: goto label_23bed4;
        case 0x23bed8u: goto label_23bed8;
        case 0x23bedcu: goto label_23bedc;
        case 0x23bee0u: goto label_23bee0;
        case 0x23bee4u: goto label_23bee4;
        case 0x23bee8u: goto label_23bee8;
        case 0x23beecu: goto label_23beec;
        case 0x23bef0u: goto label_23bef0;
        case 0x23bef4u: goto label_23bef4;
        case 0x23bef8u: goto label_23bef8;
        case 0x23befcu: goto label_23befc;
        case 0x23bf00u: goto label_23bf00;
        case 0x23bf04u: goto label_23bf04;
        case 0x23bf08u: goto label_23bf08;
        case 0x23bf0cu: goto label_23bf0c;
        case 0x23bf10u: goto label_23bf10;
        case 0x23bf14u: goto label_23bf14;
        case 0x23bf18u: goto label_23bf18;
        case 0x23bf1cu: goto label_23bf1c;
        case 0x23bf20u: goto label_23bf20;
        case 0x23bf24u: goto label_23bf24;
        case 0x23bf28u: goto label_23bf28;
        case 0x23bf2cu: goto label_23bf2c;
        case 0x23bf30u: goto label_23bf30;
        case 0x23bf34u: goto label_23bf34;
        case 0x23bf38u: goto label_23bf38;
        case 0x23bf3cu: goto label_23bf3c;
        case 0x23bf40u: goto label_23bf40;
        case 0x23bf44u: goto label_23bf44;
        case 0x23bf48u: goto label_23bf48;
        case 0x23bf4cu: goto label_23bf4c;
        case 0x23bf50u: goto label_23bf50;
        case 0x23bf54u: goto label_23bf54;
        case 0x23bf58u: goto label_23bf58;
        case 0x23bf5cu: goto label_23bf5c;
        case 0x23bf60u: goto label_23bf60;
        case 0x23bf64u: goto label_23bf64;
        case 0x23bf68u: goto label_23bf68;
        case 0x23bf6cu: goto label_23bf6c;
        case 0x23bf70u: goto label_23bf70;
        case 0x23bf74u: goto label_23bf74;
        case 0x23bf78u: goto label_23bf78;
        case 0x23bf7cu: goto label_23bf7c;
        case 0x23bf80u: goto label_23bf80;
        case 0x23bf84u: goto label_23bf84;
        case 0x23bf88u: goto label_23bf88;
        case 0x23bf8cu: goto label_23bf8c;
        case 0x23bf90u: goto label_23bf90;
        case 0x23bf94u: goto label_23bf94;
        case 0x23bf98u: goto label_23bf98;
        case 0x23bf9cu: goto label_23bf9c;
        case 0x23bfa0u: goto label_23bfa0;
        case 0x23bfa4u: goto label_23bfa4;
        case 0x23bfa8u: goto label_23bfa8;
        case 0x23bfacu: goto label_23bfac;
        case 0x23bfb0u: goto label_23bfb0;
        case 0x23bfb4u: goto label_23bfb4;
        case 0x23bfb8u: goto label_23bfb8;
        case 0x23bfbcu: goto label_23bfbc;
        case 0x23bfc0u: goto label_23bfc0;
        case 0x23bfc4u: goto label_23bfc4;
        case 0x23bfc8u: goto label_23bfc8;
        case 0x23bfccu: goto label_23bfcc;
        case 0x23bfd0u: goto label_23bfd0;
        case 0x23bfd4u: goto label_23bfd4;
        case 0x23bfd8u: goto label_23bfd8;
        case 0x23bfdcu: goto label_23bfdc;
        case 0x23bfe0u: goto label_23bfe0;
        case 0x23bfe4u: goto label_23bfe4;
        case 0x23bfe8u: goto label_23bfe8;
        case 0x23bfecu: goto label_23bfec;
        case 0x23bff0u: goto label_23bff0;
        case 0x23bff4u: goto label_23bff4;
        case 0x23bff8u: goto label_23bff8;
        case 0x23bffcu: goto label_23bffc;
        case 0x23c000u: goto label_23c000;
        case 0x23c004u: goto label_23c004;
        case 0x23c008u: goto label_23c008;
        case 0x23c00cu: goto label_23c00c;
        case 0x23c010u: goto label_23c010;
        case 0x23c014u: goto label_23c014;
        case 0x23c018u: goto label_23c018;
        case 0x23c01cu: goto label_23c01c;
        case 0x23c020u: goto label_23c020;
        case 0x23c024u: goto label_23c024;
        case 0x23c028u: goto label_23c028;
        case 0x23c02cu: goto label_23c02c;
        case 0x23c030u: goto label_23c030;
        case 0x23c034u: goto label_23c034;
        case 0x23c038u: goto label_23c038;
        case 0x23c03cu: goto label_23c03c;
        case 0x23c040u: goto label_23c040;
        case 0x23c044u: goto label_23c044;
        case 0x23c048u: goto label_23c048;
        case 0x23c04cu: goto label_23c04c;
        case 0x23c050u: goto label_23c050;
        case 0x23c054u: goto label_23c054;
        case 0x23c058u: goto label_23c058;
        case 0x23c05cu: goto label_23c05c;
        case 0x23c060u: goto label_23c060;
        case 0x23c064u: goto label_23c064;
        case 0x23c068u: goto label_23c068;
        case 0x23c06cu: goto label_23c06c;
        case 0x23c070u: goto label_23c070;
        case 0x23c074u: goto label_23c074;
        case 0x23c078u: goto label_23c078;
        case 0x23c07cu: goto label_23c07c;
        case 0x23c080u: goto label_23c080;
        case 0x23c084u: goto label_23c084;
        case 0x23c088u: goto label_23c088;
        case 0x23c08cu: goto label_23c08c;
        case 0x23c090u: goto label_23c090;
        case 0x23c094u: goto label_23c094;
        case 0x23c098u: goto label_23c098;
        case 0x23c09cu: goto label_23c09c;
        case 0x23c0a0u: goto label_23c0a0;
        case 0x23c0a4u: goto label_23c0a4;
        case 0x23c0a8u: goto label_23c0a8;
        case 0x23c0acu: goto label_23c0ac;
        case 0x23c0b0u: goto label_23c0b0;
        case 0x23c0b4u: goto label_23c0b4;
        case 0x23c0b8u: goto label_23c0b8;
        case 0x23c0bcu: goto label_23c0bc;
        case 0x23c0c0u: goto label_23c0c0;
        case 0x23c0c4u: goto label_23c0c4;
        case 0x23c0c8u: goto label_23c0c8;
        case 0x23c0ccu: goto label_23c0cc;
        case 0x23c0d0u: goto label_23c0d0;
        case 0x23c0d4u: goto label_23c0d4;
        case 0x23c0d8u: goto label_23c0d8;
        case 0x23c0dcu: goto label_23c0dc;
        case 0x23c0e0u: goto label_23c0e0;
        case 0x23c0e4u: goto label_23c0e4;
        case 0x23c0e8u: goto label_23c0e8;
        case 0x23c0ecu: goto label_23c0ec;
        case 0x23c0f0u: goto label_23c0f0;
        case 0x23c0f4u: goto label_23c0f4;
        case 0x23c0f8u: goto label_23c0f8;
        case 0x23c0fcu: goto label_23c0fc;
        case 0x23c100u: goto label_23c100;
        case 0x23c104u: goto label_23c104;
        case 0x23c108u: goto label_23c108;
        case 0x23c10cu: goto label_23c10c;
        case 0x23c110u: goto label_23c110;
        case 0x23c114u: goto label_23c114;
        case 0x23c118u: goto label_23c118;
        case 0x23c11cu: goto label_23c11c;
        case 0x23c120u: goto label_23c120;
        case 0x23c124u: goto label_23c124;
        case 0x23c128u: goto label_23c128;
        case 0x23c12cu: goto label_23c12c;
        case 0x23c130u: goto label_23c130;
        case 0x23c134u: goto label_23c134;
        case 0x23c138u: goto label_23c138;
        case 0x23c13cu: goto label_23c13c;
        case 0x23c140u: goto label_23c140;
        case 0x23c144u: goto label_23c144;
        case 0x23c148u: goto label_23c148;
        case 0x23c14cu: goto label_23c14c;
        case 0x23c150u: goto label_23c150;
        case 0x23c154u: goto label_23c154;
        case 0x23c158u: goto label_23c158;
        case 0x23c15cu: goto label_23c15c;
        case 0x23c160u: goto label_23c160;
        case 0x23c164u: goto label_23c164;
        case 0x23c168u: goto label_23c168;
        case 0x23c16cu: goto label_23c16c;
        case 0x23c170u: goto label_23c170;
        case 0x23c174u: goto label_23c174;
        case 0x23c178u: goto label_23c178;
        case 0x23c17cu: goto label_23c17c;
        case 0x23c180u: goto label_23c180;
        case 0x23c184u: goto label_23c184;
        case 0x23c188u: goto label_23c188;
        case 0x23c18cu: goto label_23c18c;
        case 0x23c190u: goto label_23c190;
        case 0x23c194u: goto label_23c194;
        case 0x23c198u: goto label_23c198;
        case 0x23c19cu: goto label_23c19c;
        case 0x23c1a0u: goto label_23c1a0;
        case 0x23c1a4u: goto label_23c1a4;
        case 0x23c1a8u: goto label_23c1a8;
        case 0x23c1acu: goto label_23c1ac;
        case 0x23c1b0u: goto label_23c1b0;
        case 0x23c1b4u: goto label_23c1b4;
        case 0x23c1b8u: goto label_23c1b8;
        case 0x23c1bcu: goto label_23c1bc;
        case 0x23c1c0u: goto label_23c1c0;
        case 0x23c1c4u: goto label_23c1c4;
        case 0x23c1c8u: goto label_23c1c8;
        case 0x23c1ccu: goto label_23c1cc;
        case 0x23c1d0u: goto label_23c1d0;
        case 0x23c1d4u: goto label_23c1d4;
        case 0x23c1d8u: goto label_23c1d8;
        case 0x23c1dcu: goto label_23c1dc;
        case 0x23c1e0u: goto label_23c1e0;
        case 0x23c1e4u: goto label_23c1e4;
        case 0x23c1e8u: goto label_23c1e8;
        case 0x23c1ecu: goto label_23c1ec;
        case 0x23c1f0u: goto label_23c1f0;
        case 0x23c1f4u: goto label_23c1f4;
        case 0x23c1f8u: goto label_23c1f8;
        case 0x23c1fcu: goto label_23c1fc;
        case 0x23c200u: goto label_23c200;
        case 0x23c204u: goto label_23c204;
        case 0x23c208u: goto label_23c208;
        case 0x23c20cu: goto label_23c20c;
        case 0x23c210u: goto label_23c210;
        case 0x23c214u: goto label_23c214;
        case 0x23c218u: goto label_23c218;
        case 0x23c21cu: goto label_23c21c;
        case 0x23c220u: goto label_23c220;
        case 0x23c224u: goto label_23c224;
        case 0x23c228u: goto label_23c228;
        case 0x23c22cu: goto label_23c22c;
        case 0x23c230u: goto label_23c230;
        case 0x23c234u: goto label_23c234;
        case 0x23c238u: goto label_23c238;
        case 0x23c23cu: goto label_23c23c;
        case 0x23c240u: goto label_23c240;
        case 0x23c244u: goto label_23c244;
        case 0x23c248u: goto label_23c248;
        case 0x23c24cu: goto label_23c24c;
        case 0x23c250u: goto label_23c250;
        case 0x23c254u: goto label_23c254;
        case 0x23c258u: goto label_23c258;
        case 0x23c25cu: goto label_23c25c;
        case 0x23c260u: goto label_23c260;
        case 0x23c264u: goto label_23c264;
        case 0x23c268u: goto label_23c268;
        case 0x23c26cu: goto label_23c26c;
        case 0x23c270u: goto label_23c270;
        case 0x23c274u: goto label_23c274;
        case 0x23c278u: goto label_23c278;
        case 0x23c27cu: goto label_23c27c;
        case 0x23c280u: goto label_23c280;
        case 0x23c284u: goto label_23c284;
        case 0x23c288u: goto label_23c288;
        case 0x23c28cu: goto label_23c28c;
        case 0x23c290u: goto label_23c290;
        case 0x23c294u: goto label_23c294;
        case 0x23c298u: goto label_23c298;
        case 0x23c29cu: goto label_23c29c;
        case 0x23c2a0u: goto label_23c2a0;
        case 0x23c2a4u: goto label_23c2a4;
        case 0x23c2a8u: goto label_23c2a8;
        case 0x23c2acu: goto label_23c2ac;
        case 0x23c2b0u: goto label_23c2b0;
        case 0x23c2b4u: goto label_23c2b4;
        case 0x23c2b8u: goto label_23c2b8;
        case 0x23c2bcu: goto label_23c2bc;
        case 0x23c2c0u: goto label_23c2c0;
        case 0x23c2c4u: goto label_23c2c4;
        case 0x23c2c8u: goto label_23c2c8;
        case 0x23c2ccu: goto label_23c2cc;
        case 0x23c2d0u: goto label_23c2d0;
        case 0x23c2d4u: goto label_23c2d4;
        case 0x23c2d8u: goto label_23c2d8;
        case 0x23c2dcu: goto label_23c2dc;
        case 0x23c2e0u: goto label_23c2e0;
        case 0x23c2e4u: goto label_23c2e4;
        case 0x23c2e8u: goto label_23c2e8;
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c2f0u: goto label_23c2f0;
        case 0x23c2f4u: goto label_23c2f4;
        case 0x23c2f8u: goto label_23c2f8;
        case 0x23c2fcu: goto label_23c2fc;
        case 0x23c300u: goto label_23c300;
        case 0x23c304u: goto label_23c304;
        case 0x23c308u: goto label_23c308;
        case 0x23c30cu: goto label_23c30c;
        case 0x23c310u: goto label_23c310;
        case 0x23c314u: goto label_23c314;
        case 0x23c318u: goto label_23c318;
        case 0x23c31cu: goto label_23c31c;
        case 0x23c320u: goto label_23c320;
        case 0x23c324u: goto label_23c324;
        case 0x23c328u: goto label_23c328;
        case 0x23c32cu: goto label_23c32c;
        case 0x23c330u: goto label_23c330;
        case 0x23c334u: goto label_23c334;
        case 0x23c338u: goto label_23c338;
        case 0x23c33cu: goto label_23c33c;
        case 0x23c340u: goto label_23c340;
        case 0x23c344u: goto label_23c344;
        case 0x23c348u: goto label_23c348;
        case 0x23c34cu: goto label_23c34c;
        case 0x23c350u: goto label_23c350;
        case 0x23c354u: goto label_23c354;
        case 0x23c358u: goto label_23c358;
        case 0x23c35cu: goto label_23c35c;
        case 0x23c360u: goto label_23c360;
        case 0x23c364u: goto label_23c364;
        case 0x23c368u: goto label_23c368;
        case 0x23c36cu: goto label_23c36c;
        case 0x23c370u: goto label_23c370;
        case 0x23c374u: goto label_23c374;
        case 0x23c378u: goto label_23c378;
        case 0x23c37cu: goto label_23c37c;
        case 0x23c380u: goto label_23c380;
        case 0x23c384u: goto label_23c384;
        case 0x23c388u: goto label_23c388;
        case 0x23c38cu: goto label_23c38c;
        case 0x23c390u: goto label_23c390;
        case 0x23c394u: goto label_23c394;
        case 0x23c398u: goto label_23c398;
        case 0x23c39cu: goto label_23c39c;
        case 0x23c3a0u: goto label_23c3a0;
        case 0x23c3a4u: goto label_23c3a4;
        case 0x23c3a8u: goto label_23c3a8;
        case 0x23c3acu: goto label_23c3ac;
        case 0x23c3b0u: goto label_23c3b0;
        case 0x23c3b4u: goto label_23c3b4;
        case 0x23c3b8u: goto label_23c3b8;
        case 0x23c3bcu: goto label_23c3bc;
        case 0x23c3c0u: goto label_23c3c0;
        case 0x23c3c4u: goto label_23c3c4;
        case 0x23c3c8u: goto label_23c3c8;
        case 0x23c3ccu: goto label_23c3cc;
        case 0x23c3d0u: goto label_23c3d0;
        case 0x23c3d4u: goto label_23c3d4;
        case 0x23c3d8u: goto label_23c3d8;
        case 0x23c3dcu: goto label_23c3dc;
        case 0x23c3e0u: goto label_23c3e0;
        case 0x23c3e4u: goto label_23c3e4;
        case 0x23c3e8u: goto label_23c3e8;
        case 0x23c3ecu: goto label_23c3ec;
        case 0x23c3f0u: goto label_23c3f0;
        case 0x23c3f4u: goto label_23c3f4;
        case 0x23c3f8u: goto label_23c3f8;
        case 0x23c3fcu: goto label_23c3fc;
        case 0x23c400u: goto label_23c400;
        case 0x23c404u: goto label_23c404;
        case 0x23c408u: goto label_23c408;
        case 0x23c40cu: goto label_23c40c;
        case 0x23c410u: goto label_23c410;
        case 0x23c414u: goto label_23c414;
        case 0x23c418u: goto label_23c418;
        case 0x23c41cu: goto label_23c41c;
        case 0x23c420u: goto label_23c420;
        case 0x23c424u: goto label_23c424;
        case 0x23c428u: goto label_23c428;
        case 0x23c42cu: goto label_23c42c;
        case 0x23c430u: goto label_23c430;
        case 0x23c434u: goto label_23c434;
        case 0x23c438u: goto label_23c438;
        case 0x23c43cu: goto label_23c43c;
        case 0x23c440u: goto label_23c440;
        case 0x23c444u: goto label_23c444;
        case 0x23c448u: goto label_23c448;
        case 0x23c44cu: goto label_23c44c;
        case 0x23c450u: goto label_23c450;
        case 0x23c454u: goto label_23c454;
        case 0x23c458u: goto label_23c458;
        case 0x23c45cu: goto label_23c45c;
        case 0x23c460u: goto label_23c460;
        case 0x23c464u: goto label_23c464;
        case 0x23c468u: goto label_23c468;
        case 0x23c46cu: goto label_23c46c;
        case 0x23c470u: goto label_23c470;
        case 0x23c474u: goto label_23c474;
        case 0x23c478u: goto label_23c478;
        case 0x23c47cu: goto label_23c47c;
        case 0x23c480u: goto label_23c480;
        case 0x23c484u: goto label_23c484;
        case 0x23c488u: goto label_23c488;
        case 0x23c48cu: goto label_23c48c;
        case 0x23c490u: goto label_23c490;
        case 0x23c494u: goto label_23c494;
        case 0x23c498u: goto label_23c498;
        case 0x23c49cu: goto label_23c49c;
        case 0x23c4a0u: goto label_23c4a0;
        case 0x23c4a4u: goto label_23c4a4;
        case 0x23c4a8u: goto label_23c4a8;
        case 0x23c4acu: goto label_23c4ac;
        case 0x23c4b0u: goto label_23c4b0;
        case 0x23c4b4u: goto label_23c4b4;
        case 0x23c4b8u: goto label_23c4b8;
        case 0x23c4bcu: goto label_23c4bc;
        case 0x23c4c0u: goto label_23c4c0;
        case 0x23c4c4u: goto label_23c4c4;
        case 0x23c4c8u: goto label_23c4c8;
        case 0x23c4ccu: goto label_23c4cc;
        case 0x23c4d0u: goto label_23c4d0;
        case 0x23c4d4u: goto label_23c4d4;
        case 0x23c4d8u: goto label_23c4d8;
        case 0x23c4dcu: goto label_23c4dc;
        case 0x23c4e0u: goto label_23c4e0;
        case 0x23c4e4u: goto label_23c4e4;
        case 0x23c4e8u: goto label_23c4e8;
        case 0x23c4ecu: goto label_23c4ec;
        case 0x23c4f0u: goto label_23c4f0;
        case 0x23c4f4u: goto label_23c4f4;
        case 0x23c4f8u: goto label_23c4f8;
        case 0x23c4fcu: goto label_23c4fc;
        case 0x23c500u: goto label_23c500;
        case 0x23c504u: goto label_23c504;
        case 0x23c508u: goto label_23c508;
        case 0x23c50cu: goto label_23c50c;
        case 0x23c510u: goto label_23c510;
        case 0x23c514u: goto label_23c514;
        case 0x23c518u: goto label_23c518;
        case 0x23c51cu: goto label_23c51c;
        case 0x23c520u: goto label_23c520;
        case 0x23c524u: goto label_23c524;
        case 0x23c528u: goto label_23c528;
        case 0x23c52cu: goto label_23c52c;
        case 0x23c530u: goto label_23c530;
        case 0x23c534u: goto label_23c534;
        case 0x23c538u: goto label_23c538;
        case 0x23c53cu: goto label_23c53c;
        case 0x23c540u: goto label_23c540;
        case 0x23c544u: goto label_23c544;
        case 0x23c548u: goto label_23c548;
        case 0x23c54cu: goto label_23c54c;
        case 0x23c550u: goto label_23c550;
        case 0x23c554u: goto label_23c554;
        case 0x23c558u: goto label_23c558;
        case 0x23c55cu: goto label_23c55c;
        case 0x23c560u: goto label_23c560;
        case 0x23c564u: goto label_23c564;
        case 0x23c568u: goto label_23c568;
        case 0x23c56cu: goto label_23c56c;
        case 0x23c570u: goto label_23c570;
        case 0x23c574u: goto label_23c574;
        case 0x23c578u: goto label_23c578;
        case 0x23c57cu: goto label_23c57c;
        case 0x23c580u: goto label_23c580;
        case 0x23c584u: goto label_23c584;
        case 0x23c588u: goto label_23c588;
        case 0x23c58cu: goto label_23c58c;
        case 0x23c590u: goto label_23c590;
        case 0x23c594u: goto label_23c594;
        case 0x23c598u: goto label_23c598;
        case 0x23c59cu: goto label_23c59c;
        case 0x23c5a0u: goto label_23c5a0;
        case 0x23c5a4u: goto label_23c5a4;
        case 0x23c5a8u: goto label_23c5a8;
        case 0x23c5acu: goto label_23c5ac;
        case 0x23c5b0u: goto label_23c5b0;
        case 0x23c5b4u: goto label_23c5b4;
        case 0x23c5b8u: goto label_23c5b8;
        case 0x23c5bcu: goto label_23c5bc;
        case 0x23c5c0u: goto label_23c5c0;
        case 0x23c5c4u: goto label_23c5c4;
        case 0x23c5c8u: goto label_23c5c8;
        case 0x23c5ccu: goto label_23c5cc;
        case 0x23c5d0u: goto label_23c5d0;
        case 0x23c5d4u: goto label_23c5d4;
        case 0x23c5d8u: goto label_23c5d8;
        case 0x23c5dcu: goto label_23c5dc;
        case 0x23c5e0u: goto label_23c5e0;
        case 0x23c5e4u: goto label_23c5e4;
        case 0x23c5e8u: goto label_23c5e8;
        case 0x23c5ecu: goto label_23c5ec;
        case 0x23c5f0u: goto label_23c5f0;
        case 0x23c5f4u: goto label_23c5f4;
        case 0x23c5f8u: goto label_23c5f8;
        case 0x23c5fcu: goto label_23c5fc;
        case 0x23c600u: goto label_23c600;
        case 0x23c604u: goto label_23c604;
        case 0x23c608u: goto label_23c608;
        case 0x23c60cu: goto label_23c60c;
        case 0x23c610u: goto label_23c610;
        case 0x23c614u: goto label_23c614;
        case 0x23c618u: goto label_23c618;
        case 0x23c61cu: goto label_23c61c;
        case 0x23c620u: goto label_23c620;
        case 0x23c624u: goto label_23c624;
        case 0x23c628u: goto label_23c628;
        case 0x23c62cu: goto label_23c62c;
        case 0x23c630u: goto label_23c630;
        case 0x23c634u: goto label_23c634;
        case 0x23c638u: goto label_23c638;
        case 0x23c63cu: goto label_23c63c;
        case 0x23c640u: goto label_23c640;
        case 0x23c644u: goto label_23c644;
        case 0x23c648u: goto label_23c648;
        case 0x23c64cu: goto label_23c64c;
        case 0x23c650u: goto label_23c650;
        case 0x23c654u: goto label_23c654;
        case 0x23c658u: goto label_23c658;
        case 0x23c65cu: goto label_23c65c;
        case 0x23c660u: goto label_23c660;
        case 0x23c664u: goto label_23c664;
        case 0x23c668u: goto label_23c668;
        case 0x23c66cu: goto label_23c66c;
        case 0x23c670u: goto label_23c670;
        case 0x23c674u: goto label_23c674;
        case 0x23c678u: goto label_23c678;
        case 0x23c67cu: goto label_23c67c;
        case 0x23c680u: goto label_23c680;
        case 0x23c684u: goto label_23c684;
        case 0x23c688u: goto label_23c688;
        case 0x23c68cu: goto label_23c68c;
        case 0x23c690u: goto label_23c690;
        case 0x23c694u: goto label_23c694;
        case 0x23c698u: goto label_23c698;
        case 0x23c69cu: goto label_23c69c;
        case 0x23c6a0u: goto label_23c6a0;
        case 0x23c6a4u: goto label_23c6a4;
        case 0x23c6a8u: goto label_23c6a8;
        case 0x23c6acu: goto label_23c6ac;
        case 0x23c6b0u: goto label_23c6b0;
        case 0x23c6b4u: goto label_23c6b4;
        case 0x23c6b8u: goto label_23c6b8;
        case 0x23c6bcu: goto label_23c6bc;
        case 0x23c6c0u: goto label_23c6c0;
        case 0x23c6c4u: goto label_23c6c4;
        case 0x23c6c8u: goto label_23c6c8;
        case 0x23c6ccu: goto label_23c6cc;
        case 0x23c6d0u: goto label_23c6d0;
        case 0x23c6d4u: goto label_23c6d4;
        case 0x23c6d8u: goto label_23c6d8;
        case 0x23c6dcu: goto label_23c6dc;
        case 0x23c6e0u: goto label_23c6e0;
        case 0x23c6e4u: goto label_23c6e4;
        case 0x23c6e8u: goto label_23c6e8;
        case 0x23c6ecu: goto label_23c6ec;
        case 0x23c6f0u: goto label_23c6f0;
        case 0x23c6f4u: goto label_23c6f4;
        case 0x23c6f8u: goto label_23c6f8;
        case 0x23c6fcu: goto label_23c6fc;
        case 0x23c700u: goto label_23c700;
        case 0x23c704u: goto label_23c704;
        case 0x23c708u: goto label_23c708;
        case 0x23c70cu: goto label_23c70c;
        case 0x23c710u: goto label_23c710;
        case 0x23c714u: goto label_23c714;
        case 0x23c718u: goto label_23c718;
        case 0x23c71cu: goto label_23c71c;
        case 0x23c720u: goto label_23c720;
        case 0x23c724u: goto label_23c724;
        case 0x23c728u: goto label_23c728;
        case 0x23c72cu: goto label_23c72c;
        case 0x23c730u: goto label_23c730;
        case 0x23c734u: goto label_23c734;
        case 0x23c738u: goto label_23c738;
        case 0x23c73cu: goto label_23c73c;
        case 0x23c740u: goto label_23c740;
        case 0x23c744u: goto label_23c744;
        case 0x23c748u: goto label_23c748;
        case 0x23c74cu: goto label_23c74c;
        case 0x23c750u: goto label_23c750;
        case 0x23c754u: goto label_23c754;
        case 0x23c758u: goto label_23c758;
        case 0x23c75cu: goto label_23c75c;
        case 0x23c760u: goto label_23c760;
        case 0x23c764u: goto label_23c764;
        case 0x23c768u: goto label_23c768;
        case 0x23c76cu: goto label_23c76c;
        case 0x23c770u: goto label_23c770;
        case 0x23c774u: goto label_23c774;
        case 0x23c778u: goto label_23c778;
        case 0x23c77cu: goto label_23c77c;
        case 0x23c780u: goto label_23c780;
        case 0x23c784u: goto label_23c784;
        case 0x23c788u: goto label_23c788;
        case 0x23c78cu: goto label_23c78c;
        case 0x23c790u: goto label_23c790;
        case 0x23c794u: goto label_23c794;
        case 0x23c798u: goto label_23c798;
        case 0x23c79cu: goto label_23c79c;
        case 0x23c7a0u: goto label_23c7a0;
        case 0x23c7a4u: goto label_23c7a4;
        case 0x23c7a8u: goto label_23c7a8;
        case 0x23c7acu: goto label_23c7ac;
        case 0x23c7b0u: goto label_23c7b0;
        case 0x23c7b4u: goto label_23c7b4;
        case 0x23c7b8u: goto label_23c7b8;
        case 0x23c7bcu: goto label_23c7bc;
        case 0x23c7c0u: goto label_23c7c0;
        case 0x23c7c4u: goto label_23c7c4;
        case 0x23c7c8u: goto label_23c7c8;
        case 0x23c7ccu: goto label_23c7cc;
        case 0x23c7d0u: goto label_23c7d0;
        case 0x23c7d4u: goto label_23c7d4;
        case 0x23c7d8u: goto label_23c7d8;
        case 0x23c7dcu: goto label_23c7dc;
        case 0x23c7e0u: goto label_23c7e0;
        case 0x23c7e4u: goto label_23c7e4;
        case 0x23c7e8u: goto label_23c7e8;
        case 0x23c7ecu: goto label_23c7ec;
        case 0x23c7f0u: goto label_23c7f0;
        case 0x23c7f4u: goto label_23c7f4;
        case 0x23c7f8u: goto label_23c7f8;
        case 0x23c7fcu: goto label_23c7fc;
        case 0x23c800u: goto label_23c800;
        case 0x23c804u: goto label_23c804;
        case 0x23c808u: goto label_23c808;
        case 0x23c80cu: goto label_23c80c;
        case 0x23c810u: goto label_23c810;
        case 0x23c814u: goto label_23c814;
        case 0x23c818u: goto label_23c818;
        case 0x23c81cu: goto label_23c81c;
        case 0x23c820u: goto label_23c820;
        case 0x23c824u: goto label_23c824;
        case 0x23c828u: goto label_23c828;
        case 0x23c82cu: goto label_23c82c;
        case 0x23c830u: goto label_23c830;
        case 0x23c834u: goto label_23c834;
        case 0x23c838u: goto label_23c838;
        case 0x23c83cu: goto label_23c83c;
        case 0x23c840u: goto label_23c840;
        case 0x23c844u: goto label_23c844;
        case 0x23c848u: goto label_23c848;
        case 0x23c84cu: goto label_23c84c;
        case 0x23c850u: goto label_23c850;
        case 0x23c854u: goto label_23c854;
        case 0x23c858u: goto label_23c858;
        case 0x23c85cu: goto label_23c85c;
        case 0x23c860u: goto label_23c860;
        case 0x23c864u: goto label_23c864;
        case 0x23c868u: goto label_23c868;
        case 0x23c86cu: goto label_23c86c;
        case 0x23c870u: goto label_23c870;
        case 0x23c874u: goto label_23c874;
        case 0x23c878u: goto label_23c878;
        case 0x23c87cu: goto label_23c87c;
        case 0x23c880u: goto label_23c880;
        case 0x23c884u: goto label_23c884;
        case 0x23c888u: goto label_23c888;
        case 0x23c88cu: goto label_23c88c;
        case 0x23c890u: goto label_23c890;
        case 0x23c894u: goto label_23c894;
        case 0x23c898u: goto label_23c898;
        case 0x23c89cu: goto label_23c89c;
        case 0x23c8a0u: goto label_23c8a0;
        case 0x23c8a4u: goto label_23c8a4;
        case 0x23c8a8u: goto label_23c8a8;
        case 0x23c8acu: goto label_23c8ac;
        case 0x23c8b0u: goto label_23c8b0;
        case 0x23c8b4u: goto label_23c8b4;
        case 0x23c8b8u: goto label_23c8b8;
        case 0x23c8bcu: goto label_23c8bc;
        case 0x23c8c0u: goto label_23c8c0;
        case 0x23c8c4u: goto label_23c8c4;
        case 0x23c8c8u: goto label_23c8c8;
        case 0x23c8ccu: goto label_23c8cc;
        case 0x23c8d0u: goto label_23c8d0;
        case 0x23c8d4u: goto label_23c8d4;
        case 0x23c8d8u: goto label_23c8d8;
        case 0x23c8dcu: goto label_23c8dc;
        case 0x23c8e0u: goto label_23c8e0;
        case 0x23c8e4u: goto label_23c8e4;
        case 0x23c8e8u: goto label_23c8e8;
        case 0x23c8ecu: goto label_23c8ec;
        case 0x23c8f0u: goto label_23c8f0;
        case 0x23c8f4u: goto label_23c8f4;
        case 0x23c8f8u: goto label_23c8f8;
        case 0x23c8fcu: goto label_23c8fc;
        case 0x23c900u: goto label_23c900;
        case 0x23c904u: goto label_23c904;
        case 0x23c908u: goto label_23c908;
        case 0x23c90cu: goto label_23c90c;
        case 0x23c910u: goto label_23c910;
        case 0x23c914u: goto label_23c914;
        case 0x23c918u: goto label_23c918;
        case 0x23c91cu: goto label_23c91c;
        case 0x23c920u: goto label_23c920;
        case 0x23c924u: goto label_23c924;
        case 0x23c928u: goto label_23c928;
        case 0x23c92cu: goto label_23c92c;
        case 0x23c930u: goto label_23c930;
        case 0x23c934u: goto label_23c934;
        case 0x23c938u: goto label_23c938;
        case 0x23c93cu: goto label_23c93c;
        case 0x23c940u: goto label_23c940;
        case 0x23c944u: goto label_23c944;
        case 0x23c948u: goto label_23c948;
        case 0x23c94cu: goto label_23c94c;
        case 0x23c950u: goto label_23c950;
        case 0x23c954u: goto label_23c954;
        case 0x23c958u: goto label_23c958;
        case 0x23c95cu: goto label_23c95c;
        case 0x23c960u: goto label_23c960;
        case 0x23c964u: goto label_23c964;
        case 0x23c968u: goto label_23c968;
        case 0x23c96cu: goto label_23c96c;
        case 0x23c970u: goto label_23c970;
        case 0x23c974u: goto label_23c974;
        case 0x23c978u: goto label_23c978;
        case 0x23c97cu: goto label_23c97c;
        case 0x23c980u: goto label_23c980;
        case 0x23c984u: goto label_23c984;
        case 0x23c988u: goto label_23c988;
        case 0x23c98cu: goto label_23c98c;
        case 0x23c990u: goto label_23c990;
        case 0x23c994u: goto label_23c994;
        case 0x23c998u: goto label_23c998;
        case 0x23c99cu: goto label_23c99c;
        case 0x23c9a0u: goto label_23c9a0;
        case 0x23c9a4u: goto label_23c9a4;
        case 0x23c9a8u: goto label_23c9a8;
        case 0x23c9acu: goto label_23c9ac;
        case 0x23c9b0u: goto label_23c9b0;
        case 0x23c9b4u: goto label_23c9b4;
        case 0x23c9b8u: goto label_23c9b8;
        case 0x23c9bcu: goto label_23c9bc;
        case 0x23c9c0u: goto label_23c9c0;
        case 0x23c9c4u: goto label_23c9c4;
        case 0x23c9c8u: goto label_23c9c8;
        case 0x23c9ccu: goto label_23c9cc;
        case 0x23c9d0u: goto label_23c9d0;
        case 0x23c9d4u: goto label_23c9d4;
        case 0x23c9d8u: goto label_23c9d8;
        case 0x23c9dcu: goto label_23c9dc;
        case 0x23c9e0u: goto label_23c9e0;
        case 0x23c9e4u: goto label_23c9e4;
        case 0x23c9e8u: goto label_23c9e8;
        case 0x23c9ecu: goto label_23c9ec;
        case 0x23c9f0u: goto label_23c9f0;
        case 0x23c9f4u: goto label_23c9f4;
        case 0x23c9f8u: goto label_23c9f8;
        case 0x23c9fcu: goto label_23c9fc;
        case 0x23ca00u: goto label_23ca00;
        case 0x23ca04u: goto label_23ca04;
        case 0x23ca08u: goto label_23ca08;
        case 0x23ca0cu: goto label_23ca0c;
        case 0x23ca10u: goto label_23ca10;
        case 0x23ca14u: goto label_23ca14;
        case 0x23ca18u: goto label_23ca18;
        case 0x23ca1cu: goto label_23ca1c;
        case 0x23ca20u: goto label_23ca20;
        case 0x23ca24u: goto label_23ca24;
        case 0x23ca28u: goto label_23ca28;
        case 0x23ca2cu: goto label_23ca2c;
        case 0x23ca30u: goto label_23ca30;
        case 0x23ca34u: goto label_23ca34;
        case 0x23ca38u: goto label_23ca38;
        case 0x23ca3cu: goto label_23ca3c;
        case 0x23ca40u: goto label_23ca40;
        case 0x23ca44u: goto label_23ca44;
        case 0x23ca48u: goto label_23ca48;
        case 0x23ca4cu: goto label_23ca4c;
        case 0x23ca50u: goto label_23ca50;
        case 0x23ca54u: goto label_23ca54;
        case 0x23ca58u: goto label_23ca58;
        case 0x23ca5cu: goto label_23ca5c;
        case 0x23ca60u: goto label_23ca60;
        case 0x23ca64u: goto label_23ca64;
        case 0x23ca68u: goto label_23ca68;
        case 0x23ca6cu: goto label_23ca6c;
        case 0x23ca70u: goto label_23ca70;
        case 0x23ca74u: goto label_23ca74;
        case 0x23ca78u: goto label_23ca78;
        case 0x23ca7cu: goto label_23ca7c;
        case 0x23ca80u: goto label_23ca80;
        case 0x23ca84u: goto label_23ca84;
        case 0x23ca88u: goto label_23ca88;
        case 0x23ca8cu: goto label_23ca8c;
        case 0x23ca90u: goto label_23ca90;
        case 0x23ca94u: goto label_23ca94;
        case 0x23ca98u: goto label_23ca98;
        case 0x23ca9cu: goto label_23ca9c;
        case 0x23caa0u: goto label_23caa0;
        case 0x23caa4u: goto label_23caa4;
        case 0x23caa8u: goto label_23caa8;
        case 0x23caacu: goto label_23caac;
        case 0x23cab0u: goto label_23cab0;
        case 0x23cab4u: goto label_23cab4;
        case 0x23cab8u: goto label_23cab8;
        case 0x23cabcu: goto label_23cabc;
        case 0x23cac0u: goto label_23cac0;
        case 0x23cac4u: goto label_23cac4;
        case 0x23cac8u: goto label_23cac8;
        case 0x23caccu: goto label_23cacc;
        case 0x23cad0u: goto label_23cad0;
        case 0x23cad4u: goto label_23cad4;
        case 0x23cad8u: goto label_23cad8;
        case 0x23cadcu: goto label_23cadc;
        case 0x23cae0u: goto label_23cae0;
        case 0x23cae4u: goto label_23cae4;
        case 0x23cae8u: goto label_23cae8;
        case 0x23caecu: goto label_23caec;
        case 0x23caf0u: goto label_23caf0;
        case 0x23caf4u: goto label_23caf4;
        case 0x23caf8u: goto label_23caf8;
        case 0x23cafcu: goto label_23cafc;
        case 0x23cb00u: goto label_23cb00;
        case 0x23cb04u: goto label_23cb04;
        case 0x23cb08u: goto label_23cb08;
        case 0x23cb0cu: goto label_23cb0c;
        case 0x23cb10u: goto label_23cb10;
        case 0x23cb14u: goto label_23cb14;
        case 0x23cb18u: goto label_23cb18;
        case 0x23cb1cu: goto label_23cb1c;
        case 0x23cb20u: goto label_23cb20;
        case 0x23cb24u: goto label_23cb24;
        case 0x23cb28u: goto label_23cb28;
        case 0x23cb2cu: goto label_23cb2c;
        case 0x23cb30u: goto label_23cb30;
        case 0x23cb34u: goto label_23cb34;
        case 0x23cb38u: goto label_23cb38;
        case 0x23cb3cu: goto label_23cb3c;
        case 0x23cb40u: goto label_23cb40;
        case 0x23cb44u: goto label_23cb44;
        case 0x23cb48u: goto label_23cb48;
        case 0x23cb4cu: goto label_23cb4c;
        case 0x23cb50u: goto label_23cb50;
        case 0x23cb54u: goto label_23cb54;
        case 0x23cb58u: goto label_23cb58;
        case 0x23cb5cu: goto label_23cb5c;
        case 0x23cb60u: goto label_23cb60;
        case 0x23cb64u: goto label_23cb64;
        case 0x23cb68u: goto label_23cb68;
        case 0x23cb6cu: goto label_23cb6c;
        case 0x23cb70u: goto label_23cb70;
        case 0x23cb74u: goto label_23cb74;
        case 0x23cb78u: goto label_23cb78;
        case 0x23cb7cu: goto label_23cb7c;
        case 0x23cb80u: goto label_23cb80;
        case 0x23cb84u: goto label_23cb84;
        case 0x23cb88u: goto label_23cb88;
        case 0x23cb8cu: goto label_23cb8c;
        case 0x23cb90u: goto label_23cb90;
        case 0x23cb94u: goto label_23cb94;
        case 0x23cb98u: goto label_23cb98;
        case 0x23cb9cu: goto label_23cb9c;
        case 0x23cba0u: goto label_23cba0;
        case 0x23cba4u: goto label_23cba4;
        case 0x23cba8u: goto label_23cba8;
        case 0x23cbacu: goto label_23cbac;
        case 0x23cbb0u: goto label_23cbb0;
        case 0x23cbb4u: goto label_23cbb4;
        case 0x23cbb8u: goto label_23cbb8;
        case 0x23cbbcu: goto label_23cbbc;
        case 0x23cbc0u: goto label_23cbc0;
        case 0x23cbc4u: goto label_23cbc4;
        case 0x23cbc8u: goto label_23cbc8;
        case 0x23cbccu: goto label_23cbcc;
        case 0x23cbd0u: goto label_23cbd0;
        case 0x23cbd4u: goto label_23cbd4;
        case 0x23cbd8u: goto label_23cbd8;
        case 0x23cbdcu: goto label_23cbdc;
        case 0x23cbe0u: goto label_23cbe0;
        case 0x23cbe4u: goto label_23cbe4;
        case 0x23cbe8u: goto label_23cbe8;
        case 0x23cbecu: goto label_23cbec;
        case 0x23cbf0u: goto label_23cbf0;
        case 0x23cbf4u: goto label_23cbf4;
        case 0x23cbf8u: goto label_23cbf8;
        case 0x23cbfcu: goto label_23cbfc;
        case 0x23cc00u: goto label_23cc00;
        case 0x23cc04u: goto label_23cc04;
        case 0x23cc08u: goto label_23cc08;
        case 0x23cc0cu: goto label_23cc0c;
        case 0x23cc10u: goto label_23cc10;
        case 0x23cc14u: goto label_23cc14;
        case 0x23cc18u: goto label_23cc18;
        case 0x23cc1cu: goto label_23cc1c;
        case 0x23cc20u: goto label_23cc20;
        case 0x23cc24u: goto label_23cc24;
        case 0x23cc28u: goto label_23cc28;
        case 0x23cc2cu: goto label_23cc2c;
        case 0x23cc30u: goto label_23cc30;
        case 0x23cc34u: goto label_23cc34;
        case 0x23cc38u: goto label_23cc38;
        case 0x23cc3cu: goto label_23cc3c;
        case 0x23cc40u: goto label_23cc40;
        case 0x23cc44u: goto label_23cc44;
        case 0x23cc48u: goto label_23cc48;
        case 0x23cc4cu: goto label_23cc4c;
        case 0x23cc50u: goto label_23cc50;
        case 0x23cc54u: goto label_23cc54;
        case 0x23cc58u: goto label_23cc58;
        case 0x23cc5cu: goto label_23cc5c;
        case 0x23cc60u: goto label_23cc60;
        case 0x23cc64u: goto label_23cc64;
        case 0x23cc68u: goto label_23cc68;
        case 0x23cc6cu: goto label_23cc6c;
        case 0x23cc70u: goto label_23cc70;
        case 0x23cc74u: goto label_23cc74;
        case 0x23cc78u: goto label_23cc78;
        case 0x23cc7cu: goto label_23cc7c;
        case 0x23cc80u: goto label_23cc80;
        case 0x23cc84u: goto label_23cc84;
        case 0x23cc88u: goto label_23cc88;
        case 0x23cc8cu: goto label_23cc8c;
        case 0x23cc90u: goto label_23cc90;
        case 0x23cc94u: goto label_23cc94;
        case 0x23cc98u: goto label_23cc98;
        case 0x23cc9cu: goto label_23cc9c;
        case 0x23cca0u: goto label_23cca0;
        case 0x23cca4u: goto label_23cca4;
        case 0x23cca8u: goto label_23cca8;
        case 0x23ccacu: goto label_23ccac;
        case 0x23ccb0u: goto label_23ccb0;
        case 0x23ccb4u: goto label_23ccb4;
        case 0x23ccb8u: goto label_23ccb8;
        case 0x23ccbcu: goto label_23ccbc;
        case 0x23ccc0u: goto label_23ccc0;
        case 0x23ccc4u: goto label_23ccc4;
        case 0x23ccc8u: goto label_23ccc8;
        case 0x23ccccu: goto label_23cccc;
        case 0x23ccd0u: goto label_23ccd0;
        case 0x23ccd4u: goto label_23ccd4;
        case 0x23ccd8u: goto label_23ccd8;
        case 0x23ccdcu: goto label_23ccdc;
        case 0x23cce0u: goto label_23cce0;
        case 0x23cce4u: goto label_23cce4;
        case 0x23cce8u: goto label_23cce8;
        case 0x23ccecu: goto label_23ccec;
        case 0x23ccf0u: goto label_23ccf0;
        case 0x23ccf4u: goto label_23ccf4;
        case 0x23ccf8u: goto label_23ccf8;
        case 0x23ccfcu: goto label_23ccfc;
        case 0x23cd00u: goto label_23cd00;
        case 0x23cd04u: goto label_23cd04;
        case 0x23cd08u: goto label_23cd08;
        case 0x23cd0cu: goto label_23cd0c;
        case 0x23cd10u: goto label_23cd10;
        case 0x23cd14u: goto label_23cd14;
        case 0x23cd18u: goto label_23cd18;
        case 0x23cd1cu: goto label_23cd1c;
        case 0x23cd20u: goto label_23cd20;
        case 0x23cd24u: goto label_23cd24;
        case 0x23cd28u: goto label_23cd28;
        case 0x23cd2cu: goto label_23cd2c;
        case 0x23cd30u: goto label_23cd30;
        case 0x23cd34u: goto label_23cd34;
        case 0x23cd38u: goto label_23cd38;
        case 0x23cd3cu: goto label_23cd3c;
        case 0x23cd40u: goto label_23cd40;
        case 0x23cd44u: goto label_23cd44;
        case 0x23cd48u: goto label_23cd48;
        case 0x23cd4cu: goto label_23cd4c;
        case 0x23cd50u: goto label_23cd50;
        case 0x23cd54u: goto label_23cd54;
        case 0x23cd58u: goto label_23cd58;
        case 0x23cd5cu: goto label_23cd5c;
        case 0x23cd60u: goto label_23cd60;
        case 0x23cd64u: goto label_23cd64;
        case 0x23cd68u: goto label_23cd68;
        case 0x23cd6cu: goto label_23cd6c;
        case 0x23cd70u: goto label_23cd70;
        case 0x23cd74u: goto label_23cd74;
        case 0x23cd78u: goto label_23cd78;
        case 0x23cd7cu: goto label_23cd7c;
        case 0x23cd80u: goto label_23cd80;
        case 0x23cd84u: goto label_23cd84;
        case 0x23cd88u: goto label_23cd88;
        case 0x23cd8cu: goto label_23cd8c;
        case 0x23cd90u: goto label_23cd90;
        case 0x23cd94u: goto label_23cd94;
        case 0x23cd98u: goto label_23cd98;
        case 0x23cd9cu: goto label_23cd9c;
        case 0x23cda0u: goto label_23cda0;
        case 0x23cda4u: goto label_23cda4;
        case 0x23cda8u: goto label_23cda8;
        case 0x23cdacu: goto label_23cdac;
        case 0x23cdb0u: goto label_23cdb0;
        case 0x23cdb4u: goto label_23cdb4;
        case 0x23cdb8u: goto label_23cdb8;
        case 0x23cdbcu: goto label_23cdbc;
        case 0x23cdc0u: goto label_23cdc0;
        case 0x23cdc4u: goto label_23cdc4;
        case 0x23cdc8u: goto label_23cdc8;
        case 0x23cdccu: goto label_23cdcc;
        case 0x23cdd0u: goto label_23cdd0;
        case 0x23cdd4u: goto label_23cdd4;
        case 0x23cdd8u: goto label_23cdd8;
        case 0x23cddcu: goto label_23cddc;
        case 0x23cde0u: goto label_23cde0;
        case 0x23cde4u: goto label_23cde4;
        case 0x23cde8u: goto label_23cde8;
        case 0x23cdecu: goto label_23cdec;
        case 0x23cdf0u: goto label_23cdf0;
        case 0x23cdf4u: goto label_23cdf4;
        case 0x23cdf8u: goto label_23cdf8;
        case 0x23cdfcu: goto label_23cdfc;
        case 0x23ce00u: goto label_23ce00;
        case 0x23ce04u: goto label_23ce04;
        case 0x23ce08u: goto label_23ce08;
        case 0x23ce0cu: goto label_23ce0c;
        case 0x23ce10u: goto label_23ce10;
        case 0x23ce14u: goto label_23ce14;
        case 0x23ce18u: goto label_23ce18;
        case 0x23ce1cu: goto label_23ce1c;
        case 0x23ce20u: goto label_23ce20;
        case 0x23ce24u: goto label_23ce24;
        case 0x23ce28u: goto label_23ce28;
        case 0x23ce2cu: goto label_23ce2c;
        case 0x23ce30u: goto label_23ce30;
        case 0x23ce34u: goto label_23ce34;
        case 0x23ce38u: goto label_23ce38;
        case 0x23ce3cu: goto label_23ce3c;
        case 0x23ce40u: goto label_23ce40;
        case 0x23ce44u: goto label_23ce44;
        case 0x23ce48u: goto label_23ce48;
        case 0x23ce4cu: goto label_23ce4c;
        case 0x23ce50u: goto label_23ce50;
        case 0x23ce54u: goto label_23ce54;
        case 0x23ce58u: goto label_23ce58;
        case 0x23ce5cu: goto label_23ce5c;
        case 0x23ce60u: goto label_23ce60;
        case 0x23ce64u: goto label_23ce64;
        case 0x23ce68u: goto label_23ce68;
        case 0x23ce6cu: goto label_23ce6c;
        case 0x23ce70u: goto label_23ce70;
        case 0x23ce74u: goto label_23ce74;
        case 0x23ce78u: goto label_23ce78;
        case 0x23ce7cu: goto label_23ce7c;
        case 0x23ce80u: goto label_23ce80;
        case 0x23ce84u: goto label_23ce84;
        case 0x23ce88u: goto label_23ce88;
        case 0x23ce8cu: goto label_23ce8c;
        case 0x23ce90u: goto label_23ce90;
        case 0x23ce94u: goto label_23ce94;
        case 0x23ce98u: goto label_23ce98;
        case 0x23ce9cu: goto label_23ce9c;
        case 0x23cea0u: goto label_23cea0;
        case 0x23cea4u: goto label_23cea4;
        case 0x23cea8u: goto label_23cea8;
        case 0x23ceacu: goto label_23ceac;
        case 0x23ceb0u: goto label_23ceb0;
        case 0x23ceb4u: goto label_23ceb4;
        case 0x23ceb8u: goto label_23ceb8;
        case 0x23cebcu: goto label_23cebc;
        case 0x23cec0u: goto label_23cec0;
        case 0x23cec4u: goto label_23cec4;
        case 0x23cec8u: goto label_23cec8;
        case 0x23ceccu: goto label_23cecc;
        case 0x23ced0u: goto label_23ced0;
        case 0x23ced4u: goto label_23ced4;
        case 0x23ced8u: goto label_23ced8;
        case 0x23cedcu: goto label_23cedc;
        case 0x23cee0u: goto label_23cee0;
        case 0x23cee4u: goto label_23cee4;
        case 0x23cee8u: goto label_23cee8;
        case 0x23ceecu: goto label_23ceec;
        case 0x23cef0u: goto label_23cef0;
        case 0x23cef4u: goto label_23cef4;
        case 0x23cef8u: goto label_23cef8;
        case 0x23cefcu: goto label_23cefc;
        case 0x23cf00u: goto label_23cf00;
        case 0x23cf04u: goto label_23cf04;
        case 0x23cf08u: goto label_23cf08;
        case 0x23cf0cu: goto label_23cf0c;
        case 0x23cf10u: goto label_23cf10;
        case 0x23cf14u: goto label_23cf14;
        case 0x23cf18u: goto label_23cf18;
        case 0x23cf1cu: goto label_23cf1c;
        case 0x23cf20u: goto label_23cf20;
        case 0x23cf24u: goto label_23cf24;
        case 0x23cf28u: goto label_23cf28;
        case 0x23cf2cu: goto label_23cf2c;
        case 0x23cf30u: goto label_23cf30;
        case 0x23cf34u: goto label_23cf34;
        case 0x23cf38u: goto label_23cf38;
        case 0x23cf3cu: goto label_23cf3c;
        case 0x23cf40u: goto label_23cf40;
        case 0x23cf44u: goto label_23cf44;
        case 0x23cf48u: goto label_23cf48;
        case 0x23cf4cu: goto label_23cf4c;
        case 0x23cf50u: goto label_23cf50;
        case 0x23cf54u: goto label_23cf54;
        case 0x23cf58u: goto label_23cf58;
        case 0x23cf5cu: goto label_23cf5c;
        case 0x23cf60u: goto label_23cf60;
        case 0x23cf64u: goto label_23cf64;
        case 0x23cf68u: goto label_23cf68;
        case 0x23cf6cu: goto label_23cf6c;
        case 0x23cf70u: goto label_23cf70;
        case 0x23cf74u: goto label_23cf74;
        case 0x23cf78u: goto label_23cf78;
        case 0x23cf7cu: goto label_23cf7c;
        case 0x23cf80u: goto label_23cf80;
        case 0x23cf84u: goto label_23cf84;
        case 0x23cf88u: goto label_23cf88;
        case 0x23cf8cu: goto label_23cf8c;
        case 0x23cf90u: goto label_23cf90;
        case 0x23cf94u: goto label_23cf94;
        case 0x23cf98u: goto label_23cf98;
        case 0x23cf9cu: goto label_23cf9c;
        case 0x23cfa0u: goto label_23cfa0;
        case 0x23cfa4u: goto label_23cfa4;
        case 0x23cfa8u: goto label_23cfa8;
        case 0x23cfacu: goto label_23cfac;
        case 0x23cfb0u: goto label_23cfb0;
        case 0x23cfb4u: goto label_23cfb4;
        case 0x23cfb8u: goto label_23cfb8;
        case 0x23cfbcu: goto label_23cfbc;
        case 0x23cfc0u: goto label_23cfc0;
        case 0x23cfc4u: goto label_23cfc4;
        case 0x23cfc8u: goto label_23cfc8;
        case 0x23cfccu: goto label_23cfcc;
        case 0x23cfd0u: goto label_23cfd0;
        case 0x23cfd4u: goto label_23cfd4;
        case 0x23cfd8u: goto label_23cfd8;
        case 0x23cfdcu: goto label_23cfdc;
        case 0x23cfe0u: goto label_23cfe0;
        case 0x23cfe4u: goto label_23cfe4;
        case 0x23cfe8u: goto label_23cfe8;
        case 0x23cfecu: goto label_23cfec;
        case 0x23cff0u: goto label_23cff0;
        case 0x23cff4u: goto label_23cff4;
        case 0x23cff8u: goto label_23cff8;
        case 0x23cffcu: goto label_23cffc;
        case 0x23d000u: goto label_23d000;
        case 0x23d004u: goto label_23d004;
        case 0x23d008u: goto label_23d008;
        case 0x23d00cu: goto label_23d00c;
        case 0x23d010u: goto label_23d010;
        case 0x23d014u: goto label_23d014;
        case 0x23d018u: goto label_23d018;
        case 0x23d01cu: goto label_23d01c;
        case 0x23d020u: goto label_23d020;
        case 0x23d024u: goto label_23d024;
        case 0x23d028u: goto label_23d028;
        case 0x23d02cu: goto label_23d02c;
        case 0x23d030u: goto label_23d030;
        case 0x23d034u: goto label_23d034;
        case 0x23d038u: goto label_23d038;
        case 0x23d03cu: goto label_23d03c;
        case 0x23d040u: goto label_23d040;
        case 0x23d044u: goto label_23d044;
        case 0x23d048u: goto label_23d048;
        case 0x23d04cu: goto label_23d04c;
        case 0x23d050u: goto label_23d050;
        case 0x23d054u: goto label_23d054;
        case 0x23d058u: goto label_23d058;
        case 0x23d05cu: goto label_23d05c;
        case 0x23d060u: goto label_23d060;
        case 0x23d064u: goto label_23d064;
        case 0x23d068u: goto label_23d068;
        case 0x23d06cu: goto label_23d06c;
        case 0x23d070u: goto label_23d070;
        case 0x23d074u: goto label_23d074;
        case 0x23d078u: goto label_23d078;
        case 0x23d07cu: goto label_23d07c;
        case 0x23d080u: goto label_23d080;
        case 0x23d084u: goto label_23d084;
        case 0x23d088u: goto label_23d088;
        case 0x23d08cu: goto label_23d08c;
        case 0x23d090u: goto label_23d090;
        case 0x23d094u: goto label_23d094;
        case 0x23d098u: goto label_23d098;
        case 0x23d09cu: goto label_23d09c;
        case 0x23d0a0u: goto label_23d0a0;
        case 0x23d0a4u: goto label_23d0a4;
        case 0x23d0a8u: goto label_23d0a8;
        case 0x23d0acu: goto label_23d0ac;
        case 0x23d0b0u: goto label_23d0b0;
        case 0x23d0b4u: goto label_23d0b4;
        case 0x23d0b8u: goto label_23d0b8;
        case 0x23d0bcu: goto label_23d0bc;
        case 0x23d0c0u: goto label_23d0c0;
        case 0x23d0c4u: goto label_23d0c4;
        case 0x23d0c8u: goto label_23d0c8;
        case 0x23d0ccu: goto label_23d0cc;
        case 0x23d0d0u: goto label_23d0d0;
        case 0x23d0d4u: goto label_23d0d4;
        case 0x23d0d8u: goto label_23d0d8;
        case 0x23d0dcu: goto label_23d0dc;
        case 0x23d0e0u: goto label_23d0e0;
        case 0x23d0e4u: goto label_23d0e4;
        case 0x23d0e8u: goto label_23d0e8;
        case 0x23d0ecu: goto label_23d0ec;
        case 0x23d0f0u: goto label_23d0f0;
        case 0x23d0f4u: goto label_23d0f4;
        case 0x23d0f8u: goto label_23d0f8;
        case 0x23d0fcu: goto label_23d0fc;
        case 0x23d100u: goto label_23d100;
        case 0x23d104u: goto label_23d104;
        case 0x23d108u: goto label_23d108;
        case 0x23d10cu: goto label_23d10c;
        case 0x23d110u: goto label_23d110;
        case 0x23d114u: goto label_23d114;
        case 0x23d118u: goto label_23d118;
        case 0x23d11cu: goto label_23d11c;
        case 0x23d120u: goto label_23d120;
        case 0x23d124u: goto label_23d124;
        case 0x23d128u: goto label_23d128;
        case 0x23d12cu: goto label_23d12c;
        case 0x23d130u: goto label_23d130;
        case 0x23d134u: goto label_23d134;
        case 0x23d138u: goto label_23d138;
        case 0x23d13cu: goto label_23d13c;
        case 0x23d140u: goto label_23d140;
        case 0x23d144u: goto label_23d144;
        case 0x23d148u: goto label_23d148;
        case 0x23d14cu: goto label_23d14c;
        case 0x23d150u: goto label_23d150;
        case 0x23d154u: goto label_23d154;
        case 0x23d158u: goto label_23d158;
        case 0x23d15cu: goto label_23d15c;
        case 0x23d160u: goto label_23d160;
        case 0x23d164u: goto label_23d164;
        case 0x23d168u: goto label_23d168;
        case 0x23d16cu: goto label_23d16c;
        case 0x23d170u: goto label_23d170;
        case 0x23d174u: goto label_23d174;
        case 0x23d178u: goto label_23d178;
        case 0x23d17cu: goto label_23d17c;
        case 0x23d180u: goto label_23d180;
        case 0x23d184u: goto label_23d184;
        case 0x23d188u: goto label_23d188;
        case 0x23d18cu: goto label_23d18c;
        case 0x23d190u: goto label_23d190;
        case 0x23d194u: goto label_23d194;
        case 0x23d198u: goto label_23d198;
        case 0x23d19cu: goto label_23d19c;
        case 0x23d1a0u: goto label_23d1a0;
        case 0x23d1a4u: goto label_23d1a4;
        case 0x23d1a8u: goto label_23d1a8;
        case 0x23d1acu: goto label_23d1ac;
        case 0x23d1b0u: goto label_23d1b0;
        case 0x23d1b4u: goto label_23d1b4;
        case 0x23d1b8u: goto label_23d1b8;
        case 0x23d1bcu: goto label_23d1bc;
        case 0x23d1c0u: goto label_23d1c0;
        case 0x23d1c4u: goto label_23d1c4;
        case 0x23d1c8u: goto label_23d1c8;
        case 0x23d1ccu: goto label_23d1cc;
        case 0x23d1d0u: goto label_23d1d0;
        case 0x23d1d4u: goto label_23d1d4;
        case 0x23d1d8u: goto label_23d1d8;
        case 0x23d1dcu: goto label_23d1dc;
        case 0x23d1e0u: goto label_23d1e0;
        case 0x23d1e4u: goto label_23d1e4;
        case 0x23d1e8u: goto label_23d1e8;
        case 0x23d1ecu: goto label_23d1ec;
        case 0x23d1f0u: goto label_23d1f0;
        case 0x23d1f4u: goto label_23d1f4;
        case 0x23d1f8u: goto label_23d1f8;
        case 0x23d1fcu: goto label_23d1fc;
        case 0x23d200u: goto label_23d200;
        case 0x23d204u: goto label_23d204;
        case 0x23d208u: goto label_23d208;
        case 0x23d20cu: goto label_23d20c;
        case 0x23d210u: goto label_23d210;
        case 0x23d214u: goto label_23d214;
        case 0x23d218u: goto label_23d218;
        case 0x23d21cu: goto label_23d21c;
        case 0x23d220u: goto label_23d220;
        case 0x23d224u: goto label_23d224;
        case 0x23d228u: goto label_23d228;
        case 0x23d22cu: goto label_23d22c;
        case 0x23d230u: goto label_23d230;
        case 0x23d234u: goto label_23d234;
        case 0x23d238u: goto label_23d238;
        case 0x23d23cu: goto label_23d23c;
        case 0x23d240u: goto label_23d240;
        case 0x23d244u: goto label_23d244;
        case 0x23d248u: goto label_23d248;
        case 0x23d24cu: goto label_23d24c;
        case 0x23d250u: goto label_23d250;
        case 0x23d254u: goto label_23d254;
        case 0x23d258u: goto label_23d258;
        case 0x23d25cu: goto label_23d25c;
        case 0x23d260u: goto label_23d260;
        case 0x23d264u: goto label_23d264;
        case 0x23d268u: goto label_23d268;
        case 0x23d26cu: goto label_23d26c;
        case 0x23d270u: goto label_23d270;
        case 0x23d274u: goto label_23d274;
        case 0x23d278u: goto label_23d278;
        case 0x23d27cu: goto label_23d27c;
        case 0x23d280u: goto label_23d280;
        case 0x23d284u: goto label_23d284;
        case 0x23d288u: goto label_23d288;
        case 0x23d28cu: goto label_23d28c;
        case 0x23d290u: goto label_23d290;
        case 0x23d294u: goto label_23d294;
        case 0x23d298u: goto label_23d298;
        case 0x23d29cu: goto label_23d29c;
        case 0x23d2a0u: goto label_23d2a0;
        case 0x23d2a4u: goto label_23d2a4;
        case 0x23d2a8u: goto label_23d2a8;
        case 0x23d2acu: goto label_23d2ac;
        case 0x23d2b0u: goto label_23d2b0;
        case 0x23d2b4u: goto label_23d2b4;
        case 0x23d2b8u: goto label_23d2b8;
        case 0x23d2bcu: goto label_23d2bc;
        case 0x23d2c0u: goto label_23d2c0;
        case 0x23d2c4u: goto label_23d2c4;
        case 0x23d2c8u: goto label_23d2c8;
        case 0x23d2ccu: goto label_23d2cc;
        case 0x23d2d0u: goto label_23d2d0;
        case 0x23d2d4u: goto label_23d2d4;
        case 0x23d2d8u: goto label_23d2d8;
        case 0x23d2dcu: goto label_23d2dc;
        case 0x23d2e0u: goto label_23d2e0;
        case 0x23d2e4u: goto label_23d2e4;
        case 0x23d2e8u: goto label_23d2e8;
        case 0x23d2ecu: goto label_23d2ec;
        case 0x23d2f0u: goto label_23d2f0;
        case 0x23d2f4u: goto label_23d2f4;
        case 0x23d2f8u: goto label_23d2f8;
        case 0x23d2fcu: goto label_23d2fc;
        case 0x23d300u: goto label_23d300;
        case 0x23d304u: goto label_23d304;
        case 0x23d308u: goto label_23d308;
        case 0x23d30cu: goto label_23d30c;
        case 0x23d310u: goto label_23d310;
        case 0x23d314u: goto label_23d314;
        case 0x23d318u: goto label_23d318;
        case 0x23d31cu: goto label_23d31c;
        case 0x23d320u: goto label_23d320;
        case 0x23d324u: goto label_23d324;
        case 0x23d328u: goto label_23d328;
        case 0x23d32cu: goto label_23d32c;
        case 0x23d330u: goto label_23d330;
        case 0x23d334u: goto label_23d334;
        case 0x23d338u: goto label_23d338;
        case 0x23d33cu: goto label_23d33c;
        case 0x23d340u: goto label_23d340;
        case 0x23d344u: goto label_23d344;
        case 0x23d348u: goto label_23d348;
        case 0x23d34cu: goto label_23d34c;
        case 0x23d350u: goto label_23d350;
        case 0x23d354u: goto label_23d354;
        case 0x23d358u: goto label_23d358;
        case 0x23d35cu: goto label_23d35c;
        case 0x23d360u: goto label_23d360;
        case 0x23d364u: goto label_23d364;
        case 0x23d368u: goto label_23d368;
        case 0x23d36cu: goto label_23d36c;
        case 0x23d370u: goto label_23d370;
        case 0x23d374u: goto label_23d374;
        case 0x23d378u: goto label_23d378;
        case 0x23d37cu: goto label_23d37c;
        case 0x23d380u: goto label_23d380;
        case 0x23d384u: goto label_23d384;
        case 0x23d388u: goto label_23d388;
        case 0x23d38cu: goto label_23d38c;
        case 0x23d390u: goto label_23d390;
        case 0x23d394u: goto label_23d394;
        case 0x23d398u: goto label_23d398;
        case 0x23d39cu: goto label_23d39c;
        case 0x23d3a0u: goto label_23d3a0;
        case 0x23d3a4u: goto label_23d3a4;
        case 0x23d3a8u: goto label_23d3a8;
        case 0x23d3acu: goto label_23d3ac;
        case 0x23d3b0u: goto label_23d3b0;
        case 0x23d3b4u: goto label_23d3b4;
        case 0x23d3b8u: goto label_23d3b8;
        case 0x23d3bcu: goto label_23d3bc;
        case 0x23d3c0u: goto label_23d3c0;
        case 0x23d3c4u: goto label_23d3c4;
        case 0x23d3c8u: goto label_23d3c8;
        case 0x23d3ccu: goto label_23d3cc;
        case 0x23d3d0u: goto label_23d3d0;
        case 0x23d3d4u: goto label_23d3d4;
        case 0x23d3d8u: goto label_23d3d8;
        case 0x23d3dcu: goto label_23d3dc;
        case 0x23d3e0u: goto label_23d3e0;
        case 0x23d3e4u: goto label_23d3e4;
        case 0x23d3e8u: goto label_23d3e8;
        case 0x23d3ecu: goto label_23d3ec;
        default: break;
    }

    ctx->pc = 0x23bcb8u;

label_23bcb8:
    // 0x23bcb8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23bcbc:
    // 0x23bcbc: 0xac80029c  sw          $zero, 0x29C($a0)
    ctx->pc = 0x23bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 668), GPR_U32(ctx, 0));
label_23bcc0:
    // 0x23bcc0: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x23bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
label_23bcc4:
    // 0x23bcc4: 0xac800274  sw          $zero, 0x274($a0)
    ctx->pc = 0x23bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 0));
label_23bcc8:
    // 0x23bcc8: 0xac800164  sw          $zero, 0x164($a0)
    ctx->pc = 0x23bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 0));
label_23bccc:
    // 0x23bccc: 0xac800198  sw          $zero, 0x198($a0)
    ctx->pc = 0x23bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 0));
label_23bcd0:
    // 0x23bcd0: 0xac800138  sw          $zero, 0x138($a0)
    ctx->pc = 0x23bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
label_23bcd4:
    // 0x23bcd4: 0x3e00008  jr          $ra
label_23bcd8:
    if (ctx->pc == 0x23BCD8u) {
        ctx->pc = 0x23BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCD4u;
        // 0x23bcd8: 0xac80014c  sw          $zero, 0x14C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCDCu;
        goto label_23bcdc;
    }
    ctx->pc = 0x23BCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCD4u;
        // 0x23bcd8: 0xac80014c  sw          $zero, 0x14C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BCDCu;
label_23bcdc:
    // 0x23bcdc: 0x0  nop
    ctx->pc = 0x23bcdcu;
    // NOP
label_23bce0:
    // 0x23bce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23bce4:
    // 0x23bce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23bce8:
    // 0x23bce8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23bcec:
    // 0x23bcec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23bcf0:
    // 0x23bcf0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23bcf4:
    // 0x23bcf4: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x23bcf4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_23bcf8:
    // 0x23bcf8: 0x30623000  andi        $v0, $v1, 0x3000
    ctx->pc = 0x23bcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12288);
label_23bcfc:
    // 0x23bcfc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23bd00:
    if (ctx->pc == 0x23BD00u) {
        ctx->pc = 0x23BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCFCu;
        // 0x23bd00: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD04u;
        goto label_23bd04;
    }
    ctx->pc = 0x23BCFCu;
    {
        const bool branch_taken_0x23bcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCFCu;
        // 0x23bd00: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcfc) {
            ctx->pc = 0x23BD7Cu;
            goto label_23bd7c;
        }
    }
    ctx->pc = 0x23BD04u;
label_23bd04:
    // 0x23bd04: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23bd08:
    // 0x23bd08: 0x24a55818  addiu       $a1, $a1, 0x5818
    ctx->pc = 0x23bd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22552));
label_23bd0c:
    // 0x23bd0c: 0xc08b5ac  jal         func_22D6B0
label_23bd10:
    if (ctx->pc == 0x23BD10u) {
        ctx->pc = 0x23BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD0Cu;
        // 0x23bd10: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD14u;
        goto label_23bd14;
    }
    ctx->pc = 0x23BD0Cu;
    SET_GPR_U32(ctx, 31, 0x23BD14u);
    ctx->pc = 0x23BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD0Cu;
    // 0x23bd10: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23BD0Cu, 0x23BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD14u;
label_23bd14:
    // 0x23bd14: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x23bd14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_23bd18:
    // 0x23bd18: 0x8e030164  lw          $v1, 0x164($s0)
    ctx->pc = 0x23bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_23bd1c:
    // 0x23bd1c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23bd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_23bd20:
    // 0x23bd20: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_23bd24:
    if (ctx->pc == 0x23BD24u) {
        ctx->pc = 0x23BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD20u;
        // 0x23bd24: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD28u;
        goto label_23bd28;
    }
    ctx->pc = 0x23BD20u;
    {
        const bool branch_taken_0x23bd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD20u;
        // 0x23bd24: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd20) {
            ctx->pc = 0x23BD60u;
            goto label_23bd60;
        }
    }
    ctx->pc = 0x23BD28u;
label_23bd28:
    // 0x23bd28: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23bd2c:
    // 0x23bd2c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23bd30:
    // 0x23bd30: 0x24a55828  addiu       $a1, $a1, 0x5828
    ctx->pc = 0x23bd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22568));
label_23bd34:
    // 0x23bd34: 0xc08b5ac  jal         func_22D6B0
label_23bd38:
    if (ctx->pc == 0x23BD38u) {
        ctx->pc = 0x23BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD34u;
        // 0x23bd38: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD3Cu;
        goto label_23bd3c;
    }
    ctx->pc = 0x23BD34u;
    SET_GPR_U32(ctx, 31, 0x23BD3Cu);
    ctx->pc = 0x23BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD34u;
    // 0x23bd38: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23BD34u, 0x23BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD3Cu;
label_23bd3c:
    // 0x23bd3c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x23bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_23bd40:
    // 0x23bd40: 0x26225060  addiu       $v0, $s1, 0x5060
    ctx->pc = 0x23bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
label_23bd44:
    // 0x23bd44: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x23bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_23bd48:
    // 0x23bd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23bd4c:
    // 0x23bd4c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x23bd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_23bd50:
    // 0x23bd50: 0xa0f809  jalr        $a1
label_23bd54:
    if (ctx->pc == 0x23BD54u) {
        ctx->pc = 0x23BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD50u;
        // 0x23bd54: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD58u;
        goto label_23bd58;
    }
    ctx->pc = 0x23BD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23BD58u);
        ctx->pc = 0x23BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD50u;
        // 0x23bd54: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BD50u, 0x23BD58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BD58u;
label_23bd58:
    // 0x23bd58: 0x10000014  b           . + 4 + (0x14 << 2)
label_23bd5c:
    if (ctx->pc == 0x23BD5Cu) {
        ctx->pc = 0x23BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD58u;
        // 0x23bd5c: 0x26245060  addiu       $a0, $s1, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD60u;
        goto label_23bd60;
    }
    ctx->pc = 0x23BD58u;
    {
        const bool branch_taken_0x23bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD58u;
        // 0x23bd5c: 0x26245060  addiu       $a0, $s1, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd58) {
            ctx->pc = 0x23BDACu;
            goto label_23bdac;
        }
    }
    ctx->pc = 0x23BD60u;
label_23bd60:
    // 0x23bd60: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23bd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23bd64:
    // 0x23bd64: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23bd68:
    // 0x23bd68: 0x24a55840  addiu       $a1, $a1, 0x5840
    ctx->pc = 0x23bd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
label_23bd6c:
    // 0x23bd6c: 0xc08b5ac  jal         func_22D6B0
label_23bd70:
    if (ctx->pc == 0x23BD70u) {
        ctx->pc = 0x23BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD6Cu;
        // 0x23bd70: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD74u;
        goto label_23bd74;
    }
    ctx->pc = 0x23BD6Cu;
    SET_GPR_U32(ctx, 31, 0x23BD74u);
    ctx->pc = 0x23BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD6Cu;
    // 0x23bd70: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23BD6Cu, 0x23BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD74u;
label_23bd74:
    // 0x23bd74: 0x1000000d  b           . + 4 + (0xD << 2)
label_23bd78:
    if (ctx->pc == 0x23BD78u) {
        ctx->pc = 0x23BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD74u;
        // 0x23bd78: 0x26245060  addiu       $a0, $s1, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD7Cu;
        goto label_23bd7c;
    }
    ctx->pc = 0x23BD74u;
    {
        const bool branch_taken_0x23bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD74u;
        // 0x23bd78: 0x26245060  addiu       $a0, $s1, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd74) {
            ctx->pc = 0x23BDACu;
            goto label_23bdac;
        }
    }
    ctx->pc = 0x23BD7Cu;
label_23bd7c:
    // 0x23bd7c: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x23bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_23bd80:
    // 0x23bd80: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_23bd84:
    if (ctx->pc == 0x23BD84u) {
        ctx->pc = 0x23BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD80u;
        // 0x23bd84: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD88u;
        goto label_23bd88;
    }
    ctx->pc = 0x23BD80u;
    {
        const bool branch_taken_0x23bd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD80u;
        // 0x23bd84: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd80) {
            ctx->pc = 0x23BDA8u;
            goto label_23bda8;
        }
    }
    ctx->pc = 0x23BD88u;
label_23bd88:
    // 0x23bd88: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x23bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_23bd8c:
    // 0x23bd8c: 0x26235060  addiu       $v1, $s1, 0x5060
    ctx->pc = 0x23bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
label_23bd90:
    // 0x23bd90: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x23bd90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
label_23bd94:
    // 0x23bd94: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x23bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_23bd98:
    // 0x23bd98: 0xa0f809  jalr        $a1
label_23bd9c:
    if (ctx->pc == 0x23BD9Cu) {
        ctx->pc = 0x23BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD98u;
        // 0x23bd9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDA0u;
        goto label_23bda0;
    }
    ctx->pc = 0x23BD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23BDA0u);
        ctx->pc = 0x23BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD98u;
        // 0x23bd9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BD98u, 0x23BDA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BDA0u;
label_23bda0:
    // 0x23bda0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23bda4:
    if (ctx->pc == 0x23BDA4u) {
        ctx->pc = 0x23BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDA0u;
        // 0x23bda4: 0x26245060  addiu       $a0, $s1, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDA8u;
        goto label_23bda8;
    }
    ctx->pc = 0x23BDA0u;
    {
        const bool branch_taken_0x23bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDA0u;
        // 0x23bda4: 0x26245060  addiu       $a0, $s1, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bda0) {
            ctx->pc = 0x23BDACu;
            goto label_23bdac;
        }
    }
    ctx->pc = 0x23BDA8u;
label_23bda8:
    // 0x23bda8: 0x26245060  addiu       $a0, $s1, 0x5060
    ctx->pc = 0x23bda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
label_23bdac:
    // 0x23bdac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23bdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23bdb0:
    // 0x23bdb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23bdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23bdb4:
    // 0x23bdb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23bdb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23bdb8:
    // 0x23bdb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bdb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23bdbc:
    // 0x23bdbc: 0x808ecbc  j           func_23B2F0
label_23bdc0:
    if (ctx->pc == 0x23BDC0u) {
        ctx->pc = 0x23BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDBCu;
        // 0x23bdc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDC4u;
        goto label_23bdc4;
    }
    ctx->pc = 0x23BDBCu;
    ctx->pc = 0x23BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDBCu;
    // 0x23bdc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B2F0u, 0x23BDBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23BDC4u;
label_23bdc4:
    // 0x23bdc4: 0x0  nop
    ctx->pc = 0x23bdc4u;
    // NOP
label_23bdc8:
    // 0x23bdc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23bdcc:
    // 0x23bdcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23bdd0:
    // 0x23bdd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23bdd4:
    // 0x23bdd4: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x23bdd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
label_23bdd8:
    // 0x23bdd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bdd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23bddc:
    // 0x23bddc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23bddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23bde0:
    // 0x23bde0: 0x26245060  addiu       $a0, $s1, 0x5060
    ctx->pc = 0x23bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
label_23bde4:
    // 0x23bde4: 0xc08ed18  jal         func_23B460
label_23bde8:
    if (ctx->pc == 0x23BDE8u) {
        ctx->pc = 0x23BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDE4u;
        // 0x23bde8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDECu;
        goto label_23bdec;
    }
    ctx->pc = 0x23BDE4u;
    SET_GPR_U32(ctx, 31, 0x23BDECu);
    ctx->pc = 0x23BDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDE4u;
    // 0x23bde8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B460u, 0x23BDE4u, 0x23BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDECu;
label_23bdec:
    // 0x23bdec: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x23bdecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_23bdf0:
    // 0x23bdf0: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x23bdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_23bdf4:
    // 0x23bdf4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23bdf8:
    if (ctx->pc == 0x23BDF8u) {
        ctx->pc = 0x23BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDF4u;
        // 0x23bdf8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BDFCu;
        goto label_23bdfc;
    }
    ctx->pc = 0x23BDF4u;
    {
        const bool branch_taken_0x23bdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDF4u;
        // 0x23bdf8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdf4) {
            ctx->pc = 0x23BE20u;
            goto label_23be20;
        }
    }
    ctx->pc = 0x23BDFCu;
label_23bdfc:
    // 0x23bdfc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23be00:
    // 0x23be00: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23be04:
    // 0x23be04: 0x24a55848  addiu       $a1, $a1, 0x5848
    ctx->pc = 0x23be04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22600));
label_23be08:
    // 0x23be08: 0xc08b5ac  jal         func_22D6B0
label_23be0c:
    if (ctx->pc == 0x23BE0Cu) {
        ctx->pc = 0x23BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE08u;
        // 0x23be0c: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE10u;
        goto label_23be10;
    }
    ctx->pc = 0x23BE08u;
    SET_GPR_U32(ctx, 31, 0x23BE10u);
    ctx->pc = 0x23BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE08u;
    // 0x23be0c: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23BE08u, 0x23BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE10u;
label_23be10:
    // 0x23be10: 0xc08d4e4  jal         func_235390
label_23be14:
    if (ctx->pc == 0x23BE14u) {
        ctx->pc = 0x23BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE10u;
        // 0x23be14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE18u;
        goto label_23be18;
    }
    ctx->pc = 0x23BE10u;
    SET_GPR_U32(ctx, 31, 0x23BE18u);
    ctx->pc = 0x23BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE10u;
    // 0x23be14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235390u, 0x23BE10u, 0x23BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE18u;
label_23be18:
    // 0x23be18: 0x10000006  b           . + 4 + (0x6 << 2)
label_23be1c:
    if (ctx->pc == 0x23BE1Cu) {
        ctx->pc = 0x23BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE18u;
        // 0x23be1c: 0x8e02012c  lw          $v0, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE20u;
        goto label_23be20;
    }
    ctx->pc = 0x23BE18u;
    {
        const bool branch_taken_0x23be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE18u;
        // 0x23be1c: 0x8e02012c  lw          $v0, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be18) {
            ctx->pc = 0x23BE34u;
            goto label_23be34;
        }
    }
    ctx->pc = 0x23BE20u;
label_23be20:
    // 0x23be20: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23be24:
    // 0x23be24: 0x24a55880  addiu       $a1, $a1, 0x5880
    ctx->pc = 0x23be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22656));
label_23be28:
    // 0x23be28: 0xc08b5ac  jal         func_22D6B0
label_23be2c:
    if (ctx->pc == 0x23BE2Cu) {
        ctx->pc = 0x23BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE28u;
        // 0x23be2c: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE30u;
        goto label_23be30;
    }
    ctx->pc = 0x23BE28u;
    SET_GPR_U32(ctx, 31, 0x23BE30u);
    ctx->pc = 0x23BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE28u;
    // 0x23be2c: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23BE28u, 0x23BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE30u;
label_23be30:
    // 0x23be30: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x23be30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_23be34:
    // 0x23be34: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23be34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23be38:
    // 0x23be38: 0x3463fff7  ori         $v1, $v1, 0xFFF7
    ctx->pc = 0x23be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65527);
label_23be3c:
    // 0x23be3c: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x23be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_23be40:
    // 0x23be40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23be40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23be44:
    // 0x23be44: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_23be48:
    if (ctx->pc == 0x23BE48u) {
        ctx->pc = 0x23BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE44u;
        // 0x23be48: 0xae02012c  sw          $v0, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE4Cu;
        goto label_23be4c;
    }
    ctx->pc = 0x23BE44u;
    {
        const bool branch_taken_0x23be44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE44u;
        // 0x23be48: 0xae02012c  sw          $v0, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be44) {
            ctx->pc = 0x23BE64u;
            goto label_23be64;
        }
    }
    ctx->pc = 0x23BE4Cu;
label_23be4c:
    // 0x23be4c: 0x26235060  addiu       $v1, $s1, 0x5060
    ctx->pc = 0x23be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
label_23be50:
    // 0x23be50: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x23be50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_23be54:
    // 0x23be54: 0x40f809  jalr        $v0
label_23be58:
    if (ctx->pc == 0x23BE58u) {
        ctx->pc = 0x23BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE54u;
        // 0x23be58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE5Cu;
        goto label_23be5c;
    }
    ctx->pc = 0x23BE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23BE5Cu);
        ctx->pc = 0x23BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE54u;
        // 0x23be58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BE54u, 0x23BE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BE5Cu;
label_23be5c:
    // 0x23be5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_23be60:
    if (ctx->pc == 0x23BE60u) {
        ctx->pc = 0x23BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE5Cu;
        // 0x23be60: 0x96020030  lhu         $v0, 0x30($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE64u;
        goto label_23be64;
    }
    ctx->pc = 0x23BE5Cu;
    {
        const bool branch_taken_0x23be5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE5Cu;
        // 0x23be60: 0x96020030  lhu         $v0, 0x30($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be5c) {
            ctx->pc = 0x23BE78u;
            goto label_23be78;
        }
    }
    ctx->pc = 0x23BE64u;
label_23be64:
    // 0x23be64: 0x26235060  addiu       $v1, $s1, 0x5060
    ctx->pc = 0x23be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20576));
label_23be68:
    // 0x23be68: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x23be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_23be6c:
    // 0x23be6c: 0x40f809  jalr        $v0
label_23be70:
    if (ctx->pc == 0x23BE70u) {
        ctx->pc = 0x23BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE6Cu;
        // 0x23be70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE74u;
        goto label_23be74;
    }
    ctx->pc = 0x23BE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23BE74u);
        ctx->pc = 0x23BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE6Cu;
        // 0x23be70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BE6Cu, 0x23BE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BE74u;
label_23be74:
    // 0x23be74: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x23be74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_23be78:
    // 0x23be78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23be78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23be7c:
    // 0x23be7c: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x23be7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_23be80:
    // 0x23be80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23be80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23be84:
    // 0x23be84: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x23be84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
label_23be88:
    // 0x23be88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23be88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23be8c:
    // 0x23be8c: 0x3e00008  jr          $ra
label_23be90:
    if (ctx->pc == 0x23BE90u) {
        ctx->pc = 0x23BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE8Cu;
        // 0x23be90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BE94u;
        goto label_23be94;
    }
    ctx->pc = 0x23BE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE8Cu;
        // 0x23be90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BE94u;
label_23be94:
    // 0x23be94: 0x0  nop
    ctx->pc = 0x23be94u;
    // NOP
label_23be98:
    // 0x23be98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x23be98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23be9c:
    // 0x23be9c: 0x94c54238  lhu         $a1, 0x4238($a2)
    ctx->pc = 0x23be9cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16952)));
label_23bea0:
    // 0x23bea0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_23bea4:
    if (ctx->pc == 0x23BEA4u) {
        ctx->pc = 0x23BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEA0u;
        // 0x23bea4: 0x8cc30270  lw          $v1, 0x270($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEA8u;
        goto label_23bea8;
    }
    ctx->pc = 0x23BEA0u;
    {
        const bool branch_taken_0x23bea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bea0) {
            ctx->pc = 0x23BEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BEA0u;
            // 0x23bea4: 0x8cc30270  lw          $v1, 0x270($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BEB8u;
            goto label_23beb8;
        }
    }
    ctx->pc = 0x23BEA8u;
label_23bea8:
    // 0x23bea8: 0x8cc20270  lw          $v0, 0x270($a2)
    ctx->pc = 0x23bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23beac:
    // 0x23beac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x23beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_23beb0:
    // 0x23beb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_23beb4:
    if (ctx->pc == 0x23BEB4u) {
        ctx->pc = 0x23BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEB0u;
        // 0x23beb4: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEB8u;
        goto label_23beb8;
    }
    ctx->pc = 0x23BEB0u;
    {
        const bool branch_taken_0x23beb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEB0u;
        // 0x23beb4: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23beb0) {
            ctx->pc = 0x23BEC8u;
            goto label_23bec8;
        }
    }
    ctx->pc = 0x23BEB8u;
label_23beb8:
    // 0x23beb8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23bebc:
    // 0x23bebc: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x23bebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
label_23bec0:
    // 0x23bec0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23bec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23bec4:
    // 0x23bec4: 0xacc30270  sw          $v1, 0x270($a2)
    ctx->pc = 0x23bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 3));
label_23bec8:
    // 0x23bec8: 0x8cc2012c  lw          $v0, 0x12C($a2)
    ctx->pc = 0x23bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
label_23becc:
    // 0x23becc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23beccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23bed0:
    // 0x23bed0: 0x3463ffef  ori         $v1, $v1, 0xFFEF
    ctx->pc = 0x23bed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65519);
label_23bed4:
    // 0x23bed4: 0x90c445dc  lbu         $a0, 0x45DC($a2)
    ctx->pc = 0x23bed4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17884)));
label_23bed8:
    // 0x23bed8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23bed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23bedc:
    // 0x23bedc: 0xa4c5423c  sh          $a1, 0x423C($a2)
    ctx->pc = 0x23bedcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16956), (uint16_t)GPR_U32(ctx, 5));
label_23bee0:
    // 0x23bee0: 0xacc2012c  sw          $v0, 0x12C($a2)
    ctx->pc = 0x23bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 300), GPR_U32(ctx, 2));
label_23bee4:
    // 0x23bee4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23bee8:
    if (ctx->pc == 0x23BEE8u) {
        ctx->pc = 0x23BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEE4u;
        // 0x23bee8: 0xa4c0401c  sh          $zero, 0x401C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 16412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEECu;
        goto label_23beec;
    }
    ctx->pc = 0x23BEE4u;
    {
        const bool branch_taken_0x23bee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEE4u;
        // 0x23bee8: 0xa4c0401c  sh          $zero, 0x401C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 16412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bee4) {
            ctx->pc = 0x23BEFCu;
            goto label_23befc;
        }
    }
    ctx->pc = 0x23BEECu;
label_23beec:
    // 0x23beec: 0x8cc20270  lw          $v0, 0x270($a2)
    ctx->pc = 0x23beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23bef0:
    // 0x23bef0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23bef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_23bef4:
    // 0x23bef4: 0x10000006  b           . + 4 + (0x6 << 2)
label_23bef8:
    if (ctx->pc == 0x23BEF8u) {
        ctx->pc = 0x23BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEF4u;
        // 0x23bef8: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BEFCu;
        goto label_23befc;
    }
    ctx->pc = 0x23BEF4u;
    {
        const bool branch_taken_0x23bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEF4u;
        // 0x23bef8: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bef4) {
            ctx->pc = 0x23BF10u;
            goto label_23bf10;
        }
    }
    ctx->pc = 0x23BEFCu;
label_23befc:
    // 0x23befc: 0x8cc30270  lw          $v1, 0x270($a2)
    ctx->pc = 0x23befcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23bf00:
    // 0x23bf00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23bf04:
    // 0x23bf04: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x23bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_23bf08:
    // 0x23bf08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23bf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23bf0c:
    // 0x23bf0c: 0xacc30270  sw          $v1, 0x270($a2)
    ctx->pc = 0x23bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 3));
label_23bf10:
    // 0x23bf10: 0x8cc245e0  lw          $v0, 0x45E0($a2)
    ctx->pc = 0x23bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17888)));
label_23bf14:
    // 0x23bf14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_23bf18:
    if (ctx->pc == 0x23BF18u) {
        ctx->pc = 0x23BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF14u;
        // 0x23bf18: 0xacc20278  sw          $v0, 0x278($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF1Cu;
        goto label_23bf1c;
    }
    ctx->pc = 0x23BF14u;
    {
        const bool branch_taken_0x23bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bf14) {
            ctx->pc = 0x23BF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF14u;
            // 0x23bf18: 0xacc20278  sw          $v0, 0x278($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 632), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BF2Cu;
            goto label_23bf2c;
        }
    }
    ctx->pc = 0x23BF1Cu;
label_23bf1c:
    // 0x23bf1c: 0x8cc20298  lw          $v0, 0x298($a2)
    ctx->pc = 0x23bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 664)));
label_23bf20:
    // 0x23bf20: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_23bf24:
    if (ctx->pc == 0x23BF24u) {
        ctx->pc = 0x23BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF20u;
        // 0x23bf24: 0x240205dc  addiu       $v0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF28u;
        goto label_23bf28;
    }
    ctx->pc = 0x23BF20u;
    {
        const bool branch_taken_0x23bf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf20) {
            ctx->pc = 0x23BF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF20u;
            // 0x23bf24: 0x240205dc  addiu       $v0, $zero, 0x5DC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BF28u;
            goto label_23bf28;
        }
    }
    ctx->pc = 0x23BF28u;
label_23bf28:
    // 0x23bf28: 0xacc20278  sw          $v0, 0x278($a2)
    ctx->pc = 0x23bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 632), GPR_U32(ctx, 2));
label_23bf2c:
    // 0x23bf2c: 0x8cc249f8  lw          $v0, 0x49F8($a2)
    ctx->pc = 0x23bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18936)));
label_23bf30:
    // 0x23bf30: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_23bf34:
    if (ctx->pc == 0x23BF34u) {
        ctx->pc = 0x23BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF30u;
        // 0x23bf34: 0xacc2027c  sw          $v0, 0x27C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF38u;
        goto label_23bf38;
    }
    ctx->pc = 0x23BF30u;
    {
        const bool branch_taken_0x23bf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bf30) {
            ctx->pc = 0x23BF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF30u;
            // 0x23bf34: 0xacc2027c  sw          $v0, 0x27C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 636), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BF48u;
            goto label_23bf48;
        }
    }
    ctx->pc = 0x23BF38u;
label_23bf38:
    // 0x23bf38: 0x8cc20298  lw          $v0, 0x298($a2)
    ctx->pc = 0x23bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 664)));
label_23bf3c:
    // 0x23bf3c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_23bf40:
    if (ctx->pc == 0x23BF40u) {
        ctx->pc = 0x23BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF3Cu;
        // 0x23bf40: 0x240205dc  addiu       $v0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF44u;
        goto label_23bf44;
    }
    ctx->pc = 0x23BF3Cu;
    {
        const bool branch_taken_0x23bf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf3c) {
            ctx->pc = 0x23BF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF3Cu;
            // 0x23bf40: 0x240205dc  addiu       $v0, $zero, 0x5DC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BF44u;
            goto label_23bf44;
        }
    }
    ctx->pc = 0x23BF44u;
label_23bf44:
    // 0x23bf44: 0xacc2027c  sw          $v0, 0x27C($a2)
    ctx->pc = 0x23bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 636), GPR_U32(ctx, 2));
label_23bf48:
    // 0x23bf48: 0x90c245e4  lbu         $v0, 0x45E4($a2)
    ctx->pc = 0x23bf48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17892)));
label_23bf4c:
    // 0x23bf4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23bf50:
    if (ctx->pc == 0x23BF50u) {
        ctx->pc = 0x23BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF4Cu;
        // 0x23bf50: 0x8cc30270  lw          $v1, 0x270($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF54u;
        goto label_23bf54;
    }
    ctx->pc = 0x23BF4Cu;
    {
        const bool branch_taken_0x23bf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf4c) {
            ctx->pc = 0x23BF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BF4Cu;
            // 0x23bf50: 0x8cc30270  lw          $v1, 0x270($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BF64u;
            goto label_23bf64;
        }
    }
    ctx->pc = 0x23BF54u;
label_23bf54:
    // 0x23bf54: 0x8cc20270  lw          $v0, 0x270($a2)
    ctx->pc = 0x23bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23bf58:
    // 0x23bf58: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x23bf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_23bf5c:
    // 0x23bf5c: 0x10000005  b           . + 4 + (0x5 << 2)
label_23bf60:
    if (ctx->pc == 0x23BF60u) {
        ctx->pc = 0x23BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF5Cu;
        // 0x23bf60: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF64u;
        goto label_23bf64;
    }
    ctx->pc = 0x23BF5Cu;
    {
        const bool branch_taken_0x23bf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF5Cu;
        // 0x23bf60: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf5c) {
            ctx->pc = 0x23BF74u;
            goto label_23bf74;
        }
    }
    ctx->pc = 0x23BF64u;
label_23bf64:
    // 0x23bf64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23bf68:
    // 0x23bf68: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x23bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
label_23bf6c:
    // 0x23bf6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23bf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23bf70:
    // 0x23bf70: 0xacc30270  sw          $v1, 0x270($a2)
    ctx->pc = 0x23bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 3));
label_23bf74:
    // 0x23bf74: 0x8cc34a00  lw          $v1, 0x4A00($a2)
    ctx->pc = 0x23bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18944)));
label_23bf78:
    // 0x23bf78: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23bf7c:
    // 0x23bf7c: 0x8cc545e8  lw          $a1, 0x45E8($a2)
    ctx->pc = 0x23bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17896)));
label_23bf80:
    // 0x23bf80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23bf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23bf84:
    // 0x23bf84: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x23bf84u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_23bf88:
    // 0x23bf88: 0x90c445ec  lbu         $a0, 0x45EC($a2)
    ctx->pc = 0x23bf88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17900)));
label_23bf8c:
    // 0x23bf8c: 0xacc50280  sw          $a1, 0x280($a2)
    ctx->pc = 0x23bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 640), GPR_U32(ctx, 5));
label_23bf90:
    // 0x23bf90: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23bf94:
    if (ctx->pc == 0x23BF94u) {
        ctx->pc = 0x23BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF90u;
        // 0x23bf94: 0xacc30284  sw          $v1, 0x284($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF98u;
        goto label_23bf98;
    }
    ctx->pc = 0x23BF90u;
    {
        const bool branch_taken_0x23bf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF90u;
        // 0x23bf94: 0xacc30284  sw          $v1, 0x284($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf90) {
            ctx->pc = 0x23BFA8u;
            goto label_23bfa8;
        }
    }
    ctx->pc = 0x23BF98u;
label_23bf98:
    // 0x23bf98: 0x8cc20270  lw          $v0, 0x270($a2)
    ctx->pc = 0x23bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23bf9c:
    // 0x23bf9c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x23bf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_23bfa0:
    // 0x23bfa0: 0x10000006  b           . + 4 + (0x6 << 2)
label_23bfa4:
    if (ctx->pc == 0x23BFA4u) {
        ctx->pc = 0x23BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFA0u;
        // 0x23bfa4: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFA8u;
        goto label_23bfa8;
    }
    ctx->pc = 0x23BFA0u;
    {
        const bool branch_taken_0x23bfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFA0u;
        // 0x23bfa4: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfa0) {
            ctx->pc = 0x23BFBCu;
            goto label_23bfbc;
        }
    }
    ctx->pc = 0x23BFA8u;
label_23bfa8:
    // 0x23bfa8: 0x8cc30270  lw          $v1, 0x270($a2)
    ctx->pc = 0x23bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23bfac:
    // 0x23bfac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23bfb0:
    // 0x23bfb0: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x23bfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
label_23bfb4:
    // 0x23bfb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23bfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23bfb8:
    // 0x23bfb8: 0xacc30270  sw          $v1, 0x270($a2)
    ctx->pc = 0x23bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 3));
label_23bfbc:
    // 0x23bfbc: 0x90c245ed  lbu         $v0, 0x45ED($a2)
    ctx->pc = 0x23bfbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17901)));
label_23bfc0:
    // 0x23bfc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23bfc4:
    if (ctx->pc == 0x23BFC4u) {
        ctx->pc = 0x23BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC0u;
        // 0x23bfc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFC8u;
        goto label_23bfc8;
    }
    ctx->pc = 0x23BFC0u;
    {
        const bool branch_taken_0x23bfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC0u;
        // 0x23bfc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfc0) {
            ctx->pc = 0x23BFDCu;
            goto label_23bfdc;
        }
    }
    ctx->pc = 0x23BFC8u;
label_23bfc8:
    // 0x23bfc8: 0x8cc20270  lw          $v0, 0x270($a2)
    ctx->pc = 0x23bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23bfcc:
    // 0x23bfcc: 0xacc30288  sw          $v1, 0x288($a2)
    ctx->pc = 0x23bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 648), GPR_U32(ctx, 3));
label_23bfd0:
    // 0x23bfd0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x23bfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_23bfd4:
    // 0x23bfd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_23bfd8:
    if (ctx->pc == 0x23BFD8u) {
        ctx->pc = 0x23BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFD4u;
        // 0x23bfd8: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFDCu;
        goto label_23bfdc;
    }
    ctx->pc = 0x23BFD4u;
    {
        const bool branch_taken_0x23bfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFD4u;
        // 0x23bfd8: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfd4) {
            ctx->pc = 0x23BFF4u;
            goto label_23bff4;
        }
    }
    ctx->pc = 0x23BFDCu;
label_23bfdc:
    // 0x23bfdc: 0x8cc30270  lw          $v1, 0x270($a2)
    ctx->pc = 0x23bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23bfe0:
    // 0x23bfe0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23bfe4:
    // 0x23bfe4: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x23bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
label_23bfe8:
    // 0x23bfe8: 0xacc00288  sw          $zero, 0x288($a2)
    ctx->pc = 0x23bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 648), GPR_U32(ctx, 0));
label_23bfec:
    // 0x23bfec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23bfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23bff0:
    // 0x23bff0: 0xacc30270  sw          $v1, 0x270($a2)
    ctx->pc = 0x23bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 3));
label_23bff4:
    // 0x23bff4: 0x90c245ee  lbu         $v0, 0x45EE($a2)
    ctx->pc = 0x23bff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17902)));
label_23bff8:
    // 0x23bff8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23bffc:
    if (ctx->pc == 0x23BFFCu) {
        ctx->pc = 0x23BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFF8u;
        // 0x23bffc: 0xacc0028c  sw          $zero, 0x28C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C000u;
        goto label_23c000;
    }
    ctx->pc = 0x23BFF8u;
    {
        const bool branch_taken_0x23bff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFF8u;
        // 0x23bffc: 0xacc0028c  sw          $zero, 0x28C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bff8) {
            ctx->pc = 0x23C018u;
            goto label_23c018;
        }
    }
    ctx->pc = 0x23C000u;
label_23c000:
    // 0x23c000: 0x8cc20270  lw          $v0, 0x270($a2)
    ctx->pc = 0x23c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23c004:
    // 0x23c004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c008:
    // 0x23c008: 0xacc30290  sw          $v1, 0x290($a2)
    ctx->pc = 0x23c008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 656), GPR_U32(ctx, 3));
label_23c00c:
    // 0x23c00c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x23c00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_23c010:
    // 0x23c010: 0x10000007  b           . + 4 + (0x7 << 2)
label_23c014:
    if (ctx->pc == 0x23C014u) {
        ctx->pc = 0x23C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C010u;
        // 0x23c014: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C018u;
        goto label_23c018;
    }
    ctx->pc = 0x23C010u;
    {
        const bool branch_taken_0x23c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C010u;
        // 0x23c014: 0xacc20270  sw          $v0, 0x270($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c010) {
            ctx->pc = 0x23C030u;
            goto label_23c030;
        }
    }
    ctx->pc = 0x23C018u;
label_23c018:
    // 0x23c018: 0x8cc30270  lw          $v1, 0x270($a2)
    ctx->pc = 0x23c018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
label_23c01c:
    // 0x23c01c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23c020:
    // 0x23c020: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x23c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
label_23c024:
    // 0x23c024: 0xacc00290  sw          $zero, 0x290($a2)
    ctx->pc = 0x23c024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 656), GPR_U32(ctx, 0));
label_23c028:
    // 0x23c028: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23c028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23c02c:
    // 0x23c02c: 0xacc30270  sw          $v1, 0x270($a2)
    ctx->pc = 0x23c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 3));
label_23c030:
    // 0x23c030: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23c030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23c034:
    // 0x23c034: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23c034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c038:
    // 0x23c038: 0x24845060  addiu       $a0, $a0, 0x5060
    ctx->pc = 0x23c038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
label_23c03c:
    // 0x23c03c: 0x808ed76  j           func_23B5D8
label_23c040:
    if (ctx->pc == 0x23C040u) {
        ctx->pc = 0x23C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C03Cu;
        // 0x23c040: 0xacc00294  sw          $zero, 0x294($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C044u;
        goto label_23c044;
    }
    ctx->pc = 0x23C03Cu;
    ctx->pc = 0x23C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C03Cu;
    // 0x23c040: 0xacc00294  sw          $zero, 0x294($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 660), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B5D8u, 0x23C03Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23C044u;
label_23c044:
    // 0x23c044: 0x0  nop
    ctx->pc = 0x23c044u;
    // NOP
label_23c048:
    // 0x23c048: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23c048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c04c:
    // 0x23c04c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23c050:
    // 0x23c050: 0x808edd8  j           func_23B760
label_23c054:
    if (ctx->pc == 0x23C054u) {
        ctx->pc = 0x23C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C050u;
        // 0x23c054: 0x24845060  addiu       $a0, $a0, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C058u;
        goto label_23c058;
    }
    ctx->pc = 0x23C050u;
    ctx->pc = 0x23C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C050u;
    // 0x23c054: 0x24845060  addiu       $a0, $a0, 0x5060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B760u, 0x23C050u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23C058u;
label_23c058:
    // 0x23c058: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23c058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c05c:
    // 0x23c05c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23c060:
    // 0x23c060: 0x808ee54  j           func_23B950
label_23c064:
    if (ctx->pc == 0x23C064u) {
        ctx->pc = 0x23C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C060u;
        // 0x23c064: 0x24845060  addiu       $a0, $a0, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C068u;
        goto label_23c068;
    }
    ctx->pc = 0x23C060u;
    ctx->pc = 0x23C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C060u;
    // 0x23c064: 0x24845060  addiu       $a0, $a0, 0x5060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B950u, 0x23C060u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23C068u;
label_23c068:
    // 0x23c068: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23c068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23c06c:
    // 0x23c06c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x23c06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_23c070:
    // 0x23c070: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x23c070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_23c074:
    // 0x23c074: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23c074u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c078:
    // 0x23c078: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x23c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_23c07c:
    // 0x23c07c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x23c07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_23c080:
    // 0x23c080: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x23c080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23c084:
    // 0x23c084: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x23c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_23c088:
    // 0x23c088: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x23c088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_23c08c:
    // 0x23c08c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x23c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_23c090:
    // 0x23c090: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x23c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_23c094:
    // 0x23c094: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x23c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_23c098:
    // 0x23c098: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x23c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_23c09c:
    // 0x23c09c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_23c0a0:
    // 0x23c0a0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x23c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_23c0a4:
    // 0x23c0a4: 0xc098552  jal         func_261548
label_23c0a8:
    if (ctx->pc == 0x23C0A8u) {
        ctx->pc = 0x23C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0A4u;
        // 0x23c0a8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0ACu;
        goto label_23c0ac;
    }
    ctx->pc = 0x23C0A4u;
    SET_GPR_U32(ctx, 31, 0x23C0ACu);
    ctx->pc = 0x23C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0A4u;
    // 0x23c0a8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x23C0A4u, 0x23C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0ACu;
label_23c0ac:
    // 0x23c0ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_23c0b0:
    // 0x23c0b0: 0x8fb70008  lw          $s7, 0x8($sp)
    ctx->pc = 0x23c0b0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_23c0b4:
    // 0x23c0b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23c0b8:
    if (ctx->pc == 0x23C0B8u) {
        ctx->pc = 0x23C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0B4u;
        // 0x23c0b8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0BCu;
        goto label_23c0bc;
    }
    ctx->pc = 0x23C0B4u;
    {
        const bool branch_taken_0x23c0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0B4u;
        // 0x23c0b8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0b4) {
            ctx->pc = 0x23C0C4u;
            goto label_23c0c4;
        }
    }
    ctx->pc = 0x23C0BCu;
label_23c0bc:
    // 0x23c0bc: 0x100001d7  b           . + 4 + (0x1D7 << 2)
label_23c0c0:
    if (ctx->pc == 0x23C0C0u) {
        ctx->pc = 0x23C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0BCu;
        // 0x23c0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0C4u;
        goto label_23c0c4;
    }
    ctx->pc = 0x23C0BCu;
    {
        const bool branch_taken_0x23c0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0BCu;
        // 0x23c0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0bc) {
            ctx->pc = 0x23C81Cu;
            goto label_23c81c;
        }
    }
    ctx->pc = 0x23C0C4u;
label_23c0c4:
    // 0x23c0c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c0c8:
    // 0x23c0c8: 0x26c30014  addiu       $v1, $s6, 0x14
    ctx->pc = 0x23c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_23c0cc:
    // 0x23c0cc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c0d0:
    // 0x23c0d0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x23c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_23c0d4:
    // 0x23c0d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x23c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_23c0d8:
    // 0x23c0d8: 0x24a558a0  addiu       $a1, $a1, 0x58A0
    ctx->pc = 0x23c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22688));
label_23c0dc:
    // 0x23c0dc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c0e0:
    // 0x23c0e0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23c0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23c0e4:
    // 0x23c0e4: 0xc08b5ac  jal         func_22D6B0
label_23c0e8:
    if (ctx->pc == 0x23C0E8u) {
        ctx->pc = 0x23C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0E4u;
        // 0x23c0e8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0ECu;
        goto label_23c0ec;
    }
    ctx->pc = 0x23C0E4u;
    SET_GPR_U32(ctx, 31, 0x23C0ECu);
    ctx->pc = 0x23C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0E4u;
    // 0x23c0e8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C0E4u, 0x23C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0ECu;
label_23c0ec:
    // 0x23c0ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x23c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_23c0f0:
    // 0x23c0f0: 0x8fb30014  lw          $s3, 0x14($sp)
    ctx->pc = 0x23c0f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23c0f4:
    // 0x23c0f4: 0x28710002  slti        $s1, $v1, 0x2
    ctx->pc = 0x23c0f4u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_23c0f8:
    // 0x23c0f8: 0x1620008e  bnez        $s1, . + 4 + (0x8E << 2)
label_23c0fc:
    if (ctx->pc == 0x23C0FCu) {
        ctx->pc = 0x23C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0F8u;
        // 0x23c0fc: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C100u;
        goto label_23c100;
    }
    ctx->pc = 0x23C0F8u;
    {
        const bool branch_taken_0x23c0f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0F8u;
        // 0x23c0fc: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0f8) {
            ctx->pc = 0x23C334u;
            goto label_23c334;
        }
    }
    ctx->pc = 0x23C100u;
label_23c100:
    // 0x23c100: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x23c100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c104:
    // 0x23c104: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_23c108:
    if (ctx->pc == 0x23C108u) {
        ctx->pc = 0x23C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C104u;
        // 0x23c108: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C10Cu;
        goto label_23c10c;
    }
    ctx->pc = 0x23C104u;
    {
        const bool branch_taken_0x23c104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C104u;
        // 0x23c108: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c104) {
            ctx->pc = 0x23C334u;
            goto label_23c334;
        }
    }
    ctx->pc = 0x23C10Cu;
label_23c10c:
    // 0x23c10c: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x23c10cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_23c110:
    // 0x23c110: 0xc09032e  jal         func_240CB8
label_23c114:
    if (ctx->pc == 0x23C114u) {
        ctx->pc = 0x23C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C110u;
        // 0x23c114: 0x261058b8  addiu       $s0, $s0, 0x58B8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C118u;
        goto label_23c118;
    }
    ctx->pc = 0x23C110u;
    SET_GPR_U32(ctx, 31, 0x23C118u);
    ctx->pc = 0x23C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C110u;
    // 0x23c114: 0x261058b8  addiu       $s0, $s0, 0x58B8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240CB8u, 0x23C110u, 0x23C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C118u;
label_23c118:
    // 0x23c118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c11c:
    // 0x23c11c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23c11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c120:
    // 0x23c120: 0xc08b5ac  jal         func_22D6B0
label_23c124:
    if (ctx->pc == 0x23C124u) {
        ctx->pc = 0x23C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C120u;
        // 0x23c124: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C128u;
        goto label_23c128;
    }
    ctx->pc = 0x23C120u;
    SET_GPR_U32(ctx, 31, 0x23C128u);
    ctx->pc = 0x23C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C120u;
    // 0x23c124: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C120u, 0x23C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C128u;
label_23c128:
    // 0x23c128: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23c128u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_23c12c:
    // 0x23c12c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x23c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c130:
    // 0x23c130: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x23c130u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23c134:
    // 0x23c134: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
label_23c138:
    if (ctx->pc == 0x23C138u) {
        ctx->pc = 0x23C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C134u;
        // 0x23c138: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C13Cu;
        goto label_23c13c;
    }
    ctx->pc = 0x23C134u;
    {
        const bool branch_taken_0x23c134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C134u;
        // 0x23c138: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c134) {
            ctx->pc = 0x23C2E4u;
            goto label_23c2e4;
        }
    }
    ctx->pc = 0x23C13Cu;
label_23c13c:
    // 0x23c13c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23c140:
    // 0x23c140: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x23c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
label_23c144:
    // 0x23c144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23c148:
    // 0x23c148: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23c14c:
    // 0x23c14c: 0x800008  jr          $a0
label_23c150:
    if (ctx->pc == 0x23C150u) {
        ctx->pc = 0x23C154u;
        goto label_23c154;
    }
    ctx->pc = 0x23C14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C158u: goto label_23c158;
            case 0x23C184u: goto label_23c184;
            case 0x23C1A8u: goto label_23c1a8;
            case 0x23C1D4u: goto label_23c1d4;
            case 0x23C1F8u: goto label_23c1f8;
            case 0x23C24Cu: goto label_23c24c;
            case 0x23C2E4u: goto label_23c2e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C14Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23C154u;
label_23c154:
    // 0x23c154: 0x0  nop
    ctx->pc = 0x23c154u;
    // NOP
label_23c158:
    // 0x23c158: 0x92c24a04  lbu         $v0, 0x4A04($s6)
    ctx->pc = 0x23c158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18948)));
label_23c15c:
    // 0x23c15c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_23c160:
    if (ctx->pc == 0x23C160u) {
        ctx->pc = 0x23C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C15Cu;
        // 0x23c160: 0x2ae20006  slti        $v0, $s7, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C164u;
        goto label_23c164;
    }
    ctx->pc = 0x23C15Cu;
    {
        const bool branch_taken_0x23c15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C15Cu;
        // 0x23c160: 0x2ae20006  slti        $v0, $s7, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c15c) {
            ctx->pc = 0x23C214u;
            goto label_23c214;
        }
    }
    ctx->pc = 0x23C164u;
label_23c164:
    // 0x23c164: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_23c168:
    if (ctx->pc == 0x23C168u) {
        ctx->pc = 0x23C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C164u;
        // 0x23c168: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C16Cu;
        goto label_23c16c;
    }
    ctx->pc = 0x23C164u;
    {
        const bool branch_taken_0x23c164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C164u;
        // 0x23c168: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c164) {
            ctx->pc = 0x23C2A0u;
            goto label_23c2a0;
        }
    }
    ctx->pc = 0x23C16Cu;
label_23c16c:
    // 0x23c16c: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x23c16cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c170:
    // 0x23c170: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23c174:
    // 0x23c174: 0x5062006a  beql        $v1, $v0, . + 4 + (0x6A << 2)
label_23c178:
    if (ctx->pc == 0x23C178u) {
        ctx->pc = 0x23C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C174u;
        // 0x23c178: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C17Cu;
        goto label_23c17c;
    }
    ctx->pc = 0x23C174u;
    {
        const bool branch_taken_0x23c174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c174) {
            ctx->pc = 0x23C178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C174u;
            // 0x23c178: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C320u;
            goto label_23c320;
        }
    }
    ctx->pc = 0x23C17Cu;
label_23c17c:
    // 0x23c17c: 0x10000049  b           . + 4 + (0x49 << 2)
label_23c180:
    if (ctx->pc == 0x23C180u) {
        ctx->pc = 0x23C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C17Cu;
        // 0x23c180: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C184u;
        goto label_23c184;
    }
    ctx->pc = 0x23C17Cu;
    {
        const bool branch_taken_0x23c17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C17Cu;
        // 0x23c180: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c17c) {
            ctx->pc = 0x23C2A4u;
            goto label_23c2a4;
        }
    }
    ctx->pc = 0x23C184u;
label_23c184:
    // 0x23c184: 0x92c249fc  lbu         $v0, 0x49FC($s6)
    ctx->pc = 0x23c184u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18940)));
label_23c188:
    // 0x23c188: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_23c18c:
    if (ctx->pc == 0x23C18Cu) {
        ctx->pc = 0x23C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C188u;
        // 0x23c18c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C190u;
        goto label_23c190;
    }
    ctx->pc = 0x23C188u;
    {
        const bool branch_taken_0x23c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C188u;
        // 0x23c18c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c188) {
            ctx->pc = 0x23C218u;
            goto label_23c218;
        }
    }
    ctx->pc = 0x23C190u;
label_23c190:
    // 0x23c190: 0x8ec2012c  lw          $v0, 0x12C($s6)
    ctx->pc = 0x23c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
label_23c194:
    // 0x23c194: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23c194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23c198:
    // 0x23c198: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_23c19c:
    if (ctx->pc == 0x23C19Cu) {
        ctx->pc = 0x23C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C198u;
        // 0x23c19c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1A0u;
        goto label_23c1a0;
    }
    ctx->pc = 0x23C198u;
    {
        const bool branch_taken_0x23c198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C198u;
        // 0x23c19c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c198) {
            ctx->pc = 0x23C21Cu;
            goto label_23c21c;
        }
    }
    ctx->pc = 0x23C1A0u;
label_23c1a0:
    // 0x23c1a0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_23c1a4:
    if (ctx->pc == 0x23C1A4u) {
        ctx->pc = 0x23C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1A0u;
        // 0x23c1a4: 0x2ae20006  slti        $v0, $s7, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1A8u;
        goto label_23c1a8;
    }
    ctx->pc = 0x23C1A0u;
    {
        const bool branch_taken_0x23c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1A0u;
        // 0x23c1a4: 0x2ae20006  slti        $v0, $s7, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1a0) {
            ctx->pc = 0x23C164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c164;
        }
    }
    ctx->pc = 0x23C1A8u;
label_23c1a8:
    // 0x23c1a8: 0x92c249f4  lbu         $v0, 0x49F4($s6)
    ctx->pc = 0x23c1a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18932)));
label_23c1ac:
    // 0x23c1ac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_23c1b0:
    if (ctx->pc == 0x23C1B0u) {
        ctx->pc = 0x23C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1ACu;
        // 0x23c1b0: 0x2ae20004  slti        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1B4u;
        goto label_23c1b4;
    }
    ctx->pc = 0x23C1ACu;
    {
        const bool branch_taken_0x23c1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1ACu;
        // 0x23c1b0: 0x2ae20004  slti        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1ac) {
            ctx->pc = 0x23C214u;
            goto label_23c214;
        }
    }
    ctx->pc = 0x23C1B4u;
label_23c1b4:
    // 0x23c1b4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_23c1b8:
    if (ctx->pc == 0x23C1B8u) {
        ctx->pc = 0x23C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B4u;
        // 0x23c1b8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1BCu;
        goto label_23c1bc;
    }
    ctx->pc = 0x23C1B4u;
    {
        const bool branch_taken_0x23c1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B4u;
        // 0x23c1b8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1b4) {
            ctx->pc = 0x23C2A0u;
            goto label_23c2a0;
        }
    }
    ctx->pc = 0x23C1BCu;
label_23c1bc:
    // 0x23c1bc: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x23c1bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c1c0:
    // 0x23c1c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23c1c4:
    // 0x23c1c4: 0x50620056  beql        $v1, $v0, . + 4 + (0x56 << 2)
label_23c1c8:
    if (ctx->pc == 0x23C1C8u) {
        ctx->pc = 0x23C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1C4u;
        // 0x23c1c8: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1CCu;
        goto label_23c1cc;
    }
    ctx->pc = 0x23C1C4u;
    {
        const bool branch_taken_0x23c1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c1c4) {
            ctx->pc = 0x23C1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C1C4u;
            // 0x23c1c8: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C320u;
            goto label_23c320;
        }
    }
    ctx->pc = 0x23C1CCu;
label_23c1cc:
    // 0x23c1cc: 0x10000035  b           . + 4 + (0x35 << 2)
label_23c1d0:
    if (ctx->pc == 0x23C1D0u) {
        ctx->pc = 0x23C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1CCu;
        // 0x23c1d0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1D4u;
        goto label_23c1d4;
    }
    ctx->pc = 0x23C1CCu;
    {
        const bool branch_taken_0x23c1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1CCu;
        // 0x23c1d0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1cc) {
            ctx->pc = 0x23C2A4u;
            goto label_23c2a4;
        }
    }
    ctx->pc = 0x23C1D4u;
label_23c1d4:
    // 0x23c1d4: 0x92c24a05  lbu         $v0, 0x4A05($s6)
    ctx->pc = 0x23c1d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18949)));
label_23c1d8:
    // 0x23c1d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23c1dc:
    if (ctx->pc == 0x23C1DCu) {
        ctx->pc = 0x23C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1D8u;
        // 0x23c1dc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1E0u;
        goto label_23c1e0;
    }
    ctx->pc = 0x23C1D8u;
    {
        const bool branch_taken_0x23c1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1D8u;
        // 0x23c1dc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1d8) {
            ctx->pc = 0x23C218u;
            goto label_23c218;
        }
    }
    ctx->pc = 0x23C1E0u;
label_23c1e0:
    // 0x23c1e0: 0x8ec2012c  lw          $v0, 0x12C($s6)
    ctx->pc = 0x23c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
label_23c1e4:
    // 0x23c1e4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23c1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23c1e8:
    // 0x23c1e8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_23c1ec:
    if (ctx->pc == 0x23C1ECu) {
        ctx->pc = 0x23C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1E8u;
        // 0x23c1ec: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1F0u;
        goto label_23c1f0;
    }
    ctx->pc = 0x23C1E8u;
    {
        const bool branch_taken_0x23c1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1E8u;
        // 0x23c1ec: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1e8) {
            ctx->pc = 0x23C21Cu;
            goto label_23c21c;
        }
    }
    ctx->pc = 0x23C1F0u;
label_23c1f0:
    // 0x23c1f0: 0x1000000e  b           . + 4 + (0xE << 2)
label_23c1f4:
    if (ctx->pc == 0x23C1F4u) {
        ctx->pc = 0x23C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1F0u;
        // 0x23c1f4: 0x2ae20002  slti        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1F8u;
        goto label_23c1f8;
    }
    ctx->pc = 0x23C1F0u;
    {
        const bool branch_taken_0x23c1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1F0u;
        // 0x23c1f4: 0x2ae20002  slti        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1f0) {
            ctx->pc = 0x23C22Cu;
            goto label_23c22c;
        }
    }
    ctx->pc = 0x23C1F8u;
label_23c1f8:
    // 0x23c1f8: 0x92c24a06  lbu         $v0, 0x4A06($s6)
    ctx->pc = 0x23c1f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18950)));
label_23c1fc:
    // 0x23c1fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23c200:
    if (ctx->pc == 0x23C200u) {
        ctx->pc = 0x23C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1FCu;
        // 0x23c200: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C204u;
        goto label_23c204;
    }
    ctx->pc = 0x23C1FCu;
    {
        const bool branch_taken_0x23c1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1FCu;
        // 0x23c200: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1fc) {
            ctx->pc = 0x23C218u;
            goto label_23c218;
        }
    }
    ctx->pc = 0x23C204u;
label_23c204:
    // 0x23c204: 0x8ec2012c  lw          $v0, 0x12C($s6)
    ctx->pc = 0x23c204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
label_23c208:
    // 0x23c208: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23c20c:
    // 0x23c20c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23c210:
    if (ctx->pc == 0x23C210u) {
        ctx->pc = 0x23C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C20Cu;
        // 0x23c210: 0x2ae20002  slti        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C214u;
        goto label_23c214;
    }
    ctx->pc = 0x23C20Cu;
    {
        const bool branch_taken_0x23c20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C20Cu;
        // 0x23c210: 0x2ae20002  slti        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c20c) {
            ctx->pc = 0x23C22Cu;
            goto label_23c22c;
        }
    }
    ctx->pc = 0x23C214u;
label_23c214:
    // 0x23c214: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c218:
    // 0x23c218: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c21c:
    // 0x23c21c: 0xc08b5ac  jal         func_22D6B0
label_23c220:
    if (ctx->pc == 0x23C220u) {
        ctx->pc = 0x23C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C21Cu;
        // 0x23c220: 0x24a558c0  addiu       $a1, $a1, 0x58C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C224u;
        goto label_23c224;
    }
    ctx->pc = 0x23C21Cu;
    SET_GPR_U32(ctx, 31, 0x23C224u);
    ctx->pc = 0x23C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C21Cu;
    // 0x23c220: 0x24a558c0  addiu       $a1, $a1, 0x58C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C21Cu, 0x23C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C224u;
label_23c224:
    // 0x23c224: 0x10000034  b           . + 4 + (0x34 << 2)
label_23c228:
    if (ctx->pc == 0x23C228u) {
        ctx->pc = 0x23C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C224u;
        // 0x23c228: 0x92660001  lbu         $a2, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C22Cu;
        goto label_23c22c;
    }
    ctx->pc = 0x23C224u;
    {
        const bool branch_taken_0x23c224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C224u;
        // 0x23c228: 0x92660001  lbu         $a2, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c224) {
            ctx->pc = 0x23C2F8u;
            goto label_23c2f8;
        }
    }
    ctx->pc = 0x23C22Cu;
label_23c22c:
    // 0x23c22c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_23c230:
    if (ctx->pc == 0x23C230u) {
        ctx->pc = 0x23C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C22Cu;
        // 0x23c230: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C234u;
        goto label_23c234;
    }
    ctx->pc = 0x23C22Cu;
    {
        const bool branch_taken_0x23c22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C22Cu;
        // 0x23c230: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c22c) {
            ctx->pc = 0x23C2A0u;
            goto label_23c2a0;
        }
    }
    ctx->pc = 0x23C234u;
label_23c234:
    // 0x23c234: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x23c234u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c238:
    // 0x23c238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c23c:
    // 0x23c23c: 0x50620038  beql        $v1, $v0, . + 4 + (0x38 << 2)
label_23c240:
    if (ctx->pc == 0x23C240u) {
        ctx->pc = 0x23C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C23Cu;
        // 0x23c240: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C244u;
        goto label_23c244;
    }
    ctx->pc = 0x23C23Cu;
    {
        const bool branch_taken_0x23c23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c23c) {
            ctx->pc = 0x23C240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C23Cu;
            // 0x23c240: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C320u;
            goto label_23c320;
        }
    }
    ctx->pc = 0x23C244u;
label_23c244:
    // 0x23c244: 0x10000017  b           . + 4 + (0x17 << 2)
label_23c248:
    if (ctx->pc == 0x23C248u) {
        ctx->pc = 0x23C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C244u;
        // 0x23c248: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C24Cu;
        goto label_23c24c;
    }
    ctx->pc = 0x23C244u;
    {
        const bool branch_taken_0x23c244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C244u;
        // 0x23c248: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c244) {
            ctx->pc = 0x23C2A4u;
            goto label_23c2a4;
        }
    }
    ctx->pc = 0x23C24Cu;
label_23c24c:
    // 0x23c24c: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x23c24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
label_23c250:
    // 0x23c250: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_23c254:
    if (ctx->pc == 0x23C254u) {
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C258u;
        goto label_23c258;
    }
    ctx->pc = 0x23C250u;
    {
        const bool branch_taken_0x23c250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c250) {
            ctx->pc = 0x23C2A0u;
            goto label_23c2a0;
        }
    }
    ctx->pc = 0x23C258u;
label_23c258:
    // 0x23c258: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x23c258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23c25c:
    // 0x23c25c: 0x3404c023  ori         $a0, $zero, 0xC023
    ctx->pc = 0x23c25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
label_23c260:
    // 0x23c260: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x23c260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_23c264:
    // 0x23c264: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23c264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23c268:
    // 0x23c268: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x23c268u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23c26c:
    // 0x23c26c: 0x16440006  bne         $s2, $a0, . + 4 + (0x6 << 2)
label_23c270:
    if (ctx->pc == 0x23C270u) {
        ctx->pc = 0x23C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C26Cu;
        // 0x23c270: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C274u;
        goto label_23c274;
    }
    ctx->pc = 0x23C26Cu;
    {
        const bool branch_taken_0x23c26c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x23C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C26Cu;
        // 0x23c270: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c26c) {
            ctx->pc = 0x23C288u;
            goto label_23c288;
        }
    }
    ctx->pc = 0x23C274u;
label_23c274:
    // 0x23c274: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x23c274u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c278:
    // 0x23c278: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23c27c:
    // 0x23c27c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_23c280:
    if (ctx->pc == 0x23C280u) {
        ctx->pc = 0x23C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C27Cu;
        // 0x23c280: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C284u;
        goto label_23c284;
    }
    ctx->pc = 0x23C27Cu;
    {
        const bool branch_taken_0x23c27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C27Cu;
        // 0x23c280: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c27c) {
            ctx->pc = 0x23C2A4u;
            goto label_23c2a4;
        }
    }
    ctx->pc = 0x23C284u;
label_23c284:
    // 0x23c284: 0x3402c223  ori         $v0, $zero, 0xC223
    ctx->pc = 0x23c284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23c288:
    // 0x23c288: 0x5642000b  bnel        $s2, $v0, . + 4 + (0xB << 2)
label_23c28c:
    if (ctx->pc == 0x23C28Cu) {
        ctx->pc = 0x23C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C288u;
        // 0x23c28c: 0x96c24018  lhu         $v0, 0x4018($s6) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C290u;
        goto label_23c290;
    }
    ctx->pc = 0x23C288u;
    {
        const bool branch_taken_0x23c288 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c288) {
            ctx->pc = 0x23C28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C288u;
            // 0x23c28c: 0x96c24018  lhu         $v0, 0x4018($s6) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2B8u;
            goto label_23c2b8;
        }
    }
    ctx->pc = 0x23C290u;
label_23c290:
    // 0x23c290: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x23c290u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c294:
    // 0x23c294: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23c294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23c298:
    // 0x23c298: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_23c29c:
    if (ctx->pc == 0x23C29Cu) {
        ctx->pc = 0x23C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C298u;
        // 0x23c29c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2A0u;
        goto label_23c2a0;
    }
    ctx->pc = 0x23C298u;
    {
        const bool branch_taken_0x23c298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C298u;
        // 0x23c29c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c298) {
            ctx->pc = 0x23C2B4u;
            goto label_23c2b4;
        }
    }
    ctx->pc = 0x23C2A0u;
label_23c2a0:
    // 0x23c2a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c2a4:
    // 0x23c2a4: 0xc08b5ac  jal         func_22D6B0
label_23c2a8:
    if (ctx->pc == 0x23C2A8u) {
        ctx->pc = 0x23C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2A4u;
        // 0x23c2a8: 0x24a558d0  addiu       $a1, $a1, 0x58D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2ACu;
        goto label_23c2ac;
    }
    ctx->pc = 0x23C2A4u;
    SET_GPR_U32(ctx, 31, 0x23C2ACu);
    ctx->pc = 0x23C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2A4u;
    // 0x23c2a8: 0x24a558d0  addiu       $a1, $a1, 0x58D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C2A4u, 0x23C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2ACu;
label_23c2ac:
    // 0x23c2ac: 0x10000012  b           . + 4 + (0x12 << 2)
label_23c2b0:
    if (ctx->pc == 0x23C2B0u) {
        ctx->pc = 0x23C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2ACu;
        // 0x23c2b0: 0x92660001  lbu         $a2, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2B4u;
        goto label_23c2b4;
    }
    ctx->pc = 0x23C2ACu;
    {
        const bool branch_taken_0x23c2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2ACu;
        // 0x23c2b0: 0x92660001  lbu         $a2, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2ac) {
            ctx->pc = 0x23C2F8u;
            goto label_23c2f8;
        }
    }
    ctx->pc = 0x23C2B4u;
label_23c2b4:
    // 0x23c2b4: 0x96c24018  lhu         $v0, 0x4018($s6)
    ctx->pc = 0x23c2b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16408)));
label_23c2b8:
    // 0x23c2b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_23c2bc:
    if (ctx->pc == 0x23C2BCu) {
        ctx->pc = 0x23C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2B8u;
        // 0x23c2bc: 0x8ec2012c  lw          $v0, 0x12C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2C0u;
        goto label_23c2c0;
    }
    ctx->pc = 0x23C2B8u;
    {
        const bool branch_taken_0x23c2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c2b8) {
            ctx->pc = 0x23C2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2B8u;
            // 0x23c2bc: 0x8ec2012c  lw          $v0, 0x12C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2D8u;
            goto label_23c2d8;
        }
    }
    ctx->pc = 0x23C2C0u;
label_23c2c0:
    // 0x23c2c0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c2c4:
    // 0x23c2c4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c2c8:
    // 0x23c2c8: 0xc08b5ac  jal         func_22D6B0
label_23c2cc:
    if (ctx->pc == 0x23C2CCu) {
        ctx->pc = 0x23C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C8u;
        // 0x23c2cc: 0x24a558e0  addiu       $a1, $a1, 0x58E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2D0u;
        goto label_23c2d0;
    }
    ctx->pc = 0x23C2C8u;
    SET_GPR_U32(ctx, 31, 0x23C2D0u);
    ctx->pc = 0x23C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2C8u;
    // 0x23c2cc: 0x24a558e0  addiu       $a1, $a1, 0x58E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C2C8u, 0x23C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2D0u;
label_23c2d0:
    // 0x23c2d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_23c2d4:
    if (ctx->pc == 0x23C2D4u) {
        ctx->pc = 0x23C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2D0u;
        // 0x23c2d4: 0x92660001  lbu         $a2, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2D8u;
        goto label_23c2d8;
    }
    ctx->pc = 0x23C2D0u;
    {
        const bool branch_taken_0x23c2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2D0u;
        // 0x23c2d4: 0x92660001  lbu         $a2, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2d0) {
            ctx->pc = 0x23C2F8u;
            goto label_23c2f8;
        }
    }
    ctx->pc = 0x23C2D8u;
label_23c2d8:
    // 0x23c2d8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x23c2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_23c2dc:
    // 0x23c2dc: 0x1000000f  b           . + 4 + (0xF << 2)
label_23c2e0:
    if (ctx->pc == 0x23C2E0u) {
        ctx->pc = 0x23C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2DCu;
        // 0x23c2e0: 0xaec2012c  sw          $v0, 0x12C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2E4u;
        goto label_23c2e4;
    }
    ctx->pc = 0x23C2DCu;
    {
        const bool branch_taken_0x23c2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2DCu;
        // 0x23c2e0: 0xaec2012c  sw          $v0, 0x12C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2dc) {
            ctx->pc = 0x23C31Cu;
            goto label_23c31c;
        }
    }
    ctx->pc = 0x23C2E4u;
label_23c2e4:
    // 0x23c2e4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c2e8:
    // 0x23c2e8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c2ec:
    // 0x23c2ec: 0xc08b5ac  jal         func_22D6B0
label_23c2f0:
    if (ctx->pc == 0x23C2F0u) {
        ctx->pc = 0x23C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2ECu;
        // 0x23c2f0: 0x24a558f8  addiu       $a1, $a1, 0x58F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2F4u;
        goto label_23c2f4;
    }
    ctx->pc = 0x23C2ECu;
    SET_GPR_U32(ctx, 31, 0x23C2F4u);
    ctx->pc = 0x23C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2ECu;
    // 0x23c2f0: 0x24a558f8  addiu       $a1, $a1, 0x58F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C2ECu, 0x23C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2F4u;
label_23c2f4:
    // 0x23c2f4: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x23c2f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c2f8:
    // 0x23c2f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23c2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23c2fc:
    // 0x23c2fc: 0xc08b4f8  jal         func_22D3E0
label_23c300:
    if (ctx->pc == 0x23C300u) {
        ctx->pc = 0x23C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2FCu;
        // 0x23c300: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C304u;
        goto label_23c304;
    }
    ctx->pc = 0x23C2FCu;
    SET_GPR_U32(ctx, 31, 0x23C304u);
    ctx->pc = 0x23C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2FCu;
    // 0x23c300: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23C2FCu, 0x23C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C304u;
label_23c304:
    // 0x23c304: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x23c304u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c308:
    // 0x23c308: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x23c308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23c30c:
    // 0x23c30c: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x23c30cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_23c310:
    // 0x23c310: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23c314:
    // 0x23c314: 0x10000002  b           . + 4 + (0x2 << 2)
label_23c318:
    if (ctx->pc == 0x23C318u) {
        ctx->pc = 0x23C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C314u;
        // 0x23c318: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C31Cu;
        goto label_23c31c;
    }
    ctx->pc = 0x23C314u;
    {
        const bool branch_taken_0x23c314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C314u;
        // 0x23c318: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c314) {
            ctx->pc = 0x23C320u;
            goto label_23c320;
        }
    }
    ctx->pc = 0x23C31Cu;
label_23c31c:
    // 0x23c31c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x23c31cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c320:
    // 0x23c320: 0x2e2b823  subu        $s7, $s7, $v0
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_23c324:
    // 0x23c324: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x23c324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_23c328:
    // 0x23c328: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x23c328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_23c32c:
    // 0x23c32c: 0x5040ff75  beql        $v0, $zero, . + 4 + (-0x8B << 2)
label_23c330:
    if (ctx->pc == 0x23C330u) {
        ctx->pc = 0x23C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C32Cu;
        // 0x23c330: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C334u;
        goto label_23c334;
    }
    ctx->pc = 0x23C32Cu;
    {
        const bool branch_taken_0x23c32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c32c) {
            ctx->pc = 0x23C330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C32Cu;
            // 0x23c330: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c104;
        }
    }
    ctx->pc = 0x23C334u;
label_23c334:
    // 0x23c334: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23c338:
    // 0x23c338: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23c33c:
    if (ctx->pc == 0x23C33Cu) {
        ctx->pc = 0x23C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C338u;
        // 0x23c33c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C340u;
        goto label_23c340;
    }
    ctx->pc = 0x23C338u;
    {
        const bool branch_taken_0x23c338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C338u;
        // 0x23c33c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c338) {
            ctx->pc = 0x23C368u;
            goto label_23c368;
        }
    }
    ctx->pc = 0x23C340u;
label_23c340:
    // 0x23c340: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c344:
    // 0x23c344: 0xc08b5ac  jal         func_22D6B0
label_23c348:
    if (ctx->pc == 0x23C348u) {
        ctx->pc = 0x23C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C344u;
        // 0x23c348: 0x24a55900  addiu       $a1, $a1, 0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C34Cu;
        goto label_23c34c;
    }
    ctx->pc = 0x23C344u;
    SET_GPR_U32(ctx, 31, 0x23C34Cu);
    ctx->pc = 0x23C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C344u;
    // 0x23c348: 0x24a55900  addiu       $a1, $a1, 0x5900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C344u, 0x23C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C34Cu;
label_23c34c:
    // 0x23c34c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c350:
    // 0x23c350: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23c354:
    // 0x23c354: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23c358:
    // 0x23c358: 0x3405c021  ori         $a1, $zero, 0xC021
    ctx->pc = 0x23c358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_23c35c:
    // 0x23c35c: 0x90670001  lbu         $a3, 0x1($v1)
    ctx->pc = 0x23c35cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_23c360:
    // 0x23c360: 0x10000117  b           . + 4 + (0x117 << 2)
label_23c364:
    if (ctx->pc == 0x23C364u) {
        ctx->pc = 0x23C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C360u;
        // 0x23c364: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C368u;
        goto label_23c368;
    }
    ctx->pc = 0x23C360u;
    {
        const bool branch_taken_0x23c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C360u;
        // 0x23c364: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c360) {
            ctx->pc = 0x23C7C0u;
            goto label_23c7c0;
        }
    }
    ctx->pc = 0x23C368u;
label_23c368:
    // 0x23c368: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c36c:
    // 0x23c36c: 0xc08b5ac  jal         func_22D6B0
label_23c370:
    if (ctx->pc == 0x23C370u) {
        ctx->pc = 0x23C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C36Cu;
        // 0x23c370: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C374u;
        goto label_23c374;
    }
    ctx->pc = 0x23C36Cu;
    SET_GPR_U32(ctx, 31, 0x23C374u);
    ctx->pc = 0x23C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C36Cu;
    // 0x23c370: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C36Cu, 0x23C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C374u;
label_23c374:
    // 0x23c374: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c378:
    // 0x23c378: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x23c378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23c37c:
    // 0x23c37c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c380:
    // 0x23c380: 0xc08b5ac  jal         func_22D6B0
label_23c384:
    if (ctx->pc == 0x23C384u) {
        ctx->pc = 0x23C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C380u;
        // 0x23c384: 0x24a55910  addiu       $a1, $a1, 0x5910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C388u;
        goto label_23c388;
    }
    ctx->pc = 0x23C380u;
    SET_GPR_U32(ctx, 31, 0x23C388u);
    ctx->pc = 0x23C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C380u;
    // 0x23c384: 0x24a55910  addiu       $a1, $a1, 0x5910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C380u, 0x23C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C388u;
label_23c388:
    // 0x23c388: 0x8fb30014  lw          $s3, 0x14($sp)
    ctx->pc = 0x23c388u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23c38c:
    // 0x23c38c: 0x162000ff  bnez        $s1, . + 4 + (0xFF << 2)
label_23c390:
    if (ctx->pc == 0x23C390u) {
        ctx->pc = 0x23C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C38Cu;
        // 0x23c390: 0x8fb70008  lw          $s7, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C394u;
        goto label_23c394;
    }
    ctx->pc = 0x23C38Cu;
    {
        const bool branch_taken_0x23c38c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C38Cu;
        // 0x23c390: 0x8fb70008  lw          $s7, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c38c) {
            ctx->pc = 0x23C78Cu;
            goto label_23c78c;
        }
    }
    ctx->pc = 0x23C394u;
label_23c394:
    // 0x23c394: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x23c394u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c398:
    // 0x23c398: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
label_23c39c:
    if (ctx->pc == 0x23C39Cu) {
        ctx->pc = 0x23C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C398u;
        // 0x23c39c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3A0u;
        goto label_23c3a0;
    }
    ctx->pc = 0x23C398u;
    {
        const bool branch_taken_0x23c398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C398u;
        // 0x23c39c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c398) {
            ctx->pc = 0x23C790u;
            goto label_23c790;
        }
    }
    ctx->pc = 0x23C3A0u;
label_23c3a0:
    // 0x23c3a0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23c3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23c3a4:
    // 0x23c3a4: 0x0  nop
    ctx->pc = 0x23c3a4u;
    // NOP
label_23c3a8:
    // 0x23c3a8: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x23c3a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_23c3ac:
    // 0x23c3ac: 0x261058b8  addiu       $s0, $s0, 0x58B8
    ctx->pc = 0x23c3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22712));
label_23c3b0:
    // 0x23c3b0: 0xc09032e  jal         func_240CB8
label_23c3b4:
    if (ctx->pc == 0x23C3B4u) {
        ctx->pc = 0x23C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3B0u;
        // 0x23c3b4: 0x92740001  lbu         $s4, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3B8u;
        goto label_23c3b8;
    }
    ctx->pc = 0x23C3B0u;
    SET_GPR_U32(ctx, 31, 0x23C3B8u);
    ctx->pc = 0x23C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3B0u;
    // 0x23c3b4: 0x92740001  lbu         $s4, 0x1($s3) (Delay Slot)
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240CB8u, 0x23C3B0u, 0x23C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3B8u;
label_23c3b8:
    // 0x23c3b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c3bc:
    // 0x23c3bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23c3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c3c0:
    // 0x23c3c0: 0xc08b5ac  jal         func_22D6B0
label_23c3c4:
    if (ctx->pc == 0x23C3C4u) {
        ctx->pc = 0x23C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3C0u;
        // 0x23c3c4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3C8u;
        goto label_23c3c8;
    }
    ctx->pc = 0x23C3C0u;
    SET_GPR_U32(ctx, 31, 0x23C3C8u);
    ctx->pc = 0x23C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3C0u;
    // 0x23c3c4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C3C0u, 0x23C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3C8u;
label_23c3c8:
    // 0x23c3c8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23c3c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_23c3cc:
    // 0x23c3cc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c3d0:
    // 0x23c3d0: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x23c3d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23c3d4:
    // 0x23c3d4: 0x106000df  beqz        $v1, . + 4 + (0xDF << 2)
label_23c3d8:
    if (ctx->pc == 0x23C3D8u) {
        ctx->pc = 0x23C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3D4u;
        // 0x23c3d8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3DCu;
        goto label_23c3dc;
    }
    ctx->pc = 0x23C3D4u;
    {
        const bool branch_taken_0x23c3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3D4u;
        // 0x23c3d8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3d4) {
            ctx->pc = 0x23C754u;
            goto label_23c754;
        }
    }
    ctx->pc = 0x23C3DCu;
label_23c3dc:
    // 0x23c3dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23c3e0:
    // 0x23c3e0: 0x244259e0  addiu       $v0, $v0, 0x59E0
    ctx->pc = 0x23c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23008));
label_23c3e4:
    // 0x23c3e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23c3e8:
    // 0x23c3e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23c3ec:
    // 0x23c3ec: 0x800008  jr          $a0
label_23c3f0:
    if (ctx->pc == 0x23C3F0u) {
        ctx->pc = 0x23C3F4u;
        goto label_23c3f4;
    }
    ctx->pc = 0x23C3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C3F4u: goto label_23c3f4;
            case 0x23C54Cu: goto label_23c54c;
            case 0x23C590u: goto label_23c590;
            case 0x23C620u: goto label_23c620;
            case 0x23C634u: goto label_23c634;
            case 0x23C648u: goto label_23c648;
            case 0x23C754u: goto label_23c754;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C3ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23C3F4u;
label_23c3f4:
    // 0x23c3f4: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x23c3f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23c3f8:
    // 0x23c3f8: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x23c3f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_23c3fc:
    // 0x23c3fc: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x23c3fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_23c400:
    // 0x23c400: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x23c400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_23c404:
    // 0x23c404: 0x92650005  lbu         $a1, 0x5($s3)
    ctx->pc = 0x23c404u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_23c408:
    // 0x23c408: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23c408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23c40c:
    // 0x23c40c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x23c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_23c410:
    // 0x23c410: 0x8ec60274  lw          $a2, 0x274($s6)
    ctx->pc = 0x23c410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 628)));
label_23c414:
    // 0x23c414: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23c414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_23c418:
    // 0x23c418: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23c418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23c41c:
    // 0x23c41c: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x23c41cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23c420:
    // 0x23c420: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
label_23c424:
    if (ctx->pc == 0x23C424u) {
        ctx->pc = 0x23C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C420u;
        // 0x23c424: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C428u;
        goto label_23c428;
    }
    ctx->pc = 0x23C420u;
    {
        const bool branch_taken_0x23c420 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x23C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C420u;
        // 0x23c424: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c420) {
            ctx->pc = 0x23C444u;
            goto label_23c444;
        }
    }
    ctx->pc = 0x23C428u;
label_23c428:
    // 0x23c428: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x23c428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23c42c:
    // 0x23c42c: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x23c42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
label_23c430:
    // 0x23c430: 0xc08b5ac  jal         func_22D6B0
label_23c434:
    if (ctx->pc == 0x23C434u) {
        ctx->pc = 0x23C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C430u;
        // 0x23c434: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C438u;
        goto label_23c438;
    }
    ctx->pc = 0x23C430u;
    SET_GPR_U32(ctx, 31, 0x23C438u);
    ctx->pc = 0x23C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C430u;
    // 0x23c434: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C430u, 0x23C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C438u;
label_23c438:
    // 0x23c438: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c438u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c43c:
    // 0x23c43c: 0x100000cc  b           . + 4 + (0xCC << 2)
label_23c440:
    if (ctx->pc == 0x23C440u) {
        ctx->pc = 0x23C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C43Cu;
        // 0x23c440: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C444u;
        goto label_23c444;
    }
    ctx->pc = 0x23C43Cu;
    {
        const bool branch_taken_0x23c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C43Cu;
        // 0x23c440: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c43c) {
            ctx->pc = 0x23C770u;
            goto label_23c770;
        }
    }
    ctx->pc = 0x23C444u;
label_23c444:
    // 0x23c444: 0x96c20136  lhu         $v0, 0x136($s6)
    ctx->pc = 0x23c444u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
label_23c448:
    // 0x23c448: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x23c448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_23c44c:
    // 0x23c44c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_23c450:
    if (ctx->pc == 0x23C450u) {
        ctx->pc = 0x23C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C44Cu;
        // 0x23c450: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C454u;
        goto label_23c454;
    }
    ctx->pc = 0x23C44Cu;
    {
        const bool branch_taken_0x23c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c44c) {
            ctx->pc = 0x23C450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C44Cu;
            // 0x23c450: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C4E4u;
            goto label_23c4e4;
        }
    }
    ctx->pc = 0x23C454u;
label_23c454:
    // 0x23c454: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c458:
    // 0x23c458: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x23c458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23c45c:
    // 0x23c45c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23c460:
    // 0x23c460: 0xc08b5ac  jal         func_22D6B0
label_23c464:
    if (ctx->pc == 0x23C464u) {
        ctx->pc = 0x23C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C460u;
        // 0x23c464: 0x24a554d8  addiu       $a1, $a1, 0x54D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C468u;
        goto label_23c468;
    }
    ctx->pc = 0x23C460u;
    SET_GPR_U32(ctx, 31, 0x23C468u);
    ctx->pc = 0x23C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C460u;
    // 0x23c464: 0x24a554d8  addiu       $a1, $a1, 0x54D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C460u, 0x23C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C468u;
label_23c468:
    // 0x23c468: 0x96c20030  lhu         $v0, 0x30($s6)
    ctx->pc = 0x23c468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
label_23c46c:
    // 0x23c46c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23c470:
    // 0x23c470: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_23c474:
    if (ctx->pc == 0x23C474u) {
        ctx->pc = 0x23C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C470u;
        // 0x23c474: 0xa6c00136  sh          $zero, 0x136($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 310), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C478u;
        goto label_23c478;
    }
    ctx->pc = 0x23C470u;
    {
        const bool branch_taken_0x23c470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C470u;
        // 0x23c474: 0xa6c00136  sh          $zero, 0x136($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 310), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c470) {
            ctx->pc = 0x23C500u;
            goto label_23c500;
        }
    }
    ctx->pc = 0x23C478u;
label_23c478:
    // 0x23c478: 0xc08d4e4  jal         func_235390
label_23c47c:
    if (ctx->pc == 0x23C47Cu) {
        ctx->pc = 0x23C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C478u;
        // 0x23c47c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C480u;
        goto label_23c480;
    }
    ctx->pc = 0x23C478u;
    SET_GPR_U32(ctx, 31, 0x23C480u);
    ctx->pc = 0x23C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C478u;
    // 0x23c47c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235390u, 0x23C478u, 0x23C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C480u;
label_23c480:
    // 0x23c480: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23c480u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23c484:
    // 0x23c484: 0x2f48823  subu        $s1, $s7, $s4
    ctx->pc = 0x23c484u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_23c488:
    // 0x23c488: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c488u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c48c:
    // 0x23c48c: 0x8ec40114  lw          $a0, 0x114($s6)
    ctx->pc = 0x23c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 276)));
label_23c490:
    // 0x23c490: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_23c494:
    if (ctx->pc == 0x23C494u) {
        ctx->pc = 0x23C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C490u;
        // 0x23c494: 0x26105060  addiu       $s0, $s0, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C498u;
        goto label_23c498;
    }
    ctx->pc = 0x23C490u;
    {
        const bool branch_taken_0x23c490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c490) {
            ctx->pc = 0x23C494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C490u;
            // 0x23c494: 0x26105060  addiu       $s0, $s0, 0x5060 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20576));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C4C4u;
            goto label_23c4c4;
        }
    }
    ctx->pc = 0x23C498u;
label_23c498:
    // 0x23c498: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23c49c:
    // 0x23c49c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_23c4a0:
    if (ctx->pc == 0x23C4A0u) {
        ctx->pc = 0x23C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C49Cu;
        // 0x23c4a0: 0xaec20114  sw          $v0, 0x114($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4A4u;
        goto label_23c4a4;
    }
    ctx->pc = 0x23C49Cu;
    {
        const bool branch_taken_0x23c49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C49Cu;
        // 0x23c4a0: 0xaec20114  sw          $v0, 0x114($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c49c) {
            ctx->pc = 0x23C4A8u;
            goto label_23c4a8;
        }
    }
    ctx->pc = 0x23C4A4u;
label_23c4a4:
    // 0x23c4a4: 0xaec00118  sw          $zero, 0x118($s6)
    ctx->pc = 0x23c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 280), GPR_U32(ctx, 0));
label_23c4a8:
    // 0x23c4a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_23c4ac:
    // 0x23c4ac: 0x8ec2011c  lw          $v0, 0x11C($s6)
    ctx->pc = 0x23c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 284)));
label_23c4b0:
    // 0x23c4b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c4b4:
    // 0x23c4b4: 0xc08a9d6  jal         func_22A758
label_23c4b8:
    if (ctx->pc == 0x23C4B8u) {
        ctx->pc = 0x23C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4B4u;
        // 0x23c4b8: 0xaec2011c  sw          $v0, 0x11C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4BCu;
        goto label_23c4bc;
    }
    ctx->pc = 0x23C4B4u;
    SET_GPR_U32(ctx, 31, 0x23C4BCu);
    ctx->pc = 0x23C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4B4u;
    // 0x23c4b8: 0xaec2011c  sw          $v0, 0x11C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x23C4B4u, 0x23C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4BCu;
label_23c4bc:
    // 0x23c4bc: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_23c4c0:
    if (ctx->pc == 0x23C4C0u) {
        ctx->pc = 0x23C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4BCu;
        // 0x23c4c0: 0x8ec40114  lw          $a0, 0x114($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4C4u;
        goto label_23c4c4;
    }
    ctx->pc = 0x23C4BCu;
    {
        const bool branch_taken_0x23c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4BCu;
        // 0x23c4c0: 0x8ec40114  lw          $a0, 0x114($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4bc) {
            ctx->pc = 0x23C490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c490;
        }
    }
    ctx->pc = 0x23C4C4u;
label_23c4c4:
    // 0x23c4c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x23c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23c4c8:
    // 0x23c4c8: 0x40f809  jalr        $v0
label_23c4cc:
    if (ctx->pc == 0x23C4CCu) {
        ctx->pc = 0x23C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4C8u;
        // 0x23c4cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4D0u;
        goto label_23c4d0;
    }
    ctx->pc = 0x23C4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C4D0u);
        ctx->pc = 0x23C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4C8u;
        // 0x23c4cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C4C8u, 0x23C4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C4D0u;
label_23c4d0:
    // 0x23c4d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23c4d4:
    // 0x23c4d4: 0x60f809  jalr        $v1
label_23c4d8:
    if (ctx->pc == 0x23C4D8u) {
        ctx->pc = 0x23C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4D4u;
        // 0x23c4d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4DCu;
        goto label_23c4dc;
    }
    ctx->pc = 0x23C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23C4DCu);
        ctx->pc = 0x23C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4D4u;
        // 0x23c4d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C4D4u, 0x23C4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C4DCu;
label_23c4dc:
    // 0x23c4dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_23c4e0:
    if (ctx->pc == 0x23C4E0u) {
        ctx->pc = 0x23C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4DCu;
        // 0x23c4e0: 0x96c20136  lhu         $v0, 0x136($s6) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4E4u;
        goto label_23c4e4;
    }
    ctx->pc = 0x23C4DCu;
    {
        const bool branch_taken_0x23c4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4DCu;
        // 0x23c4e0: 0x96c20136  lhu         $v0, 0x136($s6) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4dc) {
            ctx->pc = 0x23C50Cu;
            goto label_23c50c;
        }
    }
    ctx->pc = 0x23C4E4u;
label_23c4e4:
    // 0x23c4e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c4e8:
    // 0x23c4e8: 0xc08b5ac  jal         func_22D6B0
label_23c4ec:
    if (ctx->pc == 0x23C4ECu) {
        ctx->pc = 0x23C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4E8u;
        // 0x23c4ec: 0x24a55938  addiu       $a1, $a1, 0x5938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4F0u;
        goto label_23c4f0;
    }
    ctx->pc = 0x23C4E8u;
    SET_GPR_U32(ctx, 31, 0x23C4F0u);
    ctx->pc = 0x23C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4E8u;
    // 0x23c4ec: 0x24a55938  addiu       $a1, $a1, 0x5938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C4E8u, 0x23C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4F0u;
label_23c4f0:
    // 0x23c4f0: 0x2f48823  subu        $s1, $s7, $s4
    ctx->pc = 0x23c4f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_23c4f4:
    // 0x23c4f4: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c4f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c4f8:
    // 0x23c4f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_23c4fc:
    if (ctx->pc == 0x23C4FCu) {
        ctx->pc = 0x23C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4F8u;
        // 0x23c4fc: 0x96c20136  lhu         $v0, 0x136($s6) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C500u;
        goto label_23c500;
    }
    ctx->pc = 0x23C4F8u;
    {
        const bool branch_taken_0x23c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4F8u;
        // 0x23c4fc: 0x96c20136  lhu         $v0, 0x136($s6) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4f8) {
            ctx->pc = 0x23C50Cu;
            goto label_23c50c;
        }
    }
    ctx->pc = 0x23C500u;
label_23c500:
    // 0x23c500: 0x2f48823  subu        $s1, $s7, $s4
    ctx->pc = 0x23c500u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_23c504:
    // 0x23c504: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c508:
    // 0x23c508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c50c:
    // 0x23c50c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23c510:
    // 0x23c510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23c514:
    // 0x23c514: 0xa6c20136  sh          $v0, 0x136($s6)
    ctx->pc = 0x23c514u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 310), (uint16_t)GPR_U32(ctx, 2));
label_23c518:
    // 0x23c518: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23c518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23c51c:
    // 0x23c51c: 0xc08b4f8  jal         func_22D3E0
label_23c520:
    if (ctx->pc == 0x23C520u) {
        ctx->pc = 0x23C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C51Cu;
        // 0x23c520: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C524u;
        goto label_23c524;
    }
    ctx->pc = 0x23C51Cu;
    SET_GPR_U32(ctx, 31, 0x23C524u);
    ctx->pc = 0x23C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C51Cu;
    // 0x23c520: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23C51Cu, 0x23C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C524u;
label_23c524:
    // 0x23c524: 0x8ec20274  lw          $v0, 0x274($s6)
    ctx->pc = 0x23c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 628)));
label_23c528:
    // 0x23c528: 0x23827  nor         $a3, $zero, $v0
    ctx->pc = 0x23c528u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c52c:
    // 0x23c52c: 0x71e02  srl         $v1, $a3, 24
    ctx->pc = 0x23c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
label_23c530:
    // 0x23c530: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x23c530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_23c534:
    // 0x23c534: 0x72202  srl         $a0, $a3, 8
    ctx->pc = 0x23c534u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_23c538:
    // 0x23c538: 0xa3c30002  sb          $v1, 0x2($fp)
    ctx->pc = 0x23c538u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 3));
label_23c53c:
    // 0x23c53c: 0xa3c20003  sb          $v0, 0x3($fp)
    ctx->pc = 0x23c53cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 2));
label_23c540:
    // 0x23c540: 0xa3c40004  sb          $a0, 0x4($fp)
    ctx->pc = 0x23c540u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4), (uint8_t)GPR_U32(ctx, 4));
label_23c544:
    // 0x23c544: 0x10000085  b           . + 4 + (0x85 << 2)
label_23c548:
    if (ctx->pc == 0x23C548u) {
        ctx->pc = 0x23C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C544u;
        // 0x23c548: 0xa3c70005  sb          $a3, 0x5($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 5), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C54Cu;
        goto label_23c54c;
    }
    ctx->pc = 0x23C544u;
    {
        const bool branch_taken_0x23c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C544u;
        // 0x23c548: 0xa3c70005  sb          $a3, 0x5($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 5), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c544) {
            ctx->pc = 0x23C75Cu;
            goto label_23c75c;
        }
    }
    ctx->pc = 0x23C54Cu;
label_23c54c:
    // 0x23c54c: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x23c54cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23c550:
    // 0x23c550: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c554:
    // 0x23c554: 0x92630004  lbu         $v1, 0x4($s3)
    ctx->pc = 0x23c554u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_23c558:
    // 0x23c558: 0x24a55948  addiu       $a1, $a1, 0x5948
    ctx->pc = 0x23c558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22856));
label_23c55c:
    // 0x23c55c: 0x92660003  lbu         $a2, 0x3($s3)
    ctx->pc = 0x23c55cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_23c560:
    // 0x23c560: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23c560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_23c564:
    // 0x23c564: 0x92670005  lbu         $a3, 0x5($s3)
    ctx->pc = 0x23c564u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_23c568:
    // 0x23c568: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x23c568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_23c56c:
    // 0x23c56c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x23c56cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_23c570:
    // 0x23c570: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c574:
    // 0x23c574: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x23c574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_23c578:
    // 0x23c578: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x23c578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_23c57c:
    // 0x23c57c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23c57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23c580:
    // 0x23c580: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c580u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c584:
    // 0x23c584: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23c584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c588:
    // 0x23c588: 0x10000021  b           . + 4 + (0x21 << 2)
label_23c58c:
    if (ctx->pc == 0x23C58Cu) {
        ctx->pc = 0x23C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C588u;
        // 0x23c58c: 0xaec20284  sw          $v0, 0x284($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C590u;
        goto label_23c590;
    }
    ctx->pc = 0x23C588u;
    {
        const bool branch_taken_0x23c588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C588u;
        // 0x23c58c: 0xaec20284  sw          $v0, 0x284($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c588) {
            ctx->pc = 0x23C610u;
            goto label_23c610;
        }
    }
    ctx->pc = 0x23C590u;
label_23c590:
    // 0x23c590: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x23c590u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23c594:
    // 0x23c594: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x23c594u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_23c598:
    // 0x23c598: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23c598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23c59c:
    // 0x23c59c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x23c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23c5a0:
    // 0x23c5a0: 0x2c830080  sltiu       $v1, $a0, 0x80
    ctx->pc = 0x23c5a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_23c5a4:
    // 0x23c5a4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_23c5a8:
    if (ctx->pc == 0x23C5A8u) {
        ctx->pc = 0x23C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A4u;
        // 0x23c5a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5ACu;
        goto label_23c5ac;
    }
    ctx->pc = 0x23C5A4u;
    {
        const bool branch_taken_0x23c5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A4u;
        // 0x23c5a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5a4) {
            ctx->pc = 0x23C5BCu;
            goto label_23c5bc;
        }
    }
    ctx->pc = 0x23C5ACu;
label_23c5ac:
    // 0x23c5ac: 0x8ec249f8  lw          $v0, 0x49F8($s6)
    ctx->pc = 0x23c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18936)));
label_23c5b0:
    // 0x23c5b0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x23c5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23c5b4:
    // 0x23c5b4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_23c5b8:
    if (ctx->pc == 0x23C5B8u) {
        ctx->pc = 0x23C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5B4u;
        // 0x23c5b8: 0xaec4027c  sw          $a0, 0x27C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 636), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5BCu;
        goto label_23c5bc;
    }
    ctx->pc = 0x23C5B4u;
    {
        const bool branch_taken_0x23c5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c5b4) {
            ctx->pc = 0x23C5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C5B4u;
            // 0x23c5b8: 0xaec4027c  sw          $a0, 0x27C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 636), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C600u;
            goto label_23c600;
        }
    }
    ctx->pc = 0x23C5BCu;
label_23c5bc:
    // 0x23c5bc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c5c0:
    // 0x23c5c0: 0x8ec749f8  lw          $a3, 0x49F8($s6)
    ctx->pc = 0x23c5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18936)));
label_23c5c4:
    // 0x23c5c4: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x23c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
label_23c5c8:
    // 0x23c5c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c5cc:
    // 0x23c5cc: 0xc08b5ac  jal         func_22D6B0
label_23c5d0:
    if (ctx->pc == 0x23C5D0u) {
        ctx->pc = 0x23C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5CCu;
        // 0x23c5d0: 0x274a821  addu        $s5, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5D4u;
        goto label_23c5d4;
    }
    ctx->pc = 0x23C5CCu;
    SET_GPR_U32(ctx, 31, 0x23C5D4u);
    ctx->pc = 0x23C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5CCu;
    // 0x23c5d0: 0x274a821  addu        $s5, $s3, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C5CCu, 0x23C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5D4u;
label_23c5d4:
    // 0x23c5d4: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x23c5d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c5d8:
    // 0x23c5d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23c5dc:
    // 0x23c5dc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23c5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23c5e0:
    // 0x23c5e0: 0xc08b4f8  jal         func_22D3E0
label_23c5e4:
    if (ctx->pc == 0x23C5E4u) {
        ctx->pc = 0x23C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5E0u;
        // 0x23c5e4: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5E8u;
        goto label_23c5e8;
    }
    ctx->pc = 0x23C5E0u;
    SET_GPR_U32(ctx, 31, 0x23C5E8u);
    ctx->pc = 0x23C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5E0u;
    // 0x23c5e4: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23C5E0u, 0x23C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5E8u;
label_23c5e8:
    // 0x23c5e8: 0x8ec249f8  lw          $v0, 0x49F8($s6)
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18936)));
label_23c5ec:
    // 0x23c5ec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x23c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_23c5f0:
    // 0x23c5f0: 0xa3c20002  sb          $v0, 0x2($fp)
    ctx->pc = 0x23c5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 2));
label_23c5f4:
    // 0x23c5f4: 0x92c349f8  lbu         $v1, 0x49F8($s6)
    ctx->pc = 0x23c5f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18936)));
label_23c5f8:
    // 0x23c5f8: 0x10000058  b           . + 4 + (0x58 << 2)
label_23c5fc:
    if (ctx->pc == 0x23C5FCu) {
        ctx->pc = 0x23C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5F8u;
        // 0x23c5fc: 0xa3c30003  sb          $v1, 0x3($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C600u;
        goto label_23c600;
    }
    ctx->pc = 0x23C5F8u;
    {
        const bool branch_taken_0x23c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5F8u;
        // 0x23c5fc: 0xa3c30003  sb          $v1, 0x3($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5f8) {
            ctx->pc = 0x23C75Cu;
            goto label_23c75c;
        }
    }
    ctx->pc = 0x23C600u;
label_23c600:
    // 0x23c600: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c604:
    // 0x23c604: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c608:
    // 0x23c608: 0x24a55970  addiu       $a1, $a1, 0x5970
    ctx->pc = 0x23c608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22896));
label_23c60c:
    // 0x23c60c: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c60cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c610:
    // 0x23c610: 0xc08b5ac  jal         func_22D6B0
label_23c614:
    if (ctx->pc == 0x23C614u) {
        ctx->pc = 0x23C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C610u;
        // 0x23c614: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C618u;
        goto label_23c618;
    }
    ctx->pc = 0x23C610u;
    SET_GPR_U32(ctx, 31, 0x23C618u);
    ctx->pc = 0x23C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C610u;
    // 0x23c614: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C610u, 0x23C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C618u;
label_23c618:
    // 0x23c618: 0x10000056  b           . + 4 + (0x56 << 2)
label_23c61c:
    if (ctx->pc == 0x23C61Cu) {
        ctx->pc = 0x23C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C618u;
        // 0x23c61c: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C620u;
        goto label_23c620;
    }
    ctx->pc = 0x23C618u;
    {
        const bool branch_taken_0x23c618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C618u;
        // 0x23c61c: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c618) {
            ctx->pc = 0x23C774u;
            goto label_23c774;
        }
    }
    ctx->pc = 0x23C620u;
label_23c620:
    // 0x23c620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c624:
    // 0x23c624: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c624u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c628:
    // 0x23c628: 0xaec2028c  sw          $v0, 0x28C($s6)
    ctx->pc = 0x23c628u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 652), GPR_U32(ctx, 2));
label_23c62c:
    // 0x23c62c: 0x10000050  b           . + 4 + (0x50 << 2)
label_23c630:
    if (ctx->pc == 0x23C630u) {
        ctx->pc = 0x23C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C62Cu;
        // 0x23c630: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C634u;
        goto label_23c634;
    }
    ctx->pc = 0x23C62Cu;
    {
        const bool branch_taken_0x23c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C62Cu;
        // 0x23c630: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c62c) {
            ctx->pc = 0x23C770u;
            goto label_23c770;
        }
    }
    ctx->pc = 0x23C634u;
label_23c634:
    // 0x23c634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c638:
    // 0x23c638: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c638u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c63c:
    // 0x23c63c: 0xaec20294  sw          $v0, 0x294($s6)
    ctx->pc = 0x23c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 660), GPR_U32(ctx, 2));
label_23c640:
    // 0x23c640: 0x1000004b  b           . + 4 + (0x4B << 2)
label_23c644:
    if (ctx->pc == 0x23C644u) {
        ctx->pc = 0x23C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C640u;
        // 0x23c644: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C648u;
        goto label_23c648;
    }
    ctx->pc = 0x23C640u;
    {
        const bool branch_taken_0x23c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C640u;
        // 0x23c644: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c640) {
            ctx->pc = 0x23C770u;
            goto label_23c770;
        }
    }
    ctx->pc = 0x23C648u;
label_23c648:
    // 0x23c648: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x23c648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23c64c:
    // 0x23c64c: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x23c64cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_23c650:
    // 0x23c650: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23c650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23c654:
    // 0x23c654: 0x96c34018  lhu         $v1, 0x4018($s6)
    ctx->pc = 0x23c654u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16408)));
label_23c658:
    // 0x23c658: 0x829025  or          $s2, $a0, $v0
    ctx->pc = 0x23c658u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23c65c:
    // 0x23c65c: 0x1072002a  beq         $v1, $s2, . + 4 + (0x2A << 2)
label_23c660:
    if (ctx->pc == 0x23C660u) {
        ctx->pc = 0x23C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C65Cu;
        // 0x23c660: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C664u;
        goto label_23c664;
    }
    ctx->pc = 0x23C65Cu;
    {
        const bool branch_taken_0x23c65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x23C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C65Cu;
        // 0x23c660: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c65c) {
            ctx->pc = 0x23C708u;
            goto label_23c708;
        }
    }
    ctx->pc = 0x23C664u;
label_23c664:
    // 0x23c664: 0x96c2401a  lhu         $v0, 0x401A($s6)
    ctx->pc = 0x23c664u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16410)));
label_23c668:
    // 0x23c668: 0x10520026  beq         $v0, $s2, . + 4 + (0x26 << 2)
label_23c66c:
    if (ctx->pc == 0x23C66Cu) {
        ctx->pc = 0x23C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C668u;
        // 0x23c66c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C670u;
        goto label_23c670;
    }
    ctx->pc = 0x23C668u;
    {
        const bool branch_taken_0x23c668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x23C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C668u;
        // 0x23c66c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c668) {
            ctx->pc = 0x23C704u;
            goto label_23c704;
        }
    }
    ctx->pc = 0x23C670u;
label_23c670:
    // 0x23c670: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x23c670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23c674:
    // 0x23c674: 0xc0903d4  jal         func_240F50
label_23c678:
    if (ctx->pc == 0x23C678u) {
        ctx->pc = 0x23C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C674u;
        // 0x23c678: 0x26105978  addiu       $s0, $s0, 0x5978 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C67Cu;
        goto label_23c67c;
    }
    ctx->pc = 0x23C674u;
    SET_GPR_U32(ctx, 31, 0x23C67Cu);
    ctx->pc = 0x23C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C674u;
    // 0x23c678: 0x26105978  addiu       $s0, $s0, 0x5978 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240F50u, 0x23C674u, 0x23C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C67Cu;
label_23c67c:
    // 0x23c67c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23c67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c680:
    // 0x23c680: 0xc0903d4  jal         func_240F50
label_23c684:
    if (ctx->pc == 0x23C684u) {
        ctx->pc = 0x23C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C680u;
        // 0x23c684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C688u;
        goto label_23c688;
    }
    ctx->pc = 0x23C680u;
    SET_GPR_U32(ctx, 31, 0x23C688u);
    ctx->pc = 0x23C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C680u;
    // 0x23c684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240F50u, 0x23C680u, 0x23C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C688u;
label_23c688:
    // 0x23c688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c68c:
    // 0x23c68c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23c68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c690:
    // 0x23c690: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c694:
    // 0x23c694: 0xc08b5ac  jal         func_22D6B0
label_23c698:
    if (ctx->pc == 0x23C698u) {
        ctx->pc = 0x23C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C694u;
        // 0x23c698: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C69Cu;
        goto label_23c69c;
    }
    ctx->pc = 0x23C694u;
    SET_GPR_U32(ctx, 31, 0x23C69Cu);
    ctx->pc = 0x23C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C694u;
    // 0x23c698: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C694u, 0x23C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C69Cu;
label_23c69c:
    // 0x23c69c: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x23c69cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c6a0:
    // 0x23c6a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23c6a4:
    // 0x23c6a4: 0xc08b4f8  jal         func_22D3E0
label_23c6a8:
    if (ctx->pc == 0x23C6A8u) {
        ctx->pc = 0x23C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6A4u;
        // 0x23c6a8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6ACu;
        goto label_23c6ac;
    }
    ctx->pc = 0x23C6A4u;
    SET_GPR_U32(ctx, 31, 0x23C6ACu);
    ctx->pc = 0x23C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6A4u;
    // 0x23c6a8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23C6A4u, 0x23C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6ACu;
label_23c6ac:
    // 0x23c6ac: 0x96c24018  lhu         $v0, 0x4018($s6)
    ctx->pc = 0x23c6acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16408)));
label_23c6b0:
    // 0x23c6b0: 0x3404c023  ori         $a0, $zero, 0xC023
    ctx->pc = 0x23c6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
label_23c6b4:
    // 0x23c6b4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x23c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_23c6b8:
    // 0x23c6b8: 0xa3c20002  sb          $v0, 0x2($fp)
    ctx->pc = 0x23c6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 2));
label_23c6bc:
    // 0x23c6bc: 0x92c34018  lbu         $v1, 0x4018($s6)
    ctx->pc = 0x23c6bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16408)));
label_23c6c0:
    // 0x23c6c0: 0xa3c30003  sb          $v1, 0x3($fp)
    ctx->pc = 0x23c6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 3));
label_23c6c4:
    // 0x23c6c4: 0x96c34018  lhu         $v1, 0x4018($s6)
    ctx->pc = 0x23c6c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16408)));
label_23c6c8:
    // 0x23c6c8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_23c6cc:
    if (ctx->pc == 0x23C6CCu) {
        ctx->pc = 0x23C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6C8u;
        // 0x23c6cc: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6D0u;
        goto label_23c6d0;
    }
    ctx->pc = 0x23C6C8u;
    {
        const bool branch_taken_0x23c6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6C8u;
        // 0x23c6cc: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6c8) {
            ctx->pc = 0x23C6E0u;
            goto label_23c6e0;
        }
    }
    ctx->pc = 0x23C6D0u;
label_23c6d0:
    // 0x23c6d0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_23c6d4:
    if (ctx->pc == 0x23C6D4u) {
        ctx->pc = 0x23C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6D0u;
        // 0x23c6d4: 0x274a821  addu        $s5, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6D8u;
        goto label_23c6d8;
    }
    ctx->pc = 0x23C6D0u;
    {
        const bool branch_taken_0x23c6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6D0u;
        // 0x23c6d4: 0x274a821  addu        $s5, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6d0) {
            ctx->pc = 0x23C6F0u;
            goto label_23c6f0;
        }
    }
    ctx->pc = 0x23C6D8u;
label_23c6d8:
    // 0x23c6d8: 0x10000020  b           . + 4 + (0x20 << 2)
label_23c6dc:
    if (ctx->pc == 0x23C6DCu) {
        ctx->pc = 0x23C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6D8u;
        // 0x23c6dc: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6E0u;
        goto label_23c6e0;
    }
    ctx->pc = 0x23C6D8u;
    {
        const bool branch_taken_0x23c6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6D8u;
        // 0x23c6dc: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6d8) {
            ctx->pc = 0x23C75Cu;
            goto label_23c75c;
        }
    }
    ctx->pc = 0x23C6E0u;
label_23c6e0:
    // 0x23c6e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23c6e4:
    // 0x23c6e4: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c6e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c6e8:
    // 0x23c6e8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_23c6ec:
    if (ctx->pc == 0x23C6ECu) {
        ctx->pc = 0x23C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6E8u;
        // 0x23c6ec: 0xa3c20001  sb          $v0, 0x1($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6F0u;
        goto label_23c6f0;
    }
    ctx->pc = 0x23C6E8u;
    {
        const bool branch_taken_0x23c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6E8u;
        // 0x23c6ec: 0xa3c20001  sb          $v0, 0x1($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6e8) {
            ctx->pc = 0x23C758u;
            goto label_23c758;
        }
    }
    ctx->pc = 0x23C6F0u;
label_23c6f0:
    // 0x23c6f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23c6f4:
    // 0x23c6f4: 0xa3c20004  sb          $v0, 0x4($fp)
    ctx->pc = 0x23c6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4), (uint8_t)GPR_U32(ctx, 2));
label_23c6f8:
    // 0x23c6f8: 0x2f48823  subu        $s1, $s7, $s4
    ctx->pc = 0x23c6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_23c6fc:
    // 0x23c6fc: 0x10000017  b           . + 4 + (0x17 << 2)
label_23c700:
    if (ctx->pc == 0x23C700u) {
        ctx->pc = 0x23C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6FCu;
        // 0x23c700: 0xa3c20001  sb          $v0, 0x1($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C704u;
        goto label_23c704;
    }
    ctx->pc = 0x23C6FCu;
    {
        const bool branch_taken_0x23c6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6FCu;
        // 0x23c700: 0xa3c20001  sb          $v0, 0x1($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6fc) {
            ctx->pc = 0x23C75Cu;
            goto label_23c75c;
        }
    }
    ctx->pc = 0x23C704u;
label_23c704:
    // 0x23c704: 0x3402c223  ori         $v0, $zero, 0xC223
    ctx->pc = 0x23c704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23c708:
    // 0x23c708: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
label_23c70c:
    if (ctx->pc == 0x23C70Cu) {
        ctx->pc = 0x23C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C708u;
        // 0x23c70c: 0x274a821  addu        $s5, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C710u;
        goto label_23c710;
    }
    ctx->pc = 0x23C708u;
    {
        const bool branch_taken_0x23c708 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C708u;
        // 0x23c70c: 0x274a821  addu        $s5, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c708) {
            ctx->pc = 0x23C748u;
            goto label_23c748;
        }
    }
    ctx->pc = 0x23C710u;
label_23c710:
    // 0x23c710: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x23c710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_23c714:
    // 0x23c714: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x23c714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23c718:
    // 0x23c718: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_23c71c:
    if (ctx->pc == 0x23C71Cu) {
        ctx->pc = 0x23C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C718u;
        // 0x23c71c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C720u;
        goto label_23c720;
    }
    ctx->pc = 0x23C718u;
    {
        const bool branch_taken_0x23c718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C718u;
        // 0x23c71c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c718) {
            ctx->pc = 0x23C748u;
            goto label_23c748;
        }
    }
    ctx->pc = 0x23C720u;
label_23c720:
    // 0x23c720: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c724:
    // 0x23c724: 0xc08b5ac  jal         func_22D6B0
label_23c728:
    if (ctx->pc == 0x23C728u) {
        ctx->pc = 0x23C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C724u;
        // 0x23c728: 0x24a55990  addiu       $a1, $a1, 0x5990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C72Cu;
        goto label_23c72c;
    }
    ctx->pc = 0x23C724u;
    SET_GPR_U32(ctx, 31, 0x23C72Cu);
    ctx->pc = 0x23C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C724u;
    // 0x23c728: 0x24a55990  addiu       $a1, $a1, 0x5990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C724u, 0x23C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C72Cu;
label_23c72c:
    // 0x23c72c: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x23c72cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_23c730:
    // 0x23c730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23c734:
    // 0x23c734: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23c734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23c738:
    // 0x23c738: 0xc08b4f8  jal         func_22D3E0
label_23c73c:
    if (ctx->pc == 0x23C73Cu) {
        ctx->pc = 0x23C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C738u;
        // 0x23c73c: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C740u;
        goto label_23c740;
    }
    ctx->pc = 0x23C738u;
    SET_GPR_U32(ctx, 31, 0x23C740u);
    ctx->pc = 0x23C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C738u;
    // 0x23c73c: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23C738u, 0x23C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C740u;
label_23c740:
    // 0x23c740: 0x10000006  b           . + 4 + (0x6 << 2)
label_23c744:
    if (ctx->pc == 0x23C744u) {
        ctx->pc = 0x23C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C740u;
        // 0x23c744: 0xa3d00004  sb          $s0, 0x4($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 4), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C748u;
        goto label_23c748;
    }
    ctx->pc = 0x23C740u;
    {
        const bool branch_taken_0x23c740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C740u;
        // 0x23c744: 0xa3d00004  sb          $s0, 0x4($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 4), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c740) {
            ctx->pc = 0x23C75Cu;
            goto label_23c75c;
        }
    }
    ctx->pc = 0x23C748u;
label_23c748:
    // 0x23c748: 0xa6d2401c  sh          $s2, 0x401C($s6)
    ctx->pc = 0x23c748u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 16412), (uint16_t)GPR_U32(ctx, 18));
label_23c74c:
    // 0x23c74c: 0x10000008  b           . + 4 + (0x8 << 2)
label_23c750:
    if (ctx->pc == 0x23C750u) {
        ctx->pc = 0x23C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C74Cu;
        // 0x23c750: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C754u;
        goto label_23c754;
    }
    ctx->pc = 0x23C74Cu;
    {
        const bool branch_taken_0x23c74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C74Cu;
        // 0x23c750: 0x2f48823  subu        $s1, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c74c) {
            ctx->pc = 0x23C770u;
            goto label_23c770;
        }
    }
    ctx->pc = 0x23C754u;
label_23c754:
    // 0x23c754: 0x274a821  addu        $s5, $s3, $s4
    ctx->pc = 0x23c754u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23c758:
    // 0x23c758: 0x2f48823  subu        $s1, $s7, $s4
    ctx->pc = 0x23c758u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_23c75c:
    // 0x23c75c: 0x93c20001  lbu         $v0, 0x1($fp)
    ctx->pc = 0x23c75cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
label_23c760:
    // 0x23c760: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x23c760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23c764:
    // 0x23c764: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x23c764u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_23c768:
    // 0x23c768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23c76c:
    // 0x23c76c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x23c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_23c770:
    // 0x23c770: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x23c770u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c774:
    // 0x23c774: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x23c774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_23c778:
    // 0x23c778: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23c77c:
    if (ctx->pc == 0x23C77Cu) {
        ctx->pc = 0x23C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C778u;
        // 0x23c77c: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C780u;
        goto label_23c780;
    }
    ctx->pc = 0x23C778u;
    {
        const bool branch_taken_0x23c778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C778u;
        // 0x23c77c: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c778) {
            ctx->pc = 0x23C78Cu;
            goto label_23c78c;
        }
    }
    ctx->pc = 0x23C780u;
label_23c780:
    // 0x23c780: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x23c780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_23c784:
    // 0x23c784: 0x1440ff08  bnez        $v0, . + 4 + (-0xF8 << 2)
label_23c788:
    if (ctx->pc == 0x23C788u) {
        ctx->pc = 0x23C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C784u;
        // 0x23c788: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C78Cu;
        goto label_23c78c;
    }
    ctx->pc = 0x23C784u;
    {
        const bool branch_taken_0x23c784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C784u;
        // 0x23c788: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c784) {
            ctx->pc = 0x23C3A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c3a8;
        }
    }
    ctx->pc = 0x23C78Cu;
label_23c78c:
    // 0x23c78c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x23c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23c790:
    // 0x23c790: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_23c794:
    if (ctx->pc == 0x23C794u) {
        ctx->pc = 0x23C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C790u;
        // 0x23c794: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C798u;
        goto label_23c798;
    }
    ctx->pc = 0x23C790u;
    {
        const bool branch_taken_0x23c790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C790u;
        // 0x23c794: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c790) {
            ctx->pc = 0x23C7D4u;
            goto label_23c7d4;
        }
    }
    ctx->pc = 0x23C798u;
label_23c798:
    // 0x23c798: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c79c:
    // 0x23c79c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c7a0:
    // 0x23c7a0: 0xc08b5ac  jal         func_22D6B0
label_23c7a4:
    if (ctx->pc == 0x23C7A4u) {
        ctx->pc = 0x23C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7A0u;
        // 0x23c7a4: 0x24a559a0  addiu       $a1, $a1, 0x59A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7A8u;
        goto label_23c7a8;
    }
    ctx->pc = 0x23C7A0u;
    SET_GPR_U32(ctx, 31, 0x23C7A8u);
    ctx->pc = 0x23C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7A0u;
    // 0x23c7a4: 0x24a559a0  addiu       $a1, $a1, 0x59A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C7A0u, 0x23C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7A8u;
label_23c7a8:
    // 0x23c7a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c7ac:
    // 0x23c7ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23c7b0:
    // 0x23c7b0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x23c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23c7b4:
    // 0x23c7b4: 0x3405c021  ori         $a1, $zero, 0xC021
    ctx->pc = 0x23c7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_23c7b8:
    // 0x23c7b8: 0x90670001  lbu         $a3, 0x1($v1)
    ctx->pc = 0x23c7b8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_23c7bc:
    // 0x23c7bc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23c7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23c7c0:
    // 0x23c7c0: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x23c7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23c7c4:
    // 0x23c7c4: 0xc08e8be  jal         func_23A2F8
label_23c7c8:
    if (ctx->pc == 0x23C7C8u) {
        ctx->pc = 0x23C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7C4u;
        // 0x23c7c8: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7CCu;
        goto label_23c7cc;
    }
    ctx->pc = 0x23C7C4u;
    SET_GPR_U32(ctx, 31, 0x23C7CCu);
    ctx->pc = 0x23C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7C4u;
    // 0x23c7c8: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2F8u, 0x23C7C4u, 0x23C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7CCu;
label_23c7cc:
    // 0x23c7cc: 0x1000000f  b           . + 4 + (0xF << 2)
label_23c7d0:
    if (ctx->pc == 0x23C7D0u) {
        ctx->pc = 0x23C7D4u;
        goto label_23c7d4;
    }
    ctx->pc = 0x23C7CCu;
    {
        const bool branch_taken_0x23c7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7cc) {
            ctx->pc = 0x23C80Cu;
            goto label_23c80c;
        }
    }
    ctx->pc = 0x23C7D4u;
label_23c7d4:
    // 0x23c7d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c7d8:
    // 0x23c7d8: 0xc08b5ac  jal         func_22D6B0
label_23c7dc:
    if (ctx->pc == 0x23C7DCu) {
        ctx->pc = 0x23C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7D8u;
        // 0x23c7dc: 0x24a559b0  addiu       $a1, $a1, 0x59B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7E0u;
        goto label_23c7e0;
    }
    ctx->pc = 0x23C7D8u;
    SET_GPR_U32(ctx, 31, 0x23C7E0u);
    ctx->pc = 0x23C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7D8u;
    // 0x23c7dc: 0x24a559b0  addiu       $a1, $a1, 0x59B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C7D8u, 0x23C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7E0u;
label_23c7e0:
    // 0x23c7e0: 0xaec00198  sw          $zero, 0x198($s6)
    ctx->pc = 0x23c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 408), GPR_U32(ctx, 0));
label_23c7e4:
    // 0x23c7e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23c7e8:
    // 0x23c7e8: 0xa6c00136  sh          $zero, 0x136($s6)
    ctx->pc = 0x23c7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 310), (uint16_t)GPR_U32(ctx, 0));
label_23c7ec:
    // 0x23c7ec: 0x3405c021  ori         $a1, $zero, 0xC021
    ctx->pc = 0x23c7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_23c7f0:
    // 0x23c7f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23c7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c7f4:
    // 0x23c7f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c7f8:
    // 0x23c7f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x23c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_23c7fc:
    // 0x23c7fc: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x23c7fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23c800:
    // 0x23c800: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x23c800u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_23c804:
    // 0x23c804: 0xc08e8be  jal         func_23A2F8
label_23c808:
    if (ctx->pc == 0x23C808u) {
        ctx->pc = 0x23C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C804u;
        // 0x23c808: 0x3068ffff  andi        $t0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C80Cu;
        goto label_23c80c;
    }
    ctx->pc = 0x23C804u;
    SET_GPR_U32(ctx, 31, 0x23C80Cu);
    ctx->pc = 0x23C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C804u;
    // 0x23c808: 0x3068ffff  andi        $t0, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2F8u, 0x23C804u, 0x23C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C80Cu;
label_23c80c:
    // 0x23c80c: 0xc098560  jal         func_261580
label_23c810:
    if (ctx->pc == 0x23C810u) {
        ctx->pc = 0x23C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C80Cu;
        // 0x23c810: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C814u;
        goto label_23c814;
    }
    ctx->pc = 0x23C80Cu;
    SET_GPR_U32(ctx, 31, 0x23C814u);
    ctx->pc = 0x23C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C80Cu;
    // 0x23c810: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x23C80Cu, 0x23C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C814u;
label_23c814:
    // 0x23c814: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x23c814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23c818:
    // 0x23c818: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x23c818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23c81c:
    // 0x23c81c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23c81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23c820:
    // 0x23c820: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23c820u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23c824:
    // 0x23c824: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x23c824u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23c828:
    // 0x23c828: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x23c828u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23c82c:
    // 0x23c82c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23c82cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23c830:
    // 0x23c830: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x23c830u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23c834:
    // 0x23c834: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23c834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23c838:
    // 0x23c838: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23c838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23c83c:
    // 0x23c83c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23c83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23c840:
    // 0x23c840: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23c840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23c844:
    // 0x23c844: 0x3e00008  jr          $ra
label_23c848:
    if (ctx->pc == 0x23C848u) {
        ctx->pc = 0x23C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C844u;
        // 0x23c848: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C84Cu;
        goto label_23c84c;
    }
    ctx->pc = 0x23C844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C844u;
        // 0x23c848: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C84Cu;
label_23c84c:
    // 0x23c84c: 0x0  nop
    ctx->pc = 0x23c84cu;
    // NOP
label_23c850:
    // 0x23c850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23c854:
    // 0x23c854: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23c858:
    // 0x23c858: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23c85c:
    // 0x23c85c: 0x24d3fffc  addiu       $s3, $a2, -0x4
    ctx->pc = 0x23c85cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_23c860:
    // 0x23c860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c864:
    // 0x23c864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23c864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c868:
    // 0x23c868: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23c868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23c86c:
    // 0x23c86c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23c86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c870:
    // 0x23c870: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23c874:
    // 0x23c874: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23c878:
    // 0x23c878: 0xc098552  jal         func_261548
label_23c87c:
    if (ctx->pc == 0x23C87Cu) {
        ctx->pc = 0x23C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C878u;
        // 0x23c87c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C880u;
        goto label_23c880;
    }
    ctx->pc = 0x23C878u;
    SET_GPR_U32(ctx, 31, 0x23C880u);
    ctx->pc = 0x23C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C878u;
    // 0x23c87c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x23C878u, 0x23C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C880u;
label_23c880:
    // 0x23c880: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23c880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c884:
    // 0x23c884: 0x12800051  beqz        $s4, . + 4 + (0x51 << 2)
label_23c888:
    if (ctx->pc == 0x23C888u) {
        ctx->pc = 0x23C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C884u;
        // 0x23c888: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C88Cu;
        goto label_23c88c;
    }
    ctx->pc = 0x23C884u;
    {
        const bool branch_taken_0x23c884 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C884u;
        // 0x23c888: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c884) {
            ctx->pc = 0x23C9CCu;
            goto label_23c9cc;
        }
    }
    ctx->pc = 0x23C88Cu;
label_23c88c:
    // 0x23c88c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c890:
    // 0x23c890: 0x24a55a00  addiu       $a1, $a1, 0x5A00
    ctx->pc = 0x23c890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23040));
label_23c894:
    // 0x23c894: 0xc08b5ac  jal         func_22D6B0
label_23c898:
    if (ctx->pc == 0x23C898u) {
        ctx->pc = 0x23C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C894u;
        // 0x23c898: 0x26260014  addiu       $a2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C89Cu;
        goto label_23c89c;
    }
    ctx->pc = 0x23C894u;
    SET_GPR_U32(ctx, 31, 0x23C89Cu);
    ctx->pc = 0x23C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C894u;
    // 0x23c898: 0x26260014  addiu       $a2, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C894u, 0x23C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C89Cu;
label_23c89c:
    // 0x23c89c: 0x10000038  b           . + 4 + (0x38 << 2)
label_23c8a0:
    if (ctx->pc == 0x23C8A0u) {
        ctx->pc = 0x23C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C89Cu;
        // 0x23c8a0: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8A4u;
        goto label_23c8a4;
    }
    ctx->pc = 0x23C89Cu;
    {
        const bool branch_taken_0x23c89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C89Cu;
        // 0x23c8a0: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c89c) {
            ctx->pc = 0x23C980u;
            goto label_23c980;
        }
    }
    ctx->pc = 0x23C8A4u;
label_23c8a4:
    // 0x23c8a4: 0x0  nop
    ctx->pc = 0x23c8a4u;
    // NOP
label_23c8a8:
    // 0x23c8a8: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x23c8a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23c8ac:
    // 0x23c8ac: 0xc09032e  jal         func_240CB8
label_23c8b0:
    if (ctx->pc == 0x23C8B0u) {
        ctx->pc = 0x23C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8ACu;
        // 0x23c8b0: 0x261058b8  addiu       $s0, $s0, 0x58B8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8B4u;
        goto label_23c8b4;
    }
    ctx->pc = 0x23C8ACu;
    SET_GPR_U32(ctx, 31, 0x23C8B4u);
    ctx->pc = 0x23C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8ACu;
    // 0x23c8b0: 0x261058b8  addiu       $s0, $s0, 0x58B8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240CB8u, 0x23C8ACu, 0x23C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8B4u;
label_23c8b4:
    // 0x23c8b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c8b8:
    // 0x23c8b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23c8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c8bc:
    // 0x23c8bc: 0xc08b5ac  jal         func_22D6B0
label_23c8c0:
    if (ctx->pc == 0x23C8C0u) {
        ctx->pc = 0x23C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8BCu;
        // 0x23c8c0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8C4u;
        goto label_23c8c4;
    }
    ctx->pc = 0x23C8BCu;
    SET_GPR_U32(ctx, 31, 0x23C8C4u);
    ctx->pc = 0x23C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8BCu;
    // 0x23c8c0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C8BCu, 0x23C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8C4u;
label_23c8c4:
    // 0x23c8c4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x23c8c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23c8c8:
    // 0x23c8c8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x23c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c8cc:
    // 0x23c8cc: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x23c8ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23c8d0:
    // 0x23c8d0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_23c8d4:
    if (ctx->pc == 0x23C8D4u) {
        ctx->pc = 0x23C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8D0u;
        // 0x23c8d4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8D8u;
        goto label_23c8d8;
    }
    ctx->pc = 0x23C8D0u;
    {
        const bool branch_taken_0x23c8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8D0u;
        // 0x23c8d4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8d0) {
            ctx->pc = 0x23C974u;
            goto label_23c974;
        }
    }
    ctx->pc = 0x23C8D8u;
label_23c8d8:
    // 0x23c8d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23c8dc:
    // 0x23c8dc: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x23c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
label_23c8e0:
    // 0x23c8e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23c8e4:
    // 0x23c8e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23c8e8:
    // 0x23c8e8: 0x800008  jr          $a0
label_23c8ec:
    if (ctx->pc == 0x23C8ECu) {
        ctx->pc = 0x23C8F0u;
        goto label_23c8f0;
    }
    ctx->pc = 0x23C8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C8F0u: goto label_23c8f0;
            case 0x23C904u: goto label_23c904;
            case 0x23C914u: goto label_23c914;
            case 0x23C924u: goto label_23c924;
            case 0x23C938u: goto label_23c938;
            case 0x23C954u: goto label_23c954;
            case 0x23C974u: goto label_23c974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C8E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23C8F0u;
label_23c8f0:
    // 0x23c8f0: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x23c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_23c8f4:
    // 0x23c8f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23c8f8:
    // 0x23c8f8: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x23c8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
label_23c8fc:
    // 0x23c8fc: 0x10000012  b           . + 4 + (0x12 << 2)
label_23c900:
    if (ctx->pc == 0x23C900u) {
        ctx->pc = 0x23C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8FCu;
        // 0x23c900: 0xae200274  sw          $zero, 0x274($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C904u;
        goto label_23c904;
    }
    ctx->pc = 0x23C8FCu;
    {
        const bool branch_taken_0x23c8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8FCu;
        // 0x23c900: 0xae200274  sw          $zero, 0x274($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8fc) {
            ctx->pc = 0x23C948u;
            goto label_23c948;
        }
    }
    ctx->pc = 0x23C904u;
label_23c904:
    // 0x23c904: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x23c904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_23c908:
    // 0x23c908: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23c908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23c90c:
    // 0x23c90c: 0x1000000e  b           . + 4 + (0xE << 2)
label_23c910:
    if (ctx->pc == 0x23C910u) {
        ctx->pc = 0x23C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C90Cu;
        // 0x23c910: 0x3442fffb  ori         $v0, $v0, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C914u;
        goto label_23c914;
    }
    ctx->pc = 0x23C90Cu;
    {
        const bool branch_taken_0x23c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C90Cu;
        // 0x23c910: 0x3442fffb  ori         $v0, $v0, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c90c) {
            ctx->pc = 0x23C948u;
            goto label_23c948;
        }
    }
    ctx->pc = 0x23C914u;
label_23c914:
    // 0x23c914: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x23c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_23c918:
    // 0x23c918: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23c918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23c91c:
    // 0x23c91c: 0x1000000a  b           . + 4 + (0xA << 2)
label_23c920:
    if (ctx->pc == 0x23C920u) {
        ctx->pc = 0x23C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C91Cu;
        // 0x23c920: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C924u;
        goto label_23c924;
    }
    ctx->pc = 0x23C91Cu;
    {
        const bool branch_taken_0x23c91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C91Cu;
        // 0x23c920: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c91c) {
            ctx->pc = 0x23C948u;
            goto label_23c948;
        }
    }
    ctx->pc = 0x23C924u;
label_23c924:
    // 0x23c924: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x23c924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_23c928:
    // 0x23c928: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23c928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23c92c:
    // 0x23c92c: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x23c92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
label_23c930:
    // 0x23c930: 0x10000005  b           . + 4 + (0x5 << 2)
label_23c934:
    if (ctx->pc == 0x23C934u) {
        ctx->pc = 0x23C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C930u;
        // 0x23c934: 0xae200288  sw          $zero, 0x288($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C938u;
        goto label_23c938;
    }
    ctx->pc = 0x23C930u;
    {
        const bool branch_taken_0x23c930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C930u;
        // 0x23c934: 0xae200288  sw          $zero, 0x288($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c930) {
            ctx->pc = 0x23C948u;
            goto label_23c948;
        }
    }
    ctx->pc = 0x23C938u;
label_23c938:
    // 0x23c938: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x23c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_23c93c:
    // 0x23c93c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23c940:
    // 0x23c940: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x23c940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
label_23c944:
    // 0x23c944: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x23c944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
label_23c948:
    // 0x23c948: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23c948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23c94c:
    // 0x23c94c: 0x10000009  b           . + 4 + (0x9 << 2)
label_23c950:
    if (ctx->pc == 0x23C950u) {
        ctx->pc = 0x23C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C94Cu;
        // 0x23c950: 0xae230270  sw          $v1, 0x270($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C954u;
        goto label_23c954;
    }
    ctx->pc = 0x23C94Cu;
    {
        const bool branch_taken_0x23c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C94Cu;
        // 0x23c950: 0xae230270  sw          $v1, 0x270($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c94c) {
            ctx->pc = 0x23C974u;
            goto label_23c974;
        }
    }
    ctx->pc = 0x23C954u;
label_23c954:
    // 0x23c954: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c958:
    // 0x23c958: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c95c:
    // 0x23c95c: 0xc08b5ac  jal         func_22D6B0
label_23c960:
    if (ctx->pc == 0x23C960u) {
        ctx->pc = 0x23C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C95Cu;
        // 0x23c960: 0x24a55a18  addiu       $a1, $a1, 0x5A18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C964u;
        goto label_23c964;
    }
    ctx->pc = 0x23C95Cu;
    SET_GPR_U32(ctx, 31, 0x23C964u);
    ctx->pc = 0x23C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C95Cu;
    // 0x23c960: 0x24a55a18  addiu       $a1, $a1, 0x5A18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C95Cu, 0x23C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C964u;
label_23c964:
    // 0x23c964: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23c968:
    // 0x23c968: 0x8c625074  lw          $v0, 0x5074($v1)
    ctx->pc = 0x23c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20596)));
label_23c96c:
    // 0x23c96c: 0x40f809  jalr        $v0
label_23c970:
    if (ctx->pc == 0x23C970u) {
        ctx->pc = 0x23C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C96Cu;
        // 0x23c970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C974u;
        goto label_23c974;
    }
    ctx->pc = 0x23C96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C974u);
        ctx->pc = 0x23C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C96Cu;
        // 0x23c970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C96Cu, 0x23C974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C974u;
label_23c974:
    // 0x23c974: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x23c974u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_23c978:
    // 0x23c978: 0x2639823  subu        $s3, $s3, $v1
    ctx->pc = 0x23c978u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_23c97c:
    // 0x23c97c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x23c97cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_23c980:
    // 0x23c980: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x23c980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_23c984:
    // 0x23c984: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23c988:
    if (ctx->pc == 0x23C988u) {
        ctx->pc = 0x23C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C984u;
        // 0x23c988: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C98Cu;
        goto label_23c98c;
    }
    ctx->pc = 0x23C984u;
    {
        const bool branch_taken_0x23c984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C984u;
        // 0x23c988: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c984) {
            ctx->pc = 0x23C99Cu;
            goto label_23c99c;
        }
    }
    ctx->pc = 0x23C98Cu;
label_23c98c:
    // 0x23c98c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x23c98cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_23c990:
    // 0x23c990: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_23c994:
    if (ctx->pc == 0x23C994u) {
        ctx->pc = 0x23C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C990u;
        // 0x23c994: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C998u;
        goto label_23c998;
    }
    ctx->pc = 0x23C990u;
    {
        const bool branch_taken_0x23c990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C990u;
        // 0x23c994: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c990) {
            ctx->pc = 0x23C8A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c8a8;
        }
    }
    ctx->pc = 0x23C998u;
label_23c998:
    // 0x23c998: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23c998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23c99c:
    // 0x23c99c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c9a0:
    // 0x23c9a0: 0xc08b5ac  jal         func_22D6B0
label_23c9a4:
    if (ctx->pc == 0x23C9A4u) {
        ctx->pc = 0x23C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9A0u;
        // 0x23c9a4: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9A8u;
        goto label_23c9a8;
    }
    ctx->pc = 0x23C9A0u;
    SET_GPR_U32(ctx, 31, 0x23C9A8u);
    ctx->pc = 0x23C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9A0u;
    // 0x23c9a4: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23C9A0u, 0x23C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9A8u;
label_23c9a8:
    // 0x23c9a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23c9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23c9ac:
    // 0x23c9ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23c9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23c9b0:
    // 0x23c9b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23c9b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23c9b4:
    // 0x23c9b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23c9b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23c9b8:
    // 0x23c9b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23c9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23c9bc:
    // 0x23c9bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23c9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c9c0:
    // 0x23c9c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c9c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c9c4:
    // 0x23c9c4: 0x8098560  j           func_261580
label_23c9c8:
    if (ctx->pc == 0x23C9C8u) {
        ctx->pc = 0x23C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9C4u;
        // 0x23c9c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9CCu;
        goto label_23c9cc;
    }
    ctx->pc = 0x23C9C4u;
    ctx->pc = 0x23C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9C4u;
    // 0x23c9c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    sub_00261580_0x261580(rdram, ctx, runtime); return;
    ctx->pc = 0x23C9CCu;
label_23c9cc:
    // 0x23c9cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23c9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23c9d0:
    // 0x23c9d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23c9d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23c9d4:
    // 0x23c9d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23c9d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23c9d8:
    // 0x23c9d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23c9d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23c9dc:
    // 0x23c9dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23c9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c9e0:
    // 0x23c9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c9e4:
    // 0x23c9e4: 0x3e00008  jr          $ra
label_23c9e8:
    if (ctx->pc == 0x23C9E8u) {
        ctx->pc = 0x23C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9E4u;
        // 0x23c9e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9ECu;
        goto label_23c9ec;
    }
    ctx->pc = 0x23C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9E4u;
        // 0x23c9e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C9ECu;
label_23c9ec:
    // 0x23c9ec: 0x0  nop
    ctx->pc = 0x23c9ecu;
    // NOP
label_23c9f0:
    // 0x23c9f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23c9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23c9f4:
    // 0x23c9f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23c9f8:
    // 0x23c9f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23c9fc:
    // 0x23c9fc: 0x24d4fffc  addiu       $s4, $a2, -0x4
    ctx->pc = 0x23c9fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_23ca00:
    // 0x23ca00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23ca04:
    // 0x23ca04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23ca04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ca08:
    // 0x23ca08: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_23ca0c:
    // 0x23ca0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23ca0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ca10:
    // 0x23ca10: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23ca10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_23ca14:
    // 0x23ca14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ca18:
    // 0x23ca18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23ca1c:
    // 0x23ca1c: 0xc098552  jal         func_261548
label_23ca20:
    if (ctx->pc == 0x23CA20u) {
        ctx->pc = 0x23CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA1Cu;
        // 0x23ca20: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA24u;
        goto label_23ca24;
    }
    ctx->pc = 0x23CA1Cu;
    SET_GPR_U32(ctx, 31, 0x23CA24u);
    ctx->pc = 0x23CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA1Cu;
    // 0x23ca20: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x23CA1Cu, 0x23CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA24u;
label_23ca24:
    // 0x23ca24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23ca24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ca28:
    // 0x23ca28: 0x12a000d0  beqz        $s5, . + 4 + (0xD0 << 2)
label_23ca2c:
    if (ctx->pc == 0x23CA2Cu) {
        ctx->pc = 0x23CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA28u;
        // 0x23ca2c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA30u;
        goto label_23ca30;
    }
    ctx->pc = 0x23CA28u;
    {
        const bool branch_taken_0x23ca28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA28u;
        // 0x23ca2c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca28) {
            ctx->pc = 0x23CD6Cu;
            goto label_23cd6c;
        }
    }
    ctx->pc = 0x23CA30u;
label_23ca30:
    // 0x23ca30: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23ca34:
    // 0x23ca34: 0x24a55a50  addiu       $a1, $a1, 0x5A50
    ctx->pc = 0x23ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23120));
label_23ca38:
    // 0x23ca38: 0xc08b5ac  jal         func_22D6B0
label_23ca3c:
    if (ctx->pc == 0x23CA3Cu) {
        ctx->pc = 0x23CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA38u;
        // 0x23ca3c: 0x26460014  addiu       $a2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA40u;
        goto label_23ca40;
    }
    ctx->pc = 0x23CA38u;
    SET_GPR_U32(ctx, 31, 0x23CA40u);
    ctx->pc = 0x23CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA38u;
    // 0x23ca3c: 0x26460014  addiu       $a2, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CA38u, 0x23CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA40u;
label_23ca40:
    // 0x23ca40: 0x2a930002  slti        $s3, $s4, 0x2
    ctx->pc = 0x23ca40u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_23ca44:
    // 0x23ca44: 0x166000bb  bnez        $s3, . + 4 + (0xBB << 2)
label_23ca48:
    if (ctx->pc == 0x23CA48u) {
        ctx->pc = 0x23CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA44u;
        // 0x23ca48: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA4Cu;
        goto label_23ca4c;
    }
    ctx->pc = 0x23CA44u;
    {
        const bool branch_taken_0x23ca44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA44u;
        // 0x23ca48: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca44) {
            ctx->pc = 0x23CD34u;
            goto label_23cd34;
        }
    }
    ctx->pc = 0x23CA4Cu;
label_23ca4c:
    // 0x23ca4c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23ca4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23ca50:
    // 0x23ca50: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
label_23ca54:
    if (ctx->pc == 0x23CA54u) {
        ctx->pc = 0x23CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA50u;
        // 0x23ca54: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA58u;
        goto label_23ca58;
    }
    ctx->pc = 0x23CA50u;
    {
        const bool branch_taken_0x23ca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA50u;
        // 0x23ca54: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca50) {
            ctx->pc = 0x23CD34u;
            goto label_23cd34;
        }
    }
    ctx->pc = 0x23CA58u;
label_23ca58:
    // 0x23ca58: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x23ca58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23ca5c:
    // 0x23ca5c: 0xc09032e  jal         func_240CB8
label_23ca60:
    if (ctx->pc == 0x23CA60u) {
        ctx->pc = 0x23CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA5Cu;
        // 0x23ca60: 0x261058b8  addiu       $s0, $s0, 0x58B8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA64u;
        goto label_23ca64;
    }
    ctx->pc = 0x23CA5Cu;
    SET_GPR_U32(ctx, 31, 0x23CA64u);
    ctx->pc = 0x23CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA5Cu;
    // 0x23ca60: 0x261058b8  addiu       $s0, $s0, 0x58B8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240CB8u, 0x23CA5Cu, 0x23CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA64u;
label_23ca64:
    // 0x23ca64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ca64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ca68:
    // 0x23ca68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23ca68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ca6c:
    // 0x23ca6c: 0xc08b5ac  jal         func_22D6B0
label_23ca70:
    if (ctx->pc == 0x23CA70u) {
        ctx->pc = 0x23CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA6Cu;
        // 0x23ca70: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA74u;
        goto label_23ca74;
    }
    ctx->pc = 0x23CA6Cu;
    SET_GPR_U32(ctx, 31, 0x23CA74u);
    ctx->pc = 0x23CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA6Cu;
    // 0x23ca70: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CA6Cu, 0x23CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA74u;
label_23ca74:
    // 0x23ca74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x23ca74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23ca78:
    // 0x23ca78: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x23ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23ca7c:
    // 0x23ca7c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x23ca7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23ca80:
    // 0x23ca80: 0x106000a6  beqz        $v1, . + 4 + (0xA6 << 2)
label_23ca84:
    if (ctx->pc == 0x23CA84u) {
        ctx->pc = 0x23CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA80u;
        // 0x23ca84: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA88u;
        goto label_23ca88;
    }
    ctx->pc = 0x23CA80u;
    {
        const bool branch_taken_0x23ca80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA80u;
        // 0x23ca84: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca80) {
            ctx->pc = 0x23CD1Cu;
            goto label_23cd1c;
        }
    }
    ctx->pc = 0x23CA88u;
label_23ca88:
    // 0x23ca88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23ca8c:
    // 0x23ca8c: 0x24425a90  addiu       $v0, $v0, 0x5A90
    ctx->pc = 0x23ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23184));
label_23ca90:
    // 0x23ca90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ca94:
    // 0x23ca94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ca98:
    // 0x23ca98: 0x800008  jr          $a0
label_23ca9c:
    if (ctx->pc == 0x23CA9Cu) {
        ctx->pc = 0x23CAA0u;
        goto label_23caa0;
    }
    ctx->pc = 0x23CA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CAA0u: goto label_23caa0;
            case 0x23CB38u: goto label_23cb38;
            case 0x23CBA4u: goto label_23cba4;
            case 0x23CC08u: goto label_23cc08;
            case 0x23CC34u: goto label_23cc34;
            case 0x23CC68u: goto label_23cc68;
            case 0x23CD1Cu: goto label_23cd1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CA98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23CAA0u;
label_23caa0:
    // 0x23caa0: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x23caa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_23caa4:
    // 0x23caa4: 0x5440009e  bnel        $v0, $zero, . + 4 + (0x9E << 2)
label_23caa8:
    if (ctx->pc == 0x23CAA8u) {
        ctx->pc = 0x23CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAA4u;
        // 0x23caa8: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAACu;
        goto label_23caac;
    }
    ctx->pc = 0x23CAA4u;
    {
        const bool branch_taken_0x23caa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23caa4) {
            ctx->pc = 0x23CAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CAA4u;
            // 0x23caa8: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CAACu;
label_23caac:
    // 0x23caac: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x23caacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23cab0:
    // 0x23cab0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23cab4:
    // 0x23cab4: 0x5462009a  bnel        $v1, $v0, . + 4 + (0x9A << 2)
label_23cab8:
    if (ctx->pc == 0x23CAB8u) {
        ctx->pc = 0x23CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAB4u;
        // 0x23cab8: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CABCu;
        goto label_23cabc;
    }
    ctx->pc = 0x23CAB4u;
    {
        const bool branch_taken_0x23cab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cab4) {
            ctx->pc = 0x23CAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CAB4u;
            // 0x23cab8: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CABCu;
label_23cabc:
    // 0x23cabc: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x23cabcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23cac0:
    // 0x23cac0: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x23cac0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23cac4:
    // 0x23cac4: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x23cac4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23cac8:
    // 0x23cac8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x23cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_23cacc:
    // 0x23cacc: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x23caccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23cad0:
    // 0x23cad0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x23cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_23cad4:
    // 0x23cad4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x23cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_23cad8:
    // 0x23cad8: 0x8e420274  lw          $v0, 0x274($s2)
    ctx->pc = 0x23cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_23cadc:
    // 0x23cadc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x23cadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_23cae0:
    // 0x23cae0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23cae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_23cae4:
    // 0x23cae4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23cae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_23cae8:
    // 0x23cae8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23cae8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23caec:
    // 0x23caec: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_23caf0:
    if (ctx->pc == 0x23CAF0u) {
        ctx->pc = 0x23CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAECu;
        // 0x23caf0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAF4u;
        goto label_23caf4;
    }
    ctx->pc = 0x23CAECu;
    {
        const bool branch_taken_0x23caec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAECu;
        // 0x23caf0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23caec) {
            ctx->pc = 0x23CB14u;
            goto label_23cb14;
        }
    }
    ctx->pc = 0x23CAF4u;
label_23caf4:
    // 0x23caf4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23caf8:
    // 0x23caf8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23cafc:
    // 0x23cafc: 0xc08b5ac  jal         func_22D6B0
label_23cb00:
    if (ctx->pc == 0x23CB00u) {
        ctx->pc = 0x23CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAFCu;
        // 0x23cb00: 0x24a55a68  addiu       $a1, $a1, 0x5A68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB04u;
        goto label_23cb04;
    }
    ctx->pc = 0x23CAFCu;
    SET_GPR_U32(ctx, 31, 0x23CB04u);
    ctx->pc = 0x23CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAFCu;
    // 0x23cb00: 0x24a55a68  addiu       $a1, $a1, 0x5A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CAFCu, 0x23CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB04u;
label_23cb04:
    // 0x23cb04: 0xc08b614  jal         func_22D850
label_23cb08:
    if (ctx->pc == 0x23CB08u) {
        ctx->pc = 0x23CB0Cu;
        goto label_23cb0c;
    }
    ctx->pc = 0x23CB04u;
    SET_GPR_U32(ctx, 31, 0x23CB0Cu);
    ctx->pc = 0x22D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D850u, 0x23CB04u, 0x23CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB0Cu;
label_23cb0c:
    // 0x23cb0c: 0x10000006  b           . + 4 + (0x6 << 2)
label_23cb10:
    if (ctx->pc == 0x23CB10u) {
        ctx->pc = 0x23CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB0Cu;
        // 0x23cb10: 0xae420274  sw          $v0, 0x274($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB14u;
        goto label_23cb14;
    }
    ctx->pc = 0x23CB0Cu;
    {
        const bool branch_taken_0x23cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB0Cu;
        // 0x23cb10: 0xae420274  sw          $v0, 0x274($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb0c) {
            ctx->pc = 0x23CB28u;
            goto label_23cb28;
        }
    }
    ctx->pc = 0x23CB14u;
label_23cb14:
    // 0x23cb14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x23cb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23cb18:
    // 0x23cb18: 0xae440274  sw          $a0, 0x274($s2)
    ctx->pc = 0x23cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 4));
label_23cb1c:
    // 0x23cb1c: 0x24a55a78  addiu       $a1, $a1, 0x5A78
    ctx->pc = 0x23cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23160));
label_23cb20:
    // 0x23cb20: 0xc08b5ac  jal         func_22D6B0
label_23cb24:
    if (ctx->pc == 0x23CB24u) {
        ctx->pc = 0x23CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB20u;
        // 0x23cb24: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB28u;
        goto label_23cb28;
    }
    ctx->pc = 0x23CB20u;
    SET_GPR_U32(ctx, 31, 0x23CB28u);
    ctx->pc = 0x23CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB20u;
    // 0x23cb24: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CB20u, 0x23CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB28u;
label_23cb28:
    // 0x23cb28: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x23cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_23cb2c:
    // 0x23cb2c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x23cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_23cb30:
    // 0x23cb30: 0x1000007a  b           . + 4 + (0x7A << 2)
label_23cb34:
    if (ctx->pc == 0x23CB34u) {
        ctx->pc = 0x23CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB30u;
        // 0x23cb34: 0xae420270  sw          $v0, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB38u;
        goto label_23cb38;
    }
    ctx->pc = 0x23CB30u;
    {
        const bool branch_taken_0x23cb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB30u;
        // 0x23cb34: 0xae420270  sw          $v0, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb30) {
            ctx->pc = 0x23CD1Cu;
            goto label_23cd1c;
        }
    }
    ctx->pc = 0x23CB38u;
label_23cb38:
    // 0x23cb38: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x23cb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_23cb3c:
    // 0x23cb3c: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
label_23cb40:
    if (ctx->pc == 0x23CB40u) {
        ctx->pc = 0x23CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB3Cu;
        // 0x23cb40: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB44u;
        goto label_23cb44;
    }
    ctx->pc = 0x23CB3Cu;
    {
        const bool branch_taken_0x23cb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb3c) {
            ctx->pc = 0x23CB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB3Cu;
            // 0x23cb40: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CB44u;
label_23cb44:
    // 0x23cb44: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x23cb44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23cb48:
    // 0x23cb48: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23cb4c:
    // 0x23cb4c: 0x54620074  bnel        $v1, $v0, . + 4 + (0x74 << 2)
label_23cb50:
    if (ctx->pc == 0x23CB50u) {
        ctx->pc = 0x23CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB4Cu;
        // 0x23cb50: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB54u;
        goto label_23cb54;
    }
    ctx->pc = 0x23CB4Cu;
    {
        const bool branch_taken_0x23cb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cb4c) {
            ctx->pc = 0x23CB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB4Cu;
            // 0x23cb50: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CB54u;
label_23cb54:
    // 0x23cb54: 0x92300002  lbu         $s0, 0x2($s1)
    ctx->pc = 0x23cb54u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23cb58:
    // 0x23cb58: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23cb5c:
    // 0x23cb5c: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x23cb5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23cb60:
    // 0x23cb60: 0x24a55948  addiu       $a1, $a1, 0x5948
    ctx->pc = 0x23cb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22856));
label_23cb64:
    // 0x23cb64: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23cb64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23cb68:
    // 0x23cb68: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x23cb68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
label_23cb6c:
    // 0x23cb6c: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x23cb6cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23cb70:
    // 0x23cb70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23cb74:
    // 0x23cb74: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_23cb78:
    // 0x23cb78: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23cb7c:
    // 0x23cb7c: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x23cb7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
label_23cb80:
    // 0x23cb80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23cb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23cb84:
    // 0x23cb84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x23cb84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_23cb88:
    // 0x23cb88: 0xc08b5ac  jal         func_22D6B0
label_23cb8c:
    if (ctx->pc == 0x23CB8Cu) {
        ctx->pc = 0x23CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB88u;
        // 0x23cb8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB90u;
        goto label_23cb90;
    }
    ctx->pc = 0x23CB88u;
    SET_GPR_U32(ctx, 31, 0x23CB90u);
    ctx->pc = 0x23CB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB88u;
    // 0x23cb8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CB88u, 0x23CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB90u;
label_23cb90:
    // 0x23cb90: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x23cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_23cb94:
    // 0x23cb94: 0xae500280  sw          $s0, 0x280($s2)
    ctx->pc = 0x23cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 640), GPR_U32(ctx, 16));
label_23cb98:
    // 0x23cb98: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x23cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_23cb9c:
    // 0x23cb9c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_23cba0:
    if (ctx->pc == 0x23CBA0u) {
        ctx->pc = 0x23CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB9Cu;
        // 0x23cba0: 0xae420270  sw          $v0, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBA4u;
        goto label_23cba4;
    }
    ctx->pc = 0x23CB9Cu;
    {
        const bool branch_taken_0x23cb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB9Cu;
        // 0x23cba0: 0xae420270  sw          $v0, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb9c) {
            ctx->pc = 0x23CD1Cu;
            goto label_23cd1c;
        }
    }
    ctx->pc = 0x23CBA4u;
label_23cba4:
    // 0x23cba4: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x23cba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_23cba8:
    // 0x23cba8: 0x5440005d  bnel        $v0, $zero, . + 4 + (0x5D << 2)
label_23cbac:
    if (ctx->pc == 0x23CBACu) {
        ctx->pc = 0x23CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBA8u;
        // 0x23cbac: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBB0u;
        goto label_23cbb0;
    }
    ctx->pc = 0x23CBA8u;
    {
        const bool branch_taken_0x23cba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cba8) {
            ctx->pc = 0x23CBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CBA8u;
            // 0x23cbac: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CBB0u;
label_23cbb0:
    // 0x23cbb0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x23cbb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23cbb4:
    // 0x23cbb4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23cbb8:
    // 0x23cbb8: 0x54620059  bnel        $v1, $v0, . + 4 + (0x59 << 2)
label_23cbbc:
    if (ctx->pc == 0x23CBBCu) {
        ctx->pc = 0x23CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBB8u;
        // 0x23cbbc: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBC0u;
        goto label_23cbc0;
    }
    ctx->pc = 0x23CBB8u;
    {
        const bool branch_taken_0x23cbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cbb8) {
            ctx->pc = 0x23CBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CBB8u;
            // 0x23cbbc: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CBC0u;
label_23cbc0:
    // 0x23cbc0: 0x92300002  lbu         $s0, 0x2($s1)
    ctx->pc = 0x23cbc0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23cbc4:
    // 0x23cbc4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23cbc8:
    // 0x23cbc8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x23cbc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23cbcc:
    // 0x23cbcc: 0x24a55a78  addiu       $a1, $a1, 0x5A78
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23160));
label_23cbd0:
    // 0x23cbd0: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x23cbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_23cbd4:
    // 0x23cbd4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23cbd8:
    // 0x23cbd8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23cbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23cbdc:
    // 0x23cbdc: 0xc08b5ac  jal         func_22D6B0
label_23cbe0:
    if (ctx->pc == 0x23CBE0u) {
        ctx->pc = 0x23CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBDCu;
        // 0x23cbe0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBE4u;
        goto label_23cbe4;
    }
    ctx->pc = 0x23CBDCu;
    SET_GPR_U32(ctx, 31, 0x23CBE4u);
    ctx->pc = 0x23CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CBDCu;
    // 0x23cbe0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CBDCu, 0x23CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBE4u;
label_23cbe4:
    // 0x23cbe4: 0x2603ff80  addiu       $v1, $s0, -0x80
    ctx->pc = 0x23cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
label_23cbe8:
    // 0x23cbe8: 0x8e440270  lw          $a0, 0x270($s2)
    ctx->pc = 0x23cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_23cbec:
    // 0x23cbec: 0x2c630781  sltiu       $v1, $v1, 0x781
    ctx->pc = 0x23cbecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1921) ? 1 : 0);
label_23cbf0:
    // 0x23cbf0: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x23cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_23cbf4:
    // 0x23cbf4: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x23cbf4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_23cbf8:
    // 0x23cbf8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x23cbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_23cbfc:
    // 0x23cbfc: 0xae500278  sw          $s0, 0x278($s2)
    ctx->pc = 0x23cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 16));
label_23cc00:
    // 0x23cc00: 0x10000046  b           . + 4 + (0x46 << 2)
label_23cc04:
    if (ctx->pc == 0x23CC04u) {
        ctx->pc = 0x23CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC00u;
        // 0x23cc04: 0xae440270  sw          $a0, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC08u;
        goto label_23cc08;
    }
    ctx->pc = 0x23CC00u;
    {
        const bool branch_taken_0x23cc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC00u;
        // 0x23cc04: 0xae440270  sw          $a0, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc00) {
            ctx->pc = 0x23CD1Cu;
            goto label_23cd1c;
        }
    }
    ctx->pc = 0x23CC08u;
label_23cc08:
    // 0x23cc08: 0x56600045  bnel        $s3, $zero, . + 4 + (0x45 << 2)
label_23cc0c:
    if (ctx->pc == 0x23CC0Cu) {
        ctx->pc = 0x23CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC08u;
        // 0x23cc0c: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC10u;
        goto label_23cc10;
    }
    ctx->pc = 0x23CC08u;
    {
        const bool branch_taken_0x23cc08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc08) {
            ctx->pc = 0x23CC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC08u;
            // 0x23cc0c: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CC10u;
label_23cc10:
    // 0x23cc10: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x23cc10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23cc14:
    // 0x23cc14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23cc18:
    // 0x23cc18: 0x54620041  bnel        $v1, $v0, . + 4 + (0x41 << 2)
label_23cc1c:
    if (ctx->pc == 0x23CC1Cu) {
        ctx->pc = 0x23CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC18u;
        // 0x23cc1c: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC20u;
        goto label_23cc20;
    }
    ctx->pc = 0x23CC18u;
    {
        const bool branch_taken_0x23cc18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cc18) {
            ctx->pc = 0x23CC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC18u;
            // 0x23cc1c: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CC20u;
label_23cc20:
    // 0x23cc20: 0x8e430270  lw          $v1, 0x270($s2)
    ctx->pc = 0x23cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_23cc24:
    // 0x23cc24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23cc28:
    // 0x23cc28: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x23cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
label_23cc2c:
    // 0x23cc2c: 0x1000000b  b           . + 4 + (0xB << 2)
label_23cc30:
    if (ctx->pc == 0x23CC30u) {
        ctx->pc = 0x23CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC2Cu;
        // 0x23cc30: 0xae400288  sw          $zero, 0x288($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC34u;
        goto label_23cc34;
    }
    ctx->pc = 0x23CC2Cu;
    {
        const bool branch_taken_0x23cc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC2Cu;
        // 0x23cc30: 0xae400288  sw          $zero, 0x288($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc2c) {
            ctx->pc = 0x23CC5Cu;
            goto label_23cc5c;
        }
    }
    ctx->pc = 0x23CC34u;
label_23cc34:
    // 0x23cc34: 0x5660003a  bnel        $s3, $zero, . + 4 + (0x3A << 2)
label_23cc38:
    if (ctx->pc == 0x23CC38u) {
        ctx->pc = 0x23CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC34u;
        // 0x23cc38: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC3Cu;
        goto label_23cc3c;
    }
    ctx->pc = 0x23CC34u;
    {
        const bool branch_taken_0x23cc34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc34) {
            ctx->pc = 0x23CC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC34u;
            // 0x23cc38: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CC3Cu;
label_23cc3c:
    // 0x23cc3c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x23cc3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23cc40:
    // 0x23cc40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23cc44:
    // 0x23cc44: 0x54620036  bnel        $v1, $v0, . + 4 + (0x36 << 2)
label_23cc48:
    if (ctx->pc == 0x23CC48u) {
        ctx->pc = 0x23CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC44u;
        // 0x23cc48: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC4Cu;
        goto label_23cc4c;
    }
    ctx->pc = 0x23CC44u;
    {
        const bool branch_taken_0x23cc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cc44) {
            ctx->pc = 0x23CC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC44u;
            // 0x23cc48: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CC4Cu;
label_23cc4c:
    // 0x23cc4c: 0x8e430270  lw          $v1, 0x270($s2)
    ctx->pc = 0x23cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_23cc50:
    // 0x23cc50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23cc54:
    // 0x23cc54: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x23cc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
label_23cc58:
    // 0x23cc58: 0xae400290  sw          $zero, 0x290($s2)
    ctx->pc = 0x23cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 656), GPR_U32(ctx, 0));
label_23cc5c:
    // 0x23cc5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23cc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23cc60:
    // 0x23cc60: 0x1000002e  b           . + 4 + (0x2E << 2)
label_23cc64:
    if (ctx->pc == 0x23CC64u) {
        ctx->pc = 0x23CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC60u;
        // 0x23cc64: 0xae430270  sw          $v1, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC68u;
        goto label_23cc68;
    }
    ctx->pc = 0x23CC60u;
    {
        const bool branch_taken_0x23cc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC60u;
        // 0x23cc64: 0xae430270  sw          $v1, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc60) {
            ctx->pc = 0x23CD1Cu;
            goto label_23cd1c;
        }
    }
    ctx->pc = 0x23CC68u;
label_23cc68:
    // 0x23cc68: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x23cc68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_23cc6c:
    // 0x23cc6c: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_23cc70:
    if (ctx->pc == 0x23CC70u) {
        ctx->pc = 0x23CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC6Cu;
        // 0x23cc70: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC74u;
        goto label_23cc74;
    }
    ctx->pc = 0x23CC6Cu;
    {
        const bool branch_taken_0x23cc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc6c) {
            ctx->pc = 0x23CC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC6Cu;
            // 0x23cc70: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CC74u;
label_23cc74:
    // 0x23cc74: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x23cc74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23cc78:
    // 0x23cc78: 0x3404c023  ori         $a0, $zero, 0xC023
    ctx->pc = 0x23cc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
label_23cc7c:
    // 0x23cc7c: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23cc7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23cc80:
    // 0x23cc80: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23cc84:
    // 0x23cc84: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x23cc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23cc88:
    // 0x23cc88: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
label_23cc8c:
    if (ctx->pc == 0x23CC8Cu) {
        ctx->pc = 0x23CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC88u;
        // 0x23cc8c: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC90u;
        goto label_23cc90;
    }
    ctx->pc = 0x23CC88u;
    {
        const bool branch_taken_0x23cc88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x23CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC88u;
        // 0x23cc8c: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc88) {
            ctx->pc = 0x23CCA4u;
            goto label_23cca4;
        }
    }
    ctx->pc = 0x23CC90u;
label_23cc90:
    // 0x23cc90: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x23cc90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23cc94:
    // 0x23cc94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23cc98:
    // 0x23cc98: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
label_23cc9c:
    if (ctx->pc == 0x23CC9Cu) {
        ctx->pc = 0x23CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC98u;
        // 0x23cc9c: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCA0u;
        goto label_23cca0;
    }
    ctx->pc = 0x23CC98u;
    {
        const bool branch_taken_0x23cc98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cc98) {
            ctx->pc = 0x23CC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC98u;
            // 0x23cc9c: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CCA0u;
label_23cca0:
    // 0x23cca0: 0x3402c223  ori         $v0, $zero, 0xC223
    ctx->pc = 0x23cca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23cca4:
    // 0x23cca4: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
label_23cca8:
    if (ctx->pc == 0x23CCA8u) {
        ctx->pc = 0x23CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA4u;
        // 0x23cca8: 0x96424238  lhu         $v0, 0x4238($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCACu;
        goto label_23ccac;
    }
    ctx->pc = 0x23CCA4u;
    {
        const bool branch_taken_0x23cca4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cca4) {
            ctx->pc = 0x23CCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCA4u;
            // 0x23cca8: 0x96424238  lhu         $v0, 0x4238($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCC0u;
            goto label_23ccc0;
        }
    }
    ctx->pc = 0x23CCACu;
label_23ccac:
    // 0x23ccac: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x23ccacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23ccb0:
    // 0x23ccb0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23ccb4:
    // 0x23ccb4: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_23ccb8:
    if (ctx->pc == 0x23CCB8u) {
        ctx->pc = 0x23CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCB4u;
        // 0x23ccb8: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCBCu;
        goto label_23ccbc;
    }
    ctx->pc = 0x23CCB4u;
    {
        const bool branch_taken_0x23ccb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ccb4) {
            ctx->pc = 0x23CCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCB4u;
            // 0x23ccb8: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CCBCu;
label_23ccbc:
    // 0x23ccbc: 0x96424238  lhu         $v0, 0x4238($s2)
    ctx->pc = 0x23ccbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16952)));
label_23ccc0:
    // 0x23ccc0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_23ccc4:
    if (ctx->pc == 0x23CCC4u) {
        ctx->pc = 0x23CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC0u;
        // 0x23ccc4: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCC8u;
        goto label_23ccc8;
    }
    ctx->pc = 0x23CCC0u;
    {
        const bool branch_taken_0x23ccc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC0u;
        // 0x23ccc4: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccc0) {
            ctx->pc = 0x23CCD8u;
            goto label_23ccd8;
        }
    }
    ctx->pc = 0x23CCC8u;
label_23ccc8:
    // 0x23ccc8: 0x9642423a  lhu         $v0, 0x423A($s2)
    ctx->pc = 0x23ccc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16954)));
label_23cccc:
    // 0x23cccc: 0x54a2000c  bnel        $a1, $v0, . + 4 + (0xC << 2)
label_23ccd0:
    if (ctx->pc == 0x23CCD0u) {
        ctx->pc = 0x23CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCCCu;
        // 0x23ccd0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCD4u;
        goto label_23ccd4;
    }
    ctx->pc = 0x23CCCCu;
    {
        const bool branch_taken_0x23cccc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cccc) {
            ctx->pc = 0x23CCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCCCu;
            // 0x23ccd0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD00u;
            goto label_23cd00;
        }
    }
    ctx->pc = 0x23CCD4u;
label_23ccd4:
    // 0x23ccd4: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ccd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ccd8:
    // 0x23ccd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23ccd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ccdc:
    // 0x23ccdc: 0x26105a80  addiu       $s0, $s0, 0x5A80
    ctx->pc = 0x23ccdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23168));
label_23cce0:
    // 0x23cce0: 0xc0903d4  jal         func_240F50
label_23cce4:
    if (ctx->pc == 0x23CCE4u) {
        ctx->pc = 0x23CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCE0u;
        // 0x23cce4: 0xa645423c  sh          $a1, 0x423C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16956), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCE8u;
        goto label_23cce8;
    }
    ctx->pc = 0x23CCE0u;
    SET_GPR_U32(ctx, 31, 0x23CCE8u);
    ctx->pc = 0x23CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCE0u;
    // 0x23cce4: 0xa645423c  sh          $a1, 0x423C($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 16956), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240F50u, 0x23CCE0u, 0x23CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCE8u;
label_23cce8:
    // 0x23cce8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23cce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ccec:
    // 0x23ccec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23ccecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ccf0:
    // 0x23ccf0: 0xc08b5ac  jal         func_22D6B0
label_23ccf4:
    if (ctx->pc == 0x23CCF4u) {
        ctx->pc = 0x23CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF0u;
        // 0x23ccf4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCF8u;
        goto label_23ccf8;
    }
    ctx->pc = 0x23CCF0u;
    SET_GPR_U32(ctx, 31, 0x23CCF8u);
    ctx->pc = 0x23CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCF0u;
    // 0x23ccf4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CCF0u, 0x23CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCF8u;
label_23ccf8:
    // 0x23ccf8: 0x10000009  b           . + 4 + (0x9 << 2)
label_23ccfc:
    if (ctx->pc == 0x23CCFCu) {
        ctx->pc = 0x23CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF8u;
        // 0x23ccfc: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD00u;
        goto label_23cd00;
    }
    ctx->pc = 0x23CCF8u;
    {
        const bool branch_taken_0x23ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF8u;
        // 0x23ccfc: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccf8) {
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CD00u;
label_23cd00:
    // 0x23cd00: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23cd04:
    // 0x23cd04: 0xc08b5ac  jal         func_22D6B0
label_23cd08:
    if (ctx->pc == 0x23CD08u) {
        ctx->pc = 0x23CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD04u;
        // 0x23cd08: 0x24a55a18  addiu       $a1, $a1, 0x5A18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD0Cu;
        goto label_23cd0c;
    }
    ctx->pc = 0x23CD04u;
    SET_GPR_U32(ctx, 31, 0x23CD0Cu);
    ctx->pc = 0x23CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD04u;
    // 0x23cd08: 0x24a55a18  addiu       $a1, $a1, 0x5A18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CD04u, 0x23CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD0Cu;
label_23cd0c:
    // 0x23cd0c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23cd10:
    // 0x23cd10: 0x8c625074  lw          $v0, 0x5074($v1)
    ctx->pc = 0x23cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20596)));
label_23cd14:
    // 0x23cd14: 0x40f809  jalr        $v0
label_23cd18:
    if (ctx->pc == 0x23CD18u) {
        ctx->pc = 0x23CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD14u;
        // 0x23cd18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD1Cu;
        goto label_23cd1c;
    }
    ctx->pc = 0x23CD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CD1Cu);
        ctx->pc = 0x23CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD14u;
        // 0x23cd18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CD14u, 0x23CD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CD1Cu;
label_23cd1c:
    // 0x23cd1c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23cd1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23cd20:
    // 0x23cd20: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x23cd20u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23cd24:
    // 0x23cd24: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23cd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23cd28:
    // 0x23cd28: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x23cd28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_23cd2c:
    // 0x23cd2c: 0x1060ff47  beqz        $v1, . + 4 + (-0xB9 << 2)
label_23cd30:
    if (ctx->pc == 0x23CD30u) {
        ctx->pc = 0x23CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD2Cu;
        // 0x23cd30: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD34u;
        goto label_23cd34;
    }
    ctx->pc = 0x23CD2Cu;
    {
        const bool branch_taken_0x23cd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD2Cu;
        // 0x23cd30: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd2c) {
            ctx->pc = 0x23CA4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ca4c;
        }
    }
    ctx->pc = 0x23CD34u;
label_23cd34:
    // 0x23cd34: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23cd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23cd38:
    // 0x23cd38: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23cd3c:
    // 0x23cd3c: 0xc08b5ac  jal         func_22D6B0
label_23cd40:
    if (ctx->pc == 0x23CD40u) {
        ctx->pc = 0x23CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD3Cu;
        // 0x23cd40: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD44u;
        goto label_23cd44;
    }
    ctx->pc = 0x23CD3Cu;
    SET_GPR_U32(ctx, 31, 0x23CD44u);
    ctx->pc = 0x23CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD3Cu;
    // 0x23cd40: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CD3Cu, 0x23CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD44u;
label_23cd44:
    // 0x23cd44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23cd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23cd48:
    // 0x23cd48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23cd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23cd4c:
    // 0x23cd4c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23cd4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23cd50:
    // 0x23cd50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23cd50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23cd54:
    // 0x23cd54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23cd54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23cd58:
    // 0x23cd58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23cd58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23cd5c:
    // 0x23cd5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23cd5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23cd60:
    // 0x23cd60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cd60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23cd64:
    // 0x23cd64: 0x8098560  j           func_261580
label_23cd68:
    if (ctx->pc == 0x23CD68u) {
        ctx->pc = 0x23CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD64u;
        // 0x23cd68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD6Cu;
        goto label_23cd6c;
    }
    ctx->pc = 0x23CD64u;
    ctx->pc = 0x23CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD64u;
    // 0x23cd68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    sub_00261580_0x261580(rdram, ctx, runtime); return;
    ctx->pc = 0x23CD6Cu;
label_23cd6c:
    // 0x23cd6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23cd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23cd70:
    // 0x23cd70: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23cd70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23cd74:
    // 0x23cd74: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23cd74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23cd78:
    // 0x23cd78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23cd78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23cd7c:
    // 0x23cd7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23cd7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23cd80:
    // 0x23cd80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23cd80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23cd84:
    // 0x23cd84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23cd88:
    // 0x23cd88: 0x3e00008  jr          $ra
label_23cd8c:
    if (ctx->pc == 0x23CD8Cu) {
        ctx->pc = 0x23CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD88u;
        // 0x23cd8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD90u;
        goto label_23cd90;
    }
    ctx->pc = 0x23CD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD88u;
        // 0x23cd8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CD90u;
label_23cd90:
    // 0x23cd90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23cd94:
    // 0x23cd94: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x23cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_23cd98:
    // 0x23cd98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23cd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23cd9c:
    // 0x23cd9c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23cda0:
    // 0x23cda0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23cda0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23cda4:
    // 0x23cda4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23cda8:
    // 0x23cda8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23cdac:
    // 0x23cdac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23cdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23cdb0:
    // 0x23cdb0: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x23cdb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_23cdb4:
    // 0x23cdb4: 0x30420041  andi        $v0, $v0, 0x41
    ctx->pc = 0x23cdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65);
label_23cdb8:
    // 0x23cdb8: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_23cdbc:
    if (ctx->pc == 0x23CDBCu) {
        ctx->pc = 0x23CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDB8u;
        // 0x23cdbc: 0x8e424e18  lw          $v0, 0x4E18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDC0u;
        goto label_23cdc0;
    }
    ctx->pc = 0x23CDB8u;
    {
        const bool branch_taken_0x23cdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23cdb8) {
            ctx->pc = 0x23CDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDB8u;
            // 0x23cdbc: 0x8e424e18  lw          $v0, 0x4E18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CDE0u;
            goto label_23cde0;
        }
    }
    ctx->pc = 0x23CDC0u;
label_23cdc0:
    // 0x23cdc0: 0xc08d504  jal         func_235410
label_23cdc4:
    if (ctx->pc == 0x23CDC4u) {
        ctx->pc = 0x23CDC8u;
        goto label_23cdc8;
    }
    ctx->pc = 0x23CDC0u;
    SET_GPR_U32(ctx, 31, 0x23CDC8u);
    ctx->pc = 0x235410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235410u, 0x23CDC0u, 0x23CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDC8u;
label_23cdc8:
    // 0x23cdc8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23cdcc:
    // 0x23cdcc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23cdd0:
    // 0x23cdd0: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
label_23cdd4:
    // 0x23cdd4: 0xc08b5ac  jal         func_22D6B0
label_23cdd8:
    if (ctx->pc == 0x23CDD8u) {
        ctx->pc = 0x23CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDD4u;
        // 0x23cdd8: 0x26460014  addiu       $a2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDDCu;
        goto label_23cddc;
    }
    ctx->pc = 0x23CDD4u;
    SET_GPR_U32(ctx, 31, 0x23CDDCu);
    ctx->pc = 0x23CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDD4u;
    // 0x23cdd8: 0x26460014  addiu       $a2, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CDD4u, 0x23CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDDCu;
label_23cddc:
    // 0x23cddc: 0x8e424e18  lw          $v0, 0x4E18($s2)
    ctx->pc = 0x23cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19992)));
label_23cde0:
    // 0x23cde0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_23cde4:
    if (ctx->pc == 0x23CDE4u) {
        ctx->pc = 0x23CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDE0u;
        // 0x23cde4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDE8u;
        goto label_23cde8;
    }
    ctx->pc = 0x23CDE0u;
    {
        const bool branch_taken_0x23cde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cde0) {
            ctx->pc = 0x23CDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDE0u;
            // 0x23cde4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CDF4u;
            goto label_23cdf4;
        }
    }
    ctx->pc = 0x23CDE8u;
label_23cde8:
    // 0x23cde8: 0x40f809  jalr        $v0
label_23cdec:
    if (ctx->pc == 0x23CDECu) {
        ctx->pc = 0x23CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDE8u;
        // 0x23cdec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDF0u;
        goto label_23cdf0;
    }
    ctx->pc = 0x23CDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CDF0u);
        ctx->pc = 0x23CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDE8u;
        // 0x23cdec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CDE8u, 0x23CDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CDF0u;
label_23cdf0:
    // 0x23cdf0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x23cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_23cdf4:
    // 0x23cdf4: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x23cdf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23cdf8:
    // 0x23cdf8: 0x2450fe90  addiu       $s0, $v0, -0x170
    ctx->pc = 0x23cdf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_23cdfc:
    // 0x23cdfc: 0x0  nop
    ctx->pc = 0x23cdfcu;
    // NOP
label_23ce00:
    // 0x23ce00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23ce04:
    // 0x23ce04: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x23ce04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_23ce08:
    // 0x23ce08: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23ce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23ce0c:
    // 0x23ce0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23ce10:
    if (ctx->pc == 0x23CE10u) {
        ctx->pc = 0x23CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE0Cu;
        // 0x23ce10: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE14u;
        goto label_23ce14;
    }
    ctx->pc = 0x23CE0Cu;
    {
        const bool branch_taken_0x23ce0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ce0c) {
            ctx->pc = 0x23CE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE0Cu;
            // 0x23ce10: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CE24u;
            goto label_23ce24;
        }
    }
    ctx->pc = 0x23CE14u;
label_23ce14:
    // 0x23ce14: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x23ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_23ce18:
    // 0x23ce18: 0x40f809  jalr        $v0
label_23ce1c:
    if (ctx->pc == 0x23CE1Cu) {
        ctx->pc = 0x23CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE18u;
        // 0x23ce1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE20u;
        goto label_23ce20;
    }
    ctx->pc = 0x23CE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CE20u);
        ctx->pc = 0x23CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE18u;
        // 0x23ce1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CE18u, 0x23CE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CE20u;
label_23ce20:
    // 0x23ce20: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x23ce20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_23ce24:
    // 0x23ce24: 0x661fff6  bgez        $s3, . + 4 + (-0xA << 2)
label_23ce28:
    if (ctx->pc == 0x23CE28u) {
        ctx->pc = 0x23CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE24u;
        // 0x23ce28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE2Cu;
        goto label_23ce2c;
    }
    ctx->pc = 0x23CE24u;
    {
        const bool branch_taken_0x23ce24 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x23CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE24u;
        // 0x23ce28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce24) {
            ctx->pc = 0x23CE00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ce00;
        }
    }
    ctx->pc = 0x23CE2Cu;
label_23ce2c:
    // 0x23ce2c: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x23ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_23ce30:
    // 0x23ce30: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23ce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23ce34:
    // 0x23ce34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23ce38:
    if (ctx->pc == 0x23CE38u) {
        ctx->pc = 0x23CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE34u;
        // 0x23ce38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE3Cu;
        goto label_23ce3c;
    }
    ctx->pc = 0x23CE34u;
    {
        const bool branch_taken_0x23ce34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE34u;
        // 0x23ce38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce34) {
            ctx->pc = 0x23CE50u;
            goto label_23ce50;
        }
    }
    ctx->pc = 0x23CE3Cu;
label_23ce3c:
    // 0x23ce3c: 0x8e42012c  lw          $v0, 0x12C($s2)
    ctx->pc = 0x23ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
label_23ce40:
    // 0x23ce40: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_23ce44:
    // 0x23ce44: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_23ce48:
    if (ctx->pc == 0x23CE48u) {
        ctx->pc = 0x23CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE44u;
        // 0x23ce48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE4Cu;
        goto label_23ce4c;
    }
    ctx->pc = 0x23CE44u;
    {
        const bool branch_taken_0x23ce44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE44u;
        // 0x23ce48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce44) {
            ctx->pc = 0x23CE50u;
            goto label_23ce50;
        }
    }
    ctx->pc = 0x23CE4Cu;
label_23ce4c:
    // 0x23ce4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23ce50:
    // 0x23ce50: 0xae420160  sw          $v0, 0x160($s2)
    ctx->pc = 0x23ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 2));
label_23ce54:
    // 0x23ce54: 0x8e434e0c  lw          $v1, 0x4E0C($s2)
    ctx->pc = 0x23ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19980)));
label_23ce58:
    // 0x23ce58: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ce58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ce5c:
    // 0x23ce5c: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x23ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_23ce60:
    // 0x23ce60: 0x26105ab8  addiu       $s0, $s0, 0x5AB8
    ctx->pc = 0x23ce60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23224));
label_23ce64:
    // 0x23ce64: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x23ce64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_23ce68:
    // 0x23ce68: 0x62282b  sltu        $a1, $v1, $v0
    ctx->pc = 0x23ce68u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23ce6c:
    // 0x23ce6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ce6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ce70:
    // 0x23ce70: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x23ce70u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_23ce74:
    // 0x23ce74: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x23ce74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23ce78:
    // 0x23ce78: 0xc0903b8  jal         func_240EE0
label_23ce7c:
    if (ctx->pc == 0x23CE7Cu) {
        ctx->pc = 0x23CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE78u;
        // 0x23ce7c: 0xae434e0c  sw          $v1, 0x4E0C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 19980), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE80u;
        goto label_23ce80;
    }
    ctx->pc = 0x23CE78u;
    SET_GPR_U32(ctx, 31, 0x23CE80u);
    ctx->pc = 0x23CE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE78u;
    // 0x23ce7c: 0xae434e0c  sw          $v1, 0x4E0C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 19980), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240EE0u, 0x23CE78u, 0x23CE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE80u;
label_23ce80:
    // 0x23ce80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ce80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ce84:
    // 0x23ce84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23ce84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ce88:
    // 0x23ce88: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ce88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ce8c:
    // 0x23ce8c: 0xc08b5ac  jal         func_22D6B0
label_23ce90:
    if (ctx->pc == 0x23CE90u) {
        ctx->pc = 0x23CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE8Cu;
        // 0x23ce90: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE94u;
        goto label_23ce94;
    }
    ctx->pc = 0x23CE8Cu;
    SET_GPR_U32(ctx, 31, 0x23CE94u);
    ctx->pc = 0x23CE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE8Cu;
    // 0x23ce90: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23CE8Cu, 0x23CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE94u;
label_23ce94:
    // 0x23ce94: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x23ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_23ce98:
    // 0x23ce98: 0x2450fe90  addiu       $s0, $v0, -0x170
    ctx->pc = 0x23ce98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_23ce9c:
    // 0x23ce9c: 0x0  nop
    ctx->pc = 0x23ce9cu;
    // NOP
label_23cea0:
    // 0x23cea0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23cea4:
    // 0x23cea4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x23cea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_23cea8:
    // 0x23cea8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x23cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_23ceac:
    // 0x23ceac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23ceb0:
    if (ctx->pc == 0x23CEB0u) {
        ctx->pc = 0x23CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEACu;
        // 0x23ceb0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEB4u;
        goto label_23ceb4;
    }
    ctx->pc = 0x23CEACu;
    {
        const bool branch_taken_0x23ceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ceac) {
            ctx->pc = 0x23CEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CEACu;
            // 0x23ceb0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CEC4u;
            goto label_23cec4;
        }
    }
    ctx->pc = 0x23CEB4u;
label_23ceb4:
    // 0x23ceb4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x23ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_23ceb8:
    // 0x23ceb8: 0x40f809  jalr        $v0
label_23cebc:
    if (ctx->pc == 0x23CEBCu) {
        ctx->pc = 0x23CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEB8u;
        // 0x23cebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEC0u;
        goto label_23cec0;
    }
    ctx->pc = 0x23CEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CEC0u);
        ctx->pc = 0x23CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEB8u;
        // 0x23cebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CEB8u, 0x23CEC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CEC0u;
label_23cec0:
    // 0x23cec0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x23cec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_23cec4:
    // 0x23cec4: 0x661fff6  bgez        $s3, . + 4 + (-0xA << 2)
label_23cec8:
    if (ctx->pc == 0x23CEC8u) {
        ctx->pc = 0x23CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEC4u;
        // 0x23cec8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CECCu;
        goto label_23cecc;
    }
    ctx->pc = 0x23CEC4u;
    {
        const bool branch_taken_0x23cec4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x23CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEC4u;
        // 0x23cec8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cec4) {
            ctx->pc = 0x23CEA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23cea0;
        }
    }
    ctx->pc = 0x23CECCu;
label_23cecc:
    // 0x23cecc: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x23ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_23ced0:
    // 0x23ced0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23ced4:
    // 0x23ced4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_23ced8:
    if (ctx->pc == 0x23CED8u) {
        ctx->pc = 0x23CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CED4u;
        // 0x23ced8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEDCu;
        goto label_23cedc;
    }
    ctx->pc = 0x23CED4u;
    {
        const bool branch_taken_0x23ced4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CED4u;
        // 0x23ced8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ced4) {
            ctx->pc = 0x23CF18u;
            goto label_23cf18;
        }
    }
    ctx->pc = 0x23CEDCu;
label_23cedc:
    // 0x23cedc: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x23cedcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23cee0:
    // 0x23cee0: 0x2450fe90  addiu       $s0, $v0, -0x170
    ctx->pc = 0x23cee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_23cee4:
    // 0x23cee4: 0x0  nop
    ctx->pc = 0x23cee4u;
    // NOP
label_23cee8:
    // 0x23cee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23ceec:
    // 0x23ceec: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x23ceecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_23cef0:
    // 0x23cef0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_23cef4:
    // 0x23cef4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23cef8:
    if (ctx->pc == 0x23CEF8u) {
        ctx->pc = 0x23CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEF4u;
        // 0x23cef8: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEFCu;
        goto label_23cefc;
    }
    ctx->pc = 0x23CEF4u;
    {
        const bool branch_taken_0x23cef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cef4) {
            ctx->pc = 0x23CEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CEF4u;
            // 0x23cef8: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CF0Cu;
            goto label_23cf0c;
        }
    }
    ctx->pc = 0x23CEFCu;
label_23cefc:
    // 0x23cefc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x23cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_23cf00:
    // 0x23cf00: 0x40f809  jalr        $v0
label_23cf04:
    if (ctx->pc == 0x23CF04u) {
        ctx->pc = 0x23CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF00u;
        // 0x23cf04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF08u;
        goto label_23cf08;
    }
    ctx->pc = 0x23CF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CF08u);
        ctx->pc = 0x23CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF00u;
        // 0x23cf04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF00u, 0x23CF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CF08u;
label_23cf08:
    // 0x23cf08: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x23cf08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_23cf0c:
    // 0x23cf0c: 0x661fff6  bgez        $s3, . + 4 + (-0xA << 2)
label_23cf10:
    if (ctx->pc == 0x23CF10u) {
        ctx->pc = 0x23CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF0Cu;
        // 0x23cf10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF14u;
        goto label_23cf14;
    }
    ctx->pc = 0x23CF0Cu;
    {
        const bool branch_taken_0x23cf0c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x23CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF0Cu;
        // 0x23cf10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf0c) {
            ctx->pc = 0x23CEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23cee8;
        }
    }
    ctx->pc = 0x23CF14u;
label_23cf14:
    // 0x23cf14: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x23cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_23cf18:
    // 0x23cf18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23cf18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23cf1c:
    // 0x23cf1c: 0x2450fe90  addiu       $s0, $v0, -0x170
    ctx->pc = 0x23cf1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_23cf20:
    // 0x23cf20: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x23cf20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23cf24:
    // 0x23cf24: 0x0  nop
    ctx->pc = 0x23cf24u;
    // NOP
label_23cf28:
    // 0x23cf28: 0x8e42029c  lw          $v0, 0x29C($s2)
    ctx->pc = 0x23cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_23cf2c:
    // 0x23cf2c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x23cf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_23cf30:
    // 0x23cf30: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_23cf34:
    if (ctx->pc == 0x23CF34u) {
        ctx->pc = 0x23CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF30u;
        // 0x23cf34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF38u;
        goto label_23cf38;
    }
    ctx->pc = 0x23CF30u;
    {
        const bool branch_taken_0x23cf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cf30) {
            ctx->pc = 0x23CF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CF30u;
            // 0x23cf34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CF5Cu;
            goto label_23cf5c;
        }
    }
    ctx->pc = 0x23CF38u;
label_23cf38:
    // 0x23cf38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23cf3c:
    // 0x23cf3c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x23cf3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_23cf40:
    // 0x23cf40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23cf44:
    // 0x23cf44: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_23cf48:
    if (ctx->pc == 0x23CF48u) {
        ctx->pc = 0x23CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF44u;
        // 0x23cf48: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF4Cu;
        goto label_23cf4c;
    }
    ctx->pc = 0x23CF44u;
    {
        const bool branch_taken_0x23cf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cf44) {
            ctx->pc = 0x23CF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CF44u;
            // 0x23cf48: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CF5Cu;
            goto label_23cf5c;
        }
    }
    ctx->pc = 0x23CF4Cu;
label_23cf4c:
    // 0x23cf4c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_23cf50:
    // 0x23cf50: 0x40f809  jalr        $v0
label_23cf54:
    if (ctx->pc == 0x23CF54u) {
        ctx->pc = 0x23CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF50u;
        // 0x23cf54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF58u;
        goto label_23cf58;
    }
    ctx->pc = 0x23CF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CF58u);
        ctx->pc = 0x23CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF50u;
        // 0x23cf54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF50u, 0x23CF58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CF58u;
label_23cf58:
    // 0x23cf58: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x23cf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_23cf5c:
    // 0x23cf5c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x23cf5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_23cf60:
    // 0x23cf60: 0x661fff1  bgez        $s3, . + 4 + (-0xF << 2)
label_23cf64:
    if (ctx->pc == 0x23CF64u) {
        ctx->pc = 0x23CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF60u;
        // 0x23cf64: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF68u;
        goto label_23cf68;
    }
    ctx->pc = 0x23CF60u;
    {
        const bool branch_taken_0x23cf60 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x23CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF60u;
        // 0x23cf64: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf60) {
            ctx->pc = 0x23CF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23cf28;
        }
    }
    ctx->pc = 0x23CF68u;
label_23cf68:
    // 0x23cf68: 0x8e424e28  lw          $v0, 0x4E28($s2)
    ctx->pc = 0x23cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20008)));
label_23cf6c:
    // 0x23cf6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23cf70:
    if (ctx->pc == 0x23CF70u) {
        ctx->pc = 0x23CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF6Cu;
        // 0x23cf70: 0x8e430160  lw          $v1, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF74u;
        goto label_23cf74;
    }
    ctx->pc = 0x23CF6Cu;
    {
        const bool branch_taken_0x23cf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cf6c) {
            ctx->pc = 0x23CF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CF6Cu;
            // 0x23cf70: 0x8e430160  lw          $v1, 0x160($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CF84u;
            goto label_23cf84;
        }
    }
    ctx->pc = 0x23CF74u;
label_23cf74:
    // 0x23cf74: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x23cf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_23cf78:
    // 0x23cf78: 0x40f809  jalr        $v0
label_23cf7c:
    if (ctx->pc == 0x23CF7Cu) {
        ctx->pc = 0x23CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF78u;
        // 0x23cf7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF80u;
        goto label_23cf80;
    }
    ctx->pc = 0x23CF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CF80u);
        ctx->pc = 0x23CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF78u;
        // 0x23cf7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF78u, 0x23CF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CF80u;
label_23cf80:
    // 0x23cf80: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x23cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_23cf84:
    // 0x23cf84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23cf88:
    // 0x23cf88: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_23cf8c:
    if (ctx->pc == 0x23CF8Cu) {
        ctx->pc = 0x23CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF88u;
        // 0x23cf8c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF90u;
        goto label_23cf90;
    }
    ctx->pc = 0x23CF88u;
    {
        const bool branch_taken_0x23cf88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF88u;
        // 0x23cf8c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf88) {
            ctx->pc = 0x23CFACu;
            goto label_23cfac;
        }
    }
    ctx->pc = 0x23CF90u;
label_23cf90:
    // 0x23cf90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23cf94:
    // 0x23cf94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23cf94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23cf98:
    // 0x23cf98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23cf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23cf9c:
    // 0x23cf9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23cf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23cfa0:
    // 0x23cfa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cfa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23cfa4:
    // 0x23cfa4: 0x808f512  j           func_23D448
label_23cfa8:
    if (ctx->pc == 0x23CFA8u) {
        ctx->pc = 0x23CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFA4u;
        // 0x23cfa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFACu;
        goto label_23cfac;
    }
    ctx->pc = 0x23CFA4u;
    ctx->pc = 0x23CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CFA4u;
    // 0x23cfa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D448u;
    sub_0023D448_0x23d448(rdram, ctx, runtime); return;
    ctx->pc = 0x23CFACu;
label_23cfac:
    // 0x23cfac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23cfacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23cfb0:
    // 0x23cfb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23cfb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23cfb4:
    // 0x23cfb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23cfb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23cfb8:
    // 0x23cfb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23cfbc:
    // 0x23cfbc: 0x3e00008  jr          $ra
label_23cfc0:
    if (ctx->pc == 0x23CFC0u) {
        ctx->pc = 0x23CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFBCu;
        // 0x23cfc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFC4u;
        goto label_23cfc4;
    }
    ctx->pc = 0x23CFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFBCu;
        // 0x23cfc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CFC4u;
label_23cfc4:
    // 0x23cfc4: 0x0  nop
    ctx->pc = 0x23cfc4u;
    // NOP
label_23cfc8:
    // 0x23cfc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23cfcc:
    // 0x23cfcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23cfd0:
    // 0x23cfd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23cfd4:
    // 0x23cfd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23cfd8:
    // 0x23cfd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23cfd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23cfdc:
    // 0x23cfdc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23cfe0:
    // 0x23cfe0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23cfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23cfe4:
    // 0x23cfe4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23cfe8:
    // 0x23cfe8: 0x26105ab8  addiu       $s0, $s0, 0x5AB8
    ctx->pc = 0x23cfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23224));
label_23cfec:
    // 0x23cfec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23cfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23cff0:
    // 0x23cff0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23cff4:
    // 0x23cff4: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x23cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_23cff8:
    // 0x23cff8: 0xc0903b8  jal         func_240EE0
label_23cffc:
    if (ctx->pc == 0x23CFFCu) {
        ctx->pc = 0x23CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFF8u;
        // 0x23cffc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D000u;
        goto label_23d000;
    }
    ctx->pc = 0x23CFF8u;
    SET_GPR_U32(ctx, 31, 0x23D000u);
    ctx->pc = 0x23CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CFF8u;
    // 0x23cffc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240EE0u, 0x23CFF8u, 0x23D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D000u;
label_23d000:
    // 0x23d000: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x23d000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23d004:
    // 0x23d004: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d008:
    // 0x23d008: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x23d008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_23d00c:
    // 0x23d00c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23d00cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d010:
    // 0x23d010: 0xc08b5ac  jal         func_22D6B0
label_23d014:
    if (ctx->pc == 0x23D014u) {
        ctx->pc = 0x23D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D010u;
        // 0x23d014: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D018u;
        goto label_23d018;
    }
    ctx->pc = 0x23D010u;
    SET_GPR_U32(ctx, 31, 0x23D018u);
    ctx->pc = 0x23D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D010u;
    // 0x23d014: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D010u, 0x23D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D018u;
label_23d018:
    // 0x23d018: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x23d018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_23d01c:
    // 0x23d01c: 0x8e24029c  lw          $a0, 0x29C($s1)
    ctx->pc = 0x23d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_23d020:
    // 0x23d020: 0x2450fe90  addiu       $s0, $v0, -0x170
    ctx->pc = 0x23d020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_23d024:
    // 0x23d024: 0x0  nop
    ctx->pc = 0x23d024u;
    // NOP
label_23d028:
    // 0x23d028: 0x931024  and         $v0, $a0, $s3
    ctx->pc = 0x23d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
label_23d02c:
    // 0x23d02c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_23d030:
    if (ctx->pc == 0x23D030u) {
        ctx->pc = 0x23D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D02Cu;
        // 0x23d030: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D034u;
        goto label_23d034;
    }
    ctx->pc = 0x23D02Cu;
    {
        const bool branch_taken_0x23d02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d02c) {
            ctx->pc = 0x23D030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D02Cu;
            // 0x23d030: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D06Cu;
            goto label_23d06c;
        }
    }
    ctx->pc = 0x23D034u;
label_23d034:
    // 0x23d034: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23d034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23d038:
    // 0x23d038: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x23d038u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_23d03c:
    // 0x23d03c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23d03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23d040:
    // 0x23d040: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_23d044:
    if (ctx->pc == 0x23D044u) {
        ctx->pc = 0x23D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D040u;
        // 0x23d044: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D048u;
        goto label_23d048;
    }
    ctx->pc = 0x23D040u;
    {
        const bool branch_taken_0x23d040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d040) {
            ctx->pc = 0x23D044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D040u;
            // 0x23d044: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D06Cu;
            goto label_23d06c;
        }
    }
    ctx->pc = 0x23D048u;
label_23d048:
    // 0x23d048: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_23d04c:
    // 0x23d04c: 0x40f809  jalr        $v0
label_23d050:
    if (ctx->pc == 0x23D050u) {
        ctx->pc = 0x23D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D04Cu;
        // 0x23d050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D054u;
        goto label_23d054;
    }
    ctx->pc = 0x23D04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D054u);
        ctx->pc = 0x23D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D04Cu;
        // 0x23d050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D04Cu, 0x23D054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D054u;
label_23d054:
    // 0x23d054: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23d054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23d058:
    // 0x23d058: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x23d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_23d05c:
    // 0x23d05c: 0x40f809  jalr        $v0
label_23d060:
    if (ctx->pc == 0x23D060u) {
        ctx->pc = 0x23D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D05Cu;
        // 0x23d060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D064u;
        goto label_23d064;
    }
    ctx->pc = 0x23D05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D064u);
        ctx->pc = 0x23D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D05Cu;
        // 0x23d060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D05Cu, 0x23D064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D064u;
label_23d064:
    // 0x23d064: 0x8e24029c  lw          $a0, 0x29C($s1)
    ctx->pc = 0x23d064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_23d068:
    // 0x23d068: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x23d068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_23d06c:
    // 0x23d06c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23d06cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23d070:
    // 0x23d070: 0x641ffed  bgez        $s2, . + 4 + (-0x13 << 2)
label_23d074:
    if (ctx->pc == 0x23D074u) {
        ctx->pc = 0x23D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D070u;
        // 0x23d074: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D078u;
        goto label_23d078;
    }
    ctx->pc = 0x23D070u;
    {
        const bool branch_taken_0x23d070 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x23D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D070u;
        // 0x23d074: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d070) {
            ctx->pc = 0x23D028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d028;
        }
    }
    ctx->pc = 0x23D078u;
label_23d078:
    // 0x23d078: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23d078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23d07c:
    // 0x23d07c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23d07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23d080:
    // 0x23d080: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23d080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23d084:
    // 0x23d084: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23d084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23d088:
    // 0x23d088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d08c:
    // 0x23d08c: 0x3e00008  jr          $ra
label_23d090:
    if (ctx->pc == 0x23D090u) {
        ctx->pc = 0x23D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D08Cu;
        // 0x23d090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D094u;
        goto label_23d094;
    }
    ctx->pc = 0x23D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D08Cu;
        // 0x23d090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D094u;
label_23d094:
    // 0x23d094: 0x0  nop
    ctx->pc = 0x23d094u;
    // NOP
label_23d098:
    // 0x23d098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23d09c:
    // 0x23d09c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d0a0:
    // 0x23d0a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23d0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23d0a4:
    // 0x23d0a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23d0a8:
    // 0x23d0a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23d0a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d0ac:
    // 0x23d0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23d0b0:
    // 0x23d0b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d0b4:
    // 0x23d0b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23d0b8:
    // 0x23d0b8: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23d0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23d0bc:
    // 0x23d0bc: 0x26105ab8  addiu       $s0, $s0, 0x5AB8
    ctx->pc = 0x23d0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23224));
label_23d0c0:
    // 0x23d0c0: 0xae430160  sw          $v1, 0x160($s2)
    ctx->pc = 0x23d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 3));
label_23d0c4:
    // 0x23d0c4: 0x8e424e0c  lw          $v0, 0x4E0C($s2)
    ctx->pc = 0x23d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19980)));
label_23d0c8:
    // 0x23d0c8: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x23d0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_23d0cc:
    // 0x23d0cc: 0x62100a  movz        $v0, $v1, $v0
    ctx->pc = 0x23d0ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_23d0d0:
    // 0x23d0d0: 0xc0903b8  jal         func_240EE0
label_23d0d4:
    if (ctx->pc == 0x23D0D4u) {
        ctx->pc = 0x23D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0D0u;
        // 0x23d0d4: 0xae424e0c  sw          $v0, 0x4E0C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 19980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D0D8u;
        goto label_23d0d8;
    }
    ctx->pc = 0x23D0D0u;
    SET_GPR_U32(ctx, 31, 0x23D0D8u);
    ctx->pc = 0x23D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0D0u;
    // 0x23d0d4: 0xae424e0c  sw          $v0, 0x4E0C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 19980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240EE0u, 0x23D0D0u, 0x23D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0D8u;
label_23d0d8:
    // 0x23d0d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d0dc:
    // 0x23d0dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d0e0:
    // 0x23d0e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23d0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d0e4:
    // 0x23d0e4: 0xc08b5ac  jal         func_22D6B0
label_23d0e8:
    if (ctx->pc == 0x23D0E8u) {
        ctx->pc = 0x23D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0E4u;
        // 0x23d0e8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D0ECu;
        goto label_23d0ec;
    }
    ctx->pc = 0x23D0E4u;
    SET_GPR_U32(ctx, 31, 0x23D0ECu);
    ctx->pc = 0x23D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0E4u;
    // 0x23d0e8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D0E4u, 0x23D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0ECu;
label_23d0ec:
    // 0x23d0ec: 0x8e424e1c  lw          $v0, 0x4E1C($s2)
    ctx->pc = 0x23d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19996)));
label_23d0f0:
    // 0x23d0f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23d0f4:
    if (ctx->pc == 0x23D0F4u) {
        ctx->pc = 0x23D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0F0u;
        // 0x23d0f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D0F8u;
        goto label_23d0f8;
    }
    ctx->pc = 0x23D0F0u;
    {
        const bool branch_taken_0x23d0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0F0u;
        // 0x23d0f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0f0) {
            ctx->pc = 0x23D104u;
            goto label_23d104;
        }
    }
    ctx->pc = 0x23D0F8u;
label_23d0f8:
    // 0x23d0f8: 0x40f809  jalr        $v0
label_23d0fc:
    if (ctx->pc == 0x23D0FCu) {
        ctx->pc = 0x23D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0F8u;
        // 0x23d0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D100u;
        goto label_23d100;
    }
    ctx->pc = 0x23D0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D100u);
        ctx->pc = 0x23D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0F8u;
        // 0x23d0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D0F8u, 0x23D100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D100u;
label_23d100:
    // 0x23d100: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23d100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23d104:
    // 0x23d104: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23d104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23d108:
    // 0x23d108: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23d108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23d10c:
    // 0x23d10c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d110:
    // 0x23d110: 0x3e00008  jr          $ra
label_23d114:
    if (ctx->pc == 0x23D114u) {
        ctx->pc = 0x23D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D110u;
        // 0x23d114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D118u;
        goto label_23d118;
    }
    ctx->pc = 0x23D110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D110u;
        // 0x23d114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D118u;
label_23d118:
    // 0x23d118: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23d11c:
    // 0x23d11c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23d120:
    // 0x23d120: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23d120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d124:
    // 0x23d124: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23d124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23d128:
    // 0x23d128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23d12c:
    // 0x23d12c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23d12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d130:
    // 0x23d130: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23d134:
    // 0x23d134: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23d134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23d138:
    // 0x23d138: 0xae400160  sw          $zero, 0x160($s2)
    ctx->pc = 0x23d138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 0));
label_23d13c:
    // 0x23d13c: 0x26105ab8  addiu       $s0, $s0, 0x5AB8
    ctx->pc = 0x23d13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23224));
label_23d140:
    // 0x23d140: 0xc0903b8  jal         func_240EE0
label_23d144:
    if (ctx->pc == 0x23D144u) {
        ctx->pc = 0x23D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D140u;
        // 0x23d144: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D148u;
        goto label_23d148;
    }
    ctx->pc = 0x23D140u;
    SET_GPR_U32(ctx, 31, 0x23D148u);
    ctx->pc = 0x23D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D140u;
    // 0x23d144: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240EE0u, 0x23D140u, 0x23D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D148u;
label_23d148:
    // 0x23d148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d14c:
    // 0x23d14c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d150:
    // 0x23d150: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23d150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d154:
    // 0x23d154: 0xc08b5ac  jal         func_22D6B0
label_23d158:
    if (ctx->pc == 0x23D158u) {
        ctx->pc = 0x23D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D154u;
        // 0x23d158: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D15Cu;
        goto label_23d15c;
    }
    ctx->pc = 0x23D154u;
    SET_GPR_U32(ctx, 31, 0x23D15Cu);
    ctx->pc = 0x23D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D154u;
    // 0x23d158: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D154u, 0x23D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D15Cu;
label_23d15c:
    // 0x23d15c: 0x8e424e20  lw          $v0, 0x4E20($s2)
    ctx->pc = 0x23d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20000)));
label_23d160:
    // 0x23d160: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23d164:
    if (ctx->pc == 0x23D164u) {
        ctx->pc = 0x23D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D160u;
        // 0x23d164: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D168u;
        goto label_23d168;
    }
    ctx->pc = 0x23D160u;
    {
        const bool branch_taken_0x23d160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D160u;
        // 0x23d164: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d160) {
            ctx->pc = 0x23D174u;
            goto label_23d174;
        }
    }
    ctx->pc = 0x23D168u;
label_23d168:
    // 0x23d168: 0x40f809  jalr        $v0
label_23d16c:
    if (ctx->pc == 0x23D16Cu) {
        ctx->pc = 0x23D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D168u;
        // 0x23d16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D170u;
        goto label_23d170;
    }
    ctx->pc = 0x23D168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D170u);
        ctx->pc = 0x23D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D168u;
        // 0x23d16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D168u, 0x23D170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D170u;
label_23d170:
    // 0x23d170: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23d170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23d174:
    // 0x23d174: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23d174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23d178:
    // 0x23d178: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23d178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23d17c:
    // 0x23d17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d180:
    // 0x23d180: 0x3e00008  jr          $ra
label_23d184:
    if (ctx->pc == 0x23D184u) {
        ctx->pc = 0x23D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D180u;
        // 0x23d184: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D188u;
        goto label_23d188;
    }
    ctx->pc = 0x23D180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D180u;
        // 0x23d184: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D188u;
label_23d188:
    // 0x23d188: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23d18c:
    // 0x23d18c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23d18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_23d190:
    // 0x23d190: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23d190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23d194:
    // 0x23d194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d198:
    // 0x23d198: 0x8e090270  lw          $t1, 0x270($s0)
    ctx->pc = 0x23d198u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_23d19c:
    // 0x23d19c: 0x31220020  andi        $v0, $t1, 0x20
    ctx->pc = 0x23d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32);
label_23d1a0:
    // 0x23d1a0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_23d1a4:
    if (ctx->pc == 0x23D1A4u) {
        ctx->pc = 0x23D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1A0u;
        // 0x23d1a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1A8u;
        goto label_23d1a8;
    }
    ctx->pc = 0x23D1A0u;
    {
        const bool branch_taken_0x23d1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1A0u;
        // 0x23d1a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1a0) {
            ctx->pc = 0x23D1FCu;
            goto label_23d1fc;
        }
    }
    ctx->pc = 0x23D1A8u;
label_23d1a8:
    // 0x23d1a8: 0x8e050274  lw          $a1, 0x274($s0)
    ctx->pc = 0x23d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_23d1ac:
    // 0x23d1ac: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
label_23d1b0:
    if (ctx->pc == 0x23D1B0u) {
        ctx->pc = 0x23D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1ACu;
        // 0x23d1b0: 0x92070274  lbu         $a3, 0x274($s0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1B4u;
        goto label_23d1b4;
    }
    ctx->pc = 0x23D1ACu;
    {
        const bool branch_taken_0x23d1ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d1ac) {
            ctx->pc = 0x23D1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D1ACu;
            // 0x23d1b0: 0x92070274  lbu         $a3, 0x274($s0) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D1CCu;
            goto label_23d1cc;
        }
    }
    ctx->pc = 0x23D1B4u;
label_23d1b4:
    // 0x23d1b4: 0xc08b614  jal         func_22D850
label_23d1b8:
    if (ctx->pc == 0x23D1B8u) {
        ctx->pc = 0x23D1BCu;
        goto label_23d1bc;
    }
    ctx->pc = 0x23D1B4u;
    SET_GPR_U32(ctx, 31, 0x23D1BCu);
    ctx->pc = 0x22D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D850u, 0x23D1B4u, 0x23D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1BCu;
label_23d1bc:
    // 0x23d1bc: 0x8e090270  lw          $t1, 0x270($s0)
    ctx->pc = 0x23d1bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_23d1c0:
    // 0x23d1c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23d1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d1c4:
    // 0x23d1c4: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x23d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_23d1c8:
    // 0x23d1c8: 0x92070274  lbu         $a3, 0x274($s0)
    ctx->pc = 0x23d1c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 628)));
label_23d1cc:
    // 0x23d1cc: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x23d1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_23d1d0:
    // 0x23d1d0: 0x52602  srl         $a0, $a1, 24
    ctx->pc = 0x23d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_23d1d4:
    // 0x23d1d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23d1d8:
    // 0x23d1d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23d1dc:
    // 0x23d1dc: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23d1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_23d1e0:
    // 0x23d1e0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x23d1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d1e4:
    // 0x23d1e4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x23d1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23d1e8:
    // 0x23d1e8: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x23d1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_23d1ec:
    // 0x23d1ec: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x23d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
label_23d1f0:
    // 0x23d1f0: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x23d1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
label_23d1f4:
    // 0x23d1f4: 0xa3a60004  sb          $a2, 0x4($sp)
    ctx->pc = 0x23d1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 6));
label_23d1f8:
    // 0x23d1f8: 0xa3a70005  sb          $a3, 0x5($sp)
    ctx->pc = 0x23d1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 7));
label_23d1fc:
    // 0x23d1fc: 0x31220002  andi        $v0, $t1, 0x2
    ctx->pc = 0x23d1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
label_23d200:
    // 0x23d200: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_23d204:
    if (ctx->pc == 0x23D204u) {
        ctx->pc = 0x23D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D200u;
        // 0x23d204: 0x3a82021  addu        $a0, $sp, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D208u;
        goto label_23d208;
    }
    ctx->pc = 0x23D200u;
    {
        const bool branch_taken_0x23d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D200u;
        // 0x23d204: 0x3a82021  addu        $a0, $sp, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d200) {
            ctx->pc = 0x23D248u;
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D208u;
label_23d208:
    // 0x23d208: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x23d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_23d20c:
    // 0x23d20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d210:
    // 0x23d210: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d214:
    // 0x23d214: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d218:
    // 0x23d218: 0x3a82821  addu        $a1, $sp, $t0
    ctx->pc = 0x23d218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d21c:
    // 0x23d21c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23d220:
    // 0x23d220: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d224:
    // 0x23d224: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x23d224u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d228:
    // 0x23d228: 0x3a83021  addu        $a2, $sp, $t0
    ctx->pc = 0x23d228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d22c:
    // 0x23d22c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d230:
    // 0x23d230: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x23d230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_23d234:
    // 0x23d234: 0x92040278  lbu         $a0, 0x278($s0)
    ctx->pc = 0x23d234u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 632)));
label_23d238:
    // 0x23d238: 0x3a81021  addu        $v0, $sp, $t0
    ctx->pc = 0x23d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d23c:
    // 0x23d23c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23d23cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23d240:
    // 0x23d240: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d244:
    // 0x23d244: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x23d244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_23d248:
    // 0x23d248: 0x31220004  andi        $v0, $t1, 0x4
    ctx->pc = 0x23d248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
label_23d24c:
    // 0x23d24c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23d250:
    if (ctx->pc == 0x23D250u) {
        ctx->pc = 0x23D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D24Cu;
        // 0x23d250: 0x31220080  andi        $v0, $t1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D254u;
        goto label_23d254;
    }
    ctx->pc = 0x23D24Cu;
    {
        const bool branch_taken_0x23d24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D24Cu;
        // 0x23d250: 0x31220080  andi        $v0, $t1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d24c) {
            ctx->pc = 0x23D2CCu;
            goto label_23d2cc;
        }
    }
    ctx->pc = 0x23D254u;
label_23d254:
    // 0x23d254: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x23d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_23d258:
    // 0x23d258: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23d25c:
    // 0x23d25c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_23d260:
    if (ctx->pc == 0x23D260u) {
        ctx->pc = 0x23D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D25Cu;
        // 0x23d260: 0x31220080  andi        $v0, $t1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D264u;
        goto label_23d264;
    }
    ctx->pc = 0x23D25Cu;
    {
        const bool branch_taken_0x23d25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D25Cu;
        // 0x23d260: 0x31220080  andi        $v0, $t1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d25c) {
            ctx->pc = 0x23D2CCu;
            goto label_23d2cc;
        }
    }
    ctx->pc = 0x23D264u;
label_23d264:
    // 0x23d264: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_23d268:
    // 0x23d268: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d26c:
    // 0x23d26c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23d270:
    // 0x23d270: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d274:
    // 0x23d274: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d274u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d278:
    // 0x23d278: 0x3a82821  addu        $a1, $sp, $t0
    ctx->pc = 0x23d278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d27c:
    // 0x23d27c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23d280:
    // 0x23d280: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d284:
    // 0x23d284: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x23d284u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d288:
    // 0x23d288: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23d288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d28c:
    // 0x23d28c: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x23d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_23d290:
    // 0x23d290: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d294:
    // 0x23d294: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d294u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d298:
    // 0x23d298: 0x3a82821  addu        $a1, $sp, $t0
    ctx->pc = 0x23d298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d29c:
    // 0x23d29c: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x23d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_23d2a0:
    // 0x23d2a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d2a4:
    // 0x23d2a4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x23d2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d2a8:
    // 0x23d2a8: 0x3a83021  addu        $a2, $sp, $t0
    ctx->pc = 0x23d2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d2ac:
    // 0x23d2ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d2b0:
    // 0x23d2b0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x23d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_23d2b4:
    // 0x23d2b4: 0x92040280  lbu         $a0, 0x280($s0)
    ctx->pc = 0x23d2b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 640)));
label_23d2b8:
    // 0x23d2b8: 0x3a81021  addu        $v0, $sp, $t0
    ctx->pc = 0x23d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d2bc:
    // 0x23d2bc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23d2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23d2c0:
    // 0x23d2c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d2c4:
    // 0x23d2c4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x23d2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_23d2c8:
    // 0x23d2c8: 0x31220080  andi        $v0, $t1, 0x80
    ctx->pc = 0x23d2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
label_23d2cc:
    // 0x23d2cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23d2d0:
    if (ctx->pc == 0x23D2D0u) {
        ctx->pc = 0x23D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2CCu;
        // 0x23d2d0: 0x31220100  andi        $v0, $t1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2D4u;
        goto label_23d2d4;
    }
    ctx->pc = 0x23D2CCu;
    {
        const bool branch_taken_0x23d2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2CCu;
        // 0x23d2d0: 0x31220100  andi        $v0, $t1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2cc) {
            ctx->pc = 0x23D308u;
            goto label_23d308;
        }
    }
    ctx->pc = 0x23D2D4u;
label_23d2d4:
    // 0x23d2d4: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x23d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_23d2d8:
    // 0x23d2d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23d2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23d2dc:
    // 0x23d2dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23d2e0:
    if (ctx->pc == 0x23D2E0u) {
        ctx->pc = 0x23D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2DCu;
        // 0x23d2e0: 0x31220100  andi        $v0, $t1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2E4u;
        goto label_23d2e4;
    }
    ctx->pc = 0x23D2DCu;
    {
        const bool branch_taken_0x23d2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2DCu;
        // 0x23d2e0: 0x31220100  andi        $v0, $t1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2dc) {
            ctx->pc = 0x23D308u;
            goto label_23d308;
        }
    }
    ctx->pc = 0x23D2E4u;
label_23d2e4:
    // 0x23d2e4: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d2e8:
    // 0x23d2e8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x23d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23d2ec:
    // 0x23d2ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d2f0:
    // 0x23d2f0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d2f4:
    // 0x23d2f4: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x23d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d2f8:
    // 0x23d2f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23d2fc:
    // 0x23d2fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23d2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d300:
    // 0x23d300: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d304:
    // 0x23d304: 0x31220100  andi        $v0, $t1, 0x100
    ctx->pc = 0x23d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
label_23d308:
    // 0x23d308: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23d30c:
    if (ctx->pc == 0x23D30Cu) {
        ctx->pc = 0x23D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D308u;
        // 0x23d30c: 0x31220008  andi        $v0, $t1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D310u;
        goto label_23d310;
    }
    ctx->pc = 0x23D308u;
    {
        const bool branch_taken_0x23d308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D308u;
        // 0x23d30c: 0x31220008  andi        $v0, $t1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d308) {
            ctx->pc = 0x23D344u;
            goto label_23d344;
        }
    }
    ctx->pc = 0x23D310u;
label_23d310:
    // 0x23d310: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x23d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_23d314:
    // 0x23d314: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23d318:
    // 0x23d318: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23d31c:
    if (ctx->pc == 0x23D31Cu) {
        ctx->pc = 0x23D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D318u;
        // 0x23d31c: 0x31220008  andi        $v0, $t1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D320u;
        goto label_23d320;
    }
    ctx->pc = 0x23D318u;
    {
        const bool branch_taken_0x23d318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D318u;
        // 0x23d31c: 0x31220008  andi        $v0, $t1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d318) {
            ctx->pc = 0x23D344u;
            goto label_23d344;
        }
    }
    ctx->pc = 0x23D320u;
label_23d320:
    // 0x23d320: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23d320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d324:
    // 0x23d324: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23d324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23d328:
    // 0x23d328: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d32c:
    // 0x23d32c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d330:
    // 0x23d330: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x23d330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d334:
    // 0x23d334: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23d334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23d338:
    // 0x23d338: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23d338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d33c:
    // 0x23d33c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d340:
    // 0x23d340: 0x31220008  andi        $v0, $t1, 0x8
    ctx->pc = 0x23d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
label_23d344:
    // 0x23d344: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_23d348:
    if (ctx->pc == 0x23D348u) {
        ctx->pc = 0x23D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D344u;
        // 0x23d348: 0x3a81821  addu        $v1, $sp, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D34Cu;
        goto label_23d34c;
    }
    ctx->pc = 0x23D344u;
    {
        const bool branch_taken_0x23d344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D344u;
        // 0x23d348: 0x3a81821  addu        $v1, $sp, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d344) {
            ctx->pc = 0x23D3B0u;
            goto label_23d3b0;
        }
    }
    ctx->pc = 0x23D34Cu;
label_23d34c:
    // 0x23d34c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23d350:
    // 0x23d350: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d354:
    // 0x23d354: 0x9605423c  lhu         $a1, 0x423C($s0)
    ctx->pc = 0x23d354u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16956)));
label_23d358:
    // 0x23d358: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23d358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d35c:
    // 0x23d35c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23d35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d360:
    // 0x23d360: 0x3402c223  ori         $v0, $zero, 0xC223
    ctx->pc = 0x23d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23d364:
    // 0x23d364: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_23d368:
    if (ctx->pc == 0x23D368u) {
        ctx->pc = 0x23D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D364u;
        // 0x23d368: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D36Cu;
        goto label_23d36c;
    }
    ctx->pc = 0x23D364u;
    {
        const bool branch_taken_0x23d364 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D364u;
        // 0x23d368: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d364) {
            ctx->pc = 0x23D374u;
            goto label_23d374;
        }
    }
    ctx->pc = 0x23D36Cu;
label_23d36c:
    // 0x23d36c: 0x10000002  b           . + 4 + (0x2 << 2)
label_23d370:
    if (ctx->pc == 0x23D370u) {
        ctx->pc = 0x23D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D36Cu;
        // 0x23d370: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D374u;
        goto label_23d374;
    }
    ctx->pc = 0x23D36Cu;
    {
        const bool branch_taken_0x23d36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D36Cu;
        // 0x23d370: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d36c) {
            ctx->pc = 0x23D378u;
            goto label_23d378;
        }
    }
    ctx->pc = 0x23D374u;
label_23d374:
    // 0x23d374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23d378:
    // 0x23d378: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d37c:
    // 0x23d37c: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d380:
    // 0x23d380: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x23d380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_23d384:
    // 0x23d384: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d388:
    // 0x23d388: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d38c:
    // 0x23d38c: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x23d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d390:
    // 0x23d390: 0x3402c223  ori         $v0, $zero, 0xC223
    ctx->pc = 0x23d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23d394:
    // 0x23d394: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x23d394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_23d398:
    // 0x23d398: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_23d39c:
    if (ctx->pc == 0x23D39Cu) {
        ctx->pc = 0x23D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D398u;
        // 0x23d39c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3A0u;
        goto label_23d3a0;
    }
    ctx->pc = 0x23D398u;
    {
        const bool branch_taken_0x23d398 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D398u;
        // 0x23d39c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d398) {
            ctx->pc = 0x23D3B0u;
            goto label_23d3b0;
        }
    }
    ctx->pc = 0x23D3A0u;
label_23d3a0:
    // 0x23d3a0: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x23d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23d3a4:
    // 0x23d3a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23d3a8:
    // 0x23d3a8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23d3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d3ac:
    // 0x23d3ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23d3acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23d3b0:
    // 0x23d3b0: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x23d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_23d3b4:
    // 0x23d3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d3b8:
    // 0x23d3b8: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x23d3b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_23d3bc:
    // 0x23d3bc: 0x3405c021  ori         $a1, $zero, 0xC021
    ctx->pc = 0x23d3bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_23d3c0:
    // 0x23d3c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23d3c4:
    // 0x23d3c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23d3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d3c8:
    // 0x23d3c8: 0xa2020178  sb          $v0, 0x178($s0)
    ctx->pc = 0x23d3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 376), (uint8_t)GPR_U32(ctx, 2));
label_23d3cc:
    // 0x23d3cc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x23d3ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d3d0:
    // 0x23d3d0: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x23d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_23d3d4:
    // 0x23d3d4: 0xc08e8be  jal         func_23A2F8
label_23d3d8:
    if (ctx->pc == 0x23D3D8u) {
        ctx->pc = 0x23D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3D4u;
        // 0x23d3d8: 0x90870178  lbu         $a3, 0x178($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3DCu;
        goto label_23d3dc;
    }
    ctx->pc = 0x23D3D4u;
    SET_GPR_U32(ctx, 31, 0x23D3DCu);
    ctx->pc = 0x23D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3D4u;
    // 0x23d3d8: 0x90870178  lbu         $a3, 0x178($a0) (Delay Slot)
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2F8u, 0x23D3D4u, 0x23D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3DCu;
label_23d3dc:
    // 0x23d3dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23d3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23d3e0:
    // 0x23d3e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23d3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23d3e4:
    // 0x23d3e4: 0x3e00008  jr          $ra
label_23d3e8:
    if (ctx->pc == 0x23D3E8u) {
        ctx->pc = 0x23D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3E4u;
        // 0x23d3e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3ECu;
        goto label_23d3ec;
    }
    ctx->pc = 0x23D3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3E4u;
        // 0x23d3e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D3ECu;
label_23d3ec:
    // 0x23d3ec: 0x0  nop
    ctx->pc = 0x23d3ecu;
    // NOP
    if (ctx->pc == 0x23d3ecu) { ctx->pc = 0x23d3f0u; }
}
