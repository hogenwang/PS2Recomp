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

// Function: sub_00336E10
// Address: 0x336e10 - 0x336e50
void sub_00336E10_0x336e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336E10_0x336e10");
#endif

    switch (ctx->pc) {
        case 0x336e2cu: goto label_336e2c;
        default: break;
    }

    ctx->pc = 0x336e10u;

    // 0x336e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336e14: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x336e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x336e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336e1c: 0x2484b240  addiu       $a0, $a0, -0x4DC0
    ctx->pc = 0x336e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    // 0x336e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e24: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x336E24u;
    SET_GPR_U32(ctx, 31, 0x336E2Cu);
    ctx->pc = 0x336E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E24u;
    // 0x336e28: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x336E24u, 0x336E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336E2Cu;
label_336e2c:
    // 0x336e2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x336e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336e30: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336e34: 0xa064b24a  sb          $a0, -0x4DB6($v1)
    ctx->pc = 0x336e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947402), (uint8_t)GPR_U32(ctx, 4));
    // 0x336e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x336E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E3Cu;
        // 0x336e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336E44u;
    // 0x336e44: 0x0  nop
    ctx->pc = 0x336e44u;
    // NOP
    // 0x336e48: 0x0  nop
    ctx->pc = 0x336e48u;
    // NOP
    // 0x336e4c: 0x0  nop
    ctx->pc = 0x336e4cu;
    // NOP
}
