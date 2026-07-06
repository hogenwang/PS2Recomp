#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB868
// Address: 0x1bb868 - 0x1bb898
void sub_001BB868_0x1bb868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB868_0x1bb868");
#endif

    ctx->pc = 0x1bb868u;

    // 0x1bb868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb86c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB86Cu;
    {
        const bool branch_taken_0x1bb86c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB86Cu;
        // 0x1bb870: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb86c) {
            ctx->pc = 0x1BB888u;
            goto label_1bb888;
        }
    }
    ctx->pc = 0x1BB874u;
    // 0x1bb874: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bb874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bb878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb87c: 0x24848758  addiu       $a0, $a0, -0x78A8
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    // 0x1bb880: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BB880u;
    ctx->pc = 0x1BB884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB880u;
    // 0x1bb884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB888u;
label_1bb888:
    // 0x1bb888: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bb888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb890: 0x806d832  j           func_1B60C8
    ctx->pc = 0x1BB890u;
    ctx->pc = 0x1BB894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB890u;
    // 0x1bb894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B60C8u, 0x1BB890u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1BB898u;
}
