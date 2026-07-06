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

// Function: sub_001FBBB8
// Address: 0x1fbbb8 - 0x1fbc18
void sub_001FBBB8_0x1fbbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBBB8_0x1fbbb8");
#endif

    switch (ctx->pc) {
        case 0x1fbbdcu: goto label_1fbbdc;
        case 0x1fbbecu: goto label_1fbbec;
        default: break;
    }

    ctx->pc = 0x1fbbb8u;

    // 0x1fbbb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbbbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbbc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbbc4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fbbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fbbc8: 0xdc900158  ld          $s0, 0x158($a0)
    ctx->pc = 0x1fbbc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1fbbcc: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FBBCCu;
    {
        const bool branch_taken_0x1fbbcc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1FBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBCCu;
        // 0x1fbbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbcc) {
            ctx->pc = 0x1FBC08u;
            goto label_1fbc08;
        }
    }
    ctx->pc = 0x1FBBD4u;
    // 0x1fbbd4: 0xc048082  jal         func_120208
    ctx->pc = 0x1FBBD4u;
    SET_GPR_U32(ctx, 31, 0x1FBBDCu);
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x1FBBD4u, 0x1FBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBDCu;
label_1fbbdc:
    // 0x1fbbdc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1fbbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1fbbe0: 0x34a55f90  ori         $a1, $a1, 0x5F90
    ctx->pc = 0x1fbbe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24464);
    // 0x1fbbe4: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FBBE4u;
    SET_GPR_U32(ctx, 31, 0x1FBBECu);
    ctx->pc = 0x1FBBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBE4u;
    // 0x1fbbe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x1FBBE4u, 0x1FBBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBECu;
label_1fbbec:
    // 0x1fbbec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1fbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1fbbf0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1fbbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fbbf4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1fbbf4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1fbbf8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1fbbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1fbbfc: 0xfc701798  sd          $s0, 0x1798($v1)
    ctx->pc = 0x1fbbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 6040), GPR_U64(ctx, 16));
    // 0x1fbc00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fbc00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc04: 0xaca417a0  sw          $a0, 0x17A0($a1)
    ctx->pc = 0x1fbc04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6048), GPR_U32(ctx, 4));
label_1fbc08:
    // 0x1fbc08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbc08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbc0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fbc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbc10: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC10u;
        // 0x1fbc14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC18u;
}
