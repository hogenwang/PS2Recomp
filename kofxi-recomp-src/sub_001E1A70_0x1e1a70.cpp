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

// Function: sub_001E1A70
// Address: 0x1e1a70 - 0x1e1ac8
void sub_001E1A70_0x1e1a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1A70_0x1e1a70");
#endif

    switch (ctx->pc) {
        case 0x1e1a94u: goto label_1e1a94;
        default: break;
    }

    ctx->pc = 0x1e1a70u;

    // 0x1e1a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1a78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e1a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e1a7c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1e1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1e1a80: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x1e1a80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e1a84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E1A84u;
    {
        const bool branch_taken_0x1e1a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A84u;
        // 0x1e1a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a84) {
            ctx->pc = 0x1E1AB8u;
            goto label_1e1ab8;
        }
    }
    ctx->pc = 0x1E1A8Cu;
    // 0x1e1a8c: 0xc079fb2  jal         func_1E7EC8
    ctx->pc = 0x1E1A8Cu;
    SET_GPR_U32(ctx, 31, 0x1E1A94u);
    ctx->pc = 0x1E7EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EC8u, 0x1E1A8Cu, 0x1E1A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A94u;
label_1e1a94:
    // 0x1e1a94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1a98: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1A98u;
    {
        const bool branch_taken_0x1e1a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1a98) {
            ctx->pc = 0x1E1A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1A98u;
            // 0x1e1a9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1ABCu;
            goto label_1e1abc;
        }
    }
    ctx->pc = 0x1E1AA0u;
    // 0x1e1aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1aa8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1aac: 0x807e55a  j           func_1F9568
    ctx->pc = 0x1E1AACu;
    ctx->pc = 0x1E1AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AACu;
    // 0x1e1ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9568u;
    sub_001F9568_0x1f9568(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1AB4u;
    // 0x1e1ab4: 0x0  nop
    ctx->pc = 0x1e1ab4u;
    // NOP
label_1e1ab8:
    // 0x1e1ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1abc:
    // 0x1e1abc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AC0u;
        // 0x1e1ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1AC8u;
}
