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

// Function: sub_00189A50
// Address: 0x189a50 - 0x189aa0
void sub_00189A50_0x189a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189A50_0x189a50");
#endif

    ctx->pc = 0x189a50u;

    // 0x189a50: 0x90830281  lbu         $v1, 0x281($a0)
    ctx->pc = 0x189a50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 641)));
    // 0x189a54: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x189a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x189a58: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x189A58u;
    {
        const bool branch_taken_0x189a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a58) {
            ctx->pc = 0x189A98u;
            goto label_189a98;
        }
    }
    ctx->pc = 0x189A60u;
    // 0x189a60: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x189a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x189a64: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x189a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x189a68: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x189A68u;
    {
        const bool branch_taken_0x189a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a68) {
            ctx->pc = 0x189A98u;
            goto label_189a98;
        }
    }
    ctx->pc = 0x189A70u;
    // 0x189a70: 0x8c850200  lw          $a1, 0x200($a0)
    ctx->pc = 0x189a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x189a74: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x189A74u;
    {
        const bool branch_taken_0x189a74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a74) {
            ctx->pc = 0x189A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189A74u;
            // 0x189a78: 0xa0800204  sb          $zero, 0x204($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 516), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189A8Cu;
            goto label_189a8c;
        }
    }
    ctx->pc = 0x189A7Cu;
    // 0x189a7c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x189a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x189a80: 0xac830200  sw          $v1, 0x200($a0)
    ctx->pc = 0x189a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 3));
    // 0x189a84: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x189a84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x189a88: 0xa0830204  sb          $v1, 0x204($a0)
    ctx->pc = 0x189a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 516), (uint8_t)GPR_U32(ctx, 3));
label_189a8c:
    // 0x189a8c: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x189a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x189a90: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x189a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x189a94: 0xac830498  sw          $v1, 0x498($a0)
    ctx->pc = 0x189a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
label_189a98:
    // 0x189a98: 0x3e00008  jr          $ra
    ctx->pc = 0x189A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189AA0u;
}
