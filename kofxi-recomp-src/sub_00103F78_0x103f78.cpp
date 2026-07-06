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

// Function: sub_00103F78
// Address: 0x103f78 - 0x104148
void sub_00103F78_0x103f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103F78_0x103f78");
#endif

    switch (ctx->pc) {
        case 0x103f9cu: goto label_103f9c;
        case 0x103fe0u: goto label_103fe0;
        case 0x104014u: goto label_104014;
        case 0x104090u: goto label_104090;
        case 0x1040a0u: goto label_1040a0;
        case 0x1040ecu: goto label_1040ec;
        default: break;
    }

    ctx->pc = 0x103f78u;

label_103f78:
    // 0x103f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103f7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103f84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103f88: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x103f88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x103f8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x103f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103f90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103f94: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103F94u;
    SET_GPR_U32(ctx, 31, 0x103F9Cu);
    ctx->pc = 0x103F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F94u;
    // 0x103f98: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x103F94u, 0x103F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F9Cu;
label_103f9c:
    // 0x103f9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x103f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103fa0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x103fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103fa4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x103fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x103fa8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x103fa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x103fac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103fb0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x103FB0u;
    {
        const bool branch_taken_0x103fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103fb0) {
            ctx->pc = 0x103FC4u;
            goto label_103fc4;
        }
    }
    ctx->pc = 0x103FB8u;
    // 0x103fb8: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x103fb8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x103fbc: 0x8040ff3  j           func_103FCC
    ctx->pc = 0x103FBCu;
    ctx->pc = 0x103FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FBCu;
    // 0x103fc0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103FCCu;
    goto label_103fcc;
    ctx->pc = 0x103FC4u;
label_103fc4:
    // 0x103fc4: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x103fc4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x103fc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103fcc:
    // 0x103fcc: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x103fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x103fd0: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x103fd0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x103fd4: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x103fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fd8: 0xc040f46  jal         func_103D18
    ctx->pc = 0x103FD8u;
    SET_GPR_U32(ctx, 31, 0x103FE0u);
    ctx->pc = 0x103D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D18u, 0x103FD8u, 0x103FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FE0u;
label_103fe0:
    // 0x103fe0: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x103fe0u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fe4: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x103fe4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103fe8: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x103fe8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103fec: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x103fecu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103ff0: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x103ff0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103ff4: 0x4a8029c3  vaddw.y     $vf7, $vf5, $vf0w
    ctx->pc = 0x103ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103ff8: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x103ff8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x103ffc: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x103ffcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104000: 0x4a442984  vsubx.z     $vf6, $vf5, $vf4x
    ctx->pc = 0x104000u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x104004: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x104004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x104008: 0x4b042a00  vaddx.x     $vf8, $vf5, $vf4x
    ctx->pc = 0x104008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x10400c: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x10400cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x104010: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x104010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_104014:
    // 0x104014: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x104014u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104018: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x104018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x10401c: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x10401cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x104020: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x104020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x104024: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x104024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x104028: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x104028u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10402c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10402cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x104030: 0x22100010  addi        $s0, $s0, 0x10
    ctx->pc = 0x104030u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x104034: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x104034u;
    {
        const bool branch_taken_0x104034 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x104038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104034u;
        // 0x104038: 0x22310010  addi        $s1, $s1, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104034) {
            ctx->pc = 0x104014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_104014;
        }
    }
    ctx->pc = 0x10403Cu;
    // 0x10403c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10403Cu;
    {
        const bool branch_taken_0x10403c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10403Cu;
        // 0x104040: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10403c) {
            ctx->pc = 0x104058u;
            goto label_104058;
        }
    }
    ctx->pc = 0x104044u;
    // 0x104044: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10404c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10404cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104050: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x104050u;
    ctx->pc = 0x104054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104050u;
    // 0x104054: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x104058u;
label_104058:
    // 0x104058: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10405c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10405cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104060: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x104060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104064: 0x3e00008  jr          $ra
    ctx->pc = 0x104064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104064u;
        // 0x104068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10406Cu;
    // 0x10406c: 0x0  nop
    ctx->pc = 0x10406cu;
    // NOP
    // 0x104070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104074: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10407c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10407cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104080: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104088: 0xc040f64  jal         func_103D90
    ctx->pc = 0x104088u;
    SET_GPR_U32(ctx, 31, 0x104090u);
    ctx->pc = 0x10408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104088u;
    // 0x10408c: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D90u, 0x104088u, 0x104090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104090u;
label_104090:
    // 0x104090: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x104090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x104094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104098: 0xc040fde  jal         func_103F78
    ctx->pc = 0x104098u;
    SET_GPR_U32(ctx, 31, 0x1040A0u);
    ctx->pc = 0x10409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104098u;
    // 0x10409c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103F78u;
    goto label_103f78;
    ctx->pc = 0x1040A0u;
label_1040a0:
    // 0x1040a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1040a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040a4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1040a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1040a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1040a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1040ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1040acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1040b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1040b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1040b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1040b8: 0x8040fa0  j           func_103E80
    ctx->pc = 0x1040B8u;
    ctx->pc = 0x1040BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040B8u;
    // 0x1040bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103E80u;
    sub_00103E80_0x103e80(rdram, ctx, runtime); return;
    ctx->pc = 0x1040C0u;
    // 0x1040c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1040c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1040c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1040c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1040c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1040c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1040cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1040ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040d0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1040d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1040d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1040d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040d8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1040d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1040dc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1040dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1040e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1040e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1040e4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1040E4u;
    SET_GPR_U32(ctx, 31, 0x1040ECu);
    ctx->pc = 0x1040E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040E4u;
    // 0x1040e8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1040E4u, 0x1040ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040ECu;
label_1040ec:
    // 0x1040ec: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1040ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1040f0: 0x4409a000  mfc1        $t1, $f20
    ctx->pc = 0x1040f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1040f4: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x1040f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1040f8: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x1040f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1040fc: 0x48a92800  qmtc2.ni    $t1, $vf5
    ctx->pc = 0x1040fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x104100: 0x4be43190  vmaxx.xyzw  $vf6, $vf6, $vf4x
    ctx->pc = 0x104100u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x104104: 0x4be53194  vminix.xyzw $vf6, $vf6, $vf5x
    ctx->pc = 0x104104u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x104108: 0xfa260000  sqc2        $vf6, 0x0($s1)
    ctx->pc = 0x104108u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10410c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10410Cu;
    {
        const bool branch_taken_0x10410c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10410Cu;
        // 0x104110: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10410c) {
            ctx->pc = 0x10412Cu;
            goto label_10412c;
        }
    }
    ctx->pc = 0x104114u;
    // 0x104114: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10411c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x10411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x104120: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x104120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104124: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x104124u;
    ctx->pc = 0x104128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104124u;
    // 0x104128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x10412Cu;
label_10412c:
    // 0x10412c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10412cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104134: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x104134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x104138: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x104138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10413c: 0x3e00008  jr          $ra
    ctx->pc = 0x10413Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10413Cu;
        // 0x104140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10413Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104144u;
    // 0x104144: 0x0  nop
    ctx->pc = 0x104144u;
    // NOP
}
