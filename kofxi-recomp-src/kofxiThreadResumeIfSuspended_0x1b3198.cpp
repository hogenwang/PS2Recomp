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

// Function: kofxiThreadResumeIfSuspended
// Address: 0x1b3198 - 0x1b3200
void kofxiThreadResumeIfSuspended_0x1b3198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadResumeIfSuspended_0x1b3198");
#endif

    switch (ctx->pc) {
        case 0x1b31bcu: goto label_1b31bc;
        case 0x1b31e0u: goto label_1b31e0;
        default: break;
    }

    ctx->pc = 0x1b3198u;

    // 0x1b3198: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b319c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b31a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b31a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31a4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1b31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1b31a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b31a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31ac: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B31ACu;
    {
        const bool branch_taken_0x1b31ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31ACu;
        // 0x1b31b0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31ac) {
            ctx->pc = 0x1B31E4u;
            goto label_1b31e4;
        }
    }
    ctx->pc = 0x1B31B4u;
    // 0x1b31b4: 0xc0432d8  jal         func_10CB60
    ctx->pc = 0x1B31B4u;
    SET_GPR_U32(ctx, 31, 0x1B31BCu);
    ctx->pc = 0x1B31B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31B4u;
    // 0x1b31b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB60u, 0x1B31B4u, 0x1B31BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31BCu;
label_1b31bc:
    // 0x1b31bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b31bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b31c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b31c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B31C8u;
    {
        const bool branch_taken_0x1b31c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31C8u;
        // 0x1b31cc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31c8) {
            ctx->pc = 0x1B31D8u;
            goto label_1b31d8;
        }
    }
    ctx->pc = 0x1B31D0u;
    // 0x1b31d0: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B31D0u;
    {
        const bool branch_taken_0x1b31d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31D0u;
        // 0x1b31d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31d0) {
            ctx->pc = 0x1B31E8u;
            goto label_1b31e8;
        }
    }
    ctx->pc = 0x1B31D8u;
label_1b31d8:
    // 0x1b31d8: 0xc0432fc  jal         func_10CBF0
    ctx->pc = 0x1B31D8u;
    SET_GPR_U32(ctx, 31, 0x1B31E0u);
    ctx->pc = 0x10CBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBF0u, 0x1B31D8u, 0x1B31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31E0u;
label_1b31e0:
    // 0x1b31e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b31e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b31e4:
    // 0x1b31e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b31e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b31e8:
    // 0x1b31e8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b31e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b31ec: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1b31ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b31f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b31f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b31f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B31F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31F4u;
        // 0x1b31f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B31F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B31FCu;
    // 0x1b31fc: 0x0  nop
    ctx->pc = 0x1b31fcu;
    // NOP
}
