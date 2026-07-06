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

// Function: sub_001DAD50
// Address: 0x1dad50 - 0x1db338
void sub_001DAD50_0x1dad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAD50_0x1dad50");
#endif

    switch (ctx->pc) {
        case 0x1dad50u: goto label_1dad50;
        case 0x1dad54u: goto label_1dad54;
        case 0x1dad58u: goto label_1dad58;
        case 0x1dad5cu: goto label_1dad5c;
        case 0x1dad60u: goto label_1dad60;
        case 0x1dad64u: goto label_1dad64;
        case 0x1dad68u: goto label_1dad68;
        case 0x1dad6cu: goto label_1dad6c;
        case 0x1dad70u: goto label_1dad70;
        case 0x1dad74u: goto label_1dad74;
        case 0x1dad78u: goto label_1dad78;
        case 0x1dad7cu: goto label_1dad7c;
        case 0x1dad80u: goto label_1dad80;
        case 0x1dad84u: goto label_1dad84;
        case 0x1dad88u: goto label_1dad88;
        case 0x1dad8cu: goto label_1dad8c;
        case 0x1dad90u: goto label_1dad90;
        case 0x1dad94u: goto label_1dad94;
        case 0x1dad98u: goto label_1dad98;
        case 0x1dad9cu: goto label_1dad9c;
        case 0x1dada0u: goto label_1dada0;
        case 0x1dada4u: goto label_1dada4;
        case 0x1dada8u: goto label_1dada8;
        case 0x1dadacu: goto label_1dadac;
        case 0x1dadb0u: goto label_1dadb0;
        case 0x1dadb4u: goto label_1dadb4;
        case 0x1dadb8u: goto label_1dadb8;
        case 0x1dadbcu: goto label_1dadbc;
        case 0x1dadc0u: goto label_1dadc0;
        case 0x1dadc4u: goto label_1dadc4;
        case 0x1dadc8u: goto label_1dadc8;
        case 0x1dadccu: goto label_1dadcc;
        case 0x1dadd0u: goto label_1dadd0;
        case 0x1dadd4u: goto label_1dadd4;
        case 0x1dadd8u: goto label_1dadd8;
        case 0x1daddcu: goto label_1daddc;
        case 0x1dade0u: goto label_1dade0;
        case 0x1dade4u: goto label_1dade4;
        case 0x1dade8u: goto label_1dade8;
        case 0x1dadecu: goto label_1dadec;
        case 0x1dadf0u: goto label_1dadf0;
        case 0x1dadf4u: goto label_1dadf4;
        case 0x1dadf8u: goto label_1dadf8;
        case 0x1dadfcu: goto label_1dadfc;
        case 0x1dae00u: goto label_1dae00;
        case 0x1dae04u: goto label_1dae04;
        case 0x1dae08u: goto label_1dae08;
        case 0x1dae0cu: goto label_1dae0c;
        case 0x1dae10u: goto label_1dae10;
        case 0x1dae14u: goto label_1dae14;
        case 0x1dae18u: goto label_1dae18;
        case 0x1dae1cu: goto label_1dae1c;
        case 0x1dae20u: goto label_1dae20;
        case 0x1dae24u: goto label_1dae24;
        case 0x1dae28u: goto label_1dae28;
        case 0x1dae2cu: goto label_1dae2c;
        case 0x1dae30u: goto label_1dae30;
        case 0x1dae34u: goto label_1dae34;
        case 0x1dae38u: goto label_1dae38;
        case 0x1dae3cu: goto label_1dae3c;
        case 0x1dae40u: goto label_1dae40;
        case 0x1dae44u: goto label_1dae44;
        case 0x1dae48u: goto label_1dae48;
        case 0x1dae4cu: goto label_1dae4c;
        case 0x1dae50u: goto label_1dae50;
        case 0x1dae54u: goto label_1dae54;
        case 0x1dae58u: goto label_1dae58;
        case 0x1dae5cu: goto label_1dae5c;
        case 0x1dae60u: goto label_1dae60;
        case 0x1dae64u: goto label_1dae64;
        case 0x1dae68u: goto label_1dae68;
        case 0x1dae6cu: goto label_1dae6c;
        case 0x1dae70u: goto label_1dae70;
        case 0x1dae74u: goto label_1dae74;
        case 0x1dae78u: goto label_1dae78;
        case 0x1dae7cu: goto label_1dae7c;
        case 0x1dae80u: goto label_1dae80;
        case 0x1dae84u: goto label_1dae84;
        case 0x1dae88u: goto label_1dae88;
        case 0x1dae8cu: goto label_1dae8c;
        case 0x1dae90u: goto label_1dae90;
        case 0x1dae94u: goto label_1dae94;
        case 0x1dae98u: goto label_1dae98;
        case 0x1dae9cu: goto label_1dae9c;
        case 0x1daea0u: goto label_1daea0;
        case 0x1daea4u: goto label_1daea4;
        case 0x1daea8u: goto label_1daea8;
        case 0x1daeacu: goto label_1daeac;
        case 0x1daeb0u: goto label_1daeb0;
        case 0x1daeb4u: goto label_1daeb4;
        case 0x1daeb8u: goto label_1daeb8;
        case 0x1daebcu: goto label_1daebc;
        case 0x1daec0u: goto label_1daec0;
        case 0x1daec4u: goto label_1daec4;
        case 0x1daec8u: goto label_1daec8;
        case 0x1daeccu: goto label_1daecc;
        case 0x1daed0u: goto label_1daed0;
        case 0x1daed4u: goto label_1daed4;
        case 0x1daed8u: goto label_1daed8;
        case 0x1daedcu: goto label_1daedc;
        case 0x1daee0u: goto label_1daee0;
        case 0x1daee4u: goto label_1daee4;
        case 0x1daee8u: goto label_1daee8;
        case 0x1daeecu: goto label_1daeec;
        case 0x1daef0u: goto label_1daef0;
        case 0x1daef4u: goto label_1daef4;
        case 0x1daef8u: goto label_1daef8;
        case 0x1daefcu: goto label_1daefc;
        case 0x1daf00u: goto label_1daf00;
        case 0x1daf04u: goto label_1daf04;
        case 0x1daf08u: goto label_1daf08;
        case 0x1daf0cu: goto label_1daf0c;
        case 0x1daf10u: goto label_1daf10;
        case 0x1daf14u: goto label_1daf14;
        case 0x1daf18u: goto label_1daf18;
        case 0x1daf1cu: goto label_1daf1c;
        case 0x1daf20u: goto label_1daf20;
        case 0x1daf24u: goto label_1daf24;
        case 0x1daf28u: goto label_1daf28;
        case 0x1daf2cu: goto label_1daf2c;
        case 0x1daf30u: goto label_1daf30;
        case 0x1daf34u: goto label_1daf34;
        case 0x1daf38u: goto label_1daf38;
        case 0x1daf3cu: goto label_1daf3c;
        case 0x1daf40u: goto label_1daf40;
        case 0x1daf44u: goto label_1daf44;
        case 0x1daf48u: goto label_1daf48;
        case 0x1daf4cu: goto label_1daf4c;
        case 0x1daf50u: goto label_1daf50;
        case 0x1daf54u: goto label_1daf54;
        case 0x1daf58u: goto label_1daf58;
        case 0x1daf5cu: goto label_1daf5c;
        case 0x1daf60u: goto label_1daf60;
        case 0x1daf64u: goto label_1daf64;
        case 0x1daf68u: goto label_1daf68;
        case 0x1daf6cu: goto label_1daf6c;
        case 0x1daf70u: goto label_1daf70;
        case 0x1daf74u: goto label_1daf74;
        case 0x1daf78u: goto label_1daf78;
        case 0x1daf7cu: goto label_1daf7c;
        case 0x1daf80u: goto label_1daf80;
        case 0x1daf84u: goto label_1daf84;
        case 0x1daf88u: goto label_1daf88;
        case 0x1daf8cu: goto label_1daf8c;
        case 0x1daf90u: goto label_1daf90;
        case 0x1daf94u: goto label_1daf94;
        case 0x1daf98u: goto label_1daf98;
        case 0x1daf9cu: goto label_1daf9c;
        case 0x1dafa0u: goto label_1dafa0;
        case 0x1dafa4u: goto label_1dafa4;
        case 0x1dafa8u: goto label_1dafa8;
        case 0x1dafacu: goto label_1dafac;
        case 0x1dafb0u: goto label_1dafb0;
        case 0x1dafb4u: goto label_1dafb4;
        case 0x1dafb8u: goto label_1dafb8;
        case 0x1dafbcu: goto label_1dafbc;
        case 0x1dafc0u: goto label_1dafc0;
        case 0x1dafc4u: goto label_1dafc4;
        case 0x1dafc8u: goto label_1dafc8;
        case 0x1dafccu: goto label_1dafcc;
        case 0x1dafd0u: goto label_1dafd0;
        case 0x1dafd4u: goto label_1dafd4;
        case 0x1dafd8u: goto label_1dafd8;
        case 0x1dafdcu: goto label_1dafdc;
        case 0x1dafe0u: goto label_1dafe0;
        case 0x1dafe4u: goto label_1dafe4;
        case 0x1dafe8u: goto label_1dafe8;
        case 0x1dafecu: goto label_1dafec;
        case 0x1daff0u: goto label_1daff0;
        case 0x1daff4u: goto label_1daff4;
        case 0x1daff8u: goto label_1daff8;
        case 0x1daffcu: goto label_1daffc;
        case 0x1db000u: goto label_1db000;
        case 0x1db004u: goto label_1db004;
        case 0x1db008u: goto label_1db008;
        case 0x1db00cu: goto label_1db00c;
        case 0x1db010u: goto label_1db010;
        case 0x1db014u: goto label_1db014;
        case 0x1db018u: goto label_1db018;
        case 0x1db01cu: goto label_1db01c;
        case 0x1db020u: goto label_1db020;
        case 0x1db024u: goto label_1db024;
        case 0x1db028u: goto label_1db028;
        case 0x1db02cu: goto label_1db02c;
        case 0x1db030u: goto label_1db030;
        case 0x1db034u: goto label_1db034;
        case 0x1db038u: goto label_1db038;
        case 0x1db03cu: goto label_1db03c;
        case 0x1db040u: goto label_1db040;
        case 0x1db044u: goto label_1db044;
        case 0x1db048u: goto label_1db048;
        case 0x1db04cu: goto label_1db04c;
        case 0x1db050u: goto label_1db050;
        case 0x1db054u: goto label_1db054;
        case 0x1db058u: goto label_1db058;
        case 0x1db05cu: goto label_1db05c;
        case 0x1db060u: goto label_1db060;
        case 0x1db064u: goto label_1db064;
        case 0x1db068u: goto label_1db068;
        case 0x1db06cu: goto label_1db06c;
        case 0x1db070u: goto label_1db070;
        case 0x1db074u: goto label_1db074;
        case 0x1db078u: goto label_1db078;
        case 0x1db07cu: goto label_1db07c;
        case 0x1db080u: goto label_1db080;
        case 0x1db084u: goto label_1db084;
        case 0x1db088u: goto label_1db088;
        case 0x1db08cu: goto label_1db08c;
        case 0x1db090u: goto label_1db090;
        case 0x1db094u: goto label_1db094;
        case 0x1db098u: goto label_1db098;
        case 0x1db09cu: goto label_1db09c;
        case 0x1db0a0u: goto label_1db0a0;
        case 0x1db0a4u: goto label_1db0a4;
        case 0x1db0a8u: goto label_1db0a8;
        case 0x1db0acu: goto label_1db0ac;
        case 0x1db0b0u: goto label_1db0b0;
        case 0x1db0b4u: goto label_1db0b4;
        case 0x1db0b8u: goto label_1db0b8;
        case 0x1db0bcu: goto label_1db0bc;
        case 0x1db0c0u: goto label_1db0c0;
        case 0x1db0c4u: goto label_1db0c4;
        case 0x1db0c8u: goto label_1db0c8;
        case 0x1db0ccu: goto label_1db0cc;
        case 0x1db0d0u: goto label_1db0d0;
        case 0x1db0d4u: goto label_1db0d4;
        case 0x1db0d8u: goto label_1db0d8;
        case 0x1db0dcu: goto label_1db0dc;
        case 0x1db0e0u: goto label_1db0e0;
        case 0x1db0e4u: goto label_1db0e4;
        case 0x1db0e8u: goto label_1db0e8;
        case 0x1db0ecu: goto label_1db0ec;
        case 0x1db0f0u: goto label_1db0f0;
        case 0x1db0f4u: goto label_1db0f4;
        case 0x1db0f8u: goto label_1db0f8;
        case 0x1db0fcu: goto label_1db0fc;
        case 0x1db100u: goto label_1db100;
        case 0x1db104u: goto label_1db104;
        case 0x1db108u: goto label_1db108;
        case 0x1db10cu: goto label_1db10c;
        case 0x1db110u: goto label_1db110;
        case 0x1db114u: goto label_1db114;
        case 0x1db118u: goto label_1db118;
        case 0x1db11cu: goto label_1db11c;
        case 0x1db120u: goto label_1db120;
        case 0x1db124u: goto label_1db124;
        case 0x1db128u: goto label_1db128;
        case 0x1db12cu: goto label_1db12c;
        case 0x1db130u: goto label_1db130;
        case 0x1db134u: goto label_1db134;
        case 0x1db138u: goto label_1db138;
        case 0x1db13cu: goto label_1db13c;
        case 0x1db140u: goto label_1db140;
        case 0x1db144u: goto label_1db144;
        case 0x1db148u: goto label_1db148;
        case 0x1db14cu: goto label_1db14c;
        case 0x1db150u: goto label_1db150;
        case 0x1db154u: goto label_1db154;
        case 0x1db158u: goto label_1db158;
        case 0x1db15cu: goto label_1db15c;
        case 0x1db160u: goto label_1db160;
        case 0x1db164u: goto label_1db164;
        case 0x1db168u: goto label_1db168;
        case 0x1db16cu: goto label_1db16c;
        case 0x1db170u: goto label_1db170;
        case 0x1db174u: goto label_1db174;
        case 0x1db178u: goto label_1db178;
        case 0x1db17cu: goto label_1db17c;
        case 0x1db180u: goto label_1db180;
        case 0x1db184u: goto label_1db184;
        case 0x1db188u: goto label_1db188;
        case 0x1db18cu: goto label_1db18c;
        case 0x1db190u: goto label_1db190;
        case 0x1db194u: goto label_1db194;
        case 0x1db198u: goto label_1db198;
        case 0x1db19cu: goto label_1db19c;
        case 0x1db1a0u: goto label_1db1a0;
        case 0x1db1a4u: goto label_1db1a4;
        case 0x1db1a8u: goto label_1db1a8;
        case 0x1db1acu: goto label_1db1ac;
        case 0x1db1b0u: goto label_1db1b0;
        case 0x1db1b4u: goto label_1db1b4;
        case 0x1db1b8u: goto label_1db1b8;
        case 0x1db1bcu: goto label_1db1bc;
        case 0x1db1c0u: goto label_1db1c0;
        case 0x1db1c4u: goto label_1db1c4;
        case 0x1db1c8u: goto label_1db1c8;
        case 0x1db1ccu: goto label_1db1cc;
        case 0x1db1d0u: goto label_1db1d0;
        case 0x1db1d4u: goto label_1db1d4;
        case 0x1db1d8u: goto label_1db1d8;
        case 0x1db1dcu: goto label_1db1dc;
        case 0x1db1e0u: goto label_1db1e0;
        case 0x1db1e4u: goto label_1db1e4;
        case 0x1db1e8u: goto label_1db1e8;
        case 0x1db1ecu: goto label_1db1ec;
        case 0x1db1f0u: goto label_1db1f0;
        case 0x1db1f4u: goto label_1db1f4;
        case 0x1db1f8u: goto label_1db1f8;
        case 0x1db1fcu: goto label_1db1fc;
        case 0x1db200u: goto label_1db200;
        case 0x1db204u: goto label_1db204;
        case 0x1db208u: goto label_1db208;
        case 0x1db20cu: goto label_1db20c;
        case 0x1db210u: goto label_1db210;
        case 0x1db214u: goto label_1db214;
        case 0x1db218u: goto label_1db218;
        case 0x1db21cu: goto label_1db21c;
        case 0x1db220u: goto label_1db220;
        case 0x1db224u: goto label_1db224;
        case 0x1db228u: goto label_1db228;
        case 0x1db22cu: goto label_1db22c;
        case 0x1db230u: goto label_1db230;
        case 0x1db234u: goto label_1db234;
        case 0x1db238u: goto label_1db238;
        case 0x1db23cu: goto label_1db23c;
        case 0x1db240u: goto label_1db240;
        case 0x1db244u: goto label_1db244;
        case 0x1db248u: goto label_1db248;
        case 0x1db24cu: goto label_1db24c;
        case 0x1db250u: goto label_1db250;
        case 0x1db254u: goto label_1db254;
        case 0x1db258u: goto label_1db258;
        case 0x1db25cu: goto label_1db25c;
        case 0x1db260u: goto label_1db260;
        case 0x1db264u: goto label_1db264;
        case 0x1db268u: goto label_1db268;
        case 0x1db26cu: goto label_1db26c;
        case 0x1db270u: goto label_1db270;
        case 0x1db274u: goto label_1db274;
        case 0x1db278u: goto label_1db278;
        case 0x1db27cu: goto label_1db27c;
        case 0x1db280u: goto label_1db280;
        case 0x1db284u: goto label_1db284;
        case 0x1db288u: goto label_1db288;
        case 0x1db28cu: goto label_1db28c;
        case 0x1db290u: goto label_1db290;
        case 0x1db294u: goto label_1db294;
        case 0x1db298u: goto label_1db298;
        case 0x1db29cu: goto label_1db29c;
        case 0x1db2a0u: goto label_1db2a0;
        case 0x1db2a4u: goto label_1db2a4;
        case 0x1db2a8u: goto label_1db2a8;
        case 0x1db2acu: goto label_1db2ac;
        case 0x1db2b0u: goto label_1db2b0;
        case 0x1db2b4u: goto label_1db2b4;
        case 0x1db2b8u: goto label_1db2b8;
        case 0x1db2bcu: goto label_1db2bc;
        case 0x1db2c0u: goto label_1db2c0;
        case 0x1db2c4u: goto label_1db2c4;
        case 0x1db2c8u: goto label_1db2c8;
        case 0x1db2ccu: goto label_1db2cc;
        case 0x1db2d0u: goto label_1db2d0;
        case 0x1db2d4u: goto label_1db2d4;
        case 0x1db2d8u: goto label_1db2d8;
        case 0x1db2dcu: goto label_1db2dc;
        case 0x1db2e0u: goto label_1db2e0;
        case 0x1db2e4u: goto label_1db2e4;
        case 0x1db2e8u: goto label_1db2e8;
        case 0x1db2ecu: goto label_1db2ec;
        case 0x1db2f0u: goto label_1db2f0;
        case 0x1db2f4u: goto label_1db2f4;
        case 0x1db2f8u: goto label_1db2f8;
        case 0x1db2fcu: goto label_1db2fc;
        case 0x1db300u: goto label_1db300;
        case 0x1db304u: goto label_1db304;
        case 0x1db308u: goto label_1db308;
        case 0x1db30cu: goto label_1db30c;
        case 0x1db310u: goto label_1db310;
        case 0x1db314u: goto label_1db314;
        case 0x1db318u: goto label_1db318;
        case 0x1db31cu: goto label_1db31c;
        case 0x1db320u: goto label_1db320;
        case 0x1db324u: goto label_1db324;
        case 0x1db328u: goto label_1db328;
        case 0x1db32cu: goto label_1db32c;
        case 0x1db330u: goto label_1db330;
        case 0x1db334u: goto label_1db334;
        default: break;
    }

    ctx->pc = 0x1dad50u;

label_1dad50:
    // 0x1dad50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dad54:
    // 0x1dad54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dad54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dad58:
    // 0x1dad58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1dad5c:
    // 0x1dad5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dad5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dad60:
    // 0x1dad60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1dad64:
    // 0x1dad64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dad64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dad68:
    // 0x1dad68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1dad6c:
    // 0x1dad6c: 0x261203a8  addiu       $s2, $s0, 0x3A8
    ctx->pc = 0x1dad6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 936));
label_1dad70:
    // 0x1dad70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dad70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1dad74:
    // 0x1dad74: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1dad74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1dad78:
    // 0x1dad78: 0xae0203d4  sw          $v0, 0x3D4($s0)
    ctx->pc = 0x1dad78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 2));
label_1dad7c:
    // 0x1dad7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dad80:
    // 0x1dad80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1dad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dad84:
    // 0x1dad84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dad88:
    // 0x1dad88: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1dad88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1dad8c:
    // 0x1dad8c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1dad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1dad90:
    // 0x1dad90: 0x40f809  jalr        $v0
label_1dad94:
    if (ctx->pc == 0x1DAD94u) {
        ctx->pc = 0x1DAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD90u;
        // 0x1dad94: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD98u;
        goto label_1dad98;
    }
    ctx->pc = 0x1DAD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAD98u);
        ctx->pc = 0x1DAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD90u;
        // 0x1dad94: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAD90u, 0x1DAD98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DAD98u;
label_1dad98:
    // 0x1dad98: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1dad98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dad9c:
    // 0x1dad9c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1dad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1dada0:
    // 0x1dada0: 0x260901dc  addiu       $t1, $s0, 0x1DC
    ctx->pc = 0x1dada0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
label_1dada4:
    // 0x1dada4: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x1dada4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dada8:
    // 0x1dada8: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1dada8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1dadac:
    // 0x1dadac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1dadacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1dadb0:
    // 0x1dadb0: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1dadb0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dadb4:
    // 0x1dadb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dadb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dadb8:
    // 0x1dadb8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1dadb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dadbc:
    // 0x1dadbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dadbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dadc0:
    // 0x1dadc0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1dadc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dadc4:
    // 0x1dadc4: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1dadc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dadc8:
    // 0x1dadc8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1dadc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1dadcc:
    // 0x1dadcc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dadccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dadd0:
    // 0x1dadd0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1dadd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dadd4:
    // 0x1dadd4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1dadd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dadd8:
    // 0x1dadd8: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1dadd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1daddc:
    // 0x1daddc: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1daddcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1dade0:
    // 0x1dade0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1dade0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dade4:
    // 0x1dade4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dade4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dade8:
    // 0x1dade8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1dade8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1dadec:
    // 0x1dadec: 0x38a30000  xori        $v1, $a1, 0x0
    ctx->pc = 0x1dadecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)0);
label_1dadf0:
    // 0x1dadf0: 0xa61004  sllv        $v0, $a2, $a1
    ctx->pc = 0x1dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_1dadf4:
    // 0x1dadf4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1dadf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dadf8:
    // 0x1dadf8: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1dadf8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dadfc:
    // 0x1dadfc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dadfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dae00:
    // 0x1dae00: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x1dae00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_1dae04:
    // 0x1dae04: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1dae04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dae08:
    // 0x1dae08: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1dae08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dae0c:
    // 0x1dae0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dae0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dae10:
    // 0x1dae10: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1dae10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dae14:
    // 0x1dae14: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dae14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dae18:
    // 0x1dae18: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1dae18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1dae1c:
    // 0x1dae1c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1dae1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dae20:
    // 0x1dae20: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1dae20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dae24:
    // 0x1dae24: 0x28a40016  slti        $a0, $a1, 0x16
    ctx->pc = 0x1dae24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
label_1dae28:
    // 0x1dae28: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1dae28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1dae2c:
    // 0x1dae2c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dae2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dae30:
    // 0x1dae30: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1dae30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dae34:
    // 0x1dae34: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
label_1dae38:
    if (ctx->pc == 0x1DAE38u) {
        ctx->pc = 0x1DAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE34u;
        // 0x1dae38: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE3Cu;
        goto label_1dae3c;
    }
    ctx->pc = 0x1DAE34u;
    {
        const bool branch_taken_0x1dae34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE34u;
        // 0x1dae38: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae34) {
            ctx->pc = 0x1DAEB0u;
            goto label_1daeb0;
        }
    }
    ctx->pc = 0x1DAE3Cu;
label_1dae3c:
    // 0x1dae3c: 0x24a5ffea  addiu       $a1, $a1, -0x16
    ctx->pc = 0x1dae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967274));
label_1dae40:
    // 0x1dae40: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1dae44:
    if (ctx->pc == 0x1DAE44u) {
        ctx->pc = 0x1DAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE40u;
        // 0x1dae44: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE48u;
        goto label_1dae48;
    }
    ctx->pc = 0x1DAE40u;
    {
        const bool branch_taken_0x1dae40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE40u;
        // 0x1dae44: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae40) {
            ctx->pc = 0x1DAE68u;
            goto label_1dae68;
        }
    }
    ctx->pc = 0x1DAE48u;
label_1dae48:
    // 0x1dae48: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1dae48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1dae4c:
    // 0x1dae4c: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1dae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1dae50:
    // 0x1dae50: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1dae50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1dae54:
    // 0x1dae54: 0x71d82  srl         $v1, $a3, 22
    ctx->pc = 0x1dae54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1dae58:
    // 0x1dae58: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x1dae58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_1dae5c:
    // 0x1dae5c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dae60:
    if (ctx->pc == 0x1DAE60u) {
        ctx->pc = 0x1DAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE5Cu;
        // 0x1dae60: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE64u;
        goto label_1dae64;
    }
    ctx->pc = 0x1DAE5Cu;
    {
        const bool branch_taken_0x1dae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE5Cu;
        // 0x1dae60: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae5c) {
            ctx->pc = 0x1DAE74u;
            goto label_1dae74;
        }
    }
    ctx->pc = 0x1DAE64u;
label_1dae64:
    // 0x1dae64: 0x0  nop
    ctx->pc = 0x1dae64u;
    // NOP
label_1dae68:
    // 0x1dae68: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x1dae68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1dae6c:
    // 0x1dae6c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1dae6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dae70:
    // 0x1dae70: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x1dae70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_1dae74:
    // 0x1dae74: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1dae74u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dae78:
    // 0x1dae78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dae78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dae7c:
    // 0x1dae7c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1dae7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dae80:
    // 0x1dae80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dae80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dae84:
    // 0x1dae84: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1dae84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dae88:
    // 0x1dae88: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1dae88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dae8c:
    // 0x1dae8c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1dae8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1dae90:
    // 0x1dae90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dae90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dae94:
    // 0x1dae94: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dae98:
    // 0x1dae98: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1dae98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dae9c:
    // 0x1dae9c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1dae9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1daea0:
    // 0x1daea0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1daea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1daea4:
    // 0x1daea4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1daea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1daea8:
    // 0x1daea8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1daeac:
    if (ctx->pc == 0x1DAEACu) {
        ctx->pc = 0x1DAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEA8u;
        // 0x1daeac: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAEB0u;
        goto label_1daeb0;
    }
    ctx->pc = 0x1DAEA8u;
    {
        const bool branch_taken_0x1daea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEA8u;
        // 0x1daeac: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daea8) {
            ctx->pc = 0x1DAEC0u;
            goto label_1daec0;
        }
    }
    ctx->pc = 0x1DAEB0u;
label_1daeb0:
    // 0x1daeb0: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x1daeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1daeb4:
    // 0x1daeb4: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x1daeb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_1daeb8:
    // 0x1daeb8: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x1daeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_1daebc:
    // 0x1daebc: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x1daebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_1daec0:
    // 0x1daec0: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x1daec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_1daec4:
    // 0x1daec4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1daec8:
    if (ctx->pc == 0x1DAEC8u) {
        ctx->pc = 0x1DAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEC4u;
        // 0x1daec8: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAECCu;
        goto label_1daecc;
    }
    ctx->pc = 0x1DAEC4u;
    {
        const bool branch_taken_0x1daec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEC4u;
        // 0x1daec8: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daec4) {
            ctx->pc = 0x1DAF30u;
            goto label_1daf30;
        }
    }
    ctx->pc = 0x1DAECCu;
label_1daecc:
    // 0x1daecc: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x1daeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_1daed0:
    // 0x1daed0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1daed4:
    if (ctx->pc == 0x1DAED4u) {
        ctx->pc = 0x1DAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAED0u;
        // 0x1daed4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAED8u;
        goto label_1daed8;
    }
    ctx->pc = 0x1DAED0u;
    {
        const bool branch_taken_0x1daed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAED0u;
        // 0x1daed4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daed0) {
            ctx->pc = 0x1DAEF0u;
            goto label_1daef0;
        }
    }
    ctx->pc = 0x1DAED8u;
label_1daed8:
    // 0x1daed8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1daed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1daedc:
    // 0x1daedc: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1daedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1daee0:
    // 0x1daee0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1daee0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1daee4:
    // 0x1daee4: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x1daee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_1daee8:
    // 0x1daee8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1daeec:
    if (ctx->pc == 0x1DAEECu) {
        ctx->pc = 0x1DAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEE8u;
        // 0x1daeec: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAEF0u;
        goto label_1daef0;
    }
    ctx->pc = 0x1DAEE8u;
    {
        const bool branch_taken_0x1daee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEE8u;
        // 0x1daeec: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daee8) {
            ctx->pc = 0x1DAEF4u;
            goto label_1daef4;
        }
    }
    ctx->pc = 0x1DAEF0u;
label_1daef0:
    // 0x1daef0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1daef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1daef4:
    // 0x1daef4: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1daef4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1daef8:
    // 0x1daef8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1daef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1daefc:
    // 0x1daefc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1daefcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1daf00:
    // 0x1daf00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1daf04:
    // 0x1daf04: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1daf04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1daf08:
    // 0x1daf08: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1daf08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1daf0c:
    // 0x1daf0c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1daf0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1daf10:
    // 0x1daf10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1daf10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1daf14:
    // 0x1daf14: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1daf14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1daf18:
    // 0x1daf18: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1daf18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1daf1c:
    // 0x1daf1c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1daf1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1daf20:
    // 0x1daf20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1daf20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1daf24:
    // 0x1daf24: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1daf24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1daf28:
    // 0x1daf28: 0x10000003  b           . + 4 + (0x3 << 2)
label_1daf2c:
    if (ctx->pc == 0x1DAF2Cu) {
        ctx->pc = 0x1DAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF28u;
        // 0x1daf2c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF30u;
        goto label_1daf30;
    }
    ctx->pc = 0x1DAF28u;
    {
        const bool branch_taken_0x1daf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF28u;
        // 0x1daf2c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf28) {
            ctx->pc = 0x1DAF38u;
            goto label_1daf38;
        }
    }
    ctx->pc = 0x1DAF30u;
label_1daf30:
    // 0x1daf30: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1daf30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1daf34:
    // 0x1daf34: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1daf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1daf38:
    // 0x1daf38: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1daf38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_1daf3c:
    // 0x1daf3c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1daf40:
    if (ctx->pc == 0x1DAF40u) {
        ctx->pc = 0x1DAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF3Cu;
        // 0x1daf40: 0xad240018  sw          $a0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF44u;
        goto label_1daf44;
    }
    ctx->pc = 0x1DAF3Cu;
    {
        const bool branch_taken_0x1daf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF3Cu;
        // 0x1daf40: 0xad240018  sw          $a0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf3c) {
            ctx->pc = 0x1DAFB8u;
            goto label_1dafb8;
        }
    }
    ctx->pc = 0x1DAF44u;
label_1daf44:
    // 0x1daf44: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_1daf48:
    // 0x1daf48: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1daf4c:
    if (ctx->pc == 0x1DAF4Cu) {
        ctx->pc = 0x1DAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF48u;
        // 0x1daf4c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF50u;
        goto label_1daf50;
    }
    ctx->pc = 0x1DAF48u;
    {
        const bool branch_taken_0x1daf48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF48u;
        // 0x1daf4c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf48) {
            ctx->pc = 0x1DAF70u;
            goto label_1daf70;
        }
    }
    ctx->pc = 0x1DAF50u;
label_1daf50:
    // 0x1daf50: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1daf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1daf54:
    // 0x1daf54: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1daf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1daf58:
    // 0x1daf58: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1daf58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1daf5c:
    // 0x1daf5c: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x1daf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1daf60:
    // 0x1daf60: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x1daf60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_1daf64:
    // 0x1daf64: 0x10000005  b           . + 4 + (0x5 << 2)
label_1daf68:
    if (ctx->pc == 0x1DAF68u) {
        ctx->pc = 0x1DAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF64u;
        // 0x1daf68: 0xae0302d8  sw          $v1, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF6Cu;
        goto label_1daf6c;
    }
    ctx->pc = 0x1DAF64u;
    {
        const bool branch_taken_0x1daf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF64u;
        // 0x1daf68: 0xae0302d8  sw          $v1, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf64) {
            ctx->pc = 0x1DAF7Cu;
            goto label_1daf7c;
        }
    }
    ctx->pc = 0x1DAF6Cu;
label_1daf6c:
    // 0x1daf6c: 0x0  nop
    ctx->pc = 0x1daf6cu;
    // NOP
label_1daf70:
    // 0x1daf70: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x1daf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1daf74:
    // 0x1daf74: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1daf74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1daf78:
    // 0x1daf78: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1daf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1daf7c:
    // 0x1daf7c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1daf7cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1daf80:
    // 0x1daf80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1daf80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1daf84:
    // 0x1daf84: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1daf84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1daf88:
    // 0x1daf88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1daf88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1daf8c:
    // 0x1daf8c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1daf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1daf90:
    // 0x1daf90: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1daf90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1daf94:
    // 0x1daf94: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1daf94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1daf98:
    // 0x1daf98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1daf98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1daf9c:
    // 0x1daf9c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1daf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dafa0:
    // 0x1dafa0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1dafa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dafa4:
    // 0x1dafa4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1dafa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1dafa8:
    // 0x1dafa8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dafa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dafac:
    // 0x1dafac: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1dafacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1dafb0:
    // 0x1dafb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dafb4:
    if (ctx->pc == 0x1DAFB4u) {
        ctx->pc = 0x1DAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFB0u;
        // 0x1dafb4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAFB8u;
        goto label_1dafb8;
    }
    ctx->pc = 0x1DAFB0u;
    {
        const bool branch_taken_0x1dafb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFB0u;
        // 0x1dafb4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafb0) {
            ctx->pc = 0x1DAFC8u;
            goto label_1dafc8;
        }
    }
    ctx->pc = 0x1DAFB8u;
label_1dafb8:
    // 0x1dafb8: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x1dafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1dafbc:
    // 0x1dafbc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1dafbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1dafc0:
    // 0x1dafc0: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1dafc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1dafc4:
    // 0x1dafc4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1dafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1dafc8:
    // 0x1dafc8: 0x8d2a0018  lw          $t2, 0x18($t1)
    ctx->pc = 0x1dafc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_1dafcc:
    // 0x1dafcc: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x1dafccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_1dafd0:
    // 0x1dafd0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1dafd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1dafd4:
    // 0x1dafd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dafd8:
    if (ctx->pc == 0x1DAFD8u) {
        ctx->pc = 0x1DAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFD4u;
        // 0x1dafd8: 0x8e020418  lw          $v0, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAFDCu;
        goto label_1dafdc;
    }
    ctx->pc = 0x1DAFD4u;
    {
        const bool branch_taken_0x1dafd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFD4u;
        // 0x1dafd8: 0x8e020418  lw          $v0, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafd4) {
            ctx->pc = 0x1DAFF8u;
            goto label_1daff8;
        }
    }
    ctx->pc = 0x1DAFDCu;
label_1dafdc:
    // 0x1dafdc: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x1dafdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
label_1dafe0:
    // 0x1dafe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dafe4:
    // 0x1dafe4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1dafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1dafe8:
    // 0x1dafe8: 0xae020418  sw          $v0, 0x418($s0)
    ctx->pc = 0x1dafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 2));
label_1dafec:
    // 0x1dafec: 0x10000009  b           . + 4 + (0x9 << 2)
label_1daff0:
    if (ctx->pc == 0x1DAFF0u) {
        ctx->pc = 0x1DAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFECu;
        // 0x1daff0: 0xad230068  sw          $v1, 0x68($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAFF4u;
        goto label_1daff4;
    }
    ctx->pc = 0x1DAFECu;
    {
        const bool branch_taken_0x1dafec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFECu;
        // 0x1daff0: 0xad230068  sw          $v1, 0x68($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafec) {
            ctx->pc = 0x1DB014u;
            goto label_1db014;
        }
    }
    ctx->pc = 0x1DAFF4u;
label_1daff4:
    // 0x1daff4: 0x0  nop
    ctx->pc = 0x1daff4u;
    // NOP
label_1daff8:
    // 0x1daff8: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x1daff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_1daffc:
    // 0x1daffc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1daffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1db000:
    // 0x1db000: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1db000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1db004:
    // 0x1db004: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1db008:
    // 0x1db008: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1db00c:
    // 0x1db00c: 0xae03041c  sw          $v1, 0x41C($s0)
    ctx->pc = 0x1db00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 3));
label_1db010:
    // 0x1db010: 0xad220068  sw          $v0, 0x68($t1)
    ctx->pc = 0x1db010u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 2));
label_1db014:
    // 0x1db014: 0x2542fffe  addiu       $v0, $t2, -0x2
    ctx->pc = 0x1db014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
label_1db018:
    // 0x1db018: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1db018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1db01c:
    // 0x1db01c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1db020:
    if (ctx->pc == 0x1DB020u) {
        ctx->pc = 0x1DB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB01Cu;
        // 0x1db020: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB024u;
        goto label_1db024;
    }
    ctx->pc = 0x1DB01Cu;
    {
        const bool branch_taken_0x1db01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB01Cu;
        // 0x1db020: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db01c) {
            ctx->pc = 0x1DB124u;
            goto label_1db124;
        }
    }
    ctx->pc = 0x1DB024u;
label_1db024:
    // 0x1db024: 0x2609030c  addiu       $t1, $s0, 0x30C
    ctx->pc = 0x1db024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 780));
label_1db028:
    // 0x1db028: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1db028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1db02c:
    // 0x1db02c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1db02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1db030:
    // 0x1db030: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1db034:
    if (ctx->pc == 0x1DB034u) {
        ctx->pc = 0x1DB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB030u;
        // 0x1db034: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB038u;
        goto label_1db038;
    }
    ctx->pc = 0x1DB030u;
    {
        const bool branch_taken_0x1db030 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB030u;
        // 0x1db034: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db030) {
            ctx->pc = 0x1DB080u;
            goto label_1db080;
        }
    }
    ctx->pc = 0x1DB038u;
label_1db038:
    // 0x1db038: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1db038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1db03c:
    // 0x1db03c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1db03cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db040:
    // 0x1db040: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db044:
    // 0x1db044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db048:
    // 0x1db048: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db04c:
    // 0x1db04c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db050:
    // 0x1db050: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db050u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db054:
    // 0x1db054: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1db054u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db058:
    // 0x1db058: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1db058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1db05c:
    // 0x1db05c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db05cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db060:
    // 0x1db060: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db064:
    // 0x1db064: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db068:
    // 0x1db068: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1db068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1db06c:
    // 0x1db06c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db070:
    // 0x1db070: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db070u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db074:
    // 0x1db074: 0x10000004  b           . + 4 + (0x4 << 2)
label_1db078:
    if (ctx->pc == 0x1DB078u) {
        ctx->pc = 0x1DB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB074u;
        // 0x1db078: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB07Cu;
        goto label_1db07c;
    }
    ctx->pc = 0x1DB074u;
    {
        const bool branch_taken_0x1db074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB074u;
        // 0x1db078: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db074) {
            ctx->pc = 0x1DB088u;
            goto label_1db088;
        }
    }
    ctx->pc = 0x1DB07Cu;
label_1db07c:
    // 0x1db07c: 0x0  nop
    ctx->pc = 0x1db07cu;
    // NOP
label_1db080:
    // 0x1db080: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1db080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1db084:
    // 0x1db084: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1db084u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1db088:
    // 0x1db088: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x1db088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_1db08c:
    // 0x1db08c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1db090:
    if (ctx->pc == 0x1DB090u) {
        ctx->pc = 0x1DB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB08Cu;
        // 0x1db090: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB094u;
        goto label_1db094;
    }
    ctx->pc = 0x1DB08Cu;
    {
        const bool branch_taken_0x1db08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB08Cu;
        // 0x1db090: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db08c) {
            ctx->pc = 0x1DB0F8u;
            goto label_1db0f8;
        }
    }
    ctx->pc = 0x1DB094u;
label_1db094:
    // 0x1db094: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x1db094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_1db098:
    // 0x1db098: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1db09c:
    if (ctx->pc == 0x1DB09Cu) {
        ctx->pc = 0x1DB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB098u;
        // 0x1db09c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0A0u;
        goto label_1db0a0;
    }
    ctx->pc = 0x1DB098u;
    {
        const bool branch_taken_0x1db098 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB098u;
        // 0x1db09c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db098) {
            ctx->pc = 0x1DB0B8u;
            goto label_1db0b8;
        }
    }
    ctx->pc = 0x1DB0A0u;
label_1db0a0:
    // 0x1db0a0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1db0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1db0a4:
    // 0x1db0a4: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1db0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1db0a8:
    // 0x1db0a8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1db0a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1db0ac:
    // 0x1db0ac: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x1db0acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_1db0b0:
    // 0x1db0b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1db0b4:
    if (ctx->pc == 0x1DB0B4u) {
        ctx->pc = 0x1DB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0B0u;
        // 0x1db0b4: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0B8u;
        goto label_1db0b8;
    }
    ctx->pc = 0x1DB0B0u;
    {
        const bool branch_taken_0x1db0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0B0u;
        // 0x1db0b4: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0b0) {
            ctx->pc = 0x1DB0BCu;
            goto label_1db0bc;
        }
    }
    ctx->pc = 0x1DB0B8u;
label_1db0b8:
    // 0x1db0b8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1db0b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1db0bc:
    // 0x1db0bc: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1db0bcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db0c0:
    // 0x1db0c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db0c4:
    // 0x1db0c4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db0c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db0c8:
    // 0x1db0c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db0c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db0cc:
    // 0x1db0cc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db0d0:
    // 0x1db0d0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1db0d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db0d4:
    // 0x1db0d4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1db0d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1db0d8:
    // 0x1db0d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db0dc:
    // 0x1db0dc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db0e0:
    // 0x1db0e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db0e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db0e4:
    // 0x1db0e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1db0e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1db0e8:
    // 0x1db0e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db0ec:
    // 0x1db0ec: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db0f0:
    // 0x1db0f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1db0f4:
    if (ctx->pc == 0x1DB0F4u) {
        ctx->pc = 0x1DB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0F0u;
        // 0x1db0f4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0F8u;
        goto label_1db0f8;
    }
    ctx->pc = 0x1DB0F0u;
    {
        const bool branch_taken_0x1db0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0F0u;
        // 0x1db0f4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0f0) {
            ctx->pc = 0x1DB100u;
            goto label_1db100;
        }
    }
    ctx->pc = 0x1DB0F8u;
label_1db0f8:
    // 0x1db0f8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1db0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1db0fc:
    // 0x1db0fc: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1db0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1db100:
    // 0x1db100: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1db100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1db104:
    // 0x1db104: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1db104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1db108:
    // 0x1db108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1db108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db10c:
    // 0x1db10c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1db10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1db110:
    // 0x1db110: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1db110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1db114:
    // 0x1db114: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x1db114u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_1db118:
    // 0x1db118: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x1db118u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_1db11c:
    // 0x1db11c: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x1db11cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_1db120:
    // 0x1db120: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db124:
    // 0x1db124: 0x55420043  bnel        $t2, $v0, . + 4 + (0x43 << 2)
label_1db128:
    if (ctx->pc == 0x1DB128u) {
        ctx->pc = 0x1DB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB124u;
        // 0x1db128: 0x8e0202f8  lw          $v0, 0x2F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB12Cu;
        goto label_1db12c;
    }
    ctx->pc = 0x1DB124u;
    {
        const bool branch_taken_0x1db124 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db124) {
            ctx->pc = 0x1DB128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB124u;
            // 0x1db128: 0x8e0202f8  lw          $v0, 0x2F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB234u;
            goto label_1db234;
        }
    }
    ctx->pc = 0x1DB12Cu;
label_1db12c:
    // 0x1db12c: 0x26090330  addiu       $t1, $s0, 0x330
    ctx->pc = 0x1db12cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1db130:
    // 0x1db130: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1db134:
    // 0x1db134: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1db134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1db138:
    // 0x1db138: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1db13c:
    if (ctx->pc == 0x1DB13Cu) {
        ctx->pc = 0x1DB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB138u;
        // 0x1db13c: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB140u;
        goto label_1db140;
    }
    ctx->pc = 0x1DB138u;
    {
        const bool branch_taken_0x1db138 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB138u;
        // 0x1db13c: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db138) {
            ctx->pc = 0x1DB188u;
            goto label_1db188;
        }
    }
    ctx->pc = 0x1DB140u;
label_1db140:
    // 0x1db140: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1db140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1db144:
    // 0x1db144: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1db144u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db148:
    // 0x1db148: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db14c:
    // 0x1db14c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db150:
    // 0x1db150: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db150u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db154:
    // 0x1db154: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db158:
    // 0x1db158: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db158u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db15c:
    // 0x1db15c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1db15cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db160:
    // 0x1db160: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1db160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1db164:
    // 0x1db164: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db168:
    // 0x1db168: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db168u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db16c:
    // 0x1db16c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db16cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db170:
    // 0x1db170: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1db170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1db174:
    // 0x1db174: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db178:
    // 0x1db178: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db178u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db17c:
    // 0x1db17c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1db180:
    if (ctx->pc == 0x1DB180u) {
        ctx->pc = 0x1DB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB17Cu;
        // 0x1db180: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB184u;
        goto label_1db184;
    }
    ctx->pc = 0x1DB17Cu;
    {
        const bool branch_taken_0x1db17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB17Cu;
        // 0x1db180: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db17c) {
            ctx->pc = 0x1DB190u;
            goto label_1db190;
        }
    }
    ctx->pc = 0x1DB184u;
label_1db184:
    // 0x1db184: 0x0  nop
    ctx->pc = 0x1db184u;
    // NOP
label_1db188:
    // 0x1db188: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1db188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1db18c:
    // 0x1db18c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1db18cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1db190:
    // 0x1db190: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x1db190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_1db194:
    // 0x1db194: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1db198:
    if (ctx->pc == 0x1DB198u) {
        ctx->pc = 0x1DB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB194u;
        // 0x1db198: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB19Cu;
        goto label_1db19c;
    }
    ctx->pc = 0x1DB194u;
    {
        const bool branch_taken_0x1db194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB194u;
        // 0x1db198: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db194) {
            ctx->pc = 0x1DB208u;
            goto label_1db208;
        }
    }
    ctx->pc = 0x1DB19Cu;
label_1db19c:
    // 0x1db19c: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x1db19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_1db1a0:
    // 0x1db1a0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1db1a4:
    if (ctx->pc == 0x1DB1A4u) {
        ctx->pc = 0x1DB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1A0u;
        // 0x1db1a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB1A8u;
        goto label_1db1a8;
    }
    ctx->pc = 0x1DB1A0u;
    {
        const bool branch_taken_0x1db1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1A0u;
        // 0x1db1a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1a0) {
            ctx->pc = 0x1DB1C0u;
            goto label_1db1c0;
        }
    }
    ctx->pc = 0x1DB1A8u;
label_1db1a8:
    // 0x1db1a8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1db1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1db1ac:
    // 0x1db1ac: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1db1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1db1b0:
    // 0x1db1b0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1db1b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1db1b4:
    // 0x1db1b4: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x1db1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_1db1b8:
    // 0x1db1b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1db1bc:
    if (ctx->pc == 0x1DB1BCu) {
        ctx->pc = 0x1DB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1B8u;
        // 0x1db1bc: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB1C0u;
        goto label_1db1c0;
    }
    ctx->pc = 0x1DB1B8u;
    {
        const bool branch_taken_0x1db1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1B8u;
        // 0x1db1bc: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1b8) {
            ctx->pc = 0x1DB1C4u;
            goto label_1db1c4;
        }
    }
    ctx->pc = 0x1DB1C0u;
label_1db1c0:
    // 0x1db1c0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1db1c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1db1c4:
    // 0x1db1c4: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1db1c4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db1c8:
    // 0x1db1c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db1cc:
    // 0x1db1cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db1ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db1d0:
    // 0x1db1d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db1d4:
    // 0x1db1d4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db1d8:
    // 0x1db1d8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1db1d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db1dc:
    // 0x1db1dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1db1dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1db1e0:
    // 0x1db1e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db1e4:
    // 0x1db1e4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db1e8:
    // 0x1db1e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db1e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db1ec:
    // 0x1db1ec: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1db1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1db1f0:
    // 0x1db1f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db1f4:
    // 0x1db1f4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db1f8:
    // 0x1db1f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1db1fc:
    if (ctx->pc == 0x1DB1FCu) {
        ctx->pc = 0x1DB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1F8u;
        // 0x1db1fc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB200u;
        goto label_1db200;
    }
    ctx->pc = 0x1DB1F8u;
    {
        const bool branch_taken_0x1db1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1F8u;
        // 0x1db1fc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1f8) {
            ctx->pc = 0x1DB210u;
            goto label_1db210;
        }
    }
    ctx->pc = 0x1DB200u;
label_1db200:
    // 0x1db200: 0x10000031  b           . + 4 + (0x31 << 2)
label_1db204:
    if (ctx->pc == 0x1DB204u) {
        ctx->pc = 0x1DB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB200u;
        // 0x1db204: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB208u;
        goto label_1db208;
    }
    ctx->pc = 0x1DB200u;
    {
        const bool branch_taken_0x1db200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB200u;
        // 0x1db204: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db200) {
            ctx->pc = 0x1DB2C8u;
            goto label_1db2c8;
        }
    }
    ctx->pc = 0x1DB208u;
label_1db208:
    // 0x1db208: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1db208u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1db20c:
    // 0x1db20c: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1db20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1db210:
    // 0x1db210: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1db210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1db214:
    // 0x1db214: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1db214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1db218:
    // 0x1db218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1db218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db21c:
    // 0x1db21c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1db21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1db220:
    // 0x1db220: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1db220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1db224:
    // 0x1db224: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x1db224u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_1db228:
    // 0x1db228: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x1db228u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_1db22c:
    // 0x1db22c: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x1db22cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_1db230:
    // 0x1db230: 0x8e0202f8  lw          $v0, 0x2F8($s0)
    ctx->pc = 0x1db230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
label_1db234:
    // 0x1db234: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x1db234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
label_1db238:
    // 0x1db238: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1db23c:
    if (ctx->pc == 0x1DB23Cu) {
        ctx->pc = 0x1DB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB238u;
        // 0x1db23c: 0x8e0903a8  lw          $t1, 0x3A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB240u;
        goto label_1db240;
    }
    ctx->pc = 0x1DB238u;
    {
        const bool branch_taken_0x1db238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB238u;
        // 0x1db23c: 0x8e0903a8  lw          $t1, 0x3A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db238) {
            ctx->pc = 0x1DB2B0u;
            goto label_1db2b0;
        }
    }
    ctx->pc = 0x1DB240u;
label_1db240:
    // 0x1db240: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1db240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1db244:
    // 0x1db244: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1db248:
    if (ctx->pc == 0x1DB248u) {
        ctx->pc = 0x1DB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB244u;
        // 0x1db248: 0x73a40  sll         $a3, $a3, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB24Cu;
        goto label_1db24c;
    }
    ctx->pc = 0x1DB244u;
    {
        const bool branch_taken_0x1db244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db244) {
            ctx->pc = 0x1DB248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB244u;
            // 0x1db248: 0x73a40  sll         $a3, $a3, 9 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB28Cu;
            goto label_1db28c;
        }
    }
    ctx->pc = 0x1DB24Cu;
label_1db24c:
    // 0x1db24c: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1db24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1db250:
    // 0x1db250: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x1db250u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_1db254:
    // 0x1db254: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1db254u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db258:
    // 0x1db258: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db25c:
    // 0x1db25c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db25cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db260:
    // 0x1db260: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db264:
    // 0x1db264: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db264u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db268:
    // 0x1db268: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1db268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db26c:
    // 0x1db26c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1db26cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1db270:
    // 0x1db270: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db274:
    // 0x1db274: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db274u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db278:
    // 0x1db278: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1db278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1db27c:
    // 0x1db27c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1db27cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1db280:
    // 0x1db280: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1db280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1db284:
    // 0x1db284: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1db284u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1db288:
    // 0x1db288: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1db288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1db28c:
    // 0x1db28c: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x1db28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1db290:
    // 0x1db290: 0x8e0403ac  lw          $a0, 0x3AC($s0)
    ctx->pc = 0x1db290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
label_1db294:
    // 0x1db294: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1db294u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1db298:
    // 0x1db298: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1db298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1db29c:
    // 0x1db29c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1db29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1db2a0:
    // 0x1db2a0: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x1db2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1db2a4:
    // 0x1db2a4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1db2a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1db2a8:
    // 0x1db2a8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_1db2ac:
    if (ctx->pc == 0x1DB2ACu) {
        ctx->pc = 0x1DB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2A8u;
        // 0x1db2ac: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2B0u;
        goto label_1db2b0;
    }
    ctx->pc = 0x1DB2A8u;
    {
        const bool branch_taken_0x1db2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2A8u;
        // 0x1db2ac: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2a8) {
            ctx->pc = 0x1DB320u;
            goto label_1db320;
        }
    }
    ctx->pc = 0x1DB2B0u;
label_1db2b0:
    // 0x1db2b0: 0x4e2ffe3  bltzl       $a3, . + 4 + (-0x1D << 2)
label_1db2b4:
    if (ctx->pc == 0x1DB2B4u) {
        ctx->pc = 0x1DB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2B0u;
        // 0x1db2b4: 0x24a50009  addiu       $a1, $a1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2B8u;
        goto label_1db2b8;
    }
    ctx->pc = 0x1DB2B0u;
    {
        const bool branch_taken_0x1db2b0 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x1db2b0) {
            ctx->pc = 0x1DB2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB2B0u;
            // 0x1db2b4: 0x24a50009  addiu       $a1, $a1, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db240;
        }
    }
    ctx->pc = 0x1DB2B8u;
label_1db2b8:
    // 0x1db2b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1db2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1db2bc:
    // 0x1db2bc: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1db2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1db2c0:
    // 0x1db2c0: 0x5040ffcf  beql        $v0, $zero, . + 4 + (-0x31 << 2)
label_1db2c4:
    if (ctx->pc == 0x1DB2C4u) {
        ctx->pc = 0x1DB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2C0u;
        // 0x1db2c4: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2C8u;
        goto label_1db2c8;
    }
    ctx->pc = 0x1DB2C0u;
    {
        const bool branch_taken_0x1db2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db2c0) {
            ctx->pc = 0x1DB2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB2C0u;
            // 0x1db2c4: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db200;
        }
    }
    ctx->pc = 0x1DB2C8u;
label_1db2c8:
    // 0x1db2c8: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x1db2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1db2cc:
    // 0x1db2cc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1db2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db2d0:
    // 0x1db2d0: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x1db2d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_1db2d4:
    // 0x1db2d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db2d8:
    // 0x1db2d8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1db2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1db2dc:
    // 0x1db2dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1db2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db2e0:
    // 0x1db2e0: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x1db2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_1db2e4:
    // 0x1db2e4: 0xc07337e  jal         func_1CCDF8
label_1db2e8:
    if (ctx->pc == 0x1DB2E8u) {
        ctx->pc = 0x1DB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2E4u;
        // 0x1db2e8: 0xa92823  subu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2ECu;
        goto label_1db2ec;
    }
    ctx->pc = 0x1DB2E4u;
    SET_GPR_U32(ctx, 31, 0x1DB2ECu);
    ctx->pc = 0x1DB2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2E4u;
    // 0x1db2e8: 0xa92823  subu        $a1, $a1, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1DB2E4u, 0x1DB2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2ECu;
label_1db2ec:
    // 0x1db2ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1db2f0:
    // 0x1db2f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1db2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db2f4:
    // 0x1db2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db2f8:
    // 0x1db2f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1db2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1db2fc:
    // 0x1db2fc: 0x40f809  jalr        $v0
label_1db300:
    if (ctx->pc == 0x1DB300u) {
        ctx->pc = 0x1DB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2FCu;
        // 0x1db300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB304u;
        goto label_1db304;
    }
    ctx->pc = 0x1DB2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB304u);
        ctx->pc = 0x1DB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2FCu;
        // 0x1db300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2FCu, 0x1DB304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB304u;
label_1db304:
    // 0x1db304: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1db308:
    // 0x1db308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db30c:
    // 0x1db30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db310:
    // 0x1db310: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1db310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1db314:
    // 0x1db314: 0x40f809  jalr        $v0
label_1db318:
    if (ctx->pc == 0x1DB318u) {
        ctx->pc = 0x1DB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB314u;
        // 0x1db318: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB31Cu;
        goto label_1db31c;
    }
    ctx->pc = 0x1DB314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB31Cu);
        ctx->pc = 0x1DB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB314u;
        // 0x1db318: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB314u, 0x1DB31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB31Cu;
label_1db31c:
    // 0x1db31c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db320:
    // 0x1db320: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1db320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db324:
    // 0x1db324: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1db324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1db328:
    // 0x1db328: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1db328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1db32c:
    // 0x1db32c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1db32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1db330:
    // 0x1db330: 0x3e00008  jr          $ra
label_1db334:
    if (ctx->pc == 0x1DB334u) {
        ctx->pc = 0x1DB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB330u;
        // 0x1db334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB338u;
        goto label_fallthrough_0x1db330;
    }
    ctx->pc = 0x1DB330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB330u;
        // 0x1db334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db330:
    ctx->pc = 0x1DB338u;
}
