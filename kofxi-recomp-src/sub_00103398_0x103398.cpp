#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103398
// Address: 0x103398 - 0x103418
void sub_00103398_0x103398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103398_0x103398");
#endif

    switch (ctx->pc) {
        case 0x1033bcu: goto label_1033bc;
        case 0x103400u: goto label_103400;
        default: break;
    }

    ctx->pc = 0x103398u;

    // 0x103398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10339c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1033a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1033a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1033a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1033a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1033a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1033ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1033acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1033b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1033b4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1033B4u;
    SET_GPR_U32(ctx, 31, 0x1033BCu);
    ctx->pc = 0x1033B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1033B4u;
            // 0x1033b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033BCu; }
        if (ctx->pc != 0x1033BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033BCu; }
        if (ctx->pc != 0x1033BCu) { return; }
    }
    ctx->pc = 0x1033BCu;
label_1033bc:
    // 0x1033bc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1033bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1033c0: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x1033c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1033c4: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x1033c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1033c8: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x1033c8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1033cc: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x1033ccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1033d0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1033d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1033d4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1033d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1033d8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1033d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1033dc: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x1033dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1033e0: 0xfa490000  sqc2        $vf9, 0x0($s2)
    ctx->pc = 0x1033e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1033e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1033E4u;
    {
        const bool branch_taken_0x1033e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033E4u;
            // 0x1033e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033e4) {
            ctx->pc = 0x103400u;
            goto label_103400;
        }
    }
    ctx->pc = 0x1033ECu;
    // 0x1033ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1033ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1033f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1033f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1033f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1033f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1033f8: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1033F8u;
    ctx->pc = 0x1033FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1033F8u;
            // 0x1033fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103400u;
label_103400:
    // 0x103400: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103404: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10340c: 0x3e00008  jr          $ra
    ctx->pc = 0x10340Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10340Cu;
            // 0x103410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x103414u;
    // 0x103414: 0x0  nop
    ctx->pc = 0x103414u;
    // NOP
    ctx->pc = 0x103418u;
}
