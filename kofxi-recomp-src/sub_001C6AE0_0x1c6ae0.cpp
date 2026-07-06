#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6AE0
// Address: 0x1c6ae0 - 0x1c6af8
void sub_001C6AE0_0x1c6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6AE0_0x1c6ae0");
#endif

    ctx->pc = 0x1c6ae0u;

    // 0x1c6ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6aec: 0x80736d8  j           func_1CDB60
    ctx->pc = 0x1C6AECu;
    ctx->pc = 0x1C6AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AECu;
            // 0x1c6af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    if (runtime->hasFunction(0x1CDB60u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDB60_0x1cdb60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C6AF4u;
    // 0x1c6af4: 0x0  nop
    ctx->pc = 0x1c6af4u;
    // NOP
    ctx->pc = 0x1c6af8u;
}
