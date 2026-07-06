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

// Function: sub_001A8EC0
// Address: 0x1a8ec0 - 0x1a8f20
void sub_001A8EC0_0x1a8ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8EC0_0x1a8ec0");
#endif

    switch (ctx->pc) {
        case 0x1a8efcu: goto label_1a8efc;
        default: break;
    }

    ctx->pc = 0x1a8ec0u;

    // 0x1a8ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8ec4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a8ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a8ec8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1a8ecc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8ed0: 0x8e02e150  lw          $v0, -0x1EB0($s0)
    ctx->pc = 0x1a8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959440)));
    // 0x1a8ed4: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A8ED4u;
    {
        const bool branch_taken_0x1a8ed4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ED4u;
        // 0x1a8ed8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ed4) {
            ctx->pc = 0x1A8F10u;
            goto label_1a8f10;
        }
    }
    ctx->pc = 0x1A8EDCu;
    // 0x1a8edc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1a8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1a8ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8ee4: 0x244269f0  addiu       $v0, $v0, 0x69F0
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27120));
    // 0x1a8ee8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1a8ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1a8eec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a8eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1a8ef0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a8ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ef4: 0xc043318  jal         func_10CC60
    ctx->pc = 0x1A8EF4u;
    SET_GPR_U32(ctx, 31, 0x1A8EFCu);
    ctx->pc = 0x1A8EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EF4u;
    // 0x1a8ef8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x1A8EF4u, 0x1A8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EFCu;
label_1a8efc:
    // 0x1a8efc: 0xae02e150  sw          $v0, -0x1EB0($s0)
    ctx->pc = 0x1a8efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294959440), GPR_U32(ctx, 2));
    // 0x1a8f00: 0x8e02e150  lw          $v0, -0x1EB0($s0)
    ctx->pc = 0x1a8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959440)));
    // 0x1a8f04: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8F04u;
    {
        const bool branch_taken_0x1a8f04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A8F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F04u;
        // 0x1a8f08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f04) {
            ctx->pc = 0x1A8F10u;
            goto label_1a8f10;
        }
    }
    ctx->pc = 0x1A8F0Cu;
    // 0x1a8f0c: 0x8e02e150  lw          $v0, -0x1EB0($s0)
    ctx->pc = 0x1a8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959440)));
label_1a8f10:
    // 0x1a8f10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8f14: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a8f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8f18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F18u;
        // 0x1a8f1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8F20u;
}
