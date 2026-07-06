#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262EE0
// Address: 0x262ee0 - 0x263678
void sub_00262EE0_0x262ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262EE0_0x262ee0");
#endif

    switch (ctx->pc) {
        case 0x262ee0u: goto label_262ee0;
        case 0x262ee4u: goto label_262ee4;
        case 0x262ee8u: goto label_262ee8;
        case 0x262eecu: goto label_262eec;
        case 0x262ef0u: goto label_262ef0;
        case 0x262ef4u: goto label_262ef4;
        case 0x262ef8u: goto label_262ef8;
        case 0x262efcu: goto label_262efc;
        case 0x262f00u: goto label_262f00;
        case 0x262f04u: goto label_262f04;
        case 0x262f08u: goto label_262f08;
        case 0x262f0cu: goto label_262f0c;
        case 0x262f10u: goto label_262f10;
        case 0x262f14u: goto label_262f14;
        case 0x262f18u: goto label_262f18;
        case 0x262f1cu: goto label_262f1c;
        case 0x262f20u: goto label_262f20;
        case 0x262f24u: goto label_262f24;
        case 0x262f28u: goto label_262f28;
        case 0x262f2cu: goto label_262f2c;
        case 0x262f30u: goto label_262f30;
        case 0x262f34u: goto label_262f34;
        case 0x262f38u: goto label_262f38;
        case 0x262f3cu: goto label_262f3c;
        case 0x262f40u: goto label_262f40;
        case 0x262f44u: goto label_262f44;
        case 0x262f48u: goto label_262f48;
        case 0x262f4cu: goto label_262f4c;
        case 0x262f50u: goto label_262f50;
        case 0x262f54u: goto label_262f54;
        case 0x262f58u: goto label_262f58;
        case 0x262f5cu: goto label_262f5c;
        case 0x262f60u: goto label_262f60;
        case 0x262f64u: goto label_262f64;
        case 0x262f68u: goto label_262f68;
        case 0x262f6cu: goto label_262f6c;
        case 0x262f70u: goto label_262f70;
        case 0x262f74u: goto label_262f74;
        case 0x262f78u: goto label_262f78;
        case 0x262f7cu: goto label_262f7c;
        case 0x262f80u: goto label_262f80;
        case 0x262f84u: goto label_262f84;
        case 0x262f88u: goto label_262f88;
        case 0x262f8cu: goto label_262f8c;
        case 0x262f90u: goto label_262f90;
        case 0x262f94u: goto label_262f94;
        case 0x262f98u: goto label_262f98;
        case 0x262f9cu: goto label_262f9c;
        case 0x262fa0u: goto label_262fa0;
        case 0x262fa4u: goto label_262fa4;
        case 0x262fa8u: goto label_262fa8;
        case 0x262facu: goto label_262fac;
        case 0x262fb0u: goto label_262fb0;
        case 0x262fb4u: goto label_262fb4;
        case 0x262fb8u: goto label_262fb8;
        case 0x262fbcu: goto label_262fbc;
        case 0x262fc0u: goto label_262fc0;
        case 0x262fc4u: goto label_262fc4;
        case 0x262fc8u: goto label_262fc8;
        case 0x262fccu: goto label_262fcc;
        case 0x262fd0u: goto label_262fd0;
        case 0x262fd4u: goto label_262fd4;
        case 0x262fd8u: goto label_262fd8;
        case 0x262fdcu: goto label_262fdc;
        case 0x262fe0u: goto label_262fe0;
        case 0x262fe4u: goto label_262fe4;
        case 0x262fe8u: goto label_262fe8;
        case 0x262fecu: goto label_262fec;
        case 0x262ff0u: goto label_262ff0;
        case 0x262ff4u: goto label_262ff4;
        case 0x262ff8u: goto label_262ff8;
        case 0x262ffcu: goto label_262ffc;
        case 0x263000u: goto label_263000;
        case 0x263004u: goto label_263004;
        case 0x263008u: goto label_263008;
        case 0x26300cu: goto label_26300c;
        case 0x263010u: goto label_263010;
        case 0x263014u: goto label_263014;
        case 0x263018u: goto label_263018;
        case 0x26301cu: goto label_26301c;
        case 0x263020u: goto label_263020;
        case 0x263024u: goto label_263024;
        case 0x263028u: goto label_263028;
        case 0x26302cu: goto label_26302c;
        case 0x263030u: goto label_263030;
        case 0x263034u: goto label_263034;
        case 0x263038u: goto label_263038;
        case 0x26303cu: goto label_26303c;
        case 0x263040u: goto label_263040;
        case 0x263044u: goto label_263044;
        case 0x263048u: goto label_263048;
        case 0x26304cu: goto label_26304c;
        case 0x263050u: goto label_263050;
        case 0x263054u: goto label_263054;
        case 0x263058u: goto label_263058;
        case 0x26305cu: goto label_26305c;
        case 0x263060u: goto label_263060;
        case 0x263064u: goto label_263064;
        case 0x263068u: goto label_263068;
        case 0x26306cu: goto label_26306c;
        case 0x263070u: goto label_263070;
        case 0x263074u: goto label_263074;
        case 0x263078u: goto label_263078;
        case 0x26307cu: goto label_26307c;
        case 0x263080u: goto label_263080;
        case 0x263084u: goto label_263084;
        case 0x263088u: goto label_263088;
        case 0x26308cu: goto label_26308c;
        case 0x263090u: goto label_263090;
        case 0x263094u: goto label_263094;
        case 0x263098u: goto label_263098;
        case 0x26309cu: goto label_26309c;
        case 0x2630a0u: goto label_2630a0;
        case 0x2630a4u: goto label_2630a4;
        case 0x2630a8u: goto label_2630a8;
        case 0x2630acu: goto label_2630ac;
        case 0x2630b0u: goto label_2630b0;
        case 0x2630b4u: goto label_2630b4;
        case 0x2630b8u: goto label_2630b8;
        case 0x2630bcu: goto label_2630bc;
        case 0x2630c0u: goto label_2630c0;
        case 0x2630c4u: goto label_2630c4;
        case 0x2630c8u: goto label_2630c8;
        case 0x2630ccu: goto label_2630cc;
        case 0x2630d0u: goto label_2630d0;
        case 0x2630d4u: goto label_2630d4;
        case 0x2630d8u: goto label_2630d8;
        case 0x2630dcu: goto label_2630dc;
        case 0x2630e0u: goto label_2630e0;
        case 0x2630e4u: goto label_2630e4;
        case 0x2630e8u: goto label_2630e8;
        case 0x2630ecu: goto label_2630ec;
        case 0x2630f0u: goto label_2630f0;
        case 0x2630f4u: goto label_2630f4;
        case 0x2630f8u: goto label_2630f8;
        case 0x2630fcu: goto label_2630fc;
        case 0x263100u: goto label_263100;
        case 0x263104u: goto label_263104;
        case 0x263108u: goto label_263108;
        case 0x26310cu: goto label_26310c;
        case 0x263110u: goto label_263110;
        case 0x263114u: goto label_263114;
        case 0x263118u: goto label_263118;
        case 0x26311cu: goto label_26311c;
        case 0x263120u: goto label_263120;
        case 0x263124u: goto label_263124;
        case 0x263128u: goto label_263128;
        case 0x26312cu: goto label_26312c;
        case 0x263130u: goto label_263130;
        case 0x263134u: goto label_263134;
        case 0x263138u: goto label_263138;
        case 0x26313cu: goto label_26313c;
        case 0x263140u: goto label_263140;
        case 0x263144u: goto label_263144;
        case 0x263148u: goto label_263148;
        case 0x26314cu: goto label_26314c;
        case 0x263150u: goto label_263150;
        case 0x263154u: goto label_263154;
        case 0x263158u: goto label_263158;
        case 0x26315cu: goto label_26315c;
        case 0x263160u: goto label_263160;
        case 0x263164u: goto label_263164;
        case 0x263168u: goto label_263168;
        case 0x26316cu: goto label_26316c;
        case 0x263170u: goto label_263170;
        case 0x263174u: goto label_263174;
        case 0x263178u: goto label_263178;
        case 0x26317cu: goto label_26317c;
        case 0x263180u: goto label_263180;
        case 0x263184u: goto label_263184;
        case 0x263188u: goto label_263188;
        case 0x26318cu: goto label_26318c;
        case 0x263190u: goto label_263190;
        case 0x263194u: goto label_263194;
        case 0x263198u: goto label_263198;
        case 0x26319cu: goto label_26319c;
        case 0x2631a0u: goto label_2631a0;
        case 0x2631a4u: goto label_2631a4;
        case 0x2631a8u: goto label_2631a8;
        case 0x2631acu: goto label_2631ac;
        case 0x2631b0u: goto label_2631b0;
        case 0x2631b4u: goto label_2631b4;
        case 0x2631b8u: goto label_2631b8;
        case 0x2631bcu: goto label_2631bc;
        case 0x2631c0u: goto label_2631c0;
        case 0x2631c4u: goto label_2631c4;
        case 0x2631c8u: goto label_2631c8;
        case 0x2631ccu: goto label_2631cc;
        case 0x2631d0u: goto label_2631d0;
        case 0x2631d4u: goto label_2631d4;
        case 0x2631d8u: goto label_2631d8;
        case 0x2631dcu: goto label_2631dc;
        case 0x2631e0u: goto label_2631e0;
        case 0x2631e4u: goto label_2631e4;
        case 0x2631e8u: goto label_2631e8;
        case 0x2631ecu: goto label_2631ec;
        case 0x2631f0u: goto label_2631f0;
        case 0x2631f4u: goto label_2631f4;
        case 0x2631f8u: goto label_2631f8;
        case 0x2631fcu: goto label_2631fc;
        case 0x263200u: goto label_263200;
        case 0x263204u: goto label_263204;
        case 0x263208u: goto label_263208;
        case 0x26320cu: goto label_26320c;
        case 0x263210u: goto label_263210;
        case 0x263214u: goto label_263214;
        case 0x263218u: goto label_263218;
        case 0x26321cu: goto label_26321c;
        case 0x263220u: goto label_263220;
        case 0x263224u: goto label_263224;
        case 0x263228u: goto label_263228;
        case 0x26322cu: goto label_26322c;
        case 0x263230u: goto label_263230;
        case 0x263234u: goto label_263234;
        case 0x263238u: goto label_263238;
        case 0x26323cu: goto label_26323c;
        case 0x263240u: goto label_263240;
        case 0x263244u: goto label_263244;
        case 0x263248u: goto label_263248;
        case 0x26324cu: goto label_26324c;
        case 0x263250u: goto label_263250;
        case 0x263254u: goto label_263254;
        case 0x263258u: goto label_263258;
        case 0x26325cu: goto label_26325c;
        case 0x263260u: goto label_263260;
        case 0x263264u: goto label_263264;
        case 0x263268u: goto label_263268;
        case 0x26326cu: goto label_26326c;
        case 0x263270u: goto label_263270;
        case 0x263274u: goto label_263274;
        case 0x263278u: goto label_263278;
        case 0x26327cu: goto label_26327c;
        case 0x263280u: goto label_263280;
        case 0x263284u: goto label_263284;
        case 0x263288u: goto label_263288;
        case 0x26328cu: goto label_26328c;
        case 0x263290u: goto label_263290;
        case 0x263294u: goto label_263294;
        case 0x263298u: goto label_263298;
        case 0x26329cu: goto label_26329c;
        case 0x2632a0u: goto label_2632a0;
        case 0x2632a4u: goto label_2632a4;
        case 0x2632a8u: goto label_2632a8;
        case 0x2632acu: goto label_2632ac;
        case 0x2632b0u: goto label_2632b0;
        case 0x2632b4u: goto label_2632b4;
        case 0x2632b8u: goto label_2632b8;
        case 0x2632bcu: goto label_2632bc;
        case 0x2632c0u: goto label_2632c0;
        case 0x2632c4u: goto label_2632c4;
        case 0x2632c8u: goto label_2632c8;
        case 0x2632ccu: goto label_2632cc;
        case 0x2632d0u: goto label_2632d0;
        case 0x2632d4u: goto label_2632d4;
        case 0x2632d8u: goto label_2632d8;
        case 0x2632dcu: goto label_2632dc;
        case 0x2632e0u: goto label_2632e0;
        case 0x2632e4u: goto label_2632e4;
        case 0x2632e8u: goto label_2632e8;
        case 0x2632ecu: goto label_2632ec;
        case 0x2632f0u: goto label_2632f0;
        case 0x2632f4u: goto label_2632f4;
        case 0x2632f8u: goto label_2632f8;
        case 0x2632fcu: goto label_2632fc;
        case 0x263300u: goto label_263300;
        case 0x263304u: goto label_263304;
        case 0x263308u: goto label_263308;
        case 0x26330cu: goto label_26330c;
        case 0x263310u: goto label_263310;
        case 0x263314u: goto label_263314;
        case 0x263318u: goto label_263318;
        case 0x26331cu: goto label_26331c;
        case 0x263320u: goto label_263320;
        case 0x263324u: goto label_263324;
        case 0x263328u: goto label_263328;
        case 0x26332cu: goto label_26332c;
        case 0x263330u: goto label_263330;
        case 0x263334u: goto label_263334;
        case 0x263338u: goto label_263338;
        case 0x26333cu: goto label_26333c;
        case 0x263340u: goto label_263340;
        case 0x263344u: goto label_263344;
        case 0x263348u: goto label_263348;
        case 0x26334cu: goto label_26334c;
        case 0x263350u: goto label_263350;
        case 0x263354u: goto label_263354;
        case 0x263358u: goto label_263358;
        case 0x26335cu: goto label_26335c;
        case 0x263360u: goto label_263360;
        case 0x263364u: goto label_263364;
        case 0x263368u: goto label_263368;
        case 0x26336cu: goto label_26336c;
        case 0x263370u: goto label_263370;
        case 0x263374u: goto label_263374;
        case 0x263378u: goto label_263378;
        case 0x26337cu: goto label_26337c;
        case 0x263380u: goto label_263380;
        case 0x263384u: goto label_263384;
        case 0x263388u: goto label_263388;
        case 0x26338cu: goto label_26338c;
        case 0x263390u: goto label_263390;
        case 0x263394u: goto label_263394;
        case 0x263398u: goto label_263398;
        case 0x26339cu: goto label_26339c;
        case 0x2633a0u: goto label_2633a0;
        case 0x2633a4u: goto label_2633a4;
        case 0x2633a8u: goto label_2633a8;
        case 0x2633acu: goto label_2633ac;
        case 0x2633b0u: goto label_2633b0;
        case 0x2633b4u: goto label_2633b4;
        case 0x2633b8u: goto label_2633b8;
        case 0x2633bcu: goto label_2633bc;
        case 0x2633c0u: goto label_2633c0;
        case 0x2633c4u: goto label_2633c4;
        case 0x2633c8u: goto label_2633c8;
        case 0x2633ccu: goto label_2633cc;
        case 0x2633d0u: goto label_2633d0;
        case 0x2633d4u: goto label_2633d4;
        case 0x2633d8u: goto label_2633d8;
        case 0x2633dcu: goto label_2633dc;
        case 0x2633e0u: goto label_2633e0;
        case 0x2633e4u: goto label_2633e4;
        case 0x2633e8u: goto label_2633e8;
        case 0x2633ecu: goto label_2633ec;
        case 0x2633f0u: goto label_2633f0;
        case 0x2633f4u: goto label_2633f4;
        case 0x2633f8u: goto label_2633f8;
        case 0x2633fcu: goto label_2633fc;
        case 0x263400u: goto label_263400;
        case 0x263404u: goto label_263404;
        case 0x263408u: goto label_263408;
        case 0x26340cu: goto label_26340c;
        case 0x263410u: goto label_263410;
        case 0x263414u: goto label_263414;
        case 0x263418u: goto label_263418;
        case 0x26341cu: goto label_26341c;
        case 0x263420u: goto label_263420;
        case 0x263424u: goto label_263424;
        case 0x263428u: goto label_263428;
        case 0x26342cu: goto label_26342c;
        case 0x263430u: goto label_263430;
        case 0x263434u: goto label_263434;
        case 0x263438u: goto label_263438;
        case 0x26343cu: goto label_26343c;
        case 0x263440u: goto label_263440;
        case 0x263444u: goto label_263444;
        case 0x263448u: goto label_263448;
        case 0x26344cu: goto label_26344c;
        case 0x263450u: goto label_263450;
        case 0x263454u: goto label_263454;
        case 0x263458u: goto label_263458;
        case 0x26345cu: goto label_26345c;
        case 0x263460u: goto label_263460;
        case 0x263464u: goto label_263464;
        case 0x263468u: goto label_263468;
        case 0x26346cu: goto label_26346c;
        case 0x263470u: goto label_263470;
        case 0x263474u: goto label_263474;
        case 0x263478u: goto label_263478;
        case 0x26347cu: goto label_26347c;
        case 0x263480u: goto label_263480;
        case 0x263484u: goto label_263484;
        case 0x263488u: goto label_263488;
        case 0x26348cu: goto label_26348c;
        case 0x263490u: goto label_263490;
        case 0x263494u: goto label_263494;
        case 0x263498u: goto label_263498;
        case 0x26349cu: goto label_26349c;
        case 0x2634a0u: goto label_2634a0;
        case 0x2634a4u: goto label_2634a4;
        case 0x2634a8u: goto label_2634a8;
        case 0x2634acu: goto label_2634ac;
        case 0x2634b0u: goto label_2634b0;
        case 0x2634b4u: goto label_2634b4;
        case 0x2634b8u: goto label_2634b8;
        case 0x2634bcu: goto label_2634bc;
        case 0x2634c0u: goto label_2634c0;
        case 0x2634c4u: goto label_2634c4;
        case 0x2634c8u: goto label_2634c8;
        case 0x2634ccu: goto label_2634cc;
        case 0x2634d0u: goto label_2634d0;
        case 0x2634d4u: goto label_2634d4;
        case 0x2634d8u: goto label_2634d8;
        case 0x2634dcu: goto label_2634dc;
        case 0x2634e0u: goto label_2634e0;
        case 0x2634e4u: goto label_2634e4;
        case 0x2634e8u: goto label_2634e8;
        case 0x2634ecu: goto label_2634ec;
        case 0x2634f0u: goto label_2634f0;
        case 0x2634f4u: goto label_2634f4;
        case 0x2634f8u: goto label_2634f8;
        case 0x2634fcu: goto label_2634fc;
        case 0x263500u: goto label_263500;
        case 0x263504u: goto label_263504;
        case 0x263508u: goto label_263508;
        case 0x26350cu: goto label_26350c;
        case 0x263510u: goto label_263510;
        case 0x263514u: goto label_263514;
        case 0x263518u: goto label_263518;
        case 0x26351cu: goto label_26351c;
        case 0x263520u: goto label_263520;
        case 0x263524u: goto label_263524;
        case 0x263528u: goto label_263528;
        case 0x26352cu: goto label_26352c;
        case 0x263530u: goto label_263530;
        case 0x263534u: goto label_263534;
        case 0x263538u: goto label_263538;
        case 0x26353cu: goto label_26353c;
        case 0x263540u: goto label_263540;
        case 0x263544u: goto label_263544;
        case 0x263548u: goto label_263548;
        case 0x26354cu: goto label_26354c;
        case 0x263550u: goto label_263550;
        case 0x263554u: goto label_263554;
        case 0x263558u: goto label_263558;
        case 0x26355cu: goto label_26355c;
        case 0x263560u: goto label_263560;
        case 0x263564u: goto label_263564;
        case 0x263568u: goto label_263568;
        case 0x26356cu: goto label_26356c;
        case 0x263570u: goto label_263570;
        case 0x263574u: goto label_263574;
        case 0x263578u: goto label_263578;
        case 0x26357cu: goto label_26357c;
        case 0x263580u: goto label_263580;
        case 0x263584u: goto label_263584;
        case 0x263588u: goto label_263588;
        case 0x26358cu: goto label_26358c;
        case 0x263590u: goto label_263590;
        case 0x263594u: goto label_263594;
        case 0x263598u: goto label_263598;
        case 0x26359cu: goto label_26359c;
        case 0x2635a0u: goto label_2635a0;
        case 0x2635a4u: goto label_2635a4;
        case 0x2635a8u: goto label_2635a8;
        case 0x2635acu: goto label_2635ac;
        case 0x2635b0u: goto label_2635b0;
        case 0x2635b4u: goto label_2635b4;
        case 0x2635b8u: goto label_2635b8;
        case 0x2635bcu: goto label_2635bc;
        case 0x2635c0u: goto label_2635c0;
        case 0x2635c4u: goto label_2635c4;
        case 0x2635c8u: goto label_2635c8;
        case 0x2635ccu: goto label_2635cc;
        case 0x2635d0u: goto label_2635d0;
        case 0x2635d4u: goto label_2635d4;
        case 0x2635d8u: goto label_2635d8;
        case 0x2635dcu: goto label_2635dc;
        case 0x2635e0u: goto label_2635e0;
        case 0x2635e4u: goto label_2635e4;
        case 0x2635e8u: goto label_2635e8;
        case 0x2635ecu: goto label_2635ec;
        case 0x2635f0u: goto label_2635f0;
        case 0x2635f4u: goto label_2635f4;
        case 0x2635f8u: goto label_2635f8;
        case 0x2635fcu: goto label_2635fc;
        case 0x263600u: goto label_263600;
        case 0x263604u: goto label_263604;
        case 0x263608u: goto label_263608;
        case 0x26360cu: goto label_26360c;
        case 0x263610u: goto label_263610;
        case 0x263614u: goto label_263614;
        case 0x263618u: goto label_263618;
        case 0x26361cu: goto label_26361c;
        case 0x263620u: goto label_263620;
        case 0x263624u: goto label_263624;
        case 0x263628u: goto label_263628;
        case 0x26362cu: goto label_26362c;
        case 0x263630u: goto label_263630;
        case 0x263634u: goto label_263634;
        case 0x263638u: goto label_263638;
        case 0x26363cu: goto label_26363c;
        case 0x263640u: goto label_263640;
        case 0x263644u: goto label_263644;
        case 0x263648u: goto label_263648;
        case 0x26364cu: goto label_26364c;
        case 0x263650u: goto label_263650;
        case 0x263654u: goto label_263654;
        case 0x263658u: goto label_263658;
        case 0x26365cu: goto label_26365c;
        case 0x263660u: goto label_263660;
        case 0x263664u: goto label_263664;
        case 0x263668u: goto label_263668;
        case 0x26366cu: goto label_26366c;
        case 0x263670u: goto label_263670;
        case 0x263674u: goto label_263674;
        default: break;
    }

    ctx->pc = 0x262ee0u;

label_262ee0:
    // 0x262ee0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x262ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_262ee4:
    // 0x262ee4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x262ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_262ee8:
    // 0x262ee8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x262ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_262eec:
    // 0x262eec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x262eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_262ef0:
    // 0x262ef0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x262ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_262ef4:
    // 0x262ef4: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x262ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_262ef8:
    // 0x262ef8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x262ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_262efc:
    // 0x262efc: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x262efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_262f00:
    // 0x262f00: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x262f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_262f04:
    // 0x262f04: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x262f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_262f08:
    // 0x262f08: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x262f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_262f0c:
    // 0x262f0c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x262f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_262f10:
    // 0x262f10: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x262f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_262f14:
    // 0x262f14: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x262f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
label_262f18:
    // 0x262f18: 0xc0432d4  jal         func_10CB50
label_262f1c:
    if (ctx->pc == 0x262F1Cu) {
        ctx->pc = 0x262F1Cu;
            // 0x262f1c: 0xafa70018  sw          $a3, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
        ctx->pc = 0x262F20u;
        goto label_262f20;
    }
    ctx->pc = 0x262F18u;
    SET_GPR_U32(ctx, 31, 0x262F20u);
    ctx->pc = 0x262F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262F18u;
            // 0x262f1c: 0xafa70018  sw          $a3, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F20u; }
        if (ctx->pc != 0x262F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F20u; }
        if (ctx->pc != 0x262F20u) { return; }
    }
    ctx->pc = 0x262F20u;
label_262f20:
    // 0x262f20: 0xc097242  jal         func_25C908
label_262f24:
    if (ctx->pc == 0x262F24u) {
        ctx->pc = 0x262F24u;
            // 0x262f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262F28u;
        goto label_262f28;
    }
    ctx->pc = 0x262F20u;
    SET_GPR_U32(ctx, 31, 0x262F28u);
    ctx->pc = 0x262F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262F20u;
            // 0x262f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (runtime->hasFunction(0x25C908u)) {
        auto targetFn = runtime->lookupFunction(0x25C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F28u; }
        if (ctx->pc != 0x262F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C908_0x25c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F28u; }
        if (ctx->pc != 0x262F28u) { return; }
    }
    ctx->pc = 0x262F28u;
label_262f28:
    // 0x262f28: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x262f28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262f2c:
    // 0x262f2c: 0x12c001c5  beqz        $s6, . + 4 + (0x1C5 << 2)
label_262f30:
    if (ctx->pc == 0x262F30u) {
        ctx->pc = 0x262F30u;
            // 0x262f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262F34u;
        goto label_262f34;
    }
    ctx->pc = 0x262F2Cu;
    {
        const bool branch_taken_0x262f2c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x262F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F2Cu;
            // 0x262f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f2c) {
            ctx->pc = 0x263644u;
            goto label_263644;
        }
    }
    ctx->pc = 0x262F34u;
label_262f34:
    // 0x262f34: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x262f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_262f38:
    // 0x262f38: 0x504001c2  beql        $v0, $zero, . + 4 + (0x1C2 << 2)
label_262f3c:
    if (ctx->pc == 0x262F3Cu) {
        ctx->pc = 0x262F3Cu;
            // 0x262f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262F40u;
        goto label_262f40;
    }
    ctx->pc = 0x262F38u;
    {
        const bool branch_taken_0x262f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f38) {
            ctx->pc = 0x262F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262F38u;
            // 0x262f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263644u;
            goto label_263644;
        }
    }
    ctx->pc = 0x262F40u;
label_262f40:
    // 0x262f40: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x262f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
label_262f44:
    // 0x262f44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_262f48:
    // 0x262f48: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x262f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_262f4c:
    // 0x262f4c: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x262f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_262f50:
    // 0x262f50: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x262f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_262f54:
    // 0x262f54: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x262f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_262f58:
    // 0x262f58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x262f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_262f5c:
    // 0x262f5c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_262f60:
    if (ctx->pc == 0x262F60u) {
        ctx->pc = 0x262F60u;
            // 0x262f60: 0xafb0001c  sw          $s0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
        ctx->pc = 0x262F64u;
        goto label_262f64;
    }
    ctx->pc = 0x262F5Cu;
    {
        const bool branch_taken_0x262f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F5Cu;
            // 0x262f60: 0xafb0001c  sw          $s0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f5c) {
            ctx->pc = 0x262F9Cu;
            goto label_262f9c;
        }
    }
    ctx->pc = 0x262F64u;
label_262f64:
    // 0x262f64: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x262f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_262f68:
    // 0x262f68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_262f6c:
    if (ctx->pc == 0x262F6Cu) {
        ctx->pc = 0x262F6Cu;
            // 0x262f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x262F70u;
        goto label_262f70;
    }
    ctx->pc = 0x262F68u;
    {
        const bool branch_taken_0x262f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F68u;
            // 0x262f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f68) {
            ctx->pc = 0x262F80u;
            goto label_262f80;
        }
    }
    ctx->pc = 0x262F70u;
label_262f70:
    // 0x262f70: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_262f74:
    if (ctx->pc == 0x262F74u) {
        ctx->pc = 0x262F74u;
            // 0x262f74: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->pc = 0x262F78u;
        goto label_262f78;
    }
    ctx->pc = 0x262F70u;
    {
        const bool branch_taken_0x262f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F70u;
            // 0x262f74: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f70) {
            ctx->pc = 0x262F94u;
            goto label_262f94;
        }
    }
    ctx->pc = 0x262F78u;
label_262f78:
    // 0x262f78: 0x100001b2  b           . + 4 + (0x1B2 << 2)
label_262f7c:
    if (ctx->pc == 0x262F7Cu) {
        ctx->pc = 0x262F7Cu;
            // 0x262f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262F80u;
        goto label_262f80;
    }
    ctx->pc = 0x262F78u;
    {
        const bool branch_taken_0x262f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F78u;
            // 0x262f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f78) {
            ctx->pc = 0x263644u;
            goto label_263644;
        }
    }
    ctx->pc = 0x262F80u;
label_262f80:
    // 0x262f80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x262f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_262f84:
    // 0x262f84: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x262f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_262f88:
    // 0x262f88: 0x146201ae  bne         $v1, $v0, . + 4 + (0x1AE << 2)
label_262f8c:
    if (ctx->pc == 0x262F8Cu) {
        ctx->pc = 0x262F8Cu;
            // 0x262f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262F90u;
        goto label_262f90;
    }
    ctx->pc = 0x262F88u;
    {
        const bool branch_taken_0x262f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F88u;
            // 0x262f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f88) {
            ctx->pc = 0x263644u;
            goto label_263644;
        }
    }
    ctx->pc = 0x262F90u;
label_262f90:
    // 0x262f90: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x262f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_262f94:
    // 0x262f94: 0x10000003  b           . + 4 + (0x3 << 2)
label_262f98:
    if (ctx->pc == 0x262F98u) {
        ctx->pc = 0x262F98u;
            // 0x262f98: 0x24424aa0  addiu       $v0, $v0, 0x4AA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19104));
        ctx->pc = 0x262F9Cu;
        goto label_262f9c;
    }
    ctx->pc = 0x262F94u;
    {
        const bool branch_taken_0x262f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F94u;
            // 0x262f98: 0x24424aa0  addiu       $v0, $v0, 0x4AA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f94) {
            ctx->pc = 0x262FA4u;
            goto label_262fa4;
        }
    }
    ctx->pc = 0x262F9Cu;
label_262f9c:
    // 0x262f9c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x262f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_262fa0:
    // 0x262fa0: 0x24424c58  addiu       $v0, $v0, 0x4C58
    ctx->pc = 0x262fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
label_262fa4:
    // 0x262fa4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x262fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_262fa8:
    // 0x262fa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_262fac:
    // 0x262fac: 0xc08b60c  jal         func_22D830
label_262fb0:
    if (ctx->pc == 0x262FB0u) {
        ctx->pc = 0x262FB0u;
            // 0x262fb0: 0x94440006  lhu         $a0, 0x6($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->pc = 0x262FB4u;
        goto label_262fb4;
    }
    ctx->pc = 0x262FACu;
    SET_GPR_U32(ctx, 31, 0x262FB4u);
    ctx->pc = 0x262FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262FACu;
            // 0x262fb0: 0x94440006  lhu         $a0, 0x6($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FB4u; }
        if (ctx->pc != 0x262FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FB4u; }
        if (ctx->pc != 0x262FB4u) { return; }
    }
    ctx->pc = 0x262FB4u;
label_262fb4:
    // 0x262fb4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x262fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_262fb8:
    // 0x262fb8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x262fb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262fbc:
    // 0x262fbc: 0xc08b60c  jal         func_22D830
label_262fc0:
    if (ctx->pc == 0x262FC0u) {
        ctx->pc = 0x262FC0u;
            // 0x262fc0: 0x94640004  lhu         $a0, 0x4($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x262FC4u;
        goto label_262fc4;
    }
    ctx->pc = 0x262FBCu;
    SET_GPR_U32(ctx, 31, 0x262FC4u);
    ctx->pc = 0x262FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262FBCu;
            // 0x262fc0: 0x94640004  lhu         $a0, 0x4($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FC4u; }
        if (ctx->pc != 0x262FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FC4u; }
        if (ctx->pc != 0x262FC4u) { return; }
    }
    ctx->pc = 0x262FC4u;
label_262fc4:
    // 0x262fc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x262fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262fc8:
    // 0x262fc8: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x262fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_262fcc:
    // 0x262fcc: 0x24432130  addiu       $v1, $v0, 0x2130
    ctx->pc = 0x262fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8496));
label_262fd0:
    // 0x262fd0: 0x24530130  addiu       $s3, $v0, 0x130
    ctx->pc = 0x262fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_262fd4:
    // 0x262fd4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x262fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_262fd8:
    // 0x262fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_262fdc:
    // 0x262fdc: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x262fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_262fe0:
    // 0x262fe0: 0x2452000c  addiu       $s2, $v0, 0xC
    ctx->pc = 0x262fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_262fe4:
    // 0x262fe4: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x262fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_262fe8:
    // 0x262fe8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_262fec:
    if (ctx->pc == 0x262FECu) {
        ctx->pc = 0x262FECu;
            // 0x262fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x262FF0u;
        goto label_262ff0;
    }
    ctx->pc = 0x262FE8u;
    {
        const bool branch_taken_0x262fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262FE8u;
            // 0x262fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fe8) {
            ctx->pc = 0x263008u;
            goto label_263008;
        }
    }
    ctx->pc = 0x262FF0u;
label_262ff0:
    // 0x262ff0: 0xc097308  jal         func_25CC20
label_262ff4:
    if (ctx->pc == 0x262FF4u) {
        ctx->pc = 0x262FF8u;
        goto label_262ff8;
    }
    ctx->pc = 0x262FF0u;
    SET_GPR_U32(ctx, 31, 0x262FF8u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FF8u; }
        if (ctx->pc != 0x262FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262FF8u; }
        if (ctx->pc != 0x262FF8u) { return; }
    }
    ctx->pc = 0x262FF8u;
label_262ff8:
    // 0x262ff8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x262ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_262ffc:
    // 0x262ffc: 0x10000190  b           . + 4 + (0x190 << 2)
label_263000:
    if (ctx->pc == 0x263000u) {
        ctx->pc = 0x263000u;
            // 0x263000: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x263004u;
        goto label_263004;
    }
    ctx->pc = 0x262FFCu;
    {
        const bool branch_taken_0x262ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262FFCu;
            // 0x263000: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ffc) {
            ctx->pc = 0x263640u;
            goto label_263640;
        }
    }
    ctx->pc = 0x263004u;
label_263004:
    // 0x263004: 0x0  nop
    ctx->pc = 0x263004u;
    // NOP
label_263008:
    // 0x263008: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_26300c:
    if (ctx->pc == 0x26300Cu) {
        ctx->pc = 0x26300Cu;
            // 0x26300c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x263010u;
        goto label_263010;
    }
    ctx->pc = 0x263008u;
    {
        const bool branch_taken_0x263008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263008u;
            // 0x26300c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263008) {
            ctx->pc = 0x263024u;
            goto label_263024;
        }
    }
    ctx->pc = 0x263010u;
label_263010:
    // 0x263010: 0xc097308  jal         func_25CC20
label_263014:
    if (ctx->pc == 0x263014u) {
        ctx->pc = 0x263018u;
        goto label_263018;
    }
    ctx->pc = 0x263010u;
    SET_GPR_U32(ctx, 31, 0x263018u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263018u; }
        if (ctx->pc != 0x263018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263018u; }
        if (ctx->pc != 0x263018u) { return; }
    }
    ctx->pc = 0x263018u;
label_263018:
    // 0x263018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x263018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26301c:
    // 0x26301c: 0x10000188  b           . + 4 + (0x188 << 2)
label_263020:
    if (ctx->pc == 0x263020u) {
        ctx->pc = 0x263020u;
            // 0x263020: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x263024u;
        goto label_263024;
    }
    ctx->pc = 0x26301Cu;
    {
        const bool branch_taken_0x26301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26301Cu;
            // 0x263020: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26301c) {
            ctx->pc = 0x263640u;
            goto label_263640;
        }
    }
    ctx->pc = 0x263024u;
label_263024:
    // 0x263024: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263028:
    // 0x263028: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x263028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_26302c:
    // 0x26302c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x26302cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263030:
    // 0x263030: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x263030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_263034:
    // 0x263034: 0xc09927e  jal         func_2649F8
label_263038:
    if (ctx->pc == 0x263038u) {
        ctx->pc = 0x263038u;
            // 0x263038: 0x534023  subu        $t0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x26303Cu;
        goto label_26303c;
    }
    ctx->pc = 0x263034u;
    SET_GPR_U32(ctx, 31, 0x26303Cu);
    ctx->pc = 0x263038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263034u;
            // 0x263038: 0x534023  subu        $t0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2649F8u;
    if (runtime->hasFunction(0x2649F8u)) {
        auto targetFn = runtime->lookupFunction(0x2649F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26303Cu; }
        if (ctx->pc != 0x26303Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002649F8_0x2649f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26303Cu; }
        if (ctx->pc != 0x26303Cu) { return; }
    }
    ctx->pc = 0x26303Cu;
label_26303c:
    // 0x26303c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26303cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263040:
    // 0x263040: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
label_263044:
    if (ctx->pc == 0x263044u) {
        ctx->pc = 0x263044u;
            // 0x263044: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x263048u;
        goto label_263048;
    }
    ctx->pc = 0x263040u;
    {
        const bool branch_taken_0x263040 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x263044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263040u;
            // 0x263044: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263040) {
            ctx->pc = 0x263058u;
            goto label_263058;
        }
    }
    ctx->pc = 0x263048u;
label_263048:
    // 0x263048: 0x60f809  jalr        $v1
label_26304c:
    if (ctx->pc == 0x26304Cu) {
        ctx->pc = 0x26304Cu;
            // 0x26304c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263050u;
        goto label_263050;
    }
    ctx->pc = 0x263048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x263050u);
        ctx->pc = 0x26304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263048u;
            // 0x26304c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263050u; }
            if (ctx->pc != 0x263050u) { return; }
        }
        }
    }
    ctx->pc = 0x263050u;
label_263050:
    // 0x263050: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_263054:
    if (ctx->pc == 0x263054u) {
        ctx->pc = 0x263054u;
            // 0x263054: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x263058u;
        goto label_263058;
    }
    ctx->pc = 0x263050u;
    {
        const bool branch_taken_0x263050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263050u;
            // 0x263054: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263050) {
            ctx->pc = 0x26306Cu;
            goto label_26306c;
        }
    }
    ctx->pc = 0x263058u;
label_263058:
    // 0x263058: 0xc097308  jal         func_25CC20
label_26305c:
    if (ctx->pc == 0x26305Cu) {
        ctx->pc = 0x263060u;
        goto label_263060;
    }
    ctx->pc = 0x263058u;
    SET_GPR_U32(ctx, 31, 0x263060u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263060u; }
        if (ctx->pc != 0x263060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263060u; }
        if (ctx->pc != 0x263060u) { return; }
    }
    ctx->pc = 0x263060u;
label_263060:
    // 0x263060: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x263060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_263064:
    // 0x263064: 0x10000176  b           . + 4 + (0x176 << 2)
label_263068:
    if (ctx->pc == 0x263068u) {
        ctx->pc = 0x263068u;
            // 0x263068: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x26306Cu;
        goto label_26306c;
    }
    ctx->pc = 0x263064u;
    {
        const bool branch_taken_0x263064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263064u;
            // 0x263068: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263064) {
            ctx->pc = 0x263640u;
            goto label_263640;
        }
    }
    ctx->pc = 0x26306Cu;
label_26306c:
    // 0x26306c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x26306cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_263070:
    // 0x263070: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x263070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_263074:
    // 0x263074: 0x52182b  sltu        $v1, $v0, $s2
    ctx->pc = 0x263074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_263078:
    // 0x263078: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_26307c:
    if (ctx->pc == 0x26307Cu) {
        ctx->pc = 0x26307Cu;
            // 0x26307c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x263080u;
        goto label_263080;
    }
    ctx->pc = 0x263078u;
    {
        const bool branch_taken_0x263078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263078u;
            // 0x26307c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263078) {
            ctx->pc = 0x263098u;
            goto label_263098;
        }
    }
    ctx->pc = 0x263080u;
label_263080:
    // 0x263080: 0xc097308  jal         func_25CC20
label_263084:
    if (ctx->pc == 0x263084u) {
        ctx->pc = 0x263088u;
        goto label_263088;
    }
    ctx->pc = 0x263080u;
    SET_GPR_U32(ctx, 31, 0x263088u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263088u; }
        if (ctx->pc != 0x263088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263088u; }
        if (ctx->pc != 0x263088u) { return; }
    }
    ctx->pc = 0x263088u;
label_263088:
    // 0x263088: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x263088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26308c:
    // 0x26308c: 0x1000016c  b           . + 4 + (0x16C << 2)
label_263090:
    if (ctx->pc == 0x263090u) {
        ctx->pc = 0x263090u;
            // 0x263090: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x263094u;
        goto label_263094;
    }
    ctx->pc = 0x26308Cu;
    {
        const bool branch_taken_0x26308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26308Cu;
            // 0x263090: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26308c) {
            ctx->pc = 0x263640u;
            goto label_263640;
        }
    }
    ctx->pc = 0x263094u;
label_263094:
    // 0x263094: 0x0  nop
    ctx->pc = 0x263094u;
    // NOP
label_263098:
    // 0x263098: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
label_26309c:
    if (ctx->pc == 0x26309Cu) {
        ctx->pc = 0x26309Cu;
            // 0x26309c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x2630A0u;
        goto label_2630a0;
    }
    ctx->pc = 0x263098u;
    {
        const bool branch_taken_0x263098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x26309Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263098u;
            // 0x26309c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263098) {
            ctx->pc = 0x2630A8u;
            goto label_2630a8;
        }
    }
    ctx->pc = 0x2630A0u;
label_2630a0:
    // 0x2630a0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_2630a4:
    if (ctx->pc == 0x2630A4u) {
        ctx->pc = 0x2630A4u;
            // 0x2630a4: 0x8ec5004c  lw          $a1, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->pc = 0x2630A8u;
        goto label_2630a8;
    }
    ctx->pc = 0x2630A0u;
    {
        const bool branch_taken_0x2630a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2630a0) {
            ctx->pc = 0x2630A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2630A0u;
            // 0x2630a4: 0x8ec5004c  lw          $a1, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2630E8u;
            goto label_2630e8;
        }
    }
    ctx->pc = 0x2630A8u;
label_2630a8:
    // 0x2630a8: 0xc04a83e  jal         func_12A0F8
label_2630ac:
    if (ctx->pc == 0x2630ACu) {
        ctx->pc = 0x2630ACu;
            // 0x2630ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2630B0u;
        goto label_2630b0;
    }
    ctx->pc = 0x2630A8u;
    SET_GPR_U32(ctx, 31, 0x2630B0u);
    ctx->pc = 0x2630ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2630A8u;
            // 0x2630ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630B0u; }
        if (ctx->pc != 0x2630B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630B0u; }
        if (ctx->pc != 0x2630B0u) { return; }
    }
    ctx->pc = 0x2630B0u;
label_2630b0:
    // 0x2630b0: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2630b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2630b4:
    // 0x2630b4: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x2630b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_2630b8:
    // 0x2630b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2630bc:
    if (ctx->pc == 0x2630BCu) {
        ctx->pc = 0x2630BCu;
            // 0x2630bc: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->pc = 0x2630C0u;
        goto label_2630c0;
    }
    ctx->pc = 0x2630B8u;
    {
        const bool branch_taken_0x2630b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2630b8) {
            ctx->pc = 0x2630BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2630B8u;
            // 0x2630bc: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2630D4u;
            goto label_2630d4;
        }
    }
    ctx->pc = 0x2630C0u;
label_2630c0:
    // 0x2630c0: 0xc097308  jal         func_25CC20
label_2630c4:
    if (ctx->pc == 0x2630C4u) {
        ctx->pc = 0x2630C8u;
        goto label_2630c8;
    }
    ctx->pc = 0x2630C0u;
    SET_GPR_U32(ctx, 31, 0x2630C8u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630C8u; }
        if (ctx->pc != 0x2630C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2630C8u; }
        if (ctx->pc != 0x2630C8u) { return; }
    }
    ctx->pc = 0x2630C8u;
label_2630c8:
    // 0x2630c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2630c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2630cc:
    // 0x2630cc: 0x1000015c  b           . + 4 + (0x15C << 2)
label_2630d0:
    if (ctx->pc == 0x2630D0u) {
        ctx->pc = 0x2630D0u;
            // 0x2630d0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2630D4u;
        goto label_2630d4;
    }
    ctx->pc = 0x2630CCu;
    {
        const bool branch_taken_0x2630cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2630D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2630CCu;
            // 0x2630d0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630cc) {
            ctx->pc = 0x263640u;
            goto label_263640;
        }
    }
    ctx->pc = 0x2630D4u;
label_2630d4:
    // 0x2630d4: 0xac530090  sw          $s3, 0x90($v0)
    ctx->pc = 0x2630d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 19));
label_2630d8:
    // 0x2630d8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2630d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2630dc:
    // 0x2630dc: 0x8ec5004c  lw          $a1, 0x4C($s6)
    ctx->pc = 0x2630dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_2630e0:
    // 0x2630e0: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x2630e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_2630e4:
    // 0x2630e4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2630e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2630e8:
    // 0x2630e8: 0xaca000a4  sw          $zero, 0xA4($a1)
    ctx->pc = 0x2630e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
label_2630ec:
    // 0x2630ec: 0x24040401  addiu       $a0, $zero, 0x401
    ctx->pc = 0x2630ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_2630f0:
    // 0x2630f0: 0x24a500a4  addiu       $a1, $a1, 0xA4
    ctx->pc = 0x2630f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
label_2630f4:
    // 0x2630f4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2630f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2630f8:
    // 0x2630f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2630f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2630fc:
    // 0x2630fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2630fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263100:
    // 0x263100: 0x8ec3004c  lw          $v1, 0x4C($s6)
    ctx->pc = 0x263100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_263104:
    // 0x263104: 0x246200a4  addiu       $v0, $v1, 0xA4
    ctx->pc = 0x263104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
label_263108:
    // 0x263108: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x263108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_26310c:
    // 0x26310c: 0x8ec3004c  lw          $v1, 0x4C($s6)
    ctx->pc = 0x26310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_263110:
    // 0x263110: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x263110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_263114:
    // 0x263114: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x263114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_263118:
    // 0x263118: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x263118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_26311c:
    // 0x26311c: 0xc098552  jal         func_261548
label_263120:
    if (ctx->pc == 0x263120u) {
        ctx->pc = 0x263120u;
            // 0x263120: 0xac4200a0  sw          $v0, 0xA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x263124u;
        goto label_263124;
    }
    ctx->pc = 0x26311Cu;
    SET_GPR_U32(ctx, 31, 0x263124u);
    ctx->pc = 0x263120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26311Cu;
            // 0x263120: 0xac4200a0  sw          $v0, 0xA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263124u; }
        if (ctx->pc != 0x263124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263124u; }
        if (ctx->pc != 0x263124u) { return; }
    }
    ctx->pc = 0x263124u;
label_263124:
    // 0x263124: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_263128:
    if (ctx->pc == 0x263128u) {
        ctx->pc = 0x263128u;
            // 0x263128: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x26312Cu;
        goto label_26312c;
    }
    ctx->pc = 0x263124u;
    {
        const bool branch_taken_0x263124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263124u;
            // 0x263128: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263124) {
            ctx->pc = 0x263140u;
            goto label_263140;
        }
    }
    ctx->pc = 0x26312Cu;
label_26312c:
    // 0x26312c: 0xc097308  jal         func_25CC20
label_263130:
    if (ctx->pc == 0x263130u) {
        ctx->pc = 0x263134u;
        goto label_263134;
    }
    ctx->pc = 0x26312Cu;
    SET_GPR_U32(ctx, 31, 0x263134u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263134u; }
        if (ctx->pc != 0x263134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263134u; }
        if (ctx->pc != 0x263134u) { return; }
    }
    ctx->pc = 0x263134u;
label_263134:
    // 0x263134: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_263138:
    // 0x263138: 0x10000141  b           . + 4 + (0x141 << 2)
label_26313c:
    if (ctx->pc == 0x26313Cu) {
        ctx->pc = 0x26313Cu;
            // 0x26313c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x263140u;
        goto label_263140;
    }
    ctx->pc = 0x263138u;
    {
        const bool branch_taken_0x263138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263138u;
            // 0x26313c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263138) {
            ctx->pc = 0x263640u;
            goto label_263640;
        }
    }
    ctx->pc = 0x263140u;
label_263140:
    // 0x263140: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x263140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_263144:
    // 0x263144: 0x1a800113  blez        $s4, . + 4 + (0x113 << 2)
label_263148:
    if (ctx->pc == 0x263148u) {
        ctx->pc = 0x263148u;
            // 0x263148: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x26314Cu;
        goto label_26314c;
    }
    ctx->pc = 0x263144u;
    {
        const bool branch_taken_0x263144 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x263148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263144u;
            // 0x263148: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263144) {
            ctx->pc = 0x263594u;
            goto label_263594;
        }
    }
    ctx->pc = 0x26314Cu;
label_26314c:
    // 0x26314c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x26314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_263150:
    // 0x263150: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x263150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_263154:
    // 0x263154: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
label_263158:
    if (ctx->pc == 0x263158u) {
        ctx->pc = 0x263158u;
            // 0x263158: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x26315Cu;
        goto label_26315c;
    }
    ctx->pc = 0x263154u;
    {
        const bool branch_taken_0x263154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263154u;
            // 0x263158: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263154) {
            ctx->pc = 0x263594u;
            goto label_263594;
        }
    }
    ctx->pc = 0x26315Cu;
label_26315c:
    // 0x26315c: 0x0  nop
    ctx->pc = 0x26315cu;
    // NOP
label_263160:
    // 0x263160: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263164:
    // 0x263164: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x263164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_263168:
    // 0x263168: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x263168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26316c:
    // 0x26316c: 0x53f023  subu        $fp, $v0, $s3
    ctx->pc = 0x26316cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_263170:
    // 0x263170: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x263170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_263174:
    // 0x263174: 0xc09927e  jal         func_2649F8
label_263178:
    if (ctx->pc == 0x263178u) {
        ctx->pc = 0x263178u;
            // 0x263178: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26317Cu;
        goto label_26317c;
    }
    ctx->pc = 0x263174u;
    SET_GPR_U32(ctx, 31, 0x26317Cu);
    ctx->pc = 0x263178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263174u;
            // 0x263178: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2649F8u;
    if (runtime->hasFunction(0x2649F8u)) {
        auto targetFn = runtime->lookupFunction(0x2649F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26317Cu; }
        if (ctx->pc != 0x26317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002649F8_0x2649f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26317Cu; }
        if (ctx->pc != 0x26317Cu) { return; }
    }
    ctx->pc = 0x26317Cu;
label_26317c:
    // 0x26317c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26317cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263180:
    // 0x263180: 0x60000e5  bltz        $s0, . + 4 + (0xE5 << 2)
label_263184:
    if (ctx->pc == 0x263184u) {
        ctx->pc = 0x263184u;
            // 0x263184: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x263188u;
        goto label_263188;
    }
    ctx->pc = 0x263180u;
    {
        const bool branch_taken_0x263180 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x263184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263180u;
            // 0x263184: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263180) {
            ctx->pc = 0x263518u;
            goto label_263518;
        }
    }
    ctx->pc = 0x263188u;
label_263188:
    // 0x263188: 0x60f809  jalr        $v1
label_26318c:
    if (ctx->pc == 0x26318Cu) {
        ctx->pc = 0x26318Cu;
            // 0x26318c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263190u;
        goto label_263190;
    }
    ctx->pc = 0x263188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x263190u);
        ctx->pc = 0x26318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263188u;
            // 0x26318c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263190u; }
            if (ctx->pc != 0x263190u) { return; }
        }
        }
    }
    ctx->pc = 0x263190u;
label_263190:
    // 0x263190: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
label_263194:
    if (ctx->pc == 0x263194u) {
        ctx->pc = 0x263194u;
            // 0x263194: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x263198u;
        goto label_263198;
    }
    ctx->pc = 0x263190u;
    {
        const bool branch_taken_0x263190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263190u;
            // 0x263194: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263190) {
            ctx->pc = 0x263518u;
            goto label_263518;
        }
    }
    ctx->pc = 0x263198u;
label_263198:
    // 0x263198: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x263198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_26319c:
    // 0x26319c: 0x2642000a  addiu       $v0, $s2, 0xA
    ctx->pc = 0x26319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
label_2631a0:
    // 0x2631a0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2631a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2631a4:
    // 0x2631a4: 0x14400120  bnez        $v0, . + 4 + (0x120 << 2)
label_2631a8:
    if (ctx->pc == 0x2631A8u) {
        ctx->pc = 0x2631ACu;
        goto label_2631ac;
    }
    ctx->pc = 0x2631A4u;
    {
        const bool branch_taken_0x2631a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2631a4) {
            ctx->pc = 0x263628u;
            goto label_263628;
        }
    }
    ctx->pc = 0x2631ACu;
label_2631ac:
    // 0x2631ac: 0xc099322  jal         func_264C88
label_2631b0:
    if (ctx->pc == 0x2631B0u) {
        ctx->pc = 0x2631B0u;
            // 0x2631b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2631B4u;
        goto label_2631b4;
    }
    ctx->pc = 0x2631ACu;
    SET_GPR_U32(ctx, 31, 0x2631B4u);
    ctx->pc = 0x2631B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2631ACu;
            // 0x2631b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264C88u;
    if (runtime->hasFunction(0x264C88u)) {
        auto targetFn = runtime->lookupFunction(0x264C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631B4u; }
        if (ctx->pc != 0x2631B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264C88_0x264c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631B4u; }
        if (ctx->pc != 0x2631B4u) { return; }
    }
    ctx->pc = 0x2631B4u;
label_2631b4:
    // 0x2631b4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2631b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2631b8:
    // 0x2631b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2631b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2631bc:
    // 0x2631bc: 0xc099322  jal         func_264C88
label_2631c0:
    if (ctx->pc == 0x2631C0u) {
        ctx->pc = 0x2631C0u;
            // 0x2631c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2631C4u;
        goto label_2631c4;
    }
    ctx->pc = 0x2631BCu;
    SET_GPR_U32(ctx, 31, 0x2631C4u);
    ctx->pc = 0x2631C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2631BCu;
            // 0x2631c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264C88u;
    if (runtime->hasFunction(0x264C88u)) {
        auto targetFn = runtime->lookupFunction(0x264C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631C4u; }
        if (ctx->pc != 0x2631C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264C88_0x264c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631C4u; }
        if (ctx->pc != 0x2631C4u) { return; }
    }
    ctx->pc = 0x2631C4u;
label_2631c4:
    // 0x2631c4: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x2631c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
label_2631c8:
    // 0x2631c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2631c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2631cc:
    // 0x2631cc: 0xc099322  jal         func_264C88
label_2631d0:
    if (ctx->pc == 0x2631D0u) {
        ctx->pc = 0x2631D0u;
            // 0x2631d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2631D4u;
        goto label_2631d4;
    }
    ctx->pc = 0x2631CCu;
    SET_GPR_U32(ctx, 31, 0x2631D4u);
    ctx->pc = 0x2631D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2631CCu;
            // 0x2631d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264C88u;
    if (runtime->hasFunction(0x264C88u)) {
        auto targetFn = runtime->lookupFunction(0x264C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631D4u; }
        if (ctx->pc != 0x2631D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264C88_0x264c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2631D4u; }
        if (ctx->pc != 0x2631D4u) { return; }
    }
    ctx->pc = 0x2631D4u;
label_2631d4:
    // 0x2631d4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2631d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2631d8:
    // 0x2631d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2631d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2631dc:
    // 0x2631dc: 0x250a821  addu        $s5, $s2, $s0
    ctx->pc = 0x2631dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2631e0:
    // 0x2631e0: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2631e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2631e4:
    // 0x2631e4: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x2631e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2631e8:
    // 0x2631e8: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
label_2631ec:
    if (ctx->pc == 0x2631ECu) {
        ctx->pc = 0x2631ECu;
            // 0x2631ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2631F0u;
        goto label_2631f0;
    }
    ctx->pc = 0x2631E8u;
    {
        const bool branch_taken_0x2631e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2631ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2631E8u;
            // 0x2631ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631e8) {
            ctx->pc = 0x263628u;
            goto label_263628;
        }
    }
    ctx->pc = 0x2631F0u;
label_2631f0:
    // 0x2631f0: 0x568200dd  bnel        $s4, $v0, . + 4 + (0xDD << 2)
label_2631f4:
    if (ctx->pc == 0x2631F4u) {
        ctx->pc = 0x2631F4u;
            // 0x2631f4: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2631F8u;
        goto label_2631f8;
    }
    ctx->pc = 0x2631F0u;
    {
        const bool branch_taken_0x2631f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2631f0) {
            ctx->pc = 0x2631F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2631F0u;
            // 0x2631f4: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x2631F8u;
label_2631f8:
    // 0x2631f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2631f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2631fc:
    // 0x2631fc: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
label_263200:
    if (ctx->pc == 0x263200u) {
        ctx->pc = 0x263200u;
            // 0x263200: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x263204u;
        goto label_263204;
    }
    ctx->pc = 0x2631FCu;
    {
        const bool branch_taken_0x2631fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x263200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2631FCu;
            // 0x263200: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631fc) {
            ctx->pc = 0x263210u;
            goto label_263210;
        }
    }
    ctx->pc = 0x263204u;
label_263204:
    // 0x263204: 0x14430035  bne         $v0, $v1, . + 4 + (0x35 << 2)
label_263208:
    if (ctx->pc == 0x263208u) {
        ctx->pc = 0x263208u;
            // 0x263208: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x26320Cu;
        goto label_26320c;
    }
    ctx->pc = 0x263204u;
    {
        const bool branch_taken_0x263204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x263208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263204u;
            // 0x263208: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263204) {
            ctx->pc = 0x2632DCu;
            goto label_2632dc;
        }
    }
    ctx->pc = 0x26320Cu;
label_26320c:
    // 0x26320c: 0x0  nop
    ctx->pc = 0x26320cu;
    // NOP
label_263210:
    // 0x263210: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x263210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_263214:
    // 0x263214: 0x16220031  bne         $s1, $v0, . + 4 + (0x31 << 2)
label_263218:
    if (ctx->pc == 0x263218u) {
        ctx->pc = 0x263218u;
            // 0x263218: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x26321Cu;
        goto label_26321c;
    }
    ctx->pc = 0x263214u;
    {
        const bool branch_taken_0x263214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x263218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263214u;
            // 0x263218: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263214) {
            ctx->pc = 0x2632DCu;
            goto label_2632dc;
        }
    }
    ctx->pc = 0x26321Cu;
label_26321c:
    // 0x26321c: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x26321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_263220:
    // 0x263220: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x263220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_263224:
    // 0x263224: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x263224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_263228:
    // 0x263228: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x263228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26322c:
    // 0x26322c: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
label_263230:
    if (ctx->pc == 0x263230u) {
        ctx->pc = 0x263230u;
            // 0x263230: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x263234u;
        goto label_263234;
    }
    ctx->pc = 0x26322Cu;
    {
        const bool branch_taken_0x26322c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26322Cu;
            // 0x263230: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26322c) {
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263234u;
label_263234:
    // 0x263234: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263238:
    // 0x263238: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x263238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_26323c:
    // 0x26323c: 0x24080401  addiu       $t0, $zero, 0x401
    ctx->pc = 0x26323cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_263240:
    // 0x263240: 0xc09927e  jal         func_2649F8
label_263244:
    if (ctx->pc == 0x263244u) {
        ctx->pc = 0x263244u;
            // 0x263244: 0x8fa70034  lw          $a3, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x263248u;
        goto label_263248;
    }
    ctx->pc = 0x263240u;
    SET_GPR_U32(ctx, 31, 0x263248u);
    ctx->pc = 0x263244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263240u;
            // 0x263244: 0x8fa70034  lw          $a3, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2649F8u;
    if (runtime->hasFunction(0x2649F8u)) {
        auto targetFn = runtime->lookupFunction(0x2649F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263248u; }
        if (ctx->pc != 0x263248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002649F8_0x2649f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263248u; }
        if (ctx->pc != 0x263248u) { return; }
    }
    ctx->pc = 0x263248u;
label_263248:
    // 0x263248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26324c:
    // 0x26324c: 0x60000b2  bltz        $s0, . + 4 + (0xB2 << 2)
label_263250:
    if (ctx->pc == 0x263250u) {
        ctx->pc = 0x263250u;
            // 0x263250: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x263254u;
        goto label_263254;
    }
    ctx->pc = 0x26324Cu;
    {
        const bool branch_taken_0x26324c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x263250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26324Cu;
            // 0x263250: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26324c) {
            ctx->pc = 0x263518u;
            goto label_263518;
        }
    }
    ctx->pc = 0x263254u;
label_263254:
    // 0x263254: 0x60f809  jalr        $v1
label_263258:
    if (ctx->pc == 0x263258u) {
        ctx->pc = 0x263258u;
            // 0x263258: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x26325Cu;
        goto label_26325c;
    }
    ctx->pc = 0x263254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26325Cu);
        ctx->pc = 0x263258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263254u;
            // 0x263258: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26325Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26325Cu; }
            if (ctx->pc != 0x26325Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26325Cu;
label_26325c:
    // 0x26325c: 0x504000c2  beql        $v0, $zero, . + 4 + (0xC2 << 2)
label_263260:
    if (ctx->pc == 0x263260u) {
        ctx->pc = 0x263260u;
            // 0x263260: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x263264u;
        goto label_263264;
    }
    ctx->pc = 0x26325Cu;
    {
        const bool branch_taken_0x26325c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26325c) {
            ctx->pc = 0x263260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26325Cu;
            // 0x263260: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263264u;
label_263264:
    // 0x263264: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x263264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_263268:
    // 0x263268: 0x165500ef  bne         $s2, $s5, . + 4 + (0xEF << 2)
label_26326c:
    if (ctx->pc == 0x26326Cu) {
        ctx->pc = 0x26326Cu;
            // 0x26326c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x263270u;
        goto label_263270;
    }
    ctx->pc = 0x263268u;
    {
        const bool branch_taken_0x263268 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x26326Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263268u;
            // 0x26326c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263268) {
            ctx->pc = 0x263628u;
            goto label_263628;
        }
    }
    ctx->pc = 0x263270u;
label_263270:
    // 0x263270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x263270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263274:
    // 0x263274: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x263274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_263278:
    // 0x263278: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x263278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26327c:
    // 0x26327c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_263280:
    // 0x263280: 0xc04a83e  jal         func_12A0F8
label_263284:
    if (ctx->pc == 0x263284u) {
        ctx->pc = 0x263284u;
            // 0x263284: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x263288u;
        goto label_263288;
    }
    ctx->pc = 0x263280u;
    SET_GPR_U32(ctx, 31, 0x263288u);
    ctx->pc = 0x263284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263280u;
            // 0x263284: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263288u; }
        if (ctx->pc != 0x263288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263288u; }
        if (ctx->pc != 0x263288u) { return; }
    }
    ctx->pc = 0x263288u;
label_263288:
    // 0x263288: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x263288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26328c:
    // 0x26328c: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x26328cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_263290:
    // 0x263290: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
label_263294:
    if (ctx->pc == 0x263294u) {
        ctx->pc = 0x263294u;
            // 0x263294: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x263298u;
        goto label_263298;
    }
    ctx->pc = 0x263290u;
    {
        const bool branch_taken_0x263290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263290u;
            // 0x263294: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263290) {
            ctx->pc = 0x263518u;
            goto label_263518;
        }
    }
    ctx->pc = 0x263298u;
label_263298:
    // 0x263298: 0xc04a83e  jal         func_12A0F8
label_26329c:
    if (ctx->pc == 0x26329Cu) {
        ctx->pc = 0x26329Cu;
            // 0x26329c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x2632A0u;
        goto label_2632a0;
    }
    ctx->pc = 0x263298u;
    SET_GPR_U32(ctx, 31, 0x2632A0u);
    ctx->pc = 0x26329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263298u;
            // 0x26329c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632A0u; }
        if (ctx->pc != 0x2632A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632A0u; }
        if (ctx->pc != 0x2632A0u) { return; }
    }
    ctx->pc = 0x2632A0u;
label_2632a0:
    // 0x2632a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2632a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2632a4:
    // 0x2632a4: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2632a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2632a8:
    // 0x2632a8: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x2632a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2632ac:
    // 0x2632ac: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2632acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2632b0:
    // 0x2632b0: 0x544000ad  bnel        $v0, $zero, . + 4 + (0xAD << 2)
label_2632b4:
    if (ctx->pc == 0x2632B4u) {
        ctx->pc = 0x2632B4u;
            // 0x2632b4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x2632B8u;
        goto label_2632b8;
    }
    ctx->pc = 0x2632B0u;
    {
        const bool branch_taken_0x2632b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2632b0) {
            ctx->pc = 0x2632B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2632B0u;
            // 0x2632b4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x2632B8u;
label_2632b8:
    // 0x2632b8: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x2632b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_2632bc:
    // 0x2632bc: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
label_2632c0:
    if (ctx->pc == 0x2632C0u) {
        ctx->pc = 0x2632C0u;
            // 0x2632c0: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x2632C4u;
        goto label_2632c4;
    }
    ctx->pc = 0x2632BCu;
    {
        const bool branch_taken_0x2632bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2632C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2632BCu;
            // 0x2632c0: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632bc) {
            ctx->pc = 0x263518u;
            goto label_263518;
        }
    }
    ctx->pc = 0x2632C4u;
label_2632c4:
    // 0x2632c4: 0xc04a7dc  jal         func_129F70
label_2632c8:
    if (ctx->pc == 0x2632C8u) {
        ctx->pc = 0x2632C8u;
            // 0x2632c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2632CCu;
        goto label_2632cc;
    }
    ctx->pc = 0x2632C4u;
    SET_GPR_U32(ctx, 31, 0x2632CCu);
    ctx->pc = 0x2632C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2632C4u;
            // 0x2632c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632CCu; }
        if (ctx->pc != 0x2632CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632CCu; }
        if (ctx->pc != 0x2632CCu) { return; }
    }
    ctx->pc = 0x2632CCu;
label_2632cc:
    // 0x2632cc: 0x8ec3004c  lw          $v1, 0x4C($s6)
    ctx->pc = 0x2632ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_2632d0:
    // 0x2632d0: 0xac730090  sw          $s3, 0x90($v1)
    ctx->pc = 0x2632d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 19));
label_2632d4:
    // 0x2632d4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2632d8:
    if (ctx->pc == 0x2632D8u) {
        ctx->pc = 0x2632D8u;
            // 0x2632d8: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x2632DCu;
        goto label_2632dc;
    }
    ctx->pc = 0x2632D4u;
    {
        const bool branch_taken_0x2632d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2632D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2632D4u;
            // 0x2632d8: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632d4) {
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x2632DCu;
label_2632dc:
    // 0x2632dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2632dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2632e0:
    // 0x2632e0: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_2632e4:
    if (ctx->pc == 0x2632E4u) {
        ctx->pc = 0x2632E4u;
            // 0x2632e4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x2632E8u;
        goto label_2632e8;
    }
    ctx->pc = 0x2632E0u;
    {
        const bool branch_taken_0x2632e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2632E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2632E0u;
            // 0x2632e4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632e0) {
            ctx->pc = 0x26336Cu;
            goto label_26336c;
        }
    }
    ctx->pc = 0x2632E8u;
label_2632e8:
    // 0x2632e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2632e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2632ec:
    // 0x2632ec: 0x1622001f  bne         $s1, $v0, . + 4 + (0x1F << 2)
label_2632f0:
    if (ctx->pc == 0x2632F0u) {
        ctx->pc = 0x2632F0u;
            // 0x2632f0: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x2632F4u;
        goto label_2632f4;
    }
    ctx->pc = 0x2632ECu;
    {
        const bool branch_taken_0x2632ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2632F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2632ECu;
            // 0x2632f0: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632ec) {
            ctx->pc = 0x26336Cu;
            goto label_26336c;
        }
    }
    ctx->pc = 0x2632F4u;
label_2632f4:
    // 0x2632f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2632f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2632f8:
    // 0x2632f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2632f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2632fc:
    // 0x2632fc: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x2632fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_263300:
    // 0x263300: 0x24080401  addiu       $t0, $zero, 0x401
    ctx->pc = 0x263300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_263304:
    // 0x263304: 0xc09927e  jal         func_2649F8
label_263308:
    if (ctx->pc == 0x263308u) {
        ctx->pc = 0x263308u;
            // 0x263308: 0x8fa70034  lw          $a3, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x26330Cu;
        goto label_26330c;
    }
    ctx->pc = 0x263304u;
    SET_GPR_U32(ctx, 31, 0x26330Cu);
    ctx->pc = 0x263308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263304u;
            // 0x263308: 0x8fa70034  lw          $a3, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2649F8u;
    if (runtime->hasFunction(0x2649F8u)) {
        auto targetFn = runtime->lookupFunction(0x2649F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26330Cu; }
        if (ctx->pc != 0x26330Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002649F8_0x2649f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26330Cu; }
        if (ctx->pc != 0x26330Cu) { return; }
    }
    ctx->pc = 0x26330Cu;
label_26330c:
    // 0x26330c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26330cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263310:
    // 0x263310: 0x6020095  bltzl       $s0, . + 4 + (0x95 << 2)
label_263314:
    if (ctx->pc == 0x263314u) {
        ctx->pc = 0x263314u;
            // 0x263314: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x263318u;
        goto label_263318;
    }
    ctx->pc = 0x263310u;
    {
        const bool branch_taken_0x263310 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x263310) {
            ctx->pc = 0x263314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263310u;
            // 0x263314: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263318u;
label_263318:
    // 0x263318: 0xc099316  jal         func_264C58
label_26331c:
    if (ctx->pc == 0x26331Cu) {
        ctx->pc = 0x26331Cu;
            // 0x26331c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x263320u;
        goto label_263320;
    }
    ctx->pc = 0x263318u;
    SET_GPR_U32(ctx, 31, 0x263320u);
    ctx->pc = 0x26331Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263318u;
            // 0x26331c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264C58u;
    if (runtime->hasFunction(0x264C58u)) {
        auto targetFn = runtime->lookupFunction(0x264C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263320u; }
        if (ctx->pc != 0x263320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264C58_0x264c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263320u; }
        if (ctx->pc != 0x263320u) { return; }
    }
    ctx->pc = 0x263320u;
label_263320:
    // 0x263320: 0x50400091  beql        $v0, $zero, . + 4 + (0x91 << 2)
label_263324:
    if (ctx->pc == 0x263324u) {
        ctx->pc = 0x263324u;
            // 0x263324: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x263328u;
        goto label_263328;
    }
    ctx->pc = 0x263320u;
    {
        const bool branch_taken_0x263320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263320) {
            ctx->pc = 0x263324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263320u;
            // 0x263324: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263328u;
label_263328:
    // 0x263328: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x263328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_26332c:
    // 0x26332c: 0x165500be  bne         $s2, $s5, . + 4 + (0xBE << 2)
label_263330:
    if (ctx->pc == 0x263330u) {
        ctx->pc = 0x263334u;
        goto label_263334;
    }
    ctx->pc = 0x26332Cu;
    {
        const bool branch_taken_0x26332c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x26332c) {
            ctx->pc = 0x263628u;
            goto label_263628;
        }
    }
    ctx->pc = 0x263334u;
label_263334:
    // 0x263334: 0xc04a83e  jal         func_12A0F8
label_263338:
    if (ctx->pc == 0x263338u) {
        ctx->pc = 0x263338u;
            // 0x263338: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x26333Cu;
        goto label_26333c;
    }
    ctx->pc = 0x263334u;
    SET_GPR_U32(ctx, 31, 0x26333Cu);
    ctx->pc = 0x263338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263334u;
            // 0x263338: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26333Cu; }
        if (ctx->pc != 0x26333Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26333Cu; }
        if (ctx->pc != 0x26333Cu) { return; }
    }
    ctx->pc = 0x26333Cu;
label_26333c:
    // 0x26333c: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x26333cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_263340:
    // 0x263340: 0x3d0102a  slt         $v0, $fp, $s0
    ctx->pc = 0x263340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_263344:
    // 0x263344: 0x54400088  bnel        $v0, $zero, . + 4 + (0x88 << 2)
label_263348:
    if (ctx->pc == 0x263348u) {
        ctx->pc = 0x263348u;
            // 0x263348: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x26334Cu;
        goto label_26334c;
    }
    ctx->pc = 0x263344u;
    {
        const bool branch_taken_0x263344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263344) {
            ctx->pc = 0x263348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263344u;
            // 0x263348: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x26334Cu;
label_26334c:
    // 0x26334c: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x26334cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_263350:
    // 0x263350: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_263354:
    if (ctx->pc == 0x263354u) {
        ctx->pc = 0x263354u;
            // 0x263354: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x263358u;
        goto label_263358;
    }
    ctx->pc = 0x263350u;
    {
        const bool branch_taken_0x263350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263350u;
            // 0x263354: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263350) {
            ctx->pc = 0x263518u;
            goto label_263518;
        }
    }
    ctx->pc = 0x263358u;
label_263358:
    // 0x263358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x263358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26335c:
    // 0x26335c: 0xc04a7dc  jal         func_129F70
label_263360:
    if (ctx->pc == 0x263360u) {
        ctx->pc = 0x263360u;
            // 0x263360: 0xafb30038  sw          $s3, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 19));
        ctx->pc = 0x263364u;
        goto label_263364;
    }
    ctx->pc = 0x26335Cu;
    SET_GPR_U32(ctx, 31, 0x263364u);
    ctx->pc = 0x263360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26335Cu;
            // 0x263360: 0xafb30038  sw          $s3, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263364u; }
        if (ctx->pc != 0x263364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263364u; }
        if (ctx->pc != 0x263364u) { return; }
    }
    ctx->pc = 0x263364u;
label_263364:
    // 0x263364: 0x10000080  b           . + 4 + (0x80 << 2)
label_263368:
    if (ctx->pc == 0x263368u) {
        ctx->pc = 0x263368u;
            // 0x263368: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x26336Cu;
        goto label_26336c;
    }
    ctx->pc = 0x263364u;
    {
        const bool branch_taken_0x263364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263364u;
            // 0x263368: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263364) {
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x26336Cu;
label_26336c:
    // 0x26336c: 0x5622007e  bnel        $s1, $v0, . + 4 + (0x7E << 2)
label_263370:
    if (ctx->pc == 0x263370u) {
        ctx->pc = 0x263370u;
            // 0x263370: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263374u;
        goto label_263374;
    }
    ctx->pc = 0x26336Cu;
    {
        const bool branch_taken_0x26336c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x26336c) {
            ctx->pc = 0x263370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26336Cu;
            // 0x263370: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263374u;
label_263374:
    // 0x263374: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x263374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_263378:
    // 0x263378: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
label_26337c:
    if (ctx->pc == 0x26337Cu) {
        ctx->pc = 0x26337Cu;
            // 0x26337c: 0x2a22000d  slti        $v0, $s1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->pc = 0x263380u;
        goto label_263380;
    }
    ctx->pc = 0x263378u;
    {
        const bool branch_taken_0x263378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263378u;
            // 0x26337c: 0x2a22000d  slti        $v0, $s1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263378) {
            ctx->pc = 0x2633ACu;
            goto label_2633ac;
        }
    }
    ctx->pc = 0x263380u;
label_263380:
    // 0x263380: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_263384:
    if (ctx->pc == 0x263384u) {
        ctx->pc = 0x263384u;
            // 0x263384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263388u;
        goto label_263388;
    }
    ctx->pc = 0x263380u;
    {
        const bool branch_taken_0x263380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263380u;
            // 0x263384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263380) {
            ctx->pc = 0x263398u;
            goto label_263398;
        }
    }
    ctx->pc = 0x263388u;
label_263388:
    // 0x263388: 0x52220035  beql        $s1, $v0, . + 4 + (0x35 << 2)
label_26338c:
    if (ctx->pc == 0x26338Cu) {
        ctx->pc = 0x26338Cu;
            // 0x26338c: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->pc = 0x263390u;
        goto label_263390;
    }
    ctx->pc = 0x263388u;
    {
        const bool branch_taken_0x263388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x263388) {
            ctx->pc = 0x26338Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263388u;
            // 0x26338c: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263460u;
            goto label_263460;
        }
    }
    ctx->pc = 0x263390u;
label_263390:
    // 0x263390: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_263394:
    if (ctx->pc == 0x263394u) {
        ctx->pc = 0x263398u;
        goto label_263398;
    }
    ctx->pc = 0x263390u;
    {
        const bool branch_taken_0x263390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263390) {
            ctx->pc = 0x263638u;
            goto label_263638;
        }
    }
    ctx->pc = 0x263398u;
label_263398:
    // 0x263398: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x263398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_26339c:
    // 0x26339c: 0x52230030  beql        $s1, $v1, . + 4 + (0x30 << 2)
label_2633a0:
    if (ctx->pc == 0x2633A0u) {
        ctx->pc = 0x2633A0u;
            // 0x2633a0: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->pc = 0x2633A4u;
        goto label_2633a4;
    }
    ctx->pc = 0x26339Cu;
    {
        const bool branch_taken_0x26339c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x26339c) {
            ctx->pc = 0x2633A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26339Cu;
            // 0x2633a0: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263460u;
            goto label_263460;
        }
    }
    ctx->pc = 0x2633A4u;
label_2633a4:
    // 0x2633a4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2633a8:
    if (ctx->pc == 0x2633A8u) {
        ctx->pc = 0x2633ACu;
        goto label_2633ac;
    }
    ctx->pc = 0x2633A4u;
    {
        const bool branch_taken_0x2633a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2633a4) {
            ctx->pc = 0x263638u;
            goto label_263638;
        }
    }
    ctx->pc = 0x2633ACu;
label_2633ac:
    // 0x2633ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2633acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2633b0:
    // 0x2633b0: 0xc04a6b2  jal         func_129AC8
label_2633b4:
    if (ctx->pc == 0x2633B4u) {
        ctx->pc = 0x2633B4u;
            // 0x2633b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2633B8u;
        goto label_2633b8;
    }
    ctx->pc = 0x2633B0u;
    SET_GPR_U32(ctx, 31, 0x2633B8u);
    ctx->pc = 0x2633B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2633B0u;
            // 0x2633b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129AC8u;
    if (runtime->hasFunction(0x129AC8u)) {
        auto targetFn = runtime->lookupFunction(0x129AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633B8u; }
        if (ctx->pc != 0x2633B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129AC8_0x129ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633B8u; }
        if (ctx->pc != 0x2633B8u) { return; }
    }
    ctx->pc = 0x2633B8u;
label_2633b8:
    // 0x2633b8: 0x5440006b  bnel        $v0, $zero, . + 4 + (0x6B << 2)
label_2633bc:
    if (ctx->pc == 0x2633BCu) {
        ctx->pc = 0x2633BCu;
            // 0x2633bc: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2633C0u;
        goto label_2633c0;
    }
    ctx->pc = 0x2633B8u;
    {
        const bool branch_taken_0x2633b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2633b8) {
            ctx->pc = 0x2633BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2633B8u;
            // 0x2633bc: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x2633C0u;
label_2633c0:
    // 0x2633c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2633c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2633c4:
    // 0x2633c4: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2633c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2633c8:
    // 0x2633c8: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x2633c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2633cc:
    // 0x2633cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2633ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2633d0:
    // 0x2633d0: 0xc09927e  jal         func_2649F8
label_2633d4:
    if (ctx->pc == 0x2633D4u) {
        ctx->pc = 0x2633D4u;
            // 0x2633d4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2633D8u;
        goto label_2633d8;
    }
    ctx->pc = 0x2633D0u;
    SET_GPR_U32(ctx, 31, 0x2633D8u);
    ctx->pc = 0x2633D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2633D0u;
            // 0x2633d4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2649F8u;
    if (runtime->hasFunction(0x2649F8u)) {
        auto targetFn = runtime->lookupFunction(0x2649F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633D8u; }
        if (ctx->pc != 0x2633D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002649F8_0x2649f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633D8u; }
        if (ctx->pc != 0x2633D8u) { return; }
    }
    ctx->pc = 0x2633D8u;
label_2633d8:
    // 0x2633d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2633d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2633dc:
    // 0x2633dc: 0x602005e  bltzl       $s0, . + 4 + (0x5E << 2)
label_2633e0:
    if (ctx->pc == 0x2633E0u) {
        ctx->pc = 0x2633E0u;
            // 0x2633e0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x2633E4u;
        goto label_2633e4;
    }
    ctx->pc = 0x2633DCu;
    {
        const bool branch_taken_0x2633dc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2633dc) {
            ctx->pc = 0x2633E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2633DCu;
            // 0x2633e0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263558u;
            goto label_263558;
        }
    }
    ctx->pc = 0x2633E4u;
label_2633e4:
    // 0x2633e4: 0xc0992a8  jal         func_264AA0
label_2633e8:
    if (ctx->pc == 0x2633E8u) {
        ctx->pc = 0x2633E8u;
            // 0x2633e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2633ECu;
        goto label_2633ec;
    }
    ctx->pc = 0x2633E4u;
    SET_GPR_U32(ctx, 31, 0x2633ECu);
    ctx->pc = 0x2633E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2633E4u;
            // 0x2633e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264AA0u;
    if (runtime->hasFunction(0x264AA0u)) {
        auto targetFn = runtime->lookupFunction(0x264AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633ECu; }
        if (ctx->pc != 0x2633ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264AA0_0x264aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633ECu; }
        if (ctx->pc != 0x2633ECu) { return; }
    }
    ctx->pc = 0x2633ECu;
label_2633ec:
    // 0x2633ec: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
label_2633f0:
    if (ctx->pc == 0x2633F0u) {
        ctx->pc = 0x2633F0u;
            // 0x2633f0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x2633F4u;
        goto label_2633f4;
    }
    ctx->pc = 0x2633ECu;
    {
        const bool branch_taken_0x2633ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2633ec) {
            ctx->pc = 0x2633F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2633ECu;
            // 0x2633f0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263558u;
            goto label_263558;
        }
    }
    ctx->pc = 0x2633F4u;
label_2633f4:
    // 0x2633f4: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2633f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2633f8:
    // 0x2633f8: 0x1655008b  bne         $s2, $s5, . + 4 + (0x8B << 2)
label_2633fc:
    if (ctx->pc == 0x2633FCu) {
        ctx->pc = 0x2633FCu;
            // 0x2633fc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x263400u;
        goto label_263400;
    }
    ctx->pc = 0x2633F8u;
    {
        const bool branch_taken_0x2633f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x2633FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2633F8u;
            // 0x2633fc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633f8) {
            ctx->pc = 0x263628u;
            goto label_263628;
        }
    }
    ctx->pc = 0x263400u;
label_263400:
    // 0x263400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_263404:
    if (ctx->pc == 0x263404u) {
        ctx->pc = 0x263404u;
            // 0x263404: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->pc = 0x263408u;
        goto label_263408;
    }
    ctx->pc = 0x263400u;
    {
        const bool branch_taken_0x263400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263400u;
            // 0x263404: 0x8ec2004c  lw          $v0, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263400) {
            ctx->pc = 0x263410u;
            goto label_263410;
        }
    }
    ctx->pc = 0x263408u;
label_263408:
    // 0x263408: 0x1000000a  b           . + 4 + (0xA << 2)
label_26340c:
    if (ctx->pc == 0x26340Cu) {
        ctx->pc = 0x26340Cu;
            // 0x26340c: 0xac530090  sw          $s3, 0x90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 19));
        ctx->pc = 0x263410u;
        goto label_263410;
    }
    ctx->pc = 0x263408u;
    {
        const bool branch_taken_0x263408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26340Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263408u;
            // 0x26340c: 0xac530090  sw          $s3, 0x90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263408) {
            ctx->pc = 0x263434u;
            goto label_263434;
        }
    }
    ctx->pc = 0x263410u;
label_263410:
    // 0x263410: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x263410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_263414:
    // 0x263414: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x263414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_263418:
    // 0x263418: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x263418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26341c:
    // 0x26341c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_263420:
    if (ctx->pc == 0x263420u) {
        ctx->pc = 0x263420u;
            // 0x263420: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x263424u;
        goto label_263424;
    }
    ctx->pc = 0x26341Cu;
    {
        const bool branch_taken_0x26341c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26341c) {
            ctx->pc = 0x263420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26341Cu;
            // 0x263420: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263434u;
            goto label_263434;
        }
    }
    ctx->pc = 0x263424u;
label_263424:
    // 0x263424: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x263424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_263428:
    // 0x263428: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x263428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26342c:
    // 0x26342c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x26342cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_263430:
    // 0x263430: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x263430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_263434:
    // 0x263434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x263434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_263438:
    // 0x263438: 0x12020048  beq         $s0, $v0, . + 4 + (0x48 << 2)
label_26343c:
    if (ctx->pc == 0x26343Cu) {
        ctx->pc = 0x26343Cu;
            // 0x26343c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x263440u;
        goto label_263440;
    }
    ctx->pc = 0x263438u;
    {
        const bool branch_taken_0x263438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263438u;
            // 0x26343c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263438) {
            ctx->pc = 0x26355Cu;
            goto label_26355c;
        }
    }
    ctx->pc = 0x263440u;
label_263440:
    // 0x263440: 0xc04a83e  jal         func_12A0F8
label_263444:
    if (ctx->pc == 0x263444u) {
        ctx->pc = 0x263444u;
            // 0x263444: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263448u;
        goto label_263448;
    }
    ctx->pc = 0x263440u;
    SET_GPR_U32(ctx, 31, 0x263448u);
    ctx->pc = 0x263444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263440u;
            // 0x263444: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263448u; }
        if (ctx->pc != 0x263448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263448u; }
        if (ctx->pc != 0x263448u) { return; }
    }
    ctx->pc = 0x263448u;
label_263448:
    // 0x263448: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x263448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26344c:
    // 0x26344c: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x26344cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_263450:
    // 0x263450: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_263454:
    if (ctx->pc == 0x263454u) {
        ctx->pc = 0x263454u;
            // 0x263454: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x263458u;
        goto label_263458;
    }
    ctx->pc = 0x263450u;
    {
        const bool branch_taken_0x263450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263450) {
            ctx->pc = 0x263454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263450u;
            // 0x263454: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263558u;
            goto label_263558;
        }
    }
    ctx->pc = 0x263458u;
label_263458:
    // 0x263458: 0x1000003f  b           . + 4 + (0x3F << 2)
label_26345c:
    if (ctx->pc == 0x26345Cu) {
        ctx->pc = 0x26345Cu;
            // 0x26345c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x263460u;
        goto label_263460;
    }
    ctx->pc = 0x263458u;
    {
        const bool branch_taken_0x263458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263458u;
            // 0x26345c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263458) {
            ctx->pc = 0x263558u;
            goto label_263558;
        }
    }
    ctx->pc = 0x263460u;
label_263460:
    // 0x263460: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x263460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263464:
    // 0x263464: 0xc04a6b2  jal         func_129AC8
label_263468:
    if (ctx->pc == 0x263468u) {
        ctx->pc = 0x263468u;
            // 0x263468: 0x8c440090  lw          $a0, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->pc = 0x26346Cu;
        goto label_26346c;
    }
    ctx->pc = 0x263464u;
    SET_GPR_U32(ctx, 31, 0x26346Cu);
    ctx->pc = 0x263468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263464u;
            // 0x263468: 0x8c440090  lw          $a0, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129AC8u;
    if (runtime->hasFunction(0x129AC8u)) {
        auto targetFn = runtime->lookupFunction(0x129AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26346Cu; }
        if (ctx->pc != 0x26346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129AC8_0x129ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26346Cu; }
        if (ctx->pc != 0x26346Cu) { return; }
    }
    ctx->pc = 0x26346Cu;
label_26346c:
    // 0x26346c: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
label_263470:
    if (ctx->pc == 0x263470u) {
        ctx->pc = 0x263470u;
            // 0x263470: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263474u;
        goto label_263474;
    }
    ctx->pc = 0x26346Cu;
    {
        const bool branch_taken_0x26346c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26346c) {
            ctx->pc = 0x263470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26346Cu;
            // 0x263470: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263474u;
label_263474:
    // 0x263474: 0x8ec5004c  lw          $a1, 0x4C($s6)
    ctx->pc = 0x263474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_263478:
    // 0x263478: 0x8ca2009c  lw          $v0, 0x9C($a1)
    ctx->pc = 0x263478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
label_26347c:
    // 0x26347c: 0x5602003a  bnel        $s0, $v0, . + 4 + (0x3A << 2)
label_263480:
    if (ctx->pc == 0x263480u) {
        ctx->pc = 0x263480u;
            // 0x263480: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263484u;
        goto label_263484;
    }
    ctx->pc = 0x26347Cu;
    {
        const bool branch_taken_0x26347c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26347c) {
            ctx->pc = 0x263480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26347Cu;
            // 0x263480: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263484u;
label_263484:
    // 0x263484: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x263484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_263488:
    // 0x263488: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
label_26348c:
    if (ctx->pc == 0x26348Cu) {
        ctx->pc = 0x26348Cu;
            // 0x26348c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x263490u;
        goto label_263490;
    }
    ctx->pc = 0x263488u;
    {
        const bool branch_taken_0x263488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263488u;
            // 0x26348c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263488) {
            ctx->pc = 0x2634D8u;
            goto label_2634d8;
        }
    }
    ctx->pc = 0x263490u;
label_263490:
    // 0x263490: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x263490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_263494:
    // 0x263494: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x263494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263498:
    // 0x263498: 0xc08b538  jal         func_22D4E0
label_26349c:
    if (ctx->pc == 0x26349Cu) {
        ctx->pc = 0x26349Cu;
            // 0x26349c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2634A0u;
        goto label_2634a0;
    }
    ctx->pc = 0x263498u;
    SET_GPR_U32(ctx, 31, 0x2634A0u);
    ctx->pc = 0x26349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263498u;
            // 0x26349c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634A0u; }
        if (ctx->pc != 0x2634A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634A0u; }
        if (ctx->pc != 0x2634A0u) { return; }
    }
    ctx->pc = 0x2634A0u;
label_2634a0:
    // 0x2634a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2634a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2634a4:
    // 0x2634a4: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_2634a8:
    if (ctx->pc == 0x2634A8u) {
        ctx->pc = 0x2634A8u;
            // 0x2634a8: 0x8ec5004c  lw          $a1, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->pc = 0x2634ACu;
        goto label_2634ac;
    }
    ctx->pc = 0x2634A4u;
    {
        const bool branch_taken_0x2634a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2634a4) {
            ctx->pc = 0x2634A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2634A4u;
            // 0x2634a8: 0x8ec5004c  lw          $a1, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2634D4u;
            goto label_2634d4;
        }
    }
    ctx->pc = 0x2634ACu;
label_2634ac:
    // 0x2634ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2634acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2634b0:
    // 0x2634b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2634b4:
    if (ctx->pc == 0x2634B4u) {
        ctx->pc = 0x2634B4u;
            // 0x2634b4: 0x8ec5004c  lw          $a1, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->pc = 0x2634B8u;
        goto label_2634b8;
    }
    ctx->pc = 0x2634B0u;
    {
        const bool branch_taken_0x2634b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2634b0) {
            ctx->pc = 0x2634B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2634B0u;
            // 0x2634b4: 0x8ec5004c  lw          $a1, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2634D4u;
            goto label_2634d4;
        }
    }
    ctx->pc = 0x2634B8u;
label_2634b8:
    // 0x2634b8: 0xc08b5fe  jal         func_22D7F8
label_2634bc:
    if (ctx->pc == 0x2634BCu) {
        ctx->pc = 0x2634BCu;
            // 0x2634bc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2634C0u;
        goto label_2634c0;
    }
    ctx->pc = 0x2634B8u;
    SET_GPR_U32(ctx, 31, 0x2634C0u);
    ctx->pc = 0x2634BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2634B8u;
            // 0x2634bc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (runtime->hasFunction(0x22D7F8u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634C0u; }
        if (ctx->pc != 0x2634C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F8_0x22d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634C0u; }
        if (ctx->pc != 0x2634C0u) { return; }
    }
    ctx->pc = 0x2634C0u;
label_2634c0:
    // 0x2634c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2634c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2634c4:
    // 0x2634c4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_2634c8:
    if (ctx->pc == 0x2634C8u) {
        ctx->pc = 0x2634C8u;
            // 0x2634c8: 0x8ec5004c  lw          $a1, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->pc = 0x2634CCu;
        goto label_2634cc;
    }
    ctx->pc = 0x2634C4u;
    {
        const bool branch_taken_0x2634c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2634c4) {
            ctx->pc = 0x2634C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2634C4u;
            // 0x2634c8: 0x8ec5004c  lw          $a1, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2634D4u;
            goto label_2634d4;
        }
    }
    ctx->pc = 0x2634CCu;
label_2634cc:
    // 0x2634cc: 0x10000026  b           . + 4 + (0x26 << 2)
label_2634d0:
    if (ctx->pc == 0x2634D0u) {
        ctx->pc = 0x2634D0u;
            // 0x2634d0: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2634D4u;
        goto label_2634d4;
    }
    ctx->pc = 0x2634CCu;
    {
        const bool branch_taken_0x2634cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634CCu;
            // 0x2634d0: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634cc) {
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x2634D4u;
label_2634d4:
    // 0x2634d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2634d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2634d8:
    // 0x2634d8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2634dc:
    if (ctx->pc == 0x2634DCu) {
        ctx->pc = 0x2634DCu;
            // 0x2634dc: 0x32620003  andi        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x2634E0u;
        goto label_2634e0;
    }
    ctx->pc = 0x2634D8u;
    {
        const bool branch_taken_0x2634d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2634DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634D8u;
            // 0x2634dc: 0x32620003  andi        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634d8) {
            ctx->pc = 0x2634FCu;
            goto label_2634fc;
        }
    }
    ctx->pc = 0x2634E0u;
label_2634e0:
    // 0x2634e0: 0xacb30090  sw          $s3, 0x90($a1)
    ctx->pc = 0x2634e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 19));
label_2634e4:
    // 0x2634e4: 0xc04a83e  jal         func_12A0F8
label_2634e8:
    if (ctx->pc == 0x2634E8u) {
        ctx->pc = 0x2634E8u;
            // 0x2634e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2634ECu;
        goto label_2634ec;
    }
    ctx->pc = 0x2634E4u;
    SET_GPR_U32(ctx, 31, 0x2634ECu);
    ctx->pc = 0x2634E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2634E4u;
            // 0x2634e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634ECu; }
        if (ctx->pc != 0x2634ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634ECu; }
        if (ctx->pc != 0x2634ECu) { return; }
    }
    ctx->pc = 0x2634ECu;
label_2634ec:
    // 0x2634ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2634ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2634f0:
    // 0x2634f0: 0x8ec5004c  lw          $a1, 0x4C($s6)
    ctx->pc = 0x2634f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_2634f4:
    // 0x2634f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2634f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2634f8:
    // 0x2634f8: 0x32620003  andi        $v0, $s3, 0x3
    ctx->pc = 0x2634f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
label_2634fc:
    // 0x2634fc: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x2634fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_263500:
    // 0x263500: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x263500u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_263504:
    // 0x263504: 0x24a42130  addiu       $a0, $a1, 0x2130
    ctx->pc = 0x263504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8496));
label_263508:
    // 0x263508: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x263508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_26350c:
    // 0x26350c: 0x224202b  sltu        $a0, $s1, $a0
    ctx->pc = 0x26350cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_263510:
    // 0x263510: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_263514:
    if (ctx->pc == 0x263514u) {
        ctx->pc = 0x263514u;
            // 0x263514: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x263518u;
        goto label_263518;
    }
    ctx->pc = 0x263510u;
    {
        const bool branch_taken_0x263510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x263514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263510u;
            // 0x263514: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263510) {
            ctx->pc = 0x263520u;
            goto label_263520;
        }
    }
    ctx->pc = 0x263518u;
label_263518:
    // 0x263518: 0x10000013  b           . + 4 + (0x13 << 2)
label_26351c:
    if (ctx->pc == 0x26351Cu) {
        ctx->pc = 0x26351Cu;
            // 0x26351c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x263520u;
        goto label_263520;
    }
    ctx->pc = 0x263518u;
    {
        const bool branch_taken_0x263518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26351Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263518u;
            // 0x26351c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263518) {
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263520u;
label_263520:
    // 0x263520: 0x24a20088  addiu       $v0, $a1, 0x88
    ctx->pc = 0x263520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 136));
label_263524:
    // 0x263524: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x263524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_263528:
    // 0x263528: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
label_26352c:
    if (ctx->pc == 0x26352Cu) {
        ctx->pc = 0x26352Cu;
            // 0x26352c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x263530u;
        goto label_263530;
    }
    ctx->pc = 0x263528u;
    {
        const bool branch_taken_0x263528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263528u;
            // 0x26352c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263528) {
            ctx->pc = 0x2634CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2634cc;
        }
    }
    ctx->pc = 0x263530u;
label_263530:
    // 0x263530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x263530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263534:
    // 0x263534: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x263534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263538:
    // 0x263538: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x263538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26353c:
    // 0x26353c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x26353cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_263540:
    // 0x263540: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x263540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263544:
    // 0x263544: 0xc08b538  jal         func_22D4E0
label_263548:
    if (ctx->pc == 0x263548u) {
        ctx->pc = 0x263548u;
            // 0x263548: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26354Cu;
        goto label_26354c;
    }
    ctx->pc = 0x263544u;
    SET_GPR_U32(ctx, 31, 0x26354Cu);
    ctx->pc = 0x263548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263544u;
            // 0x263548: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26354Cu; }
        if (ctx->pc != 0x26354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26354Cu; }
        if (ctx->pc != 0x26354Cu) { return; }
    }
    ctx->pc = 0x26354Cu;
label_26354c:
    // 0x26354c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x26354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_263550:
    // 0x263550: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x263550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_263554:
    // 0x263554: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x263554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_263558:
    // 0x263558: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x263558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_26355c:
    // 0x26355c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x26355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_263560:
    // 0x263560: 0x57180a  movz        $v1, $v0, $s7
    ctx->pc = 0x263560u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_263564:
    // 0x263564: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x263564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_263568:
    // 0x263568: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x263568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_26356c:
    // 0x26356c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26356cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263570:
    // 0x263570: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x263570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_263574:
    // 0x263574: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_263578:
    if (ctx->pc == 0x263578u) {
        ctx->pc = 0x263578u;
            // 0x263578: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x26357Cu;
        goto label_26357c;
    }
    ctx->pc = 0x263574u;
    {
        const bool branch_taken_0x263574 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263574u;
            // 0x263578: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263574) {
            ctx->pc = 0x263594u;
            goto label_263594;
        }
    }
    ctx->pc = 0x26357Cu;
label_26357c:
    // 0x26357c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x26357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_263580:
    // 0x263580: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x263580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_263584:
    // 0x263584: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_263588:
    if (ctx->pc == 0x263588u) {
        ctx->pc = 0x26358Cu;
        goto label_26358c;
    }
    ctx->pc = 0x263584u;
    {
        const bool branch_taken_0x263584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263584) {
            ctx->pc = 0x263594u;
            goto label_263594;
        }
    }
    ctx->pc = 0x26358Cu;
label_26358c:
    // 0x26358c: 0x12e0fef4  beqz        $s7, . + 4 + (-0x10C << 2)
label_263590:
    if (ctx->pc == 0x263590u) {
        ctx->pc = 0x263590u;
            // 0x263590: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x263594u;
        goto label_263594;
    }
    ctx->pc = 0x26358Cu;
    {
        const bool branch_taken_0x26358c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x263590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26358Cu;
            // 0x263590: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26358c) {
            ctx->pc = 0x263160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263160;
        }
    }
    ctx->pc = 0x263594u;
label_263594:
    // 0x263594: 0xc098560  jal         func_261580
label_263598:
    if (ctx->pc == 0x263598u) {
        ctx->pc = 0x263598u;
            // 0x263598: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x26359Cu;
        goto label_26359c;
    }
    ctx->pc = 0x263594u;
    SET_GPR_U32(ctx, 31, 0x26359Cu);
    ctx->pc = 0x263598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263594u;
            // 0x263598: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26359Cu; }
        if (ctx->pc != 0x26359Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26359Cu; }
        if (ctx->pc != 0x26359Cu) { return; }
    }
    ctx->pc = 0x26359Cu;
label_26359c:
    // 0x26359c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2635a0:
    // 0x2635a0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2635a4:
    if (ctx->pc == 0x2635A4u) {
        ctx->pc = 0x2635A4u;
            // 0x2635a4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2635A8u;
        goto label_2635a8;
    }
    ctx->pc = 0x2635A0u;
    {
        const bool branch_taken_0x2635a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635A0u;
            // 0x2635a4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635a0) {
            ctx->pc = 0x263614u;
            goto label_263614;
        }
    }
    ctx->pc = 0x2635A8u;
label_2635a8:
    // 0x2635a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2635a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2635ac:
    // 0x2635ac: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2635acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2635b0:
    // 0x2635b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2635b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2635b4:
    // 0x2635b4: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x2635b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_2635b8:
    // 0x2635b8: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2635b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2635bc:
    // 0x2635bc: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2635c0:
    if (ctx->pc == 0x2635C0u) {
        ctx->pc = 0x2635C4u;
        goto label_2635c4;
    }
    ctx->pc = 0x2635BCu;
    {
        const bool branch_taken_0x2635bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2635bc) {
            ctx->pc = 0x2635FCu;
            goto label_2635fc;
        }
    }
    ctx->pc = 0x2635C4u;
label_2635c4:
    // 0x2635c4: 0xc04a83e  jal         func_12A0F8
label_2635c8:
    if (ctx->pc == 0x2635C8u) {
        ctx->pc = 0x2635C8u;
            // 0x2635c8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x2635CCu;
        goto label_2635cc;
    }
    ctx->pc = 0x2635C4u;
    SET_GPR_U32(ctx, 31, 0x2635CCu);
    ctx->pc = 0x2635C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2635C4u;
            // 0x2635c8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635CCu; }
        if (ctx->pc != 0x2635CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635CCu; }
        if (ctx->pc != 0x2635CCu) { return; }
    }
    ctx->pc = 0x2635CCu;
label_2635cc:
    // 0x2635cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2635ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2635d0:
    // 0x2635d0: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2635d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2635d4:
    // 0x2635d4: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x2635d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2635d8:
    // 0x2635d8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2635d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2635dc:
    // 0x2635dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2635e0:
    if (ctx->pc == 0x2635E0u) {
        ctx->pc = 0x2635E0u;
            // 0x2635e0: 0x2a020100  slti        $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->pc = 0x2635E4u;
        goto label_2635e4;
    }
    ctx->pc = 0x2635DCu;
    {
        const bool branch_taken_0x2635dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2635E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635DCu;
            // 0x2635e0: 0x2a020100  slti        $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635dc) {
            ctx->pc = 0x263614u;
            goto label_263614;
        }
    }
    ctx->pc = 0x2635E4u;
label_2635e4:
    // 0x2635e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2635e8:
    if (ctx->pc == 0x2635E8u) {
        ctx->pc = 0x2635E8u;
            // 0x2635e8: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x2635ECu;
        goto label_2635ec;
    }
    ctx->pc = 0x2635E4u;
    {
        const bool branch_taken_0x2635e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635E4u;
            // 0x2635e8: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635e4) {
            ctx->pc = 0x263614u;
            goto label_263614;
        }
    }
    ctx->pc = 0x2635ECu;
label_2635ec:
    // 0x2635ec: 0xc04a7dc  jal         func_129F70
label_2635f0:
    if (ctx->pc == 0x2635F0u) {
        ctx->pc = 0x2635F0u;
            // 0x2635f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2635F4u;
        goto label_2635f4;
    }
    ctx->pc = 0x2635ECu;
    SET_GPR_U32(ctx, 31, 0x2635F4u);
    ctx->pc = 0x2635F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2635ECu;
            // 0x2635f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635F4u; }
        if (ctx->pc != 0x2635F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635F4u; }
        if (ctx->pc != 0x2635F4u) { return; }
    }
    ctx->pc = 0x2635F4u;
label_2635f4:
    // 0x2635f4: 0x8ec3004c  lw          $v1, 0x4C($s6)
    ctx->pc = 0x2635f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_2635f8:
    // 0x2635f8: 0xac730090  sw          $s3, 0x90($v1)
    ctx->pc = 0x2635f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 19));
label_2635fc:
    // 0x2635fc: 0xc097308  jal         func_25CC20
label_263600:
    if (ctx->pc == 0x263600u) {
        ctx->pc = 0x263604u;
        goto label_263604;
    }
    ctx->pc = 0x2635FCu;
    SET_GPR_U32(ctx, 31, 0x263604u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263604u; }
        if (ctx->pc != 0x263604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263604u; }
        if (ctx->pc != 0x263604u) { return; }
    }
    ctx->pc = 0x263604u;
label_263604:
    // 0x263604: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x263604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_263608:
    // 0x263608: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x263608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_26360c:
    // 0x26360c: 0x1000000d  b           . + 4 + (0xD << 2)
label_263610:
    if (ctx->pc == 0x263610u) {
        ctx->pc = 0x263610u;
            // 0x263610: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x263614u;
        goto label_263614;
    }
    ctx->pc = 0x26360Cu;
    {
        const bool branch_taken_0x26360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26360Cu;
            // 0x263610: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26360c) {
            ctx->pc = 0x263644u;
            goto label_263644;
        }
    }
    ctx->pc = 0x263614u;
label_263614:
    // 0x263614: 0xc097308  jal         func_25CC20
label_263618:
    if (ctx->pc == 0x263618u) {
        ctx->pc = 0x26361Cu;
        goto label_26361c;
    }
    ctx->pc = 0x263614u;
    SET_GPR_U32(ctx, 31, 0x26361Cu);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26361Cu; }
        if (ctx->pc != 0x26361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26361Cu; }
        if (ctx->pc != 0x26361Cu) { return; }
    }
    ctx->pc = 0x26361Cu;
label_26361c:
    // 0x26361c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_263620:
    // 0x263620: 0x10000007  b           . + 4 + (0x7 << 2)
label_263624:
    if (ctx->pc == 0x263624u) {
        ctx->pc = 0x263624u;
            // 0x263624: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x263628u;
        goto label_263628;
    }
    ctx->pc = 0x263620u;
    {
        const bool branch_taken_0x263620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263620u;
            // 0x263624: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263620) {
            ctx->pc = 0x263640u;
            goto label_263640;
        }
    }
    ctx->pc = 0x263628u;
label_263628:
    // 0x263628: 0xc097308  jal         func_25CC20
label_26362c:
    if (ctx->pc == 0x26362Cu) {
        ctx->pc = 0x263630u;
        goto label_263630;
    }
    ctx->pc = 0x263628u;
    SET_GPR_U32(ctx, 31, 0x263630u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263630u; }
        if (ctx->pc != 0x263630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263630u; }
        if (ctx->pc != 0x263630u) { return; }
    }
    ctx->pc = 0x263630u;
label_263630:
    // 0x263630: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x263630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_263634:
    // 0x263634: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x263634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_263638:
    // 0x263638: 0xc098560  jal         func_261580
label_26363c:
    if (ctx->pc == 0x26363Cu) {
        ctx->pc = 0x26363Cu;
            // 0x26363c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x263640u;
        goto label_263640;
    }
    ctx->pc = 0x263638u;
    SET_GPR_U32(ctx, 31, 0x263640u);
    ctx->pc = 0x26363Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263638u;
            // 0x26363c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263640u; }
        if (ctx->pc != 0x263640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263640u; }
        if (ctx->pc != 0x263640u) { return; }
    }
    ctx->pc = 0x263640u;
label_263640:
    // 0x263640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x263640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263644:
    // 0x263644: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x263644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_263648:
    // 0x263648: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x263648u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_26364c:
    // 0x26364c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x26364cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_263650:
    // 0x263650: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x263650u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_263654:
    // 0x263654: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x263654u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_263658:
    // 0x263658: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x263658u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26365c:
    // 0x26365c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x26365cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_263660:
    // 0x263660: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x263660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_263664:
    // 0x263664: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x263664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_263668:
    // 0x263668: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x263668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26366c:
    // 0x26366c: 0x3e00008  jr          $ra
label_263670:
    if (ctx->pc == 0x263670u) {
        ctx->pc = 0x263670u;
            // 0x263670: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x263674u;
        goto label_263674;
    }
    ctx->pc = 0x26366Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26366Cu;
            // 0x263670: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263674u;
label_263674:
    // 0x263674: 0x0  nop
    ctx->pc = 0x263674u;
    // NOP
    ctx->pc = 0x263678u;
}
