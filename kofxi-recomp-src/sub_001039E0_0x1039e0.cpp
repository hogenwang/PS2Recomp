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

// Function: sub_001039E0
// Address: 0x1039e0 - 0x103a48
void sub_001039E0_0x1039e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001039E0_0x1039e0");
#endif

    switch (ctx->pc) {
        case 0x103a04u: goto label_103a04;
        default: break;
    }

    ctx->pc = 0x1039e0u;

    // 0x1039e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1039e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1039e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1039e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1039e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1039e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1039ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1039ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1039f0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1039f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1039f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1039f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1039f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1039f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1039fc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1039FCu;
    SET_GPR_U32(ctx, 31, 0x103A04u);
    ctx->pc = 0x103A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039FCu;
    // 0x103a00: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1039FCu, 0x103A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A04u;
label_103a04:
    // 0x103a04: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103a04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103a08: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x103a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x103a0c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x103a0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x103a10: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x103a10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x103a14: 0xfa260000  sqc2        $vf6, 0x0($s1)
    ctx->pc = 0x103a14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x103a18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103A18u;
    {
        const bool branch_taken_0x103a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A18u;
        // 0x103a1c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a18) {
            ctx->pc = 0x103A34u;
            goto label_103a34;
        }
    }
    ctx->pc = 0x103A20u;
    // 0x103a20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103a28: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103a2c: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103A2Cu;
    ctx->pc = 0x103A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A2Cu;
    // 0x103a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x103A34u;
label_103a34:
    // 0x103a34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103a3c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x103a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103a40: 0x3e00008  jr          $ra
    ctx->pc = 0x103A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A40u;
        // 0x103a44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103A48u;
}
