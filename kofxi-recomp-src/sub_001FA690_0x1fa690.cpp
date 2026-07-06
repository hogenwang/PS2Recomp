#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA690
// Address: 0x1fa690 - 0x1fa790
void sub_001FA690_0x1fa690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA690_0x1fa690");
#endif

    switch (ctx->pc) {
        case 0x1fa6c8u: goto label_1fa6c8;
        case 0x1fa6e0u: goto label_1fa6e0;
        case 0x1fa6e8u: goto label_1fa6e8;
        case 0x1fa724u: goto label_1fa724;
        case 0x1fa73cu: goto label_1fa73c;
        case 0x1fa750u: goto label_1fa750;
        case 0x1fa770u: goto label_1fa770;
        default: break;
    }

    ctx->pc = 0x1fa690u;

    // 0x1fa690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fa694: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fa694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa69c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1fa69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fa6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fa6a4: 0x8c620dc0  lw          $v0, 0xDC0($v1)
    ctx->pc = 0x1fa6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3520)));
    // 0x1fa6a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA6A8u;
    {
        const bool branch_taken_0x1fa6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6A8u;
            // 0x1fa6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6a8) {
            ctx->pc = 0x1FA6C0u;
            goto label_1fa6c0;
        }
    }
    ctx->pc = 0x1FA6B0u;
    // 0x1fa6b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa6b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fa6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa6b8: 0x807e9b8  j           func_1FA6E0
    ctx->pc = 0x1FA6B8u;
    ctx->pc = 0x1FA6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6B8u;
            // 0x1fa6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6E0u;
    goto label_1fa6e0;
    ctx->pc = 0x1FA6C0u;
label_1fa6c0:
    // 0x1fa6c0: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FA6C0u;
    SET_GPR_U32(ctx, 31, 0x1FA6C8u);
    ctx->pc = 0x1FA6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6C0u;
            // 0x1fa6c4: 0x8c640da8  lw          $a0, 0xDA8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3496)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (runtime->hasFunction(0x1DC718u)) {
        auto targetFn = runtime->lookupFunction(0x1DC718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6C8u; }
        if (ctx->pc != 0x1FA6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC718_0x1dc718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6C8u; }
        if (ctx->pc != 0x1FA6C8u) { return; }
    }
    ctx->pc = 0x1FA6C8u;
label_1fa6c8:
    // 0x1fa6c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fa6cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fa6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6D4u;
            // 0x1fa6d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA6DCu;
    // 0x1fa6dc: 0x0  nop
    ctx->pc = 0x1fa6dcu;
    // NOP
label_1fa6e0:
    // 0x1fa6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6E0u;
            // 0x1fa6e4: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA6E8u;
label_1fa6e8:
    // 0x1fa6e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fa6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa6f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fa6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fa6f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fa6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fa6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1fa6fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fa6fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa700: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fa700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fa704: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fa704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fa708: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fa708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa70c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fa70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fa710: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1fa710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1fa714: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1fa714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1fa718: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fa718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa71c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA71Cu;
    SET_GPR_U32(ctx, 31, 0x1FA724u);
    ctx->pc = 0x1FA720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA71Cu;
            // 0x1fa720: 0x24503708  addiu       $s0, $v0, 0x3708 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA724u; }
        if (ctx->pc != 0x1FA724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA724u; }
        if (ctx->pc != 0x1FA724u) { return; }
    }
    ctx->pc = 0x1FA724u;
label_1fa724:
    // 0x1fa724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa728: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA728u;
    {
        const bool branch_taken_0x1fa728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA728u;
            // 0x1fa72c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa728) {
            ctx->pc = 0x1FA748u;
            goto label_1fa748;
        }
    }
    ctx->pc = 0x1FA730u;
    // 0x1fa730: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa734: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1FA734u;
    SET_GPR_U32(ctx, 31, 0x1FA73Cu);
    ctx->pc = 0x1FA738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA734u;
            // 0x1fa738: 0x34a50157  ori         $a1, $a1, 0x157 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)343);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA73Cu; }
        if (ctx->pc != 0x1FA73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA73Cu; }
        if (ctx->pc != 0x1FA73Cu) { return; }
    }
    ctx->pc = 0x1FA73Cu;
label_1fa73c:
    // 0x1fa73c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FA73Cu;
    {
        const bool branch_taken_0x1fa73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA73Cu;
            // 0x1fa740: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa73c) {
            ctx->pc = 0x1FA778u;
            goto label_1fa778;
        }
    }
    ctx->pc = 0x1FA744u;
    // 0x1fa744: 0x0  nop
    ctx->pc = 0x1fa744u;
    // NOP
label_1fa748:
    // 0x1fa748: 0xc07e960  jal         func_1FA580
    ctx->pc = 0x1FA748u;
    SET_GPR_U32(ctx, 31, 0x1FA750u);
    ctx->pc = 0x1FA74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA748u;
            // 0x1fa74c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA580u;
    if (runtime->hasFunction(0x1FA580u)) {
        auto targetFn = runtime->lookupFunction(0x1FA580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA750u; }
        if (ctx->pc != 0x1FA750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA580_0x1fa580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA750u; }
        if (ctx->pc != 0x1FA750u) { return; }
    }
    ctx->pc = 0x1FA750u;
label_1fa750:
    // 0x1fa750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fa750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa754: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fa754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa758: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1fa758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa75c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1fa75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa760: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA760u;
    {
        const bool branch_taken_0x1fa760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA760u;
            // 0x1fa764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa760) {
            ctx->pc = 0x1FA774u;
            goto label_1fa774;
        }
    }
    ctx->pc = 0x1FA768u;
    // 0x1fa768: 0xc07e9e4  jal         func_1FA790
    ctx->pc = 0x1FA768u;
    SET_GPR_U32(ctx, 31, 0x1FA770u);
    ctx->pc = 0x1FA76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA768u;
            // 0x1fa76c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA790u;
    if (runtime->hasFunction(0x1FA790u)) {
        auto targetFn = runtime->lookupFunction(0x1FA790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA770u; }
        if (ctx->pc != 0x1FA770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA790_0x1fa790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA770u; }
        if (ctx->pc != 0x1FA770u) { return; }
    }
    ctx->pc = 0x1FA770u;
label_1fa770:
    // 0x1fa770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa774:
    // 0x1fa774: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fa774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa778:
    // 0x1fa778: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fa778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa77c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fa77cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa780: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fa780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fa784: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fa784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa788: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA788u;
            // 0x1fa78c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA790u;
    ctx->pc = 0x1fa790u;
}
