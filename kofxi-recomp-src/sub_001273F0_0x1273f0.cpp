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

// Function: sub_001273F0
// Address: 0x1273f0 - 0x127448
void sub_001273F0_0x1273f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001273F0_0x1273f0");
#endif

    switch (ctx->pc) {
        case 0x127400u: goto label_127400;
        default: break;
    }

    ctx->pc = 0x1273f0u;

    // 0x1273f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1273f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1273f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1273f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1273f8: 0xc0435cc  jal         func_10D730
    ctx->pc = 0x1273F8u;
    SET_GPR_U32(ctx, 31, 0x127400u);
    ctx->pc = 0x10D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D730u, 0x1273F8u, 0x127400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127400u;
label_127400:
    // 0x127400: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x127400u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127404: 0x104f000c  beq         $v0, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x127404u;
    {
        const bool branch_taken_0x127404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x127408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127404u;
        // 0x127408: 0x3c0e0036  lui         $t6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127404) {
            ctx->pc = 0x127438u;
            goto label_127438;
        }
    }
    ctx->pc = 0x12740Cu;
    // 0x12740c: 0x8dcfc250  lw          $t7, -0x3DB0($t6)
    ctx->pc = 0x12740cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294951504)));
    // 0x127410: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x127410u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x127414: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x127414u;
    {
        const bool branch_taken_0x127414 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127414u;
        // 0x127418: 0xadcfc250  sw          $t7, -0x3DB0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4294951504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127414) {
            ctx->pc = 0x127438u;
            goto label_127438;
        }
    }
    ctx->pc = 0x12741Cu;
    // 0x12741c: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x127420: 0x8dcfc254  lw          $t7, -0x3DAC($t6)
    ctx->pc = 0x127420u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294951508)));
    // 0x127424: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x127424u;
    {
        const bool branch_taken_0x127424 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127424u;
        // 0x127428: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127424) {
            ctx->pc = 0x12743Cu;
            goto label_12743c;
        }
    }
    ctx->pc = 0x12742Cu;
    // 0x12742c: 0x0  nop
    ctx->pc = 0x12742cu;
    // NOP
    // 0x127430: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x127430u;
    ctx->pc = 0x127434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127430u;
    // 0x127434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x127438u;
label_127438:
    // 0x127438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12743c:
    // 0x12743c: 0x3e00008  jr          $ra
    ctx->pc = 0x12743Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12743Cu;
        // 0x127440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12743Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127444u;
    // 0x127444: 0x0  nop
    ctx->pc = 0x127444u;
    // NOP
}
