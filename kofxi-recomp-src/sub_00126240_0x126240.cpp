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

// Function: sub_00126240
// Address: 0x126240 - 0x126260
void sub_00126240_0x126240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126240_0x126240");
#endif

    ctx->pc = 0x126240u;

    // 0x126240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126244: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x126244u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x126248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12624c: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x12624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x126250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126254: 0x8049882  j           func_126208
    ctx->pc = 0x126254u;
    ctx->pc = 0x126258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126254u;
    // 0x126258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126208u, 0x126254u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x12625Cu;
    // 0x12625c: 0x0  nop
    ctx->pc = 0x12625cu;
    // NOP
    if (ctx->pc == 0x12625cu) { ctx->pc = 0x126260u; }
}
