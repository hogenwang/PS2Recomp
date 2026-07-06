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

// Function: sub_0020DA00
// Address: 0x20da00 - 0x20da70
void sub_0020DA00_0x20da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DA00_0x20da00");
#endif

    switch (ctx->pc) {
        case 0x20da60u: goto label_20da60;
        default: break;
    }

    ctx->pc = 0x20da00u;

    // 0x20da00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20da04: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20da04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20da08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20da08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20da0c: 0x8c63a4b0  lw          $v1, -0x5B50($v1)
    ctx->pc = 0x20da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943920)));
    // 0x20da10: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x20DA10u;
    {
        const bool branch_taken_0x20da10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA10u;
        // 0x20da14: 0x100602d  daddu       $t4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da10) {
            ctx->pc = 0x20DA60u;
            goto label_20da60;
        }
    }
    ctx->pc = 0x20DA18u;
    // 0x20da18: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x20da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x20da1c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x20da1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da20: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x20da20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da24: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x20da24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20da28: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x20da28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x20da2c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20da30: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x20da30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x20da34: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x20da34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da38: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x20da38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da3c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x20da3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20da40: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x20da40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x20da44: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20da44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20da48: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x20da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x20da4c: 0x8c63a4a8  lw          $v1, -0x5B58($v1)
    ctx->pc = 0x20da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943912)));
    // 0x20da50: 0x8c42a4a0  lw          $v0, -0x5B60($v0)
    ctx->pc = 0x20da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943904)));
    // 0x20da54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20da54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20da58: 0xc082cfc  jal         func_20B3F0
    ctx->pc = 0x20DA58u;
    SET_GPR_U32(ctx, 31, 0x20DA60u);
    ctx->pc = 0x20DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA58u;
    // 0x20da5c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3F0u, 0x20DA58u, 0x20DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA60u;
label_20da60:
    // 0x20da60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20da60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20da64: 0x3e00008  jr          $ra
    ctx->pc = 0x20DA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA64u;
        // 0x20da68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DA6Cu;
    // 0x20da6c: 0x0  nop
    ctx->pc = 0x20da6cu;
    // NOP
}
