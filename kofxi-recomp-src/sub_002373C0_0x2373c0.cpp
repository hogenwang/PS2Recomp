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

// Function: sub_002373C0
// Address: 0x2373c0 - 0x237400
void sub_002373C0_0x2373c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002373C0_0x2373c0");
#endif

    switch (ctx->pc) {
        case 0x2373d8u: goto label_2373d8;
        default: break;
    }

    ctx->pc = 0x2373c0u;

    // 0x2373c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2373c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2373c4: 0x63027  nor         $a2, $zero, $a2
    ctx->pc = 0x2373c4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x2373c8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2373C8u;
    {
        const bool branch_taken_0x2373c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373C8u;
        // 0x2373cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373c8) {
            ctx->pc = 0x2373F4u;
            goto label_2373f4;
        }
    }
    ctx->pc = 0x2373D0u;
    // 0x2373d0: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2373d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2373d4: 0x0  nop
    ctx->pc = 0x2373d4u;
    // NOP
label_2373d8:
    // 0x2373d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2373d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2373dc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2373dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2373e0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2373e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2373e4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2373e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2373e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2373e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2373ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2373ECu;
    {
        const bool branch_taken_0x2373ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2373ec) {
            ctx->pc = 0x2373D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2373d8;
        }
    }
    ctx->pc = 0x2373F4u;
label_2373f4:
    // 0x2373f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2373F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2373F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373F4u;
        // 0x2373f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2373F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2373FCu;
    // 0x2373fc: 0x0  nop
    ctx->pc = 0x2373fcu;
    // NOP
    if (ctx->pc == 0x2373fcu) { ctx->pc = 0x237400u; }
}
