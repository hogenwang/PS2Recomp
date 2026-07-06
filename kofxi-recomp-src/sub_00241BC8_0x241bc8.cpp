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

// Function: sub_00241BC8
// Address: 0x241bc8 - 0x241c38
void sub_00241BC8_0x241bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241BC8_0x241bc8");
#endif

    switch (ctx->pc) {
        case 0x241be4u: goto label_241be4;
        case 0x241c10u: goto label_241c10;
        default: break;
    }

    ctx->pc = 0x241bc8u;

    // 0x241bc8: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x241bc8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x241bcc: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x241bccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x241bd0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x241bd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x241bd4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x241bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x241bd8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x241bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x241bdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241BDCu;
    {
        const bool branch_taken_0x241bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241bdc) {
            ctx->pc = 0x241BECu;
            goto label_241bec;
        }
    }
    ctx->pc = 0x241BE4u;
label_241be4:
    // 0x241be4: 0x3e00008  jr          $ra
    ctx->pc = 0x241BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BE4u;
        // 0x241be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241BECu;
label_241bec:
    // 0x241bec: 0x15030010  bne         $t0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x241BECu;
    {
        const bool branch_taken_0x241bec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x241bec) {
            ctx->pc = 0x241C30u;
            goto label_241c30;
        }
    }
    ctx->pc = 0x241BF4u;
    // 0x241bf4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x241bf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x241bf8: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x241bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x241bfc: 0x88182b  sltu        $v1, $a0, $t0
    ctx->pc = 0x241bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x241c00: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x241C00u;
    {
        const bool branch_taken_0x241c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C00u;
        // 0x241c04: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c00) {
            ctx->pc = 0x241C30u;
            goto label_241c30;
        }
    }
    ctx->pc = 0x241C08u;
    // 0x241c08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x241C08u;
    {
        const bool branch_taken_0x241c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C08u;
        // 0x241c0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c08) {
            ctx->pc = 0x241C1Cu;
            goto label_241c1c;
        }
    }
    ctx->pc = 0x241C10u;
label_241c10:
    // 0x241c10: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x241c10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x241c14: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x241c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x241c18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x241c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_241c1c:
    // 0x241c1c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x241C1Cu;
    {
        const bool branch_taken_0x241c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C1Cu;
        // 0x241c20: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c1c) {
            ctx->pc = 0x241BE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241be4;
        }
    }
    ctx->pc = 0x241C24u;
    // 0x241c24: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x241c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x241c28: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x241C28u;
    {
        const bool branch_taken_0x241c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241c28) {
            ctx->pc = 0x241C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241C28u;
            // 0x241c2c: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241c10;
        }
    }
    ctx->pc = 0x241C30u;
label_241c30:
    // 0x241c30: 0x3e00008  jr          $ra
    ctx->pc = 0x241C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C30u;
        // 0x241c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241C38u;
}
