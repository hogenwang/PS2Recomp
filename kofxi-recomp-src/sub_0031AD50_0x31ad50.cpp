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

// Function: sub_0031AD50
// Address: 0x31ad50 - 0x31b0d0
void sub_0031AD50_0x31ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AD50_0x31ad50");
#endif

    ctx->pc = 0x31ad50u;

    // 0x31ad50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ad54: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AD54u;
    {
        const bool branch_taken_0x31ad54 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31ad54) {
            ctx->pc = 0x31AD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AD54u;
            // 0x31ad58: 0x36042  srl         $t4, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AD6Cu;
            goto label_31ad6c;
        }
    }
    ctx->pc = 0x31AD5Cu;
    // 0x31ad5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ad5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ad60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31AD60u;
    {
        const bool branch_taken_0x31ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD60u;
        // 0x31ad64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad60) {
            ctx->pc = 0x31AD84u;
            goto label_31ad84;
        }
    }
    ctx->pc = 0x31AD68u;
    // 0x31ad68: 0x36042  srl         $t4, $v1, 1
    ctx->pc = 0x31ad68u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_31ad6c:
    // 0x31ad6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31ad6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31ad70: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x31ad70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x31ad74: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31ad74u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ad78: 0x0  nop
    ctx->pc = 0x31ad78u;
    // NOP
    // 0x31ad7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31ad7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31ad80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31ad80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31ad84:
    // 0x31ad84: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x31ad84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x31ad88: 0x3c0c4000  lui         $t4, 0x4000
    ctx->pc = 0x31ad88u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16384 << 16));
    // 0x31ad8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x31ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ad90: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31ad90u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ad94: 0x0  nop
    ctx->pc = 0x31ad94u;
    // NOP
    // 0x31ad98: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31ad98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x31ad9c: 0x0  nop
    ctx->pc = 0x31ad9cu;
    // NOP
    // 0x31ada0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ada0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31ada4: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x31ada4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x31ada8: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31ADA8u;
    {
        const bool branch_taken_0x31ada8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31ada8) {
            ctx->pc = 0x31ADACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ADA8u;
            // 0x31adac: 0x36042  srl         $t4, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ADC0u;
            goto label_31adc0;
        }
    }
    ctx->pc = 0x31ADB0u;
    // 0x31adb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31adb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31adb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31ADB4u;
    {
        const bool branch_taken_0x31adb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADB4u;
        // 0x31adb8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adb4) {
            ctx->pc = 0x31ADD8u;
            goto label_31add8;
        }
    }
    ctx->pc = 0x31ADBCu;
    // 0x31adbc: 0x36042  srl         $t4, $v1, 1
    ctx->pc = 0x31adbcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_31adc0:
    // 0x31adc0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31adc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31adc4: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x31adc4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x31adc8: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31adc8u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31adcc: 0x0  nop
    ctx->pc = 0x31adccu;
    // NOP
    // 0x31add0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31add0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31add4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31add4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31add8:
    // 0x31add8: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x31add8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x31addc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31addcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x31ade0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ade0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ade4: 0x0  nop
    ctx->pc = 0x31ade4u;
    // NOP
    // 0x31ade8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31ade8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x31adec: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31adecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x31adf0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x31adf0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31adf4: 0x0  nop
    ctx->pc = 0x31adf4u;
    // NOP
    // 0x31adf8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x31adf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31adfc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x31adfcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ae00: 0x0  nop
    ctx->pc = 0x31ae00u;
    // NOP
    // 0x31ae04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31ae04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31ae08: 0x46801820  cvt.s.w     $f0, $f3
    ctx->pc = 0x31ae08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31ae0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31ae0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31ae10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ae10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31ae14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31ae14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31ae18: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x31ae18u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ae1c: 0x0  nop
    ctx->pc = 0x31ae1cu;
    // NOP
    // 0x31ae20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31ae20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31ae24: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31ae24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31ae28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ae28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31ae2c: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x31ae2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31ae30: 0x0  nop
    ctx->pc = 0x31ae30u;
    // NOP
    // 0x31ae34: 0x686823  subu        $t5, $v1, $t0
    ctx->pc = 0x31ae34u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x31ae38: 0x686021  addu        $t4, $v1, $t0
    ctx->pc = 0x31ae38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x31ae3c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x31ae3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31ae40: 0x0  nop
    ctx->pc = 0x31ae40u;
    // NOP
    // 0x31ae44: 0x10f4823  subu        $t1, $t0, $t7
    ctx->pc = 0x31ae44u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x31ae48: 0x29210281  slti        $at, $t1, 0x281
    ctx->pc = 0x31ae48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x31ae4c: 0x1020009d  beqz        $at, . + 4 + (0x9D << 2)
    ctx->pc = 0x31AE4Cu;
    {
        const bool branch_taken_0x31ae4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE4Cu;
        // 0x31ae50: 0x10f7021  addu        $t6, $t0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae4c) {
            ctx->pc = 0x31B0C4u;
            goto label_31b0c4;
        }
    }
    ctx->pc = 0x31AE54u;
    // 0x31ae54: 0x5c30004  bgezl       $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AE54u;
    {
        const bool branch_taken_0x31ae54 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x31ae54) {
            ctx->pc = 0x31AE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AE54u;
            // 0x31ae58: 0x29a101e1  slti        $at, $t5, 0x1E1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)481) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AE68u;
            goto label_31ae68;
        }
    }
    ctx->pc = 0x31AE5Cu;
    // 0x31ae5c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x31AE5Cu;
    {
        const bool branch_taken_0x31ae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ae5c) {
            ctx->pc = 0x31B0C4u;
            goto label_31b0c4;
        }
    }
    ctx->pc = 0x31AE64u;
    // 0x31ae64: 0x29a101e1  slti        $at, $t5, 0x1E1
    ctx->pc = 0x31ae64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)481) ? 1 : 0);
label_31ae68:
    // 0x31ae68: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x31AE68u;
    {
        const bool branch_taken_0x31ae68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ae68) {
            ctx->pc = 0x31B0C4u;
            goto label_31b0c4;
        }
    }
    ctx->pc = 0x31AE70u;
    // 0x31ae70: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AE70u;
    {
        const bool branch_taken_0x31ae70 = (GPR_S32(ctx, 12) >= 0);
        if (branch_taken_0x31ae70) {
            ctx->pc = 0x31AE80u;
            goto label_31ae80;
        }
    }
    ctx->pc = 0x31AE78u;
    // 0x31ae78: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x31AE78u;
    {
        const bool branch_taken_0x31ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ae78) {
            ctx->pc = 0x31B0C4u;
            goto label_31b0c4;
        }
    }
    ctx->pc = 0x31AE80u;
label_31ae80:
    // 0x31ae80: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31ae80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31ae84: 0x8d2929e0  lw          $t1, 0x29E0($t1)
    ctx->pc = 0x31ae84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 10720)));
    // 0x31ae88: 0x29290190  slti        $t1, $t1, 0x190
    ctx->pc = 0x31ae88u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x31ae8c: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AE8Cu;
    {
        const bool branch_taken_0x31ae8c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ae8c) {
            ctx->pc = 0x31AEA0u;
            goto label_31aea0;
        }
    }
    ctx->pc = 0x31AE94u;
    // 0x31ae94: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x31ae94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ae98: 0xb8090001  swr         $t1, 0x1($zero)
    ctx->pc = 0x31ae98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31ae9c: 0xa8090004  swl         $t1, 0x4($zero)
    ctx->pc = 0x31ae9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31aea0:
    // 0x31aea0: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31aea0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31aea4: 0x3c0d447a  lui         $t5, 0x447A
    ctx->pc = 0x31aea4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)17530 << 16));
    // 0x31aea8: 0x8d3829e0  lw          $t8, 0x29E0($t1)
    ctx->pc = 0x31aea8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 10720)));
    // 0x31aeac: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x31aeacu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aeb0: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x31aeb0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x31aeb4: 0x3c0c4f00  lui         $t4, 0x4F00
    ctx->pc = 0x31aeb4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20224 << 16));
    // 0x31aeb8: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x31aeb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31aebc: 0x25ce4df0  addiu       $t6, $t6, 0x4DF0
    ctx->pc = 0x31aebcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 19952));
    // 0x31aec0: 0x1868c0  sll         $t5, $t8, 3
    ctx->pc = 0x31aec0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x31aec4: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31aec4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31aec8: 0x1b87823  subu        $t7, $t5, $t8
    ctx->pc = 0x31aec8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
    // 0x31aecc: 0x270d0001  addiu       $t5, $t8, 0x1
    ctx->pc = 0x31aeccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x31aed0: 0xad2d29e0  sw          $t5, 0x29E0($t1)
    ctx->pc = 0x31aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 10720), GPR_U32(ctx, 13));
    // 0x31aed4: 0xf4880  sll         $t1, $t7, 2
    ctx->pc = 0x31aed4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x31aed8: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31aed8u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aedc: 0x1e94821  addu        $t1, $t7, $t1
    ctx->pc = 0x31aedcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x31aee0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x31aee0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x31aee4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31aee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31aee8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31AEE8u;
    {
        const bool branch_taken_0x31aee8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEE8u;
        // 0x31aeec: 0x1c94821  addu        $t1, $t6, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aee8) {
            ctx->pc = 0x31AF00u;
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AEF0u;
    // 0x31aef0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aef0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31aef4: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x31aef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x31aef8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31AEF8u;
    {
        const bool branch_taken_0x31aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEF8u;
        // 0x31aefc: 0x3c0c8000  lui         $t4, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aef8) {
            ctx->pc = 0x31AF1Cu;
            goto label_31af1c;
        }
    }
    ctx->pc = 0x31AF00u;
label_31af00:
    // 0x31af00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31af00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31af04: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x31af04u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x31af08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31af08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31af0c: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x31af0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x31af10: 0x0  nop
    ctx->pc = 0x31af10u;
    // NOP
    // 0x31af14: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x31af14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x31af18: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x31af18u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
label_31af1c:
    // 0x31af1c: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x31af1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31af20: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x31af20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x31af24: 0xad2c0110  sw          $t4, 0x110($t1)
    ctx->pc = 0x31af24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 272), GPR_U32(ctx, 12));
    // 0x31af28: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x31af28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x31af2c: 0x3c0ce904  lui         $t4, 0xE904
    ctx->pc = 0x31af2cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)59652 << 16));
    // 0x31af30: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x31af30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x31af34: 0xf7042  srl         $t6, $t7, 1
    ctx->pc = 0x31af34u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
    // 0x31af38: 0xad280010  sw          $t0, 0x10($t1)
    ctx->pc = 0x31af38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 8));
    // 0x31af3c: 0x358c52d5  ori         $t4, $t4, 0x52D5
    ctx->pc = 0x31af3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)21205);
    // 0x31af40: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x31af40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x31af44: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x31af44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31af48: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x31af48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x31af4c: 0xad2e0018  sw          $t6, 0x18($t1)
    ctx->pc = 0x31af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 14));
    // 0x31af50: 0x24634e40  addiu       $v1, $v1, 0x4E40
    ctx->pc = 0x31af50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20032));
    // 0x31af54: 0xd4042  srl         $t0, $t5, 1
    ctx->pc = 0x31af54u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x31af58: 0xad28001c  sw          $t0, 0x1C($t1)
    ctx->pc = 0x31af58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 8));
    // 0x31af5c: 0xad2a0020  sw          $t2, 0x20($t1)
    ctx->pc = 0x31af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 10));
    // 0x31af60: 0xad2b0024  sw          $t3, 0x24($t1)
    ctx->pc = 0x31af60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 11));
    // 0x31af64: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x31af64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31af68: 0x97ab0018  lhu         $t3, 0x18($sp)
    ctx->pc = 0x31af68u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31af6c: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x31af6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31af70: 0xad2a0028  sw          $t2, 0x28($t1)
    ctx->pc = 0x31af70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 10));
    // 0x31af74: 0xad2f002c  sw          $t7, 0x2C($t1)
    ctx->pc = 0x31af74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 15));
    // 0x31af78: 0xb5100  sll         $t2, $t3, 4
    ctx->pc = 0x31af78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x31af7c: 0xad2d0030  sw          $t5, 0x30($t1)
    ctx->pc = 0x31af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 13));
    // 0x31af80: 0x14b5023  subu        $t2, $t2, $t3
    ctx->pc = 0x31af80u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x31af84: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x31af84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x31af88: 0xa3080  sll         $a2, $t2, 2
    ctx->pc = 0x31af88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31af8c: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x31af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x31af90: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x31af90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x31af94: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x31af94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31af98: 0x1860019  multu       $t4, $a2
    ctx->pc = 0x31af98u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 12) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31af9c: 0xe52d0034  swc1        $f13, 0x34($t1)
    ctx->pc = 0x31af9cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 52), bits); }
    // 0x31afa0: 0xe52e0038  swc1        $f14, 0x38($t1)
    ctx->pc = 0x31afa0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 56), bits); }
    // 0x31afa4: 0x3010  mfhi        $a2
    ctx->pc = 0x31afa4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x31afa8: 0x633c2  srl         $a2, $a2, 15
    ctx->pc = 0x31afa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 15));
    // 0x31afac: 0xad26003c  sw          $a2, 0x3C($t1)
    ctx->pc = 0x31afacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 60), GPR_U32(ctx, 6));
    // 0x31afb0: 0xad280040  sw          $t0, 0x40($t1)
    ctx->pc = 0x31afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 8));
    // 0x31afb4: 0x11600004  beqz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AFB4u;
    {
        const bool branch_taken_0x31afb4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFB4u;
        // 0x31afb8: 0xad230114  sw          $v1, 0x114($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31afb4) {
            ctx->pc = 0x31AFC8u;
            goto label_31afc8;
        }
    }
    ctx->pc = 0x31AFBCu;
    // 0x31afbc: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x31afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x31afc0: 0x24635700  addiu       $v1, $v1, 0x5700
    ctx->pc = 0x31afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22272));
    // 0x31afc4: 0xad230114  sw          $v1, 0x114($t1)
    ctx->pc = 0x31afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
label_31afc8:
    // 0x31afc8: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x31afc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x31afcc: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x31afccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x31afd0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AFD0u;
    {
        const bool branch_taken_0x31afd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31afd0) {
            ctx->pc = 0x31AFE8u;
            goto label_31afe8;
        }
    }
    ctx->pc = 0x31AFD8u;
    // 0x31afd8: 0x9483001e  lhu         $v1, 0x1E($a0)
    ctx->pc = 0x31afd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x31afdc: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x31afdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x31afe0: 0x54200020  bnel        $at, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x31AFE0u;
    {
        const bool branch_taken_0x31afe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31afe0) {
            ctx->pc = 0x31AFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AFE0u;
            // 0x31afe4: 0x8c860018  lw          $a2, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B064u;
            goto label_31b064;
        }
    }
    ctx->pc = 0x31AFE8u;
label_31afe8:
    // 0x31afe8: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x31afe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x31afec: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x31afecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x31aff0: 0x24c66bb0  addiu       $a2, $a2, 0x6BB0
    ctx->pc = 0x31aff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27568));
    // 0x31aff4: 0xad260114  sw          $a2, 0x114($t1)
    ctx->pc = 0x31aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 6));
    // 0x31aff8: 0x9486001c  lhu         $a2, 0x1C($a0)
    ctx->pc = 0x31aff8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x31affc: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x31AFFCu;
    {
        const bool branch_taken_0x31affc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x31B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFFCu;
        // 0x31b000: 0x90870018  lbu         $a3, 0x18($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31affc) {
            ctx->pc = 0x31B048u;
            goto label_31b048;
        }
    }
    ctx->pc = 0x31B004u;
    // 0x31b004: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b008: 0x50e30010  beql        $a3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31B008u;
    {
        const bool branch_taken_0x31b008 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b008) {
            ctx->pc = 0x31B00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B008u;
            // 0x31b00c: 0x97a30018  lhu         $v1, 0x18($sp) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B04Cu;
            goto label_31b04c;
        }
    }
    ctx->pc = 0x31B010u;
    // 0x31b010: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x31b010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x31b014: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31b014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31b018: 0x24c677c0  addiu       $a2, $a2, 0x77C0
    ctx->pc = 0x31b018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30656));
    // 0x31b01c: 0x9467dab0  lhu         $a3, -0x2550($v1)
    ctx->pc = 0x31b01cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x31b020: 0xad260114  sw          $a2, 0x114($t1)
    ctx->pc = 0x31b020u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 6));
    // 0x31b024: 0x24060303  addiu       $a2, $zero, 0x303
    ctx->pc = 0x31b024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x31b028: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B028u;
    {
        const bool branch_taken_0x31b028 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x31b028) {
            ctx->pc = 0x31B03Cu;
            goto label_31b03c;
        }
    }
    ctx->pc = 0x31B030u;
    // 0x31b030: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x31b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x31b034: 0x14e30004  bne         $a3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B034u;
    {
        const bool branch_taken_0x31b034 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x31b034) {
            ctx->pc = 0x31B048u;
            goto label_31b048;
        }
    }
    ctx->pc = 0x31B03Cu;
label_31b03c:
    // 0x31b03c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x31b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x31b040: 0x24638350  addiu       $v1, $v1, -0x7CB0
    ctx->pc = 0x31b040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935376));
    // 0x31b044: 0xad230114  sw          $v1, 0x114($t1)
    ctx->pc = 0x31b044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
label_31b048:
    // 0x31b048: 0x97a30018  lhu         $v1, 0x18($sp)
    ctx->pc = 0x31b048u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
label_31b04c:
    // 0x31b04c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B04Cu;
    {
        const bool branch_taken_0x31b04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b04c) {
            ctx->pc = 0x31B060u;
            goto label_31b060;
        }
    }
    ctx->pc = 0x31B054u;
    // 0x31b054: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x31b054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x31b058: 0x24639010  addiu       $v1, $v1, -0x6FF0
    ctx->pc = 0x31b058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938640));
    // 0x31b05c: 0xad230114  sw          $v1, 0x114($t1)
    ctx->pc = 0x31b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
label_31b060:
    // 0x31b060: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x31b060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_31b064:
    // 0x31b064: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x31b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x31b068: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x31b068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x31b06c: 0x14c30015  bne         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x31B06Cu;
    {
        const bool branch_taken_0x31b06c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x31b06c) {
            ctx->pc = 0x31B0C4u;
            goto label_31b0c4;
        }
    }
    ctx->pc = 0x31B074u;
    // 0x31b074: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x31b074u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x31b078: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x31b078u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x31b07c: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B07Cu;
    {
        const bool branch_taken_0x31b07c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b07c) {
            ctx->pc = 0x31B080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B07Cu;
            // 0x31b080: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B098u;
            goto label_31b098;
        }
    }
    ctx->pc = 0x31B084u;
    // 0x31b084: 0x9483001e  lhu         $v1, 0x1E($a0)
    ctx->pc = 0x31b084u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x31b088: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x31b088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x31b08c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B08Cu;
    {
        const bool branch_taken_0x31b08c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b08c) {
            ctx->pc = 0x31B0A0u;
            goto label_31b0a0;
        }
    }
    ctx->pc = 0x31B094u;
    // 0x31b094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31b098:
    // 0x31b098: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31b098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31b09c: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x31b09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31b0a0:
    // 0x31b0a0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31b0a4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x31b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31b0a8: 0x24634380  addiu       $v1, $v1, 0x4380
    ctx->pc = 0x31b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17280));
    // 0x31b0ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b0b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x31b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b0b4: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x31b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x31b0b8: 0x24636370  addiu       $v1, $v1, 0x6370
    ctx->pc = 0x31b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25456));
    // 0x31b0bc: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x31b0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
    // 0x31b0c0: 0xad230114  sw          $v1, 0x114($t1)
    ctx->pc = 0x31b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
label_31b0c4:
    // 0x31b0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x31B0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B0CCu;
    // 0x31b0cc: 0x0  nop
    ctx->pc = 0x31b0ccu;
    // NOP
    if (ctx->pc == 0x31b0ccu) { ctx->pc = 0x31b0d0u; }
}
