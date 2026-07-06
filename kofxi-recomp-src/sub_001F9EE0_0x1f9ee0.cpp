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

// Function: sub_001F9EE0
// Address: 0x1f9ee0 - 0x1f9f48
void sub_001F9EE0_0x1f9ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9EE0_0x1f9ee0");
#endif

    switch (ctx->pc) {
        case 0x1f9f20u: goto label_1f9f20;
        case 0x1f9f2cu: goto label_1f9f2c;
        default: break;
    }

    ctx->pc = 0x1f9ee0u;

    // 0x1f9ee0: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x1f9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f9ee4: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1f9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f9ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9eec: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1f9eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1f9ef0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f9ef4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f9ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EF8u;
        // 0x1f9efc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9F00u;
    // 0x1f9f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9f08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9f0c: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9F0Cu;
    {
        const bool branch_taken_0x1f9f0c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1F9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F0Cu;
        // 0x1f9f10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f0c) {
            ctx->pc = 0x1F9F34u;
            goto label_1f9f34;
        }
    }
    ctx->pc = 0x1F9F14u;
    // 0x1f9f14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f9f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f20:
    // 0x1f9f20: 0x26310dd8  addiu       $s1, $s1, 0xDD8
    ctx->pc = 0x1f9f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3544));
    // 0x1f9f24: 0xc07e7d2  jal         func_1F9F48
    ctx->pc = 0x1F9F24u;
    SET_GPR_U32(ctx, 31, 0x1F9F2Cu);
    ctx->pc = 0x1F9F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F24u;
    // 0x1f9f28: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9F48u, 0x1F9F24u, 0x1F9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F2Cu;
label_1f9f2c:
    // 0x1f9f2c: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1F9F2Cu;
    {
        const bool branch_taken_0x1f9f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F2Cu;
        // 0x1f9f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f2c) {
            ctx->pc = 0x1F9F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f9f20;
        }
    }
    ctx->pc = 0x1F9F34u;
label_1f9f34:
    // 0x1f9f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F40u;
        // 0x1f9f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9F48u;
}
