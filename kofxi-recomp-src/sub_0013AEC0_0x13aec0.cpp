#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013AEC0
// Address: 0x13aec0 - 0x13b010
void sub_0013AEC0_0x13aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AEC0_0x13aec0");
#endif

    switch (ctx->pc) {
        case 0x13afc0u: goto label_13afc0;
        case 0x13afd4u: goto label_13afd4;
        case 0x13afe0u: goto label_13afe0;
        case 0x13b000u: goto label_13b000;
        default: break;
    }

    ctx->pc = 0x13aec0u;

    // 0x13aec0: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x13aec0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13aec4: 0x97ae0008  lhu         $t6, 0x8($sp)
    ctx->pc = 0x13aec4u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13aec8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13aecc: 0xd6040  sll         $t4, $t5, 1
    ctx->pc = 0x13aeccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x13aed0: 0x97af0000  lhu         $t7, 0x0($sp)
    ctx->pc = 0x13aed0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13aed4: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x13aed4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x13aed8: 0xe7040  sll         $t6, $t6, 1
    ctx->pc = 0x13aed8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x13aedc: 0xcc140  sll         $t8, $t4, 5
    ctx->pc = 0x13aedcu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x13aee0: 0x93ad0010  lbu         $t5, 0x10($sp)
    ctx->pc = 0x13aee0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aee4: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x13aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x13aee8: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x13aee8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x13aeec: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x13aeecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x13aef0: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x13aef0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x13aef4: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x13aef4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x13aef8: 0xe46c0008  swc1        $f12, 0x8($v1)
    ctx->pc = 0x13aef8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x13aefc: 0x97ac0018  lhu         $t4, 0x18($sp)
    ctx->pc = 0x13aefcu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13af00: 0xa468000c  sh          $t0, 0xC($v1)
    ctx->pc = 0x13af00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x13af04: 0xa469000e  sh          $t1, 0xE($v1)
    ctx->pc = 0x13af04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x13af08: 0xa46a0010  sh          $t2, 0x10($v1)
    ctx->pc = 0x13af08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 10));
    // 0x13af0c: 0xa46b0012  sh          $t3, 0x12($v1)
    ctx->pc = 0x13af0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 11));
    // 0x13af10: 0xa06e0014  sb          $t6, 0x14($v1)
    ctx->pc = 0x13af10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 14));
    // 0x13af14: 0xa06d0015  sb          $t5, 0x15($v1)
    ctx->pc = 0x13af14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 13));
    // 0x13af18: 0xe46d0018  swc1        $f13, 0x18($v1)
    ctx->pc = 0x13af18u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13af1c: 0x97a70020  lhu         $a3, 0x20($sp)
    ctx->pc = 0x13af1cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13af20: 0xe46e001c  swc1        $f14, 0x1C($v1)
    ctx->pc = 0x13af20u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13af24: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x13af24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13af28: 0xa46c0020  sh          $t4, 0x20($v1)
    ctx->pc = 0x13af28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 12));
    // 0x13af2c: 0xa4670022  sh          $a3, 0x22($v1)
    ctx->pc = 0x13af2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 7));
    // 0x13af30: 0xac660024  sw          $a2, 0x24($v1)
    ctx->pc = 0x13af30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
    // 0x13af34: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x13af34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13af38: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x13af38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13af3c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x13af3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13af40: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x13af40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x13af44: 0x87a50048  lh          $a1, 0x48($sp)
    ctx->pc = 0x13af44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13af48: 0xac67002c  sw          $a3, 0x2C($v1)
    ctx->pc = 0x13af48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 7));
    // 0x13af4c: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x13af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x13af50: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13af50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13af54: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x13af54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x13af58: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x13af58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x13af5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13af5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13af60: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x13af60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x13af64: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x13af64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x13af68: 0x87a50050  lh          $a1, 0x50($sp)
    ctx->pc = 0x13af68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13af6c: 0x87a90058  lh          $t1, 0x58($sp)
    ctx->pc = 0x13af6cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13af70: 0x87a80060  lh          $t0, 0x60($sp)
    ctx->pc = 0x13af70u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13af74: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x13af74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x13af78: 0x87a70068  lh          $a3, 0x68($sp)
    ctx->pc = 0x13af78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13af7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13af7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13af80: 0x87a60070  lh          $a2, 0x70($sp)
    ctx->pc = 0x13af80u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13af84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13af84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13af88: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x13af88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13af8c: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x13af8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x13af90: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x13af90u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13af94: 0x0  nop
    ctx->pc = 0x13af94u;
    // NOP
    // 0x13af98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13af98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13af9c: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x13af9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x13afa0: 0xac680050  sw          $t0, 0x50($v1)
    ctx->pc = 0x13afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 8));
    // 0x13afa4: 0xac670054  sw          $a3, 0x54($v1)
    ctx->pc = 0x13afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 7));
    // 0x13afa8: 0xac660058  sw          $a2, 0x58($v1)
    ctx->pc = 0x13afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 6));
    // 0x13afac: 0xac65005c  sw          $a1, 0x5C($v1)
    ctx->pc = 0x13afacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 5));
    // 0x13afb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13afb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13afb8: 0x3e00008  jr          $ra
    ctx->pc = 0x13AFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFB8u;
            // 0x13afbc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13AFC0u;
label_13afc0:
    // 0x13afc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13afc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13afc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13afcc: 0xc05d7b8  jal         func_175EE0
    ctx->pc = 0x13AFCCu;
    SET_GPR_U32(ctx, 31, 0x13AFD4u);
    ctx->pc = 0x13AFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFCCu;
            // 0x13afd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175EE0u;
    if (runtime->hasFunction(0x175EE0u)) {
        auto targetFn = runtime->lookupFunction(0x175EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AFD4u; }
        if (ctx->pc != 0x13AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175EE0_0x175ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AFD4u; }
        if (ctx->pc != 0x13AFD4u) { return; }
    }
    ctx->pc = 0x13AFD4u;
label_13afd4:
    // 0x13afd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afd8: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x13AFD8u;
    SET_GPR_U32(ctx, 31, 0x13AFE0u);
    ctx->pc = 0x13AFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFD8u;
            // 0x13afdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AFE0u; }
        if (ctx->pc != 0x13AFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AFE0u; }
        if (ctx->pc != 0x13AFE0u) { return; }
    }
    ctx->pc = 0x13AFE0u;
label_13afe0:
    // 0x13afe0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13afe4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x13afe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x13afe8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13AFE8u;
    {
        const bool branch_taken_0x13afe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13afe8) {
            ctx->pc = 0x13AFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFE8u;
            // 0x13afec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B004u;
            goto label_13b004;
        }
    }
    ctx->pc = 0x13AFF0u;
    // 0x13aff0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x13aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x13aff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13aff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aff8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x13AFF8u;
    SET_GPR_U32(ctx, 31, 0x13B000u);
    ctx->pc = 0x13AFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFF8u;
            // 0x13affc: 0x2484d750  addiu       $a0, $a0, -0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B000u; }
        if (ctx->pc != 0x13B000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B000u; }
        if (ctx->pc != 0x13B000u) { return; }
    }
    ctx->pc = 0x13B000u;
label_13b000:
    // 0x13b000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13b004:
    // 0x13b004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b008: 0x3e00008  jr          $ra
    ctx->pc = 0x13B008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B008u;
            // 0x13b00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B010u;
    ctx->pc = 0x13b010u;
}
