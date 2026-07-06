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

// Function: sub_002041A0
// Address: 0x2041a0 - 0x2041d0
void sub_002041A0_0x2041a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002041A0_0x2041a0");
#endif

    switch (ctx->pc) {
        case 0x2041b8u: goto label_2041b8;
        case 0x2041c0u: goto label_2041c0;
        default: break;
    }

    ctx->pc = 0x2041a0u;

    // 0x2041a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2041a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2041a4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2041a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2041a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2041a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2041ac: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2041acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2041b0: 0xc081484  jal         func_205210
    ctx->pc = 0x2041B0u;
    SET_GPR_U32(ctx, 31, 0x2041B8u);
    ctx->pc = 0x2041B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041B0u;
    // 0x2041b4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205210u, 0x2041B0u, 0x2041B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041B8u;
label_2041b8:
    // 0x2041b8: 0xc081074  jal         func_2041D0
    ctx->pc = 0x2041B8u;
    SET_GPR_U32(ctx, 31, 0x2041C0u);
    ctx->pc = 0x2041BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041B8u;
    // 0x2041bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2041D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041D0u, 0x2041B8u, 0x2041C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041C0u;
label_2041c0:
    // 0x2041c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2041c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2041c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2041C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2041C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041C4u;
        // 0x2041c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2041C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2041CCu;
    // 0x2041cc: 0x0  nop
    ctx->pc = 0x2041ccu;
    // NOP
    if (ctx->pc == 0x2041ccu) { ctx->pc = 0x2041d0u; }
}
