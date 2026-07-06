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

// Function: sub_0020D5C0
// Address: 0x20d5c0 - 0x20d600
void sub_0020D5C0_0x20d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D5C0_0x20d5c0");
#endif

    switch (ctx->pc) {
        case 0x20d5d0u: goto label_20d5d0;
        default: break;
    }

    ctx->pc = 0x20d5c0u;

    // 0x20d5c0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x20d5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x20d5c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x20d5c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x20d5c8: 0x24a5a390  addiu       $a1, $a1, -0x5C70
    ctx->pc = 0x20d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943632));
    // 0x20d5cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20d5ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d5d0:
    // 0x20d5d0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20d5d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d5d4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D5D4u;
    {
        const bool branch_taken_0x20d5d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20d5d4) {
            ctx->pc = 0x20D5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D5D4u;
            // 0x20d5d8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D5E4u;
            goto label_20d5e4;
        }
    }
    ctx->pc = 0x20D5DCu;
    // 0x20d5dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20D5DCu;
    {
        const bool branch_taken_0x20d5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d5dc) {
            ctx->pc = 0x20D5F8u;
            goto label_20d5f8;
        }
    }
    ctx->pc = 0x20D5E4u;
label_20d5e4:
    // 0x20d5e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20d5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d5e8: 0x2843011c  slti        $v1, $v0, 0x11C
    ctx->pc = 0x20d5e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)284) ? 1 : 0);
    // 0x20d5ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20D5ECu;
    {
        const bool branch_taken_0x20d5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5ECu;
        // 0x20d5f0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5ec) {
            ctx->pc = 0x20D5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d5d0;
        }
    }
    ctx->pc = 0x20D5F4u;
    // 0x20d5f4: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x20d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_20d5f8:
    // 0x20d5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x20D5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D600u;
}
