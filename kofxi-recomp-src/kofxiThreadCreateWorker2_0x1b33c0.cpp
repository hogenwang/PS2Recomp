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

// Function: kofxiThreadCreateWorker2
// Address: 0x1b33c0 - 0x1b3448
void kofxiThreadCreateWorker2_0x1b33c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadCreateWorker2_0x1b33c0");
#endif

    switch (ctx->pc) {
        case 0x1b3414u: goto label_1b3414;
        case 0x1b3428u: goto label_1b3428;
        case 0x1b3438u: goto label_1b3438;
        default: break;
    }

    ctx->pc = 0x1b33c0u;

    // 0x1b33c0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b33c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b33c4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b33c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b33c8: 0x8c47a928  lw          $a3, -0x56D8($v0)
    ctx->pc = 0x1b33c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945064)));
    // 0x1b33cc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b33d0: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b33d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b33d4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b33d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b33d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b33dc: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b33dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b33e0: 0x24634920  addiu       $v1, $v1, 0x4920
    ctx->pc = 0x1b33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18720));
    // 0x1b33e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b33e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33e8: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1b33e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1b33ec: 0x24a52cd8  addiu       $a1, $a1, 0x2CD8
    ctx->pc = 0x1b33ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11480));
    // 0x1b33f0: 0x2442d6f0  addiu       $v0, $v0, -0x2910
    ctx->pc = 0x1b33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956784));
    // 0x1b33f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b33f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b33f8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1b33f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1b33fc: 0x26103090  addiu       $s0, $s0, 0x3090
    ctx->pc = 0x1b33fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12432));
    // 0x1b3400: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1b3400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1b3404: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1b3404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1b3408: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x1b3408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x1b340c: 0xc043298  jal         func_10CA60
    ctx->pc = 0x1B340Cu;
    SET_GPR_U32(ctx, 31, 0x1B3414u);
    ctx->pc = 0x1B3410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B340Cu;
    // 0x1b3410: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x1B340Cu, 0x1B3414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3414u;
label_1b3414:
    // 0x1b3414: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b3414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b3418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b341c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3420: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x1B3420u;
    SET_GPR_U32(ctx, 31, 0x1B3428u);
    ctx->pc = 0x1B3424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3420u;
    // 0x1b3424: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x1B3420u, 0x1B3428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3428u;
label_1b3428:
    // 0x1b3428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b3428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b342c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b342cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3430: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B3430u;
    SET_GPR_U32(ctx, 31, 0x1B3438u);
    ctx->pc = 0x1B3434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3430u;
    // 0x1b3434: 0x8c45300c  lw          $a1, 0x300C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B3430u, 0x1B3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3438u;
label_1b3438:
    // 0x1b3438: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b3438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b343c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b343cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3440: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3440u;
        // 0x1b3444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3448u;
}
