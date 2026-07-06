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

// Function: sub_001B65C0
// Address: 0x1b65c0 - 0x1b6610
void sub_001B65C0_0x1b65c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B65C0_0x1b65c0");
#endif

    ctx->pc = 0x1b65c0u;

    // 0x1b65c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b65c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b65c4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b65c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b65c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b65cc: 0x2463b408  addiu       $v1, $v1, -0x4BF8
    ctx->pc = 0x1b65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947848));
    // 0x1b65d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b65d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b65d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B65D8u;
    {
        const bool branch_taken_0x1b65d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65D8u;
        // 0x1b65dc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b65d8) {
            ctx->pc = 0x1B6600u;
            goto label_1b6600;
        }
    }
    ctx->pc = 0x1B65E0u;
    // 0x1b65e0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b65e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b65e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b65e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b65e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65ec: 0x2484b428  addiu       $a0, $a0, -0x4BD8
    ctx->pc = 0x1b65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947880));
    // 0x1b65f0: 0x24060f00  addiu       $a2, $zero, 0xF00
    ctx->pc = 0x1b65f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x1b65f4: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1B65F4u;
    ctx->pc = 0x1B65F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65F4u;
    // 0x1b65f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B65FCu;
    // 0x1b65fc: 0x0  nop
    ctx->pc = 0x1b65fcu;
    // NOP
label_1b6600:
    // 0x1b6600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6604: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6604u;
        // 0x1b6608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B660Cu;
    // 0x1b660c: 0x0  nop
    ctx->pc = 0x1b660cu;
    // NOP
    if (ctx->pc == 0x1b660cu) { ctx->pc = 0x1b6610u; }
}
