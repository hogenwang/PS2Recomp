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

// Function: sub_00302E00
// Address: 0x302e00 - 0x302e50
void sub_00302E00_0x302e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302E00_0x302e00");
#endif

    switch (ctx->pc) {
        case 0x302e44u: goto label_302e44;
        default: break;
    }

    ctx->pc = 0x302e00u;

    // 0x302e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302e04: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x302e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x302e08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302e0c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x302e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x302e10: 0x94890006  lhu         $t1, 0x6($a0)
    ctx->pc = 0x302e10u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x302e14: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x302e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x302e18: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x302e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x302e1c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x302e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x302e20: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302e24: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x302e24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x302e28: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x302e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x302e2c: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x302e2cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302e30: 0x948a0002  lhu         $t2, 0x2($a0)
    ctx->pc = 0x302e30u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x302e34: 0x948b0004  lhu         $t3, 0x4($a0)
    ctx->pc = 0x302e34u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x302e38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x302e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e3c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x302E3Cu;
    SET_GPR_U32(ctx, 31, 0x302E44u);
    ctx->pc = 0x302E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302E3Cu;
    // 0x302e40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x302E3Cu, 0x302E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E44u;
label_302e44:
    // 0x302e44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302e48: 0x3e00008  jr          $ra
    ctx->pc = 0x302E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E48u;
        // 0x302e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302E50u;
}
