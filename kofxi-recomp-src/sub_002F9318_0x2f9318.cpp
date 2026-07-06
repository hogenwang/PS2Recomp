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

// Function: sub_002F9318
// Address: 0x2f9318 - 0x2f9360
void sub_002F9318_0x2f9318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9318_0x2f9318");
#endif

    switch (ctx->pc) {
        case 0x2f9340u: goto label_2f9340;
        default: break;
    }

    ctx->pc = 0x2f9318u;

    // 0x2f9318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f9318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f931c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f931cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f9320: 0x3c1101cb  lui         $s1, 0x1CB
    ctx->pc = 0x2f9320u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)459 << 16));
    // 0x2f9324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9328: 0x8e2406c0  lw          $a0, 0x6C0($s1)
    ctx->pc = 0x2f9328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1728)));
    // 0x2f932c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2f932cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9330: 0x10900003  beq         $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9330u;
    {
        const bool branch_taken_0x2f9330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9330u;
        // 0x2f9334: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9330) {
            ctx->pc = 0x2F9340u;
            goto label_2f9340;
        }
    }
    ctx->pc = 0x2F9338u;
    // 0x2f9338: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2F9338u;
    SET_GPR_U32(ctx, 31, 0x2F9340u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2F9338u, 0x2F9340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9340u;
label_2f9340:
    // 0x2f9340: 0xae3006c0  sw          $s0, 0x6C0($s1)
    ctx->pc = 0x2f9340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1728), GPR_U32(ctx, 16));
    // 0x2f9344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9348: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f9348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f934c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f934cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9354: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9354u;
        // 0x2f9358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F935Cu;
    // 0x2f935c: 0x0  nop
    ctx->pc = 0x2f935cu;
    // NOP
}
