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

// Function: kofxiThreadWakeIfSleeping
// Address: 0x1b3130 - 0x1b3180
void kofxiThreadWakeIfSleeping_0x1b3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadWakeIfSleeping_0x1b3130");
#endif

    switch (ctx->pc) {
        case 0x1b314cu: goto label_1b314c;
        case 0x1b3170u: goto label_1b3170;
        default: break;
    }

    ctx->pc = 0x1b3130u;

    // 0x1b3130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3134: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b3134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b3138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b313c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B313Cu;
    {
        const bool branch_taken_0x1b313c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B313Cu;
        // 0x1b3140: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b313c) {
            ctx->pc = 0x1B3170u;
            goto label_1b3170;
        }
    }
    ctx->pc = 0x1B3144u;
    // 0x1b3144: 0xc0432d8  jal         func_10CB60
    ctx->pc = 0x1B3144u;
    SET_GPR_U32(ctx, 31, 0x1B314Cu);
    ctx->pc = 0x1B3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3144u;
    // 0x1b3148: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB60u, 0x1B3144u, 0x1B314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B314Cu;
label_1b314c:
    // 0x1b314c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b314cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3150: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b3150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3154: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3158: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3158u;
    {
        const bool branch_taken_0x1b3158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3158u;
        // 0x1b315c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3158) {
            ctx->pc = 0x1B3168u;
            goto label_1b3168;
        }
    }
    ctx->pc = 0x1B3160u;
    // 0x1b3160: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3160u;
    {
        const bool branch_taken_0x1b3160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3160u;
        // 0x1b3164: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3160) {
            ctx->pc = 0x1B3174u;
            goto label_1b3174;
        }
    }
    ctx->pc = 0x1B3168u;
label_1b3168:
    // 0x1b3168: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x1B3168u;
    SET_GPR_U32(ctx, 31, 0x1B3170u);
    ctx->pc = 0x10CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB90u, 0x1B3168u, 0x1B3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3170u;
label_1b3170:
    // 0x1b3170: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b3170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3174:
    // 0x1b3174: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b3174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3178: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3178u;
        // 0x1b317c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3180u;
}
