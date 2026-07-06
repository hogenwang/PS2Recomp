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

// Function: sub_00103E80
// Address: 0x103e80 - 0x103f78
void sub_00103E80_0x103e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103E80_0x103e80");
#endif

    switch (ctx->pc) {
        case 0x103ea4u: goto label_103ea4;
        case 0x103ee8u: goto label_103ee8;
        case 0x103f1cu: goto label_103f1c;
        default: break;
    }

    ctx->pc = 0x103e80u;

    // 0x103e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103e84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103e8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e90: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x103e90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x103e94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x103e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103e9c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103E9Cu;
    SET_GPR_U32(ctx, 31, 0x103EA4u);
    ctx->pc = 0x103EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E9Cu;
    // 0x103ea0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x103E9Cu, 0x103EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EA4u;
label_103ea4:
    // 0x103ea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x103ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103ea8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x103ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103eac: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x103eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x103eb0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x103eb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x103eb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103eb8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x103EB8u;
    {
        const bool branch_taken_0x103eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103eb8) {
            ctx->pc = 0x103ECCu;
            goto label_103ecc;
        }
    }
    ctx->pc = 0x103EC0u;
    // 0x103ec0: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x103ec0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x103ec4: 0x8040fb5  j           func_103ED4
    ctx->pc = 0x103EC4u;
    ctx->pc = 0x103EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103EC4u;
    // 0x103ec8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103ED4u;
    goto label_103ed4;
    ctx->pc = 0x103ECCu;
label_103ecc:
    // 0x103ecc: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x103eccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x103ed0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103ed4:
    // 0x103ed4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x103ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x103ed8: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x103ed8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x103edc: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x103edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ee0: 0xc040f46  jal         func_103D18
    ctx->pc = 0x103EE0u;
    SET_GPR_U32(ctx, 31, 0x103EE8u);
    ctx->pc = 0x103D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D18u, 0x103EE0u, 0x103EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EE8u;
label_103ee8:
    // 0x103ee8: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x103ee8u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103eec: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x103eecu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103ef0: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x103ef0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103ef4: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x103ef4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103ef8: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x103ef8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103efc: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x103efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x103f00: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x103f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x103f04: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x103f04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103f08: 0x4a4429c0  vaddx.z     $vf7, $vf5, $vf4x
    ctx->pc = 0x103f08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103f0c: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x103f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103f10: 0x4a842a04  vsubx.y     $vf8, $vf5, $vf4x
    ctx->pc = 0x103f10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103f14: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x103f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103f18: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x103f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_103f1c:
    // 0x103f1c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103f1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103f20: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x103f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x103f24: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x103f24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x103f28: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x103f28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x103f2c: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x103f2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x103f30: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x103f30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x103f34: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x103f34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x103f38: 0x22100010  addi        $s0, $s0, 0x10
    ctx->pc = 0x103f38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x103f3c: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x103F3Cu;
    {
        const bool branch_taken_0x103f3c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x103F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F3Cu;
        // 0x103f40: 0x22310010  addi        $s1, $s1, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f3c) {
            ctx->pc = 0x103F1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_103f1c;
        }
    }
    ctx->pc = 0x103F44u;
    // 0x103f44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103F44u;
    {
        const bool branch_taken_0x103f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F44u;
        // 0x103f48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f44) {
            ctx->pc = 0x103F60u;
            goto label_103f60;
        }
    }
    ctx->pc = 0x103F4Cu;
    // 0x103f4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103f54: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103f58: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103F58u;
    ctx->pc = 0x103F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F58u;
    // 0x103f5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x103F60u;
label_103f60:
    // 0x103f60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103f68: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x103F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F6Cu;
        // 0x103f70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103F74u;
    // 0x103f74: 0x0  nop
    ctx->pc = 0x103f74u;
    // NOP
    if (ctx->pc == 0x103f74u) { ctx->pc = 0x103f78u; }
}
