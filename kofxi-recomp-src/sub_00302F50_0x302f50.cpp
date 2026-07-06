#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00302F50
// Address: 0x302f50 - 0x303170
void sub_00302F50_0x302f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302F50_0x302f50");
#endif

    switch (ctx->pc) {
        case 0x302ffcu: goto label_302ffc;
        case 0x303008u: goto label_303008;
        case 0x303014u: goto label_303014;
        case 0x303050u: goto label_303050;
        case 0x303060u: goto label_303060;
        case 0x303068u: goto label_303068;
        case 0x30308cu: goto label_30308c;
        case 0x30309cu: goto label_30309c;
        case 0x3030a4u: goto label_3030a4;
        default: break;
    }

    ctx->pc = 0x302f50u;

    // 0x302f50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x302f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x302f54: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x302f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x302f58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x302f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x302f5c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x302f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x302f60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x302f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x302f64: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x302f64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f68: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x302f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x302f6c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x302f6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f70: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x302f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x302f74: 0x3c0801cb  lui         $t0, 0x1CB
    ctx->pc = 0x302f74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)459 << 16));
    // 0x302f78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x302f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x302f7c: 0x171842  srl         $v1, $s7, 1
    ctx->pc = 0x302f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
    // 0x302f80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x302f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x302f84: 0x25080d00  addiu       $t0, $t0, 0xD00
    ctx->pc = 0x302f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3328));
    // 0x302f88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x302f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x302f8c: 0x973821  addu        $a3, $a0, $s7
    ctx->pc = 0x302f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x302f90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x302f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x302f94: 0x83a821  addu        $s5, $a0, $v1
    ctx->pc = 0x302f94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x302f98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x302f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x302f9c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x302f9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x302fa0: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x302fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x302fa4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x302fa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x302fa8: 0xafa900b8  sw          $t1, 0xB8($sp)
    ctx->pc = 0x302fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 9));
    // 0x302fac: 0x8c490c68  lw          $t1, 0xC68($v0)
    ctx->pc = 0x302facu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3176)));
    // 0x302fb0: 0xbe3021  addu        $a2, $a1, $fp
    ctx->pc = 0x302fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x302fb4: 0xafaa00b4  sw          $t2, 0xB4($sp)
    ctx->pc = 0x302fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 10));
    // 0x302fb8: 0xafab00b0  sw          $t3, 0xB0($sp)
    ctx->pc = 0x302fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 11));
    // 0x302fbc: 0x1e1042  srl         $v0, $fp, 1
    ctx->pc = 0x302fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
    // 0x302fc0: 0xa2a021  addu        $s4, $a1, $v0
    ctx->pc = 0x302fc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x302fc4: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x302fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x302fc8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x302fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x302fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x302fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x302fd0: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x302fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x302fd4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x302fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x302fd8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x302fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x302fdc: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x302fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x302fe0: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x302fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x302fe4: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x302fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x302fe8: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x302fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x302fec: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x302fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x302ff0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x302ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x302ff4: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x302FF4u;
    SET_GPR_U32(ctx, 31, 0x302FFCu);
    ctx->pc = 0x302FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302FF4u;
            // 0x302ff8: 0xae060014  sw          $a2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3128D0u;
    if (runtime->hasFunction(0x3128D0u)) {
        auto targetFn = runtime->lookupFunction(0x3128D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302FFCu; }
        if (ctx->pc != 0x302FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003128D0_0x3128d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302FFCu; }
        if (ctx->pc != 0x302FFCu) { return; }
    }
    ctx->pc = 0x302FFCu;
label_302ffc:
    // 0x302ffc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x302ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x303000: 0xc0c4a40  jal         func_312900
    ctx->pc = 0x303000u;
    SET_GPR_U32(ctx, 31, 0x303008u);
    ctx->pc = 0x303004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303000u;
            // 0x303004: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x312900u;
    if (runtime->hasFunction(0x312900u)) {
        auto targetFn = runtime->lookupFunction(0x312900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303008u; }
        if (ctx->pc != 0x303008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312900_0x312900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303008u; }
        if (ctx->pc != 0x303008u) { return; }
    }
    ctx->pc = 0x303008u;
label_303008:
    // 0x303008: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x303008u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30300c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x30300cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303010: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x303010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303014:
    // 0x303014: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x303014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x303018: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x303018u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x30301c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x30301cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x303020: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x303020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x303024: 0x549023  subu        $s2, $v0, $s4
    ctx->pc = 0x303024u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x303028: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x303028u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30302c: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x30302cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
    // 0x303030: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x303030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x303034: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x303034u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x303038: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x303038u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30303c: 0x0  nop
    ctx->pc = 0x30303cu;
    // NOP
    // 0x303040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303044: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x303044u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x303048: 0xc048930  jal         func_1224C0
    ctx->pc = 0x303048u;
    SET_GPR_U32(ctx, 31, 0x303050u);
    ctx->pc = 0x30304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303048u;
            // 0x30304c: 0x46150b1d  msub.s      $f12, $f1, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303050u; }
        if (ctx->pc != 0x303050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303050u; }
        if (ctx->pc != 0x303050u) { return; }
    }
    ctx->pc = 0x303050u;
label_303050:
    // 0x303050: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x303050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x303054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x303054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303058: 0xc048a46  jal         func_122918
    ctx->pc = 0x303058u;
    SET_GPR_U32(ctx, 31, 0x303060u);
    ctx->pc = 0x30305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303058u;
            // 0x30305c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (runtime->hasFunction(0x122918u)) {
        auto targetFn = runtime->lookupFunction(0x122918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303060u; }
        if (ctx->pc != 0x303060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122918_0x122918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303060u; }
        if (ctx->pc != 0x303060u) { return; }
    }
    ctx->pc = 0x303060u;
label_303060:
    // 0x303060: 0xc048bde  jal         func_122F78
    ctx->pc = 0x303060u;
    SET_GPR_U32(ctx, 31, 0x303068u);
    ctx->pc = 0x303064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303060u;
            // 0x303064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303068u; }
        if (ctx->pc != 0x303068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303068u; }
        if (ctx->pc != 0x303068u) { return; }
    }
    ctx->pc = 0x303068u;
label_303068:
    // 0x303068: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x303068u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30306c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x30306cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x303070: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x303070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x303074: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x303074u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303078: 0x0  nop
    ctx->pc = 0x303078u;
    // NOP
    // 0x30307c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30307cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303080: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x303080u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x303084: 0xc048930  jal         func_1224C0
    ctx->pc = 0x303084u;
    SET_GPR_U32(ctx, 31, 0x30308Cu);
    ctx->pc = 0x303088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303084u;
            // 0x303088: 0x46150b1c  madd.s      $f12, $f1, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30308Cu; }
        if (ctx->pc != 0x30308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30308Cu; }
        if (ctx->pc != 0x30308Cu) { return; }
    }
    ctx->pc = 0x30308Cu;
label_30308c:
    // 0x30308c: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x30308cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x303090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x303090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303094: 0xc048a46  jal         func_122918
    ctx->pc = 0x303094u;
    SET_GPR_U32(ctx, 31, 0x30309Cu);
    ctx->pc = 0x303098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303094u;
            // 0x303098: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (runtime->hasFunction(0x122918u)) {
        auto targetFn = runtime->lookupFunction(0x122918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30309Cu; }
        if (ctx->pc != 0x30309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122918_0x122918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30309Cu; }
        if (ctx->pc != 0x30309Cu) { return; }
    }
    ctx->pc = 0x30309Cu;
label_30309c:
    // 0x30309c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x30309Cu;
    SET_GPR_U32(ctx, 31, 0x3030A4u);
    ctx->pc = 0x3030A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30309Cu;
            // 0x3030a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030A4u; }
        if (ctx->pc != 0x3030A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3030A4u; }
        if (ctx->pc != 0x3030A4u) { return; }
    }
    ctx->pc = 0x3030A4u;
label_3030a4:
    // 0x3030a4: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3030a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x3030a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3030a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3030ac: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3030acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3030b0: 0x2ac30004  slti        $v1, $s6, 0x4
    ctx->pc = 0x3030b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3030b4: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x3030b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x3030b8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3030b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3030bc: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x3030bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3030c0: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x3030c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x3030c4: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x3030c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    // 0x3030c8: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3030C8u;
    {
        const bool branch_taken_0x3030c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3030CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3030C8u;
            // 0x3030cc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030c8) {
            ctx->pc = 0x303014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303014;
        }
    }
    ctx->pc = 0x3030D0u;
    // 0x3030d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3030d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3030d4: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x3030d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
    // 0x3030d8: 0xae170020  sw          $s7, 0x20($s0)
    ctx->pc = 0x3030d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 23));
    // 0x3030dc: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x3030dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x3030e0: 0xae1e0024  sw          $fp, 0x24($s0)
    ctx->pc = 0x3030e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 30));
    // 0x3030e4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3030e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3030e8: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x3030e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x3030ec: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x3030ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3030f0: 0x93a600d8  lbu         $a2, 0xD8($sp)
    ctx->pc = 0x3030f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3030f4: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3030f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x3030f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3030f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3030fc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x3030fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x303100: 0x8ca30c68  lw          $v1, 0xC68($a1)
    ctx->pc = 0x303100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3176)));
    // 0x303104: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x303104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x303108: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x303108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30310c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x30310cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x303110: 0xac830c68  sw          $v1, 0xC68($a0)
    ctx->pc = 0x303110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3176), GPR_U32(ctx, 3));
    // 0x303114: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x303114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x303118: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x303118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x30311c: 0xa206003d  sb          $a2, 0x3D($s0)
    ctx->pc = 0x30311cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 6));
    // 0x303120: 0xa206003c  sb          $a2, 0x3C($s0)
    ctx->pc = 0x303120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 6));
    // 0x303124: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x303124u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x303128: 0xae050040  sw          $a1, 0x40($s0)
    ctx->pc = 0x303128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
    // 0x30312c: 0xa203003e  sb          $v1, 0x3E($s0)
    ctx->pc = 0x30312cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 3));
    // 0x303130: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x303130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x303134: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x303134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x303138: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x303138u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30313c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x303140: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x303140u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x303144: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x303144u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x303148: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x303148u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30314c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30314cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x303150: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x303150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x303154: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x303154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303158: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x303158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30315c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30315cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303160: 0x3e00008  jr          $ra
    ctx->pc = 0x303160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303160u;
            // 0x303164: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303168u;
    // 0x303168: 0x0  nop
    ctx->pc = 0x303168u;
    // NOP
    // 0x30316c: 0x0  nop
    ctx->pc = 0x30316cu;
    // NOP
    ctx->pc = 0x303170u;
}
