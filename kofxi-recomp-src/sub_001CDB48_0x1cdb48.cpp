#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDB48
// Address: 0x1cdb48 - 0x1cdb60
void sub_001CDB48_0x1cdb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDB48_0x1cdb48");
#endif

    ctx->pc = 0x1cdb48u;

    // 0x1cdb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdb4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb58: 0x8073696  j           func_1CDA58
    ctx->pc = 0x1CDB58u;
    ctx->pc = 0x1CDB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB58u;
            // 0x1cdb5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA58u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDB60u;
    ctx->pc = 0x1cdb60u;
}
