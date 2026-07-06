#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103D90
// Address: 0x103d90 - 0x103e80
void sub_00103D90_0x103d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103D90_0x103d90");
#endif

    switch (ctx->pc) {
        case 0x103db4u: goto label_103db4;
        case 0x103df8u: goto label_103df8;
        case 0x103e28u: goto label_103e28;
        case 0x103e6cu: goto label_103e6c;
        default: break;
    }

    ctx->pc = 0x103d90u;

    // 0x103d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103d94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103d9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103da0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x103da0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x103da4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x103da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103da8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103dac: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103DACu;
    SET_GPR_U32(ctx, 31, 0x103DB4u);
    ctx->pc = 0x103DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103DACu;
            // 0x103db0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DB4u; }
        if (ctx->pc != 0x103DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DB4u; }
        if (ctx->pc != 0x103DB4u) { return; }
    }
    ctx->pc = 0x103DB4u;
label_103db4:
    // 0x103db4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x103db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103db8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x103db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103dbc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x103dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x103dc0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x103dc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x103dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103dc8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x103DC8u;
    {
        const bool branch_taken_0x103dc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103dc8) {
            ctx->pc = 0x103DDCu;
            goto label_103ddc;
        }
    }
    ctx->pc = 0x103DD0u;
    // 0x103dd0: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x103dd0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x103dd4: 0x8040f79  j           func_103DE4
    ctx->pc = 0x103DD4u;
    ctx->pc = 0x103DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103DD4u;
            // 0x103dd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103DE4u;
    goto label_103de4;
    ctx->pc = 0x103DDCu;
label_103ddc:
    // 0x103ddc: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x103ddcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x103de0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103de4:
    // 0x103de4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x103de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x103de8: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x103de8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x103dec: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x103decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103df0: 0xc040f46  jal         func_103D18
    ctx->pc = 0x103DF0u;
    SET_GPR_U32(ctx, 31, 0x103DF8u);
    ctx->pc = 0x103D18u;
    if (runtime->hasFunction(0x103D18u)) {
        auto targetFn = runtime->lookupFunction(0x103D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DF8u; }
        if (ctx->pc != 0x103DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103D18_0x103d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DF8u; }
        if (ctx->pc != 0x103DF8u) { return; }
    }
    ctx->pc = 0x103DF8u;
label_103df8:
    // 0x103df8: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x103df8u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dfc: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x103dfcu;
    ctx->vu0_vf[6] = ctx->vu0_vf[5];
    // 0x103e00: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x103e00u;
    ctx->vu0_vf[7] = ctx->vu0_vf[5];
    // 0x103e04: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x103e04u;
    ctx->vu0_vf[9] = ctx->vu0_vf[0];
    // 0x103e08: 0x4bc94a6c  vsub.xyz    $vf9, $vf9, $vf9
    ctx->pc = 0x103e08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x103e0c: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x103e0cu;
    ctx->vu0_vf[8] = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,1));
    // 0x103e10: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x103e10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103e14: 0x4a842980  vaddx.y     $vf6, $vf5, $vf4x
    ctx->pc = 0x103e14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x103e18: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x103e18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x103e1c: 0x4b0429c4  vsubx.x     $vf7, $vf5, $vf4x
    ctx->pc = 0x103e1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103e20: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x103e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103e24: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x103e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_103e28:
    // 0x103e28: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103e28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103e2c: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x103e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x103e30: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x103e30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x103e34: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x103e34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x103e38: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x103e38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x103e3c: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x103e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x103e40: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x103e40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x103e44: 0x22100010  addi        $s0, $s0, 0x10
    ctx->pc = 0x103e44u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x103e48: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x103E48u;
    {
        const bool branch_taken_0x103e48 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x103E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103E48u;
            // 0x103e4c: 0x22310010  addi        $s1, $s1, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e48) {
            ctx->pc = 0x103E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_103e28;
        }
    }
    ctx->pc = 0x103E50u;
    // 0x103e50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103E50u;
    {
        const bool branch_taken_0x103e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103E50u;
            // 0x103e54: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e50) {
            ctx->pc = 0x103E6Cu;
            goto label_103e6c;
        }
    }
    ctx->pc = 0x103E58u;
    // 0x103e58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103e60: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103e64: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103E64u;
    ctx->pc = 0x103E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103E64u;
            // 0x103e68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103E6Cu;
label_103e6c:
    // 0x103e6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103e74: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103e78: 0x3e00008  jr          $ra
    ctx->pc = 0x103E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103E78u;
            // 0x103e7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x103E80u;
    ctx->pc = 0x103e80u;
}
