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

// Function: sub_001E3DD0
// Address: 0x1e3dd0 - 0x1e3e18
void sub_001E3DD0_0x1e3dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3DD0_0x1e3dd0");
#endif

    switch (ctx->pc) {
        case 0x1e3df0u: goto label_1e3df0;
        default: break;
    }

    ctx->pc = 0x1e3dd0u;

    // 0x1e3dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3dd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e3dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e3dd8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e3dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ddc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e3ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e3de0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3de4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1e3de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e3de8: 0xc0806b8  jal         func_201AE0
    ctx->pc = 0x1E3DE8u;
    SET_GPR_U32(ctx, 31, 0x1E3DF0u);
    ctx->pc = 0x1E3DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DE8u;
    // 0x1e3dec: 0x8c8400a8  lw          $a0, 0xA8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AE0u, 0x1E3DE8u, 0x1E3DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DF0u;
label_1e3df0:
    // 0x1e3df0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1e3df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1e3df4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e3df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e3df8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3dfc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e3e00: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1e3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1e3e04: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1e3e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1e3e08: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1e3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1e3e0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e3e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E10u;
        // 0x1e3e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3E18u;
}
