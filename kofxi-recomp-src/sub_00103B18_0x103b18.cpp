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

// Function: sub_00103B18
// Address: 0x103b18 - 0x103cc0
void sub_00103B18_0x103b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103B18_0x103b18");
#endif

    switch (ctx->pc) {
        case 0x103b34u: goto label_103b34;
        case 0x103b9cu: goto label_103b9c;
        case 0x103becu: goto label_103bec;
        case 0x103c3cu: goto label_103c3c;
        case 0x103c8cu: goto label_103c8c;
        default: break;
    }

    ctx->pc = 0x103b18u;

    // 0x103b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103b1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103b2c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103B2Cu;
    SET_GPR_U32(ctx, 31, 0x103B34u);
    ctx->pc = 0x103B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B2Cu;
    // 0x103b30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x103B2Cu, 0x103B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B34u;
label_103b34:
    // 0x103b34: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x103b34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103b38: 0x7a070010  lq          $a3, 0x10($s0)
    ctx->pc = 0x103b38u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x103b3c: 0x7a080020  lq          $t0, 0x20($s0)
    ctx->pc = 0x103b3cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x103b40: 0x7a090030  lq          $t1, 0x30($s0)
    ctx->pc = 0x103b40u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x103b44: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x103b44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x103b48: 0x7e270010  sq          $a3, 0x10($s1)
    ctx->pc = 0x103b48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 7));
    // 0x103b4c: 0x7e280020  sq          $t0, 0x20($s1)
    ctx->pc = 0x103b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 8));
    // 0x103b50: 0x7e290030  sq          $t1, 0x30($s1)
    ctx->pc = 0x103b50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 9));
    // 0x103b54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103B54u;
    {
        const bool branch_taken_0x103b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B54u;
        // 0x103b58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b54) {
            ctx->pc = 0x103B6Cu;
            goto label_103b6c;
        }
    }
    ctx->pc = 0x103B5Cu;
    // 0x103b5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103b64: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103B64u;
    ctx->pc = 0x103B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B64u;
    // 0x103b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x103B6Cu;
label_103b6c:
    // 0x103b6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103b74: 0x3e00008  jr          $ra
    ctx->pc = 0x103B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B74u;
        // 0x103b78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103B7Cu;
    // 0x103b7c: 0x0  nop
    ctx->pc = 0x103b7cu;
    // NOP
    // 0x103b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103b84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103b8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103b94: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103B94u;
    SET_GPR_U32(ctx, 31, 0x103B9Cu);
    ctx->pc = 0x103B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B94u;
    // 0x103b98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x103B94u, 0x103B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B9Cu;
label_103b9c:
    // 0x103b9c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103b9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103ba0: 0x4be5217d  vftoi4.xyzw $vf5, $vf4
    ctx->pc = 0x103ba0u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103ba4: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x103ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x103ba8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103BA8u;
    {
        const bool branch_taken_0x103ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BA8u;
        // 0x103bac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ba8) {
            ctx->pc = 0x103BC0u;
            goto label_103bc0;
        }
    }
    ctx->pc = 0x103BB0u;
    // 0x103bb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103bb8: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103BB8u;
    ctx->pc = 0x103BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BB8u;
    // 0x103bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x103BC0u;
label_103bc0:
    // 0x103bc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x103BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BC8u;
        // 0x103bcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103BD0u;
    // 0x103bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103bd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103be0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103be4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103BE4u;
    SET_GPR_U32(ctx, 31, 0x103BECu);
    ctx->pc = 0x103BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BE4u;
    // 0x103be8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x103BE4u, 0x103BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BECu;
label_103bec:
    // 0x103bec: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103becu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103bf0: 0x4be5217c  vftoi0.xyzw $vf5, $vf4
    ctx->pc = 0x103bf0u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103bf4: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x103bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x103bf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103BF8u;
    {
        const bool branch_taken_0x103bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BF8u;
        // 0x103bfc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bf8) {
            ctx->pc = 0x103C10u;
            goto label_103c10;
        }
    }
    ctx->pc = 0x103C00u;
    // 0x103c00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c08: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103C08u;
    ctx->pc = 0x103C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C08u;
    // 0x103c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x103C10u;
label_103c10:
    // 0x103c10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c18: 0x3e00008  jr          $ra
    ctx->pc = 0x103C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C18u;
        // 0x103c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103C20u;
    // 0x103c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103c24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103c34: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103C34u;
    SET_GPR_U32(ctx, 31, 0x103C3Cu);
    ctx->pc = 0x103C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C34u;
    // 0x103c38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x103C34u, 0x103C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C3Cu;
label_103c3c:
    // 0x103c3c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103c3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103c40: 0x4be5213d  vitof4.xyzw $vf5, $vf4
    ctx->pc = 0x103c40u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.0625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103c44: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x103c44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x103c48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103C48u;
    {
        const bool branch_taken_0x103c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C48u;
        // 0x103c4c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c48) {
            ctx->pc = 0x103C60u;
            goto label_103c60;
        }
    }
    ctx->pc = 0x103C50u;
    // 0x103c50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c58: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103C58u;
    ctx->pc = 0x103C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C58u;
    // 0x103c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x103C60u;
label_103c60:
    // 0x103c60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c68: 0x3e00008  jr          $ra
    ctx->pc = 0x103C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C68u;
        // 0x103c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103C70u;
    // 0x103c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103c74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103c78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103c7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103c84: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103C84u;
    SET_GPR_U32(ctx, 31, 0x103C8Cu);
    ctx->pc = 0x103C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C84u;
    // 0x103c88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x103C84u, 0x103C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C8Cu;
label_103c8c:
    // 0x103c8c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103c8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103c90: 0x4be5213c  vitof0.xyzw $vf5, $vf4
    ctx->pc = 0x103c90u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103c94: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x103c94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x103c98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103C98u;
    {
        const bool branch_taken_0x103c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C98u;
        // 0x103c9c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c98) {
            ctx->pc = 0x103CB0u;
            goto label_103cb0;
        }
    }
    ctx->pc = 0x103CA0u;
    // 0x103ca0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103ca8: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103CA8u;
    ctx->pc = 0x103CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CA8u;
    // 0x103cac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x103CB0u;
label_103cb0:
    // 0x103cb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x103CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CB8u;
        // 0x103cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103CC0u;
}
