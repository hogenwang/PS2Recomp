#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103A48
// Address: 0x103a48 - 0x103ac8
void sub_00103A48_0x103a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103A48_0x103a48");
#endif

    switch (ctx->pc) {
        case 0x103a6cu: goto label_103a6c;
        case 0x103ab0u: goto label_103ab0;
        default: break;
    }

    ctx->pc = 0x103a48u;

    // 0x103a48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103a4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103a50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103a54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x103a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103a5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x103a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x103a64: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103A64u;
    SET_GPR_U32(ctx, 31, 0x103A6Cu);
    ctx->pc = 0x103A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A64u;
            // 0x103a68: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A6Cu; }
        if (ctx->pc != 0x103A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A6Cu; }
        if (ctx->pc != 0x103A6Cu) { return; }
    }
    ctx->pc = 0x103A6Cu;
label_103a6c:
    // 0x103a6c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103a6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103a70: 0xda250030  lqc2        $vf5, 0x30($s1)
    ctx->pc = 0x103a70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x103a74: 0x7a270000  lq          $a3, 0x0($s1)
    ctx->pc = 0x103a74u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103a78: 0x7a280010  lq          $t0, 0x10($s1)
    ctx->pc = 0x103a78u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x103a7c: 0x7a290020  lq          $t1, 0x20($s1)
    ctx->pc = 0x103a7cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x103a80: 0x4bc42968  vadd.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x103a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103a84: 0x7e470000  sq          $a3, 0x0($s2)
    ctx->pc = 0x103a84u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 7));
    // 0x103a88: 0x7e480010  sq          $t0, 0x10($s2)
    ctx->pc = 0x103a88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 8));
    // 0x103a8c: 0x7e490020  sq          $t1, 0x20($s2)
    ctx->pc = 0x103a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 9));
    // 0x103a90: 0xfa450030  sqc2        $vf5, 0x30($s2)
    ctx->pc = 0x103a90u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x103a94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103A94u;
    {
        const bool branch_taken_0x103a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A94u;
            // 0x103a98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a94) {
            ctx->pc = 0x103AB0u;
            goto label_103ab0;
        }
    }
    ctx->pc = 0x103A9Cu;
    // 0x103a9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103aa0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103aa8: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103AA8u;
    ctx->pc = 0x103AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103AA8u;
            // 0x103aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103AB0u;
label_103ab0:
    // 0x103ab0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103ab4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103abc: 0x3e00008  jr          $ra
    ctx->pc = 0x103ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103ABCu;
            // 0x103ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x103AC4u;
    // 0x103ac4: 0x0  nop
    ctx->pc = 0x103ac4u;
    // NOP
    ctx->pc = 0x103ac8u;
}
