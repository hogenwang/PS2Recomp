#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173C20
// Address: 0x173c20 - 0x1745f0
void sub_00173C20_0x173c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173C20_0x173c20");
#endif

    switch (ctx->pc) {
        case 0x173e88u: goto label_173e88;
        case 0x173ea4u: goto label_173ea4;
        case 0x173ed0u: goto label_173ed0;
        case 0x173f44u: goto label_173f44;
        case 0x173f5cu: goto label_173f5c;
        case 0x173f74u: goto label_173f74;
        case 0x173f8cu: goto label_173f8c;
        case 0x173fa4u: goto label_173fa4;
        case 0x173fbcu: goto label_173fbc;
        case 0x173fd4u: goto label_173fd4;
        case 0x174108u: goto label_174108;
        case 0x174128u: goto label_174128;
        case 0x174158u: goto label_174158;
        case 0x17419cu: goto label_17419c;
        case 0x174204u: goto label_174204;
        case 0x174250u: goto label_174250;
        case 0x1743b8u: goto label_1743b8;
        case 0x174468u: goto label_174468;
        case 0x174598u: goto label_174598;
        default: break;
    }

    ctx->pc = 0x173c20u;

    // 0x173c20: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x173c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x173c24: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x173c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x173c28: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x173c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x173c2c: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x173c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x173c30: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x173c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x173c34: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x173c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x173c38: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x173c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x173c3c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x173c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x173c40: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x173c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x173c44: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x173c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x173c48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x173c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x173c4c: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x173c4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x173c50: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x173c50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x173c54: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x173c54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x173c58: 0x90820030  lbu         $v0, 0x30($a0)
    ctx->pc = 0x173c58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x173c5c: 0xc4950090  lwc1        $f21, 0x90($a0)
    ctx->pc = 0x173c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x173c60: 0x84900000  lh          $s0, 0x0($a0)
    ctx->pc = 0x173c60u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173c64: 0xc4940094  lwc1        $f20, 0x94($a0)
    ctx->pc = 0x173c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x173c68: 0x84910002  lh          $s1, 0x2($a0)
    ctx->pc = 0x173c68u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x173c6c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x173c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x173c70: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x173C70u;
    {
        const bool branch_taken_0x173c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C70u;
            // 0x173c74: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c70) {
            ctx->pc = 0x173CF0u;
            goto label_173cf0;
        }
    }
    ctx->pc = 0x173C78u;
    // 0x173c78: 0x9282008c  lbu         $v0, 0x8C($s4)
    ctx->pc = 0x173c78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x173c7c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x173c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x173c80: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x173C80u;
    {
        const bool branch_taken_0x173c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173c80) {
            ctx->pc = 0x173C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173C80u;
            // 0x173c84: 0xc6820040  lwc1        $f2, 0x40($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x173CC0u;
            goto label_173cc0;
        }
    }
    ctx->pc = 0x173C88u;
    // 0x173c88: 0xc6820040  lwc1        $f2, 0x40($s4)
    ctx->pc = 0x173c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173c8c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x173c8cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173c90: 0x0  nop
    ctx->pc = 0x173c90u;
    // NOP
    // 0x173c94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x173c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173c98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173c9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x173c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173ca0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x173ca0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x173ca4: 0x4615101c  madd.s      $f0, $f2, $f21
    ctx->pc = 0x173ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x173ca8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173ca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173cac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x173cb0: 0x0  nop
    ctx->pc = 0x173cb0u;
    // NOP
    // 0x173cb4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x173cb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x173cb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173CB8u;
    {
        const bool branch_taken_0x173cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CB8u;
            // 0x173cbc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cb8) {
            ctx->pc = 0x173CF0u;
            goto label_173cf0;
        }
    }
    ctx->pc = 0x173CC0u;
label_173cc0:
    // 0x173cc0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x173cc0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173cc4: 0x0  nop
    ctx->pc = 0x173cc4u;
    // NOP
    // 0x173cc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x173cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173ccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173cd0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x173cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173cd4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x173cd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x173cd8: 0x4615101d  msub.s      $f0, $f2, $f21
    ctx->pc = 0x173cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x173cdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173ce0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x173ce4: 0x0  nop
    ctx->pc = 0x173ce4u;
    // NOP
    // 0x173ce8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x173ce8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x173cec: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x173cecu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_173cf0:
    // 0x173cf0: 0x92820031  lbu         $v0, 0x31($s4)
    ctx->pc = 0x173cf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x173cf4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x173cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x173cf8: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x173CF8u;
    {
        const bool branch_taken_0x173cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173cf8) {
            ctx->pc = 0x173CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173CF8u;
            // 0x173cfc: 0x9283008c  lbu         $v1, 0x8C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173D7Cu;
            goto label_173d7c;
        }
    }
    ctx->pc = 0x173D00u;
    // 0x173d00: 0x9282008c  lbu         $v0, 0x8C($s4)
    ctx->pc = 0x173d00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x173d04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x173d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x173d08: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x173D08u;
    {
        const bool branch_taken_0x173d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173d08) {
            ctx->pc = 0x173D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173D08u;
            // 0x173d0c: 0xc6820044  lwc1        $f2, 0x44($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x173D48u;
            goto label_173d48;
        }
    }
    ctx->pc = 0x173D10u;
    // 0x173d10: 0xc6820044  lwc1        $f2, 0x44($s4)
    ctx->pc = 0x173d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173d14: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x173d14u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d18: 0x0  nop
    ctx->pc = 0x173d18u;
    // NOP
    // 0x173d1c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x173d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173d20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x173d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173d28: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x173d28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x173d2c: 0x4614101c  madd.s      $f0, $f2, $f20
    ctx->pc = 0x173d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x173d30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173d30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173d34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x173d38: 0x0  nop
    ctx->pc = 0x173d38u;
    // NOP
    // 0x173d3c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x173d3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x173d40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173D40u;
    {
        const bool branch_taken_0x173d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173D40u;
            // 0x173d44: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d40) {
            ctx->pc = 0x173D78u;
            goto label_173d78;
        }
    }
    ctx->pc = 0x173D48u;
label_173d48:
    // 0x173d48: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x173d48u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d4c: 0x0  nop
    ctx->pc = 0x173d4cu;
    // NOP
    // 0x173d50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x173d50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173d54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d58: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x173d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173d5c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x173d5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x173d60: 0x4614101d  msub.s      $f0, $f2, $f20
    ctx->pc = 0x173d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x173d64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173d64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173d68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173d68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x173d6c: 0x0  nop
    ctx->pc = 0x173d6cu;
    // NOP
    // 0x173d70: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x173d70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x173d74: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x173d74u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_173d78:
    // 0x173d78: 0x9283008c  lbu         $v1, 0x8C($s4)
    ctx->pc = 0x173d78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_173d7c:
    // 0x173d7c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x173d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x173d80: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x173D80u;
    {
        const bool branch_taken_0x173d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173d80) {
            ctx->pc = 0x173D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173D80u;
            // 0x173d84: 0xc6820600  lwc1        $f2, 0x600($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x173DC0u;
            goto label_173dc0;
        }
    }
    ctx->pc = 0x173D88u;
    // 0x173d88: 0xc6820600  lwc1        $f2, 0x600($s4)
    ctx->pc = 0x173d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173d8c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x173d8cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d90: 0x0  nop
    ctx->pc = 0x173d90u;
    // NOP
    // 0x173d94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x173d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173d98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x173d9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173da0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x173da0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x173da4: 0x4615101c  madd.s      $f0, $f2, $f21
    ctx->pc = 0x173da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x173da8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173dac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x173db0: 0x0  nop
    ctx->pc = 0x173db0u;
    // NOP
    // 0x173db4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x173db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x173db8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173DB8u;
    {
        const bool branch_taken_0x173db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173DB8u;
            // 0x173dbc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173db8) {
            ctx->pc = 0x173DF0u;
            goto label_173df0;
        }
    }
    ctx->pc = 0x173DC0u;
label_173dc0:
    // 0x173dc0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x173dc0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173dc4: 0x0  nop
    ctx->pc = 0x173dc4u;
    // NOP
    // 0x173dc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x173dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173dcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173dd0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x173dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173dd4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x173dd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x173dd8: 0x4615101d  msub.s      $f0, $f2, $f21
    ctx->pc = 0x173dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x173ddc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173ddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173de0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173de0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x173de4: 0x0  nop
    ctx->pc = 0x173de4u;
    // NOP
    // 0x173de8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x173de8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x173dec: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x173decu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_173df0:
    // 0x173df0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x173df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x173df4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x173DF4u;
    {
        const bool branch_taken_0x173df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173df4) {
            ctx->pc = 0x173DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173DF4u;
            // 0x173df8: 0xc6820604  lwc1        $f2, 0x604($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x173E34u;
            goto label_173e34;
        }
    }
    ctx->pc = 0x173DFCu;
    // 0x173dfc: 0xc6820604  lwc1        $f2, 0x604($s4)
    ctx->pc = 0x173dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173e00: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x173e00u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173e04: 0x0  nop
    ctx->pc = 0x173e04u;
    // NOP
    // 0x173e08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x173e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173e10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x173e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173e14: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x173e14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x173e18: 0x4614101c  madd.s      $f0, $f2, $f20
    ctx->pc = 0x173e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x173e1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173e1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173e20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173e20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x173e24: 0x0  nop
    ctx->pc = 0x173e24u;
    // NOP
    // 0x173e28: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x173e28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x173e2c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173E2Cu;
    {
        const bool branch_taken_0x173e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173E2Cu;
            // 0x173e30: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e2c) {
            ctx->pc = 0x173E64u;
            goto label_173e64;
        }
    }
    ctx->pc = 0x173E34u;
label_173e34:
    // 0x173e34: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x173e34u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173e38: 0x0  nop
    ctx->pc = 0x173e38u;
    // NOP
    // 0x173e3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x173e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173e44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x173e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173e48: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x173e48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x173e4c: 0x4614101d  msub.s      $f0, $f2, $f20
    ctx->pc = 0x173e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x173e50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173e50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173e54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x173e58: 0x0  nop
    ctx->pc = 0x173e58u;
    // NOP
    // 0x173e5c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x173e5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x173e60: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x173e60u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_173e64:
    // 0x173e64: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x173e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x173e68: 0x2696009c  addiu       $s6, $s4, 0x9C
    ctx->pc = 0x173e68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 156));
    // 0x173e6c: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x173e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x173e70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x173e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e74: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x173e74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x173e78: 0x2693029c  addiu       $s3, $s4, 0x29C
    ctx->pc = 0x173e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 668));
    // 0x173e7c: 0xe7b401dc  swc1        $f20, 0x1DC($sp)
    ctx->pc = 0x173e7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x173e80: 0xc04bbbc  jal         func_12EEF0
    ctx->pc = 0x173E80u;
    SET_GPR_U32(ctx, 31, 0x173E88u);
    ctx->pc = 0x173E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E80u;
            // 0x173e84: 0xafb601b0  sw          $s6, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEF0u;
    if (runtime->hasFunction(0x12EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E88u; }
        if (ctx->pc != 0x173E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EEF0_0x12eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E88u; }
        if (ctx->pc != 0x173E88u) { return; }
    }
    ctx->pc = 0x173E88u;
label_173e88:
    // 0x173e88: 0x8e830270  lw          $v1, 0x270($s4)
    ctx->pc = 0x173e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x173e8c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x173e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x173e90: 0x146001c7  bnez        $v1, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x173E90u;
    {
        const bool branch_taken_0x173e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e90) {
            ctx->pc = 0x1745B0u;
            goto label_1745b0;
        }
    }
    ctx->pc = 0x173E98u;
    // 0x173e98: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x173e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x173e9c: 0xc067cb0  jal         func_19F2C0
    ctx->pc = 0x173E9Cu;
    SET_GPR_U32(ctx, 31, 0x173EA4u);
    ctx->pc = 0x173EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E9Cu;
            // 0x173ea0: 0x34448000  ori         $a0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F2C0u;
    if (runtime->hasFunction(0x19F2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173EA4u; }
        if (ctx->pc != 0x173EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2C0_0x19f2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173EA4u; }
        if (ctx->pc != 0x173EA4u) { return; }
    }
    ctx->pc = 0x173EA4u;
label_173ea4:
    // 0x173ea4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x173ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x173ea8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x173ea8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x173eac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x173eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173eb0: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x173eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x173eb4: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x173eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x173eb8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x173eb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x173ebc: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x173ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x173ec0: 0x9283029a  lbu         $v1, 0x29A($s4)
    ctx->pc = 0x173ec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 666)));
    // 0x173ec4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x173ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x173ec8: 0xa283029a  sb          $v1, 0x29A($s4)
    ctx->pc = 0x173ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 666), (uint8_t)GPR_U32(ctx, 3));
    // 0x173ecc: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x173eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_173ed0:
    // 0x173ed0: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x173ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x173ed4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x173ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x173ed8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173ED8u;
    {
        const bool branch_taken_0x173ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ed8) {
            ctx->pc = 0x173EE8u;
            goto label_173ee8;
        }
    }
    ctx->pc = 0x173EE0u;
    // 0x173ee0: 0x160001af  bnez        $s0, . + 4 + (0x1AF << 2)
    ctx->pc = 0x173EE0u;
    {
        const bool branch_taken_0x173ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x173ee0) {
            ctx->pc = 0x1745A0u;
            goto label_1745a0;
        }
    }
    ctx->pc = 0x173EE8u;
label_173ee8:
    // 0x173ee8: 0x92630011  lbu         $v1, 0x11($s3)
    ctx->pc = 0x173ee8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x173eec: 0x106001aa  beqz        $v1, . + 4 + (0x1AA << 2)
    ctx->pc = 0x173EECu;
    {
        const bool branch_taken_0x173eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173eec) {
            ctx->pc = 0x174598u;
            goto label_174598;
        }
    }
    ctx->pc = 0x173EF4u;
    // 0x173ef4: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x173ef4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x173ef8: 0x106001a7  beqz        $v1, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x173EF8u;
    {
        const bool branch_taken_0x173ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ef8) {
            ctx->pc = 0x174598u;
            goto label_174598;
        }
    }
    ctx->pc = 0x173F00u;
    // 0x173f00: 0x92620012  lbu         $v0, 0x12($s3)
    ctx->pc = 0x173f00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x173f04: 0x30510003  andi        $s1, $v0, 0x3
    ctx->pc = 0x173f04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x173f08: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x173f08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x173f0c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x173f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x173f10: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x173f10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x173f14: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x173F14u;
    {
        const bool branch_taken_0x173f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f14) {
            ctx->pc = 0x173FD8u;
            goto label_173fd8;
        }
    }
    ctx->pc = 0x173F1Cu;
    // 0x173f1c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x173f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x173f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173f24: 0x2463d5e0  addiu       $v1, $v1, -0x2A20
    ctx->pc = 0x173f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956512));
    // 0x173f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173f2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x173f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173f30: 0x400008  jr          $v0
    ctx->pc = 0x173F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173F38u: goto label_173f38;
            case 0x173F50u: goto label_173f50;
            case 0x173F68u: goto label_173f68;
            case 0x173F80u: goto label_173f80;
            case 0x173F98u: goto label_173f98;
            case 0x173FB0u: goto label_173fb0;
            case 0x173FC8u: goto label_173fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173F38u;
label_173f38:
    // 0x173f38: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x173f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173f3c: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x173F3Cu;
    SET_GPR_U32(ctx, 31, 0x173F44u);
    ctx->pc = 0x173F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F3Cu;
            // 0x173f40: 0x92850008  lbu         $a1, 0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (runtime->hasFunction(0x12FB50u)) {
        auto targetFn = runtime->lookupFunction(0x12FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F44u; }
        if (ctx->pc != 0x173F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FB50_0x12fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F44u; }
        if (ctx->pc != 0x173F44u) { return; }
    }
    ctx->pc = 0x173F44u;
label_173f44:
    // 0x173f44: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x173f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x173f48: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x173F48u;
    {
        const bool branch_taken_0x173f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F48u;
            // 0x173f4c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f48) {
            ctx->pc = 0x173FD8u;
            goto label_173fd8;
        }
    }
    ctx->pc = 0x173F50u;
label_173f50:
    // 0x173f50: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x173f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173f54: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x173F54u;
    SET_GPR_U32(ctx, 31, 0x173F5Cu);
    ctx->pc = 0x173F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F54u;
            // 0x173f58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (runtime->hasFunction(0x12FB50u)) {
        auto targetFn = runtime->lookupFunction(0x12FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F5Cu; }
        if (ctx->pc != 0x173F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FB50_0x12fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F5Cu; }
        if (ctx->pc != 0x173F5Cu) { return; }
    }
    ctx->pc = 0x173F5Cu;
label_173f5c:
    // 0x173f5c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x173F5Cu;
    {
        const bool branch_taken_0x173f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F5Cu;
            // 0x173f60: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f5c) {
            ctx->pc = 0x173FD8u;
            goto label_173fd8;
        }
    }
    ctx->pc = 0x173F64u;
    // 0x173f64: 0x0  nop
    ctx->pc = 0x173f64u;
    // NOP
label_173f68:
    // 0x173f68: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x173f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173f6c: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x173F6Cu;
    SET_GPR_U32(ctx, 31, 0x173F74u);
    ctx->pc = 0x173F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F6Cu;
            // 0x173f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (runtime->hasFunction(0x12FB50u)) {
        auto targetFn = runtime->lookupFunction(0x12FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F74u; }
        if (ctx->pc != 0x173F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FB50_0x12fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F74u; }
        if (ctx->pc != 0x173F74u) { return; }
    }
    ctx->pc = 0x173F74u;
label_173f74:
    // 0x173f74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x173F74u;
    {
        const bool branch_taken_0x173f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F74u;
            // 0x173f78: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f74) {
            ctx->pc = 0x173FD8u;
            goto label_173fd8;
        }
    }
    ctx->pc = 0x173F7Cu;
    // 0x173f7c: 0x0  nop
    ctx->pc = 0x173f7cu;
    // NOP
label_173f80:
    // 0x173f80: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x173f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173f84: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x173F84u;
    SET_GPR_U32(ctx, 31, 0x173F8Cu);
    ctx->pc = 0x173F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F84u;
            // 0x173f88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (runtime->hasFunction(0x12FB50u)) {
        auto targetFn = runtime->lookupFunction(0x12FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F8Cu; }
        if (ctx->pc != 0x173F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FB50_0x12fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F8Cu; }
        if (ctx->pc != 0x173F8Cu) { return; }
    }
    ctx->pc = 0x173F8Cu;
label_173f8c:
    // 0x173f8c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x173F8Cu;
    {
        const bool branch_taken_0x173f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F8Cu;
            // 0x173f90: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f8c) {
            ctx->pc = 0x173FD8u;
            goto label_173fd8;
        }
    }
    ctx->pc = 0x173F94u;
    // 0x173f94: 0x0  nop
    ctx->pc = 0x173f94u;
    // NOP
label_173f98:
    // 0x173f98: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x173f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173f9c: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x173F9Cu;
    SET_GPR_U32(ctx, 31, 0x173FA4u);
    ctx->pc = 0x173FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F9Cu;
            // 0x173fa0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (runtime->hasFunction(0x12FB50u)) {
        auto targetFn = runtime->lookupFunction(0x12FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FA4u; }
        if (ctx->pc != 0x173FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FB50_0x12fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FA4u; }
        if (ctx->pc != 0x173FA4u) { return; }
    }
    ctx->pc = 0x173FA4u;
label_173fa4:
    // 0x173fa4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x173FA4u;
    {
        const bool branch_taken_0x173fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FA4u;
            // 0x173fa8: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fa4) {
            ctx->pc = 0x173FD8u;
            goto label_173fd8;
        }
    }
    ctx->pc = 0x173FACu;
    // 0x173fac: 0x0  nop
    ctx->pc = 0x173facu;
    // NOP
label_173fb0:
    // 0x173fb0: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x173fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173fb4: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x173FB4u;
    SET_GPR_U32(ctx, 31, 0x173FBCu);
    ctx->pc = 0x173FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173FB4u;
            // 0x173fb8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (runtime->hasFunction(0x12FB50u)) {
        auto targetFn = runtime->lookupFunction(0x12FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FBCu; }
        if (ctx->pc != 0x173FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FB50_0x12fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FBCu; }
        if (ctx->pc != 0x173FBCu) { return; }
    }
    ctx->pc = 0x173FBCu;
label_173fbc:
    // 0x173fbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x173FBCu;
    {
        const bool branch_taken_0x173fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FBCu;
            // 0x173fc0: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fbc) {
            ctx->pc = 0x173FD8u;
            goto label_173fd8;
        }
    }
    ctx->pc = 0x173FC4u;
    // 0x173fc4: 0x0  nop
    ctx->pc = 0x173fc4u;
    // NOP
label_173fc8:
    // 0x173fc8: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x173fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173fcc: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x173FCCu;
    SET_GPR_U32(ctx, 31, 0x173FD4u);
    ctx->pc = 0x173FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173FCCu;
            // 0x173fd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (runtime->hasFunction(0x12FB50u)) {
        auto targetFn = runtime->lookupFunction(0x12FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FD4u; }
        if (ctx->pc != 0x173FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FB50_0x12fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FD4u; }
        if (ctx->pc != 0x173FD4u) { return; }
    }
    ctx->pc = 0x173FD4u;
label_173fd4:
    // 0x173fd4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x173fd4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_173fd8:
    // 0x173fd8: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x173fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x173fdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x173fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173fe0: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x173FE0u;
    {
        const bool branch_taken_0x173fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173fe0) {
            ctx->pc = 0x174118u;
            goto label_174118;
        }
    }
    ctx->pc = 0x173FE8u;
    // 0x173fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173fec: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x173FECu;
    {
        const bool branch_taken_0x173fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173fec) {
            ctx->pc = 0x174110u;
            goto label_174110;
        }
    }
    ctx->pc = 0x173FF4u;
    // 0x173ff4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x173FF4u;
    {
        const bool branch_taken_0x173ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ff4) {
            ctx->pc = 0x174010u;
            goto label_174010;
        }
    }
    ctx->pc = 0x173FFCu;
    // 0x173ffc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x173ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174000: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174000u;
    {
        const bool branch_taken_0x174000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174000) {
            ctx->pc = 0x174010u;
            goto label_174010;
        }
    }
    ctx->pc = 0x174008u;
    // 0x174008: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x174008u;
    {
        const bool branch_taken_0x174008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174008) {
            ctx->pc = 0x174120u;
            goto label_174120;
        }
    }
    ctx->pc = 0x174010u;
label_174010:
    // 0x174010: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x174010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x174014: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x174014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x174018: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x174018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x17401c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x174020: 0x10430035  beq         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x174020u;
    {
        const bool branch_taken_0x174020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174020) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x174028u;
    // 0x174028: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x174028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x17402c: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x17402Cu;
    {
        const bool branch_taken_0x17402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17402c) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x174034u;
    // 0x174034: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x174034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x174038: 0x1043002f  beq         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x174038u;
    {
        const bool branch_taken_0x174038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174038) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x174040u;
    // 0x174040: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x174040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x174044: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x174044u;
    {
        const bool branch_taken_0x174044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174044) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x17404Cu;
    // 0x17404c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x17404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x174050: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x174050u;
    {
        const bool branch_taken_0x174050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174050) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x174058u;
    // 0x174058: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x174058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x17405c: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x17405Cu;
    {
        const bool branch_taken_0x17405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17405c) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x174064u;
    // 0x174064: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x174064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x174068: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x174068u;
    {
        const bool branch_taken_0x174068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174068) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x174070u;
    // 0x174070: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x174070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x174074: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x174074u;
    {
        const bool branch_taken_0x174074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174074) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x17407Cu;
    // 0x17407c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x17407cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x174080: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x174080u;
    {
        const bool branch_taken_0x174080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174080) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x174088u;
    // 0x174088: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x174088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17408c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17408Cu;
    {
        const bool branch_taken_0x17408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17408c) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x174094u;
    // 0x174094: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x174094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x174098: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x174098u;
    {
        const bool branch_taken_0x174098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174098) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x1740A0u;
    // 0x1740a0: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x1740a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1740a4: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1740A4u;
    {
        const bool branch_taken_0x1740a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1740a4) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x1740ACu;
    // 0x1740ac: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1740acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1740b0: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1740B0u;
    {
        const bool branch_taken_0x1740b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1740b0) {
            ctx->pc = 0x1740F8u;
            goto label_1740f8;
        }
    }
    ctx->pc = 0x1740B8u;
    // 0x1740b8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1740b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1740bc: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1740BCu;
    {
        const bool branch_taken_0x1740bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1740bc) {
            ctx->pc = 0x1740F0u;
            goto label_1740f0;
        }
    }
    ctx->pc = 0x1740C4u;
    // 0x1740c4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1740c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1740c8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1740C8u;
    {
        const bool branch_taken_0x1740c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1740c8) {
            ctx->pc = 0x1740F0u;
            goto label_1740f0;
        }
    }
    ctx->pc = 0x1740D0u;
    // 0x1740d0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1740d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1740d4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1740D4u;
    {
        const bool branch_taken_0x1740d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1740d4) {
            ctx->pc = 0x1740F0u;
            goto label_1740f0;
        }
    }
    ctx->pc = 0x1740DCu;
    // 0x1740dc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1740dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1740e0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1740E0u;
    {
        const bool branch_taken_0x1740e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1740e0) {
            ctx->pc = 0x1740F0u;
            goto label_1740f0;
        }
    }
    ctx->pc = 0x1740E8u;
    // 0x1740e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1740E8u;
    {
        const bool branch_taken_0x1740e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1740e8) {
            ctx->pc = 0x174100u;
            goto label_174100;
        }
    }
    ctx->pc = 0x1740F0u;
label_1740f0:
    // 0x1740f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1740F0u;
    {
        const bool branch_taken_0x1740f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740F0u;
            // 0x1740f4: 0x24172000  addiu       $s7, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740f0) {
            ctx->pc = 0x174120u;
            goto label_174120;
        }
    }
    ctx->pc = 0x1740F8u;
label_1740f8:
    // 0x1740f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1740F8u;
    {
        const bool branch_taken_0x1740f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740F8u;
            // 0x1740fc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740f8) {
            ctx->pc = 0x174120u;
            goto label_174120;
        }
    }
    ctx->pc = 0x174100u;
label_174100:
    // 0x174100: 0xc068158  jal         func_1A0560
    ctx->pc = 0x174100u;
    SET_GPR_U32(ctx, 31, 0x174108u);
    ctx->pc = 0x1A0560u;
    if (runtime->hasFunction(0x1A0560u)) {
        auto targetFn = runtime->lookupFunction(0x1A0560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174108u; }
        if (ctx->pc != 0x174108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0560_0x1a0560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174108u; }
        if (ctx->pc != 0x174108u) { return; }
    }
    ctx->pc = 0x174108u;
label_174108:
    // 0x174108: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x174108u;
    {
        const bool branch_taken_0x174108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174108) {
            ctx->pc = 0x174120u;
            goto label_174120;
        }
    }
    ctx->pc = 0x174110u;
label_174110:
    // 0x174110: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174110u;
    {
        const bool branch_taken_0x174110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174110u;
            // 0x174114: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174110) {
            ctx->pc = 0x174120u;
            goto label_174120;
        }
    }
    ctx->pc = 0x174118u;
label_174118:
    // 0x174118: 0x24172000  addiu       $s7, $zero, 0x2000
    ctx->pc = 0x174118u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x17411c: 0x0  nop
    ctx->pc = 0x17411cu;
    // NOP
label_174120:
    // 0x174120: 0xc0635e0  jal         func_18D780
    ctx->pc = 0x174120u;
    SET_GPR_U32(ctx, 31, 0x174128u);
    ctx->pc = 0x174124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174120u;
            // 0x174124: 0x968400ea  lhu         $a0, 0xEA($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D780u;
    if (runtime->hasFunction(0x18D780u)) {
        auto targetFn = runtime->lookupFunction(0x18D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174128u; }
        if (ctx->pc != 0x174128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D780_0x18d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174128u; }
        if (ctx->pc != 0x174128u) { return; }
    }
    ctx->pc = 0x174128u;
label_174128:
    // 0x174128: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x174128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17412c: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x17412cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x174130: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x174130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x174134: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x174134u;
    {
        const bool branch_taken_0x174134 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174134) {
            ctx->pc = 0x174140u;
            goto label_174140;
        }
    }
    ctx->pc = 0x17413Cu;
    // 0x17413c: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x17413cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
label_174140:
    // 0x174140: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x174140u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x174144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x174144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17414c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x17414cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x174150: 0xc0635e0  jal         func_18D780
    ctx->pc = 0x174150u;
    SET_GPR_U32(ctx, 31, 0x174158u);
    ctx->pc = 0x174154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174150u;
            // 0x174154: 0x968400ea  lhu         $a0, 0xEA($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D780u;
    if (runtime->hasFunction(0x18D780u)) {
        auto targetFn = runtime->lookupFunction(0x18D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174158u; }
        if (ctx->pc != 0x174158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D780_0x18d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174158u; }
        if (ctx->pc != 0x174158u) { return; }
    }
    ctx->pc = 0x174158u;
label_174158:
    // 0x174158: 0x51f021  addu        $fp, $v0, $s1
    ctx->pc = 0x174158u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17415c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174160: 0x8c429e00  lw          $v0, -0x6200($v0)
    ctx->pc = 0x174160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942208)));
    // 0x174164: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x174164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x174168: 0x92c2003d  lbu         $v0, 0x3D($s6)
    ctx->pc = 0x174168u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 61)));
    // 0x17416c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17416Cu;
    {
        const bool branch_taken_0x17416c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17416c) {
            ctx->pc = 0x1741C0u;
            goto label_1741c0;
        }
    }
    ctx->pc = 0x174174u;
    // 0x174174: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x174174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174178: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x174178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
    // 0x17417c: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x17417cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
    // 0x174180: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x174180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x174184: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x174184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x174188: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x174188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17418c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17418Cu;
    {
        const bool branch_taken_0x17418c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17418c) {
            ctx->pc = 0x1741C0u;
            goto label_1741c0;
        }
    }
    ctx->pc = 0x174194u;
    // 0x174194: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x174194u;
    SET_GPR_U32(ctx, 31, 0x17419Cu);
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17419Cu; }
        if (ctx->pc != 0x17419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17419Cu; }
        if (ctx->pc != 0x17419Cu) { return; }
    }
    ctx->pc = 0x17419Cu;
label_17419c:
    // 0x17419c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x17419cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1741a0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1741a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1741a4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1741a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1741a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1741a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1741ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1741acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1741b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1741b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1741b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1741b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1741b8: 0x8c42029c  lw          $v0, 0x29C($v0)
    ctx->pc = 0x1741b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x1741bc: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x1741bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_1741c0:
    // 0x1741c0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x1741c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1741c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1741c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1741c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741cc: 0xa2630013  sb          $v1, 0x13($s3)
    ctx->pc = 0x1741ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x1741d0: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1741d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1741d4: 0x33402  srl         $a2, $v1, 16
    ctx->pc = 0x1741d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1741d8: 0xa2620014  sb          $v0, 0x14($s3)
    ctx->pc = 0x1741d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x1741dc: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1741dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1741e0: 0xa2660016  sb          $a2, 0x16($s3)
    ctx->pc = 0x1741e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 6));
    // 0x1741e4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1741e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1741e8: 0xa2630017  sb          $v1, 0x17($s3)
    ctx->pc = 0x1741e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 23), (uint8_t)GPR_U32(ctx, 3));
    // 0x1741ec: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1741ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1741f0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1741f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1741f4: 0x92860298  lbu         $a2, 0x298($s4)
    ctx->pc = 0x1741f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 664)));
    // 0x1741f8: 0x96870292  lhu         $a3, 0x292($s4)
    ctx->pc = 0x1741f8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 658)));
    // 0x1741fc: 0xc04bbf4  jal         func_12EFD0
    ctx->pc = 0x1741FCu;
    SET_GPR_U32(ctx, 31, 0x174204u);
    ctx->pc = 0x174200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1741FCu;
            // 0x174200: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFD0u;
    if (runtime->hasFunction(0x12EFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174204u; }
        if (ctx->pc != 0x174204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFD0_0x12efd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174204u; }
        if (ctx->pc != 0x174204u) { return; }
    }
    ctx->pc = 0x174204u;
label_174204:
    // 0x174204: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x174204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x174208: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x174208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x17420c: 0x9275001d  lbu         $s5, 0x1D($s3)
    ctx->pc = 0x17420cu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 29)));
    // 0x174210: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x174210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x174214: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x174214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x174218: 0x52a20001  beql        $s5, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x174218u;
    {
        const bool branch_taken_0x174218 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x174218) {
            ctx->pc = 0x17421Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174218u;
            // 0x17421c: 0x9275001c  lbu         $s5, 0x1C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174220u;
            goto label_174220;
        }
    }
    ctx->pc = 0x174220u;
label_174220:
    // 0x174220: 0x8e830270  lw          $v1, 0x270($s4)
    ctx->pc = 0x174220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x174224: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x174224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x174228: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x174228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x17422c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17422cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x174230: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x174230u;
    {
        const bool branch_taken_0x174230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174230) {
            ctx->pc = 0x174250u;
            goto label_174250;
        }
    }
    ctx->pc = 0x174238u;
    // 0x174238: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x174238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x17423c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x174240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174240u;
    {
        const bool branch_taken_0x174240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174240) {
            ctx->pc = 0x174250u;
            goto label_174250;
        }
    }
    ctx->pc = 0x174248u;
    // 0x174248: 0xc0581e4  jal         func_160790
    ctx->pc = 0x174248u;
    SET_GPR_U32(ctx, 31, 0x174250u);
    ctx->pc = 0x17424Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174248u;
            // 0x17424c: 0x26640018  addiu       $a0, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160790u;
    if (runtime->hasFunction(0x160790u)) {
        auto targetFn = runtime->lookupFunction(0x160790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174250u; }
        if (ctx->pc != 0x174250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160790_0x160790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174250u; }
        if (ctx->pc != 0x174250u) { return; }
    }
    ctx->pc = 0x174250u;
label_174250:
    // 0x174250: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x174250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x174254: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x174254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x174258: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x174258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17425c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17425Cu;
    {
        const bool branch_taken_0x17425c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17425c) {
            ctx->pc = 0x174270u;
            goto label_174270;
        }
    }
    ctx->pc = 0x174264u;
    // 0x174264: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x174264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x174268: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x174268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x17426c: 0x0  nop
    ctx->pc = 0x17426cu;
    // NOP
label_174270:
    // 0x174270: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x174270u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x174274: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x174274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x174278: 0x92630015  lbu         $v1, 0x15($s3)
    ctx->pc = 0x174278u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
    // 0x17427c: 0x9282008c  lbu         $v0, 0x8C($s4)
    ctx->pc = 0x17427cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x174280: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x174280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x174284: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x174284u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
    // 0x174288: 0x93a401e0  lbu         $a0, 0x1E0($sp)
    ctx->pc = 0x174288u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x17428c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x17428cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x174290: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x174290u;
    {
        const bool branch_taken_0x174290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174290) {
            ctx->pc = 0x1742D8u;
            goto label_1742d8;
        }
    }
    ctx->pc = 0x174298u;
    // 0x174298: 0x8662000c  lh          $v0, 0xC($s3)
    ctx->pc = 0x174298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x17429c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17429cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1742a0: 0x0  nop
    ctx->pc = 0x1742a0u;
    // NOP
    // 0x1742a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1742a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1742a8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1742a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1742ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1742acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1742b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1742b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1742b4: 0x0  nop
    ctx->pc = 0x1742b4u;
    // NOP
    // 0x1742b8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1742b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1742bc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1742bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1742c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1742c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1742c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1742c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1742c8: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1742c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1742cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1742CCu;
    {
        const bool branch_taken_0x1742cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1742D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1742CCu;
            // 0x1742d0: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742cc) {
            ctx->pc = 0x174310u;
            goto label_174310;
        }
    }
    ctx->pc = 0x1742D4u;
    // 0x1742d4: 0x0  nop
    ctx->pc = 0x1742d4u;
    // NOP
label_1742d8:
    // 0x1742d8: 0x8662000c  lh          $v0, 0xC($s3)
    ctx->pc = 0x1742d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1742dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1742dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1742e0: 0x0  nop
    ctx->pc = 0x1742e0u;
    // NOP
    // 0x1742e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1742e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1742e8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1742e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1742ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1742ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1742f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1742f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1742f4: 0x0  nop
    ctx->pc = 0x1742f4u;
    // NOP
    // 0x1742f8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1742f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1742fc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1742fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x174300: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174300u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174308: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x174308u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17430c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x17430cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_174310:
    // 0x174310: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x174310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x174314: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x174314u;
    {
        const bool branch_taken_0x174314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174314) {
            ctx->pc = 0x174358u;
            goto label_174358;
        }
    }
    ctx->pc = 0x17431Cu;
    // 0x17431c: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x17431cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x174320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174324: 0x0  nop
    ctx->pc = 0x174324u;
    // NOP
    // 0x174328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17432c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17432cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x174330: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x174334: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x174334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x174338: 0x0  nop
    ctx->pc = 0x174338u;
    // NOP
    // 0x17433c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17433cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174340: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x174340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x174344: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174344u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174348: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x174348u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17434c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x17434cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174350: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x174350u;
    {
        const bool branch_taken_0x174350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174350u;
            // 0x174354: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174350) {
            ctx->pc = 0x174390u;
            goto label_174390;
        }
    }
    ctx->pc = 0x174358u;
label_174358:
    // 0x174358: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x174358u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x17435c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17435cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174360: 0x0  nop
    ctx->pc = 0x174360u;
    // NOP
    // 0x174364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174368: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x174368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17436c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17436cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x174370: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x174370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x174374: 0x0  nop
    ctx->pc = 0x174374u;
    // NOP
    // 0x174378: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x174378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17437c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x17437cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x174380: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174380u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174388: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x174388u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17438c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x17438cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_174390:
    // 0x174390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174394: 0xa3a201e6  sb          $v0, 0x1E6($sp)
    ctx->pc = 0x174394u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 486), (uint8_t)GPR_U32(ctx, 2));
    // 0x174398: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x174398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17439c: 0xa7a201e2  sh          $v0, 0x1E2($sp)
    ctx->pc = 0x17439cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 482), (uint16_t)GPR_U32(ctx, 2));
    // 0x1743a0: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x1743a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1743a4: 0xa7a201e4  sh          $v0, 0x1E4($sp)
    ctx->pc = 0x1743a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 484), (uint16_t)GPR_U32(ctx, 2));
    // 0x1743a8: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x1743a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x1743ac: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x1743acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1743b0: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x1743B0u;
    SET_GPR_U32(ctx, 31, 0x1743B8u);
    ctx->pc = 0x1743B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1743B0u;
            // 0x1743b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (runtime->hasFunction(0x12FB50u)) {
        auto targetFn = runtime->lookupFunction(0x12FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743B8u; }
        if (ctx->pc != 0x1743B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FB50_0x12fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743B8u; }
        if (ctx->pc != 0x1743B8u) { return; }
    }
    ctx->pc = 0x1743B8u;
label_1743b8:
    // 0x1743b8: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x1743b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x1743bc: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x1743bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x1743c0: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1743c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1743c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1743C4u;
    {
        const bool branch_taken_0x1743c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1743c4) {
            ctx->pc = 0x1743D8u;
            goto label_1743d8;
        }
    }
    ctx->pc = 0x1743CCu;
    // 0x1743cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1743CCu;
    {
        const bool branch_taken_0x1743cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1743D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1743CCu;
            // 0x1743d0: 0xa3a001e6  sb          $zero, 0x1E6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 486), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743cc) {
            ctx->pc = 0x174460u;
            goto label_174460;
        }
    }
    ctx->pc = 0x1743D4u;
    // 0x1743d4: 0x0  nop
    ctx->pc = 0x1743d4u;
    // NOP
label_1743d8:
    // 0x1743d8: 0x8e82048c  lw          $v0, 0x48C($s4)
    ctx->pc = 0x1743d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1164)));
    // 0x1743dc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1743dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1743e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1743E0u;
    {
        const bool branch_taken_0x1743e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743e0) {
            ctx->pc = 0x1743F0u;
            goto label_1743f0;
        }
    }
    ctx->pc = 0x1743E8u;
    // 0x1743e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1743E8u;
    {
        const bool branch_taken_0x1743e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1743ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1743E8u;
            // 0x1743ec: 0xa3a001e6  sb          $zero, 0x1E6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 486), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743e8) {
            ctx->pc = 0x174460u;
            goto label_174460;
        }
    }
    ctx->pc = 0x1743F0u;
label_1743f0:
    // 0x1743f0: 0x928204f0  lbu         $v0, 0x4F0($s4)
    ctx->pc = 0x1743f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1264)));
    // 0x1743f4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1743f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1743f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1743F8u;
    {
        const bool branch_taken_0x1743f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743f8) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x174400u;
    // 0x174400: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x174400u;
    {
        const bool branch_taken_0x174400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174400u;
            // 0x174404: 0xa3a001e6  sb          $zero, 0x1E6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 486), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174400) {
            ctx->pc = 0x174460u;
            goto label_174460;
        }
    }
    ctx->pc = 0x174408u;
label_174408:
    // 0x174408: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174408u;
    {
        const bool branch_taken_0x174408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x174408) {
            ctx->pc = 0x174418u;
            goto label_174418;
        }
    }
    ctx->pc = 0x174410u;
    // 0x174410: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x174410u;
    {
        const bool branch_taken_0x174410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174410u;
            // 0x174414: 0xa3a001e6  sb          $zero, 0x1E6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 486), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174410) {
            ctx->pc = 0x174460u;
            goto label_174460;
        }
    }
    ctx->pc = 0x174418u;
label_174418:
    // 0x174418: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x174418u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x17441c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17441Cu;
    {
        const bool branch_taken_0x17441c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17441c) {
            ctx->pc = 0x174430u;
            goto label_174430;
        }
    }
    ctx->pc = 0x174424u;
    // 0x174424: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x174424u;
    {
        const bool branch_taken_0x174424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174424u;
            // 0x174428: 0xa3a001e6  sb          $zero, 0x1E6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 486), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174424) {
            ctx->pc = 0x174460u;
            goto label_174460;
        }
    }
    ctx->pc = 0x17442Cu;
    // 0x17442c: 0x0  nop
    ctx->pc = 0x17442cu;
    // NOP
label_174430:
    // 0x174430: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x174430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x174434: 0x240202a0  addiu       $v0, $zero, 0x2A0
    ctx->pc = 0x174434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x174438: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174438u;
    {
        const bool branch_taken_0x174438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174438) {
            ctx->pc = 0x174448u;
            goto label_174448;
        }
    }
    ctx->pc = 0x174440u;
    // 0x174440: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x174440u;
    {
        const bool branch_taken_0x174440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174440u;
            // 0x174444: 0xa3a001e6  sb          $zero, 0x1E6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 486), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174440) {
            ctx->pc = 0x174460u;
            goto label_174460;
        }
    }
    ctx->pc = 0x174448u;
label_174448:
    // 0x174448: 0x8e820498  lw          $v0, 0x498($s4)
    ctx->pc = 0x174448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
    // 0x17444c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x17444cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x174450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174450u;
    {
        const bool branch_taken_0x174450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174450) {
            ctx->pc = 0x174460u;
            goto label_174460;
        }
    }
    ctx->pc = 0x174458u;
    // 0x174458: 0xa3a001e6  sb          $zero, 0x1E6($sp)
    ctx->pc = 0x174458u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 486), (uint8_t)GPR_U32(ctx, 0));
    // 0x17445c: 0x0  nop
    ctx->pc = 0x17445cu;
    // NOP
label_174460:
    // 0x174460: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x174460u;
    SET_GPR_U32(ctx, 31, 0x174468u);
    ctx->pc = 0x174464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174460u;
            // 0x174464: 0x968400ea  lhu         $a0, 0xEA($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174468u; }
        if (ctx->pc != 0x174468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174468u; }
        if (ctx->pc != 0x174468u) { return; }
    }
    ctx->pc = 0x174468u;
label_174468:
    // 0x174468: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x174468u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17446c: 0x93a901e0  lbu         $t1, 0x1E0($sp)
    ctx->pc = 0x17446cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x174470: 0x31220002  andi        $v0, $t1, 0x2
    ctx->pc = 0x174470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x174474: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x174474u;
    {
        const bool branch_taken_0x174474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174474) {
            ctx->pc = 0x1744C8u;
            goto label_1744c8;
        }
    }
    ctx->pc = 0x17447Cu;
    // 0x17447c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x17447cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x174480: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x174480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x174484: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x174484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x174488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17448c: 0x0  nop
    ctx->pc = 0x17448cu;
    // NOP
    // 0x174490: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x174490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x174494: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x174494u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174498: 0x0  nop
    ctx->pc = 0x174498u;
    // NOP
    // 0x17449c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17449cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1744a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1744a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1744a4: 0x0  nop
    ctx->pc = 0x1744a4u;
    // NOP
    // 0x1744a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1744a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1744ac: 0x4602a81d  msub.s      $f0, $f21, $f2
    ctx->pc = 0x1744acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[2]));
    // 0x1744b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1744b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1744b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1744b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1744b8: 0x0  nop
    ctx->pc = 0x1744b8u;
    // NOP
    // 0x1744bc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1744bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1744c0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1744c0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1744c4: 0x0  nop
    ctx->pc = 0x1744c4u;
    // NOP
label_1744c8:
    // 0x1744c8: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x1744c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x1744cc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1744CCu;
    {
        const bool branch_taken_0x1744cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1744cc) {
            ctx->pc = 0x174520u;
            goto label_174520;
        }
    }
    ctx->pc = 0x1744D4u;
    // 0x1744d4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1744d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1744d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1744d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1744dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1744e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1744e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1744e4: 0x0  nop
    ctx->pc = 0x1744e4u;
    // NOP
    // 0x1744e8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1744e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1744ec: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1744ecu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1744f0: 0x0  nop
    ctx->pc = 0x1744f0u;
    // NOP
    // 0x1744f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1744f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1744f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1744f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1744fc: 0x0  nop
    ctx->pc = 0x1744fcu;
    // NOP
    // 0x174500: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x174500u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x174504: 0x4602a01d  msub.s      $f0, $f20, $f2
    ctx->pc = 0x174504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
    // 0x174508: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17450c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17450cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x174510: 0x0  nop
    ctx->pc = 0x174510u;
    // NOP
    // 0x174514: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x174514u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174518: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x174518u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x17451c: 0x0  nop
    ctx->pc = 0x17451cu;
    // NOP
label_174520:
    // 0x174520: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x174520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x174524: 0x27c30004  addiu       $v1, $fp, 0x4
    ctx->pc = 0x174524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x174528: 0x8faa013c  lw          $t2, 0x13C($sp)
    ctx->pc = 0x174528u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x17452c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17452cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x174530: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x174530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x174534: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x174534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x174538: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x174538u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x17453c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x17453cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x174540: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x174540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x174544: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174548: 0x8445db30  lh          $a1, -0x24D0($v0)
    ctx->pc = 0x174548u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x17454c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174550: 0x2253023  subu        $a2, $s1, $a1
    ctx->pc = 0x174550u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x174554: 0x8444db2c  lh          $a0, -0x24D4($v0)
    ctx->pc = 0x174554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x174558: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x174558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x17455c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x17455cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x174560: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x174560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x174564: 0x2442823  subu        $a1, $s2, $a0
    ctx->pc = 0x174564u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x174568: 0xffb70010  sd          $s7, 0x10($sp)
    ctx->pc = 0x174568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 23));
    // 0x17456c: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x17456cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x174570: 0x92c2003d  lbu         $v0, 0x3D($s6)
    ctx->pc = 0x174570u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 61)));
    // 0x174574: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x174574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x174578: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174578u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17457c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x17457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x174580: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x174580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x174584: 0xffb50020  sd          $s5, 0x20($sp)
    ctx->pc = 0x174584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 21));
    // 0x174588: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x174588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x17458c: 0x92660014  lbu         $a2, 0x14($s3)
    ctx->pc = 0x17458cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x174590: 0xc0c7144  jal         func_31C510
    ctx->pc = 0x174590u;
    SET_GPR_U32(ctx, 31, 0x174598u);
    ctx->pc = 0x174594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174590u;
            // 0x174594: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31C510u;
    if (runtime->hasFunction(0x31C510u)) {
        auto targetFn = runtime->lookupFunction(0x31C510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174598u; }
        if (ctx->pc != 0x174598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031C510_0x31c510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174598u; }
        if (ctx->pc != 0x174598u) { return; }
    }
    ctx->pc = 0x174598u;
label_174598:
    // 0x174598: 0x26730028  addiu       $s3, $s3, 0x28
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x17459c: 0x0  nop
    ctx->pc = 0x17459cu;
    // NOP
label_1745a0:
    // 0x1745a0: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1745a0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x1745a4: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x1745a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1745a8: 0x5460fe49  bnel        $v1, $zero, . + 4 + (-0x1B7 << 2)
    ctx->pc = 0x1745A8u;
    {
        const bool branch_taken_0x1745a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1745a8) {
            ctx->pc = 0x1745ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1745A8u;
            // 0x1745ac: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_173ed0;
        }
    }
    ctx->pc = 0x1745B0u;
label_1745b0:
    // 0x1745b0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1745b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1745b4: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x1745b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1745b8: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x1745b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1745bc: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1745bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1745c0: 0xc7b50034  lwc1        $f21, 0x34($sp)
    ctx->pc = 0x1745c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1745c4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1745c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1745c8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1745c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1745cc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1745ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1745d0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1745d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1745d4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1745d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1745d8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1745d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1745dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1745dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1745e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1745e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1745e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1745E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1745E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1745E4u;
            // 0x1745e8: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1745ECu;
    // 0x1745ec: 0x0  nop
    ctx->pc = 0x1745ecu;
    // NOP
    ctx->pc = 0x1745f0u;
}
