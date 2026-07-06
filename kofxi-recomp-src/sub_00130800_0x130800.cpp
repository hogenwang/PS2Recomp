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

// Function: sub_00130800
// Address: 0x130800 - 0x130840
void sub_00130800_0x130800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130800_0x130800");
#endif

    ctx->pc = 0x130800u;

    // 0x130800: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x130800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x130804: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130808: 0xa465597a  sh          $a1, 0x597A($v1)
    ctx->pc = 0x130808u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22906), (uint16_t)GPR_U32(ctx, 5));
    // 0x13080c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x13080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x130810: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130814: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x130814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x130818: 0xa4645978  sh          $a0, 0x5978($v1)
    ctx->pc = 0x130818u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22904), (uint16_t)GPR_U32(ctx, 4));
    // 0x13081c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130820: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x130820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x130824: 0xa4655972  sh          $a1, 0x5972($v1)
    ctx->pc = 0x130824u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22898), (uint16_t)GPR_U32(ctx, 5));
    // 0x130828: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13082c: 0xa4645970  sh          $a0, 0x5970($v1)
    ctx->pc = 0x13082cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22896), (uint16_t)GPR_U32(ctx, 4));
    // 0x130830: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130834: 0x3e00008  jr          $ra
    ctx->pc = 0x130834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130834u;
        // 0x130838: 0xa4605960  sh          $zero, 0x5960($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 22880), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13083Cu;
    // 0x13083c: 0x0  nop
    ctx->pc = 0x13083cu;
    // NOP
}
