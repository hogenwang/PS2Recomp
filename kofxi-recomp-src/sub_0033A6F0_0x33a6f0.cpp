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

// Function: sub_0033A6F0
// Address: 0x33a6f0 - 0x33a750
void sub_0033A6F0_0x33a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A6F0_0x33a6f0");
#endif

    switch (ctx->pc) {
        case 0x33a700u: goto label_33a700;
        case 0x33a708u: goto label_33a708;
        case 0x33a714u: goto label_33a714;
        case 0x33a734u: goto label_33a734;
        case 0x33a73cu: goto label_33a73c;
        default: break;
    }

    ctx->pc = 0x33a6f0u;

    // 0x33a6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a6f8: 0xc0ceb6c  jal         func_33ADB0
    ctx->pc = 0x33A6F8u;
    SET_GPR_U32(ctx, 31, 0x33A700u);
    ctx->pc = 0x33ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADB0u, 0x33A6F8u, 0x33A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A700u;
label_33a700:
    // 0x33a700: 0xc0570bc  jal         func_15C2F0
    ctx->pc = 0x33A700u;
    SET_GPR_U32(ctx, 31, 0x33A708u);
    ctx->pc = 0x15C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C2F0u, 0x33A700u, 0x33A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A708u;
label_33a708:
    // 0x33a708: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x33a708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x33a70c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33A70Cu;
    SET_GPR_U32(ctx, 31, 0x33A714u);
    ctx->pc = 0x33A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A70Cu;
    // 0x33a710: 0x2484da70  addiu       $a0, $a0, -0x2590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x33A70Cu, 0x33A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A714u;
label_33a714:
    // 0x33a714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33a714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a718: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33a71c: 0xa04395c8  sb          $v1, -0x6A38($v0)
    ctx->pc = 0x33a71cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940104), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a720: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33a720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33a724: 0xac40e8d8  sw          $zero, -0x1728($v0)
    ctx->pc = 0x33a724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961368), GPR_U32(ctx, 0));
    // 0x33a728: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33a728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33a72c: 0xc052c0c  jal         func_14B030
    ctx->pc = 0x33A72Cu;
    SET_GPR_U32(ctx, 31, 0x33A734u);
    ctx->pc = 0x33A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A72Cu;
    // 0x33a730: 0xac40e8d0  sw          $zero, -0x1730($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B030u, 0x33A72Cu, 0x33A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A734u;
label_33a734:
    // 0x33a734: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x33A734u;
    SET_GPR_U32(ctx, 31, 0x33A73Cu);
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x33A734u, 0x33A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A73Cu;
label_33a73c:
    // 0x33a73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a740: 0x3e00008  jr          $ra
    ctx->pc = 0x33A740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A740u;
        // 0x33a744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A748u;
    // 0x33a748: 0x0  nop
    ctx->pc = 0x33a748u;
    // NOP
    // 0x33a74c: 0x0  nop
    ctx->pc = 0x33a74cu;
    // NOP
    if (ctx->pc == 0x33a74cu) { ctx->pc = 0x33a750u; }
}
