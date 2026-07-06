#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8E10
// Address: 0x1f8e10 - 0x1f93d0
void sub_001F8E10_0x1f8e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8E10_0x1f8e10");
#endif

    switch (ctx->pc) {
        case 0x1f8e10u: goto label_1f8e10;
        case 0x1f8e14u: goto label_1f8e14;
        case 0x1f8e18u: goto label_1f8e18;
        case 0x1f8e1cu: goto label_1f8e1c;
        case 0x1f8e20u: goto label_1f8e20;
        case 0x1f8e24u: goto label_1f8e24;
        case 0x1f8e28u: goto label_1f8e28;
        case 0x1f8e2cu: goto label_1f8e2c;
        case 0x1f8e30u: goto label_1f8e30;
        case 0x1f8e34u: goto label_1f8e34;
        case 0x1f8e38u: goto label_1f8e38;
        case 0x1f8e3cu: goto label_1f8e3c;
        case 0x1f8e40u: goto label_1f8e40;
        case 0x1f8e44u: goto label_1f8e44;
        case 0x1f8e48u: goto label_1f8e48;
        case 0x1f8e4cu: goto label_1f8e4c;
        case 0x1f8e50u: goto label_1f8e50;
        case 0x1f8e54u: goto label_1f8e54;
        case 0x1f8e58u: goto label_1f8e58;
        case 0x1f8e5cu: goto label_1f8e5c;
        case 0x1f8e60u: goto label_1f8e60;
        case 0x1f8e64u: goto label_1f8e64;
        case 0x1f8e68u: goto label_1f8e68;
        case 0x1f8e6cu: goto label_1f8e6c;
        case 0x1f8e70u: goto label_1f8e70;
        case 0x1f8e74u: goto label_1f8e74;
        case 0x1f8e78u: goto label_1f8e78;
        case 0x1f8e7cu: goto label_1f8e7c;
        case 0x1f8e80u: goto label_1f8e80;
        case 0x1f8e84u: goto label_1f8e84;
        case 0x1f8e88u: goto label_1f8e88;
        case 0x1f8e8cu: goto label_1f8e8c;
        case 0x1f8e90u: goto label_1f8e90;
        case 0x1f8e94u: goto label_1f8e94;
        case 0x1f8e98u: goto label_1f8e98;
        case 0x1f8e9cu: goto label_1f8e9c;
        case 0x1f8ea0u: goto label_1f8ea0;
        case 0x1f8ea4u: goto label_1f8ea4;
        case 0x1f8ea8u: goto label_1f8ea8;
        case 0x1f8eacu: goto label_1f8eac;
        case 0x1f8eb0u: goto label_1f8eb0;
        case 0x1f8eb4u: goto label_1f8eb4;
        case 0x1f8eb8u: goto label_1f8eb8;
        case 0x1f8ebcu: goto label_1f8ebc;
        case 0x1f8ec0u: goto label_1f8ec0;
        case 0x1f8ec4u: goto label_1f8ec4;
        case 0x1f8ec8u: goto label_1f8ec8;
        case 0x1f8eccu: goto label_1f8ecc;
        case 0x1f8ed0u: goto label_1f8ed0;
        case 0x1f8ed4u: goto label_1f8ed4;
        case 0x1f8ed8u: goto label_1f8ed8;
        case 0x1f8edcu: goto label_1f8edc;
        case 0x1f8ee0u: goto label_1f8ee0;
        case 0x1f8ee4u: goto label_1f8ee4;
        case 0x1f8ee8u: goto label_1f8ee8;
        case 0x1f8eecu: goto label_1f8eec;
        case 0x1f8ef0u: goto label_1f8ef0;
        case 0x1f8ef4u: goto label_1f8ef4;
        case 0x1f8ef8u: goto label_1f8ef8;
        case 0x1f8efcu: goto label_1f8efc;
        case 0x1f8f00u: goto label_1f8f00;
        case 0x1f8f04u: goto label_1f8f04;
        case 0x1f8f08u: goto label_1f8f08;
        case 0x1f8f0cu: goto label_1f8f0c;
        case 0x1f8f10u: goto label_1f8f10;
        case 0x1f8f14u: goto label_1f8f14;
        case 0x1f8f18u: goto label_1f8f18;
        case 0x1f8f1cu: goto label_1f8f1c;
        case 0x1f8f20u: goto label_1f8f20;
        case 0x1f8f24u: goto label_1f8f24;
        case 0x1f8f28u: goto label_1f8f28;
        case 0x1f8f2cu: goto label_1f8f2c;
        case 0x1f8f30u: goto label_1f8f30;
        case 0x1f8f34u: goto label_1f8f34;
        case 0x1f8f38u: goto label_1f8f38;
        case 0x1f8f3cu: goto label_1f8f3c;
        case 0x1f8f40u: goto label_1f8f40;
        case 0x1f8f44u: goto label_1f8f44;
        case 0x1f8f48u: goto label_1f8f48;
        case 0x1f8f4cu: goto label_1f8f4c;
        case 0x1f8f50u: goto label_1f8f50;
        case 0x1f8f54u: goto label_1f8f54;
        case 0x1f8f58u: goto label_1f8f58;
        case 0x1f8f5cu: goto label_1f8f5c;
        case 0x1f8f60u: goto label_1f8f60;
        case 0x1f8f64u: goto label_1f8f64;
        case 0x1f8f68u: goto label_1f8f68;
        case 0x1f8f6cu: goto label_1f8f6c;
        case 0x1f8f70u: goto label_1f8f70;
        case 0x1f8f74u: goto label_1f8f74;
        case 0x1f8f78u: goto label_1f8f78;
        case 0x1f8f7cu: goto label_1f8f7c;
        case 0x1f8f80u: goto label_1f8f80;
        case 0x1f8f84u: goto label_1f8f84;
        case 0x1f8f88u: goto label_1f8f88;
        case 0x1f8f8cu: goto label_1f8f8c;
        case 0x1f8f90u: goto label_1f8f90;
        case 0x1f8f94u: goto label_1f8f94;
        case 0x1f8f98u: goto label_1f8f98;
        case 0x1f8f9cu: goto label_1f8f9c;
        case 0x1f8fa0u: goto label_1f8fa0;
        case 0x1f8fa4u: goto label_1f8fa4;
        case 0x1f8fa8u: goto label_1f8fa8;
        case 0x1f8facu: goto label_1f8fac;
        case 0x1f8fb0u: goto label_1f8fb0;
        case 0x1f8fb4u: goto label_1f8fb4;
        case 0x1f8fb8u: goto label_1f8fb8;
        case 0x1f8fbcu: goto label_1f8fbc;
        case 0x1f8fc0u: goto label_1f8fc0;
        case 0x1f8fc4u: goto label_1f8fc4;
        case 0x1f8fc8u: goto label_1f8fc8;
        case 0x1f8fccu: goto label_1f8fcc;
        case 0x1f8fd0u: goto label_1f8fd0;
        case 0x1f8fd4u: goto label_1f8fd4;
        case 0x1f8fd8u: goto label_1f8fd8;
        case 0x1f8fdcu: goto label_1f8fdc;
        case 0x1f8fe0u: goto label_1f8fe0;
        case 0x1f8fe4u: goto label_1f8fe4;
        case 0x1f8fe8u: goto label_1f8fe8;
        case 0x1f8fecu: goto label_1f8fec;
        case 0x1f8ff0u: goto label_1f8ff0;
        case 0x1f8ff4u: goto label_1f8ff4;
        case 0x1f8ff8u: goto label_1f8ff8;
        case 0x1f8ffcu: goto label_1f8ffc;
        case 0x1f9000u: goto label_1f9000;
        case 0x1f9004u: goto label_1f9004;
        case 0x1f9008u: goto label_1f9008;
        case 0x1f900cu: goto label_1f900c;
        case 0x1f9010u: goto label_1f9010;
        case 0x1f9014u: goto label_1f9014;
        case 0x1f9018u: goto label_1f9018;
        case 0x1f901cu: goto label_1f901c;
        case 0x1f9020u: goto label_1f9020;
        case 0x1f9024u: goto label_1f9024;
        case 0x1f9028u: goto label_1f9028;
        case 0x1f902cu: goto label_1f902c;
        case 0x1f9030u: goto label_1f9030;
        case 0x1f9034u: goto label_1f9034;
        case 0x1f9038u: goto label_1f9038;
        case 0x1f903cu: goto label_1f903c;
        case 0x1f9040u: goto label_1f9040;
        case 0x1f9044u: goto label_1f9044;
        case 0x1f9048u: goto label_1f9048;
        case 0x1f904cu: goto label_1f904c;
        case 0x1f9050u: goto label_1f9050;
        case 0x1f9054u: goto label_1f9054;
        case 0x1f9058u: goto label_1f9058;
        case 0x1f905cu: goto label_1f905c;
        case 0x1f9060u: goto label_1f9060;
        case 0x1f9064u: goto label_1f9064;
        case 0x1f9068u: goto label_1f9068;
        case 0x1f906cu: goto label_1f906c;
        case 0x1f9070u: goto label_1f9070;
        case 0x1f9074u: goto label_1f9074;
        case 0x1f9078u: goto label_1f9078;
        case 0x1f907cu: goto label_1f907c;
        case 0x1f9080u: goto label_1f9080;
        case 0x1f9084u: goto label_1f9084;
        case 0x1f9088u: goto label_1f9088;
        case 0x1f908cu: goto label_1f908c;
        case 0x1f9090u: goto label_1f9090;
        case 0x1f9094u: goto label_1f9094;
        case 0x1f9098u: goto label_1f9098;
        case 0x1f909cu: goto label_1f909c;
        case 0x1f90a0u: goto label_1f90a0;
        case 0x1f90a4u: goto label_1f90a4;
        case 0x1f90a8u: goto label_1f90a8;
        case 0x1f90acu: goto label_1f90ac;
        case 0x1f90b0u: goto label_1f90b0;
        case 0x1f90b4u: goto label_1f90b4;
        case 0x1f90b8u: goto label_1f90b8;
        case 0x1f90bcu: goto label_1f90bc;
        case 0x1f90c0u: goto label_1f90c0;
        case 0x1f90c4u: goto label_1f90c4;
        case 0x1f90c8u: goto label_1f90c8;
        case 0x1f90ccu: goto label_1f90cc;
        case 0x1f90d0u: goto label_1f90d0;
        case 0x1f90d4u: goto label_1f90d4;
        case 0x1f90d8u: goto label_1f90d8;
        case 0x1f90dcu: goto label_1f90dc;
        case 0x1f90e0u: goto label_1f90e0;
        case 0x1f90e4u: goto label_1f90e4;
        case 0x1f90e8u: goto label_1f90e8;
        case 0x1f90ecu: goto label_1f90ec;
        case 0x1f90f0u: goto label_1f90f0;
        case 0x1f90f4u: goto label_1f90f4;
        case 0x1f90f8u: goto label_1f90f8;
        case 0x1f90fcu: goto label_1f90fc;
        case 0x1f9100u: goto label_1f9100;
        case 0x1f9104u: goto label_1f9104;
        case 0x1f9108u: goto label_1f9108;
        case 0x1f910cu: goto label_1f910c;
        case 0x1f9110u: goto label_1f9110;
        case 0x1f9114u: goto label_1f9114;
        case 0x1f9118u: goto label_1f9118;
        case 0x1f911cu: goto label_1f911c;
        case 0x1f9120u: goto label_1f9120;
        case 0x1f9124u: goto label_1f9124;
        case 0x1f9128u: goto label_1f9128;
        case 0x1f912cu: goto label_1f912c;
        case 0x1f9130u: goto label_1f9130;
        case 0x1f9134u: goto label_1f9134;
        case 0x1f9138u: goto label_1f9138;
        case 0x1f913cu: goto label_1f913c;
        case 0x1f9140u: goto label_1f9140;
        case 0x1f9144u: goto label_1f9144;
        case 0x1f9148u: goto label_1f9148;
        case 0x1f914cu: goto label_1f914c;
        case 0x1f9150u: goto label_1f9150;
        case 0x1f9154u: goto label_1f9154;
        case 0x1f9158u: goto label_1f9158;
        case 0x1f915cu: goto label_1f915c;
        case 0x1f9160u: goto label_1f9160;
        case 0x1f9164u: goto label_1f9164;
        case 0x1f9168u: goto label_1f9168;
        case 0x1f916cu: goto label_1f916c;
        case 0x1f9170u: goto label_1f9170;
        case 0x1f9174u: goto label_1f9174;
        case 0x1f9178u: goto label_1f9178;
        case 0x1f917cu: goto label_1f917c;
        case 0x1f9180u: goto label_1f9180;
        case 0x1f9184u: goto label_1f9184;
        case 0x1f9188u: goto label_1f9188;
        case 0x1f918cu: goto label_1f918c;
        case 0x1f9190u: goto label_1f9190;
        case 0x1f9194u: goto label_1f9194;
        case 0x1f9198u: goto label_1f9198;
        case 0x1f919cu: goto label_1f919c;
        case 0x1f91a0u: goto label_1f91a0;
        case 0x1f91a4u: goto label_1f91a4;
        case 0x1f91a8u: goto label_1f91a8;
        case 0x1f91acu: goto label_1f91ac;
        case 0x1f91b0u: goto label_1f91b0;
        case 0x1f91b4u: goto label_1f91b4;
        case 0x1f91b8u: goto label_1f91b8;
        case 0x1f91bcu: goto label_1f91bc;
        case 0x1f91c0u: goto label_1f91c0;
        case 0x1f91c4u: goto label_1f91c4;
        case 0x1f91c8u: goto label_1f91c8;
        case 0x1f91ccu: goto label_1f91cc;
        case 0x1f91d0u: goto label_1f91d0;
        case 0x1f91d4u: goto label_1f91d4;
        case 0x1f91d8u: goto label_1f91d8;
        case 0x1f91dcu: goto label_1f91dc;
        case 0x1f91e0u: goto label_1f91e0;
        case 0x1f91e4u: goto label_1f91e4;
        case 0x1f91e8u: goto label_1f91e8;
        case 0x1f91ecu: goto label_1f91ec;
        case 0x1f91f0u: goto label_1f91f0;
        case 0x1f91f4u: goto label_1f91f4;
        case 0x1f91f8u: goto label_1f91f8;
        case 0x1f91fcu: goto label_1f91fc;
        case 0x1f9200u: goto label_1f9200;
        case 0x1f9204u: goto label_1f9204;
        case 0x1f9208u: goto label_1f9208;
        case 0x1f920cu: goto label_1f920c;
        case 0x1f9210u: goto label_1f9210;
        case 0x1f9214u: goto label_1f9214;
        case 0x1f9218u: goto label_1f9218;
        case 0x1f921cu: goto label_1f921c;
        case 0x1f9220u: goto label_1f9220;
        case 0x1f9224u: goto label_1f9224;
        case 0x1f9228u: goto label_1f9228;
        case 0x1f922cu: goto label_1f922c;
        case 0x1f9230u: goto label_1f9230;
        case 0x1f9234u: goto label_1f9234;
        case 0x1f9238u: goto label_1f9238;
        case 0x1f923cu: goto label_1f923c;
        case 0x1f9240u: goto label_1f9240;
        case 0x1f9244u: goto label_1f9244;
        case 0x1f9248u: goto label_1f9248;
        case 0x1f924cu: goto label_1f924c;
        case 0x1f9250u: goto label_1f9250;
        case 0x1f9254u: goto label_1f9254;
        case 0x1f9258u: goto label_1f9258;
        case 0x1f925cu: goto label_1f925c;
        case 0x1f9260u: goto label_1f9260;
        case 0x1f9264u: goto label_1f9264;
        case 0x1f9268u: goto label_1f9268;
        case 0x1f926cu: goto label_1f926c;
        case 0x1f9270u: goto label_1f9270;
        case 0x1f9274u: goto label_1f9274;
        case 0x1f9278u: goto label_1f9278;
        case 0x1f927cu: goto label_1f927c;
        case 0x1f9280u: goto label_1f9280;
        case 0x1f9284u: goto label_1f9284;
        case 0x1f9288u: goto label_1f9288;
        case 0x1f928cu: goto label_1f928c;
        case 0x1f9290u: goto label_1f9290;
        case 0x1f9294u: goto label_1f9294;
        case 0x1f9298u: goto label_1f9298;
        case 0x1f929cu: goto label_1f929c;
        case 0x1f92a0u: goto label_1f92a0;
        case 0x1f92a4u: goto label_1f92a4;
        case 0x1f92a8u: goto label_1f92a8;
        case 0x1f92acu: goto label_1f92ac;
        case 0x1f92b0u: goto label_1f92b0;
        case 0x1f92b4u: goto label_1f92b4;
        case 0x1f92b8u: goto label_1f92b8;
        case 0x1f92bcu: goto label_1f92bc;
        case 0x1f92c0u: goto label_1f92c0;
        case 0x1f92c4u: goto label_1f92c4;
        case 0x1f92c8u: goto label_1f92c8;
        case 0x1f92ccu: goto label_1f92cc;
        case 0x1f92d0u: goto label_1f92d0;
        case 0x1f92d4u: goto label_1f92d4;
        case 0x1f92d8u: goto label_1f92d8;
        case 0x1f92dcu: goto label_1f92dc;
        case 0x1f92e0u: goto label_1f92e0;
        case 0x1f92e4u: goto label_1f92e4;
        case 0x1f92e8u: goto label_1f92e8;
        case 0x1f92ecu: goto label_1f92ec;
        case 0x1f92f0u: goto label_1f92f0;
        case 0x1f92f4u: goto label_1f92f4;
        case 0x1f92f8u: goto label_1f92f8;
        case 0x1f92fcu: goto label_1f92fc;
        case 0x1f9300u: goto label_1f9300;
        case 0x1f9304u: goto label_1f9304;
        case 0x1f9308u: goto label_1f9308;
        case 0x1f930cu: goto label_1f930c;
        case 0x1f9310u: goto label_1f9310;
        case 0x1f9314u: goto label_1f9314;
        case 0x1f9318u: goto label_1f9318;
        case 0x1f931cu: goto label_1f931c;
        case 0x1f9320u: goto label_1f9320;
        case 0x1f9324u: goto label_1f9324;
        case 0x1f9328u: goto label_1f9328;
        case 0x1f932cu: goto label_1f932c;
        case 0x1f9330u: goto label_1f9330;
        case 0x1f9334u: goto label_1f9334;
        case 0x1f9338u: goto label_1f9338;
        case 0x1f933cu: goto label_1f933c;
        case 0x1f9340u: goto label_1f9340;
        case 0x1f9344u: goto label_1f9344;
        case 0x1f9348u: goto label_1f9348;
        case 0x1f934cu: goto label_1f934c;
        case 0x1f9350u: goto label_1f9350;
        case 0x1f9354u: goto label_1f9354;
        case 0x1f9358u: goto label_1f9358;
        case 0x1f935cu: goto label_1f935c;
        case 0x1f9360u: goto label_1f9360;
        case 0x1f9364u: goto label_1f9364;
        case 0x1f9368u: goto label_1f9368;
        case 0x1f936cu: goto label_1f936c;
        case 0x1f9370u: goto label_1f9370;
        case 0x1f9374u: goto label_1f9374;
        case 0x1f9378u: goto label_1f9378;
        case 0x1f937cu: goto label_1f937c;
        case 0x1f9380u: goto label_1f9380;
        case 0x1f9384u: goto label_1f9384;
        case 0x1f9388u: goto label_1f9388;
        case 0x1f938cu: goto label_1f938c;
        case 0x1f9390u: goto label_1f9390;
        case 0x1f9394u: goto label_1f9394;
        case 0x1f9398u: goto label_1f9398;
        case 0x1f939cu: goto label_1f939c;
        case 0x1f93a0u: goto label_1f93a0;
        case 0x1f93a4u: goto label_1f93a4;
        case 0x1f93a8u: goto label_1f93a8;
        case 0x1f93acu: goto label_1f93ac;
        case 0x1f93b0u: goto label_1f93b0;
        case 0x1f93b4u: goto label_1f93b4;
        case 0x1f93b8u: goto label_1f93b8;
        case 0x1f93bcu: goto label_1f93bc;
        case 0x1f93c0u: goto label_1f93c0;
        case 0x1f93c4u: goto label_1f93c4;
        case 0x1f93c8u: goto label_1f93c8;
        case 0x1f93ccu: goto label_1f93cc;
        default: break;
    }

    ctx->pc = 0x1f8e10u;

label_1f8e10:
    // 0x1f8e10: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x1f8e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
label_1f8e14:
    // 0x1f8e14: 0xffb002f0  sd          $s0, 0x2F0($sp)
    ctx->pc = 0x1f8e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 16));
label_1f8e18:
    // 0x1f8e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8e1c:
    // 0x1f8e1c: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x1f8e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_1f8e20:
    // 0x1f8e20: 0xffb102f8  sd          $s1, 0x2F8($sp)
    ctx->pc = 0x1f8e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 760), GPR_U64(ctx, 17));
label_1f8e24:
    // 0x1f8e24: 0xffb20300  sd          $s2, 0x300($sp)
    ctx->pc = 0x1f8e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 18));
label_1f8e28:
    // 0x1f8e28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f8e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f8e2c:
    // 0x1f8e2c: 0xffb30308  sd          $s3, 0x308($sp)
    ctx->pc = 0x1f8e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 776), GPR_U64(ctx, 19));
label_1f8e30:
    // 0x1f8e30: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1f8e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8e34:
    // 0x1f8e34: 0xffb40310  sd          $s4, 0x310($sp)
    ctx->pc = 0x1f8e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 20));
label_1f8e38:
    // 0x1f8e38: 0xffb50318  sd          $s5, 0x318($sp)
    ctx->pc = 0x1f8e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 792), GPR_U64(ctx, 21));
label_1f8e3c:
    // 0x1f8e3c: 0xffb60320  sd          $s6, 0x320($sp)
    ctx->pc = 0x1f8e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 22));
label_1f8e40:
    // 0x1f8e40: 0xffb70328  sd          $s7, 0x328($sp)
    ctx->pc = 0x1f8e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 808), GPR_U64(ctx, 23));
label_1f8e44:
    // 0x1f8e44: 0xffbe0330  sd          $fp, 0x330($sp)
    ctx->pc = 0x1f8e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 30));
label_1f8e48:
    // 0x1f8e48: 0xffbf0338  sd          $ra, 0x338($sp)
    ctx->pc = 0x1f8e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 824), GPR_U64(ctx, 31));
label_1f8e4c:
    // 0x1f8e4c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1f8e50:
    if (ctx->pc == 0x1F8E50u) {
        ctx->pc = 0x1F8E50u;
            // 0x1f8e50: 0xafa002b0  sw          $zero, 0x2B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
        ctx->pc = 0x1F8E54u;
        goto label_1f8e54;
    }
    ctx->pc = 0x1F8E4Cu;
    {
        const bool branch_taken_0x1f8e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E4Cu;
            // 0x1f8e50: 0xafa002b0  sw          $zero, 0x2B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e4c) {
            ctx->pc = 0x1F8EB8u;
            goto label_1f8eb8;
        }
    }
    ctx->pc = 0x1F8E54u;
label_1f8e54:
    // 0x1f8e54: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1f8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1f8e58:
    // 0x1f8e58: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1f8e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1f8e5c:
    // 0x1f8e5c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1f8e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1f8e60:
    // 0x1f8e60: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1f8e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1f8e64:
    // 0x1f8e64: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1f8e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1f8e68:
    // 0x1f8e68: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1f8e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1f8e6c:
    // 0x1f8e6c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1f8e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1f8e70:
    // 0x1f8e70: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1f8e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1f8e74:
    // 0x1f8e74: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1f8e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1f8e78:
    // 0x1f8e78: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1f8e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8e7c:
    // 0x1f8e7c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1f8e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8e80:
    // 0x1f8e80: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1f8e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8e84:
    // 0x1f8e84: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1f8e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8e88:
    // 0x1f8e88: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1f8e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8e8c:
    // 0x1f8e8c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1f8e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8e90:
    // 0x1f8e90: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1f8e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8e94:
    // 0x1f8e94: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1f8e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8e98:
    // 0x1f8e98: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1f8e9c:
    // 0x1f8e9c: 0x0  nop
    ctx->pc = 0x1f8e9cu;
    // NOP
label_1f8ea0:
    // 0x1f8ea0: 0x0  nop
    ctx->pc = 0x1f8ea0u;
    // NOP
label_1f8ea4:
    // 0x1f8ea4: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_1f8ea8:
    if (ctx->pc == 0x1F8EA8u) {
        ctx->pc = 0x1F8EA8u;
            // 0x1f8ea8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1F8EACu;
        goto label_1f8eac;
    }
    ctx->pc = 0x1F8EA4u;
    {
        const bool branch_taken_0x1f8ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8EA4u;
            // 0x1f8ea8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ea4) {
            ctx->pc = 0x1F8E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8e58;
        }
    }
    ctx->pc = 0x1F8EACu;
label_1f8eac:
    // 0x1f8eac: 0x10000010  b           . + 4 + (0x10 << 2)
label_1f8eb0:
    if (ctx->pc == 0x1F8EB0u) {
        ctx->pc = 0x1F8EB4u;
        goto label_1f8eb4;
    }
    ctx->pc = 0x1F8EACu;
    {
        const bool branch_taken_0x1f8eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8eac) {
            ctx->pc = 0x1F8EF0u;
            goto label_1f8ef0;
        }
    }
    ctx->pc = 0x1F8EB4u;
label_1f8eb4:
    // 0x1f8eb4: 0x0  nop
    ctx->pc = 0x1f8eb4u;
    // NOP
label_1f8eb8:
    // 0x1f8eb8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1f8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1f8ebc:
    // 0x1f8ebc: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1f8ebcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8ec0:
    // 0x1f8ec0: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1f8ec0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1f8ec4:
    // 0x1f8ec4: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1f8ec4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1f8ec8:
    // 0x1f8ec8: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1f8ec8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1f8ecc:
    // 0x1f8ecc: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1f8eccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_1f8ed0:
    // 0x1f8ed0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1f8ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_1f8ed4:
    // 0x1f8ed4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1f8ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_1f8ed8:
    // 0x1f8ed8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1f8ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_1f8edc:
    // 0x1f8edc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f8edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1f8ee0:
    // 0x1f8ee0: 0x0  nop
    ctx->pc = 0x1f8ee0u;
    // NOP
label_1f8ee4:
    // 0x1f8ee4: 0x0  nop
    ctx->pc = 0x1f8ee4u;
    // NOP
label_1f8ee8:
    // 0x1f8ee8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1f8eec:
    if (ctx->pc == 0x1F8EECu) {
        ctx->pc = 0x1F8EECu;
            // 0x1f8eec: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1F8EF0u;
        goto label_1f8ef0;
    }
    ctx->pc = 0x1F8EE8u;
    {
        const bool branch_taken_0x1f8ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8EE8u;
            // 0x1f8eec: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ee8) {
            ctx->pc = 0x1F8EBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8ebc;
        }
    }
    ctx->pc = 0x1F8EF0u;
label_1f8ef0:
    // 0x1f8ef0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8ef4:
    // 0x1f8ef4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f8ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f8ef8:
    // 0x1f8ef8: 0x8e150a2c  lw          $s5, 0xA2C($s0)
    ctx->pc = 0x1f8ef8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2604)));
label_1f8efc:
    // 0x1f8efc: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_1f8f00:
    if (ctx->pc == 0x1F8F00u) {
        ctx->pc = 0x1F8F04u;
        goto label_1f8f04;
    }
    ctx->pc = 0x1F8EFCu;
    {
        const bool branch_taken_0x1f8efc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8efc) {
            ctx->pc = 0x1F8F18u;
            goto label_1f8f18;
        }
    }
    ctx->pc = 0x1F8F04u;
label_1f8f04:
    // 0x1f8f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8f08:
    // 0x1f8f08: 0xc07e51e  jal         func_1F9478
label_1f8f0c:
    if (ctx->pc == 0x1F8F0Cu) {
        ctx->pc = 0x1F8F0Cu;
            // 0x1f8f0c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1F8F10u;
        goto label_1f8f10;
    }
    ctx->pc = 0x1F8F08u;
    SET_GPR_U32(ctx, 31, 0x1F8F10u);
    ctx->pc = 0x1F8F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F08u;
            // 0x1f8f0c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9478u;
    if (runtime->hasFunction(0x1F9478u)) {
        auto targetFn = runtime->lookupFunction(0x1F9478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F10u; }
        if (ctx->pc != 0x1F8F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9478_0x1f9478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F10u; }
        if (ctx->pc != 0x1F8F10u) { return; }
    }
    ctx->pc = 0x1F8F10u;
label_1f8f10:
    // 0x1f8f10: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x1f8f10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1f8f14:
    // 0x1f8f14: 0xafa802b0  sw          $t0, 0x2B0($sp)
    ctx->pc = 0x1f8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 8));
label_1f8f18:
    // 0x1f8f18: 0xc07b28e  jal         func_1ECA38
label_1f8f1c:
    if (ctx->pc == 0x1F8F1Cu) {
        ctx->pc = 0x1F8F1Cu;
            // 0x1f8f1c: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x1F8F20u;
        goto label_1f8f20;
    }
    ctx->pc = 0x1F8F18u;
    SET_GPR_U32(ctx, 31, 0x1F8F20u);
    ctx->pc = 0x1F8F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F18u;
            // 0x1f8f1c: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECA38u;
    if (runtime->hasFunction(0x1ECA38u)) {
        auto targetFn = runtime->lookupFunction(0x1ECA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F20u; }
        if (ctx->pc != 0x1F8F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECA38_0x1eca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F20u; }
        if (ctx->pc != 0x1F8F20u) { return; }
    }
    ctx->pc = 0x1F8F20u;
label_1f8f20:
    // 0x1f8f20: 0xc07a8a8  jal         func_1EA2A0
label_1f8f24:
    if (ctx->pc == 0x1F8F24u) {
        ctx->pc = 0x1F8F24u;
            // 0x1f8f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F28u;
        goto label_1f8f28;
    }
    ctx->pc = 0x1F8F20u;
    SET_GPR_U32(ctx, 31, 0x1F8F28u);
    ctx->pc = 0x1F8F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F20u;
            // 0x1f8f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2A0u;
    if (runtime->hasFunction(0x1EA2A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F28u; }
        if (ctx->pc != 0x1F8F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA2A0_0x1ea2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F28u; }
        if (ctx->pc != 0x1F8F28u) { return; }
    }
    ctx->pc = 0x1F8F28u;
label_1f8f28:
    // 0x1f8f28: 0x26030d2c  addiu       $v1, $s0, 0xD2C
    ctx->pc = 0x1f8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3372));
label_1f8f2c:
    // 0x1f8f2c: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1f8f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1f8f30:
    // 0x1f8f30: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1f8f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_1f8f34:
    // 0x1f8f34: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1f8f38:
    if (ctx->pc == 0x1F8F38u) {
        ctx->pc = 0x1F8F38u;
            // 0x1f8f38: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F3Cu;
        goto label_1f8f3c;
    }
    ctx->pc = 0x1F8F34u;
    {
        const bool branch_taken_0x1f8f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F34u;
            // 0x1f8f38: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f34) {
            ctx->pc = 0x1F8FA0u;
            goto label_1f8fa0;
        }
    }
    ctx->pc = 0x1F8F3Cu;
label_1f8f3c:
    // 0x1f8f3c: 0x26020d6c  addiu       $v0, $s0, 0xD6C
    ctx->pc = 0x1f8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3436));
label_1f8f40:
    // 0x1f8f40: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1f8f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1f8f44:
    // 0x1f8f44: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1f8f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1f8f48:
    // 0x1f8f48: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1f8f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1f8f4c:
    // 0x1f8f4c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1f8f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1f8f50:
    // 0x1f8f50: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1f8f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1f8f54:
    // 0x1f8f54: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1f8f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1f8f58:
    // 0x1f8f58: 0x6865001f  ldl         $a1, 0x1F($v1)
    ctx->pc = 0x1f8f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1f8f5c:
    // 0x1f8f5c: 0x6c650018  ldr         $a1, 0x18($v1)
    ctx->pc = 0x1f8f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1f8f60:
    // 0x1f8f60: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1f8f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8f64:
    // 0x1f8f64: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1f8f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8f68:
    // 0x1f8f68: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1f8f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8f6c:
    // 0x1f8f6c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1f8f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8f70:
    // 0x1f8f70: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1f8f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8f74:
    // 0x1f8f74: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1f8f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8f78:
    // 0x1f8f78: 0xb085001f  sdl         $a1, 0x1F($a0)
    ctx->pc = 0x1f8f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8f7c:
    // 0x1f8f7c: 0xb4850018  sdr         $a1, 0x18($a0)
    ctx->pc = 0x1f8f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8f80:
    // 0x1f8f80: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1f8f84:
    // 0x1f8f84: 0x0  nop
    ctx->pc = 0x1f8f84u;
    // NOP
label_1f8f88:
    // 0x1f8f88: 0x0  nop
    ctx->pc = 0x1f8f88u;
    // NOP
label_1f8f8c:
    // 0x1f8f8c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_1f8f90:
    if (ctx->pc == 0x1F8F90u) {
        ctx->pc = 0x1F8F90u;
            // 0x1f8f90: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1F8F94u;
        goto label_1f8f94;
    }
    ctx->pc = 0x1F8F8Cu;
    {
        const bool branch_taken_0x1f8f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F8Cu;
            // 0x1f8f90: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f8c) {
            ctx->pc = 0x1F8F40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8f40;
        }
    }
    ctx->pc = 0x1F8F94u;
label_1f8f94:
    // 0x1f8f94: 0x10000010  b           . + 4 + (0x10 << 2)
label_1f8f98:
    if (ctx->pc == 0x1F8F98u) {
        ctx->pc = 0x1F8F9Cu;
        goto label_1f8f9c;
    }
    ctx->pc = 0x1F8F94u;
    {
        const bool branch_taken_0x1f8f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8f94) {
            ctx->pc = 0x1F8FD8u;
            goto label_1f8fd8;
        }
    }
    ctx->pc = 0x1F8F9Cu;
label_1f8f9c:
    // 0x1f8f9c: 0x0  nop
    ctx->pc = 0x1f8f9cu;
    // NOP
label_1f8fa0:
    // 0x1f8fa0: 0x26020d6c  addiu       $v0, $s0, 0xD6C
    ctx->pc = 0x1f8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3436));
label_1f8fa4:
    // 0x1f8fa4: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1f8fa4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8fa8:
    // 0x1f8fa8: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1f8fa8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1f8fac:
    // 0x1f8fac: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1f8facu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1f8fb0:
    // 0x1f8fb0: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x1f8fb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1f8fb4:
    // 0x1f8fb4: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1f8fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_1f8fb8:
    // 0x1f8fb8: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1f8fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
label_1f8fbc:
    // 0x1f8fbc: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1f8fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
label_1f8fc0:
    // 0x1f8fc0: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1f8fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
label_1f8fc4:
    // 0x1f8fc4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f8fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1f8fc8:
    // 0x1f8fc8: 0x0  nop
    ctx->pc = 0x1f8fc8u;
    // NOP
label_1f8fcc:
    // 0x1f8fcc: 0x0  nop
    ctx->pc = 0x1f8fccu;
    // NOP
label_1f8fd0:
    // 0x1f8fd0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1f8fd4:
    if (ctx->pc == 0x1F8FD4u) {
        ctx->pc = 0x1F8FD4u;
            // 0x1f8fd4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1F8FD8u;
        goto label_1f8fd8;
    }
    ctx->pc = 0x1F8FD0u;
    {
        const bool branch_taken_0x1f8fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8FD0u;
            // 0x1f8fd4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fd0) {
            ctx->pc = 0x1F8FA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8fa4;
        }
    }
    ctx->pc = 0x1F8FD8u;
label_1f8fd8:
    // 0x1f8fd8: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1f8fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1f8fdc:
    // 0x1f8fdc: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1f8fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1f8fe0:
    // 0x1f8fe0: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1f8fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1f8fe4:
    // 0x1f8fe4: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1f8fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1f8fe8:
    // 0x1f8fe8: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1f8fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1f8fec:
    // 0x1f8fec: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1f8fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1f8ff0:
    // 0x1f8ff0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f8ff4:
    // 0x1f8ff4: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1f8ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8ff8:
    // 0x1f8ff8: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1f8ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8ffc:
    // 0x1f8ffc: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1f8ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9000:
    // 0x1f9000: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1f9000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9004:
    // 0x1f9004: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1f9004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9008:
    // 0x1f9008: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1f9008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f900c:
    // 0x1f900c: 0x27be02a0  addiu       $fp, $sp, 0x2A0
    ctx->pc = 0x1f900cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_1f9010:
    // 0x1f9010: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1f9010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1f9014:
    // 0x1f9014: 0x8e0709fc  lw          $a3, 0x9FC($s0)
    ctx->pc = 0x1f9014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2556)));
label_1f9018:
    // 0x1f9018: 0x6a03133f  ldl         $v1, 0x133F($s0)
    ctx->pc = 0x1f9018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1f901c:
    // 0x1f901c: 0x6e031338  ldr         $v1, 0x1338($s0)
    ctx->pc = 0x1f901cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4920); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1f9020:
    // 0x1f9020: 0x8e041340  lw          $a0, 0x1340($s0)
    ctx->pc = 0x1f9020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
label_1f9024:
    // 0x1f9024: 0xb3c30007  sdl         $v1, 0x7($fp)
    ctx->pc = 0x1f9024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9028:
    // 0x1f9028: 0xb7c30000  sdr         $v1, 0x0($fp)
    ctx->pc = 0x1f9028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f902c:
    // 0x1f902c: 0xafc40008  sw          $a0, 0x8($fp)
    ctx->pc = 0x1f902cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 4));
label_1f9030:
    // 0x1f9030: 0x8e123708  lw          $s2, 0x3708($s0)
    ctx->pc = 0x1f9030u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
label_1f9034:
    // 0x1f9034: 0x8e1609f8  lw          $s6, 0x9F8($s0)
    ctx->pc = 0x1f9034u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2552)));
label_1f9038:
    // 0x1f9038: 0xafa702b4  sw          $a3, 0x2B4($sp)
    ctx->pc = 0x1f9038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 7));
label_1f903c:
    // 0x1f903c: 0x8e08105c  lw          $t0, 0x105C($s0)
    ctx->pc = 0x1f903cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4188)));
label_1f9040:
    // 0x1f9040: 0x8e170d98  lw          $s7, 0xD98($s0)
    ctx->pc = 0x1f9040u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_1f9044:
    // 0x1f9044: 0xafa802b8  sw          $t0, 0x2B8($sp)
    ctx->pc = 0x1f9044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 8));
label_1f9048:
    // 0x1f9048: 0x8e02106c  lw          $v0, 0x106C($s0)
    ctx->pc = 0x1f9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4204)));
label_1f904c:
    // 0x1f904c: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x1f904cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
label_1f9050:
    // 0x1f9050: 0x8e031070  lw          $v1, 0x1070($s0)
    ctx->pc = 0x1f9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4208)));
label_1f9054:
    // 0x1f9054: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x1f9054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
label_1f9058:
    // 0x1f9058: 0x8e040da0  lw          $a0, 0xDA0($s0)
    ctx->pc = 0x1f9058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_1f905c:
    // 0x1f905c: 0xafa402c4  sw          $a0, 0x2C4($sp)
    ctx->pc = 0x1f905cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 4));
label_1f9060:
    // 0x1f9060: 0x8e051034  lw          $a1, 0x1034($s0)
    ctx->pc = 0x1f9060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4148)));
label_1f9064:
    // 0x1f9064: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_1f9068:
    if (ctx->pc == 0x1F9068u) {
        ctx->pc = 0x1F9068u;
            // 0x1f9068: 0xafa502c8  sw          $a1, 0x2C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 5));
        ctx->pc = 0x1F906Cu;
        goto label_1f906c;
    }
    ctx->pc = 0x1F9064u;
    {
        const bool branch_taken_0x1f9064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9064u;
            // 0x1f9068: 0xafa502c8  sw          $a1, 0x2C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9064) {
            ctx->pc = 0x1F9098u;
            goto label_1f9098;
        }
    }
    ctx->pc = 0x1F906Cu;
label_1f906c:
    // 0x1f906c: 0x8e460dd0  lw          $a2, 0xDD0($s2)
    ctx->pc = 0x1f906cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3536)));
label_1f9070:
    // 0x1f9070: 0xafa602cc  sw          $a2, 0x2CC($sp)
    ctx->pc = 0x1f9070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 6));
label_1f9074:
    // 0x1f9074: 0x8e470dc4  lw          $a3, 0xDC4($s2)
    ctx->pc = 0x1f9074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3524)));
label_1f9078:
    // 0x1f9078: 0xafa702d0  sw          $a3, 0x2D0($sp)
    ctx->pc = 0x1f9078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 7));
label_1f907c:
    // 0x1f907c: 0x8e480dc8  lw          $t0, 0xDC8($s2)
    ctx->pc = 0x1f907cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3528)));
label_1f9080:
    // 0x1f9080: 0xafa802d4  sw          $t0, 0x2D4($sp)
    ctx->pc = 0x1f9080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 8));
label_1f9084:
    // 0x1f9084: 0x8e420dcc  lw          $v0, 0xDCC($s2)
    ctx->pc = 0x1f9084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3532)));
label_1f9088:
    // 0x1f9088: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x1f9088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
label_1f908c:
    // 0x1f908c: 0x8e430dd4  lw          $v1, 0xDD4($s2)
    ctx->pc = 0x1f908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3540)));
label_1f9090:
    // 0x1f9090: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f9094:
    if (ctx->pc == 0x1F9094u) {
        ctx->pc = 0x1F9094u;
            // 0x1f9094: 0xafa302dc  sw          $v1, 0x2DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 3));
        ctx->pc = 0x1F9098u;
        goto label_1f9098;
    }
    ctx->pc = 0x1F9090u;
    {
        const bool branch_taken_0x1f9090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9090u;
            // 0x1f9094: 0xafa302dc  sw          $v1, 0x2DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9090) {
            ctx->pc = 0x1F90ACu;
            goto label_1f90ac;
        }
    }
    ctx->pc = 0x1F9098u;
label_1f9098:
    // 0x1f9098: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x1f9098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
label_1f909c:
    // 0x1f909c: 0xafa002d8  sw          $zero, 0x2D8($sp)
    ctx->pc = 0x1f909cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 0));
label_1f90a0:
    // 0x1f90a0: 0xafa002d4  sw          $zero, 0x2D4($sp)
    ctx->pc = 0x1f90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 0));
label_1f90a4:
    // 0x1f90a4: 0xafa002d0  sw          $zero, 0x2D0($sp)
    ctx->pc = 0x1f90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 0));
label_1f90a8:
    // 0x1f90a8: 0xafa002cc  sw          $zero, 0x2CC($sp)
    ctx->pc = 0x1f90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
label_1f90ac:
    // 0x1f90ac: 0x26031414  addiu       $v1, $s0, 0x1414
    ctx->pc = 0x1f90acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5140));
label_1f90b0:
    // 0x1f90b0: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x1f90b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1f90b4:
    // 0x1f90b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f90b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f90b8:
    // 0x1f90b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f90b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f90bc:
    // 0x1f90bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f90bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f90c0:
    // 0x1f90c0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1f90c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f90c4:
    // 0x1f90c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1f90c8:
    // 0x1f90c8: 0xafa202e4  sw          $v0, 0x2E4($sp)
    ctx->pc = 0x1f90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
label_1f90cc:
    // 0x1f90cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f90d0:
    // 0x1f90d0: 0xc07bfb6  jal         func_1EFED8
label_1f90d4:
    if (ctx->pc == 0x1F90D4u) {
        ctx->pc = 0x1F90D4u;
            // 0x1f90d4: 0xafa302e0  sw          $v1, 0x2E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 3));
        ctx->pc = 0x1F90D8u;
        goto label_1f90d8;
    }
    ctx->pc = 0x1F90D0u;
    SET_GPR_U32(ctx, 31, 0x1F90D8u);
    ctx->pc = 0x1F90D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90D0u;
            // 0x1f90d4: 0xafa302e0  sw          $v1, 0x2E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFED8u;
    if (runtime->hasFunction(0x1EFED8u)) {
        auto targetFn = runtime->lookupFunction(0x1EFED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90D8u; }
        if (ctx->pc != 0x1F90D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFED8_0x1efed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90D8u; }
        if (ctx->pc != 0x1F90D8u) { return; }
    }
    ctx->pc = 0x1F90D8u;
label_1f90d8:
    // 0x1f90d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f90d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f90dc:
    // 0x1f90dc: 0xc07e2fc  jal         func_1F8BF0
label_1f90e0:
    if (ctx->pc == 0x1F90E0u) {
        ctx->pc = 0x1F90E0u;
            // 0x1f90e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F90E4u;
        goto label_1f90e4;
    }
    ctx->pc = 0x1F90DCu;
    SET_GPR_U32(ctx, 31, 0x1F90E4u);
    ctx->pc = 0x1F90E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90DCu;
            // 0x1f90e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8BF0u;
    if (runtime->hasFunction(0x1F8BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1F8BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90E4u; }
        if (ctx->pc != 0x1F90E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8BF0_0x1f8bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90E4u; }
        if (ctx->pc != 0x1F90E4u) { return; }
    }
    ctx->pc = 0x1F90E4u;
label_1f90e4:
    // 0x1f90e4: 0x544000ae  bnel        $v0, $zero, . + 4 + (0xAE << 2)
label_1f90e8:
    if (ctx->pc == 0x1F90E8u) {
        ctx->pc = 0x1F90E8u;
            // 0x1f90e8: 0xdfb002f0  ld          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->pc = 0x1F90ECu;
        goto label_1f90ec;
    }
    ctx->pc = 0x1F90E4u;
    {
        const bool branch_taken_0x1f90e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f90e4) {
            ctx->pc = 0x1F90E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90E4u;
            // 0x1f90e8: 0xdfb002f0  ld          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F93A0u;
            goto label_1f93a0;
        }
    }
    ctx->pc = 0x1F90ECu;
label_1f90ec:
    // 0x1f90ec: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1f90ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f90f0:
    // 0x1f90f0: 0x26050b9c  addiu       $a1, $s0, 0xB9C
    ctx->pc = 0x1f90f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2972));
label_1f90f4:
    // 0x1f90f4: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1f90f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1f90f8:
    // 0x1f90f8: 0xc0757de  jal         func_1D5F78
label_1f90fc:
    if (ctx->pc == 0x1F90FCu) {
        ctx->pc = 0x1F90FCu;
            // 0x1f90fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9100u;
        goto label_1f9100;
    }
    ctx->pc = 0x1F90F8u;
    SET_GPR_U32(ctx, 31, 0x1F9100u);
    ctx->pc = 0x1F90FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90F8u;
            // 0x1f90fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9100u; }
        if (ctx->pc != 0x1F9100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9100u; }
        if (ctx->pc != 0x1F9100u) { return; }
    }
    ctx->pc = 0x1F9100u;
label_1f9100:
    // 0x1f9100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9104:
    // 0x1f9104: 0xc07e1c0  jal         func_1F8700
label_1f9108:
    if (ctx->pc == 0x1F9108u) {
        ctx->pc = 0x1F9108u;
            // 0x1f9108: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F910Cu;
        goto label_1f910c;
    }
    ctx->pc = 0x1F9104u;
    SET_GPR_U32(ctx, 31, 0x1F910Cu);
    ctx->pc = 0x1F9108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9104u;
            // 0x1f9108: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8700u;
    if (runtime->hasFunction(0x1F8700u)) {
        auto targetFn = runtime->lookupFunction(0x1F8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F910Cu; }
        if (ctx->pc != 0x1F910Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8700_0x1f8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F910Cu; }
        if (ctx->pc != 0x1F910Cu) { return; }
    }
    ctx->pc = 0x1F910Cu;
label_1f910c:
    // 0x1f910c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f910cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9110:
    // 0x1f9110: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_1f9114:
    if (ctx->pc == 0x1F9114u) {
        ctx->pc = 0x1F9114u;
            // 0x1f9114: 0x26040a0c  addiu       $a0, $s0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
        ctx->pc = 0x1F9118u;
        goto label_1f9118;
    }
    ctx->pc = 0x1F9110u;
    {
        const bool branch_taken_0x1f9110 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9110u;
            // 0x1f9114: 0x26040a0c  addiu       $a0, $s0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9110) {
            ctx->pc = 0x1F9130u;
            goto label_1f9130;
        }
    }
    ctx->pc = 0x1F9118u;
label_1f9118:
    // 0x1f9118: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1f911c:
    // 0x1f911c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9120:
    // 0x1f9120: 0xc07b5c0  jal         func_1ED700
label_1f9124:
    if (ctx->pc == 0x1F9124u) {
        ctx->pc = 0x1F9124u;
            // 0x1f9124: 0x34a50202  ori         $a1, $a1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
        ctx->pc = 0x1F9128u;
        goto label_1f9128;
    }
    ctx->pc = 0x1F9120u;
    SET_GPR_U32(ctx, 31, 0x1F9128u);
    ctx->pc = 0x1F9124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9120u;
            // 0x1f9124: 0x34a50202  ori         $a1, $a1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9128u; }
        if (ctx->pc != 0x1F9128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9128u; }
        if (ctx->pc != 0x1F9128u) { return; }
    }
    ctx->pc = 0x1F9128u;
label_1f9128:
    // 0x1f9128: 0x1000009d  b           . + 4 + (0x9D << 2)
label_1f912c:
    if (ctx->pc == 0x1F912Cu) {
        ctx->pc = 0x1F912Cu;
            // 0x1f912c: 0xdfb002f0  ld          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->pc = 0x1F9130u;
        goto label_1f9130;
    }
    ctx->pc = 0x1F9128u;
    {
        const bool branch_taken_0x1f9128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F912Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9128u;
            // 0x1f912c: 0xdfb002f0  ld          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9128) {
            ctx->pc = 0x1F93A0u;
            goto label_1f93a0;
        }
    }
    ctx->pc = 0x1F9130u;
label_1f9130:
    // 0x1f9130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9134:
    // 0x1f9134: 0xc0757de  jal         func_1D5F78
label_1f9138:
    if (ctx->pc == 0x1F9138u) {
        ctx->pc = 0x1F9138u;
            // 0x1f9138: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->pc = 0x1F913Cu;
        goto label_1f913c;
    }
    ctx->pc = 0x1F9134u;
    SET_GPR_U32(ctx, 31, 0x1F913Cu);
    ctx->pc = 0x1F9138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9134u;
            // 0x1f9138: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F913Cu; }
        if (ctx->pc != 0x1F913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F913Cu; }
        if (ctx->pc != 0x1F913Cu) { return; }
    }
    ctx->pc = 0x1F913Cu;
label_1f913c:
    // 0x1f913c: 0x26040b9c  addiu       $a0, $s0, 0xB9C
    ctx->pc = 0x1f913cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2972));
label_1f9140:
    // 0x1f9140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9144:
    // 0x1f9144: 0xc0757de  jal         func_1D5F78
label_1f9148:
    if (ctx->pc == 0x1F9148u) {
        ctx->pc = 0x1F9148u;
            // 0x1f9148: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->pc = 0x1F914Cu;
        goto label_1f914c;
    }
    ctx->pc = 0x1F9144u;
    SET_GPR_U32(ctx, 31, 0x1F914Cu);
    ctx->pc = 0x1F9148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9144u;
            // 0x1f9148: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F914Cu; }
        if (ctx->pc != 0x1F914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F914Cu; }
        if (ctx->pc != 0x1F914Cu) { return; }
    }
    ctx->pc = 0x1F914Cu;
label_1f914c:
    // 0x1f914c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9150:
    // 0x1f9150: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f9150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f9154:
    // 0x1f9154: 0xc07bfd8  jal         func_1EFF60
label_1f9158:
    if (ctx->pc == 0x1F9158u) {
        ctx->pc = 0x1F9158u;
            // 0x1f9158: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F915Cu;
        goto label_1f915c;
    }
    ctx->pc = 0x1F9154u;
    SET_GPR_U32(ctx, 31, 0x1F915Cu);
    ctx->pc = 0x1F9158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9154u;
            // 0x1f9158: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFF60u;
    if (runtime->hasFunction(0x1EFF60u)) {
        auto targetFn = runtime->lookupFunction(0x1EFF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F915Cu; }
        if (ctx->pc != 0x1F915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFF60_0x1eff60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F915Cu; }
        if (ctx->pc != 0x1F915Cu) { return; }
    }
    ctx->pc = 0x1F915Cu;
label_1f915c:
    // 0x1f915c: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_1f9160:
    if (ctx->pc == 0x1F9160u) {
        ctx->pc = 0x1F9160u;
            // 0x1f9160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9164u;
        goto label_1f9164;
    }
    ctx->pc = 0x1F915Cu;
    {
        const bool branch_taken_0x1f915c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F915Cu;
            // 0x1f9160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f915c) {
            ctx->pc = 0x1F9194u;
            goto label_1f9194;
        }
    }
    ctx->pc = 0x1F9164u;
label_1f9164:
    // 0x1f9164: 0xc07e51e  jal         func_1F9478
label_1f9168:
    if (ctx->pc == 0x1F9168u) {
        ctx->pc = 0x1F9168u;
            // 0x1f9168: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1F916Cu;
        goto label_1f916c;
    }
    ctx->pc = 0x1F9164u;
    SET_GPR_U32(ctx, 31, 0x1F916Cu);
    ctx->pc = 0x1F9168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9164u;
            // 0x1f9168: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9478u;
    if (runtime->hasFunction(0x1F9478u)) {
        auto targetFn = runtime->lookupFunction(0x1F9478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F916Cu; }
        if (ctx->pc != 0x1F916Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9478_0x1f9478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F916Cu; }
        if (ctx->pc != 0x1F916Cu) { return; }
    }
    ctx->pc = 0x1F916Cu;
label_1f916c:
    // 0x1f916c: 0x5440008c  bnel        $v0, $zero, . + 4 + (0x8C << 2)
label_1f9170:
    if (ctx->pc == 0x1F9170u) {
        ctx->pc = 0x1F9170u;
            // 0x1f9170: 0xdfb002f0  ld          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->pc = 0x1F9174u;
        goto label_1f9174;
    }
    ctx->pc = 0x1F916Cu;
    {
        const bool branch_taken_0x1f916c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f916c) {
            ctx->pc = 0x1F9170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F916Cu;
            // 0x1f9170: 0xdfb002f0  ld          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F93A0u;
            goto label_1f93a0;
        }
    }
    ctx->pc = 0x1F9174u;
label_1f9174:
    // 0x1f9174: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x1f9174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1f9178:
    // 0x1f9178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f917c:
    // 0x1f917c: 0xc07e53a  jal         func_1F94E8
label_1f9180:
    if (ctx->pc == 0x1F9180u) {
        ctx->pc = 0x1F9180u;
            // 0x1f9180: 0x8fa502b0  lw          $a1, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->pc = 0x1F9184u;
        goto label_1f9184;
    }
    ctx->pc = 0x1F917Cu;
    SET_GPR_U32(ctx, 31, 0x1F9184u);
    ctx->pc = 0x1F9180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F917Cu;
            // 0x1f9180: 0x8fa502b0  lw          $a1, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F94E8u;
    if (runtime->hasFunction(0x1F94E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F94E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9184u; }
        if (ctx->pc != 0x1F9184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F94E8_0x1f94e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9184u; }
        if (ctx->pc != 0x1F9184u) { return; }
    }
    ctx->pc = 0x1F9184u;
label_1f9184:
    // 0x1f9184: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_1f9188:
    if (ctx->pc == 0x1F9188u) {
        ctx->pc = 0x1F9188u;
            // 0x1f9188: 0xdfb002f0  ld          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->pc = 0x1F918Cu;
        goto label_1f918c;
    }
    ctx->pc = 0x1F9184u;
    {
        const bool branch_taken_0x1f9184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9184) {
            ctx->pc = 0x1F9188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9184u;
            // 0x1f9188: 0xdfb002f0  ld          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F93A0u;
            goto label_1f93a0;
        }
    }
    ctx->pc = 0x1F918Cu;
label_1f918c:
    // 0x1f918c: 0xc07e55a  jal         func_1F9568
label_1f9190:
    if (ctx->pc == 0x1F9190u) {
        ctx->pc = 0x1F9190u;
            // 0x1f9190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9194u;
        goto label_1f9194;
    }
    ctx->pc = 0x1F918Cu;
    SET_GPR_U32(ctx, 31, 0x1F9194u);
    ctx->pc = 0x1F9190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F918Cu;
            // 0x1f9190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9568u;
    if (runtime->hasFunction(0x1F9568u)) {
        auto targetFn = runtime->lookupFunction(0x1F9568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9194u; }
        if (ctx->pc != 0x1F9194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9568_0x1f9568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9194u; }
        if (ctx->pc != 0x1F9194u) { return; }
    }
    ctx->pc = 0x1F9194u;
label_1f9194:
    // 0x1f9194: 0x26040d2c  addiu       $a0, $s0, 0xD2C
    ctx->pc = 0x1f9194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3372));
label_1f9198:
    // 0x1f9198: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1f9198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1f919c:
    // 0x1f919c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1f919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_1f91a0:
    // 0x1f91a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1f91a4:
    if (ctx->pc == 0x1F91A4u) {
        ctx->pc = 0x1F91A4u;
            // 0x1f91a4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F91A8u;
        goto label_1f91a8;
    }
    ctx->pc = 0x1F91A0u;
    {
        const bool branch_taken_0x1f91a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91A0u;
            // 0x1f91a4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91a0) {
            ctx->pc = 0x1F9208u;
            goto label_1f9208;
        }
    }
    ctx->pc = 0x1F91A8u;
label_1f91a8:
    // 0x1f91a8: 0x27a20280  addiu       $v0, $sp, 0x280
    ctx->pc = 0x1f91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1f91ac:
    // 0x1f91ac: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1f91acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1f91b0:
    // 0x1f91b0: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1f91b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1f91b4:
    // 0x1f91b4: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1f91b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1f91b8:
    // 0x1f91b8: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1f91b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1f91bc:
    // 0x1f91bc: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1f91bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1f91c0:
    // 0x1f91c0: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1f91c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1f91c4:
    // 0x1f91c4: 0x6865001f  ldl         $a1, 0x1F($v1)
    ctx->pc = 0x1f91c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1f91c8:
    // 0x1f91c8: 0x6c650018  ldr         $a1, 0x18($v1)
    ctx->pc = 0x1f91c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1f91cc:
    // 0x1f91cc: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1f91ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f91d0:
    // 0x1f91d0: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1f91d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f91d4:
    // 0x1f91d4: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1f91d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f91d8:
    // 0x1f91d8: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1f91d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f91dc:
    // 0x1f91dc: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1f91dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f91e0:
    // 0x1f91e0: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1f91e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f91e4:
    // 0x1f91e4: 0xb085001f  sdl         $a1, 0x1F($a0)
    ctx->pc = 0x1f91e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f91e8:
    // 0x1f91e8: 0xb4850018  sdr         $a1, 0x18($a0)
    ctx->pc = 0x1f91e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f91ec:
    // 0x1f91ec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f91ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1f91f0:
    // 0x1f91f0: 0x0  nop
    ctx->pc = 0x1f91f0u;
    // NOP
label_1f91f4:
    // 0x1f91f4: 0x0  nop
    ctx->pc = 0x1f91f4u;
    // NOP
label_1f91f8:
    // 0x1f91f8: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_1f91fc:
    if (ctx->pc == 0x1F91FCu) {
        ctx->pc = 0x1F91FCu;
            // 0x1f91fc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1F9200u;
        goto label_1f9200;
    }
    ctx->pc = 0x1F91F8u;
    {
        const bool branch_taken_0x1f91f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F91FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91F8u;
            // 0x1f91fc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91f8) {
            ctx->pc = 0x1F91ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f91ac;
        }
    }
    ctx->pc = 0x1F9200u;
label_1f9200:
    // 0x1f9200: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f9204:
    if (ctx->pc == 0x1F9204u) {
        ctx->pc = 0x1F9208u;
        goto label_1f9208;
    }
    ctx->pc = 0x1F9200u;
    {
        const bool branch_taken_0x1f9200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9200) {
            ctx->pc = 0x1F9240u;
            goto label_1f9240;
        }
    }
    ctx->pc = 0x1F9208u;
label_1f9208:
    // 0x1f9208: 0x27a20280  addiu       $v0, $sp, 0x280
    ctx->pc = 0x1f9208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1f920c:
    // 0x1f920c: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1f920cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9210:
    // 0x1f9210: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1f9210u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1f9214:
    // 0x1f9214: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1f9214u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1f9218:
    // 0x1f9218: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x1f9218u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1f921c:
    // 0x1f921c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1f921cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_1f9220:
    // 0x1f9220: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1f9220u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
label_1f9224:
    // 0x1f9224: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1f9224u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
label_1f9228:
    // 0x1f9228: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1f9228u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
label_1f922c:
    // 0x1f922c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1f9230:
    // 0x1f9230: 0x0  nop
    ctx->pc = 0x1f9230u;
    // NOP
label_1f9234:
    // 0x1f9234: 0x0  nop
    ctx->pc = 0x1f9234u;
    // NOP
label_1f9238:
    // 0x1f9238: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1f923c:
    if (ctx->pc == 0x1F923Cu) {
        ctx->pc = 0x1F923Cu;
            // 0x1f923c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1F9240u;
        goto label_1f9240;
    }
    ctx->pc = 0x1F9238u;
    {
        const bool branch_taken_0x1f9238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F923Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9238u;
            // 0x1f923c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9238) {
            ctx->pc = 0x1F920Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f920c;
        }
    }
    ctx->pc = 0x1F9240u;
label_1f9240:
    // 0x1f9240: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1f9240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1f9244:
    // 0x1f9244: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1f9244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1f9248:
    // 0x1f9248: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1f9248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1f924c:
    // 0x1f924c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1f924cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1f9250:
    // 0x1f9250: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1f9250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1f9254:
    // 0x1f9254: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1f9254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1f9258:
    // 0x1f9258: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f9258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f925c:
    // 0x1f925c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1f925cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9260:
    // 0x1f9260: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1f9260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9264:
    // 0x1f9264: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1f9264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9268:
    // 0x1f9268: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1f9268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f926c:
    // 0x1f926c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1f926cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9270:
    // 0x1f9270: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1f9270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9274:
    // 0x1f9274: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1f9274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1f9278:
    // 0x1f9278: 0x8e060d74  lw          $a2, 0xD74($s0)
    ctx->pc = 0x1f9278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_1f927c:
    // 0x1f927c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1f9280:
    if (ctx->pc == 0x1F9280u) {
        ctx->pc = 0x1F9280u;
            // 0x1f9280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9284u;
        goto label_1f9284;
    }
    ctx->pc = 0x1F927Cu;
    {
        const bool branch_taken_0x1f927c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F927Cu;
            // 0x1f9280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f927c) {
            ctx->pc = 0x1F9290u;
            goto label_1f9290;
        }
    }
    ctx->pc = 0x1F9284u;
label_1f9284:
    // 0x1f9284: 0x8e050d7c  lw          $a1, 0xD7C($s0)
    ctx->pc = 0x1f9284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3452)));
label_1f9288:
    // 0x1f9288: 0xc07c092  jal         func_1F0248
label_1f928c:
    if (ctx->pc == 0x1F928Cu) {
        ctx->pc = 0x1F928Cu;
            // 0x1f928c: 0x8e070d78  lw          $a3, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->pc = 0x1F9290u;
        goto label_1f9290;
    }
    ctx->pc = 0x1F9288u;
    SET_GPR_U32(ctx, 31, 0x1F9290u);
    ctx->pc = 0x1F928Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9288u;
            // 0x1f928c: 0x8e070d78  lw          $a3, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0248u;
    if (runtime->hasFunction(0x1F0248u)) {
        auto targetFn = runtime->lookupFunction(0x1F0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9290u; }
        if (ctx->pc != 0x1F9290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0248_0x1f0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9290u; }
        if (ctx->pc != 0x1F9290u) { return; }
    }
    ctx->pc = 0x1F9290u;
label_1f9290:
    // 0x1f9290: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_1f9294:
    if (ctx->pc == 0x1F9294u) {
        ctx->pc = 0x1F9294u;
            // 0x1f9294: 0x8fa602b4  lw          $a2, 0x2B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
        ctx->pc = 0x1F9298u;
        goto label_1f9298;
    }
    ctx->pc = 0x1F9290u;
    {
        const bool branch_taken_0x1f9290 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9290u;
            // 0x1f9294: 0x8fa602b4  lw          $a2, 0x2B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9290) {
            ctx->pc = 0x1F92A4u;
            goto label_1f92a4;
        }
    }
    ctx->pc = 0x1F9298u;
label_1f9298:
    // 0x1f9298: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f9298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f929c:
    // 0x1f929c: 0xc07b5ec  jal         func_1ED7B0
label_1f92a0:
    if (ctx->pc == 0x1F92A0u) {
        ctx->pc = 0x1F92A0u;
            // 0x1f92a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F92A4u;
        goto label_1f92a4;
    }
    ctx->pc = 0x1F929Cu;
    SET_GPR_U32(ctx, 31, 0x1F92A4u);
    ctx->pc = 0x1F92A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F929Cu;
            // 0x1f92a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED7B0u;
    if (runtime->hasFunction(0x1ED7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92A4u; }
        if (ctx->pc != 0x1F92A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED7B0_0x1ed7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92A4u; }
        if (ctx->pc != 0x1F92A4u) { return; }
    }
    ctx->pc = 0x1F92A4u;
label_1f92a4:
    // 0x1f92a4: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_1f92a8:
    if (ctx->pc == 0x1F92A8u) {
        ctx->pc = 0x1F92A8u;
            // 0x1f92a8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F92ACu;
        goto label_1f92ac;
    }
    ctx->pc = 0x1F92A4u;
    {
        const bool branch_taken_0x1f92a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92A4u;
            // 0x1f92a8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92a4) {
            ctx->pc = 0x1F92B4u;
            goto label_1f92b4;
        }
    }
    ctx->pc = 0x1F92ACu;
label_1f92ac:
    // 0x1f92ac: 0xc07f09a  jal         func_1FC268
label_1f92b0:
    if (ctx->pc == 0x1F92B0u) {
        ctx->pc = 0x1F92B0u;
            // 0x1f92b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F92B4u;
        goto label_1f92b4;
    }
    ctx->pc = 0x1F92ACu;
    SET_GPR_U32(ctx, 31, 0x1F92B4u);
    ctx->pc = 0x1F92B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92ACu;
            // 0x1f92b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC268u;
    if (runtime->hasFunction(0x1FC268u)) {
        auto targetFn = runtime->lookupFunction(0x1FC268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92B4u; }
        if (ctx->pc != 0x1F92B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC268_0x1fc268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92B4u; }
        if (ctx->pc != 0x1F92B4u) { return; }
    }
    ctx->pc = 0x1F92B4u;
label_1f92b4:
    // 0x1f92b4: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x1f92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_1f92b8:
    // 0x1f92b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f92bc:
    if (ctx->pc == 0x1F92BCu) {
        ctx->pc = 0x1F92BCu;
            // 0x1f92bc: 0x8fa602bc  lw          $a2, 0x2BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
        ctx->pc = 0x1F92C0u;
        goto label_1f92c0;
    }
    ctx->pc = 0x1F92B8u;
    {
        const bool branch_taken_0x1f92b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92B8u;
            // 0x1f92bc: 0x8fa602bc  lw          $a2, 0x2BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92b8) {
            ctx->pc = 0x1F92D0u;
            goto label_1f92d0;
        }
    }
    ctx->pc = 0x1F92C0u;
label_1f92c0:
    // 0x1f92c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f92c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f92c4:
    // 0x1f92c4: 0x8fa702c0  lw          $a3, 0x2C0($sp)
    ctx->pc = 0x1f92c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_1f92c8:
    // 0x1f92c8: 0xc07f0bc  jal         func_1FC2F0
label_1f92cc:
    if (ctx->pc == 0x1F92CCu) {
        ctx->pc = 0x1F92CCu;
            // 0x1f92cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F92D0u;
        goto label_1f92d0;
    }
    ctx->pc = 0x1F92C8u;
    SET_GPR_U32(ctx, 31, 0x1F92D0u);
    ctx->pc = 0x1F92CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92C8u;
            // 0x1f92cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC2F0u;
    if (runtime->hasFunction(0x1FC2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FC2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92D0u; }
        if (ctx->pc != 0x1F92D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC2F0_0x1fc2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92D0u; }
        if (ctx->pc != 0x1F92D0u) { return; }
    }
    ctx->pc = 0x1F92D0u;
label_1f92d0:
    // 0x1f92d0: 0x8fa402c4  lw          $a0, 0x2C4($sp)
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_1f92d4:
    // 0x1f92d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1f92d8:
    if (ctx->pc == 0x1F92D8u) {
        ctx->pc = 0x1F92D8u;
            // 0x1f92d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F92DCu;
        goto label_1f92dc;
    }
    ctx->pc = 0x1F92D4u;
    {
        const bool branch_taken_0x1f92d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92D4u;
            // 0x1f92d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92d4) {
            ctx->pc = 0x1F92E4u;
            goto label_1f92e4;
        }
    }
    ctx->pc = 0x1F92DCu;
label_1f92dc:
    // 0x1f92dc: 0xc07f07e  jal         func_1FC1F8
label_1f92e0:
    if (ctx->pc == 0x1F92E0u) {
        ctx->pc = 0x1F92E0u;
            // 0x1f92e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F92E4u;
        goto label_1f92e4;
    }
    ctx->pc = 0x1F92DCu;
    SET_GPR_U32(ctx, 31, 0x1F92E4u);
    ctx->pc = 0x1F92E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92DCu;
            // 0x1f92e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC1F8u;
    if (runtime->hasFunction(0x1FC1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FC1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92E4u; }
        if (ctx->pc != 0x1F92E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC1F8_0x1fc1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92E4u; }
        if (ctx->pc != 0x1F92E4u) { return; }
    }
    ctx->pc = 0x1F92E4u;
label_1f92e4:
    // 0x1f92e4: 0x8fa502c8  lw          $a1, 0x2C8($sp)
    ctx->pc = 0x1f92e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_1f92e8:
    // 0x1f92e8: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1f92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1f92ec:
    // 0x1f92ec: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
label_1f92f0:
    if (ctx->pc == 0x1F92F0u) {
        ctx->pc = 0x1F92F0u;
            // 0x1f92f0: 0x8fa202a0  lw          $v0, 0x2A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->pc = 0x1F92F4u;
        goto label_1f92f4;
    }
    ctx->pc = 0x1F92ECu;
    {
        const bool branch_taken_0x1f92ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f92ec) {
            ctx->pc = 0x1F92F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92ECu;
            // 0x1f92f0: 0x8fa202a0  lw          $v0, 0x2A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9300u;
            goto label_1f9300;
        }
    }
    ctx->pc = 0x1F92F4u;
label_1f92f4:
    // 0x1f92f4: 0xc07dcc2  jal         func_1F7308
label_1f92f8:
    if (ctx->pc == 0x1F92F8u) {
        ctx->pc = 0x1F92F8u;
            // 0x1f92f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F92FCu;
        goto label_1f92fc;
    }
    ctx->pc = 0x1F92F4u;
    SET_GPR_U32(ctx, 31, 0x1F92FCu);
    ctx->pc = 0x1F92F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92F4u;
            // 0x1f92f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7308u;
    if (runtime->hasFunction(0x1F7308u)) {
        auto targetFn = runtime->lookupFunction(0x1F7308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92FCu; }
        if (ctx->pc != 0x1F92FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7308_0x1f7308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92FCu; }
        if (ctx->pc != 0x1F92FCu) { return; }
    }
    ctx->pc = 0x1F92FCu;
label_1f92fc:
    // 0x1f92fc: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1f92fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_1f9300:
    // 0x1f9300: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f9304:
    if (ctx->pc == 0x1F9304u) {
        ctx->pc = 0x1F9308u;
        goto label_1f9308;
    }
    ctx->pc = 0x1F9300u;
    {
        const bool branch_taken_0x1f9300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9300) {
            ctx->pc = 0x1F9338u;
            goto label_1f9338;
        }
    }
    ctx->pc = 0x1F9308u;
label_1f9308:
    // 0x1f9308: 0x6bc60007  ldl         $a2, 0x7($fp)
    ctx->pc = 0x1f9308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1f930c:
    // 0x1f930c: 0x6fc60000  ldr         $a2, 0x0($fp)
    ctx->pc = 0x1f930cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1f9310:
    // 0x1f9310: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x1f9310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f9314:
    // 0x1f9314: 0xb206133f  sdl         $a2, 0x133F($s0)
    ctx->pc = 0x1f9314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f9318:
    // 0x1f9318: 0xb6061338  sdr         $a2, 0x1338($s0)
    ctx->pc = 0x1f9318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4920); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f931c:
    // 0x1f931c: 0xae071340  sw          $a3, 0x1340($s0)
    ctx->pc = 0x1f931cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4928), GPR_U32(ctx, 7));
label_1f9320:
    // 0x1f9320: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f9320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f9324:
    // 0x1f9324: 0x8c421788  lw          $v0, 0x1788($v0)
    ctx->pc = 0x1f9324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6024)));
label_1f9328:
    // 0x1f9328: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f932c:
    if (ctx->pc == 0x1F932Cu) {
        ctx->pc = 0x1F9330u;
        goto label_1f9330;
    }
    ctx->pc = 0x1F9328u;
    {
        const bool branch_taken_0x1f9328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9328) {
            ctx->pc = 0x1F9338u;
            goto label_1f9338;
        }
    }
    ctx->pc = 0x1F9330u;
label_1f9330:
    // 0x1f9330: 0x40f809  jalr        $v0
label_1f9334:
    if (ctx->pc == 0x1F9334u) {
        ctx->pc = 0x1F9334u;
            // 0x1f9334: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9338u;
        goto label_1f9338;
    }
    ctx->pc = 0x1F9330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9338u);
        ctx->pc = 0x1F9334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9330u;
            // 0x1f9334: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9338u; }
            if (ctx->pc != 0x1F9338u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9338u;
label_1f9338:
    // 0x1f9338: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_1f933c:
    if (ctx->pc == 0x1F933Cu) {
        ctx->pc = 0x1F933Cu;
            // 0x1f933c: 0x8fa302e0  lw          $v1, 0x2E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->pc = 0x1F9340u;
        goto label_1f9340;
    }
    ctx->pc = 0x1F9338u;
    {
        const bool branch_taken_0x1f9338 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9338u;
            // 0x1f933c: 0x8fa302e0  lw          $v1, 0x2E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9338) {
            ctx->pc = 0x1F9384u;
            goto label_1f9384;
        }
    }
    ctx->pc = 0x1F9340u;
label_1f9340:
    // 0x1f9340: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f9340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f9344:
    // 0x1f9344: 0xc07e81c  jal         func_1FA070
label_1f9348:
    if (ctx->pc == 0x1F9348u) {
        ctx->pc = 0x1F9348u;
            // 0x1f9348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F934Cu;
        goto label_1f934c;
    }
    ctx->pc = 0x1F9344u;
    SET_GPR_U32(ctx, 31, 0x1F934Cu);
    ctx->pc = 0x1F9348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9344u;
            // 0x1f9348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA070u;
    if (runtime->hasFunction(0x1FA070u)) {
        auto targetFn = runtime->lookupFunction(0x1FA070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F934Cu; }
        if (ctx->pc != 0x1F934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA070_0x1fa070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F934Cu; }
        if (ctx->pc != 0x1F934Cu) { return; }
    }
    ctx->pc = 0x1F934Cu;
label_1f934c:
    // 0x1f934c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9350:
    // 0x1f9350: 0xc07ea86  jal         func_1FAA18
label_1f9354:
    if (ctx->pc == 0x1F9354u) {
        ctx->pc = 0x1F9354u;
            // 0x1f9354: 0x8fa502cc  lw          $a1, 0x2CC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
        ctx->pc = 0x1F9358u;
        goto label_1f9358;
    }
    ctx->pc = 0x1F9350u;
    SET_GPR_U32(ctx, 31, 0x1F9358u);
    ctx->pc = 0x1F9354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9350u;
            // 0x1f9354: 0x8fa502cc  lw          $a1, 0x2CC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA18u;
    if (runtime->hasFunction(0x1FAA18u)) {
        auto targetFn = runtime->lookupFunction(0x1FAA18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9358u; }
        if (ctx->pc != 0x1F9358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAA18_0x1faa18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9358u; }
        if (ctx->pc != 0x1F9358u) { return; }
    }
    ctx->pc = 0x1F9358u;
label_1f9358:
    // 0x1f9358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f935c:
    // 0x1f935c: 0xc07ea48  jal         func_1FA920
label_1f9360:
    if (ctx->pc == 0x1F9360u) {
        ctx->pc = 0x1F9360u;
            // 0x1f9360: 0x8fa502d0  lw          $a1, 0x2D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->pc = 0x1F9364u;
        goto label_1f9364;
    }
    ctx->pc = 0x1F935Cu;
    SET_GPR_U32(ctx, 31, 0x1F9364u);
    ctx->pc = 0x1F9360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F935Cu;
            // 0x1f9360: 0x8fa502d0  lw          $a1, 0x2D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA920u;
    if (runtime->hasFunction(0x1FA920u)) {
        auto targetFn = runtime->lookupFunction(0x1FA920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9364u; }
        if (ctx->pc != 0x1F9364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA920_0x1fa920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9364u; }
        if (ctx->pc != 0x1F9364u) { return; }
    }
    ctx->pc = 0x1F9364u;
label_1f9364:
    // 0x1f9364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9368:
    // 0x1f9368: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x1f9368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_1f936c:
    // 0x1f936c: 0xc07ea64  jal         func_1FA990
label_1f9370:
    if (ctx->pc == 0x1F9370u) {
        ctx->pc = 0x1F9370u;
            // 0x1f9370: 0x8fa602d8  lw          $a2, 0x2D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
        ctx->pc = 0x1F9374u;
        goto label_1f9374;
    }
    ctx->pc = 0x1F936Cu;
    SET_GPR_U32(ctx, 31, 0x1F9374u);
    ctx->pc = 0x1F9370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F936Cu;
            // 0x1f9370: 0x8fa602d8  lw          $a2, 0x2D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA990u;
    if (runtime->hasFunction(0x1FA990u)) {
        auto targetFn = runtime->lookupFunction(0x1FA990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9374u; }
        if (ctx->pc != 0x1F9374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA990_0x1fa990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9374u; }
        if (ctx->pc != 0x1F9374u) { return; }
    }
    ctx->pc = 0x1F9374u;
label_1f9374:
    // 0x1f9374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9378:
    // 0x1f9378: 0xc07eaa2  jal         func_1FAA88
label_1f937c:
    if (ctx->pc == 0x1F937Cu) {
        ctx->pc = 0x1F937Cu;
            // 0x1f937c: 0x8fa502dc  lw          $a1, 0x2DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
        ctx->pc = 0x1F9380u;
        goto label_1f9380;
    }
    ctx->pc = 0x1F9378u;
    SET_GPR_U32(ctx, 31, 0x1F9380u);
    ctx->pc = 0x1F937Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9378u;
            // 0x1f937c: 0x8fa502dc  lw          $a1, 0x2DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA88u;
    if (runtime->hasFunction(0x1FAA88u)) {
        auto targetFn = runtime->lookupFunction(0x1FAA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9380u; }
        if (ctx->pc != 0x1F9380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAA88_0x1faa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9380u; }
        if (ctx->pc != 0x1F9380u) { return; }
    }
    ctx->pc = 0x1F9380u;
label_1f9380:
    // 0x1f9380: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x1f9380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_1f9384:
    // 0x1f9384: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1f9388:
    if (ctx->pc == 0x1F9388u) {
        ctx->pc = 0x1F9388u;
            // 0x1f9388: 0x8fa602e4  lw          $a2, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->pc = 0x1F938Cu;
        goto label_1f938c;
    }
    ctx->pc = 0x1F9384u;
    {
        const bool branch_taken_0x1f9384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9384u;
            // 0x1f9388: 0x8fa602e4  lw          $a2, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9384) {
            ctx->pc = 0x1F9398u;
            goto label_1f9398;
        }
    }
    ctx->pc = 0x1F938Cu;
label_1f938c:
    // 0x1f938c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f938cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9390:
    // 0x1f9390: 0xc07e6a6  jal         func_1F9A98
label_1f9394:
    if (ctx->pc == 0x1F9394u) {
        ctx->pc = 0x1F9394u;
            // 0x1f9394: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9398u;
        goto label_1f9398;
    }
    ctx->pc = 0x1F9390u;
    SET_GPR_U32(ctx, 31, 0x1F9398u);
    ctx->pc = 0x1F9394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9390u;
            // 0x1f9394: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9A98u;
    if (runtime->hasFunction(0x1F9A98u)) {
        auto targetFn = runtime->lookupFunction(0x1F9A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9398u; }
        if (ctx->pc != 0x1F9398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9A98_0x1f9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9398u; }
        if (ctx->pc != 0x1F9398u) { return; }
    }
    ctx->pc = 0x1F9398u;
label_1f9398:
    // 0x1f9398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f9398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f939c:
    // 0x1f939c: 0xdfb002f0  ld          $s0, 0x2F0($sp)
    ctx->pc = 0x1f939cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_1f93a0:
    // 0x1f93a0: 0xdfb102f8  ld          $s1, 0x2F8($sp)
    ctx->pc = 0x1f93a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 760)));
label_1f93a4:
    // 0x1f93a4: 0xdfb20300  ld          $s2, 0x300($sp)
    ctx->pc = 0x1f93a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_1f93a8:
    // 0x1f93a8: 0xdfb30308  ld          $s3, 0x308($sp)
    ctx->pc = 0x1f93a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 776)));
label_1f93ac:
    // 0x1f93ac: 0xdfb40310  ld          $s4, 0x310($sp)
    ctx->pc = 0x1f93acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_1f93b0:
    // 0x1f93b0: 0xdfb50318  ld          $s5, 0x318($sp)
    ctx->pc = 0x1f93b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 792)));
label_1f93b4:
    // 0x1f93b4: 0xdfb60320  ld          $s6, 0x320($sp)
    ctx->pc = 0x1f93b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 800)));
label_1f93b8:
    // 0x1f93b8: 0xdfb70328  ld          $s7, 0x328($sp)
    ctx->pc = 0x1f93b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 808)));
label_1f93bc:
    // 0x1f93bc: 0xdfbe0330  ld          $fp, 0x330($sp)
    ctx->pc = 0x1f93bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 816)));
label_1f93c0:
    // 0x1f93c0: 0xdfbf0338  ld          $ra, 0x338($sp)
    ctx->pc = 0x1f93c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 824)));
label_1f93c4:
    // 0x1f93c4: 0x3e00008  jr          $ra
label_1f93c8:
    if (ctx->pc == 0x1F93C8u) {
        ctx->pc = 0x1F93C8u;
            // 0x1f93c8: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = 0x1F93CCu;
        goto label_1f93cc;
    }
    ctx->pc = 0x1F93C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F93C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F93C4u;
            // 0x1f93c8: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F93CCu;
label_1f93cc:
    // 0x1f93cc: 0x0  nop
    ctx->pc = 0x1f93ccu;
    // NOP
    ctx->pc = 0x1f93d0u;
}
