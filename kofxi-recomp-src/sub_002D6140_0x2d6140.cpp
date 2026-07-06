#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D6140
// Address: 0x2d6140 - 0x2d6208
void sub_002D6140_0x2d6140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6140_0x2d6140");
#endif

    switch (ctx->pc) {
        case 0x2d6140u: goto label_2d6140;
        case 0x2d6144u: goto label_2d6144;
        case 0x2d6148u: goto label_2d6148;
        case 0x2d614cu: goto label_2d614c;
        case 0x2d6150u: goto label_2d6150;
        case 0x2d6154u: goto label_2d6154;
        case 0x2d6158u: goto label_2d6158;
        case 0x2d615cu: goto label_2d615c;
        case 0x2d6160u: goto label_2d6160;
        case 0x2d6164u: goto label_2d6164;
        case 0x2d6168u: goto label_2d6168;
        case 0x2d616cu: goto label_2d616c;
        case 0x2d6170u: goto label_2d6170;
        case 0x2d6174u: goto label_2d6174;
        case 0x2d6178u: goto label_2d6178;
        case 0x2d617cu: goto label_2d617c;
        case 0x2d6180u: goto label_2d6180;
        case 0x2d6184u: goto label_2d6184;
        case 0x2d6188u: goto label_2d6188;
        case 0x2d618cu: goto label_2d618c;
        case 0x2d6190u: goto label_2d6190;
        case 0x2d6194u: goto label_2d6194;
        case 0x2d6198u: goto label_2d6198;
        case 0x2d619cu: goto label_2d619c;
        case 0x2d61a0u: goto label_2d61a0;
        case 0x2d61a4u: goto label_2d61a4;
        case 0x2d61a8u: goto label_2d61a8;
        case 0x2d61acu: goto label_2d61ac;
        case 0x2d61b0u: goto label_2d61b0;
        case 0x2d61b4u: goto label_2d61b4;
        case 0x2d61b8u: goto label_2d61b8;
        case 0x2d61bcu: goto label_2d61bc;
        case 0x2d61c0u: goto label_2d61c0;
        case 0x2d61c4u: goto label_2d61c4;
        case 0x2d61c8u: goto label_2d61c8;
        case 0x2d61ccu: goto label_2d61cc;
        case 0x2d61d0u: goto label_2d61d0;
        case 0x2d61d4u: goto label_2d61d4;
        case 0x2d61d8u: goto label_2d61d8;
        case 0x2d61dcu: goto label_2d61dc;
        case 0x2d61e0u: goto label_2d61e0;
        case 0x2d61e4u: goto label_2d61e4;
        case 0x2d61e8u: goto label_2d61e8;
        case 0x2d61ecu: goto label_2d61ec;
        case 0x2d61f0u: goto label_2d61f0;
        case 0x2d61f4u: goto label_2d61f4;
        case 0x2d61f8u: goto label_2d61f8;
        case 0x2d61fcu: goto label_2d61fc;
        case 0x2d6200u: goto label_2d6200;
        case 0x2d6204u: goto label_2d6204;
        default: break;
    }

    ctx->pc = 0x2d6140u;

label_2d6140:
    // 0x2d6140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d6144:
    // 0x2d6144: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d6144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d6148:
    // 0x2d6148: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d6148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d614c:
    // 0x2d614c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d6150:
    // 0x2d6150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d6154:
    // 0x2d6154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d6154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d6158:
    // 0x2d6158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d615c:
    // 0x2d615c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d615cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6160:
    // 0x2d6160: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_2d6164:
    if (ctx->pc == 0x2D6164u) {
        ctx->pc = 0x2D6164u;
            // 0x2d6164: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D6168u;
        goto label_2d6168;
    }
    ctx->pc = 0x2D6160u;
    {
        const bool branch_taken_0x2d6160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6160u;
            // 0x2d6164: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6160) {
            ctx->pc = 0x2D61ECu;
            goto label_2d61ec;
        }
    }
    ctx->pc = 0x2D6168u;
label_2d6168:
    // 0x2d6168: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2d6168u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d616c:
    // 0x2d616c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_2d6170:
    if (ctx->pc == 0x2D6170u) {
        ctx->pc = 0x2D6170u;
            // 0x2d6170: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D6174u;
        goto label_2d6174;
    }
    ctx->pc = 0x2D616Cu;
    {
        const bool branch_taken_0x2d616c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D616Cu;
            // 0x2d6170: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d616c) {
            ctx->pc = 0x2D61A0u;
            goto label_2d61a0;
        }
    }
    ctx->pc = 0x2D6174u;
label_2d6174:
    // 0x2d6174: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d6174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2d6178:
    // 0x2d6178: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2d6178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2d617c:
    // 0x2d617c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2d617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2d6180:
    // 0x2d6180: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d6180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d6184:
    // 0x2d6184: 0x0  nop
    ctx->pc = 0x2d6184u;
    // NOP
label_2d6188:
    // 0x2d6188: 0x0  nop
    ctx->pc = 0x2d6188u;
    // NOP
label_2d618c:
    // 0x2d618c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_2d6190:
    if (ctx->pc == 0x2D6190u) {
        ctx->pc = 0x2D6190u;
            // 0x2d6190: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2D6194u;
        goto label_2d6194;
    }
    ctx->pc = 0x2D618Cu;
    {
        const bool branch_taken_0x2d618c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d618c) {
            ctx->pc = 0x2D6190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D618Cu;
            // 0x2d6190: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d6178;
        }
    }
    ctx->pc = 0x2D6194u;
label_2d6194:
    // 0x2d6194: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d6198:
    if (ctx->pc == 0x2D6198u) {
        ctx->pc = 0x2D6198u;
            // 0x2d6198: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x2D619Cu;
        goto label_2d619c;
    }
    ctx->pc = 0x2D6194u;
    {
        const bool branch_taken_0x2d6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6194u;
            // 0x2d6198: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6194) {
            ctx->pc = 0x2D61A4u;
            goto label_2d61a4;
        }
    }
    ctx->pc = 0x2D619Cu;
label_2d619c:
    // 0x2d619c: 0x0  nop
    ctx->pc = 0x2d619cu;
    // NOP
label_2d61a0:
    // 0x2d61a0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2d61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d61a4:
    // 0x2d61a4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2d61a8:
    // 0x2d61a8: 0x8c52fffc  lw          $s2, -0x4($v0)
    ctx->pc = 0x2d61a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2d61ac:
    // 0x2d61ac: 0x24639630  addiu       $v1, $v1, -0x69D0
    ctx->pc = 0x2d61acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940208));
label_2d61b0:
    // 0x2d61b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d61b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d61b4:
    // 0x2d61b4: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_2d61b8:
    if (ctx->pc == 0x2D61B8u) {
        ctx->pc = 0x2D61B8u;
            // 0x2d61b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2D61BCu;
        goto label_2d61bc;
    }
    ctx->pc = 0x2D61B4u;
    {
        const bool branch_taken_0x2d61b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D61B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D61B4u;
            // 0x2d61b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61b4) {
            ctx->pc = 0x2D61F0u;
            goto label_2d61f0;
        }
    }
    ctx->pc = 0x2D61BCu;
label_2d61bc:
    // 0x2d61bc: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x2d61bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2d61c0:
    // 0x2d61c0: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x2d61c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d61c4:
    // 0x2d61c4: 0xc0b3dca  jal         func_2CF728
label_2d61c8:
    if (ctx->pc == 0x2D61C8u) {
        ctx->pc = 0x2D61C8u;
            // 0x2d61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D61CCu;
        goto label_2d61cc;
    }
    ctx->pc = 0x2D61C4u;
    SET_GPR_U32(ctx, 31, 0x2D61CCu);
    ctx->pc = 0x2D61C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D61C4u;
            // 0x2d61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF728u;
    if (runtime->hasFunction(0x2CF728u)) {
        auto targetFn = runtime->lookupFunction(0x2CF728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D61CCu; }
        if (ctx->pc != 0x2D61CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF728_0x2cf728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D61CCu; }
        if (ctx->pc != 0x2D61CCu) { return; }
    }
    ctx->pc = 0x2D61CCu;
label_2d61cc:
    // 0x2d61cc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2d61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d61d0:
    // 0x2d61d0: 0x40f809  jalr        $v0
label_2d61d4:
    if (ctx->pc == 0x2D61D4u) {
        ctx->pc = 0x2D61D4u;
            // 0x2d61d4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x2D61D8u;
        goto label_2d61d8;
    }
    ctx->pc = 0x2D61D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D61D8u);
        ctx->pc = 0x2D61D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D61D0u;
            // 0x2d61d4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D61D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D61D8u; }
            if (ctx->pc != 0x2D61D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D61D8u;
label_2d61d8:
    // 0x2d61d8: 0xc0b60dc  jal         func_2D8370
label_2d61dc:
    if (ctx->pc == 0x2D61DCu) {
        ctx->pc = 0x2D61DCu;
            // 0x2d61dc: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2D61E0u;
        goto label_2d61e0;
    }
    ctx->pc = 0x2D61D8u;
    SET_GPR_U32(ctx, 31, 0x2D61E0u);
    ctx->pc = 0x2D61DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D61D8u;
            // 0x2d61dc: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D61E0u; }
        if (ctx->pc != 0x2D61E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D61E0u; }
        if (ctx->pc != 0x2D61E0u) { return; }
    }
    ctx->pc = 0x2D61E0u;
label_2d61e0:
    // 0x2d61e0: 0xc0b60dc  jal         func_2D8370
label_2d61e4:
    if (ctx->pc == 0x2D61E4u) {
        ctx->pc = 0x2D61E4u;
            // 0x2d61e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D61E8u;
        goto label_2d61e8;
    }
    ctx->pc = 0x2D61E0u;
    SET_GPR_U32(ctx, 31, 0x2D61E8u);
    ctx->pc = 0x2D61E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D61E0u;
            // 0x2d61e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D61E8u; }
        if (ctx->pc != 0x2D61E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D61E8u; }
        if (ctx->pc != 0x2D61E8u) { return; }
    }
    ctx->pc = 0x2D61E8u;
label_2d61e8:
    // 0x2d61e8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2d61e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2d61ec:
    // 0x2d61ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d61ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d61f0:
    // 0x2d61f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d61f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d61f4:
    // 0x2d61f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d61f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d61f8:
    // 0x2d61f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d61f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d61fc:
    // 0x2d61fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d61fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6200:
    // 0x2d6200: 0x3e00008  jr          $ra
label_2d6204:
    if (ctx->pc == 0x2D6204u) {
        ctx->pc = 0x2D6204u;
            // 0x2d6204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D6208u;
        goto label_fallthrough_0x2d6200;
    }
    ctx->pc = 0x2D6200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6200u;
            // 0x2d6204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d6200:
    ctx->pc = 0x2D6208u;
    ctx->pc = 0x2d6208u;
}
