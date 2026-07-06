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

// Function: sub_001D9CD0
// Address: 0x1d9cd0 - 0x1d9d30
void sub_001D9CD0_0x1d9cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9CD0_0x1d9cd0");
#endif

    switch (ctx->pc) {
        case 0x1d9ce4u: goto label_1d9ce4;
        case 0x1d9d20u: goto label_1d9d20;
        default: break;
    }

    ctx->pc = 0x1d9cd0u;

    // 0x1d9cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9cdc: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1D9CDCu;
    SET_GPR_U32(ctx, 31, 0x1D9CE4u);
    ctx->pc = 0x1D9CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CDCu;
    // 0x1d9ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC3B8u, 0x1D9CDCu, 0x1D9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CE4u;
label_1d9ce4:
    // 0x1d9ce4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d9ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d9ce8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cec: 0x34a50211  ori         $a1, $a1, 0x211
    ctx->pc = 0x1d9cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)529);
    // 0x1d9cf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9CF0u;
    {
        const bool branch_taken_0x1d9cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CF0u;
        // 0x1d9cf4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9cf0) {
            ctx->pc = 0x1D9D08u;
            goto label_1d9d08;
        }
    }
    ctx->pc = 0x1D9CF8u;
    // 0x1d9cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9cfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d00: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1D9D00u;
    ctx->pc = 0x1D9D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D00u;
    // 0x1d9d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9D08u;
label_1d9d08:
    // 0x1d9d08: 0x8e030378  lw          $v1, 0x378($s0)
    ctx->pc = 0x1d9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x1d9d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d10: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9D10u;
    {
        const bool branch_taken_0x1d9d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1D9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D10u;
        // 0x1d9d14: 0xae020424  sw          $v0, 0x424($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d10) {
            ctx->pc = 0x1D9D20u;
            goto label_1d9d20;
        }
    }
    ctx->pc = 0x1D9D18u;
    // 0x1d9d18: 0xc0771ae  jal         func_1DC6B8
    ctx->pc = 0x1D9D18u;
    SET_GPR_U32(ctx, 31, 0x1D9D20u);
    ctx->pc = 0x1D9D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D18u;
    // 0x1d9d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC6B8u, 0x1D9D18u, 0x1D9D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D20u;
label_1d9d20:
    // 0x1d9d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d28: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D28u;
        // 0x1d9d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D30u;
}
