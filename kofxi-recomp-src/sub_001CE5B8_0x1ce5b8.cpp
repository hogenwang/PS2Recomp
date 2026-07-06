#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE5B8
// Address: 0x1ce5b8 - 0x1ce5d0
void sub_001CE5B8_0x1ce5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE5B8_0x1ce5b8");
#endif

    ctx->pc = 0x1ce5b8u;

    // 0x1ce5b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce5bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ce5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce5c8: 0x8073916  j           func_1CE458
    ctx->pc = 0x1CE5C8u;
    ctx->pc = 0x1CE5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5C8u;
            // 0x1ce5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE458u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CE5D0u;
    ctx->pc = 0x1ce5d0u;
}
