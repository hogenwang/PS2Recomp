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

// Function: sub_001C3B30
// Address: 0x1c3b30 - 0x1c3b70
void sub_001C3B30_0x1c3b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3B30_0x1c3b30");
#endif

    switch (ctx->pc) {
        case 0x1c3b44u: goto label_1c3b44;
        default: break;
    }

    ctx->pc = 0x1c3b30u;

    // 0x1c3b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3b38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c3b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c3b3c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C3B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B44u);
    ctx->pc = 0x1C3B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B3Cu;
    // 0x1c3b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C3B3Cu, 0x1C3B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B44u;
label_1c3b44:
    // 0x1c3b44: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1c3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c3b48: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3B48u;
    {
        const bool branch_taken_0x1c3b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B48u;
        // 0x1c3b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b48) {
            ctx->pc = 0x1C3B5Cu;
            goto label_1c3b5c;
        }
    }
    ctx->pc = 0x1C3B50u;
    // 0x1c3b50: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x1c3b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c3b54: 0x3842002e  xori        $v0, $v0, 0x2E
    ctx->pc = 0x1c3b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)46);
    // 0x1c3b58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c3b5c:
    // 0x1c3b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3b60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c3b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B64u;
        // 0x1c3b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3B6Cu;
    // 0x1c3b6c: 0x0  nop
    ctx->pc = 0x1c3b6cu;
    // NOP
}
