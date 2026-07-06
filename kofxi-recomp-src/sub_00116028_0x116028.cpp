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

// Function: sub_00116028
// Address: 0x116028 - 0x116348
void sub_00116028_0x116028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116028_0x116028");
#endif

    switch (ctx->pc) {
        case 0x116058u: goto label_116058;
        case 0x116068u: goto label_116068;
        case 0x116094u: goto label_116094;
        case 0x1160a8u: goto label_1160a8;
        case 0x1160d8u: goto label_1160d8;
        case 0x116140u: goto label_116140;
        case 0x11616cu: goto label_11616c;
        case 0x1161a0u: goto label_1161a0;
        case 0x1161f0u: goto label_1161f0;
        case 0x11628cu: goto label_11628c;
        case 0x116314u: goto label_116314;
        default: break;
    }

    ctx->pc = 0x116028u;

label_116028:
    // 0x116028: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x116028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11602c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x116030: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x116030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x116034: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x116034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116038: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x116038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11603c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x11603cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116040: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116044: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x116044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116048: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x116048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11604c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11604cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116050: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x116050u;
    SET_GPR_U32(ctx, 31, 0x116058u);
    ctx->pc = 0x116054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116050u;
    // 0x116054: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x116050u, 0x116058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116058u;
label_116058:
    // 0x116058: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x116058u;
    {
        const bool branch_taken_0x116058 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116058u;
        // 0x11605c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116058) {
            ctx->pc = 0x11610Cu;
            goto label_11610c;
        }
    }
    ctx->pc = 0x116060u;
    // 0x116060: 0xc0455ba  jal         func_1156E8
    ctx->pc = 0x116060u;
    SET_GPR_U32(ctx, 31, 0x116068u);
    ctx->pc = 0x1156E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156E8u, 0x116060u, 0x116068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116068u;
label_116068:
    // 0x116068: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x116068u;
    {
        const bool branch_taken_0x116068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116068) {
            ctx->pc = 0x11606Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116068u;
            // 0x11606c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11607Cu;
            goto label_11607c;
        }
    }
    ctx->pc = 0x116070u;
    // 0x116070: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116074: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x116074u;
    {
        const bool branch_taken_0x116074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116074u;
        // 0x116078: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116074) {
            ctx->pc = 0x11610Cu;
            goto label_11610c;
        }
    }
    ctx->pc = 0x11607Cu;
label_11607c:
    // 0x11607c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11607cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116080: 0x24519c48  addiu       $s1, $v0, -0x63B8
    ctx->pc = 0x116080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941768));
    // 0x116084: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x116084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x116088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11608c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x11608Cu;
    SET_GPR_U32(ctx, 31, 0x116094u);
    ctx->pc = 0x116090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11608Cu;
    // 0x116090: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x11608Cu, 0x116094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116094u;
label_116094:
    // 0x116094: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116098: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x116098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x11609c: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x11609cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1160a0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x1160A0u;
    SET_GPR_U32(ctx, 31, 0x1160A8u);
    ctx->pc = 0x1160A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160A0u;
    // 0x1160a4: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x1160A0u, 0x1160A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160A8u;
label_1160a8:
    // 0x1160a8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1160a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1160ac: 0xa20001ff  sb          $zero, 0x1FF($s0)
    ctx->pc = 0x1160acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
    // 0x1160b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1160b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160b4: 0x24849e40  addiu       $a0, $a0, -0x61C0
    ctx->pc = 0x1160b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942272));
    // 0x1160b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1160b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1160bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1160bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1160c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160c4: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1160c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1160c8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1160c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160cc: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1160ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1160d0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1160D0u;
    SET_GPR_U32(ctx, 31, 0x1160D8u);
    ctx->pc = 0x1160D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160D0u;
    // 0x1160d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x1160D0u, 0x1160D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160D8u;
label_1160d8:
    // 0x1160d8: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1160D8u;
    {
        const bool branch_taken_0x1160d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1160d8) {
            ctx->pc = 0x1160DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1160D8u;
            // 0x1160dc: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1160ECu;
            goto label_1160ec;
        }
    }
    ctx->pc = 0x1160E0u;
    // 0x1160e0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1160e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1160e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1160E4u;
    {
        const bool branch_taken_0x1160e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160E4u;
        // 0x1160e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160e4) {
            ctx->pc = 0x11610Cu;
            goto label_11610c;
        }
    }
    ctx->pc = 0x1160ECu;
label_1160ec:
    // 0x1160ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1160ECu;
    {
        const bool branch_taken_0x1160ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1160ec) {
            ctx->pc = 0x1160F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1160ECu;
            // 0x1160f0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116100u;
            goto label_116100;
        }
    }
    ctx->pc = 0x1160F4u;
    // 0x1160f4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1160f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1160f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1160F8u;
    {
        const bool branch_taken_0x1160f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160F8u;
        // 0x1160fc: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160f8) {
            ctx->pc = 0x11610Cu;
            goto label_11610c;
        }
    }
    ctx->pc = 0x116100u;
label_116100:
    // 0x116100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116104: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x116104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x116108: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x116108u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_11610c:
    // 0x11610c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11610cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116110: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x116110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116114: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x116114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116118: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x116118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11611c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11611cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116120: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116124: 0x3e00008  jr          $ra
    ctx->pc = 0x116124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116124u;
        // 0x116128: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11612Cu;
    // 0x11612c: 0x0  nop
    ctx->pc = 0x11612cu;
    // NOP
    // 0x116130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116138: 0xc04580a  jal         func_116028
    ctx->pc = 0x116138u;
    SET_GPR_U32(ctx, 31, 0x116140u);
    ctx->pc = 0x11613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116138u;
    // 0x11613c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116028u;
    goto label_116028;
    ctx->pc = 0x116140u;
label_116140:
    // 0x116140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116144: 0x3e00008  jr          $ra
    ctx->pc = 0x116144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116144u;
        // 0x116148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11614Cu;
    // 0x11614c: 0x0  nop
    ctx->pc = 0x11614cu;
    // NOP
    // 0x116150: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x116150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116158: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x11615c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116160: 0x24a5aa78  addiu       $a1, $a1, -0x5588
    ctx->pc = 0x116160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945400));
    // 0x116164: 0xc04580a  jal         func_116028
    ctx->pc = 0x116164u;
    SET_GPR_U32(ctx, 31, 0x11616Cu);
    ctx->pc = 0x116168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116164u;
    // 0x116168: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116028u;
    goto label_116028;
    ctx->pc = 0x11616Cu;
label_11616c:
    // 0x11616c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11616cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116170: 0x3e00008  jr          $ra
    ctx->pc = 0x116170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116170u;
        // 0x116174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116178u;
    // 0x116178: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x116178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11617c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x116180: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x116180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x116184: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x116184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116188: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11618c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11618cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116190: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x116190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x116194: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x116194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116198: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x116198u;
    SET_GPR_U32(ctx, 31, 0x1161A0u);
    ctx->pc = 0x11619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116198u;
    // 0x11619c: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x116198u, 0x1161A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161A0u;
label_1161a0:
    // 0x1161a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1161A0u;
    {
        const bool branch_taken_0x1161a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1161A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161A0u;
        // 0x1161a4: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161a0) {
            ctx->pc = 0x1161B0u;
            goto label_1161b0;
        }
    }
    ctx->pc = 0x1161A8u;
    // 0x1161a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1161A8u;
    {
        const bool branch_taken_0x1161a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161A8u;
        // 0x1161ac: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161a8) {
            ctx->pc = 0x116248u;
            goto label_116248;
        }
    }
    ctx->pc = 0x1161B0u;
label_1161b0:
    // 0x1161b0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1161B0u;
    {
        const bool branch_taken_0x1161b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161B0u;
        // 0x1161b4: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161b0) {
            ctx->pc = 0x116234u;
            goto label_116234;
        }
    }
    ctx->pc = 0x1161B8u;
    // 0x1161b8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1161b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1161bc: 0x26229c40  addiu       $v0, $s1, -0x63C0
    ctx->pc = 0x1161bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941760));
    // 0x1161c0: 0xae339c40  sw          $s3, -0x63C0($s1)
    ctx->pc = 0x1161c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941760), GPR_U32(ctx, 19));
    // 0x1161c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1161c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161c8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1161c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1161cc: 0x24849e40  addiu       $a0, $a0, -0x61C0
    ctx->pc = 0x1161ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942272));
    // 0x1161d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1161d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1161d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1161d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1161d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1161d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161dc: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1161dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1161e0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1161e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161e4: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1161e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1161e8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1161E8u;
    SET_GPR_U32(ctx, 31, 0x1161F0u);
    ctx->pc = 0x1161ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161E8u;
    // 0x1161ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x1161E8u, 0x1161F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161F0u;
label_1161f0:
    // 0x1161f0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1161F0u;
    {
        const bool branch_taken_0x1161f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1161f0) {
            ctx->pc = 0x116204u;
            goto label_116204;
        }
    }
    ctx->pc = 0x1161F8u;
    // 0x1161f8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1161f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1161fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1161FCu;
    {
        const bool branch_taken_0x1161fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161FCu;
        // 0x116200: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161fc) {
            ctx->pc = 0x116248u;
            goto label_116248;
        }
    }
    ctx->pc = 0x116204u;
label_116204:
    // 0x116204: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116204u;
    {
        const bool branch_taken_0x116204 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x116208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116204u;
        // 0x116208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116204) {
            ctx->pc = 0x116218u;
            goto label_116218;
        }
    }
    ctx->pc = 0x11620Cu;
    // 0x11620c: 0x92229c40  lbu         $v0, -0x63C0($s1)
    ctx->pc = 0x11620cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294941760)));
    // 0x116210: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116210u;
    {
        const bool branch_taken_0x116210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116210u;
        // 0x116214: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116210) {
            ctx->pc = 0x116244u;
            goto label_116244;
        }
    }
    ctx->pc = 0x116218u;
label_116218:
    // 0x116218: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116218u;
    {
        const bool branch_taken_0x116218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116218u;
        // 0x11621c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116218) {
            ctx->pc = 0x11622Cu;
            goto label_11622c;
        }
    }
    ctx->pc = 0x116220u;
    // 0x116220: 0x96229c40  lhu         $v0, -0x63C0($s1)
    ctx->pc = 0x116220u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294941760)));
    // 0x116224: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x116224u;
    {
        const bool branch_taken_0x116224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116224u;
        // 0x116228: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116224) {
            ctx->pc = 0x116244u;
            goto label_116244;
        }
    }
    ctx->pc = 0x11622Cu;
label_11622c:
    // 0x11622c: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11622Cu;
    {
        const bool branch_taken_0x11622c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11622c) {
            ctx->pc = 0x116230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11622Cu;
            // 0x116230: 0x8e229c40  lw          $v0, -0x63C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116240u;
            goto label_116240;
        }
    }
    ctx->pc = 0x116234u;
label_116234:
    // 0x116234: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116238: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116238u;
    {
        const bool branch_taken_0x116238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116238u;
        // 0x11623c: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116238) {
            ctx->pc = 0x116248u;
            goto label_116248;
        }
    }
    ctx->pc = 0x116240u;
label_116240:
    // 0x116240: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x116240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_116244:
    // 0x116244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116248:
    // 0x116248: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x116248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11624c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11624cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116250: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x116250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116254: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x116254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116258: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11625c: 0x3e00008  jr          $ra
    ctx->pc = 0x11625Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11625Cu;
        // 0x116260: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11625Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116264u;
    // 0x116264: 0x0  nop
    ctx->pc = 0x116264u;
    // NOP
    // 0x116268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x116268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11626c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x116270: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x116270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x116274: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x116274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116278: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11627c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11627cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116280: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x116280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x116284: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x116284u;
    SET_GPR_U32(ctx, 31, 0x11628Cu);
    ctx->pc = 0x116288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116284u;
    // 0x116288: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x116284u, 0x11628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11628Cu;
label_11628c:
    // 0x11628c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11628Cu;
    {
        const bool branch_taken_0x11628c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11628Cu;
        // 0x116290: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11628c) {
            ctx->pc = 0x11629Cu;
            goto label_11629c;
        }
    }
    ctx->pc = 0x116294u;
    // 0x116294: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x116294u;
    {
        const bool branch_taken_0x116294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116294u;
        // 0x116298: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116294) {
            ctx->pc = 0x11632Cu;
            goto label_11632c;
        }
    }
    ctx->pc = 0x11629Cu;
label_11629c:
    // 0x11629c: 0x24e39c40  addiu       $v1, $a3, -0x63C0
    ctx->pc = 0x11629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941760));
    // 0x1162a0: 0xacf29c40  sw          $s2, -0x63C0($a3)
    ctx->pc = 0x1162a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941760), GPR_U32(ctx, 18));
    // 0x1162a4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1162A4u;
    {
        const bool branch_taken_0x1162a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1162A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162A4u;
        // 0x1162a8: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162a4) {
            ctx->pc = 0x1162B8u;
            goto label_1162b8;
        }
    }
    ctx->pc = 0x1162ACu;
    // 0x1162ac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1162acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1162b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1162B0u;
    {
        const bool branch_taken_0x1162b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162B0u;
        // 0x1162b4: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162b0) {
            ctx->pc = 0x1162E8u;
            goto label_1162e8;
        }
    }
    ctx->pc = 0x1162B8u;
label_1162b8:
    // 0x1162b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1162b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1162bc: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1162BCu;
    {
        const bool branch_taken_0x1162bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1162C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162BCu;
        // 0x1162c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162bc) {
            ctx->pc = 0x1162D0u;
            goto label_1162d0;
        }
    }
    ctx->pc = 0x1162C4u;
    // 0x1162c4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1162c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1162c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1162C8u;
    {
        const bool branch_taken_0x1162c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162C8u;
        // 0x1162cc: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162c8) {
            ctx->pc = 0x1162E8u;
            goto label_1162e8;
        }
    }
    ctx->pc = 0x1162D0u;
label_1162d0:
    // 0x1162d0: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1162D0u;
    {
        const bool branch_taken_0x1162d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1162d0) {
            ctx->pc = 0x1162D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1162D0u;
            // 0x1162d4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1162E4u;
            goto label_1162e4;
        }
    }
    ctx->pc = 0x1162D8u;
    // 0x1162d8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1162d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1162dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1162DCu;
    {
        const bool branch_taken_0x1162dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162DCu;
        // 0x1162e0: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162dc) {
            ctx->pc = 0x11632Cu;
            goto label_11632c;
        }
    }
    ctx->pc = 0x1162E4u;
label_1162e4:
    // 0x1162e4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1162e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1162e8:
    // 0x1162e8: 0x24e79c40  addiu       $a3, $a3, -0x63C0
    ctx->pc = 0x1162e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941760));
    // 0x1162ec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1162ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1162f0: 0x24849e40  addiu       $a0, $a0, -0x61C0
    ctx->pc = 0x1162f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942272));
    // 0x1162f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1162f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1162f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1162f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1162fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1162fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116300: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x116300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x116304: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x116304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116308: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x116308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11630c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11630Cu;
    SET_GPR_U32(ctx, 31, 0x116314u);
    ctx->pc = 0x116310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11630Cu;
    // 0x116310: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11630Cu, 0x116314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116314u;
label_116314:
    // 0x116314: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x116314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x116318: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x116318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11631c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11631cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x116320: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x116320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x116324: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x116324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116328: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x116328u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_11632c:
    // 0x11632c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11632cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116330: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x116330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116334: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x116334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11633c: 0x3e00008  jr          $ra
    ctx->pc = 0x11633Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11633Cu;
        // 0x116340: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11633Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116344u;
    // 0x116344: 0x0  nop
    ctx->pc = 0x116344u;
    // NOP
}
