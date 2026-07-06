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

// Function: sub_001503A0
// Address: 0x1503a0 - 0x1503e0
void sub_001503A0_0x1503a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001503A0_0x1503a0");
#endif

    switch (ctx->pc) {
        case 0x1503b0u: goto label_1503b0;
        case 0x1503b8u: goto label_1503b8;
        case 0x1503c0u: goto label_1503c0;
        case 0x1503c8u: goto label_1503c8;
        default: break;
    }

    ctx->pc = 0x1503a0u;

    // 0x1503a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1503a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1503a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1503a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1503a8: 0xc0540f8  jal         func_1503E0
    ctx->pc = 0x1503A8u;
    SET_GPR_U32(ctx, 31, 0x1503B0u);
    ctx->pc = 0x1503E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1503E0u, 0x1503A8u, 0x1503B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503B0u;
label_1503b0:
    // 0x1503b0: 0xc05415c  jal         func_150570
    ctx->pc = 0x1503B0u;
    SET_GPR_U32(ctx, 31, 0x1503B8u);
    ctx->pc = 0x150570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150570u, 0x1503B0u, 0x1503B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503B8u;
label_1503b8:
    // 0x1503b8: 0xc0540a8  jal         func_1502A0
    ctx->pc = 0x1503B8u;
    SET_GPR_U32(ctx, 31, 0x1503C0u);
    ctx->pc = 0x1503BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503B8u;
    // 0x1503bc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1502A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1502A0u, 0x1503B8u, 0x1503C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503C0u;
label_1503c0:
    // 0x1503c0: 0xc0540a8  jal         func_1502A0
    ctx->pc = 0x1503C0u;
    SET_GPR_U32(ctx, 31, 0x1503C8u);
    ctx->pc = 0x1503C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503C0u;
    // 0x1503c4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1502A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1502A0u, 0x1503C0u, 0x1503C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503C8u;
label_1503c8:
    // 0x1503c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1503c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1503cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1503CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1503D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503CCu;
        // 0x1503d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1503CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1503D4u;
    // 0x1503d4: 0x0  nop
    ctx->pc = 0x1503d4u;
    // NOP
    // 0x1503d8: 0x0  nop
    ctx->pc = 0x1503d8u;
    // NOP
    // 0x1503dc: 0x0  nop
    ctx->pc = 0x1503dcu;
    // NOP
    if (ctx->pc == 0x1503dcu) { ctx->pc = 0x1503e0u; }
}
