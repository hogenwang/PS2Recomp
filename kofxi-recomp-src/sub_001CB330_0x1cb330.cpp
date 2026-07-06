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

// Function: sub_001CB330
// Address: 0x1cb330 - 0x1cb360
void sub_001CB330_0x1cb330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB330_0x1cb330");
#endif

    switch (ctx->pc) {
        case 0x1cb340u: goto label_1cb340;
        case 0x1cb348u: goto label_1cb348;
        case 0x1cb350u: goto label_1cb350;
        default: break;
    }

    ctx->pc = 0x1cb330u;

    // 0x1cb330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb338: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CB338u;
    SET_GPR_U32(ctx, 31, 0x1CB340u);
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CB338u, 0x1CB340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB340u;
label_1cb340:
    // 0x1cb340: 0xc072cd8  jal         func_1CB360
    ctx->pc = 0x1CB340u;
    SET_GPR_U32(ctx, 31, 0x1CB348u);
    ctx->pc = 0x1CB360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB360u, 0x1CB340u, 0x1CB348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB348u;
label_1cb348:
    // 0x1cb348: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CB348u;
    SET_GPR_U32(ctx, 31, 0x1CB350u);
    ctx->pc = 0x1CA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA800u, 0x1CB348u, 0x1CB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB350u;
label_1cb350:
    // 0x1cb350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb354: 0x80729ee  j           func_1CA7B8
    ctx->pc = 0x1CB354u;
    ctx->pc = 0x1CB358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB354u;
    // 0x1cb358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7B8u, 0x1CB354u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB35Cu;
    // 0x1cb35c: 0x0  nop
    ctx->pc = 0x1cb35cu;
    // NOP
    if (ctx->pc == 0x1cb35cu) { ctx->pc = 0x1cb360u; }
}
