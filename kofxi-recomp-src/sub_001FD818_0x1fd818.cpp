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

// Function: sub_001FD818
// Address: 0x1fd818 - 0x1fd838
void sub_001FD818_0x1fd818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD818_0x1fd818");
#endif

    ctx->pc = 0x1fd818u;

    // 0x1fd818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd81c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fd81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd82c: 0x807f61e  j           func_1FD878
    ctx->pc = 0x1FD82Cu;
    ctx->pc = 0x1FD830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD82Cu;
    // 0x1fd830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD878u, 0x1FD82Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FD834u;
    // 0x1fd834: 0x0  nop
    ctx->pc = 0x1fd834u;
    // NOP
}
