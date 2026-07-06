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

// Function: sub_001D5EE8
// Address: 0x1d5ee8 - 0x1d5f50
void sub_001D5EE8_0x1d5ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5EE8_0x1d5ee8");
#endif

    switch (ctx->pc) {
        case 0x1d5f10u: goto label_1d5f10;
        default: break;
    }

    ctx->pc = 0x1d5ee8u;

    // 0x1d5ee8: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1d5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1d5eec: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x1d5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1d5ef0: 0x8c460040  lw          $a2, 0x40($v0)
    ctx->pc = 0x1d5ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d5ef4: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5EF4u;
    {
        const bool branch_taken_0x1d5ef4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1D5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EF4u;
        // 0x1d5ef8: 0x8c430044  lw          $v1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ef4) {
            ctx->pc = 0x1D5F34u;
            goto label_1d5f34;
        }
    }
    ctx->pc = 0x1D5EFCu;
    // 0x1d5efc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d5f00: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5f04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5f08: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1d5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1d5f0c: 0x0  nop
    ctx->pc = 0x1d5f0cu;
    // NOP
label_1d5f10:
    // 0x1d5f10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5f14: 0x14470002  bne         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5F14u;
    {
        const bool branch_taken_0x1d5f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1D5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F14u;
        // 0x1d5f18: 0x24630660  addiu       $v1, $v1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f14) {
            ctx->pc = 0x1D5F20u;
            goto label_1d5f20;
        }
    }
    ctx->pc = 0x1D5F1Cu;
    // 0x1d5f1c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d5f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1d5f20:
    // 0x1d5f20: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d5f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d5f24: 0x0  nop
    ctx->pc = 0x1d5f24u;
    // NOP
    // 0x1d5f28: 0x0  nop
    ctx->pc = 0x1d5f28u;
    // NOP
    // 0x1d5f2c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D5F2Cu;
    {
        const bool branch_taken_0x1d5f2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F2Cu;
        // 0x1d5f30: 0x24840660  addiu       $a0, $a0, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f2c) {
            ctx->pc = 0x1D5F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5f10;
        }
    }
    ctx->pc = 0x1D5F34u;
label_1d5f34:
    // 0x1d5f34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F3Cu;
    // 0x1d5f3c: 0x0  nop
    ctx->pc = 0x1d5f3cu;
    // NOP
    // 0x1d5f40: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x1d5f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
    // 0x1d5f44: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x1d5f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x1d5f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F48u;
        // 0x1d5f4c: 0xac870060  sw          $a3, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F50u;
}
