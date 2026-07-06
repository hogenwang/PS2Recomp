#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103740
// Address: 0x103740 - 0x1038a8
void sub_00103740_0x103740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103740_0x103740");
#endif

    switch (ctx->pc) {
        case 0x103764u: goto label_103764;
        case 0x10379cu: goto label_10379c;
        case 0x1037b0u: goto label_1037b0;
        case 0x1037d4u: goto label_1037d4;
        case 0x10380cu: goto label_10380c;
        case 0x103820u: goto label_103820;
        case 0x10384cu: goto label_10384c;
        case 0x103890u: goto label_103890;
        default: break;
    }

    ctx->pc = 0x103740u;

    // 0x103740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103744: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10374c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10374cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103750: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x103750u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x103754: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x103754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103758: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10375c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10375Cu;
    SET_GPR_U32(ctx, 31, 0x103764u);
    ctx->pc = 0x103760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10375Cu;
            // 0x103760: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103764u; }
        if (ctx->pc != 0x103764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103764u; }
        if (ctx->pc != 0x103764u) { return; }
    }
    ctx->pc = 0x103764u;
label_103764:
    // 0x103764: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103768: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x103768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x10376c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x10376cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x103770: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x103770u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x103774: 0x4a0003bf  vwaitq
    ctx->pc = 0x103774u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x103778: 0x4be0211c  vmulq.xyzw  $vf4, $vf4, $Q
    ctx->pc = 0x103778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10377c: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x10377cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103780: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103780u;
    {
        const bool branch_taken_0x103780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103780u;
            // 0x103784: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103780) {
            ctx->pc = 0x10379Cu;
            goto label_10379c;
        }
    }
    ctx->pc = 0x103788u;
    // 0x103788: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10378c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10378cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103790: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103794: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103794u;
    ctx->pc = 0x103798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103794u;
            // 0x103798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10379Cu;
label_10379c:
    // 0x10379c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10379cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1037a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1037a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1037a4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1037a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1037a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1037A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1037ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1037A8u;
            // 0x1037ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1037B0u;
label_1037b0:
    // 0x1037b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1037b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1037b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1037b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1037b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1037b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1037bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1037bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1037c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1037c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1037c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1037c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1037c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1037c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1037cc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1037CCu;
    SET_GPR_U32(ctx, 31, 0x1037D4u);
    ctx->pc = 0x1037D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1037CCu;
            // 0x1037d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1037D4u; }
        if (ctx->pc != 0x1037D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1037D4u; }
        if (ctx->pc != 0x1037D4u) { return; }
    }
    ctx->pc = 0x1037D4u;
label_1037d4:
    // 0x1037d4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1037d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1037d8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1037d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1037dc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1037dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1037e0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1037e0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1037e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1037e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1037e8: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x1037e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1037ec: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1037ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1037f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1037F0u;
    {
        const bool branch_taken_0x1037f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1037F0u;
            // 0x1037f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037f0) {
            ctx->pc = 0x10380Cu;
            goto label_10380c;
        }
    }
    ctx->pc = 0x1037F8u;
    // 0x1037f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1037f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1037fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1037fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103800: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103804: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103804u;
    ctx->pc = 0x103808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103804u;
            // 0x103808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10380Cu;
label_10380c:
    // 0x10380c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10380cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103814: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103818: 0x3e00008  jr          $ra
    ctx->pc = 0x103818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103818u;
            // 0x10381c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x103820u;
label_103820:
    // 0x103820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x103820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x103824: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103828: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10382c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10382cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103834: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x103834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103838: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x103838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x10383c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10383cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103840: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x103844: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103844u;
    SET_GPR_U32(ctx, 31, 0x10384Cu);
    ctx->pc = 0x103848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103844u;
            // 0x103848: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10384Cu; }
        if (ctx->pc != 0x10384Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10384Cu; }
        if (ctx->pc != 0x10384Cu) { return; }
    }
    ctx->pc = 0x10384Cu;
label_10384c:
    // 0x10384c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x10384cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103850: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x103850u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103854: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x103854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x103858: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x103858u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x10385c: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x10385cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103860: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x103860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103864: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x103864u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x103868: 0x4be82a48  vmaddx.xyzw $vf9, $vf5, $vf8x
    ctx->pc = 0x103868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10386c: 0xfa490000  sqc2        $vf9, 0x0($s2)
    ctx->pc = 0x10386cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x103870: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103870u;
    {
        const bool branch_taken_0x103870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103870u;
            // 0x103874: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103870) {
            ctx->pc = 0x103890u;
            goto label_103890;
        }
    }
    ctx->pc = 0x103878u;
    // 0x103878: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10387c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10387cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103884: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x103884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103888: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103888u;
    ctx->pc = 0x10388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103888u;
            // 0x10388c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103890u;
label_103890:
    // 0x103890: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103894: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10389c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x10389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1038a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1038A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1038A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1038A0u;
            // 0x1038a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1038A8u;
    ctx->pc = 0x1038a8u;
}
