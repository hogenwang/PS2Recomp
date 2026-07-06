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

// Function: sub_001C0630
// Address: 0x1c0630 - 0x1c0658
void sub_001C0630_0x1c0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0630_0x1c0630");
#endif

    switch (ctx->pc) {
        case 0x1c0640u: goto label_1c0640;
        case 0x1c0648u: goto label_1c0648;
        default: break;
    }

    ctx->pc = 0x1c0630u;

    // 0x1c0630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0638: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0638u;
    SET_GPR_U32(ctx, 31, 0x1C0640u);
    ctx->pc = 0x1C063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0638u;
    // 0x1c063c: 0x24041300  addiu       $a0, $zero, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0638u, 0x1C0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0640u;
label_1c0640:
    // 0x1c0640: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C0640u;
    SET_GPR_U32(ctx, 31, 0x1C0648u);
    ctx->pc = 0x1C0644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0640u;
    // 0x1c0644: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1C0640u, 0x1C0648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0648u;
label_1c0648:
    // 0x1c0648: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x1c0648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x1c064c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c064cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0650: 0x80704cc  j           func_1C1330
    ctx->pc = 0x1C0650u;
    ctx->pc = 0x1C0654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0650u;
    // 0x1c0654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    sub_001C1330_0x1c1330(rdram, ctx, runtime); return;
    ctx->pc = 0x1C0658u;
}
