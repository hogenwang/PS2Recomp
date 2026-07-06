#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0760
// Address: 0x2f0760 - 0x2f0778
void sub_002F0760_0x2f0760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0760_0x2f0760");
#endif

    ctx->pc = 0x2f0760u;

    // 0x2f0760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f076c: 0x8049c22  j           func_127088
    ctx->pc = 0x2F076Cu;
    ctx->pc = 0x2F0770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F076Cu;
            // 0x2f0770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00127088_0x127088(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F0774u;
    // 0x2f0774: 0x0  nop
    ctx->pc = 0x2f0774u;
    // NOP
    ctx->pc = 0x2f0778u;
}
