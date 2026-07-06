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

// Function: sub_001B7AC0
// Address: 0x1b7ac0 - 0x1b7af8
void sub_001B7AC0_0x1b7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7AC0_0x1b7ac0");
#endif

    switch (ctx->pc) {
        case 0x1b7ad4u: goto label_1b7ad4;
        case 0x1b7adcu: goto label_1b7adc;
        case 0x1b7ae4u: goto label_1b7ae4;
        default: break;
    }

    ctx->pc = 0x1b7ac0u;

    // 0x1b7ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7ac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7acc: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7ACCu;
    SET_GPR_U32(ctx, 31, 0x1B7AD4u);
    ctx->pc = 0x1B7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7ACCu;
    // 0x1b7ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7ACCu, 0x1B7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AD4u;
label_1b7ad4:
    // 0x1b7ad4: 0xc06debe  jal         func_1B7AF8
    ctx->pc = 0x1B7AD4u;
    SET_GPR_U32(ctx, 31, 0x1B7ADCu);
    ctx->pc = 0x1B7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7AD4u;
    // 0x1b7ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7AF8u, 0x1B7AD4u, 0x1B7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7ADCu;
label_1b7adc:
    // 0x1b7adc: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7ADCu;
    SET_GPR_U32(ctx, 31, 0x1B7AE4u);
    ctx->pc = 0x1B7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7ADCu;
    // 0x1b7ae0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B7ADCu, 0x1B7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AE4u;
label_1b7ae4:
    // 0x1b7ae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7ae8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AF0u;
        // 0x1b7af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AF8u;
}
