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

// Function: sub_00243428
// Address: 0x243428 - 0x243518
void sub_00243428_0x243428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243428_0x243428");
#endif

    switch (ctx->pc) {
        case 0x243444u: goto label_243444;
        case 0x24347cu: goto label_24347c;
        case 0x243498u: goto label_243498;
        case 0x2434c0u: goto label_2434c0;
        case 0x243504u: goto label_243504;
        default: break;
    }

    ctx->pc = 0x243428u;

label_243428:
    // 0x243428: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x243428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24342c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x24342cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x243430: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x243430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x243434: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x243434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x243438: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x243438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24343c: 0xc048c96  jal         func_123258
    ctx->pc = 0x24343Cu;
    SET_GPR_U32(ctx, 31, 0x243444u);
    ctx->pc = 0x243440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24343Cu;
    // 0x243440: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24343Cu, 0x243444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243444u;
label_243444:
    // 0x243444: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x243444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243448: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x243448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24344c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243450: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x243450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x243454: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x243454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x243458: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x243458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24345c: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x24345cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x243460: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x243460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x243464: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x243464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x243468: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x243468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x24346c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x24346cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x243470: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x243470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x243474: 0xc090d8e  jal         func_243638
    ctx->pc = 0x243474u;
    SET_GPR_U32(ctx, 31, 0x24347Cu);
    ctx->pc = 0x243478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243474u;
    // 0x243478: 0x8c470010  lw          $a3, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x243474u, 0x24347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24347Cu;
label_24347c:
    // 0x24347c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24347cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243480: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x243480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243484: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x243484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x243488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24348c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24348cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243490: 0xc091502  jal         func_245408
    ctx->pc = 0x243490u;
    SET_GPR_U32(ctx, 31, 0x243498u);
    ctx->pc = 0x243494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243490u;
    // 0x243494: 0x8c460034  lw          $a2, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245408u, 0x243490u, 0x243498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243498u;
label_243498:
    // 0x243498: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x243498u;
    {
        const bool branch_taken_0x243498 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243498u;
        // 0x24349c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243498) {
            ctx->pc = 0x2434C4u;
            goto label_2434c4;
        }
    }
    ctx->pc = 0x2434A0u;
    // 0x2434a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2434a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2434a4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2434a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2434a8: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2434A8u;
    {
        const bool branch_taken_0x2434a8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2434a8) {
            ctx->pc = 0x2434ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2434A8u;
            // 0x2434ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2434C4u;
            goto label_2434c4;
        }
    }
    ctx->pc = 0x2434B0u;
    // 0x2434b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2434b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2434b4: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2434b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x2434b8: 0xc090c4c  jal         func_243130
    ctx->pc = 0x2434B8u;
    SET_GPR_U32(ctx, 31, 0x2434C0u);
    ctx->pc = 0x2434BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434B8u;
    // 0x2434bc: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x2434B8u, 0x2434C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434C0u;
label_2434c0:
    // 0x2434c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2434c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2434c4:
    // 0x2434c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2434c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2434c8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2434c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2434cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2434CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2434D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434CCu;
        // 0x2434d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2434CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2434D4u;
    // 0x2434d4: 0x0  nop
    ctx->pc = 0x2434d4u;
    // NOP
    // 0x2434d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2434d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2434dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2434dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2434e0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2434e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2434e4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2434e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2434e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2434E8u;
    {
        const bool branch_taken_0x2434e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434E8u;
        // 0x2434ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434e8) {
            ctx->pc = 0x243508u;
            goto label_243508;
        }
    }
    ctx->pc = 0x2434F0u;
    // 0x2434f0: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x2434f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x2434f4: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2434F4u;
    {
        const bool branch_taken_0x2434f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2434F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434F4u;
        // 0x2434f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434f4) {
            ctx->pc = 0x24350Cu;
            goto label_24350c;
        }
    }
    ctx->pc = 0x2434FCu;
    // 0x2434fc: 0xc090d0a  jal         func_243428
    ctx->pc = 0x2434FCu;
    SET_GPR_U32(ctx, 31, 0x243504u);
    ctx->pc = 0x243428u;
    goto label_243428;
    ctx->pc = 0x243504u;
label_243504:
    // 0x243504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243508:
    // 0x243508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x243508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24350c:
    // 0x24350c: 0x3e00008  jr          $ra
    ctx->pc = 0x24350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24350Cu;
        // 0x243510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24350Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243514u;
    // 0x243514: 0x0  nop
    ctx->pc = 0x243514u;
    // NOP
}
