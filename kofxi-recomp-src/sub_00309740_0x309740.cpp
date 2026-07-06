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

// Function: sub_00309740
// Address: 0x309740 - 0x309770
void sub_00309740_0x309740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309740_0x309740");
#endif

    ctx->pc = 0x309740u;

    // 0x309740: 0xd8af0000  lqc2        $vf15, 0x0($a1)
    ctx->pc = 0x309740u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x309744: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x309744u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x309748: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x309748u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30974c: 0xd8880020  lqc2        $vf8, 0x20($a0)
    ctx->pc = 0x30974cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x309750: 0x4b0f3198  vmulx.x     $vf6, $vf6, $vf15x
    ctx->pc = 0x309750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x309754: 0x4a8f39d9  vmuly.y     $vf7, $vf7, $vf15y
    ctx->pc = 0x309754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x309758: 0x4a4f421a  vmulz.z     $vf8, $vf8, $vf15z
    ctx->pc = 0x309758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x30975c: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x30975cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x309760: 0xf8870010  sqc2        $vf7, 0x10($a0)
    ctx->pc = 0x309760u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x309764: 0x3e00008  jr          $ra
    ctx->pc = 0x309764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309764u;
        // 0x309768: 0xf8880020  sqc2        $vf8, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30976Cu;
    // 0x30976c: 0x0  nop
    ctx->pc = 0x30976cu;
    // NOP
    if (ctx->pc == 0x30976cu) { ctx->pc = 0x309770u; }
}
