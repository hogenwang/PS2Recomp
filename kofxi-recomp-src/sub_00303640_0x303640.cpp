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

// Function: sub_00303640
// Address: 0x303640 - 0x303670
void sub_00303640_0x303640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303640_0x303640");
#endif

    ctx->pc = 0x303640u;

    // 0x303640: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x303640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x303644: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x303644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x303648: 0x94661528  lhu         $a2, 0x1528($v1)
    ctx->pc = 0x303648u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 5416)));
    // 0x30364c: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x30364cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x303650: 0x94841520  lhu         $a0, 0x1520($a0)
    ctx->pc = 0x303650u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 5408)));
    // 0x303654: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x303654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x303658: 0xa4a61518  sh          $a2, 0x1518($a1)
    ctx->pc = 0x303658u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5400), (uint16_t)GPR_U32(ctx, 6));
    // 0x30365c: 0x3e00008  jr          $ra
    ctx->pc = 0x30365Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30365Cu;
        // 0x303660: 0xa4641510  sh          $a0, 0x1510($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 5392), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30365Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303664u;
    // 0x303664: 0x0  nop
    ctx->pc = 0x303664u;
    // NOP
    // 0x303668: 0x0  nop
    ctx->pc = 0x303668u;
    // NOP
    // 0x30366c: 0x0  nop
    ctx->pc = 0x30366cu;
    // NOP
    if (ctx->pc == 0x30366cu) { ctx->pc = 0x303670u; }
}
