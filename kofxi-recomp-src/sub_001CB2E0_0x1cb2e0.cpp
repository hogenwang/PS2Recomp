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

// Function: sub_001CB2E0
// Address: 0x1cb2e0 - 0x1cb330
void sub_001CB2E0_0x1cb2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB2E0_0x1cb2e0");
#endif

    switch (ctx->pc) {
        case 0x1cb310u: goto label_1cb310;
        default: break;
    }

    ctx->pc = 0x1cb2e0u;

    // 0x1cb2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb2e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cb2e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb2ec: 0x24508bc8  addiu       $s0, $v0, -0x7438
    ctx->pc = 0x1cb2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937544));
    // 0x1cb2f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb2f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB2F4u;
    {
        const bool branch_taken_0x1cb2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2F4u;
        // 0x1cb2f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2f4) {
            ctx->pc = 0x1CB314u;
            goto label_1cb314;
        }
    }
    ctx->pc = 0x1CB2FCu;
    // 0x1cb2fc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1cb2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1cb300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb304: 0x24848bd0  addiu       $a0, $a0, -0x7430
    ctx->pc = 0x1cb304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937552));
    // 0x1cb308: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CB308u;
    SET_GPR_U32(ctx, 31, 0x1CB310u);
    ctx->pc = 0x1CB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB308u;
    // 0x1cb30c: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CB308u, 0x1CB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB310u;
label_1cb310:
    // 0x1cb310: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb314:
    // 0x1cb314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb318: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb31c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cb320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb324: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB324u;
        // 0x1cb328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB32Cu;
    // 0x1cb32c: 0x0  nop
    ctx->pc = 0x1cb32cu;
    // NOP
    if (ctx->pc == 0x1cb32cu) { ctx->pc = 0x1cb330u; }
}
