#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB600
// Address: 0x1bb600 - 0x1bb618
void sub_001BB600_0x1bb600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB600_0x1bb600");
#endif

    ctx->pc = 0x1bb600u;

    // 0x1bb600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb608: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bb608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb610: 0x806d864  j           func_1B6190
    ctx->pc = 0x1BB610u;
    ctx->pc = 0x1BB614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB610u;
            // 0x1bb614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6190u;
    {
        auto targetFn = runtime->lookupFunction(0x1B6190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BB618u;
    ctx->pc = 0x1bb618u;
}
