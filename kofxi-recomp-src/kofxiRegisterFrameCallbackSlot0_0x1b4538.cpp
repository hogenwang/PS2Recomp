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

// Function: kofxiRegisterFrameCallbackSlot0
// Address: 0x1b4538 - 0x1b4560
void kofxiRegisterFrameCallbackSlot0_0x1b4538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiRegisterFrameCallbackSlot0_0x1b4538");
#endif

    ctx->pc = 0x1b4538u;

    // 0x1b4538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b453c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b453cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4544: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b4544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b454c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b454cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4554: 0x8073872  j           func_1CE1C8
    ctx->pc = 0x1B4554u;
    ctx->pc = 0x1B4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4554u;
    // 0x1b4558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1C8u, 0x1B4554u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B455Cu;
    // 0x1b455c: 0x0  nop
    ctx->pc = 0x1b455cu;
    // NOP
    if (ctx->pc == 0x1b455cu) { ctx->pc = 0x1b4560u; }
}
