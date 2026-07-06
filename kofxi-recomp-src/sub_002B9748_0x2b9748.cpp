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

// Function: sub_002B9748
// Address: 0x2b9748 - 0x2b97a0
void sub_002B9748_0x2b9748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9748_0x2b9748");
#endif

    ctx->pc = 0x2b9748u;

    // 0x2b9748: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2b9748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2b974c: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B974Cu;
    {
        const bool branch_taken_0x2b974c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B974Cu;
        // 0x2b9750: 0x28820048  slti        $v0, $a0, 0x48 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)72) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b974c) {
            ctx->pc = 0x2B9788u;
            goto label_2b9788;
        }
    }
    ctx->pc = 0x2B9754u;
    // 0x2b9754: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9754u;
    {
        const bool branch_taken_0x2b9754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9754u;
        // 0x2b9758: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9754) {
            ctx->pc = 0x2B9774u;
            goto label_2b9774;
        }
    }
    ctx->pc = 0x2B975Cu;
    // 0x2b975c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B975Cu;
    {
        const bool branch_taken_0x2b975c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B975Cu;
        // 0x2b9760: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b975c) {
            ctx->pc = 0x2B9788u;
            goto label_2b9788;
        }
    }
    ctx->pc = 0x2B9764u;
    // 0x2b9764: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9764u;
    {
        const bool branch_taken_0x2b9764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9764u;
        // 0x2b9768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9764) {
            ctx->pc = 0x2B9788u;
            goto label_2b9788;
        }
    }
    ctx->pc = 0x2B976Cu;
    // 0x2b976c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B976Cu;
    {
        const bool branch_taken_0x2b976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b976c) {
            ctx->pc = 0x2B9794u;
            goto label_2b9794;
        }
    }
    ctx->pc = 0x2B9774u;
label_2b9774:
    // 0x2b9774: 0x28820079  slti        $v0, $a0, 0x79
    ctx->pc = 0x2b9774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2b9778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9778u;
    {
        const bool branch_taken_0x2b9778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9778u;
        // 0x2b977c: 0x28820077  slti        $v0, $a0, 0x77 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)119) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9778) {
            ctx->pc = 0x2B9790u;
            goto label_2b9790;
        }
    }
    ctx->pc = 0x2B9780u;
    // 0x2b9780: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9780u;
    {
        const bool branch_taken_0x2b9780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9780u;
        // 0x2b9784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9780) {
            ctx->pc = 0x2B9794u;
            goto label_2b9794;
        }
    }
    ctx->pc = 0x2B9788u;
label_2b9788:
    // 0x2b9788: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9788u;
        // 0x2b978c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9790u;
label_2b9790:
    // 0x2b9790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b9790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9794:
    // 0x2b9794: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B979Cu;
    // 0x2b979c: 0x0  nop
    ctx->pc = 0x2b979cu;
    // NOP
    if (ctx->pc == 0x2b979cu) { ctx->pc = 0x2b97a0u; }
}
