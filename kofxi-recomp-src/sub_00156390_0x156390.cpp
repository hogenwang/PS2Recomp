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

// Function: sub_00156390
// Address: 0x156390 - 0x1563d0
void sub_00156390_0x156390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156390_0x156390");
#endif

    switch (ctx->pc) {
        case 0x1563acu: goto label_1563ac;
        default: break;
    }

    ctx->pc = 0x156390u;

    // 0x156390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156394: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x156394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156398: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x156398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x15639c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1563a0: 0x2484f7a2  addiu       $a0, $a0, -0x85E
    ctx->pc = 0x1563a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965154));
    // 0x1563a4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x1563A4u;
    SET_GPR_U32(ctx, 31, 0x1563ACu);
    ctx->pc = 0x1563A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1563A4u;
    // 0x1563a8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x1563A4u, 0x1563ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563ACu;
label_1563ac:
    // 0x1563ac: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1563acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1563b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1563b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1563b4: 0xa060f7b1  sb          $zero, -0x84F($v1)
    ctx->pc = 0x1563b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294965169), (uint8_t)GPR_U32(ctx, 0));
    // 0x1563b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1563b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1563bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1563BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1563C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563BCu;
        // 0x1563c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1563BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1563C4u;
    // 0x1563c4: 0x0  nop
    ctx->pc = 0x1563c4u;
    // NOP
    // 0x1563c8: 0x0  nop
    ctx->pc = 0x1563c8u;
    // NOP
    // 0x1563cc: 0x0  nop
    ctx->pc = 0x1563ccu;
    // NOP
}
