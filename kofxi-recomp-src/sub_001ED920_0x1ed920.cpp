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

// Function: sub_001ED920
// Address: 0x1ed920 - 0x1ed948
void sub_001ED920_0x1ed920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED920_0x1ed920");
#endif

    ctx->pc = 0x1ed920u;

    // 0x1ed920: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED920u;
    {
        const bool branch_taken_0x1ed920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED920u;
        // 0x1ed924: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed920) {
            ctx->pc = 0x1ED93Cu;
            goto label_1ed93c;
        }
    }
    ctx->pc = 0x1ED928u;
    // 0x1ed928: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1ed928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1ed92c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED92Cu;
    {
        const bool branch_taken_0x1ed92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED92Cu;
        // 0x1ed930: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed92c) {
            ctx->pc = 0x1ED93Cu;
            goto label_1ed93c;
        }
    }
    ctx->pc = 0x1ED934u;
    // 0x1ed934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed938: 0xac641538  sw          $a0, 0x1538($v1)
    ctx->pc = 0x1ed938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5432), GPR_U32(ctx, 4));
label_1ed93c:
    // 0x1ed93c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED944u;
    // 0x1ed944: 0x0  nop
    ctx->pc = 0x1ed944u;
    // NOP
}
