#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002852C0
// Address: 0x2852c0 - 0x285438
void sub_002852C0_0x2852c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002852C0_0x2852c0");
#endif

    switch (ctx->pc) {
        case 0x2852c0u: goto label_2852c0;
        case 0x2852c4u: goto label_2852c4;
        case 0x2852c8u: goto label_2852c8;
        case 0x2852ccu: goto label_2852cc;
        case 0x2852d0u: goto label_2852d0;
        case 0x2852d4u: goto label_2852d4;
        case 0x2852d8u: goto label_2852d8;
        case 0x2852dcu: goto label_2852dc;
        case 0x2852e0u: goto label_2852e0;
        case 0x2852e4u: goto label_2852e4;
        case 0x2852e8u: goto label_2852e8;
        case 0x2852ecu: goto label_2852ec;
        case 0x2852f0u: goto label_2852f0;
        case 0x2852f4u: goto label_2852f4;
        case 0x2852f8u: goto label_2852f8;
        case 0x2852fcu: goto label_2852fc;
        case 0x285300u: goto label_285300;
        case 0x285304u: goto label_285304;
        case 0x285308u: goto label_285308;
        case 0x28530cu: goto label_28530c;
        case 0x285310u: goto label_285310;
        case 0x285314u: goto label_285314;
        case 0x285318u: goto label_285318;
        case 0x28531cu: goto label_28531c;
        case 0x285320u: goto label_285320;
        case 0x285324u: goto label_285324;
        case 0x285328u: goto label_285328;
        case 0x28532cu: goto label_28532c;
        case 0x285330u: goto label_285330;
        case 0x285334u: goto label_285334;
        case 0x285338u: goto label_285338;
        case 0x28533cu: goto label_28533c;
        case 0x285340u: goto label_285340;
        case 0x285344u: goto label_285344;
        case 0x285348u: goto label_285348;
        case 0x28534cu: goto label_28534c;
        case 0x285350u: goto label_285350;
        case 0x285354u: goto label_285354;
        case 0x285358u: goto label_285358;
        case 0x28535cu: goto label_28535c;
        case 0x285360u: goto label_285360;
        case 0x285364u: goto label_285364;
        case 0x285368u: goto label_285368;
        case 0x28536cu: goto label_28536c;
        case 0x285370u: goto label_285370;
        case 0x285374u: goto label_285374;
        case 0x285378u: goto label_285378;
        case 0x28537cu: goto label_28537c;
        case 0x285380u: goto label_285380;
        case 0x285384u: goto label_285384;
        case 0x285388u: goto label_285388;
        case 0x28538cu: goto label_28538c;
        case 0x285390u: goto label_285390;
        case 0x285394u: goto label_285394;
        case 0x285398u: goto label_285398;
        case 0x28539cu: goto label_28539c;
        case 0x2853a0u: goto label_2853a0;
        case 0x2853a4u: goto label_2853a4;
        case 0x2853a8u: goto label_2853a8;
        case 0x2853acu: goto label_2853ac;
        case 0x2853b0u: goto label_2853b0;
        case 0x2853b4u: goto label_2853b4;
        case 0x2853b8u: goto label_2853b8;
        case 0x2853bcu: goto label_2853bc;
        case 0x2853c0u: goto label_2853c0;
        case 0x2853c4u: goto label_2853c4;
        case 0x2853c8u: goto label_2853c8;
        case 0x2853ccu: goto label_2853cc;
        case 0x2853d0u: goto label_2853d0;
        case 0x2853d4u: goto label_2853d4;
        case 0x2853d8u: goto label_2853d8;
        case 0x2853dcu: goto label_2853dc;
        case 0x2853e0u: goto label_2853e0;
        case 0x2853e4u: goto label_2853e4;
        case 0x2853e8u: goto label_2853e8;
        case 0x2853ecu: goto label_2853ec;
        case 0x2853f0u: goto label_2853f0;
        case 0x2853f4u: goto label_2853f4;
        case 0x2853f8u: goto label_2853f8;
        case 0x2853fcu: goto label_2853fc;
        case 0x285400u: goto label_285400;
        case 0x285404u: goto label_285404;
        case 0x285408u: goto label_285408;
        case 0x28540cu: goto label_28540c;
        case 0x285410u: goto label_285410;
        case 0x285414u: goto label_285414;
        case 0x285418u: goto label_285418;
        case 0x28541cu: goto label_28541c;
        case 0x285420u: goto label_285420;
        case 0x285424u: goto label_285424;
        case 0x285428u: goto label_285428;
        case 0x28542cu: goto label_28542c;
        case 0x285430u: goto label_285430;
        case 0x285434u: goto label_285434;
        default: break;
    }

    ctx->pc = 0x2852c0u;

label_2852c0:
    // 0x2852c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2852c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2852c4:
    // 0x2852c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2852c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2852c8:
    // 0x2852c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2852c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2852cc:
    // 0x2852cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2852ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2852d0:
    // 0x2852d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2852d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2852d4:
    // 0x2852d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2852d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2852d8:
    // 0x2852d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2852d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2852dc:
    // 0x2852dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2852dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2852e0:
    // 0x2852e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2852e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2852e4:
    // 0x2852e4: 0x1200004d  beqz        $s0, . + 4 + (0x4D << 2)
label_2852e8:
    if (ctx->pc == 0x2852E8u) {
        ctx->pc = 0x2852E8u;
            // 0x2852e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2852ECu;
        goto label_2852ec;
    }
    ctx->pc = 0x2852E4u;
    {
        const bool branch_taken_0x2852e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2852E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2852E4u;
            // 0x2852e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852e4) {
            ctx->pc = 0x28541Cu;
            goto label_28541c;
        }
    }
    ctx->pc = 0x2852ECu;
label_2852ec:
    // 0x2852ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2852ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2852f0:
    // 0x2852f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2852f4:
    if (ctx->pc == 0x2852F4u) {
        ctx->pc = 0x2852F4u;
            // 0x2852f4: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2852F8u;
        goto label_2852f8;
    }
    ctx->pc = 0x2852F0u;
    {
        const bool branch_taken_0x2852f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2852F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2852F0u;
            // 0x2852f4: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852f0) {
            ctx->pc = 0x285304u;
            goto label_285304;
        }
    }
    ctx->pc = 0x2852F8u;
label_2852f8:
    // 0x2852f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2852f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2852fc:
    // 0x2852fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_285300:
    if (ctx->pc == 0x285300u) {
        ctx->pc = 0x285304u;
        goto label_285304;
    }
    ctx->pc = 0x2852FCu;
    {
        const bool branch_taken_0x2852fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2852fc) {
            ctx->pc = 0x285314u;
            goto label_285314;
        }
    }
    ctx->pc = 0x285304u;
label_285304:
    // 0x285304: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x285304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_285308:
    // 0x285308: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x285308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_28530c:
    // 0x28530c: 0x10000013  b           . + 4 + (0x13 << 2)
label_285310:
    if (ctx->pc == 0x285310u) {
        ctx->pc = 0x285310u;
            // 0x285310: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->pc = 0x285314u;
        goto label_285314;
    }
    ctx->pc = 0x28530Cu;
    {
        const bool branch_taken_0x28530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28530Cu;
            // 0x285310: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28530c) {
            ctx->pc = 0x28535Cu;
            goto label_28535c;
        }
    }
    ctx->pc = 0x285314u;
label_285314:
    // 0x285314: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_285318:
    if (ctx->pc == 0x285318u) {
        ctx->pc = 0x285318u;
            // 0x285318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28531Cu;
        goto label_28531c;
    }
    ctx->pc = 0x285314u;
    {
        const bool branch_taken_0x285314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x285318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285314u;
            // 0x285318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285314) {
            ctx->pc = 0x285344u;
            goto label_285344;
        }
    }
    ctx->pc = 0x28531Cu;
label_28531c:
    // 0x28531c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28531cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_285320:
    // 0x285320: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x285320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285324:
    // 0x285324: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x285324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285328:
    // 0x285328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28532c:
    // 0x28532c: 0x220f809  jalr        $s1
label_285330:
    if (ctx->pc == 0x285330u) {
        ctx->pc = 0x285330u;
            // 0x285330: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x285334u;
        goto label_285334;
    }
    ctx->pc = 0x28532Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x285334u);
        ctx->pc = 0x285330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28532Cu;
            // 0x285330: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285334u; }
            if (ctx->pc != 0x285334u) { return; }
        }
        }
    }
    ctx->pc = 0x285334u;
label_285334:
    // 0x285334: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x285334u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
label_285338:
    // 0x285338: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x285338u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_28533c:
    // 0x28533c: 0x19200037  blez        $t1, . + 4 + (0x37 << 2)
label_285340:
    if (ctx->pc == 0x285340u) {
        ctx->pc = 0x285340u;
            // 0x285340: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285344u;
        goto label_285344;
    }
    ctx->pc = 0x28533Cu;
    {
        const bool branch_taken_0x28533c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x285340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28533Cu;
            // 0x285340: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28533c) {
            ctx->pc = 0x28541Cu;
            goto label_28541c;
        }
    }
    ctx->pc = 0x285344u;
label_285344:
    // 0x285344: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x285344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_285348:
    // 0x285348: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_28534c:
    if (ctx->pc == 0x28534Cu) {
        ctx->pc = 0x28534Cu;
            // 0x28534c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x285350u;
        goto label_285350;
    }
    ctx->pc = 0x285348u;
    {
        const bool branch_taken_0x285348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285348) {
            ctx->pc = 0x28534Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285348u;
            // 0x28534c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285370u;
            goto label_285370;
        }
    }
    ctx->pc = 0x285350u;
label_285350:
    // 0x285350: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x285350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_285354:
    // 0x285354: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x285354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_285358:
    // 0x285358: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x285358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_28535c:
    // 0x28535c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28535cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285360:
    // 0x285360: 0xc0a5648  jal         func_295920
label_285364:
    if (ctx->pc == 0x285364u) {
        ctx->pc = 0x285364u;
            // 0x285364: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285368u;
        goto label_285368;
    }
    ctx->pc = 0x285360u;
    SET_GPR_U32(ctx, 31, 0x285368u);
    ctx->pc = 0x285364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285360u;
            // 0x285364: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285368u; }
        if (ctx->pc != 0x285368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285368u; }
        if (ctx->pc != 0x285368u) { return; }
    }
    ctx->pc = 0x285368u;
label_285368:
    // 0x285368: 0x1000002c  b           . + 4 + (0x2C << 2)
label_28536c:
    if (ctx->pc == 0x28536Cu) {
        ctx->pc = 0x28536Cu;
            // 0x28536c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x285370u;
        goto label_285370;
    }
    ctx->pc = 0x285368u;
    {
        const bool branch_taken_0x285368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28536Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285368u;
            // 0x28536c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285368) {
            ctx->pc = 0x28541Cu;
            goto label_28541c;
        }
    }
    ctx->pc = 0x285370u;
label_285370:
    // 0x285370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285374:
    // 0x285374: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x285374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285378:
    // 0x285378: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x285378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_28537c:
    // 0x28537c: 0x40f809  jalr        $v0
label_285380:
    if (ctx->pc == 0x285380u) {
        ctx->pc = 0x285380u;
            // 0x285380: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285384u;
        goto label_285384;
    }
    ctx->pc = 0x28537Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285384u);
        ctx->pc = 0x285380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28537Cu;
            // 0x285380: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285384u; }
            if (ctx->pc != 0x285384u) { return; }
        }
        }
    }
    ctx->pc = 0x285384u;
label_285384:
    // 0x285384: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x285384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285388:
    // 0x285388: 0x59200005  blezl       $t1, . + 4 + (0x5 << 2)
label_28538c:
    if (ctx->pc == 0x28538Cu) {
        ctx->pc = 0x28538Cu;
            // 0x28538c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x285390u;
        goto label_285390;
    }
    ctx->pc = 0x285388u;
    {
        const bool branch_taken_0x285388 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x285388) {
            ctx->pc = 0x28538Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285388u;
            // 0x28538c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2853A0u;
            goto label_2853a0;
        }
    }
    ctx->pc = 0x285390u;
label_285390:
    // 0x285390: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x285390u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
label_285394:
    // 0x285394: 0x122102d  daddu       $v0, $t1, $v0
    ctx->pc = 0x285394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
label_285398:
    // 0x285398: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x285398u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
label_28539c:
    // 0x28539c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x28539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2853a0:
    // 0x2853a0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2853a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2853a4:
    // 0x2853a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2853a8:
    if (ctx->pc == 0x2853A8u) {
        ctx->pc = 0x2853A8u;
            // 0x2853a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2853ACu;
        goto label_2853ac;
    }
    ctx->pc = 0x2853A4u;
    {
        const bool branch_taken_0x2853a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853A4u;
            // 0x2853a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853a4) {
            ctx->pc = 0x2853CCu;
            goto label_2853cc;
        }
    }
    ctx->pc = 0x2853ACu;
label_2853ac:
    // 0x2853ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2853acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2853b0:
    // 0x2853b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2853b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2853b4:
    // 0x2853b4: 0xc0a1558  jal         func_285560
label_2853b8:
    if (ctx->pc == 0x2853B8u) {
        ctx->pc = 0x2853B8u;
            // 0x2853b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2853BCu;
        goto label_2853bc;
    }
    ctx->pc = 0x2853B4u;
    SET_GPR_U32(ctx, 31, 0x2853BCu);
    ctx->pc = 0x2853B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2853B4u;
            // 0x2853b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2853BCu; }
        if (ctx->pc != 0x2853BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2853BCu; }
        if (ctx->pc != 0x2853BCu) { return; }
    }
    ctx->pc = 0x2853BCu;
label_2853bc:
    // 0x2853bc: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2853bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
label_2853c0:
    // 0x2853c0: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2853c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_2853c4:
    // 0x2853c4: 0x19200015  blez        $t1, . + 4 + (0x15 << 2)
label_2853c8:
    if (ctx->pc == 0x2853C8u) {
        ctx->pc = 0x2853C8u;
            // 0x2853c8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2853CCu;
        goto label_2853cc;
    }
    ctx->pc = 0x2853C4u;
    {
        const bool branch_taken_0x2853c4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2853C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853C4u;
            // 0x2853c8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853c4) {
            ctx->pc = 0x28541Cu;
            goto label_28541c;
        }
    }
    ctx->pc = 0x2853CCu;
label_2853cc:
    // 0x2853cc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2853ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2853d0:
    // 0x2853d0: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_2853d4:
    if (ctx->pc == 0x2853D4u) {
        ctx->pc = 0x2853D4u;
            // 0x2853d4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2853D8u;
        goto label_2853d8;
    }
    ctx->pc = 0x2853D0u;
    {
        const bool branch_taken_0x2853d0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2853D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853D0u;
            // 0x2853d4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853d0) {
            ctx->pc = 0x2853F4u;
            goto label_2853f4;
        }
    }
    ctx->pc = 0x2853D8u;
label_2853d8:
    // 0x2853d8: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x2853d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2853dc:
    // 0x2853dc: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x2853dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_2853e0:
    // 0x2853e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2853e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2853e4:
    // 0x2853e4: 0xc0a5648  jal         func_295920
label_2853e8:
    if (ctx->pc == 0x2853E8u) {
        ctx->pc = 0x2853E8u;
            // 0x2853e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2853ECu;
        goto label_2853ec;
    }
    ctx->pc = 0x2853E4u;
    SET_GPR_U32(ctx, 31, 0x2853ECu);
    ctx->pc = 0x2853E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2853E4u;
            // 0x2853e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2853ECu; }
        if (ctx->pc != 0x2853ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2853ECu; }
        if (ctx->pc != 0x2853ECu) { return; }
    }
    ctx->pc = 0x2853ECu;
label_2853ec:
    // 0x2853ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_2853f0:
    if (ctx->pc == 0x2853F0u) {
        ctx->pc = 0x2853F0u;
            // 0x2853f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2853F4u;
        goto label_2853f4;
    }
    ctx->pc = 0x2853ECu;
    {
        const bool branch_taken_0x2853ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853ECu;
            // 0x2853f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853ec) {
            ctx->pc = 0x28541Cu;
            goto label_28541c;
        }
    }
    ctx->pc = 0x2853F4u;
label_2853f4:
    // 0x2853f4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2853f8:
    if (ctx->pc == 0x2853F8u) {
        ctx->pc = 0x2853F8u;
            // 0x2853f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2853FCu;
        goto label_2853fc;
    }
    ctx->pc = 0x2853F4u;
    {
        const bool branch_taken_0x2853f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853F4u;
            // 0x2853f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853f4) {
            ctx->pc = 0x285418u;
            goto label_285418;
        }
    }
    ctx->pc = 0x2853FCu;
label_2853fc:
    // 0x2853fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2853fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285400:
    // 0x285400: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x285400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285404:
    // 0x285404: 0x24050083  addiu       $a1, $zero, 0x83
    ctx->pc = 0x285404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_285408:
    // 0x285408: 0x220f809  jalr        $s1
label_28540c:
    if (ctx->pc == 0x28540Cu) {
        ctx->pc = 0x28540Cu;
            // 0x28540c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285410u;
        goto label_285410;
    }
    ctx->pc = 0x285408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x285410u);
        ctx->pc = 0x28540Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285408u;
            // 0x28540c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285410u; }
            if (ctx->pc != 0x285410u) { return; }
        }
        }
    }
    ctx->pc = 0x285410u;
label_285410:
    // 0x285410: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x285410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
label_285414:
    // 0x285414: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x285414u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_285418:
    // 0x285418: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x285418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28541c:
    // 0x28541c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28541cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_285420:
    // 0x285420: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x285420u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_285424:
    // 0x285424: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x285424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_285428:
    // 0x285428: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28542c:
    // 0x28542c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28542cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_285430:
    // 0x285430: 0x3e00008  jr          $ra
label_285434:
    if (ctx->pc == 0x285434u) {
        ctx->pc = 0x285434u;
            // 0x285434: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x285438u;
        goto label_fallthrough_0x285430;
    }
    ctx->pc = 0x285430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285430u;
            // 0x285434: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x285430:
    ctx->pc = 0x285438u;
    ctx->pc = 0x285438u;
}
