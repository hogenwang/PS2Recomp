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

// Function: sub_001DCE98
// Address: 0x1dce98 - 0x1dced8
void sub_001DCE98_0x1dce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCE98_0x1dce98");
#endif

    ctx->pc = 0x1dce98u;

    // 0x1dce98: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1dce98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dce9c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DCE9Cu;
    {
        const bool branch_taken_0x1dce9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE9Cu;
        // 0x1dcea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce9c) {
            ctx->pc = 0x1DCED0u;
            goto label_1dced0;
        }
    }
    ctx->pc = 0x1DCEA4u;
    // 0x1dcea4: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1dcea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1dcea8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DCEA8u;
    {
        const bool branch_taken_0x1dcea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcea8) {
            ctx->pc = 0x1DCED0u;
            goto label_1dced0;
        }
    }
    ctx->pc = 0x1DCEB0u;
    // 0x1dceb0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1dceb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1dceb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dceb8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCEB8u;
    {
        const bool branch_taken_0x1dceb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dceb8) {
            ctx->pc = 0x1DCED0u;
            goto label_1dced0;
        }
    }
    ctx->pc = 0x1DCEC0u;
    // 0x1dcec0: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1dcec0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1dcec4: 0x24420047  addiu       $v0, $v0, 0x47
    ctx->pc = 0x1dcec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 71));
    // 0x1dcec8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dcec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dcecc: 0x2c440002  sltiu       $a0, $v0, 0x2
    ctx->pc = 0x1dceccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1dced0:
    // 0x1dced0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCED0u;
        // 0x1dced4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCED8u;
}
