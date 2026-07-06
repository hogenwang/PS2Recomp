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

// Function: sub_001FD838
// Address: 0x1fd838 - 0x1fd858
void sub_001FD838_0x1fd838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD838_0x1fd838");
#endif

    ctx->pc = 0x1fd838u;

    // 0x1fd838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd83c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fd83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd844: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd84c: 0x807f61e  j           func_1FD878
    ctx->pc = 0x1FD84Cu;
    ctx->pc = 0x1FD850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD84Cu;
    // 0x1fd850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD878u, 0x1FD84Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FD854u;
    // 0x1fd854: 0x0  nop
    ctx->pc = 0x1fd854u;
    // NOP
    if (ctx->pc == 0x1fd854u) { ctx->pc = 0x1fd858u; }
}
