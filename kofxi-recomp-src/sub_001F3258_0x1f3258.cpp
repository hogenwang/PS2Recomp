#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3258
// Address: 0x1f3258 - 0x1f33d0
void sub_001F3258_0x1f3258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3258_0x1f3258");
#endif

    switch (ctx->pc) {
        case 0x1f3258u: goto label_1f3258;
        case 0x1f325cu: goto label_1f325c;
        case 0x1f3260u: goto label_1f3260;
        case 0x1f3264u: goto label_1f3264;
        case 0x1f3268u: goto label_1f3268;
        case 0x1f326cu: goto label_1f326c;
        case 0x1f3270u: goto label_1f3270;
        case 0x1f3274u: goto label_1f3274;
        case 0x1f3278u: goto label_1f3278;
        case 0x1f327cu: goto label_1f327c;
        case 0x1f3280u: goto label_1f3280;
        case 0x1f3284u: goto label_1f3284;
        case 0x1f3288u: goto label_1f3288;
        case 0x1f328cu: goto label_1f328c;
        case 0x1f3290u: goto label_1f3290;
        case 0x1f3294u: goto label_1f3294;
        case 0x1f3298u: goto label_1f3298;
        case 0x1f329cu: goto label_1f329c;
        case 0x1f32a0u: goto label_1f32a0;
        case 0x1f32a4u: goto label_1f32a4;
        case 0x1f32a8u: goto label_1f32a8;
        case 0x1f32acu: goto label_1f32ac;
        case 0x1f32b0u: goto label_1f32b0;
        case 0x1f32b4u: goto label_1f32b4;
        case 0x1f32b8u: goto label_1f32b8;
        case 0x1f32bcu: goto label_1f32bc;
        case 0x1f32c0u: goto label_1f32c0;
        case 0x1f32c4u: goto label_1f32c4;
        case 0x1f32c8u: goto label_1f32c8;
        case 0x1f32ccu: goto label_1f32cc;
        case 0x1f32d0u: goto label_1f32d0;
        case 0x1f32d4u: goto label_1f32d4;
        case 0x1f32d8u: goto label_1f32d8;
        case 0x1f32dcu: goto label_1f32dc;
        case 0x1f32e0u: goto label_1f32e0;
        case 0x1f32e4u: goto label_1f32e4;
        case 0x1f32e8u: goto label_1f32e8;
        case 0x1f32ecu: goto label_1f32ec;
        case 0x1f32f0u: goto label_1f32f0;
        case 0x1f32f4u: goto label_1f32f4;
        case 0x1f32f8u: goto label_1f32f8;
        case 0x1f32fcu: goto label_1f32fc;
        case 0x1f3300u: goto label_1f3300;
        case 0x1f3304u: goto label_1f3304;
        case 0x1f3308u: goto label_1f3308;
        case 0x1f330cu: goto label_1f330c;
        case 0x1f3310u: goto label_1f3310;
        case 0x1f3314u: goto label_1f3314;
        case 0x1f3318u: goto label_1f3318;
        case 0x1f331cu: goto label_1f331c;
        case 0x1f3320u: goto label_1f3320;
        case 0x1f3324u: goto label_1f3324;
        case 0x1f3328u: goto label_1f3328;
        case 0x1f332cu: goto label_1f332c;
        case 0x1f3330u: goto label_1f3330;
        case 0x1f3334u: goto label_1f3334;
        case 0x1f3338u: goto label_1f3338;
        case 0x1f333cu: goto label_1f333c;
        case 0x1f3340u: goto label_1f3340;
        case 0x1f3344u: goto label_1f3344;
        case 0x1f3348u: goto label_1f3348;
        case 0x1f334cu: goto label_1f334c;
        case 0x1f3350u: goto label_1f3350;
        case 0x1f3354u: goto label_1f3354;
        case 0x1f3358u: goto label_1f3358;
        case 0x1f335cu: goto label_1f335c;
        case 0x1f3360u: goto label_1f3360;
        case 0x1f3364u: goto label_1f3364;
        case 0x1f3368u: goto label_1f3368;
        case 0x1f336cu: goto label_1f336c;
        case 0x1f3370u: goto label_1f3370;
        case 0x1f3374u: goto label_1f3374;
        case 0x1f3378u: goto label_1f3378;
        case 0x1f337cu: goto label_1f337c;
        case 0x1f3380u: goto label_1f3380;
        case 0x1f3384u: goto label_1f3384;
        case 0x1f3388u: goto label_1f3388;
        case 0x1f338cu: goto label_1f338c;
        case 0x1f3390u: goto label_1f3390;
        case 0x1f3394u: goto label_1f3394;
        case 0x1f3398u: goto label_1f3398;
        case 0x1f339cu: goto label_1f339c;
        case 0x1f33a0u: goto label_1f33a0;
        case 0x1f33a4u: goto label_1f33a4;
        case 0x1f33a8u: goto label_1f33a8;
        case 0x1f33acu: goto label_1f33ac;
        case 0x1f33b0u: goto label_1f33b0;
        case 0x1f33b4u: goto label_1f33b4;
        case 0x1f33b8u: goto label_1f33b8;
        case 0x1f33bcu: goto label_1f33bc;
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f33c4u: goto label_1f33c4;
        case 0x1f33c8u: goto label_1f33c8;
        case 0x1f33ccu: goto label_1f33cc;
        default: break;
    }

    ctx->pc = 0x1f3258u;

label_1f3258:
    // 0x1f3258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f325c:
    // 0x1f325c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1f3260:
    // 0x1f3260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3264:
    // 0x1f3264: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f3264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1f3268:
    // 0x1f3268: 0x26110d88  addiu       $s1, $s0, 0xD88
    ctx->pc = 0x1f3268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
label_1f326c:
    // 0x1f326c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1f3270:
    // 0x1f3270: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f3270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3274:
    // 0x1f3274: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f3274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1f3278:
    // 0x1f3278: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f3278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f327c:
    // 0x1f327c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1f3280:
    // 0x1f3280: 0x26030ea0  addiu       $v1, $s0, 0xEA0
    ctx->pc = 0x1f3280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
label_1f3284:
    // 0x1f3284: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f3284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1f3288:
    // 0x1f3288: 0x26060e48  addiu       $a2, $s0, 0xE48
    ctx->pc = 0x1f3288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3656));
label_1f328c:
    // 0x1f328c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f3290:
    // 0x1f3290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f3290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3294:
    // 0x1f3294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f3298:
    if (ctx->pc == 0x1F3298u) {
        ctx->pc = 0x1F3298u;
            // 0x1f3298: 0x8e152018  lw          $s5, 0x2018($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
        ctx->pc = 0x1F329Cu;
        goto label_1f329c;
    }
    ctx->pc = 0x1F3294u;
    {
        const bool branch_taken_0x1f3294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3294u;
            // 0x1f3298: 0x8e152018  lw          $s5, 0x2018($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3294) {
            ctx->pc = 0x1F32B0u;
            goto label_1f32b0;
        }
    }
    ctx->pc = 0x1F329Cu;
label_1f329c:
    // 0x1f329c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1f329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1f32a0:
    // 0x1f32a0: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x1f32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1f32a4:
    // 0x1f32a4: 0x8e240164  lw          $a0, 0x164($s1)
    ctx->pc = 0x1f32a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_1f32a8:
    // 0x1f32a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1f32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f32ac:
    // 0x1f32ac: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x1f32acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f32b0:
    // 0x1f32b0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1f32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1f32b4:
    // 0x1f32b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f32b8:
    if (ctx->pc == 0x1F32B8u) {
        ctx->pc = 0x1F32B8u;
            // 0x1f32b8: 0x8cd30028  lw          $s3, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->pc = 0x1F32BCu;
        goto label_1f32bc;
    }
    ctx->pc = 0x1F32B4u;
    {
        const bool branch_taken_0x1f32b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F32B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F32B4u;
            // 0x1f32b8: 0x8cd30028  lw          $s3, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32b4) {
            ctx->pc = 0x1F32D8u;
            goto label_1f32d8;
        }
    }
    ctx->pc = 0x1F32BCu;
label_1f32bc:
    // 0x1f32bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f32bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f32c0:
    // 0x1f32c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f32c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f32c4:
    // 0x1f32c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f32c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f32c8:
    // 0x1f32c8: 0x40f809  jalr        $v0
label_1f32cc:
    if (ctx->pc == 0x1F32CCu) {
        ctx->pc = 0x1F32CCu;
            // 0x1f32cc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F32D0u;
        goto label_1f32d0;
    }
    ctx->pc = 0x1F32C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F32D0u);
        ctx->pc = 0x1F32CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F32C8u;
            // 0x1f32cc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F32D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F32D0u; }
            if (ctx->pc != 0x1F32D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F32D0u;
label_1f32d0:
    // 0x1f32d0: 0x10000037  b           . + 4 + (0x37 << 2)
label_1f32d4:
    if (ctx->pc == 0x1F32D4u) {
        ctx->pc = 0x1F32D4u;
            // 0x1f32d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1F32D8u;
        goto label_1f32d8;
    }
    ctx->pc = 0x1F32D0u;
    {
        const bool branch_taken_0x1f32d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F32D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F32D0u;
            // 0x1f32d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32d0) {
            ctx->pc = 0x1F33B0u;
            goto label_1f33b0;
        }
    }
    ctx->pc = 0x1F32D8u;
label_1f32d8:
    // 0x1f32d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f32dc:
    // 0x1f32dc: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
label_1f32e0:
    if (ctx->pc == 0x1F32E0u) {
        ctx->pc = 0x1F32E0u;
            // 0x1f32e0: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x1F32E4u;
        goto label_1f32e4;
    }
    ctx->pc = 0x1F32DCu;
    {
        const bool branch_taken_0x1f32dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f32dc) {
            ctx->pc = 0x1F32E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F32DCu;
            // 0x1f32e0: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F32F4u;
            goto label_1f32f4;
        }
    }
    ctx->pc = 0x1F32E4u;
label_1f32e4:
    // 0x1f32e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f32e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f32e8:
    // 0x1f32e8: 0xc07ede0  jal         func_1FB780
label_1f32ec:
    if (ctx->pc == 0x1F32ECu) {
        ctx->pc = 0x1F32ECu;
            // 0x1f32ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F32F0u;
        goto label_1f32f0;
    }
    ctx->pc = 0x1F32E8u;
    SET_GPR_U32(ctx, 31, 0x1F32F0u);
    ctx->pc = 0x1F32ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F32E8u;
            // 0x1f32ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB780u;
    if (runtime->hasFunction(0x1FB780u)) {
        auto targetFn = runtime->lookupFunction(0x1FB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F32F0u; }
        if (ctx->pc != 0x1F32F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB780_0x1fb780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F32F0u; }
        if (ctx->pc != 0x1F32F0u) { return; }
    }
    ctx->pc = 0x1F32F0u;
label_1f32f0:
    // 0x1f32f0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1f32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1f32f4:
    // 0x1f32f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f32f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f32f8:
    // 0x1f32f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f32fc:
    if (ctx->pc == 0x1F32FCu) {
        ctx->pc = 0x1F32FCu;
            // 0x1f32fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3300u;
        goto label_1f3300;
    }
    ctx->pc = 0x1F32F8u;
    {
        const bool branch_taken_0x1f32f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F32FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F32F8u;
            // 0x1f32fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32f8) {
            ctx->pc = 0x1F330Cu;
            goto label_1f330c;
        }
    }
    ctx->pc = 0x1F3300u;
label_1f3300:
    // 0x1f3300: 0xc07ee08  jal         func_1FB820
label_1f3304:
    if (ctx->pc == 0x1F3304u) {
        ctx->pc = 0x1F3304u;
            // 0x1f3304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3308u;
        goto label_1f3308;
    }
    ctx->pc = 0x1F3300u;
    SET_GPR_U32(ctx, 31, 0x1F3308u);
    ctx->pc = 0x1F3304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3300u;
            // 0x1f3304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB820u;
    if (runtime->hasFunction(0x1FB820u)) {
        auto targetFn = runtime->lookupFunction(0x1FB820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3308u; }
        if (ctx->pc != 0x1F3308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB820_0x1fb820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3308u; }
        if (ctx->pc != 0x1F3308u) { return; }
    }
    ctx->pc = 0x1F3308u;
label_1f3308:
    // 0x1f3308: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f3308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f330c:
    // 0x1f330c: 0xc07f444  jal         func_1FD110
label_1f3310:
    if (ctx->pc == 0x1F3310u) {
        ctx->pc = 0x1F3310u;
            // 0x1f3310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3314u;
        goto label_1f3314;
    }
    ctx->pc = 0x1F330Cu;
    SET_GPR_U32(ctx, 31, 0x1F3314u);
    ctx->pc = 0x1F3310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F330Cu;
            // 0x1f3310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD110u;
    if (runtime->hasFunction(0x1FD110u)) {
        auto targetFn = runtime->lookupFunction(0x1FD110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3314u; }
        if (ctx->pc != 0x1F3314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD110_0x1fd110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3314u; }
        if (ctx->pc != 0x1F3314u) { return; }
    }
    ctx->pc = 0x1F3314u;
label_1f3314:
    // 0x1f3314: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x1f3314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
label_1f3318:
    // 0x1f3318: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f331c:
    if (ctx->pc == 0x1F331Cu) {
        ctx->pc = 0x1F331Cu;
            // 0x1f331c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3320u;
        goto label_1f3320;
    }
    ctx->pc = 0x1F3318u;
    {
        const bool branch_taken_0x1f3318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F331Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3318u;
            // 0x1f331c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3318) {
            ctx->pc = 0x1F3338u;
            goto label_1f3338;
        }
    }
    ctx->pc = 0x1F3320u;
label_1f3320:
    // 0x1f3320: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x1f3320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_1f3324:
    // 0x1f3324: 0x8e040aa4  lw          $a0, 0xAA4($s0)
    ctx->pc = 0x1f3324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
label_1f3328:
    // 0x1f3328: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1f3328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f332c:
    // 0x1f332c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_1f3330:
    if (ctx->pc == 0x1F3330u) {
        ctx->pc = 0x1F3330u;
            // 0x1f3330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3334u;
        goto label_1f3334;
    }
    ctx->pc = 0x1F332Cu;
    {
        const bool branch_taken_0x1f332c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F332Cu;
            // 0x1f3330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f332c) {
            ctx->pc = 0x1F33ACu;
            goto label_1f33ac;
        }
    }
    ctx->pc = 0x1F3334u;
label_1f3334:
    // 0x1f3334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3338:
    // 0x1f3338: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f3338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f333c:
    // 0x1f333c: 0xc07ef96  jal         func_1FBE58
label_1f3340:
    if (ctx->pc == 0x1F3340u) {
        ctx->pc = 0x1F3340u;
            // 0x1f3340: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1F3344u;
        goto label_1f3344;
    }
    ctx->pc = 0x1F333Cu;
    SET_GPR_U32(ctx, 31, 0x1F3344u);
    ctx->pc = 0x1F3340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F333Cu;
            // 0x1f3340: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE58u;
    if (runtime->hasFunction(0x1FBE58u)) {
        auto targetFn = runtime->lookupFunction(0x1FBE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3344u; }
        if (ctx->pc != 0x1F3344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBE58_0x1fbe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3344u; }
        if (ctx->pc != 0x1F3344u) { return; }
    }
    ctx->pc = 0x1F3344u;
label_1f3344:
    // 0x1f3344: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f3344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3348:
    // 0x1f3348: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
label_1f334c:
    if (ctx->pc == 0x1F334Cu) {
        ctx->pc = 0x1F334Cu;
            // 0x1f334c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3350u;
        goto label_1f3350;
    }
    ctx->pc = 0x1F3348u;
    {
        const bool branch_taken_0x1f3348 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F334Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3348u;
            // 0x1f334c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3348) {
            ctx->pc = 0x1F33ACu;
            goto label_1f33ac;
        }
    }
    ctx->pc = 0x1F3350u;
label_1f3350:
    // 0x1f3350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3354:
    // 0x1f3354: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f3358:
    // 0x1f3358: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1f3358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1f335c:
    // 0x1f335c: 0xc07ccf4  jal         func_1F33D0
label_1f3360:
    if (ctx->pc == 0x1F3360u) {
        ctx->pc = 0x1F3360u;
            // 0x1f3360: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->pc = 0x1F3364u;
        goto label_1f3364;
    }
    ctx->pc = 0x1F335Cu;
    SET_GPR_U32(ctx, 31, 0x1F3364u);
    ctx->pc = 0x1F3360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F335Cu;
            // 0x1f3360: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F33D0u;
    if (runtime->hasFunction(0x1F33D0u)) {
        auto targetFn = runtime->lookupFunction(0x1F33D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3364u; }
        if (ctx->pc != 0x1F3364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F33D0_0x1f33d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3364u; }
        if (ctx->pc != 0x1F3364u) { return; }
    }
    ctx->pc = 0x1F3364u;
label_1f3364:
    // 0x1f3364: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f3364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3368:
    // 0x1f3368: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1f3368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1f336c:
    // 0x1f336c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1f336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1f3370:
    // 0x1f3370: 0x2663018  mult        $a2, $s3, $a2
    ctx->pc = 0x1f3370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1f3374:
    // 0x1f3374: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1f3378:
    if (ctx->pc == 0x1F3378u) {
        ctx->pc = 0x1F3378u;
            // 0x1f3378: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1F337Cu;
        goto label_1f337c;
    }
    ctx->pc = 0x1F3374u;
    {
        const bool branch_taken_0x1f3374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3374) {
            ctx->pc = 0x1F3378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3374u;
            // 0x1f3378: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F337Cu;
            goto label_1f337c;
        }
    }
    ctx->pc = 0x1F337Cu;
label_1f337c:
    // 0x1f337c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3380:
    // 0x1f3380: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1f3380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1f3384:
    // 0x1f3384: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1f3384u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f3388:
    // 0x1f3388: 0x3012  mflo        $a2
    ctx->pc = 0x1f3388u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_1f338c:
    // 0x1f338c: 0xc073fee  jal         func_1CFFB8
label_1f3390:
    if (ctx->pc == 0x1F3390u) {
        ctx->pc = 0x1F3390u;
            // 0x1f3390: 0x2863023  subu        $a2, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->pc = 0x1F3394u;
        goto label_1f3394;
    }
    ctx->pc = 0x1F338Cu;
    SET_GPR_U32(ctx, 31, 0x1F3394u);
    ctx->pc = 0x1F3390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F338Cu;
            // 0x1f3390: 0x2863023  subu        $a2, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (runtime->hasFunction(0x1CFFB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CFFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3394u; }
        if (ctx->pc != 0x1F3394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFFB8_0x1cffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3394u; }
        if (ctx->pc != 0x1F3394u) { return; }
    }
    ctx->pc = 0x1F3394u;
label_1f3394:
    // 0x1f3394: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1f3398:
    if (ctx->pc == 0x1F3398u) {
        ctx->pc = 0x1F3398u;
            // 0x1f3398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F339Cu;
        goto label_1f339c;
    }
    ctx->pc = 0x1F3394u;
    {
        const bool branch_taken_0x1f3394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3394u;
            // 0x1f3398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3394) {
            ctx->pc = 0x1F33ACu;
            goto label_1f33ac;
        }
    }
    ctx->pc = 0x1F339Cu;
label_1f339c:
    // 0x1f339c: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x1f339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_1f33a0:
    // 0x1f33a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f33a4:
    // 0x1f33a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f33a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f33a8:
    // 0x1f33a8: 0xaea30084  sw          $v1, 0x84($s5)
    ctx->pc = 0x1f33a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
label_1f33ac:
    // 0x1f33ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f33acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f33b0:
    // 0x1f33b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f33b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f33b4:
    // 0x1f33b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f33b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f33b8:
    // 0x1f33b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f33b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f33bc:
    // 0x1f33bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f33bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f33c0:
    // 0x1f33c0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f33c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1f33c4:
    // 0x1f33c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f33c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f33c8:
    // 0x1f33c8: 0x3e00008  jr          $ra
label_1f33cc:
    if (ctx->pc == 0x1F33CCu) {
        ctx->pc = 0x1F33CCu;
            // 0x1f33cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1F33D0u;
        goto label_fallthrough_0x1f33c8;
    }
    ctx->pc = 0x1F33C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F33CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33C8u;
            // 0x1f33cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f33c8:
    ctx->pc = 0x1F33D0u;
    ctx->pc = 0x1f33d0u;
}
