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

// Function: sub_001EA2A0
// Address: 0x1ea2a0 - 0x1ea2e0
void sub_001EA2A0_0x1ea2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA2A0_0x1ea2a0");
#endif

    switch (ctx->pc) {
        case 0x1ea2b8u: goto label_1ea2b8;
        case 0x1ea2c4u: goto label_1ea2c4;
        default: break;
    }

    ctx->pc = 0x1ea2a0u;

    // 0x1ea2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea2a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea2ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ea2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ea2b0: 0xc07a8b8  jal         func_1EA2E0
    ctx->pc = 0x1EA2B0u;
    SET_GPR_U32(ctx, 31, 0x1EA2B8u);
    ctx->pc = 0x1EA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2B0u;
    // 0x1ea2b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2E0u, 0x1EA2B0u, 0x1EA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2B8u;
label_1ea2b8:
    // 0x1ea2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2bc: 0xc07a8b8  jal         func_1EA2E0
    ctx->pc = 0x1EA2BCu;
    SET_GPR_U32(ctx, 31, 0x1EA2C4u);
    ctx->pc = 0x1EA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2BCu;
    // 0x1ea2c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2E0u, 0x1EA2BCu, 0x1EA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2C4u;
label_1ea2c4:
    // 0x1ea2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ea2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea2cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ea2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea2d4: 0x807a8b8  j           func_1EA2E0
    ctx->pc = 0x1EA2D4u;
    ctx->pc = 0x1EA2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2D4u;
    // 0x1ea2d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2E0u;
    sub_001EA2E0_0x1ea2e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1EA2DCu;
    // 0x1ea2dc: 0x0  nop
    ctx->pc = 0x1ea2dcu;
    // NOP
}
