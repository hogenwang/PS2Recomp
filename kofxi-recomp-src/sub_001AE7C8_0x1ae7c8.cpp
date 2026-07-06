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

// Function: sub_001AE7C8
// Address: 0x1ae7c8 - 0x1ae828
void sub_001AE7C8_0x1ae7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE7C8_0x1ae7c8");
#endif

    switch (ctx->pc) {
        case 0x1ae7e4u: goto label_1ae7e4;
        case 0x1ae800u: goto label_1ae800;
        default: break;
    }

    ctx->pc = 0x1ae7c8u;

    // 0x1ae7c8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ae7cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae7ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae7d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7d4: 0x2484f710  addiu       $a0, $a0, -0x8F0
    ctx->pc = 0x1ae7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965008));
    // 0x1ae7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae7dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AE7DCu;
    SET_GPR_U32(ctx, 31, 0x1AE7E4u);
    ctx->pc = 0x1AE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7DCu;
    // 0x1ae7e0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1AE7DCu, 0x1AE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7E4u;
label_1ae7e4:
    // 0x1ae7e4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1ae7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1ae7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae7ec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ae7f0: 0xac60f708  sw          $zero, -0x8F8($v1)
    ctx->pc = 0x1ae7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965000), GPR_U32(ctx, 0));
    // 0x1ae7f4: 0xac40f70c  sw          $zero, -0x8F4($v0)
    ctx->pc = 0x1ae7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965004), GPR_U32(ctx, 0));
    // 0x1ae7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7F8u;
        // 0x1ae7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE800u;
label_1ae800:
    // 0x1ae800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae804: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ae808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae80c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1ae80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1ae810: 0xac44f708  sw          $a0, -0x8F8($v0)
    ctx->pc = 0x1ae810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965000), GPR_U32(ctx, 4));
    // 0x1ae814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae818: 0xac65f70c  sw          $a1, -0x8F4($v1)
    ctx->pc = 0x1ae818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965004), GPR_U32(ctx, 5));
    // 0x1ae81c: 0x80738fa  j           func_1CE3E8
    ctx->pc = 0x1AE81Cu;
    ctx->pc = 0x1AE820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE81Cu;
    // 0x1ae820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3E8u;
    kofxiInstallGlobalDeferredCallbackSlotCore_0x1ce3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1AE824u;
    // 0x1ae824: 0x0  nop
    ctx->pc = 0x1ae824u;
    // NOP
}
