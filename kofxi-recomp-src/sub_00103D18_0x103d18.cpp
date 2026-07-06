#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103D18
// Address: 0x103d18 - 0x103d90
void sub_00103D18_0x103d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103D18_0x103d18");
#endif

    ctx->pc = 0x103d18u;

    // 0x103d18: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x103d18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x103d1c: 0x250884a0  addiu       $t0, $t0, -0x7B60
    ctx->pc = 0x103d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935712));
    // 0x103d20: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x103d20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x103d24: 0x4a26333d  vmr32.w     $vf6, $vf6
    ctx->pc = 0x103d24u;
    ctx->vu0_vf[6] = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,1));
    // 0x103d28: 0x4b060100  vaddx.x     $vf4, $vf0, $vf6x
    ctx->pc = 0x103d28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103d2c: 0x4b0631aa  vmul.x      $vf6, $vf6, $vf6
    ctx->pc = 0x103d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x103d30: 0x4ae02118  vmulx.yzw   $vf4, $vf4, $vf0x
    ctx->pc = 0x103d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103d34: 0x4be62a1b  vmulw.xyzw  $vf8, $vf5, $vf6w
    ctx->pc = 0x103d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103d38: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x103d38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103d3c: 0x4be64218  vmulx.xyzw  $vf8, $vf8, $vf6x
    ctx->pc = 0x103d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103d40: 0x4bc64218  vmulx.xyz   $vf8, $vf8, $vf6x
    ctx->pc = 0x103d40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103d44: 0x4b082103  vaddw.x     $vf4, $vf4, $vf8w
    ctx->pc = 0x103d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103d48: 0x4b864218  vmulx.xy    $vf8, $vf8, $vf6x
    ctx->pc = 0x103d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103d4c: 0x4b082102  vaddz.x     $vf4, $vf4, $vf8z
    ctx->pc = 0x103d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103d50: 0x4b064218  vmulx.x     $vf8, $vf8, $vf6x
    ctx->pc = 0x103d50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103d54: 0x4b082101  vaddy.x     $vf4, $vf4, $vf8y
    ctx->pc = 0x103d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103d58: 0x4b082100  vaddx.x     $vf4, $vf4, $vf8x
    ctx->pc = 0x103d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103d5c: 0x4b842900  vaddx.xy    $vf4, $vf5, $vf4x
    ctx->pc = 0x103d5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103d60: 0x4b0421ea  vmul.x      $vf7, $vf4, $vf4
    ctx->pc = 0x103d60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103d64: 0x4a2701c4  vsubx.w     $vf7, $vf0, $vf7x
    ctx->pc = 0x103d64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103d68: 0x4b8703bd  .word       0x4B8703BD                   # vsqrt       $Q, $vf7w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x103d68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x103d6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x103d6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x103d70: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x103D70u;
    {
        const bool branch_taken_0x103d70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x103D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103D70u;
            // 0x103d74: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d70) {
            ctx->pc = 0x103D80u;
            goto label_103d80;
        }
    }
    ctx->pc = 0x103D78u;
    // 0x103d78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103D78u;
    {
        const bool branch_taken_0x103d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103D78u;
            // 0x103d7c: 0x4b072900  vaddx.x     $vf4, $vf5, $vf7x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d78) {
            ctx->pc = 0x103D84u;
            goto label_103d84;
        }
    }
    ctx->pc = 0x103D80u;
label_103d80:
    // 0x103d80: 0x4b072904  vsubx.x     $vf4, $vf5, $vf7x
    ctx->pc = 0x103d80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_103d84:
    // 0x103d84: 0x3e00008  jr          $ra
    ctx->pc = 0x103D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x103D8Cu;
    // 0x103d8c: 0x0  nop
    ctx->pc = 0x103d8cu;
    // NOP
    ctx->pc = 0x103d90u;
}
