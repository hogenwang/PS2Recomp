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

// Function: sub_001FD7F8
// Address: 0x1fd7f8 - 0x1fd818
void sub_001FD7F8_0x1fd7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD7F8_0x1fd7f8");
#endif

    ctx->pc = 0x1fd7f8u;

    // 0x1fd7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd7fc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fd7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd80c: 0x807f61e  j           func_1FD878
    ctx->pc = 0x1FD80Cu;
    ctx->pc = 0x1FD810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD80Cu;
    // 0x1fd810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD878u, 0x1FD80Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FD814u;
    // 0x1fd814: 0x0  nop
    ctx->pc = 0x1fd814u;
    // NOP
}
