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

// Function: sub_00336CA0
// Address: 0x336ca0 - 0x336d00
void sub_00336CA0_0x336ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336CA0_0x336ca0");
#endif

    switch (ctx->pc) {
        case 0x336cbcu: goto label_336cbc;
        default: break;
    }

    ctx->pc = 0x336ca0u;

    // 0x336ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336ca4: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x336ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x336ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336cac: 0x2484b280  addiu       $a0, $a0, -0x4D80
    ctx->pc = 0x336cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947456));
    // 0x336cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336cb4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x336CB4u;
    SET_GPR_U32(ctx, 31, 0x336CBCu);
    ctx->pc = 0x336CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336CB4u;
    // 0x336cb8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x336CB4u, 0x336CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336CBCu;
label_336cbc:
    // 0x336cbc: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336cc0: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x336cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x336cc4: 0xa060b280  sb          $zero, -0x4D80($v1)
    ctx->pc = 0x336cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947456), (uint8_t)GPR_U32(ctx, 0));
    // 0x336cc8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336ccc: 0xa080b281  sb          $zero, -0x4D7F($a0)
    ctx->pc = 0x336cccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294947457), (uint8_t)GPR_U32(ctx, 0));
    // 0x336cd0: 0xa060b282  sb          $zero, -0x4D7E($v1)
    ctx->pc = 0x336cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947458), (uint8_t)GPR_U32(ctx, 0));
    // 0x336cd4: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x336cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x336cd8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336cdc: 0xa080b283  sb          $zero, -0x4D7D($a0)
    ctx->pc = 0x336cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294947459), (uint8_t)GPR_U32(ctx, 0));
    // 0x336ce0: 0xa060b284  sb          $zero, -0x4D7C($v1)
    ctx->pc = 0x336ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947460), (uint8_t)GPR_U32(ctx, 0));
    // 0x336ce4: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x336ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x336ce8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336cec: 0xa080b285  sb          $zero, -0x4D7B($a0)
    ctx->pc = 0x336cecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294947461), (uint8_t)GPR_U32(ctx, 0));
    // 0x336cf0: 0xa060b286  sb          $zero, -0x4D7A($v1)
    ctx->pc = 0x336cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947462), (uint8_t)GPR_U32(ctx, 0));
    // 0x336cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x336CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CF8u;
        // 0x336cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336D00u;
}
