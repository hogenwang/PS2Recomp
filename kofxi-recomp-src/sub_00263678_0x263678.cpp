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

// Function: sub_00263678
// Address: 0x263678 - 0x2636a8
void sub_00263678_0x263678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263678_0x263678");
#endif

    switch (ctx->pc) {
        case 0x263698u: goto label_263698;
        default: break;
    }

    ctx->pc = 0x263678u;

    // 0x263678: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x263678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x26367c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x26367cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x263680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263684: 0x8c451a30  lw          $a1, 0x1A30($v0)
    ctx->pc = 0x263684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6704)));
    // 0x263688: 0x8c661a34  lw          $a2, 0x1A34($v1)
    ctx->pc = 0x263688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6708)));
    // 0x26368c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263690: 0xc098daa  jal         func_2636A8
    ctx->pc = 0x263690u;
    SET_GPR_U32(ctx, 31, 0x263698u);
    ctx->pc = 0x2636A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2636A8u, 0x263690u, 0x263698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263698u;
label_263698:
    // 0x263698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26369c: 0x3e00008  jr          $ra
    ctx->pc = 0x26369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2636A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26369Cu;
        // 0x2636a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2636A4u;
    // 0x2636a4: 0x0  nop
    ctx->pc = 0x2636a4u;
    // NOP
}
