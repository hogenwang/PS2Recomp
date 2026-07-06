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

// Function: sub_002A8E38
// Address: 0x2a8e38 - 0x2a8e70
void sub_002A8E38_0x2a8e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8E38_0x2a8e38");
#endif

    switch (ctx->pc) {
        case 0x2a8e60u: goto label_2a8e60;
        default: break;
    }

    ctx->pc = 0x2a8e38u;

    // 0x2a8e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8e3c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2a8e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8e44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a8e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e48: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2a8e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e4c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a8e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a8e50: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2a8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a8e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e58: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x2A8E58u;
    SET_GPR_U32(ctx, 31, 0x2A8E60u);
    ctx->pc = 0x2A8E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8E58u;
    // 0x2a8e5c: 0x240a0012  addiu       $t2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x2A8E58u, 0x2A8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E60u;
label_2a8e60:
    // 0x2a8e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8e64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a8e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a8e68: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E68u;
        // 0x2a8e6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8E70u;
}
