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

// Function: sub_001B1AE0
// Address: 0x1b1ae0 - 0x1b1b08
void sub_001B1AE0_0x1b1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1AE0_0x1b1ae0");
#endif

    switch (ctx->pc) {
        case 0x1b1af0u: goto label_1b1af0;
        case 0x1b1af8u: goto label_1b1af8;
        default: break;
    }

    ctx->pc = 0x1b1ae0u;

    // 0x1b1ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1ae8: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B1AE8u;
    SET_GPR_U32(ctx, 31, 0x1B1AF0u);
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B1AE8u, 0x1B1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AF0u;
label_1b1af0:
    // 0x1b1af0: 0xc06c6c2  jal         func_1B1B08
    ctx->pc = 0x1B1AF0u;
    SET_GPR_U32(ctx, 31, 0x1B1AF8u);
    ctx->pc = 0x1B1B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B08u, 0x1B1AF0u, 0x1B1AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AF8u;
label_1b1af8:
    // 0x1b1af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1afc: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B1AFCu;
    ctx->pc = 0x1B1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AFCu;
    // 0x1b1b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1B04u;
    // 0x1b1b04: 0x0  nop
    ctx->pc = 0x1b1b04u;
    // NOP
    if (ctx->pc == 0x1b1b04u) { ctx->pc = 0x1b1b08u; }
}
