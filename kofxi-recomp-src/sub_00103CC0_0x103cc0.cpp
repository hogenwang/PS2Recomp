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

// Function: sub_00103CC0
// Address: 0x103cc0 - 0x103d18
void sub_00103CC0_0x103cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103CC0_0x103cc0");
#endif

    switch (ctx->pc) {
        case 0x103cd4u: goto label_103cd4;
        default: break;
    }

    ctx->pc = 0x103cc0u;

    // 0x103cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103ccc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103CCCu;
    SET_GPR_U32(ctx, 31, 0x103CD4u);
    ctx->pc = 0x103CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CCCu;
    // 0x103cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x103CCCu, 0x103CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CD4u;
label_103cd4:
    // 0x103cd4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x103cd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103cd8: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x103cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103cdc: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x103cdcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103ce0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x103ce0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x103ce4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x103ce4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103ce8: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x103ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103cec: 0xfa050020  sqc2        $vf5, 0x20($s0)
    ctx->pc = 0x103cecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x103cf0: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x103cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x103cf4: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x103cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x103cf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103CF8u;
    {
        const bool branch_taken_0x103cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CF8u;
        // 0x103cfc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cf8) {
            ctx->pc = 0x103D0Cu;
            goto label_103d0c;
        }
    }
    ctx->pc = 0x103D00u;
    // 0x103d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d04: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103D04u;
    ctx->pc = 0x103D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D04u;
    // 0x103d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x103D0Cu;
label_103d0c:
    // 0x103d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d10: 0x3e00008  jr          $ra
    ctx->pc = 0x103D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D10u;
        // 0x103d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103D18u;
}
