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

// Function: sub_002B2158
// Address: 0x2b2158 - 0x2b2658
void sub_002B2158_0x2b2158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2158_0x2b2158");
#endif

    switch (ctx->pc) {
        case 0x2b2158u: goto label_2b2158;
        case 0x2b215cu: goto label_2b215c;
        case 0x2b2160u: goto label_2b2160;
        case 0x2b2164u: goto label_2b2164;
        case 0x2b2168u: goto label_2b2168;
        case 0x2b216cu: goto label_2b216c;
        case 0x2b2170u: goto label_2b2170;
        case 0x2b2174u: goto label_2b2174;
        case 0x2b2178u: goto label_2b2178;
        case 0x2b217cu: goto label_2b217c;
        case 0x2b2180u: goto label_2b2180;
        case 0x2b2184u: goto label_2b2184;
        case 0x2b2188u: goto label_2b2188;
        case 0x2b218cu: goto label_2b218c;
        case 0x2b2190u: goto label_2b2190;
        case 0x2b2194u: goto label_2b2194;
        case 0x2b2198u: goto label_2b2198;
        case 0x2b219cu: goto label_2b219c;
        case 0x2b21a0u: goto label_2b21a0;
        case 0x2b21a4u: goto label_2b21a4;
        case 0x2b21a8u: goto label_2b21a8;
        case 0x2b21acu: goto label_2b21ac;
        case 0x2b21b0u: goto label_2b21b0;
        case 0x2b21b4u: goto label_2b21b4;
        case 0x2b21b8u: goto label_2b21b8;
        case 0x2b21bcu: goto label_2b21bc;
        case 0x2b21c0u: goto label_2b21c0;
        case 0x2b21c4u: goto label_2b21c4;
        case 0x2b21c8u: goto label_2b21c8;
        case 0x2b21ccu: goto label_2b21cc;
        case 0x2b21d0u: goto label_2b21d0;
        case 0x2b21d4u: goto label_2b21d4;
        case 0x2b21d8u: goto label_2b21d8;
        case 0x2b21dcu: goto label_2b21dc;
        case 0x2b21e0u: goto label_2b21e0;
        case 0x2b21e4u: goto label_2b21e4;
        case 0x2b21e8u: goto label_2b21e8;
        case 0x2b21ecu: goto label_2b21ec;
        case 0x2b21f0u: goto label_2b21f0;
        case 0x2b21f4u: goto label_2b21f4;
        case 0x2b21f8u: goto label_2b21f8;
        case 0x2b21fcu: goto label_2b21fc;
        case 0x2b2200u: goto label_2b2200;
        case 0x2b2204u: goto label_2b2204;
        case 0x2b2208u: goto label_2b2208;
        case 0x2b220cu: goto label_2b220c;
        case 0x2b2210u: goto label_2b2210;
        case 0x2b2214u: goto label_2b2214;
        case 0x2b2218u: goto label_2b2218;
        case 0x2b221cu: goto label_2b221c;
        case 0x2b2220u: goto label_2b2220;
        case 0x2b2224u: goto label_2b2224;
        case 0x2b2228u: goto label_2b2228;
        case 0x2b222cu: goto label_2b222c;
        case 0x2b2230u: goto label_2b2230;
        case 0x2b2234u: goto label_2b2234;
        case 0x2b2238u: goto label_2b2238;
        case 0x2b223cu: goto label_2b223c;
        case 0x2b2240u: goto label_2b2240;
        case 0x2b2244u: goto label_2b2244;
        case 0x2b2248u: goto label_2b2248;
        case 0x2b224cu: goto label_2b224c;
        case 0x2b2250u: goto label_2b2250;
        case 0x2b2254u: goto label_2b2254;
        case 0x2b2258u: goto label_2b2258;
        case 0x2b225cu: goto label_2b225c;
        case 0x2b2260u: goto label_2b2260;
        case 0x2b2264u: goto label_2b2264;
        case 0x2b2268u: goto label_2b2268;
        case 0x2b226cu: goto label_2b226c;
        case 0x2b2270u: goto label_2b2270;
        case 0x2b2274u: goto label_2b2274;
        case 0x2b2278u: goto label_2b2278;
        case 0x2b227cu: goto label_2b227c;
        case 0x2b2280u: goto label_2b2280;
        case 0x2b2284u: goto label_2b2284;
        case 0x2b2288u: goto label_2b2288;
        case 0x2b228cu: goto label_2b228c;
        case 0x2b2290u: goto label_2b2290;
        case 0x2b2294u: goto label_2b2294;
        case 0x2b2298u: goto label_2b2298;
        case 0x2b229cu: goto label_2b229c;
        case 0x2b22a0u: goto label_2b22a0;
        case 0x2b22a4u: goto label_2b22a4;
        case 0x2b22a8u: goto label_2b22a8;
        case 0x2b22acu: goto label_2b22ac;
        case 0x2b22b0u: goto label_2b22b0;
        case 0x2b22b4u: goto label_2b22b4;
        case 0x2b22b8u: goto label_2b22b8;
        case 0x2b22bcu: goto label_2b22bc;
        case 0x2b22c0u: goto label_2b22c0;
        case 0x2b22c4u: goto label_2b22c4;
        case 0x2b22c8u: goto label_2b22c8;
        case 0x2b22ccu: goto label_2b22cc;
        case 0x2b22d0u: goto label_2b22d0;
        case 0x2b22d4u: goto label_2b22d4;
        case 0x2b22d8u: goto label_2b22d8;
        case 0x2b22dcu: goto label_2b22dc;
        case 0x2b22e0u: goto label_2b22e0;
        case 0x2b22e4u: goto label_2b22e4;
        case 0x2b22e8u: goto label_2b22e8;
        case 0x2b22ecu: goto label_2b22ec;
        case 0x2b22f0u: goto label_2b22f0;
        case 0x2b22f4u: goto label_2b22f4;
        case 0x2b22f8u: goto label_2b22f8;
        case 0x2b22fcu: goto label_2b22fc;
        case 0x2b2300u: goto label_2b2300;
        case 0x2b2304u: goto label_2b2304;
        case 0x2b2308u: goto label_2b2308;
        case 0x2b230cu: goto label_2b230c;
        case 0x2b2310u: goto label_2b2310;
        case 0x2b2314u: goto label_2b2314;
        case 0x2b2318u: goto label_2b2318;
        case 0x2b231cu: goto label_2b231c;
        case 0x2b2320u: goto label_2b2320;
        case 0x2b2324u: goto label_2b2324;
        case 0x2b2328u: goto label_2b2328;
        case 0x2b232cu: goto label_2b232c;
        case 0x2b2330u: goto label_2b2330;
        case 0x2b2334u: goto label_2b2334;
        case 0x2b2338u: goto label_2b2338;
        case 0x2b233cu: goto label_2b233c;
        case 0x2b2340u: goto label_2b2340;
        case 0x2b2344u: goto label_2b2344;
        case 0x2b2348u: goto label_2b2348;
        case 0x2b234cu: goto label_2b234c;
        case 0x2b2350u: goto label_2b2350;
        case 0x2b2354u: goto label_2b2354;
        case 0x2b2358u: goto label_2b2358;
        case 0x2b235cu: goto label_2b235c;
        case 0x2b2360u: goto label_2b2360;
        case 0x2b2364u: goto label_2b2364;
        case 0x2b2368u: goto label_2b2368;
        case 0x2b236cu: goto label_2b236c;
        case 0x2b2370u: goto label_2b2370;
        case 0x2b2374u: goto label_2b2374;
        case 0x2b2378u: goto label_2b2378;
        case 0x2b237cu: goto label_2b237c;
        case 0x2b2380u: goto label_2b2380;
        case 0x2b2384u: goto label_2b2384;
        case 0x2b2388u: goto label_2b2388;
        case 0x2b238cu: goto label_2b238c;
        case 0x2b2390u: goto label_2b2390;
        case 0x2b2394u: goto label_2b2394;
        case 0x2b2398u: goto label_2b2398;
        case 0x2b239cu: goto label_2b239c;
        case 0x2b23a0u: goto label_2b23a0;
        case 0x2b23a4u: goto label_2b23a4;
        case 0x2b23a8u: goto label_2b23a8;
        case 0x2b23acu: goto label_2b23ac;
        case 0x2b23b0u: goto label_2b23b0;
        case 0x2b23b4u: goto label_2b23b4;
        case 0x2b23b8u: goto label_2b23b8;
        case 0x2b23bcu: goto label_2b23bc;
        case 0x2b23c0u: goto label_2b23c0;
        case 0x2b23c4u: goto label_2b23c4;
        case 0x2b23c8u: goto label_2b23c8;
        case 0x2b23ccu: goto label_2b23cc;
        case 0x2b23d0u: goto label_2b23d0;
        case 0x2b23d4u: goto label_2b23d4;
        case 0x2b23d8u: goto label_2b23d8;
        case 0x2b23dcu: goto label_2b23dc;
        case 0x2b23e0u: goto label_2b23e0;
        case 0x2b23e4u: goto label_2b23e4;
        case 0x2b23e8u: goto label_2b23e8;
        case 0x2b23ecu: goto label_2b23ec;
        case 0x2b23f0u: goto label_2b23f0;
        case 0x2b23f4u: goto label_2b23f4;
        case 0x2b23f8u: goto label_2b23f8;
        case 0x2b23fcu: goto label_2b23fc;
        case 0x2b2400u: goto label_2b2400;
        case 0x2b2404u: goto label_2b2404;
        case 0x2b2408u: goto label_2b2408;
        case 0x2b240cu: goto label_2b240c;
        case 0x2b2410u: goto label_2b2410;
        case 0x2b2414u: goto label_2b2414;
        case 0x2b2418u: goto label_2b2418;
        case 0x2b241cu: goto label_2b241c;
        case 0x2b2420u: goto label_2b2420;
        case 0x2b2424u: goto label_2b2424;
        case 0x2b2428u: goto label_2b2428;
        case 0x2b242cu: goto label_2b242c;
        case 0x2b2430u: goto label_2b2430;
        case 0x2b2434u: goto label_2b2434;
        case 0x2b2438u: goto label_2b2438;
        case 0x2b243cu: goto label_2b243c;
        case 0x2b2440u: goto label_2b2440;
        case 0x2b2444u: goto label_2b2444;
        case 0x2b2448u: goto label_2b2448;
        case 0x2b244cu: goto label_2b244c;
        case 0x2b2450u: goto label_2b2450;
        case 0x2b2454u: goto label_2b2454;
        case 0x2b2458u: goto label_2b2458;
        case 0x2b245cu: goto label_2b245c;
        case 0x2b2460u: goto label_2b2460;
        case 0x2b2464u: goto label_2b2464;
        case 0x2b2468u: goto label_2b2468;
        case 0x2b246cu: goto label_2b246c;
        case 0x2b2470u: goto label_2b2470;
        case 0x2b2474u: goto label_2b2474;
        case 0x2b2478u: goto label_2b2478;
        case 0x2b247cu: goto label_2b247c;
        case 0x2b2480u: goto label_2b2480;
        case 0x2b2484u: goto label_2b2484;
        case 0x2b2488u: goto label_2b2488;
        case 0x2b248cu: goto label_2b248c;
        case 0x2b2490u: goto label_2b2490;
        case 0x2b2494u: goto label_2b2494;
        case 0x2b2498u: goto label_2b2498;
        case 0x2b249cu: goto label_2b249c;
        case 0x2b24a0u: goto label_2b24a0;
        case 0x2b24a4u: goto label_2b24a4;
        case 0x2b24a8u: goto label_2b24a8;
        case 0x2b24acu: goto label_2b24ac;
        case 0x2b24b0u: goto label_2b24b0;
        case 0x2b24b4u: goto label_2b24b4;
        case 0x2b24b8u: goto label_2b24b8;
        case 0x2b24bcu: goto label_2b24bc;
        case 0x2b24c0u: goto label_2b24c0;
        case 0x2b24c4u: goto label_2b24c4;
        case 0x2b24c8u: goto label_2b24c8;
        case 0x2b24ccu: goto label_2b24cc;
        case 0x2b24d0u: goto label_2b24d0;
        case 0x2b24d4u: goto label_2b24d4;
        case 0x2b24d8u: goto label_2b24d8;
        case 0x2b24dcu: goto label_2b24dc;
        case 0x2b24e0u: goto label_2b24e0;
        case 0x2b24e4u: goto label_2b24e4;
        case 0x2b24e8u: goto label_2b24e8;
        case 0x2b24ecu: goto label_2b24ec;
        case 0x2b24f0u: goto label_2b24f0;
        case 0x2b24f4u: goto label_2b24f4;
        case 0x2b24f8u: goto label_2b24f8;
        case 0x2b24fcu: goto label_2b24fc;
        case 0x2b2500u: goto label_2b2500;
        case 0x2b2504u: goto label_2b2504;
        case 0x2b2508u: goto label_2b2508;
        case 0x2b250cu: goto label_2b250c;
        case 0x2b2510u: goto label_2b2510;
        case 0x2b2514u: goto label_2b2514;
        case 0x2b2518u: goto label_2b2518;
        case 0x2b251cu: goto label_2b251c;
        case 0x2b2520u: goto label_2b2520;
        case 0x2b2524u: goto label_2b2524;
        case 0x2b2528u: goto label_2b2528;
        case 0x2b252cu: goto label_2b252c;
        case 0x2b2530u: goto label_2b2530;
        case 0x2b2534u: goto label_2b2534;
        case 0x2b2538u: goto label_2b2538;
        case 0x2b253cu: goto label_2b253c;
        case 0x2b2540u: goto label_2b2540;
        case 0x2b2544u: goto label_2b2544;
        case 0x2b2548u: goto label_2b2548;
        case 0x2b254cu: goto label_2b254c;
        case 0x2b2550u: goto label_2b2550;
        case 0x2b2554u: goto label_2b2554;
        case 0x2b2558u: goto label_2b2558;
        case 0x2b255cu: goto label_2b255c;
        case 0x2b2560u: goto label_2b2560;
        case 0x2b2564u: goto label_2b2564;
        case 0x2b2568u: goto label_2b2568;
        case 0x2b256cu: goto label_2b256c;
        case 0x2b2570u: goto label_2b2570;
        case 0x2b2574u: goto label_2b2574;
        case 0x2b2578u: goto label_2b2578;
        case 0x2b257cu: goto label_2b257c;
        case 0x2b2580u: goto label_2b2580;
        case 0x2b2584u: goto label_2b2584;
        case 0x2b2588u: goto label_2b2588;
        case 0x2b258cu: goto label_2b258c;
        case 0x2b2590u: goto label_2b2590;
        case 0x2b2594u: goto label_2b2594;
        case 0x2b2598u: goto label_2b2598;
        case 0x2b259cu: goto label_2b259c;
        case 0x2b25a0u: goto label_2b25a0;
        case 0x2b25a4u: goto label_2b25a4;
        case 0x2b25a8u: goto label_2b25a8;
        case 0x2b25acu: goto label_2b25ac;
        case 0x2b25b0u: goto label_2b25b0;
        case 0x2b25b4u: goto label_2b25b4;
        case 0x2b25b8u: goto label_2b25b8;
        case 0x2b25bcu: goto label_2b25bc;
        case 0x2b25c0u: goto label_2b25c0;
        case 0x2b25c4u: goto label_2b25c4;
        case 0x2b25c8u: goto label_2b25c8;
        case 0x2b25ccu: goto label_2b25cc;
        case 0x2b25d0u: goto label_2b25d0;
        case 0x2b25d4u: goto label_2b25d4;
        case 0x2b25d8u: goto label_2b25d8;
        case 0x2b25dcu: goto label_2b25dc;
        case 0x2b25e0u: goto label_2b25e0;
        case 0x2b25e4u: goto label_2b25e4;
        case 0x2b25e8u: goto label_2b25e8;
        case 0x2b25ecu: goto label_2b25ec;
        case 0x2b25f0u: goto label_2b25f0;
        case 0x2b25f4u: goto label_2b25f4;
        case 0x2b25f8u: goto label_2b25f8;
        case 0x2b25fcu: goto label_2b25fc;
        case 0x2b2600u: goto label_2b2600;
        case 0x2b2604u: goto label_2b2604;
        case 0x2b2608u: goto label_2b2608;
        case 0x2b260cu: goto label_2b260c;
        case 0x2b2610u: goto label_2b2610;
        case 0x2b2614u: goto label_2b2614;
        case 0x2b2618u: goto label_2b2618;
        case 0x2b261cu: goto label_2b261c;
        case 0x2b2620u: goto label_2b2620;
        case 0x2b2624u: goto label_2b2624;
        case 0x2b2628u: goto label_2b2628;
        case 0x2b262cu: goto label_2b262c;
        case 0x2b2630u: goto label_2b2630;
        case 0x2b2634u: goto label_2b2634;
        case 0x2b2638u: goto label_2b2638;
        case 0x2b263cu: goto label_2b263c;
        case 0x2b2640u: goto label_2b2640;
        case 0x2b2644u: goto label_2b2644;
        case 0x2b2648u: goto label_2b2648;
        case 0x2b264cu: goto label_2b264c;
        case 0x2b2650u: goto label_2b2650;
        case 0x2b2654u: goto label_2b2654;
        default: break;
    }

    ctx->pc = 0x2b2158u;

label_2b2158:
    // 0x2b2158: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b2158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b215c:
    // 0x2b215c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2b215cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_2b2160:
    // 0x2b2160: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2b2160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_2b2164:
    // 0x2b2164: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b2164u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b2168:
    // 0x2b2168: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2b2168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2b216c:
    // 0x2b216c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b216cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2170:
    // 0x2b2170: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2b2170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_2b2174:
    // 0x2b2174: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b2174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2178:
    // 0x2b2178: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b2178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2b217c:
    // 0x2b217c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b217cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2180:
    // 0x2b2180: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b2180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2b2184:
    // 0x2b2184: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b2184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b2188:
    // 0x2b2188: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b218c:
    // 0x2b218c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b218cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2b2190:
    // 0x2b2190: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b2190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2194:
    // 0x2b2194: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2b2194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2b2198:
    // 0x2b2198: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b219c:
    if (ctx->pc == 0x2B219Cu) {
        ctx->pc = 0x2B219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2198u;
        // 0x2b219c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21A0u;
        goto label_2b21a0;
    }
    ctx->pc = 0x2B2198u;
    {
        const bool branch_taken_0x2b2198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2198u;
        // 0x2b219c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2198) {
            ctx->pc = 0x2B21B0u;
            goto label_2b21b0;
        }
    }
    ctx->pc = 0x2B21A0u;
label_2b21a0:
    // 0x2b21a0: 0xc0ab2a0  jal         func_2ACA80
label_2b21a4:
    if (ctx->pc == 0x2B21A4u) {
        ctx->pc = 0x2B21A8u;
        goto label_2b21a8;
    }
    ctx->pc = 0x2B21A0u;
    SET_GPR_U32(ctx, 31, 0x2B21A8u);
    ctx->pc = 0x2ACA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACA80u, 0x2B21A0u, 0x2B21A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21A8u;
label_2b21a8:
    // 0x2b21a8: 0x10400120  beqz        $v0, . + 4 + (0x120 << 2)
label_2b21ac:
    if (ctx->pc == 0x2B21ACu) {
        ctx->pc = 0x2B21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21A8u;
        // 0x2b21ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21B0u;
        goto label_2b21b0;
    }
    ctx->pc = 0x2B21A8u;
    {
        const bool branch_taken_0x2b21a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21A8u;
        // 0x2b21ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21a8) {
            ctx->pc = 0x2B262Cu;
            goto label_2b262c;
        }
    }
    ctx->pc = 0x2B21B0u;
label_2b21b0:
    // 0x2b21b0: 0xc0ac604  jal         func_2B1810
label_2b21b4:
    if (ctx->pc == 0x2B21B4u) {
        ctx->pc = 0x2B21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21B0u;
        // 0x2b21b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21B8u;
        goto label_2b21b8;
    }
    ctx->pc = 0x2B21B0u;
    SET_GPR_U32(ctx, 31, 0x2B21B8u);
    ctx->pc = 0x2B21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B21B0u;
    // 0x2b21b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2B21B0u, 0x2B21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21B8u;
label_2b21b8:
    // 0x2b21b8: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2b21b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2b21bc:
    // 0x2b21bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2b21c0:
    if (ctx->pc == 0x2B21C0u) {
        ctx->pc = 0x2B21C4u;
        goto label_2b21c4;
    }
    ctx->pc = 0x2B21BCu;
    {
        const bool branch_taken_0x2b21bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b21bc) {
            ctx->pc = 0x2B2210u;
            goto label_2b2210;
        }
    }
    ctx->pc = 0x2B21C4u;
label_2b21c4:
    // 0x2b21c4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2b21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b21c8:
    // 0x2b21c8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2b21cc:
    if (ctx->pc == 0x2B21CCu) {
        ctx->pc = 0x2B21D0u;
        goto label_2b21d0;
    }
    ctx->pc = 0x2B21C8u;
    {
        const bool branch_taken_0x2b21c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b21c8) {
            ctx->pc = 0x2B2210u;
            goto label_2b2210;
        }
    }
    ctx->pc = 0x2B21D0u;
label_2b21d0:
    // 0x2b21d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b21d4:
    // 0x2b21d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b21d8:
    if (ctx->pc == 0x2B21D8u) {
        ctx->pc = 0x2B21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21D4u;
        // 0x2b21d8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21DCu;
        goto label_2b21dc;
    }
    ctx->pc = 0x2B21D4u;
    {
        const bool branch_taken_0x2b21d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21D4u;
        // 0x2b21d8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21d4) {
            ctx->pc = 0x2B21E8u;
            goto label_2b21e8;
        }
    }
    ctx->pc = 0x2B21DCu;
label_2b21dc:
    // 0x2b21dc: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2b21dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2b21e0:
    // 0x2b21e0: 0x1000010e  b           . + 4 + (0x10E << 2)
label_2b21e4:
    if (ctx->pc == 0x2B21E4u) {
        ctx->pc = 0x2B21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21E0u;
        // 0x2b21e4: 0x2406044d  addiu       $a2, $zero, 0x44D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21E8u;
        goto label_2b21e8;
    }
    ctx->pc = 0x2B21E0u;
    {
        const bool branch_taken_0x2b21e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21E0u;
        // 0x2b21e4: 0x2406044d  addiu       $a2, $zero, 0x44D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21e0) {
            ctx->pc = 0x2B261Cu;
            goto label_2b261c;
        }
    }
    ctx->pc = 0x2B21E8u;
label_2b21e8:
    // 0x2b21e8: 0x40f809  jalr        $v0
label_2b21ec:
    if (ctx->pc == 0x2B21ECu) {
        ctx->pc = 0x2B21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21E8u;
        // 0x2b21ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21F0u;
        goto label_2b21f0;
    }
    ctx->pc = 0x2B21E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B21F0u);
        ctx->pc = 0x2B21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21E8u;
        // 0x2b21ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B21E8u, 0x2B21F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B21F0u;
label_2b21f0:
    // 0x2b21f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b21f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b21f4:
    // 0x2b21f4: 0x600010e  bltz        $s0, . + 4 + (0x10E << 2)
label_2b21f8:
    if (ctx->pc == 0x2B21F8u) {
        ctx->pc = 0x2B21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21F4u;
        // 0x2b21f8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21FCu;
        goto label_2b21fc;
    }
    ctx->pc = 0x2B21F4u;
    {
        const bool branch_taken_0x2b21f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2B21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21F4u;
        // 0x2b21f8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21f4) {
            ctx->pc = 0x2B2630u;
            goto label_2b2630;
        }
    }
    ctx->pc = 0x2B21FCu;
label_2b21fc:
    // 0x2b21fc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2b2200:
    if (ctx->pc == 0x2B2200u) {
        ctx->pc = 0x2B2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21FCu;
        // 0x2b2200: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2204u;
        goto label_2b2204;
    }
    ctx->pc = 0x2B21FCu;
    {
        const bool branch_taken_0x2b21fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21FCu;
        // 0x2b2200: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21fc) {
            ctx->pc = 0x2B2210u;
            goto label_2b2210;
        }
    }
    ctx->pc = 0x2B2204u;
label_2b2204:
    // 0x2b2204: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2b2204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2b2208:
    // 0x2b2208: 0x10000104  b           . + 4 + (0x104 << 2)
label_2b220c:
    if (ctx->pc == 0x2B220Cu) {
        ctx->pc = 0x2B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2208u;
        // 0x2b220c: 0x240600e5  addiu       $a2, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2210u;
        goto label_2b2210;
    }
    ctx->pc = 0x2B2208u;
    {
        const bool branch_taken_0x2b2208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2208u;
        // 0x2b220c: 0x240600e5  addiu       $a2, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2208) {
            ctx->pc = 0x2B261Cu;
            goto label_2b261c;
        }
    }
    ctx->pc = 0x2B2210u;
label_2b2210:
    // 0x2b2210: 0xc0491f2  jal         func_1247C8
label_2b2214:
    if (ctx->pc == 0x2B2214u) {
        ctx->pc = 0x2B2218u;
        goto label_2b2218;
    }
    ctx->pc = 0x2B2210u;
    SET_GPR_U32(ctx, 31, 0x2B2218u);
    ctx->pc = 0x1247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247C8u, 0x2B2210u, 0x2B2218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2218u;
label_2b2218:
    // 0x2b2218: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b2218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2b221c:
    // 0x2b221c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2220:
    // 0x2b2220: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_2b2224:
    if (ctx->pc == 0x2B2224u) {
        ctx->pc = 0x2B2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2220u;
        // 0x2b2224: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2228u;
        goto label_2b2228;
    }
    ctx->pc = 0x2B2220u;
    {
        const bool branch_taken_0x2b2220 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2B2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2220u;
        // 0x2b2224: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2220) {
            ctx->pc = 0x2B2230u;
            goto label_2b2230;
        }
    }
    ctx->pc = 0x2B2228u;
label_2b2228:
    // 0x2b2228: 0x10000100  b           . + 4 + (0x100 << 2)
label_2b222c:
    if (ctx->pc == 0x2B222Cu) {
        ctx->pc = 0x2B222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2228u;
        // 0x2b222c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2230u;
        goto label_2b2230;
    }
    ctx->pc = 0x2B2228u;
    {
        const bool branch_taken_0x2b2228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2228u;
        // 0x2b222c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2228) {
            ctx->pc = 0x2B262Cu;
            goto label_2b262c;
        }
    }
    ctx->pc = 0x2B2230u;
label_2b2230:
    // 0x2b2230: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2b2230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2234:
    // 0x2b2234: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2b2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2b2238:
    // 0x2b2238: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_2b223c:
    if (ctx->pc == 0x2B223Cu) {
        ctx->pc = 0x2B223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2238u;
        // 0x2b223c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2240u;
        goto label_2b2240;
    }
    ctx->pc = 0x2B2238u;
    {
        const bool branch_taken_0x2b2238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2238u;
        // 0x2b223c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2238) {
            ctx->pc = 0x2B2294u;
            goto label_2b2294;
        }
    }
    ctx->pc = 0x2B2240u;
label_2b2240:
    // 0x2b2240: 0x8ca50054  lw          $a1, 0x54($a1)
    ctx->pc = 0x2b2240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_2b2244:
    // 0x2b2244: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2b2244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2b2248:
    // 0x2b2248: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b2248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b224c:
    // 0x2b224c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2b224cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2b2250:
    // 0x2b2250: 0xc049c48  jal         func_127120
label_2b2254:
    if (ctx->pc == 0x2B2254u) {
        ctx->pc = 0x2B2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2250u;
        // 0x2b2254: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2258u;
        goto label_2b2258;
    }
    ctx->pc = 0x2B2250u;
    SET_GPR_U32(ctx, 31, 0x2B2258u);
    ctx->pc = 0x2B2254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2250u;
    // 0x2b2254: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2B2250u, 0x2B2258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2258u;
label_2b2258:
    // 0x2b2258: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b2258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b225c:
    // 0x2b225c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2b225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b2260:
    // 0x2b2260: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2b2260u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b2264:
    // 0x2b2264: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x2b2264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b2268:
    // 0x2b2268: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b2268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b226c:
    // 0x2b226c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2b226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2b2270:
    // 0x2b2270: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b2274:
    // 0x2b2274: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x2b2274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_2b2278:
    // 0x2b2278: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b2278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b227c:
    // 0x2b227c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2b227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b2280:
    // 0x2b2280: 0x144000ea  bnez        $v0, . + 4 + (0xEA << 2)
label_2b2284:
    if (ctx->pc == 0x2B2284u) {
        ctx->pc = 0x2B2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2280u;
        // 0x2b2284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2288u;
        goto label_2b2288;
    }
    ctx->pc = 0x2B2280u;
    {
        const bool branch_taken_0x2b2280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2280u;
        // 0x2b2284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2280) {
            ctx->pc = 0x2B262Cu;
            goto label_2b262c;
        }
    }
    ctx->pc = 0x2B2288u;
label_2b2288:
    // 0x2b2288: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2b2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2b228c:
    // 0x2b228c: 0x100000df  b           . + 4 + (0xDF << 2)
label_2b2290:
    if (ctx->pc == 0x2B2290u) {
        ctx->pc = 0x2B2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B228Cu;
        // 0x2b2290: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2294u;
        goto label_2b2294;
    }
    ctx->pc = 0x2B228Cu;
    {
        const bool branch_taken_0x2b228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B228Cu;
        // 0x2b2290: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b228c) {
            ctx->pc = 0x2B260Cu;
            goto label_2b260c;
        }
    }
    ctx->pc = 0x2B2294u;
label_2b2294:
    // 0x2b2294: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2b2294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2b2298:
    // 0x2b2298: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2b2298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2b229c:
    // 0x2b229c: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
label_2b22a0:
    if (ctx->pc == 0x2B22A0u) {
        ctx->pc = 0x2B22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B229Cu;
        // 0x2b22a0: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22A4u;
        goto label_2b22a4;
    }
    ctx->pc = 0x2B229Cu;
    {
        const bool branch_taken_0x2b229c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B229Cu;
        // 0x2b22a0: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b229c) {
            ctx->pc = 0x2B23DCu;
            goto label_2b23dc;
        }
    }
    ctx->pc = 0x2B22A4u;
label_2b22a4:
    // 0x2b22a4: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x2b22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_2b22a8:
    // 0x2b22a8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_2b22ac:
    if (ctx->pc == 0x2B22ACu) {
        ctx->pc = 0x2B22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22A8u;
        // 0x2b22ac: 0x8e260114  lw          $a2, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22B0u;
        goto label_2b22b0;
    }
    ctx->pc = 0x2B22A8u;
    {
        const bool branch_taken_0x2b22a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b22a8) {
            ctx->pc = 0x2B22ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B22A8u;
            // 0x2b22ac: 0x8e260114  lw          $a2, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2330u;
            goto label_2b2330;
        }
    }
    ctx->pc = 0x2B22B0u;
label_2b22b0:
    // 0x2b22b0: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2b22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2b22b4:
    // 0x2b22b4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2b22b8:
    if (ctx->pc == 0x2B22B8u) {
        ctx->pc = 0x2B22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22B4u;
        // 0x2b22b8: 0x8e260114  lw          $a2, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22BCu;
        goto label_2b22bc;
    }
    ctx->pc = 0x2B22B4u;
    {
        const bool branch_taken_0x2b22b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b22b4) {
            ctx->pc = 0x2B22B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B22B4u;
            // 0x2b22b8: 0x8e260114  lw          $a2, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B22D4u;
            goto label_2b22d4;
        }
    }
    ctx->pc = 0x2B22BCu;
label_2b22bc:
    // 0x2b22bc: 0x8e250114  lw          $a1, 0x114($s1)
    ctx->pc = 0x2b22bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_2b22c0:
    // 0x2b22c0: 0xc0ab2cc  jal         func_2ACB30
label_2b22c4:
    if (ctx->pc == 0x2B22C4u) {
        ctx->pc = 0x2B22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22C0u;
        // 0x2b22c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22C8u;
        goto label_2b22c8;
    }
    ctx->pc = 0x2B22C0u;
    SET_GPR_U32(ctx, 31, 0x2B22C8u);
    ctx->pc = 0x2B22C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B22C0u;
    // 0x2b22c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACB30u, 0x2B22C0u, 0x2B22C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B22C8u;
label_2b22c8:
    // 0x2b22c8: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
label_2b22cc:
    if (ctx->pc == 0x2B22CCu) {
        ctx->pc = 0x2B22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22C8u;
        // 0x2b22cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22D0u;
        goto label_2b22d0;
    }
    ctx->pc = 0x2B22C8u;
    {
        const bool branch_taken_0x2b22c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22C8u;
        // 0x2b22cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22c8) {
            ctx->pc = 0x2B262Cu;
            goto label_2b262c;
        }
    }
    ctx->pc = 0x2B22D0u;
label_2b22d0:
    // 0x2b22d0: 0x8e260114  lw          $a2, 0x114($s1)
    ctx->pc = 0x2b22d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_2b22d4:
    // 0x2b22d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b22d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b22d8:
    // 0x2b22d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b22d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b22dc:
    // 0x2b22dc: 0xc0ac996  jal         func_2B2658
label_2b22e0:
    if (ctx->pc == 0x2B22E0u) {
        ctx->pc = 0x2B22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22DCu;
        // 0x2b22e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22E4u;
        goto label_2b22e4;
    }
    ctx->pc = 0x2B22DCu;
    SET_GPR_U32(ctx, 31, 0x2B22E4u);
    ctx->pc = 0x2B22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B22DCu;
    // 0x2b22e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2658u, 0x2B22DCu, 0x2B22E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B22E4u;
label_2b22e4:
    // 0x2b22e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b22e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b22e8:
    // 0x2b22e8: 0x1a0000d1  blez        $s0, . + 4 + (0xD1 << 2)
label_2b22ec:
    if (ctx->pc == 0x2B22ECu) {
        ctx->pc = 0x2B22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22E8u;
        // 0x2b22ec: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22F0u;
        goto label_2b22f0;
    }
    ctx->pc = 0x2B22E8u;
    {
        const bool branch_taken_0x2b22e8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22E8u;
        // 0x2b22ec: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22e8) {
            ctx->pc = 0x2B2630u;
            goto label_2b2630;
        }
    }
    ctx->pc = 0x2B22F0u;
label_2b22f0:
    // 0x2b22f0: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x2b22f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2b22f4:
    // 0x2b22f4: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x2b22f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_2b22f8:
    // 0x2b22f8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2b22f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2b22fc:
    // 0x2b22fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2b22fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2b2300:
    // 0x2b2300: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b2304:
    if (ctx->pc == 0x2B2304u) {
        ctx->pc = 0x2B2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2300u;
        // 0x2b2304: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2308u;
        goto label_2b2308;
    }
    ctx->pc = 0x2B2300u;
    {
        const bool branch_taken_0x2b2300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2300u;
        // 0x2b2304: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2300) {
            ctx->pc = 0x2B2320u;
            goto label_2b2320;
        }
    }
    ctx->pc = 0x2B2308u;
label_2b2308:
    // 0x2b2308: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x2b2308u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_2b230c:
    // 0x2b230c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2310:
    // 0x2b2310: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_2b2314:
    if (ctx->pc == 0x2B2314u) {
        ctx->pc = 0x2B2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2310u;
        // 0x2b2314: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2318u;
        goto label_2b2318;
    }
    ctx->pc = 0x2B2310u;
    {
        const bool branch_taken_0x2b2310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2310u;
        // 0x2b2314: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2310) {
            ctx->pc = 0x2B2350u;
            goto label_2b2350;
        }
    }
    ctx->pc = 0x2B2318u;
label_2b2318:
    // 0x2b2318: 0x5082000e  beql        $a0, $v0, . + 4 + (0xE << 2)
label_2b231c:
    if (ctx->pc == 0x2B231Cu) {
        ctx->pc = 0x2B231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2318u;
        // 0x2b231c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2320u;
        goto label_2b2320;
    }
    ctx->pc = 0x2B2318u;
    {
        const bool branch_taken_0x2b2318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b2318) {
            ctx->pc = 0x2B231Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2318u;
            // 0x2b231c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2354u;
            goto label_2b2354;
        }
    }
    ctx->pc = 0x2B2320u;
label_2b2320:
    // 0x2b2320: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b2320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b2324:
    // 0x2b2324: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2b2324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2b2328:
    // 0x2b2328: 0x100000bc  b           . + 4 + (0xBC << 2)
label_2b232c:
    if (ctx->pc == 0x2B232Cu) {
        ctx->pc = 0x2B232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2328u;
        // 0x2b232c: 0x240600af  addiu       $a2, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2330u;
        goto label_2b2330;
    }
    ctx->pc = 0x2B2328u;
    {
        const bool branch_taken_0x2b2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2328u;
        // 0x2b232c: 0x240600af  addiu       $a2, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2328) {
            ctx->pc = 0x2B261Cu;
            goto label_2b261c;
        }
    }
    ctx->pc = 0x2B2330u;
label_2b2330:
    // 0x2b2330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2334:
    // 0x2b2334: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b2334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b2338:
    // 0x2b2338: 0xc0ac996  jal         func_2B2658
label_2b233c:
    if (ctx->pc == 0x2B233Cu) {
        ctx->pc = 0x2B233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2338u;
        // 0x2b233c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2340u;
        goto label_2b2340;
    }
    ctx->pc = 0x2B2338u;
    SET_GPR_U32(ctx, 31, 0x2B2340u);
    ctx->pc = 0x2B233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2338u;
    // 0x2b233c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2658u, 0x2B2338u, 0x2B2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2340u;
label_2b2340:
    // 0x2b2340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2344:
    // 0x2b2344: 0x1a0000ba  blez        $s0, . + 4 + (0xBA << 2)
label_2b2348:
    if (ctx->pc == 0x2B2348u) {
        ctx->pc = 0x2B2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2344u;
        // 0x2b2348: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B234Cu;
        goto label_2b234c;
    }
    ctx->pc = 0x2B2344u;
    {
        const bool branch_taken_0x2b2344 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2344u;
        // 0x2b2348: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2344) {
            ctx->pc = 0x2B2630u;
            goto label_2b2630;
        }
    }
    ctx->pc = 0x2B234Cu;
label_2b234c:
    // 0x2b234c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2b234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2b2350:
    // 0x2b2350: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b2350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2354:
    // 0x2b2354: 0x240200f1  addiu       $v0, $zero, 0xF1
    ctx->pc = 0x2b2354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_2b2358:
    // 0x2b2358: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2b2358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_2b235c:
    // 0x2b235c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b2360:
    // 0x2b2360: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2b2360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2b2364:
    // 0x2b2364: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2b2364u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2b2368:
    // 0x2b2368: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x2b2368u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_2b236c:
    // 0x2b236c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2b236cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2b2370:
    // 0x2b2370: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b2370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2374:
    // 0x2b2374: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b2374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2b2378:
    // 0x2b2378: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x2b2378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
label_2b237c:
    // 0x2b237c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2b237cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2b2380:
    // 0x2b2380: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2b2380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2b2384:
    // 0x2b2384: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2b2388:
    if (ctx->pc == 0x2B2388u) {
        ctx->pc = 0x2B2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2384u;
        // 0x2b2388: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B238Cu;
        goto label_2b238c;
    }
    ctx->pc = 0x2B2384u;
    {
        const bool branch_taken_0x2b2384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2384) {
            ctx->pc = 0x2B2388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2384u;
            // 0x2b2388: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B23A8u;
            goto label_2b23a8;
        }
    }
    ctx->pc = 0x2B238Cu;
label_2b238c:
    // 0x2b238c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2390:
    // 0x2b2390: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b2390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2b2394:
    // 0x2b2394: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b2394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2398:
    // 0x2b2398: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2b2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2b239c:
    // 0x2b239c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2b239cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_2b23a0:
    // 0x2b23a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b23a4:
    if (ctx->pc == 0x2B23A4u) {
        ctx->pc = 0x2B23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23A0u;
        // 0x2b23a4: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23A8u;
        goto label_2b23a8;
    }
    ctx->pc = 0x2B23A0u;
    {
        const bool branch_taken_0x2b23a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23A0u;
        // 0x2b23a4: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b23a0) {
            ctx->pc = 0x2B23D4u;
            goto label_2b23d4;
        }
    }
    ctx->pc = 0x2B23A8u;
label_2b23a8:
    // 0x2b23a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b23ac:
    // 0x2b23ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2b23acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2b23b0:
    // 0x2b23b0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b23b4:
    // 0x2b23b4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x2b23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_2b23b8:
    // 0x2b23b8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x2b23b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_2b23bc:
    // 0x2b23bc: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x2b23bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_2b23c0:
    // 0x2b23c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2b23c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2b23c4:
    // 0x2b23c4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b23c8:
    // 0x2b23c8: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x2b23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_2b23cc:
    // 0x2b23cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b23ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2b23d0:
    // 0x2b23d0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2b23d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2b23d4:
    // 0x2b23d4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2b23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2b23d8:
    // 0x2b23d8: 0x240200f1  addiu       $v0, $zero, 0xF1
    ctx->pc = 0x2b23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_2b23dc:
    // 0x2b23dc: 0x1462008d  bne         $v1, $v0, . + 4 + (0x8D << 2)
label_2b23e0:
    if (ctx->pc == 0x2B23E0u) {
        ctx->pc = 0x2B23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23DCu;
        // 0x2b23e0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23E4u;
        goto label_2b23e4;
    }
    ctx->pc = 0x2B23DCu;
    {
        const bool branch_taken_0x2b23dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23DCu;
        // 0x2b23e0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b23dc) {
            ctx->pc = 0x2B2614u;
            goto label_2b2614;
        }
    }
    ctx->pc = 0x2B23E4u;
label_2b23e4:
    // 0x2b23e4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b23e8:
    // 0x2b23e8: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x2b23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_2b23ec:
    // 0x2b23ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b23f0:
    // 0x2b23f0: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x2b23f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_2b23f4:
    // 0x2b23f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2b23f8:
    // 0x2b23f8: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x2b23f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b23fc:
    // 0x2b23fc: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2b23fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2b2400:
    // 0x2b2400: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2b2404:
    if (ctx->pc == 0x2B2404u) {
        ctx->pc = 0x2B2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2400u;
        // 0x2b2404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2408u;
        goto label_2b2408;
    }
    ctx->pc = 0x2B2400u;
    {
        const bool branch_taken_0x2b2400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2400u;
        // 0x2b2404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2400) {
            ctx->pc = 0x2B2418u;
            goto label_2b2418;
        }
    }
    ctx->pc = 0x2B2408u;
label_2b2408:
    // 0x2b2408: 0xc0ab2cc  jal         func_2ACB30
label_2b240c:
    if (ctx->pc == 0x2B240Cu) {
        ctx->pc = 0x2B240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2408u;
        // 0x2b240c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2410u;
        goto label_2b2410;
    }
    ctx->pc = 0x2B2408u;
    SET_GPR_U32(ctx, 31, 0x2B2410u);
    ctx->pc = 0x2B240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2408u;
    // 0x2b240c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACB30u, 0x2B2408u, 0x2B2410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2410u;
label_2b2410:
    // 0x2b2410: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_2b2414:
    if (ctx->pc == 0x2B2414u) {
        ctx->pc = 0x2B2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2410u;
        // 0x2b2414: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2418u;
        goto label_2b2418;
    }
    ctx->pc = 0x2B2410u;
    {
        const bool branch_taken_0x2b2410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2410u;
        // 0x2b2414: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2410) {
            ctx->pc = 0x2B262Cu;
            goto label_2b262c;
        }
    }
    ctx->pc = 0x2B2418u;
label_2b2418:
    // 0x2b2418: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2b2418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2b241c:
    // 0x2b241c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2b241cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2b2420:
    // 0x2b2420: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b2424:
    if (ctx->pc == 0x2B2424u) {
        ctx->pc = 0x2B2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2420u;
        // 0x2b2424: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2428u;
        goto label_2b2428;
    }
    ctx->pc = 0x2B2420u;
    {
        const bool branch_taken_0x2b2420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2420u;
        // 0x2b2424: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2420) {
            ctx->pc = 0x2B2444u;
            goto label_2b2444;
        }
    }
    ctx->pc = 0x2B2428u;
label_2b2428:
    // 0x2b2428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b242c:
    // 0x2b242c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b242cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2430:
    // 0x2b2430: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b2430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2434:
    // 0x2b2434: 0xc0ac996  jal         func_2B2658
label_2b2438:
    if (ctx->pc == 0x2B2438u) {
        ctx->pc = 0x2B2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2434u;
        // 0x2b2438: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B243Cu;
        goto label_2b243c;
    }
    ctx->pc = 0x2B2434u;
    SET_GPR_U32(ctx, 31, 0x2B243Cu);
    ctx->pc = 0x2B2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2434u;
    // 0x2b2438: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2658u, 0x2B2434u, 0x2B243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B243Cu;
label_2b243c:
    // 0x2b243c: 0x1840007c  blez        $v0, . + 4 + (0x7C << 2)
label_2b2440:
    if (ctx->pc == 0x2B2440u) {
        ctx->pc = 0x2B2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B243Cu;
        // 0x2b2440: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2444u;
        goto label_2b2444;
    }
    ctx->pc = 0x2B243Cu;
    {
        const bool branch_taken_0x2b243c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B243Cu;
        // 0x2b2440: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b243c) {
            ctx->pc = 0x2B2630u;
            goto label_2b2630;
        }
    }
    ctx->pc = 0x2B2444u;
label_2b2444:
    // 0x2b2444: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2b2444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2b2448:
    // 0x2b2448: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b2448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b244c:
    // 0x2b244c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2b244cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_2b2450:
    // 0x2b2450: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2b2450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2b2454:
    // 0x2b2454: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2458:
    // 0x2b2458: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b245c:
    if (ctx->pc == 0x2B245Cu) {
        ctx->pc = 0x2B245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2458u;
        // 0x2b245c: 0x24650002  addiu       $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2460u;
        goto label_2b2460;
    }
    ctx->pc = 0x2B2458u;
    {
        const bool branch_taken_0x2b2458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2458u;
        // 0x2b245c: 0x24650002  addiu       $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2458) {
            ctx->pc = 0x2B2470u;
            goto label_2b2470;
        }
    }
    ctx->pc = 0x2B2460u;
label_2b2460:
    // 0x2b2460: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2b2460u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2b2464:
    // 0x2b2464: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x2b2464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_2b2468:
    // 0x2b2468: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b246c:
    if (ctx->pc == 0x2B246Cu) {
        ctx->pc = 0x2B246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2468u;
        // 0x2b246c: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2470u;
        goto label_2b2470;
    }
    ctx->pc = 0x2B2468u;
    {
        const bool branch_taken_0x2b2468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2468u;
        // 0x2b246c: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2468) {
            ctx->pc = 0x2B2474u;
            goto label_2b2474;
        }
    }
    ctx->pc = 0x2B2470u;
label_2b2470:
    // 0x2b2470: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2b2470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_2b2474:
    // 0x2b2474: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b2474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2478:
    // 0x2b2478: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b2478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b247c:
    // 0x2b247c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2b2480:
    if (ctx->pc == 0x2B2480u) {
        ctx->pc = 0x2B2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B247Cu;
        // 0x2b2480: 0x8e330068  lw          $s3, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2484u;
        goto label_2b2484;
    }
    ctx->pc = 0x2B247Cu;
    {
        const bool branch_taken_0x2b247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b247c) {
            ctx->pc = 0x2B2480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B247Cu;
            // 0x2b2480: 0x8e330068  lw          $s3, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B249Cu;
            goto label_2b249c;
        }
    }
    ctx->pc = 0x2B2484u;
label_2b2484:
    // 0x2b2484: 0xac65005c  sw          $a1, 0x5C($v1)
    ctx->pc = 0x2b2484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 5));
label_2b2488:
    // 0x2b2488: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b2488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b248c:
    // 0x2b248c: 0xac450054  sw          $a1, 0x54($v0)
    ctx->pc = 0x2b248cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
label_2b2490:
    // 0x2b2490: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b2490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2494:
    // 0x2b2494: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b2498:
    if (ctx->pc == 0x2B2498u) {
        ctx->pc = 0x2B2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2494u;
        // 0x2b2498: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B249Cu;
        goto label_2b249c;
    }
    ctx->pc = 0x2B2494u;
    {
        const bool branch_taken_0x2b2494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2494u;
        // 0x2b2498: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2494) {
            ctx->pc = 0x2B24C8u;
            goto label_2b24c8;
        }
    }
    ctx->pc = 0x2B249Cu;
label_2b249c:
    // 0x2b249c: 0xac65005c  sw          $a1, 0x5C($v1)
    ctx->pc = 0x2b249cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 5));
label_2b24a0:
    // 0x2b24a0: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x2b24a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2b24a4:
    // 0x2b24a4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b24a8:
    // 0x2b24a8: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x2b24a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
label_2b24ac:
    // 0x2b24ac: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b24acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b24b0:
    // 0x2b24b0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2b24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2b24b4:
    // 0x2b24b4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2b24b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2b24b8:
    // 0x2b24b8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2b24bc:
    // 0x2b24bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2b24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2b24c0:
    // 0x2b24c0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2b24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b24c4:
    // 0x2b24c4: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x2b24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_2b24c8:
    // 0x2b24c8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b24cc:
    // 0x2b24cc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x2b24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2b24d0:
    // 0x2b24d0: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x2b24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_2b24d4:
    // 0x2b24d4: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2b24d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b24d8:
    // 0x2b24d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2b24dc:
    // 0x2b24dc: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_2b24e0:
    if (ctx->pc == 0x2B24E0u) {
        ctx->pc = 0x2B24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24DCu;
        // 0x2b24e0: 0xdca200d8  ld          $v0, 0xD8($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24E4u;
        goto label_2b24e4;
    }
    ctx->pc = 0x2B24DCu;
    {
        const bool branch_taken_0x2b24dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b24dc) {
            ctx->pc = 0x2B24E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B24DCu;
            // 0x2b24e0: 0xdca200d8  ld          $v0, 0xD8($a1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2588u;
            goto label_2b2588;
        }
    }
    ctx->pc = 0x2B24E4u;
label_2b24e4:
    // 0x2b24e4: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x2b24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_2b24e8:
    // 0x2b24e8: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x2b24e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2b24ec:
    // 0x2b24ec: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_2b24f0:
    if (ctx->pc == 0x2B24F0u) {
        ctx->pc = 0x2B24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24ECu;
        // 0x2b24f0: 0xdca200d8  ld          $v0, 0xD8($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24F4u;
        goto label_2b24f4;
    }
    ctx->pc = 0x2B24ECu;
    {
        const bool branch_taken_0x2b24ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b24ec) {
            ctx->pc = 0x2B24F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B24ECu;
            // 0x2b24f0: 0xdca200d8  ld          $v0, 0xD8($a1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2588u;
            goto label_2b2588;
        }
    }
    ctx->pc = 0x2B24F4u;
label_2b24f4:
    // 0x2b24f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b24f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b24f8:
    // 0x2b24f8: 0xc0ab100  jal         func_2AC400
label_2b24fc:
    if (ctx->pc == 0x2B24FCu) {
        ctx->pc = 0x2B24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24F8u;
        // 0x2b24fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2500u;
        goto label_2b2500;
    }
    ctx->pc = 0x2B24F8u;
    SET_GPR_U32(ctx, 31, 0x2B2500u);
    ctx->pc = 0x2B24FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24F8u;
    // 0x2b24fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC400u, 0x2B24F8u, 0x2B2500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2500u;
label_2b2500:
    // 0x2b2500: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b2500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2504:
    // 0x2b2504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2508:
    // 0x2b2508: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b2508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b250c:
    // 0x2b250c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b250cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2510:
    // 0x2b2510: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2b2510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b2514:
    // 0x2b2514: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2b2514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2b2518:
    // 0x2b2518: 0xc0ab12a  jal         func_2AC4A8
label_2b251c:
    if (ctx->pc == 0x2B251Cu) {
        ctx->pc = 0x2B251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2518u;
        // 0x2b251c: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2520u;
        goto label_2b2520;
    }
    ctx->pc = 0x2B2518u;
    SET_GPR_U32(ctx, 31, 0x2B2520u);
    ctx->pc = 0x2B251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2518u;
    // 0x2b251c: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC4A8u, 0x2B2518u, 0x2B2520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2520u;
label_2b2520:
    // 0x2b2520: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2b2520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2524:
    // 0x2b2524: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b2524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b2528:
    // 0x2b2528: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b2528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b252c:
    // 0x2b252c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2b252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2b2530:
    // 0x2b2530: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x2b2530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2b2534:
    // 0x2b2534: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2b2534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b2538:
    // 0x2b2538: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x2b2538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
label_2b253c:
    // 0x2b253c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b253cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b2540:
    // 0x2b2540: 0xc049c22  jal         func_127088
label_2b2544:
    if (ctx->pc == 0x2B2544u) {
        ctx->pc = 0x2B2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2540u;
        // 0x2b2544: 0x8c65005c  lw          $a1, 0x5C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2548u;
        goto label_2b2548;
    }
    ctx->pc = 0x2B2540u;
    SET_GPR_U32(ctx, 31, 0x2B2548u);
    ctx->pc = 0x2B2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2540u;
    // 0x2b2544: 0x8c65005c  lw          $a1, 0x5C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2B2540u, 0x2B2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2548u;
label_2b2548:
    // 0x2b2548: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2b254c:
    if (ctx->pc == 0x2B254Cu) {
        ctx->pc = 0x2B254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2548u;
        // 0x2b254c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2550u;
        goto label_2b2550;
    }
    ctx->pc = 0x2B2548u;
    {
        const bool branch_taken_0x2b2548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2548u;
        // 0x2b254c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2548) {
            ctx->pc = 0x2B2578u;
            goto label_2b2578;
        }
    }
    ctx->pc = 0x2B2550u;
label_2b2550:
    // 0x2b2550: 0xc0a5b08  jal         func_296C20
label_2b2554:
    if (ctx->pc == 0x2B2554u) {
        ctx->pc = 0x2B2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2550u;
        // 0x2b2554: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2558u;
        goto label_2b2558;
    }
    ctx->pc = 0x2B2550u;
    SET_GPR_U32(ctx, 31, 0x2B2558u);
    ctx->pc = 0x2B2554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2550u;
    // 0x2b2554: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C20u, 0x2B2550u, 0x2B2558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2558u;
label_2b2558:
    // 0x2b2558: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2b2558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b255c:
    // 0x2b255c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2b2560:
    if (ctx->pc == 0x2B2560u) {
        ctx->pc = 0x2B2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B255Cu;
        // 0x2b2560: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2564u;
        goto label_2b2564;
    }
    ctx->pc = 0x2B255Cu;
    {
        const bool branch_taken_0x2b255c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b255c) {
            ctx->pc = 0x2B2560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B255Cu;
            // 0x2b2560: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2564u;
            goto label_2b2564;
        }
    }
    ctx->pc = 0x2B2564u;
label_2b2564:
    // 0x2b2564: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x2b2564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_2b2568:
    // 0x2b2568: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2b2568u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2b256c:
    // 0x2b256c: 0x2010  mfhi        $a0
    ctx->pc = 0x2b256cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b2570:
    // 0x2b2570: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2b2574:
    if (ctx->pc == 0x2B2574u) {
        ctx->pc = 0x2B2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2570u;
        // 0x2b2574: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2578u;
        goto label_2b2578;
    }
    ctx->pc = 0x2B2570u;
    {
        const bool branch_taken_0x2b2570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2570u;
        // 0x2b2574: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2570) {
            ctx->pc = 0x2B2584u;
            goto label_2b2584;
        }
    }
    ctx->pc = 0x2B2578u;
label_2b2578:
    // 0x2b2578: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2b2578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2b257c:
    // 0x2b257c: 0x10000027  b           . + 4 + (0x27 << 2)
label_2b2580:
    if (ctx->pc == 0x2B2580u) {
        ctx->pc = 0x2B2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B257Cu;
        // 0x2b2580: 0x24060071  addiu       $a2, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2584u;
        goto label_2b2584;
    }
    ctx->pc = 0x2B257Cu;
    {
        const bool branch_taken_0x2b257c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B257Cu;
        // 0x2b2580: 0x24060071  addiu       $a2, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b257c) {
            ctx->pc = 0x2B261Cu;
            goto label_2b261c;
        }
    }
    ctx->pc = 0x2B2584u;
label_2b2584:
    // 0x2b2584: 0xdca200d8  ld          $v0, 0xD8($a1)
    ctx->pc = 0x2b2584u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 216)));
label_2b2588:
    // 0x2b2588: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b2588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2b258c:
    // 0x2b258c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2b258cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2b2590:
    // 0x2b2590: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2b2590u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_2b2594:
    // 0x2b2594: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b2598:
    // 0x2b2598: 0xfca200d8  sd          $v0, 0xD8($a1)
    ctx->pc = 0x2b2598u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 216), GPR_U64(ctx, 2));
label_2b259c:
    // 0x2b259c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2b259cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b25a0:
    // 0x2b25a0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2b25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b25a4:
    // 0x2b25a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b25a8:
    if (ctx->pc == 0x2B25A8u) {
        ctx->pc = 0x2B25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25A4u;
        // 0x2b25a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25ACu;
        goto label_2b25ac;
    }
    ctx->pc = 0x2B25A4u;
    {
        const bool branch_taken_0x2b25a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25A4u;
        // 0x2b25a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25a4) {
            ctx->pc = 0x2B25B4u;
            goto label_2b25b4;
        }
    }
    ctx->pc = 0x2B25ACu;
label_2b25ac:
    // 0x2b25ac: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2b25b0:
    if (ctx->pc == 0x2B25B0u) {
        ctx->pc = 0x2B25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25ACu;
        // 0x2b25b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25B4u;
        goto label_2b25b4;
    }
    ctx->pc = 0x2B25ACu;
    {
        const bool branch_taken_0x2b25ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25ACu;
        // 0x2b25b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25ac) {
            ctx->pc = 0x2B262Cu;
            goto label_2b262c;
        }
    }
    ctx->pc = 0x2B25B4u;
label_2b25b4:
    // 0x2b25b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b25b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b25b8:
    // 0x2b25b8: 0xc0ac856  jal         func_2B2158
label_2b25bc:
    if (ctx->pc == 0x2B25BCu) {
        ctx->pc = 0x2B25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25B8u;
        // 0x2b25bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25C0u;
        goto label_2b25c0;
    }
    ctx->pc = 0x2B25B8u;
    SET_GPR_U32(ctx, 31, 0x2B25C0u);
    ctx->pc = 0x2B25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25B8u;
    // 0x2b25bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    goto label_2b2158;
    ctx->pc = 0x2B25C0u;
label_2b25c0:
    // 0x2b25c0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2b25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b25c4:
    // 0x2b25c4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_2b25c8:
    if (ctx->pc == 0x2B25C8u) {
        ctx->pc = 0x2B25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25C4u;
        // 0x2b25c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25CCu;
        goto label_2b25cc;
    }
    ctx->pc = 0x2B25C4u;
    {
        const bool branch_taken_0x2b25c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25C4u;
        // 0x2b25c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25c4) {
            ctx->pc = 0x2B260Cu;
            goto label_2b260c;
        }
    }
    ctx->pc = 0x2B25CCu;
label_2b25cc:
    // 0x2b25cc: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x2b25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_2b25d0:
    // 0x2b25d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b25d4:
    if (ctx->pc == 0x2B25D4u) {
        ctx->pc = 0x2B25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25D0u;
        // 0x2b25d4: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25D8u;
        goto label_2b25d8;
    }
    ctx->pc = 0x2B25D0u;
    {
        const bool branch_taken_0x2b25d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b25d0) {
            ctx->pc = 0x2B25D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B25D0u;
            // 0x2b25d4: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B25E4u;
            goto label_2b25e4;
        }
    }
    ctx->pc = 0x2B25D8u;
label_2b25d8:
    // 0x2b25d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b25d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b25dc:
    // 0x2b25dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b25e0:
    if (ctx->pc == 0x2B25E0u) {
        ctx->pc = 0x2B25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25DCu;
        // 0x2b25e0: 0x8e3500d0  lw          $s5, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25E4u;
        goto label_2b25e4;
    }
    ctx->pc = 0x2B25DCu;
    {
        const bool branch_taken_0x2b25dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25DCu;
        // 0x2b25e0: 0x8e3500d0  lw          $s5, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25dc) {
            ctx->pc = 0x2B25F8u;
            goto label_2b25f8;
        }
    }
    ctx->pc = 0x2B25E4u;
label_2b25e4:
    // 0x2b25e4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2b25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_2b25e8:
    // 0x2b25e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b25ec:
    if (ctx->pc == 0x2B25ECu) {
        ctx->pc = 0x2B25F0u;
        goto label_2b25f0;
    }
    ctx->pc = 0x2B25E8u;
    {
        const bool branch_taken_0x2b25e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b25e8) {
            ctx->pc = 0x2B25F8u;
            goto label_2b25f8;
        }
    }
    ctx->pc = 0x2B25F0u;
label_2b25f0:
    // 0x2b25f0: 0x8c55008c  lw          $s5, 0x8C($v0)
    ctx->pc = 0x2b25f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2b25f4:
    // 0x2b25f4: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2b25f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b25f8:
    // 0x2b25f8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2b25fc:
    if (ctx->pc == 0x2B25FCu) {
        ctx->pc = 0x2B25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25F8u;
        // 0x2b25fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2600u;
        goto label_2b2600;
    }
    ctx->pc = 0x2B25F8u;
    {
        const bool branch_taken_0x2b25f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25F8u;
        // 0x2b25fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25f8) {
            ctx->pc = 0x2B260Cu;
            goto label_2b260c;
        }
    }
    ctx->pc = 0x2B2600u;
label_2b2600:
    // 0x2b2600: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b2600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b2604:
    // 0x2b2604: 0x280f809  jalr        $s4
label_2b2608:
    if (ctx->pc == 0x2B2608u) {
        ctx->pc = 0x2B2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2604u;
        // 0x2b2608: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B260Cu;
        goto label_2b260c;
    }
    ctx->pc = 0x2B2604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2B260Cu);
        ctx->pc = 0x2B2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2604u;
        // 0x2b2608: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2604u, 0x2B260Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B260Cu;
label_2b260c:
    // 0x2b260c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b2610:
    if (ctx->pc == 0x2B2610u) {
        ctx->pc = 0x2B2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B260Cu;
        // 0x2b2610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2614u;
        goto label_2b2614;
    }
    ctx->pc = 0x2B260Cu;
    {
        const bool branch_taken_0x2b260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B260Cu;
        // 0x2b2610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b260c) {
            ctx->pc = 0x2B262Cu;
            goto label_2b262c;
        }
    }
    ctx->pc = 0x2B2614u;
label_2b2614:
    // 0x2b2614: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2b2614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2b2618:
    // 0x2b2618: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x2b2618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2b261c:
    // 0x2b261c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b261cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2620:
    // 0x2b2620: 0xc0a5648  jal         func_295920
label_2b2624:
    if (ctx->pc == 0x2B2624u) {
        ctx->pc = 0x2B2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2620u;
        // 0x2b2624: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2628u;
        goto label_2b2628;
    }
    ctx->pc = 0x2B2620u;
    SET_GPR_U32(ctx, 31, 0x2B2628u);
    ctx->pc = 0x2B2624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2620u;
    // 0x2b2624: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B2620u, 0x2B2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2628u;
label_2b2628:
    // 0x2b2628: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b2628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b262c:
    // 0x2b262c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b2630:
    // 0x2b2630: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2b2630u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b2634:
    // 0x2b2634: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2b2634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b2638:
    // 0x2b2638: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2b2638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b263c:
    // 0x2b263c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2b263cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b2640:
    // 0x2b2640: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b2640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b2644:
    // 0x2b2644: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b2644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b2648:
    // 0x2b2648: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b2648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b264c:
    // 0x2b264c: 0x3e00008  jr          $ra
label_2b2650:
    if (ctx->pc == 0x2B2650u) {
        ctx->pc = 0x2B2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B264Cu;
        // 0x2b2650: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2654u;
        goto label_2b2654;
    }
    ctx->pc = 0x2B264Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B264Cu;
        // 0x2b2650: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B264Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2654u;
label_2b2654:
    // 0x2b2654: 0x0  nop
    ctx->pc = 0x2b2654u;
    // NOP
    if (ctx->pc == 0x2b2654u) { ctx->pc = 0x2b2658u; }
}
