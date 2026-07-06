#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C3170
// Address: 0x2c3170 - 0x2c3538
void sub_002C3170_0x2c3170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3170_0x2c3170");
#endif

    switch (ctx->pc) {
        case 0x2c318cu: goto label_2c318c;
        case 0x2c3194u: goto label_2c3194;
        case 0x2c3198u: goto label_2c3198;
        case 0x2c319cu: goto label_2c319c;
        case 0x2c31a4u: goto label_2c31a4;
        case 0x2c31acu: goto label_2c31ac;
        case 0x2c31b4u: goto label_2c31b4;
        case 0x2c31bcu: goto label_2c31bc;
        case 0x2c31c4u: goto label_2c31c4;
        case 0x2c31ccu: goto label_2c31cc;
        case 0x2c31dcu: goto label_2c31dc;
        case 0x2c31e0u: goto label_2c31e0;
        case 0x2c31f0u: goto label_2c31f0;
        case 0x2c3200u: goto label_2c3200;
        case 0x2c320cu: goto label_2c320c;
        case 0x2c3238u: goto label_2c3238;
        case 0x2c3248u: goto label_2c3248;
        case 0x2c3274u: goto label_2c3274;
        case 0x2c3284u: goto label_2c3284;
        case 0x2c3288u: goto label_2c3288;
        case 0x2c32b0u: goto label_2c32b0;
        case 0x2c32bcu: goto label_2c32bc;
        case 0x2c32c8u: goto label_2c32c8;
        case 0x2c32f4u: goto label_2c32f4;
        case 0x2c32fcu: goto label_2c32fc;
        case 0x2c3320u: goto label_2c3320;
        case 0x2c336cu: goto label_2c336c;
        case 0x2c33b4u: goto label_2c33b4;
        case 0x2c33dcu: goto label_2c33dc;
        case 0x2c3418u: goto label_2c3418;
        case 0x2c3478u: goto label_2c3478;
        case 0x2c34a8u: goto label_2c34a8;
        case 0x2c34e8u: goto label_2c34e8;
        case 0x2c34f8u: goto label_2c34f8;
        case 0x2c351cu: goto label_2c351c;
        default: break;
    }

    ctx->pc = 0x2c3170u;

    // 0x2c3170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c317c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C317Cu;
    {
        const bool branch_taken_0x2c317c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C317Cu;
            // 0x2c3180: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c317c) {
            ctx->pc = 0x2C31F0u;
            goto label_2c31f0;
        }
    }
    ctx->pc = 0x2C3184u;
    // 0x2c3184: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C3184u;
    SET_GPR_U32(ctx, 31, 0x2C318Cu);
    ctx->pc = 0x2C3188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3184u;
            // 0x2c3188: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C318Cu; }
        if (ctx->pc != 0x2C318Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C318Cu; }
        if (ctx->pc != 0x2C318Cu) { return; }
    }
    ctx->pc = 0x2C318Cu;
label_2c318c:
    // 0x2c318c: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C318Cu;
    SET_GPR_U32(ctx, 31, 0x2C3194u);
    ctx->pc = 0x2C3190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C318Cu;
            // 0x2c3190: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3194u; }
        if (ctx->pc != 0x2C3194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3194u; }
        if (ctx->pc != 0x2C3194u) { return; }
    }
    ctx->pc = 0x2C3194u;
label_2c3194:
    // 0x2c3194: 0xc0b0a08  jal         func_2C2820
label_2c3198:
    if (ctx->pc == 0x2C3198u) {
        ctx->pc = 0x2C3198u;
            // 0x2c3198: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x2C319Cu;
        goto label_2c319c;
    }
    ctx->pc = 0x2C3194u;
    SET_GPR_U32(ctx, 31, 0x2C319Cu);
    ctx->pc = 0x2C3198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3194u;
            // 0x2c3198: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2820u;
    if (runtime->hasFunction(0x2C2820u)) {
        auto targetFn = runtime->lookupFunction(0x2C2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C319Cu; }
        if (ctx->pc != 0x2C319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2820_0x2c2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C319Cu; }
        if (ctx->pc != 0x2C319Cu) { return; }
    }
    ctx->pc = 0x2C319Cu;
label_2c319c:
    // 0x2c319c: 0xc0a095e  jal         func_282578
    ctx->pc = 0x2C319Cu;
    SET_GPR_U32(ctx, 31, 0x2C31A4u);
    ctx->pc = 0x2C31A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C319Cu;
            // 0x2c31a0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282578u;
    if (runtime->hasFunction(0x282578u)) {
        auto targetFn = runtime->lookupFunction(0x282578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31A4u; }
        if (ctx->pc != 0x2C31A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282578_0x282578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31A4u; }
        if (ctx->pc != 0x2C31A4u) { return; }
    }
    ctx->pc = 0x2C31A4u;
label_2c31a4:
    // 0x2c31a4: 0xc0b1504  jal         func_2C5410
    ctx->pc = 0x2C31A4u;
    SET_GPR_U32(ctx, 31, 0x2C31ACu);
    ctx->pc = 0x2C31A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31A4u;
            // 0x2c31a8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5410u;
    if (runtime->hasFunction(0x2C5410u)) {
        auto targetFn = runtime->lookupFunction(0x2C5410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31ACu; }
        if (ctx->pc != 0x2C31ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5410_0x2c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31ACu; }
        if (ctx->pc != 0x2C31ACu) { return; }
    }
    ctx->pc = 0x2C31ACu;
label_2c31ac:
    // 0x2c31ac: 0xc0a095e  jal         func_282578
    ctx->pc = 0x2C31ACu;
    SET_GPR_U32(ctx, 31, 0x2C31B4u);
    ctx->pc = 0x2C31B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31ACu;
            // 0x2c31b0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282578u;
    if (runtime->hasFunction(0x282578u)) {
        auto targetFn = runtime->lookupFunction(0x282578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31B4u; }
        if (ctx->pc != 0x2C31B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282578_0x282578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31B4u; }
        if (ctx->pc != 0x2C31B4u) { return; }
    }
    ctx->pc = 0x2C31B4u;
label_2c31b4:
    // 0x2c31b4: 0xc0b1284  jal         func_2C4A10
    ctx->pc = 0x2C31B4u;
    SET_GPR_U32(ctx, 31, 0x2C31BCu);
    ctx->pc = 0x2C31B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31B4u;
            // 0x2c31b8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4A10u;
    if (runtime->hasFunction(0x2C4A10u)) {
        auto targetFn = runtime->lookupFunction(0x2C4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31BCu; }
        if (ctx->pc != 0x2C31BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4A10_0x2c4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31BCu; }
        if (ctx->pc != 0x2C31BCu) { return; }
    }
    ctx->pc = 0x2C31BCu;
label_2c31bc:
    // 0x2c31bc: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C31BCu;
    SET_GPR_U32(ctx, 31, 0x2C31C4u);
    ctx->pc = 0x2C31C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31BCu;
            // 0x2c31c0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31C4u; }
        if (ctx->pc != 0x2C31C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31C4u; }
        if (ctx->pc != 0x2C31C4u) { return; }
    }
    ctx->pc = 0x2C31C4u;
label_2c31c4:
    // 0x2c31c4: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C31C4u;
    SET_GPR_U32(ctx, 31, 0x2C31CCu);
    ctx->pc = 0x2C31C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31C4u;
            // 0x2c31c8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31CCu; }
        if (ctx->pc != 0x2C31CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31CCu; }
        if (ctx->pc != 0x2C31CCu) { return; }
    }
    ctx->pc = 0x2C31CCu;
label_2c31cc:
    // 0x2c31cc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2c31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2c31d0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c31d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c31d4: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2C31D4u;
    SET_GPR_U32(ctx, 31, 0x2C31DCu);
    ctx->pc = 0x2C31D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31D4u;
            // 0x2c31d8: 0x24a54690  addiu       $a1, $a1, 0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31DCu; }
        if (ctx->pc != 0x2C31DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31DCu; }
        if (ctx->pc != 0x2C31DCu) { return; }
    }
    ctx->pc = 0x2C31DCu;
label_2c31dc:
    // 0x2c31dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c31dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c31e0:
    // 0x2c31e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c31e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c31e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c31e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c31e8: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2C31E8u;
    ctx->pc = 0x2C31ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31E8u;
            // 0x2c31ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C31F0u;
label_2c31f0:
    // 0x2c31f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c31f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c31f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c31f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c31f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C31F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C31FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31F8u;
            // 0x2c31fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3200u;
label_2c3200:
    // 0x2c3200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c3200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c3204: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c3204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c3208: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c3208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2c320c:
    // 0x2c320c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c320cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3210: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c3210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c3214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3218: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c3218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c321c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C321Cu;
    {
        const bool branch_taken_0x2c321c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C321Cu;
            // 0x2c3220: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c321c) {
            ctx->pc = 0x2C322Cu;
            goto label_2c322c;
        }
    }
    ctx->pc = 0x2C3224u;
    // 0x2c3224: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2C3224u;
    {
        const bool branch_taken_0x2c3224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3224u;
            // 0x2c3228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3224) {
            ctx->pc = 0x2C3300u;
            goto label_2c3300;
        }
    }
    ctx->pc = 0x2C322Cu;
label_2c322c:
    // 0x2c322c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3230: 0xc0a004a  jal         func_280128
    ctx->pc = 0x2C3230u;
    SET_GPR_U32(ctx, 31, 0x2C3238u);
    ctx->pc = 0x2C3234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3230u;
            // 0x2c3234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (runtime->hasFunction(0x280128u)) {
        auto targetFn = runtime->lookupFunction(0x280128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3238u; }
        if (ctx->pc != 0x2C3238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280128_0x280128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3238u; }
        if (ctx->pc != 0x2C3238u) { return; }
    }
    ctx->pc = 0x2C3238u;
label_2c3238:
    // 0x2c3238: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c3238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c323c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c323cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3240: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C3240u;
    SET_GPR_U32(ctx, 31, 0x2C3248u);
    ctx->pc = 0x2C3244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3240u;
            // 0x2c3244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (runtime->hasFunction(0x281168u)) {
        auto targetFn = runtime->lookupFunction(0x281168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3248u; }
        if (ctx->pc != 0x2C3248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281168_0x281168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3248u; }
        if (ctx->pc != 0x2C3248u) { return; }
    }
    ctx->pc = 0x2C3248u;
label_2c3248:
    // 0x2c3248: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c3248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c324c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C324Cu;
    {
        const bool branch_taken_0x2c324c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C324Cu;
            // 0x2c3250: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c324c) {
            ctx->pc = 0x2C3278u;
            goto label_2c3278;
        }
    }
    ctx->pc = 0x2C3254u;
    // 0x2c3254: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c3254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3258: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3258u;
    {
        const bool branch_taken_0x2c3258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C325Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3258u;
            // 0x2c325c: 0x3c06002c  lui         $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3258) {
            ctx->pc = 0x2C3278u;
            goto label_2c3278;
        }
    }
    ctx->pc = 0x2C3260u;
    // 0x2c3260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3264: 0x24c642b8  addiu       $a2, $a2, 0x42B8
    ctx->pc = 0x2c3264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17080));
    // 0x2c3268: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c3268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c326c: 0xc0a09b8  jal         func_2826E0
    ctx->pc = 0x2C326Cu;
    SET_GPR_U32(ctx, 31, 0x2C3274u);
    ctx->pc = 0x2C3270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C326Cu;
            // 0x2c3270: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2826E0u;
    if (runtime->hasFunction(0x2826E0u)) {
        auto targetFn = runtime->lookupFunction(0x2826E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3274u; }
        if (ctx->pc != 0x2C3274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002826E0_0x2826e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3274u; }
        if (ctx->pc != 0x2C3274u) { return; }
    }
    ctx->pc = 0x2C3274u;
label_2c3274:
    // 0x2c3274: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c3274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c3278:
    // 0x2c3278: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c327c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c327cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3280: 0xc0a063a  jal         func_2818E8
label_2c3284:
    if (ctx->pc == 0x2C3284u) {
        ctx->pc = 0x2C3284u;
            // 0x2c3284: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2C3288u;
        goto label_2c3288;
    }
    ctx->pc = 0x2C3280u;
    SET_GPR_U32(ctx, 31, 0x2C3288u);
    ctx->pc = 0x2C3284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3280u;
            // 0x2c3284: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3288u; }
        if (ctx->pc != 0x2C3288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3288u; }
        if (ctx->pc != 0x2C3288u) { return; }
    }
    ctx->pc = 0x2C3288u;
label_2c3288:
    // 0x2c3288: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C3288u;
    {
        const bool branch_taken_0x2c3288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3288u;
            // 0x2c328c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3288) {
            ctx->pc = 0x2C3300u;
            goto label_2c3300;
        }
    }
    ctx->pc = 0x2C3290u;
    // 0x2c3290: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c3290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c3294: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c3294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3298: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c3298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c329c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c329cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c32a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c32a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c32a4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c32a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c32a8: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C32A8u;
    SET_GPR_U32(ctx, 31, 0x2C32B0u);
    ctx->pc = 0x2C32ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32A8u;
            // 0x2c32ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32B0u; }
        if (ctx->pc != 0x2C32B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32B0u; }
        if (ctx->pc != 0x2C32B0u) { return; }
    }
    ctx->pc = 0x2C32B0u;
label_2c32b0:
    // 0x2c32b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c32b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c32b4: 0xc0a004a  jal         func_280128
    ctx->pc = 0x2C32B4u;
    SET_GPR_U32(ctx, 31, 0x2C32BCu);
    ctx->pc = 0x2C32B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32B4u;
            // 0x2c32b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (runtime->hasFunction(0x280128u)) {
        auto targetFn = runtime->lookupFunction(0x280128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32BCu; }
        if (ctx->pc != 0x2C32BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280128_0x280128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32BCu; }
        if (ctx->pc != 0x2C32BCu) { return; }
    }
    ctx->pc = 0x2C32BCu;
label_2c32bc:
    // 0x2c32bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c32bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c32c0: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C32C0u;
    SET_GPR_U32(ctx, 31, 0x2C32C8u);
    ctx->pc = 0x2C32C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32C0u;
            // 0x2c32c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (runtime->hasFunction(0x281168u)) {
        auto targetFn = runtime->lookupFunction(0x281168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32C8u; }
        if (ctx->pc != 0x2C32C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281168_0x281168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32C8u; }
        if (ctx->pc != 0x2C32C8u) { return; }
    }
    ctx->pc = 0x2C32C8u;
label_2c32c8:
    // 0x2c32c8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c32c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c32cc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C32CCu;
    {
        const bool branch_taken_0x2c32cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C32D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32CCu;
            // 0x2c32d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32cc) {
            ctx->pc = 0x2C32F8u;
            goto label_2c32f8;
        }
    }
    ctx->pc = 0x2C32D4u;
    // 0x2c32d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c32d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C32D8u;
    {
        const bool branch_taken_0x2c32d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C32DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32D8u;
            // 0x2c32dc: 0x3c06002c  lui         $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32d8) {
            ctx->pc = 0x2C32F8u;
            goto label_2c32f8;
        }
    }
    ctx->pc = 0x2C32E0u;
    // 0x2c32e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c32e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32e4: 0x24c642b8  addiu       $a2, $a2, 0x42B8
    ctx->pc = 0x2c32e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17080));
    // 0x2c32e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c32e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c32ec: 0xc0a09b8  jal         func_2826E0
    ctx->pc = 0x2C32ECu;
    SET_GPR_U32(ctx, 31, 0x2C32F4u);
    ctx->pc = 0x2C32F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32ECu;
            // 0x2c32f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2826E0u;
    if (runtime->hasFunction(0x2826E0u)) {
        auto targetFn = runtime->lookupFunction(0x2826E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32F4u; }
        if (ctx->pc != 0x2C32F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002826E0_0x2826e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32F4u; }
        if (ctx->pc != 0x2C32F4u) { return; }
    }
    ctx->pc = 0x2C32F4u;
label_2c32f4:
    // 0x2c32f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c32f8:
    // 0x2c32f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c32f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c32fc:
    // 0x2c32fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c32fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c3300:
    // 0x2c3300: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c3300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3304: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c3304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3308: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c3308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c330c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c330cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3310: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c3310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3314: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3314u;
            // 0x2c3318: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C331Cu;
    // 0x2c331c: 0x0  nop
    ctx->pc = 0x2c331cu;
    // NOP
label_2c3320:
    // 0x2c3320: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c3320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c3324: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c3324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3328: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2c3328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2c332c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2c332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2c3330: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c3330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3334: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c3334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c3338: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c333c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c3340: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c3340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c3344: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c3344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2c3348: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c3348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c334c: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x2c334cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x2c3350: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3350u;
    {
        const bool branch_taken_0x2c3350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3350u;
            // 0x2c3354: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3350) {
            ctx->pc = 0x2C3364u;
            goto label_2c3364;
        }
    }
    ctx->pc = 0x2C3358u;
    // 0x2c3358: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c3358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c335c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C335Cu;
    {
        const bool branch_taken_0x2c335c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C335Cu;
            // 0x2c3360: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c335c) {
            ctx->pc = 0x2C3384u;
            goto label_2c3384;
        }
    }
    ctx->pc = 0x2C3364u;
label_2c3364:
    // 0x2c3364: 0xc0b0fd2  jal         func_2C3F48
    ctx->pc = 0x2C3364u;
    SET_GPR_U32(ctx, 31, 0x2C336Cu);
    ctx->pc = 0x2C3F48u;
    if (runtime->hasFunction(0x2C3F48u)) {
        auto targetFn = runtime->lookupFunction(0x2C3F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C336Cu; }
        if (ctx->pc != 0x2C336Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3F48_0x2c3f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C336Cu; }
        if (ctx->pc != 0x2C336Cu) { return; }
    }
    ctx->pc = 0x2C336Cu;
label_2c336c:
    // 0x2c336c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c336cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3370: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3370u;
    {
        const bool branch_taken_0x2c3370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3370) {
            ctx->pc = 0x2C3374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3370u;
            // 0x2c3374: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3384u;
            goto label_2c3384;
        }
    }
    ctx->pc = 0x2C3378u;
    // 0x2c3378: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2c3378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c337c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2C337Cu;
    {
        const bool branch_taken_0x2c337c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C337Cu;
            // 0x2c3380: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c337c) {
            ctx->pc = 0x2C34D0u;
            goto label_2c34d0;
        }
    }
    ctx->pc = 0x2C3384u;
label_2c3384:
    // 0x2c3384: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c3384u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3388: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3388u;
    {
        const bool branch_taken_0x2c3388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C338Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3388u;
            // 0x2c338c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3388) {
            ctx->pc = 0x2C33A0u;
            goto label_2c33a0;
        }
    }
    ctx->pc = 0x2C3390u;
    // 0x2c3390: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c3390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c3394: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c3394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c3398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3398u;
    {
        const bool branch_taken_0x2c3398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3398u;
            // 0x2c339c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3398) {
            ctx->pc = 0x2C33A4u;
            goto label_2c33a4;
        }
    }
    ctx->pc = 0x2C33A0u;
label_2c33a0:
    // 0x2c33a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c33a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c33a4:
    // 0x2c33a4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c33a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c33a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c33a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33ac: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x2C33ACu;
    SET_GPR_U32(ctx, 31, 0x2C33B4u);
    ctx->pc = 0x2C33B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33ACu;
            // 0x2c33b0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (runtime->hasFunction(0x2819F0u)) {
        auto targetFn = runtime->lookupFunction(0x2819F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C33B4u; }
        if (ctx->pc != 0x2C33B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002819F0_0x2819f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C33B4u; }
        if (ctx->pc != 0x2C33B4u) { return; }
    }
    ctx->pc = 0x2C33B4u;
label_2c33b4:
    // 0x2c33b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C33B4u;
    {
        const bool branch_taken_0x2c33b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C33B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33B4u;
            // 0x2c33b8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33b4) {
            ctx->pc = 0x2C33C8u;
            goto label_2c33c8;
        }
    }
    ctx->pc = 0x2C33BCu;
    // 0x2c33bc: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2c33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2c33c0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2C33C0u;
    {
        const bool branch_taken_0x2c33c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C33C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33C0u;
            // 0x2c33c4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33c0) {
            ctx->pc = 0x2C34D0u;
            goto label_2c34d0;
        }
    }
    ctx->pc = 0x2C33C8u;
label_2c33c8:
    // 0x2c33c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c33c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33cc: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c33ccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c33d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c33d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33d4: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x2C33D4u;
    SET_GPR_U32(ctx, 31, 0x2C33DCu);
    ctx->pc = 0x2C33D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33D4u;
            // 0x2c33d8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (runtime->hasFunction(0x2802D8u)) {
        auto targetFn = runtime->lookupFunction(0x2802D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C33DCu; }
        if (ctx->pc != 0x2C33DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002802D8_0x2802d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C33DCu; }
        if (ctx->pc != 0x2C33DCu) { return; }
    }
    ctx->pc = 0x2C33DCu;
label_2c33dc:
    // 0x2c33dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C33DCu;
    {
        const bool branch_taken_0x2c33dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C33E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33DCu;
            // 0x2c33e0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33dc) {
            ctx->pc = 0x2C33F0u;
            goto label_2c33f0;
        }
    }
    ctx->pc = 0x2C33E4u;
    // 0x2c33e4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2c33e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c33e8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2C33E8u;
    {
        const bool branch_taken_0x2c33e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C33ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33E8u;
            // 0x2c33ec: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33e8) {
            ctx->pc = 0x2C34D0u;
            goto label_2c34d0;
        }
    }
    ctx->pc = 0x2C33F0u;
label_2c33f0:
    // 0x2c33f0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c33f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c33f4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c33f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c33f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33fc: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c33fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3400: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c3400u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c3404: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c3404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c3408: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c3408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c340c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c340cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3410: 0xc0a0462  jal         func_281188
    ctx->pc = 0x2C3410u;
    SET_GPR_U32(ctx, 31, 0x2C3418u);
    ctx->pc = 0x2C3414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3410u;
            // 0x2c3414: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281188u;
    if (runtime->hasFunction(0x281188u)) {
        auto targetFn = runtime->lookupFunction(0x281188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3418u; }
        if (ctx->pc != 0x2C3418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281188_0x281188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3418u; }
        if (ctx->pc != 0x2C3418u) { return; }
    }
    ctx->pc = 0x2C3418u;
label_2c3418:
    // 0x2c3418: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3418u;
    {
        const bool branch_taken_0x2c3418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C341Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3418u;
            // 0x2c341c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3418) {
            ctx->pc = 0x2C342Cu;
            goto label_2c342c;
        }
    }
    ctx->pc = 0x2C3420u;
    // 0x2c3420: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x2c3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2c3424: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C3424u;
    {
        const bool branch_taken_0x2c3424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3424u;
            // 0x2c3428: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3424) {
            ctx->pc = 0x2C34D0u;
            goto label_2c34d0;
        }
    }
    ctx->pc = 0x2C342Cu;
label_2c342c:
    // 0x2c342c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2c342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3430: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c3430u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3434: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2c3434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3438: 0x62302f  dsubu       $a2, $v1, $v0
    ctx->pc = 0x2c3438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c343c: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C343Cu;
    {
        const bool branch_taken_0x2c343c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C343Cu;
            // 0x2c3440: 0xffa60018  sd          $a2, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c343c) {
            ctx->pc = 0x2C34A0u;
            goto label_2c34a0;
        }
    }
    ctx->pc = 0x2C3444u;
    // 0x2c3444: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2c3444u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3448: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2c3448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c344c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C344Cu;
    {
        const bool branch_taken_0x2c344c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C344Cu;
            // 0x2c3450: 0x3c07002c  lui         $a3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c344c) {
            ctx->pc = 0x2C34A0u;
            goto label_2c34a0;
        }
    }
    ctx->pc = 0x2C3454u;
    // 0x2c3454: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x2c3454u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x2c3458: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x2c3458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x2c345c: 0x24e743b0  addiu       $a3, $a3, 0x43B0
    ctx->pc = 0x2c345cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17328));
    // 0x2c3460: 0x25084690  addiu       $t0, $t0, 0x4690
    ctx->pc = 0x2c3460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18064));
    // 0x2c3464: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2c3464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2c3468: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c346c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2c346cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c3470: 0xc0a0a02  jal         func_282808
    ctx->pc = 0x2C3470u;
    SET_GPR_U32(ctx, 31, 0x2C3478u);
    ctx->pc = 0x2C3474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3470u;
            // 0x2c3474: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282808u;
    if (runtime->hasFunction(0x282808u)) {
        auto targetFn = runtime->lookupFunction(0x282808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3478u; }
        if (ctx->pc != 0x2C3478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282808_0x282808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3478u; }
        if (ctx->pc != 0x2C3478u) { return; }
    }
    ctx->pc = 0x2C3478u;
label_2c3478:
    // 0x2c3478: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3478u;
    {
        const bool branch_taken_0x2c3478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3478u;
            // 0x2c347c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3478) {
            ctx->pc = 0x2C348Cu;
            goto label_2c348c;
        }
    }
    ctx->pc = 0x2C3480u;
    // 0x2c3480: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2c3480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2c3484: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3484u;
    {
        const bool branch_taken_0x2c3484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3484u;
            // 0x2c3488: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3484) {
            ctx->pc = 0x2C34D0u;
            goto label_2c34d0;
        }
    }
    ctx->pc = 0x2C348Cu;
label_2c348c:
    // 0x2c348c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c348cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3490: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c3490u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3494: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c3494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c3498: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c3498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c349c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2c34a0:
    // 0x2c34a0: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2C34A0u;
    SET_GPR_U32(ctx, 31, 0x2C34A8u);
    ctx->pc = 0x2C34A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34A0u;
            // 0x2c34a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (runtime->hasFunction(0x281970u)) {
        auto targetFn = runtime->lookupFunction(0x281970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34A8u; }
        if (ctx->pc != 0x2C34A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281970_0x281970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34A8u; }
        if (ctx->pc != 0x2C34A8u) { return; }
    }
    ctx->pc = 0x2C34A8u;
label_2c34a8:
    // 0x2c34a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C34A8u;
    {
        const bool branch_taken_0x2c34a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C34ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34A8u;
            // 0x2c34ac: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34a8) {
            ctx->pc = 0x2C34BCu;
            goto label_2c34bc;
        }
    }
    ctx->pc = 0x2C34B0u;
    // 0x2c34b0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2c34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c34b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C34B4u;
    {
        const bool branch_taken_0x2c34b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C34B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34B4u;
            // 0x2c34b8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34b4) {
            ctx->pc = 0x2C34D0u;
            goto label_2c34d0;
        }
    }
    ctx->pc = 0x2C34BCu;
label_2c34bc:
    // 0x2c34bc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C34BCu;
    {
        const bool branch_taken_0x2c34bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C34C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34BCu;
            // 0x2c34c0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34bc) {
            ctx->pc = 0x2C34C8u;
            goto label_2c34c8;
        }
    }
    ctx->pc = 0x2C34C4u;
    // 0x2c34c4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2c34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2c34c8:
    // 0x2c34c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C34C8u;
    {
        const bool branch_taken_0x2c34c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C34CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34C8u;
            // 0x2c34cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34c8) {
            ctx->pc = 0x2C3520u;
            goto label_2c3520;
        }
    }
    ctx->pc = 0x2C34D0u;
label_2c34d0:
    // 0x2c34d0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c34d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c34d4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c34d8: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x2c34d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x2c34dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c34dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34e0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C34E0u;
    SET_GPR_U32(ctx, 31, 0x2C34E8u);
    ctx->pc = 0x2C34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34E0u;
            // 0x2c34e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34E8u; }
        if (ctx->pc != 0x2C34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34E8u; }
        if (ctx->pc != 0x2C34E8u) { return; }
    }
    ctx->pc = 0x2C34E8u;
label_2c34e8:
    // 0x2c34e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c34ec: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c34ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c34f0: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2C34F0u;
    SET_GPR_U32(ctx, 31, 0x2C34F8u);
    ctx->pc = 0x2C34F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34F0u;
            // 0x2c34f4: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34F8u; }
        if (ctx->pc != 0x2C34F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281CE0_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34F8u; }
        if (ctx->pc != 0x2C34F8u) { return; }
    }
    ctx->pc = 0x2C34F8u;
label_2c34f8:
    // 0x2c34f8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C34F8u;
    {
        const bool branch_taken_0x2c34f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C34FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34F8u;
            // 0x2c34fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34f8) {
            ctx->pc = 0x2C3520u;
            goto label_2c3520;
        }
    }
    ctx->pc = 0x2C3500u;
    // 0x2c3500: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3500u;
    {
        const bool branch_taken_0x2c3500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3500) {
            ctx->pc = 0x2C3514u;
            goto label_2c3514;
        }
    }
    ctx->pc = 0x2C3508u;
    // 0x2c3508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c3508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c350c: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C350Cu;
    {
        const bool branch_taken_0x2c350c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C3510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C350Cu;
            // 0x2c3510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c350c) {
            ctx->pc = 0x2C3520u;
            goto label_2c3520;
        }
    }
    ctx->pc = 0x2C3514u;
label_2c3514:
    // 0x2c3514: 0xc0b1046  jal         func_2C4118
    ctx->pc = 0x2C3514u;
    SET_GPR_U32(ctx, 31, 0x2C351Cu);
    ctx->pc = 0x2C3518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3514u;
            // 0x2c3518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4118u;
    if (runtime->hasFunction(0x2C4118u)) {
        auto targetFn = runtime->lookupFunction(0x2C4118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C351Cu; }
        if (ctx->pc != 0x2C351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4118_0x2c4118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C351Cu; }
        if (ctx->pc != 0x2C351Cu) { return; }
    }
    ctx->pc = 0x2C351Cu;
label_2c351c:
    // 0x2c351c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c351cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3520:
    // 0x2c3520: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c3520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c3524: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2c3524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c3528: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2c3528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c352c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c352cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3530: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3530u;
            // 0x2c3534: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3538u;
    ctx->pc = 0x2c3538u;
}
