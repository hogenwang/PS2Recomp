#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150F20
// Address: 0x150f20 - 0x151110
void sub_00150F20_0x150f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150F20_0x150f20");
#endif

    ctx->pc = 0x150f20u;

    // 0x150f20: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x150f24: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x150f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x150f28: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150f2c: 0x9468f108  lhu         $t0, -0xEF8($v1)
    ctx->pc = 0x150f2cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963464)));
    // 0x150f30: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150F30u;
    {
        const bool branch_taken_0x150f30 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x150F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150F30u;
            // 0x150f34: 0x448c0  sll         $t1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f30) {
            ctx->pc = 0x150F44u;
            goto label_150f44;
        }
    }
    ctx->pc = 0x150F38u;
    // 0x150f38: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x150f38u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x150F3Cu;
    {
        const bool branch_taken_0x150f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150F3Cu;
            // 0x150f40: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f3c) {
            ctx->pc = 0x150F60u;
            goto label_150f60;
        }
    }
    ctx->pc = 0x150F44u;
label_150f44:
    // 0x150f44: 0x82042  srl         $a0, $t0, 1
    ctx->pc = 0x150f44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x150f48: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x150f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x150f4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x150f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x150f50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150f50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f54: 0x0  nop
    ctx->pc = 0x150f54u;
    // NOP
    // 0x150f58: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x150f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x150f5c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x150f5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_150f60:
    // 0x150f60: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150f64: 0x2463f130  addiu       $v1, $v1, -0xED0
    ctx->pc = 0x150f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963504));
    // 0x150f68: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x150f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x150f6c: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150F6Cu;
    {
        const bool branch_taken_0x150f6c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x150F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150F6Cu;
            // 0x150f70: 0xc4620000  lwc1        $f2, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f6c) {
            ctx->pc = 0x150F80u;
            goto label_150f80;
        }
    }
    ctx->pc = 0x150F74u;
    // 0x150f74: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x150f74u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x150F78u;
    {
        const bool branch_taken_0x150f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150F78u;
            // 0x150f7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f78) {
            ctx->pc = 0x150F9Cu;
            goto label_150f9c;
        }
    }
    ctx->pc = 0x150F80u;
label_150f80:
    // 0x150f80: 0x82042  srl         $a0, $t0, 1
    ctx->pc = 0x150f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x150f84: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x150f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x150f88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x150f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x150f8c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150f8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f90: 0x0  nop
    ctx->pc = 0x150f90u;
    // NOP
    // 0x150f94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x150f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x150f98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x150f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_150f9c:
    // 0x150f9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fa0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150fa4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x150fa4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x150fa8: 0x9468f10a  lhu         $t0, -0xEF6($v1)
    ctx->pc = 0x150fa8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963466)));
    // 0x150fac: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x150facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x150fb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150fb4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x150fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x150fb8: 0x0  nop
    ctx->pc = 0x150fb8u;
    // NOP
    // 0x150fbc: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x150fbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x150fc0: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150FC0u;
    {
        const bool branch_taken_0x150fc0 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x150FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150FC0u;
            // 0x150fc4: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fc0) {
            ctx->pc = 0x150FD4u;
            goto label_150fd4;
        }
    }
    ctx->pc = 0x150FC8u;
    // 0x150fc8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x150fc8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x150FCCu;
    {
        const bool branch_taken_0x150fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150FCCu;
            // 0x150fd0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fcc) {
            ctx->pc = 0x150FF0u;
            goto label_150ff0;
        }
    }
    ctx->pc = 0x150FD4u;
label_150fd4:
    // 0x150fd4: 0x82042  srl         $a0, $t0, 1
    ctx->pc = 0x150fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x150fd8: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x150fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x150fdc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x150fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x150fe0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150fe0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fe4: 0x0  nop
    ctx->pc = 0x150fe4u;
    // NOP
    // 0x150fe8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x150fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x150fec: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x150fecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_150ff0:
    // 0x150ff0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150ff4: 0x2463f134  addiu       $v1, $v1, -0xECC
    ctx->pc = 0x150ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963508));
    // 0x150ff8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x150ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x150ffc: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150FFCu;
    {
        const bool branch_taken_0x150ffc = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x151000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150FFCu;
            // 0x151000: 0xc4620000  lwc1        $f2, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ffc) {
            ctx->pc = 0x151010u;
            goto label_151010;
        }
    }
    ctx->pc = 0x151004u;
    // 0x151004: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x151004u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151008: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151008u;
    {
        const bool branch_taken_0x151008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15100Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151008u;
            // 0x15100c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151008) {
            ctx->pc = 0x15102Cu;
            goto label_15102c;
        }
    }
    ctx->pc = 0x151010u;
label_151010:
    // 0x151010: 0x82042  srl         $a0, $t0, 1
    ctx->pc = 0x151010u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x151014: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x151014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x151018: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x151018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15101c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15101cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151020: 0x0  nop
    ctx->pc = 0x151020u;
    // NOP
    // 0x151024: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x151024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151028: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x151028u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_15102c:
    // 0x15102c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15102cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151030: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x151030u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151034: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x151034u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x151038: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x151038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x15103c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15103cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151040: 0x31030008  andi        $v1, $t0, 0x8
    ctx->pc = 0x151040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x151044: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x151044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x151048: 0x0  nop
    ctx->pc = 0x151048u;
    // NOP
    // 0x15104c: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x15104cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
    // 0x151050: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x151050u;
    {
        const bool branch_taken_0x151050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151050u;
            // 0x151054: 0x94c3f  dsra32      $t1, $t1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151050) {
            ctx->pc = 0x151074u;
            goto label_151074;
        }
    }
    ctx->pc = 0x151058u;
    // 0x151058: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x151058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x15105c: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x15105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
    // 0x151060: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x151060u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x151064: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x151064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151068: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x151068u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15106c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15106Cu;
    {
        const bool branch_taken_0x15106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15106Cu;
            // 0x151070: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15106c) {
            ctx->pc = 0x151098u;
            goto label_151098;
        }
    }
    ctx->pc = 0x151074u;
label_151074:
    // 0x151074: 0x31030004  andi        $v1, $t0, 0x4
    ctx->pc = 0x151074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x151078: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x151078u;
    {
        const bool branch_taken_0x151078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151078) {
            ctx->pc = 0x15107Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151078u;
            // 0x15107c: 0x84aa0002  lh          $t2, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151098u;
            goto label_151098;
        }
    }
    ctx->pc = 0x151080u;
    // 0x151080: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x151080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x151084: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x151084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
    // 0x151088: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x151088u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15108c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151090: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x151090u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x151094: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x151094u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_151098:
    // 0x151098: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x151098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x15109c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15109Cu;
    {
        const bool branch_taken_0x15109c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15109c) {
            ctx->pc = 0x1510A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15109Cu;
            // 0x1510a0: 0x31030002  andi        $v1, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1510C0u;
            goto label_1510c0;
        }
    }
    ctx->pc = 0x1510A4u;
    // 0x1510a4: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x1510a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1510a8: 0x91c3c  dsll32      $v1, $t1, 16
    ctx->pc = 0x1510a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 16));
    // 0x1510ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1510acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1510b0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1510b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1510b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1510b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1510b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1510B8u;
    {
        const bool branch_taken_0x1510b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1510B8u;
            // 0x1510bc: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510b8) {
            ctx->pc = 0x1510E0u;
            goto label_1510e0;
        }
    }
    ctx->pc = 0x1510C0u;
label_1510c0:
    // 0x1510c0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1510C0u;
    {
        const bool branch_taken_0x1510c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510c0) {
            ctx->pc = 0x1510C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1510C0u;
            // 0x1510c4: 0x84a30004  lh          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1510E0u;
            goto label_1510e0;
        }
    }
    ctx->pc = 0x1510C8u;
    // 0x1510c8: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x1510c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1510cc: 0x91c3c  dsll32      $v1, $t1, 16
    ctx->pc = 0x1510ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 16));
    // 0x1510d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1510d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1510d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1510d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1510d8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1510d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1510dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1510dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1510e0:
    // 0x1510e0: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x1510e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1510e4: 0xa243c  dsll32      $a0, $t2, 16
    ctx->pc = 0x1510e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 16));
    // 0x1510e8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1510e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1510ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1510ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1510f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1510f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1510f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1510f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1510f8: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x1510f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1510fc: 0x84c40004  lh          $a0, 0x4($a2)
    ctx->pc = 0x1510fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x151100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151104: 0x3e00008  jr          $ra
    ctx->pc = 0x151104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151104u;
            // 0x151108: 0xa4e30002  sh          $v1, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15110Cu;
    // 0x15110c: 0x0  nop
    ctx->pc = 0x15110cu;
    // NOP
    ctx->pc = 0x151110u;
}
