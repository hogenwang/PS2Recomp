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

// Function: sub_001DBFC0
// Address: 0x1dbfc0 - 0x1dbfe8
void sub_001DBFC0_0x1dbfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBFC0_0x1dbfc0");
#endif

    switch (ctx->pc) {
        case 0x1dbfd0u: goto label_1dbfd0;
        default: break;
    }

    ctx->pc = 0x1dbfc0u;

    // 0x1dbfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbfc8: 0xc07710a  jal         func_1DC428
    ctx->pc = 0x1DBFC8u;
    SET_GPR_U32(ctx, 31, 0x1DBFD0u);
    ctx->pc = 0x1DC428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC428u, 0x1DBFC8u, 0x1DBFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFD0u;
label_1dbfd0:
    // 0x1dbfd0: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dbfd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbfd8: 0x8c4480d0  lw          $a0, -0x7F30($v0)
    ctx->pc = 0x1dbfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934736)));
    // 0x1dbfdc: 0x24051be0  addiu       $a1, $zero, 0x1BE0
    ctx->pc = 0x1dbfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7136));
    // 0x1dbfe0: 0x807707e  j           func_1DC1F8
    ctx->pc = 0x1DBFE0u;
    ctx->pc = 0x1DBFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFE0u;
    // 0x1dbfe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC1F8u;
    sub_001DC1F8_0x1dc1f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBFE8u;
}
