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

// Function: kofxiThreadSuspendIfRunnable
// Address: 0x1b3200 - 0x1b3260
void kofxiThreadSuspendIfRunnable_0x1b3200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadSuspendIfRunnable_0x1b3200");
#endif

    switch (ctx->pc) {
        case 0x1b3224u: goto label_1b3224;
        case 0x1b3244u: goto label_1b3244;
        default: break;
    }

    ctx->pc = 0x1b3200u;

    // 0x1b3200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b3204: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b3204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b3208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b320c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1b320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1b3210: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b3210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3214: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B3214u;
    {
        const bool branch_taken_0x1b3214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3214u;
        // 0x1b3218: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3214) {
            ctx->pc = 0x1B3248u;
            goto label_1b3248;
        }
    }
    ctx->pc = 0x1B321Cu;
    // 0x1b321c: 0xc0432d8  jal         func_10CB60
    ctx->pc = 0x1B321Cu;
    SET_GPR_U32(ctx, 31, 0x1B3224u);
    ctx->pc = 0x1B3220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B321Cu;
    // 0x1b3220: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB60u, 0x1B321Cu, 0x1B3224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3224u;
label_1b3224:
    // 0x1b3224: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b3224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3228: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b3228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b322c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B322Cu;
    {
        const bool branch_taken_0x1b322c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B322Cu;
        // 0x1b3230: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b322c) {
            ctx->pc = 0x1B3248u;
            goto label_1b3248;
        }
    }
    ctx->pc = 0x1B3234u;
    // 0x1b3234: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3234u;
    {
        const bool branch_taken_0x1b3234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b3234) {
            ctx->pc = 0x1B3238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3234u;
            // 0x1b3238: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B324Cu;
            goto label_1b324c;
        }
    }
    ctx->pc = 0x1B323Cu;
    // 0x1b323c: 0xc0432f4  jal         func_10CBD0
    ctx->pc = 0x1B323Cu;
    SET_GPR_U32(ctx, 31, 0x1B3244u);
    ctx->pc = 0x1B3240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B323Cu;
    // 0x1b3240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBD0u, 0x1B323Cu, 0x1B3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3244u;
label_1b3244:
    // 0x1b3244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3248:
    // 0x1b3248: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b3248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b324c:
    // 0x1b324c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b324cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3250: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1b3250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3254: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b3254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3258: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3258u;
        // 0x1b325c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3260u;
}
