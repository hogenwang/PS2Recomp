#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108528
// Address: 0x108528 - 0x1086c8
void sub_00108528_0x108528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108528_0x108528");
#endif

    switch (ctx->pc) {
        case 0x108560u: goto label_108560;
        case 0x108568u: goto label_108568;
        case 0x108570u: goto label_108570;
        case 0x10857cu: goto label_10857c;
        case 0x108598u: goto label_108598;
        case 0x1085bcu: goto label_1085bc;
        case 0x1085ccu: goto label_1085cc;
        case 0x1085d8u: goto label_1085d8;
        case 0x1085e8u: goto label_1085e8;
        case 0x1085f8u: goto label_1085f8;
        case 0x108604u: goto label_108604;
        case 0x108610u: goto label_108610;
        case 0x108618u: goto label_108618;
        case 0x108624u: goto label_108624;
        case 0x108634u: goto label_108634;
        case 0x108654u: goto label_108654;
        default: break;
    }

    ctx->pc = 0x108528u;

    // 0x108528: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x108528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10852c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108530: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108538: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10853c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x10853cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108540: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108544: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x108544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108548: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10854c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x108550: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x108550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108554: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x108554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x108558: 0xc04258e  jal         func_109638
    ctx->pc = 0x108558u;
    SET_GPR_U32(ctx, 31, 0x108560u);
    ctx->pc = 0x10855Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108558u;
            // 0x10855c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109638u;
    if (runtime->hasFunction(0x109638u)) {
        auto targetFn = runtime->lookupFunction(0x109638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108560u; }
        if (ctx->pc != 0x108560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109638_0x109638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108560u; }
        if (ctx->pc != 0x108560u) { return; }
    }
    ctx->pc = 0x108560u;
label_108560:
    // 0x108560: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108560u;
    {
        const bool branch_taken_0x108560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108560u;
            // 0x108564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108560) {
            ctx->pc = 0x108574u;
            goto label_108574;
        }
    }
    ctx->pc = 0x108568u;
label_108568:
    // 0x108568: 0xc042534  jal         func_1094D0
    ctx->pc = 0x108568u;
    SET_GPR_U32(ctx, 31, 0x108570u);
    ctx->pc = 0x10856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108568u;
            // 0x10856c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1094D0u;
    if (runtime->hasFunction(0x1094D0u)) {
        auto targetFn = runtime->lookupFunction(0x1094D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108570u; }
        if (ctx->pc != 0x108570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001094D0_0x1094d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108570u; }
        if (ctx->pc != 0x108570u) { return; }
    }
    ctx->pc = 0x108570u;
label_108570:
    // 0x108570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108574:
    // 0x108574: 0xc041c90  jal         func_107240
    ctx->pc = 0x108574u;
    SET_GPR_U32(ctx, 31, 0x10857Cu);
    ctx->pc = 0x108578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108574u;
            // 0x108578: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107240u;
    if (runtime->hasFunction(0x107240u)) {
        auto targetFn = runtime->lookupFunction(0x107240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10857Cu; }
        if (ctx->pc != 0x10857Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107240_0x107240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10857Cu; }
        if (ctx->pc != 0x10857Cu) { return; }
    }
    ctx->pc = 0x10857Cu;
label_10857c:
    // 0x10857c: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x10857Cu;
    {
        const bool branch_taken_0x10857c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x108580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10857Cu;
            // 0x108580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10857c) {
            ctx->pc = 0x108590u;
            goto label_108590;
        }
    }
    ctx->pc = 0x108584u;
    // 0x108584: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x108584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x108588: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x108588u;
    {
        const bool branch_taken_0x108588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108588) {
            ctx->pc = 0x108568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108568;
        }
    }
    ctx->pc = 0x108590u;
label_108590:
    // 0x108590: 0xc041c90  jal         func_107240
    ctx->pc = 0x108590u;
    SET_GPR_U32(ctx, 31, 0x108598u);
    ctx->pc = 0x108594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108590u;
            // 0x108594: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107240u;
    if (runtime->hasFunction(0x107240u)) {
        auto targetFn = runtime->lookupFunction(0x107240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108598u; }
        if (ctx->pc != 0x108598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107240_0x107240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108598u; }
        if (ctx->pc != 0x108598u) { return; }
    }
    ctx->pc = 0x108598u;
label_108598:
    // 0x108598: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x108598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10859c: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x10859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x1085a0: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x1085a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x1085a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1085A4u;
    {
        const bool branch_taken_0x1085a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1085A4u;
            // 0x1085a8: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085a4) {
            ctx->pc = 0x1085C4u;
            goto label_1085c4;
        }
    }
    ctx->pc = 0x1085ACu;
    // 0x1085ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1085acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085b0: 0x24a5a0b0  addiu       $a1, $a1, -0x5F50
    ctx->pc = 0x1085b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942896));
    // 0x1085b4: 0xc043070  jal         func_10C1C0
    ctx->pc = 0x1085B4u;
    SET_GPR_U32(ctx, 31, 0x1085BCu);
    ctx->pc = 0x1085B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085B4u;
            // 0x1085b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1C0u;
    if (runtime->hasFunction(0x10C1C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085BCu; }
        if (ctx->pc != 0x1085BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1C0_0x10c1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085BCu; }
        if (ctx->pc != 0x1085BCu) { return; }
    }
    ctx->pc = 0x1085BCu;
label_1085bc:
    // 0x1085bc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1085BCu;
    {
        const bool branch_taken_0x1085bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1085BCu;
            // 0x1085c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085bc) {
            ctx->pc = 0x1086A8u;
            goto label_1086a8;
        }
    }
    ctx->pc = 0x1085C4u;
label_1085c4:
    // 0x1085c4: 0xc04258c  jal         func_109630
    ctx->pc = 0x1085C4u;
    SET_GPR_U32(ctx, 31, 0x1085CCu);
    ctx->pc = 0x1085C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085C4u;
            // 0x1085c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109630u;
    if (runtime->hasFunction(0x109630u)) {
        auto targetFn = runtime->lookupFunction(0x109630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085CCu; }
        if (ctx->pc != 0x1085CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109630_0x109630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085CCu; }
        if (ctx->pc != 0x1085CCu) { return; }
    }
    ctx->pc = 0x1085CCu;
label_1085cc:
    // 0x1085cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1085ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085d0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1085D0u;
    SET_GPR_U32(ctx, 31, 0x1085D8u);
    ctx->pc = 0x1085D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085D0u;
            // 0x1085d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085D8u; }
        if (ctx->pc != 0x1085D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085D8u; }
        if (ctx->pc != 0x1085D8u) { return; }
    }
    ctx->pc = 0x1085D8u;
label_1085d8:
    // 0x1085d8: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x1085d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x1085dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1085dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085e0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1085E0u;
    SET_GPR_U32(ctx, 31, 0x1085E8u);
    ctx->pc = 0x1085E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085E0u;
            // 0x1085e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085E8u; }
        if (ctx->pc != 0x1085E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085E8u; }
        if (ctx->pc != 0x1085E8u) { return; }
    }
    ctx->pc = 0x1085E8u;
label_1085e8:
    // 0x1085e8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1085E8u;
    {
        const bool branch_taken_0x1085e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1085E8u;
            // 0x1085ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085e8) {
            ctx->pc = 0x10862Cu;
            goto label_10862c;
        }
    }
    ctx->pc = 0x1085F0u;
    // 0x1085f0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1085F0u;
    SET_GPR_U32(ctx, 31, 0x1085F8u);
    ctx->pc = 0x1085F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085F0u;
            // 0x1085f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085F8u; }
        if (ctx->pc != 0x1085F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085F8u; }
        if (ctx->pc != 0x1085F8u) { return; }
    }
    ctx->pc = 0x1085F8u;
label_1085f8:
    // 0x1085f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1085f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085fc: 0xc042534  jal         func_1094D0
    ctx->pc = 0x1085FCu;
    SET_GPR_U32(ctx, 31, 0x108604u);
    ctx->pc = 0x108600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085FCu;
            // 0x108600: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1094D0u;
    if (runtime->hasFunction(0x1094D0u)) {
        auto targetFn = runtime->lookupFunction(0x1094D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108604u; }
        if (ctx->pc != 0x108604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001094D0_0x1094d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108604u; }
        if (ctx->pc != 0x108604u) { return; }
    }
    ctx->pc = 0x108604u;
label_108604:
    // 0x108604: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x108604u;
    {
        const bool branch_taken_0x108604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108604u;
            // 0x108608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108604) {
            ctx->pc = 0x10861Cu;
            goto label_10861c;
        }
    }
    ctx->pc = 0x10860Cu;
    // 0x10860c: 0x0  nop
    ctx->pc = 0x10860cu;
    // NOP
label_108610:
    // 0x108610: 0xc042534  jal         func_1094D0
    ctx->pc = 0x108610u;
    SET_GPR_U32(ctx, 31, 0x108618u);
    ctx->pc = 0x108614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108610u;
            // 0x108614: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1094D0u;
    if (runtime->hasFunction(0x1094D0u)) {
        auto targetFn = runtime->lookupFunction(0x1094D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108618u; }
        if (ctx->pc != 0x108618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001094D0_0x1094d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108618u; }
        if (ctx->pc != 0x108618u) { return; }
    }
    ctx->pc = 0x108618u;
label_108618:
    // 0x108618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10861c:
    // 0x10861c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10861Cu;
    SET_GPR_U32(ctx, 31, 0x108624u);
    ctx->pc = 0x108620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10861Cu;
            // 0x108620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108624u; }
        if (ctx->pc != 0x108624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108624u; }
        if (ctx->pc != 0x108624u) { return; }
    }
    ctx->pc = 0x108624u;
label_108624:
    // 0x108624: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108624u;
    {
        const bool branch_taken_0x108624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108624u;
            // 0x108628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108624) {
            ctx->pc = 0x108610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108610;
        }
    }
    ctx->pc = 0x10862Cu;
label_10862c:
    // 0x10862c: 0xc041b3e  jal         func_106CF8
    ctx->pc = 0x10862Cu;
    SET_GPR_U32(ctx, 31, 0x108634u);
    ctx->pc = 0x108630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10862Cu;
            // 0x108630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CF8u;
    if (runtime->hasFunction(0x106CF8u)) {
        auto targetFn = runtime->lookupFunction(0x106CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108634u; }
        if (ctx->pc != 0x108634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106CF8_0x106cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108634u; }
        if (ctx->pc != 0x108634u) { return; }
    }
    ctx->pc = 0x108634u;
label_108634:
    // 0x108634: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108638: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x108638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x10863c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x10863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x108640: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108640u;
    {
        const bool branch_taken_0x108640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108640u;
            // 0x108644: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108640) {
            ctx->pc = 0x10865Cu;
            goto label_10865c;
        }
    }
    ctx->pc = 0x108648u;
    // 0x108648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10864c: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10864Cu;
    SET_GPR_U32(ctx, 31, 0x108654u);
    ctx->pc = 0x108650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10864Cu;
            // 0x108650: 0x24a5a0d8  addiu       $a1, $a1, -0x5F28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (runtime->hasFunction(0x10C168u)) {
        auto targetFn = runtime->lookupFunction(0x10C168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108654u; }
        if (ctx->pc != 0x108654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C168_0x10c168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108654u; }
        if (ctx->pc != 0x108654u) { return; }
    }
    ctx->pc = 0x108654u;
label_108654:
    // 0x108654: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x108654u;
    {
        const bool branch_taken_0x108654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108654u;
            // 0x108658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108654) {
            ctx->pc = 0x1086A8u;
            goto label_1086a8;
        }
    }
    ctx->pc = 0x10865Cu;
label_10865c:
    // 0x10865c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x10865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x108660: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x108660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x108664: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x108664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x108668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x108668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10866c: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x10866cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x108670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108674: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x108674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x108678: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x108678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10867c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x10867cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x108680: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x108680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x108684: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x108684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x108688: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x108688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10868c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x10868cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x108690: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x108690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x108694: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x108694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x108698: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x108698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x10869c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x10869cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1086a0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1086a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1086a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1086a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1086a8:
    // 0x1086a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1086a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1086ac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1086acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1086b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1086b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1086b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1086b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1086b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1086b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1086bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1086c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1086C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1086C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1086C0u;
            // 0x1086c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1086C8u;
    ctx->pc = 0x1086c8u;
}
