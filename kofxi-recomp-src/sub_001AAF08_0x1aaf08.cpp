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

// Function: sub_001AAF08
// Address: 0x1aaf08 - 0x1aaf28
void sub_001AAF08_0x1aaf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAF08_0x1aaf08");
#endif

    ctx->pc = 0x1aaf08u;

    // 0x1aaf08: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aaf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aaf0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aaf0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf10: 0x2484e684  addiu       $a0, $a0, -0x197C
    ctx->pc = 0x1aaf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960772));
    // 0x1aaf14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1aaf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aaf18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aaf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1aaf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF1Cu;
        // 0x1aaf20: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAF24u;
    // 0x1aaf24: 0x0  nop
    ctx->pc = 0x1aaf24u;
    // NOP
    if (ctx->pc == 0x1aaf24u) { ctx->pc = 0x1aaf28u; }
}
