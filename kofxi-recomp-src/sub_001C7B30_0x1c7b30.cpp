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

// Function: sub_001C7B30
// Address: 0x1c7b30 - 0x1c7b60
void sub_001C7B30_0x1c7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7B30_0x1c7b30");
#endif

    switch (ctx->pc) {
        case 0x1c7b44u: goto label_1c7b44;
        case 0x1c7b4cu: goto label_1c7b4c;
        default: break;
    }

    ctx->pc = 0x1c7b30u;

    // 0x1c7b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7b38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c7b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7b3c: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C7B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B44u);
    ctx->pc = 0x1C7B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B3Cu;
    // 0x1c7b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A08u, 0x1C7B3Cu, 0x1C7B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B44u;
label_1c7b44:
    // 0x1c7b44: 0xc071ed8  jal         func_1C7B60
    ctx->pc = 0x1C7B44u;
    SET_GPR_U32(ctx, 31, 0x1C7B4Cu);
    ctx->pc = 0x1C7B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B44u;
    // 0x1c7b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7B60u, 0x1C7B44u, 0x1C7B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B4Cu;
label_1c7b4c:
    // 0x1c7b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7b50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c7b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7b54: 0x8071e88  j           func_1C7A20
    ctx->pc = 0x1C7B54u;
    ctx->pc = 0x1C7B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B54u;
    // 0x1c7b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    sub_001C7A20_0x1c7a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C7B5Cu;
    // 0x1c7b5c: 0x0  nop
    ctx->pc = 0x1c7b5cu;
    // NOP
}
