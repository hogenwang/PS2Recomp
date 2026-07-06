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

// Function: sub_002D66D0
// Address: 0x2d66d0 - 0x2d6a98
void sub_002D66D0_0x2d66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D66D0_0x2d66d0");
#endif

    switch (ctx->pc) {
        case 0x2d6724u: goto label_2d6724;
        case 0x2d6740u: goto label_2d6740;
        case 0x2d6754u: goto label_2d6754;
        case 0x2d675cu: goto label_2d675c;
        case 0x2d676cu: goto label_2d676c;
        case 0x2d67a4u: goto label_2d67a4;
        case 0x2d67b4u: goto label_2d67b4;
        case 0x2d6818u: goto label_2d6818;
        case 0x2d682cu: goto label_2d682c;
        case 0x2d6844u: goto label_2d6844;
        case 0x2d687cu: goto label_2d687c;
        case 0x2d68f0u: goto label_2d68f0;
        case 0x2d6900u: goto label_2d6900;
        case 0x2d6910u: goto label_2d6910;
        case 0x2d6928u: goto label_2d6928;
        case 0x2d695cu: goto label_2d695c;
        case 0x2d69c8u: goto label_2d69c8;
        case 0x2d69dcu: goto label_2d69dc;
        case 0x2d6a8cu: goto label_2d6a8c;
        default: break;
    }

    ctx->pc = 0x2d66d0u;

    // 0x2d66d0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D66D0u;
    {
        const bool branch_taken_0x2d66d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D66D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66D0u;
        // 0x2d66d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66d0) {
            ctx->pc = 0x2D6700u;
            goto label_2d6700;
        }
    }
    ctx->pc = 0x2D66D8u;
    // 0x2d66d8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2d66d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2d66dc: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D66DCu;
    {
        const bool branch_taken_0x2d66dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d66dc) {
            ctx->pc = 0x2D66E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D66DCu;
            // 0x2d66e0: 0x24040212  addiu       $a0, $zero, 0x212 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D66FCu;
            goto label_2d66fc;
        }
    }
    ctx->pc = 0x2D66E4u;
    // 0x2d66e4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2d66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2d66e8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d66ec: 0x24429650  addiu       $v0, $v0, -0x69B0
    ctx->pc = 0x2d66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940240));
    // 0x2d66f0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D66F0u;
    {
        const bool branch_taken_0x2d66f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66F0u;
        // 0x2d66f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66f0) {
            ctx->pc = 0x2D66FCu;
            goto label_2d66fc;
        }
    }
    ctx->pc = 0x2D66F8u;
    // 0x2d66f8: 0x24040212  addiu       $a0, $zero, 0x212
    ctx->pc = 0x2d66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
label_2d66fc:
    // 0x2d66fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d66fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6700:
    // 0x2d6700: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6708u;
    // 0x2d6708: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d6708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d670c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6710: 0x24639658  addiu       $v1, $v1, -0x69A8
    ctx->pc = 0x2d6710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940248));
    // 0x2d6714: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6714u;
        // 0x2d6718: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D671Cu;
    // 0x2d671c: 0x0  nop
    ctx->pc = 0x2d671cu;
    // NOP
    // 0x2d6720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d6724:
    // 0x2d6724: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d6724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6728: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d672c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6730: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d6734: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d6734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d6738: 0xc0b3e18  jal         func_2CF860
    ctx->pc = 0x2D6738u;
    SET_GPR_U32(ctx, 31, 0x2D6740u);
    ctx->pc = 0x2D673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6738u;
    // 0x2d673c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2D6738u, 0x2D6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6740u;
label_2d6740:
    // 0x2d6740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6744: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D6744u;
    {
        const bool branch_taken_0x2d6744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6744u;
        // 0x2d6748: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6744) {
            ctx->pc = 0x2D676Cu;
            goto label_2d676c;
        }
    }
    ctx->pc = 0x2D674Cu;
    // 0x2d674c: 0xc0b3d80  jal         func_2CF600
    ctx->pc = 0x2D674Cu;
    SET_GPR_U32(ctx, 31, 0x2D6754u);
    ctx->pc = 0x2D6750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D674Cu;
    // 0x2d6750: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF600u, 0x2D674Cu, 0x2D6754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6754u;
label_2d6754:
    // 0x2d6754: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d6754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d6758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d675c:
    // 0x2d675c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D675Cu;
    {
        const bool branch_taken_0x2d675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D675Cu;
        // 0x2d6760: 0x24a59658  addiu       $a1, $a1, -0x69A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d675c) {
            ctx->pc = 0x2D676Cu;
            goto label_2d676c;
        }
    }
    ctx->pc = 0x2D6764u;
    // 0x2d6764: 0xc0b3d08  jal         func_2CF420
    ctx->pc = 0x2D6764u;
    SET_GPR_U32(ctx, 31, 0x2D676Cu);
    ctx->pc = 0x2D6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6764u;
    // 0x2d6768: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2D6764u, 0x2D676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D676Cu;
label_2d676c:
    // 0x2d676c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d676cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6770: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d6770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6774: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6774u;
        // 0x2d6778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D677Cu;
    // 0x2d677c: 0x0  nop
    ctx->pc = 0x2d677cu;
    // NOP
    // 0x2d6780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6784: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2d6784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2d6788: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d678c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d678cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6790: 0x24c69670  addiu       $a2, $a2, -0x6990
    ctx->pc = 0x2d6790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940272));
    // 0x2d6794: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d6794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6798: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d6798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d679c: 0xc0b3d5a  jal         func_2CF568
    ctx->pc = 0x2D679Cu;
    SET_GPR_U32(ctx, 31, 0x2D67A4u);
    ctx->pc = 0x2D67A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D679Cu;
    // 0x2d67a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF568u, 0x2D679Cu, 0x2D67A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67A4u;
label_2d67a4:
    // 0x2d67a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D67A4u;
    {
        const bool branch_taken_0x2d67a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67A4u;
        // 0x2d67a8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67a4) {
            ctx->pc = 0x2D67CCu;
            goto label_2d67cc;
        }
    }
    ctx->pc = 0x2D67ACu;
    // 0x2d67ac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d67acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d67b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d67b4:
    // 0x2d67b4: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D67B4u;
    {
        const bool branch_taken_0x2d67b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2d67b4) {
            ctx->pc = 0x2D67B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D67B4u;
            // 0x2d67b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D67C8u;
            goto label_2d67c8;
        }
    }
    ctx->pc = 0x2D67BCu;
    // 0x2d67bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D67BCu;
    {
        const bool branch_taken_0x2d67bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67BCu;
        // 0x2d67c0: 0x2402021e  addiu       $v0, $zero, 0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67bc) {
            ctx->pc = 0x2D67CCu;
            goto label_2d67cc;
        }
    }
    ctx->pc = 0x2D67C4u;
    // 0x2d67c4: 0x0  nop
    ctx->pc = 0x2d67c4u;
    // NOP
label_2d67c8:
    // 0x2d67c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d67cc:
    // 0x2d67cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d67ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d67d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d67d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d67d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D67D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67D4u;
        // 0x2d67d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D67D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D67DCu;
    // 0x2d67dc: 0x0  nop
    ctx->pc = 0x2d67dcu;
    // NOP
    // 0x2d67e0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d67e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d67e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d67e8: 0x24639660  addiu       $v1, $v1, -0x69A0
    ctx->pc = 0x2d67e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940256));
    // 0x2d67ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D67ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67ECu;
        // 0x2d67f0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D67ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D67F4u;
    // 0x2d67f4: 0x0  nop
    ctx->pc = 0x2d67f4u;
    // NOP
    // 0x2d67f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d67f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d67fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d67fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6800: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2d6800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d6804: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d6804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6808: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d680c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d6810: 0xc0b3e18  jal         func_2CF860
    ctx->pc = 0x2D6810u;
    SET_GPR_U32(ctx, 31, 0x2D6818u);
    ctx->pc = 0x2D6814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6810u;
    // 0x2d6814: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2D6810u, 0x2D6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6818u;
label_2d6818:
    // 0x2d6818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d681c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D681Cu;
    {
        const bool branch_taken_0x2d681c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D681Cu;
        // 0x2d6820: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d681c) {
            ctx->pc = 0x2D6844u;
            goto label_2d6844;
        }
    }
    ctx->pc = 0x2D6824u;
    // 0x2d6824: 0xc0b3d80  jal         func_2CF600
    ctx->pc = 0x2D6824u;
    SET_GPR_U32(ctx, 31, 0x2D682Cu);
    ctx->pc = 0x2D6828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6824u;
    // 0x2d6828: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF600u, 0x2D6824u, 0x2D682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D682Cu;
label_2d682c:
    // 0x2d682c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d682cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d6830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6834: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6834u;
    {
        const bool branch_taken_0x2d6834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6834u;
        // 0x2d6838: 0x24a59660  addiu       $a1, $a1, -0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6834) {
            ctx->pc = 0x2D6844u;
            goto label_2d6844;
        }
    }
    ctx->pc = 0x2D683Cu;
    // 0x2d683c: 0xc0b3d08  jal         func_2CF420
    ctx->pc = 0x2D683Cu;
    SET_GPR_U32(ctx, 31, 0x2D6844u);
    ctx->pc = 0x2D6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D683Cu;
    // 0x2d6840: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2D683Cu, 0x2D6844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6844u;
label_2d6844:
    // 0x2d6844: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d6844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6848: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d6848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d684c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D684Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D684Cu;
        // 0x2d6850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D684Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6854u;
    // 0x2d6854: 0x0  nop
    ctx->pc = 0x2d6854u;
    // NOP
    // 0x2d6858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d685c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2d685cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2d6860: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d6864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6868: 0x24c69670  addiu       $a2, $a2, -0x6990
    ctx->pc = 0x2d6868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940272));
    // 0x2d686c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6870: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d6870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d6874: 0xc0b3d5a  jal         func_2CF568
    ctx->pc = 0x2D6874u;
    SET_GPR_U32(ctx, 31, 0x2D687Cu);
    ctx->pc = 0x2D6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6874u;
    // 0x2d6878: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF568u, 0x2D6874u, 0x2D687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D687Cu;
label_2d687c:
    // 0x2d687c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D687Cu;
    {
        const bool branch_taken_0x2d687c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D687Cu;
        // 0x2d6880: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d687c) {
            ctx->pc = 0x2D68A4u;
            goto label_2d68a4;
        }
    }
    ctx->pc = 0x2D6884u;
    // 0x2d6884: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6888: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d6888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d688c: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D688Cu;
    {
        const bool branch_taken_0x2d688c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2d688c) {
            ctx->pc = 0x2D6890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D688Cu;
            // 0x2d6890: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D68A0u;
            goto label_2d68a0;
        }
    }
    ctx->pc = 0x2D6894u;
    // 0x2d6894: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6894u;
    {
        const bool branch_taken_0x2d6894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6894u;
        // 0x2d6898: 0x2402021e  addiu       $v0, $zero, 0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6894) {
            ctx->pc = 0x2D68A4u;
            goto label_2d68a4;
        }
    }
    ctx->pc = 0x2D689Cu;
    // 0x2d689c: 0x0  nop
    ctx->pc = 0x2d689cu;
    // NOP
label_2d68a0:
    // 0x2d68a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d68a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d68a4:
    // 0x2d68a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d68a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d68a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d68a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d68ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D68ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68ACu;
        // 0x2d68b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D68ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D68B4u;
    // 0x2d68b4: 0x0  nop
    ctx->pc = 0x2d68b4u;
    // NOP
    // 0x2d68b8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d68b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d68bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d68c0: 0x24639668  addiu       $v1, $v1, -0x6998
    ctx->pc = 0x2d68c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940264));
    // 0x2d68c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D68C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68C4u;
        // 0x2d68c8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D68C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D68CCu;
    // 0x2d68cc: 0x0  nop
    ctx->pc = 0x2d68ccu;
    // NOP
    // 0x2d68d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d68d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d68d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d68d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d68d8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2d68d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d68dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d68dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d68e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d68e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d68e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d68e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d68e8: 0xc0b3e18  jal         func_2CF860
    ctx->pc = 0x2D68E8u;
    SET_GPR_U32(ctx, 31, 0x2D68F0u);
    ctx->pc = 0x2D68ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68E8u;
    // 0x2d68ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2D68E8u, 0x2D68F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68F0u;
label_2d68f0:
    // 0x2d68f0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D68F0u;
    {
        const bool branch_taken_0x2d68f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d68f0) {
            ctx->pc = 0x2D68F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D68F0u;
            // 0x2d68f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D692Cu;
            goto label_2d692c;
        }
    }
    ctx->pc = 0x2D68F8u;
    // 0x2d68f8: 0xc0b5516  jal         func_2D5458
    ctx->pc = 0x2D68F8u;
    SET_GPR_U32(ctx, 31, 0x2D6900u);
    ctx->pc = 0x2D68FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68F8u;
    // 0x2d68fc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5458u, 0x2D68F8u, 0x2D6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6900u;
label_2d6900:
    // 0x2d6900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6904: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d6904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6908: 0xc0b3d80  jal         func_2CF600
    ctx->pc = 0x2D6908u;
    SET_GPR_U32(ctx, 31, 0x2D6910u);
    ctx->pc = 0x2D690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6908u;
    // 0x2d690c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF600u, 0x2D6908u, 0x2D6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6910u;
label_2d6910:
    // 0x2d6910: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d6910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d6914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6918: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6918u;
    {
        const bool branch_taken_0x2d6918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6918u;
        // 0x2d691c: 0x24a59668  addiu       $a1, $a1, -0x6998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6918) {
            ctx->pc = 0x2D6928u;
            goto label_2d6928;
        }
    }
    ctx->pc = 0x2D6920u;
    // 0x2d6920: 0xc0b3d08  jal         func_2CF420
    ctx->pc = 0x2D6920u;
    SET_GPR_U32(ctx, 31, 0x2D6928u);
    ctx->pc = 0x2D6924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6920u;
    // 0x2d6924: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2D6920u, 0x2D6928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6928u;
label_2d6928:
    // 0x2d6928: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d6928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d692c:
    // 0x2d692c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d692cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6930: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6930u;
        // 0x2d6934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6938u;
    // 0x2d6938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d693c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2d693cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2d6940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6948: 0x24c69660  addiu       $a2, $a2, -0x69A0
    ctx->pc = 0x2d6948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940256));
    // 0x2d694c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d694cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6950: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d6950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d6954: 0xc0b3d5a  jal         func_2CF568
    ctx->pc = 0x2D6954u;
    SET_GPR_U32(ctx, 31, 0x2D695Cu);
    ctx->pc = 0x2D6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6954u;
    // 0x2d6958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF568u, 0x2D6954u, 0x2D695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D695Cu;
label_2d695c:
    // 0x2d695c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D695Cu;
    {
        const bool branch_taken_0x2d695c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d695c) {
            ctx->pc = 0x2D6960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D695Cu;
            // 0x2d6960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6978u;
            goto label_2d6978;
        }
    }
    ctx->pc = 0x2D6964u;
    // 0x2d6964: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6968: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d6968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d696c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d696cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6970: 0x80b5532  j           func_2D54C8
    ctx->pc = 0x2D6970u;
    ctx->pc = 0x2D6974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6970u;
    // 0x2d6974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D54C8u, 0x2D6970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D6978u;
label_2d6978:
    // 0x2d6978: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d6978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d697c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D697Cu;
        // 0x2d6980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D697Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6984u;
    // 0x2d6984: 0x0  nop
    ctx->pc = 0x2d6984u;
    // NOP
    // 0x2d6988: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d6988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d698c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6990: 0x24639670  addiu       $v1, $v1, -0x6990
    ctx->pc = 0x2d6990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940272));
    // 0x2d6994: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6994u;
        // 0x2d6998: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D699Cu;
    // 0x2d699c: 0x0  nop
    ctx->pc = 0x2d699cu;
    // NOP
    // 0x2d69a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d69a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d69a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d69a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d69acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d69b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d69b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d69b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d69b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69bc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2d69bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d69c0: 0xc0b3e18  jal         func_2CF860
    ctx->pc = 0x2D69C0u;
    SET_GPR_U32(ctx, 31, 0x2D69C8u);
    ctx->pc = 0x2D69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D69C0u;
    // 0x2d69c4: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2D69C0u, 0x2D69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69C8u;
label_2d69c8:
    // 0x2d69c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D69C8u;
    {
        const bool branch_taken_0x2d69c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D69CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69C8u;
        // 0x2d69cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d69c8) {
            ctx->pc = 0x2D69DCu;
            goto label_2d69dc;
        }
    }
    ctx->pc = 0x2D69D0u;
    // 0x2d69d0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2d69d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d69d4: 0xc0b3d80  jal         func_2CF600
    ctx->pc = 0x2D69D4u;
    SET_GPR_U32(ctx, 31, 0x2D69DCu);
    ctx->pc = 0x2D69D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D69D4u;
    // 0x2d69d8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF600u, 0x2D69D4u, 0x2D69DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69DCu;
label_2d69dc:
    // 0x2d69dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d69dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d69e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d69e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d69e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d69e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D69E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69E8u;
        // 0x2d69ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D69E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D69F0u;
    // 0x2d69f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D69F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69F0u;
        // 0x2d69f4: 0x2402021e  addiu       $v0, $zero, 0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D69F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D69F8u;
    // 0x2d69f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d69fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6a00: 0x24639678  addiu       $v1, $v1, -0x6988
    ctx->pc = 0x2d6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940280));
    // 0x2d6a04: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A04u;
        // 0x2d6a08: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A0Cu;
    // 0x2d6a0c: 0x0  nop
    ctx->pc = 0x2d6a0cu;
    // NOP
    // 0x2d6a10: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d6a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6a18: 0x24639680  addiu       $v1, $v1, -0x6980
    ctx->pc = 0x2d6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940288));
    // 0x2d6a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A1Cu;
        // 0x2d6a20: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A24u;
    // 0x2d6a24: 0x0  nop
    ctx->pc = 0x2d6a24u;
    // NOP
    // 0x2d6a28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6a2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d6a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d6a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d6a34: 0x244e0018  addiu       $t6, $v0, 0x18
    ctx->pc = 0x2d6a34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d6a38: 0x244d0028  addiu       $t5, $v0, 0x28
    ctx->pc = 0x2d6a38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d6a3c: 0x244b0038  addiu       $t3, $v0, 0x38
    ctx->pc = 0x2d6a3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2d6a40: 0x8c4c0014  lw          $t4, 0x14($v0)
    ctx->pc = 0x2d6a40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d6a44: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2d6a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d6a48: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2d6a48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6a4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d6a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a50: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x2d6a50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d6a54: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2d6a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d6a58: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2d6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d6a5c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2d6a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d6a60: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x2d6a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x2d6a64: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x2d6a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x2d6a68: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2d6a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2d6a6c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2d6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2d6a70: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2d6a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x2d6a74: 0xafac0014  sw          $t4, 0x14($sp)
    ctx->pc = 0x2d6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 12));
    // 0x2d6a78: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x2d6a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x2d6a7c: 0xafae001c  sw          $t6, 0x1C($sp)
    ctx->pc = 0x2d6a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 14));
    // 0x2d6a80: 0xafad0020  sw          $t5, 0x20($sp)
    ctx->pc = 0x2d6a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
    // 0x2d6a84: 0xc0b5aa6  jal         func_2D6A98
    ctx->pc = 0x2D6A84u;
    SET_GPR_U32(ctx, 31, 0x2D6A8Cu);
    ctx->pc = 0x2D6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A84u;
    // 0x2d6a88: 0xafab0024  sw          $t3, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6A98u, 0x2D6A84u, 0x2D6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A8Cu;
label_2d6a8c:
    // 0x2d6a8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d6a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6a90: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A90u;
        // 0x2d6a94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A98u;
}
