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

// Function: sub_00294AD0
// Address: 0x294ad0 - 0x294af8
void sub_00294AD0_0x294ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294AD0_0x294ad0");
#endif

    switch (ctx->pc) {
        case 0x294ae4u: goto label_294ae4;
        default: break;
    }

    ctx->pc = 0x294ad0u;

    // 0x294ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294adc: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x294ADCu;
    SET_GPR_U32(ctx, 31, 0x294AE4u);
    ctx->pc = 0x294AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294ADCu;
    // 0x294ae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x294ADCu, 0x294AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294AE4u;
label_294ae4:
    // 0x294ae4: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x294ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x294ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294af0: 0x3e00008  jr          $ra
    ctx->pc = 0x294AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AF0u;
        // 0x294af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294AF8u;
}
