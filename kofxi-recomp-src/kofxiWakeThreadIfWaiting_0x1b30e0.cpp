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

// Function: kofxiWakeThreadIfWaiting
// Address: 0x1b30e0 - 0x1b3130
void kofxiWakeThreadIfWaiting_0x1b30e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWakeThreadIfWaiting_0x1b30e0");
#endif

    switch (ctx->pc) {
        case 0x1b30fcu: goto label_1b30fc;
        case 0x1b3120u: goto label_1b3120;
        default: break;
    }

    ctx->pc = 0x1b30e0u;

    // 0x1b30e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b30e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b30e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b30e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b30e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b30e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30ec: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B30ECu;
    {
        const bool branch_taken_0x1b30ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30ECu;
        // 0x1b30f0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30ec) {
            ctx->pc = 0x1B3120u;
            goto label_1b3120;
        }
    }
    ctx->pc = 0x1B30F4u;
    // 0x1b30f4: 0xc0432dc  jal         func_10CB70
    ctx->pc = 0x1B30F4u;
    SET_GPR_U32(ctx, 31, 0x1B30FCu);
    ctx->pc = 0x1B30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30F4u;
    // 0x1b30f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB70u, 0x1B30F4u, 0x1B30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30FCu;
label_1b30fc:
    // 0x1b30fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b30fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3100: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b3100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3104: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3108: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3108u;
    {
        const bool branch_taken_0x1b3108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3108u;
        // 0x1b310c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3108) {
            ctx->pc = 0x1B3118u;
            goto label_1b3118;
        }
    }
    ctx->pc = 0x1B3110u;
    // 0x1b3110: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3110u;
    {
        const bool branch_taken_0x1b3110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3110u;
        // 0x1b3114: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3110) {
            ctx->pc = 0x1B3124u;
            goto label_1b3124;
        }
    }
    ctx->pc = 0x1B3118u;
label_1b3118:
    // 0x1b3118: 0xc0436ca  jal         func_10DB28
    ctx->pc = 0x1B3118u;
    SET_GPR_U32(ctx, 31, 0x1B3120u);
    ctx->pc = 0x10DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB28u, 0x1B3118u, 0x1B3120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3120u;
label_1b3120:
    // 0x1b3120: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b3120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3124:
    // 0x1b3124: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b3124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3128: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3128u;
        // 0x1b312c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3130u;
}
