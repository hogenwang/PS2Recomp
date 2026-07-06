#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032A250
// Address: 0x32a250 - 0x32a740
void sub_0032A250_0x32a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A250_0x32a250");
#endif

    switch (ctx->pc) {
        case 0x32a250u: goto label_32a250;
        case 0x32a254u: goto label_32a254;
        case 0x32a258u: goto label_32a258;
        case 0x32a25cu: goto label_32a25c;
        case 0x32a260u: goto label_32a260;
        case 0x32a264u: goto label_32a264;
        case 0x32a268u: goto label_32a268;
        case 0x32a26cu: goto label_32a26c;
        case 0x32a270u: goto label_32a270;
        case 0x32a274u: goto label_32a274;
        case 0x32a278u: goto label_32a278;
        case 0x32a27cu: goto label_32a27c;
        case 0x32a280u: goto label_32a280;
        case 0x32a284u: goto label_32a284;
        case 0x32a288u: goto label_32a288;
        case 0x32a28cu: goto label_32a28c;
        case 0x32a290u: goto label_32a290;
        case 0x32a294u: goto label_32a294;
        case 0x32a298u: goto label_32a298;
        case 0x32a29cu: goto label_32a29c;
        case 0x32a2a0u: goto label_32a2a0;
        case 0x32a2a4u: goto label_32a2a4;
        case 0x32a2a8u: goto label_32a2a8;
        case 0x32a2acu: goto label_32a2ac;
        case 0x32a2b0u: goto label_32a2b0;
        case 0x32a2b4u: goto label_32a2b4;
        case 0x32a2b8u: goto label_32a2b8;
        case 0x32a2bcu: goto label_32a2bc;
        case 0x32a2c0u: goto label_32a2c0;
        case 0x32a2c4u: goto label_32a2c4;
        case 0x32a2c8u: goto label_32a2c8;
        case 0x32a2ccu: goto label_32a2cc;
        case 0x32a2d0u: goto label_32a2d0;
        case 0x32a2d4u: goto label_32a2d4;
        case 0x32a2d8u: goto label_32a2d8;
        case 0x32a2dcu: goto label_32a2dc;
        case 0x32a2e0u: goto label_32a2e0;
        case 0x32a2e4u: goto label_32a2e4;
        case 0x32a2e8u: goto label_32a2e8;
        case 0x32a2ecu: goto label_32a2ec;
        case 0x32a2f0u: goto label_32a2f0;
        case 0x32a2f4u: goto label_32a2f4;
        case 0x32a2f8u: goto label_32a2f8;
        case 0x32a2fcu: goto label_32a2fc;
        case 0x32a300u: goto label_32a300;
        case 0x32a304u: goto label_32a304;
        case 0x32a308u: goto label_32a308;
        case 0x32a30cu: goto label_32a30c;
        case 0x32a310u: goto label_32a310;
        case 0x32a314u: goto label_32a314;
        case 0x32a318u: goto label_32a318;
        case 0x32a31cu: goto label_32a31c;
        case 0x32a320u: goto label_32a320;
        case 0x32a324u: goto label_32a324;
        case 0x32a328u: goto label_32a328;
        case 0x32a32cu: goto label_32a32c;
        case 0x32a330u: goto label_32a330;
        case 0x32a334u: goto label_32a334;
        case 0x32a338u: goto label_32a338;
        case 0x32a33cu: goto label_32a33c;
        case 0x32a340u: goto label_32a340;
        case 0x32a344u: goto label_32a344;
        case 0x32a348u: goto label_32a348;
        case 0x32a34cu: goto label_32a34c;
        case 0x32a350u: goto label_32a350;
        case 0x32a354u: goto label_32a354;
        case 0x32a358u: goto label_32a358;
        case 0x32a35cu: goto label_32a35c;
        case 0x32a360u: goto label_32a360;
        case 0x32a364u: goto label_32a364;
        case 0x32a368u: goto label_32a368;
        case 0x32a36cu: goto label_32a36c;
        case 0x32a370u: goto label_32a370;
        case 0x32a374u: goto label_32a374;
        case 0x32a378u: goto label_32a378;
        case 0x32a37cu: goto label_32a37c;
        case 0x32a380u: goto label_32a380;
        case 0x32a384u: goto label_32a384;
        case 0x32a388u: goto label_32a388;
        case 0x32a38cu: goto label_32a38c;
        case 0x32a390u: goto label_32a390;
        case 0x32a394u: goto label_32a394;
        case 0x32a398u: goto label_32a398;
        case 0x32a39cu: goto label_32a39c;
        case 0x32a3a0u: goto label_32a3a0;
        case 0x32a3a4u: goto label_32a3a4;
        case 0x32a3a8u: goto label_32a3a8;
        case 0x32a3acu: goto label_32a3ac;
        case 0x32a3b0u: goto label_32a3b0;
        case 0x32a3b4u: goto label_32a3b4;
        case 0x32a3b8u: goto label_32a3b8;
        case 0x32a3bcu: goto label_32a3bc;
        case 0x32a3c0u: goto label_32a3c0;
        case 0x32a3c4u: goto label_32a3c4;
        case 0x32a3c8u: goto label_32a3c8;
        case 0x32a3ccu: goto label_32a3cc;
        case 0x32a3d0u: goto label_32a3d0;
        case 0x32a3d4u: goto label_32a3d4;
        case 0x32a3d8u: goto label_32a3d8;
        case 0x32a3dcu: goto label_32a3dc;
        case 0x32a3e0u: goto label_32a3e0;
        case 0x32a3e4u: goto label_32a3e4;
        case 0x32a3e8u: goto label_32a3e8;
        case 0x32a3ecu: goto label_32a3ec;
        case 0x32a3f0u: goto label_32a3f0;
        case 0x32a3f4u: goto label_32a3f4;
        case 0x32a3f8u: goto label_32a3f8;
        case 0x32a3fcu: goto label_32a3fc;
        case 0x32a400u: goto label_32a400;
        case 0x32a404u: goto label_32a404;
        case 0x32a408u: goto label_32a408;
        case 0x32a40cu: goto label_32a40c;
        case 0x32a410u: goto label_32a410;
        case 0x32a414u: goto label_32a414;
        case 0x32a418u: goto label_32a418;
        case 0x32a41cu: goto label_32a41c;
        case 0x32a420u: goto label_32a420;
        case 0x32a424u: goto label_32a424;
        case 0x32a428u: goto label_32a428;
        case 0x32a42cu: goto label_32a42c;
        case 0x32a430u: goto label_32a430;
        case 0x32a434u: goto label_32a434;
        case 0x32a438u: goto label_32a438;
        case 0x32a43cu: goto label_32a43c;
        case 0x32a440u: goto label_32a440;
        case 0x32a444u: goto label_32a444;
        case 0x32a448u: goto label_32a448;
        case 0x32a44cu: goto label_32a44c;
        case 0x32a450u: goto label_32a450;
        case 0x32a454u: goto label_32a454;
        case 0x32a458u: goto label_32a458;
        case 0x32a45cu: goto label_32a45c;
        case 0x32a460u: goto label_32a460;
        case 0x32a464u: goto label_32a464;
        case 0x32a468u: goto label_32a468;
        case 0x32a46cu: goto label_32a46c;
        case 0x32a470u: goto label_32a470;
        case 0x32a474u: goto label_32a474;
        case 0x32a478u: goto label_32a478;
        case 0x32a47cu: goto label_32a47c;
        case 0x32a480u: goto label_32a480;
        case 0x32a484u: goto label_32a484;
        case 0x32a488u: goto label_32a488;
        case 0x32a48cu: goto label_32a48c;
        case 0x32a490u: goto label_32a490;
        case 0x32a494u: goto label_32a494;
        case 0x32a498u: goto label_32a498;
        case 0x32a49cu: goto label_32a49c;
        case 0x32a4a0u: goto label_32a4a0;
        case 0x32a4a4u: goto label_32a4a4;
        case 0x32a4a8u: goto label_32a4a8;
        case 0x32a4acu: goto label_32a4ac;
        case 0x32a4b0u: goto label_32a4b0;
        case 0x32a4b4u: goto label_32a4b4;
        case 0x32a4b8u: goto label_32a4b8;
        case 0x32a4bcu: goto label_32a4bc;
        case 0x32a4c0u: goto label_32a4c0;
        case 0x32a4c4u: goto label_32a4c4;
        case 0x32a4c8u: goto label_32a4c8;
        case 0x32a4ccu: goto label_32a4cc;
        case 0x32a4d0u: goto label_32a4d0;
        case 0x32a4d4u: goto label_32a4d4;
        case 0x32a4d8u: goto label_32a4d8;
        case 0x32a4dcu: goto label_32a4dc;
        case 0x32a4e0u: goto label_32a4e0;
        case 0x32a4e4u: goto label_32a4e4;
        case 0x32a4e8u: goto label_32a4e8;
        case 0x32a4ecu: goto label_32a4ec;
        case 0x32a4f0u: goto label_32a4f0;
        case 0x32a4f4u: goto label_32a4f4;
        case 0x32a4f8u: goto label_32a4f8;
        case 0x32a4fcu: goto label_32a4fc;
        case 0x32a500u: goto label_32a500;
        case 0x32a504u: goto label_32a504;
        case 0x32a508u: goto label_32a508;
        case 0x32a50cu: goto label_32a50c;
        case 0x32a510u: goto label_32a510;
        case 0x32a514u: goto label_32a514;
        case 0x32a518u: goto label_32a518;
        case 0x32a51cu: goto label_32a51c;
        case 0x32a520u: goto label_32a520;
        case 0x32a524u: goto label_32a524;
        case 0x32a528u: goto label_32a528;
        case 0x32a52cu: goto label_32a52c;
        case 0x32a530u: goto label_32a530;
        case 0x32a534u: goto label_32a534;
        case 0x32a538u: goto label_32a538;
        case 0x32a53cu: goto label_32a53c;
        case 0x32a540u: goto label_32a540;
        case 0x32a544u: goto label_32a544;
        case 0x32a548u: goto label_32a548;
        case 0x32a54cu: goto label_32a54c;
        case 0x32a550u: goto label_32a550;
        case 0x32a554u: goto label_32a554;
        case 0x32a558u: goto label_32a558;
        case 0x32a55cu: goto label_32a55c;
        case 0x32a560u: goto label_32a560;
        case 0x32a564u: goto label_32a564;
        case 0x32a568u: goto label_32a568;
        case 0x32a56cu: goto label_32a56c;
        case 0x32a570u: goto label_32a570;
        case 0x32a574u: goto label_32a574;
        case 0x32a578u: goto label_32a578;
        case 0x32a57cu: goto label_32a57c;
        case 0x32a580u: goto label_32a580;
        case 0x32a584u: goto label_32a584;
        case 0x32a588u: goto label_32a588;
        case 0x32a58cu: goto label_32a58c;
        case 0x32a590u: goto label_32a590;
        case 0x32a594u: goto label_32a594;
        case 0x32a598u: goto label_32a598;
        case 0x32a59cu: goto label_32a59c;
        case 0x32a5a0u: goto label_32a5a0;
        case 0x32a5a4u: goto label_32a5a4;
        case 0x32a5a8u: goto label_32a5a8;
        case 0x32a5acu: goto label_32a5ac;
        case 0x32a5b0u: goto label_32a5b0;
        case 0x32a5b4u: goto label_32a5b4;
        case 0x32a5b8u: goto label_32a5b8;
        case 0x32a5bcu: goto label_32a5bc;
        case 0x32a5c0u: goto label_32a5c0;
        case 0x32a5c4u: goto label_32a5c4;
        case 0x32a5c8u: goto label_32a5c8;
        case 0x32a5ccu: goto label_32a5cc;
        case 0x32a5d0u: goto label_32a5d0;
        case 0x32a5d4u: goto label_32a5d4;
        case 0x32a5d8u: goto label_32a5d8;
        case 0x32a5dcu: goto label_32a5dc;
        case 0x32a5e0u: goto label_32a5e0;
        case 0x32a5e4u: goto label_32a5e4;
        case 0x32a5e8u: goto label_32a5e8;
        case 0x32a5ecu: goto label_32a5ec;
        case 0x32a5f0u: goto label_32a5f0;
        case 0x32a5f4u: goto label_32a5f4;
        case 0x32a5f8u: goto label_32a5f8;
        case 0x32a5fcu: goto label_32a5fc;
        case 0x32a600u: goto label_32a600;
        case 0x32a604u: goto label_32a604;
        case 0x32a608u: goto label_32a608;
        case 0x32a60cu: goto label_32a60c;
        case 0x32a610u: goto label_32a610;
        case 0x32a614u: goto label_32a614;
        case 0x32a618u: goto label_32a618;
        case 0x32a61cu: goto label_32a61c;
        case 0x32a620u: goto label_32a620;
        case 0x32a624u: goto label_32a624;
        case 0x32a628u: goto label_32a628;
        case 0x32a62cu: goto label_32a62c;
        case 0x32a630u: goto label_32a630;
        case 0x32a634u: goto label_32a634;
        case 0x32a638u: goto label_32a638;
        case 0x32a63cu: goto label_32a63c;
        case 0x32a640u: goto label_32a640;
        case 0x32a644u: goto label_32a644;
        case 0x32a648u: goto label_32a648;
        case 0x32a64cu: goto label_32a64c;
        case 0x32a650u: goto label_32a650;
        case 0x32a654u: goto label_32a654;
        case 0x32a658u: goto label_32a658;
        case 0x32a65cu: goto label_32a65c;
        case 0x32a660u: goto label_32a660;
        case 0x32a664u: goto label_32a664;
        case 0x32a668u: goto label_32a668;
        case 0x32a66cu: goto label_32a66c;
        case 0x32a670u: goto label_32a670;
        case 0x32a674u: goto label_32a674;
        case 0x32a678u: goto label_32a678;
        case 0x32a67cu: goto label_32a67c;
        case 0x32a680u: goto label_32a680;
        case 0x32a684u: goto label_32a684;
        case 0x32a688u: goto label_32a688;
        case 0x32a68cu: goto label_32a68c;
        case 0x32a690u: goto label_32a690;
        case 0x32a694u: goto label_32a694;
        case 0x32a698u: goto label_32a698;
        case 0x32a69cu: goto label_32a69c;
        case 0x32a6a0u: goto label_32a6a0;
        case 0x32a6a4u: goto label_32a6a4;
        case 0x32a6a8u: goto label_32a6a8;
        case 0x32a6acu: goto label_32a6ac;
        case 0x32a6b0u: goto label_32a6b0;
        case 0x32a6b4u: goto label_32a6b4;
        case 0x32a6b8u: goto label_32a6b8;
        case 0x32a6bcu: goto label_32a6bc;
        case 0x32a6c0u: goto label_32a6c0;
        case 0x32a6c4u: goto label_32a6c4;
        case 0x32a6c8u: goto label_32a6c8;
        case 0x32a6ccu: goto label_32a6cc;
        case 0x32a6d0u: goto label_32a6d0;
        case 0x32a6d4u: goto label_32a6d4;
        case 0x32a6d8u: goto label_32a6d8;
        case 0x32a6dcu: goto label_32a6dc;
        case 0x32a6e0u: goto label_32a6e0;
        case 0x32a6e4u: goto label_32a6e4;
        case 0x32a6e8u: goto label_32a6e8;
        case 0x32a6ecu: goto label_32a6ec;
        case 0x32a6f0u: goto label_32a6f0;
        case 0x32a6f4u: goto label_32a6f4;
        case 0x32a6f8u: goto label_32a6f8;
        case 0x32a6fcu: goto label_32a6fc;
        case 0x32a700u: goto label_32a700;
        case 0x32a704u: goto label_32a704;
        case 0x32a708u: goto label_32a708;
        case 0x32a70cu: goto label_32a70c;
        case 0x32a710u: goto label_32a710;
        case 0x32a714u: goto label_32a714;
        case 0x32a718u: goto label_32a718;
        case 0x32a71cu: goto label_32a71c;
        case 0x32a720u: goto label_32a720;
        case 0x32a724u: goto label_32a724;
        case 0x32a728u: goto label_32a728;
        case 0x32a72cu: goto label_32a72c;
        case 0x32a730u: goto label_32a730;
        case 0x32a734u: goto label_32a734;
        case 0x32a738u: goto label_32a738;
        case 0x32a73cu: goto label_32a73c;
        default: break;
    }

    ctx->pc = 0x32a250u;

label_32a250:
    // 0x32a250: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x32a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_32a254:
    // 0x32a254: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x32a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_32a258:
    // 0x32a258: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_32a25c:
    // 0x32a25c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_32a260:
    // 0x32a260: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_32a264:
    // 0x32a264: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32a264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32a268:
    // 0x32a268: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_32a26c:
    // 0x32a26c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32a26cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a270:
    // 0x32a270: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32a274:
    // 0x32a274: 0x26b60064  addiu       $s6, $s5, 0x64
    ctx->pc = 0x32a274u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
label_32a278:
    // 0x32a278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32a27c:
    // 0x32a27c: 0x26b3013c  addiu       $s3, $s5, 0x13C
    ctx->pc = 0x32a27cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 316));
label_32a280:
    // 0x32a280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32a284:
    // 0x32a284: 0x26b2004c  addiu       $s2, $s5, 0x4C
    ctx->pc = 0x32a284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
label_32a288:
    // 0x32a288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32a28c:
    // 0x32a28c: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x32a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_32a290:
    // 0x32a290: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x32a290u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32a294:
    // 0x32a294: 0x24540002  addiu       $s4, $v0, 0x2
    ctx->pc = 0x32a294u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_32a298:
    // 0x32a298: 0x3062e000  andi        $v0, $v1, 0xE000
    ctx->pc = 0x32a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
label_32a29c:
    // 0x32a29c: 0xa4820130  sh          $v0, 0x130($a0)
    ctx->pc = 0x32a29cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 304), (uint16_t)GPR_U32(ctx, 2));
label_32a2a0:
    // 0x32a2a0: 0x94820130  lhu         $v0, 0x130($a0)
    ctx->pc = 0x32a2a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 304)));
label_32a2a4:
    // 0x32a2a4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x32a2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_32a2a8:
    // 0x32a2a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32a2ac:
    if (ctx->pc == 0x32A2ACu) {
        ctx->pc = 0x32A2ACu;
            // 0x32a2ac: 0x26b00124  addiu       $s0, $s5, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
        ctx->pc = 0x32A2B0u;
        goto label_32a2b0;
    }
    ctx->pc = 0x32A2A8u;
    {
        const bool branch_taken_0x32a2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A2A8u;
            // 0x32a2ac: 0x26b00124  addiu       $s0, $s5, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2a8) {
            ctx->pc = 0x32A2B8u;
            goto label_32a2b8;
        }
    }
    ctx->pc = 0x32A2B0u;
label_32a2b0:
    // 0x32a2b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32a2b4:
    // 0x32a2b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_32a2b8:
    // 0x32a2b8: 0x143c  dsll32      $v0, $zero, 16
    ctx->pc = 0x32a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 16));
label_32a2bc:
    // 0x32a2bc: 0xa2030013  sb          $v1, 0x13($s0)
    ctx->pc = 0x32a2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
label_32a2c0:
    // 0x32a2c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32a2c4:
    // 0x32a2c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32a2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a2c8:
    // 0x32a2c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32a2cc:
    // 0x32a2cc: 0x2409f000  addiu       $t1, $zero, -0x1000
    ctx->pc = 0x32a2ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_32a2d0:
    // 0x32a2d0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x32a2d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32a2d4:
    // 0x32a2d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a2d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_32a2d8:
    // 0x32a2d8: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
label_32a2dc:
    if (ctx->pc == 0x32A2DCu) {
        ctx->pc = 0x32A2DCu;
            // 0x32a2dc: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x32A2E0u;
        goto label_32a2e0;
    }
    ctx->pc = 0x32A2D8u;
    {
        const bool branch_taken_0x32a2d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A2D8u;
            // 0x32a2dc: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2d8) {
            ctx->pc = 0x32A388u;
            goto label_32a388;
        }
    }
    ctx->pc = 0x32A2E0u;
label_32a2e0:
    // 0x32a2e0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x32a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_32a2e4:
    // 0x32a2e4: 0x968a0000  lhu         $t2, 0x0($s4)
    ctx->pc = 0x32a2e4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_32a2e8:
    // 0x32a2e8: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x32a2e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_32a2ec:
    // 0x32a2ec: 0xa4302  srl         $t0, $t2, 12
    ctx->pc = 0x32a2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 12));
label_32a2f0:
    // 0x32a2f0: 0xa4870008  sh          $a3, 0x8($a0)
    ctx->pc = 0x32a2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 7));
label_32a2f4:
    // 0x32a2f4: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x32a2f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_32a2f8:
    // 0x32a2f8: 0xa3a02  srl         $a3, $t2, 8
    ctx->pc = 0x32a2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
label_32a2fc:
    // 0x32a2fc: 0xa2bc2  srl         $a1, $t2, 15
    ctx->pc = 0x32a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 15));
label_32a300:
    // 0x32a300: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x32a300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_32a304:
    // 0x32a304: 0xa0880014  sb          $t0, 0x14($a0)
    ctx->pc = 0x32a304u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 8));
label_32a308:
    // 0x32a308: 0xa0870016  sb          $a3, 0x16($a0)
    ctx->pc = 0x32a308u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 7));
label_32a30c:
    // 0x32a30c: 0x96870002  lhu         $a3, 0x2($s4)
    ctx->pc = 0x32a30cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_32a310:
    // 0x32a310: 0x74382  srl         $t0, $a3, 14
    ctx->pc = 0x32a310u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_32a314:
    // 0x32a314: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x32a314u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_32a318:
    // 0x32a318: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x32a318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_32a31c:
    // 0x32a31c: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x32a31cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
label_32a320:
    // 0x32a320: 0xa0880015  sb          $t0, 0x15($a0)
    ctx->pc = 0x32a320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 8));
label_32a324:
    // 0x32a324: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32a324u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_32a328:
    // 0x32a328: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x32a328u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
label_32a32c:
    // 0x32a32c: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x32a32cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_32a330:
    // 0x32a330: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x32a330u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_32a334:
    // 0x32a334: 0xa487000e  sh          $a3, 0xE($a0)
    ctx->pc = 0x32a334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 7));
label_32a338:
    // 0x32a338: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x32a338u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_32a33c:
    // 0x32a33c: 0x31070800  andi        $a3, $t0, 0x800
    ctx->pc = 0x32a33cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_32a340:
    // 0x32a340: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_32a344:
    if (ctx->pc == 0x32A344u) {
        ctx->pc = 0x32A344u;
            // 0x32a344: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x32A348u;
        goto label_32a348;
    }
    ctx->pc = 0x32A340u;
    {
        const bool branch_taken_0x32a340 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A340u;
            // 0x32a344: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a340) {
            ctx->pc = 0x32A350u;
            goto label_32a350;
        }
    }
    ctx->pc = 0x32A348u;
label_32a348:
    // 0x32a348: 0x1093825  or          $a3, $t0, $t1
    ctx->pc = 0x32a348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_32a34c:
    // 0x32a34c: 0xa487000e  sh          $a3, 0xE($a0)
    ctx->pc = 0x32a34cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 7));
label_32a350:
    // 0x32a350: 0x96870004  lhu         $a3, 0x4($s4)
    ctx->pc = 0x32a350u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_32a354:
    // 0x32a354: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x32a354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_32a358:
    // 0x32a358: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x32a358u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
label_32a35c:
    // 0x32a35c: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x32a35cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
label_32a360:
    // 0x32a360: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32a360u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_32a364:
    // 0x32a364: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x32a364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_32a368:
    // 0x32a368: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x32a368u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_32a36c:
    // 0x32a36c: 0xa4870010  sh          $a3, 0x10($a0)
    ctx->pc = 0x32a36cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 7));
label_32a370:
    // 0x32a370: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x32a370u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_32a374:
    // 0x32a374: 0x31070800  andi        $a3, $t0, 0x800
    ctx->pc = 0x32a374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_32a378:
    // 0x32a378: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_32a37c:
    if (ctx->pc == 0x32A37Cu) {
        ctx->pc = 0x32A37Cu;
            // 0x32a37c: 0x26940006  addiu       $s4, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->pc = 0x32A380u;
        goto label_32a380;
    }
    ctx->pc = 0x32A378u;
    {
        const bool branch_taken_0x32a378 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A378u;
            // 0x32a37c: 0x26940006  addiu       $s4, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a378) {
            ctx->pc = 0x32A388u;
            goto label_32a388;
        }
    }
    ctx->pc = 0x32A380u;
label_32a380:
    // 0x32a380: 0x1093825  or          $a3, $t0, $t1
    ctx->pc = 0x32a380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_32a384:
    // 0x32a384: 0xa4870010  sh          $a3, 0x10($a0)
    ctx->pc = 0x32a384u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 7));
label_32a388:
    // 0x32a388: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32a388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_32a38c:
    // 0x32a38c: 0x28c70006  slti        $a3, $a2, 0x6
    ctx->pc = 0x32a38cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_32a390:
    // 0x32a390: 0x14e0ffd1  bnez        $a3, . + 4 + (-0x2F << 2)
label_32a394:
    if (ctx->pc == 0x32A394u) {
        ctx->pc = 0x32A394u;
            // 0x32a394: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->pc = 0x32A398u;
        goto label_32a398;
    }
    ctx->pc = 0x32A390u;
    {
        const bool branch_taken_0x32a390 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A390u;
            // 0x32a394: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a390) {
            ctx->pc = 0x32A2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32a2d8;
        }
    }
    ctx->pc = 0x32A398u;
label_32a398:
    // 0x32a398: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x32a398u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_32a39c:
    // 0x32a39c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32a39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a3a0:
    // 0x32a3a0: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x32a3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_32a3a4:
    // 0x32a3a4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x32a3a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_32a3a8:
    // 0x32a3a8: 0x9604000e  lhu         $a0, 0xE($s0)
    ctx->pc = 0x32a3a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_32a3ac:
    // 0x32a3ac: 0x41283  sra         $v0, $a0, 10
    ctx->pc = 0x32a3acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 10));
label_32a3b0:
    // 0x32a3b0: 0x41b03  sra         $v1, $a0, 12
    ctx->pc = 0x32a3b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 12));
label_32a3b4:
    // 0x32a3b4: 0x305e0003  andi        $fp, $v0, 0x3
    ctx->pc = 0x32a3b4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_32a3b8:
    // 0x32a3b8: 0x30770003  andi        $s7, $v1, 0x3
    ctx->pc = 0x32a3b8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_32a3bc:
    // 0x32a3bc: 0x41203  sra         $v0, $a0, 8
    ctx->pc = 0x32a3bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
label_32a3c0:
    // 0x32a3c0: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x32a3c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
label_32a3c4:
    // 0x32a3c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x32a3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_32a3c8:
    // 0x32a3c8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x32a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_32a3cc:
    // 0x32a3cc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x32a3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_32a3d0:
    // 0x32a3d0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x32a3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_32a3d4:
    // 0x32a3d4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x32a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_32a3d8:
    // 0x32a3d8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x32a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_32a3dc:
    // 0x32a3dc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x32a3dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_32a3e0:
    // 0x32a3e0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_32a3e4:
    if (ctx->pc == 0x32A3E4u) {
        ctx->pc = 0x32A3E8u;
        goto label_32a3e8;
    }
    ctx->pc = 0x32A3E0u;
    {
        const bool branch_taken_0x32a3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3e0) {
            ctx->pc = 0x32A458u;
            goto label_32a458;
        }
    }
    ctx->pc = 0x32A3E8u;
label_32a3e8:
    // 0x32a3e8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x32a3e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_32a3ec:
    // 0x32a3ec: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x32a3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
label_32a3f0:
    // 0x32a3f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_32a3f4:
    if (ctx->pc == 0x32A3F4u) {
        ctx->pc = 0x32A3F8u;
        goto label_32a3f8;
    }
    ctx->pc = 0x32A3F0u;
    {
        const bool branch_taken_0x32a3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3f0) {
            ctx->pc = 0x32A428u;
            goto label_32a428;
        }
    }
    ctx->pc = 0x32A3F8u;
label_32a3f8:
    // 0x32a3f8: 0x92630016  lbu         $v1, 0x16($s3)
    ctx->pc = 0x32a3f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
label_32a3fc:
    // 0x32a3fc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x32a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_32a400:
    // 0x32a400: 0x24421d60  addiu       $v0, $v0, 0x1D60
    ctx->pc = 0x32a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7520));
label_32a404:
    // 0x32a404: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a408:
    // 0x32a408: 0x26650016  addiu       $a1, $s3, 0x16
    ctx->pc = 0x32a408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
label_32a40c:
    // 0x32a40c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32a410:
    // 0x32a410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a414:
    // 0x32a414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a418:
    // 0x32a418: 0x40f809  jalr        $v0
label_32a41c:
    if (ctx->pc == 0x32A41Cu) {
        ctx->pc = 0x32A41Cu;
            // 0x32a41c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A420u;
        goto label_32a420;
    }
    ctx->pc = 0x32A418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A420u);
        ctx->pc = 0x32A41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A418u;
            // 0x32a41c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A420u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A420u; }
            if (ctx->pc != 0x32A420u) { return; }
        }
        }
    }
    ctx->pc = 0x32A420u;
label_32a420:
    // 0x32a420: 0x1000000d  b           . + 4 + (0xD << 2)
label_32a424:
    if (ctx->pc == 0x32A424u) {
        ctx->pc = 0x32A424u;
            // 0x32a424: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x32A428u;
        goto label_32a428;
    }
    ctx->pc = 0x32A420u;
    {
        const bool branch_taken_0x32a420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A420u;
            // 0x32a424: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a420) {
            ctx->pc = 0x32A458u;
            goto label_32a458;
        }
    }
    ctx->pc = 0x32A428u;
label_32a428:
    // 0x32a428: 0x92630016  lbu         $v1, 0x16($s3)
    ctx->pc = 0x32a428u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
label_32a42c:
    // 0x32a42c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x32a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_32a430:
    // 0x32a430: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a434:
    // 0x32a434: 0x24421d60  addiu       $v0, $v0, 0x1D60
    ctx->pc = 0x32a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7520));
label_32a438:
    // 0x32a438: 0x26650016  addiu       $a1, $s3, 0x16
    ctx->pc = 0x32a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
label_32a43c:
    // 0x32a43c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32a440:
    // 0x32a440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a444:
    // 0x32a444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a448:
    // 0x32a448: 0x40f809  jalr        $v0
label_32a44c:
    if (ctx->pc == 0x32A44Cu) {
        ctx->pc = 0x32A44Cu;
            // 0x32a44c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32A450u;
        goto label_32a450;
    }
    ctx->pc = 0x32A448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A450u);
        ctx->pc = 0x32A44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A448u;
            // 0x32a44c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A450u; }
            if (ctx->pc != 0x32A450u) { return; }
        }
        }
    }
    ctx->pc = 0x32A450u;
label_32a450:
    // 0x32a450: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x32a450u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_32a454:
    // 0x32a454: 0x0  nop
    ctx->pc = 0x32a454u;
    // NOP
label_32a458:
    // 0x32a458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32a45c:
    // 0x32a45c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x32a45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_32a460:
    // 0x32a460: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_32a464:
    if (ctx->pc == 0x32A464u) {
        ctx->pc = 0x32A464u;
            // 0x32a464: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->pc = 0x32A468u;
        goto label_32a468;
    }
    ctx->pc = 0x32A460u;
    {
        const bool branch_taken_0x32a460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A460u;
            // 0x32a464: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a460) {
            ctx->pc = 0x32A3DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32a3dc;
        }
    }
    ctx->pc = 0x32A468u;
label_32a468:
    // 0x32a468: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x32a468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_32a46c:
    // 0x32a46c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x32a46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_32a470:
    // 0x32a470: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_32a474:
    if (ctx->pc == 0x32A474u) {
        ctx->pc = 0x32A478u;
        goto label_32a478;
    }
    ctx->pc = 0x32A470u;
    {
        const bool branch_taken_0x32a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a470) {
            ctx->pc = 0x32A4A4u;
            goto label_32a4a4;
        }
    }
    ctx->pc = 0x32A478u;
label_32a478:
    // 0x32a478: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x32a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_32a47c:
    // 0x32a47c: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x32a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_32a480:
    // 0x32a480: 0x24421dd0  addiu       $v0, $v0, 0x1DD0
    ctx->pc = 0x32a480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7632));
label_32a484:
    // 0x32a484: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x32a484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a488:
    // 0x32a488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a48c:
    // 0x32a48c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a490:
    // 0x32a490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a494:
    // 0x32a494: 0x40f809  jalr        $v0
label_32a498:
    if (ctx->pc == 0x32A498u) {
        ctx->pc = 0x32A498u;
            // 0x32a498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A49Cu;
        goto label_32a49c;
    }
    ctx->pc = 0x32A494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A49Cu);
        ctx->pc = 0x32A498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A494u;
            // 0x32a498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A49Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A49Cu; }
            if (ctx->pc != 0x32A49Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32A49Cu;
label_32a49c:
    // 0x32a49c: 0x1000000b  b           . + 4 + (0xB << 2)
label_32a4a0:
    if (ctx->pc == 0x32A4A0u) {
        ctx->pc = 0x32A4A0u;
            // 0x32a4a0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x32A4A4u;
        goto label_32a4a4;
    }
    ctx->pc = 0x32A49Cu;
    {
        const bool branch_taken_0x32a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A49Cu;
            // 0x32a4a0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a49c) {
            ctx->pc = 0x32A4CCu;
            goto label_32a4cc;
        }
    }
    ctx->pc = 0x32A4A4u;
label_32a4a4:
    // 0x32a4a4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x32a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_32a4a8:
    // 0x32a4a8: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x32a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_32a4ac:
    // 0x32a4ac: 0x24421dd0  addiu       $v0, $v0, 0x1DD0
    ctx->pc = 0x32a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7632));
label_32a4b0:
    // 0x32a4b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x32a4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a4b4:
    // 0x32a4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a4b8:
    // 0x32a4b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a4bc:
    // 0x32a4bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a4c0:
    // 0x32a4c0: 0x40f809  jalr        $v0
label_32a4c4:
    if (ctx->pc == 0x32A4C4u) {
        ctx->pc = 0x32A4C4u;
            // 0x32a4c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32A4C8u;
        goto label_32a4c8;
    }
    ctx->pc = 0x32A4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A4C8u);
        ctx->pc = 0x32A4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A4C0u;
            // 0x32a4c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A4C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A4C8u; }
            if (ctx->pc != 0x32A4C8u) { return; }
        }
        }
    }
    ctx->pc = 0x32A4C8u;
label_32a4c8:
    // 0x32a4c8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x32a4c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_32a4cc:
    // 0x32a4cc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x32a4ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_32a4d0:
    // 0x32a4d0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x32a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_32a4d4:
    // 0x32a4d4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_32a4d8:
    if (ctx->pc == 0x32A4D8u) {
        ctx->pc = 0x32A4DCu;
        goto label_32a4dc;
    }
    ctx->pc = 0x32A4D4u;
    {
        const bool branch_taken_0x32a4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a4d4) {
            ctx->pc = 0x32A534u;
            goto label_32a534;
        }
    }
    ctx->pc = 0x32A4DCu;
label_32a4dc:
    // 0x32a4dc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x32a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_32a4e0:
    // 0x32a4e0: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x32a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_32a4e4:
    // 0x32a4e4: 0x24421de0  addiu       $v0, $v0, 0x1DE0
    ctx->pc = 0x32a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7648));
label_32a4e8:
    // 0x32a4e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a4ec:
    // 0x32a4ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a4f0:
    // 0x32a4f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32a4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a4f4:
    // 0x32a4f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a4f8:
    // 0x32a4f8: 0x40f809  jalr        $v0
label_32a4fc:
    if (ctx->pc == 0x32A4FCu) {
        ctx->pc = 0x32A4FCu;
            // 0x32a4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A500u;
        goto label_32a500;
    }
    ctx->pc = 0x32A4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A500u);
        ctx->pc = 0x32A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A4F8u;
            // 0x32a4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A500u; }
            if (ctx->pc != 0x32A500u) { return; }
        }
        }
    }
    ctx->pc = 0x32A500u;
label_32a500:
    // 0x32a500: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x32a500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_32a504:
    // 0x32a504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32a504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a508:
    // 0x32a508: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x32a508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_32a50c:
    // 0x32a50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a510:
    // 0x32a510: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32a510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32a514:
    // 0x32a514: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x32a514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_32a518:
    // 0x32a518: 0x24421de0  addiu       $v0, $v0, 0x1DE0
    ctx->pc = 0x32a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7648));
label_32a51c:
    // 0x32a51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a520:
    // 0x32a520: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a524:
    // 0x32a524: 0x40f809  jalr        $v0
label_32a528:
    if (ctx->pc == 0x32A528u) {
        ctx->pc = 0x32A528u;
            // 0x32a528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A52Cu;
        goto label_32a52c;
    }
    ctx->pc = 0x32A524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A52Cu);
        ctx->pc = 0x32A528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A524u;
            // 0x32a528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A52Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A52Cu; }
            if (ctx->pc != 0x32A52Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32A52Cu;
label_32a52c:
    // 0x32a52c: 0x10000016  b           . + 4 + (0x16 << 2)
label_32a530:
    if (ctx->pc == 0x32A530u) {
        ctx->pc = 0x32A530u;
            // 0x32a530: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x32A534u;
        goto label_32a534;
    }
    ctx->pc = 0x32A52Cu;
    {
        const bool branch_taken_0x32a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A52Cu;
            // 0x32a530: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a52c) {
            ctx->pc = 0x32A588u;
            goto label_32a588;
        }
    }
    ctx->pc = 0x32A534u;
label_32a534:
    // 0x32a534: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x32a534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_32a538:
    // 0x32a538: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x32a538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_32a53c:
    // 0x32a53c: 0x24421de0  addiu       $v0, $v0, 0x1DE0
    ctx->pc = 0x32a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7648));
label_32a540:
    // 0x32a540: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a544:
    // 0x32a544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a548:
    // 0x32a548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32a548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a54c:
    // 0x32a54c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a550:
    // 0x32a550: 0x40f809  jalr        $v0
label_32a554:
    if (ctx->pc == 0x32A554u) {
        ctx->pc = 0x32A554u;
            // 0x32a554: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32A558u;
        goto label_32a558;
    }
    ctx->pc = 0x32A550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A558u);
        ctx->pc = 0x32A554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A550u;
            // 0x32a554: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A558u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A558u; }
            if (ctx->pc != 0x32A558u) { return; }
        }
        }
    }
    ctx->pc = 0x32A558u;
label_32a558:
    // 0x32a558: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x32a558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_32a55c:
    // 0x32a55c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32a55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a560:
    // 0x32a560: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x32a560u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_32a564:
    // 0x32a564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a568:
    // 0x32a568: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32a568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32a56c:
    // 0x32a56c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x32a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_32a570:
    // 0x32a570: 0x24421de0  addiu       $v0, $v0, 0x1DE0
    ctx->pc = 0x32a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7648));
label_32a574:
    // 0x32a574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a578:
    // 0x32a578: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a57c:
    // 0x32a57c: 0x40f809  jalr        $v0
label_32a580:
    if (ctx->pc == 0x32A580u) {
        ctx->pc = 0x32A580u;
            // 0x32a580: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32A584u;
        goto label_32a584;
    }
    ctx->pc = 0x32A57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A584u);
        ctx->pc = 0x32A580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A57Cu;
            // 0x32a580: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A584u; }
            if (ctx->pc != 0x32A584u) { return; }
        }
        }
    }
    ctx->pc = 0x32A584u;
label_32a584:
    // 0x32a584: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x32a584u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_32a588:
    // 0x32a588: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x32a588u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_32a58c:
    // 0x32a58c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x32a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_32a590:
    // 0x32a590: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_32a594:
    if (ctx->pc == 0x32A594u) {
        ctx->pc = 0x32A594u;
            // 0x32a594: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x32A598u;
        goto label_32a598;
    }
    ctx->pc = 0x32A590u;
    {
        const bool branch_taken_0x32a590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a590) {
            ctx->pc = 0x32A594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A590u;
            // 0x32a594: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A5F4u;
            goto label_32a5f4;
        }
    }
    ctx->pc = 0x32A598u;
label_32a598:
    // 0x32a598: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x32a598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_32a59c:
    // 0x32a59c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a5a0:
    // 0x32a5a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x32a5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32a5a4:
    // 0x32a5a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32a5a8:
    // 0x32a5a8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_32a5ac:
    // 0x32a5ac: 0x24420cc0  addiu       $v0, $v0, 0xCC0
    ctx->pc = 0x32a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
label_32a5b0:
    // 0x32a5b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a5b4:
    // 0x32a5b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a5b8:
    // 0x32a5b8: 0x40f809  jalr        $v0
label_32a5bc:
    if (ctx->pc == 0x32A5BCu) {
        ctx->pc = 0x32A5BCu;
            // 0x32a5bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A5C0u;
        goto label_32a5c0;
    }
    ctx->pc = 0x32A5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A5C0u);
        ctx->pc = 0x32A5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A5B8u;
            // 0x32a5bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A5C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A5C0u; }
            if (ctx->pc != 0x32A5C0u) { return; }
        }
        }
    }
    ctx->pc = 0x32A5C0u;
label_32a5c0:
    // 0x32a5c0: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x32a5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_32a5c4:
    // 0x32a5c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x32a5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32a5c8:
    // 0x32a5c8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x32a5c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_32a5cc:
    // 0x32a5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a5d0:
    // 0x32a5d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32a5d4:
    // 0x32a5d4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_32a5d8:
    // 0x32a5d8: 0x24420cc0  addiu       $v0, $v0, 0xCC0
    ctx->pc = 0x32a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
label_32a5dc:
    // 0x32a5dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a5e0:
    // 0x32a5e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a5e4:
    // 0x32a5e4: 0x40f809  jalr        $v0
label_32a5e8:
    if (ctx->pc == 0x32A5E8u) {
        ctx->pc = 0x32A5E8u;
            // 0x32a5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A5ECu;
        goto label_32a5ec;
    }
    ctx->pc = 0x32A5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A5ECu);
        ctx->pc = 0x32A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A5E4u;
            // 0x32a5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A5ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A5ECu; }
            if (ctx->pc != 0x32A5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x32A5ECu;
label_32a5ec:
    // 0x32a5ec: 0x10000016  b           . + 4 + (0x16 << 2)
label_32a5f0:
    if (ctx->pc == 0x32A5F0u) {
        ctx->pc = 0x32A5F0u;
            // 0x32a5f0: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x32A5F4u;
        goto label_32a5f4;
    }
    ctx->pc = 0x32A5ECu;
    {
        const bool branch_taken_0x32a5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A5ECu;
            // 0x32a5f0: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a5ec) {
            ctx->pc = 0x32A648u;
            goto label_32a648;
        }
    }
    ctx->pc = 0x32A5F4u;
label_32a5f4:
    // 0x32a5f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a5f8:
    // 0x32a5f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x32a5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32a5fc:
    // 0x32a5fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32a600:
    // 0x32a600: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32a600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_32a604:
    // 0x32a604: 0x24420cc0  addiu       $v0, $v0, 0xCC0
    ctx->pc = 0x32a604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
label_32a608:
    // 0x32a608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a60c:
    // 0x32a60c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a610:
    // 0x32a610: 0x40f809  jalr        $v0
label_32a614:
    if (ctx->pc == 0x32A614u) {
        ctx->pc = 0x32A614u;
            // 0x32a614: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32A618u;
        goto label_32a618;
    }
    ctx->pc = 0x32A610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A618u);
        ctx->pc = 0x32A614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A610u;
            // 0x32a614: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A618u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A618u; }
            if (ctx->pc != 0x32A618u) { return; }
        }
        }
    }
    ctx->pc = 0x32A618u;
label_32a618:
    // 0x32a618: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x32a618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_32a61c:
    // 0x32a61c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x32a61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32a620:
    // 0x32a620: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x32a620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_32a624:
    // 0x32a624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a628:
    // 0x32a628: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32a628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32a62c:
    // 0x32a62c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_32a630:
    // 0x32a630: 0x24420cc0  addiu       $v0, $v0, 0xCC0
    ctx->pc = 0x32a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
label_32a634:
    // 0x32a634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a638:
    // 0x32a638: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a63c:
    // 0x32a63c: 0x40f809  jalr        $v0
label_32a640:
    if (ctx->pc == 0x32A640u) {
        ctx->pc = 0x32A640u;
            // 0x32a640: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32A644u;
        goto label_32a644;
    }
    ctx->pc = 0x32A63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A644u);
        ctx->pc = 0x32A640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A63Cu;
            // 0x32a640: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A644u; }
            if (ctx->pc != 0x32A644u) { return; }
        }
        }
    }
    ctx->pc = 0x32A644u;
label_32a644:
    // 0x32a644: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x32a644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_32a648:
    // 0x32a648: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x32a648u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_32a64c:
    // 0x32a64c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x32a64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_32a650:
    // 0x32a650: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_32a654:
    if (ctx->pc == 0x32A654u) {
        ctx->pc = 0x32A658u;
        goto label_32a658;
    }
    ctx->pc = 0x32A650u;
    {
        const bool branch_taken_0x32a650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a650) {
            ctx->pc = 0x32A6F0u;
            goto label_32a6f0;
        }
    }
    ctx->pc = 0x32A658u;
label_32a658:
    // 0x32a658: 0x96910002  lhu         $s1, 0x2($s4)
    ctx->pc = 0x32a658u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_32a65c:
    // 0x32a65c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32a660:
    // 0x32a660: 0x92a302c4  lbu         $v1, 0x2C4($s5)
    ctx->pc = 0x32a660u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 708)));
label_32a664:
    // 0x32a664: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x32a664u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_32a668:
    // 0x32a668: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x32a668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_32a66c:
    // 0x32a66c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x32a66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_32a670:
    // 0x32a670: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x32a670u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_32a674:
    // 0x32a674: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_32a678:
    if (ctx->pc == 0x32A678u) {
        ctx->pc = 0x32A678u;
            // 0x32a678: 0xa42025  or          $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->pc = 0x32A67Cu;
        goto label_32a67c;
    }
    ctx->pc = 0x32A674u;
    {
        const bool branch_taken_0x32a674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32A678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A674u;
            // 0x32a678: 0xa42025  or          $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a674) {
            ctx->pc = 0x32A6C8u;
            goto label_32a6c8;
        }
    }
    ctx->pc = 0x32A67Cu;
label_32a67c:
    // 0x32a67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32a680:
    // 0x32a680: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_32a684:
    if (ctx->pc == 0x32A684u) {
        ctx->pc = 0x32A688u;
        goto label_32a688;
    }
    ctx->pc = 0x32A680u;
    {
        const bool branch_taken_0x32a680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32a680) {
            ctx->pc = 0x32A6A8u;
            goto label_32a6a8;
        }
    }
    ctx->pc = 0x32A688u;
label_32a688:
    // 0x32a688: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_32a68c:
    if (ctx->pc == 0x32A68Cu) {
        ctx->pc = 0x32A690u;
        goto label_32a690;
    }
    ctx->pc = 0x32A688u;
    {
        const bool branch_taken_0x32a688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a688) {
            ctx->pc = 0x32A698u;
            goto label_32a698;
        }
    }
    ctx->pc = 0x32A690u;
label_32a690:
    // 0x32a690: 0x10000013  b           . + 4 + (0x13 << 2)
label_32a694:
    if (ctx->pc == 0x32A694u) {
        ctx->pc = 0x32A698u;
        goto label_32a698;
    }
    ctx->pc = 0x32A690u;
    {
        const bool branch_taken_0x32a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a690) {
            ctx->pc = 0x32A6E0u;
            goto label_32a6e0;
        }
    }
    ctx->pc = 0x32A698u;
label_32a698:
    // 0x32a698: 0xc0538fc  jal         func_14E3F0
label_32a69c:
    if (ctx->pc == 0x32A69Cu) {
        ctx->pc = 0x32A69Cu;
            // 0x32a69c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A6A0u;
        goto label_32a6a0;
    }
    ctx->pc = 0x32A698u;
    SET_GPR_U32(ctx, 31, 0x32A6A0u);
    ctx->pc = 0x32A69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A698u;
            // 0x32a69c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6A0u; }
        if (ctx->pc != 0x32A6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6A0u; }
        if (ctx->pc != 0x32A6A0u) { return; }
    }
    ctx->pc = 0x32A6A0u;
label_32a6a0:
    // 0x32a6a0: 0x1000000f  b           . + 4 + (0xF << 2)
label_32a6a4:
    if (ctx->pc == 0x32A6A4u) {
        ctx->pc = 0x32A6A8u;
        goto label_32a6a8;
    }
    ctx->pc = 0x32A6A0u;
    {
        const bool branch_taken_0x32a6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a6a0) {
            ctx->pc = 0x32A6E0u;
            goto label_32a6e0;
        }
    }
    ctx->pc = 0x32A6A8u;
label_32a6a8:
    // 0x32a6a8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x32a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
label_32a6ac:
    // 0x32a6ac: 0x8c420388  lw          $v0, 0x388($v0)
    ctx->pc = 0x32a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
label_32a6b0:
    // 0x32a6b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_32a6b4:
    if (ctx->pc == 0x32A6B4u) {
        ctx->pc = 0x32A6B8u;
        goto label_32a6b8;
    }
    ctx->pc = 0x32A6B0u;
    {
        const bool branch_taken_0x32a6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a6b0) {
            ctx->pc = 0x32A6E0u;
            goto label_32a6e0;
        }
    }
    ctx->pc = 0x32A6B8u;
label_32a6b8:
    // 0x32a6b8: 0xc0538fc  jal         func_14E3F0
label_32a6bc:
    if (ctx->pc == 0x32A6BCu) {
        ctx->pc = 0x32A6BCu;
            // 0x32a6bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A6C0u;
        goto label_32a6c0;
    }
    ctx->pc = 0x32A6B8u;
    SET_GPR_U32(ctx, 31, 0x32A6C0u);
    ctx->pc = 0x32A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A6B8u;
            // 0x32a6bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6C0u; }
        if (ctx->pc != 0x32A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6C0u; }
        if (ctx->pc != 0x32A6C0u) { return; }
    }
    ctx->pc = 0x32A6C0u;
label_32a6c0:
    // 0x32a6c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_32a6c4:
    if (ctx->pc == 0x32A6C4u) {
        ctx->pc = 0x32A6C8u;
        goto label_32a6c8;
    }
    ctx->pc = 0x32A6C0u;
    {
        const bool branch_taken_0x32a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a6c0) {
            ctx->pc = 0x32A6E0u;
            goto label_32a6e0;
        }
    }
    ctx->pc = 0x32A6C8u;
label_32a6c8:
    // 0x32a6c8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x32a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
label_32a6cc:
    // 0x32a6cc: 0x8c420388  lw          $v0, 0x388($v0)
    ctx->pc = 0x32a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
label_32a6d0:
    // 0x32a6d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_32a6d4:
    if (ctx->pc == 0x32A6D4u) {
        ctx->pc = 0x32A6D8u;
        goto label_32a6d8;
    }
    ctx->pc = 0x32A6D0u;
    {
        const bool branch_taken_0x32a6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a6d0) {
            ctx->pc = 0x32A6E0u;
            goto label_32a6e0;
        }
    }
    ctx->pc = 0x32A6D8u;
label_32a6d8:
    // 0x32a6d8: 0xc0538fc  jal         func_14E3F0
label_32a6dc:
    if (ctx->pc == 0x32A6DCu) {
        ctx->pc = 0x32A6DCu;
            // 0x32a6dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A6E0u;
        goto label_32a6e0;
    }
    ctx->pc = 0x32A6D8u;
    SET_GPR_U32(ctx, 31, 0x32A6E0u);
    ctx->pc = 0x32A6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A6D8u;
            // 0x32a6dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6E0u; }
        if (ctx->pc != 0x32A6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6E0u; }
        if (ctx->pc != 0x32A6E0u) { return; }
    }
    ctx->pc = 0x32A6E0u;
label_32a6e0:
    // 0x32a6e0: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x32a6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
label_32a6e4:
    // 0x32a6e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32a6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32a6e8:
    // 0x32a6e8: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
label_32a6ec:
    if (ctx->pc == 0x32A6ECu) {
        ctx->pc = 0x32A6ECu;
            // 0x32a6ec: 0x96910002  lhu         $s1, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->pc = 0x32A6F0u;
        goto label_32a6f0;
    }
    ctx->pc = 0x32A6E8u;
    {
        const bool branch_taken_0x32a6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a6e8) {
            ctx->pc = 0x32A6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A6E8u;
            // 0x32a6ec: 0x96910002  lhu         $s1, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A65Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32a65c;
        }
    }
    ctx->pc = 0x32A6F0u;
label_32a6f0:
    // 0x32a6f0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x32a6f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_32a6f4:
    // 0x32a6f4: 0x3042c000  andi        $v0, $v0, 0xC000
    ctx->pc = 0x32a6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49152);
label_32a6f8:
    // 0x32a6f8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_32a6fc:
    if (ctx->pc == 0x32A6FCu) {
        ctx->pc = 0x32A6FCu;
            // 0x32a6fc: 0xae140000  sw          $s4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
        ctx->pc = 0x32A700u;
        goto label_32a700;
    }
    ctx->pc = 0x32A6F8u;
    {
        const bool branch_taken_0x32a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a6f8) {
            ctx->pc = 0x32A6FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A6F8u;
            // 0x32a6fc: 0xae140000  sw          $s4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A708u;
            goto label_32a708;
        }
    }
    ctx->pc = 0x32A700u;
label_32a700:
    // 0x32a700: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32a704:
    // 0x32a704: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32a704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_32a708:
    // 0x32a708: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32a708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_32a70c:
    // 0x32a70c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32a70cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a710:
    // 0x32a710: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32a710u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32a714:
    // 0x32a714: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32a714u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32a718:
    // 0x32a718: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32a718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32a71c:
    // 0x32a71c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32a71cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32a720:
    // 0x32a720: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32a720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32a724:
    // 0x32a724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32a724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32a728:
    // 0x32a728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32a728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32a72c:
    // 0x32a72c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a730:
    // 0x32a730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32a734:
    // 0x32a734: 0x3e00008  jr          $ra
label_32a738:
    if (ctx->pc == 0x32A738u) {
        ctx->pc = 0x32A738u;
            // 0x32a738: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x32A73Cu;
        goto label_32a73c;
    }
    ctx->pc = 0x32A734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A734u;
            // 0x32a738: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A73Cu;
label_32a73c:
    // 0x32a73c: 0x0  nop
    ctx->pc = 0x32a73cu;
    // NOP
    ctx->pc = 0x32a740u;
}
