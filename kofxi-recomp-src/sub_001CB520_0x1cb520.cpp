#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB520
// Address: 0x1cb520 - 0x1cb638
void sub_001CB520_0x1cb520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB520_0x1cb520");
#endif

    switch (ctx->pc) {
        case 0x1cb570u: goto label_1cb570;
        case 0x1cb580u: goto label_1cb580;
        case 0x1cb5c4u: goto label_1cb5c4;
        case 0x1cb5d8u: goto label_1cb5d8;
        case 0x1cb604u: goto label_1cb604;
        case 0x1cb618u: goto label_1cb618;
        default: break;
    }

    ctx->pc = 0x1cb520u;

    // 0x1cb520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb524: 0x28a20044  slti        $v0, $a1, 0x44
    ctx->pc = 0x1cb524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)68) ? 1 : 0);
    // 0x1cb528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb530: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB530u;
    {
        const bool branch_taken_0x1cb530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB530u;
            // 0x1cb534: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb530) {
            ctx->pc = 0x1CB550u;
            goto label_1cb550;
        }
    }
    ctx->pc = 0x1CB538u;
    // 0x1cb538: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cb53c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cb540: 0x2484b9b8  addiu       $a0, $a0, -0x4648
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949304));
    // 0x1cb544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB544u;
    {
        const bool branch_taken_0x1cb544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB544u;
            // 0x1cb548: 0x24a5b9c8  addiu       $a1, $a1, -0x4638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb544) {
            ctx->pc = 0x1CB568u;
            goto label_1cb568;
        }
    }
    ctx->pc = 0x1CB54Cu;
    // 0x1cb54c: 0x0  nop
    ctx->pc = 0x1cb54cu;
    // NOP
label_1cb550:
    // 0x1cb550: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB550u;
    {
        const bool branch_taken_0x1cb550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB550u;
            // 0x1cb554: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb550) {
            ctx->pc = 0x1CB578u;
            goto label_1cb578;
        }
    }
    ctx->pc = 0x1CB558u;
    // 0x1cb558: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cb55c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cb560: 0x2484b9e8  addiu       $a0, $a0, -0x4618
    ctx->pc = 0x1cb560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949352));
    // 0x1cb564: 0x24a5b9f8  addiu       $a1, $a1, -0x4608
    ctx->pc = 0x1cb564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949368));
label_1cb568:
    // 0x1cb568: 0xc072c9a  jal         func_1CB268
    ctx->pc = 0x1CB568u;
    SET_GPR_U32(ctx, 31, 0x1CB570u);
    ctx->pc = 0x1CB268u;
    if (runtime->hasFunction(0x1CB268u)) {
        auto targetFn = runtime->lookupFunction(0x1CB268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB570u; }
        if (ctx->pc != 0x1CB570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB268_0x1cb268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB570u; }
        if (ctx->pc != 0x1CB570u) { return; }
    }
    ctx->pc = 0x1CB570u;
label_1cb570:
    // 0x1cb570: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1CB570u;
    {
        const bool branch_taken_0x1cb570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB570u;
            // 0x1cb574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb570) {
            ctx->pc = 0x1CB5C8u;
            goto label_1cb5c8;
        }
    }
    ctx->pc = 0x1CB578u;
label_1cb578:
    // 0x1cb578: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CB578u;
    SET_GPR_U32(ctx, 31, 0x1CB580u);
    ctx->pc = 0x1CB57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB578u;
            // 0x1cb57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB580u; }
        if (ctx->pc != 0x1CB580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB580u; }
        if (ctx->pc != 0x1CB580u) { return; }
    }
    ctx->pc = 0x1CB580u;
label_1cb580:
    // 0x1cb580: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1cb580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1cb584: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x1cb584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1cb588: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cb58c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cb590: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1cb590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1cb594: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1cb594u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1cb598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb59c: 0x24428b98  addiu       $v0, $v0, -0x7468
    ctx->pc = 0x1cb59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937496));
    // 0x1cb5a0: 0x24a5b998  addiu       $a1, $a1, -0x4668
    ctx->pc = 0x1cb5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949272));
    // 0x1cb5a4: 0x24c6b248  addiu       $a2, $a2, -0x4DB8
    ctx->pc = 0x1cb5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947400));
    // 0x1cb5a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cb5ac: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1cb5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1cb5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5b4: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1cb5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1cb5b8: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x1cb5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x1cb5bc: 0xc072de0  jal         func_1CB780
    ctx->pc = 0x1CB5BCu;
    SET_GPR_U32(ctx, 31, 0x1CB5C4u);
    ctx->pc = 0x1CB5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5BCu;
            // 0x1cb5c0: 0xae10003c  sw          $s0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB780u;
    if (runtime->hasFunction(0x1CB780u)) {
        auto targetFn = runtime->lookupFunction(0x1CB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5C4u; }
        if (ctx->pc != 0x1CB5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB780_0x1cb780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5C4u; }
        if (ctx->pc != 0x1CB5C4u) { return; }
    }
    ctx->pc = 0x1CB5C4u;
label_1cb5c4:
    // 0x1cb5c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cb5c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb5c8:
    // 0x1cb5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb5cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5D0u;
            // 0x1cb5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB5D8u;
label_1cb5d8:
    // 0x1cb5d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb5dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb5e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb5f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cb5f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cb5f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cb5fc: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CB5FCu;
    SET_GPR_U32(ctx, 31, 0x1CB604u);
    ctx->pc = 0x1CB600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5FCu;
            // 0x1cb600: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB604u; }
        if (ctx->pc != 0x1CB604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB604u; }
        if (ctx->pc != 0x1CB604u) { return; }
    }
    ctx->pc = 0x1CB604u;
label_1cb604:
    // 0x1cb604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb60c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cb60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb610: 0xc072d8e  jal         func_1CB638
    ctx->pc = 0x1CB610u;
    SET_GPR_U32(ctx, 31, 0x1CB618u);
    ctx->pc = 0x1CB614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB610u;
            // 0x1cb614: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB638u;
    if (runtime->hasFunction(0x1CB638u)) {
        auto targetFn = runtime->lookupFunction(0x1CB638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB618u; }
        if (ctx->pc != 0x1CB618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB638_0x1cb638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB618u; }
        if (ctx->pc != 0x1CB618u) { return; }
    }
    ctx->pc = 0x1CB618u;
label_1cb618:
    // 0x1cb618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb61c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb620: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb624: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb62c: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CB62Cu;
    ctx->pc = 0x1CB630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB62Cu;
            // 0x1cb630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CB634u;
    // 0x1cb634: 0x0  nop
    ctx->pc = 0x1cb634u;
    // NOP
    ctx->pc = 0x1cb638u;
}
