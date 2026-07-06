#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1CD8
// Address: 0x1f1cd8 - 0x1f1d00
void sub_001F1CD8_0x1f1cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1CD8_0x1f1cd8");
#endif

    ctx->pc = 0x1f1cd8u;

    // 0x1f1cd8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1f1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f1cdc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1ce0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f1ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1ce4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f1ce8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f1ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f1cec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1f1cf0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1f1cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1f1cf4: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1f1cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1f1cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CF8u;
            // 0x1f1cfc: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1D00u;
    ctx->pc = 0x1f1d00u;
}
