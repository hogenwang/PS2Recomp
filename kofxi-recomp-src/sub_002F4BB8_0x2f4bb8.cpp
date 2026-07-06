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

// Function: sub_002F4BB8
// Address: 0x2f4bb8 - 0x2f4c60
void sub_002F4BB8_0x2f4bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4BB8_0x2f4bb8");
#endif

    switch (ctx->pc) {
        case 0x2f4c00u: goto label_2f4c00;
        default: break;
    }

    ctx->pc = 0x2f4bb8u;

    // 0x2f4bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BB8u;
        // 0x2f4bbc: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4BC0u;
    // 0x2f4bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f4bc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f4bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f4bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f4bcc: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x2f4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2f4bd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4BD0u;
    {
        const bool branch_taken_0x2f4bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4bd0) {
            ctx->pc = 0x2F4BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4BD0u;
            // 0x2f4bd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4BE8u;
            goto label_2f4be8;
        }
    }
    ctx->pc = 0x2F4BD8u;
    // 0x2f4bd8: 0x2402fc14  addiu       $v0, $zero, -0x3EC
    ctx->pc = 0x2f4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
    // 0x2f4bdc: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x2f4bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x2f4be0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4BE0u;
    {
        const bool branch_taken_0x2f4be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BE0u;
        // 0x2f4be4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4be0) {
            ctx->pc = 0x2F4C04u;
            goto label_2f4c04;
        }
    }
    ctx->pc = 0x2F4BE8u;
label_2f4be8:
    // 0x2f4be8: 0x8ca4005c  lw          $a0, 0x5C($a1)
    ctx->pc = 0x2f4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x2f4bec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f4becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4bf0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4BF0u;
    {
        const bool branch_taken_0x2f4bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BF0u;
        // 0x2f4bf4: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bf0) {
            ctx->pc = 0x2F4C00u;
            goto label_2f4c00;
        }
    }
    ctx->pc = 0x2F4BF8u;
    // 0x2f4bf8: 0xc0bdfc2  jal         func_2F7F08
    ctx->pc = 0x2F4BF8u;
    SET_GPR_U32(ctx, 31, 0x2F4C00u);
    ctx->pc = 0x2F4BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BF8u;
    // 0x2f4bfc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7F08u, 0x2F4BF8u, 0x2F4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C00u;
label_2f4c00:
    // 0x2f4c00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c04:
    // 0x2f4c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4c08: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C08u;
        // 0x2f4c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4C10u;
    // 0x2f4c10: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x2f4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x2f4c14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f4c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f4c18: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4C18u;
    {
        const bool branch_taken_0x2f4c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f4c18) {
            ctx->pc = 0x2F4C28u;
            goto label_2f4c28;
        }
    }
    ctx->pc = 0x2F4C20u;
    // 0x2f4c20: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C20u;
        // 0x2f4c24: 0x9c820088  lwu         $v0, 0x88($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4C28u;
label_2f4c28:
    // 0x2f4c28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C28u;
        // 0x2f4c2c: 0xdc820100  ld          $v0, 0x100($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4C30u;
    // 0x2f4c30: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x2f4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x2f4c34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f4c38: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4C38u;
    {
        const bool branch_taken_0x2f4c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f4c38) {
            ctx->pc = 0x2F4C48u;
            goto label_2f4c48;
        }
    }
    ctx->pc = 0x2F4C40u;
    // 0x2f4c40: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C40u;
        // 0x2f4c44: 0x9c820088  lwu         $v0, 0x88($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4C48u;
label_2f4c48:
    // 0x2f4c48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f4c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C4Cu;
        // 0x2f4c50: 0x2103e  dsrl32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4C54u;
    // 0x2f4c54: 0x0  nop
    ctx->pc = 0x2f4c54u;
    // NOP
    // 0x2f4c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C58u;
        // 0x2f4c5c: 0xdc820118  ld          $v0, 0x118($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4C60u;
}
