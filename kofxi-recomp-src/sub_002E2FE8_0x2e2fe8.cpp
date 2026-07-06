#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2FE8
// Address: 0x2e2fe8 - 0x2e36a0
void sub_002E2FE8_0x2e2fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2FE8_0x2e2fe8");
#endif

    switch (ctx->pc) {
        case 0x2e2fe8u: goto label_2e2fe8;
        case 0x2e2fecu: goto label_2e2fec;
        case 0x2e2ff0u: goto label_2e2ff0;
        case 0x2e2ff4u: goto label_2e2ff4;
        case 0x2e2ff8u: goto label_2e2ff8;
        case 0x2e2ffcu: goto label_2e2ffc;
        case 0x2e3000u: goto label_2e3000;
        case 0x2e3004u: goto label_2e3004;
        case 0x2e3008u: goto label_2e3008;
        case 0x2e300cu: goto label_2e300c;
        case 0x2e3010u: goto label_2e3010;
        case 0x2e3014u: goto label_2e3014;
        case 0x2e3018u: goto label_2e3018;
        case 0x2e301cu: goto label_2e301c;
        case 0x2e3020u: goto label_2e3020;
        case 0x2e3024u: goto label_2e3024;
        case 0x2e3028u: goto label_2e3028;
        case 0x2e302cu: goto label_2e302c;
        case 0x2e3030u: goto label_2e3030;
        case 0x2e3034u: goto label_2e3034;
        case 0x2e3038u: goto label_2e3038;
        case 0x2e303cu: goto label_2e303c;
        case 0x2e3040u: goto label_2e3040;
        case 0x2e3044u: goto label_2e3044;
        case 0x2e3048u: goto label_2e3048;
        case 0x2e304cu: goto label_2e304c;
        case 0x2e3050u: goto label_2e3050;
        case 0x2e3054u: goto label_2e3054;
        case 0x2e3058u: goto label_2e3058;
        case 0x2e305cu: goto label_2e305c;
        case 0x2e3060u: goto label_2e3060;
        case 0x2e3064u: goto label_2e3064;
        case 0x2e3068u: goto label_2e3068;
        case 0x2e306cu: goto label_2e306c;
        case 0x2e3070u: goto label_2e3070;
        case 0x2e3074u: goto label_2e3074;
        case 0x2e3078u: goto label_2e3078;
        case 0x2e307cu: goto label_2e307c;
        case 0x2e3080u: goto label_2e3080;
        case 0x2e3084u: goto label_2e3084;
        case 0x2e3088u: goto label_2e3088;
        case 0x2e308cu: goto label_2e308c;
        case 0x2e3090u: goto label_2e3090;
        case 0x2e3094u: goto label_2e3094;
        case 0x2e3098u: goto label_2e3098;
        case 0x2e309cu: goto label_2e309c;
        case 0x2e30a0u: goto label_2e30a0;
        case 0x2e30a4u: goto label_2e30a4;
        case 0x2e30a8u: goto label_2e30a8;
        case 0x2e30acu: goto label_2e30ac;
        case 0x2e30b0u: goto label_2e30b0;
        case 0x2e30b4u: goto label_2e30b4;
        case 0x2e30b8u: goto label_2e30b8;
        case 0x2e30bcu: goto label_2e30bc;
        case 0x2e30c0u: goto label_2e30c0;
        case 0x2e30c4u: goto label_2e30c4;
        case 0x2e30c8u: goto label_2e30c8;
        case 0x2e30ccu: goto label_2e30cc;
        case 0x2e30d0u: goto label_2e30d0;
        case 0x2e30d4u: goto label_2e30d4;
        case 0x2e30d8u: goto label_2e30d8;
        case 0x2e30dcu: goto label_2e30dc;
        case 0x2e30e0u: goto label_2e30e0;
        case 0x2e30e4u: goto label_2e30e4;
        case 0x2e30e8u: goto label_2e30e8;
        case 0x2e30ecu: goto label_2e30ec;
        case 0x2e30f0u: goto label_2e30f0;
        case 0x2e30f4u: goto label_2e30f4;
        case 0x2e30f8u: goto label_2e30f8;
        case 0x2e30fcu: goto label_2e30fc;
        case 0x2e3100u: goto label_2e3100;
        case 0x2e3104u: goto label_2e3104;
        case 0x2e3108u: goto label_2e3108;
        case 0x2e310cu: goto label_2e310c;
        case 0x2e3110u: goto label_2e3110;
        case 0x2e3114u: goto label_2e3114;
        case 0x2e3118u: goto label_2e3118;
        case 0x2e311cu: goto label_2e311c;
        case 0x2e3120u: goto label_2e3120;
        case 0x2e3124u: goto label_2e3124;
        case 0x2e3128u: goto label_2e3128;
        case 0x2e312cu: goto label_2e312c;
        case 0x2e3130u: goto label_2e3130;
        case 0x2e3134u: goto label_2e3134;
        case 0x2e3138u: goto label_2e3138;
        case 0x2e313cu: goto label_2e313c;
        case 0x2e3140u: goto label_2e3140;
        case 0x2e3144u: goto label_2e3144;
        case 0x2e3148u: goto label_2e3148;
        case 0x2e314cu: goto label_2e314c;
        case 0x2e3150u: goto label_2e3150;
        case 0x2e3154u: goto label_2e3154;
        case 0x2e3158u: goto label_2e3158;
        case 0x2e315cu: goto label_2e315c;
        case 0x2e3160u: goto label_2e3160;
        case 0x2e3164u: goto label_2e3164;
        case 0x2e3168u: goto label_2e3168;
        case 0x2e316cu: goto label_2e316c;
        case 0x2e3170u: goto label_2e3170;
        case 0x2e3174u: goto label_2e3174;
        case 0x2e3178u: goto label_2e3178;
        case 0x2e317cu: goto label_2e317c;
        case 0x2e3180u: goto label_2e3180;
        case 0x2e3184u: goto label_2e3184;
        case 0x2e3188u: goto label_2e3188;
        case 0x2e318cu: goto label_2e318c;
        case 0x2e3190u: goto label_2e3190;
        case 0x2e3194u: goto label_2e3194;
        case 0x2e3198u: goto label_2e3198;
        case 0x2e319cu: goto label_2e319c;
        case 0x2e31a0u: goto label_2e31a0;
        case 0x2e31a4u: goto label_2e31a4;
        case 0x2e31a8u: goto label_2e31a8;
        case 0x2e31acu: goto label_2e31ac;
        case 0x2e31b0u: goto label_2e31b0;
        case 0x2e31b4u: goto label_2e31b4;
        case 0x2e31b8u: goto label_2e31b8;
        case 0x2e31bcu: goto label_2e31bc;
        case 0x2e31c0u: goto label_2e31c0;
        case 0x2e31c4u: goto label_2e31c4;
        case 0x2e31c8u: goto label_2e31c8;
        case 0x2e31ccu: goto label_2e31cc;
        case 0x2e31d0u: goto label_2e31d0;
        case 0x2e31d4u: goto label_2e31d4;
        case 0x2e31d8u: goto label_2e31d8;
        case 0x2e31dcu: goto label_2e31dc;
        case 0x2e31e0u: goto label_2e31e0;
        case 0x2e31e4u: goto label_2e31e4;
        case 0x2e31e8u: goto label_2e31e8;
        case 0x2e31ecu: goto label_2e31ec;
        case 0x2e31f0u: goto label_2e31f0;
        case 0x2e31f4u: goto label_2e31f4;
        case 0x2e31f8u: goto label_2e31f8;
        case 0x2e31fcu: goto label_2e31fc;
        case 0x2e3200u: goto label_2e3200;
        case 0x2e3204u: goto label_2e3204;
        case 0x2e3208u: goto label_2e3208;
        case 0x2e320cu: goto label_2e320c;
        case 0x2e3210u: goto label_2e3210;
        case 0x2e3214u: goto label_2e3214;
        case 0x2e3218u: goto label_2e3218;
        case 0x2e321cu: goto label_2e321c;
        case 0x2e3220u: goto label_2e3220;
        case 0x2e3224u: goto label_2e3224;
        case 0x2e3228u: goto label_2e3228;
        case 0x2e322cu: goto label_2e322c;
        case 0x2e3230u: goto label_2e3230;
        case 0x2e3234u: goto label_2e3234;
        case 0x2e3238u: goto label_2e3238;
        case 0x2e323cu: goto label_2e323c;
        case 0x2e3240u: goto label_2e3240;
        case 0x2e3244u: goto label_2e3244;
        case 0x2e3248u: goto label_2e3248;
        case 0x2e324cu: goto label_2e324c;
        case 0x2e3250u: goto label_2e3250;
        case 0x2e3254u: goto label_2e3254;
        case 0x2e3258u: goto label_2e3258;
        case 0x2e325cu: goto label_2e325c;
        case 0x2e3260u: goto label_2e3260;
        case 0x2e3264u: goto label_2e3264;
        case 0x2e3268u: goto label_2e3268;
        case 0x2e326cu: goto label_2e326c;
        case 0x2e3270u: goto label_2e3270;
        case 0x2e3274u: goto label_2e3274;
        case 0x2e3278u: goto label_2e3278;
        case 0x2e327cu: goto label_2e327c;
        case 0x2e3280u: goto label_2e3280;
        case 0x2e3284u: goto label_2e3284;
        case 0x2e3288u: goto label_2e3288;
        case 0x2e328cu: goto label_2e328c;
        case 0x2e3290u: goto label_2e3290;
        case 0x2e3294u: goto label_2e3294;
        case 0x2e3298u: goto label_2e3298;
        case 0x2e329cu: goto label_2e329c;
        case 0x2e32a0u: goto label_2e32a0;
        case 0x2e32a4u: goto label_2e32a4;
        case 0x2e32a8u: goto label_2e32a8;
        case 0x2e32acu: goto label_2e32ac;
        case 0x2e32b0u: goto label_2e32b0;
        case 0x2e32b4u: goto label_2e32b4;
        case 0x2e32b8u: goto label_2e32b8;
        case 0x2e32bcu: goto label_2e32bc;
        case 0x2e32c0u: goto label_2e32c0;
        case 0x2e32c4u: goto label_2e32c4;
        case 0x2e32c8u: goto label_2e32c8;
        case 0x2e32ccu: goto label_2e32cc;
        case 0x2e32d0u: goto label_2e32d0;
        case 0x2e32d4u: goto label_2e32d4;
        case 0x2e32d8u: goto label_2e32d8;
        case 0x2e32dcu: goto label_2e32dc;
        case 0x2e32e0u: goto label_2e32e0;
        case 0x2e32e4u: goto label_2e32e4;
        case 0x2e32e8u: goto label_2e32e8;
        case 0x2e32ecu: goto label_2e32ec;
        case 0x2e32f0u: goto label_2e32f0;
        case 0x2e32f4u: goto label_2e32f4;
        case 0x2e32f8u: goto label_2e32f8;
        case 0x2e32fcu: goto label_2e32fc;
        case 0x2e3300u: goto label_2e3300;
        case 0x2e3304u: goto label_2e3304;
        case 0x2e3308u: goto label_2e3308;
        case 0x2e330cu: goto label_2e330c;
        case 0x2e3310u: goto label_2e3310;
        case 0x2e3314u: goto label_2e3314;
        case 0x2e3318u: goto label_2e3318;
        case 0x2e331cu: goto label_2e331c;
        case 0x2e3320u: goto label_2e3320;
        case 0x2e3324u: goto label_2e3324;
        case 0x2e3328u: goto label_2e3328;
        case 0x2e332cu: goto label_2e332c;
        case 0x2e3330u: goto label_2e3330;
        case 0x2e3334u: goto label_2e3334;
        case 0x2e3338u: goto label_2e3338;
        case 0x2e333cu: goto label_2e333c;
        case 0x2e3340u: goto label_2e3340;
        case 0x2e3344u: goto label_2e3344;
        case 0x2e3348u: goto label_2e3348;
        case 0x2e334cu: goto label_2e334c;
        case 0x2e3350u: goto label_2e3350;
        case 0x2e3354u: goto label_2e3354;
        case 0x2e3358u: goto label_2e3358;
        case 0x2e335cu: goto label_2e335c;
        case 0x2e3360u: goto label_2e3360;
        case 0x2e3364u: goto label_2e3364;
        case 0x2e3368u: goto label_2e3368;
        case 0x2e336cu: goto label_2e336c;
        case 0x2e3370u: goto label_2e3370;
        case 0x2e3374u: goto label_2e3374;
        case 0x2e3378u: goto label_2e3378;
        case 0x2e337cu: goto label_2e337c;
        case 0x2e3380u: goto label_2e3380;
        case 0x2e3384u: goto label_2e3384;
        case 0x2e3388u: goto label_2e3388;
        case 0x2e338cu: goto label_2e338c;
        case 0x2e3390u: goto label_2e3390;
        case 0x2e3394u: goto label_2e3394;
        case 0x2e3398u: goto label_2e3398;
        case 0x2e339cu: goto label_2e339c;
        case 0x2e33a0u: goto label_2e33a0;
        case 0x2e33a4u: goto label_2e33a4;
        case 0x2e33a8u: goto label_2e33a8;
        case 0x2e33acu: goto label_2e33ac;
        case 0x2e33b0u: goto label_2e33b0;
        case 0x2e33b4u: goto label_2e33b4;
        case 0x2e33b8u: goto label_2e33b8;
        case 0x2e33bcu: goto label_2e33bc;
        case 0x2e33c0u: goto label_2e33c0;
        case 0x2e33c4u: goto label_2e33c4;
        case 0x2e33c8u: goto label_2e33c8;
        case 0x2e33ccu: goto label_2e33cc;
        case 0x2e33d0u: goto label_2e33d0;
        case 0x2e33d4u: goto label_2e33d4;
        case 0x2e33d8u: goto label_2e33d8;
        case 0x2e33dcu: goto label_2e33dc;
        case 0x2e33e0u: goto label_2e33e0;
        case 0x2e33e4u: goto label_2e33e4;
        case 0x2e33e8u: goto label_2e33e8;
        case 0x2e33ecu: goto label_2e33ec;
        case 0x2e33f0u: goto label_2e33f0;
        case 0x2e33f4u: goto label_2e33f4;
        case 0x2e33f8u: goto label_2e33f8;
        case 0x2e33fcu: goto label_2e33fc;
        case 0x2e3400u: goto label_2e3400;
        case 0x2e3404u: goto label_2e3404;
        case 0x2e3408u: goto label_2e3408;
        case 0x2e340cu: goto label_2e340c;
        case 0x2e3410u: goto label_2e3410;
        case 0x2e3414u: goto label_2e3414;
        case 0x2e3418u: goto label_2e3418;
        case 0x2e341cu: goto label_2e341c;
        case 0x2e3420u: goto label_2e3420;
        case 0x2e3424u: goto label_2e3424;
        case 0x2e3428u: goto label_2e3428;
        case 0x2e342cu: goto label_2e342c;
        case 0x2e3430u: goto label_2e3430;
        case 0x2e3434u: goto label_2e3434;
        case 0x2e3438u: goto label_2e3438;
        case 0x2e343cu: goto label_2e343c;
        case 0x2e3440u: goto label_2e3440;
        case 0x2e3444u: goto label_2e3444;
        case 0x2e3448u: goto label_2e3448;
        case 0x2e344cu: goto label_2e344c;
        case 0x2e3450u: goto label_2e3450;
        case 0x2e3454u: goto label_2e3454;
        case 0x2e3458u: goto label_2e3458;
        case 0x2e345cu: goto label_2e345c;
        case 0x2e3460u: goto label_2e3460;
        case 0x2e3464u: goto label_2e3464;
        case 0x2e3468u: goto label_2e3468;
        case 0x2e346cu: goto label_2e346c;
        case 0x2e3470u: goto label_2e3470;
        case 0x2e3474u: goto label_2e3474;
        case 0x2e3478u: goto label_2e3478;
        case 0x2e347cu: goto label_2e347c;
        case 0x2e3480u: goto label_2e3480;
        case 0x2e3484u: goto label_2e3484;
        case 0x2e3488u: goto label_2e3488;
        case 0x2e348cu: goto label_2e348c;
        case 0x2e3490u: goto label_2e3490;
        case 0x2e3494u: goto label_2e3494;
        case 0x2e3498u: goto label_2e3498;
        case 0x2e349cu: goto label_2e349c;
        case 0x2e34a0u: goto label_2e34a0;
        case 0x2e34a4u: goto label_2e34a4;
        case 0x2e34a8u: goto label_2e34a8;
        case 0x2e34acu: goto label_2e34ac;
        case 0x2e34b0u: goto label_2e34b0;
        case 0x2e34b4u: goto label_2e34b4;
        case 0x2e34b8u: goto label_2e34b8;
        case 0x2e34bcu: goto label_2e34bc;
        case 0x2e34c0u: goto label_2e34c0;
        case 0x2e34c4u: goto label_2e34c4;
        case 0x2e34c8u: goto label_2e34c8;
        case 0x2e34ccu: goto label_2e34cc;
        case 0x2e34d0u: goto label_2e34d0;
        case 0x2e34d4u: goto label_2e34d4;
        case 0x2e34d8u: goto label_2e34d8;
        case 0x2e34dcu: goto label_2e34dc;
        case 0x2e34e0u: goto label_2e34e0;
        case 0x2e34e4u: goto label_2e34e4;
        case 0x2e34e8u: goto label_2e34e8;
        case 0x2e34ecu: goto label_2e34ec;
        case 0x2e34f0u: goto label_2e34f0;
        case 0x2e34f4u: goto label_2e34f4;
        case 0x2e34f8u: goto label_2e34f8;
        case 0x2e34fcu: goto label_2e34fc;
        case 0x2e3500u: goto label_2e3500;
        case 0x2e3504u: goto label_2e3504;
        case 0x2e3508u: goto label_2e3508;
        case 0x2e350cu: goto label_2e350c;
        case 0x2e3510u: goto label_2e3510;
        case 0x2e3514u: goto label_2e3514;
        case 0x2e3518u: goto label_2e3518;
        case 0x2e351cu: goto label_2e351c;
        case 0x2e3520u: goto label_2e3520;
        case 0x2e3524u: goto label_2e3524;
        case 0x2e3528u: goto label_2e3528;
        case 0x2e352cu: goto label_2e352c;
        case 0x2e3530u: goto label_2e3530;
        case 0x2e3534u: goto label_2e3534;
        case 0x2e3538u: goto label_2e3538;
        case 0x2e353cu: goto label_2e353c;
        case 0x2e3540u: goto label_2e3540;
        case 0x2e3544u: goto label_2e3544;
        case 0x2e3548u: goto label_2e3548;
        case 0x2e354cu: goto label_2e354c;
        case 0x2e3550u: goto label_2e3550;
        case 0x2e3554u: goto label_2e3554;
        case 0x2e3558u: goto label_2e3558;
        case 0x2e355cu: goto label_2e355c;
        case 0x2e3560u: goto label_2e3560;
        case 0x2e3564u: goto label_2e3564;
        case 0x2e3568u: goto label_2e3568;
        case 0x2e356cu: goto label_2e356c;
        case 0x2e3570u: goto label_2e3570;
        case 0x2e3574u: goto label_2e3574;
        case 0x2e3578u: goto label_2e3578;
        case 0x2e357cu: goto label_2e357c;
        case 0x2e3580u: goto label_2e3580;
        case 0x2e3584u: goto label_2e3584;
        case 0x2e3588u: goto label_2e3588;
        case 0x2e358cu: goto label_2e358c;
        case 0x2e3590u: goto label_2e3590;
        case 0x2e3594u: goto label_2e3594;
        case 0x2e3598u: goto label_2e3598;
        case 0x2e359cu: goto label_2e359c;
        case 0x2e35a0u: goto label_2e35a0;
        case 0x2e35a4u: goto label_2e35a4;
        case 0x2e35a8u: goto label_2e35a8;
        case 0x2e35acu: goto label_2e35ac;
        case 0x2e35b0u: goto label_2e35b0;
        case 0x2e35b4u: goto label_2e35b4;
        case 0x2e35b8u: goto label_2e35b8;
        case 0x2e35bcu: goto label_2e35bc;
        case 0x2e35c0u: goto label_2e35c0;
        case 0x2e35c4u: goto label_2e35c4;
        case 0x2e35c8u: goto label_2e35c8;
        case 0x2e35ccu: goto label_2e35cc;
        case 0x2e35d0u: goto label_2e35d0;
        case 0x2e35d4u: goto label_2e35d4;
        case 0x2e35d8u: goto label_2e35d8;
        case 0x2e35dcu: goto label_2e35dc;
        case 0x2e35e0u: goto label_2e35e0;
        case 0x2e35e4u: goto label_2e35e4;
        case 0x2e35e8u: goto label_2e35e8;
        case 0x2e35ecu: goto label_2e35ec;
        case 0x2e35f0u: goto label_2e35f0;
        case 0x2e35f4u: goto label_2e35f4;
        case 0x2e35f8u: goto label_2e35f8;
        case 0x2e35fcu: goto label_2e35fc;
        case 0x2e3600u: goto label_2e3600;
        case 0x2e3604u: goto label_2e3604;
        case 0x2e3608u: goto label_2e3608;
        case 0x2e360cu: goto label_2e360c;
        case 0x2e3610u: goto label_2e3610;
        case 0x2e3614u: goto label_2e3614;
        case 0x2e3618u: goto label_2e3618;
        case 0x2e361cu: goto label_2e361c;
        case 0x2e3620u: goto label_2e3620;
        case 0x2e3624u: goto label_2e3624;
        case 0x2e3628u: goto label_2e3628;
        case 0x2e362cu: goto label_2e362c;
        case 0x2e3630u: goto label_2e3630;
        case 0x2e3634u: goto label_2e3634;
        case 0x2e3638u: goto label_2e3638;
        case 0x2e363cu: goto label_2e363c;
        case 0x2e3640u: goto label_2e3640;
        case 0x2e3644u: goto label_2e3644;
        case 0x2e3648u: goto label_2e3648;
        case 0x2e364cu: goto label_2e364c;
        case 0x2e3650u: goto label_2e3650;
        case 0x2e3654u: goto label_2e3654;
        case 0x2e3658u: goto label_2e3658;
        case 0x2e365cu: goto label_2e365c;
        case 0x2e3660u: goto label_2e3660;
        case 0x2e3664u: goto label_2e3664;
        case 0x2e3668u: goto label_2e3668;
        case 0x2e366cu: goto label_2e366c;
        case 0x2e3670u: goto label_2e3670;
        case 0x2e3674u: goto label_2e3674;
        case 0x2e3678u: goto label_2e3678;
        case 0x2e367cu: goto label_2e367c;
        case 0x2e3680u: goto label_2e3680;
        case 0x2e3684u: goto label_2e3684;
        case 0x2e3688u: goto label_2e3688;
        case 0x2e368cu: goto label_2e368c;
        case 0x2e3690u: goto label_2e3690;
        case 0x2e3694u: goto label_2e3694;
        case 0x2e3698u: goto label_2e3698;
        case 0x2e369cu: goto label_2e369c;
        default: break;
    }

    ctx->pc = 0x2e2fe8u;

label_2e2fe8:
    // 0x2e2fe8: 0x27bdfa70  addiu       $sp, $sp, -0x590
    ctx->pc = 0x2e2fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965872));
label_2e2fec:
    // 0x2e2fec: 0xffb00540  sd          $s0, 0x540($sp)
    ctx->pc = 0x2e2fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1344), GPR_U64(ctx, 16));
label_2e2ff0:
    // 0x2e2ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2ff4:
    // 0x2e2ff4: 0xffb20550  sd          $s2, 0x550($sp)
    ctx->pc = 0x2e2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1360), GPR_U64(ctx, 18));
label_2e2ff8:
    // 0x2e2ff8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e2ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e2ffc:
    // 0x2e2ffc: 0xffb30558  sd          $s3, 0x558($sp)
    ctx->pc = 0x2e2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1368), GPR_U64(ctx, 19));
label_2e3000:
    // 0x2e3000: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e3000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e3004:
    // 0x2e3004: 0xffb10548  sd          $s1, 0x548($sp)
    ctx->pc = 0x2e3004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1352), GPR_U64(ctx, 17));
label_2e3008:
    // 0x2e3008: 0xffb40560  sd          $s4, 0x560($sp)
    ctx->pc = 0x2e3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1376), GPR_U64(ctx, 20));
label_2e300c:
    // 0x2e300c: 0xffb50568  sd          $s5, 0x568($sp)
    ctx->pc = 0x2e300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1384), GPR_U64(ctx, 21));
label_2e3010:
    // 0x2e3010: 0xffbf0570  sd          $ra, 0x570($sp)
    ctx->pc = 0x2e3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1392), GPR_U64(ctx, 31));
label_2e3014:
    // 0x2e3014: 0xe7b60588  swc1        $f22, 0x588($sp)
    ctx->pc = 0x2e3014u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_2e3018:
    // 0x2e3018: 0xe7b50580  swc1        $f21, 0x580($sp)
    ctx->pc = 0x2e3018u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_2e301c:
    // 0x2e301c: 0xe7b40578  swc1        $f20, 0x578($sp)
    ctx->pc = 0x2e301cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_2e3020:
    // 0x2e3020: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e3020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
label_2e3024:
    // 0x2e3024: 0x2463306c  addiu       $v1, $v1, 0x306C
    ctx->pc = 0x2e3024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12396));
label_2e3028:
    // 0x2e3028: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e3028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e302c:
    // 0x2e302c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2e3030:
    if (ctx->pc == 0x2E3030u) {
        ctx->pc = 0x2E3034u;
        goto label_2e3034;
    }
    ctx->pc = 0x2E302Cu;
    {
        const bool branch_taken_0x2e302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e302c) {
            ctx->pc = 0x2E304Cu;
            goto label_2e304c;
        }
    }
    ctx->pc = 0x2E3034u;
label_2e3034:
    // 0x2e3034: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e3034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
label_2e3038:
    // 0x2e3038: 0x24843080  addiu       $a0, $a0, 0x3080
    ctx->pc = 0x2e3038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12416));
label_2e303c:
    // 0x2e303c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e303cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e3040:
    // 0x2e3040: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e3040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e3044:
    // 0x2e3044: 0xc0b63f0  jal         func_2D8FC0
label_2e3048:
    if (ctx->pc == 0x2E3048u) {
        ctx->pc = 0x2E3048u;
            // 0x2e3048: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x2E304Cu;
        goto label_2e304c;
    }
    ctx->pc = 0x2E3044u;
    SET_GPR_U32(ctx, 31, 0x2E304Cu);
    ctx->pc = 0x2E3048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3044u;
            // 0x2e3048: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E304Cu; }
        if (ctx->pc != 0x2E304Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E304Cu; }
        if (ctx->pc != 0x2E304Cu) { return; }
    }
    ctx->pc = 0x2E304Cu;
label_2e304c:
    // 0x2e304c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e3050:
    if (ctx->pc == 0x2E3050u) {
        ctx->pc = 0x2E3054u;
        goto label_2e3054;
    }
    ctx->pc = 0x2E304Cu;
    {
        const bool branch_taken_0x2e304c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e304c) {
            ctx->pc = 0x2E3080u;
            goto label_2e3080;
        }
    }
    ctx->pc = 0x2E3054u;
label_2e3054:
    // 0x2e3054: 0x8df45f5d  lw          $s4, 0x5F5D($t7)
    ctx->pc = 0x2e3054u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24413)));
label_2e3058:
    // 0x2e3058: 0x1c36020  add         $t4, $t6, $v1
    ctx->pc = 0x2e3058u;
    {     int32_t rs_val = GPR_S32(ctx, 14);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2e305c:
    // 0x2e305c: 0xc02adf8  jal         func_0AB7E0
label_2e3060:
    if (ctx->pc == 0x2E3060u) {
        ctx->pc = 0x2E3060u;
            // 0x2e3060: 0xcec5c64  jal         func_3B17190 (Delay Slot)
        // JAL 0x3B17190 - Handled by branch logic
        ctx->pc = 0x2E3064u;
        goto label_2e3064;
    }
    ctx->pc = 0x2E305Cu;
    SET_GPR_U32(ctx, 31, 0x2E3064u);
    ctx->pc = 0x2E3060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E305Cu;
            // 0x2e3060: 0xcec5c64  jal         func_3B17190 (Delay Slot)
        // JAL 0x3B17190 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xAB7E0u;
    {
        auto targetFn = runtime->lookupFunction(0xAB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3064u; }
        if (ctx->pc != 0x2E3064u) { return; }
    }
    ctx->pc = 0x2E3064u;
label_2e3064:
    // 0x2e3064: 0xa18d58b9  sb          $t5, 0x58B9($t4)
    ctx->pc = 0x2e3064u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 22713), (uint8_t)GPR_U32(ctx, 13));
label_2e3068:
    // 0x2e3068: 0xc0f5520  jal         func_3D5480
label_2e306c:
    if (ctx->pc == 0x2E306Cu) {
        ctx->pc = 0x2E3070u;
        goto label_2e3070;
    }
    ctx->pc = 0x2E3068u;
    SET_GPR_U32(ctx, 31, 0x2E3070u);
    ctx->pc = 0x3D5480u;
    if (runtime->hasFunction(0x3D5480u)) {
        auto targetFn = runtime->lookupFunction(0x3D5480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3070u; }
        if (ctx->pc != 0x2E3070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D5480_0x3d5480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3070u; }
        if (ctx->pc != 0x2E3070u) { return; }
    }
    ctx->pc = 0x2E3070u;
label_2e3070:
    // 0x2e3070: 0x722c42a  bltzl       $t9, . + 4 + (-0x3BD6 << 2)
label_2e3074:
    if (ctx->pc == 0x2E3074u) {
        ctx->pc = 0x2E3074u;
            // 0x2e3074: 0xca1600da  lwc2        $22, 0xDA($s0) (Delay Slot)
        // Unhandled opcode: 0x32
        ctx->pc = 0x2E3078u;
        goto label_2e3078;
    }
    ctx->pc = 0x2E3070u;
    {
        const bool branch_taken_0x2e3070 = (GPR_S32(ctx, 25) < 0);
        if (branch_taken_0x2e3070) {
            ctx->pc = 0x2E3074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3070u;
            // 0x2e3074: 0xca1600da  lwc2        $22, 0xDA($s0) (Delay Slot)
        // Unhandled opcode: 0x32
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D411Cu;
            return;
        }
    }
    ctx->pc = 0x2E3078u;
label_2e3078:
    // 0x2e3078: 0x722c656  bltzl       $t9, . + 4 + (-0x39AA << 2)
label_2e307c:
    if (ctx->pc == 0x2E307Cu) {
        ctx->pc = 0x2E3080u;
        goto label_2e3080;
    }
    ctx->pc = 0x2E3078u;
    {
        const bool branch_taken_0x2e3078 = (GPR_S32(ctx, 25) < 0);
        if (branch_taken_0x2e3078) {
            ctx->pc = 0x2D49D4u;
            return;
        }
    }
    ctx->pc = 0x2E3080u;
label_2e3080:
    // 0x2e3080: 0x14028014  bne         $zero, $v0, . + 4 + (-0x7FEC << 2)
label_2e3084:
    if (ctx->pc == 0x2E3084u) {
        ctx->pc = 0x2E3084u;
            // 0x2e3084: 0x83d81040  lb          $t8, 0x1040($fp) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4160)));
        ctx->pc = 0x2E3088u;
        goto label_2e3088;
    }
    ctx->pc = 0x2E3080u;
    {
        const bool branch_taken_0x2e3080 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3080u;
            // 0x2e3084: 0x83d81040  lb          $t8, 0x1040($fp) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3080) {
            ctx->pc = 0x2C30D4u;
            return;
        }
    }
    ctx->pc = 0x2E3088u;
label_2e3088:
    // 0x2e3088: 0x89008012  lwl         $zero, -0x7FEE($t0)
    ctx->pc = 0x2e3088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294934546); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_2e308c:
    // 0x2e308c: 0x91108012  lbu         $s0, -0x7FEE($t0)
    ctx->pc = 0x2e308cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294934546)));
label_2e3090:
    // 0x2e3090: 0x80204801  lb          $zero, 0x4801($at)
    ctx->pc = 0x2e3090u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18433)));
label_2e3094:
    // 0x2e3094: 0x82509002  lb          $s0, -0x6FFE($s2)
    ctx->pc = 0x2e3094u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294938626)));
label_2e3098:
    // 0x2e3098: 0x2501601  .word       0x02501601                   # INVALID     $s2, $s0, 0x1601 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e3098u;
    // Unhandled SPECIAL instruction: 0x1
label_2e309c:
    // 0x2e309c: 0x7e210bfc  sq          $at, 0xBFC($s1)
    ctx->pc = 0x2e309cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3068), GPR_VEC(ctx, 1));
label_2e30a0:
    // 0x2e30a0: 0x80405001  lb          $zero, 0x5001($v0)
    ctx->pc = 0x2e30a0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20481)));
label_2e30a4:
    // 0x2e30a4: 0x3d81242  .word       0x03D81242                   # srl         $v0, $t8, 9 # 03C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 24), 9));
label_2e30a8:
    // 0x2e30a8: 0xfe0b93fe  sd          $t3, -0x6C02($s0)
    ctx->pc = 0x2e30a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294939646), GPR_U64(ctx, 11));
label_2e30ac:
    // 0x2e30ac: 0xc0b87c6  jal         func_2E1F18
label_2e30b0:
    if (ctx->pc == 0x2E30B0u) {
        ctx->pc = 0x2E30B0u;
            // 0x2e30b0: 0x11428014  beq         $t2, $v0, . + 4 + (-0x7FEC << 2) (Delay Slot)
        // Likely branch instruction at 0x2E30B0 - Handled by branch logic
        ctx->pc = 0x2E30B4u;
        goto label_2e30b4;
    }
    ctx->pc = 0x2E30ACu;
    SET_GPR_U32(ctx, 31, 0x2E30B4u);
    ctx->pc = 0x2E30B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30ACu;
            // 0x2e30b0: 0x11428014  beq         $t2, $v0, . + 4 + (-0x7FEC << 2) (Delay Slot)
        // Likely branch instruction at 0x2E30B0 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F18u;
    if (runtime->hasFunction(0x2E1F18u)) {
        auto targetFn = runtime->lookupFunction(0x2E1F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30B4u; }
        if (ctx->pc != 0x2E30B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1F18_0x2e1f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30B4u; }
        if (ctx->pc != 0x2E30B4u) { return; }
    }
    ctx->pc = 0x2E30B4u;
label_2e30b4:
    // 0x2e30b4: 0x2230018  mult        $zero, $s1, $v1
    ctx->pc = 0x2e30b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2e30b8:
    // 0x2e30b8: 0x82011053  lb          $at, 0x1053($s0)
    ctx->pc = 0x2e30b8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4179)));
label_2e30bc:
    // 0x2e30bc: 0x7e001a02  sq          $zero, 0x1A02($s0)
    ctx->pc = 0x2e30bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 6658), GPR_VEC(ctx, 0));
label_2e30c0:
    // 0x2e30c0: 0x10488010  beq         $v0, $t0, . + 4 + (-0x7FF0 << 2)
label_2e30c4:
    if (ctx->pc == 0x2E30C4u) {
        ctx->pc = 0x2E30C4u;
            // 0x2e30c4: 0x82001042  lb          $zero, 0x1042($s0) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4162)));
        ctx->pc = 0x2E30C8u;
        goto label_2e30c8;
    }
    ctx->pc = 0x2E30C0u;
    {
        const bool branch_taken_0x2e30c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x2E30C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30C0u;
            // 0x2e30c4: 0x82001042  lb          $zero, 0x1042($s0) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4162)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30c0) {
            ctx->pc = 0x2C3104u;
            return;
        }
    }
    ctx->pc = 0x2E30C8u;
label_2e30c8:
    // 0x2e30c8: 0x19428014  .word       0x19428014                   # blez        $t2, . + 4 + (-0x7FEC << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_2e30cc:
    if (ctx->pc == 0x2E30CCu) {
        ctx->pc = 0x2E30CCu;
            // 0x2e30cc: 0x21d28014  addi        $s2, $t6, -0x7FEC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 14), (int32_t)4294934548, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
        ctx->pc = 0x2E30D0u;
        goto label_2e30d0;
    }
    ctx->pc = 0x2E30C8u;
    {
        const bool branch_taken_0x2e30c8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2E30CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30C8u;
            // 0x2e30cc: 0x21d28014  addi        $s2, $t6, -0x7FEC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 14), (int32_t)4294934548, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30c8) {
            ctx->pc = 0x2C311Cu;
            return;
        }
    }
    ctx->pc = 0x2E30D0u;
label_2e30d0:
    // 0x2e30d0: 0x82041040  lb          $a0, 0x1040($s0)
    ctx->pc = 0x2e30d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4160)));
label_2e30d4:
    // 0x2e30d4: 0xc0b851a  jal         func_2E1468
label_2e30d8:
    if (ctx->pc == 0x2E30D8u) {
        ctx->pc = 0x2E30D8u;
            // 0x2e30d8: 0x3d41299  .word       0x03D41299                   # multu       $fp, $s4 # 00001280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 30) * (uint64_t)GPR_U32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->pc = 0x2E30DCu;
        goto label_2e30dc;
    }
    ctx->pc = 0x2E30D4u;
    SET_GPR_U32(ctx, 31, 0x2E30DCu);
    ctx->pc = 0x2E30D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30D4u;
            // 0x2e30d8: 0x3d41299  .word       0x03D41299                   # multu       $fp, $s4 # 00001280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 30) * (uint64_t)GPR_U32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1468u;
    if (runtime->hasFunction(0x2E1468u)) {
        auto targetFn = runtime->lookupFunction(0x2E1468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30DCu; }
        if (ctx->pc != 0x2E30DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1468_0x2e1468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30DCu; }
        if (ctx->pc != 0x2E30DCu) { return; }
    }
    ctx->pc = 0x2E30DCu;
label_2e30dc:
    // 0x2e30dc: 0x2220014  dsllv       $zero, $v0, $s1
    ctx->pc = 0x2e30dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
label_2e30e0:
    // 0x2e30e0: 0x2001039  .word       0x02001039                   # INVALID     $s0, $zero, 0x1039 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e30e0u;
    // Unhandled SPECIAL instruction: 0x39
label_2e30e4:
    // 0x2e30e4: 0x83d04699  lb          $s0, 0x4699($fp)
    ctx->pc = 0x2e30e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 18073)));
label_2e30e8:
    // 0x2e30e8: 0x2308815  .word       0x02308815                   # INVALID     $s1, $s0, -0x77EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e30e8u;
    // Unhandled SPECIAL instruction: 0x15
label_2e30ec:
    // 0x2e30ec: 0x0  nop
    ctx->pc = 0x2e30ecu;
    // NOP
label_2e30f0:
    // 0x2e30f0: 0x3d01013  .word       0x03D01013                   # mtlo        $fp # 00101000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e30f0u;
    ctx->lo = GPR_U64(ctx, 30);
label_2e30f4:
    // 0x2e30f4: 0x14028014  bne         $zero, $v0, . + 4 + (-0x7FEC << 2)
label_2e30f8:
    if (ctx->pc == 0x2E30F8u) {
        ctx->pc = 0x2E30F8u;
            // 0x2e30f8: 0x88608012  lwl         $zero, -0x7FEE($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294934546); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
        ctx->pc = 0x2E30FCu;
        goto label_2e30fc;
    }
    ctx->pc = 0x2E30F4u;
    {
        const bool branch_taken_0x2e30f4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E30F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30F4u;
            // 0x2e30f8: 0x88608012  lwl         $zero, -0x7FEE($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294934546); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30f4) {
            ctx->pc = 0x2C3148u;
            return;
        }
    }
    ctx->pc = 0x2E30FCu;
label_2e30fc:
    // 0x2e30fc: 0x91108012  lbu         $s0, -0x7FEE($t0)
    ctx->pc = 0x2e30fcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294934546)));
label_2e3100:
    // 0x2e3100: 0x80204801  lb          $zero, 0x4801($at)
    ctx->pc = 0x2e3100u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18433)));
label_2e3104:
    // 0x2e3104: 0x82509002  lb          $s0, -0x6FFE($s2)
    ctx->pc = 0x2e3104u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294938626)));
label_2e3108:
    // 0x2e3108: 0x501429  .word       0x00501429                   # mtsa        $v0 # 00101400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2e3108u;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_2e310c:
    // 0x2e310c: 0x7e210bfc  sq          $at, 0xBFC($s1)
    ctx->pc = 0x2e310cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3068), GPR_VEC(ctx, 1));
label_2e3110:
    // 0x2e3110: 0x80405001  lb          $zero, 0x5001($v0)
    ctx->pc = 0x2e3110u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20481)));
label_2e3114:
    // 0x2e3114: 0x11128014  beq         $t0, $s2, . + 4 + (-0x7FEC << 2)
label_2e3118:
    if (ctx->pc == 0x2E3118u) {
        ctx->pc = 0x2E3118u;
            // 0x2e3118: 0x15d28014  bne         $t6, $s2, . + 4 + (-0x7FEC << 2) (Delay Slot)
        // Likely branch instruction at 0x2E3118 - Handled by branch logic
        ctx->pc = 0x2E311Cu;
        goto label_2e311c;
    }
    ctx->pc = 0x2E3114u;
    {
        const bool branch_taken_0x2e3114 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E3118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3114u;
            // 0x2e3118: 0x15d28014  bne         $t6, $s2, . + 4 + (-0x7FEC << 2) (Delay Slot)
        // Likely branch instruction at 0x2E3118 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3114) {
            ctx->pc = 0x2C3168u;
            return;
        }
    }
    ctx->pc = 0x2E311Cu;
label_2e311c:
    // 0x2e311c: 0x3d01007  srav        $v0, $s0, $fp
    ctx->pc = 0x2e311cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 30) & 0x1F));
label_2e3120:
    // 0x2e3120: 0x83d0100b  lb          $s0, 0x100B($fp)
    ctx->pc = 0x2e3120u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4107)));
label_2e3124:
    // 0x2e3124: 0x21128014  addi        $s2, $t0, -0x7FEC
    ctx->pc = 0x2e3124u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294934548, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2e3128:
    // 0x2e3128: 0x83d4100c  lb          $s4, 0x100C($fp)
    ctx->pc = 0x2e3128u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4108)));
label_2e312c:
    // 0x2e312c: 0x2041041  .word       0x02041041                   # INVALID     $s0, $a0, 0x1041 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e312cu;
    // Unhandled SPECIAL instruction: 0x1
label_2e3130:
    // 0x2e3130: 0xc0b826a  jal         func_2E09A8
label_2e3134:
    if (ctx->pc == 0x2E3134u) {
        ctx->pc = 0x2E3134u;
            // 0x2e3134: 0xfe0b93fe  sd          $t3, -0x6C02($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4294939646), GPR_U64(ctx, 11));
        ctx->pc = 0x2E3138u;
        goto label_2e3138;
    }
    ctx->pc = 0x2E3130u;
    SET_GPR_U32(ctx, 31, 0x2E3138u);
    ctx->pc = 0x2E3134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3130u;
            // 0x2e3134: 0xfe0b93fe  sd          $t3, -0x6C02($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4294939646), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E09A8u;
    if (runtime->hasFunction(0x2E09A8u)) {
        auto targetFn = runtime->lookupFunction(0x2E09A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3138u; }
        if (ctx->pc != 0x2E3138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E09A8_0x2e09a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3138u; }
        if (ctx->pc != 0x2E3138u) { return; }
    }
    ctx->pc = 0x2E3138u;
label_2e3138:
    // 0x2e3138: 0x2228008  .word       0x02228008                   # jr          $s1 # 00028000 <InstrIdType: CPU_SPECIAL>
label_2e313c:
    if (ctx->pc == 0x2E313Cu) {
        ctx->pc = 0x2E3140u;
        goto label_2e3140;
    }
    ctx->pc = 0x2E3138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 17);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3140u;
label_2e3140:
    // 0x2e3140: 0x3d01083  .word       0x03D01083                   # sra         $v0, $s0, 2 # 03C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e3140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 2));
label_2e3144:
    // 0x2e3144: 0x14028014  bne         $zero, $v0, . + 4 + (-0x7FEC << 2)
label_2e3148:
    if (ctx->pc == 0x2E3148u) {
        ctx->pc = 0x2E3148u;
            // 0x2e3148: 0x88608012  lwl         $zero, -0x7FEE($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294934546); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
        ctx->pc = 0x2E314Cu;
        goto label_2e314c;
    }
    ctx->pc = 0x2E3144u;
    {
        const bool branch_taken_0x2e3144 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3144u;
            // 0x2e3148: 0x88608012  lwl         $zero, -0x7FEE($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294934546); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3144) {
            ctx->pc = 0x2C3198u;
            return;
        }
    }
    ctx->pc = 0x2E314Cu;
label_2e314c:
    // 0x2e314c: 0x91208012  lbu         $zero, -0x7FEE($t1)
    ctx->pc = 0x2e314cu;
    SET_GPR_U32(ctx, 0, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294934546)));
label_2e3150:
    // 0x2e3150: 0x80204801  lb          $zero, 0x4801($at)
    ctx->pc = 0x2e3150u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18433)));
label_2e3154:
    // 0x2e3154: 0x82509002  lb          $s0, -0x6FFE($s2)
    ctx->pc = 0x2e3154u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294938626)));
label_2e3158:
    // 0x2e3158: 0x2501415  .word       0x02501415                   # INVALID     $s2, $s0, 0x1415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e3158u;
    // Unhandled SPECIAL instruction: 0x15
label_2e315c:
    // 0x2e315c: 0x7e210bfc  sq          $at, 0xBFC($s1)
    ctx->pc = 0x2e315cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3068), GPR_VEC(ctx, 1));
label_2e3160:
    // 0x2e3160: 0x80405001  lb          $zero, 0x5001($v0)
    ctx->pc = 0x2e3160u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20481)));
label_2e3164:
    // 0x2e3164: 0x3d01097  .word       0x03D01097                   # dsrav       $v0, $s0, $fp # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e3164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 16) >> (GPR_U32(ctx, 30) & 0x3F));
label_2e3168:
    // 0x2e3168: 0x14028014  bne         $zero, $v0, . + 4 + (-0x7FEC << 2)
label_2e316c:
    if (ctx->pc == 0x2E316Cu) {
        ctx->pc = 0x2E3170u;
        goto label_2e3170;
    }
    ctx->pc = 0x2E3168u;
    {
        const bool branch_taken_0x2e3168 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3168) {
            ctx->pc = 0x2C31BCu;
            return;
        }
    }
    ctx->pc = 0x2E3170u;
label_2e3170:
    // 0x2e3170: 0x88608012  lwl         $zero, -0x7FEE($v1)
    ctx->pc = 0x2e3170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294934546); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_2e3174:
    // 0x2e3174: 0x91308012  lbu         $s0, -0x7FEE($t1)
    ctx->pc = 0x2e3174u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294934546)));
label_2e3178:
    // 0x2e3178: 0x80204801  lb          $zero, 0x4801($at)
    ctx->pc = 0x2e3178u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18433)));
label_2e317c:
    // 0x2e317c: 0x82509002  lb          $s0, -0x6FFE($s2)
    ctx->pc = 0x2e317cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294938626)));
label_2e3180:
    // 0x2e3180: 0x2501411  .word       0x02501411                   # mthi        $s2 # 00101400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e3180u;
    ctx->hi = GPR_U64(ctx, 18);
label_2e3184:
    // 0x2e3184: 0x7e210bfc  sq          $at, 0xBFC($s1)
    ctx->pc = 0x2e3184u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3068), GPR_VEC(ctx, 1));
label_2e3188:
    // 0x2e3188: 0x80405001  lb          $zero, 0x5001($v0)
    ctx->pc = 0x2e3188u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20481)));
label_2e318c:
    // 0x2e318c: 0x54028014  bnel        $zero, $v0, . + 4 + (-0x7FEC << 2)
label_2e3190:
    if (ctx->pc == 0x2E3190u) {
        ctx->pc = 0x2E3190u;
            // 0x2e3190: 0xa6039f7c  sh          $v1, -0x6084($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4294942588), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2E3194u;
        goto label_2e3194;
    }
    ctx->pc = 0x2E318Cu;
    {
        const bool branch_taken_0x2e318c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e318c) {
            ctx->pc = 0x2E3190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E318Cu;
            // 0x2e3190: 0xa6039f7c  sh          $v1, -0x6084($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4294942588), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C31E0u;
            return;
        }
    }
    ctx->pc = 0x2E3194u;
label_2e3194:
    // 0x2e3194: 0xfe139bfc  sd          $s3, -0x6404($s0)
    ctx->pc = 0x2e3194u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294941692), GPR_U64(ctx, 19));
label_2e3198:
    // 0x2e3198: 0xda402000  lqc2        $vf0, 0x2000($s2)
    ctx->pc = 0x2e3198u;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 8192)));
label_2e319c:
    // 0x2e319c: 0x4dd28014  .word       0x4DD28014                   # INVALID     $t6, $s2, -0x7FEC # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e319cu;
    // Unhandled opcode: 0x13
label_2e31a0:
    // 0x2e31a0: 0xa2001dc0  sb          $zero, 0x1DC0($s0)
    ctx->pc = 0x2e31a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7616), (uint8_t)GPR_U32(ctx, 0));
label_2e31a4:
    // 0x2e31a4: 0xd6402000  ldc1        $f0, 0x2000($s2)
    ctx->pc = 0x2e31a4u;
    // Unhandled opcode: 0x35
label_2e31a8:
    // 0x2e31a8: 0x40028014  .word       0x40028014                   # mfc0        $v0, Config # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_config);
label_2e31ac:
    // 0x2e31ac: 0xa6001f80  sh          $zero, 0x1F80($s0)
    ctx->pc = 0x2e31acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8064), (uint16_t)GPR_U32(ctx, 0));
label_2e31b0:
    // 0x2e31b0: 0xd2402000  lld         $zero, 0x2000($s2)
    ctx->pc = 0x2e31b0u;
    // Unhandled opcode: 0x34
label_2e31b4:
    // 0x2e31b4: 0x42081c01  .word       0x42081C01                   # tlbr # 00081C00 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2e31b4u;
    runtime->handleTLBR(rdram, ctx);
label_2e31b8:
    // 0x2e31b8: 0xc0b7c76  jal         func_2DF1D8
label_2e31bc:
    if (ctx->pc == 0x2E31BCu) {
        ctx->pc = 0x2E31C0u;
        goto label_2e31c0;
    }
    ctx->pc = 0x2E31B8u;
    SET_GPR_U32(ctx, 31, 0x2E31C0u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E31C0u; }
        if (ctx->pc != 0x2E31C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E31C0u; }
        if (ctx->pc != 0x2E31C0u) { return; }
    }
    ctx->pc = 0x2E31C0u;
label_2e31c0:
    // 0x2e31c0: 0x2402001  .word       0x02402001                   # INVALID     $s2, $zero, 0x2001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e31c0u;
    // Unhandled SPECIAL instruction: 0x1
label_2e31c4:
    // 0x2e31c4: 0x3402010  .word       0x03402010                   # mfhi        $a0 # 03400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e31c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2e31c8:
    // 0x2e31c8: 0x11388010  beq         $t1, $t8, . + 4 + (-0x7FF0 << 2)
label_2e31cc:
    if (ctx->pc == 0x2E31CCu) {
        ctx->pc = 0x2E31CCu;
            // 0x2e31cc: 0x3089000  .word       0x03089000                   # sll         $s2, $t0, 0 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
        ctx->pc = 0x2E31D0u;
        goto label_2e31d0;
    }
    ctx->pc = 0x2E31C8u;
    {
        const bool branch_taken_0x2e31c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 24));
        ctx->pc = 0x2E31CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E31C8u;
            // 0x2e31cc: 0x3089000  .word       0x03089000                   # sll         $s2, $t0, 0 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e31c8) {
            ctx->pc = 0x2C320Cu;
            return;
        }
    }
    ctx->pc = 0x2E31D0u;
label_2e31d0:
    // 0x2e31d0: 0x0  nop
    ctx->pc = 0x2e31d0u;
    // NOP
label_2e31d4:
    // 0x2e31d4: 0x0  nop
    ctx->pc = 0x2e31d4u;
    // NOP
label_2e31d8:
    // 0x2e31d8: 0x309a003  .word       0x0309A003                   # sra         $s4, $t1, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e31d8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 0));
label_2e31dc:
    // 0x2e31dc: 0x83092002  lb          $t1, 0x2002($t8)
    ctx->pc = 0x2e31dcu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 8194)));
label_2e31e0:
    // 0x2e31e0: 0x53032018  beql        $t8, $v1, . + 4 + (0x2018 << 2)
label_2e31e4:
    if (ctx->pc == 0x2E31E4u) {
        ctx->pc = 0x2E31E4u;
            // 0x2e31e4: 0x3022030  tge         $t8, $v0, 128 (Delay Slot)
        if (GPR_S64(ctx, 24) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->pc = 0x2E31E8u;
        goto label_2e31e8;
    }
    ctx->pc = 0x2E31E0u;
    {
        const bool branch_taken_0x2e31e0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e31e0) {
            ctx->pc = 0x2E31E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E31E0u;
            // 0x2e31e4: 0x3022030  tge         $t8, $v0, 128 (Delay Slot)
        if (GPR_S64(ctx, 24) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB244u;
            return;
        }
    }
    ctx->pc = 0x2E31E8u;
label_2e31e8:
    // 0x2e31e8: 0x6002001  bltz        $s0, . + 4 + (0x2001 << 2)
label_2e31ec:
    if (ctx->pc == 0x2E31ECu) {
        ctx->pc = 0x2E31ECu;
            // 0x2e31ec: 0x282a000  .word       0x0282A000                   # sll         $s4, $v0, 0 # 02800000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
        ctx->pc = 0x2E31F0u;
        goto label_2e31f0;
    }
    ctx->pc = 0x2E31E8u;
    {
        const bool branch_taken_0x2e31e8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E31ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E31E8u;
            // 0x2e31ec: 0x282a000  .word       0x0282A000                   # sll         $s4, $v0, 0 # 02800000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e31e8) {
            ctx->pc = 0x2EB1F0u;
            return;
        }
    }
    ctx->pc = 0x2E31F0u;
label_2e31f0:
    // 0x2e31f0: 0x83001441  lb          $zero, 0x1441($t8)
    ctx->pc = 0x2e31f0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 5185)));
label_2e31f4:
    // 0x2e31f4: 0x308a002  .word       0x0308A002                   # srl         $s4, $t0, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e31f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2e31f8:
    // 0x2e31f8: 0x3022030  tge         $t8, $v0, 128
    ctx->pc = 0x2e31f8u;
    if (GPR_S64(ctx, 24) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2e31fc:
    // 0x2e31fc: 0x6002001  bltz        $s0, . + 4 + (0x2001 << 2)
label_2e3200:
    if (ctx->pc == 0x2E3200u) {
        ctx->pc = 0x2E3200u;
            // 0x2e3200: 0x82a8011  j           func_AA0044 (Delay Slot)
        // J 0xAA0044 - Handled by branch logic
        ctx->pc = 0x2E3204u;
        goto label_2e3204;
    }
    ctx->pc = 0x2E31FCu;
    {
        const bool branch_taken_0x2e31fc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E3200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E31FCu;
            // 0x2e3200: 0x82a8011  j           func_AA0044 (Delay Slot)
        // J 0xAA0044 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e31fc) {
            ctx->pc = 0x2EB204u;
            return;
        }
    }
    ctx->pc = 0x2E3204u;
label_2e3204:
    // 0x2e3204: 0x7e320bf4  sq          $s2, 0xBF4($s1)
    ctx->pc = 0x2e3204u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3060), GPR_VEC(ctx, 18));
label_2e3208:
    // 0x2e3208: 0x405001  .word       0x00405001                   # INVALID     $v0, $zero, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e3208u;
    // Unhandled SPECIAL instruction: 0x1
label_2e320c:
    // 0x2e320c: 0xa6039f7c  sh          $v1, -0x6084($s0)
    ctx->pc = 0x2e320cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294942588), (uint16_t)GPR_U32(ctx, 3));
label_2e3210:
    // 0x2e3210: 0xfe139bfc  sd          $s3, -0x6404($s0)
    ctx->pc = 0x2e3210u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294941692), GPR_U64(ctx, 19));
label_2e3214:
    // 0x2e3214: 0xda402000  lqc2        $vf0, 0x2000($s2)
    ctx->pc = 0x2e3214u;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 8192)));
label_2e3218:
    // 0x2e3218: 0x40028014  .word       0x40028014                   # mfc0        $v0, Config # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e3218u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_config);
label_2e321c:
    // 0x2e321c: 0xa2001dc0  sb          $zero, 0x1DC0($s0)
    ctx->pc = 0x2e321cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7616), (uint8_t)GPR_U32(ctx, 0));
label_2e3220:
    // 0x2e3220: 0xd6402000  ldc1        $f0, 0x2000($s2)
    ctx->pc = 0x2e3220u;
    // Unhandled opcode: 0x35
label_2e3224:
    // 0x2e3224: 0x42081c01  .word       0x42081C01                   # tlbr # 00081C00 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2e3224u;
    runtime->handleTLBR(rdram, ctx);
label_2e3228:
    // 0x2e3228: 0xa6001f80  sh          $zero, 0x1F80($s0)
    ctx->pc = 0x2e3228u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8064), (uint16_t)GPR_U32(ctx, 0));
label_2e322c:
    // 0x2e322c: 0xd2402000  lld         $zero, 0x2000($s2)
    ctx->pc = 0x2e322cu;
    // Unhandled opcode: 0x34
label_2e3230:
    // 0x2e3230: 0xc0b7c76  jal         func_2DF1D8
label_2e3234:
    if (ctx->pc == 0x2E3234u) {
        ctx->pc = 0x2E3238u;
        goto label_2e3238;
    }
    ctx->pc = 0x2E3230u;
    SET_GPR_U32(ctx, 31, 0x2E3238u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3238u; }
        if (ctx->pc != 0x2E3238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3238u; }
        if (ctx->pc != 0x2E3238u) { return; }
    }
    ctx->pc = 0x2E3238u;
label_2e3238:
    // 0x2e3238: 0x2402001  .word       0x02402001                   # INVALID     $s2, $zero, 0x2001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e3238u;
    // Unhandled SPECIAL instruction: 0x1
label_2e323c:
    // 0x2e323c: 0x3402010  .word       0x03402010                   # mfhi        $a0 # 03400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e323cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2e3240:
    // 0x2e3240: 0x11188010  beq         $t0, $t8, . + 4 + (-0x7FF0 << 2)
label_2e3244:
    if (ctx->pc == 0x2E3244u) {
        ctx->pc = 0x2E3244u;
            // 0x2e3244: 0x3089000  .word       0x03089000                   # sll         $s2, $t0, 0 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
        ctx->pc = 0x2E3248u;
        goto label_2e3248;
    }
    ctx->pc = 0x2E3240u;
    {
        const bool branch_taken_0x2e3240 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 24));
        ctx->pc = 0x2E3244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3240u;
            // 0x2e3244: 0x3089000  .word       0x03089000                   # sll         $s2, $t0, 0 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3240) {
            ctx->pc = 0x2C3284u;
            return;
        }
    }
    ctx->pc = 0x2E3248u;
label_2e3248:
    // 0x2e3248: 0x0  nop
    ctx->pc = 0x2e3248u;
    // NOP
label_2e324c:
    // 0x2e324c: 0x0  nop
    ctx->pc = 0x2e324cu;
    // NOP
label_2e3250:
    // 0x2e3250: 0x309a003  .word       0x0309A003                   # sra         $s4, $t1, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e3250u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 0));
label_2e3254:
    // 0x2e3254: 0x83092002  lb          $t1, 0x2002($t8)
    ctx->pc = 0x2e3254u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 8194)));
label_2e3258:
    // 0x2e3258: 0x53032018  beql        $t8, $v1, . + 4 + (0x2018 << 2)
label_2e325c:
    if (ctx->pc == 0x2E325Cu) {
        ctx->pc = 0x2E325Cu;
            // 0x2e325c: 0x3022030  tge         $t8, $v0, 128 (Delay Slot)
        if (GPR_S64(ctx, 24) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->pc = 0x2E3260u;
        goto label_2e3260;
    }
    ctx->pc = 0x2E3258u;
    {
        const bool branch_taken_0x2e3258 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3258) {
            ctx->pc = 0x2E325Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3258u;
            // 0x2e325c: 0x3022030  tge         $t8, $v0, 128 (Delay Slot)
        if (GPR_S64(ctx, 24) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB2BCu;
            return;
        }
    }
    ctx->pc = 0x2E3260u;
label_2e3260:
    // 0x2e3260: 0x6002001  bltz        $s0, . + 4 + (0x2001 << 2)
label_2e3264:
    if (ctx->pc == 0x2E3264u) {
        ctx->pc = 0x2E3264u;
            // 0x2e3264: 0x282a000  .word       0x0282A000                   # sll         $s4, $v0, 0 # 02800000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
        ctx->pc = 0x2E3268u;
        goto label_2e3268;
    }
    ctx->pc = 0x2E3260u;
    {
        const bool branch_taken_0x2e3260 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E3264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3260u;
            // 0x2e3264: 0x282a000  .word       0x0282A000                   # sll         $s4, $v0, 0 # 02800000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3260) {
            ctx->pc = 0x2EB268u;
            return;
        }
    }
    ctx->pc = 0x2E3268u;
label_2e3268:
    // 0x2e3268: 0x83001601  lb          $zero, 0x1601($t8)
    ctx->pc = 0x2e3268u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 5633)));
label_2e326c:
    // 0x2e326c: 0x308a002  .word       0x0308A002                   # srl         $s4, $t0, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e326cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2e3270:
    // 0x2e3270: 0x3022030  tge         $t8, $v0, 128
    ctx->pc = 0x2e3270u;
    if (GPR_S64(ctx, 24) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2e3274:
    // 0x2e3274: 0x6002001  bltz        $s0, . + 4 + (0x2001 << 2)
label_2e3278:
    if (ctx->pc == 0x2E3278u) {
        ctx->pc = 0x2E3278u;
            // 0x2e3278: 0x82a8011  j           func_AA0044 (Delay Slot)
        // J 0xAA0044 - Handled by branch logic
        ctx->pc = 0x2E327Cu;
        goto label_2e327c;
    }
    ctx->pc = 0x2E3274u;
    {
        const bool branch_taken_0x2e3274 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E3278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3274u;
            // 0x2e3278: 0x82a8011  j           func_AA0044 (Delay Slot)
        // J 0xAA0044 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3274) {
            ctx->pc = 0x2EB27Cu;
            return;
        }
    }
    ctx->pc = 0x2E327Cu;
label_2e327c:
    // 0x2e327c: 0x7e320bf4  sq          $s2, 0xBF4($s1)
    ctx->pc = 0x2e327cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3060), GPR_VEC(ctx, 18));
label_2e3280:
    // 0x2e3280: 0x405001  .word       0x00405001                   # INVALID     $v0, $zero, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e3280u;
    // Unhandled SPECIAL instruction: 0x1
label_2e3284:
    // 0x2e3284: 0xa6039f7c  sh          $v1, -0x6084($s0)
    ctx->pc = 0x2e3284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294942588), (uint16_t)GPR_U32(ctx, 3));
label_2e3288:
    // 0x2e3288: 0xfe139bfc  sd          $s3, -0x6404($s0)
    ctx->pc = 0x2e3288u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294941692), GPR_U64(ctx, 19));
label_2e328c:
    // 0x2e328c: 0xda402000  lqc2        $vf0, 0x2000($s2)
    ctx->pc = 0x2e328cu;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 8192)));
label_2e3290:
    // 0x2e3290: 0x40028014  .word       0x40028014                   # mfc0        $v0, Config # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e3290u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_config);
label_2e3294:
    // 0x2e3294: 0xa2001dc0  sb          $zero, 0x1DC0($s0)
    ctx->pc = 0x2e3294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7616), (uint8_t)GPR_U32(ctx, 0));
label_2e3298:
    // 0x2e3298: 0xd6402000  ldc1        $f0, 0x2000($s2)
    ctx->pc = 0x2e3298u;
    // Unhandled opcode: 0x35
label_2e329c:
    // 0x2e329c: 0xc2081c00  ll          $t0, 0x1C00($s0)
    ctx->pc = 0x2e329cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7168); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2e32a0:
    // 0x2e32a0: 0xa6001f80  sh          $zero, 0x1F80($s0)
    ctx->pc = 0x2e32a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8064), (uint16_t)GPR_U32(ctx, 0));
label_2e32a4:
    // 0x2e32a4: 0xd2402000  lld         $zero, 0x2000($s2)
    ctx->pc = 0x2e32a4u;
    // Unhandled opcode: 0x34
label_2e32a8:
    // 0x2e32a8: 0xc0b7c76  jal         func_2DF1D8
label_2e32ac:
    if (ctx->pc == 0x2E32ACu) {
        ctx->pc = 0x2E32B0u;
        goto label_2e32b0;
    }
    ctx->pc = 0x2E32A8u;
    SET_GPR_U32(ctx, 31, 0x2E32B0u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E32B0u; }
        if (ctx->pc != 0x2E32B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E32B0u; }
        if (ctx->pc != 0x2E32B0u) { return; }
    }
    ctx->pc = 0x2E32B0u;
label_2e32b0:
    // 0x2e32b0: 0x2402001  .word       0x02402001                   # INVALID     $s2, $zero, 0x2001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e32b0u;
    // Unhandled SPECIAL instruction: 0x1
label_2e32b4:
    // 0x2e32b4: 0x3402010  .word       0x03402010                   # mfhi        $a0 # 03400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e32b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2e32b8:
    // 0x2e32b8: 0x11488010  beq         $t2, $t0, . + 4 + (-0x7FF0 << 2)
label_2e32bc:
    if (ctx->pc == 0x2E32BCu) {
        ctx->pc = 0x2E32BCu;
            // 0x2e32bc: 0x3089000  .word       0x03089000                   # sll         $s2, $t0, 0 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
        ctx->pc = 0x2E32C0u;
        goto label_2e32c0;
    }
    ctx->pc = 0x2E32B8u;
    {
        const bool branch_taken_0x2e32b8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x2E32BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E32B8u;
            // 0x2e32bc: 0x3089000  .word       0x03089000                   # sll         $s2, $t0, 0 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32b8) {
            ctx->pc = 0x2C32FCu;
            return;
        }
    }
    ctx->pc = 0x2E32C0u;
label_2e32c0:
    // 0x2e32c0: 0x0  nop
    ctx->pc = 0x2e32c0u;
    // NOP
label_2e32c4:
    // 0x2e32c4: 0x0  nop
    ctx->pc = 0x2e32c4u;
    // NOP
label_2e32c8:
    // 0x2e32c8: 0x309a003  .word       0x0309A003                   # sra         $s4, $t1, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e32c8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 0));
label_2e32cc:
    // 0x2e32cc: 0x83092002  lb          $t1, 0x2002($t8)
    ctx->pc = 0x2e32ccu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 8194)));
label_2e32d0:
    // 0x2e32d0: 0x53032018  beql        $t8, $v1, . + 4 + (0x2018 << 2)
label_2e32d4:
    if (ctx->pc == 0x2E32D4u) {
        ctx->pc = 0x2E32D4u;
            // 0x2e32d4: 0x3022030  tge         $t8, $v0, 128 (Delay Slot)
        if (GPR_S64(ctx, 24) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->pc = 0x2E32D8u;
        goto label_2e32d8;
    }
    ctx->pc = 0x2E32D0u;
    {
        const bool branch_taken_0x2e32d0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e32d0) {
            ctx->pc = 0x2E32D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E32D0u;
            // 0x2e32d4: 0x3022030  tge         $t8, $v0, 128 (Delay Slot)
        if (GPR_S64(ctx, 24) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB334u;
            return;
        }
    }
    ctx->pc = 0x2E32D8u;
label_2e32d8:
    // 0x2e32d8: 0x6002001  bltz        $s0, . + 4 + (0x2001 << 2)
label_2e32dc:
    if (ctx->pc == 0x2E32DCu) {
        ctx->pc = 0x2E32DCu;
            // 0x2e32dc: 0x282a000  .word       0x0282A000                   # sll         $s4, $v0, 0 # 02800000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
        ctx->pc = 0x2E32E0u;
        goto label_2e32e0;
    }
    ctx->pc = 0x2E32D8u;
    {
        const bool branch_taken_0x2e32d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E32DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E32D8u;
            // 0x2e32dc: 0x282a000  .word       0x0282A000                   # sll         $s4, $v0, 0 # 02800000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32d8) {
            ctx->pc = 0x2EB2E0u;
            return;
        }
    }
    ctx->pc = 0x2E32E0u;
label_2e32e0:
    // 0x2e32e0: 0x83011451  lb          $at, 0x1451($t8)
    ctx->pc = 0x2e32e0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 5201)));
label_2e32e4:
    // 0x2e32e4: 0x308a002  .word       0x0308A002                   # srl         $s4, $t0, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e32e4u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2e32e8:
    // 0x2e32e8: 0x3022030  tge         $t8, $v0, 128
    ctx->pc = 0x2e32e8u;
    if (GPR_S64(ctx, 24) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2e32ec:
    // 0x2e32ec: 0x6002001  bltz        $s0, . + 4 + (0x2001 << 2)
label_2e32f0:
    if (ctx->pc == 0x2E32F0u) {
        ctx->pc = 0x2E32F0u;
            // 0x2e32f0: 0x882a8010  lwl         $t2, -0x7FF0($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294934544); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
        ctx->pc = 0x2E32F4u;
        goto label_2e32f4;
    }
    ctx->pc = 0x2E32ECu;
    {
        const bool branch_taken_0x2e32ec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E32F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E32ECu;
            // 0x2e32f0: 0x882a8010  lwl         $t2, -0x7FF0($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294934544); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32ec) {
            ctx->pc = 0x2EB2F4u;
            return;
        }
    }
    ctx->pc = 0x2E32F4u;
label_2e32f4:
    // 0x2e32f4: 0x7e320bf4  sq          $s2, 0xBF4($s1)
    ctx->pc = 0x2e32f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3060), GPR_VEC(ctx, 18));
label_2e32f8:
    // 0x2e32f8: 0x405001  .word       0x00405001                   # INVALID     $v0, $zero, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e32f8u;
    // Unhandled SPECIAL instruction: 0x1
label_2e32fc:
    // 0x2e32fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e3300:
    if (ctx->pc == 0x2E3300u) {
        ctx->pc = 0x2E3304u;
        goto label_2e3304;
    }
    ctx->pc = 0x2E32FCu;
    {
        const bool branch_taken_0x2e32fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e32fc) {
            ctx->pc = 0x2E332Cu;
            goto label_2e332c;
        }
    }
    ctx->pc = 0x2E3304u;
label_2e3304:
    // 0x2e3304: 0xa24a6e31  sb          $t2, 0x6E31($s2)
    ctx->pc = 0x2e3304u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28209), (uint8_t)GPR_U32(ctx, 10));
label_2e3308:
    // 0x2e3308: 0xa0f12a71  sb          $s1, 0x2A71($a3)
    ctx->pc = 0x2e3308u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10865), (uint8_t)GPR_U32(ctx, 17));
label_2e330c:
    // 0x2e330c: 0x25a8cfa8  addiu       $t0, $t5, -0x3058
    ctx->pc = 0x2e330cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4294954920));
label_2e3310:
    // 0x2e3310: 0xfe42e7c2  sd          $v0, -0x183E($s2)
    ctx->pc = 0x2e3310u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294961090), GPR_U64(ctx, 2));
label_2e3314:
    // 0x2e3314: 0x254e2760  addiu       $t6, $t2, 0x2760
    ctx->pc = 0x2e3314u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 10080));
label_2e3318:
    // 0x2e3318: 0x8e7ee5cd  lw          $fp, -0x1A33($s3)
    ctx->pc = 0x2e3318u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960589)));
label_2e331c:
    // 0x2e331c: 0x72a24c2  tlti        $t9, 0x24C2
    ctx->pc = 0x2e331cu;
    if (GPR_S64(ctx, 25) < (int64_t)(int32_t)9410) { runtime->handleTrap(rdram, ctx); }
label_2e3320:
    // 0x2e3320: 0xca1600db  lwc2        $22, 0xDB($s0)
    ctx->pc = 0x2e3320u;
    // Unhandled opcode: 0x32
label_2e3324:
    // 0x2e3324: 0x72a26be  tlti        $t9, 0x26BE
    ctx->pc = 0x2e3324u;
    if (GPR_S64(ctx, 25) < (int64_t)(int32_t)9918) { runtime->handleTrap(rdram, ctx); }
label_2e3328:
    // 0x2e3328: 0x0  nop
    ctx->pc = 0x2e3328u;
    // NOP
label_2e332c:
    // 0x2e332c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e332cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_2e3330:
    // 0x2e3330: 0x2442331c  addiu       $v0, $v0, 0x331C
    ctx->pc = 0x2e3330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13084));
label_2e3334:
    // 0x2e3334: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e3334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
label_2e3338:
    // 0x2e3338: 0x248432fc  addiu       $a0, $a0, 0x32FC
    ctx->pc = 0x2e3338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13052));
label_2e333c:
    // 0x2e333c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e333cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3340:
    // 0x2e3340: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e3340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e3344:
    // 0x2e3344: 0xc0b63f0  jal         func_2D8FC0
label_2e3348:
    if (ctx->pc == 0x2E3348u) {
        ctx->pc = 0x2E3348u;
            // 0x2e3348: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2E334Cu;
        goto label_2e334c;
    }
    ctx->pc = 0x2E3344u;
    SET_GPR_U32(ctx, 31, 0x2E334Cu);
    ctx->pc = 0x2E3348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3344u;
            // 0x2e3348: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E334Cu; }
        if (ctx->pc != 0x2E334Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E334Cu; }
        if (ctx->pc != 0x2E334Cu) { return; }
    }
    ctx->pc = 0x2E334Cu;
label_2e334c:
    // 0x2e334c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2e334cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e3350:
    // 0x2e3350: 0xdfb00540  ld          $s0, 0x540($sp)
    ctx->pc = 0x2e3350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1344)));
label_2e3354:
    // 0x2e3354: 0xdfb10548  ld          $s1, 0x548($sp)
    ctx->pc = 0x2e3354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1352)));
label_2e3358:
    // 0x2e3358: 0xdfb20550  ld          $s2, 0x550($sp)
    ctx->pc = 0x2e3358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1360)));
label_2e335c:
    // 0x2e335c: 0xdfb30558  ld          $s3, 0x558($sp)
    ctx->pc = 0x2e335cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1368)));
label_2e3360:
    // 0x2e3360: 0xdfb40560  ld          $s4, 0x560($sp)
    ctx->pc = 0x2e3360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1376)));
label_2e3364:
    // 0x2e3364: 0xdfb50568  ld          $s5, 0x568($sp)
    ctx->pc = 0x2e3364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1384)));
label_2e3368:
    // 0x2e3368: 0xdfbf0570  ld          $ra, 0x570($sp)
    ctx->pc = 0x2e3368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1392)));
label_2e336c:
    // 0x2e336c: 0xc7b60588  lwc1        $f22, 0x588($sp)
    ctx->pc = 0x2e336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2e3370:
    // 0x2e3370: 0xc7b50580  lwc1        $f21, 0x580($sp)
    ctx->pc = 0x2e3370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e3374:
    // 0x2e3374: 0xc7b40578  lwc1        $f20, 0x578($sp)
    ctx->pc = 0x2e3374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e3378:
    // 0x2e3378: 0x3e00008  jr          $ra
label_2e337c:
    if (ctx->pc == 0x2E337Cu) {
        ctx->pc = 0x2E337Cu;
            // 0x2e337c: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->pc = 0x2E3380u;
        goto label_2e3380;
    }
    ctx->pc = 0x2E3378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3378u;
            // 0x2e337c: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3380u;
label_2e3380:
    // 0x2e3380: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2e3380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_2e3384:
    // 0x2e3384: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x2e3384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
label_2e3388:
    // 0x2e3388: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e3388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e338c:
    // 0x2e338c: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x2e338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
label_2e3390:
    // 0x2e3390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e3394:
    // 0x2e3394: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2e3394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
label_2e3398:
    // 0x2e3398: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e3398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e339c:
    // 0x2e339c: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x2e339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
label_2e33a0:
    // 0x2e33a0: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x2e33a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
label_2e33a4:
    // 0x2e33a4: 0xffbf0168  sd          $ra, 0x168($sp)
    ctx->pc = 0x2e33a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
label_2e33a8:
    // 0x2e33a8: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x2e33a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_2e33ac:
    // 0x2e33ac: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x2e33acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_2e33b0:
    // 0x2e33b0: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x2e33b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2e33b4:
    // 0x2e33b4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e33b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
label_2e33b8:
    // 0x2e33b8: 0x24633400  addiu       $v1, $v1, 0x3400
    ctx->pc = 0x2e33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13312));
label_2e33bc:
    // 0x2e33bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e33c0:
    // 0x2e33c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2e33c4:
    if (ctx->pc == 0x2E33C4u) {
        ctx->pc = 0x2E33C8u;
        goto label_2e33c8;
    }
    ctx->pc = 0x2E33C0u;
    {
        const bool branch_taken_0x2e33c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e33c0) {
            ctx->pc = 0x2E33E0u;
            goto label_2e33e0;
        }
    }
    ctx->pc = 0x2E33C8u;
label_2e33c8:
    // 0x2e33c8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
label_2e33cc:
    // 0x2e33cc: 0x24843414  addiu       $a0, $a0, 0x3414
    ctx->pc = 0x2e33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13332));
label_2e33d0:
    // 0x2e33d0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e33d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e33d4:
    // 0x2e33d4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e33d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e33d8:
    // 0x2e33d8: 0xc0b63f0  jal         func_2D8FC0
label_2e33dc:
    if (ctx->pc == 0x2E33DCu) {
        ctx->pc = 0x2E33DCu;
            // 0x2e33dc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x2E33E0u;
        goto label_2e33e0;
    }
    ctx->pc = 0x2E33D8u;
    SET_GPR_U32(ctx, 31, 0x2E33E0u);
    ctx->pc = 0x2E33DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33D8u;
            // 0x2e33dc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E33E0u; }
        if (ctx->pc != 0x2E33E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E33E0u; }
        if (ctx->pc != 0x2E33E0u) { return; }
    }
    ctx->pc = 0x2E33E0u;
label_2e33e0:
    // 0x2e33e0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e33e4:
    if (ctx->pc == 0x2E33E4u) {
        ctx->pc = 0x2E33E8u;
        goto label_2e33e8;
    }
    ctx->pc = 0x2E33E0u;
    {
        const bool branch_taken_0x2e33e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e33e0) {
            ctx->pc = 0x2E3414u;
            goto label_2e3414;
        }
    }
    ctx->pc = 0x2E33E8u;
label_2e33e8:
    // 0x2e33e8: 0x258b8740  addiu       $t3, $t4, -0x78C0
    ctx->pc = 0x2e33e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294936384));
label_2e33ec:
    // 0x2e33ec: 0x274c0cb8  addiu       $t4, $k0, 0xCB8
    ctx->pc = 0x2e33ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 26), 3256));
label_2e33f0:
    // 0x2e33f0: 0xce97b03  jal         func_3A5EC0C
label_2e33f4:
    if (ctx->pc == 0x2E33F4u) {
        ctx->pc = 0x2E33F4u;
            // 0x2e33f4: 0x269995a8  addiu       $t9, $s4, -0x6A58 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940072));
        ctx->pc = 0x2E33F8u;
        goto label_2e33f8;
    }
    ctx->pc = 0x2E33F0u;
    SET_GPR_U32(ctx, 31, 0x2E33F8u);
    ctx->pc = 0x2E33F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33F0u;
            // 0x2e33f4: 0x269995a8  addiu       $t9, $s4, -0x6A58 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A5EC0Cu;
    {
        auto targetFn = runtime->lookupFunction(0x3A5EC0Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E33F8u; }
        if (ctx->pc != 0x2E33F8u) { return; }
    }
    ctx->pc = 0x2E33F8u;
label_2e33f8:
    // 0x2e33f8: 0xdd665167  ld          $a2, 0x5167($t3)
    ctx->pc = 0x2e33f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 11), 20839)));
label_2e33fc:
    // 0x2e33fc: 0xdfd029af  ld          $s0, 0x29AF($fp)
    ctx->pc = 0x2e33fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 10671)));
label_2e3400:
    // 0x2e3400: 0x0  nop
    ctx->pc = 0x2e3400u;
    // NOP
label_2e3404:
    // 0x2e3404: 0x2c374786  sltiu       $s7, $at, 0x4786
    ctx->pc = 0x2e3404u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)18310) ? 1 : 0);
label_2e3408:
    // 0x2e3408: 0xca1601b8  lwc2        $22, 0x1B8($s0)
    ctx->pc = 0x2e3408u;
    // Unhandled opcode: 0x32
label_2e340c:
    // 0x2e340c: 0x2c37458e  sltiu       $s7, $at, 0x458E
    ctx->pc = 0x2e340cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)17806) ? 1 : 0);
label_2e3410:
    // 0x2e3410: 0x0  nop
    ctx->pc = 0x2e3410u;
    // NOP
label_2e3414:
    // 0x2e3414: 0x94ca5112  lhu         $t2, 0x5112($a2)
    ctx->pc = 0x2e3414u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20754)));
label_2e3418:
    // 0x2e3418: 0xacc8741e  sw          $t0, 0x741E($a2)
    ctx->pc = 0x2e3418u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 29726), GPR_U32(ctx, 8));
label_2e341c:
    // 0x2e341c: 0x9cc8541e  lwu         $t0, 0x541E($a2)
    ctx->pc = 0x2e341cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 21534)));
label_2e3420:
    // 0x2e3420: 0xbc5a123f  cache       0x1A, 0x123F($v0)
    ctx->pc = 0x2e3420u;
    // CACHE instruction (ignored)
label_2e3424:
    // 0x2e3424: 0xbceef43e  cache       0x0E, -0xBC2($a3)
    ctx->pc = 0x2e3424u;
    // CACHE instruction (ignored)
label_2e3428:
    // 0x2e3428: 0x90e2f33f  lbu         $v0, -0xCC1($a3)
    ctx->pc = 0x2e3428u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294964031)));
label_2e342c:
    // 0x2e342c: 0x43de11c5  .word       0x43DE11C5                   # INVALID     $fp, $fp, 0x11C5 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e342cu;
    // Unhandled COP0 instruction format: 0x1E
label_2e3430:
    // 0x2e3430: 0xbc6ad23f  cache       0x0A, -0x2DC1($v1)
    ctx->pc = 0x2e3430u;
    // CACHE instruction (ignored)
label_2e3434:
    // 0x2e3434: 0xbcede2bf  cache       0x0D, -0x1D41($a3)
    ctx->pc = 0x2e3434u;
    // CACHE instruction (ignored)
label_2e3438:
    // 0x2e3438: 0x43ee45c0  .word       0x43EE45C0                   # INVALID     $ra, $t6, 0x45C0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e3438u;
    // Unhandled COP0 instruction format: 0x1F
label_2e343c:
    // 0x2e343c: 0xc0b87c6  jal         func_2E1F18
label_2e3440:
    if (ctx->pc == 0x2E3440u) {
        ctx->pc = 0x2E3440u;
            // 0x2e3440: 0x9cc83112  lwu         $t0, 0x3112($a2) (Delay Slot)
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 12562)));
        ctx->pc = 0x2E3444u;
        goto label_2e3444;
    }
    ctx->pc = 0x2E343Cu;
    SET_GPR_U32(ctx, 31, 0x2E3444u);
    ctx->pc = 0x2E3440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E343Cu;
            // 0x2e3440: 0x9cc83112  lwu         $t0, 0x3112($a2) (Delay Slot)
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 12562)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F18u;
    if (runtime->hasFunction(0x2E1F18u)) {
        auto targetFn = runtime->lookupFunction(0x2E1F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3444u; }
        if (ctx->pc != 0x2E3444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1F18_0x2e1f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3444u; }
        if (ctx->pc != 0x2E3444u) { return; }
    }
    ctx->pc = 0x2E3444u;
label_2e3444:
    // 0x2e3444: 0xbcce1107  cache       0x0E, 0x1107($a2)
    ctx->pc = 0x2e3444u;
    // CACHE instruction (ignored)
label_2e3448:
    // 0x2e3448: 0xbcee54bf  cache       0x0E, 0x54BF($a3)
    ctx->pc = 0x2e3448u;
    // CACHE instruction (ignored)
label_2e344c:
    // 0x2e344c: 0x40fe553f  .word       0x40FE553F                   # INVALID     $a3, $fp, 0x553F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e344cu;
    // Unhandled COP0 instruction format: 0x7
label_2e3450:
    // 0x2e3450: 0x9ccac01e  lwu         $t2, -0x3FE2($a2)
    ctx->pc = 0x2e3450u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 6), 4294950942)));
label_2e3454:
    // 0x2e3454: 0x8cc83112  lw          $t0, 0x3112($a2)
    ctx->pc = 0x2e3454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12562)));
label_2e3458:
    // 0x2e3458: 0xbcee569d  cache       0x0E, 0x569D($a3)
    ctx->pc = 0x2e3458u;
    // CACHE instruction (ignored)
label_2e345c:
    // 0x2e345c: 0xfcc9f112  sd          $t1, -0xEEE($a2)
    ctx->pc = 0x2e345cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294963474), GPR_U64(ctx, 9));
label_2e3460:
    // 0x2e3460: 0xbcee58bf  cache       0x0E, 0x58BF($a3)
    ctx->pc = 0x2e3460u;
    // CACHE instruction (ignored)
label_2e3464:
    // 0x2e3464: 0xc0b851a  jal         func_2E1468
label_2e3468:
    if (ctx->pc == 0x2E3468u) {
        ctx->pc = 0x2E3468u;
            // 0x2e3468: 0xbdedfb0f  cache       0x0D, -0x4F1($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->pc = 0x2E346Cu;
        goto label_2e346c;
    }
    ctx->pc = 0x2E3464u;
    SET_GPR_U32(ctx, 31, 0x2E346Cu);
    ctx->pc = 0x2E3468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3464u;
            // 0x2e3468: 0xbdedfb0f  cache       0x0D, -0x4F1($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1468u;
    if (runtime->hasFunction(0x2E1468u)) {
        auto targetFn = runtime->lookupFunction(0x2E1468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E346Cu; }
        if (ctx->pc != 0x2E346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1468_0x2e1468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E346Cu; }
        if (ctx->pc != 0x2E346Cu) { return; }
    }
    ctx->pc = 0x2E346Cu;
label_2e346c:
    // 0x2e346c: 0xbcce1111  cache       0x0E, 0x1111($a2)
    ctx->pc = 0x2e346cu;
    // CACHE instruction (ignored)
label_2e3470:
    // 0x2e3470: 0xbd45f20f  cache       0x05, -0xDF1($t2)
    ctx->pc = 0x2e3470u;
    // CACHE instruction (ignored)
label_2e3474:
    // 0x2e3474: 0xbcee534f  cache       0x0E, 0x534F($a3)
    ctx->pc = 0x2e3474u;
    // CACHE instruction (ignored)
label_2e3478:
    // 0x2e3478: 0xbcde3314  cache       0x1E, 0x3314($a2)
    ctx->pc = 0x2e3478u;
    // CACHE instruction (ignored)
label_2e347c:
    // 0x2e347c: 0xbcedf71f  cache       0x0D, -0x8E1($a3)
    ctx->pc = 0x2e347cu;
    // CACHE instruction (ignored)
label_2e3480:
    // 0x2e3480: 0x94ca5112  lhu         $t2, 0x5112($a2)
    ctx->pc = 0x2e3480u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20754)));
label_2e3484:
    // 0x2e3484: 0xbcca513f  cache       0x0A, 0x513F($a2)
    ctx->pc = 0x2e3484u;
    // CACHE instruction (ignored)
label_2e3488:
    // 0x2e3488: 0xacca941e  sw          $t2, -0x6BE2($a2)
    ctx->pc = 0x2e3488u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294939678), GPR_U32(ctx, 10));
label_2e348c:
    // 0x2e348c: 0x9cc8541e  lwu         $t0, 0x541E($a2)
    ctx->pc = 0x2e348cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 21534)));
label_2e3490:
    // 0x2e3490: 0xbc5a123f  cache       0x1A, 0x123F($v0)
    ctx->pc = 0x2e3490u;
    // CACHE instruction (ignored)
label_2e3494:
    // 0x2e3494: 0xbceef43e  cache       0x0E, -0xBC2($a3)
    ctx->pc = 0x2e3494u;
    // CACHE instruction (ignored)
label_2e3498:
    // 0x2e3498: 0xbce2f36f  cache       0x02, -0xC91($a3)
    ctx->pc = 0x2e3498u;
    // CACHE instruction (ignored)
label_2e349c:
    // 0x2e349c: 0x43de11c5  .word       0x43DE11C5                   # INVALID     $fp, $fp, 0x11C5 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e349cu;
    // Unhandled COP0 instruction format: 0x1E
label_2e34a0:
    // 0x2e34a0: 0xbc6ad23f  cache       0x0A, -0x2DC1($v1)
    ctx->pc = 0x2e34a0u;
    // CACHE instruction (ignored)
label_2e34a4:
    // 0x2e34a4: 0x9cc85112  lwu         $t0, 0x5112($a2)
    ctx->pc = 0x2e34a4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 20754)));
label_2e34a8:
    // 0x2e34a8: 0x94c9f112  lhu         $t1, -0xEEE($a2)
    ctx->pc = 0x2e34a8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294963474)));
label_2e34ac:
    // 0x2e34ac: 0xbcedf737  cache       0x0D, -0x8C9($a3)
    ctx->pc = 0x2e34acu;
    // CACHE instruction (ignored)
label_2e34b0:
    // 0x2e34b0: 0xbcedf62f  cache       0x0D, -0x9D1($a3)
    ctx->pc = 0x2e34b0u;
    // CACHE instruction (ignored)
label_2e34b4:
    // 0x2e34b4: 0xfcc85112  sd          $t0, 0x5112($a2)
    ctx->pc = 0x2e34b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 20754), GPR_U64(ctx, 8));
label_2e34b8:
    // 0x2e34b8: 0xbcedf827  cache       0x0D, -0x7D9($a3)
    ctx->pc = 0x2e34b8u;
    // CACHE instruction (ignored)
label_2e34bc:
    // 0x2e34bc: 0xb9ee5bbf  swr         $t6, 0x5BBF($t7)
    ctx->pc = 0x2e34bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 23487); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2e34c0:
    // 0x2e34c0: 0xc0b826a  jal         func_2E09A8
label_2e34c4:
    if (ctx->pc == 0x2E34C4u) {
        ctx->pc = 0x2E34C4u;
            // 0x2e34c4: 0x43ee45c0  .word       0x43EE45C0                   # INVALID     $ra, $t6, 0x45C0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x1F
        ctx->pc = 0x2E34C8u;
        goto label_2e34c8;
    }
    ctx->pc = 0x2E34C0u;
    SET_GPR_U32(ctx, 31, 0x2E34C8u);
    ctx->pc = 0x2E34C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E34C0u;
            // 0x2e34c4: 0x43ee45c0  .word       0x43EE45C0                   # INVALID     $ra, $t6, 0x45C0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x1F
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E09A8u;
    if (runtime->hasFunction(0x2E09A8u)) {
        auto targetFn = runtime->lookupFunction(0x2E09A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34C8u; }
        if (ctx->pc != 0x2E34C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E09A8_0x2e09a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34C8u; }
        if (ctx->pc != 0x2E34C8u) { return; }
    }
    ctx->pc = 0x2E34C8u;
label_2e34c8:
    // 0x2e34c8: 0xbcce1128  cache       0x0E, 0x1128($a2)
    ctx->pc = 0x2e34c8u;
    // CACHE instruction (ignored)
label_2e34cc:
    // 0x2e34cc: 0x94ca5112  lhu         $t2, 0x5112($a2)
    ctx->pc = 0x2e34ccu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20754)));
label_2e34d0:
    // 0x2e34d0: 0x9cc85112  lwu         $t0, 0x5112($a2)
    ctx->pc = 0x2e34d0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 20754)));
label_2e34d4:
    // 0x2e34d4: 0xbcca513f  cache       0x0A, 0x513F($a2)
    ctx->pc = 0x2e34d4u;
    // CACHE instruction (ignored)
label_2e34d8:
    // 0x2e34d8: 0xbc5ad3f7  cache       0x1A, -0x2C09($v0)
    ctx->pc = 0x2e34d8u;
    // CACHE instruction (ignored)
label_2e34dc:
    // 0x2e34dc: 0xbceef43e  cache       0x0E, -0xBC2($a3)
    ctx->pc = 0x2e34dcu;
    // CACHE instruction (ignored)
label_2e34e0:
    // 0x2e34e0: 0x94e6f23f  lhu         $a2, -0xDC1($a3)
    ctx->pc = 0x2e34e0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294963775)));
label_2e34e4:
    // 0x2e34e4: 0xbc6ad33f  cache       0x0A, -0x2CC1($v1)
    ctx->pc = 0x2e34e4u;
    // CACHE instruction (ignored)
label_2e34e8:
    // 0x2e34e8: 0xbcca513f  cache       0x0A, 0x513F($a2)
    ctx->pc = 0x2e34e8u;
    // CACHE instruction (ignored)
label_2e34ec:
    // 0x2e34ec: 0x43de31c5  .word       0x43DE31C5                   # INVALID     $fp, $fp, 0x31C5 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e34ecu;
    // Unhandled COP0 instruction format: 0x1E
label_2e34f0:
    // 0x2e34f0: 0xbceed53e  cache       0x0E, -0x2AC2($a3)
    ctx->pc = 0x2e34f0u;
    // CACHE instruction (ignored)
label_2e34f4:
    // 0x2e34f4: 0x9cc85112  lwu         $t0, 0x5112($a2)
    ctx->pc = 0x2e34f4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 20754)));
label_2e34f8:
    // 0x2e34f8: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2e34f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
label_2e34fc:
    // 0x2e34fc: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2e34fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
label_2e3500:
    // 0x2e3500: 0x8cc81112  lw          $t0, 0x1112($a2)
    ctx->pc = 0x2e3500u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4370)));
label_2e3504:
    // 0x2e3504: 0x2529e130  addiu       $t1, $t1, -0x1ED0
    ctx->pc = 0x2e3504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959408));
label_2e3508:
    // 0x2e3508: 0x254ae128  addiu       $t2, $t2, -0x1ED8
    ctx->pc = 0x2e3508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959400));
label_2e350c:
    // 0x2e350c: 0x94ee543f  lhu         $t6, 0x543F($a3)
    ctx->pc = 0x2e350cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 21567)));
label_2e3510:
    // 0x2e3510: 0x84cad112  lh          $t2, -0x2EEE($a2)
    ctx->pc = 0x2e3510u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294955282)));
label_2e3514:
    // 0x2e3514: 0x94ee593f  lhu         $t6, 0x593F($a3)
    ctx->pc = 0x2e3514u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 22847)));
label_2e3518:
    // 0x2e3518: 0xc0b8db4  jal         func_2E36D0
label_2e351c:
    if (ctx->pc == 0x2E351Cu) {
        ctx->pc = 0x2E351Cu;
            // 0x2e351c: 0x43ee45c0  .word       0x43EE45C0                   # INVALID     $ra, $t6, 0x45C0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x1F
        ctx->pc = 0x2E3520u;
        goto label_2e3520;
    }
    ctx->pc = 0x2E3518u;
    SET_GPR_U32(ctx, 31, 0x2E3520u);
    ctx->pc = 0x2E351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3518u;
            // 0x2e351c: 0x43ee45c0  .word       0x43EE45C0                   # INVALID     $ra, $t6, 0x45C0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x1F
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E36D0u;
    if (runtime->hasFunction(0x2E36D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E36D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3520u; }
        if (ctx->pc != 0x2E3520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E36D0_0x2e36d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3520u; }
        if (ctx->pc != 0x2E3520u) { return; }
    }
    ctx->pc = 0x2E3520u;
label_2e3520:
    // 0x2e3520: 0xbce2133f  cache       0x02, 0x133F($a3)
    ctx->pc = 0x2e3520u;
    // CACHE instruction (ignored)
label_2e3524:
    // 0x2e3524: 0x1cca5335  .word       0x1CCA5335                   # bgtz        $a2, . + 4 + (0x5335 << 2) # 000A0000 <InstrIdType: CPU_NORMAL>
label_2e3528:
    if (ctx->pc == 0x2E3528u) {
        ctx->pc = 0x2E3528u;
            // 0x2e3528: 0xf2f650c0  scd         $s6, 0x50C0($s7) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->pc = 0x2E352Cu;
        goto label_2e352c;
    }
    ctx->pc = 0x2E3524u;
    {
        const bool branch_taken_0x2e3524 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2E3528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3524u;
            // 0x2e3528: 0xf2f650c0  scd         $s6, 0x50C0($s7) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3524) {
            ctx->pc = 0x2F81FCu;
            return;
        }
    }
    ctx->pc = 0x2E352Cu;
label_2e352c:
    // 0x2e352c: 0x43fe70c0  .word       0x43FE70C0                   # INVALID     $ra, $fp, 0x70C0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e352cu;
    // Unhandled COP0 instruction format: 0x1F
label_2e3530:
    // 0x2e3530: 0xc8ed03f  jal         func_23B40FC
label_2e3534:
    if (ctx->pc == 0x2E3534u) {
        ctx->pc = 0x2E3534u;
            // 0x2e3534: 0x2cc9f112  sltiu       $t1, $a2, -0xEEE (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4294963474) ? 1 : 0);
        ctx->pc = 0x2E3538u;
        goto label_2e3538;
    }
    ctx->pc = 0x2E3530u;
    SET_GPR_U32(ctx, 31, 0x2E3538u);
    ctx->pc = 0x2E3534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3530u;
            // 0x2e3534: 0x2cc9f112  sltiu       $t1, $a2, -0xEEE (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4294963474) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B40FCu;
    {
        auto targetFn = runtime->lookupFunction(0x23B40FCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3538u; }
        if (ctx->pc != 0x2E3538u) { return; }
    }
    ctx->pc = 0x2E3538u;
label_2e3538:
    // 0x2e3538: 0xfff650bf  sd          $s6, 0x50BF($ra)
    ctx->pc = 0x2e3538u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 20671), GPR_U64(ctx, 22));
label_2e353c:
    // 0x2e353c: 0x148ed03f  bne         $a0, $t6, . + 4 + (-0x2FC1 << 2)
label_2e3540:
    if (ctx->pc == 0x2E3540u) {
        ctx->pc = 0x2E3540u;
            // 0x2e3540: 0x3cca5112  .word       0x3CCA5112                   # lui         $t2, 0x5112 # 00C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20754 << 16));
        ctx->pc = 0x2E3544u;
        goto label_2e3544;
    }
    ctx->pc = 0x2E353Cu;
    {
        const bool branch_taken_0x2e353c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        ctx->pc = 0x2E3540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E353Cu;
            // 0x2e3540: 0x3cca5112  .word       0x3CCA5112                   # lui         $t2, 0x5112 # 00C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20754 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e353c) {
            ctx->pc = 0x2D763Cu;
            return;
        }
    }
    ctx->pc = 0x2E3544u;
label_2e3544:
    // 0x2e3544: 0xf3f6503f  scd         $s6, 0x503F($ra)
    ctx->pc = 0x2e3544u;
    // Unhandled opcode: 0x3C
label_2e3548:
    // 0x2e3548: 0x1c8ed03f  .word       0x1C8ED03F                   # bgtz        $a0, . + 4 + (-0x2FC1 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_2e354c:
    if (ctx->pc == 0x2E354Cu) {
        ctx->pc = 0x2E354Cu;
            // 0x2e354c: 0x3cf6403f  .word       0x3CF6403F                   # lui         $s6, 0x403F # 00E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16447 << 16));
        ctx->pc = 0x2E3550u;
        goto label_2e3550;
    }
    ctx->pc = 0x2E3548u;
    {
        const bool branch_taken_0x2e3548 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2E354Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3548u;
            // 0x2e354c: 0x3cf6403f  .word       0x3CF6403F                   # lui         $s6, 0x403F # 00E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3548) {
            ctx->pc = 0x2D7648u;
            return;
        }
    }
    ctx->pc = 0x2E3550u;
label_2e3550:
    // 0x2e3550: 0xc0b7c76  jal         func_2DF1D8
label_2e3554:
    if (ctx->pc == 0x2E3554u) {
        ctx->pc = 0x2E3554u;
            // 0x2e3554: 0xbcca513f  cache       0x0A, 0x513F($a2) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->pc = 0x2E3558u;
        goto label_2e3558;
    }
    ctx->pc = 0x2E3550u;
    SET_GPR_U32(ctx, 31, 0x2E3558u);
    ctx->pc = 0x2E3554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3550u;
            // 0x2e3554: 0xbcca513f  cache       0x0A, 0x513F($a2) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3558u; }
        if (ctx->pc != 0x2E3558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3558u; }
        if (ctx->pc != 0x2E3558u) { return; }
    }
    ctx->pc = 0x2E3558u;
label_2e3558:
    // 0x2e3558: 0xbc8ed33f  cache       0x0E, -0x2CC1($a0)
    ctx->pc = 0x2e3558u;
    // CACHE instruction (ignored)
label_2e355c:
    // 0x2e355c: 0xbc8cd11f  cache       0x0C, -0x2EE1($a0)
    ctx->pc = 0x2e355cu;
    // CACHE instruction (ignored)
label_2e3560:
    // 0x2e3560: 0x9cc8011e  lwu         $t0, 0x11E($a2)
    ctx->pc = 0x2e3560u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 286)));
label_2e3564:
    // 0x2e3564: 0xbcec413e  cache       0x0C, 0x413E($a3)
    ctx->pc = 0x2e3564u;
    // CACHE instruction (ignored)
label_2e3568:
    // 0x2e3568: 0xbcca513f  cache       0x0A, 0x513F($a2)
    ctx->pc = 0x2e3568u;
    // CACHE instruction (ignored)
label_2e356c:
    // 0x2e356c: 0xbcca513f  cache       0x0A, 0x513F($a2)
    ctx->pc = 0x2e356cu;
    // CACHE instruction (ignored)
label_2e3570:
    // 0x2e3570: 0xbc8c473c  cache       0x0C, 0x473C($a0)
    ctx->pc = 0x2e3570u;
    // CACHE instruction (ignored)
label_2e3574:
    // 0x2e3574: 0xbc8c443d  cache       0x0C, 0x443D($a0)
    ctx->pc = 0x2e3574u;
    // CACHE instruction (ignored)
label_2e3578:
    // 0x2e3578: 0x1c8c5109  .word       0x1C8C5109                   # bgtz        $a0, . + 4 + (0x5109 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_2e357c:
    if (ctx->pc == 0x2E357Cu) {
        ctx->pc = 0x2E357Cu;
            // 0x2e357c: 0xbc8c515b  cache       0x0C, 0x515B($a0) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->pc = 0x2E3580u;
        goto label_2e3580;
    }
    ctx->pc = 0x2E3578u;
    {
        const bool branch_taken_0x2e3578 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2E357Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3578u;
            // 0x2e357c: 0xbc8c515b  cache       0x0C, 0x515B($a0) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3578) {
            ctx->pc = 0x2F79A0u;
            return;
        }
    }
    ctx->pc = 0x2E3580u;
label_2e3580:
    // 0x2e3580: 0xb48e533f  sdr         $t6, 0x533F($a0)
    ctx->pc = 0x2e3580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 21311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e3584:
    // 0x2e3584: 0xbc8f513a  cache       0x0F, 0x513A($a0)
    ctx->pc = 0x2e3584u;
    // CACHE instruction (ignored)
label_2e3588:
    // 0x2e3588: 0xbce452bf  cache       0x04, 0x52BF($a3)
    ctx->pc = 0x2e3588u;
    // CACHE instruction (ignored)
label_2e358c:
    // 0x2e358c: 0xbc8c453e  cache       0x0C, 0x453E($a0)
    ctx->pc = 0x2e358cu;
    // CACHE instruction (ignored)
label_2e3590:
    // 0x2e3590: 0xbc8c515b  cache       0x0C, 0x515B($a0)
    ctx->pc = 0x2e3590u;
    // CACHE instruction (ignored)
label_2e3594:
    // 0x2e3594: 0xb48e533f  sdr         $t6, 0x533F($a0)
    ctx->pc = 0x2e3594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 21311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e3598:
    // 0x2e3598: 0xacca001a  sw          $t2, 0x1A($a2)
    ctx->pc = 0x2e3598u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 26), GPR_U32(ctx, 10));
label_2e359c:
    // 0x2e359c: 0x43de31d3  .word       0x43DE31D3                   # INVALID     $fp, $fp, 0x31D3 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e359cu;
    // Unhandled COP0 instruction format: 0x1E
label_2e35a0:
    // 0x2e35a0: 0xbc6ad33f  cache       0x0A, -0x2CC1($v1)
    ctx->pc = 0x2e35a0u;
    // CACHE instruction (ignored)
label_2e35a4:
    // 0x2e35a4: 0xf2f650c0  scd         $s6, 0x50C0($s7)
    ctx->pc = 0x2e35a4u;
    // Unhandled opcode: 0x3C
label_2e35a8:
    // 0x2e35a8: 0x43fe70c0  .word       0x43FE70C0                   # INVALID     $ra, $fp, 0x70C0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e35a8u;
    // Unhandled COP0 instruction format: 0x1F
label_2e35ac:
    // 0x2e35ac: 0xc8ed03f  jal         func_23B40FC
label_2e35b0:
    if (ctx->pc == 0x2E35B0u) {
        ctx->pc = 0x2E35B0u;
            // 0x2e35b0: 0x3cca5112  .word       0x3CCA5112                   # lui         $t2, 0x5112 # 00C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20754 << 16));
        ctx->pc = 0x2E35B4u;
        goto label_2e35b4;
    }
    ctx->pc = 0x2E35ACu;
    SET_GPR_U32(ctx, 31, 0x2E35B4u);
    ctx->pc = 0x2E35B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35ACu;
            // 0x2e35b0: 0x3cca5112  .word       0x3CCA5112                   # lui         $t2, 0x5112 # 00C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20754 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B40FCu;
    {
        auto targetFn = runtime->lookupFunction(0x23B40FCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35B4u; }
        if (ctx->pc != 0x2E35B4u) { return; }
    }
    ctx->pc = 0x2E35B4u;
label_2e35b4:
    // 0x2e35b4: 0xfff650bf  sd          $s6, 0x50BF($ra)
    ctx->pc = 0x2e35b4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 20671), GPR_U64(ctx, 22));
label_2e35b8:
    // 0x2e35b8: 0x148ed03f  bne         $a0, $t6, . + 4 + (-0x2FC1 << 2)
label_2e35bc:
    if (ctx->pc == 0x2E35BCu) {
        ctx->pc = 0x2E35BCu;
            // 0x2e35bc: 0x3cf6403f  .word       0x3CF6403F                   # lui         $s6, 0x403F # 00E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16447 << 16));
        ctx->pc = 0x2E35C0u;
        goto label_2e35c0;
    }
    ctx->pc = 0x2E35B8u;
    {
        const bool branch_taken_0x2e35b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        ctx->pc = 0x2E35BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35B8u;
            // 0x2e35bc: 0x3cf6403f  .word       0x3CF6403F                   # lui         $s6, 0x403F # 00E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35b8) {
            ctx->pc = 0x2D76B8u;
            return;
        }
    }
    ctx->pc = 0x2E35C0u;
label_2e35c0:
    // 0x2e35c0: 0xf3f6503f  scd         $s6, 0x503F($ra)
    ctx->pc = 0x2e35c0u;
    // Unhandled opcode: 0x3C
label_2e35c4:
    // 0x2e35c4: 0x1c8ed03f  .word       0x1C8ED03F                   # bgtz        $a0, . + 4 + (-0x2FC1 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_2e35c8:
    if (ctx->pc == 0x2E35C8u) {
        ctx->pc = 0x2E35C8u;
            // 0x2e35c8: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->pc = 0x2E35CCu;
        goto label_2e35cc;
    }
    ctx->pc = 0x2E35C4u;
    {
        const bool branch_taken_0x2e35c4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2E35C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35C4u;
            // 0x2e35c8: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35c4) {
            ctx->pc = 0x2D76C4u;
            return;
        }
    }
    ctx->pc = 0x2E35CCu;
label_2e35cc:
    // 0x2e35cc: 0xbcca513f  cache       0x0A, 0x513F($a2)
    ctx->pc = 0x2e35ccu;
    // CACHE instruction (ignored)
label_2e35d0:
    // 0x2e35d0: 0xbc8ed33f  cache       0x0E, -0x2CC1($a0)
    ctx->pc = 0x2e35d0u;
    // CACHE instruction (ignored)
label_2e35d4:
    // 0x2e35d4: 0xbc8cd11f  cache       0x0C, -0x2EE1($a0)
    ctx->pc = 0x2e35d4u;
    // CACHE instruction (ignored)
label_2e35d8:
    // 0x2e35d8: 0x9cc8211e  lwu         $t0, 0x211E($a2)
    ctx->pc = 0x2e35d8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 8478)));
label_2e35dc:
    // 0x2e35dc: 0xbcec413e  cache       0x0C, 0x413E($a3)
    ctx->pc = 0x2e35dcu;
    // CACHE instruction (ignored)
label_2e35e0:
    // 0x2e35e0: 0xbcca513f  cache       0x0A, 0x513F($a2)
    ctx->pc = 0x2e35e0u;
    // CACHE instruction (ignored)
label_2e35e4:
    // 0x2e35e4: 0xbcca513f  cache       0x0A, 0x513F($a2)
    ctx->pc = 0x2e35e4u;
    // CACHE instruction (ignored)
label_2e35e8:
    // 0x2e35e8: 0xbc8c473c  cache       0x0C, 0x473C($a0)
    ctx->pc = 0x2e35e8u;
    // CACHE instruction (ignored)
label_2e35ec:
    // 0x2e35ec: 0xbc8c443d  cache       0x0C, 0x443D($a0)
    ctx->pc = 0x2e35ecu;
    // CACHE instruction (ignored)
label_2e35f0:
    // 0x2e35f0: 0x1c8c5109  .word       0x1C8C5109                   # bgtz        $a0, . + 4 + (0x5109 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_2e35f4:
    if (ctx->pc == 0x2E35F4u) {
        ctx->pc = 0x2E35F4u;
            // 0x2e35f4: 0xbc8c515b  cache       0x0C, 0x515B($a0) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->pc = 0x2E35F8u;
        goto label_2e35f8;
    }
    ctx->pc = 0x2E35F0u;
    {
        const bool branch_taken_0x2e35f0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2E35F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35F0u;
            // 0x2e35f4: 0xbc8c515b  cache       0x0C, 0x515B($a0) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35f0) {
            ctx->pc = 0x2F7A18u;
            return;
        }
    }
    ctx->pc = 0x2E35F8u;
label_2e35f8:
    // 0x2e35f8: 0xb48e533f  sdr         $t6, 0x533F($a0)
    ctx->pc = 0x2e35f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 21311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e35fc:
    // 0x2e35fc: 0xbc8f513a  cache       0x0F, 0x513A($a0)
    ctx->pc = 0x2e35fcu;
    // CACHE instruction (ignored)
label_2e3600:
    // 0x2e3600: 0xbce4529d  cache       0x04, 0x529D($a3)
    ctx->pc = 0x2e3600u;
    // CACHE instruction (ignored)
label_2e3604:
    // 0x2e3604: 0xbc8c453e  cache       0x0C, 0x453E($a0)
    ctx->pc = 0x2e3604u;
    // CACHE instruction (ignored)
label_2e3608:
    // 0x2e3608: 0xbc8c515b  cache       0x0C, 0x515B($a0)
    ctx->pc = 0x2e3608u;
    // CACHE instruction (ignored)
label_2e360c:
    // 0x2e360c: 0xb48e533f  sdr         $t6, 0x533F($a0)
    ctx->pc = 0x2e360cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 21311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e3610:
    // 0x2e3610: 0xacca001a  sw          $t2, 0x1A($a2)
    ctx->pc = 0x2e3610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 26), GPR_U32(ctx, 10));
label_2e3614:
    // 0x2e3614: 0x43de31d3  .word       0x43DE31D3                   # INVALID     $fp, $fp, 0x31D3 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e3614u;
    // Unhandled COP0 instruction format: 0x1E
label_2e3618:
    // 0x2e3618: 0xbc6ad33f  cache       0x0A, -0x2CC1($v1)
    ctx->pc = 0x2e3618u;
    // CACHE instruction (ignored)
label_2e361c:
    // 0x2e361c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e3620:
    if (ctx->pc == 0x2E3620u) {
        ctx->pc = 0x2E3624u;
        goto label_2e3624;
    }
    ctx->pc = 0x2E361Cu;
    {
        const bool branch_taken_0x2e361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e361c) {
            ctx->pc = 0x2E364Cu;
            goto label_2e364c;
        }
    }
    ctx->pc = 0x2E3624u;
label_2e3624:
    // 0x2e3624: 0xa2901069  sb          $s0, 0x1069($s4)
    ctx->pc = 0x2e3624u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4201), (uint8_t)GPR_U32(ctx, 16));
label_2e3628:
    // 0x2e3628: 0xc36f564  jal         func_DBD590
label_2e362c:
    if (ctx->pc == 0x2E362Cu) {
        ctx->pc = 0x2E362Cu;
            // 0x2e362c: 0x1f6c020  add         $t8, $t7, $s6 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 15);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
        ctx->pc = 0x2E3630u;
        goto label_2e3630;
    }
    ctx->pc = 0x2E3628u;
    SET_GPR_U32(ctx, 31, 0x2E3630u);
    ctx->pc = 0x2E362Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3628u;
            // 0x2e362c: 0x1f6c020  add         $t8, $t7, $s6 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 15);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
        ctx->in_delay_slot = false;
    ctx->pc = 0xDBD590u;
    {
        auto targetFn = runtime->lookupFunction(0xDBD590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3630u; }
        if (ctx->pc != 0x2E3630u) { return; }
    }
    ctx->pc = 0x2E3630u;
label_2e3630:
    // 0x2e3630: 0x25427f58  addiu       $v0, $t2, 0x7F58
    ctx->pc = 0x2e3630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 32600));
label_2e3634:
    // 0x2e3634: 0xa1f87c29  sb          $t8, 0x7C29($t7)
    ctx->pc = 0x2e3634u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 31785), (uint8_t)GPR_U32(ctx, 24));
label_2e3638:
    // 0x2e3638: 0xfe4bd21a  sd          $t3, -0x2DE6($s2)
    ctx->pc = 0x2e3638u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294955546), GPR_U64(ctx, 11));
label_2e363c:
    // 0x2e363c: 0x2c374768  sltiu       $s7, $at, 0x4768
    ctx->pc = 0x2e363cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)18280) ? 1 : 0);
label_2e3640:
    // 0x2e3640: 0xca1601b9  lwc2        $22, 0x1B9($s0)
    ctx->pc = 0x2e3640u;
    // Unhandled opcode: 0x32
label_2e3644:
    // 0x2e3644: 0x2c374560  sltiu       $s7, $at, 0x4560
    ctx->pc = 0x2e3644u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)17760) ? 1 : 0);
label_2e3648:
    // 0x2e3648: 0x0  nop
    ctx->pc = 0x2e3648u;
    // NOP
label_2e364c:
    // 0x2e364c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_2e3650:
    // 0x2e3650: 0x2442363c  addiu       $v0, $v0, 0x363C
    ctx->pc = 0x2e3650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13884));
label_2e3654:
    // 0x2e3654: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e3654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
label_2e3658:
    // 0x2e3658: 0x2484361c  addiu       $a0, $a0, 0x361C
    ctx->pc = 0x2e3658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13852));
label_2e365c:
    // 0x2e365c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e365cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3660:
    // 0x2e3660: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e3660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e3664:
    // 0x2e3664: 0xc0b63f0  jal         func_2D8FC0
label_2e3668:
    if (ctx->pc == 0x2E3668u) {
        ctx->pc = 0x2E3668u;
            // 0x2e3668: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2E366Cu;
        goto label_2e366c;
    }
    ctx->pc = 0x2E3664u;
    SET_GPR_U32(ctx, 31, 0x2E366Cu);
    ctx->pc = 0x2E3668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3664u;
            // 0x2e3668: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E366Cu; }
        if (ctx->pc != 0x2E366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E366Cu; }
        if (ctx->pc != 0x2E366Cu) { return; }
    }
    ctx->pc = 0x2E366Cu;
label_2e366c:
    // 0x2e366c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2e366cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e3670:
    // 0x2e3670: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x2e3670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2e3674:
    // 0x2e3674: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x2e3674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_2e3678:
    // 0x2e3678: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x2e3678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2e367c:
    // 0x2e367c: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x2e367cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_2e3680:
    // 0x2e3680: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x2e3680u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2e3684:
    // 0x2e3684: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x2e3684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_2e3688:
    // 0x2e3688: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x2e3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2e368c:
    // 0x2e368c: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x2e368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e3690:
    // 0x2e3690: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x2e3690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e3694:
    // 0x2e3694: 0x3e00008  jr          $ra
label_2e3698:
    if (ctx->pc == 0x2E3698u) {
        ctx->pc = 0x2E3698u;
            // 0x2e3698: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2E369Cu;
        goto label_2e369c;
    }
    ctx->pc = 0x2E3694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3694u;
            // 0x2e3698: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E369Cu;
label_2e369c:
    // 0x2e369c: 0x0  nop
    ctx->pc = 0x2e369cu;
    // NOP
    ctx->pc = 0x2e36a0u;
}
