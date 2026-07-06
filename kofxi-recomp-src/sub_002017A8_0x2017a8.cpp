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

// Function: sub_002017A8
// Address: 0x2017a8 - 0x2017f8
void sub_002017A8_0x2017a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002017A8_0x2017a8");
#endif

    switch (ctx->pc) {
        case 0x2017c8u: goto label_2017c8;
        default: break;
    }

    ctx->pc = 0x2017a8u;

    // 0x2017a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2017a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2017ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2017acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017b0: 0x244218f8  addiu       $v0, $v0, 0x18F8
    ctx->pc = 0x2017b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6392));
    // 0x2017b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2017b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2017b8: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2017B8u;
    {
        const bool branch_taken_0x2017b8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2017BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017B8u;
        // 0x2017bc: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2017b8) {
            ctx->pc = 0x2017ECu;
            goto label_2017ec;
        }
    }
    ctx->pc = 0x2017C0u;
    // 0x2017c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2017c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017c4: 0x0  nop
    ctx->pc = 0x2017c4u;
    // NOP
label_2017c8:
    // 0x2017c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2017c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2017cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2017ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2017D0u;
    {
        const bool branch_taken_0x2017d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2017D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017D0u;
        // 0x2017d4: 0x2484009c  addiu       $a0, $a0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2017d0) {
            ctx->pc = 0x2017F0u;
            goto label_2017f0;
        }
    }
    ctx->pc = 0x2017D8u;
    // 0x2017d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2017d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2017dc: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2017dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2017e0: 0x0  nop
    ctx->pc = 0x2017e0u;
    // NOP
    // 0x2017e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2017E4u;
    {
        const bool branch_taken_0x2017e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2017e4) {
            ctx->pc = 0x2017C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2017c8;
        }
    }
    ctx->pc = 0x2017ECu;
label_2017ec:
    // 0x2017ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2017ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2017f0:
    // 0x2017f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2017F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2017F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2017F8u;
}
