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

// Function: sub_001DD110
// Address: 0x1dd110 - 0x1dd160
void sub_001DD110_0x1dd110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD110_0x1dd110");
#endif

    switch (ctx->pc) {
        case 0x1dd14cu: goto label_1dd14c;
        default: break;
    }

    ctx->pc = 0x1dd110u;

    // 0x1dd110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd11c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD11Cu;
    {
        const bool branch_taken_0x1dd11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD11Cu;
        // 0x1dd120: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd11c) {
            ctx->pc = 0x1DD150u;
            goto label_1dd150;
        }
    }
    ctx->pc = 0x1DD124u;
    // 0x1dd124: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DD124u;
    {
        const bool branch_taken_0x1dd124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD124u;
        // 0x1dd128: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd124) {
            ctx->pc = 0x1DD150u;
            goto label_1dd150;
        }
    }
    ctx->pc = 0x1DD12Cu;
    // 0x1dd12c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd130: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD130u;
    {
        const bool branch_taken_0x1dd130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD130u;
        // 0x1dd134: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd130) {
            ctx->pc = 0x1DD150u;
            goto label_1dd150;
        }
    }
    ctx->pc = 0x1DD138u;
    // 0x1dd138: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD138u;
    {
        const bool branch_taken_0x1dd138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD138u;
        // 0x1dd13c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd138) {
            ctx->pc = 0x1DD150u;
            goto label_1dd150;
        }
    }
    ctx->pc = 0x1DD140u;
    // 0x1dd140: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dd140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dd144: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DD144u;
    SET_GPR_U32(ctx, 31, 0x1DD14Cu);
    ctx->pc = 0x1DD148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD144u;
    // 0x1dd148: 0x2484c390  addiu       $a0, $a0, -0x3C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DD144u, 0x1DD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD14Cu;
label_1dd14c:
    // 0x1dd14c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1dd14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dd150:
    // 0x1dd150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd154: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1dd154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd158: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD158u;
        // 0x1dd15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD160u;
}
