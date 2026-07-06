#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002427A0
// Address: 0x2427a0 - 0x242908
void sub_002427A0_0x2427a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002427A0_0x2427a0");
#endif

    switch (ctx->pc) {
        case 0x2427e0u: goto label_2427e0;
        case 0x242848u: goto label_242848;
        case 0x242858u: goto label_242858;
        case 0x24286cu: goto label_24286c;
        case 0x242880u: goto label_242880;
        case 0x2428b0u: goto label_2428b0;
        case 0x2428d8u: goto label_2428d8;
        case 0x2428ecu: goto label_2428ec;
        default: break;
    }

    ctx->pc = 0x2427a0u;

    // 0x2427a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2427a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2427a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2427a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2427a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2427a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2427ac: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2427acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2427b0: 0x8c45f998  lw          $a1, -0x668($v0)
    ctx->pc = 0x2427b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965656)));
    // 0x2427b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2427b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2427b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2427b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2427bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2427bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2427c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2427c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2427c4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2427C4u;
    {
        const bool branch_taken_0x2427c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2427C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2427C4u;
            // 0x2427c8: 0xae20febc  sw          $zero, -0x144($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294966972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427c4) {
            ctx->pc = 0x242804u;
            goto label_242804;
        }
    }
    ctx->pc = 0x2427CCu;
    // 0x2427cc: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2427ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x2427d0: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2427d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x2427d4: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2427d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2427d8: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x2427d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2427dc: 0x0  nop
    ctx->pc = 0x2427dcu;
    // NOP
label_2427e0:
    // 0x2427e0: 0x8c82febc  lw          $v0, -0x144($a0)
    ctx->pc = 0x2427e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966972)));
    // 0x2427e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2427e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2427e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2427E8u;
    {
        const bool branch_taken_0x2427e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2427e8) {
            ctx->pc = 0x2427ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2427E8u;
            // 0x2427ec: 0xae23febc  sw          $v1, -0x144($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294966972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2427F0u;
            goto label_2427f0;
        }
    }
    ctx->pc = 0x2427F0u;
label_2427f0:
    // 0x2427f0: 0x8ca5001c  lw          $a1, 0x1C($a1)
    ctx->pc = 0x2427f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2427f4: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2427F4u;
    {
        const bool branch_taken_0x2427f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2427f4) {
            ctx->pc = 0x2427F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2427F4u;
            // 0x2427f8: 0x8ca30028  lw          $v1, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2427E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2427e0;
        }
    }
    ctx->pc = 0x2427FCu;
    // 0x2427fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2427FCu;
    {
        const bool branch_taken_0x2427fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2427FCu;
            // 0x242800: 0x8c82febc  lw          $v0, -0x144($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427fc) {
            ctx->pc = 0x242814u;
            goto label_242814;
        }
    }
    ctx->pc = 0x242804u;
label_242804:
    // 0x242804: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x242804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x242808: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x242808u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x24280c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x24280cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x242810: 0x8c82febc  lw          $v0, -0x144($a0)
    ctx->pc = 0x242810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966972)));
label_242814:
    // 0x242814: 0xace0feb8  sw          $zero, -0x148($a3)
    ctx->pc = 0x242814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294966968), GPR_U32(ctx, 0));
    // 0x242818: 0xacc0feb4  sw          $zero, -0x14C($a2)
    ctx->pc = 0x242818u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294966964), GPR_U32(ctx, 0));
    // 0x24281c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24281Cu;
    {
        const bool branch_taken_0x24281c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24281Cu;
            // 0x242820: 0xae40fec0  sw          $zero, -0x140($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294966976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24281c) {
            ctx->pc = 0x242848u;
            goto label_242848;
        }
    }
    ctx->pc = 0x242824u;
    // 0x242824: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x242824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x242828: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x242828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24282c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24282cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242830: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x242830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242834: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x242834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242838: 0x24a565f0  addiu       $a1, $a1, 0x65F0
    ctx->pc = 0x242838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26096));
    // 0x24283c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24283cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242840: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x242840u;
    ctx->pc = 0x242844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242840u;
            // 0x242844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x242848u;
label_242848:
    // 0x242848: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x242848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x24284c: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x24284cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x242850: 0xc098552  jal         func_261548
    ctx->pc = 0x242850u;
    SET_GPR_U32(ctx, 31, 0x242858u);
    ctx->pc = 0x242854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242850u;
            // 0x242854: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242858u; }
        if (ctx->pc != 0x242858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242858u; }
        if (ctx->pc != 0x242858u) { return; }
    }
    ctx->pc = 0x242858u;
label_242858:
    // 0x242858: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242858u;
    {
        const bool branch_taken_0x242858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242858u;
            // 0x24285c: 0xae02adec  sw          $v0, -0x5214($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242858) {
            ctx->pc = 0x24286Cu;
            goto label_24286c;
        }
    }
    ctx->pc = 0x242860u;
    // 0x242860: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x242860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x242864: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x242864u;
    SET_GPR_U32(ctx, 31, 0x24286Cu);
    ctx->pc = 0x242868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242864u;
            // 0x242868: 0x24846628  addiu       $a0, $a0, 0x6628 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24286Cu; }
        if (ctx->pc != 0x24286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24286Cu; }
        if (ctx->pc != 0x24286Cu) { return; }
    }
    ctx->pc = 0x24286Cu;
label_24286c:
    // 0x24286c: 0x8e22febc  lw          $v0, -0x144($s1)
    ctx->pc = 0x24286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966972)));
    // 0x242870: 0x8e04adec  lw          $a0, -0x5214($s0)
    ctx->pc = 0x242870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946284)));
    // 0x242874: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x242874u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x242878: 0xc048c96  jal         func_123258
    ctx->pc = 0x242878u;
    SET_GPR_U32(ctx, 31, 0x242880u);
    ctx->pc = 0x24287Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242878u;
            // 0x24287c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242880u; }
        if (ctx->pc != 0x242880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242880u; }
        if (ctx->pc != 0x242880u) { return; }
    }
    ctx->pc = 0x242880u;
label_242880:
    // 0x242880: 0x8e23febc  lw          $v1, -0x144($s1)
    ctx->pc = 0x242880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966972)));
    // 0x242884: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x242884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x242888: 0x8e02adec  lw          $v0, -0x5214($s0)
    ctx->pc = 0x242888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946284)));
    // 0x24288c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x24288cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x242890: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x242890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242894: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x242894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x242898: 0xaca6adf0  sw          $a2, -0x5210($a1)
    ctx->pc = 0x242898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294946288), GPR_U32(ctx, 6));
    // 0x24289c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x24289cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2428a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2428A0u;
    {
        const bool branch_taken_0x2428a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2428A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2428A0u;
            // 0x2428a4: 0xac83ade8  sw          $v1, -0x5218($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294946280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428a0) {
            ctx->pc = 0x2428CCu;
            goto label_2428cc;
        }
    }
    ctx->pc = 0x2428A8u;
    // 0x2428a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2428a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2428ac: 0x0  nop
    ctx->pc = 0x2428acu;
    // NOP
label_2428b0:
    // 0x2428b0: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x2428b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2428b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2428b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2428b8: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2428b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2428bc: 0x0  nop
    ctx->pc = 0x2428bcu;
    // NOP
    // 0x2428c0: 0x0  nop
    ctx->pc = 0x2428c0u;
    // NOP
    // 0x2428c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2428C4u;
    {
        const bool branch_taken_0x2428c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2428c4) {
            ctx->pc = 0x2428B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2428b0;
        }
    }
    ctx->pc = 0x2428CCu;
label_2428cc:
    // 0x2428cc: 0x2644fec0  addiu       $a0, $s2, -0x140
    ctx->pc = 0x2428ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966976));
    // 0x2428d0: 0xc09099e  jal         func_242678
    ctx->pc = 0x2428D0u;
    SET_GPR_U32(ctx, 31, 0x2428D8u);
    ctx->pc = 0x2428D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2428D0u;
            // 0x2428d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242678u;
    if (runtime->hasFunction(0x242678u)) {
        auto targetFn = runtime->lookupFunction(0x242678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428D8u; }
        if (ctx->pc != 0x2428D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242678_0x242678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428D8u; }
        if (ctx->pc != 0x2428D8u) { return; }
    }
    ctx->pc = 0x2428D8u;
label_2428d8:
    // 0x2428d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2428D8u;
    {
        const bool branch_taken_0x2428d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2428DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2428D8u;
            // 0x2428dc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428d8) {
            ctx->pc = 0x2428F0u;
            goto label_2428f0;
        }
    }
    ctx->pc = 0x2428E0u;
    // 0x2428e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2428e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2428e4: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x2428E4u;
    SET_GPR_U32(ctx, 31, 0x2428ECu);
    ctx->pc = 0x2428E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2428E4u;
            // 0x2428e8: 0x24846630  addiu       $a0, $a0, 0x6630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428ECu; }
        if (ctx->pc != 0x2428ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428ECu; }
        if (ctx->pc != 0x2428ECu) { return; }
    }
    ctx->pc = 0x2428ECu;
label_2428ec:
    // 0x2428ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2428ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2428f0:
    // 0x2428f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2428f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2428f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2428f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2428f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2428f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2428fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2428FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2428FCu;
            // 0x242900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242904u;
    // 0x242904: 0x0  nop
    ctx->pc = 0x242904u;
    // NOP
    ctx->pc = 0x242908u;
}
