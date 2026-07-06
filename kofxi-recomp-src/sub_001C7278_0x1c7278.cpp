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

// Function: sub_001C7278
// Address: 0x1c7278 - 0x1c72f0
void sub_001C7278_0x1c7278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7278_0x1c7278");
#endif

    switch (ctx->pc) {
        case 0x1c72a0u: goto label_1c72a0;
        case 0x1c72b4u: goto label_1c72b4;
        default: break;
    }

    ctx->pc = 0x1c7278u;

label_1c7278:
    // 0x1c7278: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7280u;
    // 0x1c7280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7284: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c7284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c7288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c728c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7290: 0x24503948  addiu       $s0, $v0, 0x3948
    ctx->pc = 0x1c7290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14664));
    // 0x1c7294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7298: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x1c7298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c729c: 0x0  nop
    ctx->pc = 0x1c729cu;
    // NOP
label_1c72a0:
    // 0x1c72a0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c72a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c72a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C72A4u;
    {
        const bool branch_taken_0x1c72a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c72a4) {
            ctx->pc = 0x1C72A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C72A4u;
            // 0x1c72a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C72B8u;
            goto label_1c72b8;
        }
    }
    ctx->pc = 0x1C72ACu;
    // 0x1c72ac: 0xc071c9e  jal         func_1C7278
    ctx->pc = 0x1C72ACu;
    SET_GPR_U32(ctx, 31, 0x1C72B4u);
    ctx->pc = 0x1C72B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72ACu;
    // 0x1c72b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7278u;
    goto label_1c7278;
    ctx->pc = 0x1C72B4u;
label_1c72b4:
    // 0x1c72b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c72b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c72b8:
    // 0x1c72b8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C72B8u;
    {
        const bool branch_taken_0x1c72b8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72B8u;
        // 0x1c72bc: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72b8) {
            ctx->pc = 0x1C72A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c72a0;
        }
    }
    ctx->pc = 0x1C72C0u;
    // 0x1c72c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c72c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c72c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c72c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c72c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c72c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c72cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C72CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72CCu;
        // 0x1c72d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C72CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C72D4u;
    // 0x1c72d4: 0x0  nop
    ctx->pc = 0x1c72d4u;
    // NOP
    // 0x1c72d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c72dc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c72e0: 0xac4438d4  sw          $a0, 0x38D4($v0)
    ctx->pc = 0x1c72e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14548), GPR_U32(ctx, 4));
    // 0x1c72e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C72E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72E4u;
        // 0x1c72e8: 0xac6538d8  sw          $a1, 0x38D8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 14552), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C72E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C72ECu;
    // 0x1c72ec: 0x0  nop
    ctx->pc = 0x1c72ecu;
    // NOP
}
