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

// Function: sub_00303A30
// Address: 0x303a30 - 0x303b20
void sub_00303A30_0x303a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303A30_0x303a30");
#endif

    switch (ctx->pc) {
        case 0x303a8cu: goto label_303a8c;
        case 0x303a98u: goto label_303a98;
        case 0x303aa4u: goto label_303aa4;
        case 0x303ab4u: goto label_303ab4;
        case 0x303ad4u: goto label_303ad4;
        case 0x303af8u: goto label_303af8;
        default: break;
    }

    ctx->pc = 0x303a30u;

    // 0x303a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x303a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x303a34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x303a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x303a38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x303a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x303a3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x303a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x303a40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x303a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x303a44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x303a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x303a48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x303a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x303a4c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x303a4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x303a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x303a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x303a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x303a58: 0x8443db30  lh          $v1, -0x24D0($v0)
    ctx->pc = 0x303a58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x303a5c: 0xc4940008  lwc1        $f20, 0x8($a0)
    ctx->pc = 0x303a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x303a60: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x303a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303a64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303a68: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x303a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x303a6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303a70: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x303a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x303a74: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x303a74u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x303a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303a7c: 0x0  nop
    ctx->pc = 0x303a7cu;
    // NOP
    // 0x303a80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303a84: 0xc048930  jal         func_1224C0
    ctx->pc = 0x303A84u;
    SET_GPR_U32(ctx, 31, 0x303A8Cu);
    ctx->pc = 0x303A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A84u;
    // 0x303a88: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x303A84u, 0x303A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A8Cu;
label_303a8c:
    // 0x303a8c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x303a8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x303a90: 0xc048930  jal         func_1224C0
    ctx->pc = 0x303A90u;
    SET_GPR_U32(ctx, 31, 0x303A98u);
    ctx->pc = 0x303A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A90u;
    // 0x303a94: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x303A90u, 0x303A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A98u;
label_303a98:
    // 0x303a98: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x303a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303a9c: 0xc048930  jal         func_1224C0
    ctx->pc = 0x303A9Cu;
    SET_GPR_U32(ctx, 31, 0x303AA4u);
    ctx->pc = 0x303AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A9Cu;
    // 0x303aa0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x303A9Cu, 0x303AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AA4u;
label_303aa4:
    // 0x303aa4: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x303aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303aa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x303aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303aac: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x303AACu;
    SET_GPR_U32(ctx, 31, 0x303AB4u);
    ctx->pc = 0x303AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303AACu;
    // 0x303ab0: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x303AACu, 0x303AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AB4u;
label_303ab4:
    // 0x303ab4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x303ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x303ab8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303abc: 0x0  nop
    ctx->pc = 0x303abcu;
    // NOP
    // 0x303ac0: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x303ac0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x303ac4: 0x0  nop
    ctx->pc = 0x303ac4u;
    // NOP
    // 0x303ac8: 0x0  nop
    ctx->pc = 0x303ac8u;
    // NOP
    // 0x303acc: 0xc048930  jal         func_1224C0
    ctx->pc = 0x303ACCu;
    SET_GPR_U32(ctx, 31, 0x303AD4u);
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x303ACCu, 0x303AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AD4u;
label_303ad4:
    // 0x303ad4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x303ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x303ad8: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x303ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x303adc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x303adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ae0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x303ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ae4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x303ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ae8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x303ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303aec: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x303aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x303af0: 0xc0c510c  jal         func_314430
    ctx->pc = 0x303AF0u;
    SET_GPR_U32(ctx, 31, 0x303AF8u);
    ctx->pc = 0x303AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303AF0u;
    // 0x303af4: 0x240a0038  addiu       $t2, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314430u, 0x303AF0u, 0x303AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AF8u;
label_303af8:
    // 0x303af8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x303af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x303afc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x303afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x303b00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x303b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x303b04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x303b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x303b08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x303b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303b0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x303b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303b10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x303b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303b14: 0x3e00008  jr          $ra
    ctx->pc = 0x303B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B14u;
        // 0x303b18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303B1Cu;
    // 0x303b1c: 0x0  nop
    ctx->pc = 0x303b1cu;
    // NOP
    if (ctx->pc == 0x303b1cu) { ctx->pc = 0x303b20u; }
}
