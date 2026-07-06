#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00120208
// Address: 0x120208 - 0x120258
void sub_00120208_0x120208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120208_0x120208");
#endif

    ctx->pc = 0x120208u;

    // 0x120208: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x120208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12020c: 0x5783f  dsra32      $t7, $a1, 0
    ctx->pc = 0x12020cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120210: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x120210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x120214: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x120214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x120218: 0x4f0018  mult        $zero, $v0, $t7
    ctx->pc = 0x120218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12021c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12021cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120220: 0x70450019  multu1      $zero, $v0, $a1
    ctx->pc = 0x120220u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120224: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x120224u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x120228: 0x70852000  madd        $a0, $a0, $a1
    ctx->pc = 0x120228u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12022c: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x12022cu;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x120230: 0x70200ba9  pcpyud      $at, $at, $zero
    ctx->pc = 0x120230u;
    SET_GPR_VEC(ctx, 1, _mm_unpackhi_epi64(GPR_VEC(ctx, 1), GPR_VEC(ctx, 0)));
    // 0x120234: 0x20102d  daddu       $v0, $at, $zero
    ctx->pc = 0x120234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120238: 0x2783f  dsra32      $t7, $v0, 0
    ctx->pc = 0x120238u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12023c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12023cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120240: 0x1e47821  addu        $t7, $t7, $a0
    ctx->pc = 0x120240u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x120244: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x120244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x120248: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x120248u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12024c: 0x3e00008  jr          $ra
    ctx->pc = 0x12024Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12024Cu;
            // 0x120250: 0x4f1025  or          $v0, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x120254u;
    // 0x120254: 0x0  nop
    ctx->pc = 0x120254u;
    // NOP
    ctx->pc = 0x120258u;
}
