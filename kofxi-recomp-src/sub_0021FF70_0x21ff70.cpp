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

// Function: sub_0021FF70
// Address: 0x21ff70 - 0x21ffa8
void sub_0021FF70_0x21ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FF70_0x21ff70");
#endif

    switch (ctx->pc) {
        case 0x21ff94u: goto label_21ff94;
        default: break;
    }

    ctx->pc = 0x21ff70u;

    // 0x21ff70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ff74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ff78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21ff7c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x21ff7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x21ff80: 0x8e0fca18  lw          $t7, -0x35E8($s0)
    ctx->pc = 0x21ff80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953496)));
    // 0x21ff84: 0x19e00003  blez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FF84u;
    {
        const bool branch_taken_0x21ff84 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x21FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF84u;
        // 0x21ff88: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff84) {
            ctx->pc = 0x21FF94u;
            goto label_21ff94;
        }
    }
    ctx->pc = 0x21FF8Cu;
    // 0x21ff8c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x21FF8Cu;
    SET_GPR_U32(ctx, 31, 0x21FF94u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x21FF8Cu, 0x21FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF94u;
label_21ff94:
    // 0x21ff94: 0xae00ca18  sw          $zero, -0x35E8($s0)
    ctx->pc = 0x21ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953496), GPR_U32(ctx, 0));
    // 0x21ff98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21ff98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ff9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ff9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ffa0: 0x3e00008  jr          $ra
    ctx->pc = 0x21FFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA0u;
        // 0x21ffa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FFA8u;
}
