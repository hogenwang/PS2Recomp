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

// Function: sub_002302D8
// Address: 0x2302d8 - 0x230328
void sub_002302D8_0x2302d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002302D8_0x2302d8");
#endif

    switch (ctx->pc) {
        case 0x2302e8u: goto label_2302e8;
        default: break;
    }

    ctx->pc = 0x2302d8u;

    // 0x2302d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2302d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2302dc: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2302dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2302e0: 0x8ca3fa18  lw          $v1, -0x5E8($a1)
    ctx->pc = 0x2302e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965784)));
    // 0x2302e4: 0x0  nop
    ctx->pc = 0x2302e4u;
    // NOP
label_2302e8:
    // 0x2302e8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2302E8u;
    {
        const bool branch_taken_0x2302e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2302e8) {
            ctx->pc = 0x23031Cu;
            goto label_23031c;
        }
    }
    ctx->pc = 0x2302F0u;
    // 0x2302f0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2302f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x2302f4: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2302F4u;
    {
        const bool branch_taken_0x2302f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2302f4) {
            ctx->pc = 0x2302F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2302F4u;
            // 0x2302f8: 0x8c6300d0  lw          $v1, 0xD0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2302E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2302e8;
        }
    }
    ctx->pc = 0x2302FCu;
    // 0x2302fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2302FCu;
    {
        const bool branch_taken_0x2302fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2302fc) {
            ctx->pc = 0x23031Cu;
            goto label_23031c;
        }
    }
    ctx->pc = 0x230304u;
    // 0x230304: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x230304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x230308: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x230308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x23030c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23030Cu;
    {
        const bool branch_taken_0x23030c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23030Cu;
        // 0x230310: 0x8ca3fa18  lw          $v1, -0x5E8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23030c) {
            ctx->pc = 0x2302E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2302e8;
        }
    }
    ctx->pc = 0x230314u;
    // 0x230314: 0x3e00008  jr          $ra
    ctx->pc = 0x230314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230314u;
        // 0x230318: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23031Cu;
label_23031c:
    // 0x23031c: 0x3e00008  jr          $ra
    ctx->pc = 0x23031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23031Cu;
        // 0x230320: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230324u;
    // 0x230324: 0x0  nop
    ctx->pc = 0x230324u;
    // NOP
}
