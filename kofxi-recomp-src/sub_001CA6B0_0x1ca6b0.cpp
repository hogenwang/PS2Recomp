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

// Function: sub_001CA6B0
// Address: 0x1ca6b0 - 0x1ca6f0
void sub_001CA6B0_0x1ca6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA6B0_0x1ca6b0");
#endif

    ctx->pc = 0x1ca6b0u;

    // 0x1ca6b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ca6b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca6b8: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
    // 0x1ca6bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ca6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6c0: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA6C0u;
    {
        const bool branch_taken_0x1ca6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6C0u;
        // 0x1ca6c4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6c0) {
            ctx->pc = 0x1CA6D8u;
            goto label_1ca6d8;
        }
    }
    ctx->pc = 0x1CA6C8u;
    // 0x1ca6c8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1ca6cc: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
    // 0x1ca6d0: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA6D0u;
    {
        const bool branch_taken_0x1ca6d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6D0u;
        // 0x1ca6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6d0) {
            ctx->pc = 0x1CA6E4u;
            goto label_1ca6e4;
        }
    }
    ctx->pc = 0x1CA6D8u;
label_1ca6d8:
    // 0x1ca6d8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1ca6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1ca6dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ca6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca6e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ca6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ca6e4:
    // 0x1ca6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA6ECu;
    // 0x1ca6ec: 0x0  nop
    ctx->pc = 0x1ca6ecu;
    // NOP
    if (ctx->pc == 0x1ca6ecu) { ctx->pc = 0x1ca6f0u; }
}
