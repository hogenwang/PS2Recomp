#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238198
// Address: 0x238198 - 0x238500
void sub_00238198_0x238198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238198_0x238198");
#endif

    switch (ctx->pc) {
        case 0x238198u: goto label_238198;
        case 0x23819cu: goto label_23819c;
        case 0x2381a0u: goto label_2381a0;
        case 0x2381a4u: goto label_2381a4;
        case 0x2381a8u: goto label_2381a8;
        case 0x2381acu: goto label_2381ac;
        case 0x2381b0u: goto label_2381b0;
        case 0x2381b4u: goto label_2381b4;
        case 0x2381b8u: goto label_2381b8;
        case 0x2381bcu: goto label_2381bc;
        case 0x2381c0u: goto label_2381c0;
        case 0x2381c4u: goto label_2381c4;
        case 0x2381c8u: goto label_2381c8;
        case 0x2381ccu: goto label_2381cc;
        case 0x2381d0u: goto label_2381d0;
        case 0x2381d4u: goto label_2381d4;
        case 0x2381d8u: goto label_2381d8;
        case 0x2381dcu: goto label_2381dc;
        case 0x2381e0u: goto label_2381e0;
        case 0x2381e4u: goto label_2381e4;
        case 0x2381e8u: goto label_2381e8;
        case 0x2381ecu: goto label_2381ec;
        case 0x2381f0u: goto label_2381f0;
        case 0x2381f4u: goto label_2381f4;
        case 0x2381f8u: goto label_2381f8;
        case 0x2381fcu: goto label_2381fc;
        case 0x238200u: goto label_238200;
        case 0x238204u: goto label_238204;
        case 0x238208u: goto label_238208;
        case 0x23820cu: goto label_23820c;
        case 0x238210u: goto label_238210;
        case 0x238214u: goto label_238214;
        case 0x238218u: goto label_238218;
        case 0x23821cu: goto label_23821c;
        case 0x238220u: goto label_238220;
        case 0x238224u: goto label_238224;
        case 0x238228u: goto label_238228;
        case 0x23822cu: goto label_23822c;
        case 0x238230u: goto label_238230;
        case 0x238234u: goto label_238234;
        case 0x238238u: goto label_238238;
        case 0x23823cu: goto label_23823c;
        case 0x238240u: goto label_238240;
        case 0x238244u: goto label_238244;
        case 0x238248u: goto label_238248;
        case 0x23824cu: goto label_23824c;
        case 0x238250u: goto label_238250;
        case 0x238254u: goto label_238254;
        case 0x238258u: goto label_238258;
        case 0x23825cu: goto label_23825c;
        case 0x238260u: goto label_238260;
        case 0x238264u: goto label_238264;
        case 0x238268u: goto label_238268;
        case 0x23826cu: goto label_23826c;
        case 0x238270u: goto label_238270;
        case 0x238274u: goto label_238274;
        case 0x238278u: goto label_238278;
        case 0x23827cu: goto label_23827c;
        case 0x238280u: goto label_238280;
        case 0x238284u: goto label_238284;
        case 0x238288u: goto label_238288;
        case 0x23828cu: goto label_23828c;
        case 0x238290u: goto label_238290;
        case 0x238294u: goto label_238294;
        case 0x238298u: goto label_238298;
        case 0x23829cu: goto label_23829c;
        case 0x2382a0u: goto label_2382a0;
        case 0x2382a4u: goto label_2382a4;
        case 0x2382a8u: goto label_2382a8;
        case 0x2382acu: goto label_2382ac;
        case 0x2382b0u: goto label_2382b0;
        case 0x2382b4u: goto label_2382b4;
        case 0x2382b8u: goto label_2382b8;
        case 0x2382bcu: goto label_2382bc;
        case 0x2382c0u: goto label_2382c0;
        case 0x2382c4u: goto label_2382c4;
        case 0x2382c8u: goto label_2382c8;
        case 0x2382ccu: goto label_2382cc;
        case 0x2382d0u: goto label_2382d0;
        case 0x2382d4u: goto label_2382d4;
        case 0x2382d8u: goto label_2382d8;
        case 0x2382dcu: goto label_2382dc;
        case 0x2382e0u: goto label_2382e0;
        case 0x2382e4u: goto label_2382e4;
        case 0x2382e8u: goto label_2382e8;
        case 0x2382ecu: goto label_2382ec;
        case 0x2382f0u: goto label_2382f0;
        case 0x2382f4u: goto label_2382f4;
        case 0x2382f8u: goto label_2382f8;
        case 0x2382fcu: goto label_2382fc;
        case 0x238300u: goto label_238300;
        case 0x238304u: goto label_238304;
        case 0x238308u: goto label_238308;
        case 0x23830cu: goto label_23830c;
        case 0x238310u: goto label_238310;
        case 0x238314u: goto label_238314;
        case 0x238318u: goto label_238318;
        case 0x23831cu: goto label_23831c;
        case 0x238320u: goto label_238320;
        case 0x238324u: goto label_238324;
        case 0x238328u: goto label_238328;
        case 0x23832cu: goto label_23832c;
        case 0x238330u: goto label_238330;
        case 0x238334u: goto label_238334;
        case 0x238338u: goto label_238338;
        case 0x23833cu: goto label_23833c;
        case 0x238340u: goto label_238340;
        case 0x238344u: goto label_238344;
        case 0x238348u: goto label_238348;
        case 0x23834cu: goto label_23834c;
        case 0x238350u: goto label_238350;
        case 0x238354u: goto label_238354;
        case 0x238358u: goto label_238358;
        case 0x23835cu: goto label_23835c;
        case 0x238360u: goto label_238360;
        case 0x238364u: goto label_238364;
        case 0x238368u: goto label_238368;
        case 0x23836cu: goto label_23836c;
        case 0x238370u: goto label_238370;
        case 0x238374u: goto label_238374;
        case 0x238378u: goto label_238378;
        case 0x23837cu: goto label_23837c;
        case 0x238380u: goto label_238380;
        case 0x238384u: goto label_238384;
        case 0x238388u: goto label_238388;
        case 0x23838cu: goto label_23838c;
        case 0x238390u: goto label_238390;
        case 0x238394u: goto label_238394;
        case 0x238398u: goto label_238398;
        case 0x23839cu: goto label_23839c;
        case 0x2383a0u: goto label_2383a0;
        case 0x2383a4u: goto label_2383a4;
        case 0x2383a8u: goto label_2383a8;
        case 0x2383acu: goto label_2383ac;
        case 0x2383b0u: goto label_2383b0;
        case 0x2383b4u: goto label_2383b4;
        case 0x2383b8u: goto label_2383b8;
        case 0x2383bcu: goto label_2383bc;
        case 0x2383c0u: goto label_2383c0;
        case 0x2383c4u: goto label_2383c4;
        case 0x2383c8u: goto label_2383c8;
        case 0x2383ccu: goto label_2383cc;
        case 0x2383d0u: goto label_2383d0;
        case 0x2383d4u: goto label_2383d4;
        case 0x2383d8u: goto label_2383d8;
        case 0x2383dcu: goto label_2383dc;
        case 0x2383e0u: goto label_2383e0;
        case 0x2383e4u: goto label_2383e4;
        case 0x2383e8u: goto label_2383e8;
        case 0x2383ecu: goto label_2383ec;
        case 0x2383f0u: goto label_2383f0;
        case 0x2383f4u: goto label_2383f4;
        case 0x2383f8u: goto label_2383f8;
        case 0x2383fcu: goto label_2383fc;
        case 0x238400u: goto label_238400;
        case 0x238404u: goto label_238404;
        case 0x238408u: goto label_238408;
        case 0x23840cu: goto label_23840c;
        case 0x238410u: goto label_238410;
        case 0x238414u: goto label_238414;
        case 0x238418u: goto label_238418;
        case 0x23841cu: goto label_23841c;
        case 0x238420u: goto label_238420;
        case 0x238424u: goto label_238424;
        case 0x238428u: goto label_238428;
        case 0x23842cu: goto label_23842c;
        case 0x238430u: goto label_238430;
        case 0x238434u: goto label_238434;
        case 0x238438u: goto label_238438;
        case 0x23843cu: goto label_23843c;
        case 0x238440u: goto label_238440;
        case 0x238444u: goto label_238444;
        case 0x238448u: goto label_238448;
        case 0x23844cu: goto label_23844c;
        case 0x238450u: goto label_238450;
        case 0x238454u: goto label_238454;
        case 0x238458u: goto label_238458;
        case 0x23845cu: goto label_23845c;
        case 0x238460u: goto label_238460;
        case 0x238464u: goto label_238464;
        case 0x238468u: goto label_238468;
        case 0x23846cu: goto label_23846c;
        case 0x238470u: goto label_238470;
        case 0x238474u: goto label_238474;
        case 0x238478u: goto label_238478;
        case 0x23847cu: goto label_23847c;
        case 0x238480u: goto label_238480;
        case 0x238484u: goto label_238484;
        case 0x238488u: goto label_238488;
        case 0x23848cu: goto label_23848c;
        case 0x238490u: goto label_238490;
        case 0x238494u: goto label_238494;
        case 0x238498u: goto label_238498;
        case 0x23849cu: goto label_23849c;
        case 0x2384a0u: goto label_2384a0;
        case 0x2384a4u: goto label_2384a4;
        case 0x2384a8u: goto label_2384a8;
        case 0x2384acu: goto label_2384ac;
        case 0x2384b0u: goto label_2384b0;
        case 0x2384b4u: goto label_2384b4;
        case 0x2384b8u: goto label_2384b8;
        case 0x2384bcu: goto label_2384bc;
        case 0x2384c0u: goto label_2384c0;
        case 0x2384c4u: goto label_2384c4;
        case 0x2384c8u: goto label_2384c8;
        case 0x2384ccu: goto label_2384cc;
        case 0x2384d0u: goto label_2384d0;
        case 0x2384d4u: goto label_2384d4;
        case 0x2384d8u: goto label_2384d8;
        case 0x2384dcu: goto label_2384dc;
        case 0x2384e0u: goto label_2384e0;
        case 0x2384e4u: goto label_2384e4;
        case 0x2384e8u: goto label_2384e8;
        case 0x2384ecu: goto label_2384ec;
        case 0x2384f0u: goto label_2384f0;
        case 0x2384f4u: goto label_2384f4;
        case 0x2384f8u: goto label_2384f8;
        case 0x2384fcu: goto label_2384fc;
        default: break;
    }

    ctx->pc = 0x238198u;

label_238198:
    // 0x238198: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x238198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23819c:
    // 0x23819c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x23819cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2381a0:
    // 0x2381a0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2381a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2381a4:
    // 0x2381a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2381a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2381a8:
    // 0x2381a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2381a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2381ac:
    // 0x2381ac: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2381acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2381b0:
    // 0x2381b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2381b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2381b4:
    // 0x2381b4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2381b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2381b8:
    // 0x2381b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2381b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2381bc:
    // 0x2381bc: 0x8e824e38  lw          $v0, 0x4E38($s4)
    ctx->pc = 0x2381bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20024)));
label_2381c0:
    // 0x2381c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2381c4:
    if (ctx->pc == 0x2381C4u) {
        ctx->pc = 0x2381C4u;
            // 0x2381c4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2381C8u;
        goto label_2381c8;
    }
    ctx->pc = 0x2381C0u;
    {
        const bool branch_taken_0x2381c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2381C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2381C0u;
            // 0x2381c4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381c0) {
            ctx->pc = 0x2381D0u;
            goto label_2381d0;
        }
    }
    ctx->pc = 0x2381C8u;
label_2381c8:
    // 0x2381c8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2381cc:
    if (ctx->pc == 0x2381CCu) {
        ctx->pc = 0x2381CCu;
            // 0x2381cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2381D0u;
        goto label_2381d0;
    }
    ctx->pc = 0x2381C8u;
    {
        const bool branch_taken_0x2381c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2381C8u;
            // 0x2381cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381c8) {
            ctx->pc = 0x2382B8u;
            goto label_2382b8;
        }
    }
    ctx->pc = 0x2381D0u;
label_2381d0:
    // 0x2381d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2381d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2381d4:
    // 0x2381d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2381d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2381d8:
    // 0x2381d8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2381d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2381dc:
    // 0x2381dc: 0xc049cb6  jal         func_1272D8
label_2381e0:
    if (ctx->pc == 0x2381E0u) {
        ctx->pc = 0x2381E0u;
            // 0x2381e0: 0x34128863  ori         $s2, $zero, 0x8863 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34915);
        ctx->pc = 0x2381E4u;
        goto label_2381e4;
    }
    ctx->pc = 0x2381DCu;
    SET_GPR_U32(ctx, 31, 0x2381E4u);
    ctx->pc = 0x2381E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2381DCu;
            // 0x2381e0: 0x34128863  ori         $s2, $zero, 0x8863 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34915);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381E4u; }
        if (ctx->pc != 0x2381E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381E4u; }
        if (ctx->pc != 0x2381E4u) { return; }
    }
    ctx->pc = 0x2381E4u;
label_2381e4:
    // 0x2381e4: 0x26914e40  addiu       $s1, $s4, 0x4E40
    ctx->pc = 0x2381e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20032));
label_2381e8:
    // 0x2381e8: 0x8e824e3c  lw          $v0, 0x4E3C($s4)
    ctx->pc = 0x2381e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20028)));
label_2381ec:
    // 0x2381ec: 0x34038864  ori         $v1, $zero, 0x8864
    ctx->pc = 0x2381ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34916);
label_2381f0:
    // 0x2381f0: 0x27b00002  addiu       $s0, $sp, 0x2
    ctx->pc = 0x2381f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
label_2381f4:
    // 0x2381f4: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x2381f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_2381f8:
    // 0x2381f8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2381f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2381fc:
    // 0x2381fc: 0x26930014  addiu       $s3, $s4, 0x14
    ctx->pc = 0x2381fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_238200:
    // 0x238200: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x238200u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_238204:
    // 0x238204: 0xc08a262  jal         func_228988
label_238208:
    if (ctx->pc == 0x238208u) {
        ctx->pc = 0x238208u;
            // 0x238208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23820Cu;
        goto label_23820c;
    }
    ctx->pc = 0x238204u;
    SET_GPR_U32(ctx, 31, 0x23820Cu);
    ctx->pc = 0x238208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238204u;
            // 0x238208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23820Cu; }
        if (ctx->pc != 0x23820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23820Cu; }
        if (ctx->pc != 0x23820Cu) { return; }
    }
    ctx->pc = 0x23820Cu;
label_23820c:
    // 0x23820c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x23820cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_238210:
    // 0x238210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238214:
    // 0x238214: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x238214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
label_238218:
    // 0x238218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23821c:
    // 0x23821c: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x23821cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
label_238220:
    // 0x238220: 0xc08b538  jal         func_22D4E0
label_238224:
    if (ctx->pc == 0x238224u) {
        ctx->pc = 0x238224u;
            // 0x238224: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x238228u;
        goto label_238228;
    }
    ctx->pc = 0x238220u;
    SET_GPR_U32(ctx, 31, 0x238228u);
    ctx->pc = 0x238224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238220u;
            // 0x238224: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238228u; }
        if (ctx->pc != 0x238228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238228u; }
        if (ctx->pc != 0x238228u) { return; }
    }
    ctx->pc = 0x238228u;
label_238228:
    // 0x238228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23822c:
    // 0x23822c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23822cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_238230:
    // 0x238230: 0x26104ef8  addiu       $s0, $s0, 0x4EF8
    ctx->pc = 0x238230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20216));
label_238234:
    // 0x238234: 0xc08d9c0  jal         func_236700
label_238238:
    if (ctx->pc == 0x238238u) {
        ctx->pc = 0x238238u;
            // 0x238238: 0x96914e46  lhu         $s1, 0x4E46($s4) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20038)));
        ctx->pc = 0x23823Cu;
        goto label_23823c;
    }
    ctx->pc = 0x238234u;
    SET_GPR_U32(ctx, 31, 0x23823Cu);
    ctx->pc = 0x238238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238234u;
            // 0x238238: 0x96914e46  lhu         $s1, 0x4E46($s4) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20038)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236700u;
    if (runtime->hasFunction(0x236700u)) {
        auto targetFn = runtime->lookupFunction(0x236700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23823Cu; }
        if (ctx->pc != 0x23823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00236700_0x236700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23823Cu; }
        if (ctx->pc != 0x23823Cu) { return; }
    }
    ctx->pc = 0x23823Cu;
label_23823c:
    // 0x23823c: 0x8e884e3c  lw          $t0, 0x4E3C($s4)
    ctx->pc = 0x23823cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20028)));
label_238240:
    // 0x238240: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x238240u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238244:
    // 0x238244: 0x8eab0018  lw          $t3, 0x18($s5)
    ctx->pc = 0x238244u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_238248:
    // 0x238248: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x238248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23824c:
    // 0x23824c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23824cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238250:
    // 0x238250: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x238250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238254:
    // 0x238254: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x238254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238258:
    // 0x238258: 0xc08b5ac  jal         func_22D6B0
label_23825c:
    if (ctx->pc == 0x23825Cu) {
        ctx->pc = 0x23825Cu;
            // 0x23825c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x238260u;
        goto label_238260;
    }
    ctx->pc = 0x238258u;
    SET_GPR_U32(ctx, 31, 0x238260u);
    ctx->pc = 0x23825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238258u;
            // 0x23825c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238260u; }
        if (ctx->pc != 0x238260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238260u; }
        if (ctx->pc != 0x238260u) { return; }
    }
    ctx->pc = 0x238260u;
label_238260:
    // 0x238260: 0x96a30012  lhu         $v1, 0x12($s5)
    ctx->pc = 0x238260u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
label_238264:
    // 0x238264: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x238264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_238268:
    // 0x238268: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x238268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23826c:
    // 0x23826c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23826cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238270:
    // 0x238270: 0x3063fcff  andi        $v1, $v1, 0xFCFF
    ctx->pc = 0x238270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64767);
label_238274:
    // 0x238274: 0xa6a30012  sh          $v1, 0x12($s5)
    ctx->pc = 0x238274u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 18), (uint16_t)GPR_U32(ctx, 3));
label_238278:
    // 0x238278: 0xde820068  ld          $v0, 0x68($s4)
    ctx->pc = 0x238278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 104)));
label_23827c:
    // 0x23827c: 0x8e834e38  lw          $v1, 0x4E38($s4)
    ctx->pc = 0x23827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20024)));
label_238280:
    // 0x238280: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x238280u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_238284:
    // 0x238284: 0xfe820068  sd          $v0, 0x68($s4)
    ctx->pc = 0x238284u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 2));
label_238288:
    // 0x238288: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x238288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_23828c:
    // 0x23828c: 0x40f809  jalr        $v0
label_238290:
    if (ctx->pc == 0x238290u) {
        ctx->pc = 0x238290u;
            // 0x238290: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238294u;
        goto label_238294;
    }
    ctx->pc = 0x23828Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238294u);
        ctx->pc = 0x238290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23828Cu;
            // 0x238290: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238294u; }
            if (ctx->pc != 0x238294u) { return; }
        }
        }
    }
    ctx->pc = 0x238294u;
label_238294:
    // 0x238294: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_238298:
    if (ctx->pc == 0x238298u) {
        ctx->pc = 0x238298u;
            // 0x238298: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23829Cu;
        goto label_23829c;
    }
    ctx->pc = 0x238294u;
    {
        const bool branch_taken_0x238294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238294u;
            // 0x238298: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238294) {
            ctx->pc = 0x2382B4u;
            goto label_2382b4;
        }
    }
    ctx->pc = 0x23829Cu;
label_23829c:
    // 0x23829c: 0x8e864e38  lw          $a2, 0x4E38($s4)
    ctx->pc = 0x23829cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20024)));
label_2382a0:
    // 0x2382a0: 0x24a54f30  addiu       $a1, $a1, 0x4F30
    ctx->pc = 0x2382a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20272));
label_2382a4:
    // 0x2382a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2382a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2382a8:
    // 0x2382a8: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x2382a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
label_2382ac:
    // 0x2382ac: 0xc08b5ac  jal         func_22D6B0
label_2382b0:
    if (ctx->pc == 0x2382B0u) {
        ctx->pc = 0x2382B0u;
            // 0x2382b0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2382B4u;
        goto label_2382b4;
    }
    ctx->pc = 0x2382ACu;
    SET_GPR_U32(ctx, 31, 0x2382B4u);
    ctx->pc = 0x2382B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2382ACu;
            // 0x2382b0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2382B4u; }
        if (ctx->pc != 0x2382B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2382B4u; }
        if (ctx->pc != 0x2382B4u) { return; }
    }
    ctx->pc = 0x2382B4u;
label_2382b4:
    // 0x2382b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2382b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2382b8:
    // 0x2382b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2382b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2382bc:
    // 0x2382bc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2382bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2382c0:
    // 0x2382c0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2382c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2382c4:
    // 0x2382c4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2382c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2382c8:
    // 0x2382c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2382c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2382cc:
    // 0x2382cc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2382ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2382d0:
    // 0x2382d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2382d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2382d4:
    // 0x2382d4: 0x3e00008  jr          $ra
label_2382d8:
    if (ctx->pc == 0x2382D8u) {
        ctx->pc = 0x2382D8u;
            // 0x2382d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2382DCu;
        goto label_2382dc;
    }
    ctx->pc = 0x2382D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2382D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2382D4u;
            // 0x2382d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2382DCu;
label_2382dc:
    // 0x2382dc: 0x0  nop
    ctx->pc = 0x2382dcu;
    // NOP
label_2382e0:
    // 0x2382e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2382e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2382e4:
    // 0x2382e4: 0x34028034  ori         $v0, $zero, 0x8034
    ctx->pc = 0x2382e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32820);
label_2382e8:
    // 0x2382e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2382e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2382ec:
    // 0x2382ec: 0x3442696e  ori         $v0, $v0, 0x696E
    ctx->pc = 0x2382ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26990);
label_2382f0:
    // 0x2382f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2382f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2382f4:
    // 0x2382f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2382f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2382f8:
    // 0x2382f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2382f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2382fc:
    // 0x2382fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2382fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_238300:
    // 0x238300: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x238300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_238304:
    // 0x238304: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
label_238308:
    if (ctx->pc == 0x238308u) {
        ctx->pc = 0x238308u;
            // 0x238308: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x23830Cu;
        goto label_23830c;
    }
    ctx->pc = 0x238304u;
    {
        const bool branch_taken_0x238304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x238308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238304u;
            // 0x238308: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238304) {
            ctx->pc = 0x238398u;
            goto label_238398;
        }
    }
    ctx->pc = 0x23830Cu;
label_23830c:
    // 0x23830c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x23830cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_238310:
    // 0x238310: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_238314:
    if (ctx->pc == 0x238314u) {
        ctx->pc = 0x238318u;
        goto label_238318;
    }
    ctx->pc = 0x238310u;
    {
        const bool branch_taken_0x238310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238310) {
            ctx->pc = 0x238344u;
            goto label_238344;
        }
    }
    ctx->pc = 0x238318u;
label_238318:
    // 0x238318: 0x3c024034  lui         $v0, 0x4034
    ctx->pc = 0x238318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16436 << 16));
label_23831c:
    // 0x23831c: 0x3442696f  ori         $v0, $v0, 0x696F
    ctx->pc = 0x23831cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26991);
label_238320:
    // 0x238320: 0x10a20050  beq         $a1, $v0, . + 4 + (0x50 << 2)
label_238324:
    if (ctx->pc == 0x238324u) {
        ctx->pc = 0x238324u;
            // 0x238324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238328u;
        goto label_238328;
    }
    ctx->pc = 0x238320u;
    {
        const bool branch_taken_0x238320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x238324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238320u;
            // 0x238324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238320) {
            ctx->pc = 0x238464u;
            goto label_238464;
        }
    }
    ctx->pc = 0x238328u;
label_238328:
    // 0x238328: 0x34028014  ori         $v0, $zero, 0x8014
    ctx->pc = 0x238328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
label_23832c:
    // 0x23832c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23832cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_238330:
    // 0x238330: 0x34426971  ori         $v0, $v0, 0x6971
    ctx->pc = 0x238330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26993);
label_238334:
    // 0x238334: 0x10a20059  beq         $a1, $v0, . + 4 + (0x59 << 2)
label_238338:
    if (ctx->pc == 0x238338u) {
        ctx->pc = 0x238338u;
            // 0x238338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23833Cu;
        goto label_23833c;
    }
    ctx->pc = 0x238334u;
    {
        const bool branch_taken_0x238334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x238338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238334u;
            // 0x238338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238334) {
            ctx->pc = 0x23849Cu;
            goto label_23849c;
        }
    }
    ctx->pc = 0x23833Cu;
label_23833c:
    // 0x23833c: 0x10000064  b           . + 4 + (0x64 << 2)
label_238340:
    if (ctx->pc == 0x238340u) {
        ctx->pc = 0x238344u;
        goto label_238344;
    }
    ctx->pc = 0x23833Cu;
    {
        const bool branch_taken_0x23833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23833c) {
            ctx->pc = 0x2384D0u;
            goto label_2384d0;
        }
    }
    ctx->pc = 0x238344u;
label_238344:
    // 0x238344: 0x3402c014  ori         $v0, $zero, 0xC014
    ctx->pc = 0x238344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
label_238348:
    // 0x238348: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x238348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23834c:
    // 0x23834c: 0x34426972  ori         $v0, $v0, 0x6972
    ctx->pc = 0x23834cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26994);
label_238350:
    // 0x238350: 0x10a20054  beq         $a1, $v0, . + 4 + (0x54 << 2)
label_238354:
    if (ctx->pc == 0x238354u) {
        ctx->pc = 0x238354u;
            // 0x238354: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->pc = 0x238358u;
        goto label_238358;
    }
    ctx->pc = 0x238350u;
    {
        const bool branch_taken_0x238350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x238354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238350u;
            // 0x238354: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238350) {
            ctx->pc = 0x2384A4u;
            goto label_2384a4;
        }
    }
    ctx->pc = 0x238358u;
label_238358:
    // 0x238358: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23835c:
    if (ctx->pc == 0x23835Cu) {
        ctx->pc = 0x238360u;
        goto label_238360;
    }
    ctx->pc = 0x238358u;
    {
        const bool branch_taken_0x238358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238358) {
            ctx->pc = 0x23837Cu;
            goto label_23837c;
        }
    }
    ctx->pc = 0x238360u;
label_238360:
    // 0x238360: 0x3402c014  ori         $v0, $zero, 0xC014
    ctx->pc = 0x238360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
label_238364:
    // 0x238364: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x238364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_238368:
    // 0x238368: 0x34426970  ori         $v0, $v0, 0x6970
    ctx->pc = 0x238368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26992);
label_23836c:
    // 0x23836c: 0x10a20048  beq         $a1, $v0, . + 4 + (0x48 << 2)
label_238370:
    if (ctx->pc == 0x238370u) {
        ctx->pc = 0x238370u;
            // 0x238370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238374u;
        goto label_238374;
    }
    ctx->pc = 0x23836Cu;
    {
        const bool branch_taken_0x23836c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x238370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23836Cu;
            // 0x238370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23836c) {
            ctx->pc = 0x238490u;
            goto label_238490;
        }
    }
    ctx->pc = 0x238374u;
label_238374:
    // 0x238374: 0x10000056  b           . + 4 + (0x56 << 2)
label_238378:
    if (ctx->pc == 0x238378u) {
        ctx->pc = 0x23837Cu;
        goto label_23837c;
    }
    ctx->pc = 0x238374u;
    {
        const bool branch_taken_0x238374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238374) {
            ctx->pc = 0x2384D0u;
            goto label_2384d0;
        }
    }
    ctx->pc = 0x23837Cu;
label_23837c:
    // 0x23837c: 0x3402c114  ori         $v0, $zero, 0xC114
    ctx->pc = 0x23837cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49428);
label_238380:
    // 0x238380: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x238380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_238384:
    // 0x238384: 0x34426974  ori         $v0, $v0, 0x6974
    ctx->pc = 0x238384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26996);
label_238388:
    // 0x238388: 0x10a20049  beq         $a1, $v0, . + 4 + (0x49 << 2)
label_23838c:
    if (ctx->pc == 0x23838Cu) {
        ctx->pc = 0x23838Cu;
            // 0x23838c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238390u;
        goto label_238390;
    }
    ctx->pc = 0x238388u;
    {
        const bool branch_taken_0x238388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23838Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238388u;
            // 0x23838c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238388) {
            ctx->pc = 0x2384B0u;
            goto label_2384b0;
        }
    }
    ctx->pc = 0x238390u;
label_238390:
    // 0x238390: 0x1000004f  b           . + 4 + (0x4F << 2)
label_238394:
    if (ctx->pc == 0x238394u) {
        ctx->pc = 0x238398u;
        goto label_238398;
    }
    ctx->pc = 0x238390u;
    {
        const bool branch_taken_0x238390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238390) {
            ctx->pc = 0x2384D0u;
            goto label_2384d0;
        }
    }
    ctx->pc = 0x238398u;
label_238398:
    // 0x238398: 0x82020010  lb          $v0, 0x10($s0)
    ctx->pc = 0x238398u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_23839c:
    // 0x23839c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2383a0:
    if (ctx->pc == 0x2383A0u) {
        ctx->pc = 0x2383A0u;
            // 0x2383a0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x2383A4u;
        goto label_2383a4;
    }
    ctx->pc = 0x23839Cu;
    {
        const bool branch_taken_0x23839c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23839c) {
            ctx->pc = 0x2383A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23839Cu;
            // 0x2383a0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2383C0u;
            goto label_2383c0;
        }
    }
    ctx->pc = 0x2383A4u;
label_2383a4:
    // 0x2383a4: 0xc08d54a  jal         func_235528
label_2383a8:
    if (ctx->pc == 0x2383A8u) {
        ctx->pc = 0x2383A8u;
            // 0x2383a8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2383ACu;
        goto label_2383ac;
    }
    ctx->pc = 0x2383A4u;
    SET_GPR_U32(ctx, 31, 0x2383ACu);
    ctx->pc = 0x2383A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2383A4u;
            // 0x2383a8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235528u;
    if (runtime->hasFunction(0x235528u)) {
        auto targetFn = runtime->lookupFunction(0x235528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383ACu; }
        if (ctx->pc != 0x2383ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235528_0x235528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383ACu; }
        if (ctx->pc != 0x2383ACu) { return; }
    }
    ctx->pc = 0x2383ACu;
label_2383ac:
    // 0x2383ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2383b0:
    if (ctx->pc == 0x2383B0u) {
        ctx->pc = 0x2383B0u;
            // 0x2383b0: 0xae424e38  sw          $v0, 0x4E38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20024), GPR_U32(ctx, 2));
        ctx->pc = 0x2383B4u;
        goto label_2383b4;
    }
    ctx->pc = 0x2383ACu;
    {
        const bool branch_taken_0x2383ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2383B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383ACu;
            // 0x2383b0: 0xae424e38  sw          $v0, 0x4E38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383ac) {
            ctx->pc = 0x2383BCu;
            goto label_2383bc;
        }
    }
    ctx->pc = 0x2383B4u;
label_2383b4:
    // 0x2383b4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2383b8:
    if (ctx->pc == 0x2383B8u) {
        ctx->pc = 0x2383B8u;
            // 0x2383b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2383BCu;
        goto label_2383bc;
    }
    ctx->pc = 0x2383B4u;
    {
        const bool branch_taken_0x2383b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383B4u;
            // 0x2383b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383b4) {
            ctx->pc = 0x2384E4u;
            goto label_2384e4;
        }
    }
    ctx->pc = 0x2383BCu;
label_2383bc:
    // 0x2383bc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2383bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2383c0:
    // 0x2383c0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2383c4:
    if (ctx->pc == 0x2383C4u) {
        ctx->pc = 0x2383C4u;
            // 0x2383c4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x2383C8u;
        goto label_2383c8;
    }
    ctx->pc = 0x2383C0u;
    {
        const bool branch_taken_0x2383c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2383c0) {
            ctx->pc = 0x2383C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2383C0u;
            // 0x2383c4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238408u;
            goto label_238408;
        }
    }
    ctx->pc = 0x2383C8u;
label_2383c8:
    // 0x2383c8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2383c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2383cc:
    // 0x2383cc: 0xc098552  jal         func_261548
label_2383d0:
    if (ctx->pc == 0x2383D0u) {
        ctx->pc = 0x2383D0u;
            // 0x2383d0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2383D4u;
        goto label_2383d4;
    }
    ctx->pc = 0x2383CCu;
    SET_GPR_U32(ctx, 31, 0x2383D4u);
    ctx->pc = 0x2383D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2383CCu;
            // 0x2383d0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383D4u; }
        if (ctx->pc != 0x2383D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383D4u; }
        if (ctx->pc != 0x2383D4u) { return; }
    }
    ctx->pc = 0x2383D4u;
label_2383d4:
    // 0x2383d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2383d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2383d8:
    // 0x2383d8: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2383dc:
    if (ctx->pc == 0x2383DCu) {
        ctx->pc = 0x2383DCu;
            // 0x2383dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2383E0u;
        goto label_2383e0;
    }
    ctx->pc = 0x2383D8u;
    {
        const bool branch_taken_0x2383d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383D8u;
            // 0x2383dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383d8) {
            ctx->pc = 0x238428u;
            goto label_238428;
        }
    }
    ctx->pc = 0x2383E0u;
label_2383e0:
    // 0x2383e0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2383e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2383e4:
    // 0x2383e4: 0xc04a966  jal         func_12A598
label_2383e8:
    if (ctx->pc == 0x2383E8u) {
        ctx->pc = 0x2383E8u;
            // 0x2383e8: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x2383ECu;
        goto label_2383ec;
    }
    ctx->pc = 0x2383E4u;
    SET_GPR_U32(ctx, 31, 0x2383ECu);
    ctx->pc = 0x2383E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2383E4u;
            // 0x2383e8: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383ECu; }
        if (ctx->pc != 0x2383ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383ECu; }
        if (ctx->pc != 0x2383ECu) { return; }
    }
    ctx->pc = 0x2383ECu;
label_2383ec:
    // 0x2383ec: 0x8e444e4c  lw          $a0, 0x4E4C($s2)
    ctx->pc = 0x2383ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20044)));
label_2383f0:
    // 0x2383f0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2383f4:
    if (ctx->pc == 0x2383F4u) {
        ctx->pc = 0x2383F4u;
            // 0x2383f4: 0xae514e4c  sw          $s1, 0x4E4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20044), GPR_U32(ctx, 17));
        ctx->pc = 0x2383F8u;
        goto label_2383f8;
    }
    ctx->pc = 0x2383F0u;
    {
        const bool branch_taken_0x2383f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2383f0) {
            ctx->pc = 0x2383F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2383F0u;
            // 0x2383f4: 0xae514e4c  sw          $s1, 0x4E4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20044), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238404u;
            goto label_238404;
        }
    }
    ctx->pc = 0x2383F8u;
label_2383f8:
    // 0x2383f8: 0xc098560  jal         func_261580
label_2383fc:
    if (ctx->pc == 0x2383FCu) {
        ctx->pc = 0x238400u;
        goto label_238400;
    }
    ctx->pc = 0x2383F8u;
    SET_GPR_U32(ctx, 31, 0x238400u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238400u; }
        if (ctx->pc != 0x238400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238400u; }
        if (ctx->pc != 0x238400u) { return; }
    }
    ctx->pc = 0x238400u;
label_238400:
    // 0x238400: 0xae514e4c  sw          $s1, 0x4E4C($s2)
    ctx->pc = 0x238400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20044), GPR_U32(ctx, 17));
label_238404:
    // 0x238404: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x238404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_238408:
    // 0x238408: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_23840c:
    if (ctx->pc == 0x23840Cu) {
        ctx->pc = 0x23840Cu;
            // 0x23840c: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x238410u;
        goto label_238410;
    }
    ctx->pc = 0x238408u;
    {
        const bool branch_taken_0x238408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238408) {
            ctx->pc = 0x23840Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238408u;
            // 0x23840c: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238458u;
            goto label_238458;
        }
    }
    ctx->pc = 0x238410u;
label_238410:
    // 0x238410: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x238410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_238414:
    // 0x238414: 0xc098552  jal         func_261548
label_238418:
    if (ctx->pc == 0x238418u) {
        ctx->pc = 0x238418u;
            // 0x238418: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x23841Cu;
        goto label_23841c;
    }
    ctx->pc = 0x238414u;
    SET_GPR_U32(ctx, 31, 0x23841Cu);
    ctx->pc = 0x238418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238414u;
            // 0x238418: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23841Cu; }
        if (ctx->pc != 0x23841Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23841Cu; }
        if (ctx->pc != 0x23841Cu) { return; }
    }
    ctx->pc = 0x23841Cu;
label_23841c:
    // 0x23841c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23841cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238420:
    // 0x238420: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_238424:
    if (ctx->pc == 0x238424u) {
        ctx->pc = 0x238424u;
            // 0x238424: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x238428u;
        goto label_238428;
    }
    ctx->pc = 0x238420u;
    {
        const bool branch_taken_0x238420 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x238420) {
            ctx->pc = 0x238424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238420u;
            // 0x238424: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238430u;
            goto label_238430;
        }
    }
    ctx->pc = 0x238428u;
label_238428:
    // 0x238428: 0x1000002e  b           . + 4 + (0x2E << 2)
label_23842c:
    if (ctx->pc == 0x23842Cu) {
        ctx->pc = 0x23842Cu;
            // 0x23842c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x238430u;
        goto label_238430;
    }
    ctx->pc = 0x238428u;
    {
        const bool branch_taken_0x238428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238428u;
            // 0x23842c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238428) {
            ctx->pc = 0x2384E4u;
            goto label_2384e4;
        }
    }
    ctx->pc = 0x238430u;
label_238430:
    // 0x238430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238434:
    // 0x238434: 0xc04a966  jal         func_12A598
label_238438:
    if (ctx->pc == 0x238438u) {
        ctx->pc = 0x238438u;
            // 0x238438: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x23843Cu;
        goto label_23843c;
    }
    ctx->pc = 0x238434u;
    SET_GPR_U32(ctx, 31, 0x23843Cu);
    ctx->pc = 0x238438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238434u;
            // 0x238438: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23843Cu; }
        if (ctx->pc != 0x23843Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23843Cu; }
        if (ctx->pc != 0x23843Cu) { return; }
    }
    ctx->pc = 0x23843Cu;
label_23843c:
    // 0x23843c: 0x8e444e48  lw          $a0, 0x4E48($s2)
    ctx->pc = 0x23843cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20040)));
label_238440:
    // 0x238440: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_238444:
    if (ctx->pc == 0x238444u) {
        ctx->pc = 0x238444u;
            // 0x238444: 0xae514e48  sw          $s1, 0x4E48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20040), GPR_U32(ctx, 17));
        ctx->pc = 0x238448u;
        goto label_238448;
    }
    ctx->pc = 0x238440u;
    {
        const bool branch_taken_0x238440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238440) {
            ctx->pc = 0x238444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238440u;
            // 0x238444: 0xae514e48  sw          $s1, 0x4E48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20040), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238454u;
            goto label_238454;
        }
    }
    ctx->pc = 0x238448u;
label_238448:
    // 0x238448: 0xc098560  jal         func_261580
label_23844c:
    if (ctx->pc == 0x23844Cu) {
        ctx->pc = 0x238450u;
        goto label_238450;
    }
    ctx->pc = 0x238448u;
    SET_GPR_U32(ctx, 31, 0x238450u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238450u; }
        if (ctx->pc != 0x238450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238450u; }
        if (ctx->pc != 0x238450u) { return; }
    }
    ctx->pc = 0x238450u;
label_238450:
    // 0x238450: 0xae514e48  sw          $s1, 0x4E48($s2)
    ctx->pc = 0x238450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20040), GPR_U32(ctx, 17));
label_238454:
    // 0x238454: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x238454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_238458:
    // 0x238458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23845c:
    // 0x23845c: 0x10000021  b           . + 4 + (0x21 << 2)
label_238460:
    if (ctx->pc == 0x238460u) {
        ctx->pc = 0x238460u;
            // 0x238460: 0xae434e80  sw          $v1, 0x4E80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20096), GPR_U32(ctx, 3));
        ctx->pc = 0x238464u;
        goto label_238464;
    }
    ctx->pc = 0x23845Cu;
    {
        const bool branch_taken_0x23845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23845Cu;
            // 0x238460: 0xae434e80  sw          $v1, 0x4E80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20096), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23845c) {
            ctx->pc = 0x2384E4u;
            goto label_2384e4;
        }
    }
    ctx->pc = 0x238464u;
label_238464:
    // 0x238464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238468:
    // 0x238468: 0xc049cb6  jal         func_1272D8
label_23846c:
    if (ctx->pc == 0x23846Cu) {
        ctx->pc = 0x23846Cu;
            // 0x23846c: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->pc = 0x238470u;
        goto label_238470;
    }
    ctx->pc = 0x238468u;
    SET_GPR_U32(ctx, 31, 0x238470u);
    ctx->pc = 0x23846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238468u;
            // 0x23846c: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238470u; }
        if (ctx->pc != 0x238470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238470u; }
        if (ctx->pc != 0x238470u) { return; }
    }
    ctx->pc = 0x238470u;
label_238470:
    // 0x238470: 0x8e454e38  lw          $a1, 0x4E38($s2)
    ctx->pc = 0x238470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20024)));
label_238474:
    // 0x238474: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_238478:
    if (ctx->pc == 0x238478u) {
        ctx->pc = 0x238478u;
            // 0x238478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23847Cu;
        goto label_23847c;
    }
    ctx->pc = 0x238474u;
    {
        const bool branch_taken_0x238474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x238478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238474u;
            // 0x238478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238474) {
            ctx->pc = 0x2384E0u;
            goto label_2384e0;
        }
    }
    ctx->pc = 0x23847Cu;
label_23847c:
    // 0x23847c: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x23847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_238480:
    // 0x238480: 0xc04a966  jal         func_12A598
label_238484:
    if (ctx->pc == 0x238484u) {
        ctx->pc = 0x238484u;
            // 0x238484: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x238488u;
        goto label_238488;
    }
    ctx->pc = 0x238480u;
    SET_GPR_U32(ctx, 31, 0x238488u);
    ctx->pc = 0x238484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238480u;
            // 0x238484: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238488u; }
        if (ctx->pc != 0x238488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238488u; }
        if (ctx->pc != 0x238488u) { return; }
    }
    ctx->pc = 0x238488u;
label_238488:
    // 0x238488: 0x10000016  b           . + 4 + (0x16 << 2)
label_23848c:
    if (ctx->pc == 0x23848Cu) {
        ctx->pc = 0x23848Cu;
            // 0x23848c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238490u;
        goto label_238490;
    }
    ctx->pc = 0x238488u;
    {
        const bool branch_taken_0x238488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238488u;
            // 0x23848c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238488) {
            ctx->pc = 0x2384E4u;
            goto label_2384e4;
        }
    }
    ctx->pc = 0x238490u;
label_238490:
    // 0x238490: 0x8e424e3c  lw          $v0, 0x4E3C($s2)
    ctx->pc = 0x238490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20028)));
label_238494:
    // 0x238494: 0x10000012  b           . + 4 + (0x12 << 2)
label_238498:
    if (ctx->pc == 0x238498u) {
        ctx->pc = 0x238498u;
            // 0x238498: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x23849Cu;
        goto label_23849c;
    }
    ctx->pc = 0x238494u;
    {
        const bool branch_taken_0x238494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238494u;
            // 0x238498: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238494) {
            ctx->pc = 0x2384E0u;
            goto label_2384e0;
        }
    }
    ctx->pc = 0x23849Cu;
label_23849c:
    // 0x23849c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2384a0:
    if (ctx->pc == 0x2384A0u) {
        ctx->pc = 0x2384A0u;
            // 0x2384a0: 0xae404e84  sw          $zero, 0x4E84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20100), GPR_U32(ctx, 0));
        ctx->pc = 0x2384A4u;
        goto label_2384a4;
    }
    ctx->pc = 0x23849Cu;
    {
        const bool branch_taken_0x23849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23849Cu;
            // 0x2384a0: 0xae404e84  sw          $zero, 0x4E84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23849c) {
            ctx->pc = 0x2384E0u;
            goto label_2384e0;
        }
    }
    ctx->pc = 0x2384A4u;
label_2384a4:
    // 0x2384a4: 0x8e424e84  lw          $v0, 0x4E84($s2)
    ctx->pc = 0x2384a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20100)));
label_2384a8:
    // 0x2384a8: 0x1000000d  b           . + 4 + (0xD << 2)
label_2384ac:
    if (ctx->pc == 0x2384ACu) {
        ctx->pc = 0x2384ACu;
            // 0x2384ac: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2384B0u;
        goto label_2384b0;
    }
    ctx->pc = 0x2384A8u;
    {
        const bool branch_taken_0x2384a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2384A8u;
            // 0x2384ac: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384a8) {
            ctx->pc = 0x2384E0u;
            goto label_2384e0;
        }
    }
    ctx->pc = 0x2384B0u;
label_2384b0:
    // 0x2384b0: 0x8e424e88  lw          $v0, 0x4E88($s2)
    ctx->pc = 0x2384b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20104)));
label_2384b4:
    // 0x2384b4: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2384b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2384b8:
    // 0x2384b8: 0x26454e8c  addiu       $a1, $s2, 0x4E8C
    ctx->pc = 0x2384b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20108));
label_2384bc:
    // 0x2384bc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2384bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2384c0:
    // 0x2384c0: 0xc08b538  jal         func_22D4E0
label_2384c4:
    if (ctx->pc == 0x2384C4u) {
        ctx->pc = 0x2384C4u;
            // 0x2384c4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2384C8u;
        goto label_2384c8;
    }
    ctx->pc = 0x2384C0u;
    SET_GPR_U32(ctx, 31, 0x2384C8u);
    ctx->pc = 0x2384C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2384C0u;
            // 0x2384c4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2384C8u; }
        if (ctx->pc != 0x2384C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2384C8u; }
        if (ctx->pc != 0x2384C8u) { return; }
    }
    ctx->pc = 0x2384C8u;
label_2384c8:
    // 0x2384c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2384cc:
    if (ctx->pc == 0x2384CCu) {
        ctx->pc = 0x2384CCu;
            // 0x2384cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2384D0u;
        goto label_2384d0;
    }
    ctx->pc = 0x2384C8u;
    {
        const bool branch_taken_0x2384c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2384C8u;
            // 0x2384cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384c8) {
            ctx->pc = 0x2384E4u;
            goto label_2384e4;
        }
    }
    ctx->pc = 0x2384D0u;
label_2384d0:
    // 0x2384d0: 0xc08e802  jal         func_23A008
label_2384d4:
    if (ctx->pc == 0x2384D4u) {
        ctx->pc = 0x2384D4u;
            // 0x2384d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2384D8u;
        goto label_2384d8;
    }
    ctx->pc = 0x2384D0u;
    SET_GPR_U32(ctx, 31, 0x2384D8u);
    ctx->pc = 0x2384D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2384D0u;
            // 0x2384d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A008u;
    if (runtime->hasFunction(0x23A008u)) {
        auto targetFn = runtime->lookupFunction(0x23A008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2384D8u; }
        if (ctx->pc != 0x2384D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A008_0x23a008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2384D8u; }
        if (ctx->pc != 0x2384D8u) { return; }
    }
    ctx->pc = 0x2384D8u;
label_2384d8:
    // 0x2384d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2384dc:
    if (ctx->pc == 0x2384DCu) {
        ctx->pc = 0x2384DCu;
            // 0x2384dc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2384E0u;
        goto label_2384e0;
    }
    ctx->pc = 0x2384D8u;
    {
        const bool branch_taken_0x2384d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2384D8u;
            // 0x2384dc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384d8) {
            ctx->pc = 0x2384E8u;
            goto label_2384e8;
        }
    }
    ctx->pc = 0x2384E0u;
label_2384e0:
    // 0x2384e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2384e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2384e4:
    // 0x2384e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2384e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2384e8:
    // 0x2384e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2384e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2384ec:
    // 0x2384ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2384ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2384f0:
    // 0x2384f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2384f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2384f4:
    // 0x2384f4: 0x3e00008  jr          $ra
label_2384f8:
    if (ctx->pc == 0x2384F8u) {
        ctx->pc = 0x2384F8u;
            // 0x2384f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2384FCu;
        goto label_2384fc;
    }
    ctx->pc = 0x2384F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2384F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2384F4u;
            // 0x2384f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2384FCu;
label_2384fc:
    // 0x2384fc: 0x0  nop
    ctx->pc = 0x2384fcu;
    // NOP
    ctx->pc = 0x238500u;
}
