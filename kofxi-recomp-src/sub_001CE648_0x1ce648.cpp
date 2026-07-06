#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE648
// Address: 0x1ce648 - 0x1ce660
void sub_001CE648_0x1ce648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE648_0x1ce648");
#endif

    ctx->pc = 0x1ce648u;

    // 0x1ce648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce64c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1ce64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce658: 0x8073916  j           func_1CE458
    ctx->pc = 0x1CE658u;
    ctx->pc = 0x1CE65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE658u;
            // 0x1ce65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE458u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CE660u;
    ctx->pc = 0x1ce660u;
}
