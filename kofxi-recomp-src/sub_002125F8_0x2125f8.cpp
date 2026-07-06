#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002125F8
// Address: 0x2125f8 - 0x212768
void sub_002125F8_0x2125f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002125F8_0x2125f8");
#endif

    switch (ctx->pc) {
        case 0x212634u: goto label_212634;
        case 0x212648u: goto label_212648;
        case 0x21265cu: goto label_21265c;
        case 0x212670u: goto label_212670;
        case 0x212684u: goto label_212684;
        case 0x212698u: goto label_212698;
        case 0x2126acu: goto label_2126ac;
        case 0x2126c0u: goto label_2126c0;
        case 0x2126d4u: goto label_2126d4;
        case 0x2126e8u: goto label_2126e8;
        case 0x2126fcu: goto label_2126fc;
        case 0x212710u: goto label_212710;
        case 0x212724u: goto label_212724;
        case 0x212738u: goto label_212738;
        case 0x212740u: goto label_212740;
        default: break;
    }

    ctx->pc = 0x2125f8u;

    // 0x2125f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2125f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2125fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2125fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x212600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212604: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212608: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21260c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21260cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212610: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x212614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212618: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x212618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21261c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21261cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212620: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212624: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x212624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212628: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x212628u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21262c: 0xc084612  jal         func_211848
    ctx->pc = 0x21262Cu;
    SET_GPR_U32(ctx, 31, 0x212634u);
    ctx->pc = 0x212630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21262Cu;
            // 0x212630: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212634u; }
        if (ctx->pc != 0x212634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212634u; }
        if (ctx->pc != 0x212634u) { return; }
    }
    ctx->pc = 0x212634u;
label_212634:
    // 0x212634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21263c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21263cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212640: 0xc0845c2  jal         func_211708
    ctx->pc = 0x212640u;
    SET_GPR_U32(ctx, 31, 0x212648u);
    ctx->pc = 0x212644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212640u;
            // 0x212644: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212648u; }
        if (ctx->pc != 0x212648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212648u; }
        if (ctx->pc != 0x212648u) { return; }
    }
    ctx->pc = 0x212648u;
label_212648:
    // 0x212648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21264c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21264cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212650: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212654: 0xc084612  jal         func_211848
    ctx->pc = 0x212654u;
    SET_GPR_U32(ctx, 31, 0x21265Cu);
    ctx->pc = 0x212658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212654u;
            // 0x212658: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21265Cu; }
        if (ctx->pc != 0x21265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21265Cu; }
        if (ctx->pc != 0x21265Cu) { return; }
    }
    ctx->pc = 0x21265Cu;
label_21265c:
    // 0x21265c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212664: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212668: 0xc0845c2  jal         func_211708
    ctx->pc = 0x212668u;
    SET_GPR_U32(ctx, 31, 0x212670u);
    ctx->pc = 0x21266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212668u;
            // 0x21266c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212670u; }
        if (ctx->pc != 0x212670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212670u; }
        if (ctx->pc != 0x212670u) { return; }
    }
    ctx->pc = 0x212670u;
label_212670:
    // 0x212670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212674: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212678: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21267c: 0xc084612  jal         func_211848
    ctx->pc = 0x21267Cu;
    SET_GPR_U32(ctx, 31, 0x212684u);
    ctx->pc = 0x212680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21267Cu;
            // 0x212680: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212684u; }
        if (ctx->pc != 0x212684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212684u; }
        if (ctx->pc != 0x212684u) { return; }
    }
    ctx->pc = 0x212684u;
label_212684:
    // 0x212684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21268c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21268cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212690: 0xc084612  jal         func_211848
    ctx->pc = 0x212690u;
    SET_GPR_U32(ctx, 31, 0x212698u);
    ctx->pc = 0x212694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212690u;
            // 0x212694: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212698u; }
        if (ctx->pc != 0x212698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212698u; }
        if (ctx->pc != 0x212698u) { return; }
    }
    ctx->pc = 0x212698u;
label_212698:
    // 0x212698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21269c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21269cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2126a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126a4: 0xc084612  jal         func_211848
    ctx->pc = 0x2126A4u;
    SET_GPR_U32(ctx, 31, 0x2126ACu);
    ctx->pc = 0x2126A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2126A4u;
            // 0x2126a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126ACu; }
        if (ctx->pc != 0x2126ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126ACu; }
        if (ctx->pc != 0x2126ACu) { return; }
    }
    ctx->pc = 0x2126ACu;
label_2126ac:
    // 0x2126ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2126acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2126b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2126b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126b8: 0xc084612  jal         func_211848
    ctx->pc = 0x2126B8u;
    SET_GPR_U32(ctx, 31, 0x2126C0u);
    ctx->pc = 0x2126BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2126B8u;
            // 0x2126bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126C0u; }
        if (ctx->pc != 0x2126C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126C0u; }
        if (ctx->pc != 0x2126C0u) { return; }
    }
    ctx->pc = 0x2126C0u;
label_2126c0:
    // 0x2126c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2126c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2126c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2126c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126cc: 0xc084612  jal         func_211848
    ctx->pc = 0x2126CCu;
    SET_GPR_U32(ctx, 31, 0x2126D4u);
    ctx->pc = 0x2126D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2126CCu;
            // 0x2126d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126D4u; }
        if (ctx->pc != 0x2126D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126D4u; }
        if (ctx->pc != 0x2126D4u) { return; }
    }
    ctx->pc = 0x2126D4u;
label_2126d4:
    // 0x2126d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2126d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2126d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2126dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126e0: 0xc084582  jal         func_211608
    ctx->pc = 0x2126E0u;
    SET_GPR_U32(ctx, 31, 0x2126E8u);
    ctx->pc = 0x2126E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2126E0u;
            // 0x2126e4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126E8u; }
        if (ctx->pc != 0x2126E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126E8u; }
        if (ctx->pc != 0x2126E8u) { return; }
    }
    ctx->pc = 0x2126E8u;
label_2126e8:
    // 0x2126e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2126e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2126ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2126f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126f4: 0xc0845c2  jal         func_211708
    ctx->pc = 0x2126F4u;
    SET_GPR_U32(ctx, 31, 0x2126FCu);
    ctx->pc = 0x2126F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2126F4u;
            // 0x2126f8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126FCu; }
        if (ctx->pc != 0x2126FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126FCu; }
        if (ctx->pc != 0x2126FCu) { return; }
    }
    ctx->pc = 0x2126FCu;
label_2126fc:
    // 0x2126fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2126fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212700: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212704: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212708: 0xc084612  jal         func_211848
    ctx->pc = 0x212708u;
    SET_GPR_U32(ctx, 31, 0x212710u);
    ctx->pc = 0x21270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212708u;
            // 0x21270c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212710u; }
        if (ctx->pc != 0x212710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212710u; }
        if (ctx->pc != 0x212710u) { return; }
    }
    ctx->pc = 0x212710u;
label_212710:
    // 0x212710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212718: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21271c: 0xc084612  jal         func_211848
    ctx->pc = 0x21271Cu;
    SET_GPR_U32(ctx, 31, 0x212724u);
    ctx->pc = 0x212720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21271Cu;
            // 0x212720: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212724u; }
        if (ctx->pc != 0x212724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212724u; }
        if (ctx->pc != 0x212724u) { return; }
    }
    ctx->pc = 0x212724u;
label_212724:
    // 0x212724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212728: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21272c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212730: 0xc0845c2  jal         func_211708
    ctx->pc = 0x212730u;
    SET_GPR_U32(ctx, 31, 0x212738u);
    ctx->pc = 0x212734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212730u;
            // 0x212734: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212738u; }
        if (ctx->pc != 0x212738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212738u; }
        if (ctx->pc != 0x212738u) { return; }
    }
    ctx->pc = 0x212738u;
label_212738:
    // 0x212738: 0xc0848dc  jal         func_212370
    ctx->pc = 0x212738u;
    SET_GPR_U32(ctx, 31, 0x212740u);
    ctx->pc = 0x21273Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212738u;
            // 0x21273c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212370u;
    if (runtime->hasFunction(0x212370u)) {
        auto targetFn = runtime->lookupFunction(0x212370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212740u; }
        if (ctx->pc != 0x212740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212370_0x212370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212740u; }
        if (ctx->pc != 0x212740u) { return; }
    }
    ctx->pc = 0x212740u;
label_212740:
    // 0x212740: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x212740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212748: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x212748u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21274c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21274cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212750: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212754: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x212754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212758: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x212758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21275c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21275cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212760: 0x3e00008  jr          $ra
    ctx->pc = 0x212760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212760u;
            // 0x212764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212768u;
    ctx->pc = 0x212768u;
}
