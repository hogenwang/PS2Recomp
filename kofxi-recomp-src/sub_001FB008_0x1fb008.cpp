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

// Function: sub_001FB008
// Address: 0x1fb008 - 0x1fb078
void sub_001FB008_0x1fb008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB008_0x1fb008");
#endif

    switch (ctx->pc) {
        case 0x1fb018u: goto label_1fb018;
        case 0x1fb028u: goto label_1fb028;
        case 0x1fb038u: goto label_1fb038;
        default: break;
    }

    ctx->pc = 0x1fb008u;

    // 0x1fb008: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1fb008u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fb00c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1fb00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fb010: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB010u;
        // 0x1fb014: 0x8ca20a0c  lw          $v0, 0xA0C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2572)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB018u;
label_1fb018:
    // 0x1fb018: 0xac850d5c  sw          $a1, 0xD5C($a0)
    ctx->pc = 0x1fb018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3420), GPR_U32(ctx, 5));
    // 0x1fb01c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB01Cu;
        // 0x1fb020: 0xac860d60  sw          $a2, 0xD60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3424), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB024u;
    // 0x1fb024: 0x0  nop
    ctx->pc = 0x1fb024u;
    // NOP
label_1fb028:
    // 0x1fb028: 0xac850d64  sw          $a1, 0xD64($a0)
    ctx->pc = 0x1fb028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3428), GPR_U32(ctx, 5));
    // 0x1fb02c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB02Cu;
        // 0x1fb030: 0xac860d68  sw          $a2, 0xD68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3432), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB034u;
    // 0x1fb034: 0x0  nop
    ctx->pc = 0x1fb034u;
    // NOP
label_1fb038:
    // 0x1fb038: 0xac850d54  sw          $a1, 0xD54($a0)
    ctx->pc = 0x1fb038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3412), GPR_U32(ctx, 5));
    // 0x1fb03c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB03Cu;
        // 0x1fb040: 0xac860d58  sw          $a2, 0xD58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB044u;
    // 0x1fb044: 0x0  nop
    ctx->pc = 0x1fb044u;
    // NOP
    // 0x1fb048: 0xac850d34  sw          $a1, 0xD34($a0)
    ctx->pc = 0x1fb048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3380), GPR_U32(ctx, 5));
    // 0x1fb04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB04Cu;
        // 0x1fb050: 0xac860d38  sw          $a2, 0xD38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3384), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB054u;
    // 0x1fb054: 0x0  nop
    ctx->pc = 0x1fb054u;
    // NOP
    // 0x1fb058: 0xac850d3c  sw          $a1, 0xD3C($a0)
    ctx->pc = 0x1fb058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3388), GPR_U32(ctx, 5));
    // 0x1fb05c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB05Cu;
        // 0x1fb060: 0xac860d40  sw          $a2, 0xD40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3392), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB064u;
    // 0x1fb064: 0x0  nop
    ctx->pc = 0x1fb064u;
    // NOP
    // 0x1fb068: 0xac850d44  sw          $a1, 0xD44($a0)
    ctx->pc = 0x1fb068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3396), GPR_U32(ctx, 5));
    // 0x1fb06c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB06Cu;
        // 0x1fb070: 0xac860d48  sw          $a2, 0xD48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3400), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB074u;
    // 0x1fb074: 0x0  nop
    ctx->pc = 0x1fb074u;
    // NOP
    if (ctx->pc == 0x1fb074u) { ctx->pc = 0x1fb078u; }
}
