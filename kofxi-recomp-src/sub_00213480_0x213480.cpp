#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213480
// Address: 0x213480 - 0x213580
void sub_00213480_0x213480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213480_0x213480");
#endif

    switch (ctx->pc) {
        case 0x2134bcu: goto label_2134bc;
        case 0x2134d0u: goto label_2134d0;
        case 0x2134e4u: goto label_2134e4;
        case 0x2134f8u: goto label_2134f8;
        case 0x21350cu: goto label_21350c;
        case 0x213520u: goto label_213520;
        case 0x213534u: goto label_213534;
        case 0x213548u: goto label_213548;
        case 0x213558u: goto label_213558;
        default: break;
    }

    ctx->pc = 0x213480u;

    // 0x213480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213484: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21348c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213490: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213494: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x213494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213498: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21349c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21349cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2134a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2134a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2134a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2134a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134ac: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x2134acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2134b0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2134b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2134b4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2134B4u;
    SET_GPR_U32(ctx, 31, 0x2134BCu);
    ctx->pc = 0x2134B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2134B4u;
            // 0x2134b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134BCu; }
        if (ctx->pc != 0x2134BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134BCu; }
        if (ctx->pc != 0x2134BCu) { return; }
    }
    ctx->pc = 0x2134BCu;
label_2134bc:
    // 0x2134bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2134bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2134c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2134c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134c8: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2134C8u;
    SET_GPR_U32(ctx, 31, 0x2134D0u);
    ctx->pc = 0x2134CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2134C8u;
            // 0x2134cc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134D0u; }
        if (ctx->pc != 0x2134D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134D0u; }
        if (ctx->pc != 0x2134D0u) { return; }
    }
    ctx->pc = 0x2134D0u;
label_2134d0:
    // 0x2134d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2134d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2134d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2134d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134dc: 0xc08449a  jal         func_211268
    ctx->pc = 0x2134DCu;
    SET_GPR_U32(ctx, 31, 0x2134E4u);
    ctx->pc = 0x2134E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2134DCu;
            // 0x2134e0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134E4u; }
        if (ctx->pc != 0x2134E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134E4u; }
        if (ctx->pc != 0x2134E4u) { return; }
    }
    ctx->pc = 0x2134E4u;
label_2134e4:
    // 0x2134e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2134e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2134e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2134ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134f0: 0xc08449a  jal         func_211268
    ctx->pc = 0x2134F0u;
    SET_GPR_U32(ctx, 31, 0x2134F8u);
    ctx->pc = 0x2134F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2134F0u;
            // 0x2134f4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134F8u; }
        if (ctx->pc != 0x2134F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134F8u; }
        if (ctx->pc != 0x2134F8u) { return; }
    }
    ctx->pc = 0x2134F8u;
label_2134f8:
    // 0x2134f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2134f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2134fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213500: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213504: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x213504u;
    SET_GPR_U32(ctx, 31, 0x21350Cu);
    ctx->pc = 0x213508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213504u;
            // 0x213508: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21350Cu; }
        if (ctx->pc != 0x21350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21350Cu; }
        if (ctx->pc != 0x21350Cu) { return; }
    }
    ctx->pc = 0x21350Cu;
label_21350c:
    // 0x21350c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213514: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213518: 0xc0844dc  jal         func_211370
    ctx->pc = 0x213518u;
    SET_GPR_U32(ctx, 31, 0x213520u);
    ctx->pc = 0x21351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213518u;
            // 0x21351c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213520u; }
        if (ctx->pc != 0x213520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213520u; }
        if (ctx->pc != 0x213520u) { return; }
    }
    ctx->pc = 0x213520u;
label_213520:
    // 0x213520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213528: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21352c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21352Cu;
    SET_GPR_U32(ctx, 31, 0x213534u);
    ctx->pc = 0x213530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21352Cu;
            // 0x213530: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213534u; }
        if (ctx->pc != 0x213534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213534u; }
        if (ctx->pc != 0x213534u) { return; }
    }
    ctx->pc = 0x213534u;
label_213534:
    // 0x213534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213538: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21353c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213540: 0xc08449a  jal         func_211268
    ctx->pc = 0x213540u;
    SET_GPR_U32(ctx, 31, 0x213548u);
    ctx->pc = 0x213544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213540u;
            // 0x213544: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213548u; }
        if (ctx->pc != 0x213548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213548u; }
        if (ctx->pc != 0x213548u) { return; }
    }
    ctx->pc = 0x213548u;
label_213548:
    // 0x213548: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x213548u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21354c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213550: 0xc084cf4  jal         func_2133D0
    ctx->pc = 0x213550u;
    SET_GPR_U32(ctx, 31, 0x213558u);
    ctx->pc = 0x213554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213550u;
            // 0x213554: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2133D0u;
    if (runtime->hasFunction(0x2133D0u)) {
        auto targetFn = runtime->lookupFunction(0x2133D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213558u; }
        if (ctx->pc != 0x213558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002133D0_0x2133d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213558u; }
        if (ctx->pc != 0x213558u) { return; }
    }
    ctx->pc = 0x213558u;
label_213558:
    // 0x213558: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x213558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21355c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21355cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213564: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21356c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21356cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213570: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213574: 0x3e00008  jr          $ra
    ctx->pc = 0x213574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213574u;
            // 0x213578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21357Cu;
    // 0x21357c: 0x0  nop
    ctx->pc = 0x21357cu;
    // NOP
    ctx->pc = 0x213580u;
}
