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

// Function: sub_001A58D0
// Address: 0x1a58d0 - 0x1a5908
void sub_001A58D0_0x1a58d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A58D0_0x1a58d0");
#endif

    switch (ctx->pc) {
        case 0x1a58e4u: goto label_1a58e4;
        case 0x1a58f8u: goto label_1a58f8;
        default: break;
    }

    ctx->pc = 0x1a58d0u;

    // 0x1a58d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a58d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a58d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a58d8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1a58d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a58dc: 0xc069430  jal         func_1A50C0
    ctx->pc = 0x1A58DCu;
    SET_GPR_U32(ctx, 31, 0x1A58E4u);
    ctx->pc = 0x1A58E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58DCu;
    // 0x1a58e0: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A50C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A50C0u, 0x1A58DCu, 0x1A58E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58E4u;
label_1a58e4:
    // 0x1a58e4: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1a58e8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a58ec: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1a58ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a58f0: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A58F0u;
    SET_GPR_U32(ctx, 31, 0x1A58F8u);
    ctx->pc = 0x1A58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58F0u;
    // 0x1a58f4: 0x248469b0  addiu       $a0, $a0, 0x69B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A58F0u, 0x1A58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58F8u;
label_1a58f8:
    // 0x1a58f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a58f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a58fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A58FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58FCu;
        // 0x1a5900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A58FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5904u;
    // 0x1a5904: 0x0  nop
    ctx->pc = 0x1a5904u;
    // NOP
}
