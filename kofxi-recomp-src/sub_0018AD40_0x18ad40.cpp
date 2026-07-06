#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018AD40
// Address: 0x18ad40 - 0x18ade0
void sub_0018AD40_0x18ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AD40_0x18ad40");
#endif

    switch (ctx->pc) {
        case 0x18ad54u: goto label_18ad54;
        case 0x18ad60u: goto label_18ad60;
        case 0x18ad80u: goto label_18ad80;
        default: break;
    }

    ctx->pc = 0x18ad40u;

    // 0x18ad40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ad44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ad48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ad4c: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x18AD4Cu;
    SET_GPR_U32(ctx, 31, 0x18AD54u);
    ctx->pc = 0x18AD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD4Cu;
            // 0x18ad50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD54u; }
        if (ctx->pc != 0x18AD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD54u; }
        if (ctx->pc != 0x18AD54u) { return; }
    }
    ctx->pc = 0x18AD54u;
label_18ad54:
    // 0x18ad54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad58: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x18AD58u;
    SET_GPR_U32(ctx, 31, 0x18AD60u);
    ctx->pc = 0x18AD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD58u;
            // 0x18ad5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (runtime->hasFunction(0x189F60u)) {
        auto targetFn = runtime->lookupFunction(0x189F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD60u; }
        if (ctx->pc != 0x18AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F60_0x189f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD60u; }
        if (ctx->pc != 0x18AD60u) { return; }
    }
    ctx->pc = 0x18AD60u;
label_18ad60:
    // 0x18ad60: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18ad64: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18ad68: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x18ad68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ad6c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x18ad6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ad70: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ad74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ad74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ad78: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x18AD78u;
    SET_GPR_U32(ctx, 31, 0x18AD80u);
    ctx->pc = 0x18AD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD78u;
            // 0x18ad7c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (runtime->hasFunction(0x12EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD80u; }
        if (ctx->pc != 0x18AD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFB0_0x12efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD80u; }
        if (ctx->pc != 0x18AD80u) { return; }
    }
    ctx->pc = 0x18AD80u;
label_18ad80:
    // 0x18ad80: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x18ad84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ad84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ad88: 0x0  nop
    ctx->pc = 0x18ad88u;
    // NOP
    // 0x18ad8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ad8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ad90: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x18AD90u;
    {
        const bool branch_taken_0x18ad90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ad90) {
            ctx->pc = 0x18AD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD90u;
            // 0x18ad94: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18ADA8u;
            goto label_18ada8;
        }
    }
    ctx->pc = 0x18AD98u;
    // 0x18ad98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18ad98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18ad9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18ad9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18ada0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18ADA0u;
    {
        const bool branch_taken_0x18ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADA0u;
            // 0x18ada4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ada0) {
            ctx->pc = 0x18ADC0u;
            goto label_18adc0;
        }
    }
    ctx->pc = 0x18ADA8u;
label_18ada8:
    // 0x18ada8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18adac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18adacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18adb0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18adb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18adb4: 0x0  nop
    ctx->pc = 0x18adb4u;
    // NOP
    // 0x18adb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18adb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18adbc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x18adbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_18adc0:
    // 0x18adc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18adc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18adc4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x18adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18adc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18adc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x18ADCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADCCu;
            // 0x18add0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ADD4u;
    // 0x18add4: 0x0  nop
    ctx->pc = 0x18add4u;
    // NOP
    // 0x18add8: 0x0  nop
    ctx->pc = 0x18add8u;
    // NOP
    // 0x18addc: 0x0  nop
    ctx->pc = 0x18addcu;
    // NOP
    ctx->pc = 0x18ade0u;
}
