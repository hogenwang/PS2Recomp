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

// Function: sub_00235410
// Address: 0x235410 - 0x235428
void sub_00235410_0x235410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235410_0x235410");
#endif

    ctx->pc = 0x235410u;

    // 0x235410: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x235410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235414: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x235414u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x235418: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x235418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23541c: 0x8091536  j           func_2454D8
    ctx->pc = 0x23541Cu;
    ctx->pc = 0x235420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23541Cu;
    // 0x235420: 0xa4620030  sh          $v0, 0x30($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2454D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2454D8u, 0x23541Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x235424u;
    // 0x235424: 0x0  nop
    ctx->pc = 0x235424u;
    // NOP
    if (ctx->pc == 0x235424u) { ctx->pc = 0x235428u; }
}
