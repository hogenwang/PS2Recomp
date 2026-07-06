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

// Function: sub_001F0D58
// Address: 0x1f0d58 - 0x1f0dc0
void sub_001F0D58_0x1f0d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0D58_0x1f0d58");
#endif

    ctx->pc = 0x1f0d58u;

    // 0x1f0d58: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f0d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0d5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f0d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0d60: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1f0d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f0d64: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1f0d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f0d68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0D68u;
    {
        const bool branch_taken_0x1f0d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D68u;
        // 0x1f0d6c: 0xc32023  subu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d68) {
            ctx->pc = 0x1F0D84u;
            goto label_1f0d84;
        }
    }
    ctx->pc = 0x1F0D70u;
    // 0x1f0d70: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1f0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f0d74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0d78: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1f0d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f0d7c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0D7Cu;
    {
        const bool branch_taken_0x1f0d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d7c) {
            ctx->pc = 0x1F0DB4u;
            goto label_1f0db4;
        }
    }
    ctx->pc = 0x1F0D84u;
label_1f0d84:
    // 0x1f0d84: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1f0d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f0d88: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x1f0d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f0d8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0D8Cu;
    {
        const bool branch_taken_0x1f0d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D8Cu;
        // 0x1f0d90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d8c) {
            ctx->pc = 0x1F0DB4u;
            goto label_1f0db4;
        }
    }
    ctx->pc = 0x1F0D94u;
    // 0x1f0d94: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1f0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1f0d98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f0d9c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1f0d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f0da0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0DA0u;
    {
        const bool branch_taken_0x1f0da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0da0) {
            ctx->pc = 0x1F0DB4u;
            goto label_1f0db4;
        }
    }
    ctx->pc = 0x1F0DA8u;
    // 0x1f0da8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1f0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f0dac: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x1f0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f0db0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1f0db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f0db4:
    // 0x1f0db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DB4u;
        // 0x1f0db8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0DBCu;
    // 0x1f0dbc: 0x0  nop
    ctx->pc = 0x1f0dbcu;
    // NOP
}
