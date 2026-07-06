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

// Function: sub_0028CB28
// Address: 0x28cb28 - 0x28cb80
void sub_0028CB28_0x28cb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CB28_0x28cb28");
#endif

    switch (ctx->pc) {
        case 0x28cb54u: goto label_28cb54;
        case 0x28cb5cu: goto label_28cb5c;
        default: break;
    }

    ctx->pc = 0x28cb28u;

    // 0x28cb28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28cb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28cb2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28cb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28cb30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28cb30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb34: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x28CB34u;
    {
        const bool branch_taken_0x28cb34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB34u;
        // 0x28cb38: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb34) {
            ctx->pc = 0x28CB70u;
            goto label_28cb70;
        }
    }
    ctx->pc = 0x28CB3Cu;
    // 0x28cb3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x28cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28cb40: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CB40u;
    {
        const bool branch_taken_0x28cb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cb40) {
            ctx->pc = 0x28CB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CB40u;
            // 0x28cb44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CB60u;
            goto label_28cb60;
        }
    }
    ctx->pc = 0x28CB48u;
    // 0x28cb48: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x28cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28cb4c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x28CB4Cu;
    SET_GPR_U32(ctx, 31, 0x28CB54u);
    ctx->pc = 0x28CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB4Cu;
    // 0x28cb50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x28CB4Cu, 0x28CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB54u;
label_28cb54:
    // 0x28cb54: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x28CB54u;
    SET_GPR_U32(ctx, 31, 0x28CB5Cu);
    ctx->pc = 0x28CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB54u;
    // 0x28cb58: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28CB54u, 0x28CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB5Cu;
label_28cb5c:
    // 0x28cb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cb60:
    // 0x28cb60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28cb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cb68: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x28CB68u;
    ctx->pc = 0x28CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB68u;
    // 0x28cb6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x28CB70u;
label_28cb70:
    // 0x28cb70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28cb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cb74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cb78: 0x3e00008  jr          $ra
    ctx->pc = 0x28CB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB78u;
        // 0x28cb7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CB80u;
}
