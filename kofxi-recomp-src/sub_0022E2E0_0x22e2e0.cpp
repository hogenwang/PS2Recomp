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

// Function: sub_0022E2E0
// Address: 0x22e2e0 - 0x22e310
void sub_0022E2E0_0x22e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E2E0_0x22e2e0");
#endif

    switch (ctx->pc) {
        case 0x22e2e0u: goto label_22e2e0;
        case 0x22e2e4u: goto label_22e2e4;
        case 0x22e2e8u: goto label_22e2e8;
        case 0x22e2ecu: goto label_22e2ec;
        case 0x22e2f0u: goto label_22e2f0;
        case 0x22e2f4u: goto label_22e2f4;
        case 0x22e2f8u: goto label_22e2f8;
        case 0x22e2fcu: goto label_22e2fc;
        case 0x22e300u: goto label_22e300;
        case 0x22e304u: goto label_22e304;
        case 0x22e308u: goto label_22e308;
        case 0x22e30cu: goto label_22e30c;
        default: break;
    }

    ctx->pc = 0x22e2e0u;

label_22e2e0:
    // 0x22e2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22e2e4:
    // 0x22e2e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22e2e8:
    // 0x22e2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22e2ec:
    // 0x22e2ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e2f0:
    // 0x22e2f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22e2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e2f4:
    // 0x22e2f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_22e2f8:
    // 0x22e2f8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22e2fc:
    // 0x22e2fc: 0x40f809  jalr        $v0
label_22e300:
    if (ctx->pc == 0x22E300u) {
        ctx->pc = 0x22E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2FCu;
        // 0x22e300: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E304u;
        goto label_22e304;
    }
    ctx->pc = 0x22E2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E304u);
        ctx->pc = 0x22E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2FCu;
        // 0x22e300: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E2FCu, 0x22E304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E304u;
label_22e304:
    // 0x22e304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e308:
    // 0x22e308: 0x3e00008  jr          $ra
label_22e30c:
    if (ctx->pc == 0x22E30Cu) {
        ctx->pc = 0x22E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E308u;
        // 0x22e30c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E310u;
        goto label_fallthrough_0x22e308;
    }
    ctx->pc = 0x22E308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E308u;
        // 0x22e30c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22e308:
    ctx->pc = 0x22E310u;
}
