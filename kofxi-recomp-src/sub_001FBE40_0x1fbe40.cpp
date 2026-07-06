#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FBE40
// Address: 0x1fbe40 - 0x1fbe58
void sub_001FBE40_0x1fbe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBE40_0x1fbe40");
#endif

    ctx->pc = 0x1fbe40u;

    // 0x1fbe40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbe44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fbe48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbe48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe4c: 0x807ef96  j           func_1FBE58
    ctx->pc = 0x1FBE4Cu;
    ctx->pc = 0x1FBE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE4Cu;
            // 0x1fbe50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE58u;
    if (runtime->hasFunction(0x1FBE58u)) {
        auto targetFn = runtime->lookupFunction(0x1FBE58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FBE58_0x1fbe58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FBE54u;
    // 0x1fbe54: 0x0  nop
    ctx->pc = 0x1fbe54u;
    // NOP
    ctx->pc = 0x1fbe58u;
}
