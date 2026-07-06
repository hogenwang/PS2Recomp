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

// Function: sub_001EF010
// Address: 0x1ef010 - 0x1ef060
void sub_001EF010_0x1ef010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF010_0x1ef010");
#endif

    switch (ctx->pc) {
        case 0x1ef034u: goto label_1ef034;
        case 0x1ef044u: goto label_1ef044;
        default: break;
    }

    ctx->pc = 0x1ef010u;

    // 0x1ef010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef014: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1ef014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1ef018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef01c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ef020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ef024: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF024u;
    {
        const bool branch_taken_0x1ef024 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF024u;
        // 0x1ef028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef024) {
            ctx->pc = 0x1EF050u;
            goto label_1ef050;
        }
    }
    ctx->pc = 0x1EF02Cu;
    // 0x1ef02c: 0xc07ae2c  jal         func_1EB8B0
    ctx->pc = 0x1EF02Cu;
    SET_GPR_U32(ctx, 31, 0x1EF034u);
    ctx->pc = 0x1EB8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8B0u, 0x1EF02Cu, 0x1EF034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF034u;
label_1ef034:
    // 0x1ef034: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF034u;
    {
        const bool branch_taken_0x1ef034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF034u;
        // 0x1ef038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef034) {
            ctx->pc = 0x1EF04Cu;
            goto label_1ef04c;
        }
    }
    ctx->pc = 0x1EF03Cu;
    // 0x1ef03c: 0xc07ae34  jal         func_1EB8D0
    ctx->pc = 0x1EF03Cu;
    SET_GPR_U32(ctx, 31, 0x1EF044u);
    ctx->pc = 0x1EB8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8D0u, 0x1EF03Cu, 0x1EF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF044u;
label_1ef044:
    // 0x1ef044: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF044u;
    {
        const bool branch_taken_0x1ef044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef044) {
            ctx->pc = 0x1EF048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF044u;
            // 0x1ef048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF050u;
            goto label_1ef050;
        }
    }
    ctx->pc = 0x1EF04Cu;
label_1ef04c:
    // 0x1ef04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef050:
    // 0x1ef050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ef054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef058: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF058u;
        // 0x1ef05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF060u;
}
