#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00235180
// Address: 0x235180 - 0x235390
void sub_00235180_0x235180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235180_0x235180");
#endif

    switch (ctx->pc) {
        case 0x235180u: goto label_235180;
        case 0x235184u: goto label_235184;
        case 0x235188u: goto label_235188;
        case 0x23518cu: goto label_23518c;
        case 0x235190u: goto label_235190;
        case 0x235194u: goto label_235194;
        case 0x235198u: goto label_235198;
        case 0x23519cu: goto label_23519c;
        case 0x2351a0u: goto label_2351a0;
        case 0x2351a4u: goto label_2351a4;
        case 0x2351a8u: goto label_2351a8;
        case 0x2351acu: goto label_2351ac;
        case 0x2351b0u: goto label_2351b0;
        case 0x2351b4u: goto label_2351b4;
        case 0x2351b8u: goto label_2351b8;
        case 0x2351bcu: goto label_2351bc;
        case 0x2351c0u: goto label_2351c0;
        case 0x2351c4u: goto label_2351c4;
        case 0x2351c8u: goto label_2351c8;
        case 0x2351ccu: goto label_2351cc;
        case 0x2351d0u: goto label_2351d0;
        case 0x2351d4u: goto label_2351d4;
        case 0x2351d8u: goto label_2351d8;
        case 0x2351dcu: goto label_2351dc;
        case 0x2351e0u: goto label_2351e0;
        case 0x2351e4u: goto label_2351e4;
        case 0x2351e8u: goto label_2351e8;
        case 0x2351ecu: goto label_2351ec;
        case 0x2351f0u: goto label_2351f0;
        case 0x2351f4u: goto label_2351f4;
        case 0x2351f8u: goto label_2351f8;
        case 0x2351fcu: goto label_2351fc;
        case 0x235200u: goto label_235200;
        case 0x235204u: goto label_235204;
        case 0x235208u: goto label_235208;
        case 0x23520cu: goto label_23520c;
        case 0x235210u: goto label_235210;
        case 0x235214u: goto label_235214;
        case 0x235218u: goto label_235218;
        case 0x23521cu: goto label_23521c;
        case 0x235220u: goto label_235220;
        case 0x235224u: goto label_235224;
        case 0x235228u: goto label_235228;
        case 0x23522cu: goto label_23522c;
        case 0x235230u: goto label_235230;
        case 0x235234u: goto label_235234;
        case 0x235238u: goto label_235238;
        case 0x23523cu: goto label_23523c;
        case 0x235240u: goto label_235240;
        case 0x235244u: goto label_235244;
        case 0x235248u: goto label_235248;
        case 0x23524cu: goto label_23524c;
        case 0x235250u: goto label_235250;
        case 0x235254u: goto label_235254;
        case 0x235258u: goto label_235258;
        case 0x23525cu: goto label_23525c;
        case 0x235260u: goto label_235260;
        case 0x235264u: goto label_235264;
        case 0x235268u: goto label_235268;
        case 0x23526cu: goto label_23526c;
        case 0x235270u: goto label_235270;
        case 0x235274u: goto label_235274;
        case 0x235278u: goto label_235278;
        case 0x23527cu: goto label_23527c;
        case 0x235280u: goto label_235280;
        case 0x235284u: goto label_235284;
        case 0x235288u: goto label_235288;
        case 0x23528cu: goto label_23528c;
        case 0x235290u: goto label_235290;
        case 0x235294u: goto label_235294;
        case 0x235298u: goto label_235298;
        case 0x23529cu: goto label_23529c;
        case 0x2352a0u: goto label_2352a0;
        case 0x2352a4u: goto label_2352a4;
        case 0x2352a8u: goto label_2352a8;
        case 0x2352acu: goto label_2352ac;
        case 0x2352b0u: goto label_2352b0;
        case 0x2352b4u: goto label_2352b4;
        case 0x2352b8u: goto label_2352b8;
        case 0x2352bcu: goto label_2352bc;
        case 0x2352c0u: goto label_2352c0;
        case 0x2352c4u: goto label_2352c4;
        case 0x2352c8u: goto label_2352c8;
        case 0x2352ccu: goto label_2352cc;
        case 0x2352d0u: goto label_2352d0;
        case 0x2352d4u: goto label_2352d4;
        case 0x2352d8u: goto label_2352d8;
        case 0x2352dcu: goto label_2352dc;
        case 0x2352e0u: goto label_2352e0;
        case 0x2352e4u: goto label_2352e4;
        case 0x2352e8u: goto label_2352e8;
        case 0x2352ecu: goto label_2352ec;
        case 0x2352f0u: goto label_2352f0;
        case 0x2352f4u: goto label_2352f4;
        case 0x2352f8u: goto label_2352f8;
        case 0x2352fcu: goto label_2352fc;
        case 0x235300u: goto label_235300;
        case 0x235304u: goto label_235304;
        case 0x235308u: goto label_235308;
        case 0x23530cu: goto label_23530c;
        case 0x235310u: goto label_235310;
        case 0x235314u: goto label_235314;
        case 0x235318u: goto label_235318;
        case 0x23531cu: goto label_23531c;
        case 0x235320u: goto label_235320;
        case 0x235324u: goto label_235324;
        case 0x235328u: goto label_235328;
        case 0x23532cu: goto label_23532c;
        case 0x235330u: goto label_235330;
        case 0x235334u: goto label_235334;
        case 0x235338u: goto label_235338;
        case 0x23533cu: goto label_23533c;
        case 0x235340u: goto label_235340;
        case 0x235344u: goto label_235344;
        case 0x235348u: goto label_235348;
        case 0x23534cu: goto label_23534c;
        case 0x235350u: goto label_235350;
        case 0x235354u: goto label_235354;
        case 0x235358u: goto label_235358;
        case 0x23535cu: goto label_23535c;
        case 0x235360u: goto label_235360;
        case 0x235364u: goto label_235364;
        case 0x235368u: goto label_235368;
        case 0x23536cu: goto label_23536c;
        case 0x235370u: goto label_235370;
        case 0x235374u: goto label_235374;
        case 0x235378u: goto label_235378;
        case 0x23537cu: goto label_23537c;
        case 0x235380u: goto label_235380;
        case 0x235384u: goto label_235384;
        case 0x235388u: goto label_235388;
        case 0x23538cu: goto label_23538c;
        default: break;
    }

    ctx->pc = 0x235180u;

label_235180:
    // 0x235180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_235184:
    // 0x235184: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x235184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_235188:
    // 0x235188: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x235188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23518c:
    // 0x23518c: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x23518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
label_235190:
    // 0x235190: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x235190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_235194:
    // 0x235194: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x235194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235198:
    // 0x235198: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x235198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23519c:
    // 0x23519c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23519cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2351a0:
    // 0x2351a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2351a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2351a4:
    // 0x2351a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2351a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2351a8:
    // 0x2351a8: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x2351a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
label_2351ac:
    // 0x2351ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2351b0:
    if (ctx->pc == 0x2351B0u) {
        ctx->pc = 0x2351B0u;
            // 0x2351b0: 0x92330001  lbu         $s3, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->pc = 0x2351B4u;
        goto label_2351b4;
    }
    ctx->pc = 0x2351ACu;
    {
        const bool branch_taken_0x2351ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2351B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2351ACu;
            // 0x2351b0: 0x92330001  lbu         $s3, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351ac) {
            ctx->pc = 0x2351C0u;
            goto label_2351c0;
        }
    }
    ctx->pc = 0x2351B4u;
label_2351b4:
    // 0x2351b4: 0x2e62001f  sltiu       $v0, $s3, 0x1F
    ctx->pc = 0x2351b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2351b8:
    // 0x2351b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2351bc:
    if (ctx->pc == 0x2351BCu) {
        ctx->pc = 0x2351BCu;
            // 0x2351bc: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->pc = 0x2351C0u;
        goto label_2351c0;
    }
    ctx->pc = 0x2351B8u;
    {
        const bool branch_taken_0x2351b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2351b8) {
            ctx->pc = 0x2351BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2351B8u;
            // 0x2351bc: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2351C8u;
            goto label_2351c8;
        }
    }
    ctx->pc = 0x2351C0u;
label_2351c0:
    // 0x2351c0: 0x10000039  b           . + 4 + (0x39 << 2)
label_2351c4:
    if (ctx->pc == 0x2351C4u) {
        ctx->pc = 0x2351C4u;
            // 0x2351c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2351C8u;
        goto label_2351c8;
    }
    ctx->pc = 0x2351C0u;
    {
        const bool branch_taken_0x2351c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2351C0u;
            // 0x2351c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351c0) {
            ctx->pc = 0x2352A8u;
            goto label_2352a8;
        }
    }
    ctx->pc = 0x2351C8u;
label_2351c8:
    // 0x2351c8: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_2351cc:
    if (ctx->pc == 0x2351CCu) {
        ctx->pc = 0x2351CCu;
            // 0x2351cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2351D0u;
        goto label_2351d0;
    }
    ctx->pc = 0x2351C8u;
    {
        const bool branch_taken_0x2351c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2351C8u;
            // 0x2351cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351c8) {
            ctx->pc = 0x2352A8u;
            goto label_2352a8;
        }
    }
    ctx->pc = 0x2351D0u;
label_2351d0:
    // 0x2351d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2351d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2351d4:
    // 0x2351d4: 0x0  nop
    ctx->pc = 0x2351d4u;
    // NOP
label_2351d8:
    // 0x2351d8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x2351d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_2351dc:
    // 0x2351dc: 0x5453002f  bnel        $v0, $s3, . + 4 + (0x2F << 2)
label_2351e0:
    if (ctx->pc == 0x2351E0u) {
        ctx->pc = 0x2351E0u;
            // 0x2351e0: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x2351E4u;
        goto label_2351e4;
    }
    ctx->pc = 0x2351DCu;
    {
        const bool branch_taken_0x2351dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2351dc) {
            ctx->pc = 0x2351E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2351DCu;
            // 0x2351e0: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23529Cu;
            goto label_23529c;
        }
    }
    ctx->pc = 0x2351E4u;
label_2351e4:
    // 0x2351e4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2351e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2351e8:
    // 0x2351e8: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x2351e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2351ec:
    // 0x2351ec: 0x54e00010  bnel        $a3, $zero, . + 4 + (0x10 << 2)
label_2351f0:
    if (ctx->pc == 0x2351F0u) {
        ctx->pc = 0x2351F0u;
            // 0x2351f0: 0x90e30000  lbu         $v1, 0x0($a3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->pc = 0x2351F4u;
        goto label_2351f4;
    }
    ctx->pc = 0x2351ECu;
    {
        const bool branch_taken_0x2351ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2351ec) {
            ctx->pc = 0x2351F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2351ECu;
            // 0x2351f0: 0x90e30000  lbu         $v1, 0x0($a3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235230u;
            goto label_235230;
        }
    }
    ctx->pc = 0x2351F4u;
label_2351f4:
    // 0x2351f4: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x2351f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2351f8:
    // 0x2351f8: 0xc048c5e  jal         func_123178
label_2351fc:
    if (ctx->pc == 0x2351FCu) {
        ctx->pc = 0x2351FCu;
            // 0x2351fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235200u;
        goto label_235200;
    }
    ctx->pc = 0x2351F8u;
    SET_GPR_U32(ctx, 31, 0x235200u);
    ctx->pc = 0x2351FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2351F8u;
            // 0x2351fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235200u; }
        if (ctx->pc != 0x235200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235200u; }
        if (ctx->pc != 0x235200u) { return; }
    }
    ctx->pc = 0x235200u;
label_235200:
    // 0x235200: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_235204:
    if (ctx->pc == 0x235204u) {
        ctx->pc = 0x235204u;
            // 0x235204: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235208u;
        goto label_235208;
    }
    ctx->pc = 0x235200u;
    {
        const bool branch_taken_0x235200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235200u;
            // 0x235204: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235200) {
            ctx->pc = 0x2352A8u;
            goto label_2352a8;
        }
    }
    ctx->pc = 0x235208u;
label_235208:
    // 0x235208: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x235208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23520c:
    // 0x23520c: 0x50a00023  beql        $a1, $zero, . + 4 + (0x23 << 2)
label_235210:
    if (ctx->pc == 0x235210u) {
        ctx->pc = 0x235210u;
            // 0x235210: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x235214u;
        goto label_235214;
    }
    ctx->pc = 0x23520Cu;
    {
        const bool branch_taken_0x23520c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23520c) {
            ctx->pc = 0x235210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23520Cu;
            // 0x235210: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23529Cu;
            goto label_23529c;
        }
    }
    ctx->pc = 0x235214u;
label_235214:
    // 0x235214: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x235214u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_235218:
    // 0x235218: 0xc048c5e  jal         func_123178
label_23521c:
    if (ctx->pc == 0x23521Cu) {
        ctx->pc = 0x23521Cu;
            // 0x23521c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235220u;
        goto label_235220;
    }
    ctx->pc = 0x235218u;
    SET_GPR_U32(ctx, 31, 0x235220u);
    ctx->pc = 0x23521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235218u;
            // 0x23521c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235220u; }
        if (ctx->pc != 0x235220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235220u; }
        if (ctx->pc != 0x235220u) { return; }
    }
    ctx->pc = 0x235220u;
label_235220:
    // 0x235220: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_235224:
    if (ctx->pc == 0x235224u) {
        ctx->pc = 0x235224u;
            // 0x235224: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x235228u;
        goto label_235228;
    }
    ctx->pc = 0x235220u;
    {
        const bool branch_taken_0x235220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235220) {
            ctx->pc = 0x235224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235220u;
            // 0x235224: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23529Cu;
            goto label_23529c;
        }
    }
    ctx->pc = 0x235228u;
label_235228:
    // 0x235228: 0x1000001f  b           . + 4 + (0x1F << 2)
label_23522c:
    if (ctx->pc == 0x23522Cu) {
        ctx->pc = 0x23522Cu;
            // 0x23522c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235230u;
        goto label_235230;
    }
    ctx->pc = 0x235228u;
    {
        const bool branch_taken_0x235228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235228u;
            // 0x23522c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235228) {
            ctx->pc = 0x2352A8u;
            goto label_2352a8;
        }
    }
    ctx->pc = 0x235230u;
label_235230:
    // 0x235230: 0x24e60002  addiu       $a2, $a3, 0x2
    ctx->pc = 0x235230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_235234:
    // 0x235234: 0xe35021  addu        $t2, $a3, $v1
    ctx->pc = 0x235234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_235238:
    // 0x235238: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x235238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_23523c:
    // 0x23523c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_235240:
    if (ctx->pc == 0x235240u) {
        ctx->pc = 0x235244u;
        goto label_235244;
    }
    ctx->pc = 0x23523Cu;
    {
        const bool branch_taken_0x23523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23523c) {
            ctx->pc = 0x235290u;
            goto label_235290;
        }
    }
    ctx->pc = 0x235244u;
label_235244:
    // 0x235244: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x235244u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_235248:
    // 0x235248: 0x24a90003  addiu       $t1, $a1, 0x3
    ctx->pc = 0x235248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_23524c:
    // 0x23524c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x23524cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_235250:
    // 0x235250: 0x26280003  addiu       $t0, $s1, 0x3
    ctx->pc = 0x235250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_235254:
    // 0x235254: 0x1000000a  b           . + 4 + (0xA << 2)
label_235258:
    if (ctx->pc == 0x235258u) {
        ctx->pc = 0x235258u;
            // 0x235258: 0x90e30002  lbu         $v1, 0x2($a3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
        ctx->pc = 0x23525Cu;
        goto label_23525c;
    }
    ctx->pc = 0x235254u;
    {
        const bool branch_taken_0x235254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235254u;
            // 0x235258: 0x90e30002  lbu         $v1, 0x2($a3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235254) {
            ctx->pc = 0x235280u;
            goto label_235280;
        }
    }
    ctx->pc = 0x23525Cu;
label_23525c:
    // 0x23525c: 0x0  nop
    ctx->pc = 0x23525cu;
    // NOP
label_235260:
    // 0x235260: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x235260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_235264:
    // 0x235264: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_235268:
    if (ctx->pc == 0x235268u) {
        ctx->pc = 0x23526Cu;
        goto label_23526c;
    }
    ctx->pc = 0x235264u;
    {
        const bool branch_taken_0x235264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235264) {
            ctx->pc = 0x235290u;
            goto label_235290;
        }
    }
    ctx->pc = 0x23526Cu;
label_23526c:
    // 0x23526c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x23526cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_235270:
    // 0x235270: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x235270u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_235274:
    // 0x235274: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x235274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_235278:
    // 0x235278: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x235278u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23527c:
    // 0x23527c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x23527cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_235280:
    // 0x235280: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x235280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_235284:
    // 0x235284: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x235284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_235288:
    // 0x235288: 0x5060fff5  beql        $v1, $zero, . + 4 + (-0xB << 2)
label_23528c:
    if (ctx->pc == 0x23528Cu) {
        ctx->pc = 0x23528Cu;
            // 0x23528c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x235290u;
        goto label_235290;
    }
    ctx->pc = 0x235288u;
    {
        const bool branch_taken_0x235288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x235288) {
            ctx->pc = 0x23528Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235288u;
            // 0x23528c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235260;
        }
    }
    ctx->pc = 0x235290u;
label_235290:
    // 0x235290: 0x10ca0005  beq         $a2, $t2, . + 4 + (0x5 << 2)
label_235294:
    if (ctx->pc == 0x235294u) {
        ctx->pc = 0x235294u;
            // 0x235294: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235298u;
        goto label_235298;
    }
    ctx->pc = 0x235290u;
    {
        const bool branch_taken_0x235290 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x235294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235290u;
            // 0x235294: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235290) {
            ctx->pc = 0x2352A8u;
            goto label_2352a8;
        }
    }
    ctx->pc = 0x235298u;
label_235298:
    // 0x235298: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x235298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_23529c:
    // 0x23529c: 0x5600ffce  bnel        $s0, $zero, . + 4 + (-0x32 << 2)
label_2352a0:
    if (ctx->pc == 0x2352A0u) {
        ctx->pc = 0x2352A0u;
            // 0x2352a0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2352A4u;
        goto label_2352a4;
    }
    ctx->pc = 0x23529Cu;
    {
        const bool branch_taken_0x23529c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23529c) {
            ctx->pc = 0x2352A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23529Cu;
            // 0x2352a0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2351D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2351d8;
        }
    }
    ctx->pc = 0x2352A4u;
label_2352a4:
    // 0x2352a4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2352a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2352a8:
    // 0x2352a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2352a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2352ac:
    // 0x2352ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2352acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2352b0:
    // 0x2352b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2352b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2352b4:
    // 0x2352b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2352b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2352b8:
    // 0x2352b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2352b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2352bc:
    // 0x2352bc: 0x3e00008  jr          $ra
label_2352c0:
    if (ctx->pc == 0x2352C0u) {
        ctx->pc = 0x2352C0u;
            // 0x2352c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2352C4u;
        goto label_2352c4;
    }
    ctx->pc = 0x2352BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2352C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2352BCu;
            // 0x2352c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2352C4u;
label_2352c4:
    // 0x2352c4: 0x0  nop
    ctx->pc = 0x2352c4u;
    // NOP
label_2352c8:
    // 0x2352c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2352c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2352cc:
    // 0x2352cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2352ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2352d0:
    // 0x2352d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2352d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2352d4:
    // 0x2352d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2352d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2352d8:
    // 0x2352d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2352d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2352dc:
    // 0x2352dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2352dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2352e0:
    // 0x2352e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2352e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2352e4:
    // 0x2352e4: 0x14820023  bne         $a0, $v0, . + 4 + (0x23 << 2)
label_2352e8:
    if (ctx->pc == 0x2352E8u) {
        ctx->pc = 0x2352E8u;
            // 0x2352e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2352ECu;
        goto label_2352ec;
    }
    ctx->pc = 0x2352E4u;
    {
        const bool branch_taken_0x2352e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2352E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2352E4u;
            // 0x2352e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352e4) {
            ctx->pc = 0x235374u;
            goto label_235374;
        }
    }
    ctx->pc = 0x2352ECu;
label_2352ec:
    // 0x2352ec: 0x8e30004c  lw          $s0, 0x4C($s1)
    ctx->pc = 0x2352ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2352f0:
    // 0x2352f0: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_2352f4:
    if (ctx->pc == 0x2352F4u) {
        ctx->pc = 0x2352F4u;
            // 0x2352f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2352F8u;
        goto label_2352f8;
    }
    ctx->pc = 0x2352F0u;
    {
        const bool branch_taken_0x2352f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2352F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2352F0u;
            // 0x2352f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352f0) {
            ctx->pc = 0x235378u;
            goto label_235378;
        }
    }
    ctx->pc = 0x2352F8u;
label_2352f8:
    // 0x2352f8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2352f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2352fc:
    // 0x2352fc: 0x50a0001f  beql        $a1, $zero, . + 4 + (0x1F << 2)
label_235300:
    if (ctx->pc == 0x235300u) {
        ctx->pc = 0x235300u;
            // 0x235300: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x235304u;
        goto label_235304;
    }
    ctx->pc = 0x2352FCu;
    {
        const bool branch_taken_0x2352fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2352fc) {
            ctx->pc = 0x235300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2352FCu;
            // 0x235300: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23537Cu;
            goto label_23537c;
        }
    }
    ctx->pc = 0x235304u;
label_235304:
    // 0x235304: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x235304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_235308:
    // 0x235308: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
label_23530c:
    if (ctx->pc == 0x23530Cu) {
        ctx->pc = 0x23530Cu;
            // 0x23530c: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x235310u;
        goto label_235310;
    }
    ctx->pc = 0x235308u;
    {
        const bool branch_taken_0x235308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x235308) {
            ctx->pc = 0x23530Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235308u;
            // 0x23530c: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23537Cu;
            goto label_23537c;
        }
    }
    ctx->pc = 0x235310u;
label_235310:
    // 0x235310: 0xc08d460  jal         func_235180
label_235314:
    if (ctx->pc == 0x235314u) {
        ctx->pc = 0x235318u;
        goto label_235318;
    }
    ctx->pc = 0x235310u;
    SET_GPR_U32(ctx, 31, 0x235318u);
    ctx->pc = 0x235180u;
    goto label_235180;
    ctx->pc = 0x235318u;
label_235318:
    // 0x235318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23531c:
    // 0x23531c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_235320:
    if (ctx->pc == 0x235320u) {
        ctx->pc = 0x235320u;
            // 0x235320: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x235324u;
        goto label_235324;
    }
    ctx->pc = 0x23531Cu;
    {
        const bool branch_taken_0x23531c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23531Cu;
            // 0x235320: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23531c) {
            ctx->pc = 0x235378u;
            goto label_235378;
        }
    }
    ctx->pc = 0x235324u;
label_235324:
    // 0x235324: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x235324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_235328:
    // 0x235328: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x235328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_23532c:
    // 0x23532c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_235330:
    // 0x235330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_235334:
    if (ctx->pc == 0x235334u) {
        ctx->pc = 0x235334u;
            // 0x235334: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x235338u;
        goto label_235338;
    }
    ctx->pc = 0x235330u;
    {
        const bool branch_taken_0x235330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235330u;
            // 0x235334: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235330) {
            ctx->pc = 0x235340u;
            goto label_235340;
        }
    }
    ctx->pc = 0x235338u;
label_235338:
    // 0x235338: 0xc090c82  jal         func_243208
label_23533c:
    if (ctx->pc == 0x23533Cu) {
        ctx->pc = 0x23533Cu;
            // 0x23533c: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->pc = 0x235340u;
        goto label_235340;
    }
    ctx->pc = 0x235338u;
    SET_GPR_U32(ctx, 31, 0x235340u);
    ctx->pc = 0x23533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235338u;
            // 0x23533c: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (runtime->hasFunction(0x243208u)) {
        auto targetFn = runtime->lookupFunction(0x243208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235340u; }
        if (ctx->pc != 0x235340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243208_0x243208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235340u; }
        if (ctx->pc != 0x235340u) { return; }
    }
    ctx->pc = 0x235340u;
label_235340:
    // 0x235340: 0xae30004c  sw          $s0, 0x4C($s1)
    ctx->pc = 0x235340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
label_235344:
    // 0x235344: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x235344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_235348:
    // 0x235348: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x235348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_23534c:
    // 0x23534c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_235350:
    // 0x235350: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_235354:
    if (ctx->pc == 0x235354u) {
        ctx->pc = 0x235354u;
            // 0x235354: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x235358u;
        goto label_235358;
    }
    ctx->pc = 0x235350u;
    {
        const bool branch_taken_0x235350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235350u;
            // 0x235354: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235350) {
            ctx->pc = 0x235374u;
            goto label_235374;
        }
    }
    ctx->pc = 0x235358u;
label_235358:
    // 0x235358: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x235358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_23535c:
    // 0x23535c: 0x244252c8  addiu       $v0, $v0, 0x52C8
    ctx->pc = 0x23535cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21192));
label_235360:
    // 0x235360: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_235364:
    if (ctx->pc == 0x235364u) {
        ctx->pc = 0x235364u;
            // 0x235364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235368u;
        goto label_235368;
    }
    ctx->pc = 0x235360u;
    {
        const bool branch_taken_0x235360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235360u;
            // 0x235364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235360) {
            ctx->pc = 0x235374u;
            goto label_235374;
        }
    }
    ctx->pc = 0x235368u;
label_235368:
    // 0x235368: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x235368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23536c:
    // 0x23536c: 0x60f809  jalr        $v1
label_235370:
    if (ctx->pc == 0x235370u) {
        ctx->pc = 0x235370u;
            // 0x235370: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x235374u;
        goto label_235374;
    }
    ctx->pc = 0x23536Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x235374u);
        ctx->pc = 0x235370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23536Cu;
            // 0x235370: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x235374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235374u; }
            if (ctx->pc != 0x235374u) { return; }
        }
        }
    }
    ctx->pc = 0x235374u;
label_235374:
    // 0x235374: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235378:
    // 0x235378: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23537c:
    // 0x23537c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23537cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235380:
    // 0x235380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235384:
    // 0x235384: 0x3e00008  jr          $ra
label_235388:
    if (ctx->pc == 0x235388u) {
        ctx->pc = 0x235388u;
            // 0x235388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x23538Cu;
        goto label_23538c;
    }
    ctx->pc = 0x235384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235384u;
            // 0x235388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23538Cu;
label_23538c:
    // 0x23538c: 0x0  nop
    ctx->pc = 0x23538cu;
    // NOP
    ctx->pc = 0x235390u;
}
