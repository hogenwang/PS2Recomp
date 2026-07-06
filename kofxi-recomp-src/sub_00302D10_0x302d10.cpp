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

// Function: sub_00302D10
// Address: 0x302d10 - 0x302d60
void sub_00302D10_0x302d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302D10_0x302d10");
#endif

    switch (ctx->pc) {
        case 0x302d54u: goto label_302d54;
        default: break;
    }

    ctx->pc = 0x302d10u;

    // 0x302d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302d14: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x302d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x302d18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302d1c: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x302d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x302d20: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x302d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x302d24: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x302d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x302d28: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x302d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x302d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x302d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x302d34: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302d38: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x302d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x302d3c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x302d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x302d40: 0x2406a83d  addiu       $a2, $zero, -0x57C3
    ctx->pc = 0x302d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944829));
    // 0x302d44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x302d44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x302d48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d4c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x302D4Cu;
    SET_GPR_U32(ctx, 31, 0x302D54u);
    ctx->pc = 0x302D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302D4Cu;
    // 0x302d50: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x302D4Cu, 0x302D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D54u;
label_302d54:
    // 0x302d54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302d58: 0x3e00008  jr          $ra
    ctx->pc = 0x302D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D58u;
        // 0x302d5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302D60u;
}
