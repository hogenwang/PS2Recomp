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

// Function: sub_003215D0
// Address: 0x3215d0 - 0x321c20
void sub_003215D0_0x3215d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003215D0_0x3215d0");
#endif

    switch (ctx->pc) {
        case 0x3215e8u: goto label_3215e8;
        case 0x32160cu: goto label_32160c;
        case 0x321618u: goto label_321618;
        case 0x321624u: goto label_321624;
        case 0x3218f0u: goto label_3218f0;
        case 0x321928u: goto label_321928;
        default: break;
    }

    ctx->pc = 0x3215d0u;

    // 0x3215d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3215d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3215d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3215d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3215d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3215d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3215dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3215dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3215e0: 0xc063a98  jal         func_18EA60
    ctx->pc = 0x3215E0u;
    SET_GPR_U32(ctx, 31, 0x3215E8u);
    ctx->pc = 0x3215E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215E0u;
    // 0x3215e4: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA60u, 0x3215E0u, 0x3215E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215E8u;
label_3215e8:
    // 0x3215e8: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3215e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3215ec: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3215ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x3215f0: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3215f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x3215f4: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x3215f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3215f8: 0x24a50a18  addiu       $a1, $a1, 0xA18
    ctx->pc = 0x3215f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2584));
    // 0x3215fc: 0x24c67010  addiu       $a2, $a2, 0x7010
    ctx->pc = 0x3215fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28688));
    // 0x321600: 0x24e70410  addiu       $a3, $a3, 0x410
    ctx->pc = 0x321600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1040));
    // 0x321604: 0xc063bf0  jal         func_18EFC0
    ctx->pc = 0x321604u;
    SET_GPR_U32(ctx, 31, 0x32160Cu);
    ctx->pc = 0x321608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321604u;
    // 0x321608: 0x24084000  addiu       $t0, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EFC0u, 0x321604u, 0x32160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32160Cu;
label_32160c:
    // 0x32160c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x32160cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x321610: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x321610u;
    SET_GPR_U32(ctx, 31, 0x321618u);
    ctx->pc = 0x321614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321610u;
    // 0x321614: 0x24840a18  addiu       $a0, $a0, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036D0u, 0x321610u, 0x321618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321618u;
label_321618:
    // 0x321618: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x321618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32161c: 0xc0c0d84  jal         func_303610
    ctx->pc = 0x32161Cu;
    SET_GPR_U32(ctx, 31, 0x321624u);
    ctx->pc = 0x321620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32161Cu;
    // 0x321620: 0x24843ec8  addiu       $a0, $a0, 0x3EC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303610u, 0x32161Cu, 0x321624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321624u;
label_321624:
    // 0x321624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32162c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32162cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321630: 0x3e00008  jr          $ra
    ctx->pc = 0x321630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321630u;
        // 0x321634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321638u;
    // 0x321638: 0x0  nop
    ctx->pc = 0x321638u;
    // NOP
    // 0x32163c: 0x0  nop
    ctx->pc = 0x32163cu;
    // NOP
    // 0x321640: 0x3e00008  jr          $ra
    ctx->pc = 0x321640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321640u;
        // 0x321644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321648u;
    // 0x321648: 0x0  nop
    ctx->pc = 0x321648u;
    // NOP
    // 0x32164c: 0x0  nop
    ctx->pc = 0x32164cu;
    // NOP
    // 0x321650: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x321650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x321654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321658: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x321658u;
    {
        const bool branch_taken_0x321658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321658) {
            ctx->pc = 0x32165Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321658u;
            // 0x32165c: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32168Cu;
            goto label_32168c;
        }
    }
    ctx->pc = 0x321660u;
    // 0x321660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321664: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321664u;
    {
        const bool branch_taken_0x321664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321664) {
            ctx->pc = 0x321668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321664u;
            // 0x321668: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321674u;
            goto label_321674;
        }
    }
    ctx->pc = 0x32166Cu;
    // 0x32166c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32166Cu;
    {
        const bool branch_taken_0x32166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32166Cu;
        // 0x321670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32166c) {
            ctx->pc = 0x3216A8u;
            goto label_3216a8;
        }
    }
    ctx->pc = 0x321674u;
label_321674:
    // 0x321674: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x321674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x321678: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x321678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x32167c: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x32167cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x321680: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x321680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x321684: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x321684u;
    {
        const bool branch_taken_0x321684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321684u;
        // 0x321688: 0xa0a20020  sb          $v0, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321684) {
            ctx->pc = 0x3216A4u;
            goto label_3216a4;
        }
    }
    ctx->pc = 0x32168Cu;
label_32168c:
    // 0x32168c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321690: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x321690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x321694: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x321694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x321698: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x321698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x32169c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x32169cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x3216a0: 0xa0a20021  sb          $v0, 0x21($a1)
    ctx->pc = 0x3216a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 2));
label_3216a4:
    // 0x3216a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3216a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3216a8:
    // 0x3216a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3216A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3216A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3216B0u;
    // 0x3216b0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x3216b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3216b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3216b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3216b8: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x3216b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3216bc: 0x5082000e  beql        $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3216BCu;
    {
        const bool branch_taken_0x3216bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3216bc) {
            ctx->pc = 0x3216C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3216BCu;
            // 0x3216c0: 0x71c3c  dsll32      $v1, $a3, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3216F8u;
            goto label_3216f8;
        }
    }
    ctx->pc = 0x3216C4u;
    // 0x3216c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3216c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3216c8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3216C8u;
    {
        const bool branch_taken_0x3216c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3216c8) {
            ctx->pc = 0x3216CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3216C8u;
            // 0x3216cc: 0x7143c  dsll32      $v0, $a3, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3216D8u;
            goto label_3216d8;
        }
    }
    ctx->pc = 0x3216D0u;
    // 0x3216d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3216D0u;
    {
        const bool branch_taken_0x3216d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3216D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3216D0u;
        // 0x3216d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3216d0) {
            ctx->pc = 0x32171Cu;
            goto label_32171c;
        }
    }
    ctx->pc = 0x3216D8u;
label_3216d8:
    // 0x3216d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3216d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3216dc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3216dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3216e0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x3216e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x3216e4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x3216e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x3216e8: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x3216e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x3216ec: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x3216ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x3216f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3216F0u;
    {
        const bool branch_taken_0x3216f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3216F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3216F0u;
        // 0x3216f4: 0xa0a30020  sb          $v1, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3216f0) {
            ctx->pc = 0x321718u;
            goto label_321718;
        }
    }
    ctx->pc = 0x3216F8u;
label_3216f8:
    // 0x3216f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3216f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3216fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3216fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x321700: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x321700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x321704: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x321704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x321708: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x321708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x32170c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x32170cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x321710: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x321710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x321714: 0xa0a20021  sb          $v0, 0x21($a1)
    ctx->pc = 0x321714u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 2));
label_321718:
    // 0x321718: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32171c:
    // 0x32171c: 0x3e00008  jr          $ra
    ctx->pc = 0x32171Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32171Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321724u;
    // 0x321724: 0x0  nop
    ctx->pc = 0x321724u;
    // NOP
    // 0x321728: 0x0  nop
    ctx->pc = 0x321728u;
    // NOP
    // 0x32172c: 0x0  nop
    ctx->pc = 0x32172cu;
    // NOP
    // 0x321730: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x321730u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321734: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321738: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x321738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x32173c: 0x5082000d  beql        $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32173Cu;
    {
        const bool branch_taken_0x32173c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32173c) {
            ctx->pc = 0x321740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32173Cu;
            // 0x321740: 0x71200  sll         $v0, $a3, 8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321774u;
            goto label_321774;
        }
    }
    ctx->pc = 0x321744u;
    // 0x321744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321748: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x321748u;
    {
        const bool branch_taken_0x321748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x321748) {
            ctx->pc = 0x32174Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321748u;
            // 0x32174c: 0x71200  sll         $v0, $a3, 8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321758u;
            goto label_321758;
        }
    }
    ctx->pc = 0x321750u;
    // 0x321750: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x321750u;
    {
        const bool branch_taken_0x321750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321750u;
        // 0x321754: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321750) {
            ctx->pc = 0x321794u;
            goto label_321794;
        }
    }
    ctx->pc = 0x321758u;
label_321758:
    // 0x321758: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x321758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x32175c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x32175cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x321760: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x321760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x321764: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x321764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x321768: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x321768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x32176c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32176Cu;
    {
        const bool branch_taken_0x32176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32176Cu;
        // 0x321770: 0xa0a30020  sb          $v1, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32176c) {
            ctx->pc = 0x321790u;
            goto label_321790;
        }
    }
    ctx->pc = 0x321774u;
label_321774:
    // 0x321774: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x321774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x321778: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x321778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x32177c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x32177cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x321780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321784: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x321784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x321788: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x321788u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x32178c: 0xa0a20021  sb          $v0, 0x21($a1)
    ctx->pc = 0x32178cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 2));
label_321790:
    // 0x321790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_321794:
    // 0x321794: 0x3e00008  jr          $ra
    ctx->pc = 0x321794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32179Cu;
    // 0x32179c: 0x0  nop
    ctx->pc = 0x32179cu;
    // NOP
    // 0x3217a0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3217a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3217a4: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x3217a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3217a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3217a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3217ac: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3217ACu;
    {
        const bool branch_taken_0x3217ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3217B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217ACu;
        // 0x3217b0: 0x84870000  lh          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217ac) {
            ctx->pc = 0x3217E8u;
            goto label_3217e8;
        }
    }
    ctx->pc = 0x3217B4u;
    // 0x3217b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3217b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3217b8: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3217B8u;
    {
        const bool branch_taken_0x3217b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3217b8) {
            ctx->pc = 0x3217BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3217B8u;
            // 0x3217bc: 0x71a00  sll         $v1, $a3, 8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3217C8u;
            goto label_3217c8;
        }
    }
    ctx->pc = 0x3217C0u;
    // 0x3217c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3217C0u;
    {
        const bool branch_taken_0x3217c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3217C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217C0u;
        // 0x3217c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217c0) {
            ctx->pc = 0x321810u;
            goto label_321810;
        }
    }
    ctx->pc = 0x3217C8u;
label_3217c8:
    // 0x3217c8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3217c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3217cc: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3217ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3217d0: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x3217d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x3217d4: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x3217d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x3217d8: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x3217d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x3217dc: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x3217dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x3217e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3217E0u;
    {
        const bool branch_taken_0x3217e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3217E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217E0u;
        // 0x3217e4: 0xa0a40020  sb          $a0, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217e0) {
            ctx->pc = 0x32180Cu;
            goto label_32180c;
        }
    }
    ctx->pc = 0x3217E8u;
label_3217e8:
    // 0x3217e8: 0x72200  sll         $a0, $a3, 8
    ctx->pc = 0x3217e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3217ec: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3217ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x3217f0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x3217f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3217f4: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x3217f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x3217f8: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x3217f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x3217fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3217fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321800: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x321800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x321804: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x321804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x321808: 0xa0a20021  sb          $v0, 0x21($a1)
    ctx->pc = 0x321808u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 2));
label_32180c:
    // 0x32180c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_321810:
    // 0x321810: 0x3e00008  jr          $ra
    ctx->pc = 0x321810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321818u;
    // 0x321818: 0x0  nop
    ctx->pc = 0x321818u;
    // NOP
    // 0x32181c: 0x0  nop
    ctx->pc = 0x32181cu;
    // NOP
    // 0x321820: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x321820u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321824: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321828: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x321828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x32182c: 0x5082000c  beql        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32182Cu;
    {
        const bool branch_taken_0x32182c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32182c) {
            ctx->pc = 0x321830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32182Cu;
            // 0x321830: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321860u;
            goto label_321860;
        }
    }
    ctx->pc = 0x321834u;
    // 0x321834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321838: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x321838u;
    {
        const bool branch_taken_0x321838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x321838) {
            ctx->pc = 0x32183Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321838u;
            // 0x32183c: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321848u;
            goto label_321848;
        }
    }
    ctx->pc = 0x321840u;
    // 0x321840: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x321840u;
    {
        const bool branch_taken_0x321840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321840u;
        // 0x321844: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321840) {
            ctx->pc = 0x32187Cu;
            goto label_32187c;
        }
    }
    ctx->pc = 0x321848u;
label_321848:
    // 0x321848: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x321848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x32184c: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x32184cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x321850: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x321850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x321854: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x321854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x321858: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x321858u;
    {
        const bool branch_taken_0x321858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321858u;
        // 0x32185c: 0xa0a30020  sb          $v1, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321858) {
            ctx->pc = 0x321878u;
            goto label_321878;
        }
    }
    ctx->pc = 0x321860u;
label_321860:
    // 0x321860: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x321860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x321864: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x321864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x321868: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x321868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x32186c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321870: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x321870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x321874: 0xa0a20021  sb          $v0, 0x21($a1)
    ctx->pc = 0x321874u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 2));
label_321878:
    // 0x321878: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32187c:
    // 0x32187c: 0x3e00008  jr          $ra
    ctx->pc = 0x32187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321884u;
    // 0x321884: 0x0  nop
    ctx->pc = 0x321884u;
    // NOP
    // 0x321888: 0x0  nop
    ctx->pc = 0x321888u;
    // NOP
    // 0x32188c: 0x0  nop
    ctx->pc = 0x32188cu;
    // NOP
    // 0x321890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321894: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x321894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32189c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3218a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3218a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218a4: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x3218a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3218a8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3218A8u;
    {
        const bool branch_taken_0x3218a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3218ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218A8u;
        // 0x3218ac: 0x84860000  lh          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218a8) {
            ctx->pc = 0x3218F8u;
            goto label_3218f8;
        }
    }
    ctx->pc = 0x3218B0u;
    // 0x3218b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3218b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3218b4: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3218B4u;
    {
        const bool branch_taken_0x3218b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3218b4) {
            ctx->pc = 0x3218B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3218B4u;
            // 0x3218b8: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3218C4u;
            goto label_3218c4;
        }
    }
    ctx->pc = 0x3218BCu;
    // 0x3218bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3218BCu;
    {
        const bool branch_taken_0x3218bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3218C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218BCu;
        // 0x3218c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218bc) {
            ctx->pc = 0x321930u;
            goto label_321930;
        }
    }
    ctx->pc = 0x3218C4u;
label_3218c4:
    // 0x3218c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3218c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3218c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3218c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3218cc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3218ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3218d0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3218d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x3218d4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x3218d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3218d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3218d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3218dc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x3218dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x3218e0: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x3218e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x3218e4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3218e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3218e8: 0xc058404  jal         func_161010
    ctx->pc = 0x3218E8u;
    SET_GPR_U32(ctx, 31, 0x3218F0u);
    ctx->pc = 0x3218ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3218E8u;
    // 0x3218ec: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161010u, 0x3218E8u, 0x3218F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3218F0u;
label_3218f0:
    // 0x3218f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3218F0u;
    {
        const bool branch_taken_0x3218f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3218F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218F0u;
        // 0x3218f4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218f0) {
            ctx->pc = 0x32192Cu;
            goto label_32192c;
        }
    }
    ctx->pc = 0x3218F8u;
label_3218f8:
    // 0x3218f8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x3218f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3218fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3218fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x321900: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x321900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x321904: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x321904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x321908: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x321908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x32190c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32190cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x321910: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x321910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x321914: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x321914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x321918: 0xa2030021  sb          $v1, 0x21($s0)
    ctx->pc = 0x321918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x32191c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x32191cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x321920: 0xc058404  jal         func_161010
    ctx->pc = 0x321920u;
    SET_GPR_U32(ctx, 31, 0x321928u);
    ctx->pc = 0x321924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321920u;
    // 0x321924: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161010u, 0x321920u, 0x321928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321928u;
label_321928:
    // 0x321928: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x321928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_32192c:
    // 0x32192c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32192cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321930:
    // 0x321930: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x321930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x321934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321938: 0x3e00008  jr          $ra
    ctx->pc = 0x321938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321938u;
        // 0x32193c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321940u;
    // 0x321940: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x321940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x321944: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321948: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x321948u;
    {
        const bool branch_taken_0x321948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321948u;
        // 0x32194c: 0x84840000  lh          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321948) {
            ctx->pc = 0x321988u;
            goto label_321988;
        }
    }
    ctx->pc = 0x321950u;
    // 0x321950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321954: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321954u;
    {
        const bool branch_taken_0x321954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321954) {
            ctx->pc = 0x321958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321954u;
            // 0x321958: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321964u;
            goto label_321964;
        }
    }
    ctx->pc = 0x32195Cu;
    // 0x32195c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x32195Cu;
    {
        const bool branch_taken_0x32195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32195Cu;
        // 0x321960: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32195c) {
            ctx->pc = 0x3219B0u;
            goto label_3219b0;
        }
    }
    ctx->pc = 0x321964u;
label_321964:
    // 0x321964: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x321964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x321968: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x321968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x32196c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32196cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x321970: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x321970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x321974: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x321974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x321978: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x321978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x32197c: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x32197cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x321980: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x321980u;
    {
        const bool branch_taken_0x321980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321980u;
        // 0x321984: 0xa0a20020  sb          $v0, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321980) {
            ctx->pc = 0x3219ACu;
            goto label_3219ac;
        }
    }
    ctx->pc = 0x321988u;
label_321988:
    // 0x321988: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x321988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x32198c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x32198cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x321990: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x321990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x321994: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x321994u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x321998: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x321998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x32199c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3219a0: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x3219a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x3219a4: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x3219a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x3219a8: 0xa0a20021  sb          $v0, 0x21($a1)
    ctx->pc = 0x3219a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 2));
label_3219ac:
    // 0x3219ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3219acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3219b0:
    // 0x3219b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3219B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3219B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3219B8u;
    // 0x3219b8: 0x0  nop
    ctx->pc = 0x3219b8u;
    // NOP
    // 0x3219bc: 0x0  nop
    ctx->pc = 0x3219bcu;
    // NOP
    // 0x3219c0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3219c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3219c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3219c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3219c8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3219C8u;
    {
        const bool branch_taken_0x3219c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3219CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219C8u;
        // 0x3219cc: 0x84840000  lh          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219c8) {
            ctx->pc = 0x321A08u;
            goto label_321a08;
        }
    }
    ctx->pc = 0x3219D0u;
    // 0x3219d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3219d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3219d4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3219D4u;
    {
        const bool branch_taken_0x3219d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3219d4) {
            ctx->pc = 0x3219D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3219D4u;
            // 0x3219d8: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3219E4u;
            goto label_3219e4;
        }
    }
    ctx->pc = 0x3219DCu;
    // 0x3219dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3219DCu;
    {
        const bool branch_taken_0x3219dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219DCu;
        // 0x3219e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219dc) {
            ctx->pc = 0x321A30u;
            goto label_321a30;
        }
    }
    ctx->pc = 0x3219E4u;
label_3219e4:
    // 0x3219e4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x3219e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3219e8: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x3219e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x3219ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3219ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3219f0: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x3219f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x3219f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3219f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3219f8: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x3219f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x3219fc: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x3219fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x321a00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x321A00u;
    {
        const bool branch_taken_0x321a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A00u;
        // 0x321a04: 0xa0a20020  sb          $v0, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a00) {
            ctx->pc = 0x321A2Cu;
            goto label_321a2c;
        }
    }
    ctx->pc = 0x321A08u;
label_321a08:
    // 0x321a08: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x321a08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x321a0c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x321a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x321a10: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x321a10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x321a14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x321a14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x321a18: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x321a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x321a1c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x321a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x321a20: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x321a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x321a24: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x321a24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x321a28: 0xa0a20021  sb          $v0, 0x21($a1)
    ctx->pc = 0x321a28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 2));
label_321a2c:
    // 0x321a2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_321a30:
    // 0x321a30: 0x3e00008  jr          $ra
    ctx->pc = 0x321A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321A38u;
    // 0x321a38: 0x0  nop
    ctx->pc = 0x321a38u;
    // NOP
    // 0x321a3c: 0x0  nop
    ctx->pc = 0x321a3cu;
    // NOP
    // 0x321a40: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x321a40u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321a44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321a48: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x321a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x321a4c: 0x5082000f  beql        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x321A4Cu;
    {
        const bool branch_taken_0x321a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x321a4c) {
            ctx->pc = 0x321A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321A4Cu;
            // 0x321a50: 0x71c3c  dsll32      $v1, $a3, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321A8Cu;
            goto label_321a8c;
        }
    }
    ctx->pc = 0x321A54u;
    // 0x321a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321a58: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x321A58u;
    {
        const bool branch_taken_0x321a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x321a58) {
            ctx->pc = 0x321A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321A58u;
            // 0x321a5c: 0x7143c  dsll32      $v0, $a3, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321A68u;
            goto label_321a68;
        }
    }
    ctx->pc = 0x321A60u;
    // 0x321a60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x321A60u;
    {
        const bool branch_taken_0x321a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A60u;
        // 0x321a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a60) {
            ctx->pc = 0x321AB4u;
            goto label_321ab4;
        }
    }
    ctx->pc = 0x321A68u;
label_321a68:
    // 0x321a68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x321a68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x321a6c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x321a6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x321a70: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x321a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x321a74: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x321a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x321a78: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x321a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x321a7c: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x321a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x321a80: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x321a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x321a84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x321A84u;
    {
        const bool branch_taken_0x321a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A84u;
        // 0x321a88: 0xa0a30020  sb          $v1, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a84) {
            ctx->pc = 0x321AB0u;
            goto label_321ab0;
        }
    }
    ctx->pc = 0x321A8Cu;
label_321a8c:
    // 0x321a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321a90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x321a90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x321a94: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x321a94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x321a98: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x321a98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x321a9c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x321a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x321aa0: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x321aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x321aa4: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x321aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x321aa8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x321aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x321aac: 0xa0a20021  sb          $v0, 0x21($a1)
    ctx->pc = 0x321aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 2));
label_321ab0:
    // 0x321ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_321ab4:
    // 0x321ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x321AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321ABCu;
    // 0x321abc: 0x0  nop
    ctx->pc = 0x321abcu;
    // NOP
    // 0x321ac0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x321ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x321ac4: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x321ac4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x321ac8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321acc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x321ACCu;
    {
        const bool branch_taken_0x321acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x321AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321ACCu;
        // 0x321ad0: 0x84870000  lh          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321acc) {
            ctx->pc = 0x321B14u;
            goto label_321b14;
        }
    }
    ctx->pc = 0x321AD4u;
    // 0x321ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321ad8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321AD8u;
    {
        const bool branch_taken_0x321ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321ad8) {
            ctx->pc = 0x321ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321AD8u;
            // 0x321adc: 0x72200  sll         $a0, $a3, 8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321AE8u;
            goto label_321ae8;
        }
    }
    ctx->pc = 0x321AE0u;
    // 0x321ae0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x321AE0u;
    {
        const bool branch_taken_0x321ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AE0u;
        // 0x321ae4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ae0) {
            ctx->pc = 0x321B44u;
            goto label_321b44;
        }
    }
    ctx->pc = 0x321AE8u;
label_321ae8:
    // 0x321ae8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x321ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x321aec: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x321aecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x321af0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x321af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x321af4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x321af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x321af8: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x321af8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x321afc: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x321afcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x321b00: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x321b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x321b04: 0xa0a30020  sb          $v1, 0x20($a1)
    ctx->pc = 0x321b04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x321b08: 0xa4a20040  sh          $v0, 0x40($a1)
    ctx->pc = 0x321b08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x321b0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x321B0Cu;
    {
        const bool branch_taken_0x321b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B0Cu;
        // 0x321b10: 0xaca00044  sw          $zero, 0x44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b0c) {
            ctx->pc = 0x321B40u;
            goto label_321b40;
        }
    }
    ctx->pc = 0x321B14u;
label_321b14:
    // 0x321b14: 0x72200  sll         $a0, $a3, 8
    ctx->pc = 0x321b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x321b18: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x321b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x321b1c: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x321b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x321b20: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x321b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x321b24: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x321b24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x321b28: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x321b28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x321b2c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x321b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x321b30: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x321b30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x321b34: 0xa0a30021  sb          $v1, 0x21($a1)
    ctx->pc = 0x321b34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x321b38: 0xa4a20042  sh          $v0, 0x42($a1)
    ctx->pc = 0x321b38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x321b3c: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x321b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
label_321b40:
    // 0x321b40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x321b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_321b44:
    // 0x321b44: 0x3e00008  jr          $ra
    ctx->pc = 0x321B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321B4Cu;
    // 0x321b4c: 0x0  nop
    ctx->pc = 0x321b4cu;
    // NOP
    // 0x321b50: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x321b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x321b54: 0x84870002  lh          $a3, 0x2($a0)
    ctx->pc = 0x321b54u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x321b58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321b5c: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x321b5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x321b60: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x321B60u;
    {
        const bool branch_taken_0x321b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x321B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B60u;
        // 0x321b64: 0x84880000  lh          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b60) {
            ctx->pc = 0x321BC4u;
            goto label_321bc4;
        }
    }
    ctx->pc = 0x321B68u;
    // 0x321b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321b6c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321B6Cu;
    {
        const bool branch_taken_0x321b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321b6c) {
            ctx->pc = 0x321B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321B6Cu;
            // 0x321b70: 0x81c3c  dsll32      $v1, $t0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321B7Cu;
            goto label_321b7c;
        }
    }
    ctx->pc = 0x321B74u;
    // 0x321b74: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x321B74u;
    {
        const bool branch_taken_0x321b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B74u;
        // 0x321b78: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b74) {
            ctx->pc = 0x321C10u;
            goto label_321c10;
        }
    }
    ctx->pc = 0x321B7Cu;
label_321b7c:
    // 0x321b7c: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x321b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x321b80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x321b80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x321b84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x321b84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x321b88: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x321b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x321b8c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x321b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x321b90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x321b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x321b94: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x321b94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x321b98: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x321b98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x321b9c: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x321b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x321ba0: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x321ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x321ba4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x321ba4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x321ba8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x321ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x321bac: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x321bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x321bb0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x321bb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x321bb4: 0xa0a30020  sb          $v1, 0x20($a1)
    ctx->pc = 0x321bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x321bb8: 0xa4a20040  sh          $v0, 0x40($a1)
    ctx->pc = 0x321bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x321bbc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x321BBCu;
    {
        const bool branch_taken_0x321bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BBCu;
        // 0x321bc0: 0xaca00044  sw          $zero, 0x44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321bbc) {
            ctx->pc = 0x321C0Cu;
            goto label_321c0c;
        }
    }
    ctx->pc = 0x321BC4u;
label_321bc4:
    // 0x321bc4: 0x81c3c  dsll32      $v1, $t0, 16
    ctx->pc = 0x321bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 16));
    // 0x321bc8: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x321bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x321bcc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x321bccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x321bd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x321bd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x321bd4: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x321bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x321bd8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x321bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x321bdc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x321bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x321be0: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x321be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x321be4: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x321be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x321be8: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x321be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x321bec: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x321becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x321bf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x321bf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x321bf4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x321bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x321bf8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x321bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x321bfc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x321bfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x321c00: 0xa0a30021  sb          $v1, 0x21($a1)
    ctx->pc = 0x321c00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x321c04: 0xa4a20042  sh          $v0, 0x42($a1)
    ctx->pc = 0x321c04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x321c08: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x321c08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
label_321c0c:
    // 0x321c0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x321c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_321c10:
    // 0x321c10: 0x3e00008  jr          $ra
    ctx->pc = 0x321C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321C18u;
    // 0x321c18: 0x0  nop
    ctx->pc = 0x321c18u;
    // NOP
    // 0x321c1c: 0x0  nop
    ctx->pc = 0x321c1cu;
    // NOP
    if (ctx->pc == 0x321c1cu) { ctx->pc = 0x321c20u; }
}
