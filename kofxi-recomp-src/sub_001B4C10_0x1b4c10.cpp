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

// Function: sub_001B4C10
// Address: 0x1b4c10 - 0x1b4c48
void sub_001B4C10_0x1b4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4C10_0x1b4c10");
#endif

    switch (ctx->pc) {
        case 0x1b4c24u: goto label_1b4c24;
        case 0x1b4c28u: goto label_1b4c28;
        default: break;
    }

    ctx->pc = 0x1b4c10u;

    // 0x1b4c10: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b4c14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4c1c: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1B4C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B4C24u);
    ctx->pc = 0x1B4C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C1Cu;
    // 0x1b4c20: 0x24847e98  addiu       $a0, $a0, 0x7E98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1B4C1Cu, 0x1B4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C24u;
label_1b4c24:
    // 0x1b4c24: 0x0  nop
    ctx->pc = 0x1b4c24u;
    // NOP
label_1b4c28:
    // 0x1b4c28: 0x0  nop
    ctx->pc = 0x1b4c28u;
    // NOP
    // 0x1b4c2c: 0x0  nop
    ctx->pc = 0x1b4c2cu;
    // NOP
    // 0x1b4c30: 0x0  nop
    ctx->pc = 0x1b4c30u;
    // NOP
    // 0x1b4c34: 0x0  nop
    ctx->pc = 0x1b4c34u;
    // NOP
    // 0x1b4c38: 0x0  nop
    ctx->pc = 0x1b4c38u;
    // NOP
    // 0x1b4c3c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B4C3Cu;
    {
        const bool branch_taken_0x1b4c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4c3c) {
            ctx->pc = 0x1B4C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4c28;
        }
    }
    ctx->pc = 0x1B4C44u;
    // 0x1b4c44: 0x0  nop
    ctx->pc = 0x1b4c44u;
    // NOP
}
