#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA860
// Address: 0x1ba860 - 0x1ba980
void sub_001BA860_0x1ba860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA860_0x1ba860");
#endif

    switch (ctx->pc) {
        case 0x1ba860u: goto label_1ba860;
        case 0x1ba864u: goto label_1ba864;
        case 0x1ba868u: goto label_1ba868;
        case 0x1ba86cu: goto label_1ba86c;
        case 0x1ba870u: goto label_1ba870;
        case 0x1ba874u: goto label_1ba874;
        case 0x1ba878u: goto label_1ba878;
        case 0x1ba87cu: goto label_1ba87c;
        case 0x1ba880u: goto label_1ba880;
        case 0x1ba884u: goto label_1ba884;
        case 0x1ba888u: goto label_1ba888;
        case 0x1ba88cu: goto label_1ba88c;
        case 0x1ba890u: goto label_1ba890;
        case 0x1ba894u: goto label_1ba894;
        case 0x1ba898u: goto label_1ba898;
        case 0x1ba89cu: goto label_1ba89c;
        case 0x1ba8a0u: goto label_1ba8a0;
        case 0x1ba8a4u: goto label_1ba8a4;
        case 0x1ba8a8u: goto label_1ba8a8;
        case 0x1ba8acu: goto label_1ba8ac;
        case 0x1ba8b0u: goto label_1ba8b0;
        case 0x1ba8b4u: goto label_1ba8b4;
        case 0x1ba8b8u: goto label_1ba8b8;
        case 0x1ba8bcu: goto label_1ba8bc;
        case 0x1ba8c0u: goto label_1ba8c0;
        case 0x1ba8c4u: goto label_1ba8c4;
        case 0x1ba8c8u: goto label_1ba8c8;
        case 0x1ba8ccu: goto label_1ba8cc;
        case 0x1ba8d0u: goto label_1ba8d0;
        case 0x1ba8d4u: goto label_1ba8d4;
        case 0x1ba8d8u: goto label_1ba8d8;
        case 0x1ba8dcu: goto label_1ba8dc;
        case 0x1ba8e0u: goto label_1ba8e0;
        case 0x1ba8e4u: goto label_1ba8e4;
        case 0x1ba8e8u: goto label_1ba8e8;
        case 0x1ba8ecu: goto label_1ba8ec;
        case 0x1ba8f0u: goto label_1ba8f0;
        case 0x1ba8f4u: goto label_1ba8f4;
        case 0x1ba8f8u: goto label_1ba8f8;
        case 0x1ba8fcu: goto label_1ba8fc;
        case 0x1ba900u: goto label_1ba900;
        case 0x1ba904u: goto label_1ba904;
        case 0x1ba908u: goto label_1ba908;
        case 0x1ba90cu: goto label_1ba90c;
        case 0x1ba910u: goto label_1ba910;
        case 0x1ba914u: goto label_1ba914;
        case 0x1ba918u: goto label_1ba918;
        case 0x1ba91cu: goto label_1ba91c;
        case 0x1ba920u: goto label_1ba920;
        case 0x1ba924u: goto label_1ba924;
        case 0x1ba928u: goto label_1ba928;
        case 0x1ba92cu: goto label_1ba92c;
        case 0x1ba930u: goto label_1ba930;
        case 0x1ba934u: goto label_1ba934;
        case 0x1ba938u: goto label_1ba938;
        case 0x1ba93cu: goto label_1ba93c;
        case 0x1ba940u: goto label_1ba940;
        case 0x1ba944u: goto label_1ba944;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba94cu: goto label_1ba94c;
        case 0x1ba950u: goto label_1ba950;
        case 0x1ba954u: goto label_1ba954;
        case 0x1ba958u: goto label_1ba958;
        case 0x1ba95cu: goto label_1ba95c;
        case 0x1ba960u: goto label_1ba960;
        case 0x1ba964u: goto label_1ba964;
        case 0x1ba968u: goto label_1ba968;
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba970u: goto label_1ba970;
        case 0x1ba974u: goto label_1ba974;
        case 0x1ba978u: goto label_1ba978;
        case 0x1ba97cu: goto label_1ba97c;
        default: break;
    }

    ctx->pc = 0x1ba860u;

label_1ba860:
    // 0x1ba860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ba864:
    // 0x1ba864: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ba864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ba868:
    // 0x1ba868: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ba868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba86c:
    // 0x1ba86c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1ba86cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ba870:
    // 0x1ba870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ba874:
    // 0x1ba874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ba878:
    // 0x1ba878: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ba878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ba87c:
    // 0x1ba87c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_1ba880:
    if (ctx->pc == 0x1BA880u) {
        ctx->pc = 0x1BA880u;
            // 0x1ba880: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x1BA884u;
        goto label_1ba884;
    }
    ctx->pc = 0x1BA87Cu;
    {
        const bool branch_taken_0x1ba87c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA87Cu;
            // 0x1ba880: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba87c) {
            ctx->pc = 0x1BA8A0u;
            goto label_1ba8a0;
        }
    }
    ctx->pc = 0x1BA884u;
label_1ba884:
    // 0x1ba884: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ba888:
    // 0x1ba888: 0xc06ba0a  jal         func_1AE828
label_1ba88c:
    if (ctx->pc == 0x1BA88Cu) {
        ctx->pc = 0x1BA88Cu;
            // 0x1ba88c: 0x248484a8  addiu       $a0, $a0, -0x7B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935720));
        ctx->pc = 0x1BA890u;
        goto label_1ba890;
    }
    ctx->pc = 0x1BA888u;
    SET_GPR_U32(ctx, 31, 0x1BA890u);
    ctx->pc = 0x1BA88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA888u;
            // 0x1ba88c: 0x248484a8  addiu       $a0, $a0, -0x7B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA890u; }
        if (ctx->pc != 0x1BA890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA890u; }
        if (ctx->pc != 0x1BA890u) { return; }
    }
    ctx->pc = 0x1BA890u;
label_1ba890:
    // 0x1ba890: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ba890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1ba894:
    // 0x1ba894: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba898:
    // 0x1ba898: 0x10000024  b           . + 4 + (0x24 << 2)
label_1ba89c:
    if (ctx->pc == 0x1BA89Cu) {
        ctx->pc = 0x1BA89Cu;
            // 0x1ba89c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BA8A0u;
        goto label_1ba8a0;
    }
    ctx->pc = 0x1BA898u;
    {
        const bool branch_taken_0x1ba898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA898u;
            // 0x1ba89c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba898) {
            ctx->pc = 0x1BA92Cu;
            goto label_1ba92c;
        }
    }
    ctx->pc = 0x1BA8A0u;
label_1ba8a0:
    // 0x1ba8a0: 0xc06e4ea  jal         func_1B93A8
label_1ba8a4:
    if (ctx->pc == 0x1BA8A4u) {
        ctx->pc = 0x1BA8A8u;
        goto label_1ba8a8;
    }
    ctx->pc = 0x1BA8A0u;
    SET_GPR_U32(ctx, 31, 0x1BA8A8u);
    ctx->pc = 0x1B93A8u;
    if (runtime->hasFunction(0x1B93A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B93A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8A8u; }
        if (ctx->pc != 0x1BA8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93A8_0x1b93a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8A8u; }
        if (ctx->pc != 0x1BA8A8u) { return; }
    }
    ctx->pc = 0x1BA8A8u;
label_1ba8a8:
    // 0x1ba8a8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1ba8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ba8ac:
    // 0x1ba8ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1ba8b0:
    if (ctx->pc == 0x1BA8B0u) {
        ctx->pc = 0x1BA8B0u;
            // 0x1ba8b0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1BA8B4u;
        goto label_1ba8b4;
    }
    ctx->pc = 0x1BA8ACu;
    {
        const bool branch_taken_0x1ba8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8ACu;
            // 0x1ba8b0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8ac) {
            ctx->pc = 0x1BA928u;
            goto label_1ba928;
        }
    }
    ctx->pc = 0x1BA8B4u;
label_1ba8b4:
    // 0x1ba8b4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1ba8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1ba8b8:
    // 0x1ba8b8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1ba8bc:
    if (ctx->pc == 0x1BA8BCu) {
        ctx->pc = 0x1BA8BCu;
            // 0x1ba8bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8C0u;
        goto label_1ba8c0;
    }
    ctx->pc = 0x1BA8B8u;
    {
        const bool branch_taken_0x1ba8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8B8u;
            // 0x1ba8bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8b8) {
            ctx->pc = 0x1BA928u;
            goto label_1ba928;
        }
    }
    ctx->pc = 0x1BA8C0u;
label_1ba8c0:
    // 0x1ba8c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ba8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba8c4:
    // 0x1ba8c4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ba8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ba8c8:
    // 0x1ba8c8: 0x40f809  jalr        $v0
label_1ba8cc:
    if (ctx->pc == 0x1BA8CCu) {
        ctx->pc = 0x1BA8CCu;
            // 0x1ba8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BA8D0u;
        goto label_1ba8d0;
    }
    ctx->pc = 0x1BA8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA8D0u);
        ctx->pc = 0x1BA8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8C8u;
            // 0x1ba8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BA8D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8D0u; }
            if (ctx->pc != 0x1BA8D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1BA8D0u;
label_1ba8d0:
    // 0x1ba8d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8d4:
    // 0x1ba8d4: 0xc06e702  jal         func_1B9C08
label_1ba8d8:
    if (ctx->pc == 0x1BA8D8u) {
        ctx->pc = 0x1BA8D8u;
            // 0x1ba8d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8DCu;
        goto label_1ba8dc;
    }
    ctx->pc = 0x1BA8D4u;
    SET_GPR_U32(ctx, 31, 0x1BA8DCu);
    ctx->pc = 0x1BA8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8D4u;
            // 0x1ba8d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C08u;
    if (runtime->hasFunction(0x1B9C08u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8DCu; }
        if (ctx->pc != 0x1BA8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9C08_0x1b9c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8DCu; }
        if (ctx->pc != 0x1BA8DCu) { return; }
    }
    ctx->pc = 0x1BA8DCu;
label_1ba8dc:
    // 0x1ba8dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ba8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8e0:
    // 0x1ba8e0: 0xc06e6e0  jal         func_1B9B80
label_1ba8e4:
    if (ctx->pc == 0x1BA8E4u) {
        ctx->pc = 0x1BA8E4u;
            // 0x1ba8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8E8u;
        goto label_1ba8e8;
    }
    ctx->pc = 0x1BA8E0u;
    SET_GPR_U32(ctx, 31, 0x1BA8E8u);
    ctx->pc = 0x1BA8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8E0u;
            // 0x1ba8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9B80u;
    if (runtime->hasFunction(0x1B9B80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8E8u; }
        if (ctx->pc != 0x1BA8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9B80_0x1b9b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8E8u; }
        if (ctx->pc != 0x1BA8E8u) { return; }
    }
    ctx->pc = 0x1BA8E8u;
label_1ba8e8:
    // 0x1ba8e8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1ba8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1ba8ec:
    // 0x1ba8ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ba8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1ba8f0:
    // 0x1ba8f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba8f4:
    // 0x1ba8f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba8f8:
    // 0x1ba8f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ba8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ba8fc:
    // 0x1ba8fc: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1ba8fcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ba900:
    // 0x1ba900: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1ba904:
    if (ctx->pc == 0x1BA904u) {
        ctx->pc = 0x1BA904u;
            // 0x1ba904: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1BA908u;
        goto label_1ba908;
    }
    ctx->pc = 0x1BA900u;
    {
        const bool branch_taken_0x1ba900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba900) {
            ctx->pc = 0x1BA904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA900u;
            // 0x1ba904: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA908u;
            goto label_1ba908;
        }
    }
    ctx->pc = 0x1BA908u;
label_1ba908:
    // 0x1ba908: 0x8012  mflo        $s0
    ctx->pc = 0x1ba908u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_1ba90c:
    // 0x1ba90c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x1ba90cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_1ba910:
    // 0x1ba910: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ba910u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba914:
    // 0x1ba914: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba918:
    // 0x1ba918: 0x0  nop
    ctx->pc = 0x1ba918u;
    // NOP
label_1ba91c:
    // 0x1ba91c: 0x0  nop
    ctx->pc = 0x1ba91cu;
    // NOP
label_1ba920:
    // 0x1ba920: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1ba920u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_1ba924:
    // 0x1ba924: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1ba924u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1ba928:
    // 0x1ba928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba92c:
    // 0x1ba92c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ba930:
    // 0x1ba930: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ba930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba934:
    // 0x1ba934: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ba934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ba938:
    // 0x1ba938: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ba938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ba93c:
    // 0x1ba93c: 0x3e00008  jr          $ra
label_1ba940:
    if (ctx->pc == 0x1BA940u) {
        ctx->pc = 0x1BA940u;
            // 0x1ba940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BA944u;
        goto label_1ba944;
    }
    ctx->pc = 0x1BA93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA93Cu;
            // 0x1ba940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA944u;
label_1ba944:
    // 0x1ba944: 0x0  nop
    ctx->pc = 0x1ba944u;
    // NOP
label_1ba948:
    // 0x1ba948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ba94c:
    // 0x1ba94c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ba950:
    // 0x1ba950: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ba950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1ba954:
    // 0x1ba954: 0xc06b49a  jal         func_1AD268
label_1ba958:
    if (ctx->pc == 0x1BA958u) {
        ctx->pc = 0x1BA958u;
            // 0x1ba958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA95Cu;
        goto label_1ba95c;
    }
    ctx->pc = 0x1BA954u;
    SET_GPR_U32(ctx, 31, 0x1BA95Cu);
    ctx->pc = 0x1BA958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA954u;
            // 0x1ba958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA95Cu; }
        if (ctx->pc != 0x1BA95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA95Cu; }
        if (ctx->pc != 0x1BA95Cu) { return; }
    }
    ctx->pc = 0x1BA95Cu;
label_1ba95c:
    // 0x1ba95c: 0xc06ea60  jal         func_1BA980
label_1ba960:
    if (ctx->pc == 0x1BA960u) {
        ctx->pc = 0x1BA960u;
            // 0x1ba960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA964u;
        goto label_1ba964;
    }
    ctx->pc = 0x1BA95Cu;
    SET_GPR_U32(ctx, 31, 0x1BA964u);
    ctx->pc = 0x1BA960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA95Cu;
            // 0x1ba960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA980u;
    if (runtime->hasFunction(0x1BA980u)) {
        auto targetFn = runtime->lookupFunction(0x1BA980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA964u; }
        if (ctx->pc != 0x1BA964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA980_0x1ba980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA964u; }
        if (ctx->pc != 0x1BA964u) { return; }
    }
    ctx->pc = 0x1BA964u;
label_1ba964:
    // 0x1ba964: 0xc06b49c  jal         func_1AD270
label_1ba968:
    if (ctx->pc == 0x1BA968u) {
        ctx->pc = 0x1BA968u;
            // 0x1ba968: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA96Cu;
        goto label_1ba96c;
    }
    ctx->pc = 0x1BA964u;
    SET_GPR_U32(ctx, 31, 0x1BA96Cu);
    ctx->pc = 0x1BA968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA964u;
            // 0x1ba968: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA96Cu; }
        if (ctx->pc != 0x1BA96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA96Cu; }
        if (ctx->pc != 0x1BA96Cu) { return; }
    }
    ctx->pc = 0x1BA96Cu;
label_1ba96c:
    // 0x1ba96c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ba970:
    // 0x1ba970: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba974:
    // 0x1ba974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba978:
    // 0x1ba978: 0x3e00008  jr          $ra
label_1ba97c:
    if (ctx->pc == 0x1BA97Cu) {
        ctx->pc = 0x1BA97Cu;
            // 0x1ba97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BA980u;
        goto label_fallthrough_0x1ba978;
    }
    ctx->pc = 0x1BA978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA978u;
            // 0x1ba97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ba978:
    ctx->pc = 0x1BA980u;
    ctx->pc = 0x1ba980u;
}
