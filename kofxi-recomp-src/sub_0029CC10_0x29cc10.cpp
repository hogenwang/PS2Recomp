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

// Function: sub_0029CC10
// Address: 0x29cc10 - 0x29cc80
void sub_0029CC10_0x29cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CC10_0x29cc10");
#endif

    switch (ctx->pc) {
        case 0x29cc20u: goto label_29cc20;
        case 0x29cc48u: goto label_29cc48;
        case 0x29cc68u: goto label_29cc68;
        default: break;
    }

    ctx->pc = 0x29cc10u;

    // 0x29cc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29cc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29cc18: 0xc0a7320  jal         func_29CC80
    ctx->pc = 0x29CC18u;
    SET_GPR_U32(ctx, 31, 0x29CC20u);
    ctx->pc = 0x29CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC18u;
    // 0x29cc1c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC80u, 0x29CC18u, 0x29CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC20u;
label_29cc20:
    // 0x29cc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29cc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cc24: 0x3e00008  jr          $ra
    ctx->pc = 0x29CC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC24u;
        // 0x29cc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CC2Cu;
    // 0x29cc2c: 0x0  nop
    ctx->pc = 0x29cc2cu;
    // NOP
    // 0x29cc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29cc34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29cc38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29cc3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29cc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc40: 0xc0a7320  jal         func_29CC80
    ctx->pc = 0x29CC40u;
    SET_GPR_U32(ctx, 31, 0x29CC48u);
    ctx->pc = 0x29CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC40u;
    // 0x29cc44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC80u, 0x29CC40u, 0x29CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC48u;
label_29cc48:
    // 0x29cc48: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x29cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29cc4c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29CC4Cu;
    {
        const bool branch_taken_0x29cc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC4Cu;
        // 0x29cc50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc4c) {
            ctx->pc = 0x29CC6Cu;
            goto label_29cc6c;
        }
    }
    ctx->pc = 0x29CC54u;
    // 0x29cc54: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x29cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29cc58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cc5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29cc5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc60: 0xc0aa36a  jal         func_2A8DA8
    ctx->pc = 0x29CC60u;
    SET_GPR_U32(ctx, 31, 0x29CC68u);
    ctx->pc = 0x29CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC60u;
    // 0x29cc64: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8DA8u, 0x29CC60u, 0x29CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC68u;
label_29cc68:
    // 0x29cc68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29cc6c:
    // 0x29cc6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29cc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cc70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29cc70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cc74: 0x3e00008  jr          $ra
    ctx->pc = 0x29CC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC74u;
        // 0x29cc78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CC7Cu;
    // 0x29cc7c: 0x0  nop
    ctx->pc = 0x29cc7cu;
    // NOP
    if (ctx->pc == 0x29cc7cu) { ctx->pc = 0x29cc80u; }
}
