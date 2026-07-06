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

// Function: sub_002F4818
// Address: 0x2f4818 - 0x2f4868
void sub_002F4818_0x2f4818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4818_0x2f4818");
#endif

    ctx->pc = 0x2f4818u;

    // 0x2f4818: 0x8c8500e8  lw          $a1, 0xE8($a0)
    ctx->pc = 0x2f4818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x2f481c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f4820: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F4820u;
    {
        const bool branch_taken_0x2f4820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4820) {
            ctx->pc = 0x2F4824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4820u;
            // 0x2f4824: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4828u;
            goto label_2f4828;
        }
    }
    ctx->pc = 0x2F4828u;
label_2f4828:
    // 0x2f4828: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2f4828u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2f482c: 0x1012  mflo        $v0
    ctx->pc = 0x2f482cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f4830: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2f4830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f4834: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2f4834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f4838: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4838u;
    {
        const bool branch_taken_0x2f4838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4838u;
        // 0x2f483c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4838) {
            ctx->pc = 0x2F4860u;
            goto label_2f4860;
        }
    }
    ctx->pc = 0x2F4840u;
    // 0x2f4840: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f4840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f4844: 0x24421e20  addiu       $v0, $v0, 0x1E20
    ctx->pc = 0x2f4844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x2f4848: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f4848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f484c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f4850: 0x800008  jr          $a0
    ctx->pc = 0x2F4850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4858u: goto label_2f4858;
            case 0x2F4860u: goto label_2f4860;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4850u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F4858u;
label_2f4858:
    // 0x2f4858: 0x24a2fed4  addiu       $v0, $a1, -0x12C
    ctx->pc = 0x2f4858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966996));
    // 0x2f485c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x2f485cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2f4860:
    // 0x2f4860: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4860u;
        // 0x2f4864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4868u;
}
