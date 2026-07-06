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

// Function: kofxiFrameCallbackStateAccessors
// Address: 0x1ce950 - 0x1ce9c0
void kofxiFrameCallbackStateAccessors_0x1ce950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiFrameCallbackStateAccessors_0x1ce950");
#endif

    switch (ctx->pc) {
        case 0x1ce978u: goto label_1ce978;
        case 0x1ce998u: goto label_1ce998;
        case 0x1ce9a8u: goto label_1ce9a8;
        default: break;
    }

    ctx->pc = 0x1ce950u;

    // 0x1ce950: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE958u;
    // 0x1ce958: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ce958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ce95c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE95Cu;
        // 0x1ce960: 0xac44e628  sw          $a0, -0x19D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960680), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE964u;
    // 0x1ce964: 0x0  nop
    ctx->pc = 0x1ce964u;
    // NOP
    // 0x1ce968: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ce968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ce96c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE96Cu;
        // 0x1ce970: 0x8c62e628  lw          $v0, -0x19D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960680)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE974u;
    // 0x1ce974: 0x0  nop
    ctx->pc = 0x1ce974u;
    // NOP
label_1ce978:
    // 0x1ce978: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ce97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE97Cu;
        // 0x1ce980: 0xac44e62c  sw          $a0, -0x19D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE984u;
    // 0x1ce984: 0x0  nop
    ctx->pc = 0x1ce984u;
    // NOP
    // 0x1ce988: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ce98c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE98Cu;
        // 0x1ce990: 0x8c62e62c  lw          $v0, -0x19D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960684)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE994u;
    // 0x1ce994: 0x0  nop
    ctx->pc = 0x1ce994u;
    // NOP
label_1ce998:
    // 0x1ce998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce9a0: 0xc073a70  jal         func_1CE9C0
    ctx->pc = 0x1CE9A0u;
    SET_GPR_U32(ctx, 31, 0x1CE9A8u);
    ctx->pc = 0x1CE9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE9C0u, 0x1CE9A0u, 0x1CE9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9A8u;
label_1ce9a8:
    // 0x1ce9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce9ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1ce9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ce9b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ce9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ce9b4: 0x8073a74  j           func_1CE9D0
    ctx->pc = 0x1CE9B4u;
    ctx->pc = 0x1CE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9B4u;
    // 0x1ce9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE9D0u;
    sub_001CE9D0_0x1ce9d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CE9BCu;
    // 0x1ce9bc: 0x0  nop
    ctx->pc = 0x1ce9bcu;
    // NOP
    if (ctx->pc == 0x1ce9bcu) { ctx->pc = 0x1ce9c0u; }
}
