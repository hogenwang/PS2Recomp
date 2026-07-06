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

// Function: sub_0020A660
// Address: 0x20a660 - 0x20a680
void sub_0020A660_0x20a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A660_0x20a660");
#endif

    ctx->pc = 0x20a660u;

    // 0x20a660: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x20a660u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x20a664: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20a664u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20a668: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x20a668u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x20a66c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x20a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20a670: 0x24e7a4a8  addiu       $a3, $a3, -0x5B58
    ctx->pc = 0x20a670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943912));
    // 0x20a674: 0x2508a4a0  addiu       $t0, $t0, -0x5B60
    ctx->pc = 0x20a674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943904));
    // 0x20a678: 0x8082944  j           func_20A510
    ctx->pc = 0x20A678u;
    ctx->pc = 0x20A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A678u;
    // 0x20a67c: 0x2529a4b0  addiu       $t1, $t1, -0x5B50 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    sub_0020A510_0x20a510(rdram, ctx, runtime); return;
    ctx->pc = 0x20A680u;
}
