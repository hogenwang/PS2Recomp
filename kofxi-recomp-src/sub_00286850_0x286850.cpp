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

// Function: sub_00286850
// Address: 0x286850 - 0x2868d8
void sub_00286850_0x286850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286850_0x286850");
#endif

    switch (ctx->pc) {
        case 0x286880u: goto label_286880;
        case 0x286898u: goto label_286898;
        case 0x2868b0u: goto label_2868b0;
        case 0x2868c0u: goto label_2868c0;
        default: break;
    }

    ctx->pc = 0x286850u;

    // 0x286850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x286854: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28685c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28685cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286860: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x286860u;
    {
        const bool branch_taken_0x286860 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x286864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286860u;
        // 0x286864: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286860) {
            ctx->pc = 0x2868C0u;
            goto label_2868c0;
        }
    }
    ctx->pc = 0x286868u;
    // 0x286868: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x286868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28686c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x28686Cu;
    {
        const bool branch_taken_0x28686c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28686Cu;
        // 0x286870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28686c) {
            ctx->pc = 0x286898u;
            goto label_286898;
        }
    }
    ctx->pc = 0x286874u;
    // 0x286874: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x286874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286878: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x286878u;
    SET_GPR_U32(ctx, 31, 0x286880u);
    ctx->pc = 0x28687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286878u;
    // 0x28687c: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x286878u, 0x286880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286880u;
label_286880:
    // 0x286880: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x286880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x286884: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x286884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x286888: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286888u;
    {
        const bool branch_taken_0x286888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286888u;
        // 0x28688c: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286888) {
            ctx->pc = 0x2868A0u;
            goto label_2868a0;
        }
    }
    ctx->pc = 0x286890u;
    // 0x286890: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x286890u;
    SET_GPR_U32(ctx, 31, 0x286898u);
    ctx->pc = 0x286894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286890u;
    // 0x286894: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x286890u, 0x286898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286898u;
label_286898:
    // 0x286898: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x286898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28689c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x28689cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2868a0:
    // 0x2868a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2868a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2868a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868a8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2868A8u;
    SET_GPR_U32(ctx, 31, 0x2868B0u);
    ctx->pc = 0x2868ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2868A8u;
    // 0x2868ac: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2868A8u, 0x2868B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868B0u;
label_2868b0:
    // 0x2868b0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2868B0u;
    {
        const bool branch_taken_0x2868b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868B0u;
        // 0x2868b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868b0) {
            ctx->pc = 0x2868C4u;
            goto label_2868c4;
        }
    }
    ctx->pc = 0x2868B8u;
    // 0x2868b8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2868B8u;
    SET_GPR_U32(ctx, 31, 0x2868C0u);
    ctx->pc = 0x2868BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2868B8u;
    // 0x2868bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2868B8u, 0x2868C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868C0u;
label_2868c0:
    // 0x2868c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2868c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2868c4:
    // 0x2868c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2868c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2868c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2868c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2868cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2868CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2868D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868CCu;
        // 0x2868d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2868CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2868D4u;
    // 0x2868d4: 0x0  nop
    ctx->pc = 0x2868d4u;
    // NOP
    if (ctx->pc == 0x2868d4u) { ctx->pc = 0x2868d8u; }
}
