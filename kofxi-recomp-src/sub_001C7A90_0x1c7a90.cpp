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

// Function: sub_001C7A90
// Address: 0x1c7a90 - 0x1c7ac0
void sub_001C7A90_0x1c7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7A90_0x1c7a90");
#endif

    switch (ctx->pc) {
        case 0x1c7a90u: goto label_1c7a90;
        case 0x1c7a94u: goto label_1c7a94;
        case 0x1c7a98u: goto label_1c7a98;
        case 0x1c7a9cu: goto label_1c7a9c;
        case 0x1c7aa0u: goto label_1c7aa0;
        case 0x1c7aa4u: goto label_1c7aa4;
        case 0x1c7aa8u: goto label_1c7aa8;
        case 0x1c7aacu: goto label_1c7aac;
        case 0x1c7ab0u: goto label_1c7ab0;
        case 0x1c7ab4u: goto label_1c7ab4;
        case 0x1c7ab8u: goto label_1c7ab8;
        case 0x1c7abcu: goto label_1c7abc;
        default: break;
    }

    ctx->pc = 0x1c7a90u;

label_1c7a90:
    // 0x1c7a90: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c7a94:
    // 0x1c7a94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7a98:
    // 0x1c7a98: 0x8c43436c  lw          $v1, 0x436C($v0)
    ctx->pc = 0x1c7a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17260)));
label_1c7a9c:
    // 0x1c7a9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c7a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7aa0:
    // 0x1c7aa0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c7aa4:
    if (ctx->pc == 0x1C7AA4u) {
        ctx->pc = 0x1C7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AA0u;
        // 0x1c7aa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AA8u;
        goto label_1c7aa8;
    }
    ctx->pc = 0x1C7AA0u;
    {
        const bool branch_taken_0x1c7aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AA0u;
        // 0x1c7aa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7aa0) {
            ctx->pc = 0x1C7AB4u;
            goto label_1c7ab4;
        }
    }
    ctx->pc = 0x1C7AA8u;
label_1c7aa8:
    // 0x1c7aa8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c7aac:
    // 0x1c7aac: 0x60f809  jalr        $v1
label_1c7ab0:
    if (ctx->pc == 0x1C7AB0u) {
        ctx->pc = 0x1C7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AACu;
        // 0x1c7ab0: 0x8c444370  lw          $a0, 0x4370($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AB4u;
        goto label_1c7ab4;
    }
    ctx->pc = 0x1C7AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C7AB4u);
        ctx->pc = 0x1C7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AACu;
        // 0x1c7ab0: 0x8c444370  lw          $a0, 0x4370($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7AACu, 0x1C7AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7AB4u;
label_1c7ab4:
    // 0x1c7ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7ab8:
    // 0x1c7ab8: 0x3e00008  jr          $ra
label_1c7abc:
    if (ctx->pc == 0x1C7ABCu) {
        ctx->pc = 0x1C7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AB8u;
        // 0x1c7abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AC0u;
        goto label_fallthrough_0x1c7ab8;
    }
    ctx->pc = 0x1C7AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AB8u;
        // 0x1c7abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c7ab8:
    ctx->pc = 0x1C7AC0u;
}
