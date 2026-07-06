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

// Function: sub_00163CE0
// Address: 0x163ce0 - 0x163d40
void sub_00163CE0_0x163ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163CE0_0x163ce0");
#endif

    switch (ctx->pc) {
        case 0x163cecu: goto label_163cec;
        default: break;
    }

    ctx->pc = 0x163ce0u;

    // 0x163ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ce4: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x163ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x163ce8: 0x24a54540  addiu       $a1, $a1, 0x4540
    ctx->pc = 0x163ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17728));
label_163cec:
    // 0x163cec: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x163cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x163cf0: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x163cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x163cf4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x163cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x163cf8: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x163cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x163cfc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x163cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x163d00: 0x28c300ba  slti        $v1, $a2, 0xBA
    ctx->pc = 0x163d00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)186) ? 1 : 0);
    // 0x163d04: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x163d04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x163d08: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x163d08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x163d0c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x163d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x163d10: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x163d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x163d14: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x163d14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x163d18: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x163d18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x163d1c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x163D1Cu;
    {
        const bool branch_taken_0x163d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D1Cu;
        // 0x163d20: 0xa0800007  sb          $zero, 0x7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d1c) {
            ctx->pc = 0x163CECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_163cec;
        }
    }
    ctx->pc = 0x163D24u;
    // 0x163d24: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x163d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163d28: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x163d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x163d2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x163d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x163d30: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x163d30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x163d34: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x163d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x163d38: 0x3e00008  jr          $ra
    ctx->pc = 0x163D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D38u;
        // 0x163d3c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163D40u;
}
