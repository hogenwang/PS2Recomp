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

// Function: sub_0023F1C8
// Address: 0x23f1c8 - 0x23f718
void sub_0023F1C8_0x23f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F1C8_0x23f1c8");
#endif

    switch (ctx->pc) {
        case 0x23f1c8u: goto label_23f1c8;
        case 0x23f1ccu: goto label_23f1cc;
        case 0x23f1d0u: goto label_23f1d0;
        case 0x23f1d4u: goto label_23f1d4;
        case 0x23f1d8u: goto label_23f1d8;
        case 0x23f1dcu: goto label_23f1dc;
        case 0x23f1e0u: goto label_23f1e0;
        case 0x23f1e4u: goto label_23f1e4;
        case 0x23f1e8u: goto label_23f1e8;
        case 0x23f1ecu: goto label_23f1ec;
        case 0x23f1f0u: goto label_23f1f0;
        case 0x23f1f4u: goto label_23f1f4;
        case 0x23f1f8u: goto label_23f1f8;
        case 0x23f1fcu: goto label_23f1fc;
        case 0x23f200u: goto label_23f200;
        case 0x23f204u: goto label_23f204;
        case 0x23f208u: goto label_23f208;
        case 0x23f20cu: goto label_23f20c;
        case 0x23f210u: goto label_23f210;
        case 0x23f214u: goto label_23f214;
        case 0x23f218u: goto label_23f218;
        case 0x23f21cu: goto label_23f21c;
        case 0x23f220u: goto label_23f220;
        case 0x23f224u: goto label_23f224;
        case 0x23f228u: goto label_23f228;
        case 0x23f22cu: goto label_23f22c;
        case 0x23f230u: goto label_23f230;
        case 0x23f234u: goto label_23f234;
        case 0x23f238u: goto label_23f238;
        case 0x23f23cu: goto label_23f23c;
        case 0x23f240u: goto label_23f240;
        case 0x23f244u: goto label_23f244;
        case 0x23f248u: goto label_23f248;
        case 0x23f24cu: goto label_23f24c;
        case 0x23f250u: goto label_23f250;
        case 0x23f254u: goto label_23f254;
        case 0x23f258u: goto label_23f258;
        case 0x23f25cu: goto label_23f25c;
        case 0x23f260u: goto label_23f260;
        case 0x23f264u: goto label_23f264;
        case 0x23f268u: goto label_23f268;
        case 0x23f26cu: goto label_23f26c;
        case 0x23f270u: goto label_23f270;
        case 0x23f274u: goto label_23f274;
        case 0x23f278u: goto label_23f278;
        case 0x23f27cu: goto label_23f27c;
        case 0x23f280u: goto label_23f280;
        case 0x23f284u: goto label_23f284;
        case 0x23f288u: goto label_23f288;
        case 0x23f28cu: goto label_23f28c;
        case 0x23f290u: goto label_23f290;
        case 0x23f294u: goto label_23f294;
        case 0x23f298u: goto label_23f298;
        case 0x23f29cu: goto label_23f29c;
        case 0x23f2a0u: goto label_23f2a0;
        case 0x23f2a4u: goto label_23f2a4;
        case 0x23f2a8u: goto label_23f2a8;
        case 0x23f2acu: goto label_23f2ac;
        case 0x23f2b0u: goto label_23f2b0;
        case 0x23f2b4u: goto label_23f2b4;
        case 0x23f2b8u: goto label_23f2b8;
        case 0x23f2bcu: goto label_23f2bc;
        case 0x23f2c0u: goto label_23f2c0;
        case 0x23f2c4u: goto label_23f2c4;
        case 0x23f2c8u: goto label_23f2c8;
        case 0x23f2ccu: goto label_23f2cc;
        case 0x23f2d0u: goto label_23f2d0;
        case 0x23f2d4u: goto label_23f2d4;
        case 0x23f2d8u: goto label_23f2d8;
        case 0x23f2dcu: goto label_23f2dc;
        case 0x23f2e0u: goto label_23f2e0;
        case 0x23f2e4u: goto label_23f2e4;
        case 0x23f2e8u: goto label_23f2e8;
        case 0x23f2ecu: goto label_23f2ec;
        case 0x23f2f0u: goto label_23f2f0;
        case 0x23f2f4u: goto label_23f2f4;
        case 0x23f2f8u: goto label_23f2f8;
        case 0x23f2fcu: goto label_23f2fc;
        case 0x23f300u: goto label_23f300;
        case 0x23f304u: goto label_23f304;
        case 0x23f308u: goto label_23f308;
        case 0x23f30cu: goto label_23f30c;
        case 0x23f310u: goto label_23f310;
        case 0x23f314u: goto label_23f314;
        case 0x23f318u: goto label_23f318;
        case 0x23f31cu: goto label_23f31c;
        case 0x23f320u: goto label_23f320;
        case 0x23f324u: goto label_23f324;
        case 0x23f328u: goto label_23f328;
        case 0x23f32cu: goto label_23f32c;
        case 0x23f330u: goto label_23f330;
        case 0x23f334u: goto label_23f334;
        case 0x23f338u: goto label_23f338;
        case 0x23f33cu: goto label_23f33c;
        case 0x23f340u: goto label_23f340;
        case 0x23f344u: goto label_23f344;
        case 0x23f348u: goto label_23f348;
        case 0x23f34cu: goto label_23f34c;
        case 0x23f350u: goto label_23f350;
        case 0x23f354u: goto label_23f354;
        case 0x23f358u: goto label_23f358;
        case 0x23f35cu: goto label_23f35c;
        case 0x23f360u: goto label_23f360;
        case 0x23f364u: goto label_23f364;
        case 0x23f368u: goto label_23f368;
        case 0x23f36cu: goto label_23f36c;
        case 0x23f370u: goto label_23f370;
        case 0x23f374u: goto label_23f374;
        case 0x23f378u: goto label_23f378;
        case 0x23f37cu: goto label_23f37c;
        case 0x23f380u: goto label_23f380;
        case 0x23f384u: goto label_23f384;
        case 0x23f388u: goto label_23f388;
        case 0x23f38cu: goto label_23f38c;
        case 0x23f390u: goto label_23f390;
        case 0x23f394u: goto label_23f394;
        case 0x23f398u: goto label_23f398;
        case 0x23f39cu: goto label_23f39c;
        case 0x23f3a0u: goto label_23f3a0;
        case 0x23f3a4u: goto label_23f3a4;
        case 0x23f3a8u: goto label_23f3a8;
        case 0x23f3acu: goto label_23f3ac;
        case 0x23f3b0u: goto label_23f3b0;
        case 0x23f3b4u: goto label_23f3b4;
        case 0x23f3b8u: goto label_23f3b8;
        case 0x23f3bcu: goto label_23f3bc;
        case 0x23f3c0u: goto label_23f3c0;
        case 0x23f3c4u: goto label_23f3c4;
        case 0x23f3c8u: goto label_23f3c8;
        case 0x23f3ccu: goto label_23f3cc;
        case 0x23f3d0u: goto label_23f3d0;
        case 0x23f3d4u: goto label_23f3d4;
        case 0x23f3d8u: goto label_23f3d8;
        case 0x23f3dcu: goto label_23f3dc;
        case 0x23f3e0u: goto label_23f3e0;
        case 0x23f3e4u: goto label_23f3e4;
        case 0x23f3e8u: goto label_23f3e8;
        case 0x23f3ecu: goto label_23f3ec;
        case 0x23f3f0u: goto label_23f3f0;
        case 0x23f3f4u: goto label_23f3f4;
        case 0x23f3f8u: goto label_23f3f8;
        case 0x23f3fcu: goto label_23f3fc;
        case 0x23f400u: goto label_23f400;
        case 0x23f404u: goto label_23f404;
        case 0x23f408u: goto label_23f408;
        case 0x23f40cu: goto label_23f40c;
        case 0x23f410u: goto label_23f410;
        case 0x23f414u: goto label_23f414;
        case 0x23f418u: goto label_23f418;
        case 0x23f41cu: goto label_23f41c;
        case 0x23f420u: goto label_23f420;
        case 0x23f424u: goto label_23f424;
        case 0x23f428u: goto label_23f428;
        case 0x23f42cu: goto label_23f42c;
        case 0x23f430u: goto label_23f430;
        case 0x23f434u: goto label_23f434;
        case 0x23f438u: goto label_23f438;
        case 0x23f43cu: goto label_23f43c;
        case 0x23f440u: goto label_23f440;
        case 0x23f444u: goto label_23f444;
        case 0x23f448u: goto label_23f448;
        case 0x23f44cu: goto label_23f44c;
        case 0x23f450u: goto label_23f450;
        case 0x23f454u: goto label_23f454;
        case 0x23f458u: goto label_23f458;
        case 0x23f45cu: goto label_23f45c;
        case 0x23f460u: goto label_23f460;
        case 0x23f464u: goto label_23f464;
        case 0x23f468u: goto label_23f468;
        case 0x23f46cu: goto label_23f46c;
        case 0x23f470u: goto label_23f470;
        case 0x23f474u: goto label_23f474;
        case 0x23f478u: goto label_23f478;
        case 0x23f47cu: goto label_23f47c;
        case 0x23f480u: goto label_23f480;
        case 0x23f484u: goto label_23f484;
        case 0x23f488u: goto label_23f488;
        case 0x23f48cu: goto label_23f48c;
        case 0x23f490u: goto label_23f490;
        case 0x23f494u: goto label_23f494;
        case 0x23f498u: goto label_23f498;
        case 0x23f49cu: goto label_23f49c;
        case 0x23f4a0u: goto label_23f4a0;
        case 0x23f4a4u: goto label_23f4a4;
        case 0x23f4a8u: goto label_23f4a8;
        case 0x23f4acu: goto label_23f4ac;
        case 0x23f4b0u: goto label_23f4b0;
        case 0x23f4b4u: goto label_23f4b4;
        case 0x23f4b8u: goto label_23f4b8;
        case 0x23f4bcu: goto label_23f4bc;
        case 0x23f4c0u: goto label_23f4c0;
        case 0x23f4c4u: goto label_23f4c4;
        case 0x23f4c8u: goto label_23f4c8;
        case 0x23f4ccu: goto label_23f4cc;
        case 0x23f4d0u: goto label_23f4d0;
        case 0x23f4d4u: goto label_23f4d4;
        case 0x23f4d8u: goto label_23f4d8;
        case 0x23f4dcu: goto label_23f4dc;
        case 0x23f4e0u: goto label_23f4e0;
        case 0x23f4e4u: goto label_23f4e4;
        case 0x23f4e8u: goto label_23f4e8;
        case 0x23f4ecu: goto label_23f4ec;
        case 0x23f4f0u: goto label_23f4f0;
        case 0x23f4f4u: goto label_23f4f4;
        case 0x23f4f8u: goto label_23f4f8;
        case 0x23f4fcu: goto label_23f4fc;
        case 0x23f500u: goto label_23f500;
        case 0x23f504u: goto label_23f504;
        case 0x23f508u: goto label_23f508;
        case 0x23f50cu: goto label_23f50c;
        case 0x23f510u: goto label_23f510;
        case 0x23f514u: goto label_23f514;
        case 0x23f518u: goto label_23f518;
        case 0x23f51cu: goto label_23f51c;
        case 0x23f520u: goto label_23f520;
        case 0x23f524u: goto label_23f524;
        case 0x23f528u: goto label_23f528;
        case 0x23f52cu: goto label_23f52c;
        case 0x23f530u: goto label_23f530;
        case 0x23f534u: goto label_23f534;
        case 0x23f538u: goto label_23f538;
        case 0x23f53cu: goto label_23f53c;
        case 0x23f540u: goto label_23f540;
        case 0x23f544u: goto label_23f544;
        case 0x23f548u: goto label_23f548;
        case 0x23f54cu: goto label_23f54c;
        case 0x23f550u: goto label_23f550;
        case 0x23f554u: goto label_23f554;
        case 0x23f558u: goto label_23f558;
        case 0x23f55cu: goto label_23f55c;
        case 0x23f560u: goto label_23f560;
        case 0x23f564u: goto label_23f564;
        case 0x23f568u: goto label_23f568;
        case 0x23f56cu: goto label_23f56c;
        case 0x23f570u: goto label_23f570;
        case 0x23f574u: goto label_23f574;
        case 0x23f578u: goto label_23f578;
        case 0x23f57cu: goto label_23f57c;
        case 0x23f580u: goto label_23f580;
        case 0x23f584u: goto label_23f584;
        case 0x23f588u: goto label_23f588;
        case 0x23f58cu: goto label_23f58c;
        case 0x23f590u: goto label_23f590;
        case 0x23f594u: goto label_23f594;
        case 0x23f598u: goto label_23f598;
        case 0x23f59cu: goto label_23f59c;
        case 0x23f5a0u: goto label_23f5a0;
        case 0x23f5a4u: goto label_23f5a4;
        case 0x23f5a8u: goto label_23f5a8;
        case 0x23f5acu: goto label_23f5ac;
        case 0x23f5b0u: goto label_23f5b0;
        case 0x23f5b4u: goto label_23f5b4;
        case 0x23f5b8u: goto label_23f5b8;
        case 0x23f5bcu: goto label_23f5bc;
        case 0x23f5c0u: goto label_23f5c0;
        case 0x23f5c4u: goto label_23f5c4;
        case 0x23f5c8u: goto label_23f5c8;
        case 0x23f5ccu: goto label_23f5cc;
        case 0x23f5d0u: goto label_23f5d0;
        case 0x23f5d4u: goto label_23f5d4;
        case 0x23f5d8u: goto label_23f5d8;
        case 0x23f5dcu: goto label_23f5dc;
        case 0x23f5e0u: goto label_23f5e0;
        case 0x23f5e4u: goto label_23f5e4;
        case 0x23f5e8u: goto label_23f5e8;
        case 0x23f5ecu: goto label_23f5ec;
        case 0x23f5f0u: goto label_23f5f0;
        case 0x23f5f4u: goto label_23f5f4;
        case 0x23f5f8u: goto label_23f5f8;
        case 0x23f5fcu: goto label_23f5fc;
        case 0x23f600u: goto label_23f600;
        case 0x23f604u: goto label_23f604;
        case 0x23f608u: goto label_23f608;
        case 0x23f60cu: goto label_23f60c;
        case 0x23f610u: goto label_23f610;
        case 0x23f614u: goto label_23f614;
        case 0x23f618u: goto label_23f618;
        case 0x23f61cu: goto label_23f61c;
        case 0x23f620u: goto label_23f620;
        case 0x23f624u: goto label_23f624;
        case 0x23f628u: goto label_23f628;
        case 0x23f62cu: goto label_23f62c;
        case 0x23f630u: goto label_23f630;
        case 0x23f634u: goto label_23f634;
        case 0x23f638u: goto label_23f638;
        case 0x23f63cu: goto label_23f63c;
        case 0x23f640u: goto label_23f640;
        case 0x23f644u: goto label_23f644;
        case 0x23f648u: goto label_23f648;
        case 0x23f64cu: goto label_23f64c;
        case 0x23f650u: goto label_23f650;
        case 0x23f654u: goto label_23f654;
        case 0x23f658u: goto label_23f658;
        case 0x23f65cu: goto label_23f65c;
        case 0x23f660u: goto label_23f660;
        case 0x23f664u: goto label_23f664;
        case 0x23f668u: goto label_23f668;
        case 0x23f66cu: goto label_23f66c;
        case 0x23f670u: goto label_23f670;
        case 0x23f674u: goto label_23f674;
        case 0x23f678u: goto label_23f678;
        case 0x23f67cu: goto label_23f67c;
        case 0x23f680u: goto label_23f680;
        case 0x23f684u: goto label_23f684;
        case 0x23f688u: goto label_23f688;
        case 0x23f68cu: goto label_23f68c;
        case 0x23f690u: goto label_23f690;
        case 0x23f694u: goto label_23f694;
        case 0x23f698u: goto label_23f698;
        case 0x23f69cu: goto label_23f69c;
        case 0x23f6a0u: goto label_23f6a0;
        case 0x23f6a4u: goto label_23f6a4;
        case 0x23f6a8u: goto label_23f6a8;
        case 0x23f6acu: goto label_23f6ac;
        case 0x23f6b0u: goto label_23f6b0;
        case 0x23f6b4u: goto label_23f6b4;
        case 0x23f6b8u: goto label_23f6b8;
        case 0x23f6bcu: goto label_23f6bc;
        case 0x23f6c0u: goto label_23f6c0;
        case 0x23f6c4u: goto label_23f6c4;
        case 0x23f6c8u: goto label_23f6c8;
        case 0x23f6ccu: goto label_23f6cc;
        case 0x23f6d0u: goto label_23f6d0;
        case 0x23f6d4u: goto label_23f6d4;
        case 0x23f6d8u: goto label_23f6d8;
        case 0x23f6dcu: goto label_23f6dc;
        case 0x23f6e0u: goto label_23f6e0;
        case 0x23f6e4u: goto label_23f6e4;
        case 0x23f6e8u: goto label_23f6e8;
        case 0x23f6ecu: goto label_23f6ec;
        case 0x23f6f0u: goto label_23f6f0;
        case 0x23f6f4u: goto label_23f6f4;
        case 0x23f6f8u: goto label_23f6f8;
        case 0x23f6fcu: goto label_23f6fc;
        case 0x23f700u: goto label_23f700;
        case 0x23f704u: goto label_23f704;
        case 0x23f708u: goto label_23f708;
        case 0x23f70cu: goto label_23f70c;
        case 0x23f710u: goto label_23f710;
        case 0x23f714u: goto label_23f714;
        default: break;
    }

    ctx->pc = 0x23f1c8u;

label_23f1c8:
    // 0x23f1c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23f1cc:
    // 0x23f1cc: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x23f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_23f1d0:
    // 0x23f1d0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x23f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_23f1d4:
    // 0x23f1d4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23f1d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f1d8:
    // 0x23f1d8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x23f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_23f1dc:
    // 0x23f1dc: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x23f1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_23f1e0:
    // 0x23f1e0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x23f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_23f1e4:
    // 0x23f1e4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x23f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_23f1e8:
    // 0x23f1e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x23f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_23f1ec:
    // 0x23f1ec: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x23f1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_23f1f0:
    // 0x23f1f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_23f1f4:
    // 0x23f1f4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x23f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_23f1f8:
    // 0x23f1f8: 0x8cb40018  lw          $s4, 0x18($a1)
    ctx->pc = 0x23f1f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_23f1fc:
    // 0x23f1fc: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x23f1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_23f200:
    // 0x23f200: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23f204:
    if (ctx->pc == 0x23F204u) {
        ctx->pc = 0x23F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F200u;
        // 0x23f204: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F208u;
        goto label_23f208;
    }
    ctx->pc = 0x23F200u;
    {
        const bool branch_taken_0x23f200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F200u;
        // 0x23f204: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f200) {
            ctx->pc = 0x23F228u;
            goto label_23f228;
        }
    }
    ctx->pc = 0x23F208u;
label_23f208:
    // 0x23f208: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f20c:
    // 0x23f20c: 0x26c60014  addiu       $a2, $s6, 0x14
    ctx->pc = 0x23f20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_23f210:
    // 0x23f210: 0x24a55f08  addiu       $a1, $a1, 0x5F08
    ctx->pc = 0x23f210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24328));
label_23f214:
    // 0x23f214: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x23f214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23f218:
    // 0x23f218: 0xc08b5ac  jal         func_22D6B0
label_23f21c:
    if (ctx->pc == 0x23F21Cu) {
        ctx->pc = 0x23F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F218u;
        // 0x23f21c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F220u;
        goto label_23f220;
    }
    ctx->pc = 0x23F218u;
    SET_GPR_U32(ctx, 31, 0x23F220u);
    ctx->pc = 0x23F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F218u;
    // 0x23f21c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F218u, 0x23F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F220u;
label_23f220:
    // 0x23f220: 0x10000131  b           . + 4 + (0x131 << 2)
label_23f224:
    if (ctx->pc == 0x23F224u) {
        ctx->pc = 0x23F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F220u;
        // 0x23f224: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F228u;
        goto label_23f228;
    }
    ctx->pc = 0x23F220u;
    {
        const bool branch_taken_0x23f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F220u;
        // 0x23f224: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f220) {
            ctx->pc = 0x23F6E8u;
            goto label_23f6e8;
        }
    }
    ctx->pc = 0x23F228u;
label_23f228:
    // 0x23f228: 0x8cb70008  lw          $s7, 0x8($a1)
    ctx->pc = 0x23f228u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23f22c:
    // 0x23f22c: 0x92f00003  lbu         $s0, 0x3($s7)
    ctx->pc = 0x23f22cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23f230:
    // 0x23f230: 0x92f10002  lbu         $s1, 0x2($s7)
    ctx->pc = 0x23f230u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23f234:
    // 0x23f234: 0x102238  dsll        $a0, $s0, 8
    ctx->pc = 0x23f234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 8);
label_23f238:
    // 0x23f238: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x23f238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
label_23f23c:
    // 0x23f23c: 0xc08b60c  jal         func_22D830
label_23f240:
    if (ctx->pc == 0x23F240u) {
        ctx->pc = 0x23F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F23Cu;
        // 0x23f240: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F244u;
        goto label_23f244;
    }
    ctx->pc = 0x23F23Cu;
    SET_GPR_U32(ctx, 31, 0x23F244u);
    ctx->pc = 0x23F240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F23Cu;
    // 0x23f240: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23F23Cu, 0x23F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F244u;
label_23f244:
    // 0x23f244: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23f244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f248:
    // 0x23f248: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x23f248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_23f24c:
    // 0x23f24c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_23f250:
    if (ctx->pc == 0x23F250u) {
        ctx->pc = 0x23F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F24Cu;
        // 0x23f250: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F254u;
        goto label_23f254;
    }
    ctx->pc = 0x23F24Cu;
    {
        const bool branch_taken_0x23f24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f24c) {
            ctx->pc = 0x23F250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F24Cu;
            // 0x23f250: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F254u;
            goto label_23f254;
        }
    }
    ctx->pc = 0x23F254u;
label_23f254:
    // 0x23f254: 0x92f20000  lbu         $s2, 0x0($s7)
    ctx->pc = 0x23f254u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23f258:
    // 0x23f258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f25c:
    // 0x23f25c: 0x124200a7  beq         $s2, $v0, . + 4 + (0xA7 << 2)
label_23f260:
    if (ctx->pc == 0x23F260u) {
        ctx->pc = 0x23F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F25Cu;
        // 0x23f260: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F264u;
        goto label_23f264;
    }
    ctx->pc = 0x23F25Cu;
    {
        const bool branch_taken_0x23f25c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F25Cu;
        // 0x23f260: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f25c) {
            ctx->pc = 0x23F4FCu;
            goto label_23f4fc;
        }
    }
    ctx->pc = 0x23F264u;
label_23f264:
    // 0x23f264: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23f268:
    if (ctx->pc == 0x23F268u) {
        ctx->pc = 0x23F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F264u;
        // 0x23f268: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F26Cu;
        goto label_23f26c;
    }
    ctx->pc = 0x23F264u;
    {
        const bool branch_taken_0x23f264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F264u;
        // 0x23f268: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f264) {
            ctx->pc = 0x23F27Cu;
            goto label_23f27c;
        }
    }
    ctx->pc = 0x23F26Cu;
label_23f26c:
    // 0x23f26c: 0x12530007  beq         $s2, $s3, . + 4 + (0x7 << 2)
label_23f270:
    if (ctx->pc == 0x23F270u) {
        ctx->pc = 0x23F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F26Cu;
        // 0x23f270: 0x102238  dsll        $a0, $s0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F274u;
        goto label_23f274;
    }
    ctx->pc = 0x23F26Cu;
    {
        const bool branch_taken_0x23f26c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x23F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F26Cu;
        // 0x23f270: 0x102238  dsll        $a0, $s0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f26c) {
            ctx->pc = 0x23F28Cu;
            goto label_23f28c;
        }
    }
    ctx->pc = 0x23F274u;
label_23f274:
    // 0x23f274: 0x10000104  b           . + 4 + (0x104 << 2)
label_23f278:
    if (ctx->pc == 0x23F278u) {
        ctx->pc = 0x23F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F274u;
        // 0x23f278: 0x912025  or          $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F27Cu;
        goto label_23f27c;
    }
    ctx->pc = 0x23F274u;
    {
        const bool branch_taken_0x23f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F274u;
        // 0x23f278: 0x912025  or          $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f274) {
            ctx->pc = 0x23F688u;
            goto label_23f688;
        }
    }
    ctx->pc = 0x23F27Cu;
label_23f27c:
    // 0x23f27c: 0x124200de  beq         $s2, $v0, . + 4 + (0xDE << 2)
label_23f280:
    if (ctx->pc == 0x23F280u) {
        ctx->pc = 0x23F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F27Cu;
        // 0x23f280: 0x102238  dsll        $a0, $s0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F284u;
        goto label_23f284;
    }
    ctx->pc = 0x23F27Cu;
    {
        const bool branch_taken_0x23f27c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F27Cu;
        // 0x23f280: 0x102238  dsll        $a0, $s0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f27c) {
            ctx->pc = 0x23F5F8u;
            goto label_23f5f8;
        }
    }
    ctx->pc = 0x23F284u;
label_23f284:
    // 0x23f284: 0x10000100  b           . + 4 + (0x100 << 2)
label_23f288:
    if (ctx->pc == 0x23F288u) {
        ctx->pc = 0x23F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F284u;
        // 0x23f288: 0x912025  or          $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F28Cu;
        goto label_23f28c;
    }
    ctx->pc = 0x23F284u;
    {
        const bool branch_taken_0x23f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F284u;
        // 0x23f288: 0x912025  or          $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f284) {
            ctx->pc = 0x23F688u;
            goto label_23f688;
        }
    }
    ctx->pc = 0x23F28Cu;
label_23f28c:
    // 0x23f28c: 0x92f50004  lbu         $s5, 0x4($s7)
    ctx->pc = 0x23f28cu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
label_23f290:
    // 0x23f290: 0x26e20005  addiu       $v0, $s7, 0x5
    ctx->pc = 0x23f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 5));
label_23f294:
    // 0x23f294: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23f294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23f298:
    // 0x23f298: 0x2682fffa  addiu       $v0, $s4, -0x6
    ctx->pc = 0x23f298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967290));
label_23f29c:
    // 0x23f29c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23f2a0:
    // 0x23f2a0: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x23f2a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_23f2a4:
    // 0x23f2a4: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_23f2a8:
    // 0x23f2a8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x23f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23f2ac:
    // 0x23f2ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23f2b0:
    if (ctx->pc == 0x23F2B0u) {
        ctx->pc = 0x23F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2ACu;
        // 0x23f2b0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F2B4u;
        goto label_23f2b4;
    }
    ctx->pc = 0x23F2ACu;
    {
        const bool branch_taken_0x23f2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2ACu;
        // 0x23f2b0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2ac) {
            ctx->pc = 0x23F2CCu;
            goto label_23f2cc;
        }
    }
    ctx->pc = 0x23F2B4u;
label_23f2b4:
    // 0x23f2b4: 0x90be0000  lbu         $fp, 0x0($a1)
    ctx->pc = 0x23f2b4u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23f2b8:
    // 0x23f2b8: 0x26a20006  addiu       $v0, $s5, 0x6
    ctx->pc = 0x23f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
label_23f2bc:
    // 0x23f2bc: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x23f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23f2c0:
    // 0x23f2c0: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x23f2c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_23f2c4:
    // 0x23f2c4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_23f2c8:
    if (ctx->pc == 0x23F2C8u) {
        ctx->pc = 0x23F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2C4u;
        // 0x23f2c8: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F2CCu;
        goto label_23f2cc;
    }
    ctx->pc = 0x23F2C4u;
    {
        const bool branch_taken_0x23f2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2C4u;
        // 0x23f2c8: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2c4) {
            ctx->pc = 0x23F354u;
            goto label_23f354;
        }
    }
    ctx->pc = 0x23F2CCu;
label_23f2cc:
    // 0x23f2cc: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23f2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23f2d0:
    // 0x23f2d0: 0x3404c023  ori         $a0, $zero, 0xC023
    ctx->pc = 0x23f2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
label_23f2d4:
    // 0x23f2d4: 0x26105f38  addiu       $s0, $s0, 0x5F38
    ctx->pc = 0x23f2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24376));
label_23f2d8:
    // 0x23f2d8: 0xc0902e8  jal         func_240BA0
label_23f2dc:
    if (ctx->pc == 0x23F2DCu) {
        ctx->pc = 0x23F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2D8u;
        // 0x23f2dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F2E0u;
        goto label_23f2e0;
    }
    ctx->pc = 0x23F2D8u;
    SET_GPR_U32(ctx, 31, 0x23F2E0u);
    ctx->pc = 0x23F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2D8u;
    // 0x23f2dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BA0u, 0x23F2D8u, 0x23F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2E0u;
label_23f2e0:
    // 0x23f2e0: 0x26d30014  addiu       $s3, $s6, 0x14
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_23f2e4:
    // 0x23f2e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23f2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f2e8:
    // 0x23f2e8: 0x92e40003  lbu         $a0, 0x3($s7)
    ctx->pc = 0x23f2e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23f2ec:
    // 0x23f2ec: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x23f2ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23f2f0:
    // 0x23f2f0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23f2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23f2f4:
    // 0x23f2f4: 0x92f10001  lbu         $s1, 0x1($s7)
    ctx->pc = 0x23f2f4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23f2f8:
    // 0x23f2f8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23f2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23f2fc:
    // 0x23f2fc: 0xc08b60c  jal         func_22D830
label_23f300:
    if (ctx->pc == 0x23F300u) {
        ctx->pc = 0x23F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2FCu;
        // 0x23f300: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F304u;
        goto label_23f304;
    }
    ctx->pc = 0x23F2FCu;
    SET_GPR_U32(ctx, 31, 0x23F304u);
    ctx->pc = 0x23F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2FCu;
    // 0x23f300: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23F2FCu, 0x23F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F304u;
label_23f304:
    // 0x23f304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f308:
    // 0x23f308: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23f308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23f30c:
    // 0x23f30c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23f30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f310:
    // 0x23f310: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23f310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f314:
    // 0x23f314: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23f314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f318:
    // 0x23f318: 0xc08b5ac  jal         func_22D6B0
label_23f31c:
    if (ctx->pc == 0x23F31Cu) {
        ctx->pc = 0x23F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F318u;
        // 0x23f31c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F320u;
        goto label_23f320;
    }
    ctx->pc = 0x23F318u;
    SET_GPR_U32(ctx, 31, 0x23F320u);
    ctx->pc = 0x23F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F318u;
    // 0x23f31c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F318u, 0x23F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F320u;
label_23f320:
    // 0x23f320: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x23f320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_23f324:
    // 0x23f324: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23f328:
    if (ctx->pc == 0x23F328u) {
        ctx->pc = 0x23F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F324u;
        // 0x23f328: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F32Cu;
        goto label_23f32c;
    }
    ctx->pc = 0x23F324u;
    {
        const bool branch_taken_0x23f324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f324) {
            ctx->pc = 0x23F328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F324u;
            // 0x23f328: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F340u;
            goto label_23f340;
        }
    }
    ctx->pc = 0x23F32Cu;
label_23f32c:
    // 0x23f32c: 0x2685fffc  addiu       $a1, $s4, -0x4
    ctx->pc = 0x23f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_23f330:
    // 0x23f330: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x23f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_23f334:
    // 0x23f334: 0xc090404  jal         func_241010
label_23f338:
    if (ctx->pc == 0x23F338u) {
        ctx->pc = 0x23F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F334u;
        // 0x23f338: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F33Cu;
        goto label_23f33c;
    }
    ctx->pc = 0x23F334u;
    SET_GPR_U32(ctx, 31, 0x23F33Cu);
    ctx->pc = 0x23F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F334u;
    // 0x23f338: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241010u, 0x23F334u, 0x23F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F33Cu;
label_23f33c:
    // 0x23f33c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f340:
    // 0x23f340: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f344:
    // 0x23f344: 0xc08b5ac  jal         func_22D6B0
label_23f348:
    if (ctx->pc == 0x23F348u) {
        ctx->pc = 0x23F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F344u;
        // 0x23f348: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F34Cu;
        goto label_23f34c;
    }
    ctx->pc = 0x23F344u;
    SET_GPR_U32(ctx, 31, 0x23F34Cu);
    ctx->pc = 0x23F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F344u;
    // 0x23f348: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F344u, 0x23F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F34Cu;
label_23f34c:
    // 0x23f34c: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_23f350:
    if (ctx->pc == 0x23F350u) {
        ctx->pc = 0x23F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F34Cu;
        // 0x23f350: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F354u;
        goto label_23f354;
    }
    ctx->pc = 0x23F34Cu;
    {
        const bool branch_taken_0x23f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F34Cu;
        // 0x23f350: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f34c) {
            ctx->pc = 0x23F6E8u;
            goto label_23f6e8;
        }
    }
    ctx->pc = 0x23F354u;
label_23f354:
    // 0x23f354: 0x8ec40170  lw          $a0, 0x170($s6)
    ctx->pc = 0x23f354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 368)));
label_23f358:
    // 0x23f358: 0x26105f68  addiu       $s0, $s0, 0x5F68
    ctx->pc = 0x23f358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24424));
label_23f35c:
    // 0x23f35c: 0xc09038e  jal         func_240E38
label_23f360:
    if (ctx->pc == 0x23F360u) {
        ctx->pc = 0x23F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F35Cu;
        // 0x23f360: 0x26d40014  addiu       $s4, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F364u;
        goto label_23f364;
    }
    ctx->pc = 0x23F35Cu;
    SET_GPR_U32(ctx, 31, 0x23F364u);
    ctx->pc = 0x23F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F35Cu;
    // 0x23f360: 0x26d40014  addiu       $s4, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23F35Cu, 0x23F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F364u;
label_23f364:
    // 0x23f364: 0x92e50000  lbu         $a1, 0x0($s7)
    ctx->pc = 0x23f364u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23f368:
    // 0x23f368: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23f368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f36c:
    // 0x23f36c: 0xc0902e8  jal         func_240BA0
label_23f370:
    if (ctx->pc == 0x23F370u) {
        ctx->pc = 0x23F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F36Cu;
        // 0x23f370: 0x3404c023  ori         $a0, $zero, 0xC023 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F374u;
        goto label_23f374;
    }
    ctx->pc = 0x23F36Cu;
    SET_GPR_U32(ctx, 31, 0x23F374u);
    ctx->pc = 0x23F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F36Cu;
    // 0x23f370: 0x3404c023  ori         $a0, $zero, 0xC023 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BA0u, 0x23F36Cu, 0x23F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F374u;
label_23f374:
    // 0x23f374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23f374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f378:
    // 0x23f378: 0x92e40003  lbu         $a0, 0x3($s7)
    ctx->pc = 0x23f378u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23f37c:
    // 0x23f37c: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x23f37cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23f380:
    // 0x23f380: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23f380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23f384:
    // 0x23f384: 0x92f10001  lbu         $s1, 0x1($s7)
    ctx->pc = 0x23f384u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23f388:
    // 0x23f388: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23f388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23f38c:
    // 0x23f38c: 0xc08b60c  jal         func_22D830
label_23f390:
    if (ctx->pc == 0x23F390u) {
        ctx->pc = 0x23F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F38Cu;
        // 0x23f390: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F394u;
        goto label_23f394;
    }
    ctx->pc = 0x23F38Cu;
    SET_GPR_U32(ctx, 31, 0x23F394u);
    ctx->pc = 0x23F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F38Cu;
    // 0x23f390: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23F38Cu, 0x23F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F394u;
label_23f394:
    // 0x23f394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f398:
    // 0x23f398: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23f398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23f39c:
    // 0x23f39c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23f39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23f3a0:
    // 0x23f3a0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x23f3a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f3a4:
    // 0x23f3a4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x23f3a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f3a8:
    // 0x23f3a8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x23f3a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f3ac:
    // 0x23f3ac: 0xc08b5ac  jal         func_22D6B0
label_23f3b0:
    if (ctx->pc == 0x23F3B0u) {
        ctx->pc = 0x23F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3ACu;
        // 0x23f3b0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3B4u;
        goto label_23f3b4;
    }
    ctx->pc = 0x23F3ACu;
    SET_GPR_U32(ctx, 31, 0x23F3B4u);
    ctx->pc = 0x23F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3ACu;
    // 0x23f3b0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F3ACu, 0x23F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3B4u;
label_23f3b4:
    // 0x23f3b4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x23f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23f3b8:
    // 0x23f3b8: 0xc090424  jal         func_241090
label_23f3bc:
    if (ctx->pc == 0x23F3BCu) {
        ctx->pc = 0x23F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3B8u;
        // 0x23f3bc: 0x32a5ffff  andi        $a1, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3C0u;
        goto label_23f3c0;
    }
    ctx->pc = 0x23F3B8u;
    SET_GPR_U32(ctx, 31, 0x23F3C0u);
    ctx->pc = 0x23F3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3B8u;
    // 0x23f3bc: 0x32a5ffff  andi        $a1, $s5, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23F3B8u, 0x23F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3C0u;
label_23f3c0:
    // 0x23f3c0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f3c4:
    // 0x23f3c4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f3c8:
    // 0x23f3c8: 0xc08b5ac  jal         func_22D6B0
label_23f3cc:
    if (ctx->pc == 0x23F3CCu) {
        ctx->pc = 0x23F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3C8u;
        // 0x23f3cc: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3D0u;
        goto label_23f3d0;
    }
    ctx->pc = 0x23F3C8u;
    SET_GPR_U32(ctx, 31, 0x23F3D0u);
    ctx->pc = 0x23F3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3C8u;
    // 0x23f3cc: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F3C8u, 0x23F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3D0u;
label_23f3d0:
    // 0x23f3d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23f3d4:
    // 0x23f3d4: 0xc090424  jal         func_241090
label_23f3d8:
    if (ctx->pc == 0x23F3D8u) {
        ctx->pc = 0x23F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3D4u;
        // 0x23f3d8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3DCu;
        goto label_23f3dc;
    }
    ctx->pc = 0x23F3D4u;
    SET_GPR_U32(ctx, 31, 0x23F3DCu);
    ctx->pc = 0x23F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3D4u;
    // 0x23f3d8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23F3D4u, 0x23F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3DCu;
label_23f3dc:
    // 0x23f3dc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f3e0:
    // 0x23f3e0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f3e4:
    // 0x23f3e4: 0xc08b5ac  jal         func_22D6B0
label_23f3e8:
    if (ctx->pc == 0x23F3E8u) {
        ctx->pc = 0x23F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3E4u;
        // 0x23f3e8: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3ECu;
        goto label_23f3ec;
    }
    ctx->pc = 0x23F3E4u;
    SET_GPR_U32(ctx, 31, 0x23F3ECu);
    ctx->pc = 0x23F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3E4u;
    // 0x23f3e8: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F3E4u, 0x23F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3ECu;
label_23f3ec:
    // 0x23f3ec: 0x2aa20100  slti        $v0, $s5, 0x100
    ctx->pc = 0x23f3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)256) ? 1 : 0);
label_23f3f0:
    // 0x23f3f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_23f3f4:
    if (ctx->pc == 0x23F3F4u) {
        ctx->pc = 0x23F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3F0u;
        // 0x23f3f4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3F8u;
        goto label_23f3f8;
    }
    ctx->pc = 0x23F3F0u;
    {
        const bool branch_taken_0x23f3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3F0u;
        // 0x23f3f4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3f0) {
            ctx->pc = 0x23F434u;
            goto label_23f434;
        }
    }
    ctx->pc = 0x23F3F8u;
label_23f3f8:
    // 0x23f3f8: 0x2bc20100  slti        $v0, $fp, 0x100
    ctx->pc = 0x23f3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)256) ? 1 : 0);
label_23f3fc:
    // 0x23f3fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_23f400:
    if (ctx->pc == 0x23F400u) {
        ctx->pc = 0x23F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3FCu;
        // 0x23f400: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F404u;
        goto label_23f404;
    }
    ctx->pc = 0x23F3FCu;
    {
        const bool branch_taken_0x23f3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3FCu;
        // 0x23f400: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3fc) {
            ctx->pc = 0x23F430u;
            goto label_23f430;
        }
    }
    ctx->pc = 0x23F404u;
label_23f404:
    // 0x23f404: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23f404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23f408:
    // 0x23f408: 0xc048c5e  jal         func_123178
label_23f40c:
    if (ctx->pc == 0x23F40Cu) {
        ctx->pc = 0x23F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F408u;
        // 0x23f40c: 0x26c54248  addiu       $a1, $s6, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F410u;
        goto label_23f410;
    }
    ctx->pc = 0x23F408u;
    SET_GPR_U32(ctx, 31, 0x23F410u);
    ctx->pc = 0x23F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F408u;
    // 0x23f40c: 0x26c54248  addiu       $a1, $s6, 0x4248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x23F408u, 0x23F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F410u;
label_23f410:
    // 0x23f410: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23f414:
    if (ctx->pc == 0x23F414u) {
        ctx->pc = 0x23F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F410u;
        // 0x23f414: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F418u;
        goto label_23f418;
    }
    ctx->pc = 0x23F410u;
    {
        const bool branch_taken_0x23f410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F410u;
        // 0x23f414: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f410) {
            ctx->pc = 0x23F434u;
            goto label_23f434;
        }
    }
    ctx->pc = 0x23F418u;
label_23f418:
    // 0x23f418: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23f418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23f41c:
    // 0x23f41c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23f41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23f420:
    // 0x23f420: 0xc048c5e  jal         func_123178
label_23f424:
    if (ctx->pc == 0x23F424u) {
        ctx->pc = 0x23F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F420u;
        // 0x23f424: 0x26c54348  addiu       $a1, $s6, 0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 17224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F428u;
        goto label_23f428;
    }
    ctx->pc = 0x23F420u;
    SET_GPR_U32(ctx, 31, 0x23F428u);
    ctx->pc = 0x23F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F420u;
    // 0x23f424: 0x26c54348  addiu       $a1, $s6, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x23F420u, 0x23F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F428u;
label_23f428:
    // 0x23f428: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_23f42c:
    if (ctx->pc == 0x23F42Cu) {
        ctx->pc = 0x23F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F428u;
        // 0x23f42c: 0x8ec30170  lw          $v1, 0x170($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F430u;
        goto label_23f430;
    }
    ctx->pc = 0x23F428u;
    {
        const bool branch_taken_0x23f428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f428) {
            ctx->pc = 0x23F42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F428u;
            // 0x23f42c: 0x8ec30170  lw          $v1, 0x170($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F474u;
            goto label_23f474;
        }
    }
    ctx->pc = 0x23F430u;
label_23f430:
    // 0x23f430: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23f434:
    // 0x23f434: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23f434u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23f438:
    // 0x23f438: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x23f438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_23f43c:
    // 0x23f43c: 0x26105138  addiu       $s0, $s0, 0x5138
    ctx->pc = 0x23f43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20792));
label_23f440:
    // 0x23f440: 0x3c0b003f  lui         $t3, 0x3F
    ctx->pc = 0x23f440u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)63 << 16));
label_23f444:
    // 0x23f444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f448:
    // 0x23f448: 0x92e70001  lbu         $a3, 0x1($s7)
    ctx->pc = 0x23f448u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23f44c:
    // 0x23f44c: 0x256b5de0  addiu       $t3, $t3, 0x5DE0
    ctx->pc = 0x23f44cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 24032));
label_23f450:
    // 0x23f450: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x23f450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_23f454:
    // 0x23f454: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23f454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23f458:
    // 0x23f458: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23f458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23f45c:
    // 0x23f45c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23f45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f460:
    // 0x23f460: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x23f460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23f464:
    // 0x23f464: 0xc08fecc  jal         func_23FB30
label_23f468:
    if (ctx->pc == 0x23F468u) {
        ctx->pc = 0x23F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F464u;
        // 0x23f468: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F46Cu;
        goto label_23f46c;
    }
    ctx->pc = 0x23F464u;
    SET_GPR_U32(ctx, 31, 0x23F46Cu);
    ctx->pc = 0x23F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F464u;
    // 0x23f468: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB30u, 0x23F464u, 0x23F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F46Cu;
label_23f46c:
    // 0x23f46c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_23f470:
    if (ctx->pc == 0x23F470u) {
        ctx->pc = 0x23F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F46Cu;
        // 0x23f470: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F474u;
        goto label_23f474;
    }
    ctx->pc = 0x23F46Cu;
    {
        const bool branch_taken_0x23f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F46Cu;
        // 0x23f470: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f46c) {
            ctx->pc = 0x23F4ECu;
            goto label_23f4ec;
        }
    }
    ctx->pc = 0x23F474u;
label_23f474:
    // 0x23f474: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23f478:
    // 0x23f478: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23f47c:
    if (ctx->pc == 0x23F47Cu) {
        ctx->pc = 0x23F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F478u;
        // 0x23f47c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F480u;
        goto label_23f480;
    }
    ctx->pc = 0x23F478u;
    {
        const bool branch_taken_0x23f478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F478u;
        // 0x23f47c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f478) {
            ctx->pc = 0x23F488u;
            goto label_23f488;
        }
    }
    ctx->pc = 0x23F480u;
label_23f480:
    // 0x23f480: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_23f484:
    if (ctx->pc == 0x23F484u) {
        ctx->pc = 0x23F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F480u;
        // 0x23f484: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F488u;
        goto label_23f488;
    }
    ctx->pc = 0x23F480u;
    {
        const bool branch_taken_0x23f480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F480u;
        // 0x23f484: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f480) {
            ctx->pc = 0x23F4C8u;
            goto label_23f4c8;
        }
    }
    ctx->pc = 0x23F488u;
label_23f488:
    // 0x23f488: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23f48c:
    // 0x23f48c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23f490:
    // 0x23f490: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x23f490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_23f494:
    // 0x23f494: 0x3c0b003f  lui         $t3, 0x3F
    ctx->pc = 0x23f494u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)63 << 16));
label_23f498:
    // 0x23f498: 0x24845138  addiu       $a0, $a0, 0x5138
    ctx->pc = 0x23f498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20792));
label_23f49c:
    // 0x23f49c: 0x256b5df0  addiu       $t3, $t3, 0x5DF0
    ctx->pc = 0x23f49cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 24048));
label_23f4a0:
    // 0x23f4a0: 0x92e70001  lbu         $a3, 0x1($s7)
    ctx->pc = 0x23f4a0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23f4a4:
    // 0x23f4a4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23f4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23f4a8:
    // 0x23f4a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x23f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_23f4ac:
    // 0x23f4ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23f4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f4b0:
    // 0x23f4b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23f4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f4b4:
    // 0x23f4b4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x23f4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23f4b8:
    // 0x23f4b8: 0xc08fecc  jal         func_23FB30
label_23f4bc:
    if (ctx->pc == 0x23F4BCu) {
        ctx->pc = 0x23F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4B8u;
        // 0x23f4bc: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4C0u;
        goto label_23f4c0;
    }
    ctx->pc = 0x23F4B8u;
    SET_GPR_U32(ctx, 31, 0x23F4C0u);
    ctx->pc = 0x23F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4B8u;
    // 0x23f4bc: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB30u, 0x23F4B8u, 0x23F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4C0u;
label_23f4c0:
    // 0x23f4c0: 0x8ec30170  lw          $v1, 0x170($s6)
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 368)));
label_23f4c4:
    // 0x23f4c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23f4c8:
    // 0x23f4c8: 0x14620087  bne         $v1, $v0, . + 4 + (0x87 << 2)
label_23f4cc:
    if (ctx->pc == 0x23F4CCu) {
        ctx->pc = 0x23F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4C8u;
        // 0x23f4cc: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4D0u;
        goto label_23f4d0;
    }
    ctx->pc = 0x23F4C8u;
    {
        const bool branch_taken_0x23f4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4C8u;
        // 0x23f4cc: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4c8) {
            ctx->pc = 0x23F6E8u;
            goto label_23f6e8;
        }
    }
    ctx->pc = 0x23F4D0u;
label_23f4d0:
    // 0x23f4d0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23f4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23f4d4:
    // 0x23f4d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23f4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23f4d8:
    // 0x23f4d8: 0x26105138  addiu       $s0, $s0, 0x5138
    ctx->pc = 0x23f4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20792));
label_23f4dc:
    // 0x23f4dc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x23f4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23f4e0:
    // 0x23f4e0: 0xc08eef2  jal         func_23BBC8
label_23f4e4:
    if (ctx->pc == 0x23F4E4u) {
        ctx->pc = 0x23F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4E0u;
        // 0x23f4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4E8u;
        goto label_23f4e8;
    }
    ctx->pc = 0x23F4E0u;
    SET_GPR_U32(ctx, 31, 0x23F4E8u);
    ctx->pc = 0x23F4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4E0u;
    // 0x23f4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23F4E0u, 0x23F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4E8u;
label_23f4e8:
    // 0x23f4e8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x23f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_23f4ec:
    // 0x23f4ec: 0x40f809  jalr        $v0
label_23f4f0:
    if (ctx->pc == 0x23F4F0u) {
        ctx->pc = 0x23F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4ECu;
        // 0x23f4f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4F4u;
        goto label_23f4f4;
    }
    ctx->pc = 0x23F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F4F4u);
        ctx->pc = 0x23F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4ECu;
        // 0x23f4f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F4ECu, 0x23F4F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F4F4u;
label_23f4f4:
    // 0x23f4f4: 0x1000007c  b           . + 4 + (0x7C << 2)
label_23f4f8:
    if (ctx->pc == 0x23F4F8u) {
        ctx->pc = 0x23F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4F4u;
        // 0x23f4f8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4FCu;
        goto label_23f4fc;
    }
    ctx->pc = 0x23F4F4u;
    {
        const bool branch_taken_0x23f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4F4u;
        // 0x23f4f8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4f4) {
            ctx->pc = 0x23F6E8u;
            goto label_23f6e8;
        }
    }
    ctx->pc = 0x23F4FCu;
label_23f4fc:
    // 0x23f4fc: 0xc08a08c  jal         func_228230
label_23f500:
    if (ctx->pc == 0x23F500u) {
        ctx->pc = 0x23F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4FCu;
        // 0x23f500: 0x26c40250  addiu       $a0, $s6, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F504u;
        goto label_23f504;
    }
    ctx->pc = 0x23F4FCu;
    SET_GPR_U32(ctx, 31, 0x23F504u);
    ctx->pc = 0x23F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4FCu;
    // 0x23f500: 0x26c40250  addiu       $a0, $s6, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x23F4FCu, 0x23F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F504u;
label_23f504:
    // 0x23f504: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f508:
    // 0x23f508: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f50c:
    // 0x23f50c: 0x24a55fa8  addiu       $a1, $a1, 0x5FA8
    ctx->pc = 0x23f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24488));
label_23f510:
    // 0x23f510: 0xc08b5ac  jal         func_22D6B0
label_23f514:
    if (ctx->pc == 0x23F514u) {
        ctx->pc = 0x23F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F510u;
        // 0x23f514: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F518u;
        goto label_23f518;
    }
    ctx->pc = 0x23F510u;
    SET_GPR_U32(ctx, 31, 0x23F518u);
    ctx->pc = 0x23F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F510u;
    // 0x23f514: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F510u, 0x23F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F518u;
label_23f518:
    // 0x23f518: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x23f518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_23f51c:
    // 0x23f51c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_23f520:
    if (ctx->pc == 0x23F520u) {
        ctx->pc = 0x23F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F51Cu;
        // 0x23f520: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F524u;
        goto label_23f524;
    }
    ctx->pc = 0x23F51Cu;
    {
        const bool branch_taken_0x23f51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F51Cu;
        // 0x23f520: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f51c) {
            ctx->pc = 0x23F578u;
            goto label_23f578;
        }
    }
    ctx->pc = 0x23F524u;
label_23f524:
    // 0x23f524: 0x82f50004  lb          $s5, 0x4($s7)
    ctx->pc = 0x23f524u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
label_23f528:
    // 0x23f528: 0x2413007f  addiu       $s3, $zero, 0x7F
    ctx->pc = 0x23f528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_23f52c:
    // 0x23f52c: 0x2aa20080  slti        $v0, $s5, 0x80
    ctx->pc = 0x23f52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)128) ? 1 : 0);
label_23f530:
    // 0x23f530: 0x2a2980b  movn        $s3, $s5, $v0
    ctx->pc = 0x23f530u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 21));
label_23f534:
    // 0x23f534: 0x1a600007  blez        $s3, . + 4 + (0x7 << 2)
label_23f538:
    if (ctx->pc == 0x23F538u) {
        ctx->pc = 0x23F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F534u;
        // 0x23f538: 0x26d0455c  addiu       $s0, $s6, 0x455C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 17756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F53Cu;
        goto label_23f53c;
    }
    ctx->pc = 0x23F534u;
    {
        const bool branch_taken_0x23f534 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x23F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F534u;
        // 0x23f538: 0x26d0455c  addiu       $s0, $s6, 0x455C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 17756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f534) {
            ctx->pc = 0x23F554u;
            goto label_23f554;
        }
    }
    ctx->pc = 0x23F53Cu;
label_23f53c:
    // 0x23f53c: 0x26e50005  addiu       $a1, $s7, 0x5
    ctx->pc = 0x23f53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 5));
label_23f540:
    // 0x23f540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f544:
    // 0x23f544: 0xc08b538  jal         func_22D4E0
label_23f548:
    if (ctx->pc == 0x23F548u) {
        ctx->pc = 0x23F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F544u;
        // 0x23f548: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F54Cu;
        goto label_23f54c;
    }
    ctx->pc = 0x23F544u;
    SET_GPR_U32(ctx, 31, 0x23F54Cu);
    ctx->pc = 0x23F548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F544u;
    // 0x23f548: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x23F544u, 0x23F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F54Cu;
label_23f54c:
    // 0x23f54c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x23f54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_23f550:
    // 0x23f550: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f554:
    // 0x23f554: 0x1aa00007  blez        $s5, . + 4 + (0x7 << 2)
label_23f558:
    if (ctx->pc == 0x23F558u) {
        ctx->pc = 0x23F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F554u;
        // 0x23f558: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F55Cu;
        goto label_23f55c;
    }
    ctx->pc = 0x23F554u;
    {
        const bool branch_taken_0x23f554 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x23F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F554u;
        // 0x23f558: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f554) {
            ctx->pc = 0x23F574u;
            goto label_23f574;
        }
    }
    ctx->pc = 0x23F55Cu;
label_23f55c:
    // 0x23f55c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f560:
    // 0x23f560: 0xc08b5ac  jal         func_22D6B0
label_23f564:
    if (ctx->pc == 0x23F564u) {
        ctx->pc = 0x23F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F560u;
        // 0x23f564: 0x24a55cb8  addiu       $a1, $a1, 0x5CB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F568u;
        goto label_23f568;
    }
    ctx->pc = 0x23F560u;
    SET_GPR_U32(ctx, 31, 0x23F568u);
    ctx->pc = 0x23F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F560u;
    // 0x23f564: 0x24a55cb8  addiu       $a1, $a1, 0x5CB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F560u, 0x23F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F568u;
label_23f568:
    // 0x23f568: 0x26e40005  addiu       $a0, $s7, 0x5
    ctx->pc = 0x23f568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 5));
label_23f56c:
    // 0x23f56c: 0xc090424  jal         func_241090
label_23f570:
    if (ctx->pc == 0x23F570u) {
        ctx->pc = 0x23F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F56Cu;
        // 0x23f570: 0x32a5ffff  andi        $a1, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F574u;
        goto label_23f574;
    }
    ctx->pc = 0x23F56Cu;
    SET_GPR_U32(ctx, 31, 0x23F574u);
    ctx->pc = 0x23F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F56Cu;
    // 0x23f570: 0x32a5ffff  andi        $a1, $s5, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23F56Cu, 0x23F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F574u;
label_23f574:
    // 0x23f574: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f578:
    // 0x23f578: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f57c:
    // 0x23f57c: 0xc08b5ac  jal         func_22D6B0
label_23f580:
    if (ctx->pc == 0x23F580u) {
        ctx->pc = 0x23F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F57Cu;
        // 0x23f580: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F584u;
        goto label_23f584;
    }
    ctx->pc = 0x23F57Cu;
    SET_GPR_U32(ctx, 31, 0x23F584u);
    ctx->pc = 0x23F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F57Cu;
    // 0x23f580: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F57Cu, 0x23F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F584u;
label_23f584:
    // 0x23f584: 0xc08c682  jal         func_231A08
label_23f588:
    if (ctx->pc == 0x23F588u) {
        ctx->pc = 0x23F58Cu;
        goto label_23f58c;
    }
    ctx->pc = 0x23F584u;
    SET_GPR_U32(ctx, 31, 0x23F58Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23F584u, 0x23F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F58Cu;
label_23f58c:
    // 0x23f58c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23f58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f590:
    // 0x23f590: 0x8ec3012c  lw          $v1, 0x12C($s6)
    ctx->pc = 0x23f590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
label_23f594:
    // 0x23f594: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23f594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23f598:
    // 0x23f598: 0x96c5423c  lhu         $a1, 0x423C($s6)
    ctx->pc = 0x23f598u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16956)));
label_23f59c:
    // 0x23f59c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x23f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_23f5a0:
    // 0x23f5a0: 0x3404c023  ori         $a0, $zero, 0xC023
    ctx->pc = 0x23f5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
label_23f5a4:
    // 0x23f5a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23f5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23f5a8:
    // 0x23f5a8: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
label_23f5ac:
    if (ctx->pc == 0x23F5ACu) {
        ctx->pc = 0x23F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5A8u;
        // 0x23f5ac: 0xaec3012c  sw          $v1, 0x12C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F5B0u;
        goto label_23f5b0;
    }
    ctx->pc = 0x23F5A8u;
    {
        const bool branch_taken_0x23f5a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x23F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5A8u;
        // 0x23f5ac: 0xaec3012c  sw          $v1, 0x12C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5a8) {
            ctx->pc = 0x23F5E0u;
            goto label_23f5e0;
        }
    }
    ctx->pc = 0x23F5B0u;
label_23f5b0:
    // 0x23f5b0: 0x8ec20270  lw          $v0, 0x270($s6)
    ctx->pc = 0x23f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 624)));
label_23f5b4:
    // 0x23f5b4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23f5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23f5b8:
    // 0x23f5b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23f5bc:
    if (ctx->pc == 0x23F5BCu) {
        ctx->pc = 0x23F5C0u;
        goto label_23f5c0;
    }
    ctx->pc = 0x23F5B8u;
    {
        const bool branch_taken_0x23f5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f5b8) {
            ctx->pc = 0x23F5E0u;
            goto label_23f5e0;
        }
    }
    ctx->pc = 0x23F5C0u;
label_23f5c0:
    // 0x23f5c0: 0x8ec2029c  lw          $v0, 0x29C($s6)
    ctx->pc = 0x23f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 668)));
label_23f5c4:
    // 0x23f5c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23f5c8:
    // 0x23f5c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23f5cc:
    if (ctx->pc == 0x23F5CCu) {
        ctx->pc = 0x23F5D0u;
        goto label_23f5d0;
    }
    ctx->pc = 0x23F5C8u;
    {
        const bool branch_taken_0x23f5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f5c8) {
            ctx->pc = 0x23F5E0u;
            goto label_23f5e0;
        }
    }
    ctx->pc = 0x23F5D0u;
label_23f5d0:
    // 0x23f5d0: 0xc08c698  jal         func_231A60
label_23f5d4:
    if (ctx->pc == 0x23F5D4u) {
        ctx->pc = 0x23F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5D0u;
        // 0x23f5d4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F5D8u;
        goto label_23f5d8;
    }
    ctx->pc = 0x23F5D0u;
    SET_GPR_U32(ctx, 31, 0x23F5D8u);
    ctx->pc = 0x23F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5D0u;
    // 0x23f5d4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23F5D0u, 0x23F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5D8u;
label_23f5d8:
    // 0x23f5d8: 0x10000043  b           . + 4 + (0x43 << 2)
label_23f5dc:
    if (ctx->pc == 0x23F5DCu) {
        ctx->pc = 0x23F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5D8u;
        // 0x23f5dc: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F5E0u;
        goto label_23f5e0;
    }
    ctx->pc = 0x23F5D8u;
    {
        const bool branch_taken_0x23f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5D8u;
        // 0x23f5dc: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5d8) {
            ctx->pc = 0x23F6E8u;
            goto label_23f6e8;
        }
    }
    ctx->pc = 0x23F5E0u;
label_23f5e0:
    // 0x23f5e0: 0xc08c698  jal         func_231A60
label_23f5e4:
    if (ctx->pc == 0x23F5E4u) {
        ctx->pc = 0x23F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5E0u;
        // 0x23f5e4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F5E8u;
        goto label_23f5e8;
    }
    ctx->pc = 0x23F5E0u;
    SET_GPR_U32(ctx, 31, 0x23F5E8u);
    ctx->pc = 0x23F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5E0u;
    // 0x23f5e4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23F5E0u, 0x23F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5E8u;
label_23f5e8:
    // 0x23f5e8: 0xc09026a  jal         func_2409A8
label_23f5ec:
    if (ctx->pc == 0x23F5ECu) {
        ctx->pc = 0x23F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5E8u;
        // 0x23f5ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F5F0u;
        goto label_23f5f0;
    }
    ctx->pc = 0x23F5E8u;
    SET_GPR_U32(ctx, 31, 0x23F5F0u);
    ctx->pc = 0x23F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5E8u;
    // 0x23f5ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2409A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2409A8u, 0x23F5E8u, 0x23F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5F0u;
label_23f5f0:
    // 0x23f5f0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_23f5f4:
    if (ctx->pc == 0x23F5F4u) {
        ctx->pc = 0x23F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5F0u;
        // 0x23f5f4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F5F8u;
        goto label_23f5f8;
    }
    ctx->pc = 0x23F5F0u;
    {
        const bool branch_taken_0x23f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5F0u;
        // 0x23f5f4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5f0) {
            ctx->pc = 0x23F6E8u;
            goto label_23f6e8;
        }
    }
    ctx->pc = 0x23F5F8u;
label_23f5f8:
    // 0x23f5f8: 0xc08a08c  jal         func_228230
label_23f5fc:
    if (ctx->pc == 0x23F5FCu) {
        ctx->pc = 0x23F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5F8u;
        // 0x23f5fc: 0x26c40250  addiu       $a0, $s6, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F600u;
        goto label_23f600;
    }
    ctx->pc = 0x23F5F8u;
    SET_GPR_U32(ctx, 31, 0x23F600u);
    ctx->pc = 0x23F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5F8u;
    // 0x23f5fc: 0x26c40250  addiu       $a0, $s6, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x23F5F8u, 0x23F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F600u;
label_23f600:
    // 0x23f600: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f604:
    // 0x23f604: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23f604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23f608:
    // 0x23f608: 0x24a55fb8  addiu       $a1, $a1, 0x5FB8
    ctx->pc = 0x23f608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24504));
label_23f60c:
    // 0x23f60c: 0xc08b5ac  jal         func_22D6B0
label_23f610:
    if (ctx->pc == 0x23F610u) {
        ctx->pc = 0x23F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F60Cu;
        // 0x23f610: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F614u;
        goto label_23f614;
    }
    ctx->pc = 0x23F60Cu;
    SET_GPR_U32(ctx, 31, 0x23F614u);
    ctx->pc = 0x23F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F60Cu;
    // 0x23f610: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F60Cu, 0x23F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F614u;
label_23f614:
    // 0x23f614: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x23f614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_23f618:
    // 0x23f618: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_23f61c:
    if (ctx->pc == 0x23F61Cu) {
        ctx->pc = 0x23F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F618u;
        // 0x23f61c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F620u;
        goto label_23f620;
    }
    ctx->pc = 0x23F618u;
    {
        const bool branch_taken_0x23f618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F618u;
        // 0x23f61c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f618) {
            ctx->pc = 0x23F674u;
            goto label_23f674;
        }
    }
    ctx->pc = 0x23F620u;
label_23f620:
    // 0x23f620: 0x82f50004  lb          $s5, 0x4($s7)
    ctx->pc = 0x23f620u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
label_23f624:
    // 0x23f624: 0x2413007f  addiu       $s3, $zero, 0x7F
    ctx->pc = 0x23f624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_23f628:
    // 0x23f628: 0x2aa20080  slti        $v0, $s5, 0x80
    ctx->pc = 0x23f628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)128) ? 1 : 0);
label_23f62c:
    // 0x23f62c: 0x2a2980b  movn        $s3, $s5, $v0
    ctx->pc = 0x23f62cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 21));
label_23f630:
    // 0x23f630: 0x1a600007  blez        $s3, . + 4 + (0x7 << 2)
label_23f634:
    if (ctx->pc == 0x23F634u) {
        ctx->pc = 0x23F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F630u;
        // 0x23f634: 0x26d0455c  addiu       $s0, $s6, 0x455C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 17756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F638u;
        goto label_23f638;
    }
    ctx->pc = 0x23F630u;
    {
        const bool branch_taken_0x23f630 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x23F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F630u;
        // 0x23f634: 0x26d0455c  addiu       $s0, $s6, 0x455C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 17756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f630) {
            ctx->pc = 0x23F650u;
            goto label_23f650;
        }
    }
    ctx->pc = 0x23F638u;
label_23f638:
    // 0x23f638: 0x26e50005  addiu       $a1, $s7, 0x5
    ctx->pc = 0x23f638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 5));
label_23f63c:
    // 0x23f63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f640:
    // 0x23f640: 0xc08b538  jal         func_22D4E0
label_23f644:
    if (ctx->pc == 0x23F644u) {
        ctx->pc = 0x23F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F640u;
        // 0x23f644: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F648u;
        goto label_23f648;
    }
    ctx->pc = 0x23F640u;
    SET_GPR_U32(ctx, 31, 0x23F648u);
    ctx->pc = 0x23F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F640u;
    // 0x23f644: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x23F640u, 0x23F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F648u;
label_23f648:
    // 0x23f648: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x23f648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_23f64c:
    // 0x23f64c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f64cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f650:
    // 0x23f650: 0x1aa00007  blez        $s5, . + 4 + (0x7 << 2)
label_23f654:
    if (ctx->pc == 0x23F654u) {
        ctx->pc = 0x23F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F650u;
        // 0x23f654: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F658u;
        goto label_23f658;
    }
    ctx->pc = 0x23F650u;
    {
        const bool branch_taken_0x23f650 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x23F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F650u;
        // 0x23f654: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f650) {
            ctx->pc = 0x23F670u;
            goto label_23f670;
        }
    }
    ctx->pc = 0x23F658u;
label_23f658:
    // 0x23f658: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f65c:
    // 0x23f65c: 0xc08b5ac  jal         func_22D6B0
label_23f660:
    if (ctx->pc == 0x23F660u) {
        ctx->pc = 0x23F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F65Cu;
        // 0x23f660: 0x24a55cb8  addiu       $a1, $a1, 0x5CB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F664u;
        goto label_23f664;
    }
    ctx->pc = 0x23F65Cu;
    SET_GPR_U32(ctx, 31, 0x23F664u);
    ctx->pc = 0x23F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F65Cu;
    // 0x23f660: 0x24a55cb8  addiu       $a1, $a1, 0x5CB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F65Cu, 0x23F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F664u;
label_23f664:
    // 0x23f664: 0x26e40005  addiu       $a0, $s7, 0x5
    ctx->pc = 0x23f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 5));
label_23f668:
    // 0x23f668: 0xc090424  jal         func_241090
label_23f66c:
    if (ctx->pc == 0x23F66Cu) {
        ctx->pc = 0x23F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F668u;
        // 0x23f66c: 0x32a5ffff  andi        $a1, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F670u;
        goto label_23f670;
    }
    ctx->pc = 0x23F668u;
    SET_GPR_U32(ctx, 31, 0x23F670u);
    ctx->pc = 0x23F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F668u;
    // 0x23f66c: 0x32a5ffff  andi        $a1, $s5, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23F668u, 0x23F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F670u;
label_23f670:
    // 0x23f670: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f674:
    // 0x23f674: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f678:
    // 0x23f678: 0xc08b5ac  jal         func_22D6B0
label_23f67c:
    if (ctx->pc == 0x23F67Cu) {
        ctx->pc = 0x23F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F678u;
        // 0x23f67c: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F680u;
        goto label_23f680;
    }
    ctx->pc = 0x23F678u;
    SET_GPR_U32(ctx, 31, 0x23F680u);
    ctx->pc = 0x23F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F678u;
    // 0x23f67c: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F678u, 0x23F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F680u;
label_23f680:
    // 0x23f680: 0x10000019  b           . + 4 + (0x19 << 2)
label_23f684:
    if (ctx->pc == 0x23F684u) {
        ctx->pc = 0x23F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F680u;
        // 0x23f684: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F688u;
        goto label_23f688;
    }
    ctx->pc = 0x23F680u;
    {
        const bool branch_taken_0x23f680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F680u;
        // 0x23f684: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f680) {
            ctx->pc = 0x23F6E8u;
            goto label_23f6e8;
        }
    }
    ctx->pc = 0x23F688u;
label_23f688:
    // 0x23f688: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23f688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23f68c:
    // 0x23f68c: 0x26105fe0  addiu       $s0, $s0, 0x5FE0
    ctx->pc = 0x23f68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24544));
label_23f690:
    // 0x23f690: 0x92f10001  lbu         $s1, 0x1($s7)
    ctx->pc = 0x23f690u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23f694:
    // 0x23f694: 0xc08b60c  jal         func_22D830
label_23f698:
    if (ctx->pc == 0x23F698u) {
        ctx->pc = 0x23F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F694u;
        // 0x23f698: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F69Cu;
        goto label_23f69c;
    }
    ctx->pc = 0x23F694u;
    SET_GPR_U32(ctx, 31, 0x23F69Cu);
    ctx->pc = 0x23F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F694u;
    // 0x23f698: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23F694u, 0x23F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F69Cu;
label_23f69c:
    // 0x23f69c: 0x26c60014  addiu       $a2, $s6, 0x14
    ctx->pc = 0x23f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_23f6a0:
    // 0x23f6a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f6a4:
    // 0x23f6a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23f6a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f6a8:
    // 0x23f6a8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23f6a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f6ac:
    // 0x23f6ac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23f6acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f6b0:
    // 0x23f6b0: 0xc08b5ac  jal         func_22D6B0
label_23f6b4:
    if (ctx->pc == 0x23F6B4u) {
        ctx->pc = 0x23F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6B0u;
        // 0x23f6b4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F6B8u;
        goto label_23f6b8;
    }
    ctx->pc = 0x23F6B0u;
    SET_GPR_U32(ctx, 31, 0x23F6B8u);
    ctx->pc = 0x23F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6B0u;
    // 0x23f6b4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F6B0u, 0x23F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6B8u;
label_23f6b8:
    // 0x23f6b8: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x23f6b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_23f6bc:
    // 0x23f6bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23f6c0:
    if (ctx->pc == 0x23F6C0u) {
        ctx->pc = 0x23F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6BCu;
        // 0x23f6c0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F6C4u;
        goto label_23f6c4;
    }
    ctx->pc = 0x23F6BCu;
    {
        const bool branch_taken_0x23f6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f6bc) {
            ctx->pc = 0x23F6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F6BCu;
            // 0x23f6c0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F6D8u;
            goto label_23f6d8;
        }
    }
    ctx->pc = 0x23F6C4u;
label_23f6c4:
    // 0x23f6c4: 0x2685fffc  addiu       $a1, $s4, -0x4
    ctx->pc = 0x23f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_23f6c8:
    // 0x23f6c8: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x23f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_23f6cc:
    // 0x23f6cc: 0xc090404  jal         func_241010
label_23f6d0:
    if (ctx->pc == 0x23F6D0u) {
        ctx->pc = 0x23F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6CCu;
        // 0x23f6d0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F6D4u;
        goto label_23f6d4;
    }
    ctx->pc = 0x23F6CCu;
    SET_GPR_U32(ctx, 31, 0x23F6D4u);
    ctx->pc = 0x23F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6CCu;
    // 0x23f6d0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241010u, 0x23F6CCu, 0x23F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6D4u;
label_23f6d4:
    // 0x23f6d4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f6d8:
    // 0x23f6d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f6dc:
    // 0x23f6dc: 0xc08b5ac  jal         func_22D6B0
label_23f6e0:
    if (ctx->pc == 0x23F6E0u) {
        ctx->pc = 0x23F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6DCu;
        // 0x23f6e0: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F6E4u;
        goto label_23f6e4;
    }
    ctx->pc = 0x23F6DCu;
    SET_GPR_U32(ctx, 31, 0x23F6E4u);
    ctx->pc = 0x23F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6DCu;
    // 0x23f6e0: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F6DCu, 0x23F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6E4u;
label_23f6e4:
    // 0x23f6e4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23f6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23f6e8:
    // 0x23f6e8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23f6e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23f6ec:
    // 0x23f6ec: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x23f6ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23f6f0:
    // 0x23f6f0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x23f6f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23f6f4:
    // 0x23f6f4: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23f6f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23f6f8:
    // 0x23f6f8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x23f6f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23f6fc:
    // 0x23f6fc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23f6fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23f700:
    // 0x23f700: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23f700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23f704:
    // 0x23f704: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23f704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23f708:
    // 0x23f708: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23f708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f70c:
    // 0x23f70c: 0x3e00008  jr          $ra
label_23f710:
    if (ctx->pc == 0x23F710u) {
        ctx->pc = 0x23F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F70Cu;
        // 0x23f710: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F714u;
        goto label_23f714;
    }
    ctx->pc = 0x23F70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F70Cu;
        // 0x23f710: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F714u;
label_23f714:
    // 0x23f714: 0x0  nop
    ctx->pc = 0x23f714u;
    // NOP
}
