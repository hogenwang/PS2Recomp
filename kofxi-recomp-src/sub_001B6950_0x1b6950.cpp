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

// Function: sub_001B6950
// Address: 0x1b6950 - 0x1b6980
void sub_001B6950_0x1b6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6950_0x1b6950");
#endif

    switch (ctx->pc) {
        case 0x1b6964u: goto label_1b6964;
        case 0x1b696cu: goto label_1b696c;
        default: break;
    }

    ctx->pc = 0x1b6950u;

    // 0x1b6950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b695c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B695Cu;
    SET_GPR_U32(ctx, 31, 0x1B6964u);
    ctx->pc = 0x1B6960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B695Cu;
    // 0x1b6960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B695Cu, 0x1B6964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6964u;
label_1b6964:
    // 0x1b6964: 0xc06da60  jal         func_1B6980
    ctx->pc = 0x1B6964u;
    SET_GPR_U32(ctx, 31, 0x1B696Cu);
    ctx->pc = 0x1B6968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6964u;
    // 0x1b6968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6980u, 0x1B6964u, 0x1B696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B696Cu;
label_1b696c:
    // 0x1b696c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b696cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6970: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6974: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B6974u;
    ctx->pc = 0x1B6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6974u;
    // 0x1b6978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B697Cu;
    // 0x1b697c: 0x0  nop
    ctx->pc = 0x1b697cu;
    // NOP
}
