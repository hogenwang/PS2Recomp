#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002946B0
// Address: 0x2946b0 - 0x294800
void sub_002946B0_0x2946b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002946B0_0x2946b0");
#endif

    switch (ctx->pc) {
        case 0x2946b0u: goto label_2946b0;
        case 0x2946b4u: goto label_2946b4;
        case 0x2946b8u: goto label_2946b8;
        case 0x2946bcu: goto label_2946bc;
        case 0x2946c0u: goto label_2946c0;
        case 0x2946c4u: goto label_2946c4;
        case 0x2946c8u: goto label_2946c8;
        case 0x2946ccu: goto label_2946cc;
        case 0x2946d0u: goto label_2946d0;
        case 0x2946d4u: goto label_2946d4;
        case 0x2946d8u: goto label_2946d8;
        case 0x2946dcu: goto label_2946dc;
        case 0x2946e0u: goto label_2946e0;
        case 0x2946e4u: goto label_2946e4;
        case 0x2946e8u: goto label_2946e8;
        case 0x2946ecu: goto label_2946ec;
        case 0x2946f0u: goto label_2946f0;
        case 0x2946f4u: goto label_2946f4;
        case 0x2946f8u: goto label_2946f8;
        case 0x2946fcu: goto label_2946fc;
        case 0x294700u: goto label_294700;
        case 0x294704u: goto label_294704;
        case 0x294708u: goto label_294708;
        case 0x29470cu: goto label_29470c;
        case 0x294710u: goto label_294710;
        case 0x294714u: goto label_294714;
        case 0x294718u: goto label_294718;
        case 0x29471cu: goto label_29471c;
        case 0x294720u: goto label_294720;
        case 0x294724u: goto label_294724;
        case 0x294728u: goto label_294728;
        case 0x29472cu: goto label_29472c;
        case 0x294730u: goto label_294730;
        case 0x294734u: goto label_294734;
        case 0x294738u: goto label_294738;
        case 0x29473cu: goto label_29473c;
        case 0x294740u: goto label_294740;
        case 0x294744u: goto label_294744;
        case 0x294748u: goto label_294748;
        case 0x29474cu: goto label_29474c;
        case 0x294750u: goto label_294750;
        case 0x294754u: goto label_294754;
        case 0x294758u: goto label_294758;
        case 0x29475cu: goto label_29475c;
        case 0x294760u: goto label_294760;
        case 0x294764u: goto label_294764;
        case 0x294768u: goto label_294768;
        case 0x29476cu: goto label_29476c;
        case 0x294770u: goto label_294770;
        case 0x294774u: goto label_294774;
        case 0x294778u: goto label_294778;
        case 0x29477cu: goto label_29477c;
        case 0x294780u: goto label_294780;
        case 0x294784u: goto label_294784;
        case 0x294788u: goto label_294788;
        case 0x29478cu: goto label_29478c;
        case 0x294790u: goto label_294790;
        case 0x294794u: goto label_294794;
        case 0x294798u: goto label_294798;
        case 0x29479cu: goto label_29479c;
        case 0x2947a0u: goto label_2947a0;
        case 0x2947a4u: goto label_2947a4;
        case 0x2947a8u: goto label_2947a8;
        case 0x2947acu: goto label_2947ac;
        case 0x2947b0u: goto label_2947b0;
        case 0x2947b4u: goto label_2947b4;
        case 0x2947b8u: goto label_2947b8;
        case 0x2947bcu: goto label_2947bc;
        case 0x2947c0u: goto label_2947c0;
        case 0x2947c4u: goto label_2947c4;
        case 0x2947c8u: goto label_2947c8;
        case 0x2947ccu: goto label_2947cc;
        case 0x2947d0u: goto label_2947d0;
        case 0x2947d4u: goto label_2947d4;
        case 0x2947d8u: goto label_2947d8;
        case 0x2947dcu: goto label_2947dc;
        case 0x2947e0u: goto label_2947e0;
        case 0x2947e4u: goto label_2947e4;
        case 0x2947e8u: goto label_2947e8;
        case 0x2947ecu: goto label_2947ec;
        case 0x2947f0u: goto label_2947f0;
        case 0x2947f4u: goto label_2947f4;
        case 0x2947f8u: goto label_2947f8;
        case 0x2947fcu: goto label_2947fc;
        default: break;
    }

    ctx->pc = 0x2946b0u;

label_2946b0:
    // 0x2946b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2946b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2946b4:
    // 0x2946b4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2946b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2946b8:
    // 0x2946b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2946b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2946bc:
    // 0x2946bc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2946bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2946c0:
    // 0x2946c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2946c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2946c4:
    // 0x2946c4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2946c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2946c8:
    // 0x2946c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2946c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2946cc:
    // 0x2946cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2946ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2946d0:
    // 0x2946d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2946d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2946d4:
    // 0x2946d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2946d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2946d8:
    // 0x2946d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2946d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2946dc:
    // 0x2946dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2946dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2946e0:
    // 0x2946e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2946e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2946e4:
    // 0x2946e4: 0xc0a3dd0  jal         func_28F740
label_2946e8:
    if (ctx->pc == 0x2946E8u) {
        ctx->pc = 0x2946E8u;
            // 0x2946e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2946ECu;
        goto label_2946ec;
    }
    ctx->pc = 0x2946E4u;
    SET_GPR_U32(ctx, 31, 0x2946ECu);
    ctx->pc = 0x2946E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2946E4u;
            // 0x2946e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946ECu; }
        if (ctx->pc != 0x2946ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946ECu; }
        if (ctx->pc != 0x2946ECu) { return; }
    }
    ctx->pc = 0x2946ECu;
label_2946ec:
    // 0x2946ec: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2946ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2946f0:
    // 0x2946f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2946f4:
    if (ctx->pc == 0x2946F4u) {
        ctx->pc = 0x2946F4u;
            // 0x2946f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2946F8u;
        goto label_2946f8;
    }
    ctx->pc = 0x2946F0u;
    {
        const bool branch_taken_0x2946f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2946F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2946F0u;
            // 0x2946f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946f0) {
            ctx->pc = 0x294718u;
            goto label_294718;
        }
    }
    ctx->pc = 0x2946F8u;
label_2946f8:
    // 0x2946f8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2946f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2946fc:
    // 0x2946fc: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x2946fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_294700:
    // 0x294700: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x294700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_294704:
    // 0x294704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x294704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294708:
    // 0x294708: 0xc0a5648  jal         func_295920
label_29470c:
    if (ctx->pc == 0x29470Cu) {
        ctx->pc = 0x29470Cu;
            // 0x29470c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294710u;
        goto label_294710;
    }
    ctx->pc = 0x294708u;
    SET_GPR_U32(ctx, 31, 0x294710u);
    ctx->pc = 0x29470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294708u;
            // 0x29470c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294710u; }
        if (ctx->pc != 0x294710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294710u; }
        if (ctx->pc != 0x294710u) { return; }
    }
    ctx->pc = 0x294710u;
label_294710:
    // 0x294710: 0x10000007  b           . + 4 + (0x7 << 2)
label_294714:
    if (ctx->pc == 0x294714u) {
        ctx->pc = 0x294714u;
            // 0x294714: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x294718u;
        goto label_294718;
    }
    ctx->pc = 0x294710u;
    {
        const bool branch_taken_0x294710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294710u;
            // 0x294714: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294710) {
            ctx->pc = 0x294730u;
            goto label_294730;
        }
    }
    ctx->pc = 0x294718u;
label_294718:
    // 0x294718: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x294718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29471c:
    // 0x29471c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29471cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_294720:
    // 0x294720: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x294720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_294724:
    // 0x294724: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x294724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_294728:
    // 0x294728: 0x40f809  jalr        $v0
label_29472c:
    if (ctx->pc == 0x29472Cu) {
        ctx->pc = 0x29472Cu;
            // 0x29472c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294730u;
        goto label_294730;
    }
    ctx->pc = 0x294728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294730u);
        ctx->pc = 0x29472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294728u;
            // 0x29472c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x294730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x294730u; }
            if (ctx->pc != 0x294730u) { return; }
        }
        }
    }
    ctx->pc = 0x294730u;
label_294730:
    // 0x294730: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x294730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_294734:
    // 0x294734: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x294734u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_294738:
    // 0x294738: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x294738u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29473c:
    // 0x29473c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29473cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_294740:
    // 0x294740: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_294744:
    // 0x294744: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_294748:
    // 0x294748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29474c:
    // 0x29474c: 0x3e00008  jr          $ra
label_294750:
    if (ctx->pc == 0x294750u) {
        ctx->pc = 0x294750u;
            // 0x294750: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x294754u;
        goto label_294754;
    }
    ctx->pc = 0x29474Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29474Cu;
            // 0x294750: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294754u;
label_294754:
    // 0x294754: 0x0  nop
    ctx->pc = 0x294754u;
    // NOP
label_294758:
    // 0x294758: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x294758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29475c:
    // 0x29475c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_294760:
    // 0x294760: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x294760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_294764:
    // 0x294764: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x294764u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_294768:
    // 0x294768: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x294768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_29476c:
    // 0x29476c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x29476cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_294770:
    // 0x294770: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_294774:
    // 0x294774: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x294774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_294778:
    // 0x294778: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29477c:
    // 0x29477c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29477cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_294780:
    // 0x294780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_294784:
    // 0x294784: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x294784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_294788:
    // 0x294788: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x294788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_29478c:
    // 0x29478c: 0xc0a3dd0  jal         func_28F740
label_294790:
    if (ctx->pc == 0x294790u) {
        ctx->pc = 0x294790u;
            // 0x294790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294794u;
        goto label_294794;
    }
    ctx->pc = 0x29478Cu;
    SET_GPR_U32(ctx, 31, 0x294794u);
    ctx->pc = 0x294790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29478Cu;
            // 0x294790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294794u; }
        if (ctx->pc != 0x294794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294794u; }
        if (ctx->pc != 0x294794u) { return; }
    }
    ctx->pc = 0x294794u;
label_294794:
    // 0x294794: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x294794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_294798:
    // 0x294798: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_29479c:
    if (ctx->pc == 0x29479Cu) {
        ctx->pc = 0x29479Cu;
            // 0x29479c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2947A0u;
        goto label_2947a0;
    }
    ctx->pc = 0x294798u;
    {
        const bool branch_taken_0x294798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294798u;
            // 0x29479c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294798) {
            ctx->pc = 0x2947C0u;
            goto label_2947c0;
        }
    }
    ctx->pc = 0x2947A0u;
label_2947a0:
    // 0x2947a0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2947a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2947a4:
    // 0x2947a4: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2947a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2947a8:
    // 0x2947a8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2947a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2947ac:
    // 0x2947ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2947acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2947b0:
    // 0x2947b0: 0xc0a5648  jal         func_295920
label_2947b4:
    if (ctx->pc == 0x2947B4u) {
        ctx->pc = 0x2947B4u;
            // 0x2947b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2947B8u;
        goto label_2947b8;
    }
    ctx->pc = 0x2947B0u;
    SET_GPR_U32(ctx, 31, 0x2947B8u);
    ctx->pc = 0x2947B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2947B0u;
            // 0x2947b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947B8u; }
        if (ctx->pc != 0x2947B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947B8u; }
        if (ctx->pc != 0x2947B8u) { return; }
    }
    ctx->pc = 0x2947B8u;
label_2947b8:
    // 0x2947b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2947bc:
    if (ctx->pc == 0x2947BCu) {
        ctx->pc = 0x2947BCu;
            // 0x2947bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2947C0u;
        goto label_2947c0;
    }
    ctx->pc = 0x2947B8u;
    {
        const bool branch_taken_0x2947b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2947BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2947B8u;
            // 0x2947bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947b8) {
            ctx->pc = 0x2947D8u;
            goto label_2947d8;
        }
    }
    ctx->pc = 0x2947C0u;
label_2947c0:
    // 0x2947c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2947c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2947c4:
    // 0x2947c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2947c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2947c8:
    // 0x2947c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2947c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2947cc:
    // 0x2947cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2947ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2947d0:
    // 0x2947d0: 0x40f809  jalr        $v0
label_2947d4:
    if (ctx->pc == 0x2947D4u) {
        ctx->pc = 0x2947D4u;
            // 0x2947d4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2947D8u;
        goto label_2947d8;
    }
    ctx->pc = 0x2947D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2947D8u);
        ctx->pc = 0x2947D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2947D0u;
            // 0x2947d4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2947D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2947D8u; }
            if (ctx->pc != 0x2947D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2947D8u;
label_2947d8:
    // 0x2947d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2947d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2947dc:
    // 0x2947dc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2947dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2947e0:
    // 0x2947e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2947e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2947e4:
    // 0x2947e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2947e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2947e8:
    // 0x2947e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2947e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2947ec:
    // 0x2947ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2947ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2947f0:
    // 0x2947f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2947f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2947f4:
    // 0x2947f4: 0x3e00008  jr          $ra
label_2947f8:
    if (ctx->pc == 0x2947F8u) {
        ctx->pc = 0x2947F8u;
            // 0x2947f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2947FCu;
        goto label_2947fc;
    }
    ctx->pc = 0x2947F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2947F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2947F4u;
            // 0x2947f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2947FCu;
label_2947fc:
    // 0x2947fc: 0x0  nop
    ctx->pc = 0x2947fcu;
    // NOP
    ctx->pc = 0x294800u;
}
