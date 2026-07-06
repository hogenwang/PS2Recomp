#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA578
// Address: 0x1ea578 - 0x1ea670
void sub_001EA578_0x1ea578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA578_0x1ea578");
#endif

    switch (ctx->pc) {
        case 0x1ea598u: goto label_1ea598;
        case 0x1ea5a0u: goto label_1ea5a0;
        case 0x1ea5c8u: goto label_1ea5c8;
        case 0x1ea5e8u: goto label_1ea5e8;
        case 0x1ea610u: goto label_1ea610;
        case 0x1ea618u: goto label_1ea618;
        case 0x1ea630u: goto label_1ea630;
        case 0x1ea648u: goto label_1ea648;
        default: break;
    }

    ctx->pc = 0x1ea578u;

    // 0x1ea578: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ea57c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1ea57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1ea580: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x1ea580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x1ea584: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1ea584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1ea588: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1ea588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1ea58c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1ea58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1ea590: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA590u;
            // 0x1ea594: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA598u;
label_1ea598:
    // 0x1ea598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ea598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea59c: 0x0  nop
    ctx->pc = 0x1ea59cu;
    // NOP
label_1ea5a0:
    // 0x1ea5a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ea5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ea5a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ea5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ea5a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ea5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ea5ac: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1ea5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1ea5b0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1ea5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1ea5b4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EA5B4u;
    {
        const bool branch_taken_0x1ea5b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EA5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5B4u;
            // 0x1ea5b8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5b4) {
            ctx->pc = 0x1EA5A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea5a0;
        }
    }
    ctx->pc = 0x1EA5BCu;
    // 0x1ea5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA5C4u;
    // 0x1ea5c4: 0x0  nop
    ctx->pc = 0x1ea5c4u;
    // NOP
label_1ea5c8:
    // 0x1ea5c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ea5cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ea5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ea5d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ea5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea5d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ea5e0: 0xc07a99c  jal         func_1EA670
    ctx->pc = 0x1EA5E0u;
    SET_GPR_U32(ctx, 31, 0x1EA5E8u);
    ctx->pc = 0x1EA5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5E0u;
            // 0x1ea5e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA670u;
    if (runtime->hasFunction(0x1EA670u)) {
        auto targetFn = runtime->lookupFunction(0x1EA670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5E8u; }
        if (ctx->pc != 0x1EA5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA670_0x1ea670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5E8u; }
        if (ctx->pc != 0x1EA5E8u) { return; }
    }
    ctx->pc = 0x1EA5E8u;
label_1ea5e8:
    // 0x1ea5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA5ECu;
    {
        const bool branch_taken_0x1ea5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5ECu;
            // 0x1ea5f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5ec) {
            ctx->pc = 0x1EA610u;
            goto label_1ea610;
        }
    }
    ctx->pc = 0x1EA5F4u;
    // 0x1ea5f4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ea5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ea5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ea5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea600: 0x34a50408  ori         $a1, $a1, 0x408
    ctx->pc = 0x1ea600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1032);
    // 0x1ea604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea608: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EA608u;
    ctx->pc = 0x1EA60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA608u;
            // 0x1ea60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1EA610u;
label_1ea610:
    // 0x1ea610: 0xc07f68e  jal         func_1FDA38
    ctx->pc = 0x1EA610u;
    SET_GPR_U32(ctx, 31, 0x1EA618u);
    ctx->pc = 0x1EA614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA610u;
            // 0x1ea614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA38u;
    if (runtime->hasFunction(0x1FDA38u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA618u; }
        if (ctx->pc != 0x1EA618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA38_0x1fda38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA618u; }
        if (ctx->pc != 0x1EA618u) { return; }
    }
    ctx->pc = 0x1EA618u;
label_1ea618:
    // 0x1ea618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea61c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ea61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea620: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EA620u;
    {
        const bool branch_taken_0x1ea620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA620u;
            // 0x1ea624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea620) {
            ctx->pc = 0x1EA658u;
            goto label_1ea658;
        }
    }
    ctx->pc = 0x1EA628u;
    // 0x1ea628: 0xc07f68e  jal         func_1FDA38
    ctx->pc = 0x1EA628u;
    SET_GPR_U32(ctx, 31, 0x1EA630u);
    ctx->pc = 0x1FDA38u;
    if (runtime->hasFunction(0x1FDA38u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA630u; }
        if (ctx->pc != 0x1EA630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA38_0x1fda38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA630u; }
        if (ctx->pc != 0x1EA630u) { return; }
    }
    ctx->pc = 0x1EA630u;
label_1ea630:
    // 0x1ea630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea634: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ea634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea638: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA638u;
    {
        const bool branch_taken_0x1ea638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA638u;
            // 0x1ea63c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea638) {
            ctx->pc = 0x1EA658u;
            goto label_1ea658;
        }
    }
    ctx->pc = 0x1EA640u;
    // 0x1ea640: 0xc07f68e  jal         func_1FDA38
    ctx->pc = 0x1EA640u;
    SET_GPR_U32(ctx, 31, 0x1EA648u);
    ctx->pc = 0x1FDA38u;
    if (runtime->hasFunction(0x1FDA38u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA648u; }
        if (ctx->pc != 0x1EA648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA38_0x1fda38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA648u; }
        if (ctx->pc != 0x1EA648u) { return; }
    }
    ctx->pc = 0x1EA648u;
label_1ea648:
    // 0x1ea648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ea648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea64c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ea64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea650: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1ea650u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1ea654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea658:
    // 0x1ea658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea65c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ea65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ea660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea668: 0x807a9ae  j           func_1EA6B8
    ctx->pc = 0x1EA668u;
    ctx->pc = 0x1EA66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA668u;
            // 0x1ea66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1EA6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1EA670u;
    ctx->pc = 0x1ea670u;
}
