#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDB60
// Address: 0x1cdb60 - 0x1cdb78
void sub_001CDB60_0x1cdb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDB60_0x1cdb60");
#endif

    ctx->pc = 0x1cdb60u;

    // 0x1cdb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdb64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb70: 0x80736ae  j           func_1CDAB8
    ctx->pc = 0x1CDB70u;
    ctx->pc = 0x1CDB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB70u;
            // 0x1cdb74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAB8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDB78u;
    ctx->pc = 0x1cdb78u;
}
