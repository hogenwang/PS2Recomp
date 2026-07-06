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

// Function: sub_00103588
// Address: 0x103588 - 0x103608
void sub_00103588_0x103588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103588_0x103588");
#endif

    switch (ctx->pc) {
        case 0x1035a4u: goto label_1035a4;
        default: break;
    }

    ctx->pc = 0x103588u;

    // 0x103588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10358c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10359c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10359Cu;
    SET_GPR_U32(ctx, 31, 0x1035A4u);
    ctx->pc = 0x1035A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10359Cu;
    // 0x1035a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10359Cu, 0x1035A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1035A4u;
label_1035a4:
    // 0x1035a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1035a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1035a8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1035a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1035ac: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1035acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1035b0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1035b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1035b4: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1035b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1035b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1035b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1035bc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1035bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1035c0: 0x4a0002ff  vnop
    ctx->pc = 0x1035c0u;
    // NOP operation, no action needed for VU0
    // 0x1035c4: 0x4a0002ff  vnop
    ctx->pc = 0x1035c4u;
    // NOP operation, no action needed for VU0
    // 0x1035c8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1035c8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1035cc: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1035ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1035d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1035d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1035d4: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1035d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1035d8: 0xfa260000  sqc2        $vf6, 0x0($s1)
    ctx->pc = 0x1035d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1035dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1035DCu;
    {
        const bool branch_taken_0x1035dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035DCu;
        // 0x1035e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035dc) {
            ctx->pc = 0x1035F4u;
            goto label_1035f4;
        }
    }
    ctx->pc = 0x1035E4u;
    // 0x1035e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1035e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1035e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1035e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1035ec: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1035ECu;
    ctx->pc = 0x1035F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1035ECu;
    // 0x1035f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x1035F4u;
label_1035f4:
    // 0x1035f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1035f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1035f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1035f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1035fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1035FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035FCu;
        // 0x103600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1035FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103604u;
    // 0x103604: 0x0  nop
    ctx->pc = 0x103604u;
    // NOP
    if (ctx->pc == 0x103604u) { ctx->pc = 0x103608u; }
}
