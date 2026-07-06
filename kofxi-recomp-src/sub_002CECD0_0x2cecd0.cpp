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

// Function: sub_002CECD0
// Address: 0x2cecd0 - 0x2ced10
void sub_002CECD0_0x2cecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CECD0_0x2cecd0");
#endif

    switch (ctx->pc) {
        case 0x2cecf4u: goto label_2cecf4;
        default: break;
    }

    ctx->pc = 0x2cecd0u;

    // 0x2cecd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cecd4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2cecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cecd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cecdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cecdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cece0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cece4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2cece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2cece8: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x2cece8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x2cecec: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CECECu;
    SET_GPR_U32(ctx, 31, 0x2CECF4u);
    ctx->pc = 0x2CECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CECECu;
    // 0x2cecf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2CECECu, 0x2CECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECF4u;
label_2cecf4:
    // 0x2cecf4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2cecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2cecf8: 0x24638598  addiu       $v1, $v1, -0x7A68
    ctx->pc = 0x2cecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935960));
    // 0x2cecfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cecfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ced00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ced00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ced04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ced04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ced08: 0x3e00008  jr          $ra
    ctx->pc = 0x2CED08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED08u;
        // 0x2ced0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CED08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CED10u;
}
