#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CBFC0
// Address: 0x1cbfc0 - 0x1cbfe0
void sub_001CBFC0_0x1cbfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBFC0_0x1cbfc0");
#endif

    switch (ctx->pc) {
        case 0x1cbfc8u: goto label_1cbfc8;
        default: break;
    }

    ctx->pc = 0x1cbfc0u;

    // 0x1cbfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFC0u;
            // 0x1cbfc4: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CBFC8u;
label_1cbfc8:
    // 0x1cbfc8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1cbfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cbfcc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cbfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cbfd0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cbfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbfd4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1cbfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1cbfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFD8u;
            // 0x1cbfdc: 0xaca70028  sw          $a3, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CBFE0u;
    ctx->pc = 0x1cbfe0u;
}
