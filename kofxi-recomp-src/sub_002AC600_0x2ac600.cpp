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

// Function: sub_002AC600
// Address: 0x2ac600 - 0x2ac628
void sub_002AC600_0x2ac600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC600_0x2ac600");
#endif

    switch (ctx->pc) {
        case 0x2ac610u: goto label_2ac610;
        default: break;
    }

    ctx->pc = 0x2ac600u;

    // 0x2ac600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac608: 0xc0ab170  jal         func_2AC5C0
    ctx->pc = 0x2AC608u;
    SET_GPR_U32(ctx, 31, 0x2AC610u);
    ctx->pc = 0x2AC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC5C0u, 0x2AC608u, 0x2AC610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC610u;
label_2ac610:
    // 0x2ac610: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ac610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ac614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac618: 0x24426ee8  addiu       $v0, $v0, 0x6EE8
    ctx->pc = 0x2ac618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28392));
    // 0x2ac61c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC61Cu;
        // 0x2ac620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC624u;
    // 0x2ac624: 0x0  nop
    ctx->pc = 0x2ac624u;
    // NOP
    if (ctx->pc == 0x2ac624u) { ctx->pc = 0x2ac628u; }
}
