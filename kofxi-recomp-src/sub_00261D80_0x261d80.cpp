#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261D80
// Address: 0x261d80 - 0x2624e0
void sub_00261D80_0x261d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261D80_0x261d80");
#endif

    switch (ctx->pc) {
        case 0x261d80u: goto label_261d80;
        case 0x261d84u: goto label_261d84;
        case 0x261d88u: goto label_261d88;
        case 0x261d8cu: goto label_261d8c;
        case 0x261d90u: goto label_261d90;
        case 0x261d94u: goto label_261d94;
        case 0x261d98u: goto label_261d98;
        case 0x261d9cu: goto label_261d9c;
        case 0x261da0u: goto label_261da0;
        case 0x261da4u: goto label_261da4;
        case 0x261da8u: goto label_261da8;
        case 0x261dacu: goto label_261dac;
        case 0x261db0u: goto label_261db0;
        case 0x261db4u: goto label_261db4;
        case 0x261db8u: goto label_261db8;
        case 0x261dbcu: goto label_261dbc;
        case 0x261dc0u: goto label_261dc0;
        case 0x261dc4u: goto label_261dc4;
        case 0x261dc8u: goto label_261dc8;
        case 0x261dccu: goto label_261dcc;
        case 0x261dd0u: goto label_261dd0;
        case 0x261dd4u: goto label_261dd4;
        case 0x261dd8u: goto label_261dd8;
        case 0x261ddcu: goto label_261ddc;
        case 0x261de0u: goto label_261de0;
        case 0x261de4u: goto label_261de4;
        case 0x261de8u: goto label_261de8;
        case 0x261decu: goto label_261dec;
        case 0x261df0u: goto label_261df0;
        case 0x261df4u: goto label_261df4;
        case 0x261df8u: goto label_261df8;
        case 0x261dfcu: goto label_261dfc;
        case 0x261e00u: goto label_261e00;
        case 0x261e04u: goto label_261e04;
        case 0x261e08u: goto label_261e08;
        case 0x261e0cu: goto label_261e0c;
        case 0x261e10u: goto label_261e10;
        case 0x261e14u: goto label_261e14;
        case 0x261e18u: goto label_261e18;
        case 0x261e1cu: goto label_261e1c;
        case 0x261e20u: goto label_261e20;
        case 0x261e24u: goto label_261e24;
        case 0x261e28u: goto label_261e28;
        case 0x261e2cu: goto label_261e2c;
        case 0x261e30u: goto label_261e30;
        case 0x261e34u: goto label_261e34;
        case 0x261e38u: goto label_261e38;
        case 0x261e3cu: goto label_261e3c;
        case 0x261e40u: goto label_261e40;
        case 0x261e44u: goto label_261e44;
        case 0x261e48u: goto label_261e48;
        case 0x261e4cu: goto label_261e4c;
        case 0x261e50u: goto label_261e50;
        case 0x261e54u: goto label_261e54;
        case 0x261e58u: goto label_261e58;
        case 0x261e5cu: goto label_261e5c;
        case 0x261e60u: goto label_261e60;
        case 0x261e64u: goto label_261e64;
        case 0x261e68u: goto label_261e68;
        case 0x261e6cu: goto label_261e6c;
        case 0x261e70u: goto label_261e70;
        case 0x261e74u: goto label_261e74;
        case 0x261e78u: goto label_261e78;
        case 0x261e7cu: goto label_261e7c;
        case 0x261e80u: goto label_261e80;
        case 0x261e84u: goto label_261e84;
        case 0x261e88u: goto label_261e88;
        case 0x261e8cu: goto label_261e8c;
        case 0x261e90u: goto label_261e90;
        case 0x261e94u: goto label_261e94;
        case 0x261e98u: goto label_261e98;
        case 0x261e9cu: goto label_261e9c;
        case 0x261ea0u: goto label_261ea0;
        case 0x261ea4u: goto label_261ea4;
        case 0x261ea8u: goto label_261ea8;
        case 0x261eacu: goto label_261eac;
        case 0x261eb0u: goto label_261eb0;
        case 0x261eb4u: goto label_261eb4;
        case 0x261eb8u: goto label_261eb8;
        case 0x261ebcu: goto label_261ebc;
        case 0x261ec0u: goto label_261ec0;
        case 0x261ec4u: goto label_261ec4;
        case 0x261ec8u: goto label_261ec8;
        case 0x261eccu: goto label_261ecc;
        case 0x261ed0u: goto label_261ed0;
        case 0x261ed4u: goto label_261ed4;
        case 0x261ed8u: goto label_261ed8;
        case 0x261edcu: goto label_261edc;
        case 0x261ee0u: goto label_261ee0;
        case 0x261ee4u: goto label_261ee4;
        case 0x261ee8u: goto label_261ee8;
        case 0x261eecu: goto label_261eec;
        case 0x261ef0u: goto label_261ef0;
        case 0x261ef4u: goto label_261ef4;
        case 0x261ef8u: goto label_261ef8;
        case 0x261efcu: goto label_261efc;
        case 0x261f00u: goto label_261f00;
        case 0x261f04u: goto label_261f04;
        case 0x261f08u: goto label_261f08;
        case 0x261f0cu: goto label_261f0c;
        case 0x261f10u: goto label_261f10;
        case 0x261f14u: goto label_261f14;
        case 0x261f18u: goto label_261f18;
        case 0x261f1cu: goto label_261f1c;
        case 0x261f20u: goto label_261f20;
        case 0x261f24u: goto label_261f24;
        case 0x261f28u: goto label_261f28;
        case 0x261f2cu: goto label_261f2c;
        case 0x261f30u: goto label_261f30;
        case 0x261f34u: goto label_261f34;
        case 0x261f38u: goto label_261f38;
        case 0x261f3cu: goto label_261f3c;
        case 0x261f40u: goto label_261f40;
        case 0x261f44u: goto label_261f44;
        case 0x261f48u: goto label_261f48;
        case 0x261f4cu: goto label_261f4c;
        case 0x261f50u: goto label_261f50;
        case 0x261f54u: goto label_261f54;
        case 0x261f58u: goto label_261f58;
        case 0x261f5cu: goto label_261f5c;
        case 0x261f60u: goto label_261f60;
        case 0x261f64u: goto label_261f64;
        case 0x261f68u: goto label_261f68;
        case 0x261f6cu: goto label_261f6c;
        case 0x261f70u: goto label_261f70;
        case 0x261f74u: goto label_261f74;
        case 0x261f78u: goto label_261f78;
        case 0x261f7cu: goto label_261f7c;
        case 0x261f80u: goto label_261f80;
        case 0x261f84u: goto label_261f84;
        case 0x261f88u: goto label_261f88;
        case 0x261f8cu: goto label_261f8c;
        case 0x261f90u: goto label_261f90;
        case 0x261f94u: goto label_261f94;
        case 0x261f98u: goto label_261f98;
        case 0x261f9cu: goto label_261f9c;
        case 0x261fa0u: goto label_261fa0;
        case 0x261fa4u: goto label_261fa4;
        case 0x261fa8u: goto label_261fa8;
        case 0x261facu: goto label_261fac;
        case 0x261fb0u: goto label_261fb0;
        case 0x261fb4u: goto label_261fb4;
        case 0x261fb8u: goto label_261fb8;
        case 0x261fbcu: goto label_261fbc;
        case 0x261fc0u: goto label_261fc0;
        case 0x261fc4u: goto label_261fc4;
        case 0x261fc8u: goto label_261fc8;
        case 0x261fccu: goto label_261fcc;
        case 0x261fd0u: goto label_261fd0;
        case 0x261fd4u: goto label_261fd4;
        case 0x261fd8u: goto label_261fd8;
        case 0x261fdcu: goto label_261fdc;
        case 0x261fe0u: goto label_261fe0;
        case 0x261fe4u: goto label_261fe4;
        case 0x261fe8u: goto label_261fe8;
        case 0x261fecu: goto label_261fec;
        case 0x261ff0u: goto label_261ff0;
        case 0x261ff4u: goto label_261ff4;
        case 0x261ff8u: goto label_261ff8;
        case 0x261ffcu: goto label_261ffc;
        case 0x262000u: goto label_262000;
        case 0x262004u: goto label_262004;
        case 0x262008u: goto label_262008;
        case 0x26200cu: goto label_26200c;
        case 0x262010u: goto label_262010;
        case 0x262014u: goto label_262014;
        case 0x262018u: goto label_262018;
        case 0x26201cu: goto label_26201c;
        case 0x262020u: goto label_262020;
        case 0x262024u: goto label_262024;
        case 0x262028u: goto label_262028;
        case 0x26202cu: goto label_26202c;
        case 0x262030u: goto label_262030;
        case 0x262034u: goto label_262034;
        case 0x262038u: goto label_262038;
        case 0x26203cu: goto label_26203c;
        case 0x262040u: goto label_262040;
        case 0x262044u: goto label_262044;
        case 0x262048u: goto label_262048;
        case 0x26204cu: goto label_26204c;
        case 0x262050u: goto label_262050;
        case 0x262054u: goto label_262054;
        case 0x262058u: goto label_262058;
        case 0x26205cu: goto label_26205c;
        case 0x262060u: goto label_262060;
        case 0x262064u: goto label_262064;
        case 0x262068u: goto label_262068;
        case 0x26206cu: goto label_26206c;
        case 0x262070u: goto label_262070;
        case 0x262074u: goto label_262074;
        case 0x262078u: goto label_262078;
        case 0x26207cu: goto label_26207c;
        case 0x262080u: goto label_262080;
        case 0x262084u: goto label_262084;
        case 0x262088u: goto label_262088;
        case 0x26208cu: goto label_26208c;
        case 0x262090u: goto label_262090;
        case 0x262094u: goto label_262094;
        case 0x262098u: goto label_262098;
        case 0x26209cu: goto label_26209c;
        case 0x2620a0u: goto label_2620a0;
        case 0x2620a4u: goto label_2620a4;
        case 0x2620a8u: goto label_2620a8;
        case 0x2620acu: goto label_2620ac;
        case 0x2620b0u: goto label_2620b0;
        case 0x2620b4u: goto label_2620b4;
        case 0x2620b8u: goto label_2620b8;
        case 0x2620bcu: goto label_2620bc;
        case 0x2620c0u: goto label_2620c0;
        case 0x2620c4u: goto label_2620c4;
        case 0x2620c8u: goto label_2620c8;
        case 0x2620ccu: goto label_2620cc;
        case 0x2620d0u: goto label_2620d0;
        case 0x2620d4u: goto label_2620d4;
        case 0x2620d8u: goto label_2620d8;
        case 0x2620dcu: goto label_2620dc;
        case 0x2620e0u: goto label_2620e0;
        case 0x2620e4u: goto label_2620e4;
        case 0x2620e8u: goto label_2620e8;
        case 0x2620ecu: goto label_2620ec;
        case 0x2620f0u: goto label_2620f0;
        case 0x2620f4u: goto label_2620f4;
        case 0x2620f8u: goto label_2620f8;
        case 0x2620fcu: goto label_2620fc;
        case 0x262100u: goto label_262100;
        case 0x262104u: goto label_262104;
        case 0x262108u: goto label_262108;
        case 0x26210cu: goto label_26210c;
        case 0x262110u: goto label_262110;
        case 0x262114u: goto label_262114;
        case 0x262118u: goto label_262118;
        case 0x26211cu: goto label_26211c;
        case 0x262120u: goto label_262120;
        case 0x262124u: goto label_262124;
        case 0x262128u: goto label_262128;
        case 0x26212cu: goto label_26212c;
        case 0x262130u: goto label_262130;
        case 0x262134u: goto label_262134;
        case 0x262138u: goto label_262138;
        case 0x26213cu: goto label_26213c;
        case 0x262140u: goto label_262140;
        case 0x262144u: goto label_262144;
        case 0x262148u: goto label_262148;
        case 0x26214cu: goto label_26214c;
        case 0x262150u: goto label_262150;
        case 0x262154u: goto label_262154;
        case 0x262158u: goto label_262158;
        case 0x26215cu: goto label_26215c;
        case 0x262160u: goto label_262160;
        case 0x262164u: goto label_262164;
        case 0x262168u: goto label_262168;
        case 0x26216cu: goto label_26216c;
        case 0x262170u: goto label_262170;
        case 0x262174u: goto label_262174;
        case 0x262178u: goto label_262178;
        case 0x26217cu: goto label_26217c;
        case 0x262180u: goto label_262180;
        case 0x262184u: goto label_262184;
        case 0x262188u: goto label_262188;
        case 0x26218cu: goto label_26218c;
        case 0x262190u: goto label_262190;
        case 0x262194u: goto label_262194;
        case 0x262198u: goto label_262198;
        case 0x26219cu: goto label_26219c;
        case 0x2621a0u: goto label_2621a0;
        case 0x2621a4u: goto label_2621a4;
        case 0x2621a8u: goto label_2621a8;
        case 0x2621acu: goto label_2621ac;
        case 0x2621b0u: goto label_2621b0;
        case 0x2621b4u: goto label_2621b4;
        case 0x2621b8u: goto label_2621b8;
        case 0x2621bcu: goto label_2621bc;
        case 0x2621c0u: goto label_2621c0;
        case 0x2621c4u: goto label_2621c4;
        case 0x2621c8u: goto label_2621c8;
        case 0x2621ccu: goto label_2621cc;
        case 0x2621d0u: goto label_2621d0;
        case 0x2621d4u: goto label_2621d4;
        case 0x2621d8u: goto label_2621d8;
        case 0x2621dcu: goto label_2621dc;
        case 0x2621e0u: goto label_2621e0;
        case 0x2621e4u: goto label_2621e4;
        case 0x2621e8u: goto label_2621e8;
        case 0x2621ecu: goto label_2621ec;
        case 0x2621f0u: goto label_2621f0;
        case 0x2621f4u: goto label_2621f4;
        case 0x2621f8u: goto label_2621f8;
        case 0x2621fcu: goto label_2621fc;
        case 0x262200u: goto label_262200;
        case 0x262204u: goto label_262204;
        case 0x262208u: goto label_262208;
        case 0x26220cu: goto label_26220c;
        case 0x262210u: goto label_262210;
        case 0x262214u: goto label_262214;
        case 0x262218u: goto label_262218;
        case 0x26221cu: goto label_26221c;
        case 0x262220u: goto label_262220;
        case 0x262224u: goto label_262224;
        case 0x262228u: goto label_262228;
        case 0x26222cu: goto label_26222c;
        case 0x262230u: goto label_262230;
        case 0x262234u: goto label_262234;
        case 0x262238u: goto label_262238;
        case 0x26223cu: goto label_26223c;
        case 0x262240u: goto label_262240;
        case 0x262244u: goto label_262244;
        case 0x262248u: goto label_262248;
        case 0x26224cu: goto label_26224c;
        case 0x262250u: goto label_262250;
        case 0x262254u: goto label_262254;
        case 0x262258u: goto label_262258;
        case 0x26225cu: goto label_26225c;
        case 0x262260u: goto label_262260;
        case 0x262264u: goto label_262264;
        case 0x262268u: goto label_262268;
        case 0x26226cu: goto label_26226c;
        case 0x262270u: goto label_262270;
        case 0x262274u: goto label_262274;
        case 0x262278u: goto label_262278;
        case 0x26227cu: goto label_26227c;
        case 0x262280u: goto label_262280;
        case 0x262284u: goto label_262284;
        case 0x262288u: goto label_262288;
        case 0x26228cu: goto label_26228c;
        case 0x262290u: goto label_262290;
        case 0x262294u: goto label_262294;
        case 0x262298u: goto label_262298;
        case 0x26229cu: goto label_26229c;
        case 0x2622a0u: goto label_2622a0;
        case 0x2622a4u: goto label_2622a4;
        case 0x2622a8u: goto label_2622a8;
        case 0x2622acu: goto label_2622ac;
        case 0x2622b0u: goto label_2622b0;
        case 0x2622b4u: goto label_2622b4;
        case 0x2622b8u: goto label_2622b8;
        case 0x2622bcu: goto label_2622bc;
        case 0x2622c0u: goto label_2622c0;
        case 0x2622c4u: goto label_2622c4;
        case 0x2622c8u: goto label_2622c8;
        case 0x2622ccu: goto label_2622cc;
        case 0x2622d0u: goto label_2622d0;
        case 0x2622d4u: goto label_2622d4;
        case 0x2622d8u: goto label_2622d8;
        case 0x2622dcu: goto label_2622dc;
        case 0x2622e0u: goto label_2622e0;
        case 0x2622e4u: goto label_2622e4;
        case 0x2622e8u: goto label_2622e8;
        case 0x2622ecu: goto label_2622ec;
        case 0x2622f0u: goto label_2622f0;
        case 0x2622f4u: goto label_2622f4;
        case 0x2622f8u: goto label_2622f8;
        case 0x2622fcu: goto label_2622fc;
        case 0x262300u: goto label_262300;
        case 0x262304u: goto label_262304;
        case 0x262308u: goto label_262308;
        case 0x26230cu: goto label_26230c;
        case 0x262310u: goto label_262310;
        case 0x262314u: goto label_262314;
        case 0x262318u: goto label_262318;
        case 0x26231cu: goto label_26231c;
        case 0x262320u: goto label_262320;
        case 0x262324u: goto label_262324;
        case 0x262328u: goto label_262328;
        case 0x26232cu: goto label_26232c;
        case 0x262330u: goto label_262330;
        case 0x262334u: goto label_262334;
        case 0x262338u: goto label_262338;
        case 0x26233cu: goto label_26233c;
        case 0x262340u: goto label_262340;
        case 0x262344u: goto label_262344;
        case 0x262348u: goto label_262348;
        case 0x26234cu: goto label_26234c;
        case 0x262350u: goto label_262350;
        case 0x262354u: goto label_262354;
        case 0x262358u: goto label_262358;
        case 0x26235cu: goto label_26235c;
        case 0x262360u: goto label_262360;
        case 0x262364u: goto label_262364;
        case 0x262368u: goto label_262368;
        case 0x26236cu: goto label_26236c;
        case 0x262370u: goto label_262370;
        case 0x262374u: goto label_262374;
        case 0x262378u: goto label_262378;
        case 0x26237cu: goto label_26237c;
        case 0x262380u: goto label_262380;
        case 0x262384u: goto label_262384;
        case 0x262388u: goto label_262388;
        case 0x26238cu: goto label_26238c;
        case 0x262390u: goto label_262390;
        case 0x262394u: goto label_262394;
        case 0x262398u: goto label_262398;
        case 0x26239cu: goto label_26239c;
        case 0x2623a0u: goto label_2623a0;
        case 0x2623a4u: goto label_2623a4;
        case 0x2623a8u: goto label_2623a8;
        case 0x2623acu: goto label_2623ac;
        case 0x2623b0u: goto label_2623b0;
        case 0x2623b4u: goto label_2623b4;
        case 0x2623b8u: goto label_2623b8;
        case 0x2623bcu: goto label_2623bc;
        case 0x2623c0u: goto label_2623c0;
        case 0x2623c4u: goto label_2623c4;
        case 0x2623c8u: goto label_2623c8;
        case 0x2623ccu: goto label_2623cc;
        case 0x2623d0u: goto label_2623d0;
        case 0x2623d4u: goto label_2623d4;
        case 0x2623d8u: goto label_2623d8;
        case 0x2623dcu: goto label_2623dc;
        case 0x2623e0u: goto label_2623e0;
        case 0x2623e4u: goto label_2623e4;
        case 0x2623e8u: goto label_2623e8;
        case 0x2623ecu: goto label_2623ec;
        case 0x2623f0u: goto label_2623f0;
        case 0x2623f4u: goto label_2623f4;
        case 0x2623f8u: goto label_2623f8;
        case 0x2623fcu: goto label_2623fc;
        case 0x262400u: goto label_262400;
        case 0x262404u: goto label_262404;
        case 0x262408u: goto label_262408;
        case 0x26240cu: goto label_26240c;
        case 0x262410u: goto label_262410;
        case 0x262414u: goto label_262414;
        case 0x262418u: goto label_262418;
        case 0x26241cu: goto label_26241c;
        case 0x262420u: goto label_262420;
        case 0x262424u: goto label_262424;
        case 0x262428u: goto label_262428;
        case 0x26242cu: goto label_26242c;
        case 0x262430u: goto label_262430;
        case 0x262434u: goto label_262434;
        case 0x262438u: goto label_262438;
        case 0x26243cu: goto label_26243c;
        case 0x262440u: goto label_262440;
        case 0x262444u: goto label_262444;
        case 0x262448u: goto label_262448;
        case 0x26244cu: goto label_26244c;
        case 0x262450u: goto label_262450;
        case 0x262454u: goto label_262454;
        case 0x262458u: goto label_262458;
        case 0x26245cu: goto label_26245c;
        case 0x262460u: goto label_262460;
        case 0x262464u: goto label_262464;
        case 0x262468u: goto label_262468;
        case 0x26246cu: goto label_26246c;
        case 0x262470u: goto label_262470;
        case 0x262474u: goto label_262474;
        case 0x262478u: goto label_262478;
        case 0x26247cu: goto label_26247c;
        case 0x262480u: goto label_262480;
        case 0x262484u: goto label_262484;
        case 0x262488u: goto label_262488;
        case 0x26248cu: goto label_26248c;
        case 0x262490u: goto label_262490;
        case 0x262494u: goto label_262494;
        case 0x262498u: goto label_262498;
        case 0x26249cu: goto label_26249c;
        case 0x2624a0u: goto label_2624a0;
        case 0x2624a4u: goto label_2624a4;
        case 0x2624a8u: goto label_2624a8;
        case 0x2624acu: goto label_2624ac;
        case 0x2624b0u: goto label_2624b0;
        case 0x2624b4u: goto label_2624b4;
        case 0x2624b8u: goto label_2624b8;
        case 0x2624bcu: goto label_2624bc;
        case 0x2624c0u: goto label_2624c0;
        case 0x2624c4u: goto label_2624c4;
        case 0x2624c8u: goto label_2624c8;
        case 0x2624ccu: goto label_2624cc;
        case 0x2624d0u: goto label_2624d0;
        case 0x2624d4u: goto label_2624d4;
        case 0x2624d8u: goto label_2624d8;
        case 0x2624dcu: goto label_2624dc;
        default: break;
    }

    ctx->pc = 0x261d80u;

label_261d80:
    // 0x261d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_261d84:
    // 0x261d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261d88:
    // 0x261d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x261d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_261d8c:
    // 0x261d8c: 0xc043328  jal         func_10CCA0
label_261d90:
    if (ctx->pc == 0x261D90u) {
        ctx->pc = 0x261D90u;
            // 0x261d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261D94u;
        goto label_261d94;
    }
    ctx->pc = 0x261D8Cu;
    SET_GPR_U32(ctx, 31, 0x261D94u);
    ctx->pc = 0x261D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D8Cu;
            // 0x261d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D94u; }
        if (ctx->pc != 0x261D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D94u; }
        if (ctx->pc != 0x261D94u) { return; }
    }
    ctx->pc = 0x261D94u;
label_261d94:
    // 0x261d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261d98:
    // 0x261d98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x261d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_261d9c:
    // 0x261d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261da0:
    // 0x261da0: 0x804331c  j           func_10CC70
label_261da4:
    if (ctx->pc == 0x261DA4u) {
        ctx->pc = 0x261DA4u;
            // 0x261da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x261DA8u;
        goto label_261da8;
    }
    ctx->pc = 0x261DA0u;
    ctx->pc = 0x261DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261DA0u;
            // 0x261da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CC70_0x10cc70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x261DA8u;
label_261da8:
    // 0x261da8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x261da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_261dac:
    // 0x261dac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x261dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_261db0:
    // 0x261db0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x261db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_261db4:
    // 0x261db4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x261db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_261db8:
    // 0x261db8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x261db8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261dbc:
    // 0x261dbc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x261dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_261dc0:
    // 0x261dc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x261dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_261dc4:
    // 0x261dc4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x261dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_261dc8:
    // 0x261dc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x261dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_261dcc:
    // 0x261dcc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x261dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_261dd0:
    // 0x261dd0: 0x108200b6  beq         $a0, $v0, . + 4 + (0xB6 << 2)
label_261dd4:
    if (ctx->pc == 0x261DD4u) {
        ctx->pc = 0x261DD4u;
            // 0x261dd4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x261DD8u;
        goto label_261dd8;
    }
    ctx->pc = 0x261DD0u;
    {
        const bool branch_taken_0x261dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x261DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261DD0u;
            // 0x261dd4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dd0) {
            ctx->pc = 0x2620ACu;
            goto label_2620ac;
        }
    }
    ctx->pc = 0x261DD8u;
label_261dd8:
    // 0x261dd8: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x261dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_261ddc:
    // 0x261ddc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_261de0:
    if (ctx->pc == 0x261DE0u) {
        ctx->pc = 0x261DE0u;
            // 0x261de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x261DE4u;
        goto label_261de4;
    }
    ctx->pc = 0x261DDCu;
    {
        const bool branch_taken_0x261ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261DDCu;
            // 0x261de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ddc) {
            ctx->pc = 0x261DF4u;
            goto label_261df4;
        }
    }
    ctx->pc = 0x261DE4u;
label_261de4:
    // 0x261de4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_261de8:
    if (ctx->pc == 0x261DE8u) {
        ctx->pc = 0x261DE8u;
            // 0x261de8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x261DECu;
        goto label_261dec;
    }
    ctx->pc = 0x261DE4u;
    {
        const bool branch_taken_0x261de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x261DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261DE4u;
            // 0x261de8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261de4) {
            ctx->pc = 0x261E08u;
            goto label_261e08;
        }
    }
    ctx->pc = 0x261DECu;
label_261dec:
    // 0x261dec: 0x10000197  b           . + 4 + (0x197 << 2)
label_261df0:
    if (ctx->pc == 0x261DF0u) {
        ctx->pc = 0x261DF0u;
            // 0x261df0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x261DF4u;
        goto label_261df4;
    }
    ctx->pc = 0x261DECu;
    {
        const bool branch_taken_0x261dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261DECu;
            // 0x261df0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dec) {
            ctx->pc = 0x26244Cu;
            goto label_26244c;
        }
    }
    ctx->pc = 0x261DF4u;
label_261df4:
    // 0x261df4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x261df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_261df8:
    // 0x261df8: 0x108200fb  beq         $a0, $v0, . + 4 + (0xFB << 2)
label_261dfc:
    if (ctx->pc == 0x261DFCu) {
        ctx->pc = 0x261DFCu;
            // 0x261dfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x261E00u;
        goto label_261e00;
    }
    ctx->pc = 0x261DF8u;
    {
        const bool branch_taken_0x261df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x261DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261DF8u;
            // 0x261dfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261df8) {
            ctx->pc = 0x2621E8u;
            goto label_2621e8;
        }
    }
    ctx->pc = 0x261E00u;
label_261e00:
    // 0x261e00: 0x10000192  b           . + 4 + (0x192 << 2)
label_261e04:
    if (ctx->pc == 0x261E04u) {
        ctx->pc = 0x261E04u;
            // 0x261e04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x261E08u;
        goto label_261e08;
    }
    ctx->pc = 0x261E00u;
    {
        const bool branch_taken_0x261e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E00u;
            // 0x261e04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e00) {
            ctx->pc = 0x26244Cu;
            goto label_26244c;
        }
    }
    ctx->pc = 0x261E08u;
label_261e08:
    // 0x261e08: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x261e08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_261e0c:
    // 0x261e0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_261e10:
    // 0x261e10: 0xc098616  jal         func_261858
label_261e14:
    if (ctx->pc == 0x261E14u) {
        ctx->pc = 0x261E14u;
            // 0x261e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261E18u;
        goto label_261e18;
    }
    ctx->pc = 0x261E10u;
    SET_GPR_U32(ctx, 31, 0x261E18u);
    ctx->pc = 0x261E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261E10u;
            // 0x261e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261858u;
    if (runtime->hasFunction(0x261858u)) {
        auto targetFn = runtime->lookupFunction(0x261858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E18u; }
        if (ctx->pc != 0x261E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261858_0x261858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E18u; }
        if (ctx->pc != 0x261E18u) { return; }
    }
    ctx->pc = 0x261E18u;
label_261e18:
    // 0x261e18: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_261e1c:
    if (ctx->pc == 0x261E1Cu) {
        ctx->pc = 0x261E1Cu;
            // 0x261e1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x261E20u;
        goto label_261e20;
    }
    ctx->pc = 0x261E18u;
    {
        const bool branch_taken_0x261e18 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x261E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E18u;
            // 0x261e1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e18) {
            ctx->pc = 0x261E40u;
            goto label_261e40;
        }
    }
    ctx->pc = 0x261E20u;
label_261e20:
    // 0x261e20: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x261e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_261e24:
    // 0x261e24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x261e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261e28:
    // 0x261e28: 0x24a572e0  addiu       $a1, $a1, 0x72E0
    ctx->pc = 0x261e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29408));
label_261e2c:
    // 0x261e2c: 0xc08b5ac  jal         func_22D6B0
label_261e30:
    if (ctx->pc == 0x261E30u) {
        ctx->pc = 0x261E30u;
            // 0x261e30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x261E34u;
        goto label_261e34;
    }
    ctx->pc = 0x261E2Cu;
    SET_GPR_U32(ctx, 31, 0x261E34u);
    ctx->pc = 0x261E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261E2Cu;
            // 0x261e30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E34u; }
        if (ctx->pc != 0x261E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E34u; }
        if (ctx->pc != 0x261E34u) { return; }
    }
    ctx->pc = 0x261E34u;
label_261e34:
    // 0x261e34: 0x2402ffe4  addiu       $v0, $zero, -0x1C
    ctx->pc = 0x261e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_261e38:
    // 0x261e38: 0x10000184  b           . + 4 + (0x184 << 2)
label_261e3c:
    if (ctx->pc == 0x261E3Cu) {
        ctx->pc = 0x261E3Cu;
            // 0x261e3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x261E40u;
        goto label_261e40;
    }
    ctx->pc = 0x261E38u;
    {
        const bool branch_taken_0x261e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E38u;
            // 0x261e3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e38) {
            ctx->pc = 0x26244Cu;
            goto label_26244c;
        }
    }
    ctx->pc = 0x261E40u;
label_261e40:
    // 0x261e40: 0xc098552  jal         func_261548
label_261e44:
    if (ctx->pc == 0x261E44u) {
        ctx->pc = 0x261E44u;
            // 0x261e44: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x261E48u;
        goto label_261e48;
    }
    ctx->pc = 0x261E40u;
    SET_GPR_U32(ctx, 31, 0x261E48u);
    ctx->pc = 0x261E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261E40u;
            // 0x261e44: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E48u; }
        if (ctx->pc != 0x261E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E48u; }
        if (ctx->pc != 0x261E48u) { return; }
    }
    ctx->pc = 0x261E48u;
label_261e48:
    // 0x261e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261e4c:
    // 0x261e4c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_261e50:
    if (ctx->pc == 0x261E50u) {
        ctx->pc = 0x261E50u;
            // 0x261e50: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x261E54u;
        goto label_261e54;
    }
    ctx->pc = 0x261E4Cu;
    {
        const bool branch_taken_0x261e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x261E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E4Cu;
            // 0x261e50: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e4c) {
            ctx->pc = 0x261E70u;
            goto label_261e70;
        }
    }
    ctx->pc = 0x261E54u;
label_261e54:
    // 0x261e54: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x261e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_261e58:
    // 0x261e58: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x261e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_261e5c:
    // 0x261e5c: 0xc08b5ac  jal         func_22D6B0
label_261e60:
    if (ctx->pc == 0x261E60u) {
        ctx->pc = 0x261E60u;
            // 0x261e60: 0x24a57308  addiu       $a1, $a1, 0x7308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29448));
        ctx->pc = 0x261E64u;
        goto label_261e64;
    }
    ctx->pc = 0x261E5Cu;
    SET_GPR_U32(ctx, 31, 0x261E64u);
    ctx->pc = 0x261E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261E5Cu;
            // 0x261e60: 0x24a57308  addiu       $a1, $a1, 0x7308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E64u; }
        if (ctx->pc != 0x261E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E64u; }
        if (ctx->pc != 0x261E64u) { return; }
    }
    ctx->pc = 0x261E64u;
label_261e64:
    // 0x261e64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x261e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_261e68:
    // 0x261e68: 0x1000012e  b           . + 4 + (0x12E << 2)
label_261e6c:
    if (ctx->pc == 0x261E6Cu) {
        ctx->pc = 0x261E6Cu;
            // 0x261e6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x261E70u;
        goto label_261e70;
    }
    ctx->pc = 0x261E68u;
    {
        const bool branch_taken_0x261e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E68u;
            // 0x261e6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e68) {
            ctx->pc = 0x262324u;
            goto label_262324;
        }
    }
    ctx->pc = 0x261E70u;
label_261e70:
    // 0x261e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x261e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261e74:
    // 0x261e74: 0xc049cb6  jal         func_1272D8
label_261e78:
    if (ctx->pc == 0x261E78u) {
        ctx->pc = 0x261E78u;
            // 0x261e78: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x261E7Cu;
        goto label_261e7c;
    }
    ctx->pc = 0x261E74u;
    SET_GPR_U32(ctx, 31, 0x261E7Cu);
    ctx->pc = 0x261E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261E74u;
            // 0x261e78: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E7Cu; }
        if (ctx->pc != 0x261E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E7Cu; }
        if (ctx->pc != 0x261E7Cu) { return; }
    }
    ctx->pc = 0x261E7Cu;
label_261e7c:
    // 0x261e7c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x261e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_261e80:
    // 0x261e80: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x261e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_261e84:
    // 0x261e84: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x261e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_261e88:
    // 0x261e88: 0xacb20028  sw          $s2, 0x28($a1)
    ctx->pc = 0x261e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 18));
label_261e8c:
    // 0x261e8c: 0xacb20030  sw          $s2, 0x30($a1)
    ctx->pc = 0x261e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 18));
label_261e90:
    // 0x261e90: 0xacb20038  sw          $s2, 0x38($a1)
    ctx->pc = 0x261e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 18));
label_261e94:
    // 0x261e94: 0xacb2003c  sw          $s2, 0x3C($a1)
    ctx->pc = 0x261e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 18));
label_261e98:
    // 0x261e98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x261e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_261e9c:
    // 0x261e9c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x261e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_261ea0:
    // 0x261ea0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x261ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_261ea4:
    // 0x261ea4: 0xc0985fe  jal         func_2617F8
label_261ea8:
    if (ctx->pc == 0x261EA8u) {
        ctx->pc = 0x261EA8u;
            // 0x261ea8: 0xaca300c4  sw          $v1, 0xC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 3));
        ctx->pc = 0x261EACu;
        goto label_261eac;
    }
    ctx->pc = 0x261EA4u;
    SET_GPR_U32(ctx, 31, 0x261EACu);
    ctx->pc = 0x261EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261EA4u;
            // 0x261ea8: 0xaca300c4  sw          $v1, 0xC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2617F8u;
    if (runtime->hasFunction(0x2617F8u)) {
        auto targetFn = runtime->lookupFunction(0x2617F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EACu; }
        if (ctx->pc != 0x261EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002617F8_0x2617f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EACu; }
        if (ctx->pc != 0x261EACu) { return; }
    }
    ctx->pc = 0x261EACu;
label_261eac:
    // 0x261eac: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x261eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_261eb0:
    // 0x261eb0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_261eb4:
    if (ctx->pc == 0x261EB4u) {
        ctx->pc = 0x261EB4u;
            // 0x261eb4: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x261EB8u;
        goto label_261eb8;
    }
    ctx->pc = 0x261EB0u;
    {
        const bool branch_taken_0x261eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261EB0u;
            // 0x261eb4: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261eb0) {
            ctx->pc = 0x262000u;
            goto label_262000;
        }
    }
    ctx->pc = 0x261EB8u;
label_261eb8:
    // 0x261eb8: 0xc0985fe  jal         func_2617F8
label_261ebc:
    if (ctx->pc == 0x261EBCu) {
        ctx->pc = 0x261EBCu;
            // 0x261ebc: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
        ctx->pc = 0x261EC0u;
        goto label_261ec0;
    }
    ctx->pc = 0x261EB8u;
    SET_GPR_U32(ctx, 31, 0x261EC0u);
    ctx->pc = 0x261EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261EB8u;
            // 0x261ebc: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2617F8u;
    if (runtime->hasFunction(0x2617F8u)) {
        auto targetFn = runtime->lookupFunction(0x2617F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EC0u; }
        if (ctx->pc != 0x261EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002617F8_0x2617f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EC0u; }
        if (ctx->pc != 0x261EC0u) { return; }
    }
    ctx->pc = 0x261EC0u;
label_261ec0:
    // 0x261ec0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x261ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_261ec4:
    // 0x261ec4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_261ec8:
    if (ctx->pc == 0x261EC8u) {
        ctx->pc = 0x261EC8u;
            // 0x261ec8: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x261ECCu;
        goto label_261ecc;
    }
    ctx->pc = 0x261EC4u;
    {
        const bool branch_taken_0x261ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261EC4u;
            // 0x261ec8: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ec4) {
            ctx->pc = 0x262000u;
            goto label_262000;
        }
    }
    ctx->pc = 0x261ECCu;
label_261ecc:
    // 0x261ecc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x261eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_261ed0:
    // 0x261ed0: 0x2625020c  addiu       $a1, $s1, 0x20C
    ctx->pc = 0x261ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 524));
label_261ed4:
    // 0x261ed4: 0xc04a966  jal         func_12A598
label_261ed8:
    if (ctx->pc == 0x261ED8u) {
        ctx->pc = 0x261ED8u;
            // 0x261ed8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x261EDCu;
        goto label_261edc;
    }
    ctx->pc = 0x261ED4u;
    SET_GPR_U32(ctx, 31, 0x261EDCu);
    ctx->pc = 0x261ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261ED4u;
            // 0x261ed8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EDCu; }
        if (ctx->pc != 0x261EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EDCu; }
        if (ctx->pc != 0x261EDCu) { return; }
    }
    ctx->pc = 0x261EDCu;
label_261edc:
    // 0x261edc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x261edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_261ee0:
    // 0x261ee0: 0xc04a83e  jal         func_12A0F8
label_261ee4:
    if (ctx->pc == 0x261EE4u) {
        ctx->pc = 0x261EE4u;
            // 0x261ee4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->pc = 0x261EE8u;
        goto label_261ee8;
    }
    ctx->pc = 0x261EE0u;
    SET_GPR_U32(ctx, 31, 0x261EE8u);
    ctx->pc = 0x261EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261EE0u;
            // 0x261ee4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EE8u; }
        if (ctx->pc != 0x261EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EE8u; }
        if (ctx->pc != 0x261EE8u) { return; }
    }
    ctx->pc = 0x261EE8u;
label_261ee8:
    // 0x261ee8: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x261ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_261eec:
    // 0x261eec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_261ef0:
    if (ctx->pc == 0x261EF0u) {
        ctx->pc = 0x261EF0u;
            // 0x261ef0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x261EF4u;
        goto label_261ef4;
    }
    ctx->pc = 0x261EECu;
    {
        const bool branch_taken_0x261eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261EECu;
            // 0x261ef0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261eec) {
            ctx->pc = 0x261F18u;
            goto label_261f18;
        }
    }
    ctx->pc = 0x261EF4u;
label_261ef4:
    // 0x261ef4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x261ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_261ef8:
    // 0x261ef8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x261ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_261efc:
    // 0x261efc: 0x24a57348  addiu       $a1, $a1, 0x7348
    ctx->pc = 0x261efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29512));
label_261f00:
    // 0x261f00: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x261f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_261f04:
    // 0x261f04: 0xc08b5ac  jal         func_22D6B0
label_261f08:
    if (ctx->pc == 0x261F08u) {
        ctx->pc = 0x261F08u;
            // 0x261f08: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->pc = 0x261F0Cu;
        goto label_261f0c;
    }
    ctx->pc = 0x261F04u;
    SET_GPR_U32(ctx, 31, 0x261F0Cu);
    ctx->pc = 0x261F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F04u;
            // 0x261f08: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F0Cu; }
        if (ctx->pc != 0x261F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F0Cu; }
        if (ctx->pc != 0x261F0Cu) { return; }
    }
    ctx->pc = 0x261F0Cu;
label_261f0c:
    // 0x261f0c: 0x2402ffe3  addiu       $v0, $zero, -0x1D
    ctx->pc = 0x261f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
label_261f10:
    // 0x261f10: 0x10000104  b           . + 4 + (0x104 << 2)
label_261f14:
    if (ctx->pc == 0x261F14u) {
        ctx->pc = 0x261F14u;
            // 0x261f14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x261F18u;
        goto label_261f18;
    }
    ctx->pc = 0x261F10u;
    {
        const bool branch_taken_0x261f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F10u;
            // 0x261f14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f10) {
            ctx->pc = 0x262324u;
            goto label_262324;
        }
    }
    ctx->pc = 0x261F18u;
label_261f18:
    // 0x261f18: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x261f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_261f1c:
    // 0x261f1c: 0x24a57370  addiu       $a1, $a1, 0x7370
    ctx->pc = 0x261f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29552));
label_261f20:
    // 0x261f20: 0xc04a6da  jal         func_129B68
label_261f24:
    if (ctx->pc == 0x261F24u) {
        ctx->pc = 0x261F24u;
            // 0x261f24: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->pc = 0x261F28u;
        goto label_261f28;
    }
    ctx->pc = 0x261F20u;
    SET_GPR_U32(ctx, 31, 0x261F28u);
    ctx->pc = 0x261F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F20u;
            // 0x261f24: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (runtime->hasFunction(0x129B68u)) {
        auto targetFn = runtime->lookupFunction(0x129B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F28u; }
        if (ctx->pc != 0x261F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129B68_0x129b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F28u; }
        if (ctx->pc != 0x261F28u) { return; }
    }
    ctx->pc = 0x261F28u;
label_261f28:
    // 0x261f28: 0xc09868c  jal         func_261A30
label_261f2c:
    if (ctx->pc == 0x261F2Cu) {
        ctx->pc = 0x261F2Cu;
            // 0x261f2c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x261F30u;
        goto label_261f30;
    }
    ctx->pc = 0x261F28u;
    SET_GPR_U32(ctx, 31, 0x261F30u);
    ctx->pc = 0x261F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F28u;
            // 0x261f2c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261A30u;
    if (runtime->hasFunction(0x261A30u)) {
        auto targetFn = runtime->lookupFunction(0x261A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F30u; }
        if (ctx->pc != 0x261F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261A30_0x261a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F30u; }
        if (ctx->pc != 0x261F30u) { return; }
    }
    ctx->pc = 0x261F30u;
label_261f30:
    // 0x261f30: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_261f34:
    if (ctx->pc == 0x261F34u) {
        ctx->pc = 0x261F34u;
            // 0x261f34: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x261F38u;
        goto label_261f38;
    }
    ctx->pc = 0x261F30u;
    {
        const bool branch_taken_0x261f30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x261F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F30u;
            // 0x261f34: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f30) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x261F38u;
label_261f38:
    // 0x261f38: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x261f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_261f3c:
    // 0x261f3c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x261f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_261f40:
    // 0x261f40: 0xc08b5ac  jal         func_22D6B0
label_261f44:
    if (ctx->pc == 0x261F44u) {
        ctx->pc = 0x261F44u;
            // 0x261f44: 0x24a57378  addiu       $a1, $a1, 0x7378 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29560));
        ctx->pc = 0x261F48u;
        goto label_261f48;
    }
    ctx->pc = 0x261F40u;
    SET_GPR_U32(ctx, 31, 0x261F48u);
    ctx->pc = 0x261F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F40u;
            // 0x261f44: 0x24a57378  addiu       $a1, $a1, 0x7378 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F48u; }
        if (ctx->pc != 0x261F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F48u; }
        if (ctx->pc != 0x261F48u) { return; }
    }
    ctx->pc = 0x261F48u;
label_261f48:
    // 0x261f48: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_261f4c:
    if (ctx->pc == 0x261F4Cu) {
        ctx->pc = 0x261F4Cu;
            // 0x261f4c: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->pc = 0x261F50u;
        goto label_261f50;
    }
    ctx->pc = 0x261F48u;
    {
        const bool branch_taken_0x261f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F48u;
            // 0x261f4c: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f48) {
            ctx->pc = 0x262328u;
            goto label_262328;
        }
    }
    ctx->pc = 0x261F50u;
label_261f50:
    // 0x261f50: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x261f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_261f54:
    // 0x261f54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x261f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_261f58:
    // 0x261f58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261f5c:
    // 0x261f5c: 0xc098736  jal         func_261CD8
label_261f60:
    if (ctx->pc == 0x261F60u) {
        ctx->pc = 0x261F60u;
            // 0x261f60: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->pc = 0x261F64u;
        goto label_261f64;
    }
    ctx->pc = 0x261F5Cu;
    SET_GPR_U32(ctx, 31, 0x261F64u);
    ctx->pc = 0x261F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F5Cu;
            // 0x261f60: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261CD8u;
    if (runtime->hasFunction(0x261CD8u)) {
        auto targetFn = runtime->lookupFunction(0x261CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F64u; }
        if (ctx->pc != 0x261F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261CD8_0x261cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F64u; }
        if (ctx->pc != 0x261F64u) { return; }
    }
    ctx->pc = 0x261F64u;
label_261f64:
    // 0x261f64: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_261f68:
    if (ctx->pc == 0x261F68u) {
        ctx->pc = 0x261F68u;
            // 0x261f68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x261F6Cu;
        goto label_261f6c;
    }
    ctx->pc = 0x261F64u;
    {
        const bool branch_taken_0x261f64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x261F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F64u;
            // 0x261f68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f64) {
            ctx->pc = 0x261F84u;
            goto label_261f84;
        }
    }
    ctx->pc = 0x261F6Cu;
label_261f6c:
    // 0x261f6c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x261f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_261f70:
    // 0x261f70: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x261f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_261f74:
    // 0x261f74: 0xc08b5ac  jal         func_22D6B0
label_261f78:
    if (ctx->pc == 0x261F78u) {
        ctx->pc = 0x261F78u;
            // 0x261f78: 0x24a573a0  addiu       $a1, $a1, 0x73A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29600));
        ctx->pc = 0x261F7Cu;
        goto label_261f7c;
    }
    ctx->pc = 0x261F74u;
    SET_GPR_U32(ctx, 31, 0x261F7Cu);
    ctx->pc = 0x261F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F74u;
            // 0x261f78: 0x24a573a0  addiu       $a1, $a1, 0x73A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F7Cu; }
        if (ctx->pc != 0x261F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F7Cu; }
        if (ctx->pc != 0x261F7Cu) { return; }
    }
    ctx->pc = 0x261F7Cu;
label_261f7c:
    // 0x261f7c: 0x100000ea  b           . + 4 + (0xEA << 2)
label_261f80:
    if (ctx->pc == 0x261F80u) {
        ctx->pc = 0x261F80u;
            // 0x261f80: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->pc = 0x261F84u;
        goto label_261f84;
    }
    ctx->pc = 0x261F7Cu;
    {
        const bool branch_taken_0x261f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F7Cu;
            // 0x261f80: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f7c) {
            ctx->pc = 0x262328u;
            goto label_262328;
        }
    }
    ctx->pc = 0x261F84u;
label_261f84:
    // 0x261f84: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x261f84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_261f88:
    // 0x261f88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x261f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261f8c:
    // 0x261f8c: 0x24c673c0  addiu       $a2, $a2, 0x73C0
    ctx->pc = 0x261f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29632));
label_261f90:
    // 0x261f90: 0xc0985b8  jal         func_2616E0
label_261f94:
    if (ctx->pc == 0x261F94u) {
        ctx->pc = 0x261F94u;
            // 0x261f94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x261F98u;
        goto label_261f98;
    }
    ctx->pc = 0x261F90u;
    SET_GPR_U32(ctx, 31, 0x261F98u);
    ctx->pc = 0x261F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F90u;
            // 0x261f94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (runtime->hasFunction(0x2616E0u)) {
        auto targetFn = runtime->lookupFunction(0x2616E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F98u; }
        if (ctx->pc != 0x261F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002616E0_0x2616e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F98u; }
        if (ctx->pc != 0x261F98u) { return; }
    }
    ctx->pc = 0x261F98u;
label_261f98:
    // 0x261f98: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x261f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_261f9c:
    // 0x261f9c: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_261fa0:
    if (ctx->pc == 0x261FA0u) {
        ctx->pc = 0x261FA0u;
            // 0x261fa0: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x261FA4u;
        goto label_261fa4;
    }
    ctx->pc = 0x261F9Cu;
    {
        const bool branch_taken_0x261f9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x261FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F9Cu;
            // 0x261fa0: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f9c) {
            ctx->pc = 0x261FC4u;
            goto label_261fc4;
        }
    }
    ctx->pc = 0x261FA4u;
label_261fa4:
    // 0x261fa4: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x261fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_261fa8:
    // 0x261fa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x261fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261fac:
    // 0x261fac: 0x24c673d8  addiu       $a2, $a2, 0x73D8
    ctx->pc = 0x261facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29656));
label_261fb0:
    // 0x261fb0: 0xc0985b8  jal         func_2616E0
label_261fb4:
    if (ctx->pc == 0x261FB4u) {
        ctx->pc = 0x261FB4u;
            // 0x261fb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x261FB8u;
        goto label_261fb8;
    }
    ctx->pc = 0x261FB0u;
    SET_GPR_U32(ctx, 31, 0x261FB8u);
    ctx->pc = 0x261FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261FB0u;
            // 0x261fb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (runtime->hasFunction(0x2616E0u)) {
        auto targetFn = runtime->lookupFunction(0x2616E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FB8u; }
        if (ctx->pc != 0x261FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002616E0_0x2616e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FB8u; }
        if (ctx->pc != 0x261FB8u) { return; }
    }
    ctx->pc = 0x261FB8u;
label_261fb8:
    // 0x261fb8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x261fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_261fbc:
    // 0x261fbc: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_261fc0:
    if (ctx->pc == 0x261FC0u) {
        ctx->pc = 0x261FC0u;
            // 0x261fc0: 0xac62003c  sw          $v0, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x261FC4u;
        goto label_261fc4;
    }
    ctx->pc = 0x261FBCu;
    {
        const bool branch_taken_0x261fbc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x261FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261FBCu;
            // 0x261fc0: 0xac62003c  sw          $v0, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fbc) {
            ctx->pc = 0x261FE0u;
            goto label_261fe0;
        }
    }
    ctx->pc = 0x261FC4u;
label_261fc4:
    // 0x261fc4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x261fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_261fc8:
    // 0x261fc8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x261fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_261fcc:
    // 0x261fcc: 0xc08b5ac  jal         func_22D6B0
label_261fd0:
    if (ctx->pc == 0x261FD0u) {
        ctx->pc = 0x261FD0u;
            // 0x261fd0: 0x24a573f0  addiu       $a1, $a1, 0x73F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29680));
        ctx->pc = 0x261FD4u;
        goto label_261fd4;
    }
    ctx->pc = 0x261FCCu;
    SET_GPR_U32(ctx, 31, 0x261FD4u);
    ctx->pc = 0x261FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261FCCu;
            // 0x261fd0: 0x24a573f0  addiu       $a1, $a1, 0x73F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FD4u; }
        if (ctx->pc != 0x261FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FD4u; }
        if (ctx->pc != 0x261FD4u) { return; }
    }
    ctx->pc = 0x261FD4u;
label_261fd4:
    // 0x261fd4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x261fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_261fd8:
    // 0x261fd8: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_261fdc:
    if (ctx->pc == 0x261FDCu) {
        ctx->pc = 0x261FDCu;
            // 0x261fdc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x261FE0u;
        goto label_261fe0;
    }
    ctx->pc = 0x261FD8u;
    {
        const bool branch_taken_0x261fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261FD8u;
            // 0x261fdc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fd8) {
            ctx->pc = 0x262324u;
            goto label_262324;
        }
    }
    ctx->pc = 0x261FE0u;
label_261fe0:
    // 0x261fe0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x261fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_261fe4:
    // 0x261fe4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x261fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_261fe8:
    // 0x261fe8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x261fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_261fec:
    // 0x261fec: 0xc098590  jal         func_261640
label_261ff0:
    if (ctx->pc == 0x261FF0u) {
        ctx->pc = 0x261FF0u;
            // 0x261ff0: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x261FF4u;
        goto label_261ff4;
    }
    ctx->pc = 0x261FECu;
    SET_GPR_U32(ctx, 31, 0x261FF4u);
    ctx->pc = 0x261FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261FECu;
            // 0x261ff0: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261640u;
    if (runtime->hasFunction(0x261640u)) {
        auto targetFn = runtime->lookupFunction(0x261640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FF4u; }
        if (ctx->pc != 0x261FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261640_0x261640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FF4u; }
        if (ctx->pc != 0x261FF4u) { return; }
    }
    ctx->pc = 0x261FF4u;
label_261ff4:
    // 0x261ff4: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x261ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_261ff8:
    // 0x261ff8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_261ffc:
    if (ctx->pc == 0x261FFCu) {
        ctx->pc = 0x261FFCu;
            // 0x261ffc: 0xad020034  sw          $v0, 0x34($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x262000u;
        goto label_262000;
    }
    ctx->pc = 0x261FF8u;
    {
        const bool branch_taken_0x261ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261FF8u;
            // 0x261ffc: 0xad020034  sw          $v0, 0x34($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ff8) {
            ctx->pc = 0x262018u;
            goto label_262018;
        }
    }
    ctx->pc = 0x262000u;
label_262000:
    // 0x262000: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x262000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_262004:
    // 0x262004: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x262004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_262008:
    // 0x262008: 0xc08b5ac  jal         func_22D6B0
label_26200c:
    if (ctx->pc == 0x26200Cu) {
        ctx->pc = 0x26200Cu;
            // 0x26200c: 0x24a57308  addiu       $a1, $a1, 0x7308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29448));
        ctx->pc = 0x262010u;
        goto label_262010;
    }
    ctx->pc = 0x262008u;
    SET_GPR_U32(ctx, 31, 0x262010u);
    ctx->pc = 0x26200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262008u;
            // 0x26200c: 0x24a57308  addiu       $a1, $a1, 0x7308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262010u; }
        if (ctx->pc != 0x262010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262010u; }
        if (ctx->pc != 0x262010u) { return; }
    }
    ctx->pc = 0x262010u;
label_262010:
    // 0x262010: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_262014:
    if (ctx->pc == 0x262014u) {
        ctx->pc = 0x262014u;
            // 0x262014: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x262018u;
        goto label_262018;
    }
    ctx->pc = 0x262010u;
    {
        const bool branch_taken_0x262010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262010u;
            // 0x262014: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262010) {
            ctx->pc = 0x262324u;
            goto label_262324;
        }
    }
    ctx->pc = 0x262018u;
label_262018:
    // 0x262018: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x262018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_26201c:
    // 0x26201c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x26201cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
label_262020:
    // 0x262020: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x262020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_262024:
    // 0x262024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x262024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262028:
    // 0x262028: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x262028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_26202c:
    // 0x26202c: 0xc0985d0  jal         func_261740
label_262030:
    if (ctx->pc == 0x262030u) {
        ctx->pc = 0x262030u;
            // 0x262030: 0x25297430  addiu       $t1, $t1, 0x7430 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29744));
        ctx->pc = 0x262034u;
        goto label_262034;
    }
    ctx->pc = 0x26202Cu;
    SET_GPR_U32(ctx, 31, 0x262034u);
    ctx->pc = 0x262030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26202Cu;
            // 0x262030: 0x25297430  addiu       $t1, $t1, 0x7430 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (runtime->hasFunction(0x261740u)) {
        auto targetFn = runtime->lookupFunction(0x261740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262034u; }
        if (ctx->pc != 0x262034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261740_0x261740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262034u; }
        if (ctx->pc != 0x262034u) { return; }
    }
    ctx->pc = 0x262034u;
label_262034:
    // 0x262034: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x262034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262038:
    // 0x262038: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_26203c:
    if (ctx->pc == 0x26203Cu) {
        ctx->pc = 0x26203Cu;
            // 0x26203c: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x262040u;
        goto label_262040;
    }
    ctx->pc = 0x262038u;
    {
        const bool branch_taken_0x262038 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262038u;
            // 0x26203c: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262038) {
            ctx->pc = 0x26205Cu;
            goto label_26205c;
        }
    }
    ctx->pc = 0x262040u;
label_262040:
    // 0x262040: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x262040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_262044:
    // 0x262044: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x262044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_262048:
    // 0x262048: 0xc08b5ac  jal         func_22D6B0
label_26204c:
    if (ctx->pc == 0x26204Cu) {
        ctx->pc = 0x26204Cu;
            // 0x26204c: 0x24a57450  addiu       $a1, $a1, 0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29776));
        ctx->pc = 0x262050u;
        goto label_262050;
    }
    ctx->pc = 0x262048u;
    SET_GPR_U32(ctx, 31, 0x262050u);
    ctx->pc = 0x26204Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262048u;
            // 0x26204c: 0x24a57450  addiu       $a1, $a1, 0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262050u; }
        if (ctx->pc != 0x262050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262050u; }
        if (ctx->pc != 0x262050u) { return; }
    }
    ctx->pc = 0x262050u;
label_262050:
    // 0x262050: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x262050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_262054:
    // 0x262054: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_262058:
    if (ctx->pc == 0x262058u) {
        ctx->pc = 0x262058u;
            // 0x262058: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x26205Cu;
        goto label_26205c;
    }
    ctx->pc = 0x262054u;
    {
        const bool branch_taken_0x262054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262054u;
            // 0x262058: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262054) {
            ctx->pc = 0x262324u;
            goto label_262324;
        }
    }
    ctx->pc = 0x26205Cu;
label_26205c:
    // 0x26205c: 0xc098760  jal         func_261D80
label_262060:
    if (ctx->pc == 0x262060u) {
        ctx->pc = 0x262060u;
            // 0x262060: 0x8c640038  lw          $a0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->pc = 0x262064u;
        goto label_262064;
    }
    ctx->pc = 0x26205Cu;
    SET_GPR_U32(ctx, 31, 0x262064u);
    ctx->pc = 0x262060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26205Cu;
            // 0x262060: 0x8c640038  lw          $a0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261D80u;
    goto label_261d80;
    ctx->pc = 0x262064u;
label_262064:
    // 0x262064: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x262064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262068:
    // 0x262068: 0xac920038  sw          $s2, 0x38($a0)
    ctx->pc = 0x262068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 18));
label_26206c:
    // 0x26206c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x26206cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_262070:
    // 0x262070: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x262070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_262074:
    // 0x262074: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x262074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_262078:
    // 0x262078: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x262078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_26207c:
    // 0x26207c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x26207cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_262080:
    // 0x262080: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x262080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_262084:
    // 0x262084: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x262084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_262088:
    // 0x262088: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x262088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_26208c:
    // 0x26208c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x26208cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_262090:
    // 0x262090: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x262090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_262094:
    // 0x262094: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x262094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_262098:
    // 0x262098: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x262098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_26209c:
    // 0x26209c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x26209cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2620a0:
    // 0x2620a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2620a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2620a4:
    // 0x2620a4: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_2620a8:
    if (ctx->pc == 0x2620A8u) {
        ctx->pc = 0x2620A8u;
            // 0x2620a8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2620ACu;
        goto label_2620ac;
    }
    ctx->pc = 0x2620A4u;
    {
        const bool branch_taken_0x2620a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2620A4u;
            // 0x2620a8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620a4) {
            ctx->pc = 0x26244Cu;
            goto label_26244c;
        }
    }
    ctx->pc = 0x2620ACu;
label_2620ac:
    // 0x2620ac: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x2620acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2620b0:
    // 0x2620b0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2620b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2620b4:
    // 0x2620b4: 0xc098728  jal         func_261CA0
label_2620b8:
    if (ctx->pc == 0x2620B8u) {
        ctx->pc = 0x2620B8u;
            // 0x2620b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2620BCu;
        goto label_2620bc;
    }
    ctx->pc = 0x2620B4u;
    SET_GPR_U32(ctx, 31, 0x2620BCu);
    ctx->pc = 0x2620B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2620B4u;
            // 0x2620b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261CA0u;
    if (runtime->hasFunction(0x261CA0u)) {
        auto targetFn = runtime->lookupFunction(0x261CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2620BCu; }
        if (ctx->pc != 0x2620BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261CA0_0x261ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2620BCu; }
        if (ctx->pc != 0x2620BCu) { return; }
    }
    ctx->pc = 0x2620BCu;
label_2620bc:
    // 0x2620bc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_2620c0:
    if (ctx->pc == 0x2620C0u) {
        ctx->pc = 0x2620C0u;
            // 0x2620c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2620C4u;
        goto label_2620c4;
    }
    ctx->pc = 0x2620BCu;
    {
        const bool branch_taken_0x2620bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2620C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2620BCu;
            // 0x2620c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620bc) {
            ctx->pc = 0x2620D0u;
            goto label_2620d0;
        }
    }
    ctx->pc = 0x2620C4u;
label_2620c4:
    // 0x2620c4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2620c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2620c8:
    // 0x2620c8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2620cc:
    if (ctx->pc == 0x2620CCu) {
        ctx->pc = 0x2620CCu;
            // 0x2620cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2620D0u;
        goto label_2620d0;
    }
    ctx->pc = 0x2620C8u;
    {
        const bool branch_taken_0x2620c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2620C8u;
            // 0x2620cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620c8) {
            ctx->pc = 0x262208u;
            goto label_262208;
        }
    }
    ctx->pc = 0x2620D0u;
label_2620d0:
    // 0x2620d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2620d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2620d4:
    // 0x2620d4: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2620d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_2620d8:
    // 0x2620d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2620d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2620dc:
    // 0x2620dc: 0x24c673c0  addiu       $a2, $a2, 0x73C0
    ctx->pc = 0x2620dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29632));
label_2620e0:
    // 0x2620e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2620e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2620e4:
    // 0x2620e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2620e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2620e8:
    // 0x2620e8: 0xc0985b8  jal         func_2616E0
label_2620ec:
    if (ctx->pc == 0x2620ECu) {
        ctx->pc = 0x2620ECu;
            // 0x2620ec: 0xac6200b4  sw          $v0, 0xB4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x2620F0u;
        goto label_2620f0;
    }
    ctx->pc = 0x2620E8u;
    SET_GPR_U32(ctx, 31, 0x2620F0u);
    ctx->pc = 0x2620ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2620E8u;
            // 0x2620ec: 0xac6200b4  sw          $v0, 0xB4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (runtime->hasFunction(0x2616E0u)) {
        auto targetFn = runtime->lookupFunction(0x2616E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2620F0u; }
        if (ctx->pc != 0x2620F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002616E0_0x2616e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2620F0u; }
        if (ctx->pc != 0x2620F0u) { return; }
    }
    ctx->pc = 0x2620F0u;
label_2620f0:
    // 0x2620f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2620f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2620f4:
    // 0x2620f4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_2620f8:
    if (ctx->pc == 0x2620F8u) {
        ctx->pc = 0x2620F8u;
            // 0x2620f8: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x2620FCu;
        goto label_2620fc;
    }
    ctx->pc = 0x2620F4u;
    {
        const bool branch_taken_0x2620f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2620F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2620F4u;
            // 0x2620f8: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620f4) {
            ctx->pc = 0x262118u;
            goto label_262118;
        }
    }
    ctx->pc = 0x2620FCu;
label_2620fc:
    // 0x2620fc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2620fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_262100:
    // 0x262100: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x262100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_262104:
    // 0x262104: 0xc08b5ac  jal         func_22D6B0
label_262108:
    if (ctx->pc == 0x262108u) {
        ctx->pc = 0x262108u;
            // 0x262108: 0x24a574b0  addiu       $a1, $a1, 0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29872));
        ctx->pc = 0x26210Cu;
        goto label_26210c;
    }
    ctx->pc = 0x262104u;
    SET_GPR_U32(ctx, 31, 0x26210Cu);
    ctx->pc = 0x262108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262104u;
            // 0x262108: 0x24a574b0  addiu       $a1, $a1, 0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26210Cu; }
        if (ctx->pc != 0x26210Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26210Cu; }
        if (ctx->pc != 0x26210Cu) { return; }
    }
    ctx->pc = 0x26210Cu;
label_26210c:
    // 0x26210c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x26210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_262110:
    // 0x262110: 0x10000064  b           . + 4 + (0x64 << 2)
label_262114:
    if (ctx->pc == 0x262114u) {
        ctx->pc = 0x262114u;
            // 0x262114: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x262118u;
        goto label_262118;
    }
    ctx->pc = 0x262110u;
    {
        const bool branch_taken_0x262110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262110u;
            // 0x262114: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262110) {
            ctx->pc = 0x2622A4u;
            goto label_2622a4;
        }
    }
    ctx->pc = 0x262118u;
label_262118:
    // 0x262118: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x262118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26211c:
    // 0x26211c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x26211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_262120:
    // 0x262120: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x262120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_262124:
    // 0x262124: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x262124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_262128:
    // 0x262128: 0xc098590  jal         func_261640
label_26212c:
    if (ctx->pc == 0x26212Cu) {
        ctx->pc = 0x26212Cu;
            // 0x26212c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x262130u;
        goto label_262130;
    }
    ctx->pc = 0x262128u;
    SET_GPR_U32(ctx, 31, 0x262130u);
    ctx->pc = 0x26212Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262128u;
            // 0x26212c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261640u;
    if (runtime->hasFunction(0x261640u)) {
        auto targetFn = runtime->lookupFunction(0x261640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262130u; }
        if (ctx->pc != 0x262130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261640_0x261640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262130u; }
        if (ctx->pc != 0x262130u) { return; }
    }
    ctx->pc = 0x262130u;
label_262130:
    // 0x262130: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x262130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262134:
    // 0x262134: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_262138:
    if (ctx->pc == 0x262138u) {
        ctx->pc = 0x262138u;
            // 0x262138: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x26213Cu;
        goto label_26213c;
    }
    ctx->pc = 0x262134u;
    {
        const bool branch_taken_0x262134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262134u;
            // 0x262138: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262134) {
            ctx->pc = 0x26215Cu;
            goto label_26215c;
        }
    }
    ctx->pc = 0x26213Cu;
label_26213c:
    // 0x26213c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x26213cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_262140:
    // 0x262140: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x262140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262144:
    // 0x262144: 0x24a574f0  addiu       $a1, $a1, 0x74F0
    ctx->pc = 0x262144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29936));
label_262148:
    // 0x262148: 0xc08b5ac  jal         func_22D6B0
label_26214c:
    if (ctx->pc == 0x26214Cu) {
        ctx->pc = 0x26214Cu;
            // 0x26214c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x262150u;
        goto label_262150;
    }
    ctx->pc = 0x262148u;
    SET_GPR_U32(ctx, 31, 0x262150u);
    ctx->pc = 0x26214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262148u;
            // 0x26214c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262150u; }
        if (ctx->pc != 0x262150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262150u; }
        if (ctx->pc != 0x262150u) { return; }
    }
    ctx->pc = 0x262150u;
label_262150:
    // 0x262150: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x262150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_262154:
    // 0x262154: 0x10000053  b           . + 4 + (0x53 << 2)
label_262158:
    if (ctx->pc == 0x262158u) {
        ctx->pc = 0x262158u;
            // 0x262158: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x26215Cu;
        goto label_26215c;
    }
    ctx->pc = 0x262154u;
    {
        const bool branch_taken_0x262154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262154u;
            // 0x262158: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262154) {
            ctx->pc = 0x2622A4u;
            goto label_2622a4;
        }
    }
    ctx->pc = 0x26215Cu;
label_26215c:
    // 0x26215c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x26215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262160:
    // 0x262160: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x262160u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
label_262164:
    // 0x262164: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x262164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_262168:
    // 0x262168: 0x25297520  addiu       $t1, $t1, 0x7520
    ctx->pc = 0x262168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29984));
label_26216c:
    // 0x26216c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x26216cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_262170:
    // 0x262170: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x262170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262174:
    // 0x262174: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x262174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_262178:
    // 0x262178: 0xc0985d0  jal         func_261740
label_26217c:
    if (ctx->pc == 0x26217Cu) {
        ctx->pc = 0x26217Cu;
            // 0x26217c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x262180u;
        goto label_262180;
    }
    ctx->pc = 0x262178u;
    SET_GPR_U32(ctx, 31, 0x262180u);
    ctx->pc = 0x26217Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262178u;
            // 0x26217c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (runtime->hasFunction(0x261740u)) {
        auto targetFn = runtime->lookupFunction(0x261740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262180u; }
        if (ctx->pc != 0x262180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261740_0x261740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262180u; }
        if (ctx->pc != 0x262180u) { return; }
    }
    ctx->pc = 0x262180u;
label_262180:
    // 0x262180: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x262180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262184:
    // 0x262184: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_262188:
    if (ctx->pc == 0x262188u) {
        ctx->pc = 0x262188u;
            // 0x262188: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x26218Cu;
        goto label_26218c;
    }
    ctx->pc = 0x262184u;
    {
        const bool branch_taken_0x262184 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x262188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262184u;
            // 0x262188: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262184) {
            ctx->pc = 0x2621A8u;
            goto label_2621a8;
        }
    }
    ctx->pc = 0x26218Cu;
label_26218c:
    // 0x26218c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x26218cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_262190:
    // 0x262190: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x262190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_262194:
    // 0x262194: 0xc08b5ac  jal         func_22D6B0
label_262198:
    if (ctx->pc == 0x262198u) {
        ctx->pc = 0x262198u;
            // 0x262198: 0x24a57540  addiu       $a1, $a1, 0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30016));
        ctx->pc = 0x26219Cu;
        goto label_26219c;
    }
    ctx->pc = 0x262194u;
    SET_GPR_U32(ctx, 31, 0x26219Cu);
    ctx->pc = 0x262198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262194u;
            // 0x262198: 0x24a57540  addiu       $a1, $a1, 0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26219Cu; }
        if (ctx->pc != 0x26219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26219Cu; }
        if (ctx->pc != 0x26219Cu) { return; }
    }
    ctx->pc = 0x26219Cu;
label_26219c:
    // 0x26219c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x26219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2621a0:
    // 0x2621a0: 0x10000040  b           . + 4 + (0x40 << 2)
label_2621a4:
    if (ctx->pc == 0x2621A4u) {
        ctx->pc = 0x2621A4u;
            // 0x2621a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2621A8u;
        goto label_2621a8;
    }
    ctx->pc = 0x2621A0u;
    {
        const bool branch_taken_0x2621a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2621A0u;
            // 0x2621a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621a0) {
            ctx->pc = 0x2622A4u;
            goto label_2622a4;
        }
    }
    ctx->pc = 0x2621A8u;
label_2621a8:
    // 0x2621a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2621a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2621ac:
    // 0x2621ac: 0xc098760  jal         func_261D80
label_2621b0:
    if (ctx->pc == 0x2621B0u) {
        ctx->pc = 0x2621B0u;
            // 0x2621b0: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->pc = 0x2621B4u;
        goto label_2621b4;
    }
    ctx->pc = 0x2621ACu;
    SET_GPR_U32(ctx, 31, 0x2621B4u);
    ctx->pc = 0x2621B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2621ACu;
            // 0x2621b0: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261D80u;
    goto label_261d80;
    ctx->pc = 0x2621B4u;
label_2621b4:
    // 0x2621b4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2621b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2621b8:
    // 0x2621b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2621b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2621bc:
    // 0x2621bc: 0x8c421a08  lw          $v0, 0x1A08($v0)
    ctx->pc = 0x2621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
label_2621c0:
    // 0x2621c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2621c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2621c4:
    // 0x2621c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2621c8:
    if (ctx->pc == 0x2621C8u) {
        ctx->pc = 0x2621C8u;
            // 0x2621c8: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x2621CCu;
        goto label_2621cc;
    }
    ctx->pc = 0x2621C4u;
    {
        const bool branch_taken_0x2621c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2621C4u;
            // 0x2621c8: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621c4) {
            ctx->pc = 0x2621D4u;
            goto label_2621d4;
        }
    }
    ctx->pc = 0x2621CCu;
label_2621cc:
    // 0x2621cc: 0x40f809  jalr        $v0
label_2621d0:
    if (ctx->pc == 0x2621D0u) {
        ctx->pc = 0x2621D4u;
        goto label_2621d4;
    }
    ctx->pc = 0x2621CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2621D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2621D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2621D4u; }
            if (ctx->pc != 0x2621D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2621D4u;
label_2621d4:
    // 0x2621d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2621d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2621d8:
    // 0x2621d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2621d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2621dc:
    // 0x2621dc: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x2621dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_2621e0:
    // 0x2621e0: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2621e4:
    if (ctx->pc == 0x2621E4u) {
        ctx->pc = 0x2621E4u;
            // 0x2621e4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2621E8u;
        goto label_2621e8;
    }
    ctx->pc = 0x2621E0u;
    {
        const bool branch_taken_0x2621e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2621E0u;
            // 0x2621e4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621e0) {
            ctx->pc = 0x26244Cu;
            goto label_26244c;
        }
    }
    ctx->pc = 0x2621E8u;
label_2621e8:
    // 0x2621e8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2621e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2621ec:
    // 0x2621ec: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2621ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2621f0:
    // 0x2621f0: 0xc098728  jal         func_261CA0
label_2621f4:
    if (ctx->pc == 0x2621F4u) {
        ctx->pc = 0x2621F4u;
            // 0x2621f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2621F8u;
        goto label_2621f8;
    }
    ctx->pc = 0x2621F0u;
    SET_GPR_U32(ctx, 31, 0x2621F8u);
    ctx->pc = 0x2621F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2621F0u;
            // 0x2621f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261CA0u;
    if (runtime->hasFunction(0x261CA0u)) {
        auto targetFn = runtime->lookupFunction(0x261CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2621F8u; }
        if (ctx->pc != 0x2621F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261CA0_0x261ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2621F8u; }
        if (ctx->pc != 0x2621F8u) { return; }
    }
    ctx->pc = 0x2621F8u;
label_2621f8:
    // 0x2621f8: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_2621fc:
    if (ctx->pc == 0x2621FCu) {
        ctx->pc = 0x2621FCu;
            // 0x2621fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x262200u;
        goto label_262200;
    }
    ctx->pc = 0x2621F8u;
    {
        const bool branch_taken_0x2621f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2621FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2621F8u;
            // 0x2621fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621f8) {
            ctx->pc = 0x26221Cu;
            goto label_26221c;
        }
    }
    ctx->pc = 0x262200u;
label_262200:
    // 0x262200: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x262200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_262204:
    // 0x262204: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x262204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262208:
    // 0x262208: 0x24a57478  addiu       $a1, $a1, 0x7478
    ctx->pc = 0x262208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29816));
label_26220c:
    // 0x26220c: 0xc08b5ac  jal         func_22D6B0
label_262210:
    if (ctx->pc == 0x262210u) {
        ctx->pc = 0x262210u;
            // 0x262210: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x262214u;
        goto label_262214;
    }
    ctx->pc = 0x26220Cu;
    SET_GPR_U32(ctx, 31, 0x262214u);
    ctx->pc = 0x262210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26220Cu;
            // 0x262210: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262214u; }
        if (ctx->pc != 0x262214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262214u; }
        if (ctx->pc != 0x262214u) { return; }
    }
    ctx->pc = 0x262214u;
label_262214:
    // 0x262214: 0x1000008e  b           . + 4 + (0x8E << 2)
label_262218:
    if (ctx->pc == 0x262218u) {
        ctx->pc = 0x262218u;
            // 0x262218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26221Cu;
        goto label_26221c;
    }
    ctx->pc = 0x262214u;
    {
        const bool branch_taken_0x262214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262214u;
            // 0x262218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262214) {
            ctx->pc = 0x262450u;
            goto label_262450;
        }
    }
    ctx->pc = 0x26221Cu;
label_26221c:
    // 0x26221c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x26221cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262220:
    // 0x262220: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x262220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_262224:
    // 0x262224: 0x24a57568  addiu       $a1, $a1, 0x7568
    ctx->pc = 0x262224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30056));
label_262228:
    // 0x262228: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x262228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26222c:
    // 0x26222c: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x26222cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
label_262230:
    // 0x262230: 0xc08b5ac  jal         func_22D6B0
label_262234:
    if (ctx->pc == 0x262234u) {
        ctx->pc = 0x262234u;
            // 0x262234: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262238u;
        goto label_262238;
    }
    ctx->pc = 0x262230u;
    SET_GPR_U32(ctx, 31, 0x262238u);
    ctx->pc = 0x262234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262230u;
            // 0x262234: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262238u; }
        if (ctx->pc != 0x262238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262238u; }
        if (ctx->pc != 0x262238u) { return; }
    }
    ctx->pc = 0x262238u;
label_262238:
    // 0x262238: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x262238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26223c:
    // 0x26223c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x26223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_262240:
    // 0x262240: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x262240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_262244:
    // 0x262244: 0x40f809  jalr        $v0
label_262248:
    if (ctx->pc == 0x262248u) {
        ctx->pc = 0x26224Cu;
        goto label_26224c;
    }
    ctx->pc = 0x262244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26224Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26224Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26224Cu; }
            if (ctx->pc != 0x26224Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26224Cu;
label_26224c:
    // 0x26224c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_262250:
    if (ctx->pc == 0x262250u) {
        ctx->pc = 0x262250u;
            // 0x262250: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x262254u;
        goto label_262254;
    }
    ctx->pc = 0x26224Cu;
    {
        const bool branch_taken_0x26224c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x262250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26224Cu;
            // 0x262250: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26224c) {
            ctx->pc = 0x262270u;
            goto label_262270;
        }
    }
    ctx->pc = 0x262254u;
label_262254:
    // 0x262254: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x262254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_262258:
    // 0x262258: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x262258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26225c:
    // 0x26225c: 0x24a57598  addiu       $a1, $a1, 0x7598
    ctx->pc = 0x26225cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30104));
label_262260:
    // 0x262260: 0xc08b5ac  jal         func_22D6B0
label_262264:
    if (ctx->pc == 0x262264u) {
        ctx->pc = 0x262264u;
            // 0x262264: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x262268u;
        goto label_262268;
    }
    ctx->pc = 0x262260u;
    SET_GPR_U32(ctx, 31, 0x262268u);
    ctx->pc = 0x262264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262260u;
            // 0x262264: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262268u; }
        if (ctx->pc != 0x262268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262268u; }
        if (ctx->pc != 0x262268u) { return; }
    }
    ctx->pc = 0x262268u;
label_262268:
    // 0x262268: 0x10000079  b           . + 4 + (0x79 << 2)
label_26226c:
    if (ctx->pc == 0x26226Cu) {
        ctx->pc = 0x26226Cu;
            // 0x26226c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262270u;
        goto label_262270;
    }
    ctx->pc = 0x262268u;
    {
        const bool branch_taken_0x262268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262268u;
            // 0x26226c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262268) {
            ctx->pc = 0x262450u;
            goto label_262450;
        }
    }
    ctx->pc = 0x262270u;
label_262270:
    // 0x262270: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x262270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262274:
    // 0x262274: 0xc098760  jal         func_261D80
label_262278:
    if (ctx->pc == 0x262278u) {
        ctx->pc = 0x262278u;
            // 0x262278: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->pc = 0x26227Cu;
        goto label_26227c;
    }
    ctx->pc = 0x262274u;
    SET_GPR_U32(ctx, 31, 0x26227Cu);
    ctx->pc = 0x262278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262274u;
            // 0x262278: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261D80u;
    goto label_261d80;
    ctx->pc = 0x26227Cu;
label_26227c:
    // 0x26227c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262280:
    // 0x262280: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x262280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_262284:
    // 0x262284: 0x8c421a08  lw          $v0, 0x1A08($v0)
    ctx->pc = 0x262284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
label_262288:
    // 0x262288: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x262288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26228c:
    // 0x26228c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_262290:
    if (ctx->pc == 0x262290u) {
        ctx->pc = 0x262290u;
            // 0x262290: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->pc = 0x262294u;
        goto label_262294;
    }
    ctx->pc = 0x26228Cu;
    {
        const bool branch_taken_0x26228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26228Cu;
            // 0x262290: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26228c) {
            ctx->pc = 0x26229Cu;
            goto label_26229c;
        }
    }
    ctx->pc = 0x262294u;
label_262294:
    // 0x262294: 0x40f809  jalr        $v0
label_262298:
    if (ctx->pc == 0x262298u) {
        ctx->pc = 0x26229Cu;
        goto label_26229c;
    }
    ctx->pc = 0x262294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26229Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26229Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26229Cu; }
            if (ctx->pc != 0x26229Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26229Cu;
label_26229c:
    // 0x26229c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x26229cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2622a0:
    // 0x2622a0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2622a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2622a4:
    // 0x2622a4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2622a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2622a8:
    // 0x2622a8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2622a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2622ac:
    // 0x2622ac: 0x4420015  bltzl       $v0, . + 4 + (0x15 << 2)
label_2622b0:
    if (ctx->pc == 0x2622B0u) {
        ctx->pc = 0x2622B0u;
            // 0x2622b0: 0x8c84002c  lw          $a0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->pc = 0x2622B4u;
        goto label_2622b4;
    }
    ctx->pc = 0x2622ACu;
    {
        const bool branch_taken_0x2622ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2622ac) {
            ctx->pc = 0x2622B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2622ACu;
            // 0x2622b0: 0x8c84002c  lw          $a0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262304u;
            goto label_262304;
        }
    }
    ctx->pc = 0x2622B4u;
label_2622b4:
    // 0x2622b4: 0xc0432ac  jal         func_10CAB0
label_2622b8:
    if (ctx->pc == 0x2622B8u) {
        ctx->pc = 0x2622B8u;
            // 0x2622b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2622BCu;
        goto label_2622bc;
    }
    ctx->pc = 0x2622B4u;
    SET_GPR_U32(ctx, 31, 0x2622BCu);
    ctx->pc = 0x2622B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622B4u;
            // 0x2622b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (runtime->hasFunction(0x10CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622BCu; }
        if (ctx->pc != 0x2622BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CAB0_0x10cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622BCu; }
        if (ctx->pc != 0x2622BCu) { return; }
    }
    ctx->pc = 0x2622BCu;
label_2622bc:
    // 0x2622bc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2622bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2622c0:
    // 0x2622c0: 0xc04329c  jal         func_10CA70
label_2622c4:
    if (ctx->pc == 0x2622C4u) {
        ctx->pc = 0x2622C4u;
            // 0x2622c4: 0x8c640028  lw          $a0, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->pc = 0x2622C8u;
        goto label_2622c8;
    }
    ctx->pc = 0x2622C0u;
    SET_GPR_U32(ctx, 31, 0x2622C8u);
    ctx->pc = 0x2622C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622C0u;
            // 0x2622c4: 0x8c640028  lw          $a0, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622C8u; }
        if (ctx->pc != 0x2622C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622C8u; }
        if (ctx->pc != 0x2622C8u) { return; }
    }
    ctx->pc = 0x2622C8u;
label_2622c8:
    // 0x2622c8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2622c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2622cc:
    // 0x2622cc: 0xc097360  jal         func_25CD80
label_2622d0:
    if (ctx->pc == 0x2622D0u) {
        ctx->pc = 0x2622D0u;
            // 0x2622d0: 0x8c640028  lw          $a0, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->pc = 0x2622D4u;
        goto label_2622d4;
    }
    ctx->pc = 0x2622CCu;
    SET_GPR_U32(ctx, 31, 0x2622D4u);
    ctx->pc = 0x2622D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622CCu;
            // 0x2622d0: 0x8c640028  lw          $a0, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (runtime->hasFunction(0x25CD80u)) {
        auto targetFn = runtime->lookupFunction(0x25CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622D4u; }
        if (ctx->pc != 0x2622D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD80_0x25cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622D4u; }
        if (ctx->pc != 0x2622D4u) { return; }
    }
    ctx->pc = 0x2622D4u;
label_2622d4:
    // 0x2622d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2622d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2622d8:
    // 0x2622d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2622d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2622dc:
    // 0x2622dc: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x2622dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_2622e0:
    // 0x2622e0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2622e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2622e4:
    // 0x2622e4: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x2622e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2622e8:
    // 0x2622e8: 0xc044436  jal         func_1110D8
label_2622ec:
    if (ctx->pc == 0x2622ECu) {
        ctx->pc = 0x2622ECu;
            // 0x2622ec: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->pc = 0x2622F0u;
        goto label_2622f0;
    }
    ctx->pc = 0x2622E8u;
    SET_GPR_U32(ctx, 31, 0x2622F0u);
    ctx->pc = 0x2622ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622E8u;
            // 0x2622ec: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1110D8u;
    if (runtime->hasFunction(0x1110D8u)) {
        auto targetFn = runtime->lookupFunction(0x1110D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622F0u; }
        if (ctx->pc != 0x2622F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001110D8_0x1110d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622F0u; }
        if (ctx->pc != 0x2622F0u) { return; }
    }
    ctx->pc = 0x2622F0u;
label_2622f0:
    // 0x2622f0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2622f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2622f4:
    // 0x2622f4: 0xc04445c  jal         func_111170
label_2622f8:
    if (ctx->pc == 0x2622F8u) {
        ctx->pc = 0x2622F8u;
            // 0x2622f8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x2622FCu;
        goto label_2622fc;
    }
    ctx->pc = 0x2622F4u;
    SET_GPR_U32(ctx, 31, 0x2622FCu);
    ctx->pc = 0x2622F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622F4u;
            // 0x2622f8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111170u;
    if (runtime->hasFunction(0x111170u)) {
        auto targetFn = runtime->lookupFunction(0x111170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622FCu; }
        if (ctx->pc != 0x2622FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111170_0x111170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622FCu; }
        if (ctx->pc != 0x2622FCu) { return; }
    }
    ctx->pc = 0x2622FCu;
label_2622fc:
    // 0x2622fc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2622fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262300:
    // 0x262300: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x262300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_262304:
    // 0x262304: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_262308:
    if (ctx->pc == 0x262308u) {
        ctx->pc = 0x26230Cu;
        goto label_26230c;
    }
    ctx->pc = 0x262304u;
    {
        const bool branch_taken_0x262304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x262304) {
            ctx->pc = 0x26231Cu;
            goto label_26231c;
        }
    }
    ctx->pc = 0x26230Cu;
label_26230c:
    // 0x26230c: 0xc098560  jal         func_261580
label_262310:
    if (ctx->pc == 0x262310u) {
        ctx->pc = 0x262314u;
        goto label_262314;
    }
    ctx->pc = 0x26230Cu;
    SET_GPR_U32(ctx, 31, 0x262314u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262314u; }
        if (ctx->pc != 0x262314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262314u; }
        if (ctx->pc != 0x262314u) { return; }
    }
    ctx->pc = 0x262314u;
label_262314:
    // 0x262314: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x262314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262318:
    // 0x262318: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x262318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_26231c:
    // 0x26231c: 0x1260004c  beqz        $s3, . + 4 + (0x4C << 2)
label_262320:
    if (ctx->pc == 0x262320u) {
        ctx->pc = 0x262320u;
            // 0x262320: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262324u;
        goto label_262324;
    }
    ctx->pc = 0x26231Cu;
    {
        const bool branch_taken_0x26231c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x262320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26231Cu;
            // 0x262320: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26231c) {
            ctx->pc = 0x262450u;
            goto label_262450;
        }
    }
    ctx->pc = 0x262324u;
label_262324:
    // 0x262324: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x262324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
label_262328:
    // 0x262328: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x262328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26232c:
    // 0x26232c: 0x8c62d770  lw          $v0, -0x2890($v1)
    ctx->pc = 0x26232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956912)));
label_262330:
    // 0x262330: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
label_262334:
    if (ctx->pc == 0x262334u) {
        ctx->pc = 0x262334u;
            // 0x262334: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262338u;
        goto label_262338;
    }
    ctx->pc = 0x262330u;
    {
        const bool branch_taken_0x262330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x262330) {
            ctx->pc = 0x262334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262330u;
            // 0x262334: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26234Cu;
            goto label_26234c;
        }
    }
    ctx->pc = 0x262338u;
label_262338:
    // 0x262338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x262338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26233c:
    // 0x26233c: 0x1000000c  b           . + 4 + (0xC << 2)
label_262340:
    if (ctx->pc == 0x262340u) {
        ctx->pc = 0x262340u;
            // 0x262340: 0xac62d770  sw          $v0, -0x2890($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956912), GPR_U32(ctx, 2));
        ctx->pc = 0x262344u;
        goto label_262344;
    }
    ctx->pc = 0x26233Cu;
    {
        const bool branch_taken_0x26233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26233Cu;
            // 0x262340: 0xac62d770  sw          $v0, -0x2890($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26233c) {
            ctx->pc = 0x262370u;
            goto label_262370;
        }
    }
    ctx->pc = 0x262344u;
label_262344:
    // 0x262344: 0x0  nop
    ctx->pc = 0x262344u;
    // NOP
label_262348:
    // 0x262348: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x262348u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26234c:
    // 0x26234c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_262350:
    // 0x262350: 0x0  nop
    ctx->pc = 0x262350u;
    // NOP
label_262354:
    // 0x262354: 0x0  nop
    ctx->pc = 0x262354u;
    // NOP
label_262358:
    // 0x262358: 0x0  nop
    ctx->pc = 0x262358u;
    // NOP
label_26235c:
    // 0x26235c: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_262360:
    if (ctx->pc == 0x262360u) {
        ctx->pc = 0x262364u;
        goto label_262364;
    }
    ctx->pc = 0x26235Cu;
    {
        const bool branch_taken_0x26235c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x26235c) {
            ctx->pc = 0x262348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262348;
        }
    }
    ctx->pc = 0x262364u;
label_262364:
    // 0x262364: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x262364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262368:
    // 0x262368: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x262368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_26236c:
    // 0x26236c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262370:
    // 0x262370: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x262370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_262374:
    // 0x262374: 0x442000e  bltzl       $v0, . + 4 + (0xE << 2)
label_262378:
    if (ctx->pc == 0x262378u) {
        ctx->pc = 0x262378u;
            // 0x262378: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->pc = 0x26237Cu;
        goto label_26237c;
    }
    ctx->pc = 0x262374u;
    {
        const bool branch_taken_0x262374 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x262374) {
            ctx->pc = 0x262378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262374u;
            // 0x262378: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2623B0u;
            goto label_2623b0;
        }
    }
    ctx->pc = 0x26237Cu;
label_26237c:
    // 0x26237c: 0xc0432ac  jal         func_10CAB0
label_262380:
    if (ctx->pc == 0x262380u) {
        ctx->pc = 0x262380u;
            // 0x262380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262384u;
        goto label_262384;
    }
    ctx->pc = 0x26237Cu;
    SET_GPR_U32(ctx, 31, 0x262384u);
    ctx->pc = 0x262380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26237Cu;
            // 0x262380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (runtime->hasFunction(0x10CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262384u; }
        if (ctx->pc != 0x262384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CAB0_0x10cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262384u; }
        if (ctx->pc != 0x262384u) { return; }
    }
    ctx->pc = 0x262384u;
label_262384:
    // 0x262384: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x262384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262388:
    // 0x262388: 0xc04329c  jal         func_10CA70
label_26238c:
    if (ctx->pc == 0x26238Cu) {
        ctx->pc = 0x26238Cu;
            // 0x26238c: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->pc = 0x262390u;
        goto label_262390;
    }
    ctx->pc = 0x262388u;
    SET_GPR_U32(ctx, 31, 0x262390u);
    ctx->pc = 0x26238Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262388u;
            // 0x26238c: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262390u; }
        if (ctx->pc != 0x262390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262390u; }
        if (ctx->pc != 0x262390u) { return; }
    }
    ctx->pc = 0x262390u;
label_262390:
    // 0x262390: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x262390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262394:
    // 0x262394: 0xc097360  jal         func_25CD80
label_262398:
    if (ctx->pc == 0x262398u) {
        ctx->pc = 0x262398u;
            // 0x262398: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->pc = 0x26239Cu;
        goto label_26239c;
    }
    ctx->pc = 0x262394u;
    SET_GPR_U32(ctx, 31, 0x26239Cu);
    ctx->pc = 0x262398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262394u;
            // 0x262398: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (runtime->hasFunction(0x25CD80u)) {
        auto targetFn = runtime->lookupFunction(0x25CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26239Cu; }
        if (ctx->pc != 0x26239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD80_0x25cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26239Cu; }
        if (ctx->pc != 0x26239Cu) { return; }
    }
    ctx->pc = 0x26239Cu;
label_26239c:
    // 0x26239c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x26239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2623a0:
    // 0x2623a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2623a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2623a4:
    // 0x2623a4: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x2623a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_2623a8:
    // 0x2623a8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2623a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2623ac:
    // 0x2623ac: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2623acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2623b0:
    // 0x2623b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2623b4:
    if (ctx->pc == 0x2623B4u) {
        ctx->pc = 0x2623B8u;
        goto label_2623b8;
    }
    ctx->pc = 0x2623B0u;
    {
        const bool branch_taken_0x2623b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2623b0) {
            ctx->pc = 0x2623C4u;
            goto label_2623c4;
        }
    }
    ctx->pc = 0x2623B8u;
label_2623b8:
    // 0x2623b8: 0xc098560  jal         func_261580
label_2623bc:
    if (ctx->pc == 0x2623BCu) {
        ctx->pc = 0x2623BCu;
            // 0x2623bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2623C0u;
        goto label_2623c0;
    }
    ctx->pc = 0x2623B8u;
    SET_GPR_U32(ctx, 31, 0x2623C0u);
    ctx->pc = 0x2623BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2623B8u;
            // 0x2623bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623C0u; }
        if (ctx->pc != 0x2623C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623C0u; }
        if (ctx->pc != 0x2623C0u) { return; }
    }
    ctx->pc = 0x2623C0u;
label_2623c0:
    // 0x2623c0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2623c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2623c4:
    // 0x2623c4: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_2623c8:
    if (ctx->pc == 0x2623C8u) {
        ctx->pc = 0x2623C8u;
            // 0x2623c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2623CCu;
        goto label_2623cc;
    }
    ctx->pc = 0x2623C4u;
    {
        const bool branch_taken_0x2623c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2623C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2623C4u;
            // 0x2623c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623c4) {
            ctx->pc = 0x262450u;
            goto label_262450;
        }
    }
    ctx->pc = 0x2623CCu;
label_2623cc:
    // 0x2623cc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2623ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2623d0:
    // 0x2623d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2623d4:
    if (ctx->pc == 0x2623D4u) {
        ctx->pc = 0x2623D4u;
            // 0x2623d4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x2623D8u;
        goto label_2623d8;
    }
    ctx->pc = 0x2623D0u;
    {
        const bool branch_taken_0x2623d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2623d0) {
            ctx->pc = 0x2623D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2623D0u;
            // 0x2623d4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2623E8u;
            goto label_2623e8;
        }
    }
    ctx->pc = 0x2623D8u;
label_2623d8:
    // 0x2623d8: 0xc098560  jal         func_261580
label_2623dc:
    if (ctx->pc == 0x2623DCu) {
        ctx->pc = 0x2623DCu;
            // 0x2623dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2623E0u;
        goto label_2623e0;
    }
    ctx->pc = 0x2623D8u;
    SET_GPR_U32(ctx, 31, 0x2623E0u);
    ctx->pc = 0x2623DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2623D8u;
            // 0x2623dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623E0u; }
        if (ctx->pc != 0x2623E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623E0u; }
        if (ctx->pc != 0x2623E0u) { return; }
    }
    ctx->pc = 0x2623E0u;
label_2623e0:
    // 0x2623e0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2623e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2623e4:
    // 0x2623e4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2623e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2623e8:
    // 0x2623e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2623ec:
    if (ctx->pc == 0x2623ECu) {
        ctx->pc = 0x2623ECu;
            // 0x2623ec: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x2623F0u;
        goto label_2623f0;
    }
    ctx->pc = 0x2623E8u;
    {
        const bool branch_taken_0x2623e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2623e8) {
            ctx->pc = 0x2623ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2623E8u;
            // 0x2623ec: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262400u;
            goto label_262400;
        }
    }
    ctx->pc = 0x2623F0u;
label_2623f0:
    // 0x2623f0: 0xc098560  jal         func_261580
label_2623f4:
    if (ctx->pc == 0x2623F4u) {
        ctx->pc = 0x2623F4u;
            // 0x2623f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2623F8u;
        goto label_2623f8;
    }
    ctx->pc = 0x2623F0u;
    SET_GPR_U32(ctx, 31, 0x2623F8u);
    ctx->pc = 0x2623F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2623F0u;
            // 0x2623f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623F8u; }
        if (ctx->pc != 0x2623F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623F8u; }
        if (ctx->pc != 0x2623F8u) { return; }
    }
    ctx->pc = 0x2623F8u;
label_2623f8:
    // 0x2623f8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2623f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2623fc:
    // 0x2623fc: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2623fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_262400:
    // 0x262400: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
label_262404:
    if (ctx->pc == 0x262404u) {
        ctx->pc = 0x262404u;
            // 0x262404: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->pc = 0x262408u;
        goto label_262408;
    }
    ctx->pc = 0x262400u;
    {
        const bool branch_taken_0x262400 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x262400) {
            ctx->pc = 0x262404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262400u;
            // 0x262404: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262424u;
            goto label_262424;
        }
    }
    ctx->pc = 0x262408u;
label_262408:
    // 0x262408: 0xc04331c  jal         func_10CC70
label_26240c:
    if (ctx->pc == 0x26240Cu) {
        ctx->pc = 0x26240Cu;
            // 0x26240c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262410u;
        goto label_262410;
    }
    ctx->pc = 0x262408u;
    SET_GPR_U32(ctx, 31, 0x262410u);
    ctx->pc = 0x26240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262408u;
            // 0x26240c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262410u; }
        if (ctx->pc != 0x262410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262410u; }
        if (ctx->pc != 0x262410u) { return; }
    }
    ctx->pc = 0x262410u;
label_262410:
    // 0x262410: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x262410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262414:
    // 0x262414: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x262414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_262418:
    // 0x262418: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x262418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_26241c:
    // 0x26241c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262420:
    // 0x262420: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x262420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_262424:
    // 0x262424: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_262428:
    if (ctx->pc == 0x262428u) {
        ctx->pc = 0x26242Cu;
        goto label_26242c;
    }
    ctx->pc = 0x262424u;
    {
        const bool branch_taken_0x262424 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x262424) {
            ctx->pc = 0x262444u;
            goto label_262444;
        }
    }
    ctx->pc = 0x26242Cu;
label_26242c:
    // 0x26242c: 0xc04331c  jal         func_10CC70
label_262430:
    if (ctx->pc == 0x262430u) {
        ctx->pc = 0x262430u;
            // 0x262430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262434u;
        goto label_262434;
    }
    ctx->pc = 0x26242Cu;
    SET_GPR_U32(ctx, 31, 0x262434u);
    ctx->pc = 0x262430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26242Cu;
            // 0x262430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262434u; }
        if (ctx->pc != 0x262434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262434u; }
        if (ctx->pc != 0x262434u) { return; }
    }
    ctx->pc = 0x262434u;
label_262434:
    // 0x262434: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x262434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262438:
    // 0x262438: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x262438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26243c:
    // 0x26243c: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x26243cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_262440:
    // 0x262440: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x262440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_262444:
    // 0x262444: 0xc098560  jal         func_261580
label_262448:
    if (ctx->pc == 0x262448u) {
        ctx->pc = 0x26244Cu;
        goto label_26244c;
    }
    ctx->pc = 0x262444u;
    SET_GPR_U32(ctx, 31, 0x26244Cu);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26244Cu; }
        if (ctx->pc != 0x26244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26244Cu; }
        if (ctx->pc != 0x26244Cu) { return; }
    }
    ctx->pc = 0x26244Cu;
label_26244c:
    // 0x26244c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26244cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262450:
    // 0x262450: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x262450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_262454:
    // 0x262454: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x262454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_262458:
    // 0x262458: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x262458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26245c:
    // 0x26245c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26245cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_262460:
    // 0x262460: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_262464:
    // 0x262464: 0x3e00008  jr          $ra
label_262468:
    if (ctx->pc == 0x262468u) {
        ctx->pc = 0x262468u;
            // 0x262468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x26246Cu;
        goto label_26246c;
    }
    ctx->pc = 0x262464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262464u;
            // 0x262468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26246Cu;
label_26246c:
    // 0x26246c: 0x0  nop
    ctx->pc = 0x26246cu;
    // NOP
label_262470:
    // 0x262470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_262474:
    // 0x262474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_262478:
    // 0x262478: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x262478u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
label_26247c:
    // 0x26247c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26247cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_262480:
    // 0x262480: 0xc0432d4  jal         func_10CB50
label_262484:
    if (ctx->pc == 0x262484u) {
        ctx->pc = 0x262484u;
            // 0x262484: 0x2610d700  addiu       $s0, $s0, -0x2900 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956800));
        ctx->pc = 0x262488u;
        goto label_262488;
    }
    ctx->pc = 0x262480u;
    SET_GPR_U32(ctx, 31, 0x262488u);
    ctx->pc = 0x262484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262480u;
            // 0x262484: 0x2610d700  addiu       $s0, $s0, -0x2900 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262488u; }
        if (ctx->pc != 0x262488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262488u; }
        if (ctx->pc != 0x262488u) { return; }
    }
    ctx->pc = 0x262488u;
label_262488:
    // 0x262488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26248c:
    // 0x26248c: 0xc0443dc  jal         func_110F70
label_262490:
    if (ctx->pc == 0x262490u) {
        ctx->pc = 0x262490u;
            // 0x262490: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x262494u;
        goto label_262494;
    }
    ctx->pc = 0x26248Cu;
    SET_GPR_U32(ctx, 31, 0x262494u);
    ctx->pc = 0x262490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26248Cu;
            // 0x262490: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110F70u;
    if (runtime->hasFunction(0x110F70u)) {
        auto targetFn = runtime->lookupFunction(0x110F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262494u; }
        if (ctx->pc != 0x262494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110F70_0x110f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262494u; }
        if (ctx->pc != 0x262494u) { return; }
    }
    ctx->pc = 0x262494u;
label_262494:
    // 0x262494: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x262494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_262498:
    // 0x262498: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x262498u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
label_26249c:
    // 0x26249c: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x26249cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
label_2624a0:
    // 0x2624a0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2624a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_2624a4:
    // 0x2624a4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2624a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2624a8:
    // 0x2624a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2624a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2624ac:
    // 0x2624ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2624acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2624b0:
    // 0x2624b0: 0x24c61da8  addiu       $a2, $a2, 0x1DA8
    ctx->pc = 0x2624b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7592));
label_2624b4:
    // 0x2624b4: 0x24e7cf00  addiu       $a3, $a3, -0x3100
    ctx->pc = 0x2624b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954752));
label_2624b8:
    // 0x2624b8: 0x2484d718  addiu       $a0, $a0, -0x28E8
    ctx->pc = 0x2624b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956824));
label_2624bc:
    // 0x2624bc: 0xc044402  jal         func_111008
label_2624c0:
    if (ctx->pc == 0x2624C0u) {
        ctx->pc = 0x2624C0u;
            // 0x2624c0: 0x34a50f80  ori         $a1, $a1, 0xF80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3968);
        ctx->pc = 0x2624C4u;
        goto label_2624c4;
    }
    ctx->pc = 0x2624BCu;
    SET_GPR_U32(ctx, 31, 0x2624C4u);
    ctx->pc = 0x2624C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2624BCu;
            // 0x2624c0: 0x34a50f80  ori         $a1, $a1, 0xF80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3968);
        ctx->in_delay_slot = false;
    ctx->pc = 0x111008u;
    if (runtime->hasFunction(0x111008u)) {
        auto targetFn = runtime->lookupFunction(0x111008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2624C4u; }
        if (ctx->pc != 0x2624C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111008_0x111008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2624C4u; }
        if (ctx->pc != 0x2624C4u) { return; }
    }
    ctx->pc = 0x2624C4u;
label_2624c4:
    // 0x2624c4: 0xc044508  jal         func_111420
label_2624c8:
    if (ctx->pc == 0x2624C8u) {
        ctx->pc = 0x2624C8u;
            // 0x2624c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2624CCu;
        goto label_2624cc;
    }
    ctx->pc = 0x2624C4u;
    SET_GPR_U32(ctx, 31, 0x2624CCu);
    ctx->pc = 0x2624C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2624C4u;
            // 0x2624c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111420u;
    if (runtime->hasFunction(0x111420u)) {
        auto targetFn = runtime->lookupFunction(0x111420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2624CCu; }
        if (ctx->pc != 0x2624CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111420_0x111420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2624CCu; }
        if (ctx->pc != 0x2624CCu) { return; }
    }
    ctx->pc = 0x2624CCu;
label_2624cc:
    // 0x2624cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2624ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2624d0:
    // 0x2624d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2624d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2624d4:
    // 0x2624d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2624d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2624d8:
    // 0x2624d8: 0x3e00008  jr          $ra
label_2624dc:
    if (ctx->pc == 0x2624DCu) {
        ctx->pc = 0x2624DCu;
            // 0x2624dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2624E0u;
        goto label_fallthrough_0x2624d8;
    }
    ctx->pc = 0x2624D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2624DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2624D8u;
            // 0x2624dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2624d8:
    ctx->pc = 0x2624E0u;
    ctx->pc = 0x2624e0u;
}
