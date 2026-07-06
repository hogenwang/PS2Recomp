#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171810
// Address: 0x171810 - 0x171ab0
void sub_00171810_0x171810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171810_0x171810");
#endif

    switch (ctx->pc) {
        case 0x171868u: goto label_171868;
        case 0x1718b4u: goto label_1718b4;
        case 0x1718d4u: goto label_1718d4;
        case 0x171950u: goto label_171950;
        case 0x1719b0u: goto label_1719b0;
        case 0x1719b8u: goto label_1719b8;
        case 0x171a10u: goto label_171a10;
        default: break;
    }

    ctx->pc = 0x171810u;

    // 0x171810: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x171810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x171814: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171818: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x171818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17181c: 0x244248c0  addiu       $v0, $v0, 0x48C0
    ctx->pc = 0x17181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x171820: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x171820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x171824: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x171824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x171828: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x171828u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17182c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17182cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171830: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x171830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x171834: 0x752823  subu        $a1, $v1, $s5
    ctx->pc = 0x171834u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x171838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x171838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17183c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17183cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x171840: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x171844: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x171844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x171848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17184c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x17184cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171854: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171858: 0x2632001c  addiu       $s2, $s1, 0x1C
    ctx->pc = 0x171858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x17185c: 0x2633011e  addiu       $s3, $s1, 0x11E
    ctx->pc = 0x17185cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 286));
    // 0x171860: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x171860u;
    SET_GPR_U32(ctx, 31, 0x171868u);
    ctx->pc = 0x171864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171860u;
            // 0x171864: 0x26300224  addiu       $s0, $s1, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (runtime->hasFunction(0x1717C0u)) {
        auto targetFn = runtime->lookupFunction(0x1717C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171868u; }
        if (ctx->pc != 0x171868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717C0_0x1717c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171868u; }
        if (ctx->pc != 0x171868u) { return; }
    }
    ctx->pc = 0x171868u;
label_171868:
    // 0x171868: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x171868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17186c: 0x52830086  beql        $s4, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x17186Cu;
    {
        const bool branch_taken_0x17186c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x17186c) {
            ctx->pc = 0x171870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17186Cu;
            // 0x171870: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171A88u;
            goto label_171a88;
        }
    }
    ctx->pc = 0x171874u;
    // 0x171874: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x171874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x171878: 0x52830082  beql        $s4, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x171878u;
    {
        const bool branch_taken_0x171878 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x171878) {
            ctx->pc = 0x17187Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171878u;
            // 0x17187c: 0xa620021e  sh          $zero, 0x21E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 542), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171A84u;
            goto label_171a84;
        }
    }
    ctx->pc = 0x171880u;
    // 0x171880: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x171880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x171884: 0x52830030  beql        $s4, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x171884u;
    {
        const bool branch_taken_0x171884 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x171884) {
            ctx->pc = 0x171888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171884u;
            // 0x171888: 0xa620021e  sh          $zero, 0x21E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 542), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171948u;
            goto label_171948;
        }
    }
    ctx->pc = 0x17188Cu;
    // 0x17188c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171890: 0x5283000a  beql        $s4, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x171890u;
    {
        const bool branch_taken_0x171890 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x171890) {
            ctx->pc = 0x171894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171890u;
            // 0x171894: 0x9623001a  lhu         $v1, 0x1A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1718BCu;
            goto label_1718bc;
        }
    }
    ctx->pc = 0x171898u;
    // 0x171898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17189c: 0x52820003  beql        $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17189Cu;
    {
        const bool branch_taken_0x17189c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x17189c) {
            ctx->pc = 0x1718A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17189Cu;
            // 0x1718a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1718ACu;
            goto label_1718ac;
        }
    }
    ctx->pc = 0x1718A4u;
    // 0x1718a4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1718A4u;
    {
        const bool branch_taken_0x1718a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1718A4u;
            // 0x1718a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718a4) {
            ctx->pc = 0x1719A8u;
            goto label_1719a8;
        }
    }
    ctx->pc = 0x1718ACu;
label_1718ac:
    // 0x1718ac: 0xc05c6b4  jal         func_171AD0
    ctx->pc = 0x1718ACu;
    SET_GPR_U32(ctx, 31, 0x1718B4u);
    ctx->pc = 0x171AD0u;
    if (runtime->hasFunction(0x171AD0u)) {
        auto targetFn = runtime->lookupFunction(0x171AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718B4u; }
        if (ctx->pc != 0x1718B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AD0_0x171ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718B4u; }
        if (ctx->pc != 0x1718B4u) { return; }
    }
    ctx->pc = 0x1718B4u;
label_1718b4:
    // 0x1718b4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1718B4u;
    {
        const bool branch_taken_0x1718b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1718b4) {
            ctx->pc = 0x171A84u;
            goto label_171a84;
        }
    }
    ctx->pc = 0x1718BCu;
label_1718bc:
    // 0x1718bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1718bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1718c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1718c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1718c8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1718c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1718cc: 0x9466001c  lhu         $a2, 0x1C($v1)
    ctx->pc = 0x1718ccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1718d0: 0x9465001e  lhu         $a1, 0x1E($v1)
    ctx->pc = 0x1718d0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_1718d4:
    // 0x1718d4: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1718d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1718d8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1718d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1718dc: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x1718dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1718e0: 0x28e30040  slti        $v1, $a3, 0x40
    ctx->pc = 0x1718e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1718e4: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1718e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1718e8: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x1718e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1718ec: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x1718ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1718f0: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x1718f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1718f4: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x1718f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1718f8: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x1718f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1718fc: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x1718fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x171900: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x171900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x171904: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x171904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x171908: 0xa4800016  sh          $zero, 0x16($a0)
    ctx->pc = 0x171908u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x17190c: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x17190cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x171910: 0xa480001a  sh          $zero, 0x1A($a0)
    ctx->pc = 0x171910u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x171914: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x171914u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x171918: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x171918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x17191c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17191Cu;
    {
        const bool branch_taken_0x17191c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17191Cu;
            // 0x171920: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17191c) {
            ctx->pc = 0x1718D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1718d4;
        }
    }
    ctx->pc = 0x171924u;
    // 0x171924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171928: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x171928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17192c: 0xa623001a  sh          $v1, 0x1A($s1)
    ctx->pc = 0x17192cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x171930: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x171930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x171934: 0xa624001c  sh          $a0, 0x1C($s1)
    ctx->pc = 0x171934u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 4));
    // 0x171938: 0xa623001e  sh          $v1, 0x1E($s1)
    ctx->pc = 0x171938u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x17193c: 0xa6260020  sh          $a2, 0x20($s1)
    ctx->pc = 0x17193cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x171940: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x171940u;
    {
        const bool branch_taken_0x171940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171940u;
            // 0x171944: 0xa6250022  sh          $a1, 0x22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171940) {
            ctx->pc = 0x171A84u;
            goto label_171a84;
        }
    }
    ctx->pc = 0x171948u;
label_171948:
    // 0x171948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17194c: 0xa620011c  sh          $zero, 0x11C($s1)
    ctx->pc = 0x17194cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 0));
label_171950:
    // 0x171950: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x171950u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x171954: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x171954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x171958: 0xa6600002  sh          $zero, 0x2($s3)
    ctx->pc = 0x171958u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x17195c: 0x28830040  slti        $v1, $a0, 0x40
    ctx->pc = 0x17195cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x171960: 0xa6600004  sh          $zero, 0x4($s3)
    ctx->pc = 0x171960u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x171964: 0xa6600006  sh          $zero, 0x6($s3)
    ctx->pc = 0x171964u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x171968: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x171968u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x17196c: 0xa660000a  sh          $zero, 0xA($s3)
    ctx->pc = 0x17196cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x171970: 0xa660000c  sh          $zero, 0xC($s3)
    ctx->pc = 0x171970u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x171974: 0xa660000e  sh          $zero, 0xE($s3)
    ctx->pc = 0x171974u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x171978: 0xa6600010  sh          $zero, 0x10($s3)
    ctx->pc = 0x171978u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x17197c: 0xa6600012  sh          $zero, 0x12($s3)
    ctx->pc = 0x17197cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x171980: 0xa6600014  sh          $zero, 0x14($s3)
    ctx->pc = 0x171980u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x171984: 0xa6600016  sh          $zero, 0x16($s3)
    ctx->pc = 0x171984u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x171988: 0xa6600018  sh          $zero, 0x18($s3)
    ctx->pc = 0x171988u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x17198c: 0xa660001a  sh          $zero, 0x1A($s3)
    ctx->pc = 0x17198cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x171990: 0xa660001c  sh          $zero, 0x1C($s3)
    ctx->pc = 0x171990u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x171994: 0xa660001e  sh          $zero, 0x1E($s3)
    ctx->pc = 0x171994u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x171998: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x171998u;
    {
        const bool branch_taken_0x171998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17199Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171998u;
            // 0x17199c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171998) {
            ctx->pc = 0x171950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171950;
        }
    }
    ctx->pc = 0x1719A0u;
    // 0x1719a0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1719A0u;
    {
        const bool branch_taken_0x1719a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1719a0) {
            ctx->pc = 0x171A84u;
            goto label_171a84;
        }
    }
    ctx->pc = 0x1719A8u;
label_1719a8:
    // 0x1719a8: 0xc05c6b4  jal         func_171AD0
    ctx->pc = 0x1719A8u;
    SET_GPR_U32(ctx, 31, 0x1719B0u);
    ctx->pc = 0x171AD0u;
    if (runtime->hasFunction(0x171AD0u)) {
        auto targetFn = runtime->lookupFunction(0x171AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719B0u; }
        if (ctx->pc != 0x1719B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AD0_0x171ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719B0u; }
        if (ctx->pc != 0x1719B0u) { return; }
    }
    ctx->pc = 0x1719B0u;
label_1719b0:
    // 0x1719b0: 0xa620001a  sh          $zero, 0x1A($s1)
    ctx->pc = 0x1719b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1719b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1719b8:
    // 0x1719b8: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1719b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719bc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1719bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1719c0: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x1719c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719c4: 0x28830040  slti        $v1, $a0, 0x40
    ctx->pc = 0x1719c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1719c8: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x1719c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719cc: 0xa6400006  sh          $zero, 0x6($s2)
    ctx->pc = 0x1719ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719d0: 0xa6400008  sh          $zero, 0x8($s2)
    ctx->pc = 0x1719d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719d4: 0xa640000a  sh          $zero, 0xA($s2)
    ctx->pc = 0x1719d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719d8: 0xa640000c  sh          $zero, 0xC($s2)
    ctx->pc = 0x1719d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719dc: 0xa640000e  sh          $zero, 0xE($s2)
    ctx->pc = 0x1719dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719e0: 0xa6400010  sh          $zero, 0x10($s2)
    ctx->pc = 0x1719e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719e4: 0xa6400012  sh          $zero, 0x12($s2)
    ctx->pc = 0x1719e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719e8: 0xa6400014  sh          $zero, 0x14($s2)
    ctx->pc = 0x1719e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719ec: 0xa6400016  sh          $zero, 0x16($s2)
    ctx->pc = 0x1719ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719f0: 0xa6400018  sh          $zero, 0x18($s2)
    ctx->pc = 0x1719f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719f4: 0xa640001a  sh          $zero, 0x1A($s2)
    ctx->pc = 0x1719f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719f8: 0xa640001c  sh          $zero, 0x1C($s2)
    ctx->pc = 0x1719f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1719fc: 0xa640001e  sh          $zero, 0x1E($s2)
    ctx->pc = 0x1719fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a00: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x171A00u;
    {
        const bool branch_taken_0x171a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A00u;
            // 0x171a04: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a00) {
            ctx->pc = 0x1719B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1719b8;
        }
    }
    ctx->pc = 0x171A08u;
    // 0x171a08: 0xa620011c  sh          $zero, 0x11C($s1)
    ctx->pc = 0x171a08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171a10:
    // 0x171a10: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x171a10u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a14: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x171a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x171a18: 0xa6600002  sh          $zero, 0x2($s3)
    ctx->pc = 0x171a18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a1c: 0x28830040  slti        $v1, $a0, 0x40
    ctx->pc = 0x171a1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x171a20: 0xa6600004  sh          $zero, 0x4($s3)
    ctx->pc = 0x171a20u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a24: 0xa6600006  sh          $zero, 0x6($s3)
    ctx->pc = 0x171a24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a28: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x171a28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a2c: 0xa660000a  sh          $zero, 0xA($s3)
    ctx->pc = 0x171a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a30: 0xa660000c  sh          $zero, 0xC($s3)
    ctx->pc = 0x171a30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a34: 0xa660000e  sh          $zero, 0xE($s3)
    ctx->pc = 0x171a34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a38: 0xa6600010  sh          $zero, 0x10($s3)
    ctx->pc = 0x171a38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a3c: 0xa6600012  sh          $zero, 0x12($s3)
    ctx->pc = 0x171a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a40: 0xa6600014  sh          $zero, 0x14($s3)
    ctx->pc = 0x171a40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a44: 0xa6600016  sh          $zero, 0x16($s3)
    ctx->pc = 0x171a44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a48: 0xa6600018  sh          $zero, 0x18($s3)
    ctx->pc = 0x171a48u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a4c: 0xa660001a  sh          $zero, 0x1A($s3)
    ctx->pc = 0x171a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a50: 0xa660001c  sh          $zero, 0x1C($s3)
    ctx->pc = 0x171a50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a54: 0xa660001e  sh          $zero, 0x1E($s3)
    ctx->pc = 0x171a54u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a58: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x171A58u;
    {
        const bool branch_taken_0x171a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A58u;
            // 0x171a5c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a58) {
            ctx->pc = 0x171A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171a10;
        }
    }
    ctx->pc = 0x171A60u;
    // 0x171a60: 0xa620021e  sh          $zero, 0x21E($s1)
    ctx->pc = 0x171a60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 542), (uint16_t)GPR_U32(ctx, 0));
    // 0x171a64: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x171a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x171a68: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x171a68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x171a6c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x171a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x171a70: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x171a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x171a74: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x171a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x171a78: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x171a78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x171a7c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x171a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x171a80: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x171a80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_171a84:
    // 0x171a84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x171a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_171a88:
    // 0x171a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x171a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x171a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x171a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x171AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171AA0u;
            // 0x171aa4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171AA8u;
    // 0x171aa8: 0x0  nop
    ctx->pc = 0x171aa8u;
    // NOP
    // 0x171aac: 0x0  nop
    ctx->pc = 0x171aacu;
    // NOP
    ctx->pc = 0x171ab0u;
}
