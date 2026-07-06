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

// Function: sub_001EAC70
// Address: 0x1eac70 - 0x1eacc8
void sub_001EAC70_0x1eac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAC70_0x1eac70");
#endif

    switch (ctx->pc) {
        case 0x1eac70u: goto label_1eac70;
        case 0x1eac74u: goto label_1eac74;
        case 0x1eac78u: goto label_1eac78;
        case 0x1eac7cu: goto label_1eac7c;
        case 0x1eac80u: goto label_1eac80;
        case 0x1eac84u: goto label_1eac84;
        case 0x1eac88u: goto label_1eac88;
        case 0x1eac8cu: goto label_1eac8c;
        case 0x1eac90u: goto label_1eac90;
        case 0x1eac94u: goto label_1eac94;
        case 0x1eac98u: goto label_1eac98;
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eaca0u: goto label_1eaca0;
        case 0x1eaca4u: goto label_1eaca4;
        case 0x1eaca8u: goto label_1eaca8;
        case 0x1eacacu: goto label_1eacac;
        case 0x1eacb0u: goto label_1eacb0;
        case 0x1eacb4u: goto label_1eacb4;
        case 0x1eacb8u: goto label_1eacb8;
        case 0x1eacbcu: goto label_1eacbc;
        case 0x1eacc0u: goto label_1eacc0;
        case 0x1eacc4u: goto label_1eacc4;
        default: break;
    }

    ctx->pc = 0x1eac70u;

label_1eac70:
    // 0x1eac70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eac74:
    // 0x1eac74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1eac78:
    // 0x1eac78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eac78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eac7c:
    // 0x1eac7c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eac7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1eac80:
    // 0x1eac80: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x1eac80u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1eac84:
    // 0x1eac84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1eac88:
    // 0x1eac88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eac8c:
    // 0x1eac8c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1eac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1eac90:
    // 0x1eac90: 0x40f809  jalr        $v0
label_1eac94:
    if (ctx->pc == 0x1EAC94u) {
        ctx->pc = 0x1EAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC90u;
        // 0x1eac94: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC98u;
        goto label_1eac98;
    }
    ctx->pc = 0x1EAC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EAC98u);
        ctx->pc = 0x1EAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC90u;
        // 0x1eac94: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC90u, 0x1EAC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAC98u;
label_1eac98:
    // 0x1eac98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eac9c:
    // 0x1eac9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eaca0:
    // 0x1eaca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eaca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eaca4:
    // 0x1eaca4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1eaca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1eaca8:
    // 0x1eaca8: 0x40f809  jalr        $v0
label_1eacac:
    if (ctx->pc == 0x1EACACu) {
        ctx->pc = 0x1EACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACA8u;
        // 0x1eacac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EACB0u;
        goto label_1eacb0;
    }
    ctx->pc = 0x1EACA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EACB0u);
        ctx->pc = 0x1EACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACA8u;
        // 0x1eacac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EACA8u, 0x1EACB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EACB0u;
label_1eacb0:
    // 0x1eacb0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1eacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1eacb4:
    // 0x1eacb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eacb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eacb8:
    // 0x1eacb8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eacb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1eacbc:
    // 0x1eacbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eacbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eacc0:
    // 0x1eacc0: 0x3e00008  jr          $ra
label_1eacc4:
    if (ctx->pc == 0x1EACC4u) {
        ctx->pc = 0x1EACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC0u;
        // 0x1eacc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EACC8u;
        goto label_fallthrough_0x1eacc0;
    }
    ctx->pc = 0x1EACC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC0u;
        // 0x1eacc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EACC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eacc0:
    ctx->pc = 0x1EACC8u;
}
