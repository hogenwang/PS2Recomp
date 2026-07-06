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

// Function: sub_00303610
// Address: 0x303610 - 0x303640
void sub_00303610_0x303610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303610_0x303610");
#endif

    switch (ctx->pc) {
        case 0x303624u: goto label_303624;
        default: break;
    }

    ctx->pc = 0x303610u;

    // 0x303610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x303610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303614: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x303614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x303618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30361c: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x30361Cu;
    SET_GPR_U32(ctx, 31, 0x303624u);
    ctx->pc = 0x303620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30361Cu;
    // 0x303620: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x30361Cu, 0x303624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303624u;
label_303624:
    // 0x303624: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x303624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x303628: 0xac621de0  sw          $v0, 0x1DE0($v1)
    ctx->pc = 0x303628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7648), GPR_U32(ctx, 2));
    // 0x30362c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30362cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303630: 0x3e00008  jr          $ra
    ctx->pc = 0x303630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303630u;
        // 0x303634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303638u;
    // 0x303638: 0x0  nop
    ctx->pc = 0x303638u;
    // NOP
    // 0x30363c: 0x0  nop
    ctx->pc = 0x30363cu;
    // NOP
}
