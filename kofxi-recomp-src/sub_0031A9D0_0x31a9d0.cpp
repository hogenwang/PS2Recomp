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

// Function: sub_0031A9D0
// Address: 0x31a9d0 - 0x31ad50
void sub_0031A9D0_0x31a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A9D0_0x31a9d0");
#endif

    ctx->pc = 0x31a9d0u;

    // 0x31a9d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31a9d4: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A9D4u;
    {
        const bool branch_taken_0x31a9d4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31a9d4) {
            ctx->pc = 0x31A9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A9D4u;
            // 0x31a9d8: 0x36042  srl         $t4, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A9ECu;
            goto label_31a9ec;
        }
    }
    ctx->pc = 0x31A9DCu;
    // 0x31a9dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a9dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a9e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31A9E0u;
    {
        const bool branch_taken_0x31a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9E0u;
        // 0x31a9e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9e0) {
            ctx->pc = 0x31AA04u;
            goto label_31aa04;
        }
    }
    ctx->pc = 0x31A9E8u;
    // 0x31a9e8: 0x36042  srl         $t4, $v1, 1
    ctx->pc = 0x31a9e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_31a9ec:
    // 0x31a9ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31a9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31a9f0: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x31a9f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x31a9f4: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31a9f4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a9f8: 0x0  nop
    ctx->pc = 0x31a9f8u;
    // NOP
    // 0x31a9fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31a9fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31aa00: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31aa00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31aa04:
    // 0x31aa04: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x31aa04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x31aa08: 0x3c0c4000  lui         $t4, 0x4000
    ctx->pc = 0x31aa08u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16384 << 16));
    // 0x31aa0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x31aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31aa10: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31aa10u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa14: 0x0  nop
    ctx->pc = 0x31aa14u;
    // NOP
    // 0x31aa18: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31aa18u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x31aa1c: 0x0  nop
    ctx->pc = 0x31aa1cu;
    // NOP
    // 0x31aa20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aa20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31aa24: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x31aa24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x31aa28: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AA28u;
    {
        const bool branch_taken_0x31aa28 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31aa28) {
            ctx->pc = 0x31AA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AA28u;
            // 0x31aa2c: 0x36042  srl         $t4, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AA40u;
            goto label_31aa40;
        }
    }
    ctx->pc = 0x31AA30u;
    // 0x31aa30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31aa30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31AA34u;
    {
        const bool branch_taken_0x31aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA34u;
        // 0x31aa38: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa34) {
            ctx->pc = 0x31AA58u;
            goto label_31aa58;
        }
    }
    ctx->pc = 0x31AA3Cu;
    // 0x31aa3c: 0x36042  srl         $t4, $v1, 1
    ctx->pc = 0x31aa3cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_31aa40:
    // 0x31aa40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31aa40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31aa44: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x31aa44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x31aa48: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31aa48u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa4c: 0x0  nop
    ctx->pc = 0x31aa4cu;
    // NOP
    // 0x31aa50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31aa50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31aa54: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31aa54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31aa58:
    // 0x31aa58: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x31aa58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x31aa5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x31aa60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31aa60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa64: 0x0  nop
    ctx->pc = 0x31aa64u;
    // NOP
    // 0x31aa68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31aa68u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x31aa6c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aa6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x31aa70: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x31aa70u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa74: 0x0  nop
    ctx->pc = 0x31aa74u;
    // NOP
    // 0x31aa78: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x31aa78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31aa7c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x31aa7cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa80: 0x0  nop
    ctx->pc = 0x31aa80u;
    // NOP
    // 0x31aa84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31aa84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31aa88: 0x46801820  cvt.s.w     $f0, $f3
    ctx->pc = 0x31aa88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31aa8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31aa8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31aa90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aa90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31aa94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31aa94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31aa98: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x31aa98u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa9c: 0x0  nop
    ctx->pc = 0x31aa9cu;
    // NOP
    // 0x31aaa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31aaa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31aaa4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31aaa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31aaa8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aaa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31aaac: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x31aaacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31aab0: 0x0  nop
    ctx->pc = 0x31aab0u;
    // NOP
    // 0x31aab4: 0x686823  subu        $t5, $v1, $t0
    ctx->pc = 0x31aab4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x31aab8: 0x686021  addu        $t4, $v1, $t0
    ctx->pc = 0x31aab8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x31aabc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x31aabcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31aac0: 0x0  nop
    ctx->pc = 0x31aac0u;
    // NOP
    // 0x31aac4: 0x10f4823  subu        $t1, $t0, $t7
    ctx->pc = 0x31aac4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x31aac8: 0x29210281  slti        $at, $t1, 0x281
    ctx->pc = 0x31aac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x31aacc: 0x1020009b  beqz        $at, . + 4 + (0x9B << 2)
    ctx->pc = 0x31AACCu;
    {
        const bool branch_taken_0x31aacc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AACCu;
        // 0x31aad0: 0x10f7021  addu        $t6, $t0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aacc) {
            ctx->pc = 0x31AD3Cu;
            goto label_31ad3c;
        }
    }
    ctx->pc = 0x31AAD4u;
    // 0x31aad4: 0x5c30004  bgezl       $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AAD4u;
    {
        const bool branch_taken_0x31aad4 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x31aad4) {
            ctx->pc = 0x31AAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AAD4u;
            // 0x31aad8: 0x29a101e1  slti        $at, $t5, 0x1E1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)481) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAE8u;
            goto label_31aae8;
        }
    }
    ctx->pc = 0x31AADCu;
    // 0x31aadc: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x31AADCu;
    {
        const bool branch_taken_0x31aadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aadc) {
            ctx->pc = 0x31AD3Cu;
            goto label_31ad3c;
        }
    }
    ctx->pc = 0x31AAE4u;
    // 0x31aae4: 0x29a101e1  slti        $at, $t5, 0x1E1
    ctx->pc = 0x31aae4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)481) ? 1 : 0);
label_31aae8:
    // 0x31aae8: 0x10200094  beqz        $at, . + 4 + (0x94 << 2)
    ctx->pc = 0x31AAE8u;
    {
        const bool branch_taken_0x31aae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aae8) {
            ctx->pc = 0x31AD3Cu;
            goto label_31ad3c;
        }
    }
    ctx->pc = 0x31AAF0u;
    // 0x31aaf0: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AAF0u;
    {
        const bool branch_taken_0x31aaf0 = (GPR_S32(ctx, 12) >= 0);
        if (branch_taken_0x31aaf0) {
            ctx->pc = 0x31AB00u;
            goto label_31ab00;
        }
    }
    ctx->pc = 0x31AAF8u;
    // 0x31aaf8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x31AAF8u;
    {
        const bool branch_taken_0x31aaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aaf8) {
            ctx->pc = 0x31AD3Cu;
            goto label_31ad3c;
        }
    }
    ctx->pc = 0x31AB00u;
label_31ab00:
    // 0x31ab00: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31ab00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31ab04: 0x8d2929e0  lw          $t1, 0x29E0($t1)
    ctx->pc = 0x31ab04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 10720)));
    // 0x31ab08: 0x29290190  slti        $t1, $t1, 0x190
    ctx->pc = 0x31ab08u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x31ab0c: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AB0Cu;
    {
        const bool branch_taken_0x31ab0c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ab0c) {
            ctx->pc = 0x31AB20u;
            goto label_31ab20;
        }
    }
    ctx->pc = 0x31AB14u;
    // 0x31ab14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x31ab14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ab18: 0xb8090001  swr         $t1, 0x1($zero)
    ctx->pc = 0x31ab18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31ab1c: 0xa8090004  swl         $t1, 0x4($zero)
    ctx->pc = 0x31ab1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31ab20:
    // 0x31ab20: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31ab20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31ab24: 0x3c0d447a  lui         $t5, 0x447A
    ctx->pc = 0x31ab24u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)17530 << 16));
    // 0x31ab28: 0x8d3829e0  lw          $t8, 0x29E0($t1)
    ctx->pc = 0x31ab28u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 10720)));
    // 0x31ab2c: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x31ab2cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ab30: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x31ab30u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x31ab34: 0x3c0c4f00  lui         $t4, 0x4F00
    ctx->pc = 0x31ab34u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20224 << 16));
    // 0x31ab38: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x31ab38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31ab3c: 0x25ce4df0  addiu       $t6, $t6, 0x4DF0
    ctx->pc = 0x31ab3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 19952));
    // 0x31ab40: 0x1868c0  sll         $t5, $t8, 3
    ctx->pc = 0x31ab40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x31ab44: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31ab44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31ab48: 0x1b87823  subu        $t7, $t5, $t8
    ctx->pc = 0x31ab48u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
    // 0x31ab4c: 0x270d0001  addiu       $t5, $t8, 0x1
    ctx->pc = 0x31ab4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x31ab50: 0xad2d29e0  sw          $t5, 0x29E0($t1)
    ctx->pc = 0x31ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 10720), GPR_U32(ctx, 13));
    // 0x31ab54: 0xf4880  sll         $t1, $t7, 2
    ctx->pc = 0x31ab54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x31ab58: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x31ab58u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ab5c: 0x1e94821  addu        $t1, $t7, $t1
    ctx->pc = 0x31ab5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x31ab60: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x31ab60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x31ab64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31ab64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ab68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31AB68u;
    {
        const bool branch_taken_0x31ab68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB68u;
        // 0x31ab6c: 0x1c94821  addu        $t1, $t6, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab68) {
            ctx->pc = 0x31AB80u;
            goto label_31ab80;
        }
    }
    ctx->pc = 0x31AB70u;
    // 0x31ab70: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ab70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31ab74: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x31ab74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x31ab78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31AB78u;
    {
        const bool branch_taken_0x31ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB78u;
        // 0x31ab7c: 0x3c0c8000  lui         $t4, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab78) {
            ctx->pc = 0x31AB9Cu;
            goto label_31ab9c;
        }
    }
    ctx->pc = 0x31AB80u;
label_31ab80:
    // 0x31ab80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ab80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31ab84: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x31ab84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x31ab88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ab88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31ab8c: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x31ab8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x31ab90: 0x0  nop
    ctx->pc = 0x31ab90u;
    // NOP
    // 0x31ab94: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x31ab94u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x31ab98: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x31ab98u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
label_31ab9c:
    // 0x31ab9c: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x31ab9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31aba0: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x31aba0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x31aba4: 0xad2c0110  sw          $t4, 0x110($t1)
    ctx->pc = 0x31aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 272), GPR_U32(ctx, 12));
    // 0x31aba8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x31aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x31abac: 0x3c0ce904  lui         $t4, 0xE904
    ctx->pc = 0x31abacu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)59652 << 16));
    // 0x31abb0: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x31abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x31abb4: 0xf7042  srl         $t6, $t7, 1
    ctx->pc = 0x31abb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
    // 0x31abb8: 0xad280010  sw          $t0, 0x10($t1)
    ctx->pc = 0x31abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 8));
    // 0x31abbc: 0x358c52d5  ori         $t4, $t4, 0x52D5
    ctx->pc = 0x31abbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)21205);
    // 0x31abc0: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x31abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x31abc4: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x31abc4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31abc8: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x31abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x31abcc: 0xad2e0018  sw          $t6, 0x18($t1)
    ctx->pc = 0x31abccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 14));
    // 0x31abd0: 0x24634e40  addiu       $v1, $v1, 0x4E40
    ctx->pc = 0x31abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20032));
    // 0x31abd4: 0xd4042  srl         $t0, $t5, 1
    ctx->pc = 0x31abd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x31abd8: 0xad28001c  sw          $t0, 0x1C($t1)
    ctx->pc = 0x31abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 8));
    // 0x31abdc: 0xad2a0020  sw          $t2, 0x20($t1)
    ctx->pc = 0x31abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 10));
    // 0x31abe0: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x31abe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31abe4: 0xad2b0024  sw          $t3, 0x24($t1)
    ctx->pc = 0x31abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 11));
    // 0x31abe8: 0x97aa0018  lhu         $t2, 0x18($sp)
    ctx->pc = 0x31abe8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31abec: 0xad280028  sw          $t0, 0x28($t1)
    ctx->pc = 0x31abecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 8));
    // 0x31abf0: 0xad2f002c  sw          $t7, 0x2C($t1)
    ctx->pc = 0x31abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 15));
    // 0x31abf4: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x31abf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x31abf8: 0xad2d0030  sw          $t5, 0x30($t1)
    ctx->pc = 0x31abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 13));
    // 0x31abfc: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x31abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x31ac00: 0x10a4023  subu        $t0, $t0, $t2
    ctx->pc = 0x31ac00u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x31ac04: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x31ac04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x31ac08: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x31ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x31ac0c: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x31ac0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x31ac10: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x31ac10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31ac14: 0x1860019  multu       $t4, $a2
    ctx->pc = 0x31ac14u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 12) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31ac18: 0xe52d0034  swc1        $f13, 0x34($t1)
    ctx->pc = 0x31ac18u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 52), bits); }
    // 0x31ac1c: 0xe52e0038  swc1        $f14, 0x38($t1)
    ctx->pc = 0x31ac1cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 56), bits); }
    // 0x31ac20: 0x3010  mfhi        $a2
    ctx->pc = 0x31ac20u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x31ac24: 0x633c2  srl         $a2, $a2, 15
    ctx->pc = 0x31ac24u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 15));
    // 0x31ac28: 0xad26003c  sw          $a2, 0x3C($t1)
    ctx->pc = 0x31ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 60), GPR_U32(ctx, 6));
    // 0x31ac2c: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AC2Cu;
    {
        const bool branch_taken_0x31ac2c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC2Cu;
        // 0x31ac30: 0xad230114  sw          $v1, 0x114($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac2c) {
            ctx->pc = 0x31AC40u;
            goto label_31ac40;
        }
    }
    ctx->pc = 0x31AC34u;
    // 0x31ac34: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x31ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x31ac38: 0x24635700  addiu       $v1, $v1, 0x5700
    ctx->pc = 0x31ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22272));
    // 0x31ac3c: 0xad230114  sw          $v1, 0x114($t1)
    ctx->pc = 0x31ac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
label_31ac40:
    // 0x31ac40: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x31ac40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x31ac44: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x31ac44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x31ac48: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AC48u;
    {
        const bool branch_taken_0x31ac48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ac48) {
            ctx->pc = 0x31AC60u;
            goto label_31ac60;
        }
    }
    ctx->pc = 0x31AC50u;
    // 0x31ac50: 0x9483001e  lhu         $v1, 0x1E($a0)
    ctx->pc = 0x31ac50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x31ac54: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x31ac54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x31ac58: 0x54200020  bnel        $at, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x31AC58u;
    {
        const bool branch_taken_0x31ac58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ac58) {
            ctx->pc = 0x31AC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AC58u;
            // 0x31ac5c: 0x8c860018  lw          $a2, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ACDCu;
            goto label_31acdc;
        }
    }
    ctx->pc = 0x31AC60u;
label_31ac60:
    // 0x31ac60: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x31ac60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x31ac64: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x31ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x31ac68: 0x24c66bb0  addiu       $a2, $a2, 0x6BB0
    ctx->pc = 0x31ac68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27568));
    // 0x31ac6c: 0xad260114  sw          $a2, 0x114($t1)
    ctx->pc = 0x31ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 6));
    // 0x31ac70: 0x9486001c  lhu         $a2, 0x1C($a0)
    ctx->pc = 0x31ac70u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x31ac74: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x31AC74u;
    {
        const bool branch_taken_0x31ac74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x31AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC74u;
        // 0x31ac78: 0x90870018  lbu         $a3, 0x18($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac74) {
            ctx->pc = 0x31ACC0u;
            goto label_31acc0;
        }
    }
    ctx->pc = 0x31AC7Cu;
    // 0x31ac7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ac80: 0x50e30010  beql        $a3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31AC80u;
    {
        const bool branch_taken_0x31ac80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x31ac80) {
            ctx->pc = 0x31AC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AC80u;
            // 0x31ac84: 0x97a30018  lhu         $v1, 0x18($sp) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ACC4u;
            goto label_31acc4;
        }
    }
    ctx->pc = 0x31AC88u;
    // 0x31ac88: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x31ac88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x31ac8c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31ac90: 0x24c677c0  addiu       $a2, $a2, 0x77C0
    ctx->pc = 0x31ac90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30656));
    // 0x31ac94: 0x9467dab0  lhu         $a3, -0x2550($v1)
    ctx->pc = 0x31ac94u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x31ac98: 0xad260114  sw          $a2, 0x114($t1)
    ctx->pc = 0x31ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 6));
    // 0x31ac9c: 0x24060303  addiu       $a2, $zero, 0x303
    ctx->pc = 0x31ac9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x31aca0: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31ACA0u;
    {
        const bool branch_taken_0x31aca0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x31aca0) {
            ctx->pc = 0x31ACB4u;
            goto label_31acb4;
        }
    }
    ctx->pc = 0x31ACA8u;
    // 0x31aca8: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x31aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x31acac: 0x14e30004  bne         $a3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31ACACu;
    {
        const bool branch_taken_0x31acac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x31acac) {
            ctx->pc = 0x31ACC0u;
            goto label_31acc0;
        }
    }
    ctx->pc = 0x31ACB4u;
label_31acb4:
    // 0x31acb4: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x31acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x31acb8: 0x24638350  addiu       $v1, $v1, -0x7CB0
    ctx->pc = 0x31acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935376));
    // 0x31acbc: 0xad230114  sw          $v1, 0x114($t1)
    ctx->pc = 0x31acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
label_31acc0:
    // 0x31acc0: 0x97a30018  lhu         $v1, 0x18($sp)
    ctx->pc = 0x31acc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
label_31acc4:
    // 0x31acc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31ACC4u;
    {
        const bool branch_taken_0x31acc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31acc4) {
            ctx->pc = 0x31ACD8u;
            goto label_31acd8;
        }
    }
    ctx->pc = 0x31ACCCu;
    // 0x31accc: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x31acccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x31acd0: 0x24639010  addiu       $v1, $v1, -0x6FF0
    ctx->pc = 0x31acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938640));
    // 0x31acd4: 0xad230114  sw          $v1, 0x114($t1)
    ctx->pc = 0x31acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
label_31acd8:
    // 0x31acd8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x31acd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_31acdc:
    // 0x31acdc: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x31acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x31ace0: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x31ace0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x31ace4: 0x14c30015  bne         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x31ACE4u;
    {
        const bool branch_taken_0x31ace4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ace4) {
            ctx->pc = 0x31AD3Cu;
            goto label_31ad3c;
        }
    }
    ctx->pc = 0x31ACECu;
    // 0x31acec: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x31acecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x31acf0: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x31acf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x31acf4: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31ACF4u;
    {
        const bool branch_taken_0x31acf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31acf4) {
            ctx->pc = 0x31ACF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ACF4u;
            // 0x31acf8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AD10u;
            goto label_31ad10;
        }
    }
    ctx->pc = 0x31ACFCu;
    // 0x31acfc: 0x9483001e  lhu         $v1, 0x1E($a0)
    ctx->pc = 0x31acfcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x31ad00: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x31ad00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x31ad04: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AD04u;
    {
        const bool branch_taken_0x31ad04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ad04) {
            ctx->pc = 0x31AD18u;
            goto label_31ad18;
        }
    }
    ctx->pc = 0x31AD0Cu;
    // 0x31ad0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ad10:
    // 0x31ad10: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31ad10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31ad14: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x31ad14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31ad18:
    // 0x31ad18: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ad1c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x31ad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31ad20: 0x24634380  addiu       $v1, $v1, 0x4380
    ctx->pc = 0x31ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17280));
    // 0x31ad24: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31ad28: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x31ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31ad2c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x31ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x31ad30: 0x24636370  addiu       $v1, $v1, 0x6370
    ctx->pc = 0x31ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25456));
    // 0x31ad34: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x31ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
    // 0x31ad38: 0xad230114  sw          $v1, 0x114($t1)
    ctx->pc = 0x31ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
label_31ad3c:
    // 0x31ad3c: 0x3e00008  jr          $ra
    ctx->pc = 0x31AD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AD44u;
    // 0x31ad44: 0x0  nop
    ctx->pc = 0x31ad44u;
    // NOP
    // 0x31ad48: 0x0  nop
    ctx->pc = 0x31ad48u;
    // NOP
    // 0x31ad4c: 0x0  nop
    ctx->pc = 0x31ad4cu;
    // NOP
    if (ctx->pc == 0x31ad4cu) { ctx->pc = 0x31ad50u; }
}
