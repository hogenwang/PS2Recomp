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

// Function: sub_001A96F8
// Address: 0x1a96f8 - 0x1a9788
void sub_001A96F8_0x1a96f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A96F8_0x1a96f8");
#endif

    switch (ctx->pc) {
        case 0x1a9748u: goto label_1a9748;
        case 0x1a975cu: goto label_1a975c;
        default: break;
    }

    ctx->pc = 0x1a96f8u;

label_1a96f8:
    // 0x1a96f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a96f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a96fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9704: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x1a9704u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a9708: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9708u;
    {
        const bool branch_taken_0x1a9708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9708u;
        // 0x1a970c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9708) {
            ctx->pc = 0x1A9718u;
            goto label_1a9718;
        }
    }
    ctx->pc = 0x1A9710u;
    // 0x1a9710: 0x806a51a  j           func_1A9468
    ctx->pc = 0x1A9710u;
    ctx->pc = 0x1A9714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9710u;
    // 0x1a9714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9468u, 0x1A9710u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1A9718u;
label_1a9718:
    // 0x1a9718: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9718u;
        // 0x1a971c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9720u;
    // 0x1a9720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9724: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a9724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a9728: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a9728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a972c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9730: 0x2450e160  addiu       $s0, $v0, -0x1EA0
    ctx->pc = 0x1a9730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x1a9734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9738: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1a9738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a973c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a973cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9740: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a9740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9744: 0x0  nop
    ctx->pc = 0x1a9744u;
    // NOP
label_1a9748:
    // 0x1a9748: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a9748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a974c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A974Cu;
    {
        const bool branch_taken_0x1a974c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a974c) {
            ctx->pc = 0x1A9750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A974Cu;
            // 0x1a9750: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9760u;
            goto label_1a9760;
        }
    }
    ctx->pc = 0x1A9754u;
    // 0x1a9754: 0xc06a5be  jal         func_1A96F8
    ctx->pc = 0x1A9754u;
    SET_GPR_U32(ctx, 31, 0x1A975Cu);
    ctx->pc = 0x1A9758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9754u;
    // 0x1a9758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A96F8u;
    goto label_1a96f8;
    ctx->pc = 0x1A975Cu;
label_1a975c:
    // 0x1a975c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a975cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1a9760:
    // 0x1a9760: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A9760u;
    {
        const bool branch_taken_0x1a9760 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9760u;
        // 0x1a9764: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9760) {
            ctx->pc = 0x1A9748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a9748;
        }
    }
    ctx->pc = 0x1A9768u;
    // 0x1a9768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a976c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a976cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9774: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a9774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9778: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9778u;
        // 0x1a977c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9780u;
    // 0x1a9780: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9780u;
        // 0x1a9784: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9788u;
}
