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

// Function: sub_00283B30
// Address: 0x283b30 - 0x283b70
void sub_00283B30_0x283b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283B30_0x283b30");
#endif

    switch (ctx->pc) {
        case 0x283b3cu: goto label_283b3c;
        default: break;
    }

    ctx->pc = 0x283b30u;

    // 0x283b30: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x283b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x283b34: 0x50650003  beql        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283B34u;
    {
        const bool branch_taken_0x283b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x283b34) {
            ctx->pc = 0x283B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283B34u;
            // 0x283b38: 0x90840014  lbu         $a0, 0x14($a0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283B44u;
            goto label_283b44;
        }
    }
    ctx->pc = 0x283B3Cu;
label_283b3c:
    // 0x283b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x283B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B3Cu;
        // 0x283b40: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283B44u;
label_283b44:
    // 0x283b44: 0x308200c0  andi        $v0, $a0, 0xC0
    ctx->pc = 0x283b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
    // 0x283b48: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x283B48u;
    {
        const bool branch_taken_0x283b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B48u;
        // 0x283b4c: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b48) {
            ctx->pc = 0x283B3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283b3c;
        }
    }
    ctx->pc = 0x283B50u;
    // 0x283b50: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x283b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x283b54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283b58: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x283b58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x283b5c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x283b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x283b60: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x283b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x283b64: 0x3e00008  jr          $ra
    ctx->pc = 0x283B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B64u;
        // 0x283b68: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283B6Cu;
    // 0x283b6c: 0x0  nop
    ctx->pc = 0x283b6cu;
    // NOP
}
