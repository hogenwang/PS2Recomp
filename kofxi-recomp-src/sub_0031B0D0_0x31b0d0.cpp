#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031B0D0
// Address: 0x31b0d0 - 0x31b310
void sub_0031B0D0_0x31b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B0D0_0x31b0d0");
#endif

    ctx->pc = 0x31b0d0u;

    // 0x31b0d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b0d4: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B0D4u;
    {
        const bool branch_taken_0x31b0d4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31b0d4) {
            ctx->pc = 0x31B0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31B0D4u;
            // 0x31b0d8: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31B0ECu;
            goto label_31b0ec;
        }
    }
    ctx->pc = 0x31B0DCu;
    // 0x31b0dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b0e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31B0E0u;
    {
        const bool branch_taken_0x31b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B0E0u;
            // 0x31b0e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0e0) {
            ctx->pc = 0x31B104u;
            goto label_31b104;
        }
    }
    ctx->pc = 0x31B0E8u;
    // 0x31b0e8: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x31b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_31b0ec:
    // 0x31b0ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31b0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31b0f0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x31b0f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x31b0f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31b0f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b0f8: 0x0  nop
    ctx->pc = 0x31b0f8u;
    // NOP
    // 0x31b0fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31b0fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31b100: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31b100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31b104:
    // 0x31b104: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x31b104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x31b108: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x31b108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x31b10c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x31b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b110: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31b110u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b114: 0x0  nop
    ctx->pc = 0x31b114u;
    // NOP
    // 0x31b118: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31b118u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x31b11c: 0x0  nop
    ctx->pc = 0x31b11cu;
    // NOP
    // 0x31b120: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b124: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x31b124u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x31b128: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B128u;
    {
        const bool branch_taken_0x31b128 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31b128) {
            ctx->pc = 0x31B12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31B128u;
            // 0x31b12c: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31B140u;
            goto label_31b140;
        }
    }
    ctx->pc = 0x31B130u;
    // 0x31b130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b134: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31B134u;
    {
        const bool branch_taken_0x31b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B134u;
            // 0x31b138: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b134) {
            ctx->pc = 0x31B158u;
            goto label_31b158;
        }
    }
    ctx->pc = 0x31B13Cu;
    // 0x31b13c: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x31b13cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_31b140:
    // 0x31b140: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31b140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31b144: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x31b144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x31b148: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31b148u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b14c: 0x0  nop
    ctx->pc = 0x31b14cu;
    // NOP
    // 0x31b150: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31b150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31b154: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31b154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31b158:
    // 0x31b158: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x31b158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x31b15c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x31b160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b164: 0x0  nop
    ctx->pc = 0x31b164u;
    // NOP
    // 0x31b168: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31b168u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x31b16c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b16cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x31b170: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x31b170u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b174: 0x0  nop
    ctx->pc = 0x31b174u;
    // NOP
    // 0x31b178: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x31b178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31b17c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x31b17cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b180: 0x0  nop
    ctx->pc = 0x31b180u;
    // NOP
    // 0x31b184: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31b184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31b188: 0x46801820  cvt.s.w     $f0, $f3
    ctx->pc = 0x31b188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31b18c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31b18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31b190: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b194: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x31b194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31b198: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31b198u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b19c: 0x0  nop
    ctx->pc = 0x31b19cu;
    // NOP
    // 0x31b1a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31b1a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31b1a4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31b1a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31b1a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b1a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b1ac: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x31b1acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31b1b0: 0x0  nop
    ctx->pc = 0x31b1b0u;
    // NOP
    // 0x31b1b4: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x31b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x31b1b8: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x31b1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x31b1bc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x31b1bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31b1c0: 0x0  nop
    ctx->pc = 0x31b1c0u;
    // NOP
    // 0x31b1c4: 0x12c2823  subu        $a1, $t1, $t4
    ctx->pc = 0x31b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x31b1c8: 0x28a10281  slti        $at, $a1, 0x281
    ctx->pc = 0x31b1c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x31b1cc: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x31B1CCu;
    {
        const bool branch_taken_0x31b1cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B1CCu;
            // 0x31b1d0: 0x12c4821  addu        $t1, $t1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1cc) {
            ctx->pc = 0x31B300u;
            goto label_31b300;
        }
    }
    ctx->pc = 0x31B1D4u;
    // 0x31b1d4: 0x5230004  bgezl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B1D4u;
    {
        const bool branch_taken_0x31b1d4 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x31b1d4) {
            ctx->pc = 0x31B1D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31B1D4u;
            // 0x31b1d8: 0x286101e1  slti        $at, $v1, 0x1E1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)481) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31B1E8u;
            goto label_31b1e8;
        }
    }
    ctx->pc = 0x31B1DCu;
    // 0x31b1dc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x31B1DCu;
    {
        const bool branch_taken_0x31b1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b1dc) {
            ctx->pc = 0x31B300u;
            goto label_31b300;
        }
    }
    ctx->pc = 0x31B1E4u;
    // 0x31b1e4: 0x286101e1  slti        $at, $v1, 0x1E1
    ctx->pc = 0x31b1e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)481) ? 1 : 0);
label_31b1e8:
    // 0x31b1e8: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x31B1E8u;
    {
        const bool branch_taken_0x31b1e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b1e8) {
            ctx->pc = 0x31B300u;
            goto label_31b300;
        }
    }
    ctx->pc = 0x31B1F0u;
    // 0x31b1f0: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B1F0u;
    {
        const bool branch_taken_0x31b1f0 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x31b1f0) {
            ctx->pc = 0x31B200u;
            goto label_31b200;
        }
    }
    ctx->pc = 0x31B1F8u;
    // 0x31b1f8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x31B1F8u;
    {
        const bool branch_taken_0x31b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b1f8) {
            ctx->pc = 0x31B300u;
            goto label_31b300;
        }
    }
    ctx->pc = 0x31B200u;
label_31b200:
    // 0x31b200: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x31b200u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
    // 0x31b204: 0x8d0829e0  lw          $t0, 0x29E0($t0)
    ctx->pc = 0x31b204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10720)));
    // 0x31b208: 0x29080190  slti        $t0, $t0, 0x190
    ctx->pc = 0x31b208u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x31b20c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B20Cu;
    {
        const bool branch_taken_0x31b20c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b20c) {
            ctx->pc = 0x31B220u;
            goto label_31b220;
        }
    }
    ctx->pc = 0x31B214u;
    // 0x31b214: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31b214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b218: 0xb8080001  swr         $t0, 0x1($zero)
    ctx->pc = 0x31b218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31b21c: 0xa8080004  swl         $t0, 0x4($zero)
    ctx->pc = 0x31b21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31b220:
    // 0x31b220: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x31b220u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
    // 0x31b224: 0x3c0c447a  lui         $t4, 0x447A
    ctx->pc = 0x31b224u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17530 << 16));
    // 0x31b228: 0x8d0f29e0  lw          $t7, 0x29E0($t0)
    ctx->pc = 0x31b228u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10720)));
    // 0x31b22c: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31b22cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b230: 0x3c0d01da  lui         $t5, 0x1DA
    ctx->pc = 0x31b230u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)474 << 16));
    // 0x31b234: 0x3c094f00  lui         $t1, 0x4F00
    ctx->pc = 0x31b234u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20224 << 16));
    // 0x31b238: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x31b238u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31b23c: 0x25ad4df0  addiu       $t5, $t5, 0x4DF0
    ctx->pc = 0x31b23cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 19952));
    // 0x31b240: 0xf60c0  sll         $t4, $t7, 3
    ctx->pc = 0x31b240u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x31b244: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x31b244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
    // 0x31b248: 0x18f7023  subu        $t6, $t4, $t7
    ctx->pc = 0x31b248u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x31b24c: 0x25ec0001  addiu       $t4, $t7, 0x1
    ctx->pc = 0x31b24cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x31b250: 0xad0c29e0  sw          $t4, 0x29E0($t0)
    ctx->pc = 0x31b250u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 10720), GPR_U32(ctx, 12));
    // 0x31b254: 0xe4080  sll         $t0, $t6, 2
    ctx->pc = 0x31b254u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x31b258: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x31b258u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b25c: 0x1c84021  addu        $t0, $t6, $t0
    ctx->pc = 0x31b25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x31b260: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x31b260u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x31b264: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31b264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b268: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31B268u;
    {
        const bool branch_taken_0x31b268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31B26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B268u;
            // 0x31b26c: 0x1a87021  addu        $t6, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b268) {
            ctx->pc = 0x31B280u;
            goto label_31b280;
        }
    }
    ctx->pc = 0x31B270u;
    // 0x31b270: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b274: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x31b274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31b278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31B278u;
    {
        const bool branch_taken_0x31b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B278u;
            // 0x31b27c: 0x3c088000  lui         $t0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b278) {
            ctx->pc = 0x31B29Cu;
            goto label_31b29c;
        }
    }
    ctx->pc = 0x31B280u;
label_31b280:
    // 0x31b280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31b280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31b284: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x31b284u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x31b288: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b28c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x31b28cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31b290: 0x0  nop
    ctx->pc = 0x31b290u;
    // NOP
    // 0x31b294: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x31b294u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x31b298: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x31b298u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_31b29c:
    // 0x31b29c: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x31b29cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b2a0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x31b2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x31b2a4: 0xadc80110  sw          $t0, 0x110($t6)
    ctx->pc = 0x31b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 272), GPR_U32(ctx, 8));
    // 0x31b2a8: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x31b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
    // 0x31b2ac: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31b2acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x31b2b0: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x31b2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b2b4: 0xd6042  srl         $t4, $t5, 1
    ctx->pc = 0x31b2b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x31b2b8: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x31b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x31b2bc: 0x2508a090  addiu       $t0, $t0, -0x5F70
    ctx->pc = 0x31b2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942864));
    // 0x31b2c0: 0xadc50010  sw          $a1, 0x10($t6)
    ctx->pc = 0x31b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 5));
    // 0x31b2c4: 0xadc30014  sw          $v1, 0x14($t6)
    ctx->pc = 0x31b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 3));
    // 0x31b2c8: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x31b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x31b2cc: 0xadcc0018  sw          $t4, 0x18($t6)
    ctx->pc = 0x31b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 12));
    // 0x31b2d0: 0xadc4001c  sw          $a0, 0x1C($t6)
    ctx->pc = 0x31b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 4));
    // 0x31b2d4: 0xadca0020  sw          $t2, 0x20($t6)
    ctx->pc = 0x31b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 32), GPR_U32(ctx, 10));
    // 0x31b2d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b2dc: 0xadcb0024  sw          $t3, 0x24($t6)
    ctx->pc = 0x31b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 36), GPR_U32(ctx, 11));
    // 0x31b2e0: 0xadc30028  sw          $v1, 0x28($t6)
    ctx->pc = 0x31b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 3));
    // 0x31b2e4: 0xadcd002c  sw          $t5, 0x2C($t6)
    ctx->pc = 0x31b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 13));
    // 0x31b2e8: 0xadc90030  sw          $t1, 0x30($t6)
    ctx->pc = 0x31b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 9));
    // 0x31b2ec: 0xadc60008  sw          $a2, 0x8($t6)
    ctx->pc = 0x31b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 6));
    // 0x31b2f0: 0xadc7000c  sw          $a3, 0xC($t6)
    ctx->pc = 0x31b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 7));
    // 0x31b2f4: 0xe5cd0034  swc1        $f13, 0x34($t6)
    ctx->pc = 0x31b2f4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 52), bits); }
    // 0x31b2f8: 0xe5ce0038  swc1        $f14, 0x38($t6)
    ctx->pc = 0x31b2f8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 56), bits); }
    // 0x31b2fc: 0xadc80114  sw          $t0, 0x114($t6)
    ctx->pc = 0x31b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 276), GPR_U32(ctx, 8));
label_31b300:
    // 0x31b300: 0x3e00008  jr          $ra
    ctx->pc = 0x31B300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31B308u;
    // 0x31b308: 0x0  nop
    ctx->pc = 0x31b308u;
    // NOP
    // 0x31b30c: 0x0  nop
    ctx->pc = 0x31b30cu;
    // NOP
    ctx->pc = 0x31b310u;
}
