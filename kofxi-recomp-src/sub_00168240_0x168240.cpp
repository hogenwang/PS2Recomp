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

// Function: sub_00168240
// Address: 0x168240 - 0x168280
void sub_00168240_0x168240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168240_0x168240");
#endif

    switch (ctx->pc) {
        case 0x168248u: goto label_168248;
        default: break;
    }

    ctx->pc = 0x168240u;

    // 0x168240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x168240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168244: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x168244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168248:
    // 0x168248: 0x94e603ba  lhu         $a2, 0x3BA($a3)
    ctx->pc = 0x168248u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 954)));
    // 0x16824c: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x16824cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x168250: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168250u;
    {
        const bool branch_taken_0x168250 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x168250) {
            ctx->pc = 0x168260u;
            goto label_168260;
        }
    }
    ctx->pc = 0x168258u;
    // 0x168258: 0xa4e503ba  sh          $a1, 0x3BA($a3)
    ctx->pc = 0x168258u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 954), (uint16_t)GPR_U32(ctx, 5));
    // 0x16825c: 0x0  nop
    ctx->pc = 0x16825cu;
    // NOP
label_168260:
    // 0x168260: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x168260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x168264: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x168264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x168268: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x168268u;
    {
        const bool branch_taken_0x168268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168268u;
        // 0x16826c: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168268) {
            ctx->pc = 0x168248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168248;
        }
    }
    ctx->pc = 0x168270u;
    // 0x168270: 0x3e00008  jr          $ra
    ctx->pc = 0x168270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168278u;
    // 0x168278: 0x0  nop
    ctx->pc = 0x168278u;
    // NOP
    // 0x16827c: 0x0  nop
    ctx->pc = 0x16827cu;
    // NOP
}
