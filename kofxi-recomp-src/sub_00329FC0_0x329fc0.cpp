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

// Function: sub_00329FC0
// Address: 0x329fc0 - 0x329ff0
void sub_00329FC0_0x329fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329FC0_0x329fc0");
#endif

    switch (ctx->pc) {
        case 0x329fd0u: goto label_329fd0;
        case 0x329fdcu: goto label_329fdc;
        case 0x329fe4u: goto label_329fe4;
        default: break;
    }

    ctx->pc = 0x329fc0u;

    // 0x329fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329fc8: 0xc055684  jal         func_155A10
    ctx->pc = 0x329FC8u;
    SET_GPR_U32(ctx, 31, 0x329FD0u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x329FC8u, 0x329FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FD0u;
label_329fd0:
    // 0x329fd0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x329fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x329fd4: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x329FD4u;
    SET_GPR_U32(ctx, 31, 0x329FDCu);
    ctx->pc = 0x329FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FD4u;
    // 0x329fd8: 0x248416b8  addiu       $a0, $a0, 0x16B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x329FD4u, 0x329FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FDCu;
label_329fdc:
    // 0x329fdc: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x329FDCu;
    SET_GPR_U32(ctx, 31, 0x329FE4u);
    ctx->pc = 0x322A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A70u, 0x329FDCu, 0x329FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FE4u;
label_329fe4:
    // 0x329fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x329FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FE8u;
        // 0x329fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329FF0u;
}
