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

// Function: sub_001DE650
// Address: 0x1de650 - 0x1de6d8
void sub_001DE650_0x1de650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE650_0x1de650");
#endif

    switch (ctx->pc) {
        case 0x1de67cu: goto label_1de67c;
        case 0x1de69cu: goto label_1de69c;
        case 0x1de6bcu: goto label_1de6bc;
        default: break;
    }

    ctx->pc = 0x1de650u;

    // 0x1de650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1de654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de660: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1de660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1de664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1de664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de668: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE668u;
    {
        const bool branch_taken_0x1de668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE668u;
        // 0x1de66c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de668) {
            ctx->pc = 0x1DE680u;
            goto label_1de680;
        }
    }
    ctx->pc = 0x1DE670u;
    // 0x1de670: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de674: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DE674u;
    SET_GPR_U32(ctx, 31, 0x1DE67Cu);
    ctx->pc = 0x1DE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE674u;
    // 0x1de678: 0x2484c810  addiu       $a0, $a0, -0x37F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DE674u, 0x1DE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE67Cu;
label_1de67c:
    // 0x1de67c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de680:
    // 0x1de680: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1de680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1de684: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1de684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1de688: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE688u;
    {
        const bool branch_taken_0x1de688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de688) {
            ctx->pc = 0x1DE68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE688u;
            // 0x1de68c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE6A4u;
            goto label_1de6a4;
        }
    }
    ctx->pc = 0x1DE690u;
    // 0x1de690: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de694: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DE694u;
    SET_GPR_U32(ctx, 31, 0x1DE69Cu);
    ctx->pc = 0x1DE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE694u;
    // 0x1de698: 0x2484c838  addiu       $a0, $a0, -0x37C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DE694u, 0x1DE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE69Cu;
label_1de69c:
    // 0x1de69c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1de6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1de6a4:
    // 0x1de6a4: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x1de6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1de6a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE6A8u;
    {
        const bool branch_taken_0x1de6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6A8u;
        // 0x1de6ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6a8) {
            ctx->pc = 0x1DE6C4u;
            goto label_1de6c4;
        }
    }
    ctx->pc = 0x1DE6B0u;
    // 0x1de6b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de6b4: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DE6B4u;
    SET_GPR_U32(ctx, 31, 0x1DE6BCu);
    ctx->pc = 0x1DE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6B4u;
    // 0x1de6b8: 0x2484c860  addiu       $a0, $a0, -0x37A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DE6B4u, 0x1DE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6BCu;
label_1de6bc:
    // 0x1de6bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de6c4:
    // 0x1de6c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1de6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6CCu;
        // 0x1de6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE6D4u;
    // 0x1de6d4: 0x0  nop
    ctx->pc = 0x1de6d4u;
    // NOP
}
