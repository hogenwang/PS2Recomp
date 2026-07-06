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

// Function: sub_00307610
// Address: 0x307610 - 0x307630
void sub_00307610_0x307610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307610_0x307610");
#endif

    ctx->pc = 0x307610u;

    // 0x307610: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x307610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x307614: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x307614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x307618: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x307618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x30761c: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x30761cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x307620: 0xac851dc0  sw          $a1, 0x1DC0($a0)
    ctx->pc = 0x307620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7616), GPR_U32(ctx, 5));
    // 0x307624: 0x3e00008  jr          $ra
    ctx->pc = 0x307624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307624u;
        // 0x307628: 0xa4601db0  sh          $zero, 0x1DB0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 7600), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30762Cu;
    // 0x30762c: 0x0  nop
    ctx->pc = 0x30762cu;
    // NOP
}
