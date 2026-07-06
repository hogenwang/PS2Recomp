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

// Function: sub_002DF2C8
// Address: 0x2df2c8 - 0x2df500
void sub_002DF2C8_0x2df2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF2C8_0x2df2c8");
#endif

    switch (ctx->pc) {
        case 0x2df2e0u: goto label_2df2e0;
        case 0x2df350u: goto label_2df350;
        case 0x2df3c8u: goto label_2df3c8;
        case 0x2df440u: goto label_2df440;
        case 0x2df4d4u: goto label_2df4d4;
        case 0x2df4dcu: goto label_2df4dc;
        case 0x2df4e4u: goto label_2df4e4;
        case 0x2df4ecu: goto label_2df4ec;
        default: break;
    }

    ctx->pc = 0x2df2c8u;

label_2df2c8:
    // 0x2df2c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df2cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2df2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2df2d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df2d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2df2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2df2d8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DF2D8u;
    SET_GPR_U32(ctx, 31, 0x2DF2E0u);
    ctx->pc = 0x2DF2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2D8u;
    // 0x2df2dc: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DF2D8u, 0x2DF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2E0u;
label_2df2e0:
    // 0x2df2e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df2e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2df2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2df2e8: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2df2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2df2ec: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2df2ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2df2f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df2f4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2df2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2df2f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df2fc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2df2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2df300: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df304: 0x0  nop
    ctx->pc = 0x2df304u;
    // NOP
    // 0x2df308: 0x0  nop
    ctx->pc = 0x2df308u;
    // NOP
    // 0x2df30c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2df30cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2df310: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2df310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2df314: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2df314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df318: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df31c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2df31cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df320: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF320u;
    {
        const bool branch_taken_0x2df320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF320u;
        // 0x2df324: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df320) {
            ctx->pc = 0x2DF340u;
            goto label_2df340;
        }
    }
    ctx->pc = 0x2DF328u;
    // 0x2df328: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2df328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2df32c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df32cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df330: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2df330u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df334: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2df334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2df338: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2df338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2df33c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2df33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2df340:
    // 0x2df340: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2df340u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df344: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2df344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2df348: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DF348u;
    SET_GPR_U32(ctx, 31, 0x2DF350u);
    ctx->pc = 0x2DF34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF348u;
    // 0x2df34c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DF348u, 0x2DF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF350u;
label_2df350:
    // 0x2df350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2df354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2df358: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2df358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2df35c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2df35cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2df360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df364: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2df364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2df368: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df36c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2df36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2df370: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df374: 0x0  nop
    ctx->pc = 0x2df374u;
    // NOP
    // 0x2df378: 0x0  nop
    ctx->pc = 0x2df378u;
    // NOP
    // 0x2df37c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2df37cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2df380: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2df380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2df384: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2df384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df388: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df388u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df38c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2df38cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df390: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF390u;
    {
        const bool branch_taken_0x2df390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df390) {
            ctx->pc = 0x2DF394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF390u;
            // 0x2df394: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF3B0u;
            goto label_2df3b0;
        }
    }
    ctx->pc = 0x2DF398u;
    // 0x2df398: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2df398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2df39c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df39cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df3a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2df3a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df3a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2df3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2df3a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2df3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2df3ac: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2df3acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_2df3b0:
    // 0x2df3b0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2df3b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df3b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2df3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2df3b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2df3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2df3bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2df3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2df3c0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DF3C0u;
    SET_GPR_U32(ctx, 31, 0x2DF3C8u);
    ctx->pc = 0x2DF3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF3C0u;
    // 0x2df3c4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DF3C0u, 0x2DF3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF3C8u;
label_2df3c8:
    // 0x2df3c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df3cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2df3ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2df3d0: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2df3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2df3d4: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2df3d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2df3d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df3dc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2df3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2df3e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df3e4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2df3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2df3e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df3ec: 0x0  nop
    ctx->pc = 0x2df3ecu;
    // NOP
    // 0x2df3f0: 0x0  nop
    ctx->pc = 0x2df3f0u;
    // NOP
    // 0x2df3f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2df3f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2df3f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2df3f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2df3fc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2df3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df400: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df404: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2df404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df408: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF408u;
    {
        const bool branch_taken_0x2df408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df408) {
            ctx->pc = 0x2DF40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF408u;
            // 0x2df40c: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF428u;
            goto label_2df428;
        }
    }
    ctx->pc = 0x2DF410u;
    // 0x2df410: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2df410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2df414: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df414u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df418: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2df418u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df41c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2df41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2df420: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2df420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2df424: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2df424u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_2df428:
    // 0x2df428: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2df428u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df42c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2df42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2df430: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2df430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2df434: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2df434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2df438: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DF438u;
    SET_GPR_U32(ctx, 31, 0x2DF440u);
    ctx->pc = 0x2DF43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF438u;
    // 0x2df43c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DF438u, 0x2DF440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF440u;
label_2df440:
    // 0x2df440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2df444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2df448: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2df448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2df44c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2df44cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2df450: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df454: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2df454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2df458: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df45c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2df45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2df460: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df464: 0x0  nop
    ctx->pc = 0x2df464u;
    // NOP
    // 0x2df468: 0x0  nop
    ctx->pc = 0x2df468u;
    // NOP
    // 0x2df46c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2df46cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2df470: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2df470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2df474: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2df474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df478: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df47c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2df47cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2df480: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF480u;
    {
        const bool branch_taken_0x2df480 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF480u;
        // 0x2df484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df480) {
            ctx->pc = 0x2DF49Cu;
            goto label_2df49c;
        }
    }
    ctx->pc = 0x2DF488u;
    // 0x2df488: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2df488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2df48c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df48cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df490: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2df490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2df494: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2df494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2df498: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2df498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2df49c:
    // 0x2df49c: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x2df49cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df4a0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2df4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2df4a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2df4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df4a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2df4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2df4ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2df4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2df4b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2df4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2df4b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2df4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4B8u;
        // 0x2df4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF4C0u;
    // 0x2df4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df4c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df4c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2df4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2df4cc: 0xc0b7cb2  jal         func_2DF2C8
    ctx->pc = 0x2DF4CCu;
    SET_GPR_U32(ctx, 31, 0x2DF4D4u);
    ctx->pc = 0x2DF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF4CCu;
    // 0x2df4d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF2C8u;
    goto label_2df2c8;
    ctx->pc = 0x2DF4D4u;
label_2df4d4:
    // 0x2df4d4: 0xc0b7cb2  jal         func_2DF2C8
    ctx->pc = 0x2DF4D4u;
    SET_GPR_U32(ctx, 31, 0x2DF4DCu);
    ctx->pc = 0x2DF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF4D4u;
    // 0x2df4d8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF2C8u;
    goto label_2df2c8;
    ctx->pc = 0x2DF4DCu;
label_2df4dc:
    // 0x2df4dc: 0xc0b7cb2  jal         func_2DF2C8
    ctx->pc = 0x2DF4DCu;
    SET_GPR_U32(ctx, 31, 0x2DF4E4u);
    ctx->pc = 0x2DF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF4DCu;
    // 0x2df4e0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF2C8u;
    goto label_2df2c8;
    ctx->pc = 0x2DF4E4u;
label_2df4e4:
    // 0x2df4e4: 0xc0b7cb2  jal         func_2DF2C8
    ctx->pc = 0x2DF4E4u;
    SET_GPR_U32(ctx, 31, 0x2DF4ECu);
    ctx->pc = 0x2DF4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF4E4u;
    // 0x2df4e8: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF2C8u;
    goto label_2df2c8;
    ctx->pc = 0x2DF4ECu;
label_2df4ec:
    // 0x2df4ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2df4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df4f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2df4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4F8u;
        // 0x2df4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF500u;
}
