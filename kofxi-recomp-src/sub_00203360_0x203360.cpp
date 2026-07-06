#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203360
// Address: 0x203360 - 0x203378
void sub_00203360_0x203360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203360_0x203360");
#endif

    ctx->pc = 0x203360u;

    // 0x203360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20336c: 0x804aeca  j           func_12BB28
    ctx->pc = 0x20336Cu;
    ctx->pc = 0x203370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20336Cu;
            // 0x203370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BB28u;
    if (runtime->hasFunction(0x12BB28u)) {
        auto targetFn = runtime->lookupFunction(0x12BB28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012BB28_0x12bb28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x203374u;
    // 0x203374: 0x0  nop
    ctx->pc = 0x203374u;
    // NOP
    ctx->pc = 0x203378u;
}
