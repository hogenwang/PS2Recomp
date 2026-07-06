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

// Function: sub_001C1424
// Address: 0x1c1424 - 0x1c1450
void sub_001C1424_0x1c1424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1424_0x1c1424");
#endif

    ctx->pc = 0x1c1424u;

    // 0x1c1424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1428: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1428u;
    {
        const bool branch_taken_0x1c1428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1428u;
        // 0x1c142c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1428) {
            ctx->pc = 0x1C1440u;
            goto label_1c1440;
        }
    }
    ctx->pc = 0x1C1430u;
    // 0x1c1430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1434: 0x80736ea  j           func_1CDBA8
    ctx->pc = 0x1C1434u;
    ctx->pc = 0x1C1438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1434u;
    // 0x1c1438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDBA8u;
    sub_001CDBA8_0x1cdba8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C143Cu;
    // 0x1c143c: 0x0  nop
    ctx->pc = 0x1c143cu;
    // NOP
label_1c1440:
    // 0x1c1440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1444: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1444u;
        // 0x1c1448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C144Cu;
    // 0x1c144c: 0x0  nop
    ctx->pc = 0x1c144cu;
    // NOP
    if (ctx->pc == 0x1c144cu) { ctx->pc = 0x1c1450u; }
}
