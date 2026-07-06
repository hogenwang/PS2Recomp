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

// Function: kofxiThreadCreateWorker4
// Address: 0x1b34d0 - 0x1b3568
void kofxiThreadCreateWorker4_0x1b34d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadCreateWorker4_0x1b34d0");
#endif

    switch (ctx->pc) {
        case 0x1b3524u: goto label_1b3524;
        case 0x1b3538u: goto label_1b3538;
        case 0x1b3548u: goto label_1b3548;
        case 0x1b3554u: goto label_1b3554;
        default: break;
    }

    ctx->pc = 0x1b34d0u;

    // 0x1b34d0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b34d4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b34d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b34d8: 0x8c47a928  lw          $a3, -0x56D8($v0)
    ctx->pc = 0x1b34d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945064)));
    // 0x1b34dc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b34e0: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b34e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b34e4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b34e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b34e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b34ec: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b34ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b34f0: 0x24636920  addiu       $v1, $v1, 0x6920
    ctx->pc = 0x1b34f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26912));
    // 0x1b34f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b34f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34f8: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x1b34f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1b34fc: 0x24a52ed0  addiu       $a1, $a1, 0x2ED0
    ctx->pc = 0x1b34fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11984));
    // 0x1b3500: 0x2442d6f0  addiu       $v0, $v0, -0x2910
    ctx->pc = 0x1b3500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956784));
    // 0x1b3504: 0x2610309c  addiu       $s0, $s0, 0x309C
    ctx->pc = 0x1b3504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12444));
    // 0x1b3508: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b3508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b350c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1b350cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1b3510: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1b3510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1b3514: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1b3514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1b3518: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x1b3518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x1b351c: 0xc043298  jal         func_10CA60
    ctx->pc = 0x1B351Cu;
    SET_GPR_U32(ctx, 31, 0x1B3524u);
    ctx->pc = 0x1B3520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B351Cu;
    // 0x1b3520: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x1B351Cu, 0x1B3524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3524u;
label_1b3524:
    // 0x1b3524: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b3524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b3528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b352c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3530: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x1B3530u;
    SET_GPR_U32(ctx, 31, 0x1B3538u);
    ctx->pc = 0x1B3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3530u;
    // 0x1b3534: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x1B3530u, 0x1B3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3538u;
label_1b3538:
    // 0x1b3538: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b353c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b353cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3540: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B3540u;
    SET_GPR_U32(ctx, 31, 0x1B3548u);
    ctx->pc = 0x1B3544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3540u;
    // 0x1b3544: 0x8c453018  lw          $a1, 0x3018($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B3540u, 0x1B3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3548u;
label_1b3548:
    // 0x1b3548: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b3548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b354c: 0xc06cc80  jal         func_1B3200
    ctx->pc = 0x1B354Cu;
    SET_GPR_U32(ctx, 31, 0x1B3554u);
    ctx->pc = 0x1B3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3200u, 0x1B354Cu, 0x1B3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3554u;
label_1b3554:
    // 0x1b3554: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b3554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3558: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b3558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b355c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b355cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3560: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3560u;
        // 0x1b3564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3568u;
}
