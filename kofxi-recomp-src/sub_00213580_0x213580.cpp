#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213580
// Address: 0x213580 - 0x213678
void sub_00213580_0x213580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213580_0x213580");
#endif

    switch (ctx->pc) {
        case 0x2135bcu: goto label_2135bc;
        case 0x2135d0u: goto label_2135d0;
        case 0x2135e4u: goto label_2135e4;
        case 0x2135f8u: goto label_2135f8;
        case 0x21360cu: goto label_21360c;
        case 0x213620u: goto label_213620;
        case 0x213634u: goto label_213634;
        case 0x213648u: goto label_213648;
        case 0x213650u: goto label_213650;
        default: break;
    }

    ctx->pc = 0x213580u;

    // 0x213580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213584: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21358c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213590: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213598: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21359c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21359cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2135a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2135a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2135a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2135a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2135acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2135b0: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2135b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2135b4: 0xc084612  jal         func_211848
    ctx->pc = 0x2135B4u;
    SET_GPR_U32(ctx, 31, 0x2135BCu);
    ctx->pc = 0x2135B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2135B4u;
            // 0x2135b8: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135BCu; }
        if (ctx->pc != 0x2135BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135BCu; }
        if (ctx->pc != 0x2135BCu) { return; }
    }
    ctx->pc = 0x2135BCu;
label_2135bc:
    // 0x2135bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2135bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2135c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2135c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135c8: 0xc084582  jal         func_211608
    ctx->pc = 0x2135C8u;
    SET_GPR_U32(ctx, 31, 0x2135D0u);
    ctx->pc = 0x2135CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2135C8u;
            // 0x2135cc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135D0u; }
        if (ctx->pc != 0x2135D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135D0u; }
        if (ctx->pc != 0x2135D0u) { return; }
    }
    ctx->pc = 0x2135D0u;
label_2135d0:
    // 0x2135d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2135d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2135d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2135d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135dc: 0xc0845c2  jal         func_211708
    ctx->pc = 0x2135DCu;
    SET_GPR_U32(ctx, 31, 0x2135E4u);
    ctx->pc = 0x2135E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2135DCu;
            // 0x2135e0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135E4u; }
        if (ctx->pc != 0x2135E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135E4u; }
        if (ctx->pc != 0x2135E4u) { return; }
    }
    ctx->pc = 0x2135E4u;
label_2135e4:
    // 0x2135e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2135e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2135e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2135ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135f0: 0xc0845c2  jal         func_211708
    ctx->pc = 0x2135F0u;
    SET_GPR_U32(ctx, 31, 0x2135F8u);
    ctx->pc = 0x2135F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2135F0u;
            // 0x2135f4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135F8u; }
        if (ctx->pc != 0x2135F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135F8u; }
        if (ctx->pc != 0x2135F8u) { return; }
    }
    ctx->pc = 0x2135F8u;
label_2135f8:
    // 0x2135f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2135f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2135fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213600: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213604: 0xc084582  jal         func_211608
    ctx->pc = 0x213604u;
    SET_GPR_U32(ctx, 31, 0x21360Cu);
    ctx->pc = 0x213608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213604u;
            // 0x213608: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21360Cu; }
        if (ctx->pc != 0x21360Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21360Cu; }
        if (ctx->pc != 0x21360Cu) { return; }
    }
    ctx->pc = 0x21360Cu;
label_21360c:
    // 0x21360c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213610: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213614: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213618: 0xc084612  jal         func_211848
    ctx->pc = 0x213618u;
    SET_GPR_U32(ctx, 31, 0x213620u);
    ctx->pc = 0x21361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213618u;
            // 0x21361c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213620u; }
        if (ctx->pc != 0x213620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213620u; }
        if (ctx->pc != 0x213620u) { return; }
    }
    ctx->pc = 0x213620u;
label_213620:
    // 0x213620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213624: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213628: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21362c: 0xc084612  jal         func_211848
    ctx->pc = 0x21362Cu;
    SET_GPR_U32(ctx, 31, 0x213634u);
    ctx->pc = 0x213630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21362Cu;
            // 0x213630: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213634u; }
        if (ctx->pc != 0x213634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213634u; }
        if (ctx->pc != 0x213634u) { return; }
    }
    ctx->pc = 0x213634u;
label_213634:
    // 0x213634: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213638: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21363c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21363cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213640: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213640u;
    SET_GPR_U32(ctx, 31, 0x213648u);
    ctx->pc = 0x213644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213640u;
            // 0x213644: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213648u; }
        if (ctx->pc != 0x213648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213648u; }
        if (ctx->pc != 0x213648u) { return; }
    }
    ctx->pc = 0x213648u;
label_213648:
    // 0x213648: 0xc084cf4  jal         func_2133D0
    ctx->pc = 0x213648u;
    SET_GPR_U32(ctx, 31, 0x213650u);
    ctx->pc = 0x21364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213648u;
            // 0x21364c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2133D0u;
    if (runtime->hasFunction(0x2133D0u)) {
        auto targetFn = runtime->lookupFunction(0x2133D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213650u; }
        if (ctx->pc != 0x213650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002133D0_0x2133d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213650u; }
        if (ctx->pc != 0x213650u) { return; }
    }
    ctx->pc = 0x213650u;
label_213650:
    // 0x213650: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x213650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x213654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213658: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x213658u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21365c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21365cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213664: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213668: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21366c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21366cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213670: 0x3e00008  jr          $ra
    ctx->pc = 0x213670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213670u;
            // 0x213674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213678u;
    ctx->pc = 0x213678u;
}
