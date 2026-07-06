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

// Function: sub_001B6F30
// Address: 0x1b6f30 - 0x1b6f60
void sub_001B6F30_0x1b6f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6F30_0x1b6f30");
#endif

    switch (ctx->pc) {
        case 0x1b6f44u: goto label_1b6f44;
        case 0x1b6f4cu: goto label_1b6f4c;
        default: break;
    }

    ctx->pc = 0x1b6f30u;

    // 0x1b6f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6f38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6f3c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6F3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F44u);
    ctx->pc = 0x1B6F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F3Cu;
    // 0x1b6f40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B6F3Cu, 0x1B6F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F44u;
label_1b6f44:
    // 0x1b6f44: 0xc06dbd8  jal         func_1B6F60
    ctx->pc = 0x1B6F44u;
    SET_GPR_U32(ctx, 31, 0x1B6F4Cu);
    ctx->pc = 0x1B6F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F44u;
    // 0x1b6f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F60u, 0x1B6F44u, 0x1B6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F4Cu;
label_1b6f4c:
    // 0x1b6f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6f50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6f54: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B6F54u;
    ctx->pc = 0x1B6F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F54u;
    // 0x1b6f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B6F5Cu;
    // 0x1b6f5c: 0x0  nop
    ctx->pc = 0x1b6f5cu;
    // NOP
}
