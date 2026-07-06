#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212480
// Address: 0x212480 - 0x2125f8
void sub_00212480_0x212480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212480_0x212480");
#endif

    switch (ctx->pc) {
        case 0x2124bcu: goto label_2124bc;
        case 0x2124d0u: goto label_2124d0;
        case 0x2124e4u: goto label_2124e4;
        case 0x2124f8u: goto label_2124f8;
        case 0x21250cu: goto label_21250c;
        case 0x212520u: goto label_212520;
        case 0x212534u: goto label_212534;
        case 0x212548u: goto label_212548;
        case 0x21255cu: goto label_21255c;
        case 0x212570u: goto label_212570;
        case 0x212584u: goto label_212584;
        case 0x212598u: goto label_212598;
        case 0x2125acu: goto label_2125ac;
        case 0x2125c0u: goto label_2125c0;
        case 0x2125d0u: goto label_2125d0;
        default: break;
    }

    ctx->pc = 0x212480u;

    // 0x212480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212484: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x212484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x212488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21248c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212490: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x212494: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x212494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212498: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21249c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21249cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2124a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2124a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2124a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2124a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124ac: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x2124acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2124b0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2124b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2124b4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2124B4u;
    SET_GPR_U32(ctx, 31, 0x2124BCu);
    ctx->pc = 0x2124B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2124B4u;
            // 0x2124b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124BCu; }
        if (ctx->pc != 0x2124BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124BCu; }
        if (ctx->pc != 0x2124BCu) { return; }
    }
    ctx->pc = 0x2124BCu;
label_2124bc:
    // 0x2124bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2124bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2124c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2124c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124c8: 0xc08449a  jal         func_211268
    ctx->pc = 0x2124C8u;
    SET_GPR_U32(ctx, 31, 0x2124D0u);
    ctx->pc = 0x2124CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2124C8u;
            // 0x2124cc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124D0u; }
        if (ctx->pc != 0x2124D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124D0u; }
        if (ctx->pc != 0x2124D0u) { return; }
    }
    ctx->pc = 0x2124D0u;
label_2124d0:
    // 0x2124d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2124d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2124d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2124d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124dc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2124DCu;
    SET_GPR_U32(ctx, 31, 0x2124E4u);
    ctx->pc = 0x2124E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2124DCu;
            // 0x2124e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124E4u; }
        if (ctx->pc != 0x2124E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124E4u; }
        if (ctx->pc != 0x2124E4u) { return; }
    }
    ctx->pc = 0x2124E4u;
label_2124e4:
    // 0x2124e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2124e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2124e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2124ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124f0: 0xc08449a  jal         func_211268
    ctx->pc = 0x2124F0u;
    SET_GPR_U32(ctx, 31, 0x2124F8u);
    ctx->pc = 0x2124F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2124F0u;
            // 0x2124f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124F8u; }
        if (ctx->pc != 0x2124F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124F8u; }
        if (ctx->pc != 0x2124F8u) { return; }
    }
    ctx->pc = 0x2124F8u;
label_2124f8:
    // 0x2124f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2124f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2124fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212500: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212504: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212504u;
    SET_GPR_U32(ctx, 31, 0x21250Cu);
    ctx->pc = 0x212508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212504u;
            // 0x212508: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21250Cu; }
        if (ctx->pc != 0x21250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21250Cu; }
        if (ctx->pc != 0x21250Cu) { return; }
    }
    ctx->pc = 0x21250Cu;
label_21250c:
    // 0x21250c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212514: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212518: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212518u;
    SET_GPR_U32(ctx, 31, 0x212520u);
    ctx->pc = 0x21251Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212518u;
            // 0x21251c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212520u; }
        if (ctx->pc != 0x212520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212520u; }
        if (ctx->pc != 0x212520u) { return; }
    }
    ctx->pc = 0x212520u;
label_212520:
    // 0x212520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212528: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21252c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21252Cu;
    SET_GPR_U32(ctx, 31, 0x212534u);
    ctx->pc = 0x212530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21252Cu;
            // 0x212530: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212534u; }
        if (ctx->pc != 0x212534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212534u; }
        if (ctx->pc != 0x212534u) { return; }
    }
    ctx->pc = 0x212534u;
label_212534:
    // 0x212534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21253c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21253cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212540: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212540u;
    SET_GPR_U32(ctx, 31, 0x212548u);
    ctx->pc = 0x212544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212540u;
            // 0x212544: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212548u; }
        if (ctx->pc != 0x212548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212548u; }
        if (ctx->pc != 0x212548u) { return; }
    }
    ctx->pc = 0x212548u;
label_212548:
    // 0x212548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21254c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21254cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212550: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212554: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212554u;
    SET_GPR_U32(ctx, 31, 0x21255Cu);
    ctx->pc = 0x212558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212554u;
            // 0x212558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21255Cu; }
        if (ctx->pc != 0x21255Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21255Cu; }
        if (ctx->pc != 0x21255Cu) { return; }
    }
    ctx->pc = 0x21255Cu;
label_21255c:
    // 0x21255c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212564: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212568: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x212568u;
    SET_GPR_U32(ctx, 31, 0x212570u);
    ctx->pc = 0x21256Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212568u;
            // 0x21256c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212570u; }
        if (ctx->pc != 0x212570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212570u; }
        if (ctx->pc != 0x212570u) { return; }
    }
    ctx->pc = 0x212570u;
label_212570:
    // 0x212570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212578: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21257c: 0xc08449a  jal         func_211268
    ctx->pc = 0x21257Cu;
    SET_GPR_U32(ctx, 31, 0x212584u);
    ctx->pc = 0x212580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21257Cu;
            // 0x212580: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212584u; }
        if (ctx->pc != 0x212584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212584u; }
        if (ctx->pc != 0x212584u) { return; }
    }
    ctx->pc = 0x212584u;
label_212584:
    // 0x212584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21258c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21258cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212590: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212590u;
    SET_GPR_U32(ctx, 31, 0x212598u);
    ctx->pc = 0x212594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212590u;
            // 0x212594: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212598u; }
        if (ctx->pc != 0x212598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212598u; }
        if (ctx->pc != 0x212598u) { return; }
    }
    ctx->pc = 0x212598u;
label_212598:
    // 0x212598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21259c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21259cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2125a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125a4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2125A4u;
    SET_GPR_U32(ctx, 31, 0x2125ACu);
    ctx->pc = 0x2125A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2125A4u;
            // 0x2125a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125ACu; }
        if (ctx->pc != 0x2125ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125ACu; }
        if (ctx->pc != 0x2125ACu) { return; }
    }
    ctx->pc = 0x2125ACu;
label_2125ac:
    // 0x2125ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2125acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2125b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2125b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125b8: 0xc08449a  jal         func_211268
    ctx->pc = 0x2125B8u;
    SET_GPR_U32(ctx, 31, 0x2125C0u);
    ctx->pc = 0x2125BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2125B8u;
            // 0x2125bc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125C0u; }
        if (ctx->pc != 0x2125C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125C0u; }
        if (ctx->pc != 0x2125C0u) { return; }
    }
    ctx->pc = 0x2125C0u;
label_2125c0:
    // 0x2125c0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2125c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2125c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2125c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125c8: 0xc0848dc  jal         func_212370
    ctx->pc = 0x2125C8u;
    SET_GPR_U32(ctx, 31, 0x2125D0u);
    ctx->pc = 0x2125CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2125C8u;
            // 0x2125cc: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212370u;
    if (runtime->hasFunction(0x212370u)) {
        auto targetFn = runtime->lookupFunction(0x212370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125D0u; }
        if (ctx->pc != 0x2125D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212370_0x212370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125D0u; }
        if (ctx->pc != 0x2125D0u) { return; }
    }
    ctx->pc = 0x2125D0u;
label_2125d0:
    // 0x2125d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2125d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2125d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2125d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2125d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2125dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2125dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2125e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2125e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2125e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2125e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2125e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2125e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2125ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2125ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2125F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2125ECu;
            // 0x2125f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2125F4u;
    // 0x2125f4: 0x0  nop
    ctx->pc = 0x2125f4u;
    // NOP
    ctx->pc = 0x2125f8u;
}
