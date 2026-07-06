#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA580
// Address: 0x1fa580 - 0x1fa690
void sub_001FA580_0x1fa580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA580_0x1fa580");
#endif

    switch (ctx->pc) {
        case 0x1fa5acu: goto label_1fa5ac;
        case 0x1fa5f0u: goto label_1fa5f0;
        case 0x1fa624u: goto label_1fa624;
        case 0x1fa63cu: goto label_1fa63c;
        case 0x1fa650u: goto label_1fa650;
        case 0x1fa670u: goto label_1fa670;
        default: break;
    }

    ctx->pc = 0x1fa580u;

label_1fa580:
    // 0x1fa580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fa580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fa584: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fa584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fa588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa58c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fa58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fa590: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fa590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fa594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fa598: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fa598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa59c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FA59Cu;
    {
        const bool branch_taken_0x1fa59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA59Cu;
            // 0x1fa5a0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa59c) {
            ctx->pc = 0x1FA5D8u;
            goto label_1fa5d8;
        }
    }
    ctx->pc = 0x1FA5A4u;
    // 0x1fa5a4: 0xc07e87e  jal         func_1FA1F8
    ctx->pc = 0x1FA5A4u;
    SET_GPR_U32(ctx, 31, 0x1FA5ACu);
    ctx->pc = 0x1FA1F8u;
    if (runtime->hasFunction(0x1FA1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FA1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5ACu; }
        if (ctx->pc != 0x1FA5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA1F8_0x1fa1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5ACu; }
        if (ctx->pc != 0x1FA5ACu) { return; }
    }
    ctx->pc = 0x1FA5ACu;
label_1fa5ac:
    // 0x1fa5ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fa5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa5b0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FA5B0u;
    {
        const bool branch_taken_0x1fa5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa5b0) {
            ctx->pc = 0x1FA5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5B0u;
            // 0x1fa5b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA5DCu;
            goto label_1fa5dc;
        }
    }
    ctx->pc = 0x1FA5B8u;
    // 0x1fa5b8: 0x8e020dc0  lw          $v0, 0xDC0($s0)
    ctx->pc = 0x1fa5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3520)));
    // 0x1fa5bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA5BCu;
    {
        const bool branch_taken_0x1fa5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5BCu;
            // 0x1fa5c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5bc) {
            ctx->pc = 0x1FA5D4u;
            goto label_1fa5d4;
        }
    }
    ctx->pc = 0x1FA5C4u;
    // 0x1fa5c4: 0x8e020da8  lw          $v0, 0xDA8($s0)
    ctx->pc = 0x1fa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3496)));
    // 0x1fa5c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA5C8u;
    {
        const bool branch_taken_0x1fa5c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FA5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5C8u;
            // 0x1fa5cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5c8) {
            ctx->pc = 0x1FA5DCu;
            goto label_1fa5dc;
        }
    }
    ctx->pc = 0x1FA5D0u;
    // 0x1fa5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa5d4:
    // 0x1fa5d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fa5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fa5d8:
    // 0x1fa5d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fa5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa5dc:
    // 0x1fa5dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fa5dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa5e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5E4u;
            // 0x1fa5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA5ECu;
    // 0x1fa5ec: 0x0  nop
    ctx->pc = 0x1fa5ecu;
    // NOP
label_1fa5f0:
    // 0x1fa5f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fa5f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fa5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fa5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fa5fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1fa5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa600: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fa600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fa604: 0x24503708  addiu       $s0, $v0, 0x3708
    ctx->pc = 0x1fa604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14088));
    // 0x1fa608: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fa608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fa60c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fa60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa610: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fa610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1fa614: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fa614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa618: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fa618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fa61c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA61Cu;
    SET_GPR_U32(ctx, 31, 0x1FA624u);
    ctx->pc = 0x1FA620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA61Cu;
            // 0x1fa620: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA624u; }
        if (ctx->pc != 0x1FA624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA624u; }
        if (ctx->pc != 0x1FA624u) { return; }
    }
    ctx->pc = 0x1FA624u;
label_1fa624:
    // 0x1fa624: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa628: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA628u;
    {
        const bool branch_taken_0x1fa628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA628u;
            // 0x1fa62c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa628) {
            ctx->pc = 0x1FA648u;
            goto label_1fa648;
        }
    }
    ctx->pc = 0x1FA630u;
    // 0x1fa630: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa634: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1FA634u;
    SET_GPR_U32(ctx, 31, 0x1FA63Cu);
    ctx->pc = 0x1FA638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA634u;
            // 0x1fa638: 0x34a50156  ori         $a1, $a1, 0x156 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)342);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA63Cu; }
        if (ctx->pc != 0x1FA63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA63Cu; }
        if (ctx->pc != 0x1FA63Cu) { return; }
    }
    ctx->pc = 0x1FA63Cu;
label_1fa63c:
    // 0x1fa63c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FA63Cu;
    {
        const bool branch_taken_0x1fa63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA63Cu;
            // 0x1fa640: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa63c) {
            ctx->pc = 0x1FA678u;
            goto label_1fa678;
        }
    }
    ctx->pc = 0x1FA644u;
    // 0x1fa644: 0x0  nop
    ctx->pc = 0x1fa644u;
    // NOP
label_1fa648:
    // 0x1fa648: 0xc07e960  jal         func_1FA580
    ctx->pc = 0x1FA648u;
    SET_GPR_U32(ctx, 31, 0x1FA650u);
    ctx->pc = 0x1FA64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA648u;
            // 0x1fa64c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA580u;
    goto label_1fa580;
    ctx->pc = 0x1FA650u;
label_1fa650:
    // 0x1fa650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fa650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa654: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fa654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa658: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fa658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa65c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1fa65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa660: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA660u;
    {
        const bool branch_taken_0x1fa660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA660u;
            // 0x1fa664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa660) {
            ctx->pc = 0x1FA674u;
            goto label_1fa674;
        }
    }
    ctx->pc = 0x1FA668u;
    // 0x1fa668: 0xc07e9a4  jal         func_1FA690
    ctx->pc = 0x1FA668u;
    SET_GPR_U32(ctx, 31, 0x1FA670u);
    ctx->pc = 0x1FA66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA668u;
            // 0x1fa66c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA690u;
    if (runtime->hasFunction(0x1FA690u)) {
        auto targetFn = runtime->lookupFunction(0x1FA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA670u; }
        if (ctx->pc != 0x1FA670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA690_0x1fa690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA670u; }
        if (ctx->pc != 0x1FA670u) { return; }
    }
    ctx->pc = 0x1FA670u;
label_1fa670:
    // 0x1fa670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa674:
    // 0x1fa674: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fa674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa678:
    // 0x1fa678: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fa678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa67c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fa67cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa680: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fa680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fa684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fa684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa688: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA688u;
            // 0x1fa68c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA690u;
    ctx->pc = 0x1fa690u;
}
