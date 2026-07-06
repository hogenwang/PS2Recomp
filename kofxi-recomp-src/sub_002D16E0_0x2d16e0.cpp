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

// Function: sub_002D16E0
// Address: 0x2d16e0 - 0x2d1720
void sub_002D16E0_0x2d16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D16E0_0x2d16e0");
#endif

    ctx->pc = 0x2d16e0u;

    // 0x2d16e0: 0x288303fc  slti        $v1, $a0, 0x3FC
    ctx->pc = 0x2d16e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1020) ? 1 : 0);
    // 0x2d16e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2d16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d16e8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D16E8u;
    {
        const bool branch_taken_0x2d16e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16E8u;
        // 0x2d16ec: 0x2885017e  slti        $a1, $a0, 0x17E (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)382) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16e8) {
            ctx->pc = 0x2D1714u;
            goto label_2d1714;
        }
    }
    ctx->pc = 0x2D16F0u;
    // 0x2d16f0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D16F0u;
    {
        const bool branch_taken_0x2d16f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16F0u;
        // 0x2d16f4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16f0) {
            ctx->pc = 0x2D1714u;
            goto label_2d1714;
        }
    }
    ctx->pc = 0x2D16F8u;
    // 0x2d16f8: 0x28830050  slti        $v1, $a0, 0x50
    ctx->pc = 0x2d16f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2d16fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D16FCu;
    {
        const bool branch_taken_0x2d16fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16FCu;
        // 0x2d1700: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16fc) {
            ctx->pc = 0x2D1714u;
            goto label_2d1714;
        }
    }
    ctx->pc = 0x2D1704u;
    // 0x2d1704: 0x28840013  slti        $a0, $a0, 0x13
    ctx->pc = 0x2d1704u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2d1708: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d1708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d170c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1710: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2d1710u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_2d1714:
    // 0x2d1714: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D171Cu;
    // 0x2d171c: 0x0  nop
    ctx->pc = 0x2d171cu;
    // NOP
    if (ctx->pc == 0x2d171cu) { ctx->pc = 0x2d1720u; }
}
