#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B30F8
// Address: 0x2b30f8 - 0x2b3a48
void sub_002B30F8_0x2b30f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B30F8_0x2b30f8");
#endif

    switch (ctx->pc) {
        case 0x2b30f8u: goto label_2b30f8;
        case 0x2b30fcu: goto label_2b30fc;
        case 0x2b3100u: goto label_2b3100;
        case 0x2b3104u: goto label_2b3104;
        case 0x2b3108u: goto label_2b3108;
        case 0x2b310cu: goto label_2b310c;
        case 0x2b3110u: goto label_2b3110;
        case 0x2b3114u: goto label_2b3114;
        case 0x2b3118u: goto label_2b3118;
        case 0x2b311cu: goto label_2b311c;
        case 0x2b3120u: goto label_2b3120;
        case 0x2b3124u: goto label_2b3124;
        case 0x2b3128u: goto label_2b3128;
        case 0x2b312cu: goto label_2b312c;
        case 0x2b3130u: goto label_2b3130;
        case 0x2b3134u: goto label_2b3134;
        case 0x2b3138u: goto label_2b3138;
        case 0x2b313cu: goto label_2b313c;
        case 0x2b3140u: goto label_2b3140;
        case 0x2b3144u: goto label_2b3144;
        case 0x2b3148u: goto label_2b3148;
        case 0x2b314cu: goto label_2b314c;
        case 0x2b3150u: goto label_2b3150;
        case 0x2b3154u: goto label_2b3154;
        case 0x2b3158u: goto label_2b3158;
        case 0x2b315cu: goto label_2b315c;
        case 0x2b3160u: goto label_2b3160;
        case 0x2b3164u: goto label_2b3164;
        case 0x2b3168u: goto label_2b3168;
        case 0x2b316cu: goto label_2b316c;
        case 0x2b3170u: goto label_2b3170;
        case 0x2b3174u: goto label_2b3174;
        case 0x2b3178u: goto label_2b3178;
        case 0x2b317cu: goto label_2b317c;
        case 0x2b3180u: goto label_2b3180;
        case 0x2b3184u: goto label_2b3184;
        case 0x2b3188u: goto label_2b3188;
        case 0x2b318cu: goto label_2b318c;
        case 0x2b3190u: goto label_2b3190;
        case 0x2b3194u: goto label_2b3194;
        case 0x2b3198u: goto label_2b3198;
        case 0x2b319cu: goto label_2b319c;
        case 0x2b31a0u: goto label_2b31a0;
        case 0x2b31a4u: goto label_2b31a4;
        case 0x2b31a8u: goto label_2b31a8;
        case 0x2b31acu: goto label_2b31ac;
        case 0x2b31b0u: goto label_2b31b0;
        case 0x2b31b4u: goto label_2b31b4;
        case 0x2b31b8u: goto label_2b31b8;
        case 0x2b31bcu: goto label_2b31bc;
        case 0x2b31c0u: goto label_2b31c0;
        case 0x2b31c4u: goto label_2b31c4;
        case 0x2b31c8u: goto label_2b31c8;
        case 0x2b31ccu: goto label_2b31cc;
        case 0x2b31d0u: goto label_2b31d0;
        case 0x2b31d4u: goto label_2b31d4;
        case 0x2b31d8u: goto label_2b31d8;
        case 0x2b31dcu: goto label_2b31dc;
        case 0x2b31e0u: goto label_2b31e0;
        case 0x2b31e4u: goto label_2b31e4;
        case 0x2b31e8u: goto label_2b31e8;
        case 0x2b31ecu: goto label_2b31ec;
        case 0x2b31f0u: goto label_2b31f0;
        case 0x2b31f4u: goto label_2b31f4;
        case 0x2b31f8u: goto label_2b31f8;
        case 0x2b31fcu: goto label_2b31fc;
        case 0x2b3200u: goto label_2b3200;
        case 0x2b3204u: goto label_2b3204;
        case 0x2b3208u: goto label_2b3208;
        case 0x2b320cu: goto label_2b320c;
        case 0x2b3210u: goto label_2b3210;
        case 0x2b3214u: goto label_2b3214;
        case 0x2b3218u: goto label_2b3218;
        case 0x2b321cu: goto label_2b321c;
        case 0x2b3220u: goto label_2b3220;
        case 0x2b3224u: goto label_2b3224;
        case 0x2b3228u: goto label_2b3228;
        case 0x2b322cu: goto label_2b322c;
        case 0x2b3230u: goto label_2b3230;
        case 0x2b3234u: goto label_2b3234;
        case 0x2b3238u: goto label_2b3238;
        case 0x2b323cu: goto label_2b323c;
        case 0x2b3240u: goto label_2b3240;
        case 0x2b3244u: goto label_2b3244;
        case 0x2b3248u: goto label_2b3248;
        case 0x2b324cu: goto label_2b324c;
        case 0x2b3250u: goto label_2b3250;
        case 0x2b3254u: goto label_2b3254;
        case 0x2b3258u: goto label_2b3258;
        case 0x2b325cu: goto label_2b325c;
        case 0x2b3260u: goto label_2b3260;
        case 0x2b3264u: goto label_2b3264;
        case 0x2b3268u: goto label_2b3268;
        case 0x2b326cu: goto label_2b326c;
        case 0x2b3270u: goto label_2b3270;
        case 0x2b3274u: goto label_2b3274;
        case 0x2b3278u: goto label_2b3278;
        case 0x2b327cu: goto label_2b327c;
        case 0x2b3280u: goto label_2b3280;
        case 0x2b3284u: goto label_2b3284;
        case 0x2b3288u: goto label_2b3288;
        case 0x2b328cu: goto label_2b328c;
        case 0x2b3290u: goto label_2b3290;
        case 0x2b3294u: goto label_2b3294;
        case 0x2b3298u: goto label_2b3298;
        case 0x2b329cu: goto label_2b329c;
        case 0x2b32a0u: goto label_2b32a0;
        case 0x2b32a4u: goto label_2b32a4;
        case 0x2b32a8u: goto label_2b32a8;
        case 0x2b32acu: goto label_2b32ac;
        case 0x2b32b0u: goto label_2b32b0;
        case 0x2b32b4u: goto label_2b32b4;
        case 0x2b32b8u: goto label_2b32b8;
        case 0x2b32bcu: goto label_2b32bc;
        case 0x2b32c0u: goto label_2b32c0;
        case 0x2b32c4u: goto label_2b32c4;
        case 0x2b32c8u: goto label_2b32c8;
        case 0x2b32ccu: goto label_2b32cc;
        case 0x2b32d0u: goto label_2b32d0;
        case 0x2b32d4u: goto label_2b32d4;
        case 0x2b32d8u: goto label_2b32d8;
        case 0x2b32dcu: goto label_2b32dc;
        case 0x2b32e0u: goto label_2b32e0;
        case 0x2b32e4u: goto label_2b32e4;
        case 0x2b32e8u: goto label_2b32e8;
        case 0x2b32ecu: goto label_2b32ec;
        case 0x2b32f0u: goto label_2b32f0;
        case 0x2b32f4u: goto label_2b32f4;
        case 0x2b32f8u: goto label_2b32f8;
        case 0x2b32fcu: goto label_2b32fc;
        case 0x2b3300u: goto label_2b3300;
        case 0x2b3304u: goto label_2b3304;
        case 0x2b3308u: goto label_2b3308;
        case 0x2b330cu: goto label_2b330c;
        case 0x2b3310u: goto label_2b3310;
        case 0x2b3314u: goto label_2b3314;
        case 0x2b3318u: goto label_2b3318;
        case 0x2b331cu: goto label_2b331c;
        case 0x2b3320u: goto label_2b3320;
        case 0x2b3324u: goto label_2b3324;
        case 0x2b3328u: goto label_2b3328;
        case 0x2b332cu: goto label_2b332c;
        case 0x2b3330u: goto label_2b3330;
        case 0x2b3334u: goto label_2b3334;
        case 0x2b3338u: goto label_2b3338;
        case 0x2b333cu: goto label_2b333c;
        case 0x2b3340u: goto label_2b3340;
        case 0x2b3344u: goto label_2b3344;
        case 0x2b3348u: goto label_2b3348;
        case 0x2b334cu: goto label_2b334c;
        case 0x2b3350u: goto label_2b3350;
        case 0x2b3354u: goto label_2b3354;
        case 0x2b3358u: goto label_2b3358;
        case 0x2b335cu: goto label_2b335c;
        case 0x2b3360u: goto label_2b3360;
        case 0x2b3364u: goto label_2b3364;
        case 0x2b3368u: goto label_2b3368;
        case 0x2b336cu: goto label_2b336c;
        case 0x2b3370u: goto label_2b3370;
        case 0x2b3374u: goto label_2b3374;
        case 0x2b3378u: goto label_2b3378;
        case 0x2b337cu: goto label_2b337c;
        case 0x2b3380u: goto label_2b3380;
        case 0x2b3384u: goto label_2b3384;
        case 0x2b3388u: goto label_2b3388;
        case 0x2b338cu: goto label_2b338c;
        case 0x2b3390u: goto label_2b3390;
        case 0x2b3394u: goto label_2b3394;
        case 0x2b3398u: goto label_2b3398;
        case 0x2b339cu: goto label_2b339c;
        case 0x2b33a0u: goto label_2b33a0;
        case 0x2b33a4u: goto label_2b33a4;
        case 0x2b33a8u: goto label_2b33a8;
        case 0x2b33acu: goto label_2b33ac;
        case 0x2b33b0u: goto label_2b33b0;
        case 0x2b33b4u: goto label_2b33b4;
        case 0x2b33b8u: goto label_2b33b8;
        case 0x2b33bcu: goto label_2b33bc;
        case 0x2b33c0u: goto label_2b33c0;
        case 0x2b33c4u: goto label_2b33c4;
        case 0x2b33c8u: goto label_2b33c8;
        case 0x2b33ccu: goto label_2b33cc;
        case 0x2b33d0u: goto label_2b33d0;
        case 0x2b33d4u: goto label_2b33d4;
        case 0x2b33d8u: goto label_2b33d8;
        case 0x2b33dcu: goto label_2b33dc;
        case 0x2b33e0u: goto label_2b33e0;
        case 0x2b33e4u: goto label_2b33e4;
        case 0x2b33e8u: goto label_2b33e8;
        case 0x2b33ecu: goto label_2b33ec;
        case 0x2b33f0u: goto label_2b33f0;
        case 0x2b33f4u: goto label_2b33f4;
        case 0x2b33f8u: goto label_2b33f8;
        case 0x2b33fcu: goto label_2b33fc;
        case 0x2b3400u: goto label_2b3400;
        case 0x2b3404u: goto label_2b3404;
        case 0x2b3408u: goto label_2b3408;
        case 0x2b340cu: goto label_2b340c;
        case 0x2b3410u: goto label_2b3410;
        case 0x2b3414u: goto label_2b3414;
        case 0x2b3418u: goto label_2b3418;
        case 0x2b341cu: goto label_2b341c;
        case 0x2b3420u: goto label_2b3420;
        case 0x2b3424u: goto label_2b3424;
        case 0x2b3428u: goto label_2b3428;
        case 0x2b342cu: goto label_2b342c;
        case 0x2b3430u: goto label_2b3430;
        case 0x2b3434u: goto label_2b3434;
        case 0x2b3438u: goto label_2b3438;
        case 0x2b343cu: goto label_2b343c;
        case 0x2b3440u: goto label_2b3440;
        case 0x2b3444u: goto label_2b3444;
        case 0x2b3448u: goto label_2b3448;
        case 0x2b344cu: goto label_2b344c;
        case 0x2b3450u: goto label_2b3450;
        case 0x2b3454u: goto label_2b3454;
        case 0x2b3458u: goto label_2b3458;
        case 0x2b345cu: goto label_2b345c;
        case 0x2b3460u: goto label_2b3460;
        case 0x2b3464u: goto label_2b3464;
        case 0x2b3468u: goto label_2b3468;
        case 0x2b346cu: goto label_2b346c;
        case 0x2b3470u: goto label_2b3470;
        case 0x2b3474u: goto label_2b3474;
        case 0x2b3478u: goto label_2b3478;
        case 0x2b347cu: goto label_2b347c;
        case 0x2b3480u: goto label_2b3480;
        case 0x2b3484u: goto label_2b3484;
        case 0x2b3488u: goto label_2b3488;
        case 0x2b348cu: goto label_2b348c;
        case 0x2b3490u: goto label_2b3490;
        case 0x2b3494u: goto label_2b3494;
        case 0x2b3498u: goto label_2b3498;
        case 0x2b349cu: goto label_2b349c;
        case 0x2b34a0u: goto label_2b34a0;
        case 0x2b34a4u: goto label_2b34a4;
        case 0x2b34a8u: goto label_2b34a8;
        case 0x2b34acu: goto label_2b34ac;
        case 0x2b34b0u: goto label_2b34b0;
        case 0x2b34b4u: goto label_2b34b4;
        case 0x2b34b8u: goto label_2b34b8;
        case 0x2b34bcu: goto label_2b34bc;
        case 0x2b34c0u: goto label_2b34c0;
        case 0x2b34c4u: goto label_2b34c4;
        case 0x2b34c8u: goto label_2b34c8;
        case 0x2b34ccu: goto label_2b34cc;
        case 0x2b34d0u: goto label_2b34d0;
        case 0x2b34d4u: goto label_2b34d4;
        case 0x2b34d8u: goto label_2b34d8;
        case 0x2b34dcu: goto label_2b34dc;
        case 0x2b34e0u: goto label_2b34e0;
        case 0x2b34e4u: goto label_2b34e4;
        case 0x2b34e8u: goto label_2b34e8;
        case 0x2b34ecu: goto label_2b34ec;
        case 0x2b34f0u: goto label_2b34f0;
        case 0x2b34f4u: goto label_2b34f4;
        case 0x2b34f8u: goto label_2b34f8;
        case 0x2b34fcu: goto label_2b34fc;
        case 0x2b3500u: goto label_2b3500;
        case 0x2b3504u: goto label_2b3504;
        case 0x2b3508u: goto label_2b3508;
        case 0x2b350cu: goto label_2b350c;
        case 0x2b3510u: goto label_2b3510;
        case 0x2b3514u: goto label_2b3514;
        case 0x2b3518u: goto label_2b3518;
        case 0x2b351cu: goto label_2b351c;
        case 0x2b3520u: goto label_2b3520;
        case 0x2b3524u: goto label_2b3524;
        case 0x2b3528u: goto label_2b3528;
        case 0x2b352cu: goto label_2b352c;
        case 0x2b3530u: goto label_2b3530;
        case 0x2b3534u: goto label_2b3534;
        case 0x2b3538u: goto label_2b3538;
        case 0x2b353cu: goto label_2b353c;
        case 0x2b3540u: goto label_2b3540;
        case 0x2b3544u: goto label_2b3544;
        case 0x2b3548u: goto label_2b3548;
        case 0x2b354cu: goto label_2b354c;
        case 0x2b3550u: goto label_2b3550;
        case 0x2b3554u: goto label_2b3554;
        case 0x2b3558u: goto label_2b3558;
        case 0x2b355cu: goto label_2b355c;
        case 0x2b3560u: goto label_2b3560;
        case 0x2b3564u: goto label_2b3564;
        case 0x2b3568u: goto label_2b3568;
        case 0x2b356cu: goto label_2b356c;
        case 0x2b3570u: goto label_2b3570;
        case 0x2b3574u: goto label_2b3574;
        case 0x2b3578u: goto label_2b3578;
        case 0x2b357cu: goto label_2b357c;
        case 0x2b3580u: goto label_2b3580;
        case 0x2b3584u: goto label_2b3584;
        case 0x2b3588u: goto label_2b3588;
        case 0x2b358cu: goto label_2b358c;
        case 0x2b3590u: goto label_2b3590;
        case 0x2b3594u: goto label_2b3594;
        case 0x2b3598u: goto label_2b3598;
        case 0x2b359cu: goto label_2b359c;
        case 0x2b35a0u: goto label_2b35a0;
        case 0x2b35a4u: goto label_2b35a4;
        case 0x2b35a8u: goto label_2b35a8;
        case 0x2b35acu: goto label_2b35ac;
        case 0x2b35b0u: goto label_2b35b0;
        case 0x2b35b4u: goto label_2b35b4;
        case 0x2b35b8u: goto label_2b35b8;
        case 0x2b35bcu: goto label_2b35bc;
        case 0x2b35c0u: goto label_2b35c0;
        case 0x2b35c4u: goto label_2b35c4;
        case 0x2b35c8u: goto label_2b35c8;
        case 0x2b35ccu: goto label_2b35cc;
        case 0x2b35d0u: goto label_2b35d0;
        case 0x2b35d4u: goto label_2b35d4;
        case 0x2b35d8u: goto label_2b35d8;
        case 0x2b35dcu: goto label_2b35dc;
        case 0x2b35e0u: goto label_2b35e0;
        case 0x2b35e4u: goto label_2b35e4;
        case 0x2b35e8u: goto label_2b35e8;
        case 0x2b35ecu: goto label_2b35ec;
        case 0x2b35f0u: goto label_2b35f0;
        case 0x2b35f4u: goto label_2b35f4;
        case 0x2b35f8u: goto label_2b35f8;
        case 0x2b35fcu: goto label_2b35fc;
        case 0x2b3600u: goto label_2b3600;
        case 0x2b3604u: goto label_2b3604;
        case 0x2b3608u: goto label_2b3608;
        case 0x2b360cu: goto label_2b360c;
        case 0x2b3610u: goto label_2b3610;
        case 0x2b3614u: goto label_2b3614;
        case 0x2b3618u: goto label_2b3618;
        case 0x2b361cu: goto label_2b361c;
        case 0x2b3620u: goto label_2b3620;
        case 0x2b3624u: goto label_2b3624;
        case 0x2b3628u: goto label_2b3628;
        case 0x2b362cu: goto label_2b362c;
        case 0x2b3630u: goto label_2b3630;
        case 0x2b3634u: goto label_2b3634;
        case 0x2b3638u: goto label_2b3638;
        case 0x2b363cu: goto label_2b363c;
        case 0x2b3640u: goto label_2b3640;
        case 0x2b3644u: goto label_2b3644;
        case 0x2b3648u: goto label_2b3648;
        case 0x2b364cu: goto label_2b364c;
        case 0x2b3650u: goto label_2b3650;
        case 0x2b3654u: goto label_2b3654;
        case 0x2b3658u: goto label_2b3658;
        case 0x2b365cu: goto label_2b365c;
        case 0x2b3660u: goto label_2b3660;
        case 0x2b3664u: goto label_2b3664;
        case 0x2b3668u: goto label_2b3668;
        case 0x2b366cu: goto label_2b366c;
        case 0x2b3670u: goto label_2b3670;
        case 0x2b3674u: goto label_2b3674;
        case 0x2b3678u: goto label_2b3678;
        case 0x2b367cu: goto label_2b367c;
        case 0x2b3680u: goto label_2b3680;
        case 0x2b3684u: goto label_2b3684;
        case 0x2b3688u: goto label_2b3688;
        case 0x2b368cu: goto label_2b368c;
        case 0x2b3690u: goto label_2b3690;
        case 0x2b3694u: goto label_2b3694;
        case 0x2b3698u: goto label_2b3698;
        case 0x2b369cu: goto label_2b369c;
        case 0x2b36a0u: goto label_2b36a0;
        case 0x2b36a4u: goto label_2b36a4;
        case 0x2b36a8u: goto label_2b36a8;
        case 0x2b36acu: goto label_2b36ac;
        case 0x2b36b0u: goto label_2b36b0;
        case 0x2b36b4u: goto label_2b36b4;
        case 0x2b36b8u: goto label_2b36b8;
        case 0x2b36bcu: goto label_2b36bc;
        case 0x2b36c0u: goto label_2b36c0;
        case 0x2b36c4u: goto label_2b36c4;
        case 0x2b36c8u: goto label_2b36c8;
        case 0x2b36ccu: goto label_2b36cc;
        case 0x2b36d0u: goto label_2b36d0;
        case 0x2b36d4u: goto label_2b36d4;
        case 0x2b36d8u: goto label_2b36d8;
        case 0x2b36dcu: goto label_2b36dc;
        case 0x2b36e0u: goto label_2b36e0;
        case 0x2b36e4u: goto label_2b36e4;
        case 0x2b36e8u: goto label_2b36e8;
        case 0x2b36ecu: goto label_2b36ec;
        case 0x2b36f0u: goto label_2b36f0;
        case 0x2b36f4u: goto label_2b36f4;
        case 0x2b36f8u: goto label_2b36f8;
        case 0x2b36fcu: goto label_2b36fc;
        case 0x2b3700u: goto label_2b3700;
        case 0x2b3704u: goto label_2b3704;
        case 0x2b3708u: goto label_2b3708;
        case 0x2b370cu: goto label_2b370c;
        case 0x2b3710u: goto label_2b3710;
        case 0x2b3714u: goto label_2b3714;
        case 0x2b3718u: goto label_2b3718;
        case 0x2b371cu: goto label_2b371c;
        case 0x2b3720u: goto label_2b3720;
        case 0x2b3724u: goto label_2b3724;
        case 0x2b3728u: goto label_2b3728;
        case 0x2b372cu: goto label_2b372c;
        case 0x2b3730u: goto label_2b3730;
        case 0x2b3734u: goto label_2b3734;
        case 0x2b3738u: goto label_2b3738;
        case 0x2b373cu: goto label_2b373c;
        case 0x2b3740u: goto label_2b3740;
        case 0x2b3744u: goto label_2b3744;
        case 0x2b3748u: goto label_2b3748;
        case 0x2b374cu: goto label_2b374c;
        case 0x2b3750u: goto label_2b3750;
        case 0x2b3754u: goto label_2b3754;
        case 0x2b3758u: goto label_2b3758;
        case 0x2b375cu: goto label_2b375c;
        case 0x2b3760u: goto label_2b3760;
        case 0x2b3764u: goto label_2b3764;
        case 0x2b3768u: goto label_2b3768;
        case 0x2b376cu: goto label_2b376c;
        case 0x2b3770u: goto label_2b3770;
        case 0x2b3774u: goto label_2b3774;
        case 0x2b3778u: goto label_2b3778;
        case 0x2b377cu: goto label_2b377c;
        case 0x2b3780u: goto label_2b3780;
        case 0x2b3784u: goto label_2b3784;
        case 0x2b3788u: goto label_2b3788;
        case 0x2b378cu: goto label_2b378c;
        case 0x2b3790u: goto label_2b3790;
        case 0x2b3794u: goto label_2b3794;
        case 0x2b3798u: goto label_2b3798;
        case 0x2b379cu: goto label_2b379c;
        case 0x2b37a0u: goto label_2b37a0;
        case 0x2b37a4u: goto label_2b37a4;
        case 0x2b37a8u: goto label_2b37a8;
        case 0x2b37acu: goto label_2b37ac;
        case 0x2b37b0u: goto label_2b37b0;
        case 0x2b37b4u: goto label_2b37b4;
        case 0x2b37b8u: goto label_2b37b8;
        case 0x2b37bcu: goto label_2b37bc;
        case 0x2b37c0u: goto label_2b37c0;
        case 0x2b37c4u: goto label_2b37c4;
        case 0x2b37c8u: goto label_2b37c8;
        case 0x2b37ccu: goto label_2b37cc;
        case 0x2b37d0u: goto label_2b37d0;
        case 0x2b37d4u: goto label_2b37d4;
        case 0x2b37d8u: goto label_2b37d8;
        case 0x2b37dcu: goto label_2b37dc;
        case 0x2b37e0u: goto label_2b37e0;
        case 0x2b37e4u: goto label_2b37e4;
        case 0x2b37e8u: goto label_2b37e8;
        case 0x2b37ecu: goto label_2b37ec;
        case 0x2b37f0u: goto label_2b37f0;
        case 0x2b37f4u: goto label_2b37f4;
        case 0x2b37f8u: goto label_2b37f8;
        case 0x2b37fcu: goto label_2b37fc;
        case 0x2b3800u: goto label_2b3800;
        case 0x2b3804u: goto label_2b3804;
        case 0x2b3808u: goto label_2b3808;
        case 0x2b380cu: goto label_2b380c;
        case 0x2b3810u: goto label_2b3810;
        case 0x2b3814u: goto label_2b3814;
        case 0x2b3818u: goto label_2b3818;
        case 0x2b381cu: goto label_2b381c;
        case 0x2b3820u: goto label_2b3820;
        case 0x2b3824u: goto label_2b3824;
        case 0x2b3828u: goto label_2b3828;
        case 0x2b382cu: goto label_2b382c;
        case 0x2b3830u: goto label_2b3830;
        case 0x2b3834u: goto label_2b3834;
        case 0x2b3838u: goto label_2b3838;
        case 0x2b383cu: goto label_2b383c;
        case 0x2b3840u: goto label_2b3840;
        case 0x2b3844u: goto label_2b3844;
        case 0x2b3848u: goto label_2b3848;
        case 0x2b384cu: goto label_2b384c;
        case 0x2b3850u: goto label_2b3850;
        case 0x2b3854u: goto label_2b3854;
        case 0x2b3858u: goto label_2b3858;
        case 0x2b385cu: goto label_2b385c;
        case 0x2b3860u: goto label_2b3860;
        case 0x2b3864u: goto label_2b3864;
        case 0x2b3868u: goto label_2b3868;
        case 0x2b386cu: goto label_2b386c;
        case 0x2b3870u: goto label_2b3870;
        case 0x2b3874u: goto label_2b3874;
        case 0x2b3878u: goto label_2b3878;
        case 0x2b387cu: goto label_2b387c;
        case 0x2b3880u: goto label_2b3880;
        case 0x2b3884u: goto label_2b3884;
        case 0x2b3888u: goto label_2b3888;
        case 0x2b388cu: goto label_2b388c;
        case 0x2b3890u: goto label_2b3890;
        case 0x2b3894u: goto label_2b3894;
        case 0x2b3898u: goto label_2b3898;
        case 0x2b389cu: goto label_2b389c;
        case 0x2b38a0u: goto label_2b38a0;
        case 0x2b38a4u: goto label_2b38a4;
        case 0x2b38a8u: goto label_2b38a8;
        case 0x2b38acu: goto label_2b38ac;
        case 0x2b38b0u: goto label_2b38b0;
        case 0x2b38b4u: goto label_2b38b4;
        case 0x2b38b8u: goto label_2b38b8;
        case 0x2b38bcu: goto label_2b38bc;
        case 0x2b38c0u: goto label_2b38c0;
        case 0x2b38c4u: goto label_2b38c4;
        case 0x2b38c8u: goto label_2b38c8;
        case 0x2b38ccu: goto label_2b38cc;
        case 0x2b38d0u: goto label_2b38d0;
        case 0x2b38d4u: goto label_2b38d4;
        case 0x2b38d8u: goto label_2b38d8;
        case 0x2b38dcu: goto label_2b38dc;
        case 0x2b38e0u: goto label_2b38e0;
        case 0x2b38e4u: goto label_2b38e4;
        case 0x2b38e8u: goto label_2b38e8;
        case 0x2b38ecu: goto label_2b38ec;
        case 0x2b38f0u: goto label_2b38f0;
        case 0x2b38f4u: goto label_2b38f4;
        case 0x2b38f8u: goto label_2b38f8;
        case 0x2b38fcu: goto label_2b38fc;
        case 0x2b3900u: goto label_2b3900;
        case 0x2b3904u: goto label_2b3904;
        case 0x2b3908u: goto label_2b3908;
        case 0x2b390cu: goto label_2b390c;
        case 0x2b3910u: goto label_2b3910;
        case 0x2b3914u: goto label_2b3914;
        case 0x2b3918u: goto label_2b3918;
        case 0x2b391cu: goto label_2b391c;
        case 0x2b3920u: goto label_2b3920;
        case 0x2b3924u: goto label_2b3924;
        case 0x2b3928u: goto label_2b3928;
        case 0x2b392cu: goto label_2b392c;
        case 0x2b3930u: goto label_2b3930;
        case 0x2b3934u: goto label_2b3934;
        case 0x2b3938u: goto label_2b3938;
        case 0x2b393cu: goto label_2b393c;
        case 0x2b3940u: goto label_2b3940;
        case 0x2b3944u: goto label_2b3944;
        case 0x2b3948u: goto label_2b3948;
        case 0x2b394cu: goto label_2b394c;
        case 0x2b3950u: goto label_2b3950;
        case 0x2b3954u: goto label_2b3954;
        case 0x2b3958u: goto label_2b3958;
        case 0x2b395cu: goto label_2b395c;
        case 0x2b3960u: goto label_2b3960;
        case 0x2b3964u: goto label_2b3964;
        case 0x2b3968u: goto label_2b3968;
        case 0x2b396cu: goto label_2b396c;
        case 0x2b3970u: goto label_2b3970;
        case 0x2b3974u: goto label_2b3974;
        case 0x2b3978u: goto label_2b3978;
        case 0x2b397cu: goto label_2b397c;
        case 0x2b3980u: goto label_2b3980;
        case 0x2b3984u: goto label_2b3984;
        case 0x2b3988u: goto label_2b3988;
        case 0x2b398cu: goto label_2b398c;
        case 0x2b3990u: goto label_2b3990;
        case 0x2b3994u: goto label_2b3994;
        case 0x2b3998u: goto label_2b3998;
        case 0x2b399cu: goto label_2b399c;
        case 0x2b39a0u: goto label_2b39a0;
        case 0x2b39a4u: goto label_2b39a4;
        case 0x2b39a8u: goto label_2b39a8;
        case 0x2b39acu: goto label_2b39ac;
        case 0x2b39b0u: goto label_2b39b0;
        case 0x2b39b4u: goto label_2b39b4;
        case 0x2b39b8u: goto label_2b39b8;
        case 0x2b39bcu: goto label_2b39bc;
        case 0x2b39c0u: goto label_2b39c0;
        case 0x2b39c4u: goto label_2b39c4;
        case 0x2b39c8u: goto label_2b39c8;
        case 0x2b39ccu: goto label_2b39cc;
        case 0x2b39d0u: goto label_2b39d0;
        case 0x2b39d4u: goto label_2b39d4;
        case 0x2b39d8u: goto label_2b39d8;
        case 0x2b39dcu: goto label_2b39dc;
        case 0x2b39e0u: goto label_2b39e0;
        case 0x2b39e4u: goto label_2b39e4;
        case 0x2b39e8u: goto label_2b39e8;
        case 0x2b39ecu: goto label_2b39ec;
        case 0x2b39f0u: goto label_2b39f0;
        case 0x2b39f4u: goto label_2b39f4;
        case 0x2b39f8u: goto label_2b39f8;
        case 0x2b39fcu: goto label_2b39fc;
        case 0x2b3a00u: goto label_2b3a00;
        case 0x2b3a04u: goto label_2b3a04;
        case 0x2b3a08u: goto label_2b3a08;
        case 0x2b3a0cu: goto label_2b3a0c;
        case 0x2b3a10u: goto label_2b3a10;
        case 0x2b3a14u: goto label_2b3a14;
        case 0x2b3a18u: goto label_2b3a18;
        case 0x2b3a1cu: goto label_2b3a1c;
        case 0x2b3a20u: goto label_2b3a20;
        case 0x2b3a24u: goto label_2b3a24;
        case 0x2b3a28u: goto label_2b3a28;
        case 0x2b3a2cu: goto label_2b3a2c;
        case 0x2b3a30u: goto label_2b3a30;
        case 0x2b3a34u: goto label_2b3a34;
        case 0x2b3a38u: goto label_2b3a38;
        case 0x2b3a3cu: goto label_2b3a3c;
        case 0x2b3a40u: goto label_2b3a40;
        case 0x2b3a44u: goto label_2b3a44;
        default: break;
    }

    ctx->pc = 0x2b30f8u;

label_2b30f8:
    // 0x2b30f8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2b30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2b30fc:
    // 0x2b30fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b30fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b3100:
    // 0x2b3100: 0x8c627600  lw          $v0, 0x7600($v1)
    ctx->pc = 0x2b3100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30208)));
label_2b3104:
    // 0x2b3104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b3108:
    // 0x2b3108: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b3108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b310c:
    // 0x2b310c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_2b3110:
    if (ctx->pc == 0x2B3110u) {
        ctx->pc = 0x2B3110u;
            // 0x2b3110: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2B3114u;
        goto label_2b3114;
    }
    ctx->pc = 0x2B310Cu;
    {
        const bool branch_taken_0x2b310c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B310Cu;
            // 0x2b3110: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b310c) {
            ctx->pc = 0x2B3234u;
            goto label_2b3234;
        }
    }
    ctx->pc = 0x2B3114u;
label_2b3114:
    // 0x2b3114: 0x0  nop
    ctx->pc = 0x2b3114u;
    // NOP
label_2b3118:
    // 0x2b3118: 0xc0ab9b6  jal         func_2AE6D8
label_2b311c:
    if (ctx->pc == 0x2B311Cu) {
        ctx->pc = 0x2B311Cu;
            // 0x2b311c: 0x3c1001c9  lui         $s0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
        ctx->pc = 0x2B3120u;
        goto label_2b3120;
    }
    ctx->pc = 0x2B3118u;
    SET_GPR_U32(ctx, 31, 0x2B3120u);
    ctx->pc = 0x2B311Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3118u;
            // 0x2b311c: 0x3c1001c9  lui         $s0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE6D8u;
    if (runtime->hasFunction(0x2AE6D8u)) {
        auto targetFn = runtime->lookupFunction(0x2AE6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3120u; }
        if (ctx->pc != 0x2B3120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE6D8_0x2ae6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3120u; }
        if (ctx->pc != 0x2B3120u) { return; }
    }
    ctx->pc = 0x2B3120u;
label_2b3120:
    // 0x2b3120: 0x26034a38  addiu       $v1, $s0, 0x4A38
    ctx->pc = 0x2b3120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 19000));
label_2b3124:
    // 0x2b3124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b3124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3128:
    // 0x2b3128: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2b3128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b312c:
    // 0x2b312c: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x2b312cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2b3130:
    // 0x2b3130: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2b3130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2b3134:
    // 0x2b3134: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2b3138:
    if (ctx->pc == 0x2B3138u) {
        ctx->pc = 0x2B3138u;
            // 0x2b3138: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B313Cu;
        goto label_2b313c;
    }
    ctx->pc = 0x2B3134u;
    {
        const bool branch_taken_0x2b3134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3134u;
            // 0x2b3138: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3134) {
            ctx->pc = 0x2B31A4u;
            goto label_2b31a4;
        }
    }
    ctx->pc = 0x2B313Cu;
label_2b313c:
    // 0x2b313c: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2b313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2b3140:
    // 0x2b3140: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2b3140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_2b3144:
    // 0x2b3144: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2b3144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2b3148:
    // 0x2b3148: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2b3148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2b314c:
    // 0x2b314c: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2b314cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2b3150:
    // 0x2b3150: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2b3150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b3154:
    // 0x2b3154: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2b3154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2b3158:
    // 0x2b3158: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2b3158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2b315c:
    // 0x2b315c: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2b315cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2b3160:
    // 0x2b3160: 0x68aa001f  ldl         $t2, 0x1F($a1)
    ctx->pc = 0x2b3160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2b3164:
    // 0x2b3164: 0x6caa0018  ldr         $t2, 0x18($a1)
    ctx->pc = 0x2b3164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_2b3168:
    // 0x2b3168: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x2b3168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b316c:
    // 0x2b316c: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x2b316cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3170:
    // 0x2b3170: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2b3170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3174:
    // 0x2b3174: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2b3174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3178:
    // 0x2b3178: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2b3178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b317c:
    // 0x2b317c: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2b317cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3180:
    // 0x2b3180: 0xb0ca001f  sdl         $t2, 0x1F($a2)
    ctx->pc = 0x2b3180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3184:
    // 0x2b3184: 0xb4ca0018  sdr         $t2, 0x18($a2)
    ctx->pc = 0x2b3184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3188:
    // 0x2b3188: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2b3188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2b318c:
    // 0x2b318c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b318cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2b3190:
    // 0x2b3190: 0x0  nop
    ctx->pc = 0x2b3190u;
    // NOP
label_2b3194:
    // 0x2b3194: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
label_2b3198:
    if (ctx->pc == 0x2B3198u) {
        ctx->pc = 0x2B319Cu;
        goto label_2b319c;
    }
    ctx->pc = 0x2B3194u;
    {
        const bool branch_taken_0x2b3194 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3194) {
            ctx->pc = 0x2B3148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b3148;
        }
    }
    ctx->pc = 0x2B319Cu;
label_2b319c:
    // 0x2b319c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2b31a0:
    if (ctx->pc == 0x2B31A0u) {
        ctx->pc = 0x2B31A4u;
        goto label_2b31a4;
    }
    ctx->pc = 0x2B319Cu;
    {
        const bool branch_taken_0x2b319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b319c) {
            ctx->pc = 0x2B31E4u;
            goto label_2b31e4;
        }
    }
    ctx->pc = 0x2B31A4u;
label_2b31a4:
    // 0x2b31a4: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2b31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2b31a8:
    // 0x2b31a8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2b31a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_2b31ac:
    // 0x2b31ac: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2b31acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2b31b0:
    // 0x2b31b0: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x2b31b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2b31b4:
    // 0x2b31b4: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x2b31b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_2b31b8:
    // 0x2b31b8: 0xdca90010  ld          $t1, 0x10($a1)
    ctx->pc = 0x2b31b8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_2b31bc:
    // 0x2b31bc: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x2b31bcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_2b31c0:
    // 0x2b31c0: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x2b31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
label_2b31c4:
    // 0x2b31c4: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x2b31c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
label_2b31c8:
    // 0x2b31c8: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2b31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
label_2b31cc:
    // 0x2b31cc: 0xfcca0018  sd          $t2, 0x18($a2)
    ctx->pc = 0x2b31ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 10));
label_2b31d0:
    // 0x2b31d0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2b31d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2b31d4:
    // 0x2b31d4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b31d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2b31d8:
    // 0x2b31d8: 0x0  nop
    ctx->pc = 0x2b31d8u;
    // NOP
label_2b31dc:
    // 0x2b31dc: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
label_2b31e0:
    if (ctx->pc == 0x2B31E0u) {
        ctx->pc = 0x2B31E4u;
        goto label_2b31e4;
    }
    ctx->pc = 0x2B31DCu;
    {
        const bool branch_taken_0x2b31dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b31dc) {
            ctx->pc = 0x2B31B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b31b0;
        }
    }
    ctx->pc = 0x2B31E4u;
label_2b31e4:
    // 0x2b31e4: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2b31e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2b31e8:
    // 0x2b31e8: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2b31e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2b31ec:
    // 0x2b31ec: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2b31ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b31f0:
    // 0x2b31f0: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2b31f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2b31f4:
    // 0x2b31f4: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2b31f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2b31f8:
    // 0x2b31f8: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2b31f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2b31fc:
    // 0x2b31fc: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x2b31fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2b3200:
    // 0x2b3200: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x2b3200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3204:
    // 0x2b3204: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x2b3204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3208:
    // 0x2b3208: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2b3208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b320c:
    // 0x2b320c: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2b320cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3210:
    // 0x2b3210: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2b3210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3214:
    // 0x2b3214: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2b3214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3218:
    // 0x2b3218: 0x26224a38  addiu       $v0, $s1, 0x4A38
    ctx->pc = 0x2b3218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 19000));
label_2b321c:
    // 0x2b321c: 0xacca0018  sw          $t2, 0x18($a2)
    ctx->pc = 0x2b321cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 10));
label_2b3220:
    // 0x2b3220: 0x24843250  addiu       $a0, $a0, 0x3250
    ctx->pc = 0x2b3220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12880));
label_2b3224:
    // 0x2b3224: 0x246330c8  addiu       $v1, $v1, 0x30C8
    ctx->pc = 0x2b3224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12488));
label_2b3228:
    // 0x2b3228: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x2b3228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_2b322c:
    // 0x2b322c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b3230:
    if (ctx->pc == 0x2B3230u) {
        ctx->pc = 0x2B3230u;
            // 0x2b3230: 0xac43004c  sw          $v1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x2B3234u;
        goto label_2b3234;
    }
    ctx->pc = 0x2B322Cu;
    {
        const bool branch_taken_0x2b322c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B322Cu;
            // 0x2b3230: 0xac43004c  sw          $v1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b322c) {
            ctx->pc = 0x2B3238u;
            goto label_2b3238;
        }
    }
    ctx->pc = 0x2B3234u;
label_2b3234:
    // 0x2b3234: 0x3c1001c9  lui         $s0, 0x1C9
    ctx->pc = 0x2b3234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
label_2b3238:
    // 0x2b3238: 0x26024a38  addiu       $v0, $s0, 0x4A38
    ctx->pc = 0x2b3238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 19000));
label_2b323c:
    // 0x2b323c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b323cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b3240:
    // 0x2b3240: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b3240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3244:
    // 0x2b3244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b3248:
    // 0x2b3248: 0x3e00008  jr          $ra
label_2b324c:
    if (ctx->pc == 0x2B324Cu) {
        ctx->pc = 0x2B324Cu;
            // 0x2b324c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B3250u;
        goto label_2b3250;
    }
    ctx->pc = 0x2B3248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3248u;
            // 0x2b324c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3250u;
label_2b3250:
    // 0x2b3250: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b3254:
    // 0x2b3254: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b3254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b3258:
    // 0x2b3258: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2b325c:
    // 0x2b325c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b325cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b3260:
    // 0x2b3260: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b3260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b3264:
    // 0x2b3264: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b3264u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3268:
    // 0x2b3268: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2b3268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2b326c:
    // 0x2b326c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2b326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2b3270:
    // 0x2b3270: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b3270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2b3274:
    // 0x2b3274: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b3274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b3278:
    // 0x2b3278: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b3278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b327c:
    // 0x2b327c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b3280:
    // 0x2b3280: 0xc0a8d8a  jal         func_2A3628
label_2b3284:
    if (ctx->pc == 0x2B3284u) {
        ctx->pc = 0x2B3284u;
            // 0x2b3284: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2B3288u;
        goto label_2b3288;
    }
    ctx->pc = 0x2B3280u;
    SET_GPR_U32(ctx, 31, 0x2B3288u);
    ctx->pc = 0x2B3284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3280u;
            // 0x2b3284: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (runtime->hasFunction(0x2A3628u)) {
        auto targetFn = runtime->lookupFunction(0x2A3628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3288u; }
        if (ctx->pc != 0x2B3288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3628_0x2a3628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3288u; }
        if (ctx->pc != 0x2B3288u) { return; }
    }
    ctx->pc = 0x2B3288u;
label_2b3288:
    // 0x2b3288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b328c:
    // 0x2b328c: 0xc0a8d66  jal         func_2A3598
label_2b3290:
    if (ctx->pc == 0x2B3290u) {
        ctx->pc = 0x2B3290u;
            // 0x2b3290: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B3294u;
        goto label_2b3294;
    }
    ctx->pc = 0x2B328Cu;
    SET_GPR_U32(ctx, 31, 0x2B3294u);
    ctx->pc = 0x2B3290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B328Cu;
            // 0x2b3290: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3598u;
    if (runtime->hasFunction(0x2A3598u)) {
        auto targetFn = runtime->lookupFunction(0x2A3598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3294u; }
        if (ctx->pc != 0x2B3294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3598_0x2a3598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3294u; }
        if (ctx->pc != 0x2B3294u) { return; }
    }
    ctx->pc = 0x2B3294u;
label_2b3294:
    // 0x2b3294: 0xc0a56b6  jal         func_295AD8
label_2b3298:
    if (ctx->pc == 0x2B3298u) {
        ctx->pc = 0x2B329Cu;
        goto label_2b329c;
    }
    ctx->pc = 0x2B3294u;
    SET_GPR_U32(ctx, 31, 0x2B329Cu);
    ctx->pc = 0x295AD8u;
    if (runtime->hasFunction(0x295AD8u)) {
        auto targetFn = runtime->lookupFunction(0x295AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B329Cu; }
        if (ctx->pc != 0x2B329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295AD8_0x295ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B329Cu; }
        if (ctx->pc != 0x2B329Cu) { return; }
    }
    ctx->pc = 0x2B329Cu;
label_2b329c:
    // 0x2b329c: 0xc0491f2  jal         func_1247C8
label_2b32a0:
    if (ctx->pc == 0x2B32A0u) {
        ctx->pc = 0x2B32A4u;
        goto label_2b32a4;
    }
    ctx->pc = 0x2B329Cu;
    SET_GPR_U32(ctx, 31, 0x2B32A4u);
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B32A4u; }
        if (ctx->pc != 0x2B32A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B32A4u; }
        if (ctx->pc != 0x2B32A4u) { return; }
    }
    ctx->pc = 0x2B32A4u;
label_2b32a4:
    // 0x2b32a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b32a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2b32a8:
    // 0x2b32a8: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2b32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2b32ac:
    // 0x2b32ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b32b0:
    if (ctx->pc == 0x2B32B0u) {
        ctx->pc = 0x2B32B0u;
            // 0x2b32b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B32B4u;
        goto label_2b32b4;
    }
    ctx->pc = 0x2B32ACu;
    {
        const bool branch_taken_0x2b32ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B32B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B32ACu;
            // 0x2b32b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32ac) {
            ctx->pc = 0x2B32BCu;
            goto label_2b32bc;
        }
    }
    ctx->pc = 0x2B32B4u;
label_2b32b4:
    // 0x2b32b4: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2b32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2b32b8:
    // 0x2b32b8: 0x8c52007c  lw          $s2, 0x7C($v0)
    ctx->pc = 0x2b32b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2b32bc:
    // 0x2b32bc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2b32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b32c0:
    // 0x2b32c0: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x2b32c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b32c4:
    // 0x2b32c4: 0x8e300030  lw          $s0, 0x30($s1)
    ctx->pc = 0x2b32c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b32c8:
    // 0x2b32c8: 0x241e11a0  addiu       $fp, $zero, 0x11A0
    ctx->pc = 0x2b32c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4512));
label_2b32cc:
    // 0x2b32cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b32d0:
    // 0x2b32d0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b32d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b32d4:
    // 0x2b32d4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2b32d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2b32d8:
    // 0x2b32d8: 0x241711d0  addiu       $s7, $zero, 0x11D0
    ctx->pc = 0x2b32d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4560));
label_2b32dc:
    // 0x2b32dc: 0x0  nop
    ctx->pc = 0x2b32dcu;
    // NOP
label_2b32e0:
    // 0x2b32e0: 0x2a021162  slti        $v0, $s0, 0x1162
    ctx->pc = 0x2b32e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4450) ? 1 : 0);
label_2b32e4:
    // 0x2b32e4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_2b32e8:
    if (ctx->pc == 0x2B32E8u) {
        ctx->pc = 0x2B32E8u;
            // 0x2b32e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B32ECu;
        goto label_2b32ec;
    }
    ctx->pc = 0x2B32E4u;
    {
        const bool branch_taken_0x2b32e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B32E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B32E4u;
            // 0x2b32e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32e4) {
            ctx->pc = 0x2B341Cu;
            goto label_2b341c;
        }
    }
    ctx->pc = 0x2B32ECu;
label_2b32ec:
    // 0x2b32ec: 0x2a021160  slti        $v0, $s0, 0x1160
    ctx->pc = 0x2b32ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4448) ? 1 : 0);
label_2b32f0:
    // 0x2b32f0: 0x104000e0  beqz        $v0, . + 4 + (0xE0 << 2)
label_2b32f4:
    if (ctx->pc == 0x2B32F4u) {
        ctx->pc = 0x2B32F4u;
            // 0x2b32f4: 0x2a021122  slti        $v0, $s0, 0x1122 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4386) ? 1 : 0);
        ctx->pc = 0x2B32F8u;
        goto label_2b32f8;
    }
    ctx->pc = 0x2B32F0u;
    {
        const bool branch_taken_0x2b32f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B32F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B32F0u;
            // 0x2b32f4: 0x2a021122  slti        $v0, $s0, 0x1122 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32f0) {
            ctx->pc = 0x2B3674u;
            goto label_2b3674;
        }
    }
    ctx->pc = 0x2B32F8u;
label_2b32f8:
    // 0x2b32f8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2b32fc:
    if (ctx->pc == 0x2B32FCu) {
        ctx->pc = 0x2B32FCu;
            // 0x2b32fc: 0x2a021120  slti        $v0, $s0, 0x1120 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4384) ? 1 : 0);
        ctx->pc = 0x2B3300u;
        goto label_2b3300;
    }
    ctx->pc = 0x2B32F8u;
    {
        const bool branch_taken_0x2b32f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B32FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B32F8u;
            // 0x2b32fc: 0x2a021120  slti        $v0, $s0, 0x1120 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4384) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32f8) {
            ctx->pc = 0x2B3390u;
            goto label_2b3390;
        }
    }
    ctx->pc = 0x2B3300u;
label_2b3300:
    // 0x2b3300: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
label_2b3304:
    if (ctx->pc == 0x2B3304u) {
        ctx->pc = 0x2B3304u;
            // 0x2b3304: 0x24021003  addiu       $v0, $zero, 0x1003 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
        ctx->pc = 0x2B3308u;
        goto label_2b3308;
    }
    ctx->pc = 0x2B3300u;
    {
        const bool branch_taken_0x2b3300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3300u;
            // 0x2b3304: 0x24021003  addiu       $v0, $zero, 0x1003 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3300) {
            ctx->pc = 0x2B3600u;
            goto label_2b3600;
        }
    }
    ctx->pc = 0x2B3308u;
label_2b3308:
    // 0x2b3308: 0x12020096  beq         $s0, $v0, . + 4 + (0x96 << 2)
label_2b330c:
    if (ctx->pc == 0x2B330Cu) {
        ctx->pc = 0x2B330Cu;
            // 0x2b330c: 0x2a021004  slti        $v0, $s0, 0x1004 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4100) ? 1 : 0);
        ctx->pc = 0x2B3310u;
        goto label_2b3310;
    }
    ctx->pc = 0x2B3308u;
    {
        const bool branch_taken_0x2b3308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B330Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3308u;
            // 0x2b330c: 0x2a021004  slti        $v0, $s0, 0x1004 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3308) {
            ctx->pc = 0x2B3564u;
            goto label_2b3564;
        }
    }
    ctx->pc = 0x2B3310u;
label_2b3310:
    // 0x2b3310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b3314:
    if (ctx->pc == 0x2B3314u) {
        ctx->pc = 0x2B3314u;
            // 0x2b3314: 0x24031100  addiu       $v1, $zero, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
        ctx->pc = 0x2B3318u;
        goto label_2b3318;
    }
    ctx->pc = 0x2B3310u;
    {
        const bool branch_taken_0x2b3310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3310u;
            // 0x2b3314: 0x24031100  addiu       $v1, $zero, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3310) {
            ctx->pc = 0x2B3330u;
            goto label_2b3330;
        }
    }
    ctx->pc = 0x2B3318u;
label_2b3318:
    // 0x2b3318: 0x12140155  beq         $s0, $s4, . + 4 + (0x155 << 2)
label_2b331c:
    if (ctx->pc == 0x2B331Cu) {
        ctx->pc = 0x2B331Cu;
            // 0x2b331c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x2B3320u;
        goto label_2b3320;
    }
    ctx->pc = 0x2B3318u;
    {
        const bool branch_taken_0x2b3318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x2B331Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3318u;
            // 0x2b331c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3318) {
            ctx->pc = 0x2B3870u;
            goto label_2b3870;
        }
    }
    ctx->pc = 0x2B3320u;
label_2b3320:
    // 0x2b3320: 0x12020090  beq         $s0, $v0, . + 4 + (0x90 << 2)
label_2b3324:
    if (ctx->pc == 0x2B3324u) {
        ctx->pc = 0x2B3324u;
            // 0x2b3324: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B3328u;
        goto label_2b3328;
    }
    ctx->pc = 0x2B3320u;
    {
        const bool branch_taken_0x2b3320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3320u;
            // 0x2b3324: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3320) {
            ctx->pc = 0x2B3564u;
            goto label_2b3564;
        }
    }
    ctx->pc = 0x2B3328u;
label_2b3328:
    // 0x2b3328: 0x10000181  b           . + 4 + (0x181 << 2)
label_2b332c:
    if (ctx->pc == 0x2B332Cu) {
        ctx->pc = 0x2B332Cu;
            // 0x2b332c: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x2B3330u;
        goto label_2b3330;
    }
    ctx->pc = 0x2B3328u;
    {
        const bool branch_taken_0x2b3328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B332Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3328u;
            // 0x2b332c: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3328) {
            ctx->pc = 0x2B3930u;
            goto label_2b3930;
        }
    }
    ctx->pc = 0x2B3330u;
label_2b3330:
    // 0x2b3330: 0x12030136  beq         $s0, $v1, . + 4 + (0x136 << 2)
label_2b3334:
    if (ctx->pc == 0x2B3334u) {
        ctx->pc = 0x2B3334u;
            // 0x2b3334: 0x2a021100  slti        $v0, $s0, 0x1100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4352) ? 1 : 0);
        ctx->pc = 0x2B3338u;
        goto label_2b3338;
    }
    ctx->pc = 0x2B3330u;
    {
        const bool branch_taken_0x2b3330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3330u;
            // 0x2b3334: 0x2a021100  slti        $v0, $s0, 0x1100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4352) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3330) {
            ctx->pc = 0x2B380Cu;
            goto label_2b380c;
        }
    }
    ctx->pc = 0x2B3338u;
label_2b3338:
    // 0x2b3338: 0x1440017c  bnez        $v0, . + 4 + (0x17C << 2)
label_2b333c:
    if (ctx->pc == 0x2B333Cu) {
        ctx->pc = 0x2B333Cu;
            // 0x2b333c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B3340u;
        goto label_2b3340;
    }
    ctx->pc = 0x2B3338u;
    {
        const bool branch_taken_0x2b3338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B333Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3338u;
            // 0x2b333c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3338) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B3340u;
label_2b3340:
    // 0x2b3340: 0x2a021112  slti        $v0, $s0, 0x1112
    ctx->pc = 0x2b3340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4370) ? 1 : 0);
label_2b3344:
    // 0x2b3344: 0x10400179  beqz        $v0, . + 4 + (0x179 << 2)
label_2b3348:
    if (ctx->pc == 0x2B3348u) {
        ctx->pc = 0x2B3348u;
            // 0x2b3348: 0x2a021110  slti        $v0, $s0, 0x1110 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4368) ? 1 : 0);
        ctx->pc = 0x2B334Cu;
        goto label_2b334c;
    }
    ctx->pc = 0x2B3344u;
    {
        const bool branch_taken_0x2b3344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3344u;
            // 0x2b3348: 0x2a021110  slti        $v0, $s0, 0x1110 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4368) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3344) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B334Cu;
label_2b334c:
    // 0x2b334c: 0x14400178  bnez        $v0, . + 4 + (0x178 << 2)
label_2b3350:
    if (ctx->pc == 0x2B3350u) {
        ctx->pc = 0x2B3350u;
            // 0x2b3350: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x2B3354u;
        goto label_2b3354;
    }
    ctx->pc = 0x2B334Cu;
    {
        const bool branch_taken_0x2b334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B334Cu;
            // 0x2b3350: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b334c) {
            ctx->pc = 0x2B3930u;
            goto label_2b3930;
        }
    }
    ctx->pc = 0x2B3354u;
label_2b3354:
    // 0x2b3354: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2b3354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2b3358:
    // 0x2b3358: 0xc0ace92  jal         func_2B3A48
label_2b335c:
    if (ctx->pc == 0x2B335Cu) {
        ctx->pc = 0x2B335Cu;
            // 0x2b335c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3360u;
        goto label_2b3360;
    }
    ctx->pc = 0x2B3358u;
    SET_GPR_U32(ctx, 31, 0x2B3360u);
    ctx->pc = 0x2B335Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3358u;
            // 0x2b335c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B3A48u;
    if (runtime->hasFunction(0x2B3A48u)) {
        auto targetFn = runtime->lookupFunction(0x2B3A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3360u; }
        if (ctx->pc != 0x2B3360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B3A48_0x2b3a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3360u; }
        if (ctx->pc != 0x2B3360u) { return; }
    }
    ctx->pc = 0x2B3360u;
label_2b3360:
    // 0x2b3360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3364:
    // 0x2b3364: 0x1a0001a2  blez        $s0, . + 4 + (0x1A2 << 2)
label_2b3368:
    if (ctx->pc == 0x2B3368u) {
        ctx->pc = 0x2B3368u;
            // 0x2b3368: 0x24021120  addiu       $v0, $zero, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4384));
        ctx->pc = 0x2B336Cu;
        goto label_2b336c;
    }
    ctx->pc = 0x2B3364u;
    {
        const bool branch_taken_0x2b3364 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B3368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3364u;
            // 0x2b3368: 0x24021120  addiu       $v0, $zero, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3364) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B336Cu;
label_2b336c:
    // 0x2b336c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2b336cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2b3370:
    // 0x2b3370: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2b3370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b3374:
    // 0x2b3374: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2b3374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2b3378:
    // 0x2b3378: 0x10850174  beq         $a0, $a1, . + 4 + (0x174 << 2)
label_2b337c:
    if (ctx->pc == 0x2B337Cu) {
        ctx->pc = 0x2B337Cu;
            // 0x2b337c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2B3380u;
        goto label_2b3380;
    }
    ctx->pc = 0x2B3378u;
    {
        const bool branch_taken_0x2b3378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3378u;
            // 0x2b337c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3378) {
            ctx->pc = 0x2B394Cu;
            goto label_2b394c;
        }
    }
    ctx->pc = 0x2B3380u;
label_2b3380:
    // 0x2b3380: 0xc0a1596  jal         func_285658
label_2b3384:
    if (ctx->pc == 0x2B3384u) {
        ctx->pc = 0x2B3388u;
        goto label_2b3388;
    }
    ctx->pc = 0x2B3380u;
    SET_GPR_U32(ctx, 31, 0x2B3388u);
    ctx->pc = 0x285658u;
    if (runtime->hasFunction(0x285658u)) {
        auto targetFn = runtime->lookupFunction(0x285658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3388u; }
        if (ctx->pc != 0x2B3388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285658_0x285658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3388u; }
        if (ctx->pc != 0x2B3388u) { return; }
    }
    ctx->pc = 0x2B3388u;
label_2b3388:
    // 0x2b3388: 0x10000170  b           . + 4 + (0x170 << 2)
label_2b338c:
    if (ctx->pc == 0x2B338Cu) {
        ctx->pc = 0x2B338Cu;
            // 0x2b338c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B3390u;
        goto label_2b3390;
    }
    ctx->pc = 0x2B3388u;
    {
        const bool branch_taken_0x2b3388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B338Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3388u;
            // 0x2b338c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3388) {
            ctx->pc = 0x2B394Cu;
            goto label_2b394c;
        }
    }
    ctx->pc = 0x2B3390u;
label_2b3390:
    // 0x2b3390: 0x2a021142  slti        $v0, $s0, 0x1142
    ctx->pc = 0x2b3390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4418) ? 1 : 0);
label_2b3394:
    // 0x2b3394: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2b3398:
    if (ctx->pc == 0x2B3398u) {
        ctx->pc = 0x2B3398u;
            // 0x2b3398: 0x2a021140  slti        $v0, $s0, 0x1140 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4416) ? 1 : 0);
        ctx->pc = 0x2B339Cu;
        goto label_2b339c;
    }
    ctx->pc = 0x2B3394u;
    {
        const bool branch_taken_0x2b3394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3394u;
            // 0x2b3398: 0x2a021140  slti        $v0, $s0, 0x1140 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4416) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3394) {
            ctx->pc = 0x2B33E8u;
            goto label_2b33e8;
        }
    }
    ctx->pc = 0x2B339Cu;
label_2b339c:
    // 0x2b339c: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_2b33a0:
    if (ctx->pc == 0x2B33A0u) {
        ctx->pc = 0x2B33A0u;
            // 0x2b33a0: 0x2a021132  slti        $v0, $s0, 0x1132 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4402) ? 1 : 0);
        ctx->pc = 0x2B33A4u;
        goto label_2b33a4;
    }
    ctx->pc = 0x2B339Cu;
    {
        const bool branch_taken_0x2b339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B339Cu;
            // 0x2b33a0: 0x2a021132  slti        $v0, $s0, 0x1132 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4402) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b339c) {
            ctx->pc = 0x2B3640u;
            goto label_2b3640;
        }
    }
    ctx->pc = 0x2B33A4u;
label_2b33a4:
    // 0x2b33a4: 0x10400160  beqz        $v0, . + 4 + (0x160 << 2)
label_2b33a8:
    if (ctx->pc == 0x2B33A8u) {
        ctx->pc = 0x2B33A8u;
            // 0x2b33a8: 0x2a021130  slti        $v0, $s0, 0x1130 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4400) ? 1 : 0);
        ctx->pc = 0x2B33ACu;
        goto label_2b33ac;
    }
    ctx->pc = 0x2B33A4u;
    {
        const bool branch_taken_0x2b33a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33A4u;
            // 0x2b33a8: 0x2a021130  slti        $v0, $s0, 0x1130 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4400) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33a4) {
            ctx->pc = 0x2B3928u;
            goto label_2b3928;
        }
    }
    ctx->pc = 0x2B33ACu;
label_2b33ac:
    // 0x2b33ac: 0x1440015f  bnez        $v0, . + 4 + (0x15F << 2)
label_2b33b0:
    if (ctx->pc == 0x2B33B0u) {
        ctx->pc = 0x2B33B0u;
            // 0x2b33b0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B33B4u;
        goto label_2b33b4;
    }
    ctx->pc = 0x2B33ACu;
    {
        const bool branch_taken_0x2b33ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B33B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33ACu;
            // 0x2b33b0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33ac) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B33B4u;
label_2b33b4:
    // 0x2b33b4: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b33b8:
    // 0x2b33b8: 0x8c83015c  lw          $v1, 0x15C($a0)
    ctx->pc = 0x2b33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
label_2b33bc:
    // 0x2b33bc: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x2b33bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_2b33c0:
    // 0x2b33c0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2b33c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_2b33c4:
    // 0x2b33c4: 0x5440009a  bnel        $v0, $zero, . + 4 + (0x9A << 2)
label_2b33c8:
    if (ctx->pc == 0x2B33C8u) {
        ctx->pc = 0x2B33C8u;
            // 0x2b33c8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B33CCu;
        goto label_2b33cc;
    }
    ctx->pc = 0x2B33C4u;
    {
        const bool branch_taken_0x2b33c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b33c4) {
            ctx->pc = 0x2B33C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33C4u;
            // 0x2b33c8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B3630u;
            goto label_2b3630;
        }
    }
    ctx->pc = 0x2B33CCu;
label_2b33cc:
    // 0x2b33cc: 0xc0acfe8  jal         func_2B3FA0
label_2b33d0:
    if (ctx->pc == 0x2B33D0u) {
        ctx->pc = 0x2B33D0u;
            // 0x2b33d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B33D4u;
        goto label_2b33d4;
    }
    ctx->pc = 0x2B33CCu;
    SET_GPR_U32(ctx, 31, 0x2B33D4u);
    ctx->pc = 0x2B33D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33CCu;
            // 0x2b33d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B3FA0u;
    if (runtime->hasFunction(0x2B3FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2B3FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B33D4u; }
        if (ctx->pc != 0x2B33D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B3FA0_0x2b3fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B33D4u; }
        if (ctx->pc != 0x2B33D4u) { return; }
    }
    ctx->pc = 0x2B33D4u;
label_2b33d4:
    // 0x2b33d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b33d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b33d8:
    // 0x2b33d8: 0x1a000185  blez        $s0, . + 4 + (0x185 << 2)
label_2b33dc:
    if (ctx->pc == 0x2B33DCu) {
        ctx->pc = 0x2B33E0u;
        goto label_2b33e0;
    }
    ctx->pc = 0x2B33D8u;
    {
        const bool branch_taken_0x2b33d8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b33d8) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B33E0u;
label_2b33e0:
    // 0x2b33e0: 0x10000093  b           . + 4 + (0x93 << 2)
label_2b33e4:
    if (ctx->pc == 0x2B33E4u) {
        ctx->pc = 0x2B33E4u;
            // 0x2b33e4: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x2B33E8u;
        goto label_2b33e8;
    }
    ctx->pc = 0x2B33E0u;
    {
        const bool branch_taken_0x2b33e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33E0u;
            // 0x2b33e4: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33e0) {
            ctx->pc = 0x2B3630u;
            goto label_2b3630;
        }
    }
    ctx->pc = 0x2B33E8u;
label_2b33e8:
    // 0x2b33e8: 0x2a021152  slti        $v0, $s0, 0x1152
    ctx->pc = 0x2b33e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4434) ? 1 : 0);
label_2b33ec:
    // 0x2b33ec: 0x1040014e  beqz        $v0, . + 4 + (0x14E << 2)
label_2b33f0:
    if (ctx->pc == 0x2B33F0u) {
        ctx->pc = 0x2B33F0u;
            // 0x2b33f0: 0x2a021150  slti        $v0, $s0, 0x1150 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4432) ? 1 : 0);
        ctx->pc = 0x2B33F4u;
        goto label_2b33f4;
    }
    ctx->pc = 0x2B33ECu;
    {
        const bool branch_taken_0x2b33ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33ECu;
            // 0x2b33f0: 0x2a021150  slti        $v0, $s0, 0x1150 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4432) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33ec) {
            ctx->pc = 0x2B3928u;
            goto label_2b3928;
        }
    }
    ctx->pc = 0x2B33F4u;
label_2b33f4:
    // 0x2b33f4: 0x1440014d  bnez        $v0, . + 4 + (0x14D << 2)
label_2b33f8:
    if (ctx->pc == 0x2B33F8u) {
        ctx->pc = 0x2B33F8u;
            // 0x2b33f8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B33FCu;
        goto label_2b33fc;
    }
    ctx->pc = 0x2B33F4u;
    {
        const bool branch_taken_0x2b33f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B33F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33F4u;
            // 0x2b33f8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33f4) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B33FCu;
label_2b33fc:
    // 0x2b33fc: 0xc0ad2de  jal         func_2B4B78
label_2b3400:
    if (ctx->pc == 0x2B3400u) {
        ctx->pc = 0x2B3400u;
            // 0x2b3400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3404u;
        goto label_2b3404;
    }
    ctx->pc = 0x2B33FCu;
    SET_GPR_U32(ctx, 31, 0x2B3404u);
    ctx->pc = 0x2B3400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B33FCu;
            // 0x2b3400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B78u;
    if (runtime->hasFunction(0x2B4B78u)) {
        auto targetFn = runtime->lookupFunction(0x2B4B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3404u; }
        if (ctx->pc != 0x2B3404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B4B78_0x2b4b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3404u; }
        if (ctx->pc != 0x2B3404u) { return; }
    }
    ctx->pc = 0x2B3404u;
label_2b3404:
    // 0x2b3404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3408:
    // 0x2b3408: 0x1a000179  blez        $s0, . + 4 + (0x179 << 2)
label_2b340c:
    if (ctx->pc == 0x2B340Cu) {
        ctx->pc = 0x2B340Cu;
            // 0x2b340c: 0x24021160  addiu       $v0, $zero, 0x1160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4448));
        ctx->pc = 0x2B3410u;
        goto label_2b3410;
    }
    ctx->pc = 0x2B3408u;
    {
        const bool branch_taken_0x2b3408 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B340Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3408u;
            // 0x2b340c: 0x24021160  addiu       $v0, $zero, 0x1160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3408) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B3410u;
label_2b3410:
    // 0x2b3410: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2b3410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2b3414:
    // 0x2b3414: 0x1000014d  b           . + 4 + (0x14D << 2)
label_2b3418:
    if (ctx->pc == 0x2B3418u) {
        ctx->pc = 0x2B3418u;
            // 0x2b3418: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2B341Cu;
        goto label_2b341c;
    }
    ctx->pc = 0x2B3414u;
    {
        const bool branch_taken_0x2b3414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3414u;
            // 0x2b3418: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3414) {
            ctx->pc = 0x2B394Cu;
            goto label_2b394c;
        }
    }
    ctx->pc = 0x2B341Cu;
label_2b341c:
    // 0x2b341c: 0x2a0211a2  slti        $v0, $s0, 0x11A2
    ctx->pc = 0x2b341cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4514) ? 1 : 0);
label_2b3420:
    // 0x2b3420: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2b3424:
    if (ctx->pc == 0x2B3424u) {
        ctx->pc = 0x2B3424u;
            // 0x2b3424: 0x2a0211a0  slti        $v0, $s0, 0x11A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4512) ? 1 : 0);
        ctx->pc = 0x2B3428u;
        goto label_2b3428;
    }
    ctx->pc = 0x2B3420u;
    {
        const bool branch_taken_0x2b3420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3420u;
            // 0x2b3424: 0x2a0211a0  slti        $v0, $s0, 0x11A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3420) {
            ctx->pc = 0x2B34A8u;
            goto label_2b34a8;
        }
    }
    ctx->pc = 0x2B3428u;
label_2b3428:
    // 0x2b3428: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
label_2b342c:
    if (ctx->pc == 0x2B342Cu) {
        ctx->pc = 0x2B342Cu;
            // 0x2b342c: 0x2a021182  slti        $v0, $s0, 0x1182 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4482) ? 1 : 0);
        ctx->pc = 0x2B3430u;
        goto label_2b3430;
    }
    ctx->pc = 0x2B3428u;
    {
        const bool branch_taken_0x2b3428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B342Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3428u;
            // 0x2b342c: 0x2a021182  slti        $v0, $s0, 0x1182 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4482) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3428) {
            ctx->pc = 0x2B36E0u;
            goto label_2b36e0;
        }
    }
    ctx->pc = 0x2B3430u;
label_2b3430:
    // 0x2b3430: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b3434:
    if (ctx->pc == 0x2B3434u) {
        ctx->pc = 0x2B3434u;
            // 0x2b3434: 0x2a021180  slti        $v0, $s0, 0x1180 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4480) ? 1 : 0);
        ctx->pc = 0x2B3438u;
        goto label_2b3438;
    }
    ctx->pc = 0x2B3430u;
    {
        const bool branch_taken_0x2b3430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3430u;
            // 0x2b3434: 0x2a021180  slti        $v0, $s0, 0x1180 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4480) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3430) {
            ctx->pc = 0x2B346Cu;
            goto label_2b346c;
        }
    }
    ctx->pc = 0x2B3438u;
label_2b3438:
    // 0x2b3438: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
label_2b343c:
    if (ctx->pc == 0x2B343Cu) {
        ctx->pc = 0x2B343Cu;
            // 0x2b343c: 0x2a021173  slti        $v0, $s0, 0x1173 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4467) ? 1 : 0);
        ctx->pc = 0x2B3440u;
        goto label_2b3440;
    }
    ctx->pc = 0x2B3438u;
    {
        const bool branch_taken_0x2b3438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3438u;
            // 0x2b343c: 0x2a021173  slti        $v0, $s0, 0x1173 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4467) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3438) {
            ctx->pc = 0x2B36A8u;
            goto label_2b36a8;
        }
    }
    ctx->pc = 0x2B3440u;
label_2b3440:
    // 0x2b3440: 0x10400139  beqz        $v0, . + 4 + (0x139 << 2)
label_2b3444:
    if (ctx->pc == 0x2B3444u) {
        ctx->pc = 0x2B3444u;
            // 0x2b3444: 0x2a021170  slti        $v0, $s0, 0x1170 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4464) ? 1 : 0);
        ctx->pc = 0x2B3448u;
        goto label_2b3448;
    }
    ctx->pc = 0x2B3440u;
    {
        const bool branch_taken_0x2b3440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3440u;
            // 0x2b3444: 0x2a021170  slti        $v0, $s0, 0x1170 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4464) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3440) {
            ctx->pc = 0x2B3928u;
            goto label_2b3928;
        }
    }
    ctx->pc = 0x2B3448u;
label_2b3448:
    // 0x2b3448: 0x14400138  bnez        $v0, . + 4 + (0x138 << 2)
label_2b344c:
    if (ctx->pc == 0x2B344Cu) {
        ctx->pc = 0x2B344Cu;
            // 0x2b344c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B3450u;
        goto label_2b3450;
    }
    ctx->pc = 0x2B3448u;
    {
        const bool branch_taken_0x2b3448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B344Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3448u;
            // 0x2b344c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3448) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B3450u;
label_2b3450:
    // 0x2b3450: 0xc0ad57c  jal         func_2B55F0
label_2b3454:
    if (ctx->pc == 0x2B3454u) {
        ctx->pc = 0x2B3454u;
            // 0x2b3454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3458u;
        goto label_2b3458;
    }
    ctx->pc = 0x2B3450u;
    SET_GPR_U32(ctx, 31, 0x2B3458u);
    ctx->pc = 0x2B3454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3450u;
            // 0x2b3454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B55F0u;
    if (runtime->hasFunction(0x2B55F0u)) {
        auto targetFn = runtime->lookupFunction(0x2B55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3458u; }
        if (ctx->pc != 0x2B3458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B55F0_0x2b55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3458u; }
        if (ctx->pc != 0x2B3458u) { return; }
    }
    ctx->pc = 0x2B3458u;
label_2b3458:
    // 0x2b3458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b345c:
    // 0x2b345c: 0x1a000164  blez        $s0, . + 4 + (0x164 << 2)
label_2b3460:
    if (ctx->pc == 0x2B3460u) {
        ctx->pc = 0x2B3460u;
            // 0x2b3460: 0x24021180  addiu       $v0, $zero, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4480));
        ctx->pc = 0x2B3464u;
        goto label_2b3464;
    }
    ctx->pc = 0x2B345Cu;
    {
        const bool branch_taken_0x2b345c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B3460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B345Cu;
            // 0x2b3460: 0x24021180  addiu       $v0, $zero, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b345c) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B3464u;
label_2b3464:
    // 0x2b3464: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
label_2b3468:
    if (ctx->pc == 0x2B3468u) {
        ctx->pc = 0x2B3468u;
            // 0x2b3468: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2B346Cu;
        goto label_2b346c;
    }
    ctx->pc = 0x2B3464u;
    {
        const bool branch_taken_0x2b3464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3464u;
            // 0x2b3468: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3464) {
            ctx->pc = 0x2B3414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b3414;
        }
    }
    ctx->pc = 0x2B346Cu;
label_2b346c:
    // 0x2b346c: 0x2a021192  slti        $v0, $s0, 0x1192
    ctx->pc = 0x2b346cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4498) ? 1 : 0);
label_2b3470:
    // 0x2b3470: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
label_2b3474:
    if (ctx->pc == 0x2B3474u) {
        ctx->pc = 0x2B3474u;
            // 0x2b3474: 0x2a021190  slti        $v0, $s0, 0x1190 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4496) ? 1 : 0);
        ctx->pc = 0x2B3478u;
        goto label_2b3478;
    }
    ctx->pc = 0x2B3470u;
    {
        const bool branch_taken_0x2b3470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3470u;
            // 0x2b3474: 0x2a021190  slti        $v0, $s0, 0x1190 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4496) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3470) {
            ctx->pc = 0x2B3928u;
            goto label_2b3928;
        }
    }
    ctx->pc = 0x2B3478u;
label_2b3478:
    // 0x2b3478: 0x1440012c  bnez        $v0, . + 4 + (0x12C << 2)
label_2b347c:
    if (ctx->pc == 0x2B347Cu) {
        ctx->pc = 0x2B347Cu;
            // 0x2b347c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B3480u;
        goto label_2b3480;
    }
    ctx->pc = 0x2B3478u;
    {
        const bool branch_taken_0x2b3478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3478u;
            // 0x2b347c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3478) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B3480u;
label_2b3480:
    // 0x2b3480: 0xc0ad504  jal         func_2B5410
label_2b3484:
    if (ctx->pc == 0x2B3484u) {
        ctx->pc = 0x2B3484u;
            // 0x2b3484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3488u;
        goto label_2b3488;
    }
    ctx->pc = 0x2B3480u;
    SET_GPR_U32(ctx, 31, 0x2B3488u);
    ctx->pc = 0x2B3484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3480u;
            // 0x2b3484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5410u;
    if (runtime->hasFunction(0x2B5410u)) {
        auto targetFn = runtime->lookupFunction(0x2B5410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3488u; }
        if (ctx->pc != 0x2B3488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5410_0x2b5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3488u; }
        if (ctx->pc != 0x2B3488u) { return; }
    }
    ctx->pc = 0x2B3488u;
label_2b3488:
    // 0x2b3488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b348c:
    // 0x2b348c: 0x1a000158  blez        $s0, . + 4 + (0x158 << 2)
label_2b3490:
    if (ctx->pc == 0x2B3490u) {
        ctx->pc = 0x2B3494u;
        goto label_2b3494;
    }
    ctx->pc = 0x2B348Cu;
    {
        const bool branch_taken_0x2b348c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b348c) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B3494u;
label_2b3494:
    // 0x2b3494: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b3498:
    // 0x2b3498: 0xae3e0030  sw          $fp, 0x30($s1)
    ctx->pc = 0x2b3498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2b349c:
    // 0x2b349c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2b349cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2b34a0:
    // 0x2b34a0: 0x1000012a  b           . + 4 + (0x12A << 2)
label_2b34a4:
    if (ctx->pc == 0x2B34A4u) {
        ctx->pc = 0x2B34A4u;
            // 0x2b34a4: 0xac400100  sw          $zero, 0x100($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
        ctx->pc = 0x2B34A8u;
        goto label_2b34a8;
    }
    ctx->pc = 0x2B34A0u;
    {
        const bool branch_taken_0x2b34a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B34A0u;
            // 0x2b34a4: 0xac400100  sw          $zero, 0x100($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34a0) {
            ctx->pc = 0x2B394Cu;
            goto label_2b394c;
        }
    }
    ctx->pc = 0x2B34A8u;
label_2b34a8:
    // 0x2b34a8: 0x2a0211d2  slti        $v0, $s0, 0x11D2
    ctx->pc = 0x2b34a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4562) ? 1 : 0);
label_2b34ac:
    // 0x2b34ac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2b34b0:
    if (ctx->pc == 0x2B34B0u) {
        ctx->pc = 0x2B34B0u;
            // 0x2b34b0: 0x2a0211d0  slti        $v0, $s0, 0x11D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4560) ? 1 : 0);
        ctx->pc = 0x2B34B4u;
        goto label_2b34b4;
    }
    ctx->pc = 0x2B34ACu;
    {
        const bool branch_taken_0x2b34ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B34ACu;
            // 0x2b34b0: 0x2a0211d0  slti        $v0, $s0, 0x11D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4560) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34ac) {
            ctx->pc = 0x2B3510u;
            goto label_2b3510;
        }
    }
    ctx->pc = 0x2B34B4u;
label_2b34b4:
    // 0x2b34b4: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_2b34b8:
    if (ctx->pc == 0x2B34B8u) {
        ctx->pc = 0x2B34B8u;
            // 0x2b34b8: 0x2a0211b2  slti        $v0, $s0, 0x11B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4530) ? 1 : 0);
        ctx->pc = 0x2B34BCu;
        goto label_2b34bc;
    }
    ctx->pc = 0x2B34B4u;
    {
        const bool branch_taken_0x2b34b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B34B4u;
            // 0x2b34b8: 0x2a0211b2  slti        $v0, $s0, 0x11B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34b4) {
            ctx->pc = 0x2B37DCu;
            goto label_2b37dc;
        }
    }
    ctx->pc = 0x2B34BCu;
label_2b34bc:
    // 0x2b34bc: 0x1040011a  beqz        $v0, . + 4 + (0x11A << 2)
label_2b34c0:
    if (ctx->pc == 0x2B34C0u) {
        ctx->pc = 0x2B34C0u;
            // 0x2b34c0: 0x2a0211b0  slti        $v0, $s0, 0x11B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4528) ? 1 : 0);
        ctx->pc = 0x2B34C4u;
        goto label_2b34c4;
    }
    ctx->pc = 0x2B34BCu;
    {
        const bool branch_taken_0x2b34bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B34BCu;
            // 0x2b34c0: 0x2a0211b0  slti        $v0, $s0, 0x11B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4528) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34bc) {
            ctx->pc = 0x2B3928u;
            goto label_2b3928;
        }
    }
    ctx->pc = 0x2B34C4u;
label_2b34c4:
    // 0x2b34c4: 0x14400119  bnez        $v0, . + 4 + (0x119 << 2)
label_2b34c8:
    if (ctx->pc == 0x2B34C8u) {
        ctx->pc = 0x2B34C8u;
            // 0x2b34c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B34CCu;
        goto label_2b34cc;
    }
    ctx->pc = 0x2B34C4u;
    {
        const bool branch_taken_0x2b34c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B34C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B34C4u;
            // 0x2b34c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34c4) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B34CCu;
label_2b34cc:
    // 0x2b34cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2b34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2b34d0:
    // 0x2b34d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b34d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b34d4:
    // 0x2b34d4: 0x240511b0  addiu       $a1, $zero, 0x11B0
    ctx->pc = 0x2b34d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4528));
label_2b34d8:
    // 0x2b34d8: 0x240611b1  addiu       $a2, $zero, 0x11B1
    ctx->pc = 0x2b34d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4529));
label_2b34dc:
    // 0x2b34dc: 0x8c470054  lw          $a3, 0x54($v0)
    ctx->pc = 0x2b34dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b34e0:
    // 0x2b34e0: 0x8ce80034  lw          $t0, 0x34($a3)
    ctx->pc = 0x2b34e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_2b34e4:
    // 0x2b34e4: 0xc0ab2fe  jal         func_2ACBF8
label_2b34e8:
    if (ctx->pc == 0x2B34E8u) {
        ctx->pc = 0x2B34E8u;
            // 0x2b34e8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->pc = 0x2B34ECu;
        goto label_2b34ec;
    }
    ctx->pc = 0x2B34E4u;
    SET_GPR_U32(ctx, 31, 0x2B34ECu);
    ctx->pc = 0x2B34E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B34E4u;
            // 0x2b34e8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACBF8u;
    if (runtime->hasFunction(0x2ACBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2ACBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B34ECu; }
        if (ctx->pc != 0x2B34ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACBF8_0x2acbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B34ECu; }
        if (ctx->pc != 0x2B34ECu) { return; }
    }
    ctx->pc = 0x2B34ECu;
label_2b34ec:
    // 0x2b34ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b34ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b34f0:
    // 0x2b34f0: 0x1a00013f  blez        $s0, . + 4 + (0x13F << 2)
label_2b34f4:
    if (ctx->pc == 0x2B34F4u) {
        ctx->pc = 0x2B34F8u;
        goto label_2b34f8;
    }
    ctx->pc = 0x2B34F0u;
    {
        const bool branch_taken_0x2b34f0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b34f0) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B34F8u;
label_2b34f8:
    // 0x2b34f8: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x2b34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_2b34fc:
    // 0x2b34fc: 0x54400094  bnel        $v0, $zero, . + 4 + (0x94 << 2)
label_2b3500:
    if (ctx->pc == 0x2B3500u) {
        ctx->pc = 0x2B3500u;
            // 0x2b3500: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x2B3504u;
        goto label_2b3504;
    }
    ctx->pc = 0x2B34FCu;
    {
        const bool branch_taken_0x2b34fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b34fc) {
            ctx->pc = 0x2B3500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B34FCu;
            // 0x2b3500: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B3750u;
            goto label_2b3750;
        }
    }
    ctx->pc = 0x2B3504u;
label_2b3504:
    // 0x2b3504: 0x24021100  addiu       $v0, $zero, 0x1100
    ctx->pc = 0x2b3504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
label_2b3508:
    // 0x2b3508: 0x10000090  b           . + 4 + (0x90 << 2)
label_2b350c:
    if (ctx->pc == 0x2B350Cu) {
        ctx->pc = 0x2B350Cu;
            // 0x2b350c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2B3510u;
        goto label_2b3510;
    }
    ctx->pc = 0x2B3508u;
    {
        const bool branch_taken_0x2b3508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B350Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3508u;
            // 0x2b350c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3508) {
            ctx->pc = 0x2B374Cu;
            goto label_2b374c;
        }
    }
    ctx->pc = 0x2B3510u;
label_2b3510:
    // 0x2b3510: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2b3510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2b3514:
    // 0x2b3514: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_2b3518:
    if (ctx->pc == 0x2B3518u) {
        ctx->pc = 0x2B3518u;
            // 0x2b3518: 0x2a024001  slti        $v0, $s0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16385) ? 1 : 0);
        ctx->pc = 0x2B351Cu;
        goto label_2b351c;
    }
    ctx->pc = 0x2B3514u;
    {
        const bool branch_taken_0x2b3514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3514u;
            // 0x2b3518: 0x2a024001  slti        $v0, $s0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16385) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3514) {
            ctx->pc = 0x2B3564u;
            goto label_2b3564;
        }
    }
    ctx->pc = 0x2B351Cu;
label_2b351c:
    // 0x2b351c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b3520:
    if (ctx->pc == 0x2B3520u) {
        ctx->pc = 0x2B3520u;
            // 0x2b3520: 0x24023004  addiu       $v0, $zero, 0x3004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12292));
        ctx->pc = 0x2B3524u;
        goto label_2b3524;
    }
    ctx->pc = 0x2B351Cu;
    {
        const bool branch_taken_0x2b351c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B351Cu;
            // 0x2b3520: 0x24023004  addiu       $v0, $zero, 0x3004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b351c) {
            ctx->pc = 0x2B3534u;
            goto label_2b3534;
        }
    }
    ctx->pc = 0x2B3524u;
label_2b3524:
    // 0x2b3524: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_2b3528:
    if (ctx->pc == 0x2B3528u) {
        ctx->pc = 0x2B3528u;
            // 0x2b3528: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B352Cu;
        goto label_2b352c;
    }
    ctx->pc = 0x2B3524u;
    {
        const bool branch_taken_0x2b3524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3524u;
            // 0x2b3528: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3524) {
            ctx->pc = 0x2B3548u;
            goto label_2b3548;
        }
    }
    ctx->pc = 0x2B352Cu;
label_2b352c:
    // 0x2b352c: 0x10000100  b           . + 4 + (0x100 << 2)
label_2b3530:
    if (ctx->pc == 0x2B3530u) {
        ctx->pc = 0x2B3530u;
            // 0x2b3530: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x2B3534u;
        goto label_2b3534;
    }
    ctx->pc = 0x2B352Cu;
    {
        const bool branch_taken_0x2b352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B352Cu;
            // 0x2b3530: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b352c) {
            ctx->pc = 0x2B3930u;
            goto label_2b3930;
        }
    }
    ctx->pc = 0x2B3534u;
label_2b3534:
    // 0x2b3534: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x2b3534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_2b3538:
    // 0x2b3538: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_2b353c:
    if (ctx->pc == 0x2B353Cu) {
        ctx->pc = 0x2B353Cu;
            // 0x2b353c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B3540u;
        goto label_2b3540;
    }
    ctx->pc = 0x2B3538u;
    {
        const bool branch_taken_0x2b3538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3538u;
            // 0x2b353c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3538) {
            ctx->pc = 0x2B3564u;
            goto label_2b3564;
        }
    }
    ctx->pc = 0x2B3540u;
label_2b3540:
    // 0x2b3540: 0x100000fb  b           . + 4 + (0xFB << 2)
label_2b3544:
    if (ctx->pc == 0x2B3544u) {
        ctx->pc = 0x2B3544u;
            // 0x2b3544: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x2B3548u;
        goto label_2b3548;
    }
    ctx->pc = 0x2B3540u;
    {
        const bool branch_taken_0x2b3540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3540u;
            // 0x2b3544: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3540) {
            ctx->pc = 0x2B3930u;
            goto label_2b3930;
        }
    }
    ctx->pc = 0x2B3548u;
label_2b3548:
    // 0x2b3548: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x2b3548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2b354c:
    // 0x2b354c: 0xae350028  sw          $s5, 0x28($s1)
    ctx->pc = 0x2b354cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
label_2b3550:
    // 0x2b3550: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2b3550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_2b3554:
    // 0x2b3554: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x2b3554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2b3558:
    // 0x2b3558: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2b3558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2b355c:
    // 0x2b355c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b3560:
    // 0x2b3560: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x2b3560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_2b3564:
    // 0x2b3564: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2b3568:
    if (ctx->pc == 0x2B3568u) {
        ctx->pc = 0x2B3568u;
            // 0x2b3568: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x2B356Cu;
        goto label_2b356c;
    }
    ctx->pc = 0x2B3564u;
    {
        const bool branch_taken_0x2b3564 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3564u;
            // 0x2b3568: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3564) {
            ctx->pc = 0x2B357Cu;
            goto label_2b357c;
        }
    }
    ctx->pc = 0x2B356Cu;
label_2b356c:
    // 0x2b356c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b3570:
    // 0x2b3570: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2b3570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b3574:
    // 0x2b3574: 0x240f809  jalr        $s2
label_2b3578:
    if (ctx->pc == 0x2B3578u) {
        ctx->pc = 0x2B3578u;
            // 0x2b3578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B357Cu;
        goto label_2b357c;
    }
    ctx->pc = 0x2B3574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2B357Cu);
        ctx->pc = 0x2B3578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3574u;
            // 0x2b3578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B357Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B357Cu; }
            if (ctx->pc != 0x2B357Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2B357Cu;
label_2b357c:
    // 0x2b357c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x2b357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2b3580:
    // 0x2b3580: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2b3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2b3584:
    // 0x2b3584: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2b3588:
    if (ctx->pc == 0x2B3588u) {
        ctx->pc = 0x2B3588u;
            // 0x2b3588: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2B358Cu;
        goto label_2b358c;
    }
    ctx->pc = 0x2B3584u;
    {
        const bool branch_taken_0x2b3584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3584u;
            // 0x2b3588: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3584) {
            ctx->pc = 0x2B35B4u;
            goto label_2b35b4;
        }
    }
    ctx->pc = 0x2B358Cu;
label_2b358c:
    // 0x2b358c: 0xc0a32b4  jal         func_28CAD0
label_2b3590:
    if (ctx->pc == 0x2B3590u) {
        ctx->pc = 0x2B3594u;
        goto label_2b3594;
    }
    ctx->pc = 0x2B358Cu;
    SET_GPR_U32(ctx, 31, 0x2B3594u);
    ctx->pc = 0x28CAD0u;
    if (runtime->hasFunction(0x28CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x28CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3594u; }
        if (ctx->pc != 0x2B3594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CAD0_0x28cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3594u; }
        if (ctx->pc != 0x2B3594u) { return; }
    }
    ctx->pc = 0x2B3594u;
label_2b3594:
    // 0x2b3594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3598:
    // 0x2b3598: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_2b359c:
    if (ctx->pc == 0x2B359Cu) {
        ctx->pc = 0x2B359Cu;
            // 0x2b359c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B35A0u;
        goto label_2b35a0;
    }
    ctx->pc = 0x2B3598u;
    {
        const bool branch_taken_0x2b3598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B359Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3598u;
            // 0x2b359c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3598) {
            ctx->pc = 0x2B366Cu;
            goto label_2b366c;
        }
    }
    ctx->pc = 0x2B35A0u;
label_2b35a0:
    // 0x2b35a0: 0xc0a32e0  jal         func_28CB80
label_2b35a4:
    if (ctx->pc == 0x2B35A4u) {
        ctx->pc = 0x2B35A4u;
            // 0x2b35a4: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2B35A8u;
        goto label_2b35a8;
    }
    ctx->pc = 0x2B35A0u;
    SET_GPR_U32(ctx, 31, 0x2B35A8u);
    ctx->pc = 0x2B35A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35A0u;
            // 0x2b35a4: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35A8u; }
        if (ctx->pc != 0x2B35A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35A8u; }
        if (ctx->pc != 0x2B35A8u) { return; }
    }
    ctx->pc = 0x2B35A8u;
label_2b35a8:
    // 0x2b35a8: 0x50400111  beql        $v0, $zero, . + 4 + (0x111 << 2)
label_2b35ac:
    if (ctx->pc == 0x2B35ACu) {
        ctx->pc = 0x2B35ACu;
            // 0x2b35ac: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B35B0u;
        goto label_2b35b0;
    }
    ctx->pc = 0x2B35A8u;
    {
        const bool branch_taken_0x2b35a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b35a8) {
            ctx->pc = 0x2B35ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35A8u;
            // 0x2b35ac: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B35B0u;
label_2b35b0:
    // 0x2b35b0: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x2b35b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
label_2b35b4:
    // 0x2b35b4: 0xc0ab574  jal         func_2AD5D0
label_2b35b8:
    if (ctx->pc == 0x2B35B8u) {
        ctx->pc = 0x2B35B8u;
            // 0x2b35b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B35BCu;
        goto label_2b35bc;
    }
    ctx->pc = 0x2B35B4u;
    SET_GPR_U32(ctx, 31, 0x2B35BCu);
    ctx->pc = 0x2B35B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35B4u;
            // 0x2b35b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5D0u;
    if (runtime->hasFunction(0x2AD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35BCu; }
        if (ctx->pc != 0x2B35BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD5D0_0x2ad5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35BCu; }
        if (ctx->pc != 0x2B35BCu) { return; }
    }
    ctx->pc = 0x2B35BCu;
label_2b35bc:
    // 0x2b35bc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2b35c0:
    if (ctx->pc == 0x2B35C0u) {
        ctx->pc = 0x2B35C0u;
            // 0x2b35c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B35C4u;
        goto label_2b35c4;
    }
    ctx->pc = 0x2B35BCu;
    {
        const bool branch_taken_0x2b35bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B35C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35BCu;
            // 0x2b35c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35bc) {
            ctx->pc = 0x2B366Cu;
            goto label_2b366c;
        }
    }
    ctx->pc = 0x2B35C4u;
label_2b35c4:
    // 0x2b35c4: 0xc0ac58a  jal         func_2B1628
label_2b35c8:
    if (ctx->pc == 0x2B35C8u) {
        ctx->pc = 0x2B35C8u;
            // 0x2b35c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B35CCu;
        goto label_2b35cc;
    }
    ctx->pc = 0x2B35C4u;
    SET_GPR_U32(ctx, 31, 0x2B35CCu);
    ctx->pc = 0x2B35C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35C4u;
            // 0x2b35c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1628u;
    if (runtime->hasFunction(0x2B1628u)) {
        auto targetFn = runtime->lookupFunction(0x2B1628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35CCu; }
        if (ctx->pc != 0x2B35CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1628_0x2b1628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35CCu; }
        if (ctx->pc != 0x2B35CCu) { return; }
    }
    ctx->pc = 0x2B35CCu;
label_2b35cc:
    // 0x2b35cc: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
label_2b35d0:
    if (ctx->pc == 0x2B35D0u) {
        ctx->pc = 0x2B35D0u;
            // 0x2b35d0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B35D4u;
        goto label_2b35d4;
    }
    ctx->pc = 0x2B35CCu;
    {
        const bool branch_taken_0x2b35cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B35D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35CCu;
            // 0x2b35d0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35cc) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B35D4u;
label_2b35d4:
    // 0x2b35d4: 0xc0ab988  jal         func_2AE620
label_2b35d8:
    if (ctx->pc == 0x2B35D8u) {
        ctx->pc = 0x2B35D8u;
            // 0x2b35d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B35DCu;
        goto label_2b35dc;
    }
    ctx->pc = 0x2B35D4u;
    SET_GPR_U32(ctx, 31, 0x2B35DCu);
    ctx->pc = 0x2B35D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35D4u;
            // 0x2b35d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE620u;
    if (runtime->hasFunction(0x2AE620u)) {
        auto targetFn = runtime->lookupFunction(0x2AE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35DCu; }
        if (ctx->pc != 0x2B35DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE620_0x2ae620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35DCu; }
        if (ctx->pc != 0x2B35DCu) { return; }
    }
    ctx->pc = 0x2B35DCu;
label_2b35dc:
    // 0x2b35dc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2b35e0:
    if (ctx->pc == 0x2B35E0u) {
        ctx->pc = 0x2B35E0u;
            // 0x2b35e0: 0x24021110  addiu       $v0, $zero, 0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
        ctx->pc = 0x2B35E4u;
        goto label_2b35e4;
    }
    ctx->pc = 0x2B35DCu;
    {
        const bool branch_taken_0x2b35dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B35E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35DCu;
            // 0x2b35e0: 0x24021110  addiu       $v0, $zero, 0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35dc) {
            ctx->pc = 0x2B366Cu;
            goto label_2b366c;
        }
    }
    ctx->pc = 0x2B35E4u;
label_2b35e4:
    // 0x2b35e4: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x2b35e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2b35e8:
    // 0x2b35e8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2b35e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2b35ec:
    // 0x2b35ec: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2b35ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2b35f0:
    // 0x2b35f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b35f4:
    // 0x2b35f4: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x2b35f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_2b35f8:
    // 0x2b35f8: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_2b35fc:
    if (ctx->pc == 0x2B35FCu) {
        ctx->pc = 0x2B35FCu;
            // 0x2b35fc: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2B3600u;
        goto label_2b3600;
    }
    ctx->pc = 0x2B35F8u;
    {
        const bool branch_taken_0x2b35f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B35FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35F8u;
            // 0x2b35fc: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35f8) {
            ctx->pc = 0x2B394Cu;
            goto label_2b394c;
        }
    }
    ctx->pc = 0x2B3600u;
label_2b3600:
    // 0x2b3600: 0xc0acf2c  jal         func_2B3CB0
label_2b3604:
    if (ctx->pc == 0x2B3604u) {
        ctx->pc = 0x2B3604u;
            // 0x2b3604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3608u;
        goto label_2b3608;
    }
    ctx->pc = 0x2B3600u;
    SET_GPR_U32(ctx, 31, 0x2B3608u);
    ctx->pc = 0x2B3604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3600u;
            // 0x2b3604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B3CB0u;
    if (runtime->hasFunction(0x2B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x2B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3608u; }
        if (ctx->pc != 0x2B3608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B3CB0_0x2b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3608u; }
        if (ctx->pc != 0x2B3608u) { return; }
    }
    ctx->pc = 0x2B3608u;
label_2b3608:
    // 0x2b3608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b360c:
    // 0x2b360c: 0x1a0000f8  blez        $s0, . + 4 + (0xF8 << 2)
label_2b3610:
    if (ctx->pc == 0x2B3610u) {
        ctx->pc = 0x2B3614u;
        goto label_2b3614;
    }
    ctx->pc = 0x2B360Cu;
    {
        const bool branch_taken_0x2b360c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b360c) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B3614u;
label_2b3614:
    // 0x2b3614: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2b3614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b3618:
    // 0x2b3618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b361c:
    if (ctx->pc == 0x2B361Cu) {
        ctx->pc = 0x2B361Cu;
            // 0x2b361c: 0x24021130  addiu       $v0, $zero, 0x1130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4400));
        ctx->pc = 0x2B3620u;
        goto label_2b3620;
    }
    ctx->pc = 0x2B3618u;
    {
        const bool branch_taken_0x2b3618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B361Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3618u;
            // 0x2b361c: 0x24021130  addiu       $v0, $zero, 0x1130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3618) {
            ctx->pc = 0x2B3628u;
            goto label_2b3628;
        }
    }
    ctx->pc = 0x2B3620u;
label_2b3620:
    // 0x2b3620: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_2b3624:
    if (ctx->pc == 0x2B3624u) {
        ctx->pc = 0x2B3624u;
            // 0x2b3624: 0xae370030  sw          $s7, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 23));
        ctx->pc = 0x2B3628u;
        goto label_2b3628;
    }
    ctx->pc = 0x2B3620u;
    {
        const bool branch_taken_0x2b3620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3620u;
            // 0x2b3624: 0xae370030  sw          $s7, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3620) {
            ctx->pc = 0x2B35F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b35f8;
        }
    }
    ctx->pc = 0x2B3628u;
label_2b3628:
    // 0x2b3628: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_2b362c:
    if (ctx->pc == 0x2B362Cu) {
        ctx->pc = 0x2B362Cu;
            // 0x2b362c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2B3630u;
        goto label_2b3630;
    }
    ctx->pc = 0x2B3628u;
    {
        const bool branch_taken_0x2b3628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3628u;
            // 0x2b362c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3628) {
            ctx->pc = 0x2B35F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b35f8;
        }
    }
    ctx->pc = 0x2B3630u;
label_2b3630:
    // 0x2b3630: 0x24021140  addiu       $v0, $zero, 0x1140
    ctx->pc = 0x2b3630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4416));
label_2b3634:
    // 0x2b3634: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2b3634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2b3638:
    // 0x2b3638: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_2b363c:
    if (ctx->pc == 0x2B363Cu) {
        ctx->pc = 0x2B363Cu;
            // 0x2b363c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2B3640u;
        goto label_2b3640;
    }
    ctx->pc = 0x2B3638u;
    {
        const bool branch_taken_0x2b3638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B363Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3638u;
            // 0x2b363c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3638) {
            ctx->pc = 0x2B3950u;
            goto label_2b3950;
        }
    }
    ctx->pc = 0x2B3640u;
label_2b3640:
    // 0x2b3640: 0xc0ad0e8  jal         func_2B43A0
label_2b3644:
    if (ctx->pc == 0x2B3644u) {
        ctx->pc = 0x2B3644u;
            // 0x2b3644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3648u;
        goto label_2b3648;
    }
    ctx->pc = 0x2B3640u;
    SET_GPR_U32(ctx, 31, 0x2B3648u);
    ctx->pc = 0x2B3644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3640u;
            // 0x2b3644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B43A0u;
    if (runtime->hasFunction(0x2B43A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B43A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3648u; }
        if (ctx->pc != 0x2B3648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B43A0_0x2b43a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3648u; }
        if (ctx->pc != 0x2B3648u) { return; }
    }
    ctx->pc = 0x2B3648u;
label_2b3648:
    // 0x2b3648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b364c:
    // 0x2b364c: 0x1a0000e8  blez        $s0, . + 4 + (0xE8 << 2)
label_2b3650:
    if (ctx->pc == 0x2B3650u) {
        ctx->pc = 0x2B3650u;
            // 0x2b3650: 0x24021150  addiu       $v0, $zero, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4432));
        ctx->pc = 0x2B3654u;
        goto label_2b3654;
    }
    ctx->pc = 0x2B364Cu;
    {
        const bool branch_taken_0x2b364c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B3650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B364Cu;
            // 0x2b3650: 0x24021150  addiu       $v0, $zero, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b364c) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B3654u;
label_2b3654:
    // 0x2b3654: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2b3654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2b3658:
    // 0x2b3658: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2b3658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2b365c:
    // 0x2b365c: 0xc0ad5fe  jal         func_2B57F8
label_2b3660:
    if (ctx->pc == 0x2B3660u) {
        ctx->pc = 0x2B3660u;
            // 0x2b3660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3664u;
        goto label_2b3664;
    }
    ctx->pc = 0x2B365Cu;
    SET_GPR_U32(ctx, 31, 0x2B3664u);
    ctx->pc = 0x2B3660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B365Cu;
            // 0x2b3660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B57F8u;
    if (runtime->hasFunction(0x2B57F8u)) {
        auto targetFn = runtime->lookupFunction(0x2B57F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3664u; }
        if (ctx->pc != 0x2B3664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B57F8_0x2b57f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3664u; }
        if (ctx->pc != 0x2B3664u) { return; }
    }
    ctx->pc = 0x2B3664u;
label_2b3664:
    // 0x2b3664: 0x544000ba  bnel        $v0, $zero, . + 4 + (0xBA << 2)
label_2b3668:
    if (ctx->pc == 0x2B3668u) {
        ctx->pc = 0x2B3668u;
            // 0x2b3668: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x2B366Cu;
        goto label_2b366c;
    }
    ctx->pc = 0x2B3664u;
    {
        const bool branch_taken_0x2b3664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3664) {
            ctx->pc = 0x2B3668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3664u;
            // 0x2b3668: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B3950u;
            goto label_2b3950;
        }
    }
    ctx->pc = 0x2B366Cu;
label_2b366c:
    // 0x2b366c: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_2b3670:
    if (ctx->pc == 0x2B3670u) {
        ctx->pc = 0x2B3670u;
            // 0x2b3670: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B3674u;
        goto label_2b3674;
    }
    ctx->pc = 0x2B366Cu;
    {
        const bool branch_taken_0x2b366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B366Cu;
            // 0x2b3670: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b366c) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B3674u;
label_2b3674:
    // 0x2b3674: 0xc0ad3cc  jal         func_2B4F30
label_2b3678:
    if (ctx->pc == 0x2B3678u) {
        ctx->pc = 0x2B3678u;
            // 0x2b3678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B367Cu;
        goto label_2b367c;
    }
    ctx->pc = 0x2B3674u;
    SET_GPR_U32(ctx, 31, 0x2B367Cu);
    ctx->pc = 0x2B3678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3674u;
            // 0x2b3678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F30u;
    if (runtime->hasFunction(0x2B4F30u)) {
        auto targetFn = runtime->lookupFunction(0x2B4F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B367Cu; }
        if (ctx->pc != 0x2B367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B4F30_0x2b4f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B367Cu; }
        if (ctx->pc != 0x2B367Cu) { return; }
    }
    ctx->pc = 0x2B367Cu;
label_2b367c:
    // 0x2b367c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b367cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3680:
    // 0x2b3680: 0x1a0000db  blez        $s0, . + 4 + (0xDB << 2)
label_2b3684:
    if (ctx->pc == 0x2B3684u) {
        ctx->pc = 0x2B3688u;
        goto label_2b3688;
    }
    ctx->pc = 0x2B3680u;
    {
        const bool branch_taken_0x2b3680 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b3680) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B3688u;
label_2b3688:
    // 0x2b3688: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b3688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b368c:
    // 0x2b368c: 0x8c82016c  lw          $v0, 0x16C($a0)
    ctx->pc = 0x2b368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
label_2b3690:
    // 0x2b3690: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2b3694:
    if (ctx->pc == 0x2B3694u) {
        ctx->pc = 0x2B3694u;
            // 0x2b3694: 0x24021170  addiu       $v0, $zero, 0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4464));
        ctx->pc = 0x2B3698u;
        goto label_2b3698;
    }
    ctx->pc = 0x2B3690u;
    {
        const bool branch_taken_0x2b3690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3690u;
            // 0x2b3694: 0x24021170  addiu       $v0, $zero, 0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3690) {
            ctx->pc = 0x2B369Cu;
            goto label_2b369c;
        }
    }
    ctx->pc = 0x2B3698u;
label_2b3698:
    // 0x2b3698: 0x24021180  addiu       $v0, $zero, 0x1180
    ctx->pc = 0x2b3698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4480));
label_2b369c:
    // 0x2b369c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2b369cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2b36a0:
    // 0x2b36a0: 0x100000ab  b           . + 4 + (0xAB << 2)
label_2b36a4:
    if (ctx->pc == 0x2B36A4u) {
        ctx->pc = 0x2B36A4u;
            // 0x2b36a4: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2B36A8u;
        goto label_2b36a8;
    }
    ctx->pc = 0x2B36A0u;
    {
        const bool branch_taken_0x2b36a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B36A0u;
            // 0x2b36a4: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36a0) {
            ctx->pc = 0x2B3950u;
            goto label_2b3950;
        }
    }
    ctx->pc = 0x2B36A8u;
label_2b36a8:
    // 0x2b36a8: 0xc0ad3ee  jal         func_2B4FB8
label_2b36ac:
    if (ctx->pc == 0x2B36ACu) {
        ctx->pc = 0x2B36ACu;
            // 0x2b36ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B36B0u;
        goto label_2b36b0;
    }
    ctx->pc = 0x2B36A8u;
    SET_GPR_U32(ctx, 31, 0x2B36B0u);
    ctx->pc = 0x2B36ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B36A8u;
            // 0x2b36ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B4FB8u;
    if (runtime->hasFunction(0x2B4FB8u)) {
        auto targetFn = runtime->lookupFunction(0x2B4FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B36B0u; }
        if (ctx->pc != 0x2B36B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B4FB8_0x2b4fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B36B0u; }
        if (ctx->pc != 0x2B36B0u) { return; }
    }
    ctx->pc = 0x2B36B0u;
label_2b36b0:
    // 0x2b36b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b36b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b36b4:
    // 0x2b36b4: 0x1a0000ce  blez        $s0, . + 4 + (0xCE << 2)
label_2b36b8:
    if (ctx->pc == 0x2B36B8u) {
        ctx->pc = 0x2B36BCu;
        goto label_2b36bc;
    }
    ctx->pc = 0x2B36B4u;
    {
        const bool branch_taken_0x2b36b4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b36b4) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B36BCu;
label_2b36bc:
    // 0x2b36bc: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b36bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b36c0:
    // 0x2b36c0: 0x8c82016c  lw          $v0, 0x16C($a0)
    ctx->pc = 0x2b36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
label_2b36c4:
    // 0x2b36c4: 0x54550003  bnel        $v0, $s5, . + 4 + (0x3 << 2)
label_2b36c8:
    if (ctx->pc == 0x2B36C8u) {
        ctx->pc = 0x2B36C8u;
            // 0x2b36c8: 0xae3e0030  sw          $fp, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
        ctx->pc = 0x2B36CCu;
        goto label_2b36cc;
    }
    ctx->pc = 0x2B36C4u;
    {
        const bool branch_taken_0x2b36c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2b36c4) {
            ctx->pc = 0x2B36C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B36C4u;
            // 0x2b36c8: 0xae3e0030  sw          $fp, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B36D4u;
            goto label_2b36d4;
        }
    }
    ctx->pc = 0x2B36CCu;
label_2b36cc:
    // 0x2b36cc: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_2b36d0:
    if (ctx->pc == 0x2B36D0u) {
        ctx->pc = 0x2B36D0u;
            // 0x2b36d0: 0x24021190  addiu       $v0, $zero, 0x1190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4496));
        ctx->pc = 0x2B36D4u;
        goto label_2b36d4;
    }
    ctx->pc = 0x2B36CCu;
    {
        const bool branch_taken_0x2b36cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B36CCu;
            // 0x2b36d0: 0x24021190  addiu       $v0, $zero, 0x1190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36cc) {
            ctx->pc = 0x2B369Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b369c;
        }
    }
    ctx->pc = 0x2B36D4u;
label_2b36d4:
    // 0x2b36d4: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x2b36d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
label_2b36d8:
    // 0x2b36d8: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_2b36dc:
    if (ctx->pc == 0x2B36DCu) {
        ctx->pc = 0x2B36DCu;
            // 0x2b36dc: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x2B36E0u;
        goto label_2b36e0;
    }
    ctx->pc = 0x2B36D8u;
    {
        const bool branch_taken_0x2b36d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B36D8u;
            // 0x2b36dc: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36d8) {
            ctx->pc = 0x2B36A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b36a0;
        }
    }
    ctx->pc = 0x2B36E0u;
label_2b36e0:
    // 0x2b36e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b36e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b36e4:
    // 0x2b36e4: 0x240511a0  addiu       $a1, $zero, 0x11A0
    ctx->pc = 0x2b36e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4512));
label_2b36e8:
    // 0x2b36e8: 0xc0ab374  jal         func_2ACDD0
label_2b36ec:
    if (ctx->pc == 0x2B36ECu) {
        ctx->pc = 0x2B36ECu;
            // 0x2b36ec: 0x240611a1  addiu       $a2, $zero, 0x11A1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4513));
        ctx->pc = 0x2B36F0u;
        goto label_2b36f0;
    }
    ctx->pc = 0x2B36E8u;
    SET_GPR_U32(ctx, 31, 0x2B36F0u);
    ctx->pc = 0x2B36ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B36E8u;
            // 0x2b36ec: 0x240611a1  addiu       $a2, $zero, 0x11A1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4513));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDD0u;
    if (runtime->hasFunction(0x2ACDD0u)) {
        auto targetFn = runtime->lookupFunction(0x2ACDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B36F0u; }
        if (ctx->pc != 0x2B36F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACDD0_0x2acdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B36F0u; }
        if (ctx->pc != 0x2B36F0u) { return; }
    }
    ctx->pc = 0x2B36F0u;
label_2b36f0:
    // 0x2b36f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b36f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b36f4:
    // 0x2b36f4: 0x1a0000be  blez        $s0, . + 4 + (0xBE << 2)
label_2b36f8:
    if (ctx->pc == 0x2B36F8u) {
        ctx->pc = 0x2B36F8u;
            // 0x2b36f8: 0x240211b0  addiu       $v0, $zero, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4528));
        ctx->pc = 0x2B36FCu;
        goto label_2b36fc;
    }
    ctx->pc = 0x2B36F4u;
    {
        const bool branch_taken_0x2b36f4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B36F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B36F4u;
            // 0x2b36f8: 0x240211b0  addiu       $v0, $zero, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36f4) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B36FCu;
label_2b36fc:
    // 0x2b36fc: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2b36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2b3700:
    // 0x2b3700: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2b3700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2b3704:
    // 0x2b3704: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2b3704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b3708:
    // 0x2b3708: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2b3708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2b370c:
    // 0x2b370c: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x2b370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
label_2b3710:
    // 0x2b3710: 0xaca200ac  sw          $v0, 0xAC($a1)
    ctx->pc = 0x2b3710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 2));
label_2b3714:
    // 0x2b3714: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2b3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2b3718:
    // 0x2b3718: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x2b3718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2b371c:
    // 0x2b371c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2b3720:
    // 0x2b3720: 0x40f809  jalr        $v0
label_2b3724:
    if (ctx->pc == 0x2B3724u) {
        ctx->pc = 0x2B3724u;
            // 0x2b3724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3728u;
        goto label_2b3728;
    }
    ctx->pc = 0x2B3720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B3728u);
        ctx->pc = 0x2B3724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3720u;
            // 0x2b3724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B3728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B3728u; }
            if (ctx->pc != 0x2B3728u) { return; }
        }
        }
    }
    ctx->pc = 0x2B3728u;
label_2b3728:
    // 0x2b3728: 0x1040ffd0  beqz        $v0, . + 4 + (-0x30 << 2)
label_2b372c:
    if (ctx->pc == 0x2B372Cu) {
        ctx->pc = 0x2B372Cu;
            // 0x2b372c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3730u;
        goto label_2b3730;
    }
    ctx->pc = 0x2B3728u;
    {
        const bool branch_taken_0x2b3728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3728u;
            // 0x2b372c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3728) {
            ctx->pc = 0x2B366Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b366c;
        }
    }
    ctx->pc = 0x2B3730u;
label_2b3730:
    // 0x2b3730: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2b3730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2b3734:
    // 0x2b3734: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2b3734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b3738:
    // 0x2b3738: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b3738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b373c:
    // 0x2b373c: 0x40f809  jalr        $v0
label_2b3740:
    if (ctx->pc == 0x2B3740u) {
        ctx->pc = 0x2B3740u;
            // 0x2b3740: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2B3744u;
        goto label_2b3744;
    }
    ctx->pc = 0x2B373Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B3744u);
        ctx->pc = 0x2B3740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B373Cu;
            // 0x2b3740: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B3744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B3744u; }
            if (ctx->pc != 0x2B3744u) { return; }
        }
        }
    }
    ctx->pc = 0x2B3744u;
label_2b3744:
    // 0x2b3744: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_2b3748:
    if (ctx->pc == 0x2B3748u) {
        ctx->pc = 0x2B374Cu;
        goto label_2b374c;
    }
    ctx->pc = 0x2B3744u;
    {
        const bool branch_taken_0x2b3744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3744) {
            ctx->pc = 0x2B3664u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b3664;
        }
    }
    ctx->pc = 0x2B374Cu;
label_2b374c:
    // 0x2b374c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b374cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b3750:
    // 0x2b3750: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2b3750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_2b3754:
    // 0x2b3754: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2b3754u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2b3758:
    // 0x2b3758: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b3758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b375c:
    // 0x2b375c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2b375cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_2b3760:
    // 0x2b3760: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2b3760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b3764:
    // 0x2b3764: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2b3768:
    if (ctx->pc == 0x2B3768u) {
        ctx->pc = 0x2B3768u;
            // 0x2b3768: 0x8e2200e0  lw          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->pc = 0x2B376Cu;
        goto label_2b376c;
    }
    ctx->pc = 0x2B3764u;
    {
        const bool branch_taken_0x2b3764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3764u;
            // 0x2b3768: 0x8e2200e0  lw          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3764) {
            ctx->pc = 0x2B3798u;
            goto label_2b3798;
        }
    }
    ctx->pc = 0x2B376Cu;
label_2b376c:
    // 0x2b376c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2b3770:
    if (ctx->pc == 0x2B3770u) {
        ctx->pc = 0x2B3770u;
            // 0x2b3770: 0xae340030  sw          $s4, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 20));
        ctx->pc = 0x2B3774u;
        goto label_2b3774;
    }
    ctx->pc = 0x2B376Cu;
    {
        const bool branch_taken_0x2b376c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b376c) {
            ctx->pc = 0x2B3770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B376Cu;
            // 0x2b3770: 0xae340030  sw          $s4, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B377Cu;
            goto label_2b377c;
        }
    }
    ctx->pc = 0x2B3774u;
label_2b3774:
    // 0x2b3774: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b3774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b3778:
    // 0x2b3778: 0xac540164  sw          $s4, 0x164($v0)
    ctx->pc = 0x2b3778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 20));
label_2b377c:
    // 0x2b377c: 0xde220100  ld          $v0, 0x100($s1)
    ctx->pc = 0x2b377cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 256)));
label_2b3780:
    // 0x2b3780: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b3780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2b3784:
    // 0x2b3784: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b3784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b3788:
    // 0x2b3788: 0x1040ff9b  beqz        $v0, . + 4 + (-0x65 << 2)
label_2b378c:
    if (ctx->pc == 0x2B378Cu) {
        ctx->pc = 0x2B378Cu;
            // 0x2b378c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B3790u;
        goto label_2b3790;
    }
    ctx->pc = 0x2B3788u;
    {
        const bool branch_taken_0x2b3788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3788u;
            // 0x2b378c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3788) {
            ctx->pc = 0x2B35F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b35f8;
        }
    }
    ctx->pc = 0x2B3790u;
label_2b3790:
    // 0x2b3790: 0x1000000b  b           . + 4 + (0xB << 2)
label_2b3794:
    if (ctx->pc == 0x2B3794u) {
        ctx->pc = 0x2B3794u;
            // 0x2b3794: 0xae340030  sw          $s4, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 20));
        ctx->pc = 0x2B3798u;
        goto label_2b3798;
    }
    ctx->pc = 0x2B3790u;
    {
        const bool branch_taken_0x2b3790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3790u;
            // 0x2b3794: 0xae340030  sw          $s4, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3790) {
            ctx->pc = 0x2B37C0u;
            goto label_2b37c0;
        }
    }
    ctx->pc = 0x2B3798u;
label_2b3798:
    // 0x2b3798: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2b379c:
    if (ctx->pc == 0x2B379Cu) {
        ctx->pc = 0x2B379Cu;
            // 0x2b379c: 0xae370030  sw          $s7, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 23));
        ctx->pc = 0x2B37A0u;
        goto label_2b37a0;
    }
    ctx->pc = 0x2B3798u;
    {
        const bool branch_taken_0x2b3798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3798) {
            ctx->pc = 0x2B379Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3798u;
            // 0x2b379c: 0xae370030  sw          $s7, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B37A8u;
            goto label_2b37a8;
        }
    }
    ctx->pc = 0x2B37A0u;
label_2b37a0:
    // 0x2b37a0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b37a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b37a4:
    // 0x2b37a4: 0xac570164  sw          $s7, 0x164($v0)
    ctx->pc = 0x2b37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 23));
label_2b37a8:
    // 0x2b37a8: 0xde220100  ld          $v0, 0x100($s1)
    ctx->pc = 0x2b37a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 256)));
label_2b37ac:
    // 0x2b37ac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2b37acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_2b37b0:
    // 0x2b37b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b37b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b37b4:
    // 0x2b37b4: 0x1040ff90  beqz        $v0, . + 4 + (-0x70 << 2)
label_2b37b8:
    if (ctx->pc == 0x2B37B8u) {
        ctx->pc = 0x2B37B8u;
            // 0x2b37b8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B37BCu;
        goto label_2b37bc;
    }
    ctx->pc = 0x2B37B4u;
    {
        const bool branch_taken_0x2b37b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B37B4u;
            // 0x2b37b8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37b4) {
            ctx->pc = 0x2B35F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b35f8;
        }
    }
    ctx->pc = 0x2B37BCu;
label_2b37bc:
    // 0x2b37bc: 0xae340030  sw          $s4, 0x30($s1)
    ctx->pc = 0x2b37bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 20));
label_2b37c0:
    // 0x2b37c0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b37c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b37c4:
    // 0x2b37c4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2b37c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2b37c8:
    // 0x2b37c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b37c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2b37cc:
    // 0x2b37cc: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2b37ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_2b37d0:
    // 0x2b37d0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2b37d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b37d4:
    // 0x2b37d4: 0x1000ff88  b           . + 4 + (-0x78 << 2)
label_2b37d8:
    if (ctx->pc == 0x2B37D8u) {
        ctx->pc = 0x2B37D8u;
            // 0x2b37d8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x2B37DCu;
        goto label_2b37dc;
    }
    ctx->pc = 0x2B37D4u;
    {
        const bool branch_taken_0x2b37d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B37D4u;
            // 0x2b37d8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37d4) {
            ctx->pc = 0x2B35F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b35f8;
        }
    }
    ctx->pc = 0x2B37DCu;
label_2b37dc:
    // 0x2b37dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b37dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b37e0:
    // 0x2b37e0: 0x240511d0  addiu       $a1, $zero, 0x11D0
    ctx->pc = 0x2b37e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4560));
label_2b37e4:
    // 0x2b37e4: 0xc0ab332  jal         func_2ACCC8
label_2b37e8:
    if (ctx->pc == 0x2B37E8u) {
        ctx->pc = 0x2B37E8u;
            // 0x2b37e8: 0x240611d1  addiu       $a2, $zero, 0x11D1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4561));
        ctx->pc = 0x2B37ECu;
        goto label_2b37ec;
    }
    ctx->pc = 0x2B37E4u;
    SET_GPR_U32(ctx, 31, 0x2B37ECu);
    ctx->pc = 0x2B37E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B37E4u;
            // 0x2b37e8: 0x240611d1  addiu       $a2, $zero, 0x11D1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4561));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCC8u;
    if (runtime->hasFunction(0x2ACCC8u)) {
        auto targetFn = runtime->lookupFunction(0x2ACCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B37ECu; }
        if (ctx->pc != 0x2B37ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACCC8_0x2accc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B37ECu; }
        if (ctx->pc != 0x2B37ECu) { return; }
    }
    ctx->pc = 0x2B37ECu;
label_2b37ec:
    // 0x2b37ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b37ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b37f0:
    // 0x2b37f0: 0x1a00007f  blez        $s0, . + 4 + (0x7F << 2)
label_2b37f4:
    if (ctx->pc == 0x2B37F4u) {
        ctx->pc = 0x2B37F8u;
        goto label_2b37f8;
    }
    ctx->pc = 0x2B37F0u;
    {
        const bool branch_taken_0x2b37f0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b37f0) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B37F8u;
label_2b37f8:
    // 0x2b37f8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2b37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b37fc:
    // 0x2b37fc: 0x5040ff7e  beql        $v0, $zero, . + 4 + (-0x82 << 2)
label_2b3800:
    if (ctx->pc == 0x2B3800u) {
        ctx->pc = 0x2B3800u;
            // 0x2b3800: 0xae340030  sw          $s4, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 20));
        ctx->pc = 0x2B3804u;
        goto label_2b3804;
    }
    ctx->pc = 0x2B37FCu;
    {
        const bool branch_taken_0x2b37fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b37fc) {
            ctx->pc = 0x2B3800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B37FCu;
            // 0x2b3800: 0xae340030  sw          $s4, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B35F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b35f8;
        }
    }
    ctx->pc = 0x2B3804u;
label_2b3804:
    // 0x2b3804: 0x1000ff7c  b           . + 4 + (-0x84 << 2)
label_2b3808:
    if (ctx->pc == 0x2B3808u) {
        ctx->pc = 0x2B3808u;
            // 0x2b3808: 0xae3e0030  sw          $fp, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
        ctx->pc = 0x2B380Cu;
        goto label_2b380c;
    }
    ctx->pc = 0x2B3804u;
    {
        const bool branch_taken_0x2b3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3804u;
            // 0x2b3808: 0xae3e0030  sw          $fp, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3804) {
            ctx->pc = 0x2B35F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b35f8;
        }
    }
    ctx->pc = 0x2B380Cu;
label_2b380c:
    // 0x2b380c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2b380cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b3810:
    // 0x2b3810: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b3810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b3814:
    // 0x2b3814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b3814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3818:
    // 0x2b3818: 0xc0a1558  jal         func_285560
label_2b381c:
    if (ctx->pc == 0x2B381Cu) {
        ctx->pc = 0x2B381Cu;
            // 0x2b381c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3820u;
        goto label_2b3820;
    }
    ctx->pc = 0x2B3818u;
    SET_GPR_U32(ctx, 31, 0x2B3820u);
    ctx->pc = 0x2B381Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3818u;
            // 0x2b381c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3820u; }
        if (ctx->pc != 0x2B3820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3820u; }
        if (ctx->pc != 0x2B3820u) { return; }
    }
    ctx->pc = 0x2B3820u;
label_2b3820:
    // 0x2b3820: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_2b3824:
    if (ctx->pc == 0x2B3824u) {
        ctx->pc = 0x2B3824u;
            // 0x2b3824: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B3828u;
        goto label_2b3828;
    }
    ctx->pc = 0x2B3820u;
    {
        const bool branch_taken_0x2b3820 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3820u;
            // 0x2b3824: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3820) {
            ctx->pc = 0x2B3854u;
            goto label_2b3854;
        }
    }
    ctx->pc = 0x2B3828u;
label_2b3828:
    // 0x2b3828: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2b3828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b382c:
    // 0x2b382c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2b382cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2b3830:
    // 0x2b3830: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2b3830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b3834:
    // 0x2b3834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b3834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3838:
    // 0x2b3838: 0xc0a1558  jal         func_285560
label_2b383c:
    if (ctx->pc == 0x2B383Cu) {
        ctx->pc = 0x2B383Cu;
            // 0x2b383c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3840u;
        goto label_2b3840;
    }
    ctx->pc = 0x2B3838u;
    SET_GPR_U32(ctx, 31, 0x2B3840u);
    ctx->pc = 0x2B383Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3838u;
            // 0x2b383c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3840u; }
        if (ctx->pc != 0x2B3840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3840u; }
        if (ctx->pc != 0x2B3840u) { return; }
    }
    ctx->pc = 0x2B3840u;
label_2b3840:
    // 0x2b3840: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b3840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2b3844:
    // 0x2b3844: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b3844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b3848:
    // 0x2b3848: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
label_2b384c:
    if (ctx->pc == 0x2B384Cu) {
        ctx->pc = 0x2B384Cu;
            // 0x2b384c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B3850u;
        goto label_2b3850;
    }
    ctx->pc = 0x2B3848u;
    {
        const bool branch_taken_0x2b3848 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3848u;
            // 0x2b384c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3848) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B3850u;
label_2b3850:
    // 0x2b3850: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x2b3850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
label_2b3854:
    // 0x2b3854: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x2b3854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_2b3858:
    // 0x2b3858: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2b385c:
    if (ctx->pc == 0x2B385Cu) {
        ctx->pc = 0x2B385Cu;
            // 0x2b385c: 0x8e330034  lw          $s3, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->pc = 0x2B3860u;
        goto label_2b3860;
    }
    ctx->pc = 0x2B3858u;
    {
        const bool branch_taken_0x2b3858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3858) {
            ctx->pc = 0x2B385Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3858u;
            // 0x2b385c: 0x8e330034  lw          $s3, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B3860u;
            goto label_2b3860;
        }
    }
    ctx->pc = 0x2B3860u;
label_2b3860:
    // 0x2b3860: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b3860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b3864:
    // 0x2b3864: 0x8c820164  lw          $v0, 0x164($a0)
    ctx->pc = 0x2b3864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
label_2b3868:
    // 0x2b3868: 0x10000039  b           . + 4 + (0x39 << 2)
label_2b386c:
    if (ctx->pc == 0x2B386Cu) {
        ctx->pc = 0x2B386Cu;
            // 0x2b386c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2B3870u;
        goto label_2b3870;
    }
    ctx->pc = 0x2B3868u;
    {
        const bool branch_taken_0x2b3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3868u;
            // 0x2b386c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3868) {
            ctx->pc = 0x2B3950u;
            goto label_2b3950;
        }
    }
    ctx->pc = 0x2B3870u;
label_2b3870:
    // 0x2b3870: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2b3870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b3874:
    // 0x2b3874: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2b3874u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b3878:
    // 0x2b3878: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b3878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2b387c:
    // 0x2b387c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_2b3880:
    if (ctx->pc == 0x2B3880u) {
        ctx->pc = 0x2B3880u;
            // 0x2b3880: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->pc = 0x2B3884u;
        goto label_2b3884;
    }
    ctx->pc = 0x2B387Cu;
    {
        const bool branch_taken_0x2b387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B387Cu;
            // 0x2b3880: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b387c) {
            ctx->pc = 0x2B3900u;
            goto label_2b3900;
        }
    }
    ctx->pc = 0x2B3884u;
label_2b3884:
    // 0x2b3884: 0xc0ab79a  jal         func_2ADE68
label_2b3888:
    if (ctx->pc == 0x2B3888u) {
        ctx->pc = 0x2B3888u;
            // 0x2b3888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B388Cu;
        goto label_2b388c;
    }
    ctx->pc = 0x2B3884u;
    SET_GPR_U32(ctx, 31, 0x2B388Cu);
    ctx->pc = 0x2B3888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3884u;
            // 0x2b3888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE68u;
    if (runtime->hasFunction(0x2ADE68u)) {
        auto targetFn = runtime->lookupFunction(0x2ADE68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B388Cu; }
        if (ctx->pc != 0x2B388Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ADE68_0x2ade68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B388Cu; }
        if (ctx->pc != 0x2B388Cu) { return; }
    }
    ctx->pc = 0x2B388Cu;
label_2b388c:
    // 0x2b388c: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x2b388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2b3890:
    // 0x2b3890: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2b3894:
    if (ctx->pc == 0x2B3894u) {
        ctx->pc = 0x2B3894u;
            // 0x2b3894: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x2B3898u;
        goto label_2b3898;
    }
    ctx->pc = 0x2B3890u;
    {
        const bool branch_taken_0x2b3890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3890) {
            ctx->pc = 0x2B3894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3890u;
            // 0x2b3894: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B38A8u;
            goto label_2b38a8;
        }
    }
    ctx->pc = 0x2B3898u;
label_2b3898:
    // 0x2b3898: 0xc0a32ca  jal         func_28CB28
label_2b389c:
    if (ctx->pc == 0x2B389Cu) {
        ctx->pc = 0x2B38A0u;
        goto label_2b38a0;
    }
    ctx->pc = 0x2B3898u;
    SET_GPR_U32(ctx, 31, 0x2B38A0u);
    ctx->pc = 0x28CB28u;
    if (runtime->hasFunction(0x28CB28u)) {
        auto targetFn = runtime->lookupFunction(0x28CB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B38A0u; }
        if (ctx->pc != 0x2B38A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB28_0x28cb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B38A0u; }
        if (ctx->pc != 0x2B38A0u) { return; }
    }
    ctx->pc = 0x2B38A0u;
label_2b38a0:
    // 0x2b38a0: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2b38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_2b38a4:
    // 0x2b38a4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2b38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b38a8:
    // 0x2b38a8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2b38a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b38ac:
    // 0x2b38ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b38acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2b38b0:
    // 0x2b38b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b38b4:
    if (ctx->pc == 0x2B38B4u) {
        ctx->pc = 0x2B38B4u;
            // 0x2b38b4: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2B38B8u;
        goto label_2b38b8;
    }
    ctx->pc = 0x2B38B0u;
    {
        const bool branch_taken_0x2b38b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b38b0) {
            ctx->pc = 0x2B38B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B38B0u;
            // 0x2b38b4: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B38C4u;
            goto label_2b38c4;
        }
    }
    ctx->pc = 0x2B38B8u;
label_2b38b8:
    // 0x2b38b8: 0xc0ac5d2  jal         func_2B1748
label_2b38bc:
    if (ctx->pc == 0x2B38BCu) {
        ctx->pc = 0x2B38BCu;
            // 0x2b38bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B38C0u;
        goto label_2b38c0;
    }
    ctx->pc = 0x2B38B8u;
    SET_GPR_U32(ctx, 31, 0x2B38C0u);
    ctx->pc = 0x2B38BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B38B8u;
            // 0x2b38bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1748u;
    if (runtime->hasFunction(0x2B1748u)) {
        auto targetFn = runtime->lookupFunction(0x2B1748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B38C0u; }
        if (ctx->pc != 0x2B38C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1748_0x2b1748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B38C0u; }
        if (ctx->pc != 0x2B38C0u) { return; }
    }
    ctx->pc = 0x2B38C0u;
label_2b38c0:
    // 0x2b38c0: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2b38c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2b38c4:
    // 0x2b38c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b38c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b38c8:
    // 0x2b38c8: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2b38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_2b38cc:
    // 0x2b38cc: 0xc0ac436  jal         func_2B10D8
label_2b38d0:
    if (ctx->pc == 0x2B38D0u) {
        ctx->pc = 0x2B38D0u;
            // 0x2b38d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B38D4u;
        goto label_2b38d4;
    }
    ctx->pc = 0x2B38CCu;
    SET_GPR_U32(ctx, 31, 0x2B38D4u);
    ctx->pc = 0x2B38D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B38CCu;
            // 0x2b38d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B10D8u;
    if (runtime->hasFunction(0x2B10D8u)) {
        auto targetFn = runtime->lookupFunction(0x2B10D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B38D4u; }
        if (ctx->pc != 0x2B38D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B10D8_0x2b10d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B38D4u; }
        if (ctx->pc != 0x2B38D4u) { return; }
    }
    ctx->pc = 0x2B38D4u;
label_2b38d4:
    // 0x2b38d4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2b38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b38d8:
    // 0x2b38d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b38dc:
    if (ctx->pc == 0x2B38DCu) {
        ctx->pc = 0x2B38DCu;
            // 0x2b38dc: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->pc = 0x2B38E0u;
        goto label_2b38e0;
    }
    ctx->pc = 0x2B38D8u;
    {
        const bool branch_taken_0x2b38d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B38D8u;
            // 0x2b38dc: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38d8) {
            ctx->pc = 0x2B38F0u;
            goto label_2b38f0;
        }
    }
    ctx->pc = 0x2B38E0u;
label_2b38e0:
    // 0x2b38e0: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2b38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2b38e4:
    // 0x2b38e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b38e8:
    // 0x2b38e8: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x2b38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_2b38ec:
    // 0x2b38ec: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x2b38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2b38f0:
    // 0x2b38f0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2b38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2b38f4:
    // 0x2b38f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b38f8:
    // 0x2b38f8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x2b38f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_2b38fc:
    // 0x2b38fc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x2b38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_2b3900:
    // 0x2b3900: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b3900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3904:
    // 0x2b3904: 0x24420218  addiu       $v0, $v0, 0x218
    ctx->pc = 0x2b3904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 536));
label_2b3908:
    // 0x2b3908: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
label_2b390c:
    if (ctx->pc == 0x2B390Cu) {
        ctx->pc = 0x2B390Cu;
            // 0x2b390c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x2B3910u;
        goto label_2b3910;
    }
    ctx->pc = 0x2B3908u;
    {
        const bool branch_taken_0x2b3908 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3908u;
            // 0x2b390c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3908) {
            ctx->pc = 0x2B3A04u;
            goto label_2b3a04;
        }
    }
    ctx->pc = 0x2B3910u;
label_2b3910:
    // 0x2b3910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b3910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b3914:
    // 0x2b3914: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2b3914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2b3918:
    // 0x2b3918: 0x240f809  jalr        $s2
label_2b391c:
    if (ctx->pc == 0x2B391Cu) {
        ctx->pc = 0x2B391Cu;
            // 0x2b391c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B3920u;
        goto label_2b3920;
    }
    ctx->pc = 0x2B3918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2B3920u);
        ctx->pc = 0x2B391Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3918u;
            // 0x2b391c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B3920u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B3920u; }
            if (ctx->pc != 0x2B3920u) { return; }
        }
        }
    }
    ctx->pc = 0x2B3920u;
label_2b3920:
    // 0x2b3920: 0x10000033  b           . + 4 + (0x33 << 2)
label_2b3924:
    if (ctx->pc == 0x2B3924u) {
        ctx->pc = 0x2B3928u;
        goto label_2b3928;
    }
    ctx->pc = 0x2B3920u;
    {
        const bool branch_taken_0x2b3920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3920) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B3928u;
label_2b3928:
    // 0x2b3928: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b3928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b392c:
    // 0x2b392c: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x2b392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2b3930:
    // 0x2b3930: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2b3930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2b3934:
    // 0x2b3934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3938:
    // 0x2b3938: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b3938u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b393c:
    // 0x2b393c: 0xc0a5648  jal         func_295920
label_2b3940:
    if (ctx->pc == 0x2B3940u) {
        ctx->pc = 0x2B3940u;
            // 0x2b3940: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B3944u;
        goto label_2b3944;
    }
    ctx->pc = 0x2B393Cu;
    SET_GPR_U32(ctx, 31, 0x2B3944u);
    ctx->pc = 0x2B3940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B393Cu;
            // 0x2b3940: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3944u; }
        if (ctx->pc != 0x2B3944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3944u; }
        if (ctx->pc != 0x2B3944u) { return; }
    }
    ctx->pc = 0x2B3944u;
label_2b3944:
    // 0x2b3944: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2b3948:
    if (ctx->pc == 0x2B3948u) {
        ctx->pc = 0x2B394Cu;
        goto label_2b394c;
    }
    ctx->pc = 0x2B3944u;
    {
        const bool branch_taken_0x2b3944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3944) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B394Cu;
label_2b394c:
    // 0x2b394c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b3950:
    // 0x2b3950: 0x8c820168  lw          $v0, 0x168($a0)
    ctx->pc = 0x2b3950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 360)));
label_2b3954:
    // 0x2b3954: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_2b3958:
    if (ctx->pc == 0x2B3958u) {
        ctx->pc = 0x2B3958u;
            // 0x2b3958: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2B395Cu;
        goto label_2b395c;
    }
    ctx->pc = 0x2B3954u;
    {
        const bool branch_taken_0x2b3954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3954) {
            ctx->pc = 0x2B3958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3954u;
            // 0x2b3958: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B39E8u;
            goto label_2b39e8;
        }
    }
    ctx->pc = 0x2B395Cu;
label_2b395c:
    // 0x2b395c: 0x56c00022  bnel        $s6, $zero, . + 4 + (0x22 << 2)
label_2b3960:
    if (ctx->pc == 0x2B3960u) {
        ctx->pc = 0x2B3960u;
            // 0x2b3960: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2B3964u;
        goto label_2b3964;
    }
    ctx->pc = 0x2B395Cu;
    {
        const bool branch_taken_0x2b395c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b395c) {
            ctx->pc = 0x2B3960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B395Cu;
            // 0x2b3960: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B39E8u;
            goto label_2b39e8;
        }
    }
    ctx->pc = 0x2B3964u;
label_2b3964:
    // 0x2b3964: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x2b3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_2b3968:
    // 0x2b3968: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2b396c:
    if (ctx->pc == 0x2B396Cu) {
        ctx->pc = 0x2B396Cu;
            // 0x2b396c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B3970u;
        goto label_2b3970;
    }
    ctx->pc = 0x2B3968u;
    {
        const bool branch_taken_0x2b3968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B396Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3968u;
            // 0x2b396c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3968) {
            ctx->pc = 0x2B39C4u;
            goto label_2b39c4;
        }
    }
    ctx->pc = 0x2B3970u;
label_2b3970:
    // 0x2b3970: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2b3970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b3974:
    // 0x2b3974: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2b3974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2b3978:
    // 0x2b3978: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2b3978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b397c:
    // 0x2b397c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b397cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3980:
    // 0x2b3980: 0xc0a1558  jal         func_285560
label_2b3984:
    if (ctx->pc == 0x2B3984u) {
        ctx->pc = 0x2B3984u;
            // 0x2b3984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3988u;
        goto label_2b3988;
    }
    ctx->pc = 0x2B3980u;
    SET_GPR_U32(ctx, 31, 0x2B3988u);
    ctx->pc = 0x2B3984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3980u;
            // 0x2b3984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3988u; }
        if (ctx->pc != 0x2B3988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3988u; }
        if (ctx->pc != 0x2B3988u) { return; }
    }
    ctx->pc = 0x2B3988u;
label_2b3988:
    // 0x2b3988: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2b3988u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_2b398c:
    // 0x2b398c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2b398cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_2b3990:
    // 0x2b3990: 0x5e00000c  bgtzl       $s0, . + 4 + (0xC << 2)
label_2b3994:
    if (ctx->pc == 0x2B3994u) {
        ctx->pc = 0x2B3994u;
            // 0x2b3994: 0xae350018  sw          $s5, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
        ctx->pc = 0x2B3998u;
        goto label_2b3998;
    }
    ctx->pc = 0x2B3990u;
    {
        const bool branch_taken_0x2b3990 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2b3990) {
            ctx->pc = 0x2B3994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3990u;
            // 0x2b3994: 0xae350018  sw          $s5, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B39C4u;
            goto label_2b39c4;
        }
    }
    ctx->pc = 0x2B3998u;
label_2b3998:
    // 0x2b3998: 0xc0a13ba  jal         func_284EE8
label_2b399c:
    if (ctx->pc == 0x2B399Cu) {
        ctx->pc = 0x2B399Cu;
            // 0x2b399c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x2B39A0u;
        goto label_2b39a0;
    }
    ctx->pc = 0x2B3998u;
    SET_GPR_U32(ctx, 31, 0x2B39A0u);
    ctx->pc = 0x2B399Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3998u;
            // 0x2b399c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE8u;
    if (runtime->hasFunction(0x284EE8u)) {
        auto targetFn = runtime->lookupFunction(0x284EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B39A0u; }
        if (ctx->pc != 0x2B39A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE8_0x284ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B39A0u; }
        if (ctx->pc != 0x2B39A0u) { return; }
    }
    ctx->pc = 0x2B39A0u;
label_2b39a0:
    // 0x2b39a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2b39a4:
    if (ctx->pc == 0x2B39A4u) {
        ctx->pc = 0x2B39A8u;
        goto label_2b39a8;
    }
    ctx->pc = 0x2B39A0u;
    {
        const bool branch_taken_0x2b39a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b39a0) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B39A8u;
label_2b39a8:
    // 0x2b39a8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2b39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b39ac:
    // 0x2b39ac: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b39acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b39b0:
    // 0x2b39b0: 0xac430164  sw          $v1, 0x164($v0)
    ctx->pc = 0x2b39b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 3));
label_2b39b4:
    // 0x2b39b4: 0x24021100  addiu       $v0, $zero, 0x1100
    ctx->pc = 0x2b39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
label_2b39b8:
    // 0x2b39b8: 0xae330034  sw          $s3, 0x34($s1)
    ctx->pc = 0x2b39b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
label_2b39bc:
    // 0x2b39bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b39c0:
    if (ctx->pc == 0x2B39C0u) {
        ctx->pc = 0x2B39C0u;
            // 0x2b39c0: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2B39C4u;
        goto label_2b39c4;
    }
    ctx->pc = 0x2B39BCu;
    {
        const bool branch_taken_0x2b39bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B39BCu;
            // 0x2b39c0: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39bc) {
            ctx->pc = 0x2B39F0u;
            goto label_2b39f0;
        }
    }
    ctx->pc = 0x2B39C4u;
label_2b39c4:
    // 0x2b39c4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2b39c8:
    if (ctx->pc == 0x2B39C8u) {
        ctx->pc = 0x2B39C8u;
            // 0x2b39c8: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2B39CCu;
        goto label_2b39cc;
    }
    ctx->pc = 0x2B39C4u;
    {
        const bool branch_taken_0x2b39c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B39C4u;
            // 0x2b39c8: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39c4) {
            ctx->pc = 0x2B39E8u;
            goto label_2b39e8;
        }
    }
    ctx->pc = 0x2B39CCu;
label_2b39cc:
    // 0x2b39cc: 0x12130006  beq         $s0, $s3, . + 4 + (0x6 << 2)
label_2b39d0:
    if (ctx->pc == 0x2B39D0u) {
        ctx->pc = 0x2B39D0u;
            // 0x2b39d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B39D4u;
        goto label_2b39d4;
    }
    ctx->pc = 0x2B39CCu;
    {
        const bool branch_taken_0x2b39cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2B39D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B39CCu;
            // 0x2b39d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39cc) {
            ctx->pc = 0x2B39E8u;
            goto label_2b39e8;
        }
    }
    ctx->pc = 0x2B39D4u;
label_2b39d4:
    // 0x2b39d4: 0xae330030  sw          $s3, 0x30($s1)
    ctx->pc = 0x2b39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 19));
label_2b39d8:
    // 0x2b39d8: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x2b39d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_2b39dc:
    // 0x2b39dc: 0x240f809  jalr        $s2
label_2b39e0:
    if (ctx->pc == 0x2B39E0u) {
        ctx->pc = 0x2B39E0u;
            // 0x2b39e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B39E4u;
        goto label_2b39e4;
    }
    ctx->pc = 0x2B39DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2B39E4u);
        ctx->pc = 0x2B39E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B39DCu;
            // 0x2b39e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B39E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B39E4u; }
            if (ctx->pc != 0x2B39E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B39E4u;
label_2b39e4:
    // 0x2b39e4: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x2b39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
label_2b39e8:
    // 0x2b39e8: 0x1000fe3d  b           . + 4 + (-0x1C3 << 2)
label_2b39ec:
    if (ctx->pc == 0x2B39ECu) {
        ctx->pc = 0x2B39ECu;
            // 0x2b39ec: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B39F0u;
        goto label_2b39f0;
    }
    ctx->pc = 0x2B39E8u;
    {
        const bool branch_taken_0x2b39e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B39E8u;
            // 0x2b39ec: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39e8) {
            ctx->pc = 0x2B32E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b32e0;
        }
    }
    ctx->pc = 0x2B39F0u;
label_2b39f0:
    // 0x2b39f0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2b39f4:
    if (ctx->pc == 0x2B39F4u) {
        ctx->pc = 0x2B39F4u;
            // 0x2b39f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B39F8u;
        goto label_2b39f8;
    }
    ctx->pc = 0x2B39F0u;
    {
        const bool branch_taken_0x2b39f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B39F0u;
            // 0x2b39f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39f0) {
            ctx->pc = 0x2B3A04u;
            goto label_2b3a04;
        }
    }
    ctx->pc = 0x2B39F8u;
label_2b39f8:
    // 0x2b39f8: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x2b39f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
label_2b39fc:
    // 0x2b39fc: 0x240f809  jalr        $s2
label_2b3a00:
    if (ctx->pc == 0x2B3A00u) {
        ctx->pc = 0x2B3A00u;
            // 0x2b3a00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A04u;
        goto label_2b3a04;
    }
    ctx->pc = 0x2B39FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2B3A04u);
        ctx->pc = 0x2B3A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B39FCu;
            // 0x2b3a00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B3A04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A04u; }
            if (ctx->pc != 0x2B3A04u) { return; }
        }
        }
    }
    ctx->pc = 0x2B3A04u;
label_2b3a04:
    // 0x2b3a04: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2b3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b3a08:
    // 0x2b3a08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b3a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b3a0c:
    // 0x2b3a0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b3a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b3a10:
    // 0x2b3a10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2b3a14:
    // 0x2b3a14: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2b3a14u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b3a18:
    // 0x2b3a18: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x2b3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_2b3a1c:
    // 0x2b3a1c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2b3a1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b3a20:
    // 0x2b3a20: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b3a20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b3a24:
    // 0x2b3a24: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b3a24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b3a28:
    // 0x2b3a28: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b3a28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b3a2c:
    // 0x2b3a2c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b3a2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b3a30:
    // 0x2b3a30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b3a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b3a34:
    // 0x2b3a34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b3a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3a38:
    // 0x2b3a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b3a3c:
    // 0x2b3a3c: 0x3e00008  jr          $ra
label_2b3a40:
    if (ctx->pc == 0x2B3A40u) {
        ctx->pc = 0x2B3A40u;
            // 0x2b3a40: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2B3A44u;
        goto label_2b3a44;
    }
    ctx->pc = 0x2B3A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A3Cu;
            // 0x2b3a40: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3A44u;
label_2b3a44:
    // 0x2b3a44: 0x0  nop
    ctx->pc = 0x2b3a44u;
    // NOP
    ctx->pc = 0x2b3a48u;
}
