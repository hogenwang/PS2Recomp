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

// Function: sub_002081D0
// Address: 0x2081d0 - 0x208220
void sub_002081D0_0x2081d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002081D0_0x2081d0");
#endif

    ctx->pc = 0x2081d0u;

    // 0x2081d0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2081d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2081d4: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2081d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2081d8: 0x8c679bf8  lw          $a3, -0x6408($v1)
    ctx->pc = 0x2081d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2081dc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2081dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2081e0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2081e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2081e4: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x2081e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x2081e8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2081e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2081ec: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x2081ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x2081f0: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2081f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x2081f4: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x2081f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x2081f8: 0xa08604f7  sb          $a2, 0x4F7($a0)
    ctx->pc = 0x2081f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1271), (uint8_t)GPR_U32(ctx, 6));
    // 0x2081fc: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x2081fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208200: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x208200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x208204: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x208204u;
    {
        const bool branch_taken_0x208204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208204) {
            ctx->pc = 0x208214u;
            goto label_208214;
        }
    }
    ctx->pc = 0x20820Cu;
    // 0x20820c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208210: 0xa08304f1  sb          $v1, 0x4F1($a0)
    ctx->pc = 0x208210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1265), (uint8_t)GPR_U32(ctx, 3));
label_208214:
    // 0x208214: 0x3e00008  jr          $ra
    ctx->pc = 0x208214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20821Cu;
    // 0x20821c: 0x0  nop
    ctx->pc = 0x20821cu;
    // NOP
    if (ctx->pc == 0x20821cu) { ctx->pc = 0x208220u; }
}
