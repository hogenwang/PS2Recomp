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

// Function: sub_001B04A0
// Address: 0x1b04a0 - 0x1b04d0
void sub_001B04A0_0x1b04a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B04A0_0x1b04a0");
#endif

    switch (ctx->pc) {
        case 0x1b04b4u: goto label_1b04b4;
        case 0x1b04bcu: goto label_1b04bc;
        default: break;
    }

    ctx->pc = 0x1b04a0u;

    // 0x1b04a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b04a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b04a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b04a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b04a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b04ac: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B04ACu;
    SET_GPR_U32(ctx, 31, 0x1B04B4u);
    ctx->pc = 0x1B04B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04ACu;
    // 0x1b04b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B04ACu, 0x1B04B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04B4u;
label_1b04b4:
    // 0x1b04b4: 0xc06c134  jal         func_1B04D0
    ctx->pc = 0x1B04B4u;
    SET_GPR_U32(ctx, 31, 0x1B04BCu);
    ctx->pc = 0x1B04B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04B4u;
    // 0x1b04b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04D0u, 0x1B04B4u, 0x1B04BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04BCu;
label_1b04bc:
    // 0x1b04bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b04bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b04c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b04c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b04c4: 0x806c6b2  j           func_1B1AC8
    ctx->pc = 0x1B04C4u;
    ctx->pc = 0x1B04C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04C4u;
    // 0x1b04c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B04CCu;
    // 0x1b04cc: 0x0  nop
    ctx->pc = 0x1b04ccu;
    // NOP
}
