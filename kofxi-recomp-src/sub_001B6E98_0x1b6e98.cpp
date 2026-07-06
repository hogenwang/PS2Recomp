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

// Function: sub_001B6E98
// Address: 0x1b6e98 - 0x1b6ec8
void sub_001B6E98_0x1b6e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6E98_0x1b6e98");
#endif

    switch (ctx->pc) {
        case 0x1b6eacu: goto label_1b6eac;
        case 0x1b6eb4u: goto label_1b6eb4;
        default: break;
    }

    ctx->pc = 0x1b6e98u;

    // 0x1b6e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6ea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6ea4: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6EA4u;
    SET_GPR_U32(ctx, 31, 0x1B6EACu);
    ctx->pc = 0x1B6EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6EA4u;
    // 0x1b6ea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B6EA4u, 0x1B6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EACu;
label_1b6eac:
    // 0x1b6eac: 0xc06dbb2  jal         func_1B6EC8
    ctx->pc = 0x1B6EACu;
    SET_GPR_U32(ctx, 31, 0x1B6EB4u);
    ctx->pc = 0x1B6EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6EACu;
    // 0x1b6eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6EC8u, 0x1B6EACu, 0x1B6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EB4u;
label_1b6eb4:
    // 0x1b6eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6eb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6ebc: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B6EBCu;
    ctx->pc = 0x1B6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6EBCu;
    // 0x1b6ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B6EC4u;
    // 0x1b6ec4: 0x0  nop
    ctx->pc = 0x1b6ec4u;
    // NOP
}
