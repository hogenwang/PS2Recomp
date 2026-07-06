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

// Function: sub_001F7C58
// Address: 0x1f7c58 - 0x1f7cb8
void sub_001F7C58_0x1f7c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7C58_0x1f7c58");
#endif

    switch (ctx->pc) {
        case 0x1f7ca8u: goto label_1f7ca8;
        default: break;
    }

    ctx->pc = 0x1f7c58u;

    // 0x1f7c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7c5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f7c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7c68: 0x8ca30a44  lw          $v1, 0xA44($a1)
    ctx->pc = 0x1f7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2628)));
    // 0x1f7c6c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F7C6Cu;
    {
        const bool branch_taken_0x1f7c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C6Cu;
        // 0x1f7c70: 0x24a60d88  addiu       $a2, $a1, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c6c) {
            ctx->pc = 0x1F7CACu;
            goto label_1f7cac;
        }
    }
    ctx->pc = 0x1F7C74u;
    // 0x1f7c74: 0x8ca30a20  lw          $v1, 0xA20($a1)
    ctx->pc = 0x1f7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2592)));
    // 0x1f7c78: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F7C78u;
    {
        const bool branch_taken_0x1f7c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c78) {
            ctx->pc = 0x1F7C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7C78u;
            // 0x1f7c7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7CB0u;
            goto label_1f7cb0;
        }
    }
    ctx->pc = 0x1F7C80u;
    // 0x1f7c80: 0x8cc302b0  lw          $v1, 0x2B0($a2)
    ctx->pc = 0x1f7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 688)));
    // 0x1f7c84: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7C84u;
    {
        const bool branch_taken_0x1f7c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c84) {
            ctx->pc = 0x1F7C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7C84u;
            // 0x1f7c88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7CB0u;
            goto label_1f7cb0;
        }
    }
    ctx->pc = 0x1F7C8Cu;
    // 0x1f7c8c: 0x8cc302cc  lw          $v1, 0x2CC($a2)
    ctx->pc = 0x1f7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 716)));
    // 0x1f7c90: 0x8ca50ac0  lw          $a1, 0xAC0($a1)
    ctx->pc = 0x1f7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2752)));
    // 0x1f7c94: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1f7c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f7c98: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7C98u;
    {
        const bool branch_taken_0x1f7c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c98) {
            ctx->pc = 0x1F7C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7C98u;
            // 0x1f7c9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7CB0u;
            goto label_1f7cb0;
        }
    }
    ctx->pc = 0x1F7CA0u;
    // 0x1f7ca0: 0xc07e0a4  jal         func_1F8290
    ctx->pc = 0x1F7CA0u;
    SET_GPR_U32(ctx, 31, 0x1F7CA8u);
    ctx->pc = 0x1F8290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8290u, 0x1F7CA0u, 0x1F7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7CA8u;
label_1f7ca8:
    // 0x1f7ca8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f7ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f7cac:
    // 0x1f7cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7cb0:
    // 0x1f7cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CB0u;
        // 0x1f7cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7CB8u;
}
