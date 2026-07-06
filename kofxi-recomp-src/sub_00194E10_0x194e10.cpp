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

// Function: sub_00194E10
// Address: 0x194e10 - 0x196410
void sub_00194E10_0x194e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194E10_0x194e10");
#endif

    switch (ctx->pc) {
        case 0x194e10u: goto label_194e10;
        case 0x194e14u: goto label_194e14;
        case 0x194e18u: goto label_194e18;
        case 0x194e1cu: goto label_194e1c;
        case 0x194e20u: goto label_194e20;
        case 0x194e24u: goto label_194e24;
        case 0x194e28u: goto label_194e28;
        case 0x194e2cu: goto label_194e2c;
        case 0x194e30u: goto label_194e30;
        case 0x194e34u: goto label_194e34;
        case 0x194e38u: goto label_194e38;
        case 0x194e3cu: goto label_194e3c;
        case 0x194e40u: goto label_194e40;
        case 0x194e44u: goto label_194e44;
        case 0x194e48u: goto label_194e48;
        case 0x194e4cu: goto label_194e4c;
        case 0x194e50u: goto label_194e50;
        case 0x194e54u: goto label_194e54;
        case 0x194e58u: goto label_194e58;
        case 0x194e5cu: goto label_194e5c;
        case 0x194e60u: goto label_194e60;
        case 0x194e64u: goto label_194e64;
        case 0x194e68u: goto label_194e68;
        case 0x194e6cu: goto label_194e6c;
        case 0x194e70u: goto label_194e70;
        case 0x194e74u: goto label_194e74;
        case 0x194e78u: goto label_194e78;
        case 0x194e7cu: goto label_194e7c;
        case 0x194e80u: goto label_194e80;
        case 0x194e84u: goto label_194e84;
        case 0x194e88u: goto label_194e88;
        case 0x194e8cu: goto label_194e8c;
        case 0x194e90u: goto label_194e90;
        case 0x194e94u: goto label_194e94;
        case 0x194e98u: goto label_194e98;
        case 0x194e9cu: goto label_194e9c;
        case 0x194ea0u: goto label_194ea0;
        case 0x194ea4u: goto label_194ea4;
        case 0x194ea8u: goto label_194ea8;
        case 0x194eacu: goto label_194eac;
        case 0x194eb0u: goto label_194eb0;
        case 0x194eb4u: goto label_194eb4;
        case 0x194eb8u: goto label_194eb8;
        case 0x194ebcu: goto label_194ebc;
        case 0x194ec0u: goto label_194ec0;
        case 0x194ec4u: goto label_194ec4;
        case 0x194ec8u: goto label_194ec8;
        case 0x194eccu: goto label_194ecc;
        case 0x194ed0u: goto label_194ed0;
        case 0x194ed4u: goto label_194ed4;
        case 0x194ed8u: goto label_194ed8;
        case 0x194edcu: goto label_194edc;
        case 0x194ee0u: goto label_194ee0;
        case 0x194ee4u: goto label_194ee4;
        case 0x194ee8u: goto label_194ee8;
        case 0x194eecu: goto label_194eec;
        case 0x194ef0u: goto label_194ef0;
        case 0x194ef4u: goto label_194ef4;
        case 0x194ef8u: goto label_194ef8;
        case 0x194efcu: goto label_194efc;
        case 0x194f00u: goto label_194f00;
        case 0x194f04u: goto label_194f04;
        case 0x194f08u: goto label_194f08;
        case 0x194f0cu: goto label_194f0c;
        case 0x194f10u: goto label_194f10;
        case 0x194f14u: goto label_194f14;
        case 0x194f18u: goto label_194f18;
        case 0x194f1cu: goto label_194f1c;
        case 0x194f20u: goto label_194f20;
        case 0x194f24u: goto label_194f24;
        case 0x194f28u: goto label_194f28;
        case 0x194f2cu: goto label_194f2c;
        case 0x194f30u: goto label_194f30;
        case 0x194f34u: goto label_194f34;
        case 0x194f38u: goto label_194f38;
        case 0x194f3cu: goto label_194f3c;
        case 0x194f40u: goto label_194f40;
        case 0x194f44u: goto label_194f44;
        case 0x194f48u: goto label_194f48;
        case 0x194f4cu: goto label_194f4c;
        case 0x194f50u: goto label_194f50;
        case 0x194f54u: goto label_194f54;
        case 0x194f58u: goto label_194f58;
        case 0x194f5cu: goto label_194f5c;
        case 0x194f60u: goto label_194f60;
        case 0x194f64u: goto label_194f64;
        case 0x194f68u: goto label_194f68;
        case 0x194f6cu: goto label_194f6c;
        case 0x194f70u: goto label_194f70;
        case 0x194f74u: goto label_194f74;
        case 0x194f78u: goto label_194f78;
        case 0x194f7cu: goto label_194f7c;
        case 0x194f80u: goto label_194f80;
        case 0x194f84u: goto label_194f84;
        case 0x194f88u: goto label_194f88;
        case 0x194f8cu: goto label_194f8c;
        case 0x194f90u: goto label_194f90;
        case 0x194f94u: goto label_194f94;
        case 0x194f98u: goto label_194f98;
        case 0x194f9cu: goto label_194f9c;
        case 0x194fa0u: goto label_194fa0;
        case 0x194fa4u: goto label_194fa4;
        case 0x194fa8u: goto label_194fa8;
        case 0x194facu: goto label_194fac;
        case 0x194fb0u: goto label_194fb0;
        case 0x194fb4u: goto label_194fb4;
        case 0x194fb8u: goto label_194fb8;
        case 0x194fbcu: goto label_194fbc;
        case 0x194fc0u: goto label_194fc0;
        case 0x194fc4u: goto label_194fc4;
        case 0x194fc8u: goto label_194fc8;
        case 0x194fccu: goto label_194fcc;
        case 0x194fd0u: goto label_194fd0;
        case 0x194fd4u: goto label_194fd4;
        case 0x194fd8u: goto label_194fd8;
        case 0x194fdcu: goto label_194fdc;
        case 0x194fe0u: goto label_194fe0;
        case 0x194fe4u: goto label_194fe4;
        case 0x194fe8u: goto label_194fe8;
        case 0x194fecu: goto label_194fec;
        case 0x194ff0u: goto label_194ff0;
        case 0x194ff4u: goto label_194ff4;
        case 0x194ff8u: goto label_194ff8;
        case 0x194ffcu: goto label_194ffc;
        case 0x195000u: goto label_195000;
        case 0x195004u: goto label_195004;
        case 0x195008u: goto label_195008;
        case 0x19500cu: goto label_19500c;
        case 0x195010u: goto label_195010;
        case 0x195014u: goto label_195014;
        case 0x195018u: goto label_195018;
        case 0x19501cu: goto label_19501c;
        case 0x195020u: goto label_195020;
        case 0x195024u: goto label_195024;
        case 0x195028u: goto label_195028;
        case 0x19502cu: goto label_19502c;
        case 0x195030u: goto label_195030;
        case 0x195034u: goto label_195034;
        case 0x195038u: goto label_195038;
        case 0x19503cu: goto label_19503c;
        case 0x195040u: goto label_195040;
        case 0x195044u: goto label_195044;
        case 0x195048u: goto label_195048;
        case 0x19504cu: goto label_19504c;
        case 0x195050u: goto label_195050;
        case 0x195054u: goto label_195054;
        case 0x195058u: goto label_195058;
        case 0x19505cu: goto label_19505c;
        case 0x195060u: goto label_195060;
        case 0x195064u: goto label_195064;
        case 0x195068u: goto label_195068;
        case 0x19506cu: goto label_19506c;
        case 0x195070u: goto label_195070;
        case 0x195074u: goto label_195074;
        case 0x195078u: goto label_195078;
        case 0x19507cu: goto label_19507c;
        case 0x195080u: goto label_195080;
        case 0x195084u: goto label_195084;
        case 0x195088u: goto label_195088;
        case 0x19508cu: goto label_19508c;
        case 0x195090u: goto label_195090;
        case 0x195094u: goto label_195094;
        case 0x195098u: goto label_195098;
        case 0x19509cu: goto label_19509c;
        case 0x1950a0u: goto label_1950a0;
        case 0x1950a4u: goto label_1950a4;
        case 0x1950a8u: goto label_1950a8;
        case 0x1950acu: goto label_1950ac;
        case 0x1950b0u: goto label_1950b0;
        case 0x1950b4u: goto label_1950b4;
        case 0x1950b8u: goto label_1950b8;
        case 0x1950bcu: goto label_1950bc;
        case 0x1950c0u: goto label_1950c0;
        case 0x1950c4u: goto label_1950c4;
        case 0x1950c8u: goto label_1950c8;
        case 0x1950ccu: goto label_1950cc;
        case 0x1950d0u: goto label_1950d0;
        case 0x1950d4u: goto label_1950d4;
        case 0x1950d8u: goto label_1950d8;
        case 0x1950dcu: goto label_1950dc;
        case 0x1950e0u: goto label_1950e0;
        case 0x1950e4u: goto label_1950e4;
        case 0x1950e8u: goto label_1950e8;
        case 0x1950ecu: goto label_1950ec;
        case 0x1950f0u: goto label_1950f0;
        case 0x1950f4u: goto label_1950f4;
        case 0x1950f8u: goto label_1950f8;
        case 0x1950fcu: goto label_1950fc;
        case 0x195100u: goto label_195100;
        case 0x195104u: goto label_195104;
        case 0x195108u: goto label_195108;
        case 0x19510cu: goto label_19510c;
        case 0x195110u: goto label_195110;
        case 0x195114u: goto label_195114;
        case 0x195118u: goto label_195118;
        case 0x19511cu: goto label_19511c;
        case 0x195120u: goto label_195120;
        case 0x195124u: goto label_195124;
        case 0x195128u: goto label_195128;
        case 0x19512cu: goto label_19512c;
        case 0x195130u: goto label_195130;
        case 0x195134u: goto label_195134;
        case 0x195138u: goto label_195138;
        case 0x19513cu: goto label_19513c;
        case 0x195140u: goto label_195140;
        case 0x195144u: goto label_195144;
        case 0x195148u: goto label_195148;
        case 0x19514cu: goto label_19514c;
        case 0x195150u: goto label_195150;
        case 0x195154u: goto label_195154;
        case 0x195158u: goto label_195158;
        case 0x19515cu: goto label_19515c;
        case 0x195160u: goto label_195160;
        case 0x195164u: goto label_195164;
        case 0x195168u: goto label_195168;
        case 0x19516cu: goto label_19516c;
        case 0x195170u: goto label_195170;
        case 0x195174u: goto label_195174;
        case 0x195178u: goto label_195178;
        case 0x19517cu: goto label_19517c;
        case 0x195180u: goto label_195180;
        case 0x195184u: goto label_195184;
        case 0x195188u: goto label_195188;
        case 0x19518cu: goto label_19518c;
        case 0x195190u: goto label_195190;
        case 0x195194u: goto label_195194;
        case 0x195198u: goto label_195198;
        case 0x19519cu: goto label_19519c;
        case 0x1951a0u: goto label_1951a0;
        case 0x1951a4u: goto label_1951a4;
        case 0x1951a8u: goto label_1951a8;
        case 0x1951acu: goto label_1951ac;
        case 0x1951b0u: goto label_1951b0;
        case 0x1951b4u: goto label_1951b4;
        case 0x1951b8u: goto label_1951b8;
        case 0x1951bcu: goto label_1951bc;
        case 0x1951c0u: goto label_1951c0;
        case 0x1951c4u: goto label_1951c4;
        case 0x1951c8u: goto label_1951c8;
        case 0x1951ccu: goto label_1951cc;
        case 0x1951d0u: goto label_1951d0;
        case 0x1951d4u: goto label_1951d4;
        case 0x1951d8u: goto label_1951d8;
        case 0x1951dcu: goto label_1951dc;
        case 0x1951e0u: goto label_1951e0;
        case 0x1951e4u: goto label_1951e4;
        case 0x1951e8u: goto label_1951e8;
        case 0x1951ecu: goto label_1951ec;
        case 0x1951f0u: goto label_1951f0;
        case 0x1951f4u: goto label_1951f4;
        case 0x1951f8u: goto label_1951f8;
        case 0x1951fcu: goto label_1951fc;
        case 0x195200u: goto label_195200;
        case 0x195204u: goto label_195204;
        case 0x195208u: goto label_195208;
        case 0x19520cu: goto label_19520c;
        case 0x195210u: goto label_195210;
        case 0x195214u: goto label_195214;
        case 0x195218u: goto label_195218;
        case 0x19521cu: goto label_19521c;
        case 0x195220u: goto label_195220;
        case 0x195224u: goto label_195224;
        case 0x195228u: goto label_195228;
        case 0x19522cu: goto label_19522c;
        case 0x195230u: goto label_195230;
        case 0x195234u: goto label_195234;
        case 0x195238u: goto label_195238;
        case 0x19523cu: goto label_19523c;
        case 0x195240u: goto label_195240;
        case 0x195244u: goto label_195244;
        case 0x195248u: goto label_195248;
        case 0x19524cu: goto label_19524c;
        case 0x195250u: goto label_195250;
        case 0x195254u: goto label_195254;
        case 0x195258u: goto label_195258;
        case 0x19525cu: goto label_19525c;
        case 0x195260u: goto label_195260;
        case 0x195264u: goto label_195264;
        case 0x195268u: goto label_195268;
        case 0x19526cu: goto label_19526c;
        case 0x195270u: goto label_195270;
        case 0x195274u: goto label_195274;
        case 0x195278u: goto label_195278;
        case 0x19527cu: goto label_19527c;
        case 0x195280u: goto label_195280;
        case 0x195284u: goto label_195284;
        case 0x195288u: goto label_195288;
        case 0x19528cu: goto label_19528c;
        case 0x195290u: goto label_195290;
        case 0x195294u: goto label_195294;
        case 0x195298u: goto label_195298;
        case 0x19529cu: goto label_19529c;
        case 0x1952a0u: goto label_1952a0;
        case 0x1952a4u: goto label_1952a4;
        case 0x1952a8u: goto label_1952a8;
        case 0x1952acu: goto label_1952ac;
        case 0x1952b0u: goto label_1952b0;
        case 0x1952b4u: goto label_1952b4;
        case 0x1952b8u: goto label_1952b8;
        case 0x1952bcu: goto label_1952bc;
        case 0x1952c0u: goto label_1952c0;
        case 0x1952c4u: goto label_1952c4;
        case 0x1952c8u: goto label_1952c8;
        case 0x1952ccu: goto label_1952cc;
        case 0x1952d0u: goto label_1952d0;
        case 0x1952d4u: goto label_1952d4;
        case 0x1952d8u: goto label_1952d8;
        case 0x1952dcu: goto label_1952dc;
        case 0x1952e0u: goto label_1952e0;
        case 0x1952e4u: goto label_1952e4;
        case 0x1952e8u: goto label_1952e8;
        case 0x1952ecu: goto label_1952ec;
        case 0x1952f0u: goto label_1952f0;
        case 0x1952f4u: goto label_1952f4;
        case 0x1952f8u: goto label_1952f8;
        case 0x1952fcu: goto label_1952fc;
        case 0x195300u: goto label_195300;
        case 0x195304u: goto label_195304;
        case 0x195308u: goto label_195308;
        case 0x19530cu: goto label_19530c;
        case 0x195310u: goto label_195310;
        case 0x195314u: goto label_195314;
        case 0x195318u: goto label_195318;
        case 0x19531cu: goto label_19531c;
        case 0x195320u: goto label_195320;
        case 0x195324u: goto label_195324;
        case 0x195328u: goto label_195328;
        case 0x19532cu: goto label_19532c;
        case 0x195330u: goto label_195330;
        case 0x195334u: goto label_195334;
        case 0x195338u: goto label_195338;
        case 0x19533cu: goto label_19533c;
        case 0x195340u: goto label_195340;
        case 0x195344u: goto label_195344;
        case 0x195348u: goto label_195348;
        case 0x19534cu: goto label_19534c;
        case 0x195350u: goto label_195350;
        case 0x195354u: goto label_195354;
        case 0x195358u: goto label_195358;
        case 0x19535cu: goto label_19535c;
        case 0x195360u: goto label_195360;
        case 0x195364u: goto label_195364;
        case 0x195368u: goto label_195368;
        case 0x19536cu: goto label_19536c;
        case 0x195370u: goto label_195370;
        case 0x195374u: goto label_195374;
        case 0x195378u: goto label_195378;
        case 0x19537cu: goto label_19537c;
        case 0x195380u: goto label_195380;
        case 0x195384u: goto label_195384;
        case 0x195388u: goto label_195388;
        case 0x19538cu: goto label_19538c;
        case 0x195390u: goto label_195390;
        case 0x195394u: goto label_195394;
        case 0x195398u: goto label_195398;
        case 0x19539cu: goto label_19539c;
        case 0x1953a0u: goto label_1953a0;
        case 0x1953a4u: goto label_1953a4;
        case 0x1953a8u: goto label_1953a8;
        case 0x1953acu: goto label_1953ac;
        case 0x1953b0u: goto label_1953b0;
        case 0x1953b4u: goto label_1953b4;
        case 0x1953b8u: goto label_1953b8;
        case 0x1953bcu: goto label_1953bc;
        case 0x1953c0u: goto label_1953c0;
        case 0x1953c4u: goto label_1953c4;
        case 0x1953c8u: goto label_1953c8;
        case 0x1953ccu: goto label_1953cc;
        case 0x1953d0u: goto label_1953d0;
        case 0x1953d4u: goto label_1953d4;
        case 0x1953d8u: goto label_1953d8;
        case 0x1953dcu: goto label_1953dc;
        case 0x1953e0u: goto label_1953e0;
        case 0x1953e4u: goto label_1953e4;
        case 0x1953e8u: goto label_1953e8;
        case 0x1953ecu: goto label_1953ec;
        case 0x1953f0u: goto label_1953f0;
        case 0x1953f4u: goto label_1953f4;
        case 0x1953f8u: goto label_1953f8;
        case 0x1953fcu: goto label_1953fc;
        case 0x195400u: goto label_195400;
        case 0x195404u: goto label_195404;
        case 0x195408u: goto label_195408;
        case 0x19540cu: goto label_19540c;
        case 0x195410u: goto label_195410;
        case 0x195414u: goto label_195414;
        case 0x195418u: goto label_195418;
        case 0x19541cu: goto label_19541c;
        case 0x195420u: goto label_195420;
        case 0x195424u: goto label_195424;
        case 0x195428u: goto label_195428;
        case 0x19542cu: goto label_19542c;
        case 0x195430u: goto label_195430;
        case 0x195434u: goto label_195434;
        case 0x195438u: goto label_195438;
        case 0x19543cu: goto label_19543c;
        case 0x195440u: goto label_195440;
        case 0x195444u: goto label_195444;
        case 0x195448u: goto label_195448;
        case 0x19544cu: goto label_19544c;
        case 0x195450u: goto label_195450;
        case 0x195454u: goto label_195454;
        case 0x195458u: goto label_195458;
        case 0x19545cu: goto label_19545c;
        case 0x195460u: goto label_195460;
        case 0x195464u: goto label_195464;
        case 0x195468u: goto label_195468;
        case 0x19546cu: goto label_19546c;
        case 0x195470u: goto label_195470;
        case 0x195474u: goto label_195474;
        case 0x195478u: goto label_195478;
        case 0x19547cu: goto label_19547c;
        case 0x195480u: goto label_195480;
        case 0x195484u: goto label_195484;
        case 0x195488u: goto label_195488;
        case 0x19548cu: goto label_19548c;
        case 0x195490u: goto label_195490;
        case 0x195494u: goto label_195494;
        case 0x195498u: goto label_195498;
        case 0x19549cu: goto label_19549c;
        case 0x1954a0u: goto label_1954a0;
        case 0x1954a4u: goto label_1954a4;
        case 0x1954a8u: goto label_1954a8;
        case 0x1954acu: goto label_1954ac;
        case 0x1954b0u: goto label_1954b0;
        case 0x1954b4u: goto label_1954b4;
        case 0x1954b8u: goto label_1954b8;
        case 0x1954bcu: goto label_1954bc;
        case 0x1954c0u: goto label_1954c0;
        case 0x1954c4u: goto label_1954c4;
        case 0x1954c8u: goto label_1954c8;
        case 0x1954ccu: goto label_1954cc;
        case 0x1954d0u: goto label_1954d0;
        case 0x1954d4u: goto label_1954d4;
        case 0x1954d8u: goto label_1954d8;
        case 0x1954dcu: goto label_1954dc;
        case 0x1954e0u: goto label_1954e0;
        case 0x1954e4u: goto label_1954e4;
        case 0x1954e8u: goto label_1954e8;
        case 0x1954ecu: goto label_1954ec;
        case 0x1954f0u: goto label_1954f0;
        case 0x1954f4u: goto label_1954f4;
        case 0x1954f8u: goto label_1954f8;
        case 0x1954fcu: goto label_1954fc;
        case 0x195500u: goto label_195500;
        case 0x195504u: goto label_195504;
        case 0x195508u: goto label_195508;
        case 0x19550cu: goto label_19550c;
        case 0x195510u: goto label_195510;
        case 0x195514u: goto label_195514;
        case 0x195518u: goto label_195518;
        case 0x19551cu: goto label_19551c;
        case 0x195520u: goto label_195520;
        case 0x195524u: goto label_195524;
        case 0x195528u: goto label_195528;
        case 0x19552cu: goto label_19552c;
        case 0x195530u: goto label_195530;
        case 0x195534u: goto label_195534;
        case 0x195538u: goto label_195538;
        case 0x19553cu: goto label_19553c;
        case 0x195540u: goto label_195540;
        case 0x195544u: goto label_195544;
        case 0x195548u: goto label_195548;
        case 0x19554cu: goto label_19554c;
        case 0x195550u: goto label_195550;
        case 0x195554u: goto label_195554;
        case 0x195558u: goto label_195558;
        case 0x19555cu: goto label_19555c;
        case 0x195560u: goto label_195560;
        case 0x195564u: goto label_195564;
        case 0x195568u: goto label_195568;
        case 0x19556cu: goto label_19556c;
        case 0x195570u: goto label_195570;
        case 0x195574u: goto label_195574;
        case 0x195578u: goto label_195578;
        case 0x19557cu: goto label_19557c;
        case 0x195580u: goto label_195580;
        case 0x195584u: goto label_195584;
        case 0x195588u: goto label_195588;
        case 0x19558cu: goto label_19558c;
        case 0x195590u: goto label_195590;
        case 0x195594u: goto label_195594;
        case 0x195598u: goto label_195598;
        case 0x19559cu: goto label_19559c;
        case 0x1955a0u: goto label_1955a0;
        case 0x1955a4u: goto label_1955a4;
        case 0x1955a8u: goto label_1955a8;
        case 0x1955acu: goto label_1955ac;
        case 0x1955b0u: goto label_1955b0;
        case 0x1955b4u: goto label_1955b4;
        case 0x1955b8u: goto label_1955b8;
        case 0x1955bcu: goto label_1955bc;
        case 0x1955c0u: goto label_1955c0;
        case 0x1955c4u: goto label_1955c4;
        case 0x1955c8u: goto label_1955c8;
        case 0x1955ccu: goto label_1955cc;
        case 0x1955d0u: goto label_1955d0;
        case 0x1955d4u: goto label_1955d4;
        case 0x1955d8u: goto label_1955d8;
        case 0x1955dcu: goto label_1955dc;
        case 0x1955e0u: goto label_1955e0;
        case 0x1955e4u: goto label_1955e4;
        case 0x1955e8u: goto label_1955e8;
        case 0x1955ecu: goto label_1955ec;
        case 0x1955f0u: goto label_1955f0;
        case 0x1955f4u: goto label_1955f4;
        case 0x1955f8u: goto label_1955f8;
        case 0x1955fcu: goto label_1955fc;
        case 0x195600u: goto label_195600;
        case 0x195604u: goto label_195604;
        case 0x195608u: goto label_195608;
        case 0x19560cu: goto label_19560c;
        case 0x195610u: goto label_195610;
        case 0x195614u: goto label_195614;
        case 0x195618u: goto label_195618;
        case 0x19561cu: goto label_19561c;
        case 0x195620u: goto label_195620;
        case 0x195624u: goto label_195624;
        case 0x195628u: goto label_195628;
        case 0x19562cu: goto label_19562c;
        case 0x195630u: goto label_195630;
        case 0x195634u: goto label_195634;
        case 0x195638u: goto label_195638;
        case 0x19563cu: goto label_19563c;
        case 0x195640u: goto label_195640;
        case 0x195644u: goto label_195644;
        case 0x195648u: goto label_195648;
        case 0x19564cu: goto label_19564c;
        case 0x195650u: goto label_195650;
        case 0x195654u: goto label_195654;
        case 0x195658u: goto label_195658;
        case 0x19565cu: goto label_19565c;
        case 0x195660u: goto label_195660;
        case 0x195664u: goto label_195664;
        case 0x195668u: goto label_195668;
        case 0x19566cu: goto label_19566c;
        case 0x195670u: goto label_195670;
        case 0x195674u: goto label_195674;
        case 0x195678u: goto label_195678;
        case 0x19567cu: goto label_19567c;
        case 0x195680u: goto label_195680;
        case 0x195684u: goto label_195684;
        case 0x195688u: goto label_195688;
        case 0x19568cu: goto label_19568c;
        case 0x195690u: goto label_195690;
        case 0x195694u: goto label_195694;
        case 0x195698u: goto label_195698;
        case 0x19569cu: goto label_19569c;
        case 0x1956a0u: goto label_1956a0;
        case 0x1956a4u: goto label_1956a4;
        case 0x1956a8u: goto label_1956a8;
        case 0x1956acu: goto label_1956ac;
        case 0x1956b0u: goto label_1956b0;
        case 0x1956b4u: goto label_1956b4;
        case 0x1956b8u: goto label_1956b8;
        case 0x1956bcu: goto label_1956bc;
        case 0x1956c0u: goto label_1956c0;
        case 0x1956c4u: goto label_1956c4;
        case 0x1956c8u: goto label_1956c8;
        case 0x1956ccu: goto label_1956cc;
        case 0x1956d0u: goto label_1956d0;
        case 0x1956d4u: goto label_1956d4;
        case 0x1956d8u: goto label_1956d8;
        case 0x1956dcu: goto label_1956dc;
        case 0x1956e0u: goto label_1956e0;
        case 0x1956e4u: goto label_1956e4;
        case 0x1956e8u: goto label_1956e8;
        case 0x1956ecu: goto label_1956ec;
        case 0x1956f0u: goto label_1956f0;
        case 0x1956f4u: goto label_1956f4;
        case 0x1956f8u: goto label_1956f8;
        case 0x1956fcu: goto label_1956fc;
        case 0x195700u: goto label_195700;
        case 0x195704u: goto label_195704;
        case 0x195708u: goto label_195708;
        case 0x19570cu: goto label_19570c;
        case 0x195710u: goto label_195710;
        case 0x195714u: goto label_195714;
        case 0x195718u: goto label_195718;
        case 0x19571cu: goto label_19571c;
        case 0x195720u: goto label_195720;
        case 0x195724u: goto label_195724;
        case 0x195728u: goto label_195728;
        case 0x19572cu: goto label_19572c;
        case 0x195730u: goto label_195730;
        case 0x195734u: goto label_195734;
        case 0x195738u: goto label_195738;
        case 0x19573cu: goto label_19573c;
        case 0x195740u: goto label_195740;
        case 0x195744u: goto label_195744;
        case 0x195748u: goto label_195748;
        case 0x19574cu: goto label_19574c;
        case 0x195750u: goto label_195750;
        case 0x195754u: goto label_195754;
        case 0x195758u: goto label_195758;
        case 0x19575cu: goto label_19575c;
        case 0x195760u: goto label_195760;
        case 0x195764u: goto label_195764;
        case 0x195768u: goto label_195768;
        case 0x19576cu: goto label_19576c;
        case 0x195770u: goto label_195770;
        case 0x195774u: goto label_195774;
        case 0x195778u: goto label_195778;
        case 0x19577cu: goto label_19577c;
        case 0x195780u: goto label_195780;
        case 0x195784u: goto label_195784;
        case 0x195788u: goto label_195788;
        case 0x19578cu: goto label_19578c;
        case 0x195790u: goto label_195790;
        case 0x195794u: goto label_195794;
        case 0x195798u: goto label_195798;
        case 0x19579cu: goto label_19579c;
        case 0x1957a0u: goto label_1957a0;
        case 0x1957a4u: goto label_1957a4;
        case 0x1957a8u: goto label_1957a8;
        case 0x1957acu: goto label_1957ac;
        case 0x1957b0u: goto label_1957b0;
        case 0x1957b4u: goto label_1957b4;
        case 0x1957b8u: goto label_1957b8;
        case 0x1957bcu: goto label_1957bc;
        case 0x1957c0u: goto label_1957c0;
        case 0x1957c4u: goto label_1957c4;
        case 0x1957c8u: goto label_1957c8;
        case 0x1957ccu: goto label_1957cc;
        case 0x1957d0u: goto label_1957d0;
        case 0x1957d4u: goto label_1957d4;
        case 0x1957d8u: goto label_1957d8;
        case 0x1957dcu: goto label_1957dc;
        case 0x1957e0u: goto label_1957e0;
        case 0x1957e4u: goto label_1957e4;
        case 0x1957e8u: goto label_1957e8;
        case 0x1957ecu: goto label_1957ec;
        case 0x1957f0u: goto label_1957f0;
        case 0x1957f4u: goto label_1957f4;
        case 0x1957f8u: goto label_1957f8;
        case 0x1957fcu: goto label_1957fc;
        case 0x195800u: goto label_195800;
        case 0x195804u: goto label_195804;
        case 0x195808u: goto label_195808;
        case 0x19580cu: goto label_19580c;
        case 0x195810u: goto label_195810;
        case 0x195814u: goto label_195814;
        case 0x195818u: goto label_195818;
        case 0x19581cu: goto label_19581c;
        case 0x195820u: goto label_195820;
        case 0x195824u: goto label_195824;
        case 0x195828u: goto label_195828;
        case 0x19582cu: goto label_19582c;
        case 0x195830u: goto label_195830;
        case 0x195834u: goto label_195834;
        case 0x195838u: goto label_195838;
        case 0x19583cu: goto label_19583c;
        case 0x195840u: goto label_195840;
        case 0x195844u: goto label_195844;
        case 0x195848u: goto label_195848;
        case 0x19584cu: goto label_19584c;
        case 0x195850u: goto label_195850;
        case 0x195854u: goto label_195854;
        case 0x195858u: goto label_195858;
        case 0x19585cu: goto label_19585c;
        case 0x195860u: goto label_195860;
        case 0x195864u: goto label_195864;
        case 0x195868u: goto label_195868;
        case 0x19586cu: goto label_19586c;
        case 0x195870u: goto label_195870;
        case 0x195874u: goto label_195874;
        case 0x195878u: goto label_195878;
        case 0x19587cu: goto label_19587c;
        case 0x195880u: goto label_195880;
        case 0x195884u: goto label_195884;
        case 0x195888u: goto label_195888;
        case 0x19588cu: goto label_19588c;
        case 0x195890u: goto label_195890;
        case 0x195894u: goto label_195894;
        case 0x195898u: goto label_195898;
        case 0x19589cu: goto label_19589c;
        case 0x1958a0u: goto label_1958a0;
        case 0x1958a4u: goto label_1958a4;
        case 0x1958a8u: goto label_1958a8;
        case 0x1958acu: goto label_1958ac;
        case 0x1958b0u: goto label_1958b0;
        case 0x1958b4u: goto label_1958b4;
        case 0x1958b8u: goto label_1958b8;
        case 0x1958bcu: goto label_1958bc;
        case 0x1958c0u: goto label_1958c0;
        case 0x1958c4u: goto label_1958c4;
        case 0x1958c8u: goto label_1958c8;
        case 0x1958ccu: goto label_1958cc;
        case 0x1958d0u: goto label_1958d0;
        case 0x1958d4u: goto label_1958d4;
        case 0x1958d8u: goto label_1958d8;
        case 0x1958dcu: goto label_1958dc;
        case 0x1958e0u: goto label_1958e0;
        case 0x1958e4u: goto label_1958e4;
        case 0x1958e8u: goto label_1958e8;
        case 0x1958ecu: goto label_1958ec;
        case 0x1958f0u: goto label_1958f0;
        case 0x1958f4u: goto label_1958f4;
        case 0x1958f8u: goto label_1958f8;
        case 0x1958fcu: goto label_1958fc;
        case 0x195900u: goto label_195900;
        case 0x195904u: goto label_195904;
        case 0x195908u: goto label_195908;
        case 0x19590cu: goto label_19590c;
        case 0x195910u: goto label_195910;
        case 0x195914u: goto label_195914;
        case 0x195918u: goto label_195918;
        case 0x19591cu: goto label_19591c;
        case 0x195920u: goto label_195920;
        case 0x195924u: goto label_195924;
        case 0x195928u: goto label_195928;
        case 0x19592cu: goto label_19592c;
        case 0x195930u: goto label_195930;
        case 0x195934u: goto label_195934;
        case 0x195938u: goto label_195938;
        case 0x19593cu: goto label_19593c;
        case 0x195940u: goto label_195940;
        case 0x195944u: goto label_195944;
        case 0x195948u: goto label_195948;
        case 0x19594cu: goto label_19594c;
        case 0x195950u: goto label_195950;
        case 0x195954u: goto label_195954;
        case 0x195958u: goto label_195958;
        case 0x19595cu: goto label_19595c;
        case 0x195960u: goto label_195960;
        case 0x195964u: goto label_195964;
        case 0x195968u: goto label_195968;
        case 0x19596cu: goto label_19596c;
        case 0x195970u: goto label_195970;
        case 0x195974u: goto label_195974;
        case 0x195978u: goto label_195978;
        case 0x19597cu: goto label_19597c;
        case 0x195980u: goto label_195980;
        case 0x195984u: goto label_195984;
        case 0x195988u: goto label_195988;
        case 0x19598cu: goto label_19598c;
        case 0x195990u: goto label_195990;
        case 0x195994u: goto label_195994;
        case 0x195998u: goto label_195998;
        case 0x19599cu: goto label_19599c;
        case 0x1959a0u: goto label_1959a0;
        case 0x1959a4u: goto label_1959a4;
        case 0x1959a8u: goto label_1959a8;
        case 0x1959acu: goto label_1959ac;
        case 0x1959b0u: goto label_1959b0;
        case 0x1959b4u: goto label_1959b4;
        case 0x1959b8u: goto label_1959b8;
        case 0x1959bcu: goto label_1959bc;
        case 0x1959c0u: goto label_1959c0;
        case 0x1959c4u: goto label_1959c4;
        case 0x1959c8u: goto label_1959c8;
        case 0x1959ccu: goto label_1959cc;
        case 0x1959d0u: goto label_1959d0;
        case 0x1959d4u: goto label_1959d4;
        case 0x1959d8u: goto label_1959d8;
        case 0x1959dcu: goto label_1959dc;
        case 0x1959e0u: goto label_1959e0;
        case 0x1959e4u: goto label_1959e4;
        case 0x1959e8u: goto label_1959e8;
        case 0x1959ecu: goto label_1959ec;
        case 0x1959f0u: goto label_1959f0;
        case 0x1959f4u: goto label_1959f4;
        case 0x1959f8u: goto label_1959f8;
        case 0x1959fcu: goto label_1959fc;
        case 0x195a00u: goto label_195a00;
        case 0x195a04u: goto label_195a04;
        case 0x195a08u: goto label_195a08;
        case 0x195a0cu: goto label_195a0c;
        case 0x195a10u: goto label_195a10;
        case 0x195a14u: goto label_195a14;
        case 0x195a18u: goto label_195a18;
        case 0x195a1cu: goto label_195a1c;
        case 0x195a20u: goto label_195a20;
        case 0x195a24u: goto label_195a24;
        case 0x195a28u: goto label_195a28;
        case 0x195a2cu: goto label_195a2c;
        case 0x195a30u: goto label_195a30;
        case 0x195a34u: goto label_195a34;
        case 0x195a38u: goto label_195a38;
        case 0x195a3cu: goto label_195a3c;
        case 0x195a40u: goto label_195a40;
        case 0x195a44u: goto label_195a44;
        case 0x195a48u: goto label_195a48;
        case 0x195a4cu: goto label_195a4c;
        case 0x195a50u: goto label_195a50;
        case 0x195a54u: goto label_195a54;
        case 0x195a58u: goto label_195a58;
        case 0x195a5cu: goto label_195a5c;
        case 0x195a60u: goto label_195a60;
        case 0x195a64u: goto label_195a64;
        case 0x195a68u: goto label_195a68;
        case 0x195a6cu: goto label_195a6c;
        case 0x195a70u: goto label_195a70;
        case 0x195a74u: goto label_195a74;
        case 0x195a78u: goto label_195a78;
        case 0x195a7cu: goto label_195a7c;
        case 0x195a80u: goto label_195a80;
        case 0x195a84u: goto label_195a84;
        case 0x195a88u: goto label_195a88;
        case 0x195a8cu: goto label_195a8c;
        case 0x195a90u: goto label_195a90;
        case 0x195a94u: goto label_195a94;
        case 0x195a98u: goto label_195a98;
        case 0x195a9cu: goto label_195a9c;
        case 0x195aa0u: goto label_195aa0;
        case 0x195aa4u: goto label_195aa4;
        case 0x195aa8u: goto label_195aa8;
        case 0x195aacu: goto label_195aac;
        case 0x195ab0u: goto label_195ab0;
        case 0x195ab4u: goto label_195ab4;
        case 0x195ab8u: goto label_195ab8;
        case 0x195abcu: goto label_195abc;
        case 0x195ac0u: goto label_195ac0;
        case 0x195ac4u: goto label_195ac4;
        case 0x195ac8u: goto label_195ac8;
        case 0x195accu: goto label_195acc;
        case 0x195ad0u: goto label_195ad0;
        case 0x195ad4u: goto label_195ad4;
        case 0x195ad8u: goto label_195ad8;
        case 0x195adcu: goto label_195adc;
        case 0x195ae0u: goto label_195ae0;
        case 0x195ae4u: goto label_195ae4;
        case 0x195ae8u: goto label_195ae8;
        case 0x195aecu: goto label_195aec;
        case 0x195af0u: goto label_195af0;
        case 0x195af4u: goto label_195af4;
        case 0x195af8u: goto label_195af8;
        case 0x195afcu: goto label_195afc;
        case 0x195b00u: goto label_195b00;
        case 0x195b04u: goto label_195b04;
        case 0x195b08u: goto label_195b08;
        case 0x195b0cu: goto label_195b0c;
        case 0x195b10u: goto label_195b10;
        case 0x195b14u: goto label_195b14;
        case 0x195b18u: goto label_195b18;
        case 0x195b1cu: goto label_195b1c;
        case 0x195b20u: goto label_195b20;
        case 0x195b24u: goto label_195b24;
        case 0x195b28u: goto label_195b28;
        case 0x195b2cu: goto label_195b2c;
        case 0x195b30u: goto label_195b30;
        case 0x195b34u: goto label_195b34;
        case 0x195b38u: goto label_195b38;
        case 0x195b3cu: goto label_195b3c;
        case 0x195b40u: goto label_195b40;
        case 0x195b44u: goto label_195b44;
        case 0x195b48u: goto label_195b48;
        case 0x195b4cu: goto label_195b4c;
        case 0x195b50u: goto label_195b50;
        case 0x195b54u: goto label_195b54;
        case 0x195b58u: goto label_195b58;
        case 0x195b5cu: goto label_195b5c;
        case 0x195b60u: goto label_195b60;
        case 0x195b64u: goto label_195b64;
        case 0x195b68u: goto label_195b68;
        case 0x195b6cu: goto label_195b6c;
        case 0x195b70u: goto label_195b70;
        case 0x195b74u: goto label_195b74;
        case 0x195b78u: goto label_195b78;
        case 0x195b7cu: goto label_195b7c;
        case 0x195b80u: goto label_195b80;
        case 0x195b84u: goto label_195b84;
        case 0x195b88u: goto label_195b88;
        case 0x195b8cu: goto label_195b8c;
        case 0x195b90u: goto label_195b90;
        case 0x195b94u: goto label_195b94;
        case 0x195b98u: goto label_195b98;
        case 0x195b9cu: goto label_195b9c;
        case 0x195ba0u: goto label_195ba0;
        case 0x195ba4u: goto label_195ba4;
        case 0x195ba8u: goto label_195ba8;
        case 0x195bacu: goto label_195bac;
        case 0x195bb0u: goto label_195bb0;
        case 0x195bb4u: goto label_195bb4;
        case 0x195bb8u: goto label_195bb8;
        case 0x195bbcu: goto label_195bbc;
        case 0x195bc0u: goto label_195bc0;
        case 0x195bc4u: goto label_195bc4;
        case 0x195bc8u: goto label_195bc8;
        case 0x195bccu: goto label_195bcc;
        case 0x195bd0u: goto label_195bd0;
        case 0x195bd4u: goto label_195bd4;
        case 0x195bd8u: goto label_195bd8;
        case 0x195bdcu: goto label_195bdc;
        case 0x195be0u: goto label_195be0;
        case 0x195be4u: goto label_195be4;
        case 0x195be8u: goto label_195be8;
        case 0x195becu: goto label_195bec;
        case 0x195bf0u: goto label_195bf0;
        case 0x195bf4u: goto label_195bf4;
        case 0x195bf8u: goto label_195bf8;
        case 0x195bfcu: goto label_195bfc;
        case 0x195c00u: goto label_195c00;
        case 0x195c04u: goto label_195c04;
        case 0x195c08u: goto label_195c08;
        case 0x195c0cu: goto label_195c0c;
        case 0x195c10u: goto label_195c10;
        case 0x195c14u: goto label_195c14;
        case 0x195c18u: goto label_195c18;
        case 0x195c1cu: goto label_195c1c;
        case 0x195c20u: goto label_195c20;
        case 0x195c24u: goto label_195c24;
        case 0x195c28u: goto label_195c28;
        case 0x195c2cu: goto label_195c2c;
        case 0x195c30u: goto label_195c30;
        case 0x195c34u: goto label_195c34;
        case 0x195c38u: goto label_195c38;
        case 0x195c3cu: goto label_195c3c;
        case 0x195c40u: goto label_195c40;
        case 0x195c44u: goto label_195c44;
        case 0x195c48u: goto label_195c48;
        case 0x195c4cu: goto label_195c4c;
        case 0x195c50u: goto label_195c50;
        case 0x195c54u: goto label_195c54;
        case 0x195c58u: goto label_195c58;
        case 0x195c5cu: goto label_195c5c;
        case 0x195c60u: goto label_195c60;
        case 0x195c64u: goto label_195c64;
        case 0x195c68u: goto label_195c68;
        case 0x195c6cu: goto label_195c6c;
        case 0x195c70u: goto label_195c70;
        case 0x195c74u: goto label_195c74;
        case 0x195c78u: goto label_195c78;
        case 0x195c7cu: goto label_195c7c;
        case 0x195c80u: goto label_195c80;
        case 0x195c84u: goto label_195c84;
        case 0x195c88u: goto label_195c88;
        case 0x195c8cu: goto label_195c8c;
        case 0x195c90u: goto label_195c90;
        case 0x195c94u: goto label_195c94;
        case 0x195c98u: goto label_195c98;
        case 0x195c9cu: goto label_195c9c;
        case 0x195ca0u: goto label_195ca0;
        case 0x195ca4u: goto label_195ca4;
        case 0x195ca8u: goto label_195ca8;
        case 0x195cacu: goto label_195cac;
        case 0x195cb0u: goto label_195cb0;
        case 0x195cb4u: goto label_195cb4;
        case 0x195cb8u: goto label_195cb8;
        case 0x195cbcu: goto label_195cbc;
        case 0x195cc0u: goto label_195cc0;
        case 0x195cc4u: goto label_195cc4;
        case 0x195cc8u: goto label_195cc8;
        case 0x195cccu: goto label_195ccc;
        case 0x195cd0u: goto label_195cd0;
        case 0x195cd4u: goto label_195cd4;
        case 0x195cd8u: goto label_195cd8;
        case 0x195cdcu: goto label_195cdc;
        case 0x195ce0u: goto label_195ce0;
        case 0x195ce4u: goto label_195ce4;
        case 0x195ce8u: goto label_195ce8;
        case 0x195cecu: goto label_195cec;
        case 0x195cf0u: goto label_195cf0;
        case 0x195cf4u: goto label_195cf4;
        case 0x195cf8u: goto label_195cf8;
        case 0x195cfcu: goto label_195cfc;
        case 0x195d00u: goto label_195d00;
        case 0x195d04u: goto label_195d04;
        case 0x195d08u: goto label_195d08;
        case 0x195d0cu: goto label_195d0c;
        case 0x195d10u: goto label_195d10;
        case 0x195d14u: goto label_195d14;
        case 0x195d18u: goto label_195d18;
        case 0x195d1cu: goto label_195d1c;
        case 0x195d20u: goto label_195d20;
        case 0x195d24u: goto label_195d24;
        case 0x195d28u: goto label_195d28;
        case 0x195d2cu: goto label_195d2c;
        case 0x195d30u: goto label_195d30;
        case 0x195d34u: goto label_195d34;
        case 0x195d38u: goto label_195d38;
        case 0x195d3cu: goto label_195d3c;
        case 0x195d40u: goto label_195d40;
        case 0x195d44u: goto label_195d44;
        case 0x195d48u: goto label_195d48;
        case 0x195d4cu: goto label_195d4c;
        case 0x195d50u: goto label_195d50;
        case 0x195d54u: goto label_195d54;
        case 0x195d58u: goto label_195d58;
        case 0x195d5cu: goto label_195d5c;
        case 0x195d60u: goto label_195d60;
        case 0x195d64u: goto label_195d64;
        case 0x195d68u: goto label_195d68;
        case 0x195d6cu: goto label_195d6c;
        case 0x195d70u: goto label_195d70;
        case 0x195d74u: goto label_195d74;
        case 0x195d78u: goto label_195d78;
        case 0x195d7cu: goto label_195d7c;
        case 0x195d80u: goto label_195d80;
        case 0x195d84u: goto label_195d84;
        case 0x195d88u: goto label_195d88;
        case 0x195d8cu: goto label_195d8c;
        case 0x195d90u: goto label_195d90;
        case 0x195d94u: goto label_195d94;
        case 0x195d98u: goto label_195d98;
        case 0x195d9cu: goto label_195d9c;
        case 0x195da0u: goto label_195da0;
        case 0x195da4u: goto label_195da4;
        case 0x195da8u: goto label_195da8;
        case 0x195dacu: goto label_195dac;
        case 0x195db0u: goto label_195db0;
        case 0x195db4u: goto label_195db4;
        case 0x195db8u: goto label_195db8;
        case 0x195dbcu: goto label_195dbc;
        case 0x195dc0u: goto label_195dc0;
        case 0x195dc4u: goto label_195dc4;
        case 0x195dc8u: goto label_195dc8;
        case 0x195dccu: goto label_195dcc;
        case 0x195dd0u: goto label_195dd0;
        case 0x195dd4u: goto label_195dd4;
        case 0x195dd8u: goto label_195dd8;
        case 0x195ddcu: goto label_195ddc;
        case 0x195de0u: goto label_195de0;
        case 0x195de4u: goto label_195de4;
        case 0x195de8u: goto label_195de8;
        case 0x195decu: goto label_195dec;
        case 0x195df0u: goto label_195df0;
        case 0x195df4u: goto label_195df4;
        case 0x195df8u: goto label_195df8;
        case 0x195dfcu: goto label_195dfc;
        case 0x195e00u: goto label_195e00;
        case 0x195e04u: goto label_195e04;
        case 0x195e08u: goto label_195e08;
        case 0x195e0cu: goto label_195e0c;
        case 0x195e10u: goto label_195e10;
        case 0x195e14u: goto label_195e14;
        case 0x195e18u: goto label_195e18;
        case 0x195e1cu: goto label_195e1c;
        case 0x195e20u: goto label_195e20;
        case 0x195e24u: goto label_195e24;
        case 0x195e28u: goto label_195e28;
        case 0x195e2cu: goto label_195e2c;
        case 0x195e30u: goto label_195e30;
        case 0x195e34u: goto label_195e34;
        case 0x195e38u: goto label_195e38;
        case 0x195e3cu: goto label_195e3c;
        case 0x195e40u: goto label_195e40;
        case 0x195e44u: goto label_195e44;
        case 0x195e48u: goto label_195e48;
        case 0x195e4cu: goto label_195e4c;
        case 0x195e50u: goto label_195e50;
        case 0x195e54u: goto label_195e54;
        case 0x195e58u: goto label_195e58;
        case 0x195e5cu: goto label_195e5c;
        case 0x195e60u: goto label_195e60;
        case 0x195e64u: goto label_195e64;
        case 0x195e68u: goto label_195e68;
        case 0x195e6cu: goto label_195e6c;
        case 0x195e70u: goto label_195e70;
        case 0x195e74u: goto label_195e74;
        case 0x195e78u: goto label_195e78;
        case 0x195e7cu: goto label_195e7c;
        case 0x195e80u: goto label_195e80;
        case 0x195e84u: goto label_195e84;
        case 0x195e88u: goto label_195e88;
        case 0x195e8cu: goto label_195e8c;
        case 0x195e90u: goto label_195e90;
        case 0x195e94u: goto label_195e94;
        case 0x195e98u: goto label_195e98;
        case 0x195e9cu: goto label_195e9c;
        case 0x195ea0u: goto label_195ea0;
        case 0x195ea4u: goto label_195ea4;
        case 0x195ea8u: goto label_195ea8;
        case 0x195eacu: goto label_195eac;
        case 0x195eb0u: goto label_195eb0;
        case 0x195eb4u: goto label_195eb4;
        case 0x195eb8u: goto label_195eb8;
        case 0x195ebcu: goto label_195ebc;
        case 0x195ec0u: goto label_195ec0;
        case 0x195ec4u: goto label_195ec4;
        case 0x195ec8u: goto label_195ec8;
        case 0x195eccu: goto label_195ecc;
        case 0x195ed0u: goto label_195ed0;
        case 0x195ed4u: goto label_195ed4;
        case 0x195ed8u: goto label_195ed8;
        case 0x195edcu: goto label_195edc;
        case 0x195ee0u: goto label_195ee0;
        case 0x195ee4u: goto label_195ee4;
        case 0x195ee8u: goto label_195ee8;
        case 0x195eecu: goto label_195eec;
        case 0x195ef0u: goto label_195ef0;
        case 0x195ef4u: goto label_195ef4;
        case 0x195ef8u: goto label_195ef8;
        case 0x195efcu: goto label_195efc;
        case 0x195f00u: goto label_195f00;
        case 0x195f04u: goto label_195f04;
        case 0x195f08u: goto label_195f08;
        case 0x195f0cu: goto label_195f0c;
        case 0x195f10u: goto label_195f10;
        case 0x195f14u: goto label_195f14;
        case 0x195f18u: goto label_195f18;
        case 0x195f1cu: goto label_195f1c;
        case 0x195f20u: goto label_195f20;
        case 0x195f24u: goto label_195f24;
        case 0x195f28u: goto label_195f28;
        case 0x195f2cu: goto label_195f2c;
        case 0x195f30u: goto label_195f30;
        case 0x195f34u: goto label_195f34;
        case 0x195f38u: goto label_195f38;
        case 0x195f3cu: goto label_195f3c;
        case 0x195f40u: goto label_195f40;
        case 0x195f44u: goto label_195f44;
        case 0x195f48u: goto label_195f48;
        case 0x195f4cu: goto label_195f4c;
        case 0x195f50u: goto label_195f50;
        case 0x195f54u: goto label_195f54;
        case 0x195f58u: goto label_195f58;
        case 0x195f5cu: goto label_195f5c;
        case 0x195f60u: goto label_195f60;
        case 0x195f64u: goto label_195f64;
        case 0x195f68u: goto label_195f68;
        case 0x195f6cu: goto label_195f6c;
        case 0x195f70u: goto label_195f70;
        case 0x195f74u: goto label_195f74;
        case 0x195f78u: goto label_195f78;
        case 0x195f7cu: goto label_195f7c;
        case 0x195f80u: goto label_195f80;
        case 0x195f84u: goto label_195f84;
        case 0x195f88u: goto label_195f88;
        case 0x195f8cu: goto label_195f8c;
        case 0x195f90u: goto label_195f90;
        case 0x195f94u: goto label_195f94;
        case 0x195f98u: goto label_195f98;
        case 0x195f9cu: goto label_195f9c;
        case 0x195fa0u: goto label_195fa0;
        case 0x195fa4u: goto label_195fa4;
        case 0x195fa8u: goto label_195fa8;
        case 0x195facu: goto label_195fac;
        case 0x195fb0u: goto label_195fb0;
        case 0x195fb4u: goto label_195fb4;
        case 0x195fb8u: goto label_195fb8;
        case 0x195fbcu: goto label_195fbc;
        case 0x195fc0u: goto label_195fc0;
        case 0x195fc4u: goto label_195fc4;
        case 0x195fc8u: goto label_195fc8;
        case 0x195fccu: goto label_195fcc;
        case 0x195fd0u: goto label_195fd0;
        case 0x195fd4u: goto label_195fd4;
        case 0x195fd8u: goto label_195fd8;
        case 0x195fdcu: goto label_195fdc;
        case 0x195fe0u: goto label_195fe0;
        case 0x195fe4u: goto label_195fe4;
        case 0x195fe8u: goto label_195fe8;
        case 0x195fecu: goto label_195fec;
        case 0x195ff0u: goto label_195ff0;
        case 0x195ff4u: goto label_195ff4;
        case 0x195ff8u: goto label_195ff8;
        case 0x195ffcu: goto label_195ffc;
        case 0x196000u: goto label_196000;
        case 0x196004u: goto label_196004;
        case 0x196008u: goto label_196008;
        case 0x19600cu: goto label_19600c;
        case 0x196010u: goto label_196010;
        case 0x196014u: goto label_196014;
        case 0x196018u: goto label_196018;
        case 0x19601cu: goto label_19601c;
        case 0x196020u: goto label_196020;
        case 0x196024u: goto label_196024;
        case 0x196028u: goto label_196028;
        case 0x19602cu: goto label_19602c;
        case 0x196030u: goto label_196030;
        case 0x196034u: goto label_196034;
        case 0x196038u: goto label_196038;
        case 0x19603cu: goto label_19603c;
        case 0x196040u: goto label_196040;
        case 0x196044u: goto label_196044;
        case 0x196048u: goto label_196048;
        case 0x19604cu: goto label_19604c;
        case 0x196050u: goto label_196050;
        case 0x196054u: goto label_196054;
        case 0x196058u: goto label_196058;
        case 0x19605cu: goto label_19605c;
        case 0x196060u: goto label_196060;
        case 0x196064u: goto label_196064;
        case 0x196068u: goto label_196068;
        case 0x19606cu: goto label_19606c;
        case 0x196070u: goto label_196070;
        case 0x196074u: goto label_196074;
        case 0x196078u: goto label_196078;
        case 0x19607cu: goto label_19607c;
        case 0x196080u: goto label_196080;
        case 0x196084u: goto label_196084;
        case 0x196088u: goto label_196088;
        case 0x19608cu: goto label_19608c;
        case 0x196090u: goto label_196090;
        case 0x196094u: goto label_196094;
        case 0x196098u: goto label_196098;
        case 0x19609cu: goto label_19609c;
        case 0x1960a0u: goto label_1960a0;
        case 0x1960a4u: goto label_1960a4;
        case 0x1960a8u: goto label_1960a8;
        case 0x1960acu: goto label_1960ac;
        case 0x1960b0u: goto label_1960b0;
        case 0x1960b4u: goto label_1960b4;
        case 0x1960b8u: goto label_1960b8;
        case 0x1960bcu: goto label_1960bc;
        case 0x1960c0u: goto label_1960c0;
        case 0x1960c4u: goto label_1960c4;
        case 0x1960c8u: goto label_1960c8;
        case 0x1960ccu: goto label_1960cc;
        case 0x1960d0u: goto label_1960d0;
        case 0x1960d4u: goto label_1960d4;
        case 0x1960d8u: goto label_1960d8;
        case 0x1960dcu: goto label_1960dc;
        case 0x1960e0u: goto label_1960e0;
        case 0x1960e4u: goto label_1960e4;
        case 0x1960e8u: goto label_1960e8;
        case 0x1960ecu: goto label_1960ec;
        case 0x1960f0u: goto label_1960f0;
        case 0x1960f4u: goto label_1960f4;
        case 0x1960f8u: goto label_1960f8;
        case 0x1960fcu: goto label_1960fc;
        case 0x196100u: goto label_196100;
        case 0x196104u: goto label_196104;
        case 0x196108u: goto label_196108;
        case 0x19610cu: goto label_19610c;
        case 0x196110u: goto label_196110;
        case 0x196114u: goto label_196114;
        case 0x196118u: goto label_196118;
        case 0x19611cu: goto label_19611c;
        case 0x196120u: goto label_196120;
        case 0x196124u: goto label_196124;
        case 0x196128u: goto label_196128;
        case 0x19612cu: goto label_19612c;
        case 0x196130u: goto label_196130;
        case 0x196134u: goto label_196134;
        case 0x196138u: goto label_196138;
        case 0x19613cu: goto label_19613c;
        case 0x196140u: goto label_196140;
        case 0x196144u: goto label_196144;
        case 0x196148u: goto label_196148;
        case 0x19614cu: goto label_19614c;
        case 0x196150u: goto label_196150;
        case 0x196154u: goto label_196154;
        case 0x196158u: goto label_196158;
        case 0x19615cu: goto label_19615c;
        case 0x196160u: goto label_196160;
        case 0x196164u: goto label_196164;
        case 0x196168u: goto label_196168;
        case 0x19616cu: goto label_19616c;
        case 0x196170u: goto label_196170;
        case 0x196174u: goto label_196174;
        case 0x196178u: goto label_196178;
        case 0x19617cu: goto label_19617c;
        case 0x196180u: goto label_196180;
        case 0x196184u: goto label_196184;
        case 0x196188u: goto label_196188;
        case 0x19618cu: goto label_19618c;
        case 0x196190u: goto label_196190;
        case 0x196194u: goto label_196194;
        case 0x196198u: goto label_196198;
        case 0x19619cu: goto label_19619c;
        case 0x1961a0u: goto label_1961a0;
        case 0x1961a4u: goto label_1961a4;
        case 0x1961a8u: goto label_1961a8;
        case 0x1961acu: goto label_1961ac;
        case 0x1961b0u: goto label_1961b0;
        case 0x1961b4u: goto label_1961b4;
        case 0x1961b8u: goto label_1961b8;
        case 0x1961bcu: goto label_1961bc;
        case 0x1961c0u: goto label_1961c0;
        case 0x1961c4u: goto label_1961c4;
        case 0x1961c8u: goto label_1961c8;
        case 0x1961ccu: goto label_1961cc;
        case 0x1961d0u: goto label_1961d0;
        case 0x1961d4u: goto label_1961d4;
        case 0x1961d8u: goto label_1961d8;
        case 0x1961dcu: goto label_1961dc;
        case 0x1961e0u: goto label_1961e0;
        case 0x1961e4u: goto label_1961e4;
        case 0x1961e8u: goto label_1961e8;
        case 0x1961ecu: goto label_1961ec;
        case 0x1961f0u: goto label_1961f0;
        case 0x1961f4u: goto label_1961f4;
        case 0x1961f8u: goto label_1961f8;
        case 0x1961fcu: goto label_1961fc;
        case 0x196200u: goto label_196200;
        case 0x196204u: goto label_196204;
        case 0x196208u: goto label_196208;
        case 0x19620cu: goto label_19620c;
        case 0x196210u: goto label_196210;
        case 0x196214u: goto label_196214;
        case 0x196218u: goto label_196218;
        case 0x19621cu: goto label_19621c;
        case 0x196220u: goto label_196220;
        case 0x196224u: goto label_196224;
        case 0x196228u: goto label_196228;
        case 0x19622cu: goto label_19622c;
        case 0x196230u: goto label_196230;
        case 0x196234u: goto label_196234;
        case 0x196238u: goto label_196238;
        case 0x19623cu: goto label_19623c;
        case 0x196240u: goto label_196240;
        case 0x196244u: goto label_196244;
        case 0x196248u: goto label_196248;
        case 0x19624cu: goto label_19624c;
        case 0x196250u: goto label_196250;
        case 0x196254u: goto label_196254;
        case 0x196258u: goto label_196258;
        case 0x19625cu: goto label_19625c;
        case 0x196260u: goto label_196260;
        case 0x196264u: goto label_196264;
        case 0x196268u: goto label_196268;
        case 0x19626cu: goto label_19626c;
        case 0x196270u: goto label_196270;
        case 0x196274u: goto label_196274;
        case 0x196278u: goto label_196278;
        case 0x19627cu: goto label_19627c;
        case 0x196280u: goto label_196280;
        case 0x196284u: goto label_196284;
        case 0x196288u: goto label_196288;
        case 0x19628cu: goto label_19628c;
        case 0x196290u: goto label_196290;
        case 0x196294u: goto label_196294;
        case 0x196298u: goto label_196298;
        case 0x19629cu: goto label_19629c;
        case 0x1962a0u: goto label_1962a0;
        case 0x1962a4u: goto label_1962a4;
        case 0x1962a8u: goto label_1962a8;
        case 0x1962acu: goto label_1962ac;
        case 0x1962b0u: goto label_1962b0;
        case 0x1962b4u: goto label_1962b4;
        case 0x1962b8u: goto label_1962b8;
        case 0x1962bcu: goto label_1962bc;
        case 0x1962c0u: goto label_1962c0;
        case 0x1962c4u: goto label_1962c4;
        case 0x1962c8u: goto label_1962c8;
        case 0x1962ccu: goto label_1962cc;
        case 0x1962d0u: goto label_1962d0;
        case 0x1962d4u: goto label_1962d4;
        case 0x1962d8u: goto label_1962d8;
        case 0x1962dcu: goto label_1962dc;
        case 0x1962e0u: goto label_1962e0;
        case 0x1962e4u: goto label_1962e4;
        case 0x1962e8u: goto label_1962e8;
        case 0x1962ecu: goto label_1962ec;
        case 0x1962f0u: goto label_1962f0;
        case 0x1962f4u: goto label_1962f4;
        case 0x1962f8u: goto label_1962f8;
        case 0x1962fcu: goto label_1962fc;
        case 0x196300u: goto label_196300;
        case 0x196304u: goto label_196304;
        case 0x196308u: goto label_196308;
        case 0x19630cu: goto label_19630c;
        case 0x196310u: goto label_196310;
        case 0x196314u: goto label_196314;
        case 0x196318u: goto label_196318;
        case 0x19631cu: goto label_19631c;
        case 0x196320u: goto label_196320;
        case 0x196324u: goto label_196324;
        case 0x196328u: goto label_196328;
        case 0x19632cu: goto label_19632c;
        case 0x196330u: goto label_196330;
        case 0x196334u: goto label_196334;
        case 0x196338u: goto label_196338;
        case 0x19633cu: goto label_19633c;
        case 0x196340u: goto label_196340;
        case 0x196344u: goto label_196344;
        case 0x196348u: goto label_196348;
        case 0x19634cu: goto label_19634c;
        case 0x196350u: goto label_196350;
        case 0x196354u: goto label_196354;
        case 0x196358u: goto label_196358;
        case 0x19635cu: goto label_19635c;
        case 0x196360u: goto label_196360;
        case 0x196364u: goto label_196364;
        case 0x196368u: goto label_196368;
        case 0x19636cu: goto label_19636c;
        case 0x196370u: goto label_196370;
        case 0x196374u: goto label_196374;
        case 0x196378u: goto label_196378;
        case 0x19637cu: goto label_19637c;
        case 0x196380u: goto label_196380;
        case 0x196384u: goto label_196384;
        case 0x196388u: goto label_196388;
        case 0x19638cu: goto label_19638c;
        case 0x196390u: goto label_196390;
        case 0x196394u: goto label_196394;
        case 0x196398u: goto label_196398;
        case 0x19639cu: goto label_19639c;
        case 0x1963a0u: goto label_1963a0;
        case 0x1963a4u: goto label_1963a4;
        case 0x1963a8u: goto label_1963a8;
        case 0x1963acu: goto label_1963ac;
        case 0x1963b0u: goto label_1963b0;
        case 0x1963b4u: goto label_1963b4;
        case 0x1963b8u: goto label_1963b8;
        case 0x1963bcu: goto label_1963bc;
        case 0x1963c0u: goto label_1963c0;
        case 0x1963c4u: goto label_1963c4;
        case 0x1963c8u: goto label_1963c8;
        case 0x1963ccu: goto label_1963cc;
        case 0x1963d0u: goto label_1963d0;
        case 0x1963d4u: goto label_1963d4;
        case 0x1963d8u: goto label_1963d8;
        case 0x1963dcu: goto label_1963dc;
        case 0x1963e0u: goto label_1963e0;
        case 0x1963e4u: goto label_1963e4;
        case 0x1963e8u: goto label_1963e8;
        case 0x1963ecu: goto label_1963ec;
        case 0x1963f0u: goto label_1963f0;
        case 0x1963f4u: goto label_1963f4;
        case 0x1963f8u: goto label_1963f8;
        case 0x1963fcu: goto label_1963fc;
        case 0x196400u: goto label_196400;
        case 0x196404u: goto label_196404;
        case 0x196408u: goto label_196408;
        case 0x19640cu: goto label_19640c;
        default: break;
    }

    ctx->pc = 0x194e10u;

label_194e10:
    // 0x194e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_194e14:
    // 0x194e14: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x194e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_194e18:
    // 0x194e18: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x194e18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_194e1c:
    // 0x194e1c: 0x24635bc0  addiu       $v1, $v1, 0x5BC0
    ctx->pc = 0x194e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23488));
label_194e20:
    // 0x194e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_194e24:
    // 0x194e24: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x194e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_194e28:
    // 0x194e28: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194e28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194e2c:
    // 0x194e2c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_194e30:
    // 0x194e30: 0x24425ea0  addiu       $v0, $v0, 0x5EA0
    ctx->pc = 0x194e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24224));
label_194e34:
    // 0x194e34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x194e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_194e38:
    // 0x194e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194e3c:
    // 0x194e3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_194e40:
    // 0x194e40: 0x40f809  jalr        $v0
label_194e44:
    if (ctx->pc == 0x194E44u) {
        ctx->pc = 0x194E48u;
        goto label_194e48;
    }
    ctx->pc = 0x194E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194E48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E40u, 0x194E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194E48u;
label_194e48:
    // 0x194e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194e4c:
    // 0x194e4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x194e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_194e50:
    // 0x194e50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x194e50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_194e54:
    // 0x194e54: 0x3e00008  jr          $ra
label_194e58:
    if (ctx->pc == 0x194E58u) {
        ctx->pc = 0x194E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E54u;
        // 0x194e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E5Cu;
        goto label_194e5c;
    }
    ctx->pc = 0x194E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E54u;
        // 0x194e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194E5Cu;
label_194e5c:
    // 0x194e5c: 0x0  nop
    ctx->pc = 0x194e5cu;
    // NOP
label_194e60:
    // 0x194e60: 0x3e00008  jr          $ra
label_194e64:
    if (ctx->pc == 0x194E64u) {
        ctx->pc = 0x194E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E60u;
        // 0x194e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E68u;
        goto label_194e68;
    }
    ctx->pc = 0x194E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E60u;
        // 0x194e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194E68u;
label_194e68:
    // 0x194e68: 0x0  nop
    ctx->pc = 0x194e68u;
    // NOP
label_194e6c:
    // 0x194e6c: 0x0  nop
    ctx->pc = 0x194e6cu;
    // NOP
label_194e70:
    // 0x194e70: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x194e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_194e74:
    // 0x194e74: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x194e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_194e78:
    // 0x194e78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194e7c:
    // 0x194e7c: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x194e7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_194e80:
    // 0x194e80: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
label_194e84:
    if (ctx->pc == 0x194E84u) {
        ctx->pc = 0x194E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E80u;
        // 0x194e84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E88u;
        goto label_194e88;
    }
    ctx->pc = 0x194E80u;
    {
        const bool branch_taken_0x194e80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194e80) {
            ctx->pc = 0x194E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194E80u;
            // 0x194e84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194EACu;
            goto label_194eac;
        }
    }
    ctx->pc = 0x194E88u;
label_194e88:
    // 0x194e88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_194e8c:
    // 0x194e8c: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_194e90:
    // 0x194e90: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x194e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_194e94:
    // 0x194e94: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x194e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_194e98:
    // 0x194e98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_194e9c:
    if (ctx->pc == 0x194E9Cu) {
        ctx->pc = 0x194EA0u;
        goto label_194ea0;
    }
    ctx->pc = 0x194E98u;
    {
        const bool branch_taken_0x194e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194e98) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194EA0u;
label_194ea0:
    // 0x194ea0: 0x10000002  b           . + 4 + (0x2 << 2)
label_194ea4:
    if (ctx->pc == 0x194EA4u) {
        ctx->pc = 0x194EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EA0u;
        // 0x194ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EA8u;
        goto label_194ea8;
    }
    ctx->pc = 0x194EA0u;
    {
        const bool branch_taken_0x194ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EA0u;
        // 0x194ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ea0) {
            ctx->pc = 0x194EACu;
            goto label_194eac;
        }
    }
    ctx->pc = 0x194EA8u;
label_194ea8:
    // 0x194ea8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194eac:
    // 0x194eac: 0x3e00008  jr          $ra
label_194eb0:
    if (ctx->pc == 0x194EB0u) {
        ctx->pc = 0x194EB4u;
        goto label_194eb4;
    }
    ctx->pc = 0x194EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194EB4u;
label_194eb4:
    // 0x194eb4: 0x0  nop
    ctx->pc = 0x194eb4u;
    // NOP
label_194eb8:
    // 0x194eb8: 0x0  nop
    ctx->pc = 0x194eb8u;
    // NOP
label_194ebc:
    // 0x194ebc: 0x0  nop
    ctx->pc = 0x194ebcu;
    // NOP
label_194ec0:
    // 0x194ec0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x194ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_194ec4:
    // 0x194ec4: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x194ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_194ec8:
    // 0x194ec8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194ecc:
    // 0x194ecc: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x194eccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_194ed0:
    // 0x194ed0: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
label_194ed4:
    if (ctx->pc == 0x194ED4u) {
        ctx->pc = 0x194ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ED0u;
        // 0x194ed4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194ED8u;
        goto label_194ed8;
    }
    ctx->pc = 0x194ED0u;
    {
        const bool branch_taken_0x194ed0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194ed0) {
            ctx->pc = 0x194ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194ED0u;
            // 0x194ed4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194EFCu;
            goto label_194efc;
        }
    }
    ctx->pc = 0x194ED8u;
label_194ed8:
    // 0x194ed8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_194edc:
    // 0x194edc: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x194edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_194ee0:
    // 0x194ee0: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x194ee0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_194ee4:
    // 0x194ee4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x194ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_194ee8:
    // 0x194ee8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_194eec:
    if (ctx->pc == 0x194EECu) {
        ctx->pc = 0x194EF0u;
        goto label_194ef0;
    }
    ctx->pc = 0x194EE8u;
    {
        const bool branch_taken_0x194ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194ee8) {
            ctx->pc = 0x194EF8u;
            goto label_194ef8;
        }
    }
    ctx->pc = 0x194EF0u;
label_194ef0:
    // 0x194ef0: 0x10000002  b           . + 4 + (0x2 << 2)
label_194ef4:
    if (ctx->pc == 0x194EF4u) {
        ctx->pc = 0x194EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EF0u;
        // 0x194ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EF8u;
        goto label_194ef8;
    }
    ctx->pc = 0x194EF0u;
    {
        const bool branch_taken_0x194ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EF0u;
        // 0x194ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ef0) {
            ctx->pc = 0x194EFCu;
            goto label_194efc;
        }
    }
    ctx->pc = 0x194EF8u;
label_194ef8:
    // 0x194ef8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194efc:
    // 0x194efc: 0x3e00008  jr          $ra
label_194f00:
    if (ctx->pc == 0x194F00u) {
        ctx->pc = 0x194F04u;
        goto label_194f04;
    }
    ctx->pc = 0x194EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194F04u;
label_194f04:
    // 0x194f04: 0x0  nop
    ctx->pc = 0x194f04u;
    // NOP
label_194f08:
    // 0x194f08: 0x0  nop
    ctx->pc = 0x194f08u;
    // NOP
label_194f0c:
    // 0x194f0c: 0x0  nop
    ctx->pc = 0x194f0cu;
    // NOP
label_194f10:
    // 0x194f10: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x194f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_194f14:
    // 0x194f14: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x194f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_194f18:
    // 0x194f18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194f1c:
    // 0x194f1c: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x194f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_194f20:
    // 0x194f20: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
label_194f24:
    if (ctx->pc == 0x194F24u) {
        ctx->pc = 0x194F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F20u;
        // 0x194f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F28u;
        goto label_194f28;
    }
    ctx->pc = 0x194F20u;
    {
        const bool branch_taken_0x194f20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f20) {
            ctx->pc = 0x194F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194F20u;
            // 0x194f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194F4Cu;
            goto label_194f4c;
        }
    }
    ctx->pc = 0x194F28u;
label_194f28:
    // 0x194f28: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_194f2c:
    // 0x194f2c: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x194f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_194f30:
    // 0x194f30: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x194f30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_194f34:
    // 0x194f34: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x194f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_194f38:
    // 0x194f38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_194f3c:
    if (ctx->pc == 0x194F3Cu) {
        ctx->pc = 0x194F40u;
        goto label_194f40;
    }
    ctx->pc = 0x194F38u;
    {
        const bool branch_taken_0x194f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f38) {
            ctx->pc = 0x194F48u;
            goto label_194f48;
        }
    }
    ctx->pc = 0x194F40u;
label_194f40:
    // 0x194f40: 0x10000002  b           . + 4 + (0x2 << 2)
label_194f44:
    if (ctx->pc == 0x194F44u) {
        ctx->pc = 0x194F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F40u;
        // 0x194f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F48u;
        goto label_194f48;
    }
    ctx->pc = 0x194F40u;
    {
        const bool branch_taken_0x194f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F40u;
        // 0x194f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f40) {
            ctx->pc = 0x194F4Cu;
            goto label_194f4c;
        }
    }
    ctx->pc = 0x194F48u;
label_194f48:
    // 0x194f48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194f4c:
    // 0x194f4c: 0x3e00008  jr          $ra
label_194f50:
    if (ctx->pc == 0x194F50u) {
        ctx->pc = 0x194F54u;
        goto label_194f54;
    }
    ctx->pc = 0x194F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194F54u;
label_194f54:
    // 0x194f54: 0x0  nop
    ctx->pc = 0x194f54u;
    // NOP
label_194f58:
    // 0x194f58: 0x0  nop
    ctx->pc = 0x194f58u;
    // NOP
label_194f5c:
    // 0x194f5c: 0x0  nop
    ctx->pc = 0x194f5cu;
    // NOP
label_194f60:
    // 0x194f60: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x194f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_194f64:
    // 0x194f64: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x194f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_194f68:
    // 0x194f68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194f6c:
    // 0x194f6c: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x194f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_194f70:
    // 0x194f70: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
label_194f74:
    if (ctx->pc == 0x194F74u) {
        ctx->pc = 0x194F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F70u;
        // 0x194f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F78u;
        goto label_194f78;
    }
    ctx->pc = 0x194F70u;
    {
        const bool branch_taken_0x194f70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f70) {
            ctx->pc = 0x194F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194F70u;
            // 0x194f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194F9Cu;
            goto label_194f9c;
        }
    }
    ctx->pc = 0x194F78u;
label_194f78:
    // 0x194f78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_194f7c:
    // 0x194f7c: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x194f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_194f80:
    // 0x194f80: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x194f80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_194f84:
    // 0x194f84: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x194f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_194f88:
    // 0x194f88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_194f8c:
    if (ctx->pc == 0x194F8Cu) {
        ctx->pc = 0x194F90u;
        goto label_194f90;
    }
    ctx->pc = 0x194F88u;
    {
        const bool branch_taken_0x194f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f88) {
            ctx->pc = 0x194F98u;
            goto label_194f98;
        }
    }
    ctx->pc = 0x194F90u;
label_194f90:
    // 0x194f90: 0x10000002  b           . + 4 + (0x2 << 2)
label_194f94:
    if (ctx->pc == 0x194F94u) {
        ctx->pc = 0x194F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F90u;
        // 0x194f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F98u;
        goto label_194f98;
    }
    ctx->pc = 0x194F90u;
    {
        const bool branch_taken_0x194f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F90u;
        // 0x194f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f90) {
            ctx->pc = 0x194F9Cu;
            goto label_194f9c;
        }
    }
    ctx->pc = 0x194F98u;
label_194f98:
    // 0x194f98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194f9c:
    // 0x194f9c: 0x3e00008  jr          $ra
label_194fa0:
    if (ctx->pc == 0x194FA0u) {
        ctx->pc = 0x194FA4u;
        goto label_194fa4;
    }
    ctx->pc = 0x194F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194FA4u;
label_194fa4:
    // 0x194fa4: 0x0  nop
    ctx->pc = 0x194fa4u;
    // NOP
label_194fa8:
    // 0x194fa8: 0x0  nop
    ctx->pc = 0x194fa8u;
    // NOP
label_194fac:
    // 0x194fac: 0x0  nop
    ctx->pc = 0x194facu;
    // NOP
label_194fb0:
    // 0x194fb0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x194fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_194fb4:
    // 0x194fb4: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x194fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_194fb8:
    // 0x194fb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194fbc:
    // 0x194fbc: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x194fbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_194fc0:
    // 0x194fc0: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
label_194fc4:
    if (ctx->pc == 0x194FC4u) {
        ctx->pc = 0x194FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FC0u;
        // 0x194fc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FC8u;
        goto label_194fc8;
    }
    ctx->pc = 0x194FC0u;
    {
        const bool branch_taken_0x194fc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194fc0) {
            ctx->pc = 0x194FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194FC0u;
            // 0x194fc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194FECu;
            goto label_194fec;
        }
    }
    ctx->pc = 0x194FC8u;
label_194fc8:
    // 0x194fc8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_194fcc:
    // 0x194fcc: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x194fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_194fd0:
    // 0x194fd0: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x194fd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_194fd4:
    // 0x194fd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_194fd8:
    // 0x194fd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_194fdc:
    if (ctx->pc == 0x194FDCu) {
        ctx->pc = 0x194FE0u;
        goto label_194fe0;
    }
    ctx->pc = 0x194FD8u;
    {
        const bool branch_taken_0x194fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194fd8) {
            ctx->pc = 0x194FE8u;
            goto label_194fe8;
        }
    }
    ctx->pc = 0x194FE0u;
label_194fe0:
    // 0x194fe0: 0x10000002  b           . + 4 + (0x2 << 2)
label_194fe4:
    if (ctx->pc == 0x194FE4u) {
        ctx->pc = 0x194FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FE0u;
        // 0x194fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FE8u;
        goto label_194fe8;
    }
    ctx->pc = 0x194FE0u;
    {
        const bool branch_taken_0x194fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FE0u;
        // 0x194fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fe0) {
            ctx->pc = 0x194FECu;
            goto label_194fec;
        }
    }
    ctx->pc = 0x194FE8u;
label_194fe8:
    // 0x194fe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194fec:
    // 0x194fec: 0x3e00008  jr          $ra
label_194ff0:
    if (ctx->pc == 0x194FF0u) {
        ctx->pc = 0x194FF4u;
        goto label_194ff4;
    }
    ctx->pc = 0x194FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194FF4u;
label_194ff4:
    // 0x194ff4: 0x0  nop
    ctx->pc = 0x194ff4u;
    // NOP
label_194ff8:
    // 0x194ff8: 0x0  nop
    ctx->pc = 0x194ff8u;
    // NOP
label_194ffc:
    // 0x194ffc: 0x0  nop
    ctx->pc = 0x194ffcu;
    // NOP
label_195000:
    // 0x195000: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x195000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_195004:
    // 0x195004: 0x3842006f  xori        $v0, $v0, 0x6F
    ctx->pc = 0x195004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)111);
label_195008:
    // 0x195008: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x195008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19500c:
    // 0x19500c: 0x3e00008  jr          $ra
label_195010:
    if (ctx->pc == 0x195010u) {
        ctx->pc = 0x195010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19500Cu;
        // 0x195010: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195014u;
        goto label_195014;
    }
    ctx->pc = 0x19500Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19500Cu;
        // 0x195010: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19500Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195014u;
label_195014:
    // 0x195014: 0x0  nop
    ctx->pc = 0x195014u;
    // NOP
label_195018:
    // 0x195018: 0x0  nop
    ctx->pc = 0x195018u;
    // NOP
label_19501c:
    // 0x19501c: 0x0  nop
    ctx->pc = 0x19501cu;
    // NOP
label_195020:
    // 0x195020: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x195020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_195024:
    // 0x195024: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195028:
    // 0x195028: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19502c:
    // 0x19502c: 0x2842000d  slti        $v0, $v0, 0xD
    ctx->pc = 0x19502cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_195030:
    // 0x195030: 0x3e00008  jr          $ra
label_195034:
    if (ctx->pc == 0x195034u) {
        ctx->pc = 0x195034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195030u;
        // 0x195034: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195038u;
        goto label_195038;
    }
    ctx->pc = 0x195030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195030u;
        // 0x195034: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195038u;
label_195038:
    // 0x195038: 0x0  nop
    ctx->pc = 0x195038u;
    // NOP
label_19503c:
    // 0x19503c: 0x0  nop
    ctx->pc = 0x19503cu;
    // NOP
label_195040:
    // 0x195040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_195044:
    // 0x195044: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195048:
    // 0x195048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19504c:
    // 0x19504c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_195050:
    // 0x195050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_195054:
    // 0x195054: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x195054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195058:
    // 0x195058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19505c:
    // 0x19505c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19505cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_195060:
    // 0x195060: 0x9444d0e0  lhu         $a0, -0x2F20($v0)
    ctx->pc = 0x195060u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294955232)));
label_195064:
    // 0x195064: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x195064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_195068:
    // 0x195068: 0xc063600  jal         func_18D800
label_19506c:
    if (ctx->pc == 0x19506Cu) {
        ctx->pc = 0x19506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195068u;
        // 0x19506c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195070u;
        goto label_195070;
    }
    ctx->pc = 0x195068u;
    SET_GPR_U32(ctx, 31, 0x195070u);
    ctx->pc = 0x19506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195068u;
    // 0x19506c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D800u, 0x195068u, 0x195070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195070u;
label_195070:
    // 0x195070: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x195070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_195074:
    // 0x195074: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x195074u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
label_195078:
    // 0x195078: 0x2463ff90  addiu       $v1, $v1, -0x70
    ctx->pc = 0x195078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967184));
label_19507c:
    // 0x19507c: 0x24e75bc0  addiu       $a3, $a3, 0x5BC0
    ctx->pc = 0x19507cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23488));
label_195080:
    // 0x195080: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x195080u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_195084:
    // 0x195084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195088:
    // 0x195088: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x195088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_19508c:
    // 0x19508c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x19508cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_195090:
    // 0x195090: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x195090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_195094:
    // 0x195094: 0x24635ea0  addiu       $v1, $v1, 0x5EA0
    ctx->pc = 0x195094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24224));
label_195098:
    // 0x195098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x195098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19509c:
    // 0x19509c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x19509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1950a0:
    // 0x1950a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1950a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1950a4:
    // 0x1950a4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1950a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1950a8:
    // 0x1950a8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1950a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1950ac:
    // 0x1950ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1950acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1950b0:
    // 0x1950b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1950b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1950b4:
    // 0x1950b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1950b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1950b8:
    // 0x1950b8: 0x40f809  jalr        $v0
label_1950bc:
    if (ctx->pc == 0x1950BCu) {
        ctx->pc = 0x1950BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950B8u;
        // 0x1950bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950C0u;
        goto label_1950c0;
    }
    ctx->pc = 0x1950B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1950C0u);
        ctx->pc = 0x1950BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950B8u;
        // 0x1950bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1950B8u, 0x1950C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1950C0u;
label_1950c0:
    // 0x1950c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1950c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1950c4:
    // 0x1950c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1950c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1950c8:
    // 0x1950c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1950c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1950cc:
    // 0x1950cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1950ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1950d0:
    // 0x1950d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1950d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1950d4:
    // 0x1950d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1950d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1950d8:
    // 0x1950d8: 0x3e00008  jr          $ra
label_1950dc:
    if (ctx->pc == 0x1950DCu) {
        ctx->pc = 0x1950DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950D8u;
        // 0x1950dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950E0u;
        goto label_1950e0;
    }
    ctx->pc = 0x1950D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1950DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950D8u;
        // 0x1950dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1950D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1950E0u;
label_1950e0:
    // 0x1950e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1950e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1950e4:
    // 0x1950e4: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x1950e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_1950e8:
    // 0x1950e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1950e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1950ec:
    // 0x1950ec: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x1950ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_1950f0:
    // 0x1950f0: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
label_1950f4:
    if (ctx->pc == 0x1950F4u) {
        ctx->pc = 0x1950F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950F0u;
        // 0x1950f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950F8u;
        goto label_1950f8;
    }
    ctx->pc = 0x1950F0u;
    {
        const bool branch_taken_0x1950f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950f0) {
            ctx->pc = 0x1950F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1950F0u;
            // 0x1950f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195120u;
            goto label_195120;
        }
    }
    ctx->pc = 0x1950F8u;
label_1950f8:
    // 0x1950f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1950f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1950fc:
    // 0x1950fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1950fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_195100:
    // 0x195100: 0x8c44d0f0  lw          $a0, -0x2F10($v0)
    ctx->pc = 0x195100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
label_195104:
    // 0x195104: 0x34620c00  ori         $v0, $v1, 0xC00
    ctx->pc = 0x195104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
label_195108:
    // 0x195108: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x195108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_19510c:
    // 0x19510c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_195110:
    if (ctx->pc == 0x195110u) {
        ctx->pc = 0x195114u;
        goto label_195114;
    }
    ctx->pc = 0x19510Cu;
    {
        const bool branch_taken_0x19510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19510c) {
            ctx->pc = 0x19511Cu;
            goto label_19511c;
        }
    }
    ctx->pc = 0x195114u;
label_195114:
    // 0x195114: 0x10000002  b           . + 4 + (0x2 << 2)
label_195118:
    if (ctx->pc == 0x195118u) {
        ctx->pc = 0x195118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195114u;
        // 0x195118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19511Cu;
        goto label_19511c;
    }
    ctx->pc = 0x195114u;
    {
        const bool branch_taken_0x195114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195114u;
        // 0x195118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195114) {
            ctx->pc = 0x195120u;
            goto label_195120;
        }
    }
    ctx->pc = 0x19511Cu;
label_19511c:
    // 0x19511c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195120:
    // 0x195120: 0x3e00008  jr          $ra
label_195124:
    if (ctx->pc == 0x195124u) {
        ctx->pc = 0x195128u;
        goto label_195128;
    }
    ctx->pc = 0x195120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195128u;
label_195128:
    // 0x195128: 0x0  nop
    ctx->pc = 0x195128u;
    // NOP
label_19512c:
    // 0x19512c: 0x0  nop
    ctx->pc = 0x19512cu;
    // NOP
label_195130:
    // 0x195130: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x195130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_195134:
    // 0x195134: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195138:
    // 0x195138: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19513c:
    // 0x19513c: 0x2842000d  slti        $v0, $v0, 0xD
    ctx->pc = 0x19513cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_195140:
    // 0x195140: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x195140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_195144:
    // 0x195144: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x195144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_195148:
    // 0x195148: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x195148u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_19514c:
    // 0x19514c: 0x3e00008  jr          $ra
label_195150:
    if (ctx->pc == 0x195150u) {
        ctx->pc = 0x195150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19514Cu;
        // 0x195150: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195154u;
        goto label_195154;
    }
    ctx->pc = 0x19514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19514Cu;
        // 0x195150: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19514Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195154u;
label_195154:
    // 0x195154: 0x0  nop
    ctx->pc = 0x195154u;
    // NOP
label_195158:
    // 0x195158: 0x0  nop
    ctx->pc = 0x195158u;
    // NOP
label_19515c:
    // 0x19515c: 0x0  nop
    ctx->pc = 0x19515cu;
    // NOP
label_195160:
    // 0x195160: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x195160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_195164:
    // 0x195164: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195168:
    // 0x195168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19516c:
    // 0x19516c: 0x2842000d  slti        $v0, $v0, 0xD
    ctx->pc = 0x19516cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
label_195170:
    // 0x195170: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x195170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_195174:
    // 0x195174: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x195174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_195178:
    // 0x195178: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x195178u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_19517c:
    // 0x19517c: 0x3e00008  jr          $ra
label_195180:
    if (ctx->pc == 0x195180u) {
        ctx->pc = 0x195180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19517Cu;
        // 0x195180: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195184u;
        goto label_195184;
    }
    ctx->pc = 0x19517Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19517Cu;
        // 0x195180: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19517Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195184u;
label_195184:
    // 0x195184: 0x0  nop
    ctx->pc = 0x195184u;
    // NOP
label_195188:
    // 0x195188: 0x0  nop
    ctx->pc = 0x195188u;
    // NOP
label_19518c:
    // 0x19518c: 0x0  nop
    ctx->pc = 0x19518cu;
    // NOP
label_195190:
    // 0x195190: 0x3e00008  jr          $ra
label_195194:
    if (ctx->pc == 0x195194u) {
        ctx->pc = 0x195194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195190u;
        // 0x195194: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195198u;
        goto label_195198;
    }
    ctx->pc = 0x195190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195190u;
        // 0x195194: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195198u;
label_195198:
    // 0x195198: 0x0  nop
    ctx->pc = 0x195198u;
    // NOP
label_19519c:
    // 0x19519c: 0x0  nop
    ctx->pc = 0x19519cu;
    // NOP
label_1951a0:
    // 0x1951a0: 0x3e00008  jr          $ra
label_1951a4:
    if (ctx->pc == 0x1951A4u) {
        ctx->pc = 0x1951A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951A0u;
        // 0x1951a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951A8u;
        goto label_1951a8;
    }
    ctx->pc = 0x1951A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1951A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951A0u;
        // 0x1951a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951A8u;
label_1951a8:
    // 0x1951a8: 0x0  nop
    ctx->pc = 0x1951a8u;
    // NOP
label_1951ac:
    // 0x1951ac: 0x0  nop
    ctx->pc = 0x1951acu;
    // NOP
label_1951b0:
    // 0x1951b0: 0x3e00008  jr          $ra
label_1951b4:
    if (ctx->pc == 0x1951B4u) {
        ctx->pc = 0x1951B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951B0u;
        // 0x1951b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951B8u;
        goto label_1951b8;
    }
    ctx->pc = 0x1951B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1951B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951B0u;
        // 0x1951b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951B8u;
label_1951b8:
    // 0x1951b8: 0x0  nop
    ctx->pc = 0x1951b8u;
    // NOP
label_1951bc:
    // 0x1951bc: 0x0  nop
    ctx->pc = 0x1951bcu;
    // NOP
label_1951c0:
    // 0x1951c0: 0x3e00008  jr          $ra
label_1951c4:
    if (ctx->pc == 0x1951C4u) {
        ctx->pc = 0x1951C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951C0u;
        // 0x1951c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951C8u;
        goto label_1951c8;
    }
    ctx->pc = 0x1951C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1951C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951C0u;
        // 0x1951c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951C8u;
label_1951c8:
    // 0x1951c8: 0x0  nop
    ctx->pc = 0x1951c8u;
    // NOP
label_1951cc:
    // 0x1951cc: 0x0  nop
    ctx->pc = 0x1951ccu;
    // NOP
label_1951d0:
    // 0x1951d0: 0x3e00008  jr          $ra
label_1951d4:
    if (ctx->pc == 0x1951D4u) {
        ctx->pc = 0x1951D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951D0u;
        // 0x1951d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951D8u;
        goto label_1951d8;
    }
    ctx->pc = 0x1951D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1951D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951D0u;
        // 0x1951d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951D8u;
label_1951d8:
    // 0x1951d8: 0x0  nop
    ctx->pc = 0x1951d8u;
    // NOP
label_1951dc:
    // 0x1951dc: 0x0  nop
    ctx->pc = 0x1951dcu;
    // NOP
label_1951e0:
    // 0x1951e0: 0x3e00008  jr          $ra
label_1951e4:
    if (ctx->pc == 0x1951E4u) {
        ctx->pc = 0x1951E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951E0u;
        // 0x1951e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951E8u;
        goto label_1951e8;
    }
    ctx->pc = 0x1951E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1951E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951E0u;
        // 0x1951e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951E8u;
label_1951e8:
    // 0x1951e8: 0x0  nop
    ctx->pc = 0x1951e8u;
    // NOP
label_1951ec:
    // 0x1951ec: 0x0  nop
    ctx->pc = 0x1951ecu;
    // NOP
label_1951f0:
    // 0x1951f0: 0x3e00008  jr          $ra
label_1951f4:
    if (ctx->pc == 0x1951F4u) {
        ctx->pc = 0x1951F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F0u;
        // 0x1951f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951F8u;
        goto label_1951f8;
    }
    ctx->pc = 0x1951F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1951F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F0u;
        // 0x1951f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951F8u;
label_1951f8:
    // 0x1951f8: 0x0  nop
    ctx->pc = 0x1951f8u;
    // NOP
label_1951fc:
    // 0x1951fc: 0x0  nop
    ctx->pc = 0x1951fcu;
    // NOP
label_195200:
    // 0x195200: 0x3e00008  jr          $ra
label_195204:
    if (ctx->pc == 0x195204u) {
        ctx->pc = 0x195204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195200u;
        // 0x195204: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195208u;
        goto label_195208;
    }
    ctx->pc = 0x195200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195200u;
        // 0x195204: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195208u;
label_195208:
    // 0x195208: 0x0  nop
    ctx->pc = 0x195208u;
    // NOP
label_19520c:
    // 0x19520c: 0x0  nop
    ctx->pc = 0x19520cu;
    // NOP
label_195210:
    // 0x195210: 0x3e00008  jr          $ra
label_195214:
    if (ctx->pc == 0x195214u) {
        ctx->pc = 0x195214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195210u;
        // 0x195214: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195218u;
        goto label_195218;
    }
    ctx->pc = 0x195210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195210u;
        // 0x195214: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195218u;
label_195218:
    // 0x195218: 0x0  nop
    ctx->pc = 0x195218u;
    // NOP
label_19521c:
    // 0x19521c: 0x0  nop
    ctx->pc = 0x19521cu;
    // NOP
label_195220:
    // 0x195220: 0x3e00008  jr          $ra
label_195224:
    if (ctx->pc == 0x195224u) {
        ctx->pc = 0x195224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195220u;
        // 0x195224: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195228u;
        goto label_195228;
    }
    ctx->pc = 0x195220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195220u;
        // 0x195224: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195228u;
label_195228:
    // 0x195228: 0x0  nop
    ctx->pc = 0x195228u;
    // NOP
label_19522c:
    // 0x19522c: 0x0  nop
    ctx->pc = 0x19522cu;
    // NOP
label_195230:
    // 0x195230: 0x3e00008  jr          $ra
label_195234:
    if (ctx->pc == 0x195234u) {
        ctx->pc = 0x195234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195230u;
        // 0x195234: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195238u;
        goto label_195238;
    }
    ctx->pc = 0x195230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195230u;
        // 0x195234: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195238u;
label_195238:
    // 0x195238: 0x0  nop
    ctx->pc = 0x195238u;
    // NOP
label_19523c:
    // 0x19523c: 0x0  nop
    ctx->pc = 0x19523cu;
    // NOP
label_195240:
    // 0x195240: 0x3e00008  jr          $ra
label_195244:
    if (ctx->pc == 0x195244u) {
        ctx->pc = 0x195244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195240u;
        // 0x195244: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195248u;
        goto label_195248;
    }
    ctx->pc = 0x195240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195240u;
        // 0x195244: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195248u;
label_195248:
    // 0x195248: 0x0  nop
    ctx->pc = 0x195248u;
    // NOP
label_19524c:
    // 0x19524c: 0x0  nop
    ctx->pc = 0x19524cu;
    // NOP
label_195250:
    // 0x195250: 0x3e00008  jr          $ra
label_195254:
    if (ctx->pc == 0x195254u) {
        ctx->pc = 0x195254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195250u;
        // 0x195254: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195258u;
        goto label_195258;
    }
    ctx->pc = 0x195250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195250u;
        // 0x195254: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195258u;
label_195258:
    // 0x195258: 0x0  nop
    ctx->pc = 0x195258u;
    // NOP
label_19525c:
    // 0x19525c: 0x0  nop
    ctx->pc = 0x19525cu;
    // NOP
label_195260:
    // 0x195260: 0x3e00008  jr          $ra
label_195264:
    if (ctx->pc == 0x195264u) {
        ctx->pc = 0x195264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195260u;
        // 0x195264: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195268u;
        goto label_195268;
    }
    ctx->pc = 0x195260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195260u;
        // 0x195264: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195268u;
label_195268:
    // 0x195268: 0x0  nop
    ctx->pc = 0x195268u;
    // NOP
label_19526c:
    // 0x19526c: 0x0  nop
    ctx->pc = 0x19526cu;
    // NOP
label_195270:
    // 0x195270: 0x3e00008  jr          $ra
label_195274:
    if (ctx->pc == 0x195274u) {
        ctx->pc = 0x195274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195270u;
        // 0x195274: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195278u;
        goto label_195278;
    }
    ctx->pc = 0x195270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195270u;
        // 0x195274: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195278u;
label_195278:
    // 0x195278: 0x0  nop
    ctx->pc = 0x195278u;
    // NOP
label_19527c:
    // 0x19527c: 0x0  nop
    ctx->pc = 0x19527cu;
    // NOP
label_195280:
    // 0x195280: 0x3e00008  jr          $ra
label_195284:
    if (ctx->pc == 0x195284u) {
        ctx->pc = 0x195284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195280u;
        // 0x195284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195288u;
        goto label_195288;
    }
    ctx->pc = 0x195280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195280u;
        // 0x195284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195288u;
label_195288:
    // 0x195288: 0x0  nop
    ctx->pc = 0x195288u;
    // NOP
label_19528c:
    // 0x19528c: 0x0  nop
    ctx->pc = 0x19528cu;
    // NOP
label_195290:
    // 0x195290: 0x3e00008  jr          $ra
label_195294:
    if (ctx->pc == 0x195294u) {
        ctx->pc = 0x195294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195290u;
        // 0x195294: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195298u;
        goto label_195298;
    }
    ctx->pc = 0x195290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195290u;
        // 0x195294: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195298u;
label_195298:
    // 0x195298: 0x0  nop
    ctx->pc = 0x195298u;
    // NOP
label_19529c:
    // 0x19529c: 0x0  nop
    ctx->pc = 0x19529cu;
    // NOP
label_1952a0:
    // 0x1952a0: 0x3e00008  jr          $ra
label_1952a4:
    if (ctx->pc == 0x1952A4u) {
        ctx->pc = 0x1952A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952A0u;
        // 0x1952a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952A8u;
        goto label_1952a8;
    }
    ctx->pc = 0x1952A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952A0u;
        // 0x1952a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1952A8u;
label_1952a8:
    // 0x1952a8: 0x0  nop
    ctx->pc = 0x1952a8u;
    // NOP
label_1952ac:
    // 0x1952ac: 0x0  nop
    ctx->pc = 0x1952acu;
    // NOP
label_1952b0:
    // 0x1952b0: 0x3e00008  jr          $ra
label_1952b4:
    if (ctx->pc == 0x1952B4u) {
        ctx->pc = 0x1952B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952B0u;
        // 0x1952b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952B8u;
        goto label_1952b8;
    }
    ctx->pc = 0x1952B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952B0u;
        // 0x1952b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1952B8u;
label_1952b8:
    // 0x1952b8: 0x0  nop
    ctx->pc = 0x1952b8u;
    // NOP
label_1952bc:
    // 0x1952bc: 0x0  nop
    ctx->pc = 0x1952bcu;
    // NOP
label_1952c0:
    // 0x1952c0: 0x3e00008  jr          $ra
label_1952c4:
    if (ctx->pc == 0x1952C4u) {
        ctx->pc = 0x1952C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952C0u;
        // 0x1952c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952C8u;
        goto label_1952c8;
    }
    ctx->pc = 0x1952C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952C0u;
        // 0x1952c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1952C8u;
label_1952c8:
    // 0x1952c8: 0x0  nop
    ctx->pc = 0x1952c8u;
    // NOP
label_1952cc:
    // 0x1952cc: 0x0  nop
    ctx->pc = 0x1952ccu;
    // NOP
label_1952d0:
    // 0x1952d0: 0x3e00008  jr          $ra
label_1952d4:
    if (ctx->pc == 0x1952D4u) {
        ctx->pc = 0x1952D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D0u;
        // 0x1952d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952D8u;
        goto label_1952d8;
    }
    ctx->pc = 0x1952D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D0u;
        // 0x1952d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1952D8u;
label_1952d8:
    // 0x1952d8: 0x0  nop
    ctx->pc = 0x1952d8u;
    // NOP
label_1952dc:
    // 0x1952dc: 0x0  nop
    ctx->pc = 0x1952dcu;
    // NOP
label_1952e0:
    // 0x1952e0: 0x3e00008  jr          $ra
label_1952e4:
    if (ctx->pc == 0x1952E4u) {
        ctx->pc = 0x1952E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952E0u;
        // 0x1952e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952E8u;
        goto label_1952e8;
    }
    ctx->pc = 0x1952E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952E0u;
        // 0x1952e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1952E8u;
label_1952e8:
    // 0x1952e8: 0x0  nop
    ctx->pc = 0x1952e8u;
    // NOP
label_1952ec:
    // 0x1952ec: 0x0  nop
    ctx->pc = 0x1952ecu;
    // NOP
label_1952f0:
    // 0x1952f0: 0x3e00008  jr          $ra
label_1952f4:
    if (ctx->pc == 0x1952F4u) {
        ctx->pc = 0x1952F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952F0u;
        // 0x1952f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952F8u;
        goto label_1952f8;
    }
    ctx->pc = 0x1952F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952F0u;
        // 0x1952f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1952F8u;
label_1952f8:
    // 0x1952f8: 0x0  nop
    ctx->pc = 0x1952f8u;
    // NOP
label_1952fc:
    // 0x1952fc: 0x0  nop
    ctx->pc = 0x1952fcu;
    // NOP
label_195300:
    // 0x195300: 0x3e00008  jr          $ra
label_195304:
    if (ctx->pc == 0x195304u) {
        ctx->pc = 0x195304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195300u;
        // 0x195304: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195308u;
        goto label_195308;
    }
    ctx->pc = 0x195300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195300u;
        // 0x195304: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195308u;
label_195308:
    // 0x195308: 0x0  nop
    ctx->pc = 0x195308u;
    // NOP
label_19530c:
    // 0x19530c: 0x0  nop
    ctx->pc = 0x19530cu;
    // NOP
label_195310:
    // 0x195310: 0x3e00008  jr          $ra
label_195314:
    if (ctx->pc == 0x195314u) {
        ctx->pc = 0x195314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195310u;
        // 0x195314: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195318u;
        goto label_195318;
    }
    ctx->pc = 0x195310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195310u;
        // 0x195314: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195318u;
label_195318:
    // 0x195318: 0x0  nop
    ctx->pc = 0x195318u;
    // NOP
label_19531c:
    // 0x19531c: 0x0  nop
    ctx->pc = 0x19531cu;
    // NOP
label_195320:
    // 0x195320: 0x3e00008  jr          $ra
label_195324:
    if (ctx->pc == 0x195324u) {
        ctx->pc = 0x195324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195320u;
        // 0x195324: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195328u;
        goto label_195328;
    }
    ctx->pc = 0x195320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195320u;
        // 0x195324: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195328u;
label_195328:
    // 0x195328: 0x0  nop
    ctx->pc = 0x195328u;
    // NOP
label_19532c:
    // 0x19532c: 0x0  nop
    ctx->pc = 0x19532cu;
    // NOP
label_195330:
    // 0x195330: 0x3e00008  jr          $ra
label_195334:
    if (ctx->pc == 0x195334u) {
        ctx->pc = 0x195334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195330u;
        // 0x195334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195338u;
        goto label_195338;
    }
    ctx->pc = 0x195330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195330u;
        // 0x195334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195338u;
label_195338:
    // 0x195338: 0x0  nop
    ctx->pc = 0x195338u;
    // NOP
label_19533c:
    // 0x19533c: 0x0  nop
    ctx->pc = 0x19533cu;
    // NOP
label_195340:
    // 0x195340: 0x3e00008  jr          $ra
label_195344:
    if (ctx->pc == 0x195344u) {
        ctx->pc = 0x195344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195340u;
        // 0x195344: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195348u;
        goto label_195348;
    }
    ctx->pc = 0x195340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195340u;
        // 0x195344: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195348u;
label_195348:
    // 0x195348: 0x0  nop
    ctx->pc = 0x195348u;
    // NOP
label_19534c:
    // 0x19534c: 0x0  nop
    ctx->pc = 0x19534cu;
    // NOP
label_195350:
    // 0x195350: 0x3e00008  jr          $ra
label_195354:
    if (ctx->pc == 0x195354u) {
        ctx->pc = 0x195354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195350u;
        // 0x195354: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195358u;
        goto label_195358;
    }
    ctx->pc = 0x195350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195350u;
        // 0x195354: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195358u;
label_195358:
    // 0x195358: 0x0  nop
    ctx->pc = 0x195358u;
    // NOP
label_19535c:
    // 0x19535c: 0x0  nop
    ctx->pc = 0x19535cu;
    // NOP
label_195360:
    // 0x195360: 0x3e00008  jr          $ra
label_195364:
    if (ctx->pc == 0x195364u) {
        ctx->pc = 0x195364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195360u;
        // 0x195364: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195368u;
        goto label_195368;
    }
    ctx->pc = 0x195360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195360u;
        // 0x195364: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195368u;
label_195368:
    // 0x195368: 0x0  nop
    ctx->pc = 0x195368u;
    // NOP
label_19536c:
    // 0x19536c: 0x0  nop
    ctx->pc = 0x19536cu;
    // NOP
label_195370:
    // 0x195370: 0x3e00008  jr          $ra
label_195374:
    if (ctx->pc == 0x195374u) {
        ctx->pc = 0x195374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195370u;
        // 0x195374: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195378u;
        goto label_195378;
    }
    ctx->pc = 0x195370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195370u;
        // 0x195374: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195378u;
label_195378:
    // 0x195378: 0x0  nop
    ctx->pc = 0x195378u;
    // NOP
label_19537c:
    // 0x19537c: 0x0  nop
    ctx->pc = 0x19537cu;
    // NOP
label_195380:
    // 0x195380: 0x3e00008  jr          $ra
label_195384:
    if (ctx->pc == 0x195384u) {
        ctx->pc = 0x195384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195380u;
        // 0x195384: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195388u;
        goto label_195388;
    }
    ctx->pc = 0x195380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195380u;
        // 0x195384: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195388u;
label_195388:
    // 0x195388: 0x0  nop
    ctx->pc = 0x195388u;
    // NOP
label_19538c:
    // 0x19538c: 0x0  nop
    ctx->pc = 0x19538cu;
    // NOP
label_195390:
    // 0x195390: 0x3e00008  jr          $ra
label_195394:
    if (ctx->pc == 0x195394u) {
        ctx->pc = 0x195394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195390u;
        // 0x195394: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195398u;
        goto label_195398;
    }
    ctx->pc = 0x195390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195390u;
        // 0x195394: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195398u;
label_195398:
    // 0x195398: 0x0  nop
    ctx->pc = 0x195398u;
    // NOP
label_19539c:
    // 0x19539c: 0x0  nop
    ctx->pc = 0x19539cu;
    // NOP
label_1953a0:
    // 0x1953a0: 0x3e00008  jr          $ra
label_1953a4:
    if (ctx->pc == 0x1953A4u) {
        ctx->pc = 0x1953A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953A0u;
        // 0x1953a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953A8u;
        goto label_1953a8;
    }
    ctx->pc = 0x1953A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953A0u;
        // 0x1953a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953A8u;
label_1953a8:
    // 0x1953a8: 0x0  nop
    ctx->pc = 0x1953a8u;
    // NOP
label_1953ac:
    // 0x1953ac: 0x0  nop
    ctx->pc = 0x1953acu;
    // NOP
label_1953b0:
    // 0x1953b0: 0x3e00008  jr          $ra
label_1953b4:
    if (ctx->pc == 0x1953B4u) {
        ctx->pc = 0x1953B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953B0u;
        // 0x1953b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953B8u;
        goto label_1953b8;
    }
    ctx->pc = 0x1953B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953B0u;
        // 0x1953b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953B8u;
label_1953b8:
    // 0x1953b8: 0x0  nop
    ctx->pc = 0x1953b8u;
    // NOP
label_1953bc:
    // 0x1953bc: 0x0  nop
    ctx->pc = 0x1953bcu;
    // NOP
label_1953c0:
    // 0x1953c0: 0x3e00008  jr          $ra
label_1953c4:
    if (ctx->pc == 0x1953C4u) {
        ctx->pc = 0x1953C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953C0u;
        // 0x1953c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953C8u;
        goto label_1953c8;
    }
    ctx->pc = 0x1953C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953C0u;
        // 0x1953c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953C8u;
label_1953c8:
    // 0x1953c8: 0x0  nop
    ctx->pc = 0x1953c8u;
    // NOP
label_1953cc:
    // 0x1953cc: 0x0  nop
    ctx->pc = 0x1953ccu;
    // NOP
label_1953d0:
    // 0x1953d0: 0x3e00008  jr          $ra
label_1953d4:
    if (ctx->pc == 0x1953D4u) {
        ctx->pc = 0x1953D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953D0u;
        // 0x1953d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953D8u;
        goto label_1953d8;
    }
    ctx->pc = 0x1953D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953D0u;
        // 0x1953d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953D8u;
label_1953d8:
    // 0x1953d8: 0x0  nop
    ctx->pc = 0x1953d8u;
    // NOP
label_1953dc:
    // 0x1953dc: 0x0  nop
    ctx->pc = 0x1953dcu;
    // NOP
label_1953e0:
    // 0x1953e0: 0x3e00008  jr          $ra
label_1953e4:
    if (ctx->pc == 0x1953E4u) {
        ctx->pc = 0x1953E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953E0u;
        // 0x1953e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953E8u;
        goto label_1953e8;
    }
    ctx->pc = 0x1953E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953E0u;
        // 0x1953e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953E8u;
label_1953e8:
    // 0x1953e8: 0x0  nop
    ctx->pc = 0x1953e8u;
    // NOP
label_1953ec:
    // 0x1953ec: 0x0  nop
    ctx->pc = 0x1953ecu;
    // NOP
label_1953f0:
    // 0x1953f0: 0x3e00008  jr          $ra
label_1953f4:
    if (ctx->pc == 0x1953F4u) {
        ctx->pc = 0x1953F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953F0u;
        // 0x1953f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953F8u;
        goto label_1953f8;
    }
    ctx->pc = 0x1953F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953F0u;
        // 0x1953f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953F8u;
label_1953f8:
    // 0x1953f8: 0x0  nop
    ctx->pc = 0x1953f8u;
    // NOP
label_1953fc:
    // 0x1953fc: 0x0  nop
    ctx->pc = 0x1953fcu;
    // NOP
label_195400:
    // 0x195400: 0x3e00008  jr          $ra
label_195404:
    if (ctx->pc == 0x195404u) {
        ctx->pc = 0x195404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195400u;
        // 0x195404: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195408u;
        goto label_195408;
    }
    ctx->pc = 0x195400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195400u;
        // 0x195404: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195408u;
label_195408:
    // 0x195408: 0x0  nop
    ctx->pc = 0x195408u;
    // NOP
label_19540c:
    // 0x19540c: 0x0  nop
    ctx->pc = 0x19540cu;
    // NOP
label_195410:
    // 0x195410: 0x3e00008  jr          $ra
label_195414:
    if (ctx->pc == 0x195414u) {
        ctx->pc = 0x195414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195410u;
        // 0x195414: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195418u;
        goto label_195418;
    }
    ctx->pc = 0x195410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195410u;
        // 0x195414: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195418u;
label_195418:
    // 0x195418: 0x0  nop
    ctx->pc = 0x195418u;
    // NOP
label_19541c:
    // 0x19541c: 0x0  nop
    ctx->pc = 0x19541cu;
    // NOP
label_195420:
    // 0x195420: 0x3e00008  jr          $ra
label_195424:
    if (ctx->pc == 0x195424u) {
        ctx->pc = 0x195424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195420u;
        // 0x195424: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195428u;
        goto label_195428;
    }
    ctx->pc = 0x195420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195420u;
        // 0x195424: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195428u;
label_195428:
    // 0x195428: 0x0  nop
    ctx->pc = 0x195428u;
    // NOP
label_19542c:
    // 0x19542c: 0x0  nop
    ctx->pc = 0x19542cu;
    // NOP
label_195430:
    // 0x195430: 0x3e00008  jr          $ra
label_195434:
    if (ctx->pc == 0x195434u) {
        ctx->pc = 0x195434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195430u;
        // 0x195434: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195438u;
        goto label_195438;
    }
    ctx->pc = 0x195430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195430u;
        // 0x195434: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195438u;
label_195438:
    // 0x195438: 0x0  nop
    ctx->pc = 0x195438u;
    // NOP
label_19543c:
    // 0x19543c: 0x0  nop
    ctx->pc = 0x19543cu;
    // NOP
label_195440:
    // 0x195440: 0x3e00008  jr          $ra
label_195444:
    if (ctx->pc == 0x195444u) {
        ctx->pc = 0x195444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195440u;
        // 0x195444: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195448u;
        goto label_195448;
    }
    ctx->pc = 0x195440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195440u;
        // 0x195444: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195448u;
label_195448:
    // 0x195448: 0x0  nop
    ctx->pc = 0x195448u;
    // NOP
label_19544c:
    // 0x19544c: 0x0  nop
    ctx->pc = 0x19544cu;
    // NOP
label_195450:
    // 0x195450: 0x3e00008  jr          $ra
label_195454:
    if (ctx->pc == 0x195454u) {
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195450u;
        // 0x195454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195458u;
        goto label_195458;
    }
    ctx->pc = 0x195450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195450u;
        // 0x195454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195458u;
label_195458:
    // 0x195458: 0x0  nop
    ctx->pc = 0x195458u;
    // NOP
label_19545c:
    // 0x19545c: 0x0  nop
    ctx->pc = 0x19545cu;
    // NOP
label_195460:
    // 0x195460: 0x3e00008  jr          $ra
label_195464:
    if (ctx->pc == 0x195464u) {
        ctx->pc = 0x195464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195460u;
        // 0x195464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195468u;
        goto label_195468;
    }
    ctx->pc = 0x195460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195460u;
        // 0x195464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195468u;
label_195468:
    // 0x195468: 0x0  nop
    ctx->pc = 0x195468u;
    // NOP
label_19546c:
    // 0x19546c: 0x0  nop
    ctx->pc = 0x19546cu;
    // NOP
label_195470:
    // 0x195470: 0x3e00008  jr          $ra
label_195474:
    if (ctx->pc == 0x195474u) {
        ctx->pc = 0x195474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195470u;
        // 0x195474: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195478u;
        goto label_195478;
    }
    ctx->pc = 0x195470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195470u;
        // 0x195474: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195478u;
label_195478:
    // 0x195478: 0x0  nop
    ctx->pc = 0x195478u;
    // NOP
label_19547c:
    // 0x19547c: 0x0  nop
    ctx->pc = 0x19547cu;
    // NOP
label_195480:
    // 0x195480: 0x3e00008  jr          $ra
label_195484:
    if (ctx->pc == 0x195484u) {
        ctx->pc = 0x195484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195480u;
        // 0x195484: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195488u;
        goto label_195488;
    }
    ctx->pc = 0x195480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195480u;
        // 0x195484: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195488u;
label_195488:
    // 0x195488: 0x0  nop
    ctx->pc = 0x195488u;
    // NOP
label_19548c:
    // 0x19548c: 0x0  nop
    ctx->pc = 0x19548cu;
    // NOP
label_195490:
    // 0x195490: 0x3e00008  jr          $ra
label_195494:
    if (ctx->pc == 0x195494u) {
        ctx->pc = 0x195494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195490u;
        // 0x195494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195498u;
        goto label_195498;
    }
    ctx->pc = 0x195490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195490u;
        // 0x195494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195498u;
label_195498:
    // 0x195498: 0x0  nop
    ctx->pc = 0x195498u;
    // NOP
label_19549c:
    // 0x19549c: 0x0  nop
    ctx->pc = 0x19549cu;
    // NOP
label_1954a0:
    // 0x1954a0: 0x3e00008  jr          $ra
label_1954a4:
    if (ctx->pc == 0x1954A4u) {
        ctx->pc = 0x1954A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954A0u;
        // 0x1954a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954A8u;
        goto label_1954a8;
    }
    ctx->pc = 0x1954A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1954A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954A0u;
        // 0x1954a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1954A8u;
label_1954a8:
    // 0x1954a8: 0x0  nop
    ctx->pc = 0x1954a8u;
    // NOP
label_1954ac:
    // 0x1954ac: 0x0  nop
    ctx->pc = 0x1954acu;
    // NOP
label_1954b0:
    // 0x1954b0: 0x3e00008  jr          $ra
label_1954b4:
    if (ctx->pc == 0x1954B4u) {
        ctx->pc = 0x1954B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954B0u;
        // 0x1954b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954B8u;
        goto label_1954b8;
    }
    ctx->pc = 0x1954B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1954B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954B0u;
        // 0x1954b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1954B8u;
label_1954b8:
    // 0x1954b8: 0x0  nop
    ctx->pc = 0x1954b8u;
    // NOP
label_1954bc:
    // 0x1954bc: 0x0  nop
    ctx->pc = 0x1954bcu;
    // NOP
label_1954c0:
    // 0x1954c0: 0x3e00008  jr          $ra
label_1954c4:
    if (ctx->pc == 0x1954C4u) {
        ctx->pc = 0x1954C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954C0u;
        // 0x1954c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954C8u;
        goto label_1954c8;
    }
    ctx->pc = 0x1954C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1954C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954C0u;
        // 0x1954c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1954C8u;
label_1954c8:
    // 0x1954c8: 0x0  nop
    ctx->pc = 0x1954c8u;
    // NOP
label_1954cc:
    // 0x1954cc: 0x0  nop
    ctx->pc = 0x1954ccu;
    // NOP
label_1954d0:
    // 0x1954d0: 0x3e00008  jr          $ra
label_1954d4:
    if (ctx->pc == 0x1954D4u) {
        ctx->pc = 0x1954D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954D0u;
        // 0x1954d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954D8u;
        goto label_1954d8;
    }
    ctx->pc = 0x1954D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1954D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954D0u;
        // 0x1954d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1954D8u;
label_1954d8:
    // 0x1954d8: 0x0  nop
    ctx->pc = 0x1954d8u;
    // NOP
label_1954dc:
    // 0x1954dc: 0x0  nop
    ctx->pc = 0x1954dcu;
    // NOP
label_1954e0:
    // 0x1954e0: 0x3e00008  jr          $ra
label_1954e4:
    if (ctx->pc == 0x1954E4u) {
        ctx->pc = 0x1954E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954E0u;
        // 0x1954e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954E8u;
        goto label_1954e8;
    }
    ctx->pc = 0x1954E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1954E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954E0u;
        // 0x1954e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1954E8u;
label_1954e8:
    // 0x1954e8: 0x0  nop
    ctx->pc = 0x1954e8u;
    // NOP
label_1954ec:
    // 0x1954ec: 0x0  nop
    ctx->pc = 0x1954ecu;
    // NOP
label_1954f0:
    // 0x1954f0: 0x3e00008  jr          $ra
label_1954f4:
    if (ctx->pc == 0x1954F4u) {
        ctx->pc = 0x1954F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954F0u;
        // 0x1954f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954F8u;
        goto label_1954f8;
    }
    ctx->pc = 0x1954F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1954F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954F0u;
        // 0x1954f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1954F8u;
label_1954f8:
    // 0x1954f8: 0x0  nop
    ctx->pc = 0x1954f8u;
    // NOP
label_1954fc:
    // 0x1954fc: 0x0  nop
    ctx->pc = 0x1954fcu;
    // NOP
label_195500:
    // 0x195500: 0x3e00008  jr          $ra
label_195504:
    if (ctx->pc == 0x195504u) {
        ctx->pc = 0x195504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195500u;
        // 0x195504: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195508u;
        goto label_195508;
    }
    ctx->pc = 0x195500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195500u;
        // 0x195504: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195508u;
label_195508:
    // 0x195508: 0x0  nop
    ctx->pc = 0x195508u;
    // NOP
label_19550c:
    // 0x19550c: 0x0  nop
    ctx->pc = 0x19550cu;
    // NOP
label_195510:
    // 0x195510: 0x3e00008  jr          $ra
label_195514:
    if (ctx->pc == 0x195514u) {
        ctx->pc = 0x195514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195510u;
        // 0x195514: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195518u;
        goto label_195518;
    }
    ctx->pc = 0x195510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195510u;
        // 0x195514: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195518u;
label_195518:
    // 0x195518: 0x0  nop
    ctx->pc = 0x195518u;
    // NOP
label_19551c:
    // 0x19551c: 0x0  nop
    ctx->pc = 0x19551cu;
    // NOP
label_195520:
    // 0x195520: 0x3e00008  jr          $ra
label_195524:
    if (ctx->pc == 0x195524u) {
        ctx->pc = 0x195524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195520u;
        // 0x195524: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195528u;
        goto label_195528;
    }
    ctx->pc = 0x195520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195520u;
        // 0x195524: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195528u;
label_195528:
    // 0x195528: 0x0  nop
    ctx->pc = 0x195528u;
    // NOP
label_19552c:
    // 0x19552c: 0x0  nop
    ctx->pc = 0x19552cu;
    // NOP
label_195530:
    // 0x195530: 0x3e00008  jr          $ra
label_195534:
    if (ctx->pc == 0x195534u) {
        ctx->pc = 0x195534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195530u;
        // 0x195534: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195538u;
        goto label_195538;
    }
    ctx->pc = 0x195530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195530u;
        // 0x195534: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195538u;
label_195538:
    // 0x195538: 0x0  nop
    ctx->pc = 0x195538u;
    // NOP
label_19553c:
    // 0x19553c: 0x0  nop
    ctx->pc = 0x19553cu;
    // NOP
label_195540:
    // 0x195540: 0x3e00008  jr          $ra
label_195544:
    if (ctx->pc == 0x195544u) {
        ctx->pc = 0x195544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195540u;
        // 0x195544: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195548u;
        goto label_195548;
    }
    ctx->pc = 0x195540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195540u;
        // 0x195544: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195548u;
label_195548:
    // 0x195548: 0x0  nop
    ctx->pc = 0x195548u;
    // NOP
label_19554c:
    // 0x19554c: 0x0  nop
    ctx->pc = 0x19554cu;
    // NOP
label_195550:
    // 0x195550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_195554:
    // 0x195554: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195558:
    // 0x195558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19555c:
    // 0x19555c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195560:
    // 0x195560: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195564:
    // 0x195564: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195568:
    // 0x195568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19556c:
    if (ctx->pc == 0x19556Cu) {
        ctx->pc = 0x19556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195568u;
        // 0x19556c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195570u;
        goto label_195570;
    }
    ctx->pc = 0x195568u;
    {
        const bool branch_taken_0x195568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195568u;
        // 0x19556c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195568) {
            ctx->pc = 0x195578u;
            goto label_195578;
        }
    }
    ctx->pc = 0x195570u;
label_195570:
    // 0x195570: 0x10000021  b           . + 4 + (0x21 << 2)
label_195574:
    if (ctx->pc == 0x195574u) {
        ctx->pc = 0x195574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195570u;
        // 0x195574: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195578u;
        goto label_195578;
    }
    ctx->pc = 0x195570u;
    {
        const bool branch_taken_0x195570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195570u;
        // 0x195574: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195570) {
            ctx->pc = 0x1955F8u;
            goto label_1955f8;
        }
    }
    ctx->pc = 0x195578u;
label_195578:
    // 0x195578: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x195578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_19557c:
    // 0x19557c: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x19557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195580:
    // 0x195580: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195584:
    // 0x195584: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195588:
    // 0x195588: 0x5420001b  bnel        $at, $zero, . + 4 + (0x1B << 2)
label_19558c:
    if (ctx->pc == 0x19558Cu) {
        ctx->pc = 0x19558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195588u;
        // 0x19558c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195590u;
        goto label_195590;
    }
    ctx->pc = 0x195588u;
    {
        const bool branch_taken_0x195588 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195588) {
            ctx->pc = 0x19558Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195588u;
            // 0x19558c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1955F8u;
            goto label_1955f8;
        }
    }
    ctx->pc = 0x195590u;
label_195590:
    // 0x195590: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195594:
    // 0x195594: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195598:
    // 0x195598: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_19559c:
    // 0x19559c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x19559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_1955a0:
    // 0x1955a0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1955a4:
    if (ctx->pc == 0x1955A4u) {
        ctx->pc = 0x1955A8u;
        goto label_1955a8;
    }
    ctx->pc = 0x1955A0u;
    {
        const bool branch_taken_0x1955a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1955a0) {
            ctx->pc = 0x1955F4u;
            goto label_1955f4;
        }
    }
    ctx->pc = 0x1955A8u;
label_1955a8:
    // 0x1955a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1955ac:
    // 0x1955ac: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x1955acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_1955b0:
    // 0x1955b0: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x1955b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_1955b4:
    // 0x1955b4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1955b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1955b8:
    // 0x1955b8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1955bc:
    if (ctx->pc == 0x1955BCu) {
        ctx->pc = 0x1955C0u;
        goto label_1955c0;
    }
    ctx->pc = 0x1955B8u;
    {
        const bool branch_taken_0x1955b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1955b8) {
            ctx->pc = 0x1955F4u;
            goto label_1955f4;
        }
    }
    ctx->pc = 0x1955C0u;
label_1955c0:
    // 0x1955c0: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x1955c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_1955c4:
    // 0x1955c4: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x1955c4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_1955c8:
    // 0x1955c8: 0xc0592e4  jal         func_164B90
label_1955cc:
    if (ctx->pc == 0x1955CCu) {
        ctx->pc = 0x1955CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955C8u;
        // 0x1955cc: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955D0u;
        goto label_1955d0;
    }
    ctx->pc = 0x1955C8u;
    SET_GPR_U32(ctx, 31, 0x1955D0u);
    ctx->pc = 0x1955CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955C8u;
    // 0x1955cc: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x1955C8u, 0x1955D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955D0u;
label_1955d0:
    // 0x1955d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1955d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1955d4:
    // 0x1955d4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1955d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1955d8:
    // 0x1955d8: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1955d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_1955dc:
    // 0x1955dc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_1955e0:
    if (ctx->pc == 0x1955E0u) {
        ctx->pc = 0x1955E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955DCu;
        // 0x1955e0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955E4u;
        goto label_1955e4;
    }
    ctx->pc = 0x1955DCu;
    {
        const bool branch_taken_0x1955dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1955dc) {
            ctx->pc = 0x1955E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1955DCu;
            // 0x1955e0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1955E4u;
            goto label_1955e4;
        }
    }
    ctx->pc = 0x1955E4u;
label_1955e4:
    // 0x1955e4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1955e8:
    if (ctx->pc == 0x1955E8u) {
        ctx->pc = 0x1955ECu;
        goto label_1955ec;
    }
    ctx->pc = 0x1955E4u;
    {
        const bool branch_taken_0x1955e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1955e4) {
            ctx->pc = 0x1955F4u;
            goto label_1955f4;
        }
    }
    ctx->pc = 0x1955ECu;
label_1955ec:
    // 0x1955ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1955f0:
    if (ctx->pc == 0x1955F0u) {
        ctx->pc = 0x1955F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955ECu;
        // 0x1955f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955F4u;
        goto label_1955f4;
    }
    ctx->pc = 0x1955ECu;
    {
        const bool branch_taken_0x1955ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1955F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955ECu;
        // 0x1955f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1955ec) {
            ctx->pc = 0x1955F8u;
            goto label_1955f8;
        }
    }
    ctx->pc = 0x1955F4u;
label_1955f4:
    // 0x1955f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1955f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1955f8:
    // 0x1955f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1955f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1955fc:
    // 0x1955fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1955fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195600:
    // 0x195600: 0x3e00008  jr          $ra
label_195604:
    if (ctx->pc == 0x195604u) {
        ctx->pc = 0x195604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195600u;
        // 0x195604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195608u;
        goto label_195608;
    }
    ctx->pc = 0x195600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195600u;
        // 0x195604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195608u;
label_195608:
    // 0x195608: 0x0  nop
    ctx->pc = 0x195608u;
    // NOP
label_19560c:
    // 0x19560c: 0x0  nop
    ctx->pc = 0x19560cu;
    // NOP
label_195610:
    // 0x195610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_195614:
    // 0x195614: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195618:
    // 0x195618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19561c:
    // 0x19561c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195620:
    // 0x195620: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195624:
    // 0x195624: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195628:
    // 0x195628: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19562c:
    if (ctx->pc == 0x19562Cu) {
        ctx->pc = 0x19562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195628u;
        // 0x19562c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195630u;
        goto label_195630;
    }
    ctx->pc = 0x195628u;
    {
        const bool branch_taken_0x195628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195628u;
        // 0x19562c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195628) {
            ctx->pc = 0x195638u;
            goto label_195638;
        }
    }
    ctx->pc = 0x195630u;
label_195630:
    // 0x195630: 0x10000021  b           . + 4 + (0x21 << 2)
label_195634:
    if (ctx->pc == 0x195634u) {
        ctx->pc = 0x195634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195630u;
        // 0x195634: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195638u;
        goto label_195638;
    }
    ctx->pc = 0x195630u;
    {
        const bool branch_taken_0x195630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195630u;
        // 0x195634: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195630) {
            ctx->pc = 0x1956B8u;
            goto label_1956b8;
        }
    }
    ctx->pc = 0x195638u;
label_195638:
    // 0x195638: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x195638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_19563c:
    // 0x19563c: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x19563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195640:
    // 0x195640: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195644:
    // 0x195644: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195648:
    // 0x195648: 0x5420001b  bnel        $at, $zero, . + 4 + (0x1B << 2)
label_19564c:
    if (ctx->pc == 0x19564Cu) {
        ctx->pc = 0x19564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195648u;
        // 0x19564c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195650u;
        goto label_195650;
    }
    ctx->pc = 0x195648u;
    {
        const bool branch_taken_0x195648 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195648) {
            ctx->pc = 0x19564Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195648u;
            // 0x19564c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1956B8u;
            goto label_1956b8;
        }
    }
    ctx->pc = 0x195650u;
label_195650:
    // 0x195650: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195654:
    // 0x195654: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195658:
    // 0x195658: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_19565c:
    // 0x19565c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x19565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_195660:
    // 0x195660: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_195664:
    if (ctx->pc == 0x195664u) {
        ctx->pc = 0x195668u;
        goto label_195668;
    }
    ctx->pc = 0x195660u;
    {
        const bool branch_taken_0x195660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195660) {
            ctx->pc = 0x1956B4u;
            goto label_1956b4;
        }
    }
    ctx->pc = 0x195668u;
label_195668:
    // 0x195668: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_19566c:
    // 0x19566c: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_195670:
    // 0x195670: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x195670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_195674:
    // 0x195674: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x195674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_195678:
    // 0x195678: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_19567c:
    if (ctx->pc == 0x19567Cu) {
        ctx->pc = 0x195680u;
        goto label_195680;
    }
    ctx->pc = 0x195678u;
    {
        const bool branch_taken_0x195678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195678) {
            ctx->pc = 0x1956B4u;
            goto label_1956b4;
        }
    }
    ctx->pc = 0x195680u;
label_195680:
    // 0x195680: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x195680u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_195684:
    // 0x195684: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x195684u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_195688:
    // 0x195688: 0xc0592e4  jal         func_164B90
label_19568c:
    if (ctx->pc == 0x19568Cu) {
        ctx->pc = 0x19568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195688u;
        // 0x19568c: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195690u;
        goto label_195690;
    }
    ctx->pc = 0x195688u;
    SET_GPR_U32(ctx, 31, 0x195690u);
    ctx->pc = 0x19568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195688u;
    // 0x19568c: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x195688u, 0x195690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195690u;
label_195690:
    // 0x195690: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x195690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195694:
    // 0x195694: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x195694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_195698:
    // 0x195698: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x195698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_19569c:
    // 0x19569c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_1956a0:
    if (ctx->pc == 0x1956A0u) {
        ctx->pc = 0x1956A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19569Cu;
        // 0x1956a0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956A4u;
        goto label_1956a4;
    }
    ctx->pc = 0x19569Cu;
    {
        const bool branch_taken_0x19569c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19569c) {
            ctx->pc = 0x1956A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19569Cu;
            // 0x1956a0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1956A4u;
            goto label_1956a4;
        }
    }
    ctx->pc = 0x1956A4u;
label_1956a4:
    // 0x1956a4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1956a8:
    if (ctx->pc == 0x1956A8u) {
        ctx->pc = 0x1956ACu;
        goto label_1956ac;
    }
    ctx->pc = 0x1956A4u;
    {
        const bool branch_taken_0x1956a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1956a4) {
            ctx->pc = 0x1956B4u;
            goto label_1956b4;
        }
    }
    ctx->pc = 0x1956ACu;
label_1956ac:
    // 0x1956ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1956b0:
    if (ctx->pc == 0x1956B0u) {
        ctx->pc = 0x1956B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956ACu;
        // 0x1956b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956B4u;
        goto label_1956b4;
    }
    ctx->pc = 0x1956ACu;
    {
        const bool branch_taken_0x1956ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1956B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956ACu;
        // 0x1956b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956ac) {
            ctx->pc = 0x1956B8u;
            goto label_1956b8;
        }
    }
    ctx->pc = 0x1956B4u;
label_1956b4:
    // 0x1956b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1956b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1956b8:
    // 0x1956b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1956b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1956bc:
    // 0x1956bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1956bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1956c0:
    // 0x1956c0: 0x3e00008  jr          $ra
label_1956c4:
    if (ctx->pc == 0x1956C4u) {
        ctx->pc = 0x1956C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C0u;
        // 0x1956c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956C8u;
        goto label_1956c8;
    }
    ctx->pc = 0x1956C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1956C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C0u;
        // 0x1956c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1956C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1956C8u;
label_1956c8:
    // 0x1956c8: 0x0  nop
    ctx->pc = 0x1956c8u;
    // NOP
label_1956cc:
    // 0x1956cc: 0x0  nop
    ctx->pc = 0x1956ccu;
    // NOP
label_1956d0:
    // 0x1956d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1956d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1956d4:
    // 0x1956d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1956d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1956d8:
    // 0x1956d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1956d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1956dc:
    // 0x1956dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1956dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1956e0:
    // 0x1956e0: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_1956e4:
    // 0x1956e4: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x1956e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_1956e8:
    // 0x1956e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1956ec:
    if (ctx->pc == 0x1956ECu) {
        ctx->pc = 0x1956ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956E8u;
        // 0x1956ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956F0u;
        goto label_1956f0;
    }
    ctx->pc = 0x1956E8u;
    {
        const bool branch_taken_0x1956e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1956ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956E8u;
        // 0x1956ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956e8) {
            ctx->pc = 0x1956F8u;
            goto label_1956f8;
        }
    }
    ctx->pc = 0x1956F0u;
label_1956f0:
    // 0x1956f0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1956f4:
    if (ctx->pc == 0x1956F4u) {
        ctx->pc = 0x1956F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956F0u;
        // 0x1956f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956F8u;
        goto label_1956f8;
    }
    ctx->pc = 0x1956F0u;
    {
        const bool branch_taken_0x1956f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1956F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956F0u;
        // 0x1956f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956f0) {
            ctx->pc = 0x195760u;
            goto label_195760;
        }
    }
    ctx->pc = 0x1956F8u;
label_1956f8:
    // 0x1956f8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1956f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1956fc:
    // 0x1956fc: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x1956fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195700:
    // 0x195700: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195704:
    // 0x195704: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195708:
    // 0x195708: 0x54200015  bnel        $at, $zero, . + 4 + (0x15 << 2)
label_19570c:
    if (ctx->pc == 0x19570Cu) {
        ctx->pc = 0x19570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195708u;
        // 0x19570c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195710u;
        goto label_195710;
    }
    ctx->pc = 0x195708u;
    {
        const bool branch_taken_0x195708 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195708) {
            ctx->pc = 0x19570Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195708u;
            // 0x19570c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195760u;
            goto label_195760;
        }
    }
    ctx->pc = 0x195710u;
label_195710:
    // 0x195710: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195714:
    // 0x195714: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195718:
    // 0x195718: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_19571c:
    // 0x19571c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x19571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_195720:
    // 0x195720: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_195724:
    if (ctx->pc == 0x195724u) {
        ctx->pc = 0x195728u;
        goto label_195728;
    }
    ctx->pc = 0x195720u;
    {
        const bool branch_taken_0x195720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195720) {
            ctx->pc = 0x19575Cu;
            goto label_19575c;
        }
    }
    ctx->pc = 0x195728u;
label_195728:
    // 0x195728: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x195728u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_19572c:
    // 0x19572c: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x19572cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_195730:
    // 0x195730: 0xc0592e4  jal         func_164B90
label_195734:
    if (ctx->pc == 0x195734u) {
        ctx->pc = 0x195734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195730u;
        // 0x195734: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195738u;
        goto label_195738;
    }
    ctx->pc = 0x195730u;
    SET_GPR_U32(ctx, 31, 0x195738u);
    ctx->pc = 0x195734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195730u;
    // 0x195734: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x195730u, 0x195738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195738u;
label_195738:
    // 0x195738: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x195738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19573c:
    // 0x19573c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x19573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_195740:
    // 0x195740: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x195740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_195744:
    // 0x195744: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_195748:
    if (ctx->pc == 0x195748u) {
        ctx->pc = 0x195748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195744u;
        // 0x195748: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19574Cu;
        goto label_19574c;
    }
    ctx->pc = 0x195744u;
    {
        const bool branch_taken_0x195744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195744) {
            ctx->pc = 0x195748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195744u;
            // 0x195748: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19574Cu;
            goto label_19574c;
        }
    }
    ctx->pc = 0x19574Cu;
label_19574c:
    // 0x19574c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_195750:
    if (ctx->pc == 0x195750u) {
        ctx->pc = 0x195754u;
        goto label_195754;
    }
    ctx->pc = 0x19574Cu;
    {
        const bool branch_taken_0x19574c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19574c) {
            ctx->pc = 0x19575Cu;
            goto label_19575c;
        }
    }
    ctx->pc = 0x195754u;
label_195754:
    // 0x195754: 0x10000002  b           . + 4 + (0x2 << 2)
label_195758:
    if (ctx->pc == 0x195758u) {
        ctx->pc = 0x195758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195754u;
        // 0x195758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19575Cu;
        goto label_19575c;
    }
    ctx->pc = 0x195754u;
    {
        const bool branch_taken_0x195754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195754u;
        // 0x195758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195754) {
            ctx->pc = 0x195760u;
            goto label_195760;
        }
    }
    ctx->pc = 0x19575Cu;
label_19575c:
    // 0x19575c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195760:
    // 0x195760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195764:
    // 0x195764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195768:
    // 0x195768: 0x3e00008  jr          $ra
label_19576c:
    if (ctx->pc == 0x19576Cu) {
        ctx->pc = 0x19576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195768u;
        // 0x19576c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195770u;
        goto label_195770;
    }
    ctx->pc = 0x195768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195768u;
        // 0x19576c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195770u;
label_195770:
    // 0x195770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_195774:
    // 0x195774: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195778:
    // 0x195778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19577c:
    // 0x19577c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195780:
    // 0x195780: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195784:
    // 0x195784: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195788:
    // 0x195788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19578c:
    if (ctx->pc == 0x19578Cu) {
        ctx->pc = 0x19578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195788u;
        // 0x19578c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195790u;
        goto label_195790;
    }
    ctx->pc = 0x195788u;
    {
        const bool branch_taken_0x195788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195788u;
        // 0x19578c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195788) {
            ctx->pc = 0x195798u;
            goto label_195798;
        }
    }
    ctx->pc = 0x195790u;
label_195790:
    // 0x195790: 0x1000002f  b           . + 4 + (0x2F << 2)
label_195794:
    if (ctx->pc == 0x195794u) {
        ctx->pc = 0x195794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195790u;
        // 0x195794: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195798u;
        goto label_195798;
    }
    ctx->pc = 0x195790u;
    {
        const bool branch_taken_0x195790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195790u;
        // 0x195794: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195790) {
            ctx->pc = 0x195850u;
            goto label_195850;
        }
    }
    ctx->pc = 0x195798u;
label_195798:
    // 0x195798: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x195798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_19579c:
    // 0x19579c: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x19579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_1957a0:
    // 0x1957a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1957a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1957a4:
    // 0x1957a4: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x1957a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_1957a8:
    // 0x1957a8: 0x54200029  bnel        $at, $zero, . + 4 + (0x29 << 2)
label_1957ac:
    if (ctx->pc == 0x1957ACu) {
        ctx->pc = 0x1957ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957A8u;
        // 0x1957ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957B0u;
        goto label_1957b0;
    }
    ctx->pc = 0x1957A8u;
    {
        const bool branch_taken_0x1957a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1957a8) {
            ctx->pc = 0x1957ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1957A8u;
            // 0x1957ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195850u;
            goto label_195850;
        }
    }
    ctx->pc = 0x1957B0u;
label_1957b0:
    // 0x1957b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1957b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1957b4:
    // 0x1957b4: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x1957b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_1957b8:
    // 0x1957b8: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_1957bc:
    // 0x1957bc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1957bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_1957c0:
    // 0x1957c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1957c4:
    if (ctx->pc == 0x1957C4u) {
        ctx->pc = 0x1957C8u;
        goto label_1957c8;
    }
    ctx->pc = 0x1957C0u;
    {
        const bool branch_taken_0x1957c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1957c0) {
            ctx->pc = 0x1957D0u;
            goto label_1957d0;
        }
    }
    ctx->pc = 0x1957C8u;
label_1957c8:
    // 0x1957c8: 0x10000021  b           . + 4 + (0x21 << 2)
label_1957cc:
    if (ctx->pc == 0x1957CCu) {
        ctx->pc = 0x1957CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957C8u;
        // 0x1957cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957D0u;
        goto label_1957d0;
    }
    ctx->pc = 0x1957C8u;
    {
        const bool branch_taken_0x1957c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957C8u;
        // 0x1957cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957c8) {
            ctx->pc = 0x195850u;
            goto label_195850;
        }
    }
    ctx->pc = 0x1957D0u;
label_1957d0:
    // 0x1957d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1957d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1957d4:
    // 0x1957d4: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x1957d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_1957d8:
    // 0x1957d8: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x1957d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_1957dc:
    // 0x1957dc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1957dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1957e0:
    // 0x1957e0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1957e4:
    if (ctx->pc == 0x1957E4u) {
        ctx->pc = 0x1957E8u;
        goto label_1957e8;
    }
    ctx->pc = 0x1957E0u;
    {
        const bool branch_taken_0x1957e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1957e0) {
            ctx->pc = 0x19584Cu;
            goto label_19584c;
        }
    }
    ctx->pc = 0x1957E8u;
label_1957e8:
    // 0x1957e8: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x1957e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_1957ec:
    // 0x1957ec: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x1957ecu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_1957f0:
    // 0x1957f0: 0xc0592e4  jal         func_164B90
label_1957f4:
    if (ctx->pc == 0x1957F4u) {
        ctx->pc = 0x1957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957F0u;
        // 0x1957f4: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957F8u;
        goto label_1957f8;
    }
    ctx->pc = 0x1957F0u;
    SET_GPR_U32(ctx, 31, 0x1957F8u);
    ctx->pc = 0x1957F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957F0u;
    // 0x1957f4: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x1957F0u, 0x1957F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1957F8u;
label_1957f8:
    // 0x1957f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1957f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1957fc:
    // 0x1957fc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1957fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_195800:
    // 0x195800: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x195800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_195804:
    // 0x195804: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_195808:
    if (ctx->pc == 0x195808u) {
        ctx->pc = 0x195808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195804u;
        // 0x195808: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19580Cu;
        goto label_19580c;
    }
    ctx->pc = 0x195804u;
    {
        const bool branch_taken_0x195804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195804) {
            ctx->pc = 0x195808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195804u;
            // 0x195808: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19583Cu;
            goto label_19583c;
        }
    }
    ctx->pc = 0x19580Cu;
label_19580c:
    // 0x19580c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x19580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_195810:
    // 0x195810: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_195814:
    if (ctx->pc == 0x195814u) {
        ctx->pc = 0x195818u;
        goto label_195818;
    }
    ctx->pc = 0x195810u;
    {
        const bool branch_taken_0x195810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195810) {
            ctx->pc = 0x195838u;
            goto label_195838;
        }
    }
    ctx->pc = 0x195818u;
label_195818:
    // 0x195818: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x195818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_19581c:
    // 0x19581c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_195820:
    if (ctx->pc == 0x195820u) {
        ctx->pc = 0x195824u;
        goto label_195824;
    }
    ctx->pc = 0x19581Cu;
    {
        const bool branch_taken_0x19581c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19581c) {
            ctx->pc = 0x195838u;
            goto label_195838;
        }
    }
    ctx->pc = 0x195824u;
label_195824:
    // 0x195824: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x195824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_195828:
    // 0x195828: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_19582c:
    if (ctx->pc == 0x19582Cu) {
        ctx->pc = 0x195830u;
        goto label_195830;
    }
    ctx->pc = 0x195828u;
    {
        const bool branch_taken_0x195828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195828) {
            ctx->pc = 0x195838u;
            goto label_195838;
        }
    }
    ctx->pc = 0x195830u;
label_195830:
    // 0x195830: 0x10000002  b           . + 4 + (0x2 << 2)
label_195834:
    if (ctx->pc == 0x195834u) {
        ctx->pc = 0x195838u;
        goto label_195838;
    }
    ctx->pc = 0x195830u;
    {
        const bool branch_taken_0x195830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195830) {
            ctx->pc = 0x19583Cu;
            goto label_19583c;
        }
    }
    ctx->pc = 0x195838u;
label_195838:
    // 0x195838: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x195838u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_19583c:
    // 0x19583c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_195840:
    if (ctx->pc == 0x195840u) {
        ctx->pc = 0x195844u;
        goto label_195844;
    }
    ctx->pc = 0x19583Cu;
    {
        const bool branch_taken_0x19583c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19583c) {
            ctx->pc = 0x19584Cu;
            goto label_19584c;
        }
    }
    ctx->pc = 0x195844u;
label_195844:
    // 0x195844: 0x10000002  b           . + 4 + (0x2 << 2)
label_195848:
    if (ctx->pc == 0x195848u) {
        ctx->pc = 0x195848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195844u;
        // 0x195848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19584Cu;
        goto label_19584c;
    }
    ctx->pc = 0x195844u;
    {
        const bool branch_taken_0x195844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195844u;
        // 0x195848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195844) {
            ctx->pc = 0x195850u;
            goto label_195850;
        }
    }
    ctx->pc = 0x19584Cu;
label_19584c:
    // 0x19584c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195850:
    // 0x195850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195854:
    // 0x195854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195858:
    // 0x195858: 0x3e00008  jr          $ra
label_19585c:
    if (ctx->pc == 0x19585Cu) {
        ctx->pc = 0x19585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195858u;
        // 0x19585c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195860u;
        goto label_195860;
    }
    ctx->pc = 0x195858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195858u;
        // 0x19585c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195860u;
label_195860:
    // 0x195860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_195864:
    // 0x195864: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195868:
    // 0x195868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19586c:
    // 0x19586c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19586cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195870:
    // 0x195870: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195874:
    // 0x195874: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195878:
    // 0x195878: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19587c:
    if (ctx->pc == 0x19587Cu) {
        ctx->pc = 0x19587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195878u;
        // 0x19587c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195880u;
        goto label_195880;
    }
    ctx->pc = 0x195878u;
    {
        const bool branch_taken_0x195878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195878u;
        // 0x19587c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195878) {
            ctx->pc = 0x195888u;
            goto label_195888;
        }
    }
    ctx->pc = 0x195880u;
label_195880:
    // 0x195880: 0x1000002d  b           . + 4 + (0x2D << 2)
label_195884:
    if (ctx->pc == 0x195884u) {
        ctx->pc = 0x195884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195880u;
        // 0x195884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195888u;
        goto label_195888;
    }
    ctx->pc = 0x195880u;
    {
        const bool branch_taken_0x195880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195880u;
        // 0x195884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195880) {
            ctx->pc = 0x195938u;
            goto label_195938;
        }
    }
    ctx->pc = 0x195888u;
label_195888:
    // 0x195888: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x195888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_19588c:
    // 0x19588c: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x19588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195890:
    // 0x195890: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195894:
    // 0x195894: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195898:
    // 0x195898: 0x54200027  bnel        $at, $zero, . + 4 + (0x27 << 2)
label_19589c:
    if (ctx->pc == 0x19589Cu) {
        ctx->pc = 0x19589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195898u;
        // 0x19589c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958A0u;
        goto label_1958a0;
    }
    ctx->pc = 0x195898u;
    {
        const bool branch_taken_0x195898 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195898) {
            ctx->pc = 0x19589Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195898u;
            // 0x19589c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195938u;
            goto label_195938;
        }
    }
    ctx->pc = 0x1958A0u;
label_1958a0:
    // 0x1958a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1958a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1958a4:
    // 0x1958a4: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_1958a8:
    // 0x1958a8: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x1958a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_1958ac:
    // 0x1958ac: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1958acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_1958b0:
    // 0x1958b0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1958b4:
    if (ctx->pc == 0x1958B4u) {
        ctx->pc = 0x1958B8u;
        goto label_1958b8;
    }
    ctx->pc = 0x1958B0u;
    {
        const bool branch_taken_0x1958b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1958b0) {
            ctx->pc = 0x195934u;
            goto label_195934;
        }
    }
    ctx->pc = 0x1958B8u;
label_1958b8:
    // 0x1958b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1958bc:
    // 0x1958bc: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_1958c0:
    // 0x1958c0: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x1958c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_1958c4:
    // 0x1958c4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1958c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1958c8:
    // 0x1958c8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1958cc:
    if (ctx->pc == 0x1958CCu) {
        ctx->pc = 0x1958D0u;
        goto label_1958d0;
    }
    ctx->pc = 0x1958C8u;
    {
        const bool branch_taken_0x1958c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1958c8) {
            ctx->pc = 0x195934u;
            goto label_195934;
        }
    }
    ctx->pc = 0x1958D0u;
label_1958d0:
    // 0x1958d0: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x1958d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_1958d4:
    // 0x1958d4: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x1958d4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_1958d8:
    // 0x1958d8: 0xc0592e4  jal         func_164B90
label_1958dc:
    if (ctx->pc == 0x1958DCu) {
        ctx->pc = 0x1958DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958D8u;
        // 0x1958dc: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958E0u;
        goto label_1958e0;
    }
    ctx->pc = 0x1958D8u;
    SET_GPR_U32(ctx, 31, 0x1958E0u);
    ctx->pc = 0x1958DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958D8u;
    // 0x1958dc: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x1958D8u, 0x1958E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958E0u;
label_1958e0:
    // 0x1958e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1958e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1958e4:
    // 0x1958e4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1958e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1958e8:
    // 0x1958e8: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1958e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_1958ec:
    // 0x1958ec: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_1958f0:
    if (ctx->pc == 0x1958F0u) {
        ctx->pc = 0x1958F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958ECu;
        // 0x1958f0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958F4u;
        goto label_1958f4;
    }
    ctx->pc = 0x1958ECu;
    {
        const bool branch_taken_0x1958ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1958ec) {
            ctx->pc = 0x1958F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1958ECu;
            // 0x1958f0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195924u;
            goto label_195924;
        }
    }
    ctx->pc = 0x1958F4u;
label_1958f4:
    // 0x1958f4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1958f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1958f8:
    // 0x1958f8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1958fc:
    if (ctx->pc == 0x1958FCu) {
        ctx->pc = 0x195900u;
        goto label_195900;
    }
    ctx->pc = 0x1958F8u;
    {
        const bool branch_taken_0x1958f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1958f8) {
            ctx->pc = 0x195920u;
            goto label_195920;
        }
    }
    ctx->pc = 0x195900u;
label_195900:
    // 0x195900: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_195904:
    // 0x195904: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_195908:
    if (ctx->pc == 0x195908u) {
        ctx->pc = 0x19590Cu;
        goto label_19590c;
    }
    ctx->pc = 0x195904u;
    {
        const bool branch_taken_0x195904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195904) {
            ctx->pc = 0x195920u;
            goto label_195920;
        }
    }
    ctx->pc = 0x19590Cu;
label_19590c:
    // 0x19590c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x19590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_195910:
    // 0x195910: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_195914:
    if (ctx->pc == 0x195914u) {
        ctx->pc = 0x195918u;
        goto label_195918;
    }
    ctx->pc = 0x195910u;
    {
        const bool branch_taken_0x195910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195910) {
            ctx->pc = 0x195920u;
            goto label_195920;
        }
    }
    ctx->pc = 0x195918u;
label_195918:
    // 0x195918: 0x10000002  b           . + 4 + (0x2 << 2)
label_19591c:
    if (ctx->pc == 0x19591Cu) {
        ctx->pc = 0x195920u;
        goto label_195920;
    }
    ctx->pc = 0x195918u;
    {
        const bool branch_taken_0x195918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195918) {
            ctx->pc = 0x195924u;
            goto label_195924;
        }
    }
    ctx->pc = 0x195920u;
label_195920:
    // 0x195920: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x195920u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_195924:
    // 0x195924: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_195928:
    if (ctx->pc == 0x195928u) {
        ctx->pc = 0x19592Cu;
        goto label_19592c;
    }
    ctx->pc = 0x195924u;
    {
        const bool branch_taken_0x195924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x195924) {
            ctx->pc = 0x195934u;
            goto label_195934;
        }
    }
    ctx->pc = 0x19592Cu;
label_19592c:
    // 0x19592c: 0x10000002  b           . + 4 + (0x2 << 2)
label_195930:
    if (ctx->pc == 0x195930u) {
        ctx->pc = 0x195930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19592Cu;
        // 0x195930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195934u;
        goto label_195934;
    }
    ctx->pc = 0x19592Cu;
    {
        const bool branch_taken_0x19592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19592Cu;
        // 0x195930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19592c) {
            ctx->pc = 0x195938u;
            goto label_195938;
        }
    }
    ctx->pc = 0x195934u;
label_195934:
    // 0x195934: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195938:
    // 0x195938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19593c:
    // 0x19593c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19593cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195940:
    // 0x195940: 0x3e00008  jr          $ra
label_195944:
    if (ctx->pc == 0x195944u) {
        ctx->pc = 0x195944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195940u;
        // 0x195944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195948u;
        goto label_195948;
    }
    ctx->pc = 0x195940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195940u;
        // 0x195944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195948u;
label_195948:
    // 0x195948: 0x0  nop
    ctx->pc = 0x195948u;
    // NOP
label_19594c:
    // 0x19594c: 0x0  nop
    ctx->pc = 0x19594cu;
    // NOP
label_195950:
    // 0x195950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_195954:
    // 0x195954: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195958:
    // 0x195958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19595c:
    // 0x19595c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195960:
    // 0x195960: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195964:
    // 0x195964: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195968:
    // 0x195968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19596c:
    if (ctx->pc == 0x19596Cu) {
        ctx->pc = 0x19596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195968u;
        // 0x19596c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195970u;
        goto label_195970;
    }
    ctx->pc = 0x195968u;
    {
        const bool branch_taken_0x195968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195968u;
        // 0x19596c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195968) {
            ctx->pc = 0x195978u;
            goto label_195978;
        }
    }
    ctx->pc = 0x195970u;
label_195970:
    // 0x195970: 0x10000028  b           . + 4 + (0x28 << 2)
label_195974:
    if (ctx->pc == 0x195974u) {
        ctx->pc = 0x195974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195970u;
        // 0x195974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195978u;
        goto label_195978;
    }
    ctx->pc = 0x195970u;
    {
        const bool branch_taken_0x195970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195970u;
        // 0x195974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195970) {
            ctx->pc = 0x195A14u;
            goto label_195a14;
        }
    }
    ctx->pc = 0x195978u;
label_195978:
    // 0x195978: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x195978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_19597c:
    // 0x19597c: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x19597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195980:
    // 0x195980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195984:
    // 0x195984: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195988:
    // 0x195988: 0x54200022  bnel        $at, $zero, . + 4 + (0x22 << 2)
label_19598c:
    if (ctx->pc == 0x19598Cu) {
        ctx->pc = 0x19598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195988u;
        // 0x19598c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195990u;
        goto label_195990;
    }
    ctx->pc = 0x195988u;
    {
        const bool branch_taken_0x195988 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195988) {
            ctx->pc = 0x19598Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195988u;
            // 0x19598c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195A14u;
            goto label_195a14;
        }
    }
    ctx->pc = 0x195990u;
label_195990:
    // 0x195990: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195994:
    // 0x195994: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195998:
    // 0x195998: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_19599c:
    // 0x19599c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x19599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_1959a0:
    // 0x1959a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1959a4:
    if (ctx->pc == 0x1959A4u) {
        ctx->pc = 0x1959A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959A0u;
        // 0x1959a4: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959A8u;
        goto label_1959a8;
    }
    ctx->pc = 0x1959A0u;
    {
        const bool branch_taken_0x1959a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1959a0) {
            ctx->pc = 0x1959A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1959A0u;
            // 0x1959a4: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1959B0u;
            goto label_1959b0;
        }
    }
    ctx->pc = 0x1959A8u;
label_1959a8:
    // 0x1959a8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1959ac:
    if (ctx->pc == 0x1959ACu) {
        ctx->pc = 0x1959ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959A8u;
        // 0x1959ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959B0u;
        goto label_1959b0;
    }
    ctx->pc = 0x1959A8u;
    {
        const bool branch_taken_0x1959a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959A8u;
        // 0x1959ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959a8) {
            ctx->pc = 0x195A14u;
            goto label_195a14;
        }
    }
    ctx->pc = 0x1959B0u;
label_1959b0:
    // 0x1959b0: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x1959b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_1959b4:
    // 0x1959b4: 0xc0592e4  jal         func_164B90
label_1959b8:
    if (ctx->pc == 0x1959B8u) {
        ctx->pc = 0x1959B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959B4u;
        // 0x1959b8: 0x906500f7  lbu         $a1, 0xF7($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959BCu;
        goto label_1959bc;
    }
    ctx->pc = 0x1959B4u;
    SET_GPR_U32(ctx, 31, 0x1959BCu);
    ctx->pc = 0x1959B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959B4u;
    // 0x1959b8: 0x906500f7  lbu         $a1, 0xF7($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x1959B4u, 0x1959BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1959BCu;
label_1959bc:
    // 0x1959bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1959bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1959c0:
    // 0x1959c0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1959c4:
    // 0x1959c4: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1959c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_1959c8:
    // 0x1959c8: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_1959cc:
    if (ctx->pc == 0x1959CCu) {
        ctx->pc = 0x1959CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959C8u;
        // 0x1959cc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959D0u;
        goto label_1959d0;
    }
    ctx->pc = 0x1959C8u;
    {
        const bool branch_taken_0x1959c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1959c8) {
            ctx->pc = 0x1959CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1959C8u;
            // 0x1959cc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195A00u;
            goto label_195a00;
        }
    }
    ctx->pc = 0x1959D0u;
label_1959d0:
    // 0x1959d0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1959d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1959d4:
    // 0x1959d4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1959d8:
    if (ctx->pc == 0x1959D8u) {
        ctx->pc = 0x1959DCu;
        goto label_1959dc;
    }
    ctx->pc = 0x1959D4u;
    {
        const bool branch_taken_0x1959d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1959d4) {
            ctx->pc = 0x1959FCu;
            goto label_1959fc;
        }
    }
    ctx->pc = 0x1959DCu;
label_1959dc:
    // 0x1959dc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1959dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1959e0:
    // 0x1959e0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1959e4:
    if (ctx->pc == 0x1959E4u) {
        ctx->pc = 0x1959E8u;
        goto label_1959e8;
    }
    ctx->pc = 0x1959E0u;
    {
        const bool branch_taken_0x1959e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1959e0) {
            ctx->pc = 0x1959FCu;
            goto label_1959fc;
        }
    }
    ctx->pc = 0x1959E8u;
label_1959e8:
    // 0x1959e8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1959e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1959ec:
    // 0x1959ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1959f0:
    if (ctx->pc == 0x1959F0u) {
        ctx->pc = 0x1959F4u;
        goto label_1959f4;
    }
    ctx->pc = 0x1959ECu;
    {
        const bool branch_taken_0x1959ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1959ec) {
            ctx->pc = 0x1959FCu;
            goto label_1959fc;
        }
    }
    ctx->pc = 0x1959F4u;
label_1959f4:
    // 0x1959f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1959f8:
    if (ctx->pc == 0x1959F8u) {
        ctx->pc = 0x1959FCu;
        goto label_1959fc;
    }
    ctx->pc = 0x1959F4u;
    {
        const bool branch_taken_0x1959f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1959f4) {
            ctx->pc = 0x195A00u;
            goto label_195a00;
        }
    }
    ctx->pc = 0x1959FCu;
label_1959fc:
    // 0x1959fc: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1959fcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_195a00:
    // 0x195a00: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_195a04:
    if (ctx->pc == 0x195A04u) {
        ctx->pc = 0x195A08u;
        goto label_195a08;
    }
    ctx->pc = 0x195A00u;
    {
        const bool branch_taken_0x195a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x195a00) {
            ctx->pc = 0x195A10u;
            goto label_195a10;
        }
    }
    ctx->pc = 0x195A08u;
label_195a08:
    // 0x195a08: 0x10000002  b           . + 4 + (0x2 << 2)
label_195a0c:
    if (ctx->pc == 0x195A0Cu) {
        ctx->pc = 0x195A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A08u;
        // 0x195a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A10u;
        goto label_195a10;
    }
    ctx->pc = 0x195A08u;
    {
        const bool branch_taken_0x195a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A08u;
        // 0x195a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a08) {
            ctx->pc = 0x195A14u;
            goto label_195a14;
        }
    }
    ctx->pc = 0x195A10u;
label_195a10:
    // 0x195a10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195a14:
    // 0x195a14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195a18:
    // 0x195a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195a1c:
    // 0x195a1c: 0x3e00008  jr          $ra
label_195a20:
    if (ctx->pc == 0x195A20u) {
        ctx->pc = 0x195A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A1Cu;
        // 0x195a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A24u;
        goto label_195a24;
    }
    ctx->pc = 0x195A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A1Cu;
        // 0x195a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195A24u;
label_195a24:
    // 0x195a24: 0x0  nop
    ctx->pc = 0x195a24u;
    // NOP
label_195a28:
    // 0x195a28: 0x0  nop
    ctx->pc = 0x195a28u;
    // NOP
label_195a2c:
    // 0x195a2c: 0x0  nop
    ctx->pc = 0x195a2cu;
    // NOP
label_195a30:
    // 0x195a30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195a34:
    // 0x195a34: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195a38:
    // 0x195a38: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195a3c:
    // 0x195a3c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_195a40:
    if (ctx->pc == 0x195A40u) {
        ctx->pc = 0x195A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A3Cu;
        // 0x195a40: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A44u;
        goto label_195a44;
    }
    ctx->pc = 0x195A3Cu;
    {
        const bool branch_taken_0x195a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195a3c) {
            ctx->pc = 0x195A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195A3Cu;
            // 0x195a40: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195A4Cu;
            goto label_195a4c;
        }
    }
    ctx->pc = 0x195A44u;
label_195a44:
    // 0x195a44: 0x10000005  b           . + 4 + (0x5 << 2)
label_195a48:
    if (ctx->pc == 0x195A48u) {
        ctx->pc = 0x195A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A44u;
        // 0x195a48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A4Cu;
        goto label_195a4c;
    }
    ctx->pc = 0x195A44u;
    {
        const bool branch_taken_0x195a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A44u;
        // 0x195a48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a44) {
            ctx->pc = 0x195A5Cu;
            goto label_195a5c;
        }
    }
    ctx->pc = 0x195A4Cu;
label_195a4c:
    // 0x195a4c: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195a50:
    // 0x195a50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195a54:
    // 0x195a54: 0x2842000e  slti        $v0, $v0, 0xE
    ctx->pc = 0x195a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195a58:
    // 0x195a58: 0x21023  negu        $v0, $v0
    ctx->pc = 0x195a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_195a5c:
    // 0x195a5c: 0x3e00008  jr          $ra
label_195a60:
    if (ctx->pc == 0x195A60u) {
        ctx->pc = 0x195A64u;
        goto label_195a64;
    }
    ctx->pc = 0x195A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195A64u;
label_195a64:
    // 0x195a64: 0x0  nop
    ctx->pc = 0x195a64u;
    // NOP
label_195a68:
    // 0x195a68: 0x0  nop
    ctx->pc = 0x195a68u;
    // NOP
label_195a6c:
    // 0x195a6c: 0x0  nop
    ctx->pc = 0x195a6cu;
    // NOP
label_195a70:
    // 0x195a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195a74:
    // 0x195a74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195a78:
    // 0x195a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195a7c:
    // 0x195a7c: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195a80:
    // 0x195a80: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195a84:
    // 0x195a84: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_195a88:
    if (ctx->pc == 0x195A88u) {
        ctx->pc = 0x195A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A84u;
        // 0x195a88: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A8Cu;
        goto label_195a8c;
    }
    ctx->pc = 0x195A84u;
    {
        const bool branch_taken_0x195a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195a84) {
            ctx->pc = 0x195A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195A84u;
            // 0x195a88: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195A94u;
            goto label_195a94;
        }
    }
    ctx->pc = 0x195A8Cu;
label_195a8c:
    // 0x195a8c: 0x10000024  b           . + 4 + (0x24 << 2)
label_195a90:
    if (ctx->pc == 0x195A90u) {
        ctx->pc = 0x195A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A8Cu;
        // 0x195a90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A94u;
        goto label_195a94;
    }
    ctx->pc = 0x195A8Cu;
    {
        const bool branch_taken_0x195a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A8Cu;
        // 0x195a90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a8c) {
            ctx->pc = 0x195B20u;
            goto label_195b20;
        }
    }
    ctx->pc = 0x195A94u;
label_195a94:
    // 0x195a94: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195a98:
    // 0x195a98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195a9c:
    // 0x195a9c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195a9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195aa0:
    // 0x195aa0: 0x5420001f  bnel        $at, $zero, . + 4 + (0x1F << 2)
label_195aa4:
    if (ctx->pc == 0x195AA4u) {
        ctx->pc = 0x195AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AA0u;
        // 0x195aa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195AA8u;
        goto label_195aa8;
    }
    ctx->pc = 0x195AA0u;
    {
        const bool branch_taken_0x195aa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195aa0) {
            ctx->pc = 0x195AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195AA0u;
            // 0x195aa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195B20u;
            goto label_195b20;
        }
    }
    ctx->pc = 0x195AA8u;
label_195aa8:
    // 0x195aa8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195aac:
    // 0x195aac: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x195aacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_195ab0:
    // 0x195ab0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_195ab4:
    // 0x195ab4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_195ab8:
    if (ctx->pc == 0x195AB8u) {
        ctx->pc = 0x195ABCu;
        goto label_195abc;
    }
    ctx->pc = 0x195AB4u;
    {
        const bool branch_taken_0x195ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ab4) {
            ctx->pc = 0x195B1Cu;
            goto label_195b1c;
        }
    }
    ctx->pc = 0x195ABCu;
label_195abc:
    // 0x195abc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195ac0:
    // 0x195ac0: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195ac4:
    // 0x195ac4: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_195ac8:
    // 0x195ac8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x195ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_195acc:
    // 0x195acc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_195ad0:
    if (ctx->pc == 0x195AD0u) {
        ctx->pc = 0x195AD4u;
        goto label_195ad4;
    }
    ctx->pc = 0x195ACCu;
    {
        const bool branch_taken_0x195acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195acc) {
            ctx->pc = 0x195B1Cu;
            goto label_195b1c;
        }
    }
    ctx->pc = 0x195AD4u;
label_195ad4:
    // 0x195ad4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195ad8:
    // 0x195ad8: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x195ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_195adc:
    // 0x195adc: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x195adcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_195ae0:
    // 0x195ae0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x195ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_195ae4:
    // 0x195ae4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_195ae8:
    if (ctx->pc == 0x195AE8u) {
        ctx->pc = 0x195AECu;
        goto label_195aec;
    }
    ctx->pc = 0x195AE4u;
    {
        const bool branch_taken_0x195ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ae4) {
            ctx->pc = 0x195B1Cu;
            goto label_195b1c;
        }
    }
    ctx->pc = 0x195AECu;
label_195aec:
    // 0x195aec: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x195aecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_195af0:
    // 0x195af0: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x195af0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_195af4:
    // 0x195af4: 0xc0592e4  jal         func_164B90
label_195af8:
    if (ctx->pc == 0x195AF8u) {
        ctx->pc = 0x195AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AF4u;
        // 0x195af8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195AFCu;
        goto label_195afc;
    }
    ctx->pc = 0x195AF4u;
    SET_GPR_U32(ctx, 31, 0x195AFCu);
    ctx->pc = 0x195AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195AF4u;
    // 0x195af8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x195AF4u, 0x195AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AFCu;
label_195afc:
    // 0x195afc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195b00:
    // 0x195b00: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x195b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_195b04:
    // 0x195b04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195b08:
    // 0x195b08: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x195b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_195b0c:
    // 0x195b0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_195b10:
    if (ctx->pc == 0x195B10u) {
        ctx->pc = 0x195B14u;
        goto label_195b14;
    }
    ctx->pc = 0x195B0Cu;
    {
        const bool branch_taken_0x195b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b0c) {
            ctx->pc = 0x195B1Cu;
            goto label_195b1c;
        }
    }
    ctx->pc = 0x195B14u;
label_195b14:
    // 0x195b14: 0x10000002  b           . + 4 + (0x2 << 2)
label_195b18:
    if (ctx->pc == 0x195B18u) {
        ctx->pc = 0x195B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B14u;
        // 0x195b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B1Cu;
        goto label_195b1c;
    }
    ctx->pc = 0x195B14u;
    {
        const bool branch_taken_0x195b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B14u;
        // 0x195b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b14) {
            ctx->pc = 0x195B20u;
            goto label_195b20;
        }
    }
    ctx->pc = 0x195B1Cu;
label_195b1c:
    // 0x195b1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195b20:
    // 0x195b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195b24:
    // 0x195b24: 0x3e00008  jr          $ra
label_195b28:
    if (ctx->pc == 0x195B28u) {
        ctx->pc = 0x195B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B24u;
        // 0x195b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B2Cu;
        goto label_195b2c;
    }
    ctx->pc = 0x195B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B24u;
        // 0x195b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195B2Cu;
label_195b2c:
    // 0x195b2c: 0x0  nop
    ctx->pc = 0x195b2cu;
    // NOP
label_195b30:
    // 0x195b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195b34:
    // 0x195b34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195b38:
    // 0x195b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195b3c:
    // 0x195b3c: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195b40:
    // 0x195b40: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195b44:
    // 0x195b44: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_195b48:
    if (ctx->pc == 0x195B48u) {
        ctx->pc = 0x195B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B44u;
        // 0x195b48: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B4Cu;
        goto label_195b4c;
    }
    ctx->pc = 0x195B44u;
    {
        const bool branch_taken_0x195b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b44) {
            ctx->pc = 0x195B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195B44u;
            // 0x195b48: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195B54u;
            goto label_195b54;
        }
    }
    ctx->pc = 0x195B4Cu;
label_195b4c:
    // 0x195b4c: 0x10000024  b           . + 4 + (0x24 << 2)
label_195b50:
    if (ctx->pc == 0x195B50u) {
        ctx->pc = 0x195B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B4Cu;
        // 0x195b50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B54u;
        goto label_195b54;
    }
    ctx->pc = 0x195B4Cu;
    {
        const bool branch_taken_0x195b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B4Cu;
        // 0x195b50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b4c) {
            ctx->pc = 0x195BE0u;
            goto label_195be0;
        }
    }
    ctx->pc = 0x195B54u;
label_195b54:
    // 0x195b54: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195b58:
    // 0x195b58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195b5c:
    // 0x195b5c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195b5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195b60:
    // 0x195b60: 0x5420001f  bnel        $at, $zero, . + 4 + (0x1F << 2)
label_195b64:
    if (ctx->pc == 0x195B64u) {
        ctx->pc = 0x195B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B60u;
        // 0x195b64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B68u;
        goto label_195b68;
    }
    ctx->pc = 0x195B60u;
    {
        const bool branch_taken_0x195b60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b60) {
            ctx->pc = 0x195B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195B60u;
            // 0x195b64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195BE0u;
            goto label_195be0;
        }
    }
    ctx->pc = 0x195B68u;
label_195b68:
    // 0x195b68: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195b6c:
    // 0x195b6c: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x195b6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_195b70:
    // 0x195b70: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_195b74:
    // 0x195b74: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_195b78:
    if (ctx->pc == 0x195B78u) {
        ctx->pc = 0x195B7Cu;
        goto label_195b7c;
    }
    ctx->pc = 0x195B74u;
    {
        const bool branch_taken_0x195b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b74) {
            ctx->pc = 0x195BDCu;
            goto label_195bdc;
        }
    }
    ctx->pc = 0x195B7Cu;
label_195b7c:
    // 0x195b7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195b80:
    // 0x195b80: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195b84:
    // 0x195b84: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_195b88:
    // 0x195b88: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x195b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_195b8c:
    // 0x195b8c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_195b90:
    if (ctx->pc == 0x195B90u) {
        ctx->pc = 0x195B94u;
        goto label_195b94;
    }
    ctx->pc = 0x195B8Cu;
    {
        const bool branch_taken_0x195b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b8c) {
            ctx->pc = 0x195BDCu;
            goto label_195bdc;
        }
    }
    ctx->pc = 0x195B94u;
label_195b94:
    // 0x195b94: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195b98:
    // 0x195b98: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x195b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_195b9c:
    // 0x195b9c: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x195b9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_195ba0:
    // 0x195ba0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x195ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_195ba4:
    // 0x195ba4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_195ba8:
    if (ctx->pc == 0x195BA8u) {
        ctx->pc = 0x195BACu;
        goto label_195bac;
    }
    ctx->pc = 0x195BA4u;
    {
        const bool branch_taken_0x195ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ba4) {
            ctx->pc = 0x195BDCu;
            goto label_195bdc;
        }
    }
    ctx->pc = 0x195BACu;
label_195bac:
    // 0x195bac: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x195bacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_195bb0:
    // 0x195bb0: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x195bb0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_195bb4:
    // 0x195bb4: 0xc0592e4  jal         func_164B90
label_195bb8:
    if (ctx->pc == 0x195BB8u) {
        ctx->pc = 0x195BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BB4u;
        // 0x195bb8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BBCu;
        goto label_195bbc;
    }
    ctx->pc = 0x195BB4u;
    SET_GPR_U32(ctx, 31, 0x195BBCu);
    ctx->pc = 0x195BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195BB4u;
    // 0x195bb8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x195BB4u, 0x195BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BBCu;
label_195bbc:
    // 0x195bbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195bc0:
    // 0x195bc0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x195bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_195bc4:
    // 0x195bc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195bc8:
    // 0x195bc8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x195bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_195bcc:
    // 0x195bcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_195bd0:
    if (ctx->pc == 0x195BD0u) {
        ctx->pc = 0x195BD4u;
        goto label_195bd4;
    }
    ctx->pc = 0x195BCCu;
    {
        const bool branch_taken_0x195bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195bcc) {
            ctx->pc = 0x195BDCu;
            goto label_195bdc;
        }
    }
    ctx->pc = 0x195BD4u;
label_195bd4:
    // 0x195bd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_195bd8:
    if (ctx->pc == 0x195BD8u) {
        ctx->pc = 0x195BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BD4u;
        // 0x195bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BDCu;
        goto label_195bdc;
    }
    ctx->pc = 0x195BD4u;
    {
        const bool branch_taken_0x195bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BD4u;
        // 0x195bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195bd4) {
            ctx->pc = 0x195BE0u;
            goto label_195be0;
        }
    }
    ctx->pc = 0x195BDCu;
label_195bdc:
    // 0x195bdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195be0:
    // 0x195be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195be4:
    // 0x195be4: 0x3e00008  jr          $ra
label_195be8:
    if (ctx->pc == 0x195BE8u) {
        ctx->pc = 0x195BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BE4u;
        // 0x195be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BECu;
        goto label_195bec;
    }
    ctx->pc = 0x195BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BE4u;
        // 0x195be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195BECu;
label_195bec:
    // 0x195bec: 0x0  nop
    ctx->pc = 0x195becu;
    // NOP
label_195bf0:
    // 0x195bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195bf4:
    // 0x195bf4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195bf8:
    // 0x195bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195bfc:
    // 0x195bfc: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195c00:
    // 0x195c00: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195c04:
    // 0x195c04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_195c08:
    if (ctx->pc == 0x195C08u) {
        ctx->pc = 0x195C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C04u;
        // 0x195c08: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C0Cu;
        goto label_195c0c;
    }
    ctx->pc = 0x195C04u;
    {
        const bool branch_taken_0x195c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c04) {
            ctx->pc = 0x195C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195C04u;
            // 0x195c08: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195C14u;
            goto label_195c14;
        }
    }
    ctx->pc = 0x195C0Cu;
label_195c0c:
    // 0x195c0c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_195c10:
    if (ctx->pc == 0x195C10u) {
        ctx->pc = 0x195C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C0Cu;
        // 0x195c10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C14u;
        goto label_195c14;
    }
    ctx->pc = 0x195C0Cu;
    {
        const bool branch_taken_0x195c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C0Cu;
        // 0x195c10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c0c) {
            ctx->pc = 0x195C88u;
            goto label_195c88;
        }
    }
    ctx->pc = 0x195C14u;
label_195c14:
    // 0x195c14: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195c18:
    // 0x195c18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195c1c:
    // 0x195c1c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195c1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195c20:
    // 0x195c20: 0x54200019  bnel        $at, $zero, . + 4 + (0x19 << 2)
label_195c24:
    if (ctx->pc == 0x195C24u) {
        ctx->pc = 0x195C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C20u;
        // 0x195c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C28u;
        goto label_195c28;
    }
    ctx->pc = 0x195C20u;
    {
        const bool branch_taken_0x195c20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195c20) {
            ctx->pc = 0x195C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195C20u;
            // 0x195c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195C88u;
            goto label_195c88;
        }
    }
    ctx->pc = 0x195C28u;
label_195c28:
    // 0x195c28: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195c2c:
    // 0x195c2c: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x195c2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_195c30:
    // 0x195c30: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_195c34:
    // 0x195c34: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_195c38:
    if (ctx->pc == 0x195C38u) {
        ctx->pc = 0x195C3Cu;
        goto label_195c3c;
    }
    ctx->pc = 0x195C34u;
    {
        const bool branch_taken_0x195c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195c34) {
            ctx->pc = 0x195C84u;
            goto label_195c84;
        }
    }
    ctx->pc = 0x195C3Cu;
label_195c3c:
    // 0x195c3c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195c40:
    // 0x195c40: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195c44:
    // 0x195c44: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_195c48:
    // 0x195c48: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x195c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_195c4c:
    // 0x195c4c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_195c50:
    if (ctx->pc == 0x195C50u) {
        ctx->pc = 0x195C54u;
        goto label_195c54;
    }
    ctx->pc = 0x195C4Cu;
    {
        const bool branch_taken_0x195c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195c4c) {
            ctx->pc = 0x195C84u;
            goto label_195c84;
        }
    }
    ctx->pc = 0x195C54u;
label_195c54:
    // 0x195c54: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x195c54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_195c58:
    // 0x195c58: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x195c58u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_195c5c:
    // 0x195c5c: 0xc0592e4  jal         func_164B90
label_195c60:
    if (ctx->pc == 0x195C60u) {
        ctx->pc = 0x195C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C5Cu;
        // 0x195c60: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C64u;
        goto label_195c64;
    }
    ctx->pc = 0x195C5Cu;
    SET_GPR_U32(ctx, 31, 0x195C64u);
    ctx->pc = 0x195C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C5Cu;
    // 0x195c60: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x195C5Cu, 0x195C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C64u;
label_195c64:
    // 0x195c64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195c68:
    // 0x195c68: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x195c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_195c6c:
    // 0x195c6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195c70:
    // 0x195c70: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x195c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_195c74:
    // 0x195c74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_195c78:
    if (ctx->pc == 0x195C78u) {
        ctx->pc = 0x195C7Cu;
        goto label_195c7c;
    }
    ctx->pc = 0x195C74u;
    {
        const bool branch_taken_0x195c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c74) {
            ctx->pc = 0x195C84u;
            goto label_195c84;
        }
    }
    ctx->pc = 0x195C7Cu;
label_195c7c:
    // 0x195c7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_195c80:
    if (ctx->pc == 0x195C80u) {
        ctx->pc = 0x195C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C7Cu;
        // 0x195c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C84u;
        goto label_195c84;
    }
    ctx->pc = 0x195C7Cu;
    {
        const bool branch_taken_0x195c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C7Cu;
        // 0x195c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c7c) {
            ctx->pc = 0x195C88u;
            goto label_195c88;
        }
    }
    ctx->pc = 0x195C84u;
label_195c84:
    // 0x195c84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195c88:
    // 0x195c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195c8c:
    // 0x195c8c: 0x3e00008  jr          $ra
label_195c90:
    if (ctx->pc == 0x195C90u) {
        ctx->pc = 0x195C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C8Cu;
        // 0x195c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C94u;
        goto label_195c94;
    }
    ctx->pc = 0x195C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C8Cu;
        // 0x195c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195C94u;
label_195c94:
    // 0x195c94: 0x0  nop
    ctx->pc = 0x195c94u;
    // NOP
label_195c98:
    // 0x195c98: 0x0  nop
    ctx->pc = 0x195c98u;
    // NOP
label_195c9c:
    // 0x195c9c: 0x0  nop
    ctx->pc = 0x195c9cu;
    // NOP
label_195ca0:
    // 0x195ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195ca4:
    // 0x195ca4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195ca8:
    // 0x195ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195cac:
    // 0x195cac: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195cb0:
    // 0x195cb0: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195cb4:
    // 0x195cb4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_195cb8:
    if (ctx->pc == 0x195CB8u) {
        ctx->pc = 0x195CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CB4u;
        // 0x195cb8: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CBCu;
        goto label_195cbc;
    }
    ctx->pc = 0x195CB4u;
    {
        const bool branch_taken_0x195cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cb4) {
            ctx->pc = 0x195CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195CB4u;
            // 0x195cb8: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195CC4u;
            goto label_195cc4;
        }
    }
    ctx->pc = 0x195CBCu;
label_195cbc:
    // 0x195cbc: 0x10000026  b           . + 4 + (0x26 << 2)
label_195cc0:
    if (ctx->pc == 0x195CC0u) {
        ctx->pc = 0x195CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CBCu;
        // 0x195cc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CC4u;
        goto label_195cc4;
    }
    ctx->pc = 0x195CBCu;
    {
        const bool branch_taken_0x195cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CBCu;
        // 0x195cc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195cbc) {
            ctx->pc = 0x195D58u;
            goto label_195d58;
        }
    }
    ctx->pc = 0x195CC4u;
label_195cc4:
    // 0x195cc4: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195cc8:
    // 0x195cc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195ccc:
    // 0x195ccc: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195cccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195cd0:
    // 0x195cd0: 0x54200021  bnel        $at, $zero, . + 4 + (0x21 << 2)
label_195cd4:
    if (ctx->pc == 0x195CD4u) {
        ctx->pc = 0x195CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CD0u;
        // 0x195cd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CD8u;
        goto label_195cd8;
    }
    ctx->pc = 0x195CD0u;
    {
        const bool branch_taken_0x195cd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cd0) {
            ctx->pc = 0x195CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195CD0u;
            // 0x195cd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195D58u;
            goto label_195d58;
        }
    }
    ctx->pc = 0x195CD8u;
label_195cd8:
    // 0x195cd8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195cdc:
    // 0x195cdc: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x195cdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_195ce0:
    // 0x195ce0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_195ce4:
    // 0x195ce4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_195ce8:
    if (ctx->pc == 0x195CE8u) {
        ctx->pc = 0x195CECu;
        goto label_195cec;
    }
    ctx->pc = 0x195CE4u;
    {
        const bool branch_taken_0x195ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ce4) {
            ctx->pc = 0x195D54u;
            goto label_195d54;
        }
    }
    ctx->pc = 0x195CECu;
label_195cec:
    // 0x195cec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195cf0:
    // 0x195cf0: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195cf4:
    // 0x195cf4: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_195cf8:
    // 0x195cf8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x195cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_195cfc:
    // 0x195cfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_195d00:
    if (ctx->pc == 0x195D00u) {
        ctx->pc = 0x195D04u;
        goto label_195d04;
    }
    ctx->pc = 0x195CFCu;
    {
        const bool branch_taken_0x195cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cfc) {
            ctx->pc = 0x195D0Cu;
            goto label_195d0c;
        }
    }
    ctx->pc = 0x195D04u;
label_195d04:
    // 0x195d04: 0x10000014  b           . + 4 + (0x14 << 2)
label_195d08:
    if (ctx->pc == 0x195D08u) {
        ctx->pc = 0x195D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D04u;
        // 0x195d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D0Cu;
        goto label_195d0c;
    }
    ctx->pc = 0x195D04u;
    {
        const bool branch_taken_0x195d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D04u;
        // 0x195d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d04) {
            ctx->pc = 0x195D58u;
            goto label_195d58;
        }
    }
    ctx->pc = 0x195D0Cu;
label_195d0c:
    // 0x195d0c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195d10:
    // 0x195d10: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_195d14:
    // 0x195d14: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x195d14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_195d18:
    // 0x195d18: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x195d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_195d1c:
    // 0x195d1c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_195d20:
    if (ctx->pc == 0x195D20u) {
        ctx->pc = 0x195D24u;
        goto label_195d24;
    }
    ctx->pc = 0x195D1Cu;
    {
        const bool branch_taken_0x195d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d1c) {
            ctx->pc = 0x195D54u;
            goto label_195d54;
        }
    }
    ctx->pc = 0x195D24u;
label_195d24:
    // 0x195d24: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x195d24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_195d28:
    // 0x195d28: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x195d28u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_195d2c:
    // 0x195d2c: 0xc0592e4  jal         func_164B90
label_195d30:
    if (ctx->pc == 0x195D30u) {
        ctx->pc = 0x195D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D2Cu;
        // 0x195d30: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D34u;
        goto label_195d34;
    }
    ctx->pc = 0x195D2Cu;
    SET_GPR_U32(ctx, 31, 0x195D34u);
    ctx->pc = 0x195D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D2Cu;
    // 0x195d30: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x195D2Cu, 0x195D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D34u;
label_195d34:
    // 0x195d34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195d38:
    // 0x195d38: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x195d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_195d3c:
    // 0x195d3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195d40:
    // 0x195d40: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x195d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
label_195d44:
    // 0x195d44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_195d48:
    if (ctx->pc == 0x195D48u) {
        ctx->pc = 0x195D4Cu;
        goto label_195d4c;
    }
    ctx->pc = 0x195D44u;
    {
        const bool branch_taken_0x195d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d44) {
            ctx->pc = 0x195D54u;
            goto label_195d54;
        }
    }
    ctx->pc = 0x195D4Cu;
label_195d4c:
    // 0x195d4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_195d50:
    if (ctx->pc == 0x195D50u) {
        ctx->pc = 0x195D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D4Cu;
        // 0x195d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D54u;
        goto label_195d54;
    }
    ctx->pc = 0x195D4Cu;
    {
        const bool branch_taken_0x195d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D4Cu;
        // 0x195d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d4c) {
            ctx->pc = 0x195D58u;
            goto label_195d58;
        }
    }
    ctx->pc = 0x195D54u;
label_195d54:
    // 0x195d54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195d58:
    // 0x195d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195d5c:
    // 0x195d5c: 0x3e00008  jr          $ra
label_195d60:
    if (ctx->pc == 0x195D60u) {
        ctx->pc = 0x195D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D5Cu;
        // 0x195d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D64u;
        goto label_195d64;
    }
    ctx->pc = 0x195D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D5Cu;
        // 0x195d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195D64u;
label_195d64:
    // 0x195d64: 0x0  nop
    ctx->pc = 0x195d64u;
    // NOP
label_195d68:
    // 0x195d68: 0x0  nop
    ctx->pc = 0x195d68u;
    // NOP
label_195d6c:
    // 0x195d6c: 0x0  nop
    ctx->pc = 0x195d6cu;
    // NOP
label_195d70:
    // 0x195d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195d74:
    // 0x195d74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195d78:
    // 0x195d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195d7c:
    // 0x195d7c: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195d80:
    // 0x195d80: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195d84:
    // 0x195d84: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_195d88:
    if (ctx->pc == 0x195D88u) {
        ctx->pc = 0x195D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D84u;
        // 0x195d88: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D8Cu;
        goto label_195d8c;
    }
    ctx->pc = 0x195D84u;
    {
        const bool branch_taken_0x195d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d84) {
            ctx->pc = 0x195D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195D84u;
            // 0x195d88: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195D94u;
            goto label_195d94;
        }
    }
    ctx->pc = 0x195D8Cu;
label_195d8c:
    // 0x195d8c: 0x10000024  b           . + 4 + (0x24 << 2)
label_195d90:
    if (ctx->pc == 0x195D90u) {
        ctx->pc = 0x195D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D8Cu;
        // 0x195d90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D94u;
        goto label_195d94;
    }
    ctx->pc = 0x195D8Cu;
    {
        const bool branch_taken_0x195d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D8Cu;
        // 0x195d90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d8c) {
            ctx->pc = 0x195E20u;
            goto label_195e20;
        }
    }
    ctx->pc = 0x195D94u;
label_195d94:
    // 0x195d94: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195d98:
    // 0x195d98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195d9c:
    // 0x195d9c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195d9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195da0:
    // 0x195da0: 0x5420001f  bnel        $at, $zero, . + 4 + (0x1F << 2)
label_195da4:
    if (ctx->pc == 0x195DA4u) {
        ctx->pc = 0x195DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DA0u;
        // 0x195da4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DA8u;
        goto label_195da8;
    }
    ctx->pc = 0x195DA0u;
    {
        const bool branch_taken_0x195da0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195da0) {
            ctx->pc = 0x195DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195DA0u;
            // 0x195da4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195E20u;
            goto label_195e20;
        }
    }
    ctx->pc = 0x195DA8u;
label_195da8:
    // 0x195da8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195dac:
    // 0x195dac: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x195dacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_195db0:
    // 0x195db0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_195db4:
    // 0x195db4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_195db8:
    if (ctx->pc == 0x195DB8u) {
        ctx->pc = 0x195DBCu;
        goto label_195dbc;
    }
    ctx->pc = 0x195DB4u;
    {
        const bool branch_taken_0x195db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195db4) {
            ctx->pc = 0x195E1Cu;
            goto label_195e1c;
        }
    }
    ctx->pc = 0x195DBCu;
label_195dbc:
    // 0x195dbc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195dc0:
    // 0x195dc0: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195dc4:
    // 0x195dc4: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_195dc8:
    // 0x195dc8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x195dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_195dcc:
    // 0x195dcc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_195dd0:
    if (ctx->pc == 0x195DD0u) {
        ctx->pc = 0x195DD4u;
        goto label_195dd4;
    }
    ctx->pc = 0x195DCCu;
    {
        const bool branch_taken_0x195dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195dcc) {
            ctx->pc = 0x195E1Cu;
            goto label_195e1c;
        }
    }
    ctx->pc = 0x195DD4u;
label_195dd4:
    // 0x195dd4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195dd8:
    // 0x195dd8: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x195dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_195ddc:
    // 0x195ddc: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x195ddcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_195de0:
    // 0x195de0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x195de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_195de4:
    // 0x195de4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_195de8:
    if (ctx->pc == 0x195DE8u) {
        ctx->pc = 0x195DECu;
        goto label_195dec;
    }
    ctx->pc = 0x195DE4u;
    {
        const bool branch_taken_0x195de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195de4) {
            ctx->pc = 0x195E1Cu;
            goto label_195e1c;
        }
    }
    ctx->pc = 0x195DECu;
label_195dec:
    // 0x195dec: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x195decu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_195df0:
    // 0x195df0: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x195df0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_195df4:
    // 0x195df4: 0xc0592e4  jal         func_164B90
label_195df8:
    if (ctx->pc == 0x195DF8u) {
        ctx->pc = 0x195DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DF4u;
        // 0x195df8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DFCu;
        goto label_195dfc;
    }
    ctx->pc = 0x195DF4u;
    SET_GPR_U32(ctx, 31, 0x195DFCu);
    ctx->pc = 0x195DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195DF4u;
    // 0x195df8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x195DF4u, 0x195DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195DFCu;
label_195dfc:
    // 0x195dfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195e00:
    // 0x195e00: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x195e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_195e04:
    // 0x195e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195e08:
    // 0x195e08: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x195e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
label_195e0c:
    // 0x195e0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_195e10:
    if (ctx->pc == 0x195E10u) {
        ctx->pc = 0x195E14u;
        goto label_195e14;
    }
    ctx->pc = 0x195E0Cu;
    {
        const bool branch_taken_0x195e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e0c) {
            ctx->pc = 0x195E1Cu;
            goto label_195e1c;
        }
    }
    ctx->pc = 0x195E14u;
label_195e14:
    // 0x195e14: 0x10000002  b           . + 4 + (0x2 << 2)
label_195e18:
    if (ctx->pc == 0x195E18u) {
        ctx->pc = 0x195E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E14u;
        // 0x195e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E1Cu;
        goto label_195e1c;
    }
    ctx->pc = 0x195E14u;
    {
        const bool branch_taken_0x195e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E14u;
        // 0x195e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e14) {
            ctx->pc = 0x195E20u;
            goto label_195e20;
        }
    }
    ctx->pc = 0x195E1Cu;
label_195e1c:
    // 0x195e1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195e20:
    // 0x195e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195e24:
    // 0x195e24: 0x3e00008  jr          $ra
label_195e28:
    if (ctx->pc == 0x195E28u) {
        ctx->pc = 0x195E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E24u;
        // 0x195e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E2Cu;
        goto label_195e2c;
    }
    ctx->pc = 0x195E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E24u;
        // 0x195e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195E2Cu;
label_195e2c:
    // 0x195e2c: 0x0  nop
    ctx->pc = 0x195e2cu;
    // NOP
label_195e30:
    // 0x195e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195e34:
    // 0x195e34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195e38:
    // 0x195e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195e3c:
    // 0x195e3c: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195e40:
    // 0x195e40: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195e44:
    // 0x195e44: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_195e48:
    if (ctx->pc == 0x195E48u) {
        ctx->pc = 0x195E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E44u;
        // 0x195e48: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E4Cu;
        goto label_195e4c;
    }
    ctx->pc = 0x195E44u;
    {
        const bool branch_taken_0x195e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e44) {
            ctx->pc = 0x195E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195E44u;
            // 0x195e48: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195E54u;
            goto label_195e54;
        }
    }
    ctx->pc = 0x195E4Cu;
label_195e4c:
    // 0x195e4c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_195e50:
    if (ctx->pc == 0x195E50u) {
        ctx->pc = 0x195E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E4Cu;
        // 0x195e50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E54u;
        goto label_195e54;
    }
    ctx->pc = 0x195E4Cu;
    {
        const bool branch_taken_0x195e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E4Cu;
        // 0x195e50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e4c) {
            ctx->pc = 0x195ECCu;
            goto label_195ecc;
        }
    }
    ctx->pc = 0x195E54u;
label_195e54:
    // 0x195e54: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195e58:
    // 0x195e58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195e5c:
    // 0x195e5c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195e60:
    // 0x195e60: 0x5420001a  bnel        $at, $zero, . + 4 + (0x1A << 2)
label_195e64:
    if (ctx->pc == 0x195E64u) {
        ctx->pc = 0x195E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E60u;
        // 0x195e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E68u;
        goto label_195e68;
    }
    ctx->pc = 0x195E60u;
    {
        const bool branch_taken_0x195e60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195e60) {
            ctx->pc = 0x195E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195E60u;
            // 0x195e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195ECCu;
            goto label_195ecc;
        }
    }
    ctx->pc = 0x195E68u;
label_195e68:
    // 0x195e68: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195e6c:
    // 0x195e6c: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x195e6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_195e70:
    // 0x195e70: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_195e74:
    // 0x195e74: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_195e78:
    if (ctx->pc == 0x195E78u) {
        ctx->pc = 0x195E7Cu;
        goto label_195e7c;
    }
    ctx->pc = 0x195E74u;
    {
        const bool branch_taken_0x195e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195e74) {
            ctx->pc = 0x195EC8u;
            goto label_195ec8;
        }
    }
    ctx->pc = 0x195E7Cu;
label_195e7c:
    // 0x195e7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195e80:
    // 0x195e80: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195e84:
    // 0x195e84: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_195e88:
    // 0x195e88: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x195e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_195e8c:
    // 0x195e8c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_195e90:
    if (ctx->pc == 0x195E90u) {
        ctx->pc = 0x195E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E8Cu;
        // 0x195e90: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E94u;
        goto label_195e94;
    }
    ctx->pc = 0x195E8Cu;
    {
        const bool branch_taken_0x195e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195e8c) {
            ctx->pc = 0x195E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195E8Cu;
            // 0x195e90: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195E9Cu;
            goto label_195e9c;
        }
    }
    ctx->pc = 0x195E94u;
label_195e94:
    // 0x195e94: 0x1000000d  b           . + 4 + (0xD << 2)
label_195e98:
    if (ctx->pc == 0x195E98u) {
        ctx->pc = 0x195E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E94u;
        // 0x195e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E9Cu;
        goto label_195e9c;
    }
    ctx->pc = 0x195E94u;
    {
        const bool branch_taken_0x195e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E94u;
        // 0x195e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e94) {
            ctx->pc = 0x195ECCu;
            goto label_195ecc;
        }
    }
    ctx->pc = 0x195E9Cu;
label_195e9c:
    // 0x195e9c: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x195e9cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_195ea0:
    // 0x195ea0: 0xc0592e4  jal         func_164B90
label_195ea4:
    if (ctx->pc == 0x195EA4u) {
        ctx->pc = 0x195EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EA0u;
        // 0x195ea4: 0x906500f7  lbu         $a1, 0xF7($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EA8u;
        goto label_195ea8;
    }
    ctx->pc = 0x195EA0u;
    SET_GPR_U32(ctx, 31, 0x195EA8u);
    ctx->pc = 0x195EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195EA0u;
    // 0x195ea4: 0x906500f7  lbu         $a1, 0xF7($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x195EA0u, 0x195EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195EA8u;
label_195ea8:
    // 0x195ea8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195eac:
    // 0x195eac: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x195eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_195eb0:
    // 0x195eb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195eb4:
    // 0x195eb4: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x195eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
label_195eb8:
    // 0x195eb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_195ebc:
    if (ctx->pc == 0x195EBCu) {
        ctx->pc = 0x195EC0u;
        goto label_195ec0;
    }
    ctx->pc = 0x195EB8u;
    {
        const bool branch_taken_0x195eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195eb8) {
            ctx->pc = 0x195EC8u;
            goto label_195ec8;
        }
    }
    ctx->pc = 0x195EC0u;
label_195ec0:
    // 0x195ec0: 0x10000002  b           . + 4 + (0x2 << 2)
label_195ec4:
    if (ctx->pc == 0x195EC4u) {
        ctx->pc = 0x195EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EC0u;
        // 0x195ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EC8u;
        goto label_195ec8;
    }
    ctx->pc = 0x195EC0u;
    {
        const bool branch_taken_0x195ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EC0u;
        // 0x195ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ec0) {
            ctx->pc = 0x195ECCu;
            goto label_195ecc;
        }
    }
    ctx->pc = 0x195EC8u;
label_195ec8:
    // 0x195ec8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195ecc:
    // 0x195ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195ed0:
    // 0x195ed0: 0x3e00008  jr          $ra
label_195ed4:
    if (ctx->pc == 0x195ED4u) {
        ctx->pc = 0x195ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ED0u;
        // 0x195ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195ED8u;
        goto label_195ed8;
    }
    ctx->pc = 0x195ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ED0u;
        // 0x195ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195ED8u;
label_195ed8:
    // 0x195ed8: 0x0  nop
    ctx->pc = 0x195ed8u;
    // NOP
label_195edc:
    // 0x195edc: 0x0  nop
    ctx->pc = 0x195edcu;
    // NOP
label_195ee0:
    // 0x195ee0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195ee4:
    // 0x195ee4: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195ee8:
    // 0x195ee8: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195eec:
    // 0x195eec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_195ef0:
    if (ctx->pc == 0x195EF0u) {
        ctx->pc = 0x195EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EECu;
        // 0x195ef0: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EF4u;
        goto label_195ef4;
    }
    ctx->pc = 0x195EECu;
    {
        const bool branch_taken_0x195eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195eec) {
            ctx->pc = 0x195EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195EECu;
            // 0x195ef0: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195EFCu;
            goto label_195efc;
        }
    }
    ctx->pc = 0x195EF4u;
label_195ef4:
    // 0x195ef4: 0x1000000e  b           . + 4 + (0xE << 2)
label_195ef8:
    if (ctx->pc == 0x195EF8u) {
        ctx->pc = 0x195EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EF4u;
        // 0x195ef8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EFCu;
        goto label_195efc;
    }
    ctx->pc = 0x195EF4u;
    {
        const bool branch_taken_0x195ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EF4u;
        // 0x195ef8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ef4) {
            ctx->pc = 0x195F30u;
            goto label_195f30;
        }
    }
    ctx->pc = 0x195EFCu;
label_195efc:
    // 0x195efc: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195f00:
    // 0x195f00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195f04:
    // 0x195f04: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195f08:
    // 0x195f08: 0x54200009  bnel        $at, $zero, . + 4 + (0x9 << 2)
label_195f0c:
    if (ctx->pc == 0x195F0Cu) {
        ctx->pc = 0x195F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F08u;
        // 0x195f0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F10u;
        goto label_195f10;
    }
    ctx->pc = 0x195F08u;
    {
        const bool branch_taken_0x195f08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195f08) {
            ctx->pc = 0x195F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195F08u;
            // 0x195f0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195F30u;
            goto label_195f30;
        }
    }
    ctx->pc = 0x195F10u;
label_195f10:
    // 0x195f10: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195f14:
    // 0x195f14: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x195f14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_195f18:
    // 0x195f18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_195f1c:
    // 0x195f1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_195f20:
    if (ctx->pc == 0x195F20u) {
        ctx->pc = 0x195F24u;
        goto label_195f24;
    }
    ctx->pc = 0x195F1Cu;
    {
        const bool branch_taken_0x195f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195f1c) {
            ctx->pc = 0x195F2Cu;
            goto label_195f2c;
        }
    }
    ctx->pc = 0x195F24u;
label_195f24:
    // 0x195f24: 0x10000002  b           . + 4 + (0x2 << 2)
label_195f28:
    if (ctx->pc == 0x195F28u) {
        ctx->pc = 0x195F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F24u;
        // 0x195f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F2Cu;
        goto label_195f2c;
    }
    ctx->pc = 0x195F24u;
    {
        const bool branch_taken_0x195f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F24u;
        // 0x195f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f24) {
            ctx->pc = 0x195F30u;
            goto label_195f30;
        }
    }
    ctx->pc = 0x195F2Cu;
label_195f2c:
    // 0x195f2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195f30:
    // 0x195f30: 0x3e00008  jr          $ra
label_195f34:
    if (ctx->pc == 0x195F34u) {
        ctx->pc = 0x195F38u;
        goto label_195f38;
    }
    ctx->pc = 0x195F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195F38u;
label_195f38:
    // 0x195f38: 0x0  nop
    ctx->pc = 0x195f38u;
    // NOP
label_195f3c:
    // 0x195f3c: 0x0  nop
    ctx->pc = 0x195f3cu;
    // NOP
label_195f40:
    // 0x195f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195f44:
    // 0x195f44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195f48:
    // 0x195f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195f4c:
    // 0x195f4c: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x195f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_195f50:
    // 0x195f50: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x195f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_195f54:
    // 0x195f54: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_195f58:
    if (ctx->pc == 0x195F58u) {
        ctx->pc = 0x195F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F54u;
        // 0x195f58: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F5Cu;
        goto label_195f5c;
    }
    ctx->pc = 0x195F54u;
    {
        const bool branch_taken_0x195f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f54) {
            ctx->pc = 0x195F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195F54u;
            // 0x195f58: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x195F64u;
            goto label_195f64;
        }
    }
    ctx->pc = 0x195F5Cu;
label_195f5c:
    // 0x195f5c: 0x10000024  b           . + 4 + (0x24 << 2)
label_195f60:
    if (ctx->pc == 0x195F60u) {
        ctx->pc = 0x195F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F5Cu;
        // 0x195f60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F64u;
        goto label_195f64;
    }
    ctx->pc = 0x195F5Cu;
    {
        const bool branch_taken_0x195f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F5Cu;
        // 0x195f60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f5c) {
            ctx->pc = 0x195FF0u;
            goto label_195ff0;
        }
    }
    ctx->pc = 0x195F64u;
label_195f64:
    // 0x195f64: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x195f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_195f68:
    // 0x195f68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195f6c:
    // 0x195f6c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x195f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_195f70:
    // 0x195f70: 0x5420001f  bnel        $at, $zero, . + 4 + (0x1F << 2)
label_195f74:
    if (ctx->pc == 0x195F74u) {
        ctx->pc = 0x195F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F70u;
        // 0x195f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F78u;
        goto label_195f78;
    }
    ctx->pc = 0x195F70u;
    {
        const bool branch_taken_0x195f70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195f70) {
            ctx->pc = 0x195F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195F70u;
            // 0x195f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195FF0u;
            goto label_195ff0;
        }
    }
    ctx->pc = 0x195F78u;
label_195f78:
    // 0x195f78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195f7c:
    // 0x195f7c: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x195f7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_195f80:
    // 0x195f80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_195f84:
    // 0x195f84: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_195f88:
    if (ctx->pc == 0x195F88u) {
        ctx->pc = 0x195F8Cu;
        goto label_195f8c;
    }
    ctx->pc = 0x195F84u;
    {
        const bool branch_taken_0x195f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f84) {
            ctx->pc = 0x195FECu;
            goto label_195fec;
        }
    }
    ctx->pc = 0x195F8Cu;
label_195f8c:
    // 0x195f8c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195f90:
    // 0x195f90: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x195f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_195f94:
    // 0x195f94: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x195f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_195f98:
    // 0x195f98: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x195f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_195f9c:
    // 0x195f9c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_195fa0:
    if (ctx->pc == 0x195FA0u) {
        ctx->pc = 0x195FA4u;
        goto label_195fa4;
    }
    ctx->pc = 0x195F9Cu;
    {
        const bool branch_taken_0x195f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195f9c) {
            ctx->pc = 0x195FECu;
            goto label_195fec;
        }
    }
    ctx->pc = 0x195FA4u;
label_195fa4:
    // 0x195fa4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x195fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_195fa8:
    // 0x195fa8: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x195fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_195fac:
    // 0x195fac: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x195facu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_195fb0:
    // 0x195fb0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x195fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_195fb4:
    // 0x195fb4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_195fb8:
    if (ctx->pc == 0x195FB8u) {
        ctx->pc = 0x195FBCu;
        goto label_195fbc;
    }
    ctx->pc = 0x195FB4u;
    {
        const bool branch_taken_0x195fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195fb4) {
            ctx->pc = 0x195FECu;
            goto label_195fec;
        }
    }
    ctx->pc = 0x195FBCu;
label_195fbc:
    // 0x195fbc: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x195fbcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_195fc0:
    // 0x195fc0: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x195fc0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_195fc4:
    // 0x195fc4: 0xc0592e4  jal         func_164B90
label_195fc8:
    if (ctx->pc == 0x195FC8u) {
        ctx->pc = 0x195FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FC4u;
        // 0x195fc8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FCCu;
        goto label_195fcc;
    }
    ctx->pc = 0x195FC4u;
    SET_GPR_U32(ctx, 31, 0x195FCCu);
    ctx->pc = 0x195FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FC4u;
    // 0x195fc8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x195FC4u, 0x195FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195FCCu;
label_195fcc:
    // 0x195fcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195fd0:
    // 0x195fd0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x195fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_195fd4:
    // 0x195fd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_195fd8:
    // 0x195fd8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x195fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_195fdc:
    // 0x195fdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_195fe0:
    if (ctx->pc == 0x195FE0u) {
        ctx->pc = 0x195FE4u;
        goto label_195fe4;
    }
    ctx->pc = 0x195FDCu;
    {
        const bool branch_taken_0x195fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195fdc) {
            ctx->pc = 0x195FECu;
            goto label_195fec;
        }
    }
    ctx->pc = 0x195FE4u;
label_195fe4:
    // 0x195fe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_195fe8:
    if (ctx->pc == 0x195FE8u) {
        ctx->pc = 0x195FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FE4u;
        // 0x195fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FECu;
        goto label_195fec;
    }
    ctx->pc = 0x195FE4u;
    {
        const bool branch_taken_0x195fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FE4u;
        // 0x195fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fe4) {
            ctx->pc = 0x195FF0u;
            goto label_195ff0;
        }
    }
    ctx->pc = 0x195FECu;
label_195fec:
    // 0x195fec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195ff0:
    // 0x195ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195ff4:
    // 0x195ff4: 0x3e00008  jr          $ra
label_195ff8:
    if (ctx->pc == 0x195FF8u) {
        ctx->pc = 0x195FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FF4u;
        // 0x195ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FFCu;
        goto label_195ffc;
    }
    ctx->pc = 0x195FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FF4u;
        // 0x195ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195FFCu;
label_195ffc:
    // 0x195ffc: 0x0  nop
    ctx->pc = 0x195ffcu;
    // NOP
label_196000:
    // 0x196000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196004:
    // 0x196004: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_196008:
    // 0x196008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19600c:
    // 0x19600c: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x19600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_196010:
    // 0x196010: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x196010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_196014:
    // 0x196014: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_196018:
    if (ctx->pc == 0x196018u) {
        ctx->pc = 0x196018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196014u;
        // 0x196018: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19601Cu;
        goto label_19601c;
    }
    ctx->pc = 0x196014u;
    {
        const bool branch_taken_0x196014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196014) {
            ctx->pc = 0x196018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196014u;
            // 0x196018: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x196024u;
            goto label_196024;
        }
    }
    ctx->pc = 0x19601Cu;
label_19601c:
    // 0x19601c: 0x10000024  b           . + 4 + (0x24 << 2)
label_196020:
    if (ctx->pc == 0x196020u) {
        ctx->pc = 0x196020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19601Cu;
        // 0x196020: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196024u;
        goto label_196024;
    }
    ctx->pc = 0x19601Cu;
    {
        const bool branch_taken_0x19601c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19601Cu;
        // 0x196020: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19601c) {
            ctx->pc = 0x1960B0u;
            goto label_1960b0;
        }
    }
    ctx->pc = 0x196024u;
label_196024:
    // 0x196024: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x196024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_196028:
    // 0x196028: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19602c:
    // 0x19602c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x19602cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_196030:
    // 0x196030: 0x5420001f  bnel        $at, $zero, . + 4 + (0x1F << 2)
label_196034:
    if (ctx->pc == 0x196034u) {
        ctx->pc = 0x196034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196030u;
        // 0x196034: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196038u;
        goto label_196038;
    }
    ctx->pc = 0x196030u;
    {
        const bool branch_taken_0x196030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x196030) {
            ctx->pc = 0x196034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196030u;
            // 0x196034: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1960B0u;
            goto label_1960b0;
        }
    }
    ctx->pc = 0x196038u;
label_196038:
    // 0x196038: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_19603c:
    // 0x19603c: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x19603cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_196040:
    // 0x196040: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x196040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_196044:
    // 0x196044: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_196048:
    if (ctx->pc == 0x196048u) {
        ctx->pc = 0x19604Cu;
        goto label_19604c;
    }
    ctx->pc = 0x196044u;
    {
        const bool branch_taken_0x196044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196044) {
            ctx->pc = 0x1960ACu;
            goto label_1960ac;
        }
    }
    ctx->pc = 0x19604Cu;
label_19604c:
    // 0x19604c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_196050:
    // 0x196050: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x196050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_196054:
    // 0x196054: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x196054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_196058:
    // 0x196058: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x196058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_19605c:
    // 0x19605c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_196060:
    if (ctx->pc == 0x196060u) {
        ctx->pc = 0x196064u;
        goto label_196064;
    }
    ctx->pc = 0x19605Cu;
    {
        const bool branch_taken_0x19605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19605c) {
            ctx->pc = 0x1960ACu;
            goto label_1960ac;
        }
    }
    ctx->pc = 0x196064u;
label_196064:
    // 0x196064: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_196068:
    // 0x196068: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x196068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_19606c:
    // 0x19606c: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x19606cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_196070:
    // 0x196070: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x196070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_196074:
    // 0x196074: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_196078:
    if (ctx->pc == 0x196078u) {
        ctx->pc = 0x19607Cu;
        goto label_19607c;
    }
    ctx->pc = 0x196074u;
    {
        const bool branch_taken_0x196074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196074) {
            ctx->pc = 0x1960ACu;
            goto label_1960ac;
        }
    }
    ctx->pc = 0x19607Cu;
label_19607c:
    // 0x19607c: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x19607cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_196080:
    // 0x196080: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x196080u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_196084:
    // 0x196084: 0xc0592e4  jal         func_164B90
label_196088:
    if (ctx->pc == 0x196088u) {
        ctx->pc = 0x196088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196084u;
        // 0x196088: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19608Cu;
        goto label_19608c;
    }
    ctx->pc = 0x196084u;
    SET_GPR_U32(ctx, 31, 0x19608Cu);
    ctx->pc = 0x196088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196084u;
    // 0x196088: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x196084u, 0x19608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19608Cu;
label_19608c:
    // 0x19608c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19608cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196090:
    // 0x196090: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x196090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_196094:
    // 0x196094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196098:
    // 0x196098: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x196098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_19609c:
    // 0x19609c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1960a0:
    if (ctx->pc == 0x1960A0u) {
        ctx->pc = 0x1960A4u;
        goto label_1960a4;
    }
    ctx->pc = 0x19609Cu;
    {
        const bool branch_taken_0x19609c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19609c) {
            ctx->pc = 0x1960ACu;
            goto label_1960ac;
        }
    }
    ctx->pc = 0x1960A4u;
label_1960a4:
    // 0x1960a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1960a8:
    if (ctx->pc == 0x1960A8u) {
        ctx->pc = 0x1960A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A4u;
        // 0x1960a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960ACu;
        goto label_1960ac;
    }
    ctx->pc = 0x1960A4u;
    {
        const bool branch_taken_0x1960a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A4u;
        // 0x1960a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960a4) {
            ctx->pc = 0x1960B0u;
            goto label_1960b0;
        }
    }
    ctx->pc = 0x1960ACu;
label_1960ac:
    // 0x1960ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1960acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1960b0:
    // 0x1960b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1960b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1960b4:
    // 0x1960b4: 0x3e00008  jr          $ra
label_1960b8:
    if (ctx->pc == 0x1960B8u) {
        ctx->pc = 0x1960B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960B4u;
        // 0x1960b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960BCu;
        goto label_1960bc;
    }
    ctx->pc = 0x1960B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1960B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960B4u;
        // 0x1960b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1960B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1960BCu;
label_1960bc:
    // 0x1960bc: 0x0  nop
    ctx->pc = 0x1960bcu;
    // NOP
label_1960c0:
    // 0x1960c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1960c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1960c4:
    // 0x1960c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1960c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1960c8:
    // 0x1960c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1960c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1960cc:
    // 0x1960cc: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x1960ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_1960d0:
    // 0x1960d0: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x1960d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_1960d4:
    // 0x1960d4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1960d8:
    if (ctx->pc == 0x1960D8u) {
        ctx->pc = 0x1960D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960D4u;
        // 0x1960d8: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960DCu;
        goto label_1960dc;
    }
    ctx->pc = 0x1960D4u;
    {
        const bool branch_taken_0x1960d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960d4) {
            ctx->pc = 0x1960D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1960D4u;
            // 0x1960d8: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1960E4u;
            goto label_1960e4;
        }
    }
    ctx->pc = 0x1960DCu;
label_1960dc:
    // 0x1960dc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1960e0:
    if (ctx->pc == 0x1960E0u) {
        ctx->pc = 0x1960E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960DCu;
        // 0x1960e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960E4u;
        goto label_1960e4;
    }
    ctx->pc = 0x1960DCu;
    {
        const bool branch_taken_0x1960dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960DCu;
        // 0x1960e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960dc) {
            ctx->pc = 0x196158u;
            goto label_196158;
        }
    }
    ctx->pc = 0x1960E4u;
label_1960e4:
    // 0x1960e4: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x1960e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_1960e8:
    // 0x1960e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1960e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1960ec:
    // 0x1960ec: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x1960ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_1960f0:
    // 0x1960f0: 0x54200019  bnel        $at, $zero, . + 4 + (0x19 << 2)
label_1960f4:
    if (ctx->pc == 0x1960F4u) {
        ctx->pc = 0x1960F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960F0u;
        // 0x1960f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960F8u;
        goto label_1960f8;
    }
    ctx->pc = 0x1960F0u;
    {
        const bool branch_taken_0x1960f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1960f0) {
            ctx->pc = 0x1960F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1960F0u;
            // 0x1960f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196158u;
            goto label_196158;
        }
    }
    ctx->pc = 0x1960F8u;
label_1960f8:
    // 0x1960f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1960f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1960fc:
    // 0x1960fc: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x1960fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_196100:
    // 0x196100: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x196100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_196104:
    // 0x196104: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_196108:
    if (ctx->pc == 0x196108u) {
        ctx->pc = 0x19610Cu;
        goto label_19610c;
    }
    ctx->pc = 0x196104u;
    {
        const bool branch_taken_0x196104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196104) {
            ctx->pc = 0x196154u;
            goto label_196154;
        }
    }
    ctx->pc = 0x19610Cu;
label_19610c:
    // 0x19610c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_196110:
    // 0x196110: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x196110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_196114:
    // 0x196114: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x196114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_196118:
    // 0x196118: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x196118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_19611c:
    // 0x19611c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_196120:
    if (ctx->pc == 0x196120u) {
        ctx->pc = 0x196124u;
        goto label_196124;
    }
    ctx->pc = 0x19611Cu;
    {
        const bool branch_taken_0x19611c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19611c) {
            ctx->pc = 0x196154u;
            goto label_196154;
        }
    }
    ctx->pc = 0x196124u;
label_196124:
    // 0x196124: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x196124u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_196128:
    // 0x196128: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x196128u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_19612c:
    // 0x19612c: 0xc0592e4  jal         func_164B90
label_196130:
    if (ctx->pc == 0x196130u) {
        ctx->pc = 0x196130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19612Cu;
        // 0x196130: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196134u;
        goto label_196134;
    }
    ctx->pc = 0x19612Cu;
    SET_GPR_U32(ctx, 31, 0x196134u);
    ctx->pc = 0x196130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19612Cu;
    // 0x196130: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x19612Cu, 0x196134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196134u;
label_196134:
    // 0x196134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196138:
    // 0x196138: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x196138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_19613c:
    // 0x19613c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19613cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196140:
    // 0x196140: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x196140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_196144:
    // 0x196144: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_196148:
    if (ctx->pc == 0x196148u) {
        ctx->pc = 0x19614Cu;
        goto label_19614c;
    }
    ctx->pc = 0x196144u;
    {
        const bool branch_taken_0x196144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196144) {
            ctx->pc = 0x196154u;
            goto label_196154;
        }
    }
    ctx->pc = 0x19614Cu;
label_19614c:
    // 0x19614c: 0x10000002  b           . + 4 + (0x2 << 2)
label_196150:
    if (ctx->pc == 0x196150u) {
        ctx->pc = 0x196150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19614Cu;
        // 0x196150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196154u;
        goto label_196154;
    }
    ctx->pc = 0x19614Cu;
    {
        const bool branch_taken_0x19614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19614Cu;
        // 0x196150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19614c) {
            ctx->pc = 0x196158u;
            goto label_196158;
        }
    }
    ctx->pc = 0x196154u;
label_196154:
    // 0x196154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196158:
    // 0x196158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19615c:
    // 0x19615c: 0x3e00008  jr          $ra
label_196160:
    if (ctx->pc == 0x196160u) {
        ctx->pc = 0x196160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19615Cu;
        // 0x196160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196164u;
        goto label_196164;
    }
    ctx->pc = 0x19615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19615Cu;
        // 0x196160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196164u;
label_196164:
    // 0x196164: 0x0  nop
    ctx->pc = 0x196164u;
    // NOP
label_196168:
    // 0x196168: 0x0  nop
    ctx->pc = 0x196168u;
    // NOP
label_19616c:
    // 0x19616c: 0x0  nop
    ctx->pc = 0x19616cu;
    // NOP
label_196170:
    // 0x196170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196174:
    // 0x196174: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_196178:
    // 0x196178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19617c:
    // 0x19617c: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x19617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_196180:
    // 0x196180: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x196180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_196184:
    // 0x196184: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_196188:
    if (ctx->pc == 0x196188u) {
        ctx->pc = 0x196188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196184u;
        // 0x196188: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19618Cu;
        goto label_19618c;
    }
    ctx->pc = 0x196184u;
    {
        const bool branch_taken_0x196184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196184) {
            ctx->pc = 0x196188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196184u;
            // 0x196188: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x196194u;
            goto label_196194;
        }
    }
    ctx->pc = 0x19618Cu;
label_19618c:
    // 0x19618c: 0x10000026  b           . + 4 + (0x26 << 2)
label_196190:
    if (ctx->pc == 0x196190u) {
        ctx->pc = 0x196190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19618Cu;
        // 0x196190: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196194u;
        goto label_196194;
    }
    ctx->pc = 0x19618Cu;
    {
        const bool branch_taken_0x19618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19618Cu;
        // 0x196190: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19618c) {
            ctx->pc = 0x196228u;
            goto label_196228;
        }
    }
    ctx->pc = 0x196194u;
label_196194:
    // 0x196194: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x196194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_196198:
    // 0x196198: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19619c:
    // 0x19619c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x19619cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_1961a0:
    // 0x1961a0: 0x54200021  bnel        $at, $zero, . + 4 + (0x21 << 2)
label_1961a4:
    if (ctx->pc == 0x1961A4u) {
        ctx->pc = 0x1961A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961A0u;
        // 0x1961a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961A8u;
        goto label_1961a8;
    }
    ctx->pc = 0x1961A0u;
    {
        const bool branch_taken_0x1961a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1961a0) {
            ctx->pc = 0x1961A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1961A0u;
            // 0x1961a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196228u;
            goto label_196228;
        }
    }
    ctx->pc = 0x1961A8u;
label_1961a8:
    // 0x1961a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1961a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1961ac:
    // 0x1961ac: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x1961acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_1961b0:
    // 0x1961b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1961b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1961b4:
    // 0x1961b4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1961b8:
    if (ctx->pc == 0x1961B8u) {
        ctx->pc = 0x1961BCu;
        goto label_1961bc;
    }
    ctx->pc = 0x1961B4u;
    {
        const bool branch_taken_0x1961b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1961b4) {
            ctx->pc = 0x196224u;
            goto label_196224;
        }
    }
    ctx->pc = 0x1961BCu;
label_1961bc:
    // 0x1961bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1961bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1961c0:
    // 0x1961c0: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x1961c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_1961c4:
    // 0x1961c4: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_1961c8:
    // 0x1961c8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1961c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_1961cc:
    // 0x1961cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1961d0:
    if (ctx->pc == 0x1961D0u) {
        ctx->pc = 0x1961D4u;
        goto label_1961d4;
    }
    ctx->pc = 0x1961CCu;
    {
        const bool branch_taken_0x1961cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1961cc) {
            ctx->pc = 0x1961DCu;
            goto label_1961dc;
        }
    }
    ctx->pc = 0x1961D4u;
label_1961d4:
    // 0x1961d4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1961d8:
    if (ctx->pc == 0x1961D8u) {
        ctx->pc = 0x1961D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961D4u;
        // 0x1961d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961DCu;
        goto label_1961dc;
    }
    ctx->pc = 0x1961D4u;
    {
        const bool branch_taken_0x1961d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1961D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961D4u;
        // 0x1961d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961d4) {
            ctx->pc = 0x196228u;
            goto label_196228;
        }
    }
    ctx->pc = 0x1961DCu;
label_1961dc:
    // 0x1961dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1961e0:
    // 0x1961e0: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x1961e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_1961e4:
    // 0x1961e4: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x1961e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_1961e8:
    // 0x1961e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1961e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1961ec:
    // 0x1961ec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1961f0:
    if (ctx->pc == 0x1961F0u) {
        ctx->pc = 0x1961F4u;
        goto label_1961f4;
    }
    ctx->pc = 0x1961ECu;
    {
        const bool branch_taken_0x1961ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1961ec) {
            ctx->pc = 0x196224u;
            goto label_196224;
        }
    }
    ctx->pc = 0x1961F4u;
label_1961f4:
    // 0x1961f4: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x1961f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_1961f8:
    // 0x1961f8: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x1961f8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_1961fc:
    // 0x1961fc: 0xc0592e4  jal         func_164B90
label_196200:
    if (ctx->pc == 0x196200u) {
        ctx->pc = 0x196200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961FCu;
        // 0x196200: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196204u;
        goto label_196204;
    }
    ctx->pc = 0x1961FCu;
    SET_GPR_U32(ctx, 31, 0x196204u);
    ctx->pc = 0x196200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961FCu;
    // 0x196200: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x1961FCu, 0x196204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196204u;
label_196204:
    // 0x196204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196208:
    // 0x196208: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x196208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_19620c:
    // 0x19620c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196210:
    // 0x196210: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x196210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
label_196214:
    // 0x196214: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_196218:
    if (ctx->pc == 0x196218u) {
        ctx->pc = 0x19621Cu;
        goto label_19621c;
    }
    ctx->pc = 0x196214u;
    {
        const bool branch_taken_0x196214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196214) {
            ctx->pc = 0x196224u;
            goto label_196224;
        }
    }
    ctx->pc = 0x19621Cu;
label_19621c:
    // 0x19621c: 0x10000002  b           . + 4 + (0x2 << 2)
label_196220:
    if (ctx->pc == 0x196220u) {
        ctx->pc = 0x196220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19621Cu;
        // 0x196220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196224u;
        goto label_196224;
    }
    ctx->pc = 0x19621Cu;
    {
        const bool branch_taken_0x19621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19621Cu;
        // 0x196220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19621c) {
            ctx->pc = 0x196228u;
            goto label_196228;
        }
    }
    ctx->pc = 0x196224u;
label_196224:
    // 0x196224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196228:
    // 0x196228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19622c:
    // 0x19622c: 0x3e00008  jr          $ra
label_196230:
    if (ctx->pc == 0x196230u) {
        ctx->pc = 0x196230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19622Cu;
        // 0x196230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196234u;
        goto label_196234;
    }
    ctx->pc = 0x19622Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19622Cu;
        // 0x196230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19622Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196234u;
label_196234:
    // 0x196234: 0x0  nop
    ctx->pc = 0x196234u;
    // NOP
label_196238:
    // 0x196238: 0x0  nop
    ctx->pc = 0x196238u;
    // NOP
label_19623c:
    // 0x19623c: 0x0  nop
    ctx->pc = 0x19623cu;
    // NOP
label_196240:
    // 0x196240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196244:
    // 0x196244: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_196248:
    // 0x196248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19624c:
    // 0x19624c: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x19624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_196250:
    // 0x196250: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x196250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_196254:
    // 0x196254: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_196258:
    if (ctx->pc == 0x196258u) {
        ctx->pc = 0x196258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196254u;
        // 0x196258: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19625Cu;
        goto label_19625c;
    }
    ctx->pc = 0x196254u;
    {
        const bool branch_taken_0x196254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196254) {
            ctx->pc = 0x196258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196254u;
            // 0x196258: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x196264u;
            goto label_196264;
        }
    }
    ctx->pc = 0x19625Cu;
label_19625c:
    // 0x19625c: 0x10000024  b           . + 4 + (0x24 << 2)
label_196260:
    if (ctx->pc == 0x196260u) {
        ctx->pc = 0x196260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19625Cu;
        // 0x196260: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196264u;
        goto label_196264;
    }
    ctx->pc = 0x19625Cu;
    {
        const bool branch_taken_0x19625c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19625Cu;
        // 0x196260: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19625c) {
            ctx->pc = 0x1962F0u;
            goto label_1962f0;
        }
    }
    ctx->pc = 0x196264u;
label_196264:
    // 0x196264: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x196264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_196268:
    // 0x196268: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19626c:
    // 0x19626c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x19626cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_196270:
    // 0x196270: 0x5420001f  bnel        $at, $zero, . + 4 + (0x1F << 2)
label_196274:
    if (ctx->pc == 0x196274u) {
        ctx->pc = 0x196274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196270u;
        // 0x196274: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196278u;
        goto label_196278;
    }
    ctx->pc = 0x196270u;
    {
        const bool branch_taken_0x196270 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x196270) {
            ctx->pc = 0x196274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196270u;
            // 0x196274: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1962F0u;
            goto label_1962f0;
        }
    }
    ctx->pc = 0x196278u;
label_196278:
    // 0x196278: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_19627c:
    // 0x19627c: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x19627cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_196280:
    // 0x196280: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x196280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_196284:
    // 0x196284: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_196288:
    if (ctx->pc == 0x196288u) {
        ctx->pc = 0x19628Cu;
        goto label_19628c;
    }
    ctx->pc = 0x196284u;
    {
        const bool branch_taken_0x196284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196284) {
            ctx->pc = 0x1962ECu;
            goto label_1962ec;
        }
    }
    ctx->pc = 0x19628Cu;
label_19628c:
    // 0x19628c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_196290:
    // 0x196290: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x196290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_196294:
    // 0x196294: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x196294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_196298:
    // 0x196298: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x196298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_19629c:
    // 0x19629c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1962a0:
    if (ctx->pc == 0x1962A0u) {
        ctx->pc = 0x1962A4u;
        goto label_1962a4;
    }
    ctx->pc = 0x19629Cu;
    {
        const bool branch_taken_0x19629c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19629c) {
            ctx->pc = 0x1962ECu;
            goto label_1962ec;
        }
    }
    ctx->pc = 0x1962A4u;
label_1962a4:
    // 0x1962a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1962a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1962a8:
    // 0x1962a8: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x1962a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
label_1962ac:
    // 0x1962ac: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x1962acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_1962b0:
    // 0x1962b0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1962b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1962b4:
    // 0x1962b4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1962b8:
    if (ctx->pc == 0x1962B8u) {
        ctx->pc = 0x1962BCu;
        goto label_1962bc;
    }
    ctx->pc = 0x1962B4u;
    {
        const bool branch_taken_0x1962b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1962b4) {
            ctx->pc = 0x1962ECu;
            goto label_1962ec;
        }
    }
    ctx->pc = 0x1962BCu;
label_1962bc:
    // 0x1962bc: 0x906500f7  lbu         $a1, 0xF7($v1)
    ctx->pc = 0x1962bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
label_1962c0:
    // 0x1962c0: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x1962c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_1962c4:
    // 0x1962c4: 0xc0592e4  jal         func_164B90
label_1962c8:
    if (ctx->pc == 0x1962C8u) {
        ctx->pc = 0x1962C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962C4u;
        // 0x1962c8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962CCu;
        goto label_1962cc;
    }
    ctx->pc = 0x1962C4u;
    SET_GPR_U32(ctx, 31, 0x1962CCu);
    ctx->pc = 0x1962C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962C4u;
    // 0x1962c8: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x1962C4u, 0x1962CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962CCu;
label_1962cc:
    // 0x1962cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1962ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1962d0:
    // 0x1962d0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1962d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_1962d4:
    // 0x1962d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1962d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1962d8:
    // 0x1962d8: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x1962d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
label_1962dc:
    // 0x1962dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1962e0:
    if (ctx->pc == 0x1962E0u) {
        ctx->pc = 0x1962E4u;
        goto label_1962e4;
    }
    ctx->pc = 0x1962DCu;
    {
        const bool branch_taken_0x1962dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962dc) {
            ctx->pc = 0x1962ECu;
            goto label_1962ec;
        }
    }
    ctx->pc = 0x1962E4u;
label_1962e4:
    // 0x1962e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1962e8:
    if (ctx->pc == 0x1962E8u) {
        ctx->pc = 0x1962E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962E4u;
        // 0x1962e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962ECu;
        goto label_1962ec;
    }
    ctx->pc = 0x1962E4u;
    {
        const bool branch_taken_0x1962e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962E4u;
        // 0x1962e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962e4) {
            ctx->pc = 0x1962F0u;
            goto label_1962f0;
        }
    }
    ctx->pc = 0x1962ECu;
label_1962ec:
    // 0x1962ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1962ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1962f0:
    // 0x1962f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1962f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1962f4:
    // 0x1962f4: 0x3e00008  jr          $ra
label_1962f8:
    if (ctx->pc == 0x1962F8u) {
        ctx->pc = 0x1962F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962F4u;
        // 0x1962f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962FCu;
        goto label_1962fc;
    }
    ctx->pc = 0x1962F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1962F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962F4u;
        // 0x1962f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1962F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1962FCu;
label_1962fc:
    // 0x1962fc: 0x0  nop
    ctx->pc = 0x1962fcu;
    // NOP
label_196300:
    // 0x196300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196304:
    // 0x196304: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_196308:
    // 0x196308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19630c:
    // 0x19630c: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x19630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_196310:
    // 0x196310: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x196310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_196314:
    // 0x196314: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_196318:
    if (ctx->pc == 0x196318u) {
        ctx->pc = 0x196318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196314u;
        // 0x196318: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19631Cu;
        goto label_19631c;
    }
    ctx->pc = 0x196314u;
    {
        const bool branch_taken_0x196314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196314) {
            ctx->pc = 0x196318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196314u;
            // 0x196318: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x196324u;
            goto label_196324;
        }
    }
    ctx->pc = 0x19631Cu;
label_19631c:
    // 0x19631c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_196320:
    if (ctx->pc == 0x196320u) {
        ctx->pc = 0x196320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19631Cu;
        // 0x196320: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196324u;
        goto label_196324;
    }
    ctx->pc = 0x19631Cu;
    {
        const bool branch_taken_0x19631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19631Cu;
        // 0x196320: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19631c) {
            ctx->pc = 0x19639Cu;
            goto label_19639c;
        }
    }
    ctx->pc = 0x196324u;
label_196324:
    // 0x196324: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x196324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_196328:
    // 0x196328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19632c:
    // 0x19632c: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x19632cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_196330:
    // 0x196330: 0x5420001a  bnel        $at, $zero, . + 4 + (0x1A << 2)
label_196334:
    if (ctx->pc == 0x196334u) {
        ctx->pc = 0x196334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196330u;
        // 0x196334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196338u;
        goto label_196338;
    }
    ctx->pc = 0x196330u;
    {
        const bool branch_taken_0x196330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x196330) {
            ctx->pc = 0x196334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196330u;
            // 0x196334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19639Cu;
            goto label_19639c;
        }
    }
    ctx->pc = 0x196338u;
label_196338:
    // 0x196338: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_19633c:
    // 0x19633c: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x19633cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_196340:
    // 0x196340: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x196340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_196344:
    // 0x196344: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_196348:
    if (ctx->pc == 0x196348u) {
        ctx->pc = 0x19634Cu;
        goto label_19634c;
    }
    ctx->pc = 0x196344u;
    {
        const bool branch_taken_0x196344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196344) {
            ctx->pc = 0x196398u;
            goto label_196398;
        }
    }
    ctx->pc = 0x19634Cu;
label_19634c:
    // 0x19634c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19634cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_196350:
    // 0x196350: 0x8c43d188  lw          $v1, -0x2E78($v0)
    ctx->pc = 0x196350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
label_196354:
    // 0x196354: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x196354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_196358:
    // 0x196358: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x196358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_19635c:
    // 0x19635c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_196360:
    if (ctx->pc == 0x196360u) {
        ctx->pc = 0x196360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19635Cu;
        // 0x196360: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196364u;
        goto label_196364;
    }
    ctx->pc = 0x19635Cu;
    {
        const bool branch_taken_0x19635c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19635c) {
            ctx->pc = 0x196360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19635Cu;
            // 0x196360: 0x946400ea  lhu         $a0, 0xEA($v1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19636Cu;
            goto label_19636c;
        }
    }
    ctx->pc = 0x196364u;
label_196364:
    // 0x196364: 0x1000000d  b           . + 4 + (0xD << 2)
label_196368:
    if (ctx->pc == 0x196368u) {
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196364u;
        // 0x196368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19636Cu;
        goto label_19636c;
    }
    ctx->pc = 0x196364u;
    {
        const bool branch_taken_0x196364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196364u;
        // 0x196368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196364) {
            ctx->pc = 0x19639Cu;
            goto label_19639c;
        }
    }
    ctx->pc = 0x19636Cu;
label_19636c:
    // 0x19636c: 0x946600ec  lhu         $a2, 0xEC($v1)
    ctx->pc = 0x19636cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
label_196370:
    // 0x196370: 0xc0592e4  jal         func_164B90
label_196374:
    if (ctx->pc == 0x196374u) {
        ctx->pc = 0x196374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196370u;
        // 0x196374: 0x906500f7  lbu         $a1, 0xF7($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196378u;
        goto label_196378;
    }
    ctx->pc = 0x196370u;
    SET_GPR_U32(ctx, 31, 0x196378u);
    ctx->pc = 0x196374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196370u;
    // 0x196374: 0x906500f7  lbu         $a1, 0xF7($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 247)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x196370u, 0x196378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196378u;
label_196378:
    // 0x196378: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19637c:
    // 0x19637c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x19637cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_196380:
    // 0x196380: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196384:
    // 0x196384: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x196384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
label_196388:
    // 0x196388: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19638c:
    if (ctx->pc == 0x19638Cu) {
        ctx->pc = 0x196390u;
        goto label_196390;
    }
    ctx->pc = 0x196388u;
    {
        const bool branch_taken_0x196388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196388) {
            ctx->pc = 0x196398u;
            goto label_196398;
        }
    }
    ctx->pc = 0x196390u;
label_196390:
    // 0x196390: 0x10000002  b           . + 4 + (0x2 << 2)
label_196394:
    if (ctx->pc == 0x196394u) {
        ctx->pc = 0x196394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196390u;
        // 0x196394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196398u;
        goto label_196398;
    }
    ctx->pc = 0x196390u;
    {
        const bool branch_taken_0x196390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196390u;
        // 0x196394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196390) {
            ctx->pc = 0x19639Cu;
            goto label_19639c;
        }
    }
    ctx->pc = 0x196398u;
label_196398:
    // 0x196398: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19639c:
    // 0x19639c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19639cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1963a0:
    // 0x1963a0: 0x3e00008  jr          $ra
label_1963a4:
    if (ctx->pc == 0x1963A4u) {
        ctx->pc = 0x1963A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963A0u;
        // 0x1963a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963A8u;
        goto label_1963a8;
    }
    ctx->pc = 0x1963A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1963A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963A0u;
        // 0x1963a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1963A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1963A8u;
label_1963a8:
    // 0x1963a8: 0x0  nop
    ctx->pc = 0x1963a8u;
    // NOP
label_1963ac:
    // 0x1963ac: 0x0  nop
    ctx->pc = 0x1963acu;
    // NOP
label_1963b0:
    // 0x1963b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1963b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1963b4:
    // 0x1963b4: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x1963b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
label_1963b8:
    // 0x1963b8: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x1963b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_1963bc:
    // 0x1963bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1963c0:
    if (ctx->pc == 0x1963C0u) {
        ctx->pc = 0x1963C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963BCu;
        // 0x1963c0: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963C4u;
        goto label_1963c4;
    }
    ctx->pc = 0x1963BCu;
    {
        const bool branch_taken_0x1963bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1963bc) {
            ctx->pc = 0x1963C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1963BCu;
            // 0x1963c0: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1963CCu;
            goto label_1963cc;
        }
    }
    ctx->pc = 0x1963C4u;
label_1963c4:
    // 0x1963c4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1963c8:
    if (ctx->pc == 0x1963C8u) {
        ctx->pc = 0x1963C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963C4u;
        // 0x1963c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963CCu;
        goto label_1963cc;
    }
    ctx->pc = 0x1963C4u;
    {
        const bool branch_taken_0x1963c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1963C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963C4u;
        // 0x1963c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963c4) {
            ctx->pc = 0x196400u;
            goto label_196400;
        }
    }
    ctx->pc = 0x1963CCu;
label_1963cc:
    // 0x1963cc: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x1963ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_1963d0:
    // 0x1963d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1963d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1963d4:
    // 0x1963d4: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x1963d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_1963d8:
    // 0x1963d8: 0x54200009  bnel        $at, $zero, . + 4 + (0x9 << 2)
label_1963dc:
    if (ctx->pc == 0x1963DCu) {
        ctx->pc = 0x1963DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963D8u;
        // 0x1963dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963E0u;
        goto label_1963e0;
    }
    ctx->pc = 0x1963D8u;
    {
        const bool branch_taken_0x1963d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1963d8) {
            ctx->pc = 0x1963DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1963D8u;
            // 0x1963dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196400u;
            goto label_196400;
        }
    }
    ctx->pc = 0x1963E0u;
label_1963e0:
    // 0x1963e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1963e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1963e4:
    // 0x1963e4: 0x9042d078  lbu         $v0, -0x2F88($v0)
    ctx->pc = 0x1963e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955128)));
label_1963e8:
    // 0x1963e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1963e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1963ec:
    // 0x1963ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1963f0:
    if (ctx->pc == 0x1963F0u) {
        ctx->pc = 0x1963F4u;
        goto label_1963f4;
    }
    ctx->pc = 0x1963ECu;
    {
        const bool branch_taken_0x1963ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1963ec) {
            ctx->pc = 0x1963FCu;
            goto label_1963fc;
        }
    }
    ctx->pc = 0x1963F4u;
label_1963f4:
    // 0x1963f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1963f8:
    if (ctx->pc == 0x1963F8u) {
        ctx->pc = 0x1963F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963F4u;
        // 0x1963f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963FCu;
        goto label_1963fc;
    }
    ctx->pc = 0x1963F4u;
    {
        const bool branch_taken_0x1963f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1963F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963F4u;
        // 0x1963f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963f4) {
            ctx->pc = 0x196400u;
            goto label_196400;
        }
    }
    ctx->pc = 0x1963FCu;
label_1963fc:
    // 0x1963fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1963fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196400:
    // 0x196400: 0x3e00008  jr          $ra
label_196404:
    if (ctx->pc == 0x196404u) {
        ctx->pc = 0x196408u;
        goto label_196408;
    }
    ctx->pc = 0x196400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196408u;
label_196408:
    // 0x196408: 0x0  nop
    ctx->pc = 0x196408u;
    // NOP
label_19640c:
    // 0x19640c: 0x0  nop
    ctx->pc = 0x19640cu;
    // NOP
    if (ctx->pc == 0x19640cu) { ctx->pc = 0x196410u; }
}
