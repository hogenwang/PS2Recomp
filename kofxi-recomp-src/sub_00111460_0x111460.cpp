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

// Function: sub_00111460
// Address: 0x111460 - 0x1114d0
void sub_00111460_0x111460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111460_0x111460");
#endif

    switch (ctx->pc) {
        case 0x1114a0u: goto label_1114a0;
        case 0x1114b8u: goto label_1114b8;
        default: break;
    }

    ctx->pc = 0x111460u;

    // 0x111460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111464: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x111464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111468: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x111468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11146c: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11146cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x111470: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111474: 0x8e028748  lw          $v0, -0x78B8($s0)
    ctx->pc = 0x111474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936392)));
    // 0x111478: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x111478u;
    {
        const bool branch_taken_0x111478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111478u;
        // 0x11147c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111478) {
            ctx->pc = 0x1114C4u;
            goto label_1114c4;
        }
    }
    ctx->pc = 0x111480u;
    // 0x111480: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x111480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x111484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x111484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111488: 0x2442a7c0  addiu       $v0, $v0, -0x5840
    ctx->pc = 0x111488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944704));
    // 0x11148c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11148cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x111490: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x111490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x111494: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111498: 0xc043318  jal         func_10CC60
    ctx->pc = 0x111498u;
    SET_GPR_U32(ctx, 31, 0x1114A0u);
    ctx->pc = 0x11149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111498u;
    // 0x11149c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x111498u, 0x1114A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114A0u;
label_1114a0:
    // 0x1114a0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1114a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1114a4: 0xae028748  sw          $v0, -0x78B8($s0)
    ctx->pc = 0x1114a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936392), GPR_U32(ctx, 2));
    // 0x1114a8: 0x2463a7d0  addiu       $v1, $v1, -0x5830
    ctx->pc = 0x1114a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944720));
    // 0x1114ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1114acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114b0: 0xc043318  jal         func_10CC60
    ctx->pc = 0x1114B0u;
    SET_GPR_U32(ctx, 31, 0x1114B8u);
    ctx->pc = 0x1114B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114B0u;
    // 0x1114b4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x1114B0u, 0x1114B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114B8u;
label_1114b8:
    // 0x1114b8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1114b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1114bc: 0xac62874c  sw          $v0, -0x78B4($v1)
    ctx->pc = 0x1114bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936396), GPR_U32(ctx, 2));
    // 0x1114c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1114c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1114c4:
    // 0x1114c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1114c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1114c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1114C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1114CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114C8u;
        // 0x1114cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1114C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1114D0u;
}
