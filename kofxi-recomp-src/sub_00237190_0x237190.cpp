#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00237190
// Address: 0x237190 - 0x2373c0
void sub_00237190_0x237190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237190_0x237190");
#endif

    switch (ctx->pc) {
        case 0x237190u: goto label_237190;
        case 0x237194u: goto label_237194;
        case 0x237198u: goto label_237198;
        case 0x23719cu: goto label_23719c;
        case 0x2371a0u: goto label_2371a0;
        case 0x2371a4u: goto label_2371a4;
        case 0x2371a8u: goto label_2371a8;
        case 0x2371acu: goto label_2371ac;
        case 0x2371b0u: goto label_2371b0;
        case 0x2371b4u: goto label_2371b4;
        case 0x2371b8u: goto label_2371b8;
        case 0x2371bcu: goto label_2371bc;
        case 0x2371c0u: goto label_2371c0;
        case 0x2371c4u: goto label_2371c4;
        case 0x2371c8u: goto label_2371c8;
        case 0x2371ccu: goto label_2371cc;
        case 0x2371d0u: goto label_2371d0;
        case 0x2371d4u: goto label_2371d4;
        case 0x2371d8u: goto label_2371d8;
        case 0x2371dcu: goto label_2371dc;
        case 0x2371e0u: goto label_2371e0;
        case 0x2371e4u: goto label_2371e4;
        case 0x2371e8u: goto label_2371e8;
        case 0x2371ecu: goto label_2371ec;
        case 0x2371f0u: goto label_2371f0;
        case 0x2371f4u: goto label_2371f4;
        case 0x2371f8u: goto label_2371f8;
        case 0x2371fcu: goto label_2371fc;
        case 0x237200u: goto label_237200;
        case 0x237204u: goto label_237204;
        case 0x237208u: goto label_237208;
        case 0x23720cu: goto label_23720c;
        case 0x237210u: goto label_237210;
        case 0x237214u: goto label_237214;
        case 0x237218u: goto label_237218;
        case 0x23721cu: goto label_23721c;
        case 0x237220u: goto label_237220;
        case 0x237224u: goto label_237224;
        case 0x237228u: goto label_237228;
        case 0x23722cu: goto label_23722c;
        case 0x237230u: goto label_237230;
        case 0x237234u: goto label_237234;
        case 0x237238u: goto label_237238;
        case 0x23723cu: goto label_23723c;
        case 0x237240u: goto label_237240;
        case 0x237244u: goto label_237244;
        case 0x237248u: goto label_237248;
        case 0x23724cu: goto label_23724c;
        case 0x237250u: goto label_237250;
        case 0x237254u: goto label_237254;
        case 0x237258u: goto label_237258;
        case 0x23725cu: goto label_23725c;
        case 0x237260u: goto label_237260;
        case 0x237264u: goto label_237264;
        case 0x237268u: goto label_237268;
        case 0x23726cu: goto label_23726c;
        case 0x237270u: goto label_237270;
        case 0x237274u: goto label_237274;
        case 0x237278u: goto label_237278;
        case 0x23727cu: goto label_23727c;
        case 0x237280u: goto label_237280;
        case 0x237284u: goto label_237284;
        case 0x237288u: goto label_237288;
        case 0x23728cu: goto label_23728c;
        case 0x237290u: goto label_237290;
        case 0x237294u: goto label_237294;
        case 0x237298u: goto label_237298;
        case 0x23729cu: goto label_23729c;
        case 0x2372a0u: goto label_2372a0;
        case 0x2372a4u: goto label_2372a4;
        case 0x2372a8u: goto label_2372a8;
        case 0x2372acu: goto label_2372ac;
        case 0x2372b0u: goto label_2372b0;
        case 0x2372b4u: goto label_2372b4;
        case 0x2372b8u: goto label_2372b8;
        case 0x2372bcu: goto label_2372bc;
        case 0x2372c0u: goto label_2372c0;
        case 0x2372c4u: goto label_2372c4;
        case 0x2372c8u: goto label_2372c8;
        case 0x2372ccu: goto label_2372cc;
        case 0x2372d0u: goto label_2372d0;
        case 0x2372d4u: goto label_2372d4;
        case 0x2372d8u: goto label_2372d8;
        case 0x2372dcu: goto label_2372dc;
        case 0x2372e0u: goto label_2372e0;
        case 0x2372e4u: goto label_2372e4;
        case 0x2372e8u: goto label_2372e8;
        case 0x2372ecu: goto label_2372ec;
        case 0x2372f0u: goto label_2372f0;
        case 0x2372f4u: goto label_2372f4;
        case 0x2372f8u: goto label_2372f8;
        case 0x2372fcu: goto label_2372fc;
        case 0x237300u: goto label_237300;
        case 0x237304u: goto label_237304;
        case 0x237308u: goto label_237308;
        case 0x23730cu: goto label_23730c;
        case 0x237310u: goto label_237310;
        case 0x237314u: goto label_237314;
        case 0x237318u: goto label_237318;
        case 0x23731cu: goto label_23731c;
        case 0x237320u: goto label_237320;
        case 0x237324u: goto label_237324;
        case 0x237328u: goto label_237328;
        case 0x23732cu: goto label_23732c;
        case 0x237330u: goto label_237330;
        case 0x237334u: goto label_237334;
        case 0x237338u: goto label_237338;
        case 0x23733cu: goto label_23733c;
        case 0x237340u: goto label_237340;
        case 0x237344u: goto label_237344;
        case 0x237348u: goto label_237348;
        case 0x23734cu: goto label_23734c;
        case 0x237350u: goto label_237350;
        case 0x237354u: goto label_237354;
        case 0x237358u: goto label_237358;
        case 0x23735cu: goto label_23735c;
        case 0x237360u: goto label_237360;
        case 0x237364u: goto label_237364;
        case 0x237368u: goto label_237368;
        case 0x23736cu: goto label_23736c;
        case 0x237370u: goto label_237370;
        case 0x237374u: goto label_237374;
        case 0x237378u: goto label_237378;
        case 0x23737cu: goto label_23737c;
        case 0x237380u: goto label_237380;
        case 0x237384u: goto label_237384;
        case 0x237388u: goto label_237388;
        case 0x23738cu: goto label_23738c;
        case 0x237390u: goto label_237390;
        case 0x237394u: goto label_237394;
        case 0x237398u: goto label_237398;
        case 0x23739cu: goto label_23739c;
        case 0x2373a0u: goto label_2373a0;
        case 0x2373a4u: goto label_2373a4;
        case 0x2373a8u: goto label_2373a8;
        case 0x2373acu: goto label_2373ac;
        case 0x2373b0u: goto label_2373b0;
        case 0x2373b4u: goto label_2373b4;
        case 0x2373b8u: goto label_2373b8;
        case 0x2373bcu: goto label_2373bc;
        default: break;
    }

    ctx->pc = 0x237190u;

label_237190:
    // 0x237190: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x237190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_237194:
    // 0x237194: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x237194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_237198:
    // 0x237198: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x237198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23719c:
    // 0x23719c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23719cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2371a0:
    // 0x2371a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2371a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2371a4:
    // 0x2371a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2371a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2371a8:
    // 0x2371a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2371a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2371ac:
    // 0x2371ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2371acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2371b0:
    // 0x2371b0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2371b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2371b4:
    // 0x2371b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2371b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2371b8:
    // 0x2371b8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2371b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2371bc:
    // 0x2371bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2371bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2371c0:
    // 0x2371c0: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_2371c4:
    if (ctx->pc == 0x2371C4u) {
        ctx->pc = 0x2371C4u;
            // 0x2371c4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x2371C8u;
        goto label_2371c8;
    }
    ctx->pc = 0x2371C0u;
    {
        const bool branch_taken_0x2371c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2371C0u;
            // 0x2371c4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371c0) {
            ctx->pc = 0x237200u;
            goto label_237200;
        }
    }
    ctx->pc = 0x2371C8u;
label_2371c8:
    // 0x2371c8: 0x12400073  beqz        $s2, . + 4 + (0x73 << 2)
label_2371cc:
    if (ctx->pc == 0x2371CCu) {
        ctx->pc = 0x2371CCu;
            // 0x2371cc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x2371D0u;
        goto label_2371d0;
    }
    ctx->pc = 0x2371C8u;
    {
        const bool branch_taken_0x2371c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2371C8u;
            // 0x2371cc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371c8) {
            ctx->pc = 0x237398u;
            goto label_237398;
        }
    }
    ctx->pc = 0x2371D0u;
label_2371d0:
    // 0x2371d0: 0x12000072  beqz        $s0, . + 4 + (0x72 << 2)
label_2371d4:
    if (ctx->pc == 0x2371D4u) {
        ctx->pc = 0x2371D4u;
            // 0x2371d4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2371D8u;
        goto label_2371d8;
    }
    ctx->pc = 0x2371D0u;
    {
        const bool branch_taken_0x2371d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2371D0u;
            // 0x2371d4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371d0) {
            ctx->pc = 0x23739Cu;
            goto label_23739c;
        }
    }
    ctx->pc = 0x2371D8u;
label_2371d8:
    // 0x2371d8: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2371d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_2371dc:
    // 0x2371dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2371dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2371e0:
    // 0x2371e0: 0x34426935  ori         $v0, $v0, 0x6935
    ctx->pc = 0x2371e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26933);
label_2371e4:
    // 0x2371e4: 0x50e20008  beql        $a3, $v0, . + 4 + (0x8 << 2)
label_2371e8:
    if (ctx->pc == 0x2371E8u) {
        ctx->pc = 0x2371E8u;
            // 0x2371e8: 0x8e520010  lw          $s2, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2371ECu;
        goto label_2371ec;
    }
    ctx->pc = 0x2371E4u;
    {
        const bool branch_taken_0x2371e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2371e4) {
            ctx->pc = 0x2371E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2371E4u;
            // 0x2371e8: 0x8e520010  lw          $s2, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237208u;
            goto label_237208;
        }
    }
    ctx->pc = 0x2371ECu;
label_2371ec:
    // 0x2371ec: 0x3402c028  ori         $v0, $zero, 0xC028
    ctx->pc = 0x2371ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49192);
label_2371f0:
    // 0x2371f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2371f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2371f4:
    // 0x2371f4: 0x34426936  ori         $v0, $v0, 0x6936
    ctx->pc = 0x2371f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26934);
label_2371f8:
    // 0x2371f8: 0x50e2001f  beql        $a3, $v0, . + 4 + (0x1F << 2)
label_2371fc:
    if (ctx->pc == 0x2371FCu) {
        ctx->pc = 0x2371FCu;
            // 0x2371fc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x237200u;
        goto label_237200;
    }
    ctx->pc = 0x2371F8u;
    {
        const bool branch_taken_0x2371f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2371f8) {
            ctx->pc = 0x2371FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2371F8u;
            // 0x2371fc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237278u;
            goto label_237278;
        }
    }
    ctx->pc = 0x237200u;
label_237200:
    // 0x237200: 0x10000065  b           . + 4 + (0x65 << 2)
label_237204:
    if (ctx->pc == 0x237204u) {
        ctx->pc = 0x237204u;
            // 0x237204: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x237208u;
        goto label_237208;
    }
    ctx->pc = 0x237200u;
    {
        const bool branch_taken_0x237200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237200u;
            // 0x237204: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237200) {
            ctx->pc = 0x237398u;
            goto label_237398;
        }
    }
    ctx->pc = 0x237208u;
label_237208:
    // 0x237208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23720c:
    // 0x23720c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x23720cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_237210:
    // 0x237210: 0xc08dcf0  jal         func_2373C0
label_237214:
    if (ctx->pc == 0x237214u) {
        ctx->pc = 0x237214u;
            // 0x237214: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237218u;
        goto label_237218;
    }
    ctx->pc = 0x237210u;
    SET_GPR_U32(ctx, 31, 0x237218u);
    ctx->pc = 0x237214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237210u;
            // 0x237214: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2373C0u;
    if (runtime->hasFunction(0x2373C0u)) {
        auto targetFn = runtime->lookupFunction(0x2373C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237218u; }
        if (ctx->pc != 0x237218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002373C0_0x2373c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237218u; }
        if (ctx->pc != 0x237218u) { return; }
    }
    ctx->pc = 0x237218u;
label_237218:
    // 0x237218: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x237218u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23721c:
    // 0x23721c: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
label_237220:
    if (ctx->pc == 0x237220u) {
        ctx->pc = 0x237220u;
            // 0x237220: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x237224u;
        goto label_237224;
    }
    ctx->pc = 0x23721Cu;
    {
        const bool branch_taken_0x23721c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23721Cu;
            // 0x237220: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23721c) {
            ctx->pc = 0x237398u;
            goto label_237398;
        }
    }
    ctx->pc = 0x237224u;
label_237224:
    // 0x237224: 0x3242001f  andi        $v0, $s2, 0x1F
    ctx->pc = 0x237224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
label_237228:
    // 0x237228: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23722c:
    if (ctx->pc == 0x23722Cu) {
        ctx->pc = 0x23722Cu;
            // 0x23722c: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x237230u;
        goto label_237230;
    }
    ctx->pc = 0x237228u;
    {
        const bool branch_taken_0x237228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23722Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237228u;
            // 0x23722c: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237228) {
            ctx->pc = 0x237248u;
            goto label_237248;
        }
    }
    ctx->pc = 0x237230u;
label_237230:
    // 0x237230: 0x16530006  bne         $s2, $s3, . + 4 + (0x6 << 2)
label_237234:
    if (ctx->pc == 0x237234u) {
        ctx->pc = 0x237234u;
            // 0x237234: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x237238u;
        goto label_237238;
    }
    ctx->pc = 0x237230u;
    {
        const bool branch_taken_0x237230 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x237234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237230u;
            // 0x237234: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237230) {
            ctx->pc = 0x23724Cu;
            goto label_23724c;
        }
    }
    ctx->pc = 0x237238u;
label_237238:
    // 0x237238: 0x54710005  bnel        $v1, $s1, . + 4 + (0x5 << 2)
label_23723c:
    if (ctx->pc == 0x23723Cu) {
        ctx->pc = 0x23723Cu;
            // 0x23723c: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->pc = 0x237240u;
        goto label_237240;
    }
    ctx->pc = 0x237238u;
    {
        const bool branch_taken_0x237238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x237238) {
            ctx->pc = 0x23723Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237238u;
            // 0x23723c: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237250u;
            goto label_237250;
        }
    }
    ctx->pc = 0x237240u;
label_237240:
    // 0x237240: 0x10000055  b           . + 4 + (0x55 << 2)
label_237244:
    if (ctx->pc == 0x237244u) {
        ctx->pc = 0x237244u;
            // 0x237244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237248u;
        goto label_237248;
    }
    ctx->pc = 0x237240u;
    {
        const bool branch_taken_0x237240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237240u;
            // 0x237244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237240) {
            ctx->pc = 0x237398u;
            goto label_237398;
        }
    }
    ctx->pc = 0x237248u;
label_237248:
    // 0x237248: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x237248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23724c:
    // 0x23724c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x23724cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_237250:
    // 0x237250: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x237250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_237254:
    // 0x237254: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x237254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_237258:
    // 0x237258: 0x40f809  jalr        $v0
label_23725c:
    if (ctx->pc == 0x23725Cu) {
        ctx->pc = 0x23725Cu;
            // 0x23725c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x237260u;
        goto label_237260;
    }
    ctx->pc = 0x237258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237260u);
        ctx->pc = 0x23725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237258u;
            // 0x23725c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x237260u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x237260u; }
            if (ctx->pc != 0x237260u) { return; }
        }
        }
    }
    ctx->pc = 0x237260u;
label_237260:
    // 0x237260: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x237260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237264:
    // 0x237264: 0x1280004c  beqz        $s4, . + 4 + (0x4C << 2)
label_237268:
    if (ctx->pc == 0x237268u) {
        ctx->pc = 0x237268u;
            // 0x237268: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23726Cu;
        goto label_23726c;
    }
    ctx->pc = 0x237264u;
    {
        const bool branch_taken_0x237264 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x237268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237264u;
            // 0x237268: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237264) {
            ctx->pc = 0x237398u;
            goto label_237398;
        }
    }
    ctx->pc = 0x23726Cu;
label_23726c:
    // 0x23726c: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x23726cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_237270:
    // 0x237270: 0x10000049  b           . + 4 + (0x49 << 2)
label_237274:
    if (ctx->pc == 0x237274u) {
        ctx->pc = 0x237274u;
            // 0x237274: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x237278u;
        goto label_237278;
    }
    ctx->pc = 0x237270u;
    {
        const bool branch_taken_0x237270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237270u;
            // 0x237274: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237270) {
            ctx->pc = 0x237398u;
            goto label_237398;
        }
    }
    ctx->pc = 0x237278u;
label_237278:
    // 0x237278: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x237278u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23727c:
    // 0x23727c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_237280:
    if (ctx->pc == 0x237280u) {
        ctx->pc = 0x237280u;
            // 0x237280: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x237284u;
        goto label_237284;
    }
    ctx->pc = 0x23727Cu;
    {
        const bool branch_taken_0x23727c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23727Cu;
            // 0x237280: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23727c) {
            ctx->pc = 0x237288u;
            goto label_237288;
        }
    }
    ctx->pc = 0x237284u;
label_237284:
    // 0x237284: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x237284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_237288:
    // 0x237288: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x237288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_23728c:
    // 0x23728c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_237290:
    // 0x237290: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x237290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_237294:
    // 0x237294: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237298:
    // 0x237298: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x237298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23729c:
    // 0x23729c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x23729cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_2372a0:
    // 0x2372a0: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2372a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_2372a4:
    // 0x2372a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2372a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2372a8:
    // 0x2372a8: 0x40f809  jalr        $v0
label_2372ac:
    if (ctx->pc == 0x2372ACu) {
        ctx->pc = 0x2372ACu;
            // 0x2372ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2372B0u;
        goto label_2372b0;
    }
    ctx->pc = 0x2372A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2372B0u);
        ctx->pc = 0x2372ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2372A8u;
            // 0x2372ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2372B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2372B0u; }
            if (ctx->pc != 0x2372B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2372B0u;
label_2372b0:
    // 0x2372b0: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2372b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2372b4:
    // 0x2372b4: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_2372b8:
    if (ctx->pc == 0x2372B8u) {
        ctx->pc = 0x2372B8u;
            // 0x2372b8: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x2372BCu;
        goto label_2372bc;
    }
    ctx->pc = 0x2372B4u;
    {
        const bool branch_taken_0x2372b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2372B4u;
            // 0x2372b8: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372b4) {
            ctx->pc = 0x237320u;
            goto label_237320;
        }
    }
    ctx->pc = 0x2372BCu;
label_2372bc:
    // 0x2372bc: 0xc098552  jal         func_261548
label_2372c0:
    if (ctx->pc == 0x2372C0u) {
        ctx->pc = 0x2372C0u;
            // 0x2372c0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x2372C4u;
        goto label_2372c4;
    }
    ctx->pc = 0x2372BCu;
    SET_GPR_U32(ctx, 31, 0x2372C4u);
    ctx->pc = 0x2372C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2372BCu;
            // 0x2372c0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2372C4u; }
        if (ctx->pc != 0x2372C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2372C4u; }
        if (ctx->pc != 0x2372C4u) { return; }
    }
    ctx->pc = 0x2372C4u;
label_2372c4:
    // 0x2372c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2372c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2372c8:
    // 0x2372c8: 0x12c00032  beqz        $s6, . + 4 + (0x32 << 2)
label_2372cc:
    if (ctx->pc == 0x2372CCu) {
        ctx->pc = 0x2372CCu;
            // 0x2372cc: 0x2414000c  addiu       $s4, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2372D0u;
        goto label_2372d0;
    }
    ctx->pc = 0x2372C8u;
    {
        const bool branch_taken_0x2372c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2372C8u;
            // 0x2372cc: 0x2414000c  addiu       $s4, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372c8) {
            ctx->pc = 0x237394u;
            goto label_237394;
        }
    }
    ctx->pc = 0x2372D0u;
label_2372d0:
    // 0x2372d0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_2372d4:
    if (ctx->pc == 0x2372D4u) {
        ctx->pc = 0x2372D4u;
            // 0x2372d4: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x2372D8u;
        goto label_2372d8;
    }
    ctx->pc = 0x2372D0u;
    {
        const bool branch_taken_0x2372d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2372D0u;
            // 0x2372d4: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372d0) {
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x2372D8u;
label_2372d8:
    // 0x2372d8: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
label_2372dc:
    if (ctx->pc == 0x2372DCu) {
        ctx->pc = 0x2372DCu;
            // 0x2372dc: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2372E0u;
        goto label_2372e0;
    }
    ctx->pc = 0x2372D8u;
    {
        const bool branch_taken_0x2372d8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2372DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2372D8u;
            // 0x2372dc: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372d8) {
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x2372E0u;
label_2372e0:
    // 0x2372e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2372e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2372e4:
    // 0x2372e4: 0x0  nop
    ctx->pc = 0x2372e4u;
    // NOP
label_2372e8:
    // 0x2372e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2372e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2372ec:
    // 0x2372ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2372ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2372f0:
    // 0x2372f0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2372f4:
    // 0x2372f4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_2372f8:
    if (ctx->pc == 0x2372F8u) {
        ctx->pc = 0x2372F8u;
            // 0x2372f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2372FCu;
        goto label_2372fc;
    }
    ctx->pc = 0x2372F4u;
    {
        const bool branch_taken_0x2372f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2372F4u;
            // 0x2372f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372f4) {
            ctx->pc = 0x237314u;
            goto label_237314;
        }
    }
    ctx->pc = 0x2372FCu;
label_2372fc:
    // 0x2372fc: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2372fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_237300:
    // 0x237300: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x237300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_237304:
    // 0x237304: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_237308:
    if (ctx->pc == 0x237308u) {
        ctx->pc = 0x237308u;
            // 0x237308: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x23730Cu;
        goto label_23730c;
    }
    ctx->pc = 0x237304u;
    {
        const bool branch_taken_0x237304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237304) {
            ctx->pc = 0x237308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237304u;
            // 0x237308: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2372E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2372e8;
        }
    }
    ctx->pc = 0x23730Cu;
label_23730c:
    // 0x23730c: 0x10000003  b           . + 4 + (0x3 << 2)
label_237310:
    if (ctx->pc == 0x237310u) {
        ctx->pc = 0x237310u;
            // 0x237310: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x237314u;
        goto label_237314;
    }
    ctx->pc = 0x23730Cu;
    {
        const bool branch_taken_0x23730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23730Cu;
            // 0x237310: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23730c) {
            ctx->pc = 0x23731Cu;
            goto label_23731c;
        }
    }
    ctx->pc = 0x237314u;
label_237314:
    // 0x237314: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x237314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_237318:
    // 0x237318: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x237318u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23731c:
    // 0x23731c: 0x11a00a  movz        $s4, $zero, $s1
    ctx->pc = 0x23731cu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_237320:
    // 0x237320: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_237324:
    if (ctx->pc == 0x237324u) {
        ctx->pc = 0x237324u;
            // 0x237324: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237328u;
        goto label_237328;
    }
    ctx->pc = 0x237320u;
    {
        const bool branch_taken_0x237320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x237324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237320u;
            // 0x237324: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237320) {
            ctx->pc = 0x237354u;
            goto label_237354;
        }
    }
    ctx->pc = 0x237328u;
label_237328:
    // 0x237328: 0x210800b  movn        $s0, $s0, $s0
    ctx->pc = 0x237328u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 16));
label_23732c:
    // 0x23732c: 0x0  nop
    ctx->pc = 0x23732cu;
    // NOP
label_237330:
    // 0x237330: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x237330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_237334:
    // 0x237334: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x237334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_237338:
    // 0x237338: 0x0  nop
    ctx->pc = 0x237338u;
    // NOP
label_23733c:
    // 0x23733c: 0x0  nop
    ctx->pc = 0x23733cu;
    // NOP
label_237340:
    // 0x237340: 0x0  nop
    ctx->pc = 0x237340u;
    // NOP
label_237344:
    // 0x237344: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_237348:
    if (ctx->pc == 0x237348u) {
        ctx->pc = 0x23734Cu;
        goto label_23734c;
    }
    ctx->pc = 0x237344u;
    {
        const bool branch_taken_0x237344 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x237344) {
            ctx->pc = 0x237330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237330;
        }
    }
    ctx->pc = 0x23734Cu;
label_23734c:
    // 0x23734c: 0x10000002  b           . + 4 + (0x2 << 2)
label_237350:
    if (ctx->pc == 0x237350u) {
        ctx->pc = 0x237354u;
        goto label_237354;
    }
    ctx->pc = 0x23734Cu;
    {
        const bool branch_taken_0x23734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23734c) {
            ctx->pc = 0x237358u;
            goto label_237358;
        }
    }
    ctx->pc = 0x237354u;
label_237354:
    // 0x237354: 0x210800b  movn        $s0, $s0, $s0
    ctx->pc = 0x237354u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 16));
label_237358:
    // 0x237358: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_23735c:
    if (ctx->pc == 0x23735Cu) {
        ctx->pc = 0x23735Cu;
            // 0x23735c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x237360u;
        goto label_237360;
    }
    ctx->pc = 0x237358u;
    {
        const bool branch_taken_0x237358 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237358u;
            // 0x23735c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237358) {
            ctx->pc = 0x237368u;
            goto label_237368;
        }
    }
    ctx->pc = 0x237360u;
label_237360:
    // 0x237360: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
label_237364:
    if (ctx->pc == 0x237364u) {
        ctx->pc = 0x237368u;
        goto label_237368;
    }
    ctx->pc = 0x237360u;
    {
        const bool branch_taken_0x237360 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x237360) {
            ctx->pc = 0x237380u;
            goto label_237380;
        }
    }
    ctx->pc = 0x237368u;
label_237368:
    // 0x237368: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23736c:
    if (ctx->pc == 0x23736Cu) {
        ctx->pc = 0x23736Cu;
            // 0x23736c: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x237370u;
        goto label_237370;
    }
    ctx->pc = 0x237368u;
    {
        const bool branch_taken_0x237368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237368u;
            // 0x23736c: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237368) {
            ctx->pc = 0x237380u;
            goto label_237380;
        }
    }
    ctx->pc = 0x237370u;
label_237370:
    // 0x237370: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x237370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_237374:
    // 0x237374: 0xc08b4f8  jal         func_22D3E0
label_237378:
    if (ctx->pc == 0x237378u) {
        ctx->pc = 0x237378u;
            // 0x237378: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23737Cu;
        goto label_23737c;
    }
    ctx->pc = 0x237374u;
    SET_GPR_U32(ctx, 31, 0x23737Cu);
    ctx->pc = 0x237378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237374u;
            // 0x237378: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23737Cu; }
        if (ctx->pc != 0x23737Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23737Cu; }
        if (ctx->pc != 0x23737Cu) { return; }
    }
    ctx->pc = 0x23737Cu;
label_23737c:
    // 0x23737c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x23737cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_237380:
    // 0x237380: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_237384:
    if (ctx->pc == 0x237384u) {
        ctx->pc = 0x237384u;
            // 0x237384: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237388u;
        goto label_237388;
    }
    ctx->pc = 0x237380u;
    {
        const bool branch_taken_0x237380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237380u;
            // 0x237384: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237380) {
            ctx->pc = 0x237390u;
            goto label_237390;
        }
    }
    ctx->pc = 0x237388u;
label_237388:
    // 0x237388: 0xc098560  jal         func_261580
label_23738c:
    if (ctx->pc == 0x23738Cu) {
        ctx->pc = 0x23738Cu;
            // 0x23738c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237390u;
        goto label_237390;
    }
    ctx->pc = 0x237388u;
    SET_GPR_U32(ctx, 31, 0x237390u);
    ctx->pc = 0x23738Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237388u;
            // 0x23738c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237390u; }
        if (ctx->pc != 0x237390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237390u; }
        if (ctx->pc != 0x237390u) { return; }
    }
    ctx->pc = 0x237390u;
label_237390:
    // 0x237390: 0xae530020  sw          $s3, 0x20($s2)
    ctx->pc = 0x237390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 19));
label_237394:
    // 0x237394: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x237394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237398:
    // 0x237398: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x237398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23739c:
    // 0x23739c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23739cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2373a0:
    // 0x2373a0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2373a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2373a4:
    // 0x2373a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2373a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2373a8:
    // 0x2373a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2373a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2373ac:
    // 0x2373ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2373acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2373b0:
    // 0x2373b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2373b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2373b4:
    // 0x2373b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2373b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2373b8:
    // 0x2373b8: 0x3e00008  jr          $ra
label_2373bc:
    if (ctx->pc == 0x2373BCu) {
        ctx->pc = 0x2373BCu;
            // 0x2373bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2373C0u;
        goto label_fallthrough_0x2373b8;
    }
    ctx->pc = 0x2373B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2373BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2373B8u;
            // 0x2373bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2373b8:
    ctx->pc = 0x2373C0u;
    ctx->pc = 0x2373c0u;
}
