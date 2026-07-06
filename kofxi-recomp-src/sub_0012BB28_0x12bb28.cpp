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

// Function: sub_0012BB28
// Address: 0x12bb28 - 0x12bb58
void sub_0012BB28_0x12bb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BB28_0x12bb28");
#endif

    ctx->pc = 0x12bb28u;

    // 0x12bb28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bb2c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12bb2cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bb34: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12bb34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12bb38: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12bb38u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb3c: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x12bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12bb40: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12bb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bb48: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x12bb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb4c: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x12bb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb50: 0x804ae44  j           func_12B910
    ctx->pc = 0x12BB50u;
    ctx->pc = 0x12BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB50u;
    // 0x12bb54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B910u, 0x12BB50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x12BB58u;
}
