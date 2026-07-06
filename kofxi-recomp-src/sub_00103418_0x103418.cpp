#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103418
// Address: 0x103418 - 0x1034a8
void sub_00103418_0x103418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103418_0x103418");
#endif

    switch (ctx->pc) {
        case 0x103420u: goto label_103420;
        case 0x10343cu: goto label_10343c;
        case 0x103450u: goto label_103450;
        case 0x103494u: goto label_103494;
        default: break;
    }

    ctx->pc = 0x103418u;

    // 0x103418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10341c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_103420:
    // 0x103420: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103424: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x103424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10342c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10342cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103430: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x103434: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103434u;
    SET_GPR_U32(ctx, 31, 0x10343Cu);
    ctx->pc = 0x103438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103434u;
            // 0x103438: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10343Cu; }
        if (ctx->pc != 0x10343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10343Cu; }
        if (ctx->pc != 0x10343Cu) { return; }
    }
    ctx->pc = 0x10343Cu;
label_10343c:
    // 0x10343c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x10343cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103440: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x103440u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x103444: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x103444u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x103448: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x103448u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10344c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x10344cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_103450:
    // 0x103450: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x103450u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103454: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x103454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x103458: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x103458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10345c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x10345cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x103460: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x103460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x103464: 0xfa490000  sqc2        $vf9, 0x0($s2)
    ctx->pc = 0x103464u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x103468: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x103468u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x10346c: 0x22100010  addi        $s0, $s0, 0x10
    ctx->pc = 0x10346cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x103470: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x103470u;
    {
        const bool branch_taken_0x103470 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x103474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103470u;
            // 0x103474: 0x22520010  addi        $s2, $s2, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103470) {
            ctx->pc = 0x103450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_103450;
        }
    }
    ctx->pc = 0x103478u;
    // 0x103478: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103478u;
    {
        const bool branch_taken_0x103478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103478u;
            // 0x10347c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103478) {
            ctx->pc = 0x103494u;
            goto label_103494;
        }
    }
    ctx->pc = 0x103480u;
    // 0x103480: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103484: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10348c: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x10348Cu;
    ctx->pc = 0x103490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10348Cu;
            // 0x103490: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103494u;
label_103494:
    // 0x103494: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103498: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10349c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10349cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1034a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1034A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1034A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1034A0u;
            // 0x1034a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1034A8u;
    ctx->pc = 0x1034a8u;
}
