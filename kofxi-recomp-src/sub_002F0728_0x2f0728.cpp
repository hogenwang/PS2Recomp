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

// Function: sub_002F0728
// Address: 0x2f0728 - 0x2f0760
void sub_002F0728_0x2f0728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0728_0x2f0728");
#endif

    switch (ctx->pc) {
        case 0x2f0748u: goto label_2f0748;
        default: break;
    }

    ctx->pc = 0x2f0728u;

    // 0x2f0728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f072c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f072cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0730: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f0730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f0734: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f0734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0738: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f0738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f073c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2f073cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f0740: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2F0740u;
    SET_GPR_U32(ctx, 31, 0x2F0748u);
    ctx->pc = 0x2F0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0740u;
    // 0x2f0744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2F0740u, 0x2F0748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0748u;
label_2f0748:
    // 0x2f0748: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f0748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f074c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f074cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0754: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0754u;
        // 0x2f0758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F075Cu;
    // 0x2f075c: 0x0  nop
    ctx->pc = 0x2f075cu;
    // NOP
}
