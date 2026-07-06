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

// Function: sub_001034A8
// Address: 0x1034a8 - 0x103588
void sub_001034A8_0x1034a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001034A8_0x1034a8");
#endif

    switch (ctx->pc) {
        case 0x1034ccu: goto label_1034cc;
        case 0x103538u: goto label_103538;
        case 0x103568u: goto label_103568;
        default: break;
    }

    ctx->pc = 0x1034a8u;

    // 0x1034a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1034a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1034ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1034acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1034b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1034b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1034b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1034b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1034b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1034bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1034bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1034c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1034c4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1034C4u;
    SET_GPR_U32(ctx, 31, 0x1034CCu);
    ctx->pc = 0x1034C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1034C4u;
    // 0x1034c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1034C4u, 0x1034CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034CCu;
label_1034cc:
    // 0x1034cc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1034ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1034d0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1034d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1034d4: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x1034d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1034d8: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x1034d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1034dc: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x1034dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1034e0: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x1034e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1034e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1034E4u;
    {
        const bool branch_taken_0x1034e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034E4u;
        // 0x1034e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034e4) {
            ctx->pc = 0x103500u;
            goto label_103500;
        }
    }
    ctx->pc = 0x1034ECu;
    // 0x1034ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1034ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1034f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1034f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1034f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1034f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1034f8: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1034F8u;
    ctx->pc = 0x1034FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1034F8u;
    // 0x1034fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x103500u;
label_103500:
    // 0x103500: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103504: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10350c: 0x3e00008  jr          $ra
    ctx->pc = 0x10350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10350Cu;
        // 0x103510: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10350Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103514u;
    // 0x103514: 0x0  nop
    ctx->pc = 0x103514u;
    // NOP
    // 0x103518: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10351c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10351cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103528: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x103528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10352c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103530: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103530u;
    SET_GPR_U32(ctx, 31, 0x103538u);
    ctx->pc = 0x103534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103530u;
    // 0x103534: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x103530u, 0x103538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103538u;
label_103538:
    // 0x103538: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x103538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10353c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x10353cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103540: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x103540u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103544: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x103544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103548: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x103548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10354c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10354cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103550: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x103550u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x103554: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x103554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x103558: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x103558u;
    {
        const bool branch_taken_0x103558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103558u;
        // 0x10355c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103558) {
            ctx->pc = 0x10356Cu;
            goto label_10356c;
        }
    }
    ctx->pc = 0x103560u;
    // 0x103560: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x103560u;
    SET_GPR_U32(ctx, 31, 0x103568u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x103560u, 0x103568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103568u;
label_103568:
    // 0x103568: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x103568u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_10356c:
    // 0x10356c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10356cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103570: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103578: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10357c: 0x3e00008  jr          $ra
    ctx->pc = 0x10357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10357Cu;
        // 0x103580: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10357Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103584u;
    // 0x103584: 0x0  nop
    ctx->pc = 0x103584u;
    // NOP
}
