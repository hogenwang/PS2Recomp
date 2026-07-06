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

// Function: sub_00103690
// Address: 0x103690 - 0x103740
void sub_00103690_0x103690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103690_0x103690");
#endif

    switch (ctx->pc) {
        case 0x1036acu: goto label_1036ac;
        default: break;
    }

    ctx->pc = 0x103690u;

    // 0x103690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103694: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10369c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10369cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1036a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1036a4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1036A4u;
    SET_GPR_U32(ctx, 31, 0x1036ACu);
    ctx->pc = 0x1036A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1036A4u;
    // 0x1036a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1036A4u, 0x1036ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1036ACu;
label_1036ac:
    // 0x1036ac: 0x7a080000  lq          $t0, 0x0($s0)
    ctx->pc = 0x1036acu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1036b0: 0x7a090010  lq          $t1, 0x10($s0)
    ctx->pc = 0x1036b0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1036b4: 0x7a0a0020  lq          $t2, 0x20($s0)
    ctx->pc = 0x1036b4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1036b8: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x1036b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1036bc: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x1036bcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x1036c0: 0x4bc4212c  vsub.xyz    $vf4, $vf4, $vf4
    ctx->pc = 0x1036c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1036c4: 0x4be9233c  vmove.xyzw  $vf9, $vf4
    ctx->pc = 0x1036c4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x1036c8: 0x482b2000  qmfc2.ni    $t3, $vf4
    ctx->pc = 0x1036c8u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1036cc: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x1036ccu;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1036d0: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x1036d0u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1036d4: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x1036d4u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1036d8: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x1036d8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1036dc: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x1036dcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x1036e0: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x1036e0u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x1036e4: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x1036e4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x1036e8: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x1036e8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1036ec: 0x48a93800  qmtc2.ni    $t1, $vf7
    ctx->pc = 0x1036ecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1036f0: 0x48aa4000  qmtc2.ni    $t2, $vf8
    ctx->pc = 0x1036f0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1036f4: 0x4bc531bc  vmulax.xyz  $ACC, $vf6, $vf5x
    ctx->pc = 0x1036f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1036f8: 0x4bc538bd  vmadday.xyz $ACC, $vf7, $vf5y
    ctx->pc = 0x1036f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1036fc: 0x4bc5410a  vmaddz.xyz  $vf4, $vf8, $vf5z
    ctx->pc = 0x1036fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x103700: 0x4bc4492c  vsub.xyz    $vf4, $vf9, $vf4
    ctx->pc = 0x103700u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103704: 0x7e280000  sq          $t0, 0x0($s1)
    ctx->pc = 0x103704u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 8));
    // 0x103708: 0x7e290010  sq          $t1, 0x10($s1)
    ctx->pc = 0x103708u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 9));
    // 0x10370c: 0x7e2a0020  sq          $t2, 0x20($s1)
    ctx->pc = 0x10370cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 10));
    // 0x103710: 0xfa240030  sqc2        $vf4, 0x30($s1)
    ctx->pc = 0x103710u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103714: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103714u;
    {
        const bool branch_taken_0x103714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103714u;
        // 0x103718: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103714) {
            ctx->pc = 0x10372Cu;
            goto label_10372c;
        }
    }
    ctx->pc = 0x10371Cu;
    // 0x10371c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10371cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103724: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103724u;
    ctx->pc = 0x103728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103724u;
    // 0x103728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x10372Cu;
label_10372c:
    // 0x10372c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10372cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103734: 0x3e00008  jr          $ra
    ctx->pc = 0x103734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103734u;
        // 0x103738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10373Cu;
    // 0x10373c: 0x0  nop
    ctx->pc = 0x10373cu;
    // NOP
}
