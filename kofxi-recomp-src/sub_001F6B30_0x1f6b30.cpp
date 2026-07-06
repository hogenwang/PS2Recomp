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

// Function: sub_001F6B30
// Address: 0x1f6b30 - 0x1f6b88
void sub_001F6B30_0x1f6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6B30_0x1f6b30");
#endif

    switch (ctx->pc) {
        case 0x1f6b68u: goto label_1f6b68;
        default: break;
    }

    ctx->pc = 0x1f6b30u;

    // 0x1f6b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6b38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6b3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f6b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6b44: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f6b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6b48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f6b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f6b4c: 0x8c842018  lw          $a0, 0x2018($a0)
    ctx->pc = 0x1f6b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f6b50: 0x24901128  addiu       $s0, $a0, 0x1128
    ctx->pc = 0x1f6b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x1f6b54: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f6b58: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6B58u;
    {
        const bool branch_taken_0x1f6b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1F6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B58u;
        // 0x1f6b5c: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b58) {
            ctx->pc = 0x1F6B70u;
            goto label_1f6b70;
        }
    }
    ctx->pc = 0x1F6B60u;
    // 0x1f6b60: 0xc07d910  jal         func_1F6440
    ctx->pc = 0x1F6B60u;
    SET_GPR_U32(ctx, 31, 0x1F6B68u);
    ctx->pc = 0x1F6440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6440u, 0x1F6B60u, 0x1F6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B68u;
label_1f6b68:
    // 0x1f6b68: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x1f6b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x1f6b6c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x1f6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_1f6b70:
    // 0x1f6b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6b78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6b7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f6b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B80u;
        // 0x1f6b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B88u;
}
