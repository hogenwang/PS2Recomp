#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00235428
// Address: 0x235428 - 0x235528
void sub_00235428_0x235428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235428_0x235428");
#endif

    switch (ctx->pc) {
        case 0x235428u: goto label_235428;
        case 0x23542cu: goto label_23542c;
        case 0x235430u: goto label_235430;
        case 0x235434u: goto label_235434;
        case 0x235438u: goto label_235438;
        case 0x23543cu: goto label_23543c;
        case 0x235440u: goto label_235440;
        case 0x235444u: goto label_235444;
        case 0x235448u: goto label_235448;
        case 0x23544cu: goto label_23544c;
        case 0x235450u: goto label_235450;
        case 0x235454u: goto label_235454;
        case 0x235458u: goto label_235458;
        case 0x23545cu: goto label_23545c;
        case 0x235460u: goto label_235460;
        case 0x235464u: goto label_235464;
        case 0x235468u: goto label_235468;
        case 0x23546cu: goto label_23546c;
        case 0x235470u: goto label_235470;
        case 0x235474u: goto label_235474;
        case 0x235478u: goto label_235478;
        case 0x23547cu: goto label_23547c;
        case 0x235480u: goto label_235480;
        case 0x235484u: goto label_235484;
        case 0x235488u: goto label_235488;
        case 0x23548cu: goto label_23548c;
        case 0x235490u: goto label_235490;
        case 0x235494u: goto label_235494;
        case 0x235498u: goto label_235498;
        case 0x23549cu: goto label_23549c;
        case 0x2354a0u: goto label_2354a0;
        case 0x2354a4u: goto label_2354a4;
        case 0x2354a8u: goto label_2354a8;
        case 0x2354acu: goto label_2354ac;
        case 0x2354b0u: goto label_2354b0;
        case 0x2354b4u: goto label_2354b4;
        case 0x2354b8u: goto label_2354b8;
        case 0x2354bcu: goto label_2354bc;
        case 0x2354c0u: goto label_2354c0;
        case 0x2354c4u: goto label_2354c4;
        case 0x2354c8u: goto label_2354c8;
        case 0x2354ccu: goto label_2354cc;
        case 0x2354d0u: goto label_2354d0;
        case 0x2354d4u: goto label_2354d4;
        case 0x2354d8u: goto label_2354d8;
        case 0x2354dcu: goto label_2354dc;
        case 0x2354e0u: goto label_2354e0;
        case 0x2354e4u: goto label_2354e4;
        case 0x2354e8u: goto label_2354e8;
        case 0x2354ecu: goto label_2354ec;
        case 0x2354f0u: goto label_2354f0;
        case 0x2354f4u: goto label_2354f4;
        case 0x2354f8u: goto label_2354f8;
        case 0x2354fcu: goto label_2354fc;
        case 0x235500u: goto label_235500;
        case 0x235504u: goto label_235504;
        case 0x235508u: goto label_235508;
        case 0x23550cu: goto label_23550c;
        case 0x235510u: goto label_235510;
        case 0x235514u: goto label_235514;
        case 0x235518u: goto label_235518;
        case 0x23551cu: goto label_23551c;
        case 0x235520u: goto label_235520;
        case 0x235524u: goto label_235524;
        default: break;
    }

    ctx->pc = 0x235428u;

label_235428:
    // 0x235428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23542c:
    // 0x23542c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_235430:
    // 0x235430: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x235430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_235434:
    // 0x235434: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235438:
    // 0x235438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23543c:
    // 0x23543c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x23543cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_235440:
    // 0x235440: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_235444:
    if (ctx->pc == 0x235444u) {
        ctx->pc = 0x235444u;
            // 0x235444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235448u;
        goto label_235448;
    }
    ctx->pc = 0x235440u;
    {
        const bool branch_taken_0x235440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235440u;
            // 0x235444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235440) {
            ctx->pc = 0x235458u;
            goto label_235458;
        }
    }
    ctx->pc = 0x235448u;
label_235448:
    // 0x235448: 0xc08a9d6  jal         func_22A758
label_23544c:
    if (ctx->pc == 0x23544Cu) {
        ctx->pc = 0x23544Cu;
            // 0x23544c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x235450u;
        goto label_235450;
    }
    ctx->pc = 0x235448u;
    SET_GPR_U32(ctx, 31, 0x235450u);
    ctx->pc = 0x23544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235448u;
            // 0x23544c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235450u; }
        if (ctx->pc != 0x235450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235450u; }
        if (ctx->pc != 0x235450u) { return; }
    }
    ctx->pc = 0x235450u;
label_235450:
    // 0x235450: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
label_235454:
    if (ctx->pc == 0x235454u) {
        ctx->pc = 0x235454u;
            // 0x235454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235458u;
        goto label_235458;
    }
    ctx->pc = 0x235450u;
    {
        const bool branch_taken_0x235450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235450u;
            // 0x235454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235450) {
            ctx->pc = 0x235448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235448;
        }
    }
    ctx->pc = 0x235458u;
label_235458:
    // 0x235458: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x235458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_23545c:
    // 0x23545c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x23545cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_235460:
    // 0x235460: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x235460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_235464:
    // 0x235464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235468:
    // 0x235468: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x235468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23546c:
    // 0x23546c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23546cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235470:
    // 0x235470: 0x3e00008  jr          $ra
label_235474:
    if (ctx->pc == 0x235474u) {
        ctx->pc = 0x235474u;
            // 0x235474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x235478u;
        goto label_235478;
    }
    ctx->pc = 0x235470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235470u;
            // 0x235474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235478u;
label_235478:
    // 0x235478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23547c:
    // 0x23547c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_235480:
    // 0x235480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235484:
    // 0x235484: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x235484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_235488:
    // 0x235488: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x235488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23548c:
    // 0x23548c: 0xc08c682  jal         func_231A08
label_235490:
    if (ctx->pc == 0x235490u) {
        ctx->pc = 0x235490u;
            // 0x235490: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x235494u;
        goto label_235494;
    }
    ctx->pc = 0x23548Cu;
    SET_GPR_U32(ctx, 31, 0x235494u);
    ctx->pc = 0x235490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23548Cu;
            // 0x235490: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235494u; }
        if (ctx->pc != 0x235494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235494u; }
        if (ctx->pc != 0x235494u) { return; }
    }
    ctx->pc = 0x235494u;
label_235494:
    // 0x235494: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x235494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235498:
    // 0x235498: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x235498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_23549c:
    // 0x23549c: 0x8c50fcd0  lw          $s0, -0x330($v0)
    ctx->pc = 0x23549cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
label_2354a0:
    // 0x2354a0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2354a4:
    if (ctx->pc == 0x2354A4u) {
        ctx->pc = 0x2354A4u;
            // 0x2354a4: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x2354A8u;
        goto label_2354a8;
    }
    ctx->pc = 0x2354A0u;
    {
        const bool branch_taken_0x2354a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2354A0u;
            // 0x2354a4: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354a0) {
            ctx->pc = 0x2354F0u;
            goto label_2354f0;
        }
    }
    ctx->pc = 0x2354A8u;
label_2354a8:
    // 0x2354a8: 0x3c110023  lui         $s1, 0x23
    ctx->pc = 0x2354a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)35 << 16));
label_2354ac:
    // 0x2354ac: 0x8602002e  lh          $v0, 0x2E($s0)
    ctx->pc = 0x2354acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_2354b0:
    // 0x2354b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2354b4:
    if (ctx->pc == 0x2354B4u) {
        ctx->pc = 0x2354B4u;
            // 0x2354b4: 0x9603002e  lhu         $v1, 0x2E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->pc = 0x2354B8u;
        goto label_2354b8;
    }
    ctx->pc = 0x2354B0u;
    {
        const bool branch_taken_0x2354b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2354B0u;
            // 0x2354b4: 0x9603002e  lhu         $v1, 0x2E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354b0) {
            ctx->pc = 0x2354DCu;
            goto label_2354dc;
        }
    }
    ctx->pc = 0x2354B8u;
label_2354b8:
    // 0x2354b8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2354b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2354bc:
    // 0x2354bc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2354bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2354c0:
    // 0x2354c0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2354c4:
    if (ctx->pc == 0x2354C4u) {
        ctx->pc = 0x2354C4u;
            // 0x2354c4: 0xa602002e  sh          $v0, 0x2E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2354C8u;
        goto label_2354c8;
    }
    ctx->pc = 0x2354C0u;
    {
        const bool branch_taken_0x2354c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2354C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2354C0u;
            // 0x2354c4: 0xa602002e  sh          $v0, 0x2E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354c0) {
            ctx->pc = 0x2354DCu;
            goto label_2354dc;
        }
    }
    ctx->pc = 0x2354C8u;
label_2354c8:
    // 0x2354c8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2354c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2354cc:
    // 0x2354cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2354d0:
    if (ctx->pc == 0x2354D0u) {
        ctx->pc = 0x2354D0u;
            // 0x2354d0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2354D4u;
        goto label_2354d4;
    }
    ctx->pc = 0x2354CCu;
    {
        const bool branch_taken_0x2354cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2354cc) {
            ctx->pc = 0x2354D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2354CCu;
            // 0x2354d0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2354E0u;
            goto label_2354e0;
        }
    }
    ctx->pc = 0x2354D4u;
label_2354d4:
    // 0x2354d4: 0x40f809  jalr        $v0
label_2354d8:
    if (ctx->pc == 0x2354D8u) {
        ctx->pc = 0x2354D8u;
            // 0x2354d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2354DCu;
        goto label_2354dc;
    }
    ctx->pc = 0x2354D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2354DCu);
        ctx->pc = 0x2354D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2354D4u;
            // 0x2354d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2354DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2354DCu; }
            if (ctx->pc != 0x2354DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2354DCu;
label_2354dc:
    // 0x2354dc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2354dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2354e0:
    // 0x2354e0: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
label_2354e4:
    if (ctx->pc == 0x2354E4u) {
        ctx->pc = 0x2354E4u;
            // 0x2354e4: 0x8602002e  lh          $v0, 0x2E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->pc = 0x2354E8u;
        goto label_2354e8;
    }
    ctx->pc = 0x2354E0u;
    {
        const bool branch_taken_0x2354e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2354e0) {
            ctx->pc = 0x2354E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2354E0u;
            // 0x2354e4: 0x8602002e  lh          $v0, 0x2E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2354B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2354b0;
        }
    }
    ctx->pc = 0x2354E8u;
label_2354e8:
    // 0x2354e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2354ec:
    if (ctx->pc == 0x2354ECu) {
        ctx->pc = 0x2354F0u;
        goto label_2354f0;
    }
    ctx->pc = 0x2354E8u;
    {
        const bool branch_taken_0x2354e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2354e8) {
            ctx->pc = 0x2354F4u;
            goto label_2354f4;
        }
    }
    ctx->pc = 0x2354F0u;
label_2354f0:
    // 0x2354f0: 0x3c110023  lui         $s1, 0x23
    ctx->pc = 0x2354f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)35 << 16));
label_2354f4:
    // 0x2354f4: 0xc08c698  jal         func_231A60
label_2354f8:
    if (ctx->pc == 0x2354F8u) {
        ctx->pc = 0x2354F8u;
            // 0x2354f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2354FCu;
        goto label_2354fc;
    }
    ctx->pc = 0x2354F4u;
    SET_GPR_U32(ctx, 31, 0x2354FCu);
    ctx->pc = 0x2354F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2354F4u;
            // 0x2354f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2354FCu; }
        if (ctx->pc != 0x2354FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2354FCu; }
        if (ctx->pc != 0x2354FCu) { return; }
    }
    ctx->pc = 0x2354FCu;
label_2354fc:
    // 0x2354fc: 0x2644fcd8  addiu       $a0, $s2, -0x328
    ctx->pc = 0x2354fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966488));
label_235500:
    // 0x235500: 0x26265478  addiu       $a2, $s1, 0x5478
    ctx->pc = 0x235500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 21624));
label_235504:
    // 0x235504: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x235504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_235508:
    // 0x235508: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x235508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_23550c:
    // 0x23550c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23550cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235510:
    // 0x235510: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x235510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235514:
    // 0x235514: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235518:
    // 0x235518: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x235518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23551c:
    // 0x23551c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23551cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235520:
    // 0x235520: 0x808a058  j           func_228160
label_235524:
    if (ctx->pc == 0x235524u) {
        ctx->pc = 0x235524u;
            // 0x235524: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x235528u;
        goto label_fallthrough_0x235520;
    }
    ctx->pc = 0x235520u;
    ctx->pc = 0x235524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235520u;
            // 0x235524: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00228160_0x228160(rdram, ctx, runtime); return;
    }
label_fallthrough_0x235520:
    ctx->pc = 0x235528u;
    ctx->pc = 0x235528u;
}
