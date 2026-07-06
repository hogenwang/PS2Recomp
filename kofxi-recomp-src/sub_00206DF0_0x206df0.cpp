#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206DF0
// Address: 0x206df0 - 0x2076c0
void sub_00206DF0_0x206df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206DF0_0x206df0");
#endif

    switch (ctx->pc) {
        case 0x207088u: goto label_207088;
        case 0x2070a4u: goto label_2070a4;
        case 0x2070d0u: goto label_2070d0;
        case 0x207144u: goto label_207144;
        case 0x20715cu: goto label_20715c;
        case 0x207174u: goto label_207174;
        case 0x20718cu: goto label_20718c;
        case 0x2071a4u: goto label_2071a4;
        case 0x2071bcu: goto label_2071bc;
        case 0x2071d4u: goto label_2071d4;
        case 0x2071e0u: goto label_2071e0;
        case 0x207210u: goto label_207210;
        case 0x207298u: goto label_207298;
        case 0x2072c4u: goto label_2072c4;
        case 0x207354u: goto label_207354;
        case 0x2073c0u: goto label_2073c0;
        case 0x20746cu: goto label_20746c;
        case 0x2074d8u: goto label_2074d8;
        case 0x207588u: goto label_207588;
        case 0x207594u: goto label_207594;
        case 0x2075b8u: goto label_2075b8;
        case 0x2075f0u: goto label_2075f0;
        case 0x207660u: goto label_207660;
        default: break;
    }

    ctx->pc = 0x206df0u;

    // 0x206df0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x206df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x206df4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x206df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x206df8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x206df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x206dfc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x206dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x206e00: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x206e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x206e04: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x206e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x206e08: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x206e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x206e0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x206e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x206e10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x206e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x206e14: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x206e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x206e18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x206e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x206e1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x206e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x206e20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x206e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x206e24: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x206e24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x206e28: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x206e28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x206e2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x206e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x206e30: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x206e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x206e34: 0xc4960090  lwc1        $f22, 0x90($a0)
    ctx->pc = 0x206e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x206e38: 0xc4950094  lwc1        $f21, 0x94($a0)
    ctx->pc = 0x206e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x206e3c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x206e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x206e40: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x206e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x206e44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206E44u;
    {
        const bool branch_taken_0x206e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E44u;
        // 0x206e48: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e44) {
            ctx->pc = 0x206E54u;
            goto label_206e54;
        }
    }
    ctx->pc = 0x206E4Cu;
    // 0x206e4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x206e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x206e50: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x206e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_206e54:
    // 0x206e54: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x206e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x206e58: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x206e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x206e5c: 0x9042e820  lbu         $v0, -0x17E0($v0)
    ctx->pc = 0x206e5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x206e60: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x206E60u;
    {
        const bool branch_taken_0x206e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x206e60) {
            ctx->pc = 0x206E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206E60u;
            // 0x206e64: 0x86910000  lh          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206E7Cu;
            goto label_206e7c;
        }
    }
    ctx->pc = 0x206E68u;
    // 0x206e68: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x206e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x206e6c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x206e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x206e70: 0x84509be4  lh          $s0, -0x641C($v0)
    ctx->pc = 0x206e70u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294941668)));
    // 0x206e74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x206E74u;
    {
        const bool branch_taken_0x206e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E74u;
        // 0x206e78: 0x84719be0  lh          $s1, -0x6420($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294941664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e74) {
            ctx->pc = 0x206E80u;
            goto label_206e80;
        }
    }
    ctx->pc = 0x206E7Cu;
label_206e7c:
    // 0x206e7c: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x206e7cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_206e80:
    // 0x206e80: 0x92820030  lbu         $v0, 0x30($s4)
    ctx->pc = 0x206e80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x206e84: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x206e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x206e88: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x206E88u;
    {
        const bool branch_taken_0x206e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206e88) {
            ctx->pc = 0x206E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206E88u;
            // 0x206e8c: 0x92820031  lbu         $v0, 0x31($s4) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F0Cu;
            goto label_206f0c;
        }
    }
    ctx->pc = 0x206E90u;
    // 0x206e90: 0x9282008c  lbu         $v0, 0x8C($s4)
    ctx->pc = 0x206e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x206e94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x206e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x206e98: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x206E98u;
    {
        const bool branch_taken_0x206e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206e98) {
            ctx->pc = 0x206E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206E98u;
            // 0x206e9c: 0xc6820040  lwc1        $f2, 0x40($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x206ED8u;
            goto label_206ed8;
        }
    }
    ctx->pc = 0x206EA0u;
    // 0x206ea0: 0xc6820040  lwc1        $f2, 0x40($s4)
    ctx->pc = 0x206ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206ea4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x206ea4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206ea8: 0x0  nop
    ctx->pc = 0x206ea8u;
    // NOP
    // 0x206eac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x206eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206eb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x206eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x206eb8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206eb8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206ebc: 0x4616101c  madd.s      $f0, $f2, $f22
    ctx->pc = 0x206ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[22]));
    // 0x206ec0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206ec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x206ec4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x206ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206ec8: 0x0  nop
    ctx->pc = 0x206ec8u;
    // NOP
    // 0x206ecc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x206eccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x206ed0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206ED0u;
    {
        const bool branch_taken_0x206ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206ED0u;
        // 0x206ed4: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ed0) {
            ctx->pc = 0x206F08u;
            goto label_206f08;
        }
    }
    ctx->pc = 0x206ED8u;
label_206ed8:
    // 0x206ed8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x206ed8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206edc: 0x0  nop
    ctx->pc = 0x206edcu;
    // NOP
    // 0x206ee0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x206ee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206ee8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x206ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x206eec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206eecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206ef0: 0x4616101d  msub.s      $f0, $f2, $f22
    ctx->pc = 0x206ef0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[22]));
    // 0x206ef4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206ef4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x206ef8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x206ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206efc: 0x0  nop
    ctx->pc = 0x206efcu;
    // NOP
    // 0x206f00: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x206f00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x206f04: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x206f04u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_206f08:
    // 0x206f08: 0x92820031  lbu         $v0, 0x31($s4)
    ctx->pc = 0x206f08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
label_206f0c:
    // 0x206f0c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x206f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x206f10: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x206F10u;
    {
        const bool branch_taken_0x206f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f10) {
            ctx->pc = 0x206F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F10u;
            // 0x206f14: 0x9283008c  lbu         $v1, 0x8C($s4) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F94u;
            goto label_206f94;
        }
    }
    ctx->pc = 0x206F18u;
    // 0x206f18: 0x9282008c  lbu         $v0, 0x8C($s4)
    ctx->pc = 0x206f18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x206f1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x206f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x206f20: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x206F20u;
    {
        const bool branch_taken_0x206f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f20) {
            ctx->pc = 0x206F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F20u;
            // 0x206f24: 0xc6820044  lwc1        $f2, 0x44($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F60u;
            goto label_206f60;
        }
    }
    ctx->pc = 0x206F28u;
    // 0x206f28: 0xc6820044  lwc1        $f2, 0x44($s4)
    ctx->pc = 0x206f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206f2c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x206f2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206f30: 0x0  nop
    ctx->pc = 0x206f30u;
    // NOP
    // 0x206f34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x206f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206f3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x206f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x206f40: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206f40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206f44: 0x4615101c  madd.s      $f0, $f2, $f21
    ctx->pc = 0x206f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x206f48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206f48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x206f4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x206f4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206f50: 0x0  nop
    ctx->pc = 0x206f50u;
    // NOP
    // 0x206f54: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x206f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x206f58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206F58u;
    {
        const bool branch_taken_0x206f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F58u;
        // 0x206f5c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f58) {
            ctx->pc = 0x206F90u;
            goto label_206f90;
        }
    }
    ctx->pc = 0x206F60u;
label_206f60:
    // 0x206f60: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x206f60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206f64: 0x0  nop
    ctx->pc = 0x206f64u;
    // NOP
    // 0x206f68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x206f6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206f70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x206f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x206f74: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206f74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206f78: 0x4615101d  msub.s      $f0, $f2, $f21
    ctx->pc = 0x206f78u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x206f7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206f7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x206f80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x206f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206f84: 0x0  nop
    ctx->pc = 0x206f84u;
    // NOP
    // 0x206f88: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x206f88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x206f8c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x206f8cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_206f90:
    // 0x206f90: 0x9283008c  lbu         $v1, 0x8C($s4)
    ctx->pc = 0x206f90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_206f94:
    // 0x206f94: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x206f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x206f98: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x206F98u;
    {
        const bool branch_taken_0x206f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f98) {
            ctx->pc = 0x206F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F98u;
            // 0x206f9c: 0xc6820600  lwc1        $f2, 0x600($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x206FD8u;
            goto label_206fd8;
        }
    }
    ctx->pc = 0x206FA0u;
    // 0x206fa0: 0xc6820600  lwc1        $f2, 0x600($s4)
    ctx->pc = 0x206fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206fa4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x206fa4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206fa8: 0x0  nop
    ctx->pc = 0x206fa8u;
    // NOP
    // 0x206fac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x206fb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206fb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x206fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x206fb8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206fb8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206fbc: 0x4616101c  madd.s      $f0, $f2, $f22
    ctx->pc = 0x206fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[22]));
    // 0x206fc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206fc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x206fc4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x206fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206fc8: 0x0  nop
    ctx->pc = 0x206fc8u;
    // NOP
    // 0x206fcc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x206fccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x206fd0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206FD0u;
    {
        const bool branch_taken_0x206fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FD0u;
        // 0x206fd4: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fd0) {
            ctx->pc = 0x207008u;
            goto label_207008;
        }
    }
    ctx->pc = 0x206FD8u;
label_206fd8:
    // 0x206fd8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x206fd8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206fdc: 0x0  nop
    ctx->pc = 0x206fdcu;
    // NOP
    // 0x206fe0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x206fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206fe8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x206fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x206fec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206fecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206ff0: 0x4616101d  msub.s      $f0, $f2, $f22
    ctx->pc = 0x206ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[22]));
    // 0x206ff4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206ff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x206ff8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x206ff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206ffc: 0x0  nop
    ctx->pc = 0x206ffcu;
    // NOP
    // 0x207000: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x207000u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207004: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x207004u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_207008:
    // 0x207008: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x207008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20700c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20700Cu;
    {
        const bool branch_taken_0x20700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20700c) {
            ctx->pc = 0x207010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20700Cu;
            // 0x207010: 0xc6820604  lwc1        $f2, 0x604($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20704Cu;
            goto label_20704c;
        }
    }
    ctx->pc = 0x207014u;
    // 0x207014: 0xc6820604  lwc1        $f2, 0x604($s4)
    ctx->pc = 0x207014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207018: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x207018u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20701c: 0x0  nop
    ctx->pc = 0x20701cu;
    // NOP
    // 0x207020: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x207020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x207024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207028: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x207028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20702c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20702cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x207030: 0x4615101c  madd.s      $f0, $f2, $f21
    ctx->pc = 0x207030u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x207034: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x207034u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x207038: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x207038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20703c: 0x0  nop
    ctx->pc = 0x20703cu;
    // NOP
    // 0x207040: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x207040u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207044: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x207044u;
    {
        const bool branch_taken_0x207044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207044u;
        // 0x207048: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207044) {
            ctx->pc = 0x20707Cu;
            goto label_20707c;
        }
    }
    ctx->pc = 0x20704Cu;
label_20704c:
    // 0x20704c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x20704cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207050: 0x0  nop
    ctx->pc = 0x207050u;
    // NOP
    // 0x207054: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x207054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x207058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20705c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20705cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x207060: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x207060u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x207064: 0x4615101d  msub.s      $f0, $f2, $f21
    ctx->pc = 0x207064u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x207068: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x207068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20706c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20706cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x207070: 0x0  nop
    ctx->pc = 0x207070u;
    // NOP
    // 0x207074: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x207074u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207078: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x207078u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_20707c:
    // 0x20707c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20707cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207080: 0xc04bbbc  jal         func_12EEF0
    ctx->pc = 0x207080u;
    SET_GPR_U32(ctx, 31, 0x207088u);
    ctx->pc = 0x207084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207080u;
    // 0x207084: 0x2693029c  addiu       $s3, $s4, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EEF0u, 0x207080u, 0x207088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207088u;
label_207088:
    // 0x207088: 0x8e830270  lw          $v1, 0x270($s4)
    ctx->pc = 0x207088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x20708c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x20708cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x207090: 0x14600179  bnez        $v1, . + 4 + (0x179 << 2)
    ctx->pc = 0x207090u;
    {
        const bool branch_taken_0x207090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x207090) {
            ctx->pc = 0x207678u;
            goto label_207678;
        }
    }
    ctx->pc = 0x207098u;
    // 0x207098: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x207098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20709c: 0xc067cb0  jal         func_19F2C0
    ctx->pc = 0x20709Cu;
    SET_GPR_U32(ctx, 31, 0x2070A4u);
    ctx->pc = 0x2070A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20709Cu;
    // 0x2070a0: 0x34448000  ori         $a0, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F2C0u, 0x20709Cu, 0x2070A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070A4u;
label_2070a4:
    // 0x2070a4: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2070a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2070a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2070a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2070acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2070b0: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x2070b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x2070b4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x2070b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2070b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2070b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2070bc: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x2070bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x2070c0: 0x9283029a  lbu         $v1, 0x29A($s4)
    ctx->pc = 0x2070c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 666)));
    // 0x2070c4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x2070c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x2070c8: 0xa283029a  sb          $v1, 0x29A($s4)
    ctx->pc = 0x2070c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 666), (uint8_t)GPR_U32(ctx, 3));
    // 0x2070cc: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x2070ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_2070d0:
    // 0x2070d0: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2070d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2070d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2070d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2070d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2070D8u;
    {
        const bool branch_taken_0x2070d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2070d8) {
            ctx->pc = 0x2070E8u;
            goto label_2070e8;
        }
    }
    ctx->pc = 0x2070E0u;
    // 0x2070e0: 0x16c00161  bnez        $s6, . + 4 + (0x161 << 2)
    ctx->pc = 0x2070E0u;
    {
        const bool branch_taken_0x2070e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2070e0) {
            ctx->pc = 0x207668u;
            goto label_207668;
        }
    }
    ctx->pc = 0x2070E8u;
label_2070e8:
    // 0x2070e8: 0x92630011  lbu         $v1, 0x11($s3)
    ctx->pc = 0x2070e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x2070ec: 0x1060015c  beqz        $v1, . + 4 + (0x15C << 2)
    ctx->pc = 0x2070ECu;
    {
        const bool branch_taken_0x2070ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2070ec) {
            ctx->pc = 0x207660u;
            goto label_207660;
        }
    }
    ctx->pc = 0x2070F4u;
    // 0x2070f4: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x2070f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2070f8: 0x10600159  beqz        $v1, . + 4 + (0x159 << 2)
    ctx->pc = 0x2070F8u;
    {
        const bool branch_taken_0x2070f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2070f8) {
            ctx->pc = 0x207660u;
            goto label_207660;
        }
    }
    ctx->pc = 0x207100u;
    // 0x207100: 0x92620012  lbu         $v0, 0x12($s3)
    ctx->pc = 0x207100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x207104: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x207104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x207108: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x207108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x20710c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x20710cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x207110: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x207110u;
    {
        const bool branch_taken_0x207110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x207110) {
            ctx->pc = 0x2071D8u;
            goto label_2071d8;
        }
    }
    ctx->pc = 0x207118u;
    // 0x207118: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x207118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x20711c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20711cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207120: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x207120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x207124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207128: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x207128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20712c: 0x400008  jr          $v0
    ctx->pc = 0x20712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207138u: goto label_207138;
            case 0x207150u: goto label_207150;
            case 0x207168u: goto label_207168;
            case 0x207180u: goto label_207180;
            case 0x207198u: goto label_207198;
            case 0x2071B0u: goto label_2071b0;
            case 0x2071C8u: goto label_2071c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20712Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x207134u;
    // 0x207134: 0x0  nop
    ctx->pc = 0x207134u;
    // NOP
label_207138:
    // 0x207138: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x207138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20713c: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x20713Cu;
    SET_GPR_U32(ctx, 31, 0x207144u);
    ctx->pc = 0x207140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20713Cu;
    // 0x207140: 0x92850008  lbu         $a1, 0x8($s4) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB50u, 0x20713Cu, 0x207144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207144u;
label_207144:
    // 0x207144: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x207144u;
    {
        const bool branch_taken_0x207144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207144u;
        // 0x207148: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207144) {
            ctx->pc = 0x2071D8u;
            goto label_2071d8;
        }
    }
    ctx->pc = 0x20714Cu;
    // 0x20714c: 0x0  nop
    ctx->pc = 0x20714cu;
    // NOP
label_207150:
    // 0x207150: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x207150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207154: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x207154u;
    SET_GPR_U32(ctx, 31, 0x20715Cu);
    ctx->pc = 0x207158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207154u;
    // 0x207158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB50u, 0x207154u, 0x20715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20715Cu;
label_20715c:
    // 0x20715c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20715Cu;
    {
        const bool branch_taken_0x20715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20715c) {
            ctx->pc = 0x2071D8u;
            goto label_2071d8;
        }
    }
    ctx->pc = 0x207164u;
    // 0x207164: 0x0  nop
    ctx->pc = 0x207164u;
    // NOP
label_207168:
    // 0x207168: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x207168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20716c: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x20716Cu;
    SET_GPR_U32(ctx, 31, 0x207174u);
    ctx->pc = 0x207170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20716Cu;
    // 0x207170: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB50u, 0x20716Cu, 0x207174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207174u;
label_207174:
    // 0x207174: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x207174u;
    {
        const bool branch_taken_0x207174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207174) {
            ctx->pc = 0x2071D8u;
            goto label_2071d8;
        }
    }
    ctx->pc = 0x20717Cu;
    // 0x20717c: 0x0  nop
    ctx->pc = 0x20717cu;
    // NOP
label_207180:
    // 0x207180: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x207180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207184: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x207184u;
    SET_GPR_U32(ctx, 31, 0x20718Cu);
    ctx->pc = 0x207188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207184u;
    // 0x207188: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB50u, 0x207184u, 0x20718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20718Cu;
label_20718c:
    // 0x20718c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20718Cu;
    {
        const bool branch_taken_0x20718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20718c) {
            ctx->pc = 0x2071D8u;
            goto label_2071d8;
        }
    }
    ctx->pc = 0x207194u;
    // 0x207194: 0x0  nop
    ctx->pc = 0x207194u;
    // NOP
label_207198:
    // 0x207198: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x207198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20719c: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x20719Cu;
    SET_GPR_U32(ctx, 31, 0x2071A4u);
    ctx->pc = 0x2071A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20719Cu;
    // 0x2071a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB50u, 0x20719Cu, 0x2071A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071A4u;
label_2071a4:
    // 0x2071a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2071A4u;
    {
        const bool branch_taken_0x2071a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071a4) {
            ctx->pc = 0x2071D8u;
            goto label_2071d8;
        }
    }
    ctx->pc = 0x2071ACu;
    // 0x2071ac: 0x0  nop
    ctx->pc = 0x2071acu;
    // NOP
label_2071b0:
    // 0x2071b0: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x2071b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2071b4: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x2071B4u;
    SET_GPR_U32(ctx, 31, 0x2071BCu);
    ctx->pc = 0x2071B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071B4u;
    // 0x2071b8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB50u, 0x2071B4u, 0x2071BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071BCu;
label_2071bc:
    // 0x2071bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2071BCu;
    {
        const bool branch_taken_0x2071bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071bc) {
            ctx->pc = 0x2071D8u;
            goto label_2071d8;
        }
    }
    ctx->pc = 0x2071C4u;
    // 0x2071c4: 0x0  nop
    ctx->pc = 0x2071c4u;
    // NOP
label_2071c8:
    // 0x2071c8: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x2071c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2071cc: 0xc04bed4  jal         func_12FB50
    ctx->pc = 0x2071CCu;
    SET_GPR_U32(ctx, 31, 0x2071D4u);
    ctx->pc = 0x2071D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071CCu;
    // 0x2071d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB50u, 0x2071CCu, 0x2071D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071D4u;
label_2071d4:
    // 0x2071d4: 0x0  nop
    ctx->pc = 0x2071d4u;
    // NOP
label_2071d8:
    // 0x2071d8: 0xc0635e0  jal         func_18D780
    ctx->pc = 0x2071D8u;
    SET_GPR_U32(ctx, 31, 0x2071E0u);
    ctx->pc = 0x2071DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071D8u;
    // 0x2071dc: 0x968400ea  lhu         $a0, 0xEA($s4) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D780u, 0x2071D8u, 0x2071E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071E0u;
label_2071e0:
    // 0x2071e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2071e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2071e4: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x2071e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2071e8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2071e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2071ec: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2071ECu;
    {
        const bool branch_taken_0x2071ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2071ec) {
            ctx->pc = 0x2071F8u;
            goto label_2071f8;
        }
    }
    ctx->pc = 0x2071F4u;
    // 0x2071f4: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x2071f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
label_2071f8:
    // 0x2071f8: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x2071f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2071fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2071fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x207200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207204: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x207204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x207208: 0xc0635e0  jal         func_18D780
    ctx->pc = 0x207208u;
    SET_GPR_U32(ctx, 31, 0x207210u);
    ctx->pc = 0x20720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207208u;
    // 0x20720c: 0x968400ea  lhu         $a0, 0xEA($s4) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D780u, 0x207208u, 0x207210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207210u;
label_207210:
    // 0x207210: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x207210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x207214: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x207214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x207218: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x207218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20721c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20721cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x207220: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x207220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x207224: 0xa2660013  sb          $a2, 0x13($s3)
    ctx->pc = 0x207224u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 19), (uint8_t)GPR_U32(ctx, 6));
    // 0x207228: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x207228u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x20722c: 0xa2620014  sb          $v0, 0x14($s3)
    ctx->pc = 0x20722cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x207230: 0x62c02  srl         $a1, $a2, 16
    ctx->pc = 0x207230u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x207234: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x207234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x207238: 0xa2650016  sb          $a1, 0x16($s3)
    ctx->pc = 0x207238u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 5));
    // 0x20723c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x20723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x207240: 0x61602  srl         $v0, $a2, 24
    ctx->pc = 0x207240u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x207244: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x207244u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207248: 0xa2620017  sb          $v0, 0x17($s3)
    ctx->pc = 0x207248u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x20724c: 0x9062e820  lbu         $v0, -0x17E0($v1)
    ctx->pc = 0x20724cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x207250: 0x14440013  bne         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x207250u;
    {
        const bool branch_taken_0x207250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x207250) {
            ctx->pc = 0x2072A0u;
            goto label_2072a0;
        }
    }
    ctx->pc = 0x207258u;
    // 0x207258: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20725c: 0x968500ea  lhu         $a1, 0xEA($s4)
    ctx->pc = 0x20725cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x207260: 0x8c479bf8  lw          $a3, -0x6408($v0)
    ctx->pc = 0x207260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x207264: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x207264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x207268: 0x92630013  lbu         $v1, 0x13($s3)
    ctx->pc = 0x207268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x20726c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x20726cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x207270: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x207270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x207274: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207278: 0x8c429bf0  lw          $v0, -0x6410($v0)
    ctx->pc = 0x207278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941680)));
    // 0x20727c: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x20727cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x207280: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x207280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x207284: 0x24e4006e  addiu       $a0, $a3, 0x6E
    ctx->pc = 0x207284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 110));
    // 0x207288: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x207288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20728c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x207290: 0xc049c48  jal         func_127120
    ctx->pc = 0x207290u;
    SET_GPR_U32(ctx, 31, 0x207298u);
    ctx->pc = 0x207294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207290u;
    // 0x207294: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x207290u, 0x207298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207298u;
label_207298:
    // 0x207298: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x207298u;
    {
        const bool branch_taken_0x207298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207298) {
            ctx->pc = 0x207358u;
            goto label_207358;
        }
    }
    ctx->pc = 0x2072A0u;
label_2072a0:
    // 0x2072a0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2072a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2072a4: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x2072a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2072a8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2072a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2072ac: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2072ACu;
    {
        const bool branch_taken_0x2072ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2072ac) {
            ctx->pc = 0x207308u;
            goto label_207308;
        }
    }
    ctx->pc = 0x2072B4u;
    // 0x2072b4: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x2072b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x2072b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2072b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2072bc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2072BCu;
    SET_GPR_U32(ctx, 31, 0x2072C4u);
    ctx->pc = 0x2072C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072BCu;
    // 0x2072c0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2072BCu, 0x2072C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072C4u;
label_2072c4:
    // 0x2072c4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2072c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2072c8: 0x92640013  lbu         $a0, 0x13($s3)
    ctx->pc = 0x2072c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x2072cc: 0x8c459bf8  lw          $a1, -0x6408($v0)
    ctx->pc = 0x2072ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2072d0: 0x90a30065  lbu         $v1, 0x65($a1)
    ctx->pc = 0x2072d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 101)));
    // 0x2072d4: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x2072d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x2072d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2072d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2072dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2072dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2072e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2072e4: 0x90420524  lbu         $v0, 0x524($v0)
    ctx->pc = 0x2072e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1316)));
    // 0x2072e8: 0x1482001b  bne         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2072E8u;
    {
        const bool branch_taken_0x2072e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2072e8) {
            ctx->pc = 0x207358u;
            goto label_207358;
        }
    }
    ctx->pc = 0x2072F0u;
    // 0x2072f0: 0x90a20064  lbu         $v0, 0x64($a1)
    ctx->pc = 0x2072f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x2072f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2072f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2072f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2072fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x207300: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x207300u;
    {
        const bool branch_taken_0x207300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207300u;
        // 0x207304: 0xa4430070  sh          $v1, 0x70($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 112), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207300) {
            ctx->pc = 0x207358u;
            goto label_207358;
        }
    }
    ctx->pc = 0x207308u;
label_207308:
    // 0x207308: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x207308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20730c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x20730cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x207310: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x207310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x207314: 0x246398a0  addiu       $v1, $v1, -0x6760
    ctx->pc = 0x207314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940832));
    // 0x207318: 0x92660013  lbu         $a2, 0x13($s3)
    ctx->pc = 0x207318u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x20731c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x207320: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x207320u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207324: 0x24200  sll         $t0, $v0, 8
    ctx->pc = 0x207324u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x207328: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x207328u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20732c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x20732cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x207330: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x207330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x207334: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x207334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x207338: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x207338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x20733c: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x20733cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x207340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207344: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x207344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x207348: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x207348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20734c: 0xc049c48  jal         func_127120
    ctx->pc = 0x20734Cu;
    SET_GPR_U32(ctx, 31, 0x207354u);
    ctx->pc = 0x207350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20734Cu;
    // 0x207350: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x20734Cu, 0x207354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207354u;
label_207354:
    // 0x207354: 0x0  nop
    ctx->pc = 0x207354u;
    // NOP
label_207358:
    // 0x207358: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20735c: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x20735cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x207360: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x207360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x207364: 0x9270001d  lbu         $s0, 0x1D($s3)
    ctx->pc = 0x207364u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 29)));
    // 0x207368: 0x2482006e  addiu       $v0, $a0, 0x6E
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x20736c: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20736Cu;
    {
        const bool branch_taken_0x20736c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x207370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20736Cu;
        // 0x207370: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20736c) {
            ctx->pc = 0x20737Cu;
            goto label_20737c;
        }
    }
    ctx->pc = 0x207374u;
    // 0x207374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x207374u;
    {
        const bool branch_taken_0x207374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207374u;
        // 0x207378: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207374) {
            ctx->pc = 0x207384u;
            goto label_207384;
        }
    }
    ctx->pc = 0x20737Cu;
label_20737c:
    // 0x20737c: 0x9270001c  lbu         $s0, 0x1C($s3)
    ctx->pc = 0x20737cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x207380: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x207380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_207384:
    // 0x207384: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207384u;
    {
        const bool branch_taken_0x207384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207384) {
            ctx->pc = 0x207390u;
            goto label_207390;
        }
    }
    ctx->pc = 0x20738Cu;
    // 0x20738c: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x20738cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_207390:
    // 0x207390: 0x8e830270  lw          $v1, 0x270($s4)
    ctx->pc = 0x207390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x207394: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x207394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x207398: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x207398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x20739c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2073a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2073A0u;
    {
        const bool branch_taken_0x2073a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2073a0) {
            ctx->pc = 0x2073C0u;
            goto label_2073c0;
        }
    }
    ctx->pc = 0x2073A8u;
    // 0x2073a8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2073a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2073ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2073acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2073b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2073B0u;
    {
        const bool branch_taken_0x2073b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2073b0) {
            ctx->pc = 0x2073C0u;
            goto label_2073c0;
        }
    }
    ctx->pc = 0x2073B8u;
    // 0x2073b8: 0xc0581e4  jal         func_160790
    ctx->pc = 0x2073B8u;
    SET_GPR_U32(ctx, 31, 0x2073C0u);
    ctx->pc = 0x2073BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073B8u;
    // 0x2073bc: 0x26640018  addiu       $a0, $s3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160790u, 0x2073B8u, 0x2073C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073C0u;
label_2073c0:
    // 0x2073c0: 0x92630015  lbu         $v1, 0x15($s3)
    ctx->pc = 0x2073c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
    // 0x2073c4: 0x9282008c  lbu         $v0, 0x8C($s4)
    ctx->pc = 0x2073c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x2073c8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2073c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2073cc: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2073ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2073d0: 0x32be0002  andi        $fp, $s5, 0x2
    ctx->pc = 0x2073d0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x2073d4: 0x13c00010  beqz        $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x2073D4u;
    {
        const bool branch_taken_0x2073d4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2073d4) {
            ctx->pc = 0x207418u;
            goto label_207418;
        }
    }
    ctx->pc = 0x2073DCu;
    // 0x2073dc: 0x8662000c  lh          $v0, 0xC($s3)
    ctx->pc = 0x2073dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2073e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2073e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2073e4: 0x0  nop
    ctx->pc = 0x2073e4u;
    // NOP
    // 0x2073e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2073e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2073ec: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2073ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2073f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2073f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2073f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2073f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2073f8: 0x0  nop
    ctx->pc = 0x2073f8u;
    // NOP
    // 0x2073fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2073fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207400: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x207400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x207404: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x207404u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x207408: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x207408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20740c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x20740cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207410: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x207410u;
    {
        const bool branch_taken_0x207410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207410u;
        // 0x207414: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207410) {
            ctx->pc = 0x207450u;
            goto label_207450;
        }
    }
    ctx->pc = 0x207418u;
label_207418:
    // 0x207418: 0x8662000c  lh          $v0, 0xC($s3)
    ctx->pc = 0x207418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x20741c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20741cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207420: 0x0  nop
    ctx->pc = 0x207420u;
    // NOP
    // 0x207424: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x207424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x207428: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x207428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x20742c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20742cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x207430: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x207430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x207434: 0x0  nop
    ctx->pc = 0x207434u;
    // NOP
    // 0x207438: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x207438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20743c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x20743cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x207440: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x207440u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x207444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207448: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x207448u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20744c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x20744cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_207450:
    // 0x207450: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x207450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x207454: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x207454u;
    {
        const bool branch_taken_0x207454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207454u;
        // 0x207458: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207454) {
            ctx->pc = 0x207498u;
            goto label_207498;
        }
    }
    ctx->pc = 0x20745Cu;
    // 0x20745c: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x20745cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x207460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207464: 0x0  nop
    ctx->pc = 0x207464u;
    // NOP
    // 0x207468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x207468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20746c:
    // 0x20746c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x20746cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x207470: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x207470u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x207474: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x207474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x207478: 0x0  nop
    ctx->pc = 0x207478u;
    // NOP
    // 0x20747c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20747cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207480: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x207480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x207484: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x207484u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x207488: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x207488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20748c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x20748cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207490: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x207490u;
    {
        const bool branch_taken_0x207490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207490u;
        // 0x207494: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207490) {
            ctx->pc = 0x2074D0u;
            goto label_2074d0;
        }
    }
    ctx->pc = 0x207498u;
label_207498:
    // 0x207498: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x207498u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x20749c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20749cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2074a0: 0x0  nop
    ctx->pc = 0x2074a0u;
    // NOP
    // 0x2074a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2074a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2074a8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2074a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2074ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2074acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2074b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2074b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2074b4: 0x0  nop
    ctx->pc = 0x2074b4u;
    // NOP
    // 0x2074b8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2074b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2074bc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2074bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2074c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2074c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2074c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2074c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2074c8: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2074c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2074cc: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2074ccu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_2074d0:
    // 0x2074d0: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x2074D0u;
    SET_GPR_U32(ctx, 31, 0x2074D8u);
    ctx->pc = 0x2074D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074D0u;
    // 0x2074d4: 0x968400ea  lhu         $a0, 0xEA($s4) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DA90u, 0x2074D0u, 0x2074D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074D8u;
label_2074d8:
    // 0x2074d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2074d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2074dc: 0x13c00014  beqz        $fp, . + 4 + (0x14 << 2)
    ctx->pc = 0x2074DCu;
    {
        const bool branch_taken_0x2074dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074DCu;
        // 0x2074e0: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074dc) {
            ctx->pc = 0x207530u;
            goto label_207530;
        }
    }
    ctx->pc = 0x2074E4u;
    // 0x2074e4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2074e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2074e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2074e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2074ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2074ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2074f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2074f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2074f4: 0x0  nop
    ctx->pc = 0x2074f4u;
    // NOP
    // 0x2074f8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2074f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2074fc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2074fcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207500: 0x0  nop
    ctx->pc = 0x207500u;
    // NOP
    // 0x207504: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x207504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x207508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20750c: 0x0  nop
    ctx->pc = 0x20750cu;
    // NOP
    // 0x207510: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x207510u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x207514: 0x4602b01d  msub.s      $f0, $f22, $f2
    ctx->pc = 0x207514u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[22], ctx->f[2]));
    // 0x207518: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x207518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20751c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20751cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x207520: 0x0  nop
    ctx->pc = 0x207520u;
    // NOP
    // 0x207524: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x207524u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207528: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x207528u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x20752c: 0x0  nop
    ctx->pc = 0x20752cu;
    // NOP
label_207530:
    // 0x207530: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x207530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x207534: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x207534u;
    {
        const bool branch_taken_0x207534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207534) {
            ctx->pc = 0x207580u;
            goto label_207580;
        }
    }
    ctx->pc = 0x20753Cu;
    // 0x20753c: 0x32e2ffff  andi        $v0, $s7, 0xFFFF
    ctx->pc = 0x20753cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x207540: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x207540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x207544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207548: 0x0  nop
    ctx->pc = 0x207548u;
    // NOP
    // 0x20754c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20754cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x207550: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x207550u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207554: 0x0  nop
    ctx->pc = 0x207554u;
    // NOP
    // 0x207558: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x207558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20755c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20755cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207560: 0x0  nop
    ctx->pc = 0x207560u;
    // NOP
    // 0x207564: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x207564u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x207568: 0x4602a81d  msub.s      $f0, $f21, $f2
    ctx->pc = 0x207568u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[21], ctx->f[2]));
    // 0x20756c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20756cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x207570: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x207570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x207574: 0x0  nop
    ctx->pc = 0x207574u;
    // NOP
    // 0x207578: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x207578u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20757c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x20757cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_207580:
    // 0x207580: 0xc0c7954  jal         func_31E550
    ctx->pc = 0x207580u;
    SET_GPR_U32(ctx, 31, 0x207588u);
    ctx->pc = 0x31E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E550u, 0x207580u, 0x207588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207588u;
label_207588:
    // 0x207588: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20758c: 0xc0cb720  jal         func_32DC80
    ctx->pc = 0x20758Cu;
    SET_GPR_U32(ctx, 31, 0x207594u);
    ctx->pc = 0x207590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20758Cu;
    // 0x207590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC80u, 0x20758Cu, 0x207594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207594u;
label_207594:
    // 0x207594: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x207594u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x207598: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x207598u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x20759c: 0x8fa70110  lw          $a3, 0x110($sp)
    ctx->pc = 0x20759cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2075a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2075a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075a4: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x2075a4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2075a8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2075a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2075ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2075acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075b0: 0xc0cb7b8  jal         func_32DEE0
    ctx->pc = 0x2075B0u;
    SET_GPR_U32(ctx, 31, 0x2075B8u);
    ctx->pc = 0x2075B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2075B0u;
    // 0x2075b4: 0x24460004  addiu       $a2, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEE0u, 0x2075B0u, 0x2075B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2075B8u;
label_2075b8:
    // 0x2075b8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x2075bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2075bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2075c0: 0x9042e820  lbu         $v0, -0x17E0($v0)
    ctx->pc = 0x2075c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x2075c4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2075C4u;
    {
        const bool branch_taken_0x2075c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2075c4) {
            ctx->pc = 0x2075F8u;
            goto label_2075f8;
        }
    }
    ctx->pc = 0x2075CCu;
    // 0x2075cc: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x2075ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2075d0: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x2075d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2075d4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2075d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2075d8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2075d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2075dc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2075dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075e0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2075e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075e4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2075e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075e8: 0xc081acc  jal         func_206B30
    ctx->pc = 0x2075E8u;
    SET_GPR_U32(ctx, 31, 0x2075F0u);
    ctx->pc = 0x2075ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2075E8u;
    // 0x2075ec: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206B30u, 0x2075E8u, 0x2075F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2075F0u;
label_2075f0:
    // 0x2075f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2075F0u;
    {
        const bool branch_taken_0x2075f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075f0) {
            ctx->pc = 0x207660u;
            goto label_207660;
        }
    }
    ctx->pc = 0x2075F8u;
label_2075f8:
    // 0x2075f8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2075f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2075fc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2075fcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207600: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207604: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x207604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x207608: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x207608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20760c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x20760cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207610: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x207610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207614: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x207614u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207618: 0x0  nop
    ctx->pc = 0x207618u;
    // NOP
    // 0x20761c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20761cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x207620: 0xc4629be0  lwc1        $f2, -0x6420($v1)
    ctx->pc = 0x207620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207624: 0xc4409be4  lwc1        $f0, -0x641C($v0)
    ctx->pc = 0x207624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207628: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x207628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20762c: 0x0  nop
    ctx->pc = 0x20762cu;
    // NOP
    // 0x207630: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x207630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x207634: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x207634u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x207638: 0x4614209c  madd.s      $f2, $f4, $f20
    ctx->pc = 0x207638u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[20]));
    // 0x20763c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20763cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x207640: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x207640u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x207644: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x207644u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x207648: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x207648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x20764c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20764cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x207650: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x207650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x207654: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x207654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x207658: 0xc0819ec  jal         func_2067B0
    ctx->pc = 0x207658u;
    SET_GPR_U32(ctx, 31, 0x207660u);
    ctx->pc = 0x20765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207658u;
    // 0x20765c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2067B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067B0u, 0x207658u, 0x207660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207660u;
label_207660:
    // 0x207660: 0x26730028  addiu       $s3, $s3, 0x28
    ctx->pc = 0x207660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x207664: 0x0  nop
    ctx->pc = 0x207664u;
    // NOP
label_207668:
    // 0x207668: 0x66d60001  daddiu      $s6, $s6, 0x1
    ctx->pc = 0x207668u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
    // 0x20766c: 0x2ac30003  slti        $v1, $s6, 0x3
    ctx->pc = 0x20766cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x207670: 0x5460fe97  bnel        $v1, $zero, . + 4 + (-0x169 << 2)
    ctx->pc = 0x207670u;
    {
        const bool branch_taken_0x207670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x207670) {
            ctx->pc = 0x207674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207670u;
            // 0x207674: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2070D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2070d0;
        }
    }
    ctx->pc = 0x207678u;
label_207678:
    // 0x207678: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x207678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20767c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x20767cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207680: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x207680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x207684: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x207684u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x207688: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x207688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20768c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20768cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x207690: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x207690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x207694: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x207694u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x207698: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x207698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20769c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20769cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2076a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2076a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2076a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2076a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2076a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2076a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2076ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2076ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2076B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076ACu;
        // 0x2076b0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2076ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2076B4u;
    // 0x2076b4: 0x0  nop
    ctx->pc = 0x2076b4u;
    // NOP
    // 0x2076b8: 0x0  nop
    ctx->pc = 0x2076b8u;
    // NOP
    // 0x2076bc: 0x0  nop
    ctx->pc = 0x2076bcu;
    // NOP
}
