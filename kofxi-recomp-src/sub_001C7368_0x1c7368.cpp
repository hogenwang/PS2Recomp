#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7368
// Address: 0x1c7368 - 0x1c7388
void sub_001C7368_0x1c7368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7368_0x1c7368");
#endif

    ctx->pc = 0x1c7368u;

    // 0x1c7368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c736c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c736cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7374: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1c7374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c7378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c737c: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1C737Cu;
    ctx->pc = 0x1C7380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C737Cu;
            // 0x1c7380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C7384u;
    // 0x1c7384: 0x0  nop
    ctx->pc = 0x1c7384u;
    // NOP
    ctx->pc = 0x1c7388u;
}
