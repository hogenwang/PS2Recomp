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

// Function: sub_002CB508
// Address: 0x2cb508 - 0x2cb530
void sub_002CB508_0x2cb508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB508_0x2cb508");
#endif

    ctx->pc = 0x2cb508u;

    // 0x2cb508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb50c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cb50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb514: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cb514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb518: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2cb518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cb51c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2cb51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cb520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb524: 0x80b302c  j           func_2CC0B0
    ctx->pc = 0x2CB524u;
    ctx->pc = 0x2CB528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB524u;
    // 0x2cb528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC0B0u, 0x2CB524u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CB52Cu;
    // 0x2cb52c: 0x0  nop
    ctx->pc = 0x2cb52cu;
    // NOP
    if (ctx->pc == 0x2cb52cu) { ctx->pc = 0x2cb530u; }
}
