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

// Function: sub_001B8E48
// Address: 0x1b8e48 - 0x1b8e70
void sub_001B8E48_0x1b8e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8E48_0x1b8e48");
#endif

    switch (ctx->pc) {
        case 0x1b8e58u: goto label_1b8e58;
        case 0x1b8e60u: goto label_1b8e60;
        default: break;
    }

    ctx->pc = 0x1b8e48u;

    // 0x1b8e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8e4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8e50: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B8E50u;
    SET_GPR_U32(ctx, 31, 0x1B8E58u);
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B8E50u, 0x1B8E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E58u;
label_1b8e58:
    // 0x1b8e58: 0xc06e39c  jal         func_1B8E70
    ctx->pc = 0x1B8E58u;
    SET_GPR_U32(ctx, 31, 0x1B8E60u);
    ctx->pc = 0x1B8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8E70u, 0x1B8E58u, 0x1B8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E60u;
label_1b8e60:
    // 0x1b8e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8e64: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B8E64u;
    ctx->pc = 0x1B8E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E64u;
    // 0x1b8e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8E6Cu;
    // 0x1b8e6c: 0x0  nop
    ctx->pc = 0x1b8e6cu;
    // NOP
    if (ctx->pc == 0x1b8e6cu) { ctx->pc = 0x1b8e70u; }
}
