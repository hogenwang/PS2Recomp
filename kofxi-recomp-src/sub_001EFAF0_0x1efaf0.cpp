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

// Function: sub_001EFAF0
// Address: 0x1efaf0 - 0x1efb40
void sub_001EFAF0_0x1efaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFAF0_0x1efaf0");
#endif

    switch (ctx->pc) {
        case 0x1efb14u: goto label_1efb14;
        default: break;
    }

    ctx->pc = 0x1efaf0u;

    // 0x1efaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1efaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1efaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1efaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1efaf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efafc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1efafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1efb00: 0x8e033708  lw          $v1, 0x3708($s0)
    ctx->pc = 0x1efb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
    // 0x1efb04: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFB04u;
    {
        const bool branch_taken_0x1efb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB04u;
        // 0x1efb08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb04) {
            ctx->pc = 0x1EFB2Cu;
            goto label_1efb2c;
        }
    }
    ctx->pc = 0x1EFB0Cu;
    // 0x1efb0c: 0xc07bed0  jal         func_1EFB40
    ctx->pc = 0x1EFB0Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB14u);
    ctx->pc = 0x1EFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFB40u, 0x1EFB0Cu, 0x1EFB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB14u;
label_1efb14:
    // 0x1efb14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFB14u;
    {
        const bool branch_taken_0x1efb14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1efb14) {
            ctx->pc = 0x1EFB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFB14u;
            // 0x1efb18: 0x8e023708  lw          $v0, 0x3708($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB28u;
            goto label_1efb28;
        }
    }
    ctx->pc = 0x1EFB1Cu;
    // 0x1efb1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFB1Cu;
    {
        const bool branch_taken_0x1efb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB1Cu;
        // 0x1efb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb1c) {
            ctx->pc = 0x1EFB2Cu;
            goto label_1efb2c;
        }
    }
    ctx->pc = 0x1EFB24u;
    // 0x1efb24: 0x0  nop
    ctx->pc = 0x1efb24u;
    // NOP
label_1efb28:
    // 0x1efb28: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x1efb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
label_1efb2c:
    // 0x1efb2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1efb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efb30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1efb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1efb34: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB34u;
        // 0x1efb38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFB3Cu;
    // 0x1efb3c: 0x0  nop
    ctx->pc = 0x1efb3cu;
    // NOP
}
