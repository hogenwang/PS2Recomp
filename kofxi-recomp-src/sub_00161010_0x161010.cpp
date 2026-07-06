#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161010
// Address: 0x161010 - 0x161040
void sub_00161010_0x161010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161010_0x161010");
#endif

    ctx->pc = 0x161010u;

    // 0x161010: 0x41203  sra         $v0, $a0, 8
    ctx->pc = 0x161010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
    // 0x161014: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x161014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161018: 0x653018  mult        $a2, $v1, $a1
    ctx->pc = 0x161018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16101c: 0x41403  sra         $v0, $a0, 16
    ctx->pc = 0x16101cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
    // 0x161020: 0x70451818  mult1       $v1, $v0, $a1
    ctx->pc = 0x161020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x161024: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x161024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x161028: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x161028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16102c: 0x62202  srl         $a0, $a2, 8
    ctx->pc = 0x16102cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x161030: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161034: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x161034u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x161038: 0x3e00008  jr          $ra
    ctx->pc = 0x161038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161038u;
            // 0x16103c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161040u;
    ctx->pc = 0x161040u;
}
