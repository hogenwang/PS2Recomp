#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA968
// Address: 0x1ea968 - 0x1ea980
void sub_001EA968_0x1ea968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA968_0x1ea968");
#endif

    ctx->pc = 0x1ea968u;

    // 0x1ea968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea96c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea978: 0x807aa66  j           func_1EA998
    ctx->pc = 0x1EA978u;
    ctx->pc = 0x1EA97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA978u;
            // 0x1ea97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA998u;
    {
        auto targetFn = runtime->lookupFunction(0x1EA998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1EA980u;
    ctx->pc = 0x1ea980u;
}
