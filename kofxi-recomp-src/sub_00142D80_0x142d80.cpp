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

// Function: sub_00142D80
// Address: 0x142d80 - 0x143280
void sub_00142D80_0x142d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142D80_0x142d80");
#endif

    switch (ctx->pc) {
        case 0x142e2cu: goto label_142e2c;
        case 0x142e40u: goto label_142e40;
        case 0x142e5cu: goto label_142e5c;
        case 0x142ef4u: goto label_142ef4;
        case 0x142f4cu: goto label_142f4c;
        case 0x142f68u: goto label_142f68;
        case 0x142f78u: goto label_142f78;
        case 0x142f84u: goto label_142f84;
        case 0x142f98u: goto label_142f98;
        case 0x142fa4u: goto label_142fa4;
        case 0x143000u: goto label_143000;
        case 0x14301cu: goto label_14301c;
        case 0x143034u: goto label_143034;
        case 0x143050u: goto label_143050;
        case 0x1430e8u: goto label_1430e8;
        case 0x143140u: goto label_143140;
        case 0x14315cu: goto label_14315c;
        case 0x14316cu: goto label_14316c;
        case 0x143178u: goto label_143178;
        case 0x14318cu: goto label_14318c;
        case 0x143198u: goto label_143198;
        case 0x1431f0u: goto label_1431f0;
        case 0x143208u: goto label_143208;
        default: break;
    }

    ctx->pc = 0x142d80u;

    // 0x142d80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x142d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x142d84: 0x3c024780  lui         $v0, 0x4780
    ctx->pc = 0x142d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18304 << 16));
    // 0x142d88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x142d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x142d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142d90: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x142d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x142d94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x142d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x142d98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x142d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x142d9c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x142d9cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x142da0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142da4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x142da4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x142da8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x142da8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x142dac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x142dacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x142db0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x142db0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x142db4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x142db4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x142db8: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x142db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x142dbc: 0x84860088  lh          $a2, 0x88($a0)
    ctx->pc = 0x142dbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x142dc0: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x142dc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142dc4: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x142dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x142dc8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x142dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x142dcc: 0x8483008a  lh          $v1, 0x8A($a0)
    ctx->pc = 0x142dccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 138)));
    // 0x142dd0: 0x83c03  sra         $a3, $t0, 16
    ctx->pc = 0x142dd0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 16));
    // 0x142dd4: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x142dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x142dd8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x142dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142ddc: 0x72c3c  dsll32      $a1, $a3, 16
    ctx->pc = 0x142ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 16));
    // 0x142de0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x142de0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x142de4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x142de4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142de8: 0x0  nop
    ctx->pc = 0x142de8u;
    // NOP
    // 0x142dec: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x142decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x142df0: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x142df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x142df4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x142df4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142df8: 0x0  nop
    ctx->pc = 0x142df8u;
    // NOP
    // 0x142dfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x142dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142e00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x142e00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x142e04: 0x46001600  add.s       $f24, $f2, $f0
    ctx->pc = 0x142e04u;
    ctx->f[24] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x142e08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x142e08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142e0c: 0x0  nop
    ctx->pc = 0x142e0cu;
    // NOP
    // 0x142e10: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x142e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x142e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142e18: 0x0  nop
    ctx->pc = 0x142e18u;
    // NOP
    // 0x142e1c: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x142e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x142e20: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x142e20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x142e24: 0xc0509f4  jal         func_1427D0
    ctx->pc = 0x142E24u;
    SET_GPR_U32(ctx, 31, 0x142E2Cu);
    ctx->pc = 0x142E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E24u;
    // 0x142e28: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1427D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1427D0u, 0x142E24u, 0x142E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E2Cu;
label_142e2c:
    // 0x142e2c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x142e2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x142e30: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x142e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142e34: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x142e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142e38: 0xc050abc  jal         func_142AF0
    ctx->pc = 0x142E38u;
    SET_GPR_U32(ctx, 31, 0x142E40u);
    ctx->pc = 0x142E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E38u;
    // 0x142e3c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x142AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142AF0u, 0x142E38u, 0x142E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E40u;
label_142e40:
    // 0x142e40: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x142e40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e44: 0x45020078  bc1fl       . + 4 + (0x78 << 2)
    ctx->pc = 0x142E44u;
    {
        const bool branch_taken_0x142e44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142e44) {
            ctx->pc = 0x142E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142E44u;
            // 0x142e48: 0xc6010078  lwc1        $f1, 0x78($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x143028u;
            goto label_143028;
        }
    }
    ctx->pc = 0x142E4Cu;
    // 0x142e4c: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x142e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142e50: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x142e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142e54: 0xc050abc  jal         func_142AF0
    ctx->pc = 0x142E54u;
    SET_GPR_U32(ctx, 31, 0x142E5Cu);
    ctx->pc = 0x142E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E54u;
    // 0x142e58: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x142AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142AF0u, 0x142E54u, 0x142E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E5Cu;
label_142e5c:
    // 0x142e5c: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x142e5cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x142e60: 0x4619a836  c.le.s      $f21, $f25
    ctx->pc = 0x142e60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e64: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
    ctx->pc = 0x142E64u;
    {
        const bool branch_taken_0x142e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142e64) {
            ctx->pc = 0x142E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142E64u;
            // 0x142e68: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x142F70u;
            goto label_142f70;
        }
    }
    ctx->pc = 0x142E6Cu;
    // 0x142e6c: 0x4616b01a  mula.s      $f22, $f22
    ctx->pc = 0x142e6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[22], ctx->f[22]));
    // 0x142e70: 0x4617b85c  madd.s      $f1, $f23, $f23
    ctx->pc = 0x142e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[23], ctx->f[23]));
    // 0x142e74: 0x46010644  c1          0x10644
    ctx->pc = 0x142e74u;
    ctx->f[25] = FPU_SQRT_S(ctx->f[0]);
    // 0x142e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142e7c: 0x0  nop
    ctx->pc = 0x142e7cu;
    // NOP
    // 0x142e80: 0x0  nop
    ctx->pc = 0x142e80u;
    // NOP
    // 0x142e84: 0x4600c832  c.eq.s      $f25, $f0
    ctx->pc = 0x142e84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e88: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
    ctx->pc = 0x142E88u;
    {
        const bool branch_taken_0x142e88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142e88) {
            ctx->pc = 0x142E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142E88u;
            // 0x142e8c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142F54u;
            goto label_142f54;
        }
    }
    ctx->pc = 0x142E90u;
    // 0x142e90: 0x4618c836  c.le.s      $f25, $f24
    ctx->pc = 0x142e90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x142E94u;
    {
        const bool branch_taken_0x142e94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E94u;
        // 0x142e98: 0x9211008c  lbu         $s1, 0x8C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e94) {
            ctx->pc = 0x142EA0u;
            goto label_142ea0;
        }
    }
    ctx->pc = 0x142E9Cu;
    // 0x142e9c: 0x4600ce06  mov.s       $f24, $f25
    ctx->pc = 0x142e9cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[25]);
label_142ea0:
    // 0x142ea0: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x142ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x142ea4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x142EA4u;
    {
        const bool branch_taken_0x142ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ea4) {
            ctx->pc = 0x142EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142EA4u;
            // 0x142ea8: 0x4619b803  div.s       $f0, $f23, $f25 (Delay Slot)
            if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[25];
            ctx->in_delay_slot = false;
            ctx->pc = 0x142ED4u;
            goto label_142ed4;
        }
    }
    ctx->pc = 0x142EACu;
    // 0x142eac: 0x4619b803  div.s       $f0, $f23, $f25
    ctx->pc = 0x142eacu;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[25];
    // 0x142eb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x142eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x142eb4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x142eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x142eb8: 0x0  nop
    ctx->pc = 0x142eb8u;
    // NOP
    // 0x142ebc: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x142ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x142ec0: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x142ec0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[20];
    // 0x142ec4: 0x0  nop
    ctx->pc = 0x142ec4u;
    // NOP
    // 0x142ec8: 0x0  nop
    ctx->pc = 0x142ec8u;
    // NOP
    // 0x142ecc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142ECCu;
    {
        const bool branch_taken_0x142ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ecc) {
            ctx->pc = 0x142EECu;
            goto label_142eec;
        }
    }
    ctx->pc = 0x142ED4u;
label_142ed4:
    // 0x142ed4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x142ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x142ed8: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x142ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x142edc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x142edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x142ee0: 0x0  nop
    ctx->pc = 0x142ee0u;
    // NOP
    // 0x142ee4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x142ee4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x142ee8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x142ee8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_142eec:
    // 0x142eec: 0xc068184  jal         func_1A0610
    ctx->pc = 0x142EECu;
    SET_GPR_U32(ctx, 31, 0x142EF4u);
    ctx->pc = 0x1A0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0610u, 0x142EECu, 0x142EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EF4u;
label_142ef4:
    // 0x142ef4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x142ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x142ef8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x142ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x142efc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x142EFCu;
    {
        const bool branch_taken_0x142efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142efc) {
            ctx->pc = 0x142F2Cu;
            goto label_142f2c;
        }
    }
    ctx->pc = 0x142F04u;
    // 0x142f04: 0x0  nop
    ctx->pc = 0x142f04u;
    // NOP
    // 0x142f08: 0x0  nop
    ctx->pc = 0x142f08u;
    // NOP
    // 0x142f0c: 0x4619b003  div.s       $f0, $f22, $f25
    ctx->pc = 0x142f0cu;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[25];
    // 0x142f10: 0x0  nop
    ctx->pc = 0x142f10u;
    // NOP
    // 0x142f14: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x142f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x142f18: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x142f18u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[20];
    // 0x142f1c: 0x0  nop
    ctx->pc = 0x142f1cu;
    // NOP
    // 0x142f20: 0x0  nop
    ctx->pc = 0x142f20u;
    // NOP
    // 0x142f24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142F24u;
    {
        const bool branch_taken_0x142f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f24) {
            ctx->pc = 0x142F44u;
            goto label_142f44;
        }
    }
    ctx->pc = 0x142F2Cu;
label_142f2c:
    // 0x142f2c: 0x0  nop
    ctx->pc = 0x142f2cu;
    // NOP
    // 0x142f30: 0x0  nop
    ctx->pc = 0x142f30u;
    // NOP
    // 0x142f34: 0x4619b003  div.s       $f0, $f22, $f25
    ctx->pc = 0x142f34u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[25];
    // 0x142f38: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x142f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x142f3c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x142f3cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x142f40: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x142f40u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_142f44:
    // 0x142f44: 0xc068184  jal         func_1A0610
    ctx->pc = 0x142F44u;
    SET_GPR_U32(ctx, 31, 0x142F4Cu);
    ctx->pc = 0x1A0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0610u, 0x142F44u, 0x142F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F4Cu;
label_142f4c:
    // 0x142f4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142F4Cu;
    {
        const bool branch_taken_0x142f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F4Cu;
        // 0x142f50: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f4c) {
            ctx->pc = 0x142F5Cu;
            goto label_142f5c;
        }
    }
    ctx->pc = 0x142F54u;
label_142f54:
    // 0x142f54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x142f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x142f58: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x142f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_142f5c:
    // 0x142f5c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x142f5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x142f60: 0xc0509f4  jal         func_1427D0
    ctx->pc = 0x142F60u;
    SET_GPR_U32(ctx, 31, 0x142F68u);
    ctx->pc = 0x142F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F60u;
    // 0x142f64: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1427D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1427D0u, 0x142F60u, 0x142F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F68u;
label_142f68:
    // 0x142f68: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x142F68u;
    {
        const bool branch_taken_0x142f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F68u;
        // 0x142f6c: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f68) {
            ctx->pc = 0x143024u;
            goto label_143024;
        }
    }
    ctx->pc = 0x142F70u;
label_142f70:
    // 0x142f70: 0xc050a78  jal         func_1429E0
    ctx->pc = 0x142F70u;
    SET_GPR_U32(ctx, 31, 0x142F78u);
    ctx->pc = 0x1429E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429E0u, 0x142F70u, 0x142F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F78u;
label_142f78:
    // 0x142f78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x142f78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x142f7c: 0xc050a9c  jal         func_142A70
    ctx->pc = 0x142F7Cu;
    SET_GPR_U32(ctx, 31, 0x142F84u);
    ctx->pc = 0x142F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F7Cu;
    // 0x142f80: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A70u, 0x142F7Cu, 0x142F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F84u;
label_142f84:
    // 0x142f84: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142f84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142f88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x142f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f8c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x142f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x142f90: 0xc067c18  jal         func_19F060
    ctx->pc = 0x142F90u;
    SET_GPR_U32(ctx, 31, 0x142F98u);
    ctx->pc = 0x142F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F90u;
    // 0x142f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F060u, 0x142F90u, 0x142F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F98u;
label_142f98:
    // 0x142f98: 0x4600c5c2  mul.s       $f23, $f24, $f0
    ctx->pc = 0x142f98u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x142f9c: 0xc067c30  jal         func_19F0C0
    ctx->pc = 0x142F9Cu;
    SET_GPR_U32(ctx, 31, 0x142FA4u);
    ctx->pc = 0x142FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F9Cu;
    // 0x142fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C0u, 0x142F9Cu, 0x142FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FA4u;
label_142fa4:
    // 0x142fa4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142fa8: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x142FA8u;
    {
        const bool branch_taken_0x142fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x142FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FA8u;
        // 0x142fac: 0x4600c582  mul.s       $f22, $f24, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fa8) {
            ctx->pc = 0x142FE0u;
            goto label_142fe0;
        }
    }
    ctx->pc = 0x142FB0u;
    // 0x142fb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x142fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142fb4: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x142FB4u;
    {
        const bool branch_taken_0x142fb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x142fb4) {
            ctx->pc = 0x142FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142FB4u;
            // 0x142fb8: 0x4600bdc7  neg.s       $f23, $f23 (Delay Slot)
            ctx->f[23] = FPU_NEG_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x142FD8u;
            goto label_142fd8;
        }
    }
    ctx->pc = 0x142FBCu;
    // 0x142fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142fc0: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x142FC0u;
    {
        const bool branch_taken_0x142fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x142fc0) {
            ctx->pc = 0x142FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142FC0u;
            // 0x142fc4: 0x4600bdc7  neg.s       $f23, $f23 (Delay Slot)
            ctx->f[23] = FPU_NEG_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x142FE4u;
            goto label_142fe4;
        }
    }
    ctx->pc = 0x142FC8u;
    // 0x142fc8: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x142FC8u;
    {
        const bool branch_taken_0x142fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x142fc8) {
            ctx->pc = 0x142FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142FC8u;
            // 0x142fcc: 0x9211008c  lbu         $s1, 0x8C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142FE8u;
            goto label_142fe8;
        }
    }
    ctx->pc = 0x142FD0u;
    // 0x142fd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x142FD0u;
    {
        const bool branch_taken_0x142fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142fd0) {
            ctx->pc = 0x142FE4u;
            goto label_142fe4;
        }
    }
    ctx->pc = 0x142FD8u;
label_142fd8:
    // 0x142fd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142FD8u;
    {
        const bool branch_taken_0x142fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FD8u;
        // 0x142fdc: 0x4600b587  neg.s       $f22, $f22 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fd8) {
            ctx->pc = 0x142FE4u;
            goto label_142fe4;
        }
    }
    ctx->pc = 0x142FE0u;
label_142fe0:
    // 0x142fe0: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x142fe0u;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
label_142fe4:
    // 0x142fe4: 0x9211008c  lbu         $s1, 0x8C($s0)
    ctx->pc = 0x142fe4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_142fe8:
    // 0x142fe8: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x142fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x142fec: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x142FECu;
    {
        const bool branch_taken_0x142fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142fec) {
            ctx->pc = 0x142FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142FECu;
            // 0x142ff0: 0x4600bb07  neg.s       $f12, $f23 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x142FF8u;
            goto label_142ff8;
        }
    }
    ctx->pc = 0x142FF4u;
    // 0x142ff4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x142ff4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_142ff8:
    // 0x142ff8: 0xc068184  jal         func_1A0610
    ctx->pc = 0x142FF8u;
    SET_GPR_U32(ctx, 31, 0x143000u);
    ctx->pc = 0x1A0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0610u, 0x142FF8u, 0x143000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143000u;
label_143000:
    // 0x143000: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x143000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x143004: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x143004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x143008: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x143008u;
    {
        const bool branch_taken_0x143008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143008) {
            ctx->pc = 0x14300Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143008u;
            // 0x14300c: 0x4600b307  neg.s       $f12, $f22 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x143014u;
            goto label_143014;
        }
    }
    ctx->pc = 0x143010u;
    // 0x143010: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x143010u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_143014:
    // 0x143014: 0xc068184  jal         func_1A0610
    ctx->pc = 0x143014u;
    SET_GPR_U32(ctx, 31, 0x14301Cu);
    ctx->pc = 0x1A0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0610u, 0x143014u, 0x14301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14301Cu;
label_14301c:
    // 0x14301c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x14301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x143020: 0xe6190078  swc1        $f25, 0x78($s0)
    ctx->pc = 0x143020u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_143024:
    // 0x143024: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x143024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143028:
    // 0x143028: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x143028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14302c: 0xc050abc  jal         func_142AF0
    ctx->pc = 0x14302Cu;
    SET_GPR_U32(ctx, 31, 0x143034u);
    ctx->pc = 0x143030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14302Cu;
    // 0x143030: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x142AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142AF0u, 0x14302Cu, 0x143034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143034u;
label_143034:
    // 0x143034: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x143034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143038: 0x45030076  bc1tl       . + 4 + (0x76 << 2)
    ctx->pc = 0x143038u;
    {
        const bool branch_taken_0x143038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143038) {
            ctx->pc = 0x14303Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143038u;
            // 0x14303c: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143214u;
            goto label_143214;
        }
    }
    ctx->pc = 0x143040u;
    // 0x143040: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x143040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143044: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x143044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143048: 0xc050abc  jal         func_142AF0
    ctx->pc = 0x143048u;
    SET_GPR_U32(ctx, 31, 0x143050u);
    ctx->pc = 0x14304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143048u;
    // 0x14304c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x142AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142AF0u, 0x143048u, 0x143050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143050u;
label_143050:
    // 0x143050: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x143050u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x143054: 0x4619a834  c.lt.s      $f21, $f25
    ctx->pc = 0x143054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143058: 0x45030042  bc1tl       . + 4 + (0x42 << 2)
    ctx->pc = 0x143058u;
    {
        const bool branch_taken_0x143058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143058) {
            ctx->pc = 0x14305Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143058u;
            // 0x14305c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x143164u;
            goto label_143164;
        }
    }
    ctx->pc = 0x143060u;
    // 0x143060: 0x4616b01a  mula.s      $f22, $f22
    ctx->pc = 0x143060u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[22], ctx->f[22]));
    // 0x143064: 0x4617b85c  madd.s      $f1, $f23, $f23
    ctx->pc = 0x143064u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[23], ctx->f[23]));
    // 0x143068: 0x46010544  c1          0x10544
    ctx->pc = 0x143068u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x14306c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14306cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143070: 0x0  nop
    ctx->pc = 0x143070u;
    // NOP
    // 0x143074: 0x0  nop
    ctx->pc = 0x143074u;
    // NOP
    // 0x143078: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x143078u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14307c: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
    ctx->pc = 0x14307Cu;
    {
        const bool branch_taken_0x14307c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14307c) {
            ctx->pc = 0x143080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14307Cu;
            // 0x143080: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143148u;
            goto label_143148;
        }
    }
    ctx->pc = 0x143084u;
    // 0x143084: 0x4618a836  c.le.s      $f21, $f24
    ctx->pc = 0x143084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143088: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x143088u;
    {
        const bool branch_taken_0x143088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143088u;
        // 0x14308c: 0x9211008c  lbu         $s1, 0x8C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143088) {
            ctx->pc = 0x143094u;
            goto label_143094;
        }
    }
    ctx->pc = 0x143090u;
    // 0x143090: 0x4600ae06  mov.s       $f24, $f21
    ctx->pc = 0x143090u;
    ctx->f[24] = FPU_MOV_S(ctx->f[21]);
label_143094:
    // 0x143094: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x143094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x143098: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x143098u;
    {
        const bool branch_taken_0x143098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143098) {
            ctx->pc = 0x14309Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143098u;
            // 0x14309c: 0x4615b803  div.s       $f0, $f23, $f21 (Delay Slot)
            if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[21];
            ctx->in_delay_slot = false;
            ctx->pc = 0x1430C8u;
            goto label_1430c8;
        }
    }
    ctx->pc = 0x1430A0u;
    // 0x1430a0: 0x4615b803  div.s       $f0, $f23, $f21
    ctx->pc = 0x1430a0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[21];
    // 0x1430a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1430a8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1430a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1430ac: 0x0  nop
    ctx->pc = 0x1430acu;
    // NOP
    // 0x1430b0: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x1430b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1430b4: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x1430b4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[20];
    // 0x1430b8: 0x0  nop
    ctx->pc = 0x1430b8u;
    // NOP
    // 0x1430bc: 0x0  nop
    ctx->pc = 0x1430bcu;
    // NOP
    // 0x1430c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1430C0u;
    {
        const bool branch_taken_0x1430c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1430c0) {
            ctx->pc = 0x1430E0u;
            goto label_1430e0;
        }
    }
    ctx->pc = 0x1430C8u;
label_1430c8:
    // 0x1430c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1430c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1430cc: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x1430ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1430d0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1430d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1430d4: 0x0  nop
    ctx->pc = 0x1430d4u;
    // NOP
    // 0x1430d8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1430d8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1430dc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1430dcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_1430e0:
    // 0x1430e0: 0xc068184  jal         func_1A0610
    ctx->pc = 0x1430E0u;
    SET_GPR_U32(ctx, 31, 0x1430E8u);
    ctx->pc = 0x1A0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0610u, 0x1430E0u, 0x1430E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430E8u;
label_1430e8:
    // 0x1430e8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1430e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1430ec: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1430ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1430f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1430F0u;
    {
        const bool branch_taken_0x1430f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1430f0) {
            ctx->pc = 0x143120u;
            goto label_143120;
        }
    }
    ctx->pc = 0x1430F8u;
    // 0x1430f8: 0x0  nop
    ctx->pc = 0x1430f8u;
    // NOP
    // 0x1430fc: 0x0  nop
    ctx->pc = 0x1430fcu;
    // NOP
    // 0x143100: 0x4615b003  div.s       $f0, $f22, $f21
    ctx->pc = 0x143100u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[21];
    // 0x143104: 0x0  nop
    ctx->pc = 0x143104u;
    // NOP
    // 0x143108: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x143108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x14310c: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x14310cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[20];
    // 0x143110: 0x0  nop
    ctx->pc = 0x143110u;
    // NOP
    // 0x143114: 0x0  nop
    ctx->pc = 0x143114u;
    // NOP
    // 0x143118: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143118u;
    {
        const bool branch_taken_0x143118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143118) {
            ctx->pc = 0x143138u;
            goto label_143138;
        }
    }
    ctx->pc = 0x143120u;
label_143120:
    // 0x143120: 0x0  nop
    ctx->pc = 0x143120u;
    // NOP
    // 0x143124: 0x0  nop
    ctx->pc = 0x143124u;
    // NOP
    // 0x143128: 0x4615b003  div.s       $f0, $f22, $f21
    ctx->pc = 0x143128u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[21];
    // 0x14312c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x14312cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x143130: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x143130u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x143134: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x143134u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_143138:
    // 0x143138: 0xc068184  jal         func_1A0610
    ctx->pc = 0x143138u;
    SET_GPR_U32(ctx, 31, 0x143140u);
    ctx->pc = 0x1A0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0610u, 0x143138u, 0x143140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143140u;
label_143140:
    // 0x143140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143140u;
    {
        const bool branch_taken_0x143140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143140u;
        // 0x143144: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143140) {
            ctx->pc = 0x143150u;
            goto label_143150;
        }
    }
    ctx->pc = 0x143148u;
label_143148:
    // 0x143148: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x143148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14314c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x14314cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_143150:
    // 0x143150: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x143150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x143154: 0xc0509f4  jal         func_1427D0
    ctx->pc = 0x143154u;
    SET_GPR_U32(ctx, 31, 0x14315Cu);
    ctx->pc = 0x143158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143154u;
    // 0x143158: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1427D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1427D0u, 0x143154u, 0x14315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14315Cu;
label_14315c:
    // 0x14315c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14315Cu;
    {
        const bool branch_taken_0x14315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14315Cu;
        // 0x143160: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14315c) {
            ctx->pc = 0x143210u;
            goto label_143210;
        }
    }
    ctx->pc = 0x143164u;
label_143164:
    // 0x143164: 0xc050a78  jal         func_1429E0
    ctx->pc = 0x143164u;
    SET_GPR_U32(ctx, 31, 0x14316Cu);
    ctx->pc = 0x1429E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429E0u, 0x143164u, 0x14316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14316Cu;
label_14316c:
    // 0x14316c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x14316cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x143170: 0xc050a9c  jal         func_142A70
    ctx->pc = 0x143170u;
    SET_GPR_U32(ctx, 31, 0x143178u);
    ctx->pc = 0x143174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143170u;
    // 0x143174: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A70u, 0x143170u, 0x143178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143178u;
label_143178:
    // 0x143178: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14317c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14317cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143180: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x143180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x143184: 0xc067c18  jal         func_19F060
    ctx->pc = 0x143184u;
    SET_GPR_U32(ctx, 31, 0x14318Cu);
    ctx->pc = 0x143188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143184u;
    // 0x143188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F060u, 0x143184u, 0x14318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14318Cu;
label_14318c:
    // 0x14318c: 0x4600c542  mul.s       $f21, $f24, $f0
    ctx->pc = 0x14318cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x143190: 0xc067c30  jal         func_19F0C0
    ctx->pc = 0x143190u;
    SET_GPR_U32(ctx, 31, 0x143198u);
    ctx->pc = 0x143194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143190u;
    // 0x143194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C0u, 0x143190u, 0x143198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143198u;
label_143198:
    // 0x143198: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x143198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14319c: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14319Cu;
    {
        const bool branch_taken_0x14319c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1431A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14319Cu;
        // 0x1431a0: 0x4600c502  mul.s       $f20, $f24, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14319c) {
            ctx->pc = 0x1431D4u;
            goto label_1431d4;
        }
    }
    ctx->pc = 0x1431A4u;
    // 0x1431a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1431a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1431a8: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1431A8u;
    {
        const bool branch_taken_0x1431a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1431a8) {
            ctx->pc = 0x1431ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1431A8u;
            // 0x1431ac: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1431CCu;
            goto label_1431cc;
        }
    }
    ctx->pc = 0x1431B0u;
    // 0x1431b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1431b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1431b4: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1431B4u;
    {
        const bool branch_taken_0x1431b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1431b4) {
            ctx->pc = 0x1431B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1431B4u;
            // 0x1431b8: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1431D8u;
            goto label_1431d8;
        }
    }
    ctx->pc = 0x1431BCu;
    // 0x1431bc: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1431BCu;
    {
        const bool branch_taken_0x1431bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431bc) {
            ctx->pc = 0x1431C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1431BCu;
            // 0x1431c0: 0x9211008c  lbu         $s1, 0x8C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1431DCu;
            goto label_1431dc;
        }
    }
    ctx->pc = 0x1431C4u;
    // 0x1431c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1431C4u;
    {
        const bool branch_taken_0x1431c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431c4) {
            ctx->pc = 0x1431D8u;
            goto label_1431d8;
        }
    }
    ctx->pc = 0x1431CCu;
label_1431cc:
    // 0x1431cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1431CCu;
    {
        const bool branch_taken_0x1431cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431CCu;
        // 0x1431d0: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431cc) {
            ctx->pc = 0x1431D8u;
            goto label_1431d8;
        }
    }
    ctx->pc = 0x1431D4u;
label_1431d4:
    // 0x1431d4: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x1431d4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_1431d8:
    // 0x1431d8: 0x9211008c  lbu         $s1, 0x8C($s0)
    ctx->pc = 0x1431d8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_1431dc:
    // 0x1431dc: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1431dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1431e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1431E0u;
    {
        const bool branch_taken_0x1431e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431e0) {
            ctx->pc = 0x1431E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1431E0u;
            // 0x1431e4: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1431E8u;
            goto label_1431e8;
        }
    }
    ctx->pc = 0x1431E8u;
label_1431e8:
    // 0x1431e8: 0xc068184  jal         func_1A0610
    ctx->pc = 0x1431E8u;
    SET_GPR_U32(ctx, 31, 0x1431F0u);
    ctx->pc = 0x1431ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431E8u;
    // 0x1431ec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0610u, 0x1431E8u, 0x1431F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431F0u;
label_1431f0:
    // 0x1431f0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1431f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1431f4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1431f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1431f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1431F8u;
    {
        const bool branch_taken_0x1431f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431f8) {
            ctx->pc = 0x1431FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1431F8u;
            // 0x1431fc: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x143200u;
            goto label_143200;
        }
    }
    ctx->pc = 0x143200u;
label_143200:
    // 0x143200: 0xc068184  jal         func_1A0610
    ctx->pc = 0x143200u;
    SET_GPR_U32(ctx, 31, 0x143208u);
    ctx->pc = 0x143204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143200u;
    // 0x143204: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0610u, 0x143200u, 0x143208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143208u;
label_143208:
    // 0x143208: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x143208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x14320c: 0xe6190078  swc1        $f25, 0x78($s0)
    ctx->pc = 0x14320cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_143210:
    // 0x143210: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x143210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_143214:
    // 0x143214: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x143214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143218: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x143218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x14321c: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x14321cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x143220: 0xa2000031  sb          $zero, 0x31($s0)
    ctx->pc = 0x143220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x143224: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x143224u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x143228: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x143228u;
    {
        const bool branch_taken_0x143228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x143228) {
            ctx->pc = 0x14322Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143228u;
            // 0x14322c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143244u;
            goto label_143244;
        }
    }
    ctx->pc = 0x143230u;
    // 0x143230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143234: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143234u;
    {
        const bool branch_taken_0x143234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x143234) {
            ctx->pc = 0x143238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143234u;
            // 0x143238: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143244u;
            goto label_143244;
        }
    }
    ctx->pc = 0x14323Cu;
    // 0x14323c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14323Cu;
    {
        const bool branch_taken_0x14323c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14323c) {
            ctx->pc = 0x143240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14323Cu;
            // 0x143240: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143248u;
            goto label_143248;
        }
    }
    ctx->pc = 0x143244u;
label_143244:
    // 0x143244: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x143244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_143248:
    // 0x143248: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x143248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x14324c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14324cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143250: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x143250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x143254: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x143254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143258: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x143258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14325c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14325cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143260: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x143260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x143264: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x143264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x143268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x143268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14326c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x143270: 0x3e00008  jr          $ra
    ctx->pc = 0x143270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143270u;
        // 0x143274: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143278u;
    // 0x143278: 0x0  nop
    ctx->pc = 0x143278u;
    // NOP
    // 0x14327c: 0x0  nop
    ctx->pc = 0x14327cu;
    // NOP
}
