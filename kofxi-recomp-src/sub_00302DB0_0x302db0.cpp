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

// Function: sub_00302DB0
// Address: 0x302db0 - 0x302e00
void sub_00302DB0_0x302db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302DB0_0x302db0");
#endif

    switch (ctx->pc) {
        case 0x302df4u: goto label_302df4;
        default: break;
    }

    ctx->pc = 0x302db0u;

    // 0x302db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302db4: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x302db4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x302db8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302dbc: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x302dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x302dc0: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x302dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x302dc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302dc8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x302dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x302dcc: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x302dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x302dd0: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x302dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x302dd4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302dd8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x302dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x302ddc: 0x2406a81f  addiu       $a2, $zero, -0x57E1
    ctx->pc = 0x302ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944799));
    // 0x302de0: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x302de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x302de4: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x302de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x302de8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x302de8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302dec: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x302DECu;
    SET_GPR_U32(ctx, 31, 0x302DF4u);
    ctx->pc = 0x302DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302DECu;
    // 0x302df0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x302DECu, 0x302DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DF4u;
label_302df4:
    // 0x302df4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302df8: 0x3e00008  jr          $ra
    ctx->pc = 0x302DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DF8u;
        // 0x302dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302E00u;
}
