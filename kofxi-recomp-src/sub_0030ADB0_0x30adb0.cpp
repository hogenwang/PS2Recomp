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

// Function: sub_0030ADB0
// Address: 0x30adb0 - 0x30af70
void sub_0030ADB0_0x30adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ADB0_0x30adb0");
#endif

    switch (ctx->pc) {
        case 0x30addcu: goto label_30addc;
        case 0x30ade4u: goto label_30ade4;
        case 0x30adf4u: goto label_30adf4;
        case 0x30ae00u: goto label_30ae00;
        case 0x30ae08u: goto label_30ae08;
        case 0x30ae38u: goto label_30ae38;
        case 0x30aed8u: goto label_30aed8;
        case 0x30aee8u: goto label_30aee8;
        case 0x30aef8u: goto label_30aef8;
        case 0x30af08u: goto label_30af08;
        case 0x30af1cu: goto label_30af1c;
        case 0x30af2cu: goto label_30af2c;
        case 0x30af40u: goto label_30af40;
        case 0x30af54u: goto label_30af54;
        default: break;
    }

    ctx->pc = 0x30adb0u;

label_30adb0:
    // 0x30adb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x30adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x30adb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30adb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30adbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30adc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30adc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30adc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30adc8: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30adcc: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x30adccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30add0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30add0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30add4: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30ADD4u;
    SET_GPR_U32(ctx, 31, 0x30ADDCu);
    ctx->pc = 0x30ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADD4u;
    // 0x30add8: 0x24841f40  addiu       $a0, $a0, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x30ADD4u, 0x30ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADDCu;
label_30addc:
    // 0x30addc: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30ADDCu;
    SET_GPR_U32(ctx, 31, 0x30ADE4u);
    ctx->pc = 0x30ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADDCu;
    // 0x30ade0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x30ADDCu, 0x30ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADE4u;
label_30ade4:
    // 0x30ade4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30ade8: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x30ade8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x30adec: 0xc040e92  jal         func_103A48
    ctx->pc = 0x30ADECu;
    SET_GPR_U32(ctx, 31, 0x30ADF4u);
    ctx->pc = 0x30ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADECu;
    // 0x30adf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103A48u, 0x30ADECu, 0x30ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADF4u;
label_30adf4:
    // 0x30adf4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30adf8: 0xc0c25d0  jal         func_309740
    ctx->pc = 0x30ADF8u;
    SET_GPR_U32(ctx, 31, 0x30AE00u);
    ctx->pc = 0x30ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADF8u;
    // 0x30adfc: 0x260500e0  addiu       $a1, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309740u, 0x30ADF8u, 0x30AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE00u;
label_30ae00:
    // 0x30ae00: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30AE00u;
    SET_GPR_U32(ctx, 31, 0x30AE08u);
    ctx->pc = 0x30AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE00u;
    // 0x30ae04: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x30AE00u, 0x30AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE08u;
label_30ae08:
    // 0x30ae08: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x30ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x30ae0c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x30ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x30ae10: 0x34420d0c  ori         $v0, $v0, 0xD0C
    ctx->pc = 0x30ae10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3340);
    // 0x30ae14: 0x34630d0c  ori         $v1, $v1, 0xD0C
    ctx->pc = 0x30ae14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3340);
    // 0x30ae18: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30ae18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30ae1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae20: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x30ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x30ae24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae28: 0x34420d0c  ori         $v0, $v0, 0xD0C
    ctx->pc = 0x30ae28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3340);
    // 0x30ae2c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30ae2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ae30: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x30ae30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30ae34: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x30ae34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30ae38:
    // 0x30ae38: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x30ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ae3c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x30ae3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ae40: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x30AE40u;
    {
        const bool branch_taken_0x30ae40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ae40) {
            ctx->pc = 0x30AE70u;
            goto label_30ae70;
        }
    }
    ctx->pc = 0x30AE48u;
    // 0x30ae48: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x30ae48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x30ae4c: 0x0  nop
    ctx->pc = 0x30ae4cu;
    // NOP
    // 0x30ae50: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x30ae50u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x30ae54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ae54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30ae58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30ae58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30ae5c: 0xc48000f0  lwc1        $f0, 0xF0($a0)
    ctx->pc = 0x30ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ae60: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x30ae60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x30ae64: 0x4601201d  msub.s      $f0, $f4, $f1
    ctx->pc = 0x30ae64u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x30ae68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30AE68u;
    {
        const bool branch_taken_0x30ae68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE68u;
        // 0x30ae6c: 0xe48000f0  swc1        $f0, 0xF0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae68) {
            ctx->pc = 0x30AEB8u;
            goto label_30aeb8;
        }
    }
    ctx->pc = 0x30AE70u;
label_30ae70:
    // 0x30ae70: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30ae70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ae74: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x30AE74u;
    {
        const bool branch_taken_0x30ae74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ae74) {
            ctx->pc = 0x30AEB8u;
            goto label_30aeb8;
        }
    }
    ctx->pc = 0x30AE7Cu;
    // 0x30ae7c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x30ae7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x30ae80: 0x0  nop
    ctx->pc = 0x30ae80u;
    // NOP
    // 0x30ae84: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x30ae84u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x30ae88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ae88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30ae8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x30ae8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30ae90: 0x0  nop
    ctx->pc = 0x30ae90u;
    // NOP
    // 0x30ae94: 0x21023  negu        $v0, $v0
    ctx->pc = 0x30ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x30ae98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ae98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ae9c: 0x0  nop
    ctx->pc = 0x30ae9cu;
    // NOP
    // 0x30aea0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30aea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30aea4: 0xc48000f0  lwc1        $f0, 0xF0($a0)
    ctx->pc = 0x30aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30aea8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x30aea8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x30aeac: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x30aeacu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x30aeb0: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x30aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x30aeb4: 0x0  nop
    ctx->pc = 0x30aeb4u;
    // NOP
label_30aeb8:
    // 0x30aeb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30aebc: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x30aebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30aec0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x30AEC0u;
    {
        const bool branch_taken_0x30aec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEC0u;
        // 0x30aec4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aec0) {
            ctx->pc = 0x30AE38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ae38;
        }
    }
    ctx->pc = 0x30AEC8u;
    // 0x30aec8: 0xc60c00f0  lwc1        $f12, 0xF0($s0)
    ctx->pc = 0x30aec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30aecc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30aed0: 0xc040fa0  jal         func_103E80
    ctx->pc = 0x30AED0u;
    SET_GPR_U32(ctx, 31, 0x30AED8u);
    ctx->pc = 0x30AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AED0u;
    // 0x30aed4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103E80u, 0x30AED0u, 0x30AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AED8u;
label_30aed8:
    // 0x30aed8: 0xc60c00f4  lwc1        $f12, 0xF4($s0)
    ctx->pc = 0x30aed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30aedc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30aee0: 0xc040fde  jal         func_103F78
    ctx->pc = 0x30AEE0u;
    SET_GPR_U32(ctx, 31, 0x30AEE8u);
    ctx->pc = 0x30AEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AEE0u;
    // 0x30aee4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103F78u, 0x30AEE0u, 0x30AEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AEE8u;
label_30aee8:
    // 0x30aee8: 0xc60c00f8  lwc1        $f12, 0xF8($s0)
    ctx->pc = 0x30aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30aeec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30aef0: 0xc040f64  jal         func_103D90
    ctx->pc = 0x30AEF0u;
    SET_GPR_U32(ctx, 31, 0x30AEF8u);
    ctx->pc = 0x30AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AEF0u;
    // 0x30aef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D90u, 0x30AEF0u, 0x30AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AEF8u;
label_30aef8:
    // 0x30aef8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30aefc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30aefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30af00: 0xc040d06  jal         func_103418
    ctx->pc = 0x30AF00u;
    SET_GPR_U32(ctx, 31, 0x30AF08u);
    ctx->pc = 0x30AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF00u;
    // 0x30af04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30AF00u, 0x30AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF08u;
label_30af08:
    // 0x30af08: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30af08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30af0c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x30af0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30af10: 0x24841f40  addiu       $a0, $a0, 0x1F40
    ctx->pc = 0x30af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
    // 0x30af14: 0xc040d06  jal         func_103418
    ctx->pc = 0x30AF14u;
    SET_GPR_U32(ctx, 31, 0x30AF1Cu);
    ctx->pc = 0x30AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF14u;
    // 0x30af18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30AF14u, 0x30AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF1Cu;
label_30af1c:
    // 0x30af1c: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30af20: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x30af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x30af24: 0xc040ec6  jal         func_103B18
    ctx->pc = 0x30AF24u;
    SET_GPR_U32(ctx, 31, 0x30AF2Cu);
    ctx->pc = 0x30AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF24u;
    // 0x30af28: 0x24a51f40  addiu       $a1, $a1, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103B18u, 0x30AF24u, 0x30AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF2Cu;
label_30af2c:
    // 0x30af2c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30af30: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AF30u;
    {
        const bool branch_taken_0x30af30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30af30) {
            ctx->pc = 0x30AF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30AF30u;
            // 0x30af34: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30AF44u;
            goto label_30af44;
        }
    }
    ctx->pc = 0x30AF38u;
    // 0x30af38: 0xc0c2b6c  jal         func_30ADB0
    ctx->pc = 0x30AF38u;
    SET_GPR_U32(ctx, 31, 0x30AF40u);
    ctx->pc = 0x30AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF38u;
    // 0x30af3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ADB0u;
    goto label_30adb0;
    ctx->pc = 0x30AF40u;
label_30af40:
    // 0x30af40: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30af40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30af44:
    // 0x30af44: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AF44u;
    {
        const bool branch_taken_0x30af44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30af44) {
            ctx->pc = 0x30AF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30AF44u;
            // 0x30af48: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30AF58u;
            goto label_30af58;
        }
    }
    ctx->pc = 0x30AF4Cu;
    // 0x30af4c: 0xc0c2b6c  jal         func_30ADB0
    ctx->pc = 0x30AF4Cu;
    SET_GPR_U32(ctx, 31, 0x30AF54u);
    ctx->pc = 0x30AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF4Cu;
    // 0x30af50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ADB0u;
    goto label_30adb0;
    ctx->pc = 0x30AF54u;
label_30af54:
    // 0x30af54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30af54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30af58:
    // 0x30af58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30af58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30af5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30af5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30af60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30af60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30af64: 0x3e00008  jr          $ra
    ctx->pc = 0x30AF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF64u;
        // 0x30af68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AF6Cu;
    // 0x30af6c: 0x0  nop
    ctx->pc = 0x30af6cu;
    // NOP
}
