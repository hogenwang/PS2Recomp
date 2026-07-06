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

// Function: sub_001B3800
// Address: 0x1b3800 - 0x1b3850
void sub_001B3800_0x1b3800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3800_0x1b3800");
#endif

    ctx->pc = 0x1b3800u;

    // 0x1b3800: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b3800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b3804: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b3804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b3808: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1b3808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1b380c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b380cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b3810: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1b3810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1b3814: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b3814u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1b3818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b381c: 0x246330a8  addiu       $v1, $v1, 0x30A8
    ctx->pc = 0x1b381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12456));
    // 0x1b3820: 0x248430b8  addiu       $a0, $a0, 0x30B8
    ctx->pc = 0x1b3820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12472));
    // 0x1b3824: 0x24a530c8  addiu       $a1, $a1, 0x30C8
    ctx->pc = 0x1b3824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12488));
    // 0x1b3828: 0x24c630d8  addiu       $a2, $a2, 0x30D8
    ctx->pc = 0x1b3828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12504));
    // 0x1b382c: 0x24e730e8  addiu       $a3, $a3, 0x30E8
    ctx->pc = 0x1b382cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12520));
    // 0x1b3830: 0x250830f8  addiu       $t0, $t0, 0x30F8
    ctx->pc = 0x1b3830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12536));
    // 0x1b3834: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1b3834u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1b3838: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1b3838u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1b383c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1b383cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1b3840: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1b3840u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1b3844: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1b3844u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x1b3848: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3848u;
        // 0x1b384c: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3850u;
}
