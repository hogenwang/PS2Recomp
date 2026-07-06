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

// Function: sub_00264868
// Address: 0x264868 - 0x264898
void sub_00264868_0x264868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264868_0x264868");
#endif

    switch (ctx->pc) {
        case 0x26487cu: goto label_26487c;
        default: break;
    }

    ctx->pc = 0x264868u;

    // 0x264868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26486c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26486cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264874: 0xc099168  jal         func_2645A0
    ctx->pc = 0x264874u;
    SET_GPR_U32(ctx, 31, 0x26487Cu);
    ctx->pc = 0x264878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264874u;
    // 0x264878: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2645A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2645A0u, 0x264874u, 0x26487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26487Cu;
label_26487c:
    // 0x26487c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26487Cu;
    {
        const bool branch_taken_0x26487c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26487Cu;
        // 0x264880: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26487c) {
            ctx->pc = 0x26488Cu;
            goto label_26488c;
        }
    }
    ctx->pc = 0x264884u;
    // 0x264884: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x264884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x264888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x264888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_26488c:
    // 0x26488c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26488cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264890: 0x3e00008  jr          $ra
    ctx->pc = 0x264890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264890u;
        // 0x264894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264898u;
}
