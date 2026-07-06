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

// Function: sub_0025C8B8
// Address: 0x25c8b8 - 0x25c908
void sub_0025C8B8_0x25c8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C8B8_0x25c8b8");
#endif

    switch (ctx->pc) {
        case 0x25c8e4u: goto label_25c8e4;
        default: break;
    }

    ctx->pc = 0x25c8b8u;

    // 0x25c8b8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x25c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x25c8bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c8bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c8c0: 0x2443ae90  addiu       $v1, $v0, -0x5170
    ctx->pc = 0x25c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946448));
    // 0x25c8c4: 0xac40ae90  sw          $zero, -0x5170($v0)
    ctx->pc = 0x25c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946448), GPR_U32(ctx, 0));
    // 0x25c8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c8cc: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x25c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x25c8d0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x25c8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x25c8d4: 0x24c670c8  addiu       $a2, $a2, 0x70C8
    ctx->pc = 0x25c8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28872));
    // 0x25c8d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c8dc: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x25C8DCu;
    SET_GPR_U32(ctx, 31, 0x25C8E4u);
    ctx->pc = 0x25C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C8DCu;
    // 0x25c8e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x25C8DCu, 0x25C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8E4u;
label_25c8e4:
    // 0x25c8e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25c8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c8e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25c8ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c8f4: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x25c8f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25c8f8: 0xac851750  sw          $a1, 0x1750($a0)
    ctx->pc = 0x25c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5968), GPR_U32(ctx, 5));
    // 0x25c8fc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x25c8fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x25c900: 0x3e00008  jr          $ra
    ctx->pc = 0x25C900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C900u;
        // 0x25c904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C908u;
}
