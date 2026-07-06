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

// Function: sub_001ECE20
// Address: 0x1ece20 - 0x1ece88
void sub_001ECE20_0x1ece20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECE20_0x1ece20");
#endif

    switch (ctx->pc) {
        case 0x1ece40u: goto label_1ece40;
        case 0x1ece58u: goto label_1ece58;
        default: break;
    }

    ctx->pc = 0x1ece20u;

    // 0x1ece20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ece20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ece24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ece24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ece28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ece28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ece2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ece30: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x1ece30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x1ece34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ece34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ece38: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1ECE38u;
    SET_GPR_U32(ctx, 31, 0x1ECE40u);
    ctx->pc = 0x1ECE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE38u;
    // 0x1ece3c: 0x8e050090  lw          $a1, 0x90($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1ECE38u, 0x1ECE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE40u;
label_1ece40:
    // 0x1ece40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ece40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ece44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece48: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECE48u;
    {
        const bool branch_taken_0x1ece48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE48u;
        // 0x1ece4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece48) {
            ctx->pc = 0x1ECE70u;
            goto label_1ece70;
        }
    }
    ctx->pc = 0x1ECE50u;
    // 0x1ece50: 0xc07b3a2  jal         func_1ECE88
    ctx->pc = 0x1ECE50u;
    SET_GPR_U32(ctx, 31, 0x1ECE58u);
    ctx->pc = 0x1ECE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE88u, 0x1ECE50u, 0x1ECE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE58u;
label_1ece58:
    // 0x1ece58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ece58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ece5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ece60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ece64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ece64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ece68: 0x807fbb2  j           func_1FEEC8
    ctx->pc = 0x1ECE68u;
    ctx->pc = 0x1ECE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE68u;
    // 0x1ece6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    sub_001FEEC8_0x1feec8(rdram, ctx, runtime); return;
    ctx->pc = 0x1ECE70u;
label_1ece70:
    // 0x1ece70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ece70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ece74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ece78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ece78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ece7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE7Cu;
        // 0x1ece80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECE84u;
    // 0x1ece84: 0x0  nop
    ctx->pc = 0x1ece84u;
    // NOP
}
