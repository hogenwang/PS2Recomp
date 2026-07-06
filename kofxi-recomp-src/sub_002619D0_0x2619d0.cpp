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

// Function: sub_002619D0
// Address: 0x2619d0 - 0x261a30
void sub_002619D0_0x2619d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002619D0_0x2619d0");
#endif

    switch (ctx->pc) {
        case 0x2619e0u: goto label_2619e0;
        case 0x2619f0u: goto label_2619f0;
        default: break;
    }

    ctx->pc = 0x2619d0u;

    // 0x2619d0: 0x18800011  blez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2619D0u;
    {
        const bool branch_taken_0x2619d0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2619D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619D0u;
        // 0x2619d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619d0) {
            ctx->pc = 0x261A18u;
            goto label_261a18;
        }
    }
    ctx->pc = 0x2619D8u;
    // 0x2619d8: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x2619d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x2619dc: 0x8ce2d770  lw          $v0, -0x2890($a3)
    ctx->pc = 0x2619dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956912)));
label_2619e0:
    // 0x2619e0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2619E0u;
    {
        const bool branch_taken_0x2619e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2619E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619E0u;
        // 0x2619e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619e0) {
            ctx->pc = 0x261A20u;
            goto label_261a20;
        }
    }
    ctx->pc = 0x2619E8u;
    // 0x2619e8: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2619e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2619ec: 0x0  nop
    ctx->pc = 0x2619ecu;
    // NOP
label_2619f0:
    // 0x2619f0: 0x50460006  beql        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2619F0u;
    {
        const bool branch_taken_0x2619f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2619f0) {
            ctx->pc = 0x2619F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2619F0u;
            // 0x2619f4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261A0Cu;
            goto label_261a0c;
        }
    }
    ctx->pc = 0x2619F8u;
    // 0x2619f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2619f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2619fc: 0x5460fffc  bnel        $v1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2619FCu;
    {
        const bool branch_taken_0x2619fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2619fc) {
            ctx->pc = 0x261A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2619FCu;
            // 0x261a00: 0x8c6200a4  lw          $v0, 0xA4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2619F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2619f0;
        }
    }
    ctx->pc = 0x261A04u;
    // 0x261a04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x261A04u;
    {
        const bool branch_taken_0x261a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A04u;
        // 0x261a08: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a04) {
            ctx->pc = 0x261A24u;
            goto label_261a24;
        }
    }
    ctx->pc = 0x261A0Cu;
label_261a0c:
    // 0x261a0c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x261a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x261a10: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x261A10u;
    {
        const bool branch_taken_0x261a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A10u;
        // 0x261a14: 0x8ce2d770  lw          $v0, -0x2890($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a10) {
            ctx->pc = 0x2619E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2619e0;
        }
    }
    ctx->pc = 0x261A18u;
label_261a18:
    // 0x261a18: 0x3e00008  jr          $ra
    ctx->pc = 0x261A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A18u;
        // 0x261a1c: 0x2402ffe5  addiu       $v0, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261A20u;
label_261a20:
    // 0x261a20: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x261a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_261a24:
    // 0x261a24: 0x3e00008  jr          $ra
    ctx->pc = 0x261A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A24u;
        // 0x261a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261A2Cu;
    // 0x261a2c: 0x0  nop
    ctx->pc = 0x261a2cu;
    // NOP
}
