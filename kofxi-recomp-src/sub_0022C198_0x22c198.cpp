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

// Function: sub_0022C198
// Address: 0x22c198 - 0x22c1f8
void sub_0022C198_0x22c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C198_0x22c198");
#endif

    switch (ctx->pc) {
        case 0x22c1b0u: goto label_22c1b0;
        default: break;
    }

    ctx->pc = 0x22c198u;

    // 0x22c198: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x22c198u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c19c: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x22C19Cu;
    {
        const bool branch_taken_0x22c19c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C19Cu;
        // 0x22c1a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c19c) {
            ctx->pc = 0x22C1F0u;
            goto label_22c1f0;
        }
    }
    ctx->pc = 0x22C1A4u;
    // 0x22c1a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22c1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1a8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x22c1a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1ac: 0x0  nop
    ctx->pc = 0x22c1acu;
    // NOP
label_22c1b0:
    // 0x22c1b0: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x22c1b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x22c1b4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x22c1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x22c1b8: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x22c1b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x22c1bc: 0x12a302b  sltu        $a2, $t1, $t2
    ctx->pc = 0x22c1bcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x22c1c0: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x22c1c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x22c1c4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22c1c8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x22c1c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22c1cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22c1d0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x22c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22c1d4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x22c1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x22c1d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22c1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22c1dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22c1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22c1e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c1e4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x22c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x22c1e8: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x22C1E8u;
    {
        const bool branch_taken_0x22c1e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1E8u;
        // 0x22c1ec: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1e8) {
            ctx->pc = 0x22C1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c1b0;
        }
    }
    ctx->pc = 0x22C1F0u;
label_22c1f0:
    // 0x22c1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x22C1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C1F8u;
}
