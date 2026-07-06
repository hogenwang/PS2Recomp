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

// Function: sub_00353C00
// Address: 0x353c00 - 0x353c40
void sub_00353C00_0x353c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353C00_0x353c00");
#endif

    switch (ctx->pc) {
        case 0x353c0cu: goto label_353c0c;
        default: break;
    }

    ctx->pc = 0x353c00u;

    // 0x353c00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x353c04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c08: 0x2463ec50  addiu       $v1, $v1, -0x13B0
    ctx->pc = 0x353c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962256));
label_353c0c:
    // 0x353c0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x353c0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353c10: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x353C10u;
    {
        const bool branch_taken_0x353c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353c10) {
            ctx->pc = 0x353C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353C10u;
            // 0x353c14: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353C20u;
            goto label_353c20;
        }
    }
    ctx->pc = 0x353C18u;
    // 0x353c18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x353C18u;
    {
        const bool branch_taken_0x353c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C18u;
        // 0x353c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c18) {
            ctx->pc = 0x353C30u;
            goto label_353c30;
        }
    }
    ctx->pc = 0x353C20u;
label_353c20:
    // 0x353c20: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x353c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x353c24: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x353C24u;
    {
        const bool branch_taken_0x353c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C24u;
        // 0x353c28: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c24) {
            ctx->pc = 0x353C0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_353c0c;
        }
    }
    ctx->pc = 0x353C2Cu;
    // 0x353c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353c30:
    // 0x353c30: 0x3e00008  jr          $ra
    ctx->pc = 0x353C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353C38u;
    // 0x353c38: 0x0  nop
    ctx->pc = 0x353c38u;
    // NOP
    // 0x353c3c: 0x0  nop
    ctx->pc = 0x353c3cu;
    // NOP
    if (ctx->pc == 0x353c3cu) { ctx->pc = 0x353c40u; }
}
