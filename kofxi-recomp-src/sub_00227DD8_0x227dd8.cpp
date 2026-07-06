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

// Function: sub_00227DD8
// Address: 0x227dd8 - 0x227e50
void sub_00227DD8_0x227dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227DD8_0x227dd8");
#endif

    switch (ctx->pc) {
        case 0x227de8u: goto label_227de8;
        case 0x227e10u: goto label_227e10;
        case 0x227e38u: goto label_227e38;
        default: break;
    }

    ctx->pc = 0x227dd8u;

    // 0x227dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227de0: 0xc089f32  jal         func_227CC8
    ctx->pc = 0x227DE0u;
    SET_GPR_U32(ctx, 31, 0x227DE8u);
    ctx->pc = 0x227CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227CC8u, 0x227DE0u, 0x227DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DE8u;
label_227de8:
    // 0x227de8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x227de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x227dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227df0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x227df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x227df4: 0x3e00008  jr          $ra
    ctx->pc = 0x227DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DF4u;
        // 0x227df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227DFCu;
    // 0x227dfc: 0x0  nop
    ctx->pc = 0x227dfcu;
    // NOP
    // 0x227e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227e08: 0xc089f32  jal         func_227CC8
    ctx->pc = 0x227E08u;
    SET_GPR_U32(ctx, 31, 0x227E10u);
    ctx->pc = 0x227CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227CC8u, 0x227E08u, 0x227E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E10u;
label_227e10:
    // 0x227e10: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x227e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x227e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x227e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x227e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x227E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E1Cu;
        // 0x227e20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E24u;
    // 0x227e24: 0x0  nop
    ctx->pc = 0x227e24u;
    // NOP
    // 0x227e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227e2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227e30: 0xc089f32  jal         func_227CC8
    ctx->pc = 0x227E30u;
    SET_GPR_U32(ctx, 31, 0x227E38u);
    ctx->pc = 0x227CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227CC8u, 0x227E30u, 0x227E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E38u;
label_227e38:
    // 0x227e38: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x227e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x227e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e40: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x227e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x227e44: 0x3e00008  jr          $ra
    ctx->pc = 0x227E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E44u;
        // 0x227e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E4Cu;
    // 0x227e4c: 0x0  nop
    ctx->pc = 0x227e4cu;
    // NOP
}
