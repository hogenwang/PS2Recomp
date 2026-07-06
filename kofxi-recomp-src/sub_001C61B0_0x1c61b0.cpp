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

// Function: sub_001C61B0
// Address: 0x1c61b0 - 0x1c61e0
void sub_001C61B0_0x1c61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C61B0_0x1c61b0");
#endif

    switch (ctx->pc) {
        case 0x1c61c4u: goto label_1c61c4;
        case 0x1c61ccu: goto label_1c61cc;
        default: break;
    }

    ctx->pc = 0x1c61b0u;

    // 0x1c61b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c61bc: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C61BCu;
    SET_GPR_U32(ctx, 31, 0x1C61C4u);
    ctx->pc = 0x1C61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61BCu;
    // 0x1c61c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C61BCu, 0x1C61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61C4u;
label_1c61c4:
    // 0x1c61c4: 0xc071878  jal         func_1C61E0
    ctx->pc = 0x1C61C4u;
    SET_GPR_U32(ctx, 31, 0x1C61CCu);
    ctx->pc = 0x1C61C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61C4u;
    // 0x1c61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C61E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C61E0u, 0x1C61C4u, 0x1C61CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61CCu;
label_1c61cc:
    // 0x1c61cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c61d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c61d4: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C61D4u;
    ctx->pc = 0x1C61D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61D4u;
    // 0x1c61d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C61DCu;
    // 0x1c61dc: 0x0  nop
    ctx->pc = 0x1c61dcu;
    // NOP
    if (ctx->pc == 0x1c61dcu) { ctx->pc = 0x1c61e0u; }
}
