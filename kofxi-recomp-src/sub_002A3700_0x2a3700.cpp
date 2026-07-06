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

// Function: sub_002A3700
// Address: 0x2a3700 - 0x2a37c8
void sub_002A3700_0x2a3700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3700_0x2a3700");
#endif

    switch (ctx->pc) {
        case 0x2a378cu: goto label_2a378c;
        case 0x2a37b4u: goto label_2a37b4;
        default: break;
    }

    ctx->pc = 0x2a3700u;

label_2a3700:
    // 0x2a3700: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a3700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a3704: 0x8c486a3c  lw          $t0, 0x6A3C($v0)
    ctx->pc = 0x2a3704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27196)));
    // 0x2a3708: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A3708u;
    {
        const bool branch_taken_0x2a3708 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3708u;
        // 0x2a370c: 0x2402275d  addiu       $v0, $zero, 0x275D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10077));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3708) {
            ctx->pc = 0x2A375Cu;
            goto label_2a375c;
        }
    }
    ctx->pc = 0x2A3710u;
    // 0x2a3710: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3710u;
    {
        const bool branch_taken_0x2a3710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3710u;
        // 0x2a3714: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3710) {
            ctx->pc = 0x2A3724u;
            goto label_2a3724;
        }
    }
    ctx->pc = 0x2A3718u;
    // 0x2a3718: 0x8c626a38  lw          $v0, 0x6A38($v1)
    ctx->pc = 0x2a3718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27192)));
    // 0x2a371c: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x2a371cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a3720: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a3720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2a3724:
    // 0x2a3724: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3724u;
    {
        const bool branch_taken_0x2a3724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3724u;
        // 0x2a3728: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3724) {
            ctx->pc = 0x2A3734u;
            goto label_2a3734;
        }
    }
    ctx->pc = 0x2A372Cu;
    // 0x2a372c: 0x8c4348b8  lw          $v1, 0x48B8($v0)
    ctx->pc = 0x2a372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18616)));
    // 0x2a3730: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a3730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2a3734:
    // 0x2a3734: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3734u;
    {
        const bool branch_taken_0x2a3734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3734u;
        // 0x2a3738: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3734) {
            ctx->pc = 0x2A3744u;
            goto label_2a3744;
        }
    }
    ctx->pc = 0x2A373Cu;
    // 0x2a373c: 0x8c4348b0  lw          $v1, 0x48B0($v0)
    ctx->pc = 0x2a373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18608)));
    // 0x2a3740: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2a3740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2a3744:
    // 0x2a3744: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3744u;
    {
        const bool branch_taken_0x2a3744 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3744u;
        // 0x2a3748: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3744) {
            ctx->pc = 0x2A3754u;
            goto label_2a3754;
        }
    }
    ctx->pc = 0x2A374Cu;
    // 0x2a374c: 0x8c4348b4  lw          $v1, 0x48B4($v0)
    ctx->pc = 0x2a374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18612)));
    // 0x2a3750: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2a3750u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_2a3754:
    // 0x2a3754: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3754u;
        // 0x2a3758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A375Cu;
label_2a375c:
    // 0x2a375c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3764u;
    // 0x2a3764: 0x0  nop
    ctx->pc = 0x2a3764u;
    // NOP
    // 0x2a3768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a376c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a3770: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2a3770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2a3774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3778: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2a3778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2a377c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3784: 0xc0a8dc0  jal         func_2A3700
    ctx->pc = 0x2A3784u;
    SET_GPR_U32(ctx, 31, 0x2A378Cu);
    ctx->pc = 0x2A3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3784u;
    // 0x2a3788: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3700u;
    goto label_2a3700;
    ctx->pc = 0x2A378Cu;
label_2a378c:
    // 0x2a378c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A378Cu;
    {
        const bool branch_taken_0x2a378c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A378Cu;
        // 0x2a3790: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a378c) {
            ctx->pc = 0x2A37BCu;
            goto label_2a37bc;
        }
    }
    ctx->pc = 0x2A3794u;
    // 0x2a3794: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2a3794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a3798: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2a3798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2a379c: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x2a379cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a37a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a37a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37a4: 0x8fa9000c  lw          $t1, 0xC($sp)
    ctx->pc = 0x2a37a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2a37a8: 0x24a5c8e8  addiu       $a1, $a1, -0x3718
    ctx->pc = 0x2a37a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953192));
    // 0x2a37ac: 0xc0a0ccc  jal         func_283330
    ctx->pc = 0x2A37ACu;
    SET_GPR_U32(ctx, 31, 0x2A37B4u);
    ctx->pc = 0x2A37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A37ACu;
    // 0x2a37b0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283330u, 0x2A37ACu, 0x2A37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A37B4u;
label_2a37b4:
    // 0x2a37b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a37b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a37b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a37bc:
    // 0x2a37bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a37bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a37c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A37C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37C0u;
        // 0x2a37c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A37C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A37C8u;
}
