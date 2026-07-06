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

// Function: sub_001A0DC0
// Address: 0x1a0dc0 - 0x1a0e00
void sub_001A0DC0_0x1a0dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0DC0_0x1a0dc0");
#endif

    ctx->pc = 0x1a0dc0u;

    // 0x1a0dc0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1a0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a0dc4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a0dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0dc8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a0dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a0dcc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0dd0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a0dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a0dd4: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x1a0dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x1a0dd8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a0ddc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a0ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0de0: 0x9083002b  lbu         $v1, 0x2B($a0)
    ctx->pc = 0x1a0de0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
    // 0x1a0de4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a0de8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a0de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0dec: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x1a0decu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a0df0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a0df4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DF4u;
        // 0x1a0df8: 0xa483001c  sh          $v1, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0DFCu;
    // 0x1a0dfc: 0x0  nop
    ctx->pc = 0x1a0dfcu;
    // NOP
    if (ctx->pc == 0x1a0dfcu) { ctx->pc = 0x1a0e00u; }
}
