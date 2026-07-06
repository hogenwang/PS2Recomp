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

// Function: sub_002B14B0
// Address: 0x2b14b0 - 0x2b14d8
void sub_002B14B0_0x2b14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B14B0_0x2b14b0");
#endif

    ctx->pc = 0x2b14b0u;

    // 0x2b14b0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2b14b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2b14b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2b14b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14b8: 0x24a50218  addiu       $a1, $a1, 0x218
    ctx->pc = 0x2b14b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 536));
    // 0x2b14bc: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x2b14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x2b14c0: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x2b14c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x2b14c4: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x2b14c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2b14c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b14c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14cc: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2b14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x2b14d0: 0x80abee6  j           func_2AFB98
    ctx->pc = 0x2B14D0u;
    ctx->pc = 0x2B14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B14D0u;
    // 0x2b14d4: 0xac60002c  sw          $zero, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFB98u;
    sub_002AFB98_0x2afb98(rdram, ctx, runtime); return;
    ctx->pc = 0x2B14D8u;
}
