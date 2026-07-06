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

// Function: sub_0013E750
// Address: 0x13e750 - 0x13e7f0
void sub_0013E750_0x13e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E750_0x13e750");
#endif

    ctx->pc = 0x13e750u;

    // 0x13e750: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13E750u;
    {
        const bool branch_taken_0x13e750 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e750) {
            ctx->pc = 0x13E754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E750u;
            // 0x13e754: 0x28a20014  slti        $v0, $a1, 0x14 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E784u;
            goto label_13e784;
        }
    }
    ctx->pc = 0x13E758u;
    // 0x13e758: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13e758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13e75c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13e760: 0x2442cb70  addiu       $v0, $v0, -0x3490
    ctx->pc = 0x13e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x13e764: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x13e764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13e768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e76c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e770: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x13e770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e774: 0x5420001a  bnel        $at, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x13E774u;
    {
        const bool branch_taken_0x13e774 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e774) {
            ctx->pc = 0x13E778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E774u;
            // 0x13e778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E7E0u;
            goto label_13e7e0;
        }
    }
    ctx->pc = 0x13E77Cu;
    // 0x13e77c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13E77Cu;
    {
        const bool branch_taken_0x13e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E77Cu;
        // 0x13e780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e77c) {
            ctx->pc = 0x13E7E0u;
            goto label_13e7e0;
        }
    }
    ctx->pc = 0x13E784u;
label_13e784:
    // 0x13e784: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E784u;
    {
        const bool branch_taken_0x13e784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e784) {
            ctx->pc = 0x13E794u;
            goto label_13e794;
        }
    }
    ctx->pc = 0x13E78Cu;
    // 0x13e78c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13E78Cu;
    {
        const bool branch_taken_0x13e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E78Cu;
        // 0x13e790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e78c) {
            ctx->pc = 0x13E7E0u;
            goto label_13e7e0;
        }
    }
    ctx->pc = 0x13E794u;
label_13e794:
    // 0x13e794: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13e794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13e798: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13e798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13e79c: 0x2442cb6c  addiu       $v0, $v0, -0x3494
    ctx->pc = 0x13e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953836));
    // 0x13e7a0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x13e7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13e7a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13e7a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e7ac: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13e7acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e7b0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13E7B0u;
    {
        const bool branch_taken_0x13e7b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e7b0) {
            ctx->pc = 0x13E7DCu;
            goto label_13e7dc;
        }
    }
    ctx->pc = 0x13E7B8u;
    // 0x13e7b8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13e7bc: 0x2442cb70  addiu       $v0, $v0, -0x3490
    ctx->pc = 0x13e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x13e7c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13e7c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e7c8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13e7c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e7cc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E7CCu;
    {
        const bool branch_taken_0x13e7cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e7cc) {
            ctx->pc = 0x13E7DCu;
            goto label_13e7dc;
        }
    }
    ctx->pc = 0x13E7D4u;
    // 0x13e7d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E7D4u;
    {
        const bool branch_taken_0x13e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7D4u;
        // 0x13e7d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7d4) {
            ctx->pc = 0x13E7E0u;
            goto label_13e7e0;
        }
    }
    ctx->pc = 0x13E7DCu;
label_13e7dc:
    // 0x13e7dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e7e0:
    // 0x13e7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E7E8u;
    // 0x13e7e8: 0x0  nop
    ctx->pc = 0x13e7e8u;
    // NOP
    // 0x13e7ec: 0x0  nop
    ctx->pc = 0x13e7ecu;
    // NOP
    if (ctx->pc == 0x13e7ecu) { ctx->pc = 0x13e7f0u; }
}
