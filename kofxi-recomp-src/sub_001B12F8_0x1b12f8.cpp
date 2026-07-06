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

// Function: sub_001B12F8
// Address: 0x1b12f8 - 0x1b1328
void sub_001B12F8_0x1b12f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B12F8_0x1b12f8");
#endif

    switch (ctx->pc) {
        case 0x1b1310u: goto label_1b1310;
        default: break;
    }

    ctx->pc = 0x1b12f8u;

    // 0x1b12f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b12f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b12fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B12FCu;
    {
        const bool branch_taken_0x1b12fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12FCu;
        // 0x1b1300: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12fc) {
            ctx->pc = 0x1B1318u;
            goto label_1b1318;
        }
    }
    ctx->pc = 0x1B1304u;
    // 0x1b1304: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b1304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b1308: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B1308u;
    SET_GPR_U32(ctx, 31, 0x1B1310u);
    ctx->pc = 0x1B130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1308u;
    // 0x1b130c: 0x24847a38  addiu       $a0, $a0, 0x7A38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B1308u, 0x1B1310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1310u;
label_1b1310:
    // 0x1b1310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1310u;
    {
        const bool branch_taken_0x1b1310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1310u;
        // 0x1b1314: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1310) {
            ctx->pc = 0x1B131Cu;
            goto label_1b131c;
        }
    }
    ctx->pc = 0x1B1318u;
label_1b1318:
    // 0x1b1318: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1b1318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1b131c:
    // 0x1b131c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b131cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1320: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1320u;
        // 0x1b1324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1328u;
}
