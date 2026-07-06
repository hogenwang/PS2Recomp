#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00309CA0
// Address: 0x309ca0 - 0x309d70
void sub_00309CA0_0x309ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309CA0_0x309ca0");
#endif

    switch (ctx->pc) {
        case 0x309ce0u: goto label_309ce0;
        default: break;
    }

    ctx->pc = 0x309ca0u;

    // 0x309ca0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x309ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x309ca4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x309ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ca8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x309ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cac: 0x24630710  addiu       $v1, $v1, 0x710
    ctx->pc = 0x309cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1808));
    // 0x309cb0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x309cb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x309cb4: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x309cb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x309cb8: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x309cb8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x309cbc: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x309cbcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x309cc0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x309cc0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309cc4: 0x34074580  ori         $a3, $zero, 0x4580
    ctx->pc = 0x309cc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)17792);
    // 0x309cc8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x309cc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x309ccc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x309cccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x309cd0: 0x34e74580  ori         $a3, $a3, 0x4580
    ctx->pc = 0x309cd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17792);
    // 0x309cd4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x309cd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x309cd8: 0x48a76800  qmtc2.ni    $a3, $vf13
    ctx->pc = 0x309cd8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x309cdc: 0x4be002ec  vsub.xyzw   $vf11, $vf0, $vf0
    ctx->pc = 0x309cdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_309ce0:
    // 0x309ce0: 0xd9280000  lqc2        $vf8, 0x0($t1)
    ctx->pc = 0x309ce0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x309ce4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x309ce4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x309ce8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x309ce8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x309cec: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x309cecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x309cf0: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x309cf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x309cf4: 0x4be903bc  vdiv        $Q, $vf0w, $vf9w
    ctx->pc = 0x309cf4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x309cf8: 0x4a0003bf  vwaitq
    ctx->pc = 0x309cf8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x309cfc: 0x4bc04a5c  vmulq.xyz   $vf9, $vf9, $Q
    ctx->pc = 0x309cfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x309d00: 0x4a0002ff  vnop
    ctx->pc = 0x309d00u;
    // NOP operation, no action needed for VU0
    // 0x309d04: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x309d04u;
    ctx->vu0_vpu_stat4 = GPR_U32(ctx, 0);
    // 0x309d08: 0x4bab4b2c  vsub.xyw    $vf12, $vf9, $vf11
    ctx->pc = 0x309d08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x309d0c: 0x4b896b2c  vsub.xy     $vf12, $vf13, $vf9
    ctx->pc = 0x309d0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x309d10: 0x4a0002ff  vnop
    ctx->pc = 0x309d10u;
    // NOP operation, no action needed for VU0
    // 0x309d14: 0x4a0002ff  vnop
    ctx->pc = 0x309d14u;
    // NOP operation, no action needed for VU0
    // 0x309d18: 0x4a0002ff  vnop
    ctx->pc = 0x309d18u;
    // NOP operation, no action needed for VU0
    // 0x309d1c: 0x4a0002ff  vnop
    ctx->pc = 0x309d1cu;
    // NOP operation, no action needed for VU0
    // 0x309d20: 0x48478000  cfc2.ni     $a3, $vi16
    ctx->pc = 0x309d20u;
    SET_GPR_U32(ctx, 7, ctx->vu0_vpu_stat4);
    // 0x309d24: 0x30e700c0  andi        $a3, $a3, 0xC0
    ctx->pc = 0x309d24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)192);
    // 0x309d28: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x309D28u;
    {
        const bool branch_taken_0x309d28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x309d28) {
            ctx->pc = 0x309D54u;
            goto label_309d54;
        }
    }
    ctx->pc = 0x309D30u;
    // 0x309d30: 0x4a2903fd  vmfir.w     $vf9, $vi0
    ctx->pc = 0x309d30u;
    { uint32_t tmp = (uint32_t)(int32_t)(int16_t)ctx->vi[0]; float val; std::memcpy(&val, &tmp, sizeof(val)); __m128 res = _mm_set1_ps(val); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x309d34: 0x4bea497d  vftoi4.xyzw $vf10, $vf9
    ctx->pc = 0x309d34u;
    { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x309d38: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x309d38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x309d3c: 0x2108ffff  addi        $t0, $t0, -0x1
    ctx->pc = 0x309d3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x309d40: 0x21290010  addi        $t1, $t1, 0x10
    ctx->pc = 0x309d40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x309d44: 0x1408ffe6  bne         $zero, $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x309D44u;
    {
        const bool branch_taken_0x309d44 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 8));
        ctx->pc = 0x309D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309D44u;
            // 0x309d48: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d44) {
            ctx->pc = 0x309CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_309ce0;
        }
    }
    ctx->pc = 0x309D4Cu;
    // 0x309d4c: 0x80c275a  j           func_309D68
    ctx->pc = 0x309D4Cu;
    ctx->pc = 0x309D68u;
    goto label_309d68;
    ctx->pc = 0x309D54u;
label_309d54:
    // 0x309d54: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x309d54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x309d58: 0x2108ffff  addi        $t0, $t0, -0x1
    ctx->pc = 0x309d58u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x309d5c: 0x21290010  addi        $t1, $t1, 0x10
    ctx->pc = 0x309d5cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x309d60: 0x1408ffdf  bne         $zero, $t0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x309D60u;
    {
        const bool branch_taken_0x309d60 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 8));
        ctx->pc = 0x309D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309D60u;
            // 0x309d64: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d60) {
            ctx->pc = 0x309CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_309ce0;
        }
    }
    ctx->pc = 0x309D68u;
label_309d68:
    // 0x309d68: 0x3e00008  jr          $ra
    ctx->pc = 0x309D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309D70u;
    ctx->pc = 0x309d70u;
}
