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

// Function: sub_002EA2E0
// Address: 0x2ea2e0 - 0x2ea340
void sub_002EA2E0_0x2ea2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA2E0_0x2ea2e0");
#endif

    switch (ctx->pc) {
        case 0x2ea310u: goto label_2ea310;
        case 0x2ea324u: goto label_2ea324;
        case 0x2ea334u: goto label_2ea334;
        case 0x2ea338u: goto label_2ea338;
        default: break;
    }

    ctx->pc = 0x2ea2e0u;

    // 0x2ea2e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ea2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ea2e4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2ea2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2ea2e8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2ea2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2ea2ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ea2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ea2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ea2f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ea2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ea2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ea300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea304: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2ea304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ea308: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2EA308u;
    SET_GPR_U32(ctx, 31, 0x2EA310u);
    ctx->pc = 0x2EA30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA308u;
    // 0x2ea30c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2EA308u, 0x2EA310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA310u;
label_2ea310:
    // 0x2ea310: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x2ea310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x2ea314: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ea314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea318: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x2ea318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x2ea31c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x2EA31Cu;
    SET_GPR_U32(ctx, 31, 0x2EA324u);
    ctx->pc = 0x2EA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA31Cu;
    // 0x2ea320: 0xafb20014  sw          $s2, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2EA31Cu, 0x2EA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA324u;
label_2ea324:
    // 0x2ea324: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ea324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ea328: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ea328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea32c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2ea32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea330: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ea330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ea334:
    // 0x2ea334: 0x3e00008  jr          $ra
label_2ea338:
    if (ctx->pc == 0x2EA338u) {
        ctx->pc = 0x2EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA334u;
        // 0x2ea338: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA33Cu;
        goto label_fallthrough_0x2ea334;
    }
    ctx->pc = 0x2EA334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA334u;
        // 0x2ea338: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ea334:
    ctx->pc = 0x2EA33Cu;
    // 0x2ea33c: 0x0  nop
    ctx->pc = 0x2ea33cu;
    // NOP
}
