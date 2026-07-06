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

// Function: sub_002B1538
// Address: 0x2b1538 - 0x2b1588
void sub_002B1538_0x2b1538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1538_0x2b1538");
#endif

    ctx->pc = 0x2b1538u;

    // 0x2b1538: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2b1538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b153c: 0x24020301  addiu       $v0, $zero, 0x301
    ctx->pc = 0x2b153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x2b1540: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1540u;
    {
        const bool branch_taken_0x2b1540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1540) {
            ctx->pc = 0x2B1544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1540u;
            // 0x2b1544: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1554u;
            goto label_2b1554;
        }
    }
    ctx->pc = 0x2B1548u;
    // 0x2b1548: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b1548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b154c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B154Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B154Cu;
        // 0x2b1550: 0x2442d400  addiu       $v0, $v0, -0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B154Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1554u;
label_2b1554:
    // 0x2b1554: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1554u;
    {
        const bool branch_taken_0x2b1554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1554) {
            ctx->pc = 0x2B1558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1554u;
            // 0x2b1558: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1568u;
            goto label_2b1568;
        }
    }
    ctx->pc = 0x2B155Cu;
    // 0x2b155c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b1560: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1560u;
        // 0x2b1564: 0x2442d408  addiu       $v0, $v0, -0x2BF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1568u;
label_2b1568:
    // 0x2b1568: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1568u;
    {
        const bool branch_taken_0x2b1568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1568) {
            ctx->pc = 0x2B156Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1568u;
            // 0x2b156c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B157Cu;
            goto label_2b157c;
        }
    }
    ctx->pc = 0x2B1570u;
    // 0x2b1570: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b1570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b1574: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1574u;
        // 0x2b1578: 0x2442d410  addiu       $v0, $v0, -0x2BF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B157Cu;
label_2b157c:
    // 0x2b157c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B157Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B157Cu;
        // 0x2b1580: 0x2442d418  addiu       $v0, $v0, -0x2BE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B157Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1584u;
    // 0x2b1584: 0x0  nop
    ctx->pc = 0x2b1584u;
    // NOP
}
