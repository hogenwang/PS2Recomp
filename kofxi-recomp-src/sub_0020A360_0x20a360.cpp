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

// Function: sub_0020A360
// Address: 0x20a360 - 0x20a3a0
void sub_0020A360_0x20a360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A360_0x20a360");
#endif

    switch (ctx->pc) {
        case 0x20a370u: goto label_20a370;
        default: break;
    }

    ctx->pc = 0x20a360u;

    // 0x20a360: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x20a360u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a364: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x20a364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20a368: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A368u;
    {
        const bool branch_taken_0x20a368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x20A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A368u;
        // 0x20a36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a368) {
            ctx->pc = 0x20A390u;
            goto label_20a390;
        }
    }
    ctx->pc = 0x20A370u;
label_20a370:
    // 0x20a370: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x20a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x20a374: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a378: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x20a378u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a37c: 0x0  nop
    ctx->pc = 0x20a37cu;
    // NOP
    // 0x20a380: 0x0  nop
    ctx->pc = 0x20a380u;
    // NOP
    // 0x20a384: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20A384u;
    {
        const bool branch_taken_0x20a384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x20a384) {
            ctx->pc = 0x20A370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20a370;
        }
    }
    ctx->pc = 0x20A38Cu;
    // 0x20a38c: 0x0  nop
    ctx->pc = 0x20a38cu;
    // NOP
label_20a390:
    // 0x20a390: 0x3e00008  jr          $ra
    ctx->pc = 0x20A390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A398u;
    // 0x20a398: 0x0  nop
    ctx->pc = 0x20a398u;
    // NOP
    // 0x20a39c: 0x0  nop
    ctx->pc = 0x20a39cu;
    // NOP
    if (ctx->pc == 0x20a39cu) { ctx->pc = 0x20a3a0u; }
}
