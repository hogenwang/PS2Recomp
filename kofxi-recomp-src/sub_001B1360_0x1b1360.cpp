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

// Function: sub_001B1360
// Address: 0x1b1360 - 0x1b1390
void sub_001B1360_0x1b1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1360_0x1b1360");
#endif

    switch (ctx->pc) {
        case 0x1b1378u: goto label_1b1378;
        default: break;
    }

    ctx->pc = 0x1b1360u;

    // 0x1b1360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1364: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1364u;
    {
        const bool branch_taken_0x1b1364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1364u;
        // 0x1b1368: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1364) {
            ctx->pc = 0x1B1380u;
            goto label_1b1380;
        }
    }
    ctx->pc = 0x1B136Cu;
    // 0x1b136c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b136cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b1370: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B1370u;
    SET_GPR_U32(ctx, 31, 0x1B1378u);
    ctx->pc = 0x1B1374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1370u;
    // 0x1b1374: 0x24847a68  addiu       $a0, $a0, 0x7A68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B1370u, 0x1B1378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1378u;
label_1b1378:
    // 0x1b1378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1378u;
    {
        const bool branch_taken_0x1b1378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1378u;
        // 0x1b137c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1378) {
            ctx->pc = 0x1B1384u;
            goto label_1b1384;
        }
    }
    ctx->pc = 0x1B1380u;
label_1b1380:
    // 0x1b1380: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1b1380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1b1384:
    // 0x1b1384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1388: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1388u;
        // 0x1b138c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1390u;
}
