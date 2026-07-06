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

// Function: sub_001B51E0
// Address: 0x1b51e0 - 0x1b5210
void sub_001B51E0_0x1b51e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B51E0_0x1b51e0");
#endif

    switch (ctx->pc) {
        case 0x1b51f4u: goto label_1b51f4;
        default: break;
    }

    ctx->pc = 0x1b51e0u;

    // 0x1b51e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b51e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b51e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b51e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b51e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b51e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b51ec: 0xc06d3c2  jal         func_1B4F08
    ctx->pc = 0x1B51ECu;
    SET_GPR_U32(ctx, 31, 0x1B51F4u);
    ctx->pc = 0x1B51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51ECu;
    // 0x1b51f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4F08u, 0x1B51ECu, 0x1B51F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51F4u;
label_1b51f4:
    // 0x1b51f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b51f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b51f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b51fc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1b51fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b5200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5204: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5204u;
        // 0x1b5208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B520Cu;
    // 0x1b520c: 0x0  nop
    ctx->pc = 0x1b520cu;
    // NOP
}
