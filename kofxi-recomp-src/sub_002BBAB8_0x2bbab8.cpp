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

// Function: sub_002BBAB8
// Address: 0x2bbab8 - 0x2bbb30
void sub_002BBAB8_0x2bbab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBAB8_0x2bbab8");
#endif

    ctx->pc = 0x2bbab8u;

    // 0x2bbab8: 0x8ca600c8  lw          $a2, 0xC8($a1)
    ctx->pc = 0x2bbab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x2bbabc: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BBABCu;
    {
        const bool branch_taken_0x2bbabc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbabc) {
            ctx->pc = 0x2BBB24u;
            goto label_2bbb24;
        }
    }
    ctx->pc = 0x2BBAC4u;
    // 0x2bbac4: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x2bbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2bbac8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BBAC8u;
    {
        const bool branch_taken_0x2bbac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAC8u;
        // 0x2bbacc: 0x2482002c  addiu       $v0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbac8) {
            ctx->pc = 0x2BBB24u;
            goto label_2bbb24;
        }
    }
    ctx->pc = 0x2BBAD0u;
    // 0x2bbad0: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BBAD0u;
    {
        const bool branch_taken_0x2bbad0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAD0u;
        // 0x2bbad4: 0x24820028  addiu       $v0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbad0) {
            ctx->pc = 0x2BBAF8u;
            goto label_2bbaf8;
        }
    }
    ctx->pc = 0x2BBAD8u;
    // 0x2bbad8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBAD8u;
    {
        const bool branch_taken_0x2bbad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbad8) {
            ctx->pc = 0x2BBADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBAD8u;
            // 0x2bbadc: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBAECu;
            goto label_2bbaec;
        }
    }
    ctx->pc = 0x2BBAE0u;
    // 0x2bbae0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2bbae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2bbae4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BBAE4u;
    {
        const bool branch_taken_0x2bbae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAE4u;
        // 0x2bbae8: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbae4) {
            ctx->pc = 0x2BBB1Cu;
            goto label_2bbb1c;
        }
    }
    ctx->pc = 0x2BBAECu;
label_2bbaec:
    // 0x2bbaec: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x2bbaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2bbaf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BBAF0u;
    {
        const bool branch_taken_0x2bbaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAF0u;
        // 0x2bbaf4: 0xac4600c8  sw          $a2, 0xC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbaf0) {
            ctx->pc = 0x2BBB1Cu;
            goto label_2bbb1c;
        }
    }
    ctx->pc = 0x2BBAF8u;
label_2bbaf8:
    // 0x2bbaf8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBAF8u;
    {
        const bool branch_taken_0x2bbaf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbaf8) {
            ctx->pc = 0x2BBAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBAF8u;
            // 0x2bbafc: 0xacc300c4  sw          $v1, 0xC4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 196), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBB10u;
            goto label_2bbb10;
        }
    }
    ctx->pc = 0x2BBB00u;
    // 0x2bbb00: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x2bbb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x2bbb04: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x2bbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x2bbb08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBB08u;
    {
        const bool branch_taken_0x2bbb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB08u;
        // 0x2bbb0c: 0xac4300c4  sw          $v1, 0xC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb08) {
            ctx->pc = 0x2BBB1Cu;
            goto label_2bbb1c;
        }
    }
    ctx->pc = 0x2BBB10u;
label_2bbb10:
    // 0x2bbb10: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x2bbb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2bbb14: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x2bbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x2bbb18: 0xac6200c8  sw          $v0, 0xC8($v1)
    ctx->pc = 0x2bbb18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 2));
label_2bbb1c:
    // 0x2bbb1c: 0xaca000c4  sw          $zero, 0xC4($a1)
    ctx->pc = 0x2bbb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 0));
    // 0x2bbb20: 0xaca000c8  sw          $zero, 0xC8($a1)
    ctx->pc = 0x2bbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 200), GPR_U32(ctx, 0));
label_2bbb24:
    // 0x2bbb24: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBB2Cu;
    // 0x2bbb2c: 0x0  nop
    ctx->pc = 0x2bbb2cu;
    // NOP
}
