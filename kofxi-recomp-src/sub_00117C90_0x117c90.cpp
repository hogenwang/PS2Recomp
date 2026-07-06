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

// Function: sub_00117C90
// Address: 0x117c90 - 0x117d18
void sub_00117C90_0x117c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117C90_0x117c90");
#endif

    switch (ctx->pc) {
        case 0x117cc0u: goto label_117cc0;
        default: break;
    }

    ctx->pc = 0x117c90u;

    // 0x117c90: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x117c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c94: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x117c94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x117c98: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x117c98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x117c9c: 0x25259d48  addiu       $a1, $t1, -0x62B8
    ctx->pc = 0x117c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942024));
    // 0x117ca0: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x117ca0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x117ca4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117ca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ca8: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x117ca8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x117cac: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x117cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x117cb0: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x117cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x117cb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117CB4u;
    {
        const bool branch_taken_0x117cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CB4u;
        // 0x117cb8: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cb4) {
            ctx->pc = 0x117CC4u;
            goto label_117cc4;
        }
    }
    ctx->pc = 0x117CBCu;
    // 0x117cbc: 0x0  nop
    ctx->pc = 0x117cbcu;
    // NOP
label_117cc0:
    // 0x117cc0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x117cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_117cc4:
    // 0x117cc4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x117CC4u;
    {
        const bool branch_taken_0x117cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x117cc4) {
            ctx->pc = 0x117CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117CC4u;
            // 0x117cc8: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117CF0u;
            goto label_117cf0;
        }
    }
    ctx->pc = 0x117CCCu;
    // 0x117ccc: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x117cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x117cd0: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x117cd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x117cd4: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x117cd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x117cd8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x117cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x117cdc: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x117cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x117ce0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x117ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x117ce4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x117CE4u;
    {
        const bool branch_taken_0x117ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117ce4) {
            ctx->pc = 0x117CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117CE4u;
            // 0x117ce8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_117cc0;
        }
    }
    ctx->pc = 0x117CECu;
    // 0x117cec: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x117cecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_117cf0:
    // 0x117cf0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x117CF0u;
    {
        const bool branch_taken_0x117cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CF0u;
        // 0x117cf4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cf0) {
            ctx->pc = 0x117CFCu;
            goto label_117cfc;
        }
    }
    ctx->pc = 0x117CF8u;
    // 0x117cf8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x117cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_117cfc:
    // 0x117cfc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117CFCu;
    {
        const bool branch_taken_0x117cfc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CFCu;
        // 0x117d00: 0x25229d48  addiu       $v0, $t1, -0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cfc) {
            ctx->pc = 0x117D0Cu;
            goto label_117d0c;
        }
    }
    ctx->pc = 0x117D04u;
    // 0x117d04: 0x3e00008  jr          $ra
    ctx->pc = 0x117D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D04u;
        // 0x117d08: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D0Cu;
label_117d0c:
    // 0x117d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x117D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D0Cu;
        // 0x117d10: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D14u;
    // 0x117d14: 0x0  nop
    ctx->pc = 0x117d14u;
    // NOP
    if (ctx->pc == 0x117d14u) { ctx->pc = 0x117d18u; }
}
