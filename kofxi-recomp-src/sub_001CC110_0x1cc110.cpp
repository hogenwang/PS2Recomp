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

// Function: sub_001CC110
// Address: 0x1cc110 - 0x1cc160
void sub_001CC110_0x1cc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC110_0x1cc110");
#endif

    ctx->pc = 0x1cc110u;

    // 0x1cc110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc114: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cc114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cc118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc11c: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x1cc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
    // 0x1cc120: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cc120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc124: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cc124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cc128: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC128u;
    {
        const bool branch_taken_0x1cc128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC128u;
        // 0x1cc12c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc128) {
            ctx->pc = 0x1CC150u;
            goto label_1cc150;
        }
    }
    ctx->pc = 0x1CC130u;
    // 0x1cc130: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1cc130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1cc134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc13c: 0x2484cc08  addiu       $a0, $a0, -0x33F8
    ctx->pc = 0x1cc13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953992));
    // 0x1cc140: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x1cc140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x1cc144: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1CC144u;
    ctx->pc = 0x1CC148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC144u;
    // 0x1cc148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC14Cu;
    // 0x1cc14c: 0x0  nop
    ctx->pc = 0x1cc14cu;
    // NOP
label_1cc150:
    // 0x1cc150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc154: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC154u;
        // 0x1cc158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC15Cu;
    // 0x1cc15c: 0x0  nop
    ctx->pc = 0x1cc15cu;
    // NOP
}
