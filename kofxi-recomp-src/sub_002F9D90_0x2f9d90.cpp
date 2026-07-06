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

// Function: sub_002F9D90
// Address: 0x2f9d90 - 0x2f9dd0
void sub_002F9D90_0x2f9d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9D90_0x2f9d90");
#endif

    switch (ctx->pc) {
        case 0x2f9db4u: goto label_2f9db4;
        default: break;
    }

    ctx->pc = 0x2f9d90u;

    // 0x2f9d90: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f9d94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9d98: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2f9d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2f9d9c: 0x8c44065c  lw          $a0, 0x65C($v0)
    ctx->pc = 0x2f9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x2f9da0: 0x24639360  addiu       $v1, $v1, -0x6CA0
    ctx->pc = 0x2f9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939488));
    // 0x2f9da4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9DA4u;
    {
        const bool branch_taken_0x2f9da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DA4u;
        // 0x2f9da8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9da4) {
            ctx->pc = 0x2F9DBCu;
            goto label_2f9dbc;
        }
    }
    ctx->pc = 0x2F9DACu;
    // 0x2f9dac: 0xc0be4c6  jal         func_2F9318
    ctx->pc = 0x2F9DACu;
    SET_GPR_U32(ctx, 31, 0x2F9DB4u);
    ctx->pc = 0x2F9318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9318u, 0x2F9DACu, 0x2F9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DB4u;
label_2f9db4:
    // 0x2f9db4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9DB4u;
    {
        const bool branch_taken_0x2f9db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DB4u;
        // 0x2f9db8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9db4) {
            ctx->pc = 0x2F9DC4u;
            goto label_2f9dc4;
        }
    }
    ctx->pc = 0x2F9DBCu;
label_2f9dbc:
    // 0x2f9dbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9dc4:
    // 0x2f9dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DC4u;
        // 0x2f9dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9DCCu;
    // 0x2f9dcc: 0x0  nop
    ctx->pc = 0x2f9dccu;
    // NOP
    if (ctx->pc == 0x2f9dccu) { ctx->pc = 0x2f9dd0u; }
}
