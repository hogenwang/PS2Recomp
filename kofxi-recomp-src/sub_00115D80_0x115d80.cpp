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

// Function: sub_00115D80
// Address: 0x115d80 - 0x115dc0
void sub_00115D80_0x115d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115D80_0x115d80");
#endif

    switch (ctx->pc) {
        case 0x115d90u: goto label_115d90;
        case 0x115db0u: goto label_115db0;
        default: break;
    }

    ctx->pc = 0x115d80u;

    // 0x115d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115d88: 0xc0455ec  jal         func_1157B0
    ctx->pc = 0x115D88u;
    SET_GPR_U32(ctx, 31, 0x115D90u);
    ctx->pc = 0x115D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D88u;
    // 0x115d8c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1157B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157B0u, 0x115D88u, 0x115D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D90u;
label_115d90:
    // 0x115d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115d94: 0x3e00008  jr          $ra
    ctx->pc = 0x115D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D94u;
        // 0x115d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D9Cu;
    // 0x115d9c: 0x0  nop
    ctx->pc = 0x115d9cu;
    // NOP
    // 0x115da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115da8: 0xc0455ec  jal         func_1157B0
    ctx->pc = 0x115DA8u;
    SET_GPR_U32(ctx, 31, 0x115DB0u);
    ctx->pc = 0x1157B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157B0u, 0x115DA8u, 0x115DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DB0u;
label_115db0:
    // 0x115db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115db4: 0x3e00008  jr          $ra
    ctx->pc = 0x115DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DB4u;
        // 0x115db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115DBCu;
    // 0x115dbc: 0x0  nop
    ctx->pc = 0x115dbcu;
    // NOP
    if (ctx->pc == 0x115dbcu) { ctx->pc = 0x115dc0u; }
}
