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

// Function: sub_0011F028
// Address: 0x11f028 - 0x11f208
void sub_0011F028_0x11f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F028_0x11f028");
#endif

    switch (ctx->pc) {
        case 0x11f08cu: goto label_11f08c;
        case 0x11f0b0u: goto label_11f0b0;
        case 0x11f0e0u: goto label_11f0e0;
        case 0x11f0f4u: goto label_11f0f4;
        case 0x11f124u: goto label_11f124;
        case 0x11f134u: goto label_11f134;
        case 0x11f1acu: goto label_11f1ac;
        case 0x11f1c0u: goto label_11f1c0;
        case 0x11f1dcu: goto label_11f1dc;
        default: break;
    }

    ctx->pc = 0x11f028u;

    // 0x11f028: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11f028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11f02c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f030: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11f034: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11f038: 0x2457de00  addiu       $s7, $v0, -0x2200
    ctx->pc = 0x11f038u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11f03c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11f040: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11f040u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f044: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11f048: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11f048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f04c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11f050: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x11f050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f054: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11f058: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x11f058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f05c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f060: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x11f060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f064: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11f068: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11f068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11f06c: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x11f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x11f070: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F070u;
    {
        const bool branch_taken_0x11f070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F070u;
        // 0x11f074: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f070) {
            ctx->pc = 0x11F080u;
            goto label_11f080;
        }
    }
    ctx->pc = 0x11F078u;
    // 0x11f078: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x11F078u;
    {
        const bool branch_taken_0x11f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F078u;
        // 0x11f07c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f078) {
            ctx->pc = 0x11F148u;
            goto label_11f148;
        }
    }
    ctx->pc = 0x11F080u;
label_11f080:
    // 0x11f080: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x11f080u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x11f084: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11F084u;
    SET_GPR_U32(ctx, 31, 0x11F08Cu);
    ctx->pc = 0x11F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F084u;
    // 0x11f088: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11F084u, 0x11F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F08Cu;
label_11f08c:
    // 0x11f08c: 0x440002e  bltz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x11F08Cu;
    {
        const bool branch_taken_0x11f08c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F08Cu;
        // 0x11f090: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f08c) {
            ctx->pc = 0x11F148u;
            goto label_11f148;
        }
    }
    ctx->pc = 0x11F094u;
    // 0x11f094: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F094u;
    {
        const bool branch_taken_0x11f094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f094) {
            ctx->pc = 0x11F0A8u;
            goto label_11f0a8;
        }
    }
    ctx->pc = 0x11F09Cu;
    // 0x11f09c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x11f09cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11f0a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F0A0u;
    {
        const bool branch_taken_0x11f0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0A0u;
        // 0x11f0a4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0a0) {
            ctx->pc = 0x11F0B8u;
            goto label_11f0b8;
        }
    }
    ctx->pc = 0x11F0A8u;
label_11f0a8:
    // 0x11f0a8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F0A8u;
    SET_GPR_U32(ctx, 31, 0x11F0B0u);
    ctx->pc = 0x11F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F0A8u;
    // 0x11f0ac: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F0A8u, 0x11F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0B0u;
label_11f0b0:
    // 0x11f0b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x11F0B0u;
    {
        const bool branch_taken_0x11f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0B0u;
        // 0x11f0b4: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0b0) {
            ctx->pc = 0x11F148u;
            goto label_11f148;
        }
    }
    ctx->pc = 0x11F0B8u;
label_11f0b8:
    // 0x11f0b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0bc: 0x2450deb0  addiu       $s0, $v0, -0x2150
    ctx->pc = 0x11f0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x11f0c0: 0xac56deb0  sw          $s6, -0x2150($v0)
    ctx->pc = 0x11f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958768), GPR_U32(ctx, 22));
    // 0x11f0c4: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x11f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x11f0c8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x11f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x11f0cc: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x11f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x11f0d0: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x11f0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11f0d4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x11f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x11f0d8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x11F0D8u;
    SET_GPR_U32(ctx, 31, 0x11F0E0u);
    ctx->pc = 0x11F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F0D8u;
    // 0x11f0dc: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x11F0D8u, 0x11F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0E0u;
label_11f0e0:
    // 0x11f0e0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F0E0u;
    {
        const bool branch_taken_0x11f0e0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0E0u;
        // 0x11f0e4: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0e0) {
            ctx->pc = 0x11F0F4u;
            goto label_11f0f4;
        }
    }
    ctx->pc = 0x11F0E8u;
    // 0x11f0e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11f0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0ec: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11F0ECu;
    SET_GPR_U32(ctx, 31, 0x11F0F4u);
    ctx->pc = 0x11F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F0ECu;
    // 0x11f0f0: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11F0ECu, 0x11F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0F4u;
label_11f0f4:
    // 0x11f0f4: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11f0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11f0f8: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11f0f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11f0fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11f0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f100: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11f100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f104: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11f104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11f108: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11f108u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11f10c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11f110: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x11f110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x11f114: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f118: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x11f118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x11f11c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11F11Cu;
    SET_GPR_U32(ctx, 31, 0x11F124u);
    ctx->pc = 0x11F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F11Cu;
    // 0x11f120: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11F11Cu, 0x11F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F124u;
label_11f124:
    // 0x11f124: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F124u;
    {
        const bool branch_taken_0x11f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F124u;
        // 0x11f128: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f124) {
            ctx->pc = 0x11F13Cu;
            goto label_11f13c;
        }
    }
    ctx->pc = 0x11F12Cu;
    // 0x11f12c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F12Cu;
    SET_GPR_U32(ctx, 31, 0x11F134u);
    ctx->pc = 0x11F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F12Cu;
    // 0x11f130: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F12Cu, 0x11F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F134u;
label_11f134:
    // 0x11f134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F134u;
    {
        const bool branch_taken_0x11f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F134u;
        // 0x11f138: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f134) {
            ctx->pc = 0x11F148u;
            goto label_11f148;
        }
    }
    ctx->pc = 0x11F13Cu;
label_11f13c:
    // 0x11f13c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11f140: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11f140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11f144: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f148:
    // 0x11f148: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11f148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f14c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11f14cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f150: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11f150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f154: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11f154u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f158: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11f158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f15c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11f15cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f160: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f164: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f168: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f16c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F16Cu;
        // 0x11f170: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F174u;
    // 0x11f174: 0x0  nop
    ctx->pc = 0x11f174u;
    // NOP
    // 0x11f178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f17c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11f17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f180: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f188: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11f188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f18c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11F18Cu;
    {
        const bool branch_taken_0x11f18c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F18Cu;
        // 0x11f190: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f18c) {
            ctx->pc = 0x11F1E4u;
            goto label_11f1e4;
        }
    }
    ctx->pc = 0x11F194u;
    // 0x11f194: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x11f194u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x11f198: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11f198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11f19c: 0x2643e3c0  addiu       $v1, $s2, -0x1C40
    ctx->pc = 0x11f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960064));
    // 0x11f1a0: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x11f1a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11f1a4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x11F1A4u;
    SET_GPR_U32(ctx, 31, 0x11F1ACu);
    ctx->pc = 0x11F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1A4u;
    // 0x11f1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x11F1A4u, 0x11F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1ACu;
label_11f1ac:
    // 0x11f1ac: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x11f1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11f1b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F1B0u;
    {
        const bool branch_taken_0x11f1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1b0) {
            ctx->pc = 0x11F1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F1B0u;
            // 0x11f1b4: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F1C4u;
            goto label_11f1c4;
        }
    }
    ctx->pc = 0x11F1B8u;
    // 0x11f1b8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x11F1B8u;
    SET_GPR_U32(ctx, 31, 0x11F1C0u);
    ctx->pc = 0x11F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1B8u;
    // 0x11f1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x11F1B8u, 0x11F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1C0u;
label_11f1c0:
    // 0x11f1c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11f1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f1c4:
    // 0x11f1c4: 0x2642e3c0  addiu       $v0, $s2, -0x1C40
    ctx->pc = 0x11f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960064));
    // 0x11f1c8: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x11f1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x11f1cc: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x11f1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11f1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1d4: 0xc049c48  jal         func_127120
    ctx->pc = 0x11F1D4u;
    SET_GPR_U32(ctx, 31, 0x11F1DCu);
    ctx->pc = 0x11F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1D4u;
    // 0x11f1d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x11F1D4u, 0x11F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1DCu;
label_11f1dc:
    // 0x11f1dc: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x11f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11f1e0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x11f1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_11f1e4:
    // 0x11f1e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11f1e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f1ec: 0x8c44b9e0  lw          $a0, -0x4620($v0)
    ctx->pc = 0x11f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949344)));
    // 0x11f1f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11f1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f1f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11f1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f1fc: 0x8043324  j           func_10CC90
    ctx->pc = 0x11F1FCu;
    ctx->pc = 0x11F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1FCu;
    // 0x11f200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime); return;
    ctx->pc = 0x11F204u;
    // 0x11f204: 0x0  nop
    ctx->pc = 0x11f204u;
    // NOP
    if (ctx->pc == 0x11f204u) { ctx->pc = 0x11f208u; }
}
