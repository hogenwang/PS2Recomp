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

// Function: sub_002E6428
// Address: 0x2e6428 - 0x2e6480
void sub_002E6428_0x2e6428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6428_0x2e6428");
#endif

    switch (ctx->pc) {
        case 0x2e6440u: goto label_2e6440;
        case 0x2e6444u: goto label_2e6444;
        default: break;
    }

    ctx->pc = 0x2e6428u;

    // 0x2e6428: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x2e6428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x2e642c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e642cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6430: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x2e6430u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x2e6434: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6434u;
    {
        const bool branch_taken_0x2e6434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6434u;
        // 0x2e6438: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6434) {
            ctx->pc = 0x2E6444u;
            goto label_2e6444;
        }
    }
    ctx->pc = 0x2E643Cu;
    // 0x2e643c: 0x0  nop
    ctx->pc = 0x2e643cu;
    // NOP
label_2e6440:
    // 0x2e6440: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e6440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e6444:
    // 0x2e6444: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E6444u;
    {
        const bool branch_taken_0x2e6444 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e6444) {
            ctx->pc = 0x2E6474u;
            goto label_2e6474;
        }
    }
    ctx->pc = 0x2E644Cu;
    // 0x2e644c: 0x58a00007  blezl       $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E644Cu;
    {
        const bool branch_taken_0x2e644c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2e644c) {
            ctx->pc = 0x2E6450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E644Cu;
            // 0x2e6450: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E646Cu;
            goto label_2e646c;
        }
    }
    ctx->pc = 0x2E6454u;
    // 0x2e6454: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x2e6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x2e6458: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2e6458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2e645c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E645Cu;
    {
        const bool branch_taken_0x2e645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E645Cu;
        // 0x2e6460: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e645c) {
            ctx->pc = 0x2E6474u;
            goto label_2e6474;
        }
    }
    ctx->pc = 0x2E6464u;
    // 0x2e6464: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E6464u;
    {
        const bool branch_taken_0x2e6464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6464u;
        // 0x2e6468: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6464) {
            ctx->pc = 0x2E6444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6444;
        }
    }
    ctx->pc = 0x2E646Cu;
label_2e646c:
    // 0x2e646c: 0x1046fff4  beq         $v0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E646Cu;
    {
        const bool branch_taken_0x2e646c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2E6470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E646Cu;
        // 0x2e6470: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e646c) {
            ctx->pc = 0x2E6440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6440;
        }
    }
    ctx->pc = 0x2E6474u;
label_2e6474:
    // 0x2e6474: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6474u;
        // 0x2e6478: 0x28620001  slti        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E647Cu;
    // 0x2e647c: 0x0  nop
    ctx->pc = 0x2e647cu;
    // NOP
}
