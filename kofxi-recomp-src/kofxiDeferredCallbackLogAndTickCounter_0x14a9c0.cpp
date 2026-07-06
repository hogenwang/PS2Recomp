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

// Function: kofxiDeferredCallbackLogAndTickCounter
// Address: 0x14a9c0 - 0x14aa00
void kofxiDeferredCallbackLogAndTickCounter_0x14a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiDeferredCallbackLogAndTickCounter_0x14a9c0");
#endif

    switch (ctx->pc) {
        case 0x14a9d4u: goto label_14a9d4;
        default: break;
    }

    ctx->pc = 0x14a9c0u;

    // 0x14a9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a9c4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14a9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a9cc: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14A9CCu;
    SET_GPR_U32(ctx, 31, 0x14A9D4u);
    ctx->pc = 0x14A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9CCu;
    // 0x14a9d0: 0x2484cdb8  addiu       $a0, $a0, -0x3248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14A9CCu, 0x14A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9D4u;
label_14a9d4:
    // 0x14a9d4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14a9d8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14a9dc: 0x94845cf8  lhu         $a0, 0x5CF8($a0)
    ctx->pc = 0x14a9dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 23800)));
    // 0x14a9e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a9e4: 0xa4645cf8  sh          $a0, 0x5CF8($v1)
    ctx->pc = 0x14a9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23800), (uint16_t)GPR_U32(ctx, 4));
    // 0x14a9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14A9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9ECu;
        // 0x14a9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A9F4u;
    // 0x14a9f4: 0x0  nop
    ctx->pc = 0x14a9f4u;
    // NOP
    // 0x14a9f8: 0x0  nop
    ctx->pc = 0x14a9f8u;
    // NOP
    // 0x14a9fc: 0x0  nop
    ctx->pc = 0x14a9fcu;
    // NOP
    if (ctx->pc == 0x14a9fcu) { ctx->pc = 0x14aa00u; }
}
