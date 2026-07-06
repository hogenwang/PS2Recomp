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

// Function: sub_0022D780
// Address: 0x22d780 - 0x22d7f8
void sub_0022D780_0x22d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D780_0x22d780");
#endif

    switch (ctx->pc) {
        case 0x22d7c4u: goto label_22d7c4;
        case 0x22d7d4u: goto label_22d7d4;
        case 0x22d7d8u: goto label_22d7d8;
        default: break;
    }

    ctx->pc = 0x22d780u;

    // 0x22d780: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22d784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d788: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x22d788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x22d78c: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x22d78cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x22d790: 0x2610a7c0  addiu       $s0, $s0, -0x5840
    ctx->pc = 0x22d790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944704));
    // 0x22d794: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x22d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x22d798: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x22d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x22d79c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22d79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22d7a4: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x22d7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x22d7a8: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x22d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x22d7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7b0: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x22d7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x22d7b4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x22d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22d7b8: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x22d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x22d7bc: 0xc043e16  jal         func_10F858
    ctx->pc = 0x22D7BCu;
    SET_GPR_U32(ctx, 31, 0x22D7C4u);
    ctx->pc = 0x22D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D7BCu;
    // 0x22d7c0: 0xffab0098  sd          $t3, 0x98($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F858u, 0x22D7BCu, 0x22D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7C4u;
label_22d7c4:
    // 0x22d7c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22d7c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7cc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x22D7CCu;
    SET_GPR_U32(ctx, 31, 0x22D7D4u);
    ctx->pc = 0x22D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D7CCu;
    // 0x22d7d0: 0x24844630  addiu       $a0, $a0, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x22D7CCu, 0x22D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7D4u;
label_22d7d4:
    // 0x22d7d4: 0x0  nop
    ctx->pc = 0x22d7d4u;
    // NOP
label_22d7d8:
    // 0x22d7d8: 0x0  nop
    ctx->pc = 0x22d7d8u;
    // NOP
    // 0x22d7dc: 0x0  nop
    ctx->pc = 0x22d7dcu;
    // NOP
    // 0x22d7e0: 0x0  nop
    ctx->pc = 0x22d7e0u;
    // NOP
    // 0x22d7e4: 0x0  nop
    ctx->pc = 0x22d7e4u;
    // NOP
    // 0x22d7e8: 0x0  nop
    ctx->pc = 0x22d7e8u;
    // NOP
    // 0x22d7ec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x22D7ECu;
    {
        const bool branch_taken_0x22d7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7ec) {
            ctx->pc = 0x22D7D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d7d8;
        }
    }
    ctx->pc = 0x22D7F4u;
    // 0x22d7f4: 0x0  nop
    ctx->pc = 0x22d7f4u;
    // NOP
}
